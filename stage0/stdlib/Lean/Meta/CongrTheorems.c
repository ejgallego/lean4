// Lean compiler output
// Module: Lean.Meta.CongrTheorems
// Imports: public import Lean.AddDecl public import Lean.ReservedNameAction import Lean.Structure import Lean.Meta.Tactic.Subst import Lean.Meta.FunInfo
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
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_LocalContext_getFVar_x21(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
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
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isSubobjectField_x3f(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedParamInfo_default;
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* lean_expr_instantiate(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqNDRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FunInfo_getArity(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setBinderInfo(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_FVarSubst_find_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_substCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_mkEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_appendBefore(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
uint8_t l_String_Slice_isNat(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x21(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
lean_object* l_Lean_executeReservedNameAction(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_registerReservedNameAction(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixedNoParam_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixedNoParam_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixedNoParam_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixedNoParam_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_eq_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_eq_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_eq_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_eq_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_cast_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_cast_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_cast_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_cast_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_heq_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_heq_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_heq_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_heq_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_subsingletonInst_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_subsingletonInst_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_subsingletonInst_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_subsingletonInst_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_instInhabitedCongrArgKind_default;
LEAN_EXPORT uint8_t l_Lean_Meta_instInhabitedCongrArgKind;
static const lean_string_object l_Lean_Meta_instReprCongrArgKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Meta.CongrArgKind.fixed"};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__0 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprCongrArgKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__1 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_instReprCongrArgKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.CongrArgKind.fixedNoParam"};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__2 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprCongrArgKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__3 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_instReprCongrArgKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.CongrArgKind.eq"};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__4 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_instReprCongrArgKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__5 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__5_value;
static const lean_string_object l_Lean_Meta_instReprCongrArgKind_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.CongrArgKind.cast"};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__6 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__6_value;
static const lean_ctor_object l_Lean_Meta_instReprCongrArgKind_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__6_value)}};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__7 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__7_value;
static const lean_string_object l_Lean_Meta_instReprCongrArgKind_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.CongrArgKind.heq"};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__8 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__8_value;
static const lean_ctor_object l_Lean_Meta_instReprCongrArgKind_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__8_value)}};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__9 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__9_value;
static const lean_string_object l_Lean_Meta_instReprCongrArgKind_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Meta.CongrArgKind.subsingletonInst"};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__10 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__10_value;
static const lean_ctor_object l_Lean_Meta_instReprCongrArgKind_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__10_value)}};
static const lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__11 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind_repr___closed__11_value;
static lean_once_cell_t l_Lean_Meta_instReprCongrArgKind_repr___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__12;
static lean_once_cell_t l_Lean_Meta_instReprCongrArgKind_repr___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprCongrArgKind_repr___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprCongrArgKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprCongrArgKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprCongrArgKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprCongrArgKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprCongrArgKind___closed__0 = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprCongrArgKind = (const lean_object*)&l_Lean_Meta_instReprCongrArgKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqCongrArgKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqCongrArgKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instBEqCongrArgKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqCongrArgKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instBEqCongrArgKind___closed__0 = (const lean_object*)&l_Lean_Meta_instBEqCongrArgKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instBEqCongrArgKind = (const lean_object*)&l_Lean_Meta_instBEqCongrArgKind___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 154, 90, 102, 217, 192, 49, 255)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__0 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__1 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__1_value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__2 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__3 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__4 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkHCongrWithArity___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "failed to generate `hcongr` theorem: expected "};
static const lean_object* l_Lean_Meta_mkHCongrWithArity___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_mkHCongrWithArity___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkHCongrWithArity___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkHCongrWithArity___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_mkHCongrWithArity___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = " arguments, but got "};
static const lean_object* l_Lean_Meta_mkHCongrWithArity___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_mkHCongrWithArity___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkHCongrWithArity___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkHCongrWithArity___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_mkHCongrWithArity___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " for"};
static const lean_object* l_Lean_Meta_mkHCongrWithArity___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_mkHCongrWithArity___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_mkHCongrWithArity___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkHCongrWithArity___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_getCongrSimpKinds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_getCongrSimpKinds___closed__0 = (const lean_object*)&l_Lean_Meta_getCongrSimpKinds___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_getCongrSimpKinds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCongrSimpKinds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCongrSimpKindsForArgZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCongrSimpKindsForArgZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_hyp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_hyp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_decSubsingleton_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_decSubsingleton_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getFVarId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getFVarId___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Subsingleton"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 130, 42, 228, 248, 162, 23, 186)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(79, 85, 152, 16, 239, 41, 62, 212)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__2_value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "_private.Lean.Meta.CongrTheorems.0.Lean.Meta.mkCongrSimpCore\?.mkProof.go"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.CongrTheorems"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "_private.Lean.Meta.CongrTheorems.0.Lean.Meta.mkCongrSimpCore\?.mk\?.go"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "e_"};
static const lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkCongrSimpCore_x3f_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkCongrSimpCore_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpCore_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimp_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_hcongrThmSuffixBase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hcongr"};
static const lean_object* l_Lean_Meta_hcongrThmSuffixBase___closed__0 = (const lean_object*)&l_Lean_Meta_hcongrThmSuffixBase___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_hcongrThmSuffixBase = (const lean_object*)&l_Lean_Meta_hcongrThmSuffixBase___closed__0_value;
static const lean_string_object l_Lean_Meta_hcongrThmSuffixBasePrefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "hcongr_"};
static const lean_object* l_Lean_Meta_hcongrThmSuffixBasePrefix___closed__0 = (const lean_object*)&l_Lean_Meta_hcongrThmSuffixBasePrefix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_hcongrThmSuffixBasePrefix = (const lean_object*)&l_Lean_Meta_hcongrThmSuffixBasePrefix___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_isHCongrReservedNameSuffix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isHCongrReservedNameSuffix___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_congrSimpSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "congr_simp"};
static const lean_object* l_Lean_Meta_congrSimpSuffix___closed__0 = (const lean_object*)&l_Lean_Meta_congrSimpSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_congrSimpSuffix = (const lean_object*)&l_Lean_Meta_congrSimpSuffix___closed__0_value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "congr"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "thm"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(56, 82, 209, 127, 228, 246, 91, 162)}};
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(207, 141, 208, 58, 7, 230, 107, 112)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "CongrTheorems"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(95, 224, 213, 6, 189, 51, 239, 200)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(146, 140, 44, 156, 105, 54, 226, 29)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 41, 252, 212, 29, 253, 12, 67)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(27, 81, 65, 75, 45, 89, 43, 189)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(106, 167, 132, 254, 103, 165, 136, 43)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(67, 26, 60, 185, 66, 206, 188, 95)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(14, 26, 15, 119, 133, 253, 114, 42)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 116, 182, 41, 116, 135, 13, 170)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(243, 27, 116, 143, 64, 80, 226, 54)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "congrKindsExt"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(239, 7, 195, 199, 246, 152, 65, 143)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_congrKindsExt;
LEAN_EXPORT uint8_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "declared `"};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
static const lean_array_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkHCongrWithArityForConst_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkHCongrWithArityForConst_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.mkHCongrWithArityForConst\?"};
static const lean_object* l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArityForConst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArityForConst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_mkCongrSimpForConst_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_mkCongrSimpForConst_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.mkCongrSimpForConst\?"};
static const lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkCongrSimpForConst_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "failed to generate `"};
static const lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_mkCongrSimpForConst_x3f___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkCongrSimpForConst_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___closed__1;
static const lean_string_object l_Lean_Meta_mkCongrSimpForConst_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "` "};
static const lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_mkCongrSimpForConst_x3f___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkCongrSimpForConst_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lean_Meta_CongrArgKind_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Meta_CongrArgKind_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lean_Meta_CongrArgKind_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixed_elim___redArg(lean_object* v_fixed_22_){
_start:
{
lean_inc(v_fixed_22_);
return v_fixed_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixed_elim___redArg___boxed(lean_object* v_fixed_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Meta_CongrArgKind_fixed_elim___redArg(v_fixed_23_);
lean_dec(v_fixed_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixed_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_fixed_28_){
_start:
{
lean_inc(v_fixed_28_);
return v_fixed_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixed_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_fixed_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lean_Meta_CongrArgKind_fixed_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_fixed_32_);
lean_dec(v_fixed_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixedNoParam_elim___redArg(lean_object* v_fixedNoParam_35_){
_start:
{
lean_inc(v_fixedNoParam_35_);
return v_fixedNoParam_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixedNoParam_elim___redArg___boxed(lean_object* v_fixedNoParam_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Meta_CongrArgKind_fixedNoParam_elim___redArg(v_fixedNoParam_36_);
lean_dec(v_fixedNoParam_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixedNoParam_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_fixedNoParam_41_){
_start:
{
lean_inc(v_fixedNoParam_41_);
return v_fixedNoParam_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_fixedNoParam_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_fixedNoParam_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lean_Meta_CongrArgKind_fixedNoParam_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_fixedNoParam_45_);
lean_dec(v_fixedNoParam_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_eq_elim___redArg(lean_object* v_eq_48_){
_start:
{
lean_inc(v_eq_48_);
return v_eq_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_eq_elim___redArg___boxed(lean_object* v_eq_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Meta_CongrArgKind_eq_elim___redArg(v_eq_49_);
lean_dec(v_eq_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_eq_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_eq_54_){
_start:
{
lean_inc(v_eq_54_);
return v_eq_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_eq_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_eq_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lean_Meta_CongrArgKind_eq_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_eq_58_);
lean_dec(v_eq_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_cast_elim___redArg(lean_object* v_cast_61_){
_start:
{
lean_inc(v_cast_61_);
return v_cast_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_cast_elim___redArg___boxed(lean_object* v_cast_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_Meta_CongrArgKind_cast_elim___redArg(v_cast_62_);
lean_dec(v_cast_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_cast_elim(lean_object* v_motive_64_, uint8_t v_t_65_, lean_object* v_h_66_, lean_object* v_cast_67_){
_start:
{
lean_inc(v_cast_67_);
return v_cast_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_cast_elim___boxed(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_cast_71_){
_start:
{
uint8_t v_t_boxed_72_; lean_object* v_res_73_; 
v_t_boxed_72_ = lean_unbox(v_t_69_);
v_res_73_ = l_Lean_Meta_CongrArgKind_cast_elim(v_motive_68_, v_t_boxed_72_, v_h_70_, v_cast_71_);
lean_dec(v_cast_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_heq_elim___redArg(lean_object* v_heq_74_){
_start:
{
lean_inc(v_heq_74_);
return v_heq_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_heq_elim___redArg___boxed(lean_object* v_heq_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lean_Meta_CongrArgKind_heq_elim___redArg(v_heq_75_);
lean_dec(v_heq_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_heq_elim(lean_object* v_motive_77_, uint8_t v_t_78_, lean_object* v_h_79_, lean_object* v_heq_80_){
_start:
{
lean_inc(v_heq_80_);
return v_heq_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_heq_elim___boxed(lean_object* v_motive_81_, lean_object* v_t_82_, lean_object* v_h_83_, lean_object* v_heq_84_){
_start:
{
uint8_t v_t_boxed_85_; lean_object* v_res_86_; 
v_t_boxed_85_ = lean_unbox(v_t_82_);
v_res_86_ = l_Lean_Meta_CongrArgKind_heq_elim(v_motive_81_, v_t_boxed_85_, v_h_83_, v_heq_84_);
lean_dec(v_heq_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_subsingletonInst_elim___redArg(lean_object* v_subsingletonInst_87_){
_start:
{
lean_inc(v_subsingletonInst_87_);
return v_subsingletonInst_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_subsingletonInst_elim___redArg___boxed(lean_object* v_subsingletonInst_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_Meta_CongrArgKind_subsingletonInst_elim___redArg(v_subsingletonInst_88_);
lean_dec(v_subsingletonInst_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_subsingletonInst_elim(lean_object* v_motive_90_, uint8_t v_t_91_, lean_object* v_h_92_, lean_object* v_subsingletonInst_93_){
_start:
{
lean_inc(v_subsingletonInst_93_);
return v_subsingletonInst_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CongrArgKind_subsingletonInst_elim___boxed(lean_object* v_motive_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_subsingletonInst_97_){
_start:
{
uint8_t v_t_boxed_98_; lean_object* v_res_99_; 
v_t_boxed_98_ = lean_unbox(v_t_95_);
v_res_99_ = l_Lean_Meta_CongrArgKind_subsingletonInst_elim(v_motive_94_, v_t_boxed_98_, v_h_96_, v_subsingletonInst_97_);
lean_dec(v_subsingletonInst_97_);
return v_res_99_;
}
}
static uint8_t _init_l_Lean_Meta_instInhabitedCongrArgKind_default(void){
_start:
{
uint8_t v___x_100_; 
v___x_100_ = 0;
return v___x_100_;
}
}
static uint8_t _init_l_Lean_Meta_instInhabitedCongrArgKind(void){
_start:
{
uint8_t v___x_101_; 
v___x_101_ = 0;
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__12(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = lean_unsigned_to_nat(2u);
v___x_121_ = lean_nat_to_int(v___x_120_);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__13(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_unsigned_to_nat(1u);
v___x_123_ = lean_nat_to_int(v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprCongrArgKind_repr(uint8_t v_x_124_, lean_object* v_prec_125_){
_start:
{
lean_object* v___y_127_; lean_object* v___y_134_; lean_object* v___y_141_; lean_object* v___y_148_; lean_object* v___y_155_; lean_object* v___y_162_; 
switch(v_x_124_)
{
case 0:
{
lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_168_ = lean_unsigned_to_nat(1024u);
v___x_169_ = lean_nat_dec_le(v___x_168_, v_prec_125_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; 
v___x_170_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__12, &l_Lean_Meta_instReprCongrArgKind_repr___closed__12_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__12);
v___y_127_ = v___x_170_;
goto v___jp_126_;
}
else
{
lean_object* v___x_171_; 
v___x_171_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__13, &l_Lean_Meta_instReprCongrArgKind_repr___closed__13_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__13);
v___y_127_ = v___x_171_;
goto v___jp_126_;
}
}
case 1:
{
lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_172_ = lean_unsigned_to_nat(1024u);
v___x_173_ = lean_nat_dec_le(v___x_172_, v_prec_125_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; 
v___x_174_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__12, &l_Lean_Meta_instReprCongrArgKind_repr___closed__12_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__12);
v___y_134_ = v___x_174_;
goto v___jp_133_;
}
else
{
lean_object* v___x_175_; 
v___x_175_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__13, &l_Lean_Meta_instReprCongrArgKind_repr___closed__13_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__13);
v___y_134_ = v___x_175_;
goto v___jp_133_;
}
}
case 2:
{
lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_176_ = lean_unsigned_to_nat(1024u);
v___x_177_ = lean_nat_dec_le(v___x_176_, v_prec_125_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; 
v___x_178_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__12, &l_Lean_Meta_instReprCongrArgKind_repr___closed__12_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__12);
v___y_141_ = v___x_178_;
goto v___jp_140_;
}
else
{
lean_object* v___x_179_; 
v___x_179_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__13, &l_Lean_Meta_instReprCongrArgKind_repr___closed__13_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__13);
v___y_141_ = v___x_179_;
goto v___jp_140_;
}
}
case 3:
{
lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_180_ = lean_unsigned_to_nat(1024u);
v___x_181_ = lean_nat_dec_le(v___x_180_, v_prec_125_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; 
v___x_182_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__12, &l_Lean_Meta_instReprCongrArgKind_repr___closed__12_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__12);
v___y_148_ = v___x_182_;
goto v___jp_147_;
}
else
{
lean_object* v___x_183_; 
v___x_183_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__13, &l_Lean_Meta_instReprCongrArgKind_repr___closed__13_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__13);
v___y_148_ = v___x_183_;
goto v___jp_147_;
}
}
case 4:
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = lean_unsigned_to_nat(1024u);
v___x_185_ = lean_nat_dec_le(v___x_184_, v_prec_125_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; 
v___x_186_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__12, &l_Lean_Meta_instReprCongrArgKind_repr___closed__12_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__12);
v___y_155_ = v___x_186_;
goto v___jp_154_;
}
else
{
lean_object* v___x_187_; 
v___x_187_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__13, &l_Lean_Meta_instReprCongrArgKind_repr___closed__13_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__13);
v___y_155_ = v___x_187_;
goto v___jp_154_;
}
}
default: 
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = lean_unsigned_to_nat(1024u);
v___x_189_ = lean_nat_dec_le(v___x_188_, v_prec_125_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; 
v___x_190_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__12, &l_Lean_Meta_instReprCongrArgKind_repr___closed__12_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__12);
v___y_162_ = v___x_190_;
goto v___jp_161_;
}
else
{
lean_object* v___x_191_; 
v___x_191_ = lean_obj_once(&l_Lean_Meta_instReprCongrArgKind_repr___closed__13, &l_Lean_Meta_instReprCongrArgKind_repr___closed__13_once, _init_l_Lean_Meta_instReprCongrArgKind_repr___closed__13);
v___y_162_ = v___x_191_;
goto v___jp_161_;
}
}
}
v___jp_126_:
{
lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_128_ = ((lean_object*)(l_Lean_Meta_instReprCongrArgKind_repr___closed__1));
lean_inc(v___y_127_);
v___x_129_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_129_, 0, v___y_127_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = 0;
v___x_131_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_131_, 0, v___x_129_);
lean_ctor_set_uint8(v___x_131_, sizeof(void*)*1, v___x_130_);
v___x_132_ = l_Repr_addAppParen(v___x_131_, v_prec_125_);
return v___x_132_;
}
v___jp_133_:
{
lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_135_ = ((lean_object*)(l_Lean_Meta_instReprCongrArgKind_repr___closed__3));
lean_inc(v___y_134_);
v___x_136_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_136_, 0, v___y_134_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = 0;
v___x_138_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_138_, 0, v___x_136_);
lean_ctor_set_uint8(v___x_138_, sizeof(void*)*1, v___x_137_);
v___x_139_ = l_Repr_addAppParen(v___x_138_, v_prec_125_);
return v___x_139_;
}
v___jp_140_:
{
lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_142_ = ((lean_object*)(l_Lean_Meta_instReprCongrArgKind_repr___closed__5));
lean_inc(v___y_141_);
v___x_143_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_143_, 0, v___y_141_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
v___x_144_ = 0;
v___x_145_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_145_, 0, v___x_143_);
lean_ctor_set_uint8(v___x_145_, sizeof(void*)*1, v___x_144_);
v___x_146_ = l_Repr_addAppParen(v___x_145_, v_prec_125_);
return v___x_146_;
}
v___jp_147_:
{
lean_object* v___x_149_; lean_object* v___x_150_; uint8_t v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_149_ = ((lean_object*)(l_Lean_Meta_instReprCongrArgKind_repr___closed__7));
lean_inc(v___y_148_);
v___x_150_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_150_, 0, v___y_148_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
v___x_151_ = 0;
v___x_152_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_152_, 0, v___x_150_);
lean_ctor_set_uint8(v___x_152_, sizeof(void*)*1, v___x_151_);
v___x_153_ = l_Repr_addAppParen(v___x_152_, v_prec_125_);
return v___x_153_;
}
v___jp_154_:
{
lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_156_ = ((lean_object*)(l_Lean_Meta_instReprCongrArgKind_repr___closed__9));
lean_inc(v___y_155_);
v___x_157_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_157_, 0, v___y_155_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
v___x_158_ = 0;
v___x_159_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_159_, 0, v___x_157_);
lean_ctor_set_uint8(v___x_159_, sizeof(void*)*1, v___x_158_);
v___x_160_ = l_Repr_addAppParen(v___x_159_, v_prec_125_);
return v___x_160_;
}
v___jp_161_:
{
lean_object* v___x_163_; lean_object* v___x_164_; uint8_t v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_163_ = ((lean_object*)(l_Lean_Meta_instReprCongrArgKind_repr___closed__11));
lean_inc(v___y_162_);
v___x_164_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_164_, 0, v___y_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
v___x_165_ = 0;
v___x_166_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_166_, 0, v___x_164_);
lean_ctor_set_uint8(v___x_166_, sizeof(void*)*1, v___x_165_);
v___x_167_ = l_Repr_addAppParen(v___x_166_, v_prec_125_);
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprCongrArgKind_repr___boxed(lean_object* v_x_192_, lean_object* v_prec_193_){
_start:
{
uint8_t v_x_501__boxed_194_; lean_object* v_res_195_; 
v_x_501__boxed_194_ = lean_unbox(v_x_192_);
v_res_195_ = l_Lean_Meta_instReprCongrArgKind_repr(v_x_501__boxed_194_, v_prec_193_);
lean_dec(v_prec_193_);
return v_res_195_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqCongrArgKind_beq(uint8_t v_x_198_, uint8_t v_y_199_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_200_ = lean_box(v_x_198_);
v___x_201_ = lean_obj_tag_nat(v___x_200_);
lean_dec(v___x_200_);
v___x_202_ = lean_box(v_y_199_);
v___x_203_ = lean_obj_tag_nat(v___x_202_);
lean_dec(v___x_202_);
v___x_204_ = lean_nat_dec_eq(v___x_201_, v___x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqCongrArgKind_beq___boxed(lean_object* v_x_205_, lean_object* v_y_206_){
_start:
{
uint8_t v_x_24__boxed_207_; uint8_t v_y_25__boxed_208_; uint8_t v_res_209_; lean_object* v_r_210_; 
v_x_24__boxed_207_ = lean_unbox(v_x_205_);
v_y_25__boxed_208_ = lean_unbox(v_y_206_);
v_res_209_ = l_Lean_Meta_instBEqCongrArgKind_beq(v_x_24__boxed_207_, v_y_25__boxed_208_);
v_r_210_ = lean_box(v_res_209_);
return v_r_210_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames_spec__0(lean_object* v_as_214_, size_t v_sz_215_, size_t v_i_216_, lean_object* v_b_217_){
_start:
{
uint8_t v___x_218_; 
v___x_218_ = lean_usize_dec_lt(v_i_216_, v_sz_215_);
if (v___x_218_ == 0)
{
return v_b_217_;
}
else
{
lean_object* v_a_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; size_t v___x_226_; size_t v___x_227_; 
v_a_219_ = lean_array_uget_borrowed(v_as_214_, v_i_216_);
lean_inc_ref(v_b_217_);
v___x_220_ = l_Lean_LocalContext_getFVar_x21(v_b_217_, v_a_219_);
v___x_221_ = l_Lean_LocalDecl_fvarId(v___x_220_);
v___x_222_ = l_Lean_LocalDecl_userName(v___x_220_);
lean_dec_ref(v___x_220_);
v___x_223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames_spec__0___closed__0));
v___x_224_ = lean_name_append_after(v___x_222_, v___x_223_);
v___x_225_ = l_Lean_LocalContext_setUserName(v_b_217_, v___x_221_, v___x_224_);
v___x_226_ = ((size_t)1ULL);
v___x_227_ = lean_usize_add(v_i_216_, v___x_226_);
v_i_216_ = v___x_227_;
v_b_217_ = v___x_225_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames_spec__0___boxed(lean_object* v_as_229_, lean_object* v_sz_230_, lean_object* v_i_231_, lean_object* v_b_232_){
_start:
{
size_t v_sz_boxed_233_; size_t v_i_boxed_234_; lean_object* v_res_235_; 
v_sz_boxed_233_ = lean_unbox_usize(v_sz_230_);
lean_dec(v_sz_230_);
v_i_boxed_234_ = lean_unbox_usize(v_i_231_);
lean_dec(v_i_231_);
v_res_235_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames_spec__0(v_as_229_, v_sz_boxed_233_, v_i_boxed_234_, v_b_232_);
lean_dec_ref(v_as_229_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames(lean_object* v_ys_236_, lean_object* v_lctx_237_){
_start:
{
size_t v_sz_238_; size_t v___x_239_; lean_object* v___x_240_; 
v_sz_238_ = lean_array_size(v_ys_236_);
v___x_239_ = ((size_t)0ULL);
v___x_240_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames_spec__0(v_ys_236_, v_sz_238_, v___x_239_, v_lctx_237_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames___boxed(lean_object* v_ys_241_, lean_object* v_lctx_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames(v_ys_241_, v_lctx_242_);
lean_dec_ref(v_ys_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD_spec__0(lean_object* v_as_244_, size_t v_sz_245_, size_t v_i_246_, lean_object* v_b_247_){
_start:
{
uint8_t v___x_248_; 
v___x_248_ = lean_usize_dec_lt(v_i_246_, v_sz_245_);
if (v___x_248_ == 0)
{
return v_b_247_;
}
else
{
lean_object* v_a_249_; lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; lean_object* v___x_253_; size_t v___x_254_; size_t v___x_255_; 
v_a_249_ = lean_array_uget_borrowed(v_as_244_, v_i_246_);
lean_inc_ref(v_b_247_);
v___x_250_ = l_Lean_LocalContext_getFVar_x21(v_b_247_, v_a_249_);
v___x_251_ = l_Lean_LocalDecl_fvarId(v___x_250_);
lean_dec_ref(v___x_250_);
v___x_252_ = 0;
v___x_253_ = l_Lean_LocalContext_setBinderInfo(v_b_247_, v___x_251_, v___x_252_);
v___x_254_ = ((size_t)1ULL);
v___x_255_ = lean_usize_add(v_i_246_, v___x_254_);
v_i_246_ = v___x_255_;
v_b_247_ = v___x_253_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD_spec__0___boxed(lean_object* v_as_257_, lean_object* v_sz_258_, lean_object* v_i_259_, lean_object* v_b_260_){
_start:
{
size_t v_sz_boxed_261_; size_t v_i_boxed_262_; lean_object* v_res_263_; 
v_sz_boxed_261_ = lean_unbox_usize(v_sz_258_);
lean_dec(v_sz_258_);
v_i_boxed_262_ = lean_unbox_usize(v_i_259_);
lean_dec(v_i_259_);
v_res_263_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD_spec__0(v_as_257_, v_sz_boxed_261_, v_i_boxed_262_, v_b_260_);
lean_dec_ref(v_as_257_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD(lean_object* v_ys_264_, lean_object* v_lctx_265_){
_start:
{
size_t v_sz_266_; size_t v___x_267_; lean_object* v___x_268_; 
v_sz_266_ = lean_array_size(v_ys_264_);
v___x_267_ = ((size_t)0ULL);
v___x_268_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD_spec__0(v_ys_264_, v_sz_266_, v___x_267_, v_lctx_265_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD___boxed(lean_object* v_ys_269_, lean_object* v_lctx_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD(v_ys_269_, v_lctx_270_);
lean_dec_ref(v_ys_269_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(lean_object* v_k_272_, lean_object* v_b_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
lean_object* v___x_279_; 
lean_inc(v___y_277_);
lean_inc_ref(v___y_276_);
lean_inc(v___y_275_);
lean_inc_ref(v___y_274_);
v___x_279_ = lean_apply_6(v_k_272_, v_b_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, lean_box(0));
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_280_, lean_object* v_b_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(v_k_280_, v_b_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
lean_dec(v___y_285_);
lean_dec_ref(v___y_284_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg(lean_object* v_name_288_, uint8_t v_bi_289_, lean_object* v_type_290_, lean_object* v_k_291_, uint8_t v_kind_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v___f_298_; lean_object* v___x_299_; 
v___f_298_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_298_, 0, v_k_291_);
v___x_299_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_288_, v_bi_289_, v_type_290_, v___f_298_, v_kind_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
v_a_308_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_299_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_299_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg___boxed(lean_object* v_name_316_, lean_object* v_bi_317_, lean_object* v_type_318_, lean_object* v_k_319_, lean_object* v_kind_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_){
_start:
{
uint8_t v_bi_boxed_326_; uint8_t v_kind_boxed_327_; lean_object* v_res_328_; 
v_bi_boxed_326_ = lean_unbox(v_bi_317_);
v_kind_boxed_327_ = lean_unbox(v_kind_320_);
v_res_328_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg(v_name_316_, v_bi_boxed_326_, v_type_318_, v_k_319_, v_kind_boxed_327_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___redArg(lean_object* v_name_329_, lean_object* v_type_330_, lean_object* v_k_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
uint8_t v___x_337_; uint8_t v___x_338_; lean_object* v___x_339_; 
v___x_337_ = 0;
v___x_338_ = 0;
v___x_339_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg(v_name_329_, v___x_337_, v_type_330_, v_k_331_, v___x_338_, v___y_332_, v___y_333_, v___y_334_, v___y_335_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___redArg___boxed(lean_object* v_name_340_, lean_object* v_type_341_, lean_object* v_k_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___redArg(v_name_340_, v_type_341_, v_k_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_);
lean_dec(v___y_346_);
lean_dec_ref(v___y_345_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__0___boxed(lean_object* v_eqs_352_, lean_object* v_kinds_353_, lean_object* v_xs_354_, lean_object* v_ys_355_, lean_object* v_k_356_, lean_object* v___x_357_, lean_object* v_h_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__0(v_eqs_352_, v_kinds_353_, v_xs_354_, v_ys_355_, v_k_356_, v___x_357_, v_h_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___x_357_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__1(lean_object* v_eqs_365_, lean_object* v_kinds_366_, lean_object* v_xs_367_, lean_object* v_ys_368_, lean_object* v_k_369_, lean_object* v___x_370_, lean_object* v_h_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v___x_377_; uint8_t v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_377_ = lean_array_push(v_eqs_365_, v_h_371_);
v___x_378_ = 2;
v___x_379_ = lean_box(v___x_378_);
v___x_380_ = lean_array_push(v_kinds_366_, v___x_379_);
v___x_381_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg(v_xs_367_, v_ys_368_, v_k_369_, v___x_370_, v___x_377_, v___x_380_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__1___boxed(lean_object* v_eqs_382_, lean_object* v_kinds_383_, lean_object* v_xs_384_, lean_object* v_ys_385_, lean_object* v_k_386_, lean_object* v___x_387_, lean_object* v_h_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__1(v_eqs_382_, v_kinds_383_, v_xs_384_, v_ys_385_, v_k_386_, v___x_387_, v_h_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___x_387_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg(lean_object* v_xs_395_, lean_object* v_ys_396_, lean_object* v_k_397_, lean_object* v_i_398_, lean_object* v_eqs_399_, lean_object* v_kinds_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_){
_start:
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = lean_array_get_size(v_xs_395_);
v___x_407_ = lean_nat_dec_lt(v_i_398_, v___x_406_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; 
lean_dec_ref(v_ys_396_);
lean_dec_ref(v_xs_395_);
lean_inc(v_a_404_);
lean_inc_ref(v_a_403_);
lean_inc(v_a_402_);
lean_inc_ref(v_a_401_);
v___x_408_ = lean_apply_7(v_k_397_, v_eqs_399_, v_kinds_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, lean_box(0));
return v___x_408_;
}
else
{
lean_object* v___x_409_; lean_object* v_x_410_; lean_object* v_y_411_; lean_object* v___x_412_; 
v___x_409_ = l_Lean_instInhabitedExpr;
v_x_410_ = lean_array_get_borrowed(v___x_409_, v_xs_395_, v_i_398_);
v_y_411_ = lean_array_get_borrowed(v___x_409_, v_ys_396_, v_i_398_);
lean_inc(v_a_404_);
lean_inc_ref(v_a_403_);
lean_inc(v_a_402_);
lean_inc_ref(v_a_401_);
lean_inc(v_x_410_);
v___x_412_ = lean_infer_type(v_x_410_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_a_413_);
lean_dec_ref_known(v___x_412_, 1);
v___x_414_ = l_Lean_Expr_cleanupAnnotations(v_a_413_);
lean_dec(v_a_413_);
lean_inc(v_a_404_);
lean_inc_ref(v_a_403_);
lean_inc(v_a_402_);
lean_inc_ref(v_a_401_);
lean_inc(v_y_411_);
v___x_415_ = lean_infer_type(v_y_411_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_417_; uint8_t v___x_418_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
lean_dec_ref_known(v___x_415_, 1);
v___x_417_ = l_Lean_Expr_cleanupAnnotations(v_a_416_);
lean_dec(v_a_416_);
v___x_418_ = lean_expr_eqv(v___x_414_, v___x_417_);
lean_dec_ref(v___x_417_);
lean_dec_ref(v___x_414_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; 
lean_inc(v_y_411_);
lean_inc(v_x_410_);
v___x_419_ = l_Lean_Meta_mkHEq(v_x_410_, v_y_411_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___f_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_a_420_);
lean_dec_ref_known(v___x_419_, 1);
v___x_421_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___closed__1));
v___x_422_ = lean_unsigned_to_nat(1u);
v___x_423_ = lean_nat_add(v_i_398_, v___x_422_);
lean_inc(v___x_423_);
v___f_424_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__0___boxed), 12, 6);
lean_closure_set(v___f_424_, 0, v_eqs_399_);
lean_closure_set(v___f_424_, 1, v_kinds_400_);
lean_closure_set(v___f_424_, 2, v_xs_395_);
lean_closure_set(v___f_424_, 3, v_ys_396_);
lean_closure_set(v___f_424_, 4, v_k_397_);
lean_closure_set(v___f_424_, 5, v___x_423_);
v___x_425_ = lean_name_append_index_after(v___x_421_, v___x_423_);
v___x_426_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___redArg(v___x_425_, v_a_420_, v___f_424_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
return v___x_426_;
}
else
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_434_; 
lean_dec_ref(v_kinds_400_);
lean_dec_ref(v_eqs_399_);
lean_dec_ref(v_k_397_);
lean_dec_ref(v_ys_396_);
lean_dec_ref(v_xs_395_);
v_a_427_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_434_ == 0)
{
v___x_429_ = v___x_419_;
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_419_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_432_; 
if (v_isShared_430_ == 0)
{
v___x_432_ = v___x_429_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_a_427_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
else
{
lean_object* v___x_435_; 
lean_inc(v_y_411_);
lean_inc(v_x_410_);
v___x_435_ = l_Lean_Meta_mkEq(v_x_410_, v_y_411_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___f_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_a_436_);
lean_dec_ref_known(v___x_435_, 1);
v___x_437_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___closed__1));
v___x_438_ = lean_unsigned_to_nat(1u);
v___x_439_ = lean_nat_add(v_i_398_, v___x_438_);
lean_inc(v___x_439_);
v___f_440_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__1___boxed), 12, 6);
lean_closure_set(v___f_440_, 0, v_eqs_399_);
lean_closure_set(v___f_440_, 1, v_kinds_400_);
lean_closure_set(v___f_440_, 2, v_xs_395_);
lean_closure_set(v___f_440_, 3, v_ys_396_);
lean_closure_set(v___f_440_, 4, v_k_397_);
lean_closure_set(v___f_440_, 5, v___x_439_);
v___x_441_ = lean_name_append_index_after(v___x_437_, v___x_439_);
v___x_442_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___redArg(v___x_441_, v_a_436_, v___f_440_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
return v___x_442_;
}
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
lean_dec_ref(v_kinds_400_);
lean_dec_ref(v_eqs_399_);
lean_dec_ref(v_k_397_);
lean_dec_ref(v_ys_396_);
lean_dec_ref(v_xs_395_);
v_a_443_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_435_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_435_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
lean_dec_ref(v___x_414_);
lean_dec_ref(v_kinds_400_);
lean_dec_ref(v_eqs_399_);
lean_dec_ref(v_k_397_);
lean_dec_ref(v_ys_396_);
lean_dec_ref(v_xs_395_);
v_a_451_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_415_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_415_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
else
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_466_; 
lean_dec_ref(v_kinds_400_);
lean_dec_ref(v_eqs_399_);
lean_dec_ref(v_k_397_);
lean_dec_ref(v_ys_396_);
lean_dec_ref(v_xs_395_);
v_a_459_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_466_ == 0)
{
v___x_461_ = v___x_412_;
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___x_412_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_464_; 
if (v_isShared_462_ == 0)
{
v___x_464_ = v___x_461_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_a_459_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___lam__0(lean_object* v_eqs_467_, lean_object* v_kinds_468_, lean_object* v_xs_469_, lean_object* v_ys_470_, lean_object* v_k_471_, lean_object* v___x_472_, lean_object* v_h_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v___x_479_; uint8_t v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_479_ = lean_array_push(v_eqs_467_, v_h_473_);
v___x_480_ = 4;
v___x_481_ = lean_box(v___x_480_);
v___x_482_ = lean_array_push(v_kinds_468_, v___x_481_);
v___x_483_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg(v_xs_469_, v_ys_470_, v_k_471_, v___x_472_, v___x_479_, v___x_482_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg___boxed(lean_object* v_xs_484_, lean_object* v_ys_485_, lean_object* v_k_486_, lean_object* v_i_487_, lean_object* v_eqs_488_, lean_object* v_kinds_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg(v_xs_484_, v_ys_485_, v_k_486_, v_i_487_, v_eqs_488_, v_kinds_489_, v_a_490_, v_a_491_, v_a_492_, v_a_493_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
lean_dec(v_a_491_);
lean_dec_ref(v_a_490_);
lean_dec(v_i_487_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop(lean_object* v_00_u03b1_496_, lean_object* v_xs_497_, lean_object* v_ys_498_, lean_object* v_k_499_, lean_object* v_i_500_, lean_object* v_eqs_501_, lean_object* v_kinds_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg(v_xs_497_, v_ys_498_, v_k_499_, v_i_500_, v_eqs_501_, v_kinds_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___boxed(lean_object* v_00_u03b1_509_, lean_object* v_xs_510_, lean_object* v_ys_511_, lean_object* v_k_512_, lean_object* v_i_513_, lean_object* v_eqs_514_, lean_object* v_kinds_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop(v_00_u03b1_509_, v_xs_510_, v_ys_511_, v_k_512_, v_i_513_, v_eqs_514_, v_kinds_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
lean_dec(v_a_517_);
lean_dec_ref(v_a_516_);
lean_dec(v_i_513_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0(lean_object* v_00_u03b1_522_, lean_object* v_name_523_, uint8_t v_bi_524_, lean_object* v_type_525_, lean_object* v_k_526_, uint8_t v_kind_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___redArg(v_name_523_, v_bi_524_, v_type_525_, v_k_526_, v_kind_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___boxed(lean_object* v_00_u03b1_534_, lean_object* v_name_535_, lean_object* v_bi_536_, lean_object* v_type_537_, lean_object* v_k_538_, lean_object* v_kind_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
uint8_t v_bi_boxed_545_; uint8_t v_kind_boxed_546_; lean_object* v_res_547_; 
v_bi_boxed_545_ = lean_unbox(v_bi_536_);
v_kind_boxed_546_ = lean_unbox(v_kind_539_);
v_res_547_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0(v_00_u03b1_534_, v_name_535_, v_bi_boxed_545_, v_type_537_, v_k_538_, v_kind_boxed_546_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0(lean_object* v_00_u03b1_548_, lean_object* v_name_549_, lean_object* v_type_550_, lean_object* v_k_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___redArg(v_name_549_, v_type_550_, v_k_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___boxed(lean_object* v_00_u03b1_558_, lean_object* v_name_559_, lean_object* v_type_560_, lean_object* v_k_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0(v_00_u03b1_558_, v_name_559_, v_type_560_, v_k_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg(lean_object* v_xs_570_, lean_object* v_ys_571_, lean_object* v_k_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_578_ = lean_unsigned_to_nat(0u);
v___x_579_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg___closed__0));
v___x_580_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop___redArg(v_xs_570_, v_ys_571_, v_k_572_, v___x_578_, v___x_579_, v___x_579_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg___boxed(lean_object* v_xs_581_, lean_object* v_ys_582_, lean_object* v_k_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg(v_xs_581_, v_ys_582_, v_k_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_);
lean_dec(v_a_587_);
lean_dec_ref(v_a_586_);
lean_dec(v_a_585_);
lean_dec_ref(v_a_584_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs(lean_object* v_00_u03b1_590_, lean_object* v_xs_591_, lean_object* v_ys_592_, lean_object* v_k_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg(v_xs_591_, v_ys_592_, v_k_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___boxed(lean_object* v_00_u03b1_600_, lean_object* v_xs_601_, lean_object* v_ys_602_, lean_object* v_k_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs(v_00_u03b1_600_, v_xs_601_, v_ys_602_, v_k_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_);
lean_dec(v_a_607_);
lean_dec_ref(v_a_606_);
lean_dec(v_a_605_);
lean_dec_ref(v_a_604_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg___lam__0(lean_object* v_k_610_, lean_object* v_b_611_, lean_object* v_c_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
lean_object* v___x_618_; 
lean_inc(v___y_616_);
lean_inc_ref(v___y_615_);
lean_inc(v___y_614_);
lean_inc_ref(v___y_613_);
v___x_618_ = lean_apply_7(v_k_610_, v_b_611_, v_c_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, lean_box(0));
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg___lam__0___boxed(lean_object* v_k_619_, lean_object* v_b_620_, lean_object* v_c_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg___lam__0(v_k_619_, v_b_620_, v_c_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg(lean_object* v_type_628_, lean_object* v_maxFVars_x3f_629_, lean_object* v_k_630_, uint8_t v_cleanupAnnotations_631_, uint8_t v_whnfType_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
lean_object* v___f_638_; lean_object* v___x_639_; 
v___f_638_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_638_, 0, v_k_630_);
v___x_639_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_628_, v_maxFVars_x3f_629_, v___f_638_, v_cleanupAnnotations_631_, v_whnfType_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_647_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_647_ == 0)
{
v___x_642_ = v___x_639_;
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_639_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_640_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
else
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
v_a_648_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v___x_639_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_639_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg___boxed(lean_object* v_type_656_, lean_object* v_maxFVars_x3f_657_, lean_object* v_k_658_, lean_object* v_cleanupAnnotations_659_, lean_object* v_whnfType_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_666_; uint8_t v_whnfType_boxed_667_; lean_object* v_res_668_; 
v_cleanupAnnotations_boxed_666_ = lean_unbox(v_cleanupAnnotations_659_);
v_whnfType_boxed_667_ = lean_unbox(v_whnfType_660_);
v_res_668_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg(v_type_656_, v_maxFVars_x3f_657_, v_k_658_, v_cleanupAnnotations_boxed_666_, v_whnfType_boxed_667_, v___y_661_, v___y_662_, v___y_663_, v___y_664_);
lean_dec(v___y_664_);
lean_dec_ref(v___y_663_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0(lean_object* v_00_u03b1_669_, lean_object* v_type_670_, lean_object* v_maxFVars_x3f_671_, lean_object* v_k_672_, uint8_t v_cleanupAnnotations_673_, uint8_t v_whnfType_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg(v_type_670_, v_maxFVars_x3f_671_, v_k_672_, v_cleanupAnnotations_673_, v_whnfType_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___boxed(lean_object* v_00_u03b1_681_, lean_object* v_type_682_, lean_object* v_maxFVars_x3f_683_, lean_object* v_k_684_, lean_object* v_cleanupAnnotations_685_, lean_object* v_whnfType_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_692_; uint8_t v_whnfType_boxed_693_; lean_object* v_res_694_; 
v_cleanupAnnotations_boxed_692_ = lean_unbox(v_cleanupAnnotations_685_);
v_whnfType_boxed_693_ = lean_unbox(v_whnfType_686_);
v_res_694_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0(v_00_u03b1_681_, v_type_682_, v_maxFVars_x3f_683_, v_k_684_, v_cleanupAnnotations_boxed_692_, v_whnfType_boxed_693_, v___y_687_, v___y_688_, v___y_689_, v___y_690_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__2___boxed(lean_object* v___x_703_, lean_object* v___x_704_, lean_object* v___x_705_, lean_object* v___x_706_, lean_object* v___x_707_, lean_object* v_a_708_, lean_object* v_type_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
uint8_t v___x_1785__boxed_715_; lean_object* v_res_716_; 
v___x_1785__boxed_715_ = lean_unbox(v___x_705_);
v_res_716_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__2(v___x_703_, v___x_704_, v___x_1785__boxed_715_, v___x_706_, v___x_707_, v_a_708_, v_type_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec_ref(v_a_708_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof(lean_object* v_type_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
v___x_723_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__1));
v___x_724_ = lean_unsigned_to_nat(3u);
v___x_725_ = l_Lean_Expr_isAppOfArity(v_type_717_, v___x_723_, v___x_724_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_726_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__3));
v___x_727_ = lean_unsigned_to_nat(4u);
v___x_728_ = l_Lean_Expr_isAppOfArity(v_type_717_, v___x_726_, v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___f_733_; uint8_t v___x_734_; lean_object* v___x_735_; 
v___x_729_ = l_Lean_instInhabitedExpr;
v___x_730_ = lean_unsigned_to_nat(1u);
v___x_731_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__4));
v___x_732_ = lean_box(v___x_728_);
v___f_733_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__2___boxed), 12, 5);
lean_closure_set(v___f_733_, 0, v___x_729_);
lean_closure_set(v___f_733_, 1, v___x_730_);
lean_closure_set(v___f_733_, 2, v___x_732_);
lean_closure_set(v___f_733_, 3, v___x_724_);
lean_closure_set(v___f_733_, 4, v___x_731_);
v___x_734_ = 1;
v___x_735_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg(v_type_717_, v___x_731_, v___f_733_, v___x_734_, v___x_728_, v_a_718_, v_a_719_, v_a_720_, v_a_721_);
return v___x_735_;
}
else
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_736_ = l_Lean_Expr_appFn_x21(v_type_717_);
lean_dec_ref(v_type_717_);
v___x_737_ = l_Lean_Expr_appFn_x21(v___x_736_);
lean_dec_ref(v___x_736_);
v___x_738_ = l_Lean_Expr_appArg_x21(v___x_737_);
lean_dec_ref(v___x_737_);
v___x_739_ = l_Lean_Meta_mkHEqRefl(v___x_738_, v_a_718_, v_a_719_, v_a_720_, v_a_721_);
return v___x_739_;
}
}
else
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_740_ = l_Lean_Expr_appFn_x21(v_type_717_);
lean_dec_ref(v_type_717_);
v___x_741_ = l_Lean_Expr_appArg_x21(v___x_740_);
lean_dec_ref(v___x_740_);
v___x_742_ = l_Lean_Meta_mkEqRefl(v___x_741_, v_a_718_, v_a_719_, v_a_720_, v_a_721_);
return v___x_742_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__0(lean_object* v_type_743_, lean_object* v_motive_744_, lean_object* v___x_745_, lean_object* v_b_746_, uint8_t v___x_747_, lean_object* v___x_748_, lean_object* v_a_749_, lean_object* v_eqPr_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v_type_756_; lean_object* v_motive_757_; lean_object* v___x_758_; 
v_type_756_ = l_Lean_Expr_bindingBody_x21(v_type_743_);
v_motive_757_ = l_Lean_Expr_bindingBody_x21(v_motive_744_);
v___x_758_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof(v_type_756_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v_major_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; lean_object* v___y_765_; lean_object* v___x_779_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_758_, 1);
lean_inc(v___y_754_);
lean_inc_ref(v___y_753_);
lean_inc(v___y_752_);
lean_inc_ref(v___y_751_);
lean_inc_ref(v_eqPr_750_);
v___x_779_ = lean_infer_type(v_eqPr_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v___x_781_; 
v_a_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_780_);
lean_dec_ref_known(v___x_779_, 1);
lean_inc(v___y_754_);
lean_inc_ref(v___y_753_);
lean_inc(v___y_752_);
lean_inc_ref(v___y_751_);
v___x_781_ = lean_whnf(v_a_780_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v_a_782_; uint8_t v___x_783_; 
v_a_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_a_782_);
lean_dec_ref_known(v___x_781_, 1);
v___x_783_ = l_Lean_Expr_isHEq(v_a_782_);
lean_dec(v_a_782_);
if (v___x_783_ == 0)
{
lean_inc_ref(v_eqPr_750_);
v_major_761_ = v_eqPr_750_;
v___y_762_ = v___y_751_;
v___y_763_ = v___y_752_;
v___y_764_ = v___y_753_;
v___y_765_ = v___y_754_;
goto v___jp_760_;
}
else
{
lean_object* v___x_784_; 
lean_inc_ref(v_eqPr_750_);
v___x_784_ = l_Lean_Meta_mkEqOfHEq(v_eqPr_750_, v___x_783_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
lean_dec_ref_known(v___x_784_, 1);
v_major_761_ = v_a_785_;
v___y_762_ = v___y_751_;
v___y_763_ = v___y_752_;
v___y_764_ = v___y_753_;
v___y_765_ = v___y_754_;
goto v___jp_760_;
}
else
{
lean_dec(v_a_759_);
lean_dec_ref(v_motive_757_);
lean_dec_ref(v_eqPr_750_);
lean_dec_ref(v_a_749_);
lean_dec_ref(v_b_746_);
return v___x_784_;
}
}
}
else
{
lean_dec(v_a_759_);
lean_dec_ref(v_motive_757_);
lean_dec_ref(v_eqPr_750_);
lean_dec_ref(v_a_749_);
lean_dec_ref(v_b_746_);
return v___x_781_;
}
}
else
{
lean_dec(v_a_759_);
lean_dec_ref(v_motive_757_);
lean_dec_ref(v_eqPr_750_);
lean_dec_ref(v_a_749_);
lean_dec_ref(v_b_746_);
return v___x_779_;
}
v___jp_760_:
{
lean_object* v___x_766_; lean_object* v___x_767_; uint8_t v___x_768_; uint8_t v___x_769_; lean_object* v___x_770_; 
v___x_766_ = lean_mk_empty_array_with_capacity(v___x_745_);
lean_inc_ref(v_b_746_);
v___x_767_ = lean_array_push(v___x_766_, v_b_746_);
v___x_768_ = 1;
v___x_769_ = 1;
v___x_770_ = l_Lean_Meta_mkLambdaFVars(v___x_767_, v_motive_757_, v___x_747_, v___x_768_, v___x_747_, v___x_768_, v___x_769_, v___y_762_, v___y_763_, v___y_764_, v___y_765_);
lean_dec_ref(v___x_767_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_772_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_771_);
lean_dec_ref_known(v___x_770_, 1);
v___x_772_ = l_Lean_Meta_mkEqNDRec(v_a_771_, v_a_759_, v_major_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_a_773_);
lean_dec_ref_known(v___x_772_, 1);
v___x_774_ = lean_mk_empty_array_with_capacity(v___x_748_);
v___x_775_ = lean_array_push(v___x_774_, v_a_749_);
v___x_776_ = lean_array_push(v___x_775_, v_b_746_);
v___x_777_ = lean_array_push(v___x_776_, v_eqPr_750_);
v___x_778_ = l_Lean_Meta_mkLambdaFVars(v___x_777_, v_a_773_, v___x_747_, v___x_768_, v___x_747_, v___x_768_, v___x_769_, v___y_762_, v___y_763_, v___y_764_, v___y_765_);
lean_dec_ref(v___x_777_);
return v___x_778_;
}
else
{
lean_dec_ref(v_eqPr_750_);
lean_dec_ref(v_a_749_);
lean_dec_ref(v_b_746_);
return v___x_772_;
}
}
else
{
lean_dec_ref(v_major_761_);
lean_dec(v_a_759_);
lean_dec_ref(v_eqPr_750_);
lean_dec_ref(v_a_749_);
lean_dec_ref(v_b_746_);
return v___x_770_;
}
}
}
else
{
lean_dec_ref(v_motive_757_);
lean_dec_ref(v_eqPr_750_);
lean_dec_ref(v_a_749_);
lean_dec_ref(v_b_746_);
return v___x_758_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__0___boxed(lean_object* v_type_786_, lean_object* v_motive_787_, lean_object* v___x_788_, lean_object* v_b_789_, lean_object* v___x_790_, lean_object* v___x_791_, lean_object* v_a_792_, lean_object* v_eqPr_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_){
_start:
{
uint8_t v___x_1841__boxed_799_; lean_object* v_res_800_; 
v___x_1841__boxed_799_ = lean_unbox(v___x_790_);
v_res_800_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__0(v_type_786_, v_motive_787_, v___x_788_, v_b_789_, v___x_1841__boxed_799_, v___x_791_, v_a_792_, v_eqPr_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___x_791_);
lean_dec(v___x_788_);
lean_dec_ref(v_motive_787_);
lean_dec_ref(v_type_786_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__1(lean_object* v___x_801_, lean_object* v___x_802_, lean_object* v_type_803_, lean_object* v_a_804_, lean_object* v___x_805_, uint8_t v___x_806_, lean_object* v___x_807_, lean_object* v_b_808_, lean_object* v_motive_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_b_815_; lean_object* v___x_816_; lean_object* v_type_817_; lean_object* v___x_818_; lean_object* v___f_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_b_815_ = lean_array_get_borrowed(v___x_801_, v_b_808_, v___x_802_);
v___x_816_ = l_Lean_Expr_bindingBody_x21(v_type_803_);
v_type_817_ = lean_expr_instantiate1(v___x_816_, v_a_804_);
lean_dec_ref(v___x_816_);
v___x_818_ = lean_box(v___x_806_);
lean_inc(v_b_815_);
lean_inc_ref(v_motive_809_);
v___f_819_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__0___boxed), 13, 7);
lean_closure_set(v___f_819_, 0, v_type_817_);
lean_closure_set(v___f_819_, 1, v_motive_809_);
lean_closure_set(v___f_819_, 2, v___x_805_);
lean_closure_set(v___f_819_, 3, v_b_815_);
lean_closure_set(v___f_819_, 4, v___x_818_);
lean_closure_set(v___f_819_, 5, v___x_807_);
lean_closure_set(v___f_819_, 6, v_a_804_);
v___x_820_ = l_Lean_Expr_bindingName_x21(v_motive_809_);
v___x_821_ = l_Lean_Expr_bindingDomain_x21(v_motive_809_);
lean_dec_ref(v_motive_809_);
v___x_822_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___redArg(v___x_820_, v___x_821_, v___f_819_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__1___boxed(lean_object* v___x_823_, lean_object* v___x_824_, lean_object* v_type_825_, lean_object* v_a_826_, lean_object* v___x_827_, lean_object* v___x_828_, lean_object* v___x_829_, lean_object* v_b_830_, lean_object* v_motive_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
uint8_t v___x_1800__boxed_837_; lean_object* v_res_838_; 
v___x_1800__boxed_837_ = lean_unbox(v___x_828_);
v_res_838_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__1(v___x_823_, v___x_824_, v_type_825_, v_a_826_, v___x_827_, v___x_1800__boxed_837_, v___x_829_, v_b_830_, v_motive_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec_ref(v_b_830_);
lean_dec_ref(v_type_825_);
lean_dec(v___x_824_);
lean_dec_ref(v___x_823_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__2(lean_object* v___x_839_, lean_object* v___x_840_, uint8_t v___x_841_, lean_object* v___x_842_, lean_object* v___x_843_, lean_object* v_a_844_, lean_object* v_type_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_){
_start:
{
lean_object* v___x_851_; lean_object* v_a_852_; lean_object* v___x_853_; lean_object* v___f_854_; uint8_t v___x_855_; lean_object* v___x_856_; 
v___x_851_ = lean_unsigned_to_nat(0u);
v_a_852_ = lean_array_get(v___x_839_, v_a_844_, v___x_851_);
v___x_853_ = lean_box(v___x_841_);
lean_inc_ref(v_type_845_);
v___f_854_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___lam__1___boxed), 14, 7);
lean_closure_set(v___f_854_, 0, v___x_839_);
lean_closure_set(v___f_854_, 1, v___x_851_);
lean_closure_set(v___f_854_, 2, v_type_845_);
lean_closure_set(v___f_854_, 3, v_a_852_);
lean_closure_set(v___f_854_, 4, v___x_840_);
lean_closure_set(v___f_854_, 5, v___x_853_);
lean_closure_set(v___f_854_, 6, v___x_842_);
v___x_855_ = 1;
v___x_856_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg(v_type_845_, v___x_843_, v___f_854_, v___x_855_, v___x_841_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___boxed(lean_object* v_type_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof(v_type_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_);
lean_dec(v_a_861_);
lean_dec_ref(v_a_860_);
lean_dec(v_a_859_);
lean_dec_ref(v_a_858_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2___redArg(lean_object* v_lctx_864_, lean_object* v_localInsts_865_, lean_object* v_x_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
lean_object* v___x_872_; 
v___x_872_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_864_, v_localInsts_865_, v_x_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_880_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_873_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
v_a_881_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_872_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_872_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2___redArg___boxed(lean_object* v_lctx_889_, lean_object* v_localInsts_890_, lean_object* v_x_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2___redArg(v_lctx_889_, v_localInsts_890_, v_x_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2(lean_object* v_00_u03b1_898_, lean_object* v_lctx_899_, lean_object* v_localInsts_900_, lean_object* v_x_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2___redArg(v_lctx_899_, v_localInsts_900_, v_x_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2___boxed(lean_object* v_00_u03b1_908_, lean_object* v_lctx_909_, lean_object* v_localInsts_910_, lean_object* v_x_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2(v_00_u03b1_908_, v_lctx_909_, v_localInsts_910_, v_x_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1___redArg(lean_object* v_as_918_, size_t v_sz_919_, size_t v_i_920_, lean_object* v_b_921_){
_start:
{
uint8_t v___x_923_; 
v___x_923_ = lean_usize_dec_lt(v_i_920_, v_sz_919_);
if (v___x_923_ == 0)
{
lean_object* v___x_924_; 
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v_b_921_);
return v___x_924_;
}
else
{
lean_object* v_snd_925_; lean_object* v_snd_926_; lean_object* v_fst_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_997_; 
v_snd_925_ = lean_ctor_get(v_b_921_, 1);
lean_inc(v_snd_925_);
v_snd_926_ = lean_ctor_get(v_snd_925_, 1);
lean_inc(v_snd_926_);
v_fst_927_ = lean_ctor_get(v_b_921_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v_b_921_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; 
v_unused_998_ = lean_ctor_get(v_b_921_, 1);
lean_dec(v_unused_998_);
v___x_929_ = v_b_921_;
v_isShared_930_ = v_isSharedCheck_997_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_fst_927_);
lean_dec(v_b_921_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_997_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v_fst_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_995_; 
v_fst_931_ = lean_ctor_get(v_snd_925_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v_snd_925_);
if (v_isSharedCheck_995_ == 0)
{
lean_object* v_unused_996_; 
v_unused_996_ = lean_ctor_get(v_snd_925_, 1);
lean_dec(v_unused_996_);
v___x_933_ = v_snd_925_;
v_isShared_934_ = v_isSharedCheck_995_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_fst_931_);
lean_dec(v_snd_925_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_995_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v_array_935_; lean_object* v_start_936_; lean_object* v_stop_937_; uint8_t v___x_938_; 
v_array_935_ = lean_ctor_get(v_snd_926_, 0);
v_start_936_ = lean_ctor_get(v_snd_926_, 1);
v_stop_937_ = lean_ctor_get(v_snd_926_, 2);
v___x_938_ = lean_nat_dec_lt(v_start_936_, v_stop_937_);
if (v___x_938_ == 0)
{
lean_object* v___x_940_; 
if (v_isShared_934_ == 0)
{
v___x_940_ = v___x_933_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_fst_931_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v_snd_926_);
v___x_940_ = v_reuseFailAlloc_945_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
lean_object* v___x_942_; 
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 1, v___x_940_);
v___x_942_ = v___x_929_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_fst_927_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v___x_940_);
v___x_942_ = v_reuseFailAlloc_944_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
lean_object* v___x_943_; 
v___x_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
return v___x_943_;
}
}
}
else
{
lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_991_; 
lean_inc(v_stop_937_);
lean_inc(v_start_936_);
lean_inc_ref(v_array_935_);
v_isSharedCheck_991_ = !lean_is_exclusive(v_snd_926_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; lean_object* v_unused_993_; lean_object* v_unused_994_; 
v_unused_992_ = lean_ctor_get(v_snd_926_, 2);
lean_dec(v_unused_992_);
v_unused_993_ = lean_ctor_get(v_snd_926_, 1);
lean_dec(v_unused_993_);
v_unused_994_ = lean_ctor_get(v_snd_926_, 0);
lean_dec(v_unused_994_);
v___x_947_ = v_snd_926_;
v_isShared_948_ = v_isSharedCheck_991_;
goto v_resetjp_946_;
}
else
{
lean_dec(v_snd_926_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_991_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v_array_949_; lean_object* v_start_950_; lean_object* v_stop_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_956_; 
v_array_949_ = lean_ctor_get(v_fst_931_, 0);
v_start_950_ = lean_ctor_get(v_fst_931_, 1);
v_stop_951_ = lean_ctor_get(v_fst_931_, 2);
v___x_952_ = lean_array_fget(v_array_935_, v_start_936_);
v___x_953_ = lean_unsigned_to_nat(1u);
v___x_954_ = lean_nat_add(v_start_936_, v___x_953_);
lean_dec(v_start_936_);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 1, v___x_954_);
v___x_956_ = v___x_947_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_array_935_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v_stop_937_);
v___x_956_ = v_reuseFailAlloc_990_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
uint8_t v___x_957_; 
v___x_957_ = lean_nat_dec_lt(v_start_950_, v_stop_951_);
if (v___x_957_ == 0)
{
lean_object* v___x_959_; 
lean_dec(v___x_952_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v___x_956_);
v___x_959_ = v___x_933_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_fst_931_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v___x_956_);
v___x_959_ = v_reuseFailAlloc_964_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
lean_object* v___x_961_; 
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 1, v___x_959_);
v___x_961_ = v___x_929_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_fst_927_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v___x_959_);
v___x_961_ = v_reuseFailAlloc_963_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
lean_object* v___x_962_; 
v___x_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
return v___x_962_;
}
}
}
else
{
lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_986_; 
lean_inc(v_stop_951_);
lean_inc(v_start_950_);
lean_inc_ref(v_array_949_);
v_isSharedCheck_986_ = !lean_is_exclusive(v_fst_931_);
if (v_isSharedCheck_986_ == 0)
{
lean_object* v_unused_987_; lean_object* v_unused_988_; lean_object* v_unused_989_; 
v_unused_987_ = lean_ctor_get(v_fst_931_, 2);
lean_dec(v_unused_987_);
v_unused_988_ = lean_ctor_get(v_fst_931_, 1);
lean_dec(v_unused_988_);
v_unused_989_ = lean_ctor_get(v_fst_931_, 0);
lean_dec(v_unused_989_);
v___x_966_ = v_fst_931_;
v_isShared_967_ = v_isSharedCheck_986_;
goto v_resetjp_965_;
}
else
{
lean_dec(v_fst_931_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_986_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v_a_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_972_; 
v_a_968_ = lean_array_uget_borrowed(v_as_918_, v_i_920_);
v___x_969_ = lean_array_fget(v_array_949_, v_start_950_);
v___x_970_ = lean_nat_add(v_start_950_, v___x_953_);
lean_dec(v_start_950_);
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 1, v___x_970_);
v___x_972_ = v___x_966_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_array_949_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v___x_970_);
lean_ctor_set(v_reuseFailAlloc_985_, 2, v_stop_951_);
v___x_972_ = v_reuseFailAlloc_985_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_977_; 
lean_inc(v_a_968_);
v___x_973_ = lean_array_push(v_fst_927_, v_a_968_);
v___x_974_ = lean_array_push(v___x_973_, v___x_969_);
v___x_975_ = lean_array_push(v___x_974_, v___x_952_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v___x_956_);
lean_ctor_set(v___x_933_, 0, v___x_972_);
v___x_977_ = v___x_933_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v___x_972_);
lean_ctor_set(v_reuseFailAlloc_984_, 1, v___x_956_);
v___x_977_ = v_reuseFailAlloc_984_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
lean_object* v___x_979_; 
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 1, v___x_977_);
lean_ctor_set(v___x_929_, 0, v___x_975_);
v___x_979_ = v___x_929_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_975_);
lean_ctor_set(v_reuseFailAlloc_983_, 1, v___x_977_);
v___x_979_ = v_reuseFailAlloc_983_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
size_t v___x_980_; size_t v___x_981_; 
v___x_980_ = ((size_t)1ULL);
v___x_981_ = lean_usize_add(v_i_920_, v___x_980_);
v_i_920_ = v___x_981_;
v_b_921_ = v___x_979_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1___redArg___boxed(lean_object* v_as_999_, lean_object* v_sz_1000_, lean_object* v_i_1001_, lean_object* v_b_1002_, lean_object* v___y_1003_){
_start:
{
size_t v_sz_boxed_1004_; size_t v_i_boxed_1005_; lean_object* v_res_1006_; 
v_sz_boxed_1004_ = lean_unbox_usize(v_sz_1000_);
lean_dec(v_sz_1000_);
v_i_boxed_1005_ = lean_unbox_usize(v_i_1001_);
lean_dec(v_i_1001_);
v_res_1006_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1___redArg(v_as_999_, v_sz_boxed_1004_, v_i_boxed_1005_, v_b_1002_);
lean_dec_ref(v_as_999_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__0(lean_object* v_ys_1007_, lean_object* v_xs_1008_, lean_object* v_f_1009_, uint8_t v___x_1010_, uint8_t v___x_1011_, lean_object* v_eqs_1012_, lean_object* v_argKinds_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; size_t v_sz_1027_; size_t v___x_1028_; lean_object* v___x_1029_; 
v___x_1019_ = lean_unsigned_to_nat(0u);
v___x_1020_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg___closed__0));
v___x_1021_ = lean_array_get_size(v_ys_1007_);
lean_inc_ref(v_ys_1007_);
v___x_1022_ = l_Array_toSubarray___redArg(v_ys_1007_, v___x_1019_, v___x_1021_);
v___x_1023_ = lean_array_get_size(v_eqs_1012_);
v___x_1024_ = l_Array_toSubarray___redArg(v_eqs_1012_, v___x_1019_, v___x_1023_);
v___x_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1022_);
lean_ctor_set(v___x_1025_, 1, v___x_1024_);
v___x_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1020_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v_sz_1027_ = lean_array_size(v_xs_1008_);
v___x_1028_ = ((size_t)0ULL);
v___x_1029_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1___redArg(v_xs_1008_, v_sz_1027_, v___x_1028_, v___x_1026_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v_a_1030_; lean_object* v_fst_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
lean_inc(v_a_1030_);
lean_dec_ref_known(v___x_1029_, 1);
v_fst_1031_ = lean_ctor_get(v_a_1030_, 0);
lean_inc(v_fst_1031_);
lean_dec(v_a_1030_);
lean_inc_ref(v_f_1009_);
v___x_1032_ = l_Lean_mkAppN(v_f_1009_, v_xs_1008_);
v___x_1033_ = l_Lean_mkAppN(v_f_1009_, v_ys_1007_);
lean_dec_ref(v_ys_1007_);
v___x_1034_ = l_Lean_Meta_mkHEq(v___x_1032_, v___x_1033_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; uint8_t v___x_1036_; lean_object* v___x_1037_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_a_1035_);
lean_dec_ref_known(v___x_1034_, 1);
v___x_1036_ = 1;
v___x_1037_ = l_Lean_Meta_mkForallFVars(v_fst_1031_, v_a_1035_, v___x_1010_, v___x_1011_, v___x_1011_, v___x_1036_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
lean_dec(v_fst_1031_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___x_1039_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc_n(v_a_1038_, 2);
lean_dec_ref_known(v___x_1037_, 1);
v___x_1039_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof(v_a_1038_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1048_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1042_ = v___x_1039_;
v_isShared_1043_ = v_isSharedCheck_1048_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1039_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1048_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; lean_object* v___x_1046_; 
v___x_1044_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1044_, 0, v_a_1038_);
lean_ctor_set(v___x_1044_, 1, v_a_1040_);
lean_ctor_set(v___x_1044_, 2, v_argKinds_1013_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 0, v___x_1044_);
v___x_1046_ = v___x_1042_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v___x_1044_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
lean_dec(v_a_1038_);
lean_dec_ref(v_argKinds_1013_);
v_a_1049_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_1039_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1039_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
else
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1064_; 
lean_dec_ref(v_argKinds_1013_);
v_a_1057_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1059_ = v___x_1037_;
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1037_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
if (v_isShared_1060_ == 0)
{
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_a_1057_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
}
else
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1072_; 
lean_dec(v_fst_1031_);
lean_dec_ref(v_argKinds_1013_);
v_a_1065_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1067_ = v___x_1034_;
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_1034_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1070_; 
if (v_isShared_1068_ == 0)
{
v___x_1070_ = v___x_1067_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_a_1065_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
else
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1080_; 
lean_dec_ref(v_argKinds_1013_);
lean_dec_ref(v_f_1009_);
lean_dec_ref(v_ys_1007_);
v_a_1073_ = lean_ctor_get(v___x_1029_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1075_ = v___x_1029_;
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1029_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1078_; 
if (v_isShared_1076_ == 0)
{
v___x_1078_ = v___x_1075_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1073_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__0___boxed(lean_object* v_ys_1081_, lean_object* v_xs_1082_, lean_object* v_f_1083_, lean_object* v___x_1084_, lean_object* v___x_1085_, lean_object* v_eqs_1086_, lean_object* v_argKinds_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_){
_start:
{
uint8_t v___x_4767__boxed_1093_; uint8_t v___x_4768__boxed_1094_; lean_object* v_res_1095_; 
v___x_4767__boxed_1093_ = lean_unbox(v___x_1084_);
v___x_4768__boxed_1094_ = lean_unbox(v___x_1085_);
v_res_1095_ = l_Lean_Meta_mkHCongrWithArity___lam__0(v_ys_1081_, v_xs_1082_, v_f_1083_, v___x_4767__boxed_1093_, v___x_4768__boxed_1094_, v_eqs_1086_, v_argKinds_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec_ref(v_xs_1082_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0_spec__0(lean_object* v_msgData_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v___x_1102_; lean_object* v_env_1103_; uint8_t v___x_1104_; lean_object* v_env_1105_; lean_object* v___x_1106_; lean_object* v_toCold_1107_; lean_object* v_mctx_1108_; lean_object* v_lctx_1109_; lean_object* v_options_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1102_ = lean_st_ref_get(v___y_1100_);
v_env_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc_ref(v_env_1103_);
lean_dec(v___x_1102_);
v___x_1104_ = 0;
v_env_1105_ = l_Lean_Environment_setRecordingDeps(v_env_1103_, v___x_1104_);
v___x_1106_ = lean_st_ref_get(v___y_1098_);
v_toCold_1107_ = lean_ctor_get(v___y_1099_, 0);
v_mctx_1108_ = lean_ctor_get(v___x_1106_, 0);
lean_inc_ref(v_mctx_1108_);
lean_dec(v___x_1106_);
v_lctx_1109_ = lean_ctor_get(v___y_1097_, 2);
v_options_1110_ = lean_ctor_get(v_toCold_1107_, 2);
lean_inc_ref(v_options_1110_);
lean_inc_ref(v_lctx_1109_);
v___x_1111_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1111_, 0, v_env_1105_);
lean_ctor_set(v___x_1111_, 1, v_mctx_1108_);
lean_ctor_set(v___x_1111_, 2, v_lctx_1109_);
lean_ctor_set(v___x_1111_, 3, v_options_1110_);
v___x_1112_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
lean_ctor_set(v___x_1112_, 1, v_msgData_1096_);
v___x_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0_spec__0___boxed(lean_object* v_msgData_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0_spec__0(v_msgData_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0___redArg(lean_object* v_msg_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v_ref_1127_; lean_object* v___x_1128_; lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1137_; 
v_ref_1127_ = lean_ctor_get(v___y_1124_, 2);
v___x_1128_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0_spec__0(v_msg_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_);
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1131_ = v___x_1128_;
v_isShared_1132_ = v_isSharedCheck_1137_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1128_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1137_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1133_; lean_object* v___x_1135_; 
lean_inc(v_ref_1127_);
v___x_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1133_, 0, v_ref_1127_);
lean_ctor_set(v___x_1133_, 1, v_a_1129_);
if (v_isShared_1132_ == 0)
{
lean_ctor_set_tag(v___x_1131_, 1);
lean_ctor_set(v___x_1131_, 0, v___x_1133_);
v___x_1135_ = v___x_1131_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_1133_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0___redArg___boxed(lean_object* v_msg_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0___redArg(v_msg_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
return v_res_1144_;
}
}
static lean_object* _init_l_Lean_Meta_mkHCongrWithArity___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = ((lean_object*)(l_Lean_Meta_mkHCongrWithArity___lam__1___closed__0));
v___x_1147_ = l_Lean_stringToMessageData(v___x_1146_);
return v___x_1147_;
}
}
static lean_object* _init_l_Lean_Meta_mkHCongrWithArity___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1149_ = ((lean_object*)(l_Lean_Meta_mkHCongrWithArity___lam__1___closed__2));
v___x_1150_ = l_Lean_stringToMessageData(v___x_1149_);
return v___x_1150_;
}
}
static lean_object* _init_l_Lean_Meta_mkHCongrWithArity___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = ((lean_object*)(l_Lean_Meta_mkHCongrWithArity___lam__1___closed__4));
v___x_1153_ = l_Lean_stringToMessageData(v___x_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__1(lean_object* v_xs_1154_, lean_object* v_numArgs_1155_, lean_object* v_f_1156_, lean_object* v_ys_1157_, lean_object* v_x_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v___x_1164_; uint8_t v___x_1165_; 
v___x_1164_ = lean_array_get_size(v_xs_1154_);
v___x_1165_ = lean_nat_dec_eq(v___x_1164_, v_numArgs_1155_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
lean_dec_ref(v_ys_1157_);
lean_dec_ref(v_xs_1154_);
v___x_1166_ = lean_obj_once(&l_Lean_Meta_mkHCongrWithArity___lam__1___closed__1, &l_Lean_Meta_mkHCongrWithArity___lam__1___closed__1_once, _init_l_Lean_Meta_mkHCongrWithArity___lam__1___closed__1);
v___x_1167_ = l_Nat_reprFast(v_numArgs_1155_);
v___x_1168_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
v___x_1169_ = l_Lean_MessageData_ofFormat(v___x_1168_);
v___x_1170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1166_);
lean_ctor_set(v___x_1170_, 1, v___x_1169_);
v___x_1171_ = lean_obj_once(&l_Lean_Meta_mkHCongrWithArity___lam__1___closed__3, &l_Lean_Meta_mkHCongrWithArity___lam__1___closed__3_once, _init_l_Lean_Meta_mkHCongrWithArity___lam__1___closed__3);
v___x_1172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1170_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = l_Nat_reprFast(v___x_1164_);
v___x_1174_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
v___x_1175_ = l_Lean_MessageData_ofFormat(v___x_1174_);
v___x_1176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1172_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
v___x_1177_ = lean_obj_once(&l_Lean_Meta_mkHCongrWithArity___lam__1___closed__5, &l_Lean_Meta_mkHCongrWithArity___lam__1___closed__5_once, _init_l_Lean_Meta_mkHCongrWithArity___lam__1___closed__5);
v___x_1178_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1176_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
v___x_1179_ = l_Lean_indentExpr(v_f_1156_);
v___x_1180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1178_);
lean_ctor_set(v___x_1180_, 1, v___x_1179_);
v___x_1181_ = l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0___redArg(v___x_1180_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
return v___x_1181_;
}
else
{
lean_object* v_lctx_1182_; lean_object* v_localInstances_1183_; uint8_t v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___f_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
lean_dec(v_numArgs_1155_);
v_lctx_1182_ = lean_ctor_get(v___y_1159_, 2);
v_localInstances_1183_ = lean_ctor_get(v___y_1159_, 3);
v___x_1184_ = 0;
v___x_1185_ = lean_box(v___x_1184_);
v___x_1186_ = lean_box(v___x_1165_);
lean_inc_ref(v_xs_1154_);
lean_inc_ref(v_ys_1157_);
v___f_1187_ = lean_alloc_closure((void*)(l_Lean_Meta_mkHCongrWithArity___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1187_, 0, v_ys_1157_);
lean_closure_set(v___f_1187_, 1, v_xs_1154_);
lean_closure_set(v___f_1187_, 2, v_f_1156_);
lean_closure_set(v___f_1187_, 3, v___x_1185_);
lean_closure_set(v___f_1187_, 4, v___x_1186_);
lean_inc_ref(v_lctx_1182_);
v___x_1188_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_addPrimeToFVarUserNames(v_ys_1157_, v_lctx_1182_);
v___x_1189_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD(v_ys_1157_, v___x_1188_);
v___x_1190_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_setBinderInfosD(v_xs_1154_, v___x_1189_);
v___x_1191_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___boxed), 9, 4);
lean_closure_set(v___x_1191_, 0, lean_box(0));
lean_closure_set(v___x_1191_, 1, v_xs_1154_);
lean_closure_set(v___x_1191_, 2, v_ys_1157_);
lean_closure_set(v___x_1191_, 3, v___f_1187_);
lean_inc_ref(v_localInstances_1183_);
v___x_1192_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkHCongrWithArity_spec__2___redArg(v___x_1190_, v_localInstances_1183_, v___x_1191_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
return v___x_1192_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__1___boxed(lean_object* v_xs_1193_, lean_object* v_numArgs_1194_, lean_object* v_f_1195_, lean_object* v_ys_1196_, lean_object* v_x_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_Lean_Meta_mkHCongrWithArity___lam__1(v_xs_1193_, v_numArgs_1194_, v_f_1195_, v_ys_1196_, v_x_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
lean_dec(v___y_1199_);
lean_dec_ref(v___y_1198_);
lean_dec_ref(v_x_1197_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__2(lean_object* v_numArgs_1204_, lean_object* v_f_1205_, lean_object* v_a_1206_, lean_object* v___x_1207_, lean_object* v_xs_1208_, lean_object* v_x_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v___f_1215_; uint8_t v___x_1216_; uint8_t v___x_1217_; lean_object* v___x_1218_; 
v___f_1215_ = lean_alloc_closure((void*)(l_Lean_Meta_mkHCongrWithArity___lam__1___boxed), 10, 3);
lean_closure_set(v___f_1215_, 0, v_xs_1208_);
lean_closure_set(v___f_1215_, 1, v_numArgs_1204_);
lean_closure_set(v___f_1215_, 2, v_f_1205_);
v___x_1216_ = 1;
v___x_1217_ = 0;
v___x_1218_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg(v_a_1206_, v___x_1207_, v___f_1215_, v___x_1216_, v___x_1217_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___lam__2___boxed(lean_object* v_numArgs_1219_, lean_object* v_f_1220_, lean_object* v_a_1221_, lean_object* v___x_1222_, lean_object* v_xs_1223_, lean_object* v_x_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l_Lean_Meta_mkHCongrWithArity___lam__2(v_numArgs_1219_, v_f_1220_, v_a_1221_, v___x_1222_, v_xs_1223_, v_x_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec(v___y_1226_);
lean_dec_ref(v___y_1225_);
lean_dec_ref(v_x_1224_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity(lean_object* v_f_1231_, lean_object* v_numArgs_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v___x_1238_; 
lean_inc(v_a_1236_);
lean_inc_ref(v_a_1235_);
lean_inc(v_a_1234_);
lean_inc_ref(v_a_1233_);
lean_inc_ref(v_f_1231_);
v___x_1238_ = lean_infer_type(v_f_1231_, v_a_1233_, v_a_1234_, v_a_1235_, v_a_1236_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; lean_object* v___x_1240_; lean_object* v___f_1241_; uint8_t v___x_1242_; uint8_t v___x_1243_; lean_object* v___x_1244_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc_n(v_a_1239_, 2);
lean_dec_ref_known(v___x_1238_, 1);
lean_inc(v_numArgs_1232_);
v___x_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1240_, 0, v_numArgs_1232_);
lean_inc_ref(v___x_1240_);
v___f_1241_ = lean_alloc_closure((void*)(l_Lean_Meta_mkHCongrWithArity___lam__2___boxed), 11, 4);
lean_closure_set(v___f_1241_, 0, v_numArgs_1232_);
lean_closure_set(v___f_1241_, 1, v_f_1231_);
lean_closure_set(v___f_1241_, 2, v_a_1239_);
lean_closure_set(v___f_1241_, 3, v___x_1240_);
v___x_1242_ = 1;
v___x_1243_ = 0;
v___x_1244_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg(v_a_1239_, v___x_1240_, v___f_1241_, v___x_1242_, v___x_1243_, v_a_1233_, v_a_1234_, v_a_1235_, v_a_1236_);
return v___x_1244_;
}
else
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1252_; 
lean_dec(v_numArgs_1232_);
lean_dec_ref(v_f_1231_);
v_a_1245_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1247_ = v___x_1238_;
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___x_1238_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1248_ == 0)
{
v___x_1250_ = v___x_1247_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1245_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArity___boxed(lean_object* v_f_1253_, lean_object* v_numArgs_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l_Lean_Meta_mkHCongrWithArity(v_f_1253_, v_numArgs_1254_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_);
lean_dec(v_a_1258_);
lean_dec_ref(v_a_1257_);
lean_dec(v_a_1256_);
lean_dec_ref(v_a_1255_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0(lean_object* v_00_u03b1_1261_, lean_object* v_msg_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v___x_1268_; 
v___x_1268_ = l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0___redArg(v_msg_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0___boxed(lean_object* v_00_u03b1_1269_, lean_object* v_msg_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0(v_00_u03b1_1269_, v_msg_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1(lean_object* v_as_1277_, size_t v_sz_1278_, size_t v_i_1279_, lean_object* v_b_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v___x_1286_; 
v___x_1286_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1___redArg(v_as_1277_, v_sz_1278_, v_i_1279_, v_b_1280_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1___boxed(lean_object* v_as_1287_, lean_object* v_sz_1288_, lean_object* v_i_1289_, lean_object* v_b_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_){
_start:
{
size_t v_sz_boxed_1296_; size_t v_i_boxed_1297_; lean_object* v_res_1298_; 
v_sz_boxed_1296_ = lean_unbox_usize(v_sz_1288_);
lean_dec(v_sz_1288_);
v_i_boxed_1297_ = lean_unbox_usize(v_i_1289_);
lean_dec(v_i_1289_);
v_res_1298_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkHCongrWithArity_spec__1(v_as_1287_, v_sz_boxed_1296_, v_i_boxed_1297_, v_b_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec_ref(v_as_1287_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongr(lean_object* v_f_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = lean_box(0);
lean_inc_ref(v_f_1299_);
v___x_1306_ = l_Lean_Meta_getFunInfo(v_f_1299_, v___x_1305_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
lean_dec_ref_known(v___x_1306_, 1);
v___x_1308_ = l_Lean_Meta_FunInfo_getArity(v_a_1307_);
lean_dec(v_a_1307_);
v___x_1309_ = l_Lean_Meta_mkHCongrWithArity(v_f_1299_, v___x_1308_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_);
return v___x_1309_;
}
else
{
lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
lean_dec_ref(v_f_1299_);
v_a_1310_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1306_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1306_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_a_1310_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongr___boxed(lean_object* v_f_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_Lean_Meta_mkHCongr(v_f_1318_, v_a_1319_, v_a_1320_, v_a_1321_, v_a_1322_);
lean_dec(v_a_1322_);
lean_dec_ref(v_a_1321_);
lean_dec(v_a_1320_);
lean_dec_ref(v_a_1319_);
return v_res_1324_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0_spec__0(lean_object* v_a_1325_, lean_object* v_as_1326_, size_t v_i_1327_, size_t v_stop_1328_){
_start:
{
uint8_t v___x_1329_; 
v___x_1329_ = lean_usize_dec_eq(v_i_1327_, v_stop_1328_);
if (v___x_1329_ == 0)
{
lean_object* v___x_1330_; uint8_t v___x_1331_; 
v___x_1330_ = lean_array_uget_borrowed(v_as_1326_, v_i_1327_);
v___x_1331_ = lean_nat_dec_eq(v_a_1325_, v___x_1330_);
if (v___x_1331_ == 0)
{
size_t v___x_1332_; size_t v___x_1333_; 
v___x_1332_ = ((size_t)1ULL);
v___x_1333_ = lean_usize_add(v_i_1327_, v___x_1332_);
v_i_1327_ = v___x_1333_;
goto _start;
}
else
{
return v___x_1331_;
}
}
else
{
uint8_t v___x_1335_; 
v___x_1335_ = 0;
return v___x_1335_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0_spec__0___boxed(lean_object* v_a_1336_, lean_object* v_as_1337_, lean_object* v_i_1338_, lean_object* v_stop_1339_){
_start:
{
size_t v_i_boxed_1340_; size_t v_stop_boxed_1341_; uint8_t v_res_1342_; lean_object* v_r_1343_; 
v_i_boxed_1340_ = lean_unbox_usize(v_i_1338_);
lean_dec(v_i_1338_);
v_stop_boxed_1341_ = lean_unbox_usize(v_stop_1339_);
lean_dec(v_stop_1339_);
v_res_1342_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0_spec__0(v_a_1336_, v_as_1337_, v_i_boxed_1340_, v_stop_boxed_1341_);
lean_dec_ref(v_as_1337_);
lean_dec(v_a_1336_);
v_r_1343_ = lean_box(v_res_1342_);
return v_r_1343_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0(lean_object* v_as_1344_, lean_object* v_a_1345_){
_start:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; 
v___x_1346_ = lean_unsigned_to_nat(0u);
v___x_1347_ = lean_array_get_size(v_as_1344_);
v___x_1348_ = lean_nat_dec_lt(v___x_1346_, v___x_1347_);
if (v___x_1348_ == 0)
{
return v___x_1348_;
}
else
{
size_t v___x_1349_; size_t v___x_1350_; uint8_t v___x_1351_; 
v___x_1349_ = ((size_t)0ULL);
v___x_1350_ = lean_usize_of_nat(v___x_1347_);
v___x_1351_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0_spec__0(v_a_1345_, v_as_1344_, v___x_1349_, v___x_1350_);
return v___x_1351_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0___boxed(lean_object* v_as_1352_, lean_object* v_a_1353_){
_start:
{
uint8_t v_res_1354_; lean_object* v_r_1355_; 
v_res_1354_ = l_Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0(v_as_1352_, v_a_1353_);
lean_dec(v_a_1353_);
lean_dec_ref(v_as_1352_);
v_r_1355_ = lean_box(v_res_1354_);
return v_r_1355_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1___redArg(lean_object* v_next_1356_, lean_object* v_upperBound_1357_, lean_object* v___x_1358_, lean_object* v_a_1359_, lean_object* v_b_1360_){
_start:
{
lean_object* v_a_1362_; uint8_t v___x_1370_; 
v___x_1370_ = lean_nat_dec_lt(v_a_1359_, v_upperBound_1357_);
if (v___x_1370_ == 0)
{
lean_dec(v_a_1359_);
return v_b_1360_;
}
else
{
lean_object* v___x_1371_; lean_object* v_backDeps_1372_; uint8_t v___x_1373_; 
v___x_1371_ = lean_array_fget_borrowed(v___x_1358_, v_a_1359_);
v_backDeps_1372_ = lean_ctor_get(v___x_1371_, 0);
v___x_1373_ = l_Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0(v_backDeps_1372_, v_next_1356_);
if (v___x_1373_ == 0)
{
v_a_1362_ = v_b_1360_;
goto v___jp_1361_;
}
else
{
uint8_t v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
v___x_1374_ = 0;
v___x_1375_ = lean_box(v___x_1374_);
v___x_1376_ = lean_array_get(v___x_1375_, v_b_1360_, v_a_1359_);
lean_dec(v___x_1375_);
v___x_1377_ = lean_unbox(v___x_1376_);
lean_dec(v___x_1376_);
switch(v___x_1377_)
{
case 2:
{
lean_dec(v_a_1359_);
goto v___jp_1366_;
}
case 0:
{
lean_dec(v_a_1359_);
goto v___jp_1366_;
}
default: 
{
v_a_1362_ = v_b_1360_;
goto v___jp_1361_;
}
}
}
}
v___jp_1361_:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1363_ = lean_unsigned_to_nat(1u);
v___x_1364_ = lean_nat_add(v_a_1359_, v___x_1363_);
lean_dec(v_a_1359_);
v_a_1359_ = v___x_1364_;
v_b_1360_ = v_a_1362_;
goto _start;
}
v___jp_1366_:
{
uint8_t v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1367_ = 0;
v___x_1368_ = lean_box(v___x_1367_);
v___x_1369_ = lean_array_set(v_b_1360_, v_next_1356_, v___x_1368_);
return v___x_1369_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1___redArg___boxed(lean_object* v_next_1378_, lean_object* v_upperBound_1379_, lean_object* v___x_1380_, lean_object* v_a_1381_, lean_object* v_b_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1___redArg(v_next_1378_, v_upperBound_1379_, v___x_1380_, v_a_1381_, v_b_1382_);
lean_dec_ref(v___x_1380_);
lean_dec(v_upperBound_1379_);
lean_dec(v_next_1378_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2___redArg(lean_object* v_upperBound_1384_, lean_object* v___x_1385_, lean_object* v___x_1386_, lean_object* v_a_1387_, lean_object* v_b_1388_){
_start:
{
uint8_t v___x_1389_; 
v___x_1389_ = lean_nat_dec_lt(v_a_1387_, v_upperBound_1384_);
if (v___x_1389_ == 0)
{
lean_dec(v_a_1387_);
return v_b_1388_;
}
else
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1390_ = lean_unsigned_to_nat(1u);
v___x_1391_ = lean_nat_add(v_a_1387_, v___x_1390_);
lean_inc(v___x_1391_);
v___x_1392_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1___redArg(v_a_1387_, v___x_1385_, v___x_1386_, v___x_1391_, v_b_1388_);
lean_dec(v_a_1387_);
v_a_1387_ = v___x_1391_;
v_b_1388_ = v___x_1392_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2___redArg___boxed(lean_object* v_upperBound_1394_, lean_object* v___x_1395_, lean_object* v___x_1396_, lean_object* v_a_1397_, lean_object* v_b_1398_){
_start:
{
lean_object* v_res_1399_; 
v_res_1399_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2___redArg(v_upperBound_1394_, v___x_1395_, v___x_1396_, v_a_1397_, v_b_1398_);
lean_dec_ref(v___x_1396_);
lean_dec(v___x_1395_);
lean_dec(v_upperBound_1394_);
return v_res_1399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies(lean_object* v_info_1400_, lean_object* v_kinds_1401_){
_start:
{
lean_object* v_paramInfo_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v_paramInfo_1402_ = lean_ctor_get(v_info_1400_, 0);
v___x_1403_ = lean_array_get_size(v_paramInfo_1402_);
v___x_1404_ = lean_unsigned_to_nat(0u);
v___x_1405_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2___redArg(v___x_1403_, v___x_1403_, v_paramInfo_1402_, v___x_1404_, v_kinds_1401_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies___boxed(lean_object* v_info_1406_, lean_object* v_kinds_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies(v_info_1406_, v_kinds_1407_);
lean_dec_ref(v_info_1406_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1(lean_object* v_next_1409_, lean_object* v_upperBound_1410_, lean_object* v___x_1411_, lean_object* v_inst_1412_, lean_object* v_R_1413_, lean_object* v_a_1414_, lean_object* v_b_1415_, lean_object* v_c_1416_){
_start:
{
lean_object* v___x_1417_; 
v___x_1417_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1___redArg(v_next_1409_, v_upperBound_1410_, v___x_1411_, v_a_1414_, v_b_1415_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1___boxed(lean_object* v_next_1418_, lean_object* v_upperBound_1419_, lean_object* v___x_1420_, lean_object* v_inst_1421_, lean_object* v_R_1422_, lean_object* v_a_1423_, lean_object* v_b_1424_, lean_object* v_c_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__1(v_next_1418_, v_upperBound_1419_, v___x_1420_, v_inst_1421_, v_R_1422_, v_a_1423_, v_b_1424_, v_c_1425_);
lean_dec_ref(v___x_1420_);
lean_dec(v_upperBound_1419_);
lean_dec(v_next_1418_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2(lean_object* v_upperBound_1427_, lean_object* v___x_1428_, lean_object* v___x_1429_, lean_object* v_inst_1430_, lean_object* v_R_1431_, lean_object* v_a_1432_, lean_object* v_b_1433_, lean_object* v_c_1434_){
_start:
{
lean_object* v___x_1435_; 
v___x_1435_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2___redArg(v_upperBound_1427_, v___x_1428_, v___x_1429_, v_a_1432_, v_b_1433_);
return v___x_1435_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2___boxed(lean_object* v_upperBound_1436_, lean_object* v___x_1437_, lean_object* v___x_1438_, lean_object* v_inst_1439_, lean_object* v_R_1440_, lean_object* v_a_1441_, lean_object* v_b_1442_, lean_object* v_c_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__2(v_upperBound_1436_, v___x_1437_, v___x_1438_, v_inst_1439_, v_R_1440_, v_a_1441_, v_b_1442_, v_c_1443_);
lean_dec_ref(v___x_1438_);
lean_dec(v___x_1437_);
lean_dec(v_upperBound_1436_);
return v_res_1444_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike_spec__0(lean_object* v_as_1445_, size_t v_i_1446_, size_t v_stop_1447_){
_start:
{
uint8_t v___x_1448_; 
v___x_1448_ = lean_usize_dec_eq(v_i_1446_, v_stop_1447_);
if (v___x_1448_ == 0)
{
lean_object* v___x_1449_; uint8_t v___x_1450_; 
v___x_1449_ = lean_array_uget_borrowed(v_as_1445_, v_i_1446_);
v___x_1450_ = lean_unbox(v___x_1449_);
switch(v___x_1450_)
{
case 3:
{
uint8_t v___x_1451_; 
v___x_1451_ = 1;
return v___x_1451_;
}
case 5:
{
uint8_t v___x_1452_; 
v___x_1452_ = 1;
return v___x_1452_;
}
default: 
{
size_t v___x_1453_; size_t v___x_1454_; 
v___x_1453_ = ((size_t)1ULL);
v___x_1454_ = lean_usize_add(v_i_1446_, v___x_1453_);
v_i_1446_ = v___x_1454_;
goto _start;
}
}
}
else
{
uint8_t v___x_1456_; 
v___x_1456_ = 0;
return v___x_1456_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike_spec__0___boxed(lean_object* v_as_1457_, lean_object* v_i_1458_, lean_object* v_stop_1459_){
_start:
{
size_t v_i_boxed_1460_; size_t v_stop_boxed_1461_; uint8_t v_res_1462_; lean_object* v_r_1463_; 
v_i_boxed_1460_ = lean_unbox_usize(v_i_1458_);
lean_dec(v_i_1458_);
v_stop_boxed_1461_ = lean_unbox_usize(v_stop_1459_);
lean_dec(v_stop_1459_);
v_res_1462_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike_spec__0(v_as_1457_, v_i_boxed_1460_, v_stop_boxed_1461_);
lean_dec_ref(v_as_1457_);
v_r_1463_ = lean_box(v_res_1462_);
return v_r_1463_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike(lean_object* v_kinds_1464_){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; 
v___x_1465_ = lean_unsigned_to_nat(0u);
v___x_1466_ = lean_array_get_size(v_kinds_1464_);
v___x_1467_ = lean_nat_dec_lt(v___x_1465_, v___x_1466_);
if (v___x_1467_ == 0)
{
return v___x_1467_;
}
else
{
if (v___x_1467_ == 0)
{
return v___x_1467_;
}
else
{
size_t v___x_1468_; size_t v___x_1469_; uint8_t v___x_1470_; 
v___x_1468_ = ((size_t)0ULL);
v___x_1469_ = lean_usize_of_nat(v___x_1466_);
v___x_1470_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike_spec__0(v_kinds_1464_, v___x_1468_, v___x_1469_);
return v___x_1470_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike___boxed(lean_object* v_kinds_1471_){
_start:
{
uint8_t v_res_1472_; lean_object* v_r_1473_; 
v_res_1472_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike(v_kinds_1471_);
lean_dec_ref(v_kinds_1471_);
v_r_1473_ = lean_box(v_res_1472_);
return v_r_1473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg___lam__0(lean_object* v___x_1474_, lean_object* v_k_1475_, lean_object* v_xs_1476_, lean_object* v_type_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1483_ = lean_unsigned_to_nat(0u);
v___x_1484_ = lean_array_get_borrowed(v___x_1474_, v_xs_1476_, v___x_1483_);
lean_inc(v___y_1481_);
lean_inc_ref(v___y_1480_);
lean_inc(v___y_1479_);
lean_inc_ref(v___y_1478_);
lean_inc(v___x_1484_);
v___x_1485_ = lean_apply_7(v_k_1475_, v___x_1484_, v_type_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, lean_box(0));
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg___lam__0___boxed(lean_object* v___x_1486_, lean_object* v_k_1487_, lean_object* v_xs_1488_, lean_object* v_type_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_){
_start:
{
lean_object* v_res_1495_; 
v_res_1495_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg___lam__0(v___x_1486_, v_k_1487_, v_xs_1488_, v_type_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_);
lean_dec(v___y_1493_);
lean_dec_ref(v___y_1492_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
lean_dec_ref(v_xs_1488_);
lean_dec_ref(v___x_1486_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg(lean_object* v_type_1496_, lean_object* v_k_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_){
_start:
{
lean_object* v___x_1503_; lean_object* v___f_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; uint8_t v___x_1507_; lean_object* v___x_1508_; 
v___x_1503_ = l_Lean_instInhabitedExpr;
v___f_1504_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1504_, 0, v___x_1503_);
lean_closure_set(v___f_1504_, 1, v_k_1497_);
v___x_1505_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__4));
v___x_1506_ = 1;
v___x_1507_ = 0;
v___x_1508_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg(v_type_1496_, v___x_1505_, v___f_1504_, v___x_1506_, v___x_1507_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg___boxed(lean_object* v_type_1509_, lean_object* v_k_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg(v_type_1509_, v_k_1510_, v_a_1511_, v_a_1512_, v_a_1513_, v_a_1514_);
lean_dec(v_a_1514_);
lean_dec_ref(v_a_1513_);
lean_dec(v_a_1512_);
lean_dec_ref(v_a_1511_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext(lean_object* v_00_u03b1_1517_, lean_object* v_type_1518_, lean_object* v_k_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg(v_type_1518_, v_k_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___boxed(lean_object* v_00_u03b1_1526_, lean_object* v_type_1527_, lean_object* v_k_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext(v_00_u03b1_1526_, v_type_1527_, v_k_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_);
lean_dec(v_a_1532_);
lean_dec_ref(v_a_1531_);
lean_dec(v_a_1530_);
lean_dec_ref(v_a_1529_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst_spec__0(lean_object* v_kinds_1538_, uint8_t v___x_1539_, lean_object* v_as_1540_, size_t v_sz_1541_, size_t v_i_1542_, lean_object* v_b_1543_){
_start:
{
uint8_t v___x_1544_; 
v___x_1544_ = lean_usize_dec_lt(v_i_1542_, v_sz_1541_);
if (v___x_1544_ == 0)
{
lean_inc_ref(v_b_1543_);
return v_b_1543_;
}
else
{
uint8_t v___x_1545_; lean_object* v___x_1546_; lean_object* v_a_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; uint8_t v___x_1550_; 
v___x_1545_ = 0;
v___x_1546_ = lean_box(0);
v_a_1547_ = lean_array_uget_borrowed(v_as_1540_, v_i_1542_);
v___x_1548_ = lean_box(v___x_1545_);
v___x_1549_ = lean_array_get(v___x_1548_, v_kinds_1538_, v_a_1547_);
lean_dec(v___x_1548_);
v___x_1550_ = lean_unbox(v___x_1549_);
lean_dec(v___x_1549_);
if (v___x_1550_ == 2)
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1551_ = lean_box(v___x_1539_);
v___x_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1551_);
v___x_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
lean_ctor_set(v___x_1553_, 1, v___x_1546_);
return v___x_1553_;
}
else
{
lean_object* v___x_1554_; size_t v___x_1555_; size_t v___x_1556_; 
v___x_1554_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst_spec__0___closed__0));
v___x_1555_ = ((size_t)1ULL);
v___x_1556_ = lean_usize_add(v_i_1542_, v___x_1555_);
v_i_1542_ = v___x_1556_;
v_b_1543_ = v___x_1554_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst_spec__0___boxed(lean_object* v_kinds_1558_, lean_object* v___x_1559_, lean_object* v_as_1560_, lean_object* v_sz_1561_, lean_object* v_i_1562_, lean_object* v_b_1563_){
_start:
{
uint8_t v___x_635__boxed_1564_; size_t v_sz_boxed_1565_; size_t v_i_boxed_1566_; lean_object* v_res_1567_; 
v___x_635__boxed_1564_ = lean_unbox(v___x_1559_);
v_sz_boxed_1565_ = lean_unbox_usize(v_sz_1561_);
lean_dec(v_sz_1561_);
v_i_boxed_1566_ = lean_unbox_usize(v_i_1562_);
lean_dec(v_i_1562_);
v_res_1567_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst_spec__0(v_kinds_1558_, v___x_635__boxed_1564_, v_as_1560_, v_sz_boxed_1565_, v_i_boxed_1566_, v_b_1563_);
lean_dec_ref(v_b_1563_);
lean_dec_ref(v_as_1560_);
lean_dec_ref(v_kinds_1558_);
return v_res_1567_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst(lean_object* v_info_1568_, lean_object* v_kinds_1569_, lean_object* v_i_1570_){
_start:
{
lean_object* v_paramInfo_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; uint8_t v_isDecInst_1574_; 
v_paramInfo_1571_ = lean_ctor_get(v_info_1568_, 0);
v___x_1572_ = l_Lean_Meta_instInhabitedParamInfo_default;
v___x_1573_ = lean_array_get_borrowed(v___x_1572_, v_paramInfo_1571_, v_i_1570_);
v_isDecInst_1574_ = lean_ctor_get_uint8(v___x_1573_, sizeof(void*)*1 + 3);
if (v_isDecInst_1574_ == 0)
{
return v_isDecInst_1574_;
}
else
{
lean_object* v_backDeps_1575_; lean_object* v___x_1576_; size_t v_sz_1577_; size_t v___x_1578_; lean_object* v___x_1579_; lean_object* v_fst_1580_; 
v_backDeps_1575_ = lean_ctor_get(v___x_1573_, 0);
v___x_1576_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst_spec__0___closed__0));
v_sz_1577_ = lean_array_size(v_backDeps_1575_);
v___x_1578_ = ((size_t)0ULL);
v___x_1579_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst_spec__0(v_kinds_1569_, v_isDecInst_1574_, v_backDeps_1575_, v_sz_1577_, v___x_1578_, v___x_1576_);
v_fst_1580_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_fst_1580_);
lean_dec_ref(v___x_1579_);
if (lean_obj_tag(v_fst_1580_) == 0)
{
uint8_t v___x_1581_; 
v___x_1581_ = 0;
return v___x_1581_;
}
else
{
lean_object* v_val_1582_; uint8_t v___x_1583_; 
v_val_1582_ = lean_ctor_get(v_fst_1580_, 0);
lean_inc(v_val_1582_);
lean_dec_ref_known(v_fst_1580_, 1);
v___x_1583_ = lean_unbox(v_val_1582_);
lean_dec(v_val_1582_);
return v___x_1583_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst___boxed(lean_object* v_info_1584_, lean_object* v_kinds_1585_, lean_object* v_i_1586_){
_start:
{
uint8_t v_res_1587_; lean_object* v_r_1588_; 
v_res_1587_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst(v_info_1584_, v_kinds_1585_, v_i_1586_);
lean_dec(v_i_1586_);
lean_dec_ref(v_kinds_1585_);
lean_dec_ref(v_info_1584_);
v_r_1588_ = lean_box(v_res_1587_);
return v_r_1588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2___redArg(lean_object* v_type_1589_, lean_object* v_k_1590_, uint8_t v_cleanupAnnotations_1591_, uint8_t v_whnfType_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
lean_object* v___f_1598_; lean_object* v___x_1599_; 
v___f_1598_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1598_, 0, v_k_1590_);
v___x_1599_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1589_, v___f_1598_, v_cleanupAnnotations_1591_, v_whnfType_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1607_; 
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1602_ = v___x_1599_;
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1599_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1605_; 
if (v_isShared_1603_ == 0)
{
v___x_1605_ = v___x_1602_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_a_1600_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
v_a_1608_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1599_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1599_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2___redArg___boxed(lean_object* v_type_1616_, lean_object* v_k_1617_, lean_object* v_cleanupAnnotations_1618_, lean_object* v_whnfType_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1625_; uint8_t v_whnfType_boxed_1626_; lean_object* v_res_1627_; 
v_cleanupAnnotations_boxed_1625_ = lean_unbox(v_cleanupAnnotations_1618_);
v_whnfType_boxed_1626_ = lean_unbox(v_whnfType_1619_);
v_res_1627_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2___redArg(v_type_1616_, v_k_1617_, v_cleanupAnnotations_boxed_1625_, v_whnfType_boxed_1626_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2(lean_object* v_00_u03b1_1628_, lean_object* v_type_1629_, lean_object* v_k_1630_, uint8_t v_cleanupAnnotations_1631_, uint8_t v_whnfType_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v___x_1638_; 
v___x_1638_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2___redArg(v_type_1629_, v_k_1630_, v_cleanupAnnotations_1631_, v_whnfType_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2___boxed(lean_object* v_00_u03b1_1639_, lean_object* v_type_1640_, lean_object* v_k_1641_, lean_object* v_cleanupAnnotations_1642_, lean_object* v_whnfType_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1649_; uint8_t v_whnfType_boxed_1650_; lean_object* v_res_1651_; 
v_cleanupAnnotations_boxed_1649_ = lean_unbox(v_cleanupAnnotations_1642_);
v_whnfType_boxed_1650_ = lean_unbox(v_whnfType_1643_);
v_res_1651_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2(v_00_u03b1_1639_, v_type_1640_, v_k_1641_, v_cleanupAnnotations_boxed_1649_, v_whnfType_boxed_1650_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1___redArg(lean_object* v_upperBound_1652_, lean_object* v_val_1653_, lean_object* v_xs_1654_, lean_object* v___x_1655_, lean_object* v_a_1656_, lean_object* v_b_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_){
_start:
{
lean_object* v_a_1663_; uint8_t v___x_1667_; 
v___x_1667_ = lean_nat_dec_lt(v_a_1656_, v_upperBound_1652_);
if (v___x_1667_ == 0)
{
lean_object* v___x_1668_; 
lean_dec(v_a_1656_);
lean_dec_ref(v___x_1655_);
lean_dec_ref(v_val_1653_);
v___x_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1668_, 0, v_b_1657_);
return v___x_1668_;
}
else
{
lean_object* v_induct_1669_; lean_object* v_numParams_1670_; uint8_t v___x_1671_; 
v_induct_1669_ = lean_ctor_get(v_val_1653_, 1);
v_numParams_1670_ = lean_ctor_get(v_val_1653_, 3);
v___x_1671_ = lean_nat_dec_lt(v_a_1656_, v_numParams_1670_);
if (v___x_1671_ == 0)
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1672_ = lean_array_fget_borrowed(v_xs_1654_, v_a_1656_);
v___x_1673_ = l_Lean_Expr_fvarId_x21(v___x_1672_);
v___x_1674_ = l_Lean_FVarId_getDecl___redArg(v___x_1673_, v___y_1658_, v___y_1659_, v___y_1660_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_a_1675_; uint8_t v___y_1677_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
lean_inc(v_a_1675_);
lean_dec_ref_known(v___x_1674_, 1);
v___x_1680_ = l_Lean_LocalDecl_userName(v_a_1675_);
lean_dec(v_a_1675_);
lean_inc(v_induct_1669_);
lean_inc_ref(v___x_1655_);
v___x_1681_ = l_Lean_isSubobjectField_x3f(v___x_1655_, v_induct_1669_, v___x_1680_);
if (lean_obj_tag(v___x_1681_) == 0)
{
v___y_1677_ = v___x_1671_;
goto v___jp_1676_;
}
else
{
lean_dec_ref_known(v___x_1681_, 1);
v___y_1677_ = v___x_1667_;
goto v___jp_1676_;
}
v___jp_1676_:
{
lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1678_ = lean_box(v___y_1677_);
v___x_1679_ = lean_array_push(v_b_1657_, v___x_1678_);
v_a_1663_ = v___x_1679_;
goto v___jp_1662_;
}
}
else
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1689_; 
lean_dec_ref(v_b_1657_);
lean_dec(v_a_1656_);
lean_dec_ref(v___x_1655_);
lean_dec_ref(v_val_1653_);
v_a_1682_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1684_ = v___x_1674_;
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v___x_1674_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1687_; 
if (v_isShared_1685_ == 0)
{
v___x_1687_ = v___x_1684_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v_a_1682_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
}
else
{
uint8_t v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1690_ = 0;
v___x_1691_ = lean_box(v___x_1690_);
v___x_1692_ = lean_array_push(v_b_1657_, v___x_1691_);
v_a_1663_ = v___x_1692_;
goto v___jp_1662_;
}
}
v___jp_1662_:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1664_ = lean_unsigned_to_nat(1u);
v___x_1665_ = lean_nat_add(v_a_1656_, v___x_1664_);
lean_dec(v_a_1656_);
v_a_1656_ = v___x_1665_;
v_b_1657_ = v_a_1663_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1___redArg___boxed(lean_object* v_upperBound_1693_, lean_object* v_val_1694_, lean_object* v_xs_1695_, lean_object* v___x_1696_, lean_object* v_a_1697_, lean_object* v_b_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1___redArg(v_upperBound_1693_, v_val_1694_, v_xs_1695_, v___x_1696_, v_a_1697_, v_b_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec_ref(v_xs_1695_);
lean_dec(v_upperBound_1693_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___lam__0(lean_object* v_val_1706_, lean_object* v_xs_1707_, lean_object* v_x_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v___x_1714_; lean_object* v_env_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1714_ = lean_st_ref_get(v___y_1712_);
v_env_1715_ = lean_ctor_get(v___x_1714_, 0);
lean_inc_ref(v_env_1715_);
lean_dec(v___x_1714_);
v___x_1716_ = lean_array_get_size(v_xs_1707_);
v___x_1717_ = lean_unsigned_to_nat(0u);
v___x_1718_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___lam__0___closed__0));
v___x_1719_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1___redArg(v___x_1716_, v_val_1706_, v_xs_1707_, v_env_1715_, v___x_1717_, v___x_1718_, v___y_1709_, v___y_1711_, v___y_1712_);
if (lean_obj_tag(v___x_1719_) == 0)
{
lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1728_; 
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1722_ = v___x_1719_;
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v___x_1719_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1724_; lean_object* v___x_1726_; 
v___x_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1724_, 0, v_a_1720_);
if (v_isShared_1723_ == 0)
{
lean_ctor_set(v___x_1722_, 0, v___x_1724_);
v___x_1726_ = v___x_1722_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v___x_1724_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
v_a_1729_ = lean_ctor_get(v___x_1719_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1719_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1719_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1729_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___lam__0___boxed(lean_object* v_val_1737_, lean_object* v_xs_1738_, lean_object* v_x_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___lam__0(v_val_1737_, v_xs_1738_, v_x_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec_ref(v_x_1739_);
lean_dec_ref(v_xs_1738_);
return v_res_1745_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1746_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1747_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_1748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1747_);
return v___x_1748_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1749_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1750_ = lean_unsigned_to_nat(0u);
v___x_1751_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1750_);
lean_ctor_set(v___x_1751_, 1, v___x_1750_);
lean_ctor_set(v___x_1751_, 2, v___x_1750_);
lean_ctor_set(v___x_1751_, 3, v___x_1750_);
lean_ctor_set(v___x_1751_, 4, v___x_1749_);
lean_ctor_set(v___x_1751_, 5, v___x_1749_);
lean_ctor_set(v___x_1751_, 6, v___x_1749_);
lean_ctor_set(v___x_1751_, 7, v___x_1749_);
lean_ctor_set(v___x_1751_, 8, v___x_1749_);
lean_ctor_set(v___x_1751_, 9, v___x_1749_);
lean_ctor_set(v___x_1751_, 10, v___x_1749_);
return v___x_1751_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1752_ = lean_unsigned_to_nat(32u);
v___x_1753_ = lean_mk_empty_array_with_capacity(v___x_1752_);
v___x_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
return v___x_1754_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4(void){
_start:
{
size_t v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1755_ = ((size_t)5ULL);
v___x_1756_ = lean_unsigned_to_nat(0u);
v___x_1757_ = lean_unsigned_to_nat(32u);
v___x_1758_ = lean_mk_empty_array_with_capacity(v___x_1757_);
v___x_1759_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_1760_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1760_, 0, v___x_1759_);
lean_ctor_set(v___x_1760_, 1, v___x_1758_);
lean_ctor_set(v___x_1760_, 2, v___x_1756_);
lean_ctor_set(v___x_1760_, 3, v___x_1756_);
lean_ctor_set_usize(v___x_1760_, 4, v___x_1755_);
return v___x_1760_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1761_ = lean_box(1);
v___x_1762_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_1763_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1764_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
lean_ctor_set(v___x_1764_, 1, v___x_1762_);
lean_ctor_set(v___x_1764_, 2, v___x_1761_);
return v___x_1764_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__7(void){
_start:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1766_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__6));
v___x_1767_ = l_Lean_stringToMessageData(v___x_1766_);
return v___x_1767_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__9(void){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__8));
v___x_1770_ = l_Lean_stringToMessageData(v___x_1769_);
return v___x_1770_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__11(void){
_start:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__10));
v___x_1773_ = l_Lean_stringToMessageData(v___x_1772_);
return v___x_1773_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__13(void){
_start:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1775_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__12));
v___x_1776_ = l_Lean_stringToMessageData(v___x_1775_);
return v___x_1776_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__15(void){
_start:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1778_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__14));
v___x_1779_ = l_Lean_stringToMessageData(v___x_1778_);
return v___x_1779_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__17(void){
_start:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1781_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__16));
v___x_1782_ = l_Lean_stringToMessageData(v___x_1781_);
return v___x_1782_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__19(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__18));
v___x_1785_ = l_Lean_stringToMessageData(v___x_1784_);
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_msg_1786_, lean_object* v_declHint_1787_, lean_object* v___y_1788_){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v_env_1792_; uint8_t v___x_1793_; 
v___x_1790_ = lean_box(0);
v___x_1791_ = lean_st_ref_get(v___y_1788_);
v_env_1792_ = lean_ctor_get(v___x_1791_, 0);
lean_inc_ref(v_env_1792_);
lean_dec(v___x_1791_);
v___x_1793_ = l_Lean_Name_isAnonymous(v_declHint_1787_);
if (v___x_1793_ == 0)
{
uint8_t v_isExporting_1794_; 
v_isExporting_1794_ = lean_ctor_get_uint8(v_env_1792_, sizeof(void*)*13);
if (v_isExporting_1794_ == 0)
{
lean_object* v___x_1795_; 
lean_dec_ref(v_env_1792_);
lean_dec(v_declHint_1787_);
v___x_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1795_, 0, v_msg_1786_);
return v___x_1795_;
}
else
{
lean_object* v___x_1796_; uint8_t v___x_1797_; 
lean_inc_ref(v_env_1792_);
v___x_1796_ = l_Lean_Environment_setExporting(v_env_1792_, v___x_1793_);
lean_inc(v_declHint_1787_);
lean_inc_ref(v___x_1796_);
v___x_1797_ = l_Lean_Environment_contains(v___x_1796_, v_declHint_1787_, v_isExporting_1794_);
if (v___x_1797_ == 0)
{
lean_object* v___x_1798_; 
lean_dec_ref(v___x_1796_);
lean_dec_ref(v_env_1792_);
lean_dec(v_declHint_1787_);
v___x_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1798_, 0, v_msg_1786_);
return v___x_1798_;
}
else
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v_c_1804_; lean_object* v___x_1805_; 
v___x_1799_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__2);
v___x_1800_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__5);
v___x_1801_ = l_Lean_Options_empty;
lean_inc_ref(v___x_1796_);
v___x_1802_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1796_);
lean_ctor_set(v___x_1802_, 1, v___x_1799_);
lean_ctor_set(v___x_1802_, 2, v___x_1800_);
lean_ctor_set(v___x_1802_, 3, v___x_1801_);
lean_inc(v_declHint_1787_);
v___x_1803_ = l_Lean_MessageData_ofConstName(v_declHint_1787_, v___x_1793_);
v_c_1804_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1804_, 0, v___x_1802_);
lean_ctor_set(v_c_1804_, 1, v___x_1803_);
v___x_1805_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_1796_, v_declHint_1787_);
lean_dec_ref(v___x_1796_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
lean_dec_ref(v_env_1792_);
lean_dec(v_declHint_1787_);
v___x_1806_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_1807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1806_);
lean_ctor_set(v___x_1807_, 1, v_c_1804_);
v___x_1808_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__9);
v___x_1809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1807_);
lean_ctor_set(v___x_1809_, 1, v___x_1808_);
v___x_1810_ = l_Lean_MessageData_note(v___x_1809_);
v___x_1811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1811_, 0, v_msg_1786_);
lean_ctor_set(v___x_1811_, 1, v___x_1810_);
v___x_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1811_);
return v___x_1812_;
}
else
{
lean_object* v_val_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1847_; 
v_val_1813_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1815_ = v___x_1805_;
v_isShared_1816_ = v_isSharedCheck_1847_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_val_1813_);
lean_dec(v___x_1805_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1847_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1817_; lean_object* v_moduleNames_1818_; lean_object* v_mod_1819_; uint8_t v___x_1820_; 
v___x_1817_ = l_Lean_Environment_header(v_env_1792_);
lean_dec_ref(v_env_1792_);
v_moduleNames_1818_ = lean_ctor_get(v___x_1817_, 4);
lean_inc_ref(v_moduleNames_1818_);
lean_dec_ref(v___x_1817_);
v_mod_1819_ = lean_array_get(v___x_1790_, v_moduleNames_1818_, v_val_1813_);
lean_dec(v_val_1813_);
lean_dec_ref(v_moduleNames_1818_);
v___x_1820_ = l_Lean_isPrivateName(v_declHint_1787_);
lean_dec(v_declHint_1787_);
if (v___x_1820_ == 0)
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1832_; 
v___x_1821_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__11);
v___x_1822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1821_);
lean_ctor_set(v___x_1822_, 1, v_c_1804_);
v___x_1823_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__13);
v___x_1824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1824_, 0, v___x_1822_);
lean_ctor_set(v___x_1824_, 1, v___x_1823_);
v___x_1825_ = l_Lean_MessageData_ofName(v_mod_1819_);
v___x_1826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1824_);
lean_ctor_set(v___x_1826_, 1, v___x_1825_);
v___x_1827_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__15);
v___x_1828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1826_);
lean_ctor_set(v___x_1828_, 1, v___x_1827_);
v___x_1829_ = l_Lean_MessageData_note(v___x_1828_);
v___x_1830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1830_, 0, v_msg_1786_);
lean_ctor_set(v___x_1830_, 1, v___x_1829_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set_tag(v___x_1815_, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1830_);
v___x_1832_ = v___x_1815_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v___x_1830_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
else
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1845_; 
v___x_1834_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_1835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1834_);
lean_ctor_set(v___x_1835_, 1, v_c_1804_);
v___x_1836_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__17);
v___x_1837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1835_);
lean_ctor_set(v___x_1837_, 1, v___x_1836_);
v___x_1838_ = l_Lean_MessageData_ofName(v_mod_1819_);
v___x_1839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1837_);
lean_ctor_set(v___x_1839_, 1, v___x_1838_);
v___x_1840_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__19);
v___x_1841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1839_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
v___x_1842_ = l_Lean_MessageData_note(v___x_1841_);
v___x_1843_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1843_, 0, v_msg_1786_);
lean_ctor_set(v___x_1843_, 1, v___x_1842_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set_tag(v___x_1815_, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1843_);
v___x_1845_ = v___x_1815_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v___x_1843_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1848_; 
lean_dec_ref(v_env_1792_);
lean_dec(v_declHint_1787_);
v___x_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1848_, 0, v_msg_1786_);
return v___x_1848_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_msg_1849_, lean_object* v_declHint_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg(v_msg_1849_, v_declHint_1850_, v___y_1851_);
lean_dec(v___y_1851_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_msg_1854_, lean_object* v_declHint_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
lean_object* v___x_1861_; lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1871_; 
v___x_1861_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg(v_msg_1854_, v_declHint_1855_, v___y_1859_);
v_a_1862_ = lean_ctor_get(v___x_1861_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1861_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1864_ = v___x_1861_;
v_isShared_1865_ = v_isSharedCheck_1871_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v___x_1861_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1871_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1869_; 
v___x_1866_ = l_Lean_unknownIdentifierMessageTag;
v___x_1867_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1866_);
lean_ctor_set(v___x_1867_, 1, v_a_1862_);
if (v_isShared_1865_ == 0)
{
lean_ctor_set(v___x_1864_, 0, v___x_1867_);
v___x_1869_ = v___x_1864_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object* v_msg_1872_, lean_object* v_declHint_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5(v_msg_1872_, v_declHint_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6___redArg(lean_object* v_ref_1880_, lean_object* v_msg_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
lean_object* v_toCold_1887_; lean_object* v_currRecDepth_1888_; lean_object* v_ref_1889_; uint16_t v_optionFlags_1890_; uint8_t v_suppressElabErrors_1891_; uint8_t v_checkDeprecated_1892_; uint8_t v_isRecordingDeps_1893_; lean_object* v_ref_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v_toCold_1887_ = lean_ctor_get(v___y_1884_, 0);
v_currRecDepth_1888_ = lean_ctor_get(v___y_1884_, 1);
v_ref_1889_ = lean_ctor_get(v___y_1884_, 2);
v_optionFlags_1890_ = lean_ctor_get_uint16(v___y_1884_, sizeof(void*)*3);
v_suppressElabErrors_1891_ = lean_ctor_get_uint8(v___y_1884_, sizeof(void*)*3 + 2);
v_checkDeprecated_1892_ = lean_ctor_get_uint8(v___y_1884_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1893_ = lean_ctor_get_uint8(v___y_1884_, sizeof(void*)*3 + 4);
v_ref_1894_ = l_Lean_replaceRef(v_ref_1880_, v_ref_1889_);
lean_inc(v_currRecDepth_1888_);
lean_inc_ref(v_toCold_1887_);
v___x_1895_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1895_, 0, v_toCold_1887_);
lean_ctor_set(v___x_1895_, 1, v_currRecDepth_1888_);
lean_ctor_set(v___x_1895_, 2, v_ref_1894_);
lean_ctor_set_uint16(v___x_1895_, sizeof(void*)*3, v_optionFlags_1890_);
lean_ctor_set_uint8(v___x_1895_, sizeof(void*)*3 + 2, v_suppressElabErrors_1891_);
lean_ctor_set_uint8(v___x_1895_, sizeof(void*)*3 + 3, v_checkDeprecated_1892_);
lean_ctor_set_uint8(v___x_1895_, sizeof(void*)*3 + 4, v_isRecordingDeps_1893_);
v___x_1896_ = l_Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0___redArg(v_msg_1881_, v___y_1882_, v___y_1883_, v___x_1895_, v___y_1885_);
lean_dec_ref_known(v___x_1895_, 3);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_ref_1897_, lean_object* v_msg_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6___redArg(v_ref_1897_, v_msg_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1899_);
lean_dec(v_ref_1897_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_ref_1905_, lean_object* v_msg_1906_, lean_object* v_declHint_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_){
_start:
{
lean_object* v___x_1913_; lean_object* v_a_1914_; lean_object* v___x_1915_; 
v___x_1913_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5(v_msg_1906_, v_declHint_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
v_a_1914_ = lean_ctor_get(v___x_1913_, 0);
lean_inc(v_a_1914_);
lean_dec_ref(v___x_1913_);
v___x_1915_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6___redArg(v_ref_1905_, v_a_1914_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
return v___x_1915_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_ref_1916_, lean_object* v_msg_1917_, lean_object* v_declHint_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4___redArg(v_ref_1916_, v_msg_1917_, v_declHint_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec(v_ref_1916_);
return v_res_1924_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1926_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_1927_ = l_Lean_stringToMessageData(v___x_1926_);
return v___x_1927_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__2));
v___x_1930_ = l_Lean_stringToMessageData(v___x_1929_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg(lean_object* v_ref_1931_, lean_object* v_constName_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_){
_start:
{
lean_object* v___x_1938_; uint8_t v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1938_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_1939_ = 0;
lean_inc(v_constName_1932_);
v___x_1940_ = l_Lean_MessageData_ofConstName(v_constName_1932_, v___x_1939_);
v___x_1941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1938_);
lean_ctor_set(v___x_1941_, 1, v___x_1940_);
v___x_1942_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__3);
v___x_1943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1941_);
lean_ctor_set(v___x_1943_, 1, v___x_1942_);
v___x_1944_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4___redArg(v_ref_1931_, v___x_1943_, v_constName_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ref_1945_, lean_object* v_constName_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_){
_start:
{
lean_object* v_res_1952_; 
v_res_1952_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg(v_ref_1945_, v_constName_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
lean_dec(v_ref_1945_);
return v_res_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0___redArg(lean_object* v_constName_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_){
_start:
{
lean_object* v_ref_1959_; lean_object* v___x_1960_; 
v_ref_1959_ = lean_ctor_get(v___y_1956_, 2);
v___x_1960_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg(v_ref_1959_, v_constName_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0___redArg(v_constName_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0(lean_object* v_constName_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_){
_start:
{
lean_object* v___x_1974_; lean_object* v_env_1975_; uint8_t v___x_1976_; lean_object* v___x_1977_; 
v___x_1974_ = lean_st_ref_get(v___y_1972_);
v_env_1975_ = lean_ctor_get(v___x_1974_, 0);
lean_inc_ref(v_env_1975_);
lean_dec(v___x_1974_);
v___x_1976_ = 0;
lean_inc(v_constName_1968_);
v___x_1977_ = l_Lean_Environment_find_x3f(v_env_1975_, v_constName_1968_, v___x_1976_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v___x_1978_; 
v___x_1978_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0___redArg(v_constName_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
return v___x_1978_;
}
else
{
lean_object* v_val_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1986_; 
lean_dec(v_constName_1968_);
v_val_1979_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_1986_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1981_ = v___x_1977_;
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_val_1979_);
lean_dec(v___x_1977_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1982_ == 0)
{
lean_ctor_set_tag(v___x_1981_, 0);
v___x_1984_ = v___x_1981_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_val_1979_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0___boxed(lean_object* v_constName_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0(v_constName_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_);
lean_dec(v___y_1991_);
lean_dec_ref(v___y_1990_);
lean_dec(v___y_1989_);
lean_dec_ref(v___y_1988_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f(lean_object* v_f_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_){
_start:
{
if (lean_obj_tag(v_f_1994_) == 4)
{
lean_object* v_declName_2000_; lean_object* v___x_2001_; 
v_declName_2000_ = lean_ctor_get(v_f_1994_, 0);
lean_inc(v_declName_2000_);
lean_dec_ref_known(v_f_1994_, 2);
v___x_2001_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0(v_declName_2000_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2024_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2004_ = v___x_2001_;
v_isShared_2005_ = v_isSharedCheck_2024_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_2001_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2024_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
if (lean_obj_tag(v_a_2002_) == 6)
{
lean_object* v_val_2006_; lean_object* v___f_2007_; lean_object* v___x_2008_; lean_object* v_env_2009_; lean_object* v_toConstantVal_2010_; lean_object* v_induct_2011_; uint8_t v___x_2012_; 
v_val_2006_ = lean_ctor_get(v_a_2002_, 0);
lean_inc_ref_n(v_val_2006_, 2);
lean_dec_ref_known(v_a_2002_, 1);
v___f_2007_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2007_, 0, v_val_2006_);
v___x_2008_ = lean_st_ref_get(v_a_1998_);
v_env_2009_ = lean_ctor_get(v___x_2008_, 0);
lean_inc_ref(v_env_2009_);
lean_dec(v___x_2008_);
v_toConstantVal_2010_ = lean_ctor_get(v_val_2006_, 0);
lean_inc_ref(v_toConstantVal_2010_);
v_induct_2011_ = lean_ctor_get(v_val_2006_, 1);
lean_inc(v_induct_2011_);
lean_dec_ref(v_val_2006_);
v___x_2012_ = l_Lean_isClass(v_env_2009_, v_induct_2011_);
lean_dec(v_induct_2011_);
if (v___x_2012_ == 0)
{
lean_object* v___x_2013_; lean_object* v___x_2015_; 
lean_dec_ref(v_toConstantVal_2010_);
lean_dec_ref(v___f_2007_);
v___x_2013_ = lean_box(0);
if (v_isShared_2005_ == 0)
{
lean_ctor_set(v___x_2004_, 0, v___x_2013_);
v___x_2015_ = v___x_2004_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v___x_2013_);
v___x_2015_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
return v___x_2015_;
}
}
else
{
lean_object* v_type_2017_; uint8_t v___x_2018_; lean_object* v___x_2019_; 
lean_del_object(v___x_2004_);
v_type_2017_ = lean_ctor_get(v_toConstantVal_2010_, 2);
lean_inc_ref(v_type_2017_);
lean_dec_ref(v_toConstantVal_2010_);
v___x_2018_ = 0;
v___x_2019_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__2___redArg(v_type_2017_, v___f_2007_, v___x_2012_, v___x_2018_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_);
return v___x_2019_;
}
}
else
{
lean_object* v___x_2020_; lean_object* v___x_2022_; 
lean_dec(v_a_2002_);
v___x_2020_ = lean_box(0);
if (v_isShared_2005_ == 0)
{
lean_ctor_set(v___x_2004_, 0, v___x_2020_);
v___x_2022_ = v___x_2004_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v___x_2020_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
v_a_2025_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_2001_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2001_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
}
else
{
lean_object* v___x_2033_; lean_object* v___x_2034_; 
lean_dec_ref(v_f_1994_);
v___x_2033_ = lean_box(0);
v___x_2034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2033_);
return v___x_2034_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f___boxed(lean_object* v_f_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f(v_f_2035_, v_a_2036_, v_a_2037_, v_a_2038_, v_a_2039_);
lean_dec(v_a_2039_);
lean_dec_ref(v_a_2038_);
lean_dec(v_a_2037_);
lean_dec_ref(v_a_2036_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1(lean_object* v_upperBound_2042_, lean_object* v_val_2043_, lean_object* v_xs_2044_, lean_object* v___x_2045_, lean_object* v_inst_2046_, lean_object* v_R_2047_, lean_object* v_a_2048_, lean_object* v_b_2049_, lean_object* v_c_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_){
_start:
{
lean_object* v___x_2056_; 
v___x_2056_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1___redArg(v_upperBound_2042_, v_val_2043_, v_xs_2044_, v___x_2045_, v_a_2048_, v_b_2049_, v___y_2051_, v___y_2053_, v___y_2054_);
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1___boxed(lean_object* v_upperBound_2057_, lean_object* v_val_2058_, lean_object* v_xs_2059_, lean_object* v___x_2060_, lean_object* v_inst_2061_, lean_object* v_R_2062_, lean_object* v_a_2063_, lean_object* v_b_2064_, lean_object* v_c_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__1(v_upperBound_2057_, v_val_2058_, v_xs_2059_, v___x_2060_, v_inst_2061_, v_R_2062_, v_a_2063_, v_b_2064_, v_c_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
lean_dec(v___y_2069_);
lean_dec_ref(v___y_2068_);
lean_dec(v___y_2067_);
lean_dec_ref(v___y_2066_);
lean_dec_ref(v_xs_2059_);
lean_dec(v_upperBound_2057_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0(lean_object* v_00_u03b1_2072_, lean_object* v_constName_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
lean_object* v___x_2079_; 
v___x_2079_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0___redArg(v_constName_2073_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2080_, lean_object* v_constName_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0(v_00_u03b1_2080_, v_constName_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_2088_, lean_object* v_ref_2089_, lean_object* v_constName_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_){
_start:
{
lean_object* v___x_2096_; 
v___x_2096_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg(v_ref_2089_, v_constName_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2097_, lean_object* v_ref_2098_, lean_object* v_constName_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2(v_00_u03b1_2097_, v_ref_2098_, v_constName_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec(v_ref_2098_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b1_2106_, lean_object* v_ref_2107_, lean_object* v_msg_2108_, lean_object* v_declHint_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v___x_2115_; 
v___x_2115_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4___redArg(v_ref_2107_, v_msg_2108_, v_declHint_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
return v___x_2115_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b1_2116_, lean_object* v_ref_2117_, lean_object* v_msg_2118_, lean_object* v_declHint_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_){
_start:
{
lean_object* v_res_2125_; 
v_res_2125_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4(v_00_u03b1_2116_, v_ref_2117_, v_msg_2118_, v_declHint_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec(v_ref_2117_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6(lean_object* v_msg_2126_, lean_object* v_declHint_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v___x_2133_; 
v___x_2133_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg(v_msg_2126_, v_declHint_2127_, v___y_2131_);
return v___x_2133_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___boxed(lean_object* v_msg_2134_, lean_object* v_declHint_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_){
_start:
{
lean_object* v_res_2141_; 
v_res_2141_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6(v_msg_2134_, v_declHint_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_);
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6(lean_object* v_00_u03b1_2142_, lean_object* v_ref_2143_, lean_object* v_msg_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_){
_start:
{
lean_object* v___x_2150_; 
v___x_2150_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6___redArg(v_ref_2143_, v_msg_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b1_2151_, lean_object* v_ref_2152_, lean_object* v_msg_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__6(v_00_u03b1_2151_, v_ref_2152_, v_msg_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec(v___y_2155_);
lean_dec_ref(v___y_2154_);
lean_dec(v_ref_2152_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg___lam__0(lean_object* v_info_2160_, lean_object* v_a_2161_, lean_object* v_____r_2162_, lean_object* v_result_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_){
_start:
{
uint8_t v___x_2169_; 
v___x_2169_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst(v_info_2160_, v_result_2163_, v_a_2161_);
if (v___x_2169_ == 0)
{
uint8_t v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2170_ = 0;
v___x_2171_ = lean_box(v___x_2170_);
v___x_2172_ = lean_array_push(v_result_2163_, v___x_2171_);
v___x_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
v___x_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
return v___x_2174_;
}
else
{
uint8_t v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2175_ = 5;
v___x_2176_ = lean_box(v___x_2175_);
v___x_2177_ = lean_array_push(v_result_2163_, v___x_2176_);
v___x_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2177_);
v___x_2179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2178_);
return v___x_2179_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg___lam__0___boxed(lean_object* v_info_2180_, lean_object* v_a_2181_, lean_object* v_____r_2182_, lean_object* v_result_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
lean_object* v_res_2189_; 
v_res_2189_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg___lam__0(v_info_2180_, v_a_2181_, v_____r_2182_, v_result_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
lean_dec(v_a_2181_);
lean_dec_ref(v_info_2180_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg(lean_object* v_info_2190_, lean_object* v_upperBound_2191_, lean_object* v___x_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_b_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_){
_start:
{
lean_object* v_a_2202_; lean_object* v___y_2207_; uint8_t v___x_2226_; 
v___x_2226_ = lean_nat_dec_lt(v_a_2194_, v_upperBound_2191_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; 
lean_dec(v_a_2194_);
v___x_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2227_, 0, v_b_2195_);
return v___x_2227_;
}
else
{
lean_object* v_resultDeps_2228_; uint8_t v___x_2229_; 
v_resultDeps_2228_ = lean_ctor_get(v_info_2190_, 1);
v___x_2229_ = l_Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0(v_resultDeps_2228_, v_a_2194_);
if (v___x_2229_ == 0)
{
lean_object* v___x_2230_; uint8_t v_isProp_2231_; 
v___x_2230_ = lean_array_fget_borrowed(v___x_2192_, v_a_2194_);
v_isProp_2231_ = lean_ctor_get_uint8(v___x_2230_, sizeof(void*)*1 + 2);
if (v_isProp_2231_ == 0)
{
uint8_t v_isInstance_2232_; 
v_isInstance_2232_ = lean_ctor_get_uint8(v___x_2230_, sizeof(void*)*1 + 4);
if (v_isInstance_2232_ == 0)
{
uint8_t v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___x_2233_ = 2;
v___x_2234_ = lean_box(v___x_2233_);
v___x_2235_ = lean_array_push(v_b_2195_, v___x_2234_);
v_a_2202_ = v___x_2235_;
goto v___jp_2201_;
}
else
{
if (lean_obj_tag(v_a_2193_) == 1)
{
lean_object* v_val_2236_; lean_object* v___x_2237_; uint8_t v___x_2238_; 
v_val_2236_ = lean_ctor_get(v_a_2193_, 0);
v___x_2237_ = lean_array_get_size(v_val_2236_);
v___x_2238_ = lean_nat_dec_lt(v_a_2194_, v___x_2237_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2239_ = lean_box(0);
v___x_2240_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg___lam__0(v_info_2190_, v_a_2194_, v___x_2239_, v_b_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
v___y_2207_ = v___x_2240_;
goto v___jp_2206_;
}
else
{
lean_object* v___x_2241_; uint8_t v___x_2242_; 
v___x_2241_ = lean_array_fget_borrowed(v_val_2236_, v_a_2194_);
v___x_2242_ = lean_unbox(v___x_2241_);
if (v___x_2242_ == 0)
{
lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2243_ = lean_box(0);
v___x_2244_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg___lam__0(v_info_2190_, v_a_2194_, v___x_2243_, v_b_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
v___y_2207_ = v___x_2244_;
goto v___jp_2206_;
}
else
{
uint8_t v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2245_ = 2;
v___x_2246_ = lean_box(v___x_2245_);
v___x_2247_ = lean_array_push(v_b_2195_, v___x_2246_);
v_a_2202_ = v___x_2247_;
goto v___jp_2201_;
}
}
}
else
{
lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2248_ = lean_box(0);
v___x_2249_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg___lam__0(v_info_2190_, v_a_2194_, v___x_2248_, v_b_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
v___y_2207_ = v___x_2249_;
goto v___jp_2206_;
}
}
}
else
{
uint8_t v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2250_ = 3;
v___x_2251_ = lean_box(v___x_2250_);
v___x_2252_ = lean_array_push(v_b_2195_, v___x_2251_);
v_a_2202_ = v___x_2252_;
goto v___jp_2201_;
}
}
else
{
uint8_t v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2253_ = 0;
v___x_2254_ = lean_box(v___x_2253_);
v___x_2255_ = lean_array_push(v_b_2195_, v___x_2254_);
v_a_2202_ = v___x_2255_;
goto v___jp_2201_;
}
}
v___jp_2201_:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2203_ = lean_unsigned_to_nat(1u);
v___x_2204_ = lean_nat_add(v_a_2194_, v___x_2203_);
lean_dec(v_a_2194_);
v_a_2194_ = v___x_2204_;
v_b_2195_ = v_a_2202_;
goto _start;
}
v___jp_2206_:
{
if (lean_obj_tag(v___y_2207_) == 0)
{
lean_object* v_a_2208_; lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2217_; 
v_a_2208_ = lean_ctor_get(v___y_2207_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___y_2207_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2210_ = v___y_2207_;
v_isShared_2211_ = v_isSharedCheck_2217_;
goto v_resetjp_2209_;
}
else
{
lean_inc(v_a_2208_);
lean_dec(v___y_2207_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2217_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
if (lean_obj_tag(v_a_2208_) == 0)
{
lean_object* v_a_2212_; lean_object* v___x_2214_; 
lean_dec(v_a_2194_);
v_a_2212_ = lean_ctor_get(v_a_2208_, 0);
lean_inc(v_a_2212_);
lean_dec_ref_known(v_a_2208_, 1);
if (v_isShared_2211_ == 0)
{
lean_ctor_set(v___x_2210_, 0, v_a_2212_);
v___x_2214_ = v___x_2210_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_a_2212_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
return v___x_2214_;
}
}
else
{
lean_object* v_a_2216_; 
lean_del_object(v___x_2210_);
v_a_2216_ = lean_ctor_get(v_a_2208_, 0);
lean_inc(v_a_2216_);
lean_dec_ref_known(v_a_2208_, 1);
v_a_2202_ = v_a_2216_;
goto v___jp_2201_;
}
}
}
else
{
lean_object* v_a_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2225_; 
lean_dec(v_a_2194_);
v_a_2218_ = lean_ctor_get(v___y_2207_, 0);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___y_2207_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2220_ = v___y_2207_;
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_a_2218_);
lean_dec(v___y_2207_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v___x_2223_; 
if (v_isShared_2221_ == 0)
{
v___x_2223_ = v___x_2220_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_a_2218_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
return v___x_2223_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg___boxed(lean_object* v_info_2256_, lean_object* v_upperBound_2257_, lean_object* v___x_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_b_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg(v_info_2256_, v_upperBound_2257_, v___x_2258_, v_a_2259_, v_a_2260_, v_b_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec(v___y_2263_);
lean_dec_ref(v___y_2262_);
lean_dec(v_a_2259_);
lean_dec_ref(v___x_2258_);
lean_dec(v_upperBound_2257_);
lean_dec_ref(v_info_2256_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCongrSimpKinds(lean_object* v_f_2270_, lean_object* v_info_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_){
_start:
{
lean_object* v___x_2277_; lean_object* v_result_2278_; lean_object* v___x_2279_; 
v___x_2277_ = lean_unsigned_to_nat(0u);
v_result_2278_ = ((lean_object*)(l_Lean_Meta_getCongrSimpKinds___closed__0));
v___x_2279_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f(v_f_2270_, v_a_2272_, v_a_2273_, v_a_2274_, v_a_2275_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v_paramInfo_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
lean_inc(v_a_2280_);
lean_dec_ref_known(v___x_2279_, 1);
v_paramInfo_2281_ = lean_ctor_get(v_info_2271_, 0);
v___x_2282_ = lean_array_get_size(v_paramInfo_2281_);
v___x_2283_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg(v_info_2271_, v___x_2282_, v_paramInfo_2281_, v_a_2280_, v___x_2277_, v_result_2278_, v_a_2272_, v_a_2273_, v_a_2274_, v_a_2275_);
lean_dec(v_a_2280_);
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2292_; 
v_a_2284_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2286_ = v___x_2283_;
v_isShared_2287_ = v_isSharedCheck_2292_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v___x_2283_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2292_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2288_; lean_object* v___x_2290_; 
v___x_2288_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies(v_info_2271_, v_a_2284_);
if (v_isShared_2287_ == 0)
{
lean_ctor_set(v___x_2286_, 0, v___x_2288_);
v___x_2290_ = v___x_2286_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2288_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
else
{
return v___x_2283_;
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
v_a_2293_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2279_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2279_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCongrSimpKinds___boxed(lean_object* v_f_2301_, lean_object* v_info_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_, lean_object* v_a_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l_Lean_Meta_getCongrSimpKinds(v_f_2301_, v_info_2302_, v_a_2303_, v_a_2304_, v_a_2305_, v_a_2306_);
lean_dec(v_a_2306_);
lean_dec_ref(v_a_2305_);
lean_dec(v_a_2304_);
lean_dec_ref(v_a_2303_);
lean_dec_ref(v_info_2302_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0(lean_object* v_info_2309_, lean_object* v_upperBound_2310_, lean_object* v___x_2311_, lean_object* v_a_2312_, lean_object* v_inst_2313_, lean_object* v_R_2314_, lean_object* v_a_2315_, lean_object* v_b_2316_, lean_object* v_c_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v___x_2323_; 
v___x_2323_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___redArg(v_info_2309_, v_upperBound_2310_, v___x_2311_, v_a_2312_, v_a_2315_, v_b_2316_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0___boxed(lean_object* v_info_2324_, lean_object* v_upperBound_2325_, lean_object* v___x_2326_, lean_object* v_a_2327_, lean_object* v_inst_2328_, lean_object* v_R_2329_, lean_object* v_a_2330_, lean_object* v_b_2331_, lean_object* v_c_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKinds_spec__0(v_info_2324_, v_upperBound_2325_, v___x_2326_, v_a_2327_, v_inst_2328_, v_R_2329_, v_a_2330_, v_b_2331_, v_c_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
lean_dec(v___y_2336_);
lean_dec_ref(v___y_2335_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
lean_dec(v_a_2327_);
lean_dec_ref(v___x_2326_);
lean_dec(v_upperBound_2325_);
lean_dec_ref(v_info_2324_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg___lam__0(lean_object* v_b_2339_, lean_object* v_00___2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_){
_start:
{
uint8_t v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2346_ = 0;
v___x_2347_ = lean_box(v___x_2346_);
v___x_2348_ = lean_array_push(v_b_2339_, v___x_2347_);
v___x_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
v___x_2350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2349_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg___lam__0___boxed(lean_object* v_b_2351_, lean_object* v_00___2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg___lam__0(v_b_2351_, v_00___2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_);
lean_dec(v___y_2356_);
lean_dec_ref(v___y_2355_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg(lean_object* v_upperBound_2359_, lean_object* v_info_2360_, lean_object* v___x_2361_, lean_object* v_a_2362_, lean_object* v_b_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_){
_start:
{
lean_object* v_a_2370_; lean_object* v___y_2375_; uint8_t v___x_2394_; 
v___x_2394_ = lean_nat_dec_lt(v_a_2362_, v_upperBound_2359_);
if (v___x_2394_ == 0)
{
lean_object* v___x_2395_; 
lean_dec(v_a_2362_);
v___x_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2395_, 0, v_b_2363_);
return v___x_2395_;
}
else
{
lean_object* v_resultDeps_2396_; uint8_t v___x_2397_; 
v_resultDeps_2396_ = lean_ctor_get(v_info_2360_, 1);
v___x_2397_ = l_Array_contains___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies_spec__0(v_resultDeps_2396_, v_a_2362_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; uint8_t v___x_2399_; 
v___x_2398_ = lean_unsigned_to_nat(0u);
v___x_2399_ = lean_nat_dec_eq(v_a_2362_, v___x_2398_);
if (v___x_2399_ == 0)
{
lean_object* v___x_2400_; uint8_t v_isProp_2401_; 
v___x_2400_ = lean_array_fget_borrowed(v___x_2361_, v_a_2362_);
v_isProp_2401_ = lean_ctor_get_uint8(v___x_2400_, sizeof(void*)*1 + 2);
if (v_isProp_2401_ == 0)
{
uint8_t v_isInstance_2402_; 
v_isInstance_2402_ = lean_ctor_get_uint8(v___x_2400_, sizeof(void*)*1 + 4);
if (v_isInstance_2402_ == 0)
{
lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2403_ = lean_box(0);
v___x_2404_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg___lam__0(v_b_2363_, v___x_2403_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
v___y_2375_ = v___x_2404_;
goto v___jp_2374_;
}
else
{
uint8_t v___x_2405_; 
v___x_2405_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_shouldUseSubsingletonInst(v_info_2360_, v_b_2363_, v_a_2362_);
if (v___x_2405_ == 0)
{
lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2406_ = lean_box(0);
v___x_2407_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg___lam__0(v_b_2363_, v___x_2406_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
v___y_2375_ = v___x_2407_;
goto v___jp_2374_;
}
else
{
uint8_t v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2408_ = 5;
v___x_2409_ = lean_box(v___x_2408_);
v___x_2410_ = lean_array_push(v_b_2363_, v___x_2409_);
v_a_2370_ = v___x_2410_;
goto v___jp_2369_;
}
}
}
else
{
uint8_t v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; 
v___x_2411_ = 3;
v___x_2412_ = lean_box(v___x_2411_);
v___x_2413_ = lean_array_push(v_b_2363_, v___x_2412_);
v_a_2370_ = v___x_2413_;
goto v___jp_2369_;
}
}
else
{
uint8_t v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___x_2414_ = 2;
v___x_2415_ = lean_box(v___x_2414_);
v___x_2416_ = lean_array_push(v_b_2363_, v___x_2415_);
v_a_2370_ = v___x_2416_;
goto v___jp_2369_;
}
}
else
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = lean_box(0);
v___x_2418_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg___lam__0(v_b_2363_, v___x_2417_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
v___y_2375_ = v___x_2418_;
goto v___jp_2374_;
}
}
v___jp_2369_:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = lean_unsigned_to_nat(1u);
v___x_2372_ = lean_nat_add(v_a_2362_, v___x_2371_);
lean_dec(v_a_2362_);
v_a_2362_ = v___x_2372_;
v_b_2363_ = v_a_2370_;
goto _start;
}
v___jp_2374_:
{
if (lean_obj_tag(v___y_2375_) == 0)
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2385_; 
v_a_2376_ = lean_ctor_get(v___y_2375_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___y_2375_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2378_ = v___y_2375_;
v_isShared_2379_ = v_isSharedCheck_2385_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___y_2375_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2385_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
if (lean_obj_tag(v_a_2376_) == 0)
{
lean_object* v_a_2380_; lean_object* v___x_2382_; 
lean_dec(v_a_2362_);
v_a_2380_ = lean_ctor_get(v_a_2376_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v_a_2376_, 1);
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 0, v_a_2380_);
v___x_2382_ = v___x_2378_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v_a_2380_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
else
{
lean_object* v_a_2384_; 
lean_del_object(v___x_2378_);
v_a_2384_ = lean_ctor_get(v_a_2376_, 0);
lean_inc(v_a_2384_);
lean_dec_ref_known(v_a_2376_, 1);
v_a_2370_ = v_a_2384_;
goto v___jp_2369_;
}
}
}
else
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
lean_dec(v_a_2362_);
v_a_2386_ = lean_ctor_get(v___y_2375_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___y_2375_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___y_2375_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___y_2375_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg___boxed(lean_object* v_upperBound_2419_, lean_object* v_info_2420_, lean_object* v___x_2421_, lean_object* v_a_2422_, lean_object* v_b_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg(v_upperBound_2419_, v_info_2420_, v___x_2421_, v_a_2422_, v_b_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
lean_dec_ref(v___x_2421_);
lean_dec_ref(v_info_2420_);
lean_dec(v_upperBound_2419_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCongrSimpKindsForArgZero(lean_object* v_info_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_){
_start:
{
lean_object* v_paramInfo_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v_result_2439_; lean_object* v___x_2440_; 
v_paramInfo_2436_ = lean_ctor_get(v_info_2430_, 0);
v___x_2437_ = lean_array_get_size(v_paramInfo_2436_);
v___x_2438_ = lean_unsigned_to_nat(0u);
v_result_2439_ = ((lean_object*)(l_Lean_Meta_getCongrSimpKinds___closed__0));
v___x_2440_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg(v___x_2437_, v_info_2430_, v_paramInfo_2436_, v___x_2438_, v_result_2439_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2449_; 
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2443_ = v___x_2440_;
v_isShared_2444_ = v_isSharedCheck_2449_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2440_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2449_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2445_; lean_object* v___x_2447_; 
v___x_2445_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_fixKindsForDependencies(v_info_2430_, v_a_2441_);
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 0, v___x_2445_);
v___x_2447_ = v___x_2443_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v___x_2445_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
else
{
return v___x_2440_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCongrSimpKindsForArgZero___boxed(lean_object* v_info_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l_Lean_Meta_getCongrSimpKindsForArgZero(v_info_2450_, v_a_2451_, v_a_2452_, v_a_2453_, v_a_2454_);
lean_dec(v_a_2454_);
lean_dec_ref(v_a_2453_);
lean_dec(v_a_2452_);
lean_dec_ref(v_a_2451_);
lean_dec_ref(v_info_2450_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0(lean_object* v_upperBound_2457_, lean_object* v_info_2458_, lean_object* v___x_2459_, lean_object* v_inst_2460_, lean_object* v_R_2461_, lean_object* v_a_2462_, lean_object* v_b_2463_, lean_object* v_c_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_){
_start:
{
lean_object* v___x_2470_; 
v___x_2470_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___redArg(v_upperBound_2457_, v_info_2458_, v___x_2459_, v_a_2462_, v_b_2463_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0___boxed(lean_object* v_upperBound_2471_, lean_object* v_info_2472_, lean_object* v___x_2473_, lean_object* v_inst_2474_, lean_object* v_R_2475_, lean_object* v_a_2476_, lean_object* v_b_2477_, lean_object* v_c_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCongrSimpKindsForArgZero_spec__0(v_upperBound_2471_, v_info_2472_, v___x_2473_, v_inst_2474_, v_R_2475_, v_a_2476_, v_b_2477_, v_c_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec_ref(v___x_2473_);
lean_dec_ref(v_info_2472_);
lean_dec(v_upperBound_2471_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorIdx___impl(lean_object* v_x_2485_){
_start:
{
lean_object* v___x_2486_; 
v___x_2486_ = lean_obj_tag_nat(v_x_2485_);
return v___x_2486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorIdx___impl___boxed(lean_object* v_x_2487_){
_start:
{
lean_object* v_res_2488_; 
v_res_2488_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorIdx___impl(v_x_2487_);
lean_dec_ref(v_x_2487_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim___redArg(lean_object* v_t_2489_, lean_object* v_k_2490_){
_start:
{
if (lean_obj_tag(v_t_2489_) == 0)
{
lean_object* v_fvarId_2491_; lean_object* v___x_2492_; 
v_fvarId_2491_ = lean_ctor_get(v_t_2489_, 0);
lean_inc(v_fvarId_2491_);
lean_dec_ref_known(v_t_2489_, 1);
v___x_2492_ = lean_apply_1(v_k_2490_, v_fvarId_2491_);
return v___x_2492_;
}
else
{
lean_object* v_lhs_2493_; lean_object* v_rhs_2494_; lean_object* v___x_2495_; 
v_lhs_2493_ = lean_ctor_get(v_t_2489_, 0);
lean_inc(v_lhs_2493_);
v_rhs_2494_ = lean_ctor_get(v_t_2489_, 1);
lean_inc(v_rhs_2494_);
lean_dec_ref_known(v_t_2489_, 2);
v___x_2495_ = lean_apply_2(v_k_2490_, v_lhs_2493_, v_rhs_2494_);
return v___x_2495_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim(lean_object* v_motive_2496_, lean_object* v_ctorIdx_2497_, lean_object* v_t_2498_, lean_object* v_h_2499_, lean_object* v_k_2500_){
_start:
{
lean_object* v___x_2501_; 
v___x_2501_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim___redArg(v_t_2498_, v_k_2500_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim___boxed(lean_object* v_motive_2502_, lean_object* v_ctorIdx_2503_, lean_object* v_t_2504_, lean_object* v_h_2505_, lean_object* v_k_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim(v_motive_2502_, v_ctorIdx_2503_, v_t_2504_, v_h_2505_, v_k_2506_);
lean_dec(v_ctorIdx_2503_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_hyp_elim___redArg(lean_object* v_t_2508_, lean_object* v_hyp_2509_){
_start:
{
lean_object* v___x_2510_; 
v___x_2510_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim___redArg(v_t_2508_, v_hyp_2509_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_hyp_elim(lean_object* v_motive_2511_, lean_object* v_t_2512_, lean_object* v_h_2513_, lean_object* v_hyp_2514_){
_start:
{
lean_object* v___x_2515_; 
v___x_2515_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim___redArg(v_t_2512_, v_hyp_2514_);
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_decSubsingleton_elim___redArg(lean_object* v_t_2516_, lean_object* v_decSubsingleton_2517_){
_start:
{
lean_object* v___x_2518_; 
v___x_2518_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim___redArg(v_t_2516_, v_decSubsingleton_2517_);
return v___x_2518_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_decSubsingleton_elim(lean_object* v_motive_2519_, lean_object* v_t_2520_, lean_object* v_h_2521_, lean_object* v_decSubsingleton_2522_){
_start:
{
lean_object* v___x_2523_; 
v___x_2523_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_EqInfo_ctorElim___redArg(v_t_2520_, v_decSubsingleton_2522_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getFVarId(lean_object* v_s_2524_, lean_object* v_fvarId_2525_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l_Lean_Meta_FVarSubst_find_x3f(v_s_2524_, v_fvarId_2525_);
if (lean_obj_tag(v___x_2526_) == 1)
{
lean_object* v_val_2527_; lean_object* v___x_2528_; 
v_val_2527_ = lean_ctor_get(v___x_2526_, 0);
lean_inc(v_val_2527_);
lean_dec_ref_known(v___x_2526_, 1);
v___x_2528_ = l_Lean_Expr_fvarId_x21(v_val_2527_);
lean_dec(v_val_2527_);
return v___x_2528_;
}
else
{
lean_dec(v___x_2526_);
lean_inc(v_fvarId_2525_);
return v_fvarId_2525_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getFVarId___boxed(lean_object* v_s_2529_, lean_object* v_fvarId_2530_){
_start:
{
lean_object* v_res_2531_; 
v_res_2531_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getFVarId(v_s_2529_, v_fvarId_2530_);
lean_dec(v_fvarId_2530_);
lean_dec(v_s_2529_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1___redArg(lean_object* v_mvarId_2532_, lean_object* v_x_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
lean_object* v___x_2539_; 
v___x_2539_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2532_, v_x_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_);
if (lean_obj_tag(v___x_2539_) == 0)
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
v_a_2540_ = lean_ctor_get(v___x_2539_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2539_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2539_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
else
{
lean_object* v_a_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2555_; 
v_a_2548_ = lean_ctor_get(v___x_2539_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2550_ = v___x_2539_;
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_a_2548_);
lean_dec(v___x_2539_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2553_; 
if (v_isShared_2551_ == 0)
{
v___x_2553_ = v___x_2550_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v_a_2548_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
return v___x_2553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1___redArg___boxed(lean_object* v_mvarId_2556_, lean_object* v_x_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_){
_start:
{
lean_object* v_res_2563_; 
v_res_2563_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1___redArg(v_mvarId_2556_, v_x_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_);
lean_dec(v___y_2561_);
lean_dec_ref(v___y_2560_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
return v_res_2563_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1(lean_object* v_00_u03b1_2564_, lean_object* v_mvarId_2565_, lean_object* v_x_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_){
_start:
{
lean_object* v___x_2572_; 
v___x_2572_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1___redArg(v_mvarId_2565_, v_x_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1___boxed(lean_object* v_00_u03b1_2573_, lean_object* v_mvarId_2574_, lean_object* v_x_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_){
_start:
{
lean_object* v_res_2581_; 
v_res_2581_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1(v_00_u03b1_2573_, v_mvarId_2574_, v_x_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_);
lean_dec(v___y_2579_);
lean_dec_ref(v___y_2578_);
lean_dec(v___y_2577_);
lean_dec_ref(v___y_2576_);
return v_res_2581_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4___redArg(lean_object* v_e_2582_, lean_object* v___y_2583_){
_start:
{
uint8_t v___x_2585_; 
v___x_2585_ = l_Lean_Expr_hasMVar(v_e_2582_);
if (v___x_2585_ == 0)
{
lean_object* v___x_2586_; 
v___x_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2586_, 0, v_e_2582_);
return v___x_2586_;
}
else
{
lean_object* v___x_2587_; lean_object* v_mctx_2588_; lean_object* v___x_2589_; lean_object* v_fst_2590_; lean_object* v_snd_2591_; lean_object* v___x_2592_; lean_object* v_cache_2593_; lean_object* v_zetaDeltaFVarIds_2594_; lean_object* v_postponed_2595_; lean_object* v_diag_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2605_; 
v___x_2587_ = lean_st_ref_get(v___y_2583_);
v_mctx_2588_ = lean_ctor_get(v___x_2587_, 0);
lean_inc_ref(v_mctx_2588_);
lean_dec(v___x_2587_);
v___x_2589_ = l_Lean_instantiateMVarsCore(v_mctx_2588_, v_e_2582_);
v_fst_2590_ = lean_ctor_get(v___x_2589_, 0);
lean_inc(v_fst_2590_);
v_snd_2591_ = lean_ctor_get(v___x_2589_, 1);
lean_inc(v_snd_2591_);
lean_dec_ref(v___x_2589_);
v___x_2592_ = lean_st_ref_take(v___y_2583_);
v_cache_2593_ = lean_ctor_get(v___x_2592_, 1);
v_zetaDeltaFVarIds_2594_ = lean_ctor_get(v___x_2592_, 2);
v_postponed_2595_ = lean_ctor_get(v___x_2592_, 3);
v_diag_2596_ = lean_ctor_get(v___x_2592_, 4);
v_isSharedCheck_2605_ = !lean_is_exclusive(v___x_2592_);
if (v_isSharedCheck_2605_ == 0)
{
lean_object* v_unused_2606_; 
v_unused_2606_ = lean_ctor_get(v___x_2592_, 0);
lean_dec(v_unused_2606_);
v___x_2598_ = v___x_2592_;
v_isShared_2599_ = v_isSharedCheck_2605_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_diag_2596_);
lean_inc(v_postponed_2595_);
lean_inc(v_zetaDeltaFVarIds_2594_);
lean_inc(v_cache_2593_);
lean_dec(v___x_2592_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2605_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2601_; 
if (v_isShared_2599_ == 0)
{
lean_ctor_set(v___x_2598_, 0, v_snd_2591_);
v___x_2601_ = v___x_2598_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_snd_2591_);
lean_ctor_set(v_reuseFailAlloc_2604_, 1, v_cache_2593_);
lean_ctor_set(v_reuseFailAlloc_2604_, 2, v_zetaDeltaFVarIds_2594_);
lean_ctor_set(v_reuseFailAlloc_2604_, 3, v_postponed_2595_);
lean_ctor_set(v_reuseFailAlloc_2604_, 4, v_diag_2596_);
v___x_2601_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2602_ = lean_st_ref_put(v___y_2583_, v___x_2601_);
v___x_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2603_, 0, v_fst_2590_);
return v___x_2603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4___redArg___boxed(lean_object* v_e_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_){
_start:
{
lean_object* v_res_2610_; 
v_res_2610_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4___redArg(v_e_2607_, v___y_2608_);
lean_dec(v___y_2608_);
return v_res_2610_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4(lean_object* v_e_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_){
_start:
{
lean_object* v___x_2617_; 
v___x_2617_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4___redArg(v_e_2611_, v___y_2613_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4___boxed(lean_object* v_e_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_){
_start:
{
lean_object* v_res_2624_; 
v_res_2624_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4(v_e_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
lean_dec(v___y_2622_);
lean_dec_ref(v___y_2621_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
return v_res_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7_spec__8___redArg(lean_object* v_x_2625_, lean_object* v_x_2626_, lean_object* v_x_2627_, lean_object* v_x_2628_){
_start:
{
lean_object* v_ks_2629_; lean_object* v_vs_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2654_; 
v_ks_2629_ = lean_ctor_get(v_x_2625_, 0);
v_vs_2630_ = lean_ctor_get(v_x_2625_, 1);
v_isSharedCheck_2654_ = !lean_is_exclusive(v_x_2625_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2632_ = v_x_2625_;
v_isShared_2633_ = v_isSharedCheck_2654_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_vs_2630_);
lean_inc(v_ks_2629_);
lean_dec(v_x_2625_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2654_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2634_; uint8_t v___x_2635_; 
v___x_2634_ = lean_array_get_size(v_ks_2629_);
v___x_2635_ = lean_nat_dec_lt(v_x_2626_, v___x_2634_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2639_; 
lean_dec(v_x_2626_);
v___x_2636_ = lean_array_push(v_ks_2629_, v_x_2627_);
v___x_2637_ = lean_array_push(v_vs_2630_, v_x_2628_);
if (v_isShared_2633_ == 0)
{
lean_ctor_set(v___x_2632_, 1, v___x_2637_);
lean_ctor_set(v___x_2632_, 0, v___x_2636_);
v___x_2639_ = v___x_2632_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v___x_2636_);
lean_ctor_set(v_reuseFailAlloc_2640_, 1, v___x_2637_);
v___x_2639_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
return v___x_2639_;
}
}
else
{
lean_object* v_k_x27_2641_; uint8_t v___x_2642_; 
v_k_x27_2641_ = lean_array_fget_borrowed(v_ks_2629_, v_x_2626_);
v___x_2642_ = l_Lean_instBEqMVarId_beq(v_x_2627_, v_k_x27_2641_);
if (v___x_2642_ == 0)
{
lean_object* v___x_2644_; 
if (v_isShared_2633_ == 0)
{
v___x_2644_ = v___x_2632_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_ks_2629_);
lean_ctor_set(v_reuseFailAlloc_2648_, 1, v_vs_2630_);
v___x_2644_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2645_ = lean_unsigned_to_nat(1u);
v___x_2646_ = lean_nat_add(v_x_2626_, v___x_2645_);
lean_dec(v_x_2626_);
v_x_2625_ = v___x_2644_;
v_x_2626_ = v___x_2646_;
goto _start;
}
}
else
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2652_; 
v___x_2649_ = lean_array_fset(v_ks_2629_, v_x_2626_, v_x_2627_);
v___x_2650_ = lean_array_fset(v_vs_2630_, v_x_2626_, v_x_2628_);
lean_dec(v_x_2626_);
if (v_isShared_2633_ == 0)
{
lean_ctor_set(v___x_2632_, 1, v___x_2650_);
lean_ctor_set(v___x_2632_, 0, v___x_2649_);
v___x_2652_ = v___x_2632_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___x_2649_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v___x_2650_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
return v___x_2652_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7___redArg(lean_object* v_n_2655_, lean_object* v_k_2656_, lean_object* v_v_2657_){
_start:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2658_ = lean_unsigned_to_nat(0u);
v___x_2659_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7_spec__8___redArg(v_n_2655_, v___x_2658_, v_k_2656_, v_v_2657_);
return v___x_2659_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_2660_; 
v___x_2660_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg(lean_object* v_x_2661_, size_t v_x_2662_, size_t v_x_2663_, lean_object* v_x_2664_, lean_object* v_x_2665_){
_start:
{
if (lean_obj_tag(v_x_2661_) == 0)
{
lean_object* v_es_2666_; size_t v___x_2667_; size_t v___x_2668_; lean_object* v_j_2669_; lean_object* v___x_2670_; uint8_t v___x_2671_; 
v_es_2666_ = lean_ctor_get(v_x_2661_, 0);
v___x_2667_ = ((size_t)31ULL);
v___x_2668_ = lean_usize_land(v_x_2662_, v___x_2667_);
v_j_2669_ = lean_usize_to_nat(v___x_2668_);
v___x_2670_ = lean_array_get_size(v_es_2666_);
v___x_2671_ = lean_nat_dec_lt(v_j_2669_, v___x_2670_);
if (v___x_2671_ == 0)
{
lean_dec(v_j_2669_);
lean_dec(v_x_2665_);
lean_dec(v_x_2664_);
return v_x_2661_;
}
else
{
lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2710_; 
lean_inc_ref(v_es_2666_);
v_isSharedCheck_2710_ = !lean_is_exclusive(v_x_2661_);
if (v_isSharedCheck_2710_ == 0)
{
lean_object* v_unused_2711_; 
v_unused_2711_ = lean_ctor_get(v_x_2661_, 0);
lean_dec(v_unused_2711_);
v___x_2673_ = v_x_2661_;
v_isShared_2674_ = v_isSharedCheck_2710_;
goto v_resetjp_2672_;
}
else
{
lean_dec(v_x_2661_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2710_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v_v_2675_; lean_object* v___x_2676_; lean_object* v_xs_x27_2677_; lean_object* v___y_2679_; 
v_v_2675_ = lean_array_fget(v_es_2666_, v_j_2669_);
v___x_2676_ = lean_box(0);
v_xs_x27_2677_ = lean_array_fset(v_es_2666_, v_j_2669_, v___x_2676_);
switch(lean_obj_tag(v_v_2675_))
{
case 0:
{
lean_object* v_key_2684_; lean_object* v_val_2685_; lean_object* v___x_2687_; uint8_t v_isShared_2688_; uint8_t v_isSharedCheck_2695_; 
v_key_2684_ = lean_ctor_get(v_v_2675_, 0);
v_val_2685_ = lean_ctor_get(v_v_2675_, 1);
v_isSharedCheck_2695_ = !lean_is_exclusive(v_v_2675_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2687_ = v_v_2675_;
v_isShared_2688_ = v_isSharedCheck_2695_;
goto v_resetjp_2686_;
}
else
{
lean_inc(v_val_2685_);
lean_inc(v_key_2684_);
lean_dec(v_v_2675_);
v___x_2687_ = lean_box(0);
v_isShared_2688_ = v_isSharedCheck_2695_;
goto v_resetjp_2686_;
}
v_resetjp_2686_:
{
uint8_t v___x_2689_; 
v___x_2689_ = l_Lean_instBEqMVarId_beq(v_x_2664_, v_key_2684_);
if (v___x_2689_ == 0)
{
lean_object* v___x_2690_; lean_object* v___x_2691_; 
lean_del_object(v___x_2687_);
v___x_2690_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2684_, v_val_2685_, v_x_2664_, v_x_2665_);
v___x_2691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2690_);
v___y_2679_ = v___x_2691_;
goto v___jp_2678_;
}
else
{
lean_object* v___x_2693_; 
lean_dec(v_val_2685_);
lean_dec(v_key_2684_);
if (v_isShared_2688_ == 0)
{
lean_ctor_set(v___x_2687_, 1, v_x_2665_);
lean_ctor_set(v___x_2687_, 0, v_x_2664_);
v___x_2693_ = v___x_2687_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_x_2664_);
lean_ctor_set(v_reuseFailAlloc_2694_, 1, v_x_2665_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
v___y_2679_ = v___x_2693_;
goto v___jp_2678_;
}
}
}
}
case 1:
{
lean_object* v_node_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2708_; 
v_node_2696_ = lean_ctor_get(v_v_2675_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v_v_2675_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2698_ = v_v_2675_;
v_isShared_2699_ = v_isSharedCheck_2708_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_node_2696_);
lean_dec(v_v_2675_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2708_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
size_t v___x_2700_; size_t v___x_2701_; size_t v___x_2702_; size_t v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2706_; 
v___x_2700_ = ((size_t)5ULL);
v___x_2701_ = lean_usize_shift_right(v_x_2662_, v___x_2700_);
v___x_2702_ = ((size_t)1ULL);
v___x_2703_ = lean_usize_add(v_x_2663_, v___x_2702_);
v___x_2704_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg(v_node_2696_, v___x_2701_, v___x_2703_, v_x_2664_, v_x_2665_);
if (v_isShared_2699_ == 0)
{
lean_ctor_set(v___x_2698_, 0, v___x_2704_);
v___x_2706_ = v___x_2698_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v___x_2704_);
v___x_2706_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
v___y_2679_ = v___x_2706_;
goto v___jp_2678_;
}
}
}
default: 
{
lean_object* v___x_2709_; 
v___x_2709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2709_, 0, v_x_2664_);
lean_ctor_set(v___x_2709_, 1, v_x_2665_);
v___y_2679_ = v___x_2709_;
goto v___jp_2678_;
}
}
v___jp_2678_:
{
lean_object* v___x_2680_; lean_object* v___x_2682_; 
v___x_2680_ = lean_array_fset(v_xs_x27_2677_, v_j_2669_, v___y_2679_);
lean_dec(v_j_2669_);
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 0, v___x_2680_);
v___x_2682_ = v___x_2673_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___x_2680_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
}
else
{
lean_object* v_ks_2712_; lean_object* v_vs_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2731_; 
v_ks_2712_ = lean_ctor_get(v_x_2661_, 0);
v_vs_2713_ = lean_ctor_get(v_x_2661_, 1);
v_isSharedCheck_2731_ = !lean_is_exclusive(v_x_2661_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2715_ = v_x_2661_;
v_isShared_2716_ = v_isSharedCheck_2731_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_vs_2713_);
lean_inc(v_ks_2712_);
lean_dec(v_x_2661_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2731_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2718_; 
if (v_isShared_2716_ == 0)
{
v___x_2718_ = v___x_2715_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_ks_2712_);
lean_ctor_set(v_reuseFailAlloc_2730_, 1, v_vs_2713_);
v___x_2718_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
lean_object* v_newNode_2719_; size_t v___x_2720_; uint8_t v___x_2721_; 
v_newNode_2719_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7___redArg(v___x_2718_, v_x_2664_, v_x_2665_);
v___x_2720_ = ((size_t)7ULL);
v___x_2721_ = lean_usize_dec_le(v___x_2720_, v_x_2663_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; lean_object* v___x_2723_; uint8_t v___x_2724_; 
v___x_2722_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2719_);
v___x_2723_ = lean_unsigned_to_nat(4u);
v___x_2724_ = lean_nat_dec_lt(v___x_2722_, v___x_2723_);
lean_dec(v___x_2722_);
if (v___x_2724_ == 0)
{
lean_object* v_ks_2725_; lean_object* v_vs_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v_ks_2725_ = lean_ctor_get(v_newNode_2719_, 0);
lean_inc_ref(v_ks_2725_);
v_vs_2726_ = lean_ctor_get(v_newNode_2719_, 1);
lean_inc_ref(v_vs_2726_);
lean_dec_ref(v_newNode_2719_);
v___x_2727_ = lean_unsigned_to_nat(0u);
v___x_2728_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg___closed__0);
v___x_2729_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8___redArg(v_x_2663_, v_ks_2725_, v_vs_2726_, v___x_2727_, v___x_2728_);
lean_dec_ref(v_vs_2726_);
lean_dec_ref(v_ks_2725_);
return v___x_2729_;
}
else
{
return v_newNode_2719_;
}
}
else
{
return v_newNode_2719_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8___redArg(size_t v_depth_2732_, lean_object* v_keys_2733_, lean_object* v_vals_2734_, lean_object* v_i_2735_, lean_object* v_entries_2736_){
_start:
{
lean_object* v___x_2737_; uint8_t v___x_2738_; 
v___x_2737_ = lean_array_get_size(v_keys_2733_);
v___x_2738_ = lean_nat_dec_lt(v_i_2735_, v___x_2737_);
if (v___x_2738_ == 0)
{
lean_dec(v_i_2735_);
return v_entries_2736_;
}
else
{
lean_object* v_k_2739_; lean_object* v_v_2740_; uint64_t v___x_2741_; size_t v_h_2742_; size_t v___x_2743_; lean_object* v___x_2744_; size_t v___x_2745_; size_t v___x_2746_; size_t v___x_2747_; size_t v_h_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v_k_2739_ = lean_array_fget_borrowed(v_keys_2733_, v_i_2735_);
v_v_2740_ = lean_array_fget_borrowed(v_vals_2734_, v_i_2735_);
v___x_2741_ = l_Lean_instHashableMVarId_hash(v_k_2739_);
v_h_2742_ = lean_uint64_to_usize(v___x_2741_);
v___x_2743_ = ((size_t)5ULL);
v___x_2744_ = lean_unsigned_to_nat(1u);
v___x_2745_ = ((size_t)1ULL);
v___x_2746_ = lean_usize_sub(v_depth_2732_, v___x_2745_);
v___x_2747_ = lean_usize_mul(v___x_2743_, v___x_2746_);
v_h_2748_ = lean_usize_shift_right(v_h_2742_, v___x_2747_);
v___x_2749_ = lean_nat_add(v_i_2735_, v___x_2744_);
lean_dec(v_i_2735_);
lean_inc(v_v_2740_);
lean_inc(v_k_2739_);
v___x_2750_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg(v_entries_2736_, v_h_2748_, v_depth_2732_, v_k_2739_, v_v_2740_);
v_i_2735_ = v___x_2749_;
v_entries_2736_ = v___x_2750_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8___redArg___boxed(lean_object* v_depth_2752_, lean_object* v_keys_2753_, lean_object* v_vals_2754_, lean_object* v_i_2755_, lean_object* v_entries_2756_){
_start:
{
size_t v_depth_boxed_2757_; lean_object* v_res_2758_; 
v_depth_boxed_2757_ = lean_unbox_usize(v_depth_2752_);
lean_dec(v_depth_2752_);
v_res_2758_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8___redArg(v_depth_boxed_2757_, v_keys_2753_, v_vals_2754_, v_i_2755_, v_entries_2756_);
lean_dec_ref(v_vals_2754_);
lean_dec_ref(v_keys_2753_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_x_2759_, lean_object* v_x_2760_, lean_object* v_x_2761_, lean_object* v_x_2762_, lean_object* v_x_2763_){
_start:
{
size_t v_x_3921__boxed_2764_; size_t v_x_3922__boxed_2765_; lean_object* v_res_2766_; 
v_x_3921__boxed_2764_ = lean_unbox_usize(v_x_2760_);
lean_dec(v_x_2760_);
v_x_3922__boxed_2765_ = lean_unbox_usize(v_x_2761_);
lean_dec(v_x_2761_);
v_res_2766_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg(v_x_2759_, v_x_3921__boxed_2764_, v_x_3922__boxed_2765_, v_x_2762_, v_x_2763_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4___redArg(lean_object* v_x_2767_, lean_object* v_x_2768_, lean_object* v_x_2769_){
_start:
{
uint64_t v___x_2770_; size_t v___x_2771_; size_t v___x_2772_; lean_object* v___x_2773_; 
v___x_2770_ = l_Lean_instHashableMVarId_hash(v_x_2768_);
v___x_2771_ = lean_uint64_to_usize(v___x_2770_);
v___x_2772_ = ((size_t)1ULL);
v___x_2773_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg(v_x_2767_, v___x_2771_, v___x_2772_, v_x_2768_, v_x_2769_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3___redArg(lean_object* v_mvarId_2774_, lean_object* v_val_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v___x_2778_; lean_object* v_mctx_2779_; lean_object* v_cache_2780_; lean_object* v_zetaDeltaFVarIds_2781_; lean_object* v_postponed_2782_; lean_object* v_diag_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2812_; 
v___x_2778_ = lean_st_ref_take(v___y_2776_);
v_mctx_2779_ = lean_ctor_get(v___x_2778_, 0);
v_cache_2780_ = lean_ctor_get(v___x_2778_, 1);
v_zetaDeltaFVarIds_2781_ = lean_ctor_get(v___x_2778_, 2);
v_postponed_2782_ = lean_ctor_get(v___x_2778_, 3);
v_diag_2783_ = lean_ctor_get(v___x_2778_, 4);
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2785_ = v___x_2778_;
v_isShared_2786_ = v_isSharedCheck_2812_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_diag_2783_);
lean_inc(v_postponed_2782_);
lean_inc(v_zetaDeltaFVarIds_2781_);
lean_inc(v_cache_2780_);
lean_inc(v_mctx_2779_);
lean_dec(v___x_2778_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2812_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v_depth_2787_; lean_object* v_levelAssignDepth_2788_; lean_object* v_lmvarCounter_2789_; lean_object* v_mvarCounter_2790_; lean_object* v_lDecls_2791_; lean_object* v_decls_2792_; lean_object* v_userNames_2793_; lean_object* v_lAssignment_2794_; lean_object* v_eAssignment_2795_; lean_object* v_dAssignment_2796_; lean_object* v_instanceTypedMVars_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2811_; 
v_depth_2787_ = lean_ctor_get(v_mctx_2779_, 0);
v_levelAssignDepth_2788_ = lean_ctor_get(v_mctx_2779_, 1);
v_lmvarCounter_2789_ = lean_ctor_get(v_mctx_2779_, 2);
v_mvarCounter_2790_ = lean_ctor_get(v_mctx_2779_, 3);
v_lDecls_2791_ = lean_ctor_get(v_mctx_2779_, 4);
v_decls_2792_ = lean_ctor_get(v_mctx_2779_, 5);
v_userNames_2793_ = lean_ctor_get(v_mctx_2779_, 6);
v_lAssignment_2794_ = lean_ctor_get(v_mctx_2779_, 7);
v_eAssignment_2795_ = lean_ctor_get(v_mctx_2779_, 8);
v_dAssignment_2796_ = lean_ctor_get(v_mctx_2779_, 9);
v_instanceTypedMVars_2797_ = lean_ctor_get(v_mctx_2779_, 10);
v_isSharedCheck_2811_ = !lean_is_exclusive(v_mctx_2779_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2799_ = v_mctx_2779_;
v_isShared_2800_ = v_isSharedCheck_2811_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_instanceTypedMVars_2797_);
lean_inc(v_dAssignment_2796_);
lean_inc(v_eAssignment_2795_);
lean_inc(v_lAssignment_2794_);
lean_inc(v_userNames_2793_);
lean_inc(v_decls_2792_);
lean_inc(v_lDecls_2791_);
lean_inc(v_mvarCounter_2790_);
lean_inc(v_lmvarCounter_2789_);
lean_inc(v_levelAssignDepth_2788_);
lean_inc(v_depth_2787_);
lean_dec(v_mctx_2779_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2811_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2804_; 
v___x_2801_ = lean_box(0);
v___x_2802_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4___redArg(v_eAssignment_2795_, v_mvarId_2774_, v_val_2775_);
if (v_isShared_2800_ == 0)
{
lean_ctor_set(v___x_2799_, 8, v___x_2802_);
v___x_2804_ = v___x_2799_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_depth_2787_);
lean_ctor_set(v_reuseFailAlloc_2810_, 1, v_levelAssignDepth_2788_);
lean_ctor_set(v_reuseFailAlloc_2810_, 2, v_lmvarCounter_2789_);
lean_ctor_set(v_reuseFailAlloc_2810_, 3, v_mvarCounter_2790_);
lean_ctor_set(v_reuseFailAlloc_2810_, 4, v_lDecls_2791_);
lean_ctor_set(v_reuseFailAlloc_2810_, 5, v_decls_2792_);
lean_ctor_set(v_reuseFailAlloc_2810_, 6, v_userNames_2793_);
lean_ctor_set(v_reuseFailAlloc_2810_, 7, v_lAssignment_2794_);
lean_ctor_set(v_reuseFailAlloc_2810_, 8, v___x_2802_);
lean_ctor_set(v_reuseFailAlloc_2810_, 9, v_dAssignment_2796_);
lean_ctor_set(v_reuseFailAlloc_2810_, 10, v_instanceTypedMVars_2797_);
v___x_2804_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
lean_object* v___x_2806_; 
if (v_isShared_2786_ == 0)
{
lean_ctor_set(v___x_2785_, 0, v___x_2804_);
v___x_2806_ = v___x_2785_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v___x_2804_);
lean_ctor_set(v_reuseFailAlloc_2809_, 1, v_cache_2780_);
lean_ctor_set(v_reuseFailAlloc_2809_, 2, v_zetaDeltaFVarIds_2781_);
lean_ctor_set(v_reuseFailAlloc_2809_, 3, v_postponed_2782_);
lean_ctor_set(v_reuseFailAlloc_2809_, 4, v_diag_2783_);
v___x_2806_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = lean_st_ref_put(v___y_2776_, v___x_2806_);
v___x_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2801_);
return v___x_2808_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3___redArg___boxed(lean_object* v_mvarId_2813_, lean_object* v_val_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_){
_start:
{
lean_object* v_res_2817_; 
v_res_2817_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3___redArg(v_mvarId_2813_, v_val_2814_, v___y_2815_);
lean_dec(v___y_2815_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2(lean_object* v___x_2826_, lean_object* v_as_2827_, size_t v_sz_2828_, size_t v_i_2829_, lean_object* v_b_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_){
_start:
{
lean_object* v_a_2837_; uint8_t v___x_2841_; 
v___x_2841_ = lean_usize_dec_lt(v_i_2829_, v_sz_2828_);
if (v___x_2841_ == 0)
{
lean_object* v___x_2842_; 
v___x_2842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2842_, 0, v_b_2830_);
return v___x_2842_;
}
else
{
lean_object* v_fst_2843_; lean_object* v_snd_2844_; lean_object* v___x_2845_; uint8_t v___x_2846_; lean_object* v_a_2847_; 
v_fst_2843_ = lean_ctor_get(v_b_2830_, 0);
lean_inc(v_fst_2843_);
v_snd_2844_ = lean_ctor_get(v_b_2830_, 1);
lean_inc(v_snd_2844_);
lean_dec_ref(v_b_2830_);
v___x_2845_ = lean_unsigned_to_nat(0u);
v___x_2846_ = lean_nat_dec_eq(v___x_2826_, v___x_2845_);
v_a_2847_ = lean_array_uget_borrowed(v_as_2827_, v_i_2829_);
if (lean_obj_tag(v_a_2847_) == 0)
{
lean_object* v_fvarId_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; 
v_fvarId_2848_ = lean_ctor_get(v_a_2847_, 0);
v___x_2849_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getFVarId(v_snd_2844_, v_fvarId_2848_);
v___x_2850_ = l_Lean_Meta_substCore(v_fst_2843_, v___x_2849_, v___x_2841_, v_snd_2844_, v___x_2841_, v___x_2846_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
if (lean_obj_tag(v___x_2850_) == 0)
{
lean_object* v_a_2851_; lean_object* v_fst_2852_; lean_object* v_snd_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_2860_; 
v_a_2851_ = lean_ctor_get(v___x_2850_, 0);
lean_inc(v_a_2851_);
lean_dec_ref_known(v___x_2850_, 1);
v_fst_2852_ = lean_ctor_get(v_a_2851_, 0);
v_snd_2853_ = lean_ctor_get(v_a_2851_, 1);
v_isSharedCheck_2860_ = !lean_is_exclusive(v_a_2851_);
if (v_isSharedCheck_2860_ == 0)
{
v___x_2855_ = v_a_2851_;
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_snd_2853_);
lean_inc(v_fst_2852_);
lean_dec(v_a_2851_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v___x_2858_; 
if (v_isShared_2856_ == 0)
{
lean_ctor_set(v___x_2855_, 1, v_fst_2852_);
lean_ctor_set(v___x_2855_, 0, v_snd_2853_);
v___x_2858_ = v___x_2855_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v_snd_2853_);
lean_ctor_set(v_reuseFailAlloc_2859_, 1, v_fst_2852_);
v___x_2858_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
v_a_2837_ = v___x_2858_;
goto v___jp_2836_;
}
}
}
else
{
lean_object* v_a_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2868_; 
v_a_2861_ = lean_ctor_get(v___x_2850_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2850_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2863_ = v___x_2850_;
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_a_2861_);
lean_dec(v___x_2850_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2866_; 
if (v_isShared_2864_ == 0)
{
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
}
else
{
lean_object* v_lhs_2869_; lean_object* v_rhs_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; 
v_lhs_2869_ = lean_ctor_get(v_a_2847_, 0);
v_rhs_2870_ = lean_ctor_get(v_a_2847_, 1);
v___x_2871_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getFVarId(v_snd_2844_, v_lhs_2869_);
v___x_2872_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getFVarId(v_snd_2844_, v_rhs_2870_);
v___x_2873_ = l_Lean_mkFVar(v___x_2871_);
v___x_2874_ = l_Lean_mkFVar(v___x_2872_);
lean_inc_ref(v___x_2874_);
lean_inc_ref(v___x_2873_);
v___x_2875_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_2875_, 0, v___x_2873_);
lean_closure_set(v___x_2875_, 1, v___x_2874_);
lean_inc(v_fst_2843_);
v___x_2876_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1___redArg(v_fst_2843_, v___x_2875_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2877_);
lean_dec_ref_known(v___x_2876_, 1);
v___x_2878_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__2));
v___x_2879_ = lean_unsigned_to_nat(2u);
v___x_2880_ = lean_mk_empty_array_with_capacity(v___x_2879_);
v___x_2881_ = lean_array_push(v___x_2880_, v___x_2873_);
v___x_2882_ = lean_array_push(v___x_2881_, v___x_2874_);
v___x_2883_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM___boxed), 7, 2);
lean_closure_set(v___x_2883_, 0, v___x_2878_);
lean_closure_set(v___x_2883_, 1, v___x_2882_);
lean_inc(v_fst_2843_);
v___x_2884_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__1___redArg(v_fst_2843_, v___x_2883_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_a_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v_a_2885_ = lean_ctor_get(v___x_2884_, 0);
lean_inc(v_a_2885_);
lean_dec_ref_known(v___x_2884_, 1);
v___x_2886_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__4));
v___x_2887_ = l_Lean_MVarId_assert(v_fst_2843_, v___x_2886_, v_a_2877_, v_a_2885_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
if (lean_obj_tag(v___x_2887_) == 0)
{
lean_object* v_a_2888_; lean_object* v___x_2889_; 
v_a_2888_ = lean_ctor_get(v___x_2887_, 0);
lean_inc(v_a_2888_);
lean_dec_ref_known(v___x_2887_, 1);
v___x_2889_ = l_Lean_Meta_intro1Core(v_a_2888_, v___x_2846_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
if (lean_obj_tag(v___x_2889_) == 0)
{
lean_object* v_a_2890_; lean_object* v_fst_2891_; lean_object* v_snd_2892_; lean_object* v___x_2893_; 
v_a_2890_ = lean_ctor_get(v___x_2889_, 0);
lean_inc(v_a_2890_);
lean_dec_ref_known(v___x_2889_, 1);
v_fst_2891_ = lean_ctor_get(v_a_2890_, 0);
lean_inc(v_fst_2891_);
v_snd_2892_ = lean_ctor_get(v_a_2890_, 1);
lean_inc(v_snd_2892_);
lean_dec(v_a_2890_);
v___x_2893_ = l_Lean_Meta_substCore(v_snd_2892_, v_fst_2891_, v___x_2841_, v_snd_2844_, v___x_2841_, v___x_2846_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v_a_2894_; lean_object* v_fst_2895_; lean_object* v_snd_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2903_; 
v_a_2894_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_a_2894_);
lean_dec_ref_known(v___x_2893_, 1);
v_fst_2895_ = lean_ctor_get(v_a_2894_, 0);
v_snd_2896_ = lean_ctor_get(v_a_2894_, 1);
v_isSharedCheck_2903_ = !lean_is_exclusive(v_a_2894_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2898_ = v_a_2894_;
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_snd_2896_);
lean_inc(v_fst_2895_);
lean_dec(v_a_2894_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2901_; 
if (v_isShared_2899_ == 0)
{
lean_ctor_set(v___x_2898_, 1, v_fst_2895_);
lean_ctor_set(v___x_2898_, 0, v_snd_2896_);
v___x_2901_ = v___x_2898_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_snd_2896_);
lean_ctor_set(v_reuseFailAlloc_2902_, 1, v_fst_2895_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
v_a_2837_ = v___x_2901_;
goto v___jp_2836_;
}
}
}
else
{
lean_object* v_a_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2911_; 
v_a_2904_ = lean_ctor_get(v___x_2893_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2906_ = v___x_2893_;
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_a_2904_);
lean_dec(v___x_2893_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
if (v_isShared_2907_ == 0)
{
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_a_2904_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
lean_dec(v_snd_2844_);
v_a_2912_ = lean_ctor_get(v___x_2889_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2889_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2889_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2889_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
else
{
lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2927_; 
lean_dec(v_snd_2844_);
v_a_2920_ = lean_ctor_get(v___x_2887_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2887_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2922_ = v___x_2887_;
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_dec(v___x_2887_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2925_; 
if (v_isShared_2923_ == 0)
{
v___x_2925_ = v___x_2922_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_a_2920_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
}
else
{
lean_object* v_a_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2935_; 
lean_dec(v_a_2877_);
lean_dec(v_snd_2844_);
lean_dec(v_fst_2843_);
v_a_2928_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2935_ == 0)
{
v___x_2930_ = v___x_2884_;
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_a_2928_);
lean_dec(v___x_2884_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
if (v_isShared_2931_ == 0)
{
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v_a_2928_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
}
else
{
lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2943_; 
lean_dec_ref(v___x_2874_);
lean_dec_ref(v___x_2873_);
lean_dec(v_snd_2844_);
lean_dec(v_fst_2843_);
v_a_2936_ = lean_ctor_get(v___x_2876_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2876_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2938_ = v___x_2876_;
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v___x_2876_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2941_; 
if (v_isShared_2939_ == 0)
{
v___x_2941_ = v___x_2938_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2936_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
return v___x_2941_;
}
}
}
}
}
v___jp_2836_:
{
size_t v___x_2838_; size_t v___x_2839_; 
v___x_2838_ = ((size_t)1ULL);
v___x_2839_ = lean_usize_add(v_i_2829_, v___x_2838_);
v_i_2829_ = v___x_2839_;
v_b_2830_ = v_a_2837_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___boxed(lean_object* v___x_2944_, lean_object* v_as_2945_, lean_object* v_sz_2946_, lean_object* v_i_2947_, lean_object* v_b_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
size_t v_sz_boxed_2954_; size_t v_i_boxed_2955_; lean_object* v_res_2956_; 
v_sz_boxed_2954_ = lean_unbox_usize(v_sz_2946_);
lean_dec(v_sz_2946_);
v_i_boxed_2955_ = lean_unbox_usize(v_i_2947_);
lean_dec(v_i_2947_);
v_res_2956_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2(v___x_2944_, v_as_2945_, v_sz_boxed_2954_, v_i_boxed_2955_, v_b_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_);
lean_dec(v___y_2952_);
lean_dec_ref(v___y_2951_);
lean_dec(v___y_2950_);
lean_dec_ref(v___y_2949_);
lean_dec_ref(v_as_2945_);
lean_dec(v___x_2944_);
return v_res_2956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0_spec__0(lean_object* v_eqs_2957_, lean_object* v_as_2958_, size_t v_i_2959_, size_t v_stop_2960_, lean_object* v_b_2961_){
_start:
{
lean_object* v___y_2963_; uint8_t v___x_2967_; 
v___x_2967_ = lean_usize_dec_eq(v_i_2959_, v_stop_2960_);
if (v___x_2967_ == 0)
{
lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2968_ = lean_box(0);
v___x_2969_ = lean_array_uget_borrowed(v_as_2958_, v_i_2959_);
v___x_2970_ = lean_array_get_borrowed(v___x_2968_, v_eqs_2957_, v___x_2969_);
if (lean_obj_tag(v___x_2970_) == 0)
{
v___y_2963_ = v_b_2961_;
goto v___jp_2962_;
}
else
{
lean_object* v_val_2971_; lean_object* v___x_2972_; 
v_val_2971_ = lean_ctor_get(v___x_2970_, 0);
lean_inc(v_val_2971_);
v___x_2972_ = lean_array_push(v_b_2961_, v_val_2971_);
v___y_2963_ = v___x_2972_;
goto v___jp_2962_;
}
}
else
{
return v_b_2961_;
}
v___jp_2962_:
{
size_t v___x_2964_; size_t v___x_2965_; 
v___x_2964_ = ((size_t)1ULL);
v___x_2965_ = lean_usize_add(v_i_2959_, v___x_2964_);
v_i_2959_ = v___x_2965_;
v_b_2961_ = v___y_2963_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0_spec__0___boxed(lean_object* v_eqs_2973_, lean_object* v_as_2974_, lean_object* v_i_2975_, lean_object* v_stop_2976_, lean_object* v_b_2977_){
_start:
{
size_t v_i_boxed_2978_; size_t v_stop_boxed_2979_; lean_object* v_res_2980_; 
v_i_boxed_2978_ = lean_unbox_usize(v_i_2975_);
lean_dec(v_i_2975_);
v_stop_boxed_2979_ = lean_unbox_usize(v_stop_2976_);
lean_dec(v_stop_2976_);
v_res_2980_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0_spec__0(v_eqs_2973_, v_as_2974_, v_i_boxed_2978_, v_stop_boxed_2979_, v_b_2977_);
lean_dec_ref(v_as_2974_);
lean_dec_ref(v_eqs_2973_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0(lean_object* v_eqs_2983_, lean_object* v_as_2984_, lean_object* v_start_2985_, lean_object* v_stop_2986_){
_start:
{
lean_object* v___x_2987_; uint8_t v___x_2988_; 
v___x_2987_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0___closed__0));
v___x_2988_ = lean_nat_dec_lt(v_start_2985_, v_stop_2986_);
if (v___x_2988_ == 0)
{
return v___x_2987_;
}
else
{
lean_object* v___x_2989_; uint8_t v___x_2990_; 
v___x_2989_ = lean_array_get_size(v_as_2984_);
v___x_2990_ = lean_nat_dec_le(v_stop_2986_, v___x_2989_);
if (v___x_2990_ == 0)
{
uint8_t v___x_2991_; 
v___x_2991_ = lean_nat_dec_lt(v_start_2985_, v___x_2989_);
if (v___x_2991_ == 0)
{
return v___x_2987_;
}
else
{
size_t v___x_2992_; size_t v___x_2993_; lean_object* v___x_2994_; 
v___x_2992_ = lean_usize_of_nat(v_start_2985_);
v___x_2993_ = lean_usize_of_nat(v___x_2989_);
v___x_2994_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0_spec__0(v_eqs_2983_, v_as_2984_, v___x_2992_, v___x_2993_, v___x_2987_);
return v___x_2994_;
}
}
else
{
size_t v___x_2995_; size_t v___x_2996_; lean_object* v___x_2997_; 
v___x_2995_ = lean_usize_of_nat(v_start_2985_);
v___x_2996_ = lean_usize_of_nat(v_stop_2986_);
v___x_2997_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0_spec__0(v_eqs_2983_, v_as_2984_, v___x_2995_, v___x_2996_, v___x_2987_);
return v___x_2997_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0___boxed(lean_object* v_eqs_2998_, lean_object* v_as_2999_, lean_object* v_start_3000_, lean_object* v_stop_3001_){
_start:
{
lean_object* v_res_3002_; 
v_res_3002_ = l_Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0(v_eqs_2998_, v_as_2999_, v_start_3000_, v_stop_3001_);
lean_dec(v_stop_3001_);
lean_dec(v_start_3000_);
lean_dec_ref(v_as_2999_);
lean_dec_ref(v_eqs_2998_);
return v_res_3002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast(lean_object* v_fvarId_3003_, lean_object* v_type_3004_, lean_object* v_deps_3005_, lean_object* v_eqs_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_){
_start:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v_eqs_3014_; lean_object* v___x_3015_; uint8_t v___x_3016_; 
v___x_3012_ = lean_unsigned_to_nat(0u);
v___x_3013_ = lean_array_get_size(v_deps_3005_);
v_eqs_3014_ = l_Array_filterMapM___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__0(v_eqs_3006_, v_deps_3005_, v___x_3012_, v___x_3013_);
v___x_3015_ = lean_array_get_size(v_eqs_3014_);
v___x_3016_ = lean_nat_dec_eq(v___x_3015_, v___x_3012_);
if (v___x_3016_ == 0)
{
lean_object* v___x_3017_; uint8_t v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v___x_3017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3017_, 0, v_type_3004_);
v___x_3018_ = 0;
v___x_3019_ = lean_box(0);
v___x_3020_ = l_Lean_Meta_mkFreshExprMVar(v___x_3017_, v___x_3018_, v___x_3019_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; size_t v_sz_3025_; size_t v___x_3026_; lean_object* v___x_3027_; 
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3021_);
lean_dec_ref_known(v___x_3020_, 1);
v___x_3022_ = l_Lean_Expr_mvarId_x21(v_a_3021_);
v___x_3023_ = lean_box(0);
v___x_3024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3024_, 0, v___x_3022_);
lean_ctor_set(v___x_3024_, 1, v___x_3023_);
v_sz_3025_ = lean_array_size(v_eqs_3014_);
v___x_3026_ = ((size_t)0ULL);
v___x_3027_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2(v___x_3015_, v_eqs_3014_, v_sz_3025_, v___x_3026_, v___x_3024_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_);
lean_dec_ref(v_eqs_3014_);
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v_a_3028_; lean_object* v_fst_3029_; lean_object* v_snd_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; 
v_a_3028_ = lean_ctor_get(v___x_3027_, 0);
lean_inc(v_a_3028_);
lean_dec_ref_known(v___x_3027_, 1);
v_fst_3029_ = lean_ctor_get(v_a_3028_, 0);
lean_inc(v_fst_3029_);
v_snd_3030_ = lean_ctor_get(v_a_3028_, 1);
lean_inc(v_snd_3030_);
lean_dec(v_a_3028_);
v___x_3031_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_getFVarId(v_snd_3030_, v_fvarId_3003_);
lean_dec(v_fvarId_3003_);
lean_dec(v_snd_3030_);
v___x_3032_ = l_Lean_mkFVar(v___x_3031_);
v___x_3033_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3___redArg(v_fst_3029_, v___x_3032_, v_a_3008_);
lean_dec_ref(v___x_3033_);
v___x_3034_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4___redArg(v_a_3021_, v_a_3008_);
return v___x_3034_;
}
else
{
lean_object* v_a_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3042_; 
lean_dec(v_a_3021_);
lean_dec(v_fvarId_3003_);
v_a_3035_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3042_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3042_ == 0)
{
v___x_3037_ = v___x_3027_;
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_a_3035_);
lean_dec(v___x_3027_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
lean_object* v___x_3040_; 
if (v_isShared_3038_ == 0)
{
v___x_3040_ = v___x_3037_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_a_3035_);
v___x_3040_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
return v___x_3040_;
}
}
}
}
else
{
lean_dec_ref(v_eqs_3014_);
lean_dec(v_fvarId_3003_);
return v___x_3020_;
}
}
else
{
lean_object* v___x_3043_; lean_object* v___x_3044_; 
lean_dec_ref(v_eqs_3014_);
lean_dec_ref(v_type_3004_);
v___x_3043_ = l_Lean_mkFVar(v_fvarId_3003_);
v___x_3044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3043_);
return v___x_3044_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast___boxed(lean_object* v_fvarId_3045_, lean_object* v_type_3046_, lean_object* v_deps_3047_, lean_object* v_eqs_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_){
_start:
{
lean_object* v_res_3054_; 
v_res_3054_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast(v_fvarId_3045_, v_type_3046_, v_deps_3047_, v_eqs_3048_, v_a_3049_, v_a_3050_, v_a_3051_, v_a_3052_);
lean_dec(v_a_3052_);
lean_dec_ref(v_a_3051_);
lean_dec(v_a_3050_);
lean_dec_ref(v_a_3049_);
lean_dec_ref(v_eqs_3048_);
lean_dec_ref(v_deps_3047_);
return v_res_3054_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3(lean_object* v_mvarId_3055_, lean_object* v_val_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v___x_3062_; 
v___x_3062_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3___redArg(v_mvarId_3055_, v_val_3056_, v___y_3058_);
return v___x_3062_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3___boxed(lean_object* v_mvarId_3063_, lean_object* v_val_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_){
_start:
{
lean_object* v_res_3070_; 
v_res_3070_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3(v_mvarId_3063_, v_val_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_);
lean_dec(v___y_3068_);
lean_dec_ref(v___y_3067_);
lean_dec(v___y_3066_);
lean_dec_ref(v___y_3065_);
return v_res_3070_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4(lean_object* v_00_u03b2_3071_, lean_object* v_x_3072_, lean_object* v_x_3073_, lean_object* v_x_3074_){
_start:
{
lean_object* v___x_3075_; 
v___x_3075_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4___redArg(v_x_3072_, v_x_3073_, v_x_3074_);
return v___x_3075_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_3076_, lean_object* v_x_3077_, size_t v_x_3078_, size_t v_x_3079_, lean_object* v_x_3080_, lean_object* v_x_3081_){
_start:
{
lean_object* v___x_3082_; 
v___x_3082_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___redArg(v_x_3077_, v_x_3078_, v_x_3079_, v_x_3080_, v_x_3081_);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03b2_3083_, lean_object* v_x_3084_, lean_object* v_x_3085_, lean_object* v_x_3086_, lean_object* v_x_3087_, lean_object* v_x_3088_){
_start:
{
size_t v_x_4522__boxed_3089_; size_t v_x_4523__boxed_3090_; lean_object* v_res_3091_; 
v_x_4522__boxed_3089_ = lean_unbox_usize(v_x_3085_);
lean_dec(v_x_3085_);
v_x_4523__boxed_3090_ = lean_unbox_usize(v_x_3086_);
lean_dec(v_x_3086_);
v_res_3091_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6(v_00_u03b2_3083_, v_x_3084_, v_x_4522__boxed_3089_, v_x_4523__boxed_3090_, v_x_3087_, v_x_3088_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7(lean_object* v_00_u03b2_3092_, lean_object* v_n_3093_, lean_object* v_k_3094_, lean_object* v_v_3095_){
_start:
{
lean_object* v___x_3096_; 
v___x_3096_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7___redArg(v_n_3093_, v_k_3094_, v_v_3095_);
return v___x_3096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8(lean_object* v_00_u03b2_3097_, size_t v_depth_3098_, lean_object* v_keys_3099_, lean_object* v_vals_3100_, lean_object* v_heq_3101_, lean_object* v_i_3102_, lean_object* v_entries_3103_){
_start:
{
lean_object* v___x_3104_; 
v___x_3104_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8___redArg(v_depth_3098_, v_keys_3099_, v_vals_3100_, v_i_3102_, v_entries_3103_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8___boxed(lean_object* v_00_u03b2_3105_, lean_object* v_depth_3106_, lean_object* v_keys_3107_, lean_object* v_vals_3108_, lean_object* v_heq_3109_, lean_object* v_i_3110_, lean_object* v_entries_3111_){
_start:
{
size_t v_depth_boxed_3112_; lean_object* v_res_3113_; 
v_depth_boxed_3112_ = lean_unbox_usize(v_depth_3106_);
lean_dec(v_depth_3106_);
v_res_3113_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__8(v_00_u03b2_3105_, v_depth_boxed_3112_, v_keys_3107_, v_vals_3108_, v_heq_3109_, v_i_3110_, v_entries_3111_);
lean_dec_ref(v_vals_3108_);
lean_dec_ref(v_keys_3107_);
return v_res_3113_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7_spec__8(lean_object* v_00_u03b2_3114_, lean_object* v_x_3115_, lean_object* v_x_3116_, lean_object* v_x_3117_, lean_object* v_x_3118_){
_start:
{
lean_object* v___x_3119_; 
v___x_3119_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__3_spec__4_spec__6_spec__7_spec__8___redArg(v_x_3115_, v_x_3116_, v_x_3117_, v_x_3118_);
return v___x_3119_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0(lean_object* v_msg_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
lean_object* v___f_3127_; lean_object* v___x_1481__overap_3128_; lean_object* v___x_3129_; 
v___f_3127_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0___closed__0));
v___x_1481__overap_3128_ = lean_panic_fn_borrowed(v___f_3127_, v_msg_3121_);
lean_inc(v___y_3125_);
lean_inc_ref(v___y_3124_);
lean_inc(v___y_3123_);
lean_inc_ref(v___y_3122_);
v___x_3129_ = lean_apply_5(v___x_1481__overap_3128_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_, lean_box(0));
return v___x_3129_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0___boxed(lean_object* v_msg_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_){
_start:
{
lean_object* v_res_3136_; 
v_res_3136_ = l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0(v_msg_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_);
lean_dec(v___y_3134_);
lean_dec_ref(v___y_3133_);
lean_dec(v___y_3132_);
lean_dec_ref(v___y_3131_);
return v_res_3136_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3___closed__0(void){
_start:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3140_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__2));
v___x_3141_ = lean_unsigned_to_nat(34u);
v___x_3142_ = lean_unsigned_to_nat(360u);
v___x_3143_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__1));
v___x_3144_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__0));
v___x_3145_ = l_mkPanicMessageWithDecl(v___x_3144_, v___x_3143_, v___x_3142_, v___x_3141_, v___x_3140_);
return v___x_3145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__1___boxed(lean_object* v___x_3146_, lean_object* v___x_3147_, lean_object* v_i_3148_, lean_object* v_kinds_3149_, lean_object* v___x_3150_, lean_object* v_lhs_3151_, lean_object* v_rhs_3152_, lean_object* v_type_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_){
_start:
{
uint8_t v___x_1674__boxed_3159_; lean_object* v_res_3160_; 
v___x_1674__boxed_3159_ = lean_unbox(v___x_3147_);
v_res_3160_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__1(v___x_3146_, v___x_1674__boxed_3159_, v_i_3148_, v_kinds_3149_, v___x_3150_, v_lhs_3151_, v_rhs_3152_, v_type_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
lean_dec(v___y_3155_);
lean_dec_ref(v___y_3154_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__2(lean_object* v___x_3161_, uint8_t v___x_3162_, lean_object* v_i_3163_, lean_object* v___x_3164_, lean_object* v_kinds_3165_, lean_object* v_typeSub_3166_, lean_object* v_lhs_3167_, lean_object* v_rhs_3168_, lean_object* v_type_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_){
_start:
{
lean_object* v___x_3175_; uint8_t v___x_3176_; uint8_t v___x_3177_; lean_object* v___x_3178_; 
lean_inc_ref(v_rhs_3168_);
v___x_3175_ = lean_array_push(v___x_3161_, v_rhs_3168_);
v___x_3176_ = 1;
v___x_3177_ = 1;
v___x_3178_ = l_Lean_Meta_mkLambdaFVars(v___x_3175_, v_type_3169_, v___x_3162_, v___x_3176_, v___x_3162_, v___x_3176_, v___x_3177_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
lean_dec_ref(v___x_3175_);
if (lean_obj_tag(v___x_3178_) == 0)
{
lean_object* v_a_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
v_a_3179_ = lean_ctor_get(v___x_3178_, 0);
lean_inc(v_a_3179_);
lean_dec_ref_known(v___x_3178_, 1);
v___x_3180_ = lean_nat_add(v_i_3163_, v___x_3164_);
v___x_3181_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go(v_kinds_3165_, v___x_3180_, v_typeSub_3166_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
if (lean_obj_tag(v___x_3181_) == 0)
{
lean_object* v_a_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; 
v_a_3182_ = lean_ctor_get(v___x_3181_, 0);
lean_inc(v_a_3182_);
lean_dec_ref_known(v___x_3181_, 1);
v___x_3183_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__2___closed__2));
v___x_3184_ = lean_unsigned_to_nat(2u);
v___x_3185_ = lean_mk_empty_array_with_capacity(v___x_3184_);
v___x_3186_ = lean_array_push(v___x_3185_, v_lhs_3167_);
v___x_3187_ = lean_array_push(v___x_3186_, v_rhs_3168_);
lean_inc_ref(v___x_3187_);
v___x_3188_ = l_Lean_Meta_mkAppM(v___x_3183_, v___x_3187_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v_a_3189_; lean_object* v___x_3190_; 
v_a_3189_ = lean_ctor_get(v___x_3188_, 0);
lean_inc(v_a_3189_);
lean_dec_ref_known(v___x_3188_, 1);
v___x_3190_ = l_Lean_Meta_mkEqNDRec(v_a_3179_, v_a_3182_, v_a_3189_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v_a_3191_; lean_object* v___x_3192_; 
v_a_3191_ = lean_ctor_get(v___x_3190_, 0);
lean_inc(v_a_3191_);
lean_dec_ref_known(v___x_3190_, 1);
v___x_3192_ = l_Lean_Meta_mkLambdaFVars(v___x_3187_, v_a_3191_, v___x_3162_, v___x_3176_, v___x_3162_, v___x_3176_, v___x_3177_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
lean_dec_ref(v___x_3187_);
return v___x_3192_;
}
else
{
lean_dec_ref(v___x_3187_);
return v___x_3190_;
}
}
else
{
lean_dec_ref(v___x_3187_);
lean_dec(v_a_3182_);
lean_dec(v_a_3179_);
return v___x_3188_;
}
}
else
{
lean_dec(v_a_3179_);
lean_dec_ref(v_rhs_3168_);
lean_dec_ref(v_lhs_3167_);
return v___x_3181_;
}
}
else
{
lean_dec_ref(v_rhs_3168_);
lean_dec_ref(v_lhs_3167_);
lean_dec_ref(v_typeSub_3166_);
lean_dec_ref(v_kinds_3165_);
return v___x_3178_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__2___boxed(lean_object* v___x_3193_, lean_object* v___x_3194_, lean_object* v_i_3195_, lean_object* v___x_3196_, lean_object* v_kinds_3197_, lean_object* v_typeSub_3198_, lean_object* v_lhs_3199_, lean_object* v_rhs_3200_, lean_object* v_type_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_){
_start:
{
uint8_t v___x_1736__boxed_3207_; lean_object* v_res_3208_; 
v___x_1736__boxed_3207_ = lean_unbox(v___x_3194_);
v_res_3208_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__2(v___x_3193_, v___x_1736__boxed_3207_, v_i_3195_, v___x_3196_, v_kinds_3197_, v_typeSub_3198_, v_lhs_3199_, v_rhs_3200_, v_type_3201_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_);
lean_dec(v___y_3205_);
lean_dec_ref(v___y_3204_);
lean_dec(v___y_3203_);
lean_dec_ref(v___y_3202_);
lean_dec(v___x_3196_);
lean_dec(v_i_3195_);
return v_res_3208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3(uint8_t v___x_3209_, lean_object* v_kinds_3210_, lean_object* v_i_3211_, uint8_t v___x_3212_, lean_object* v_lhs_3213_, lean_object* v_type_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; uint8_t v___x_3225_; 
v___x_3223_ = lean_box(v___x_3209_);
v___x_3224_ = lean_array_get(v___x_3223_, v_kinds_3210_, v_i_3211_);
lean_dec(v___x_3223_);
v___x_3225_ = lean_unbox(v___x_3224_);
lean_dec(v___x_3224_);
switch(v___x_3225_)
{
case 1:
{
lean_dec_ref(v_type_3214_);
lean_dec_ref(v_lhs_3213_);
lean_dec(v_i_3211_);
lean_dec_ref(v_kinds_3210_);
goto v___jp_3220_;
}
case 2:
{
lean_object* v___x_3226_; 
lean_inc_ref(v_lhs_3213_);
v___x_3226_ = l_Lean_Meta_mkEqRefl(v_lhs_3213_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3226_) == 0)
{
lean_object* v_a_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___f_3236_; lean_object* v___x_3237_; 
v_a_3227_ = lean_ctor_get(v___x_3226_, 0);
lean_inc(v_a_3227_);
lean_dec_ref_known(v___x_3226_, 1);
v___x_3228_ = l_Lean_Expr_bindingBody_x21(v_type_3214_);
v___x_3229_ = l_Lean_Expr_bindingBody_x21(v___x_3228_);
lean_dec_ref(v___x_3228_);
v___x_3230_ = lean_unsigned_to_nat(2u);
v___x_3231_ = lean_mk_empty_array_with_capacity(v___x_3230_);
lean_inc_ref(v___x_3231_);
v___x_3232_ = lean_array_push(v___x_3231_, v_a_3227_);
lean_inc_ref(v_lhs_3213_);
v___x_3233_ = lean_array_push(v___x_3232_, v_lhs_3213_);
v___x_3234_ = lean_expr_instantiate(v___x_3229_, v___x_3233_);
lean_dec_ref(v___x_3233_);
lean_dec_ref(v___x_3229_);
v___x_3235_ = lean_box(v___x_3212_);
v___f_3236_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__1___boxed), 13, 6);
lean_closure_set(v___f_3236_, 0, v___x_3231_);
lean_closure_set(v___f_3236_, 1, v___x_3235_);
lean_closure_set(v___f_3236_, 2, v_i_3211_);
lean_closure_set(v___f_3236_, 3, v_kinds_3210_);
lean_closure_set(v___f_3236_, 4, v___x_3234_);
lean_closure_set(v___f_3236_, 5, v_lhs_3213_);
v___x_3237_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg(v_type_3214_, v___f_3236_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
return v___x_3237_;
}
else
{
lean_dec_ref(v_type_3214_);
lean_dec_ref(v_lhs_3213_);
lean_dec(v_i_3211_);
lean_dec_ref(v_kinds_3210_);
return v___x_3226_;
}
}
case 4:
{
lean_dec_ref(v_type_3214_);
lean_dec_ref(v_lhs_3213_);
lean_dec(v_i_3211_);
lean_dec_ref(v_kinds_3210_);
goto v___jp_3220_;
}
case 5:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v_typeSub_3242_; lean_object* v___x_3243_; lean_object* v___f_3244_; lean_object* v___x_3245_; 
v___x_3238_ = l_Lean_Expr_bindingBody_x21(v_type_3214_);
v___x_3239_ = lean_unsigned_to_nat(1u);
v___x_3240_ = lean_mk_empty_array_with_capacity(v___x_3239_);
lean_inc_ref(v_lhs_3213_);
lean_inc_ref(v___x_3240_);
v___x_3241_ = lean_array_push(v___x_3240_, v_lhs_3213_);
v_typeSub_3242_ = lean_expr_instantiate(v___x_3238_, v___x_3241_);
lean_dec_ref(v___x_3241_);
lean_dec_ref(v___x_3238_);
v___x_3243_ = lean_box(v___x_3212_);
v___f_3244_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__2___boxed), 14, 7);
lean_closure_set(v___f_3244_, 0, v___x_3240_);
lean_closure_set(v___f_3244_, 1, v___x_3243_);
lean_closure_set(v___f_3244_, 2, v_i_3211_);
lean_closure_set(v___f_3244_, 3, v___x_3239_);
lean_closure_set(v___f_3244_, 4, v_kinds_3210_);
lean_closure_set(v___f_3244_, 5, v_typeSub_3242_);
lean_closure_set(v___f_3244_, 6, v_lhs_3213_);
v___x_3245_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg(v_type_3214_, v___f_3244_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
return v___x_3245_;
}
default: 
{
lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v___x_3246_ = lean_unsigned_to_nat(1u);
v___x_3247_ = lean_nat_add(v_i_3211_, v___x_3246_);
lean_dec(v_i_3211_);
v___x_3248_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go(v_kinds_3210_, v___x_3247_, v_type_3214_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_object* v_a_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; uint8_t v___x_3252_; uint8_t v___x_3253_; lean_object* v___x_3254_; 
v_a_3249_ = lean_ctor_get(v___x_3248_, 0);
lean_inc(v_a_3249_);
lean_dec_ref_known(v___x_3248_, 1);
v___x_3250_ = lean_mk_empty_array_with_capacity(v___x_3246_);
v___x_3251_ = lean_array_push(v___x_3250_, v_lhs_3213_);
v___x_3252_ = 1;
v___x_3253_ = 1;
v___x_3254_ = l_Lean_Meta_mkLambdaFVars(v___x_3251_, v_a_3249_, v___x_3212_, v___x_3252_, v___x_3212_, v___x_3252_, v___x_3253_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
lean_dec_ref(v___x_3251_);
return v___x_3254_;
}
else
{
lean_dec_ref(v_lhs_3213_);
return v___x_3248_;
}
}
}
v___jp_3220_:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3___closed__0, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3___closed__0_once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3___closed__0);
v___x_3222_ = l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0(v___x_3221_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
return v___x_3222_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3___boxed(lean_object* v___x_3255_, lean_object* v_kinds_3256_, lean_object* v_i_3257_, lean_object* v___x_3258_, lean_object* v_lhs_3259_, lean_object* v_type_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_){
_start:
{
uint8_t v___x_1773__boxed_3266_; uint8_t v___x_1774__boxed_3267_; lean_object* v_res_3268_; 
v___x_1773__boxed_3266_ = lean_unbox(v___x_3255_);
v___x_1774__boxed_3267_ = lean_unbox(v___x_3258_);
v_res_3268_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3(v___x_1773__boxed_3266_, v_kinds_3256_, v_i_3257_, v___x_1774__boxed_3267_, v_lhs_3259_, v_type_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_);
lean_dec(v___y_3264_);
lean_dec_ref(v___y_3263_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3261_);
return v_res_3268_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__3(void){
_start:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3269_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__2));
v___x_3270_ = lean_unsigned_to_nat(43u);
v___x_3271_ = lean_unsigned_to_nat(355u);
v___x_3272_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__1));
v___x_3273_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__0));
v___x_3274_ = l_mkPanicMessageWithDecl(v___x_3273_, v___x_3272_, v___x_3271_, v___x_3270_, v___x_3269_);
return v___x_3274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go(lean_object* v_kinds_3275_, lean_object* v_i_3276_, lean_object* v_type_3277_, lean_object* v_a_3278_, lean_object* v_a_3279_, lean_object* v_a_3280_, lean_object* v_a_3281_){
_start:
{
lean_object* v___x_3283_; uint8_t v___x_3284_; 
v___x_3283_ = lean_array_get_size(v_kinds_3275_);
v___x_3284_ = lean_nat_dec_eq(v_i_3276_, v___x_3283_);
if (v___x_3284_ == 0)
{
uint8_t v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___f_3288_; lean_object* v___x_3289_; 
v___x_3285_ = 0;
v___x_3286_ = lean_box(v___x_3285_);
v___x_3287_ = lean_box(v___x_3284_);
v___f_3288_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__3___boxed), 11, 4);
lean_closure_set(v___f_3288_, 0, v___x_3286_);
lean_closure_set(v___f_3288_, 1, v_kinds_3275_);
lean_closure_set(v___f_3288_, 2, v_i_3276_);
lean_closure_set(v___f_3288_, 3, v___x_3287_);
v___x_3289_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg(v_type_3277_, v___f_3288_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_);
return v___x_3289_;
}
else
{
lean_object* v___x_3290_; lean_object* v___x_3291_; uint8_t v___x_3292_; 
lean_dec(v_i_3276_);
lean_dec_ref(v_kinds_3275_);
v___x_3290_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof___closed__1));
v___x_3291_ = lean_unsigned_to_nat(3u);
v___x_3292_ = l_Lean_Expr_isAppOfArity(v_type_3277_, v___x_3290_, v___x_3291_);
if (v___x_3292_ == 0)
{
lean_object* v___x_3293_; lean_object* v___x_3294_; 
lean_dec_ref(v_type_3277_);
v___x_3293_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__3, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__3_once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__3);
v___x_3294_ = l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0(v___x_3293_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_);
return v___x_3294_;
}
else
{
lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3295_ = l_Lean_Expr_appFn_x21(v_type_3277_);
lean_dec_ref(v_type_3277_);
v___x_3296_ = l_Lean_Expr_appArg_x21(v___x_3295_);
lean_dec_ref(v___x_3295_);
v___x_3297_ = l_Lean_Meta_mkEqRefl(v___x_3296_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_);
return v___x_3297_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__0(lean_object* v___x_3298_, lean_object* v_rhs_3299_, uint8_t v___x_3300_, lean_object* v_i_3301_, lean_object* v_kinds_3302_, lean_object* v___x_3303_, lean_object* v_lhs_3304_, lean_object* v_heq_3305_, lean_object* v_type_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_){
_start:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; uint8_t v___x_3314_; uint8_t v___x_3315_; lean_object* v___x_3316_; 
lean_inc_ref(v_rhs_3299_);
v___x_3312_ = lean_array_push(v___x_3298_, v_rhs_3299_);
lean_inc_ref(v_heq_3305_);
v___x_3313_ = lean_array_push(v___x_3312_, v_heq_3305_);
v___x_3314_ = 1;
v___x_3315_ = 1;
v___x_3316_ = l_Lean_Meta_mkLambdaFVars(v___x_3313_, v_type_3306_, v___x_3300_, v___x_3314_, v___x_3300_, v___x_3314_, v___x_3315_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_);
lean_dec_ref(v___x_3313_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v_a_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; 
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
lean_inc(v_a_3317_);
lean_dec_ref_known(v___x_3316_, 1);
v___x_3318_ = lean_unsigned_to_nat(1u);
v___x_3319_ = lean_nat_add(v_i_3301_, v___x_3318_);
v___x_3320_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go(v_kinds_3302_, v___x_3319_, v___x_3303_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; lean_object* v___x_3322_; 
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_a_3321_);
lean_dec_ref_known(v___x_3320_, 1);
lean_inc_ref(v_heq_3305_);
v___x_3322_ = l_Lean_Meta_mkEqRec(v_a_3317_, v_a_3321_, v_heq_3305_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_);
if (lean_obj_tag(v___x_3322_) == 0)
{
lean_object* v_a_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v_a_3323_ = lean_ctor_get(v___x_3322_, 0);
lean_inc(v_a_3323_);
lean_dec_ref_known(v___x_3322_, 1);
v___x_3324_ = lean_unsigned_to_nat(3u);
v___x_3325_ = lean_mk_empty_array_with_capacity(v___x_3324_);
v___x_3326_ = lean_array_push(v___x_3325_, v_lhs_3304_);
v___x_3327_ = lean_array_push(v___x_3326_, v_rhs_3299_);
v___x_3328_ = lean_array_push(v___x_3327_, v_heq_3305_);
v___x_3329_ = l_Lean_Meta_mkLambdaFVars(v___x_3328_, v_a_3323_, v___x_3300_, v___x_3314_, v___x_3300_, v___x_3314_, v___x_3315_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_);
lean_dec_ref(v___x_3328_);
return v___x_3329_;
}
else
{
lean_dec_ref(v_heq_3305_);
lean_dec_ref(v_lhs_3304_);
lean_dec_ref(v_rhs_3299_);
return v___x_3322_;
}
}
else
{
lean_dec(v_a_3317_);
lean_dec_ref(v_heq_3305_);
lean_dec_ref(v_lhs_3304_);
lean_dec_ref(v_rhs_3299_);
return v___x_3320_;
}
}
else
{
lean_dec_ref(v_heq_3305_);
lean_dec_ref(v_lhs_3304_);
lean_dec_ref(v___x_3303_);
lean_dec_ref(v_kinds_3302_);
lean_dec_ref(v_rhs_3299_);
return v___x_3316_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__0___boxed(lean_object* v___x_3330_, lean_object* v_rhs_3331_, lean_object* v___x_3332_, lean_object* v_i_3333_, lean_object* v_kinds_3334_, lean_object* v___x_3335_, lean_object* v_lhs_3336_, lean_object* v_heq_3337_, lean_object* v_type_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_){
_start:
{
uint8_t v___x_1684__boxed_3344_; lean_object* v_res_3345_; 
v___x_1684__boxed_3344_ = lean_unbox(v___x_3332_);
v_res_3345_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__0(v___x_3330_, v_rhs_3331_, v___x_1684__boxed_3344_, v_i_3333_, v_kinds_3334_, v___x_3335_, v_lhs_3336_, v_heq_3337_, v_type_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec(v_i_3333_);
return v_res_3345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__1(lean_object* v___x_3346_, uint8_t v___x_3347_, lean_object* v_i_3348_, lean_object* v_kinds_3349_, lean_object* v___x_3350_, lean_object* v_lhs_3351_, lean_object* v_rhs_3352_, lean_object* v_type_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_){
_start:
{
lean_object* v___x_3359_; lean_object* v___f_3360_; lean_object* v___x_3361_; 
v___x_3359_ = lean_box(v___x_3347_);
v___f_3360_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3360_, 0, v___x_3346_);
lean_closure_set(v___f_3360_, 1, v_rhs_3352_);
lean_closure_set(v___f_3360_, 2, v___x_3359_);
lean_closure_set(v___f_3360_, 3, v_i_3348_);
lean_closure_set(v___f_3360_, 4, v_kinds_3349_);
lean_closure_set(v___f_3360_, 5, v___x_3350_);
lean_closure_set(v___f_3360_, 6, v_lhs_3351_);
v___x_3361_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_withNext___redArg(v_type_3353_, v___f_3360_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___boxed(lean_object* v_kinds_3362_, lean_object* v_i_3363_, lean_object* v_type_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_){
_start:
{
lean_object* v_res_3370_; 
v_res_3370_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go(v_kinds_3362_, v_i_3363_, v_type_3364_, v_a_3365_, v_a_3366_, v_a_3367_, v_a_3368_);
lean_dec(v_a_3368_);
lean_dec_ref(v_a_3367_);
lean_dec(v_a_3366_);
lean_dec_ref(v_a_3365_);
return v_res_3370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof(lean_object* v_type_3371_, lean_object* v_kinds_3372_, lean_object* v_a_3373_, lean_object* v_a_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; 
v___x_3378_ = lean_unsigned_to_nat(0u);
v___x_3379_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go(v_kinds_3372_, v___x_3378_, v_type_3371_, v_a_3373_, v_a_3374_, v_a_3375_, v_a_3376_);
return v___x_3379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof___boxed(lean_object* v_type_3380_, lean_object* v_kinds_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_a_3386_){
_start:
{
lean_object* v_res_3387_; 
v_res_3387_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof(v_type_3380_, v_kinds_3381_, v_a_3382_, v_a_3383_, v_a_3384_, v_a_3385_);
lean_dec(v_a_3385_);
lean_dec_ref(v_a_3384_);
lean_dec(v_a_3383_);
lean_dec_ref(v_a_3382_);
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__0(lean_object* v_msg_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_){
_start:
{
lean_object* v___f_3394_; lean_object* v___x_1621__overap_3395_; lean_object* v___x_3396_; 
v___f_3394_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0___closed__0));
v___x_1621__overap_3395_ = lean_panic_fn_borrowed(v___f_3394_, v_msg_3388_);
lean_inc(v___y_3392_);
lean_inc_ref(v___y_3391_);
lean_inc(v___y_3390_);
lean_inc_ref(v___y_3389_);
v___x_3396_ = lean_apply_5(v___x_1621__overap_3395_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, lean_box(0));
return v___x_3396_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__0___boxed(lean_object* v_msg_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_){
_start:
{
lean_object* v_res_3403_; 
v_res_3403_ = l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__0(v_msg_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_);
lean_dec(v___y_3401_);
lean_dec_ref(v___y_3400_);
lean_dec(v___y_3399_);
lean_dec_ref(v___y_3398_);
return v_res_3403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2___redArg(lean_object* v_bs_3404_, lean_object* v_k_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_){
_start:
{
lean_object* v___x_3411_; 
v___x_3411_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_box(0), v_bs_3404_, v_k_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3411_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3411_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3412_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
}
else
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
v_a_3420_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3411_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3411_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3420_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2___redArg___boxed(lean_object* v_bs_3428_, lean_object* v_k_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_){
_start:
{
lean_object* v_res_3435_; 
v_res_3435_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2___redArg(v_bs_3428_, v_k_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_);
lean_dec(v___y_3433_);
lean_dec_ref(v___y_3432_);
lean_dec(v___y_3431_);
lean_dec_ref(v___y_3430_);
lean_dec_ref(v_bs_3428_);
return v_res_3435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2(lean_object* v_00_u03b1_3436_, lean_object* v_bs_3437_, lean_object* v_k_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_){
_start:
{
lean_object* v___x_3444_; 
v___x_3444_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2___redArg(v_bs_3437_, v_k_3438_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3445_, lean_object* v_bs_3446_, lean_object* v_k_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_){
_start:
{
lean_object* v_res_3453_; 
v_res_3453_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2(v_00_u03b1_3445_, v_bs_3446_, v_k_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_);
lean_dec(v___y_3451_);
lean_dec_ref(v___y_3450_);
lean_dec(v___y_3449_);
lean_dec_ref(v___y_3448_);
lean_dec_ref(v_bs_3446_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__1(size_t v_sz_3454_, size_t v_i_3455_, lean_object* v_bs_3456_){
_start:
{
uint8_t v___x_3457_; 
v___x_3457_ = lean_usize_dec_lt(v_i_3455_, v_sz_3454_);
if (v___x_3457_ == 0)
{
return v_bs_3456_;
}
else
{
lean_object* v_v_3458_; lean_object* v___x_3459_; lean_object* v_bs_x27_3460_; lean_object* v___x_3461_; uint8_t v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; size_t v___x_3465_; size_t v___x_3466_; lean_object* v___x_3467_; 
v_v_3458_ = lean_array_uget(v_bs_3456_, v_i_3455_);
v___x_3459_ = lean_unsigned_to_nat(0u);
v_bs_x27_3460_ = lean_array_uset(v_bs_3456_, v_i_3455_, v___x_3459_);
v___x_3461_ = l_Lean_Expr_fvarId_x21(v_v_3458_);
lean_dec(v_v_3458_);
v___x_3462_ = 1;
v___x_3463_ = lean_box(v___x_3462_);
v___x_3464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3461_);
lean_ctor_set(v___x_3464_, 1, v___x_3463_);
v___x_3465_ = ((size_t)1ULL);
v___x_3466_ = lean_usize_add(v_i_3455_, v___x_3465_);
v___x_3467_ = lean_array_uset(v_bs_x27_3460_, v_i_3455_, v___x_3464_);
v_i_3455_ = v___x_3466_;
v_bs_3456_ = v___x_3467_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__1___boxed(lean_object* v_sz_3469_, lean_object* v_i_3470_, lean_object* v_bs_3471_){
_start:
{
size_t v_sz_boxed_3472_; size_t v_i_boxed_3473_; lean_object* v_res_3474_; 
v_sz_boxed_3472_ = lean_unbox_usize(v_sz_3469_);
lean_dec(v_sz_3469_);
v_i_boxed_3473_ = lean_unbox_usize(v_i_3470_);
lean_dec(v_i_3470_);
v_res_3474_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__1(v_sz_boxed_3472_, v_i_boxed_3473_, v_bs_3471_);
return v_res_3474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1___redArg(lean_object* v_bs_3475_, lean_object* v_k_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_){
_start:
{
size_t v_sz_3482_; size_t v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; 
v_sz_3482_ = lean_array_size(v_bs_3475_);
v___x_3483_ = ((size_t)0ULL);
v___x_3484_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__1(v_sz_3482_, v___x_3483_, v_bs_3475_);
v___x_3485_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1_spec__2___redArg(v___x_3484_, v_k_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_);
lean_dec_ref(v___x_3484_);
return v___x_3485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1___redArg___boxed(lean_object* v_bs_3486_, lean_object* v_k_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_){
_start:
{
lean_object* v_res_3493_; 
v_res_3493_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1___redArg(v_bs_3486_, v_k_3487_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_);
lean_dec(v___y_3491_);
lean_dec_ref(v___y_3490_);
lean_dec(v___y_3489_);
lean_dec_ref(v___y_3488_);
return v_res_3493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1(lean_object* v_00_u03b1_3494_, lean_object* v_bs_3495_, lean_object* v_k_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_){
_start:
{
lean_object* v___x_3502_; 
v___x_3502_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1___redArg(v_bs_3495_, v_k_3496_, v___y_3497_, v___y_3498_, v___y_3499_, v___y_3500_);
return v___x_3502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1___boxed(lean_object* v_00_u03b1_3503_, lean_object* v_bs_3504_, lean_object* v_k_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_){
_start:
{
lean_object* v_res_3511_; 
v_res_3511_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1(v_00_u03b1_3503_, v_bs_3504_, v_k_3505_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_);
lean_dec(v___y_3509_);
lean_dec_ref(v___y_3508_);
lean_dec(v___y_3507_);
lean_dec_ref(v___y_3506_);
return v_res_3511_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___closed__1(void){
_start:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
v___x_3513_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__2));
v___x_3514_ = lean_unsigned_to_nat(38u);
v___x_3515_ = lean_unsigned_to_nat(328u);
v___x_3516_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___closed__0));
v___x_3517_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__0));
v___x_3518_ = l_mkPanicMessageWithDecl(v___x_3517_, v___x_3516_, v___x_3515_, v___x_3514_, v___x_3513_);
return v___x_3518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__0(lean_object* v_i_3519_, lean_object* v_rhss_3520_, lean_object* v_b_3521_, lean_object* v_eqs_3522_, lean_object* v_hyps_3523_, uint8_t v_subsingletonInstImplicitRhs_3524_, lean_object* v_f_3525_, lean_object* v_info_3526_, lean_object* v_kinds_3527_, lean_object* v_lhss_3528_, lean_object* v_eq_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_){
_start:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3535_ = lean_unsigned_to_nat(1u);
v___x_3536_ = lean_nat_add(v_i_3519_, v___x_3535_);
lean_inc_ref(v_b_3521_);
v___x_3537_ = lean_array_push(v_rhss_3520_, v_b_3521_);
v___x_3538_ = l_Lean_Expr_fvarId_x21(v_eq_3529_);
v___x_3539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3538_);
v___x_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3539_);
v___x_3541_ = lean_array_push(v_eqs_3522_, v___x_3540_);
v___x_3542_ = lean_array_push(v_hyps_3523_, v_b_3521_);
v___x_3543_ = lean_array_push(v___x_3542_, v_eq_3529_);
v___x_3544_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go(v_subsingletonInstImplicitRhs_3524_, v_f_3525_, v_info_3526_, v_kinds_3527_, v_lhss_3528_, v___x_3536_, v___x_3537_, v___x_3541_, v___x_3543_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_);
return v___x_3544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__0___boxed(lean_object* v_i_3545_, lean_object* v_rhss_3546_, lean_object* v_b_3547_, lean_object* v_eqs_3548_, lean_object* v_hyps_3549_, lean_object* v_subsingletonInstImplicitRhs_3550_, lean_object* v_f_3551_, lean_object* v_info_3552_, lean_object* v_kinds_3553_, lean_object* v_lhss_3554_, lean_object* v_eq_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_){
_start:
{
uint8_t v_subsingletonInstImplicitRhs_boxed_3561_; lean_object* v_res_3562_; 
v_subsingletonInstImplicitRhs_boxed_3561_ = lean_unbox(v_subsingletonInstImplicitRhs_3550_);
v_res_3562_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__0(v_i_3545_, v_rhss_3546_, v_b_3547_, v_eqs_3548_, v_hyps_3549_, v_subsingletonInstImplicitRhs_boxed_3561_, v_f_3551_, v_info_3552_, v_kinds_3553_, v_lhss_3554_, v_eq_3555_, v___y_3556_, v___y_3557_, v___y_3558_, v___y_3559_);
lean_dec(v___y_3559_);
lean_dec_ref(v___y_3558_);
lean_dec(v___y_3557_);
lean_dec_ref(v___y_3556_);
lean_dec(v_i_3545_);
return v_res_3562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__1(lean_object* v_i_3564_, lean_object* v_rhss_3565_, lean_object* v_eqs_3566_, lean_object* v_hyps_3567_, uint8_t v_subsingletonInstImplicitRhs_3568_, lean_object* v_f_3569_, lean_object* v_info_3570_, lean_object* v_kinds_3571_, lean_object* v_lhss_3572_, lean_object* v_lhs_3573_, lean_object* v___x_3574_, lean_object* v_b_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_){
_start:
{
lean_object* v___x_3581_; lean_object* v___f_3582_; lean_object* v___x_3583_; 
v___x_3581_ = lean_box(v_subsingletonInstImplicitRhs_3568_);
lean_inc_ref(v_b_3575_);
v___f_3582_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__0___boxed), 16, 10);
lean_closure_set(v___f_3582_, 0, v_i_3564_);
lean_closure_set(v___f_3582_, 1, v_rhss_3565_);
lean_closure_set(v___f_3582_, 2, v_b_3575_);
lean_closure_set(v___f_3582_, 3, v_eqs_3566_);
lean_closure_set(v___f_3582_, 4, v_hyps_3567_);
lean_closure_set(v___f_3582_, 5, v___x_3581_);
lean_closure_set(v___f_3582_, 6, v_f_3569_);
lean_closure_set(v___f_3582_, 7, v_info_3570_);
lean_closure_set(v___f_3582_, 8, v_kinds_3571_);
lean_closure_set(v___f_3582_, 9, v_lhss_3572_);
v___x_3583_ = l_Lean_Meta_mkEq(v_lhs_3573_, v_b_3575_, v___y_3576_, v___y_3577_, v___y_3578_, v___y_3579_);
if (lean_obj_tag(v___x_3583_) == 0)
{
lean_object* v_a_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
v_a_3584_ = lean_ctor_get(v___x_3583_, 0);
lean_inc(v_a_3584_);
lean_dec_ref_known(v___x_3583_, 1);
v___x_3585_ = ((lean_object*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__1___closed__0));
v___x_3586_ = l_Lean_Name_appendBefore(v___x_3574_, v___x_3585_);
v___x_3587_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0___redArg(v___x_3586_, v_a_3584_, v___f_3582_, v___y_3576_, v___y_3577_, v___y_3578_, v___y_3579_);
return v___x_3587_;
}
else
{
lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3595_; 
lean_dec_ref(v___f_3582_);
lean_dec(v___x_3574_);
v_a_3588_ = lean_ctor_get(v___x_3583_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3583_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3590_ = v___x_3583_;
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v___x_3583_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_a_3588_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__1___boxed(lean_object** _args){
lean_object* v_i_3596_ = _args[0];
lean_object* v_rhss_3597_ = _args[1];
lean_object* v_eqs_3598_ = _args[2];
lean_object* v_hyps_3599_ = _args[3];
lean_object* v_subsingletonInstImplicitRhs_3600_ = _args[4];
lean_object* v_f_3601_ = _args[5];
lean_object* v_info_3602_ = _args[6];
lean_object* v_kinds_3603_ = _args[7];
lean_object* v_lhss_3604_ = _args[8];
lean_object* v_lhs_3605_ = _args[9];
lean_object* v___x_3606_ = _args[10];
lean_object* v_b_3607_ = _args[11];
lean_object* v___y_3608_ = _args[12];
lean_object* v___y_3609_ = _args[13];
lean_object* v___y_3610_ = _args[14];
lean_object* v___y_3611_ = _args[15];
lean_object* v___y_3612_ = _args[16];
_start:
{
uint8_t v_subsingletonInstImplicitRhs_boxed_3613_; lean_object* v_res_3614_; 
v_subsingletonInstImplicitRhs_boxed_3613_ = lean_unbox(v_subsingletonInstImplicitRhs_3600_);
v_res_3614_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__1(v_i_3596_, v_rhss_3597_, v_eqs_3598_, v_hyps_3599_, v_subsingletonInstImplicitRhs_boxed_3613_, v_f_3601_, v_info_3602_, v_kinds_3603_, v_lhss_3604_, v_lhs_3605_, v___x_3606_, v_b_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_);
lean_dec(v___y_3611_);
lean_dec_ref(v___y_3610_);
lean_dec(v___y_3609_);
lean_dec_ref(v___y_3608_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5(lean_object* v_i_3615_, lean_object* v_rhss_3616_, lean_object* v_eqs_3617_, lean_object* v_hyps_3618_, uint8_t v_subsingletonInstImplicitRhs_3619_, lean_object* v_f_3620_, lean_object* v_info_3621_, lean_object* v_kinds_3622_, lean_object* v_lhss_3623_, lean_object* v_lhs_3624_, lean_object* v___x_3625_, lean_object* v_name_3626_, uint8_t v_bi_3627_, lean_object* v_type_3628_, uint8_t v_kind_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_){
_start:
{
lean_object* v___x_3635_; lean_object* v___f_3636_; lean_object* v___x_3637_; 
v___x_3635_ = lean_box(v_subsingletonInstImplicitRhs_3619_);
v___f_3636_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___lam__1___boxed), 17, 11);
lean_closure_set(v___f_3636_, 0, v_i_3615_);
lean_closure_set(v___f_3636_, 1, v_rhss_3616_);
lean_closure_set(v___f_3636_, 2, v_eqs_3617_);
lean_closure_set(v___f_3636_, 3, v_hyps_3618_);
lean_closure_set(v___f_3636_, 4, v___x_3635_);
lean_closure_set(v___f_3636_, 5, v_f_3620_);
lean_closure_set(v___f_3636_, 6, v_info_3621_);
lean_closure_set(v___f_3636_, 7, v_kinds_3622_);
lean_closure_set(v___f_3636_, 8, v_lhss_3623_);
lean_closure_set(v___f_3636_, 9, v_lhs_3624_);
lean_closure_set(v___f_3636_, 10, v___x_3625_);
v___x_3637_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3626_, v_bi_3627_, v_type_3628_, v___f_3636_, v_kind_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_);
if (lean_obj_tag(v___x_3637_) == 0)
{
lean_object* v_a_3638_; lean_object* v___x_3640_; uint8_t v_isShared_3641_; uint8_t v_isSharedCheck_3645_; 
v_a_3638_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3645_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3645_ == 0)
{
v___x_3640_ = v___x_3637_;
v_isShared_3641_ = v_isSharedCheck_3645_;
goto v_resetjp_3639_;
}
else
{
lean_inc(v_a_3638_);
lean_dec(v___x_3637_);
v___x_3640_ = lean_box(0);
v_isShared_3641_ = v_isSharedCheck_3645_;
goto v_resetjp_3639_;
}
v_resetjp_3639_:
{
lean_object* v___x_3643_; 
if (v_isShared_3641_ == 0)
{
v___x_3643_ = v___x_3640_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v_a_3638_);
v___x_3643_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
return v___x_3643_;
}
}
}
else
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3653_; 
v_a_3646_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3648_ = v___x_3637_;
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___x_3637_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3651_; 
if (v_isShared_3649_ == 0)
{
v___x_3651_ = v___x_3648_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_a_3646_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___lam__0(lean_object* v_lhs_3654_, lean_object* v_rhss_3655_, lean_object* v_lhss_3656_, lean_object* v_i_3657_, lean_object* v_eqs_3658_, lean_object* v_hyps_3659_, uint8_t v_subsingletonInstImplicitRhs_3660_, lean_object* v_f_3661_, lean_object* v_info_3662_, lean_object* v_kinds_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_){
_start:
{
lean_object* v___x_3669_; 
lean_inc(v___y_3667_);
lean_inc_ref(v___y_3666_);
lean_inc(v___y_3665_);
lean_inc_ref(v___y_3664_);
lean_inc_ref(v_lhs_3654_);
v___x_3669_ = lean_infer_type(v_lhs_3654_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_);
if (lean_obj_tag(v___x_3669_) == 0)
{
lean_object* v_a_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; uint8_t v___y_3677_; 
v_a_3670_ = lean_ctor_get(v___x_3669_, 0);
lean_inc(v_a_3670_);
lean_dec_ref_known(v___x_3669_, 1);
v___x_3671_ = lean_array_get_size(v_rhss_3655_);
v___x_3672_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_lhss_3656_);
v___x_3673_ = l_Array_toSubarray___redArg(v_lhss_3656_, v___x_3672_, v___x_3671_);
v___x_3674_ = l_Subarray_copy___redArg(v___x_3673_);
v___x_3675_ = l_Lean_Expr_replaceFVars(v_a_3670_, v___x_3674_, v_rhss_3655_);
lean_dec_ref(v___x_3674_);
lean_dec(v_a_3670_);
if (v_subsingletonInstImplicitRhs_3660_ == 0)
{
uint8_t v___x_3692_; 
v___x_3692_ = 1;
v___y_3677_ = v___x_3692_;
goto v___jp_3676_;
}
else
{
uint8_t v___x_3693_; 
v___x_3693_ = 3;
v___y_3677_ = v___x_3693_;
goto v___jp_3676_;
}
v___jp_3676_:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; 
v___x_3678_ = l_Lean_Expr_fvarId_x21(v_lhs_3654_);
v___x_3679_ = l_Lean_FVarId_getDecl___redArg(v___x_3678_, v___y_3664_, v___y_3666_, v___y_3667_);
if (lean_obj_tag(v___x_3679_) == 0)
{
lean_object* v_a_3680_; lean_object* v___x_3681_; uint8_t v___x_3682_; lean_object* v___x_3683_; 
v_a_3680_ = lean_ctor_get(v___x_3679_, 0);
lean_inc(v_a_3680_);
lean_dec_ref_known(v___x_3679_, 1);
v___x_3681_ = l_Lean_LocalDecl_userName(v_a_3680_);
lean_dec(v_a_3680_);
v___x_3682_ = 0;
v___x_3683_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4(v_i_3657_, v_rhss_3655_, v_lhs_3654_, v_eqs_3658_, v_hyps_3659_, v_subsingletonInstImplicitRhs_3660_, v_f_3661_, v_info_3662_, v_kinds_3663_, v_lhss_3656_, v___x_3681_, v___y_3677_, v___x_3675_, v___x_3682_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_);
lean_dec(v___y_3667_);
lean_dec_ref(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec_ref(v___y_3664_);
return v___x_3683_;
}
else
{
lean_object* v_a_3684_; lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3691_; 
lean_dec_ref(v___x_3675_);
lean_dec(v___y_3667_);
lean_dec_ref(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec_ref(v___y_3664_);
lean_dec_ref(v_kinds_3663_);
lean_dec_ref(v_info_3662_);
lean_dec_ref(v_f_3661_);
lean_dec_ref(v_hyps_3659_);
lean_dec_ref(v_eqs_3658_);
lean_dec(v_i_3657_);
lean_dec_ref(v_lhss_3656_);
lean_dec_ref(v_rhss_3655_);
lean_dec_ref(v_lhs_3654_);
v_a_3684_ = lean_ctor_get(v___x_3679_, 0);
v_isSharedCheck_3691_ = !lean_is_exclusive(v___x_3679_);
if (v_isSharedCheck_3691_ == 0)
{
v___x_3686_ = v___x_3679_;
v_isShared_3687_ = v_isSharedCheck_3691_;
goto v_resetjp_3685_;
}
else
{
lean_inc(v_a_3684_);
lean_dec(v___x_3679_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3691_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___x_3689_; 
if (v_isShared_3687_ == 0)
{
v___x_3689_ = v___x_3686_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v_a_3684_);
v___x_3689_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
return v___x_3689_;
}
}
}
}
}
else
{
lean_object* v_a_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3701_; 
lean_dec(v___y_3667_);
lean_dec_ref(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec_ref(v___y_3664_);
lean_dec_ref(v_kinds_3663_);
lean_dec_ref(v_info_3662_);
lean_dec_ref(v_f_3661_);
lean_dec_ref(v_hyps_3659_);
lean_dec_ref(v_eqs_3658_);
lean_dec(v_i_3657_);
lean_dec_ref(v_lhss_3656_);
lean_dec_ref(v_rhss_3655_);
lean_dec_ref(v_lhs_3654_);
v_a_3694_ = lean_ctor_get(v___x_3669_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3669_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3696_ = v___x_3669_;
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_a_3694_);
lean_dec(v___x_3669_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v___x_3699_; 
if (v_isShared_3697_ == 0)
{
v___x_3699_ = v___x_3696_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v_a_3694_);
v___x_3699_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
return v___x_3699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___lam__0___boxed(lean_object* v_lhs_3702_, lean_object* v_rhss_3703_, lean_object* v_lhss_3704_, lean_object* v_i_3705_, lean_object* v_eqs_3706_, lean_object* v_hyps_3707_, lean_object* v_subsingletonInstImplicitRhs_3708_, lean_object* v_f_3709_, lean_object* v_info_3710_, lean_object* v_kinds_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_){
_start:
{
uint8_t v_subsingletonInstImplicitRhs_boxed_3717_; lean_object* v_res_3718_; 
v_subsingletonInstImplicitRhs_boxed_3717_ = lean_unbox(v_subsingletonInstImplicitRhs_3708_);
v_res_3718_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___lam__0(v_lhs_3702_, v_rhss_3703_, v_lhss_3704_, v_i_3705_, v_eqs_3706_, v_hyps_3707_, v_subsingletonInstImplicitRhs_boxed_3717_, v_f_3709_, v_info_3710_, v_kinds_3711_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_);
return v_res_3718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go(uint8_t v_subsingletonInstImplicitRhs_3719_, lean_object* v_f_3720_, lean_object* v_info_3721_, lean_object* v_kinds_3722_, lean_object* v_lhss_3723_, lean_object* v_i_3724_, lean_object* v_rhss_3725_, lean_object* v_eqs_3726_, lean_object* v_hyps_3727_, lean_object* v_a_3728_, lean_object* v_a_3729_, lean_object* v_a_3730_, lean_object* v_a_3731_){
_start:
{
lean_object* v___y_3734_; lean_object* v___y_3735_; lean_object* v___y_3736_; lean_object* v___y_3737_; lean_object* v___x_3740_; uint8_t v___x_3741_; 
v___x_3740_ = lean_array_get_size(v_kinds_3722_);
v___x_3741_ = lean_nat_dec_eq(v_i_3724_, v___x_3740_);
if (v___x_3741_ == 0)
{
lean_object* v___x_3742_; uint8_t v___x_3743_; lean_object* v_lhs_3744_; lean_object* v_hyps_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; uint8_t v___x_3748_; 
v___x_3742_ = l_Lean_instInhabitedExpr;
v___x_3743_ = 0;
v_lhs_3744_ = lean_array_get_borrowed(v___x_3742_, v_lhss_3723_, v_i_3724_);
lean_inc(v_lhs_3744_);
v_hyps_3745_ = lean_array_push(v_hyps_3727_, v_lhs_3744_);
v___x_3746_ = lean_box(v___x_3743_);
v___x_3747_ = lean_array_get(v___x_3746_, v_kinds_3722_, v_i_3724_);
lean_dec(v___x_3746_);
v___x_3748_ = lean_unbox(v___x_3747_);
lean_dec(v___x_3747_);
switch(v___x_3748_)
{
case 0:
{
lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3749_ = lean_unsigned_to_nat(1u);
v___x_3750_ = lean_nat_add(v_i_3724_, v___x_3749_);
lean_dec(v_i_3724_);
lean_inc(v_lhs_3744_);
v___x_3751_ = lean_array_push(v_rhss_3725_, v_lhs_3744_);
v___x_3752_ = lean_box(0);
v___x_3753_ = lean_array_push(v_eqs_3726_, v___x_3752_);
v_i_3724_ = v___x_3750_;
v_rhss_3725_ = v___x_3751_;
v_eqs_3726_ = v___x_3753_;
v_hyps_3727_ = v_hyps_3745_;
goto _start;
}
case 2:
{
lean_object* v___x_3755_; lean_object* v___x_3756_; 
lean_inc(v_lhs_3744_);
v___x_3755_ = l_Lean_Expr_fvarId_x21(v_lhs_3744_);
v___x_3756_ = l_Lean_FVarId_getDecl___redArg(v___x_3755_, v_a_3728_, v_a_3730_, v_a_3731_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v_a_3757_; lean_object* v___x_3758_; uint8_t v___x_3759_; lean_object* v___x_3760_; uint8_t v___x_3761_; lean_object* v___x_3762_; 
v_a_3757_ = lean_ctor_get(v___x_3756_, 0);
lean_inc(v_a_3757_);
lean_dec_ref_known(v___x_3756_, 1);
v___x_3758_ = l_Lean_LocalDecl_userName(v_a_3757_);
v___x_3759_ = l_Lean_LocalDecl_binderInfo(v_a_3757_);
v___x_3760_ = l_Lean_LocalDecl_type(v_a_3757_);
lean_dec(v_a_3757_);
v___x_3761_ = 0;
lean_inc(v___x_3758_);
v___x_3762_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5(v_i_3724_, v_rhss_3725_, v_eqs_3726_, v_hyps_3745_, v_subsingletonInstImplicitRhs_3719_, v_f_3720_, v_info_3721_, v_kinds_3722_, v_lhss_3723_, v_lhs_3744_, v___x_3758_, v___x_3758_, v___x_3759_, v___x_3760_, v___x_3761_, v_a_3728_, v_a_3729_, v_a_3730_, v_a_3731_);
return v___x_3762_;
}
else
{
lean_object* v_a_3763_; lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3770_; 
lean_dec_ref(v_hyps_3745_);
lean_dec(v_lhs_3744_);
lean_dec_ref(v_eqs_3726_);
lean_dec_ref(v_rhss_3725_);
lean_dec(v_i_3724_);
lean_dec_ref(v_lhss_3723_);
lean_dec_ref(v_kinds_3722_);
lean_dec_ref(v_info_3721_);
lean_dec_ref(v_f_3720_);
v_a_3763_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3765_ = v___x_3756_;
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
else
{
lean_inc(v_a_3763_);
lean_dec(v___x_3756_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
lean_object* v___x_3768_; 
if (v_isShared_3766_ == 0)
{
v___x_3768_ = v___x_3765_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_a_3763_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
return v___x_3768_;
}
}
}
}
case 3:
{
lean_object* v___x_3771_; lean_object* v___x_3772_; 
v___x_3771_ = l_Lean_Meta_instInhabitedParamInfo_default;
lean_inc(v_a_3731_);
lean_inc_ref(v_a_3730_);
lean_inc(v_a_3729_);
lean_inc_ref(v_a_3728_);
lean_inc(v_lhs_3744_);
v___x_3772_ = lean_infer_type(v_lhs_3744_, v_a_3728_, v_a_3729_, v_a_3730_, v_a_3731_);
if (lean_obj_tag(v___x_3772_) == 0)
{
lean_object* v_a_3773_; lean_object* v_paramInfo_3774_; lean_object* v___x_3775_; lean_object* v_backDeps_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; 
v_a_3773_ = lean_ctor_get(v___x_3772_, 0);
lean_inc(v_a_3773_);
lean_dec_ref_known(v___x_3772_, 1);
v_paramInfo_3774_ = lean_ctor_get(v_info_3721_, 0);
v___x_3775_ = lean_array_get_borrowed(v___x_3771_, v_paramInfo_3774_, v_i_3724_);
v_backDeps_3776_ = lean_ctor_get(v___x_3775_, 0);
v___x_3777_ = lean_array_get_size(v_rhss_3725_);
v___x_3778_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_lhss_3723_);
v___x_3779_ = l_Array_toSubarray___redArg(v_lhss_3723_, v___x_3778_, v___x_3777_);
v___x_3780_ = l_Subarray_copy___redArg(v___x_3779_);
v___x_3781_ = l_Lean_Expr_replaceFVars(v_a_3773_, v___x_3780_, v_rhss_3725_);
lean_dec_ref(v___x_3780_);
lean_dec(v_a_3773_);
v___x_3782_ = l_Lean_Expr_fvarId_x21(v_lhs_3744_);
v___x_3783_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast(v___x_3782_, v___x_3781_, v_backDeps_3776_, v_eqs_3726_, v_a_3728_, v_a_3729_, v_a_3730_, v_a_3731_);
if (lean_obj_tag(v___x_3783_) == 0)
{
lean_object* v_a_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; 
v_a_3784_ = lean_ctor_get(v___x_3783_, 0);
lean_inc(v_a_3784_);
lean_dec_ref_known(v___x_3783_, 1);
v___x_3785_ = lean_unsigned_to_nat(1u);
v___x_3786_ = lean_nat_add(v_i_3724_, v___x_3785_);
lean_dec(v_i_3724_);
v___x_3787_ = lean_array_push(v_rhss_3725_, v_a_3784_);
v___x_3788_ = lean_box(0);
v___x_3789_ = lean_array_push(v_eqs_3726_, v___x_3788_);
v_i_3724_ = v___x_3786_;
v_rhss_3725_ = v___x_3787_;
v_eqs_3726_ = v___x_3789_;
v_hyps_3727_ = v_hyps_3745_;
goto _start;
}
else
{
lean_object* v_a_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3798_; 
lean_dec_ref(v_hyps_3745_);
lean_dec_ref(v_eqs_3726_);
lean_dec_ref(v_rhss_3725_);
lean_dec(v_i_3724_);
lean_dec_ref(v_lhss_3723_);
lean_dec_ref(v_kinds_3722_);
lean_dec_ref(v_info_3721_);
lean_dec_ref(v_f_3720_);
v_a_3791_ = lean_ctor_get(v___x_3783_, 0);
v_isSharedCheck_3798_ = !lean_is_exclusive(v___x_3783_);
if (v_isSharedCheck_3798_ == 0)
{
v___x_3793_ = v___x_3783_;
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_a_3791_);
lean_dec(v___x_3783_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v___x_3796_; 
if (v_isShared_3794_ == 0)
{
v___x_3796_ = v___x_3793_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v_a_3791_);
v___x_3796_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
return v___x_3796_;
}
}
}
}
else
{
lean_object* v_a_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3806_; 
lean_dec_ref(v_hyps_3745_);
lean_dec_ref(v_eqs_3726_);
lean_dec_ref(v_rhss_3725_);
lean_dec(v_i_3724_);
lean_dec_ref(v_lhss_3723_);
lean_dec_ref(v_kinds_3722_);
lean_dec_ref(v_info_3721_);
lean_dec_ref(v_f_3720_);
v_a_3799_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3806_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3806_ == 0)
{
v___x_3801_ = v___x_3772_;
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_a_3799_);
lean_dec(v___x_3772_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3804_; 
if (v_isShared_3802_ == 0)
{
v___x_3804_ = v___x_3801_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v_a_3799_);
v___x_3804_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
return v___x_3804_;
}
}
}
}
case 5:
{
lean_object* v___x_3807_; lean_object* v___f_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
lean_inc_n(v_lhs_3744_, 2);
v___x_3807_ = lean_box(v_subsingletonInstImplicitRhs_3719_);
v___f_3808_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___lam__0___boxed), 15, 10);
lean_closure_set(v___f_3808_, 0, v_lhs_3744_);
lean_closure_set(v___f_3808_, 1, v_rhss_3725_);
lean_closure_set(v___f_3808_, 2, v_lhss_3723_);
lean_closure_set(v___f_3808_, 3, v_i_3724_);
lean_closure_set(v___f_3808_, 4, v_eqs_3726_);
lean_closure_set(v___f_3808_, 5, v_hyps_3745_);
lean_closure_set(v___f_3808_, 6, v___x_3807_);
lean_closure_set(v___f_3808_, 7, v_f_3720_);
lean_closure_set(v___f_3808_, 8, v_info_3721_);
lean_closure_set(v___f_3808_, 9, v_kinds_3722_);
v___x_3809_ = lean_unsigned_to_nat(1u);
v___x_3810_ = lean_mk_empty_array_with_capacity(v___x_3809_);
v___x_3811_ = lean_array_push(v___x_3810_, v_lhs_3744_);
v___x_3812_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__1___redArg(v___x_3811_, v___f_3808_, v_a_3728_, v_a_3729_, v_a_3730_, v_a_3731_);
return v___x_3812_;
}
default: 
{
lean_dec_ref(v_hyps_3745_);
lean_dec_ref(v_eqs_3726_);
lean_dec_ref(v_rhss_3725_);
lean_dec(v_i_3724_);
lean_dec_ref(v_lhss_3723_);
lean_dec_ref(v_kinds_3722_);
lean_dec_ref(v_info_3721_);
lean_dec_ref(v_f_3720_);
v___y_3734_ = v_a_3728_;
v___y_3735_ = v_a_3729_;
v___y_3736_ = v_a_3730_;
v___y_3737_ = v_a_3731_;
goto v___jp_3733_;
}
}
}
else
{
lean_object* v_lhs_3813_; lean_object* v_rhs_3814_; lean_object* v___x_3815_; 
lean_dec_ref(v_eqs_3726_);
lean_dec(v_i_3724_);
lean_dec_ref(v_info_3721_);
lean_inc_ref(v_f_3720_);
v_lhs_3813_ = l_Lean_mkAppN(v_f_3720_, v_lhss_3723_);
lean_dec_ref(v_lhss_3723_);
v_rhs_3814_ = l_Lean_mkAppN(v_f_3720_, v_rhss_3725_);
lean_dec_ref(v_rhss_3725_);
v___x_3815_ = l_Lean_Meta_mkEq(v_lhs_3813_, v_rhs_3814_, v_a_3728_, v_a_3729_, v_a_3730_, v_a_3731_);
if (lean_obj_tag(v___x_3815_) == 0)
{
lean_object* v_a_3816_; uint8_t v___x_3817_; uint8_t v___x_3818_; lean_object* v___x_3819_; 
v_a_3816_ = lean_ctor_get(v___x_3815_, 0);
lean_inc(v_a_3816_);
lean_dec_ref_known(v___x_3815_, 1);
v___x_3817_ = 0;
v___x_3818_ = 1;
v___x_3819_ = l_Lean_Meta_mkForallFVars(v_hyps_3727_, v_a_3816_, v___x_3817_, v___x_3741_, v___x_3741_, v___x_3818_, v_a_3728_, v_a_3729_, v_a_3730_, v_a_3731_);
lean_dec_ref(v_hyps_3727_);
if (lean_obj_tag(v___x_3819_) == 0)
{
lean_object* v_a_3820_; lean_object* v___x_3821_; 
v_a_3820_ = lean_ctor_get(v___x_3819_, 0);
lean_inc_n(v_a_3820_, 2);
lean_dec_ref_known(v___x_3819_, 1);
lean_inc_ref(v_kinds_3722_);
v___x_3821_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof(v_a_3820_, v_kinds_3722_, v_a_3728_, v_a_3729_, v_a_3730_, v_a_3731_);
if (lean_obj_tag(v___x_3821_) == 0)
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3830_; 
v_a_3822_ = lean_ctor_get(v___x_3821_, 0);
v_isSharedCheck_3830_ = !lean_is_exclusive(v___x_3821_);
if (v_isSharedCheck_3830_ == 0)
{
v___x_3824_ = v___x_3821_;
v_isShared_3825_ = v_isSharedCheck_3830_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v___x_3821_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3830_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3826_; lean_object* v___x_3828_; 
v___x_3826_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3826_, 0, v_a_3820_);
lean_ctor_set(v___x_3826_, 1, v_a_3822_);
lean_ctor_set(v___x_3826_, 2, v_kinds_3722_);
if (v_isShared_3825_ == 0)
{
lean_ctor_set(v___x_3824_, 0, v___x_3826_);
v___x_3828_ = v___x_3824_;
goto v_reusejp_3827_;
}
else
{
lean_object* v_reuseFailAlloc_3829_; 
v_reuseFailAlloc_3829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3829_, 0, v___x_3826_);
v___x_3828_ = v_reuseFailAlloc_3829_;
goto v_reusejp_3827_;
}
v_reusejp_3827_:
{
return v___x_3828_;
}
}
}
else
{
lean_object* v_a_3831_; lean_object* v___x_3833_; uint8_t v_isShared_3834_; uint8_t v_isSharedCheck_3838_; 
lean_dec(v_a_3820_);
lean_dec_ref(v_kinds_3722_);
v_a_3831_ = lean_ctor_get(v___x_3821_, 0);
v_isSharedCheck_3838_ = !lean_is_exclusive(v___x_3821_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3833_ = v___x_3821_;
v_isShared_3834_ = v_isSharedCheck_3838_;
goto v_resetjp_3832_;
}
else
{
lean_inc(v_a_3831_);
lean_dec(v___x_3821_);
v___x_3833_ = lean_box(0);
v_isShared_3834_ = v_isSharedCheck_3838_;
goto v_resetjp_3832_;
}
v_resetjp_3832_:
{
lean_object* v___x_3836_; 
if (v_isShared_3834_ == 0)
{
v___x_3836_ = v___x_3833_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v_a_3831_);
v___x_3836_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
return v___x_3836_;
}
}
}
}
else
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3846_; 
lean_dec_ref(v_kinds_3722_);
v_a_3839_ = lean_ctor_get(v___x_3819_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v___x_3819_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3841_ = v___x_3819_;
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v___x_3819_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v___x_3844_; 
if (v_isShared_3842_ == 0)
{
v___x_3844_ = v___x_3841_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v_a_3839_);
v___x_3844_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
return v___x_3844_;
}
}
}
}
else
{
lean_object* v_a_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3854_; 
lean_dec_ref(v_hyps_3727_);
lean_dec_ref(v_kinds_3722_);
v_a_3847_ = lean_ctor_get(v___x_3815_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3815_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3849_ = v___x_3815_;
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_a_3847_);
lean_dec(v___x_3815_);
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
v___jp_3733_:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; 
v___x_3738_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___closed__1, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___closed__1_once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___closed__1);
v___x_3739_ = l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__0(v___x_3738_, v___y_3734_, v___y_3735_, v___y_3736_, v___y_3737_);
return v___x_3739_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4___lam__0(lean_object* v_i_3855_, lean_object* v_rhss_3856_, lean_object* v_lhs_3857_, lean_object* v_eqs_3858_, lean_object* v_hyps_3859_, uint8_t v_subsingletonInstImplicitRhs_3860_, lean_object* v_f_3861_, lean_object* v_info_3862_, lean_object* v_kinds_3863_, lean_object* v_lhss_3864_, lean_object* v_b_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_){
_start:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
v___x_3871_ = lean_unsigned_to_nat(1u);
v___x_3872_ = lean_nat_add(v_i_3855_, v___x_3871_);
lean_inc_ref(v_b_3865_);
v___x_3873_ = lean_array_push(v_rhss_3856_, v_b_3865_);
v___x_3874_ = l_Lean_Expr_fvarId_x21(v_lhs_3857_);
v___x_3875_ = l_Lean_Expr_fvarId_x21(v_b_3865_);
v___x_3876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3874_);
lean_ctor_set(v___x_3876_, 1, v___x_3875_);
v___x_3877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3877_, 0, v___x_3876_);
v___x_3878_ = lean_array_push(v_eqs_3858_, v___x_3877_);
v___x_3879_ = lean_array_push(v_hyps_3859_, v_b_3865_);
v___x_3880_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go(v_subsingletonInstImplicitRhs_3860_, v_f_3861_, v_info_3862_, v_kinds_3863_, v_lhss_3864_, v___x_3872_, v___x_3873_, v___x_3878_, v___x_3879_, v___y_3866_, v___y_3867_, v___y_3868_, v___y_3869_);
return v___x_3880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4___lam__0___boxed(lean_object* v_i_3881_, lean_object* v_rhss_3882_, lean_object* v_lhs_3883_, lean_object* v_eqs_3884_, lean_object* v_hyps_3885_, lean_object* v_subsingletonInstImplicitRhs_3886_, lean_object* v_f_3887_, lean_object* v_info_3888_, lean_object* v_kinds_3889_, lean_object* v_lhss_3890_, lean_object* v_b_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_){
_start:
{
uint8_t v_subsingletonInstImplicitRhs_boxed_3897_; lean_object* v_res_3898_; 
v_subsingletonInstImplicitRhs_boxed_3897_ = lean_unbox(v_subsingletonInstImplicitRhs_3886_);
v_res_3898_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4___lam__0(v_i_3881_, v_rhss_3882_, v_lhs_3883_, v_eqs_3884_, v_hyps_3885_, v_subsingletonInstImplicitRhs_boxed_3897_, v_f_3887_, v_info_3888_, v_kinds_3889_, v_lhss_3890_, v_b_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
lean_dec(v___y_3895_);
lean_dec_ref(v___y_3894_);
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec_ref(v_lhs_3883_);
lean_dec(v_i_3881_);
return v_res_3898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4(lean_object* v_i_3899_, lean_object* v_rhss_3900_, lean_object* v_lhs_3901_, lean_object* v_eqs_3902_, lean_object* v_hyps_3903_, uint8_t v_subsingletonInstImplicitRhs_3904_, lean_object* v_f_3905_, lean_object* v_info_3906_, lean_object* v_kinds_3907_, lean_object* v_lhss_3908_, lean_object* v_name_3909_, uint8_t v_bi_3910_, lean_object* v_type_3911_, uint8_t v_kind_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_){
_start:
{
lean_object* v___x_3918_; lean_object* v___f_3919_; lean_object* v___x_3920_; 
v___x_3918_ = lean_box(v_subsingletonInstImplicitRhs_3904_);
v___f_3919_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4___lam__0___boxed), 16, 10);
lean_closure_set(v___f_3919_, 0, v_i_3899_);
lean_closure_set(v___f_3919_, 1, v_rhss_3900_);
lean_closure_set(v___f_3919_, 2, v_lhs_3901_);
lean_closure_set(v___f_3919_, 3, v_eqs_3902_);
lean_closure_set(v___f_3919_, 4, v_hyps_3903_);
lean_closure_set(v___f_3919_, 5, v___x_3918_);
lean_closure_set(v___f_3919_, 6, v_f_3905_);
lean_closure_set(v___f_3919_, 7, v_info_3906_);
lean_closure_set(v___f_3919_, 8, v_kinds_3907_);
lean_closure_set(v___f_3919_, 9, v_lhss_3908_);
v___x_3920_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3909_, v_bi_3910_, v_type_3911_, v___f_3919_, v_kind_3912_, v___y_3913_, v___y_3914_, v___y_3915_, v___y_3916_);
if (lean_obj_tag(v___x_3920_) == 0)
{
lean_object* v_a_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3928_; 
v_a_3921_ = lean_ctor_get(v___x_3920_, 0);
v_isSharedCheck_3928_ = !lean_is_exclusive(v___x_3920_);
if (v_isSharedCheck_3928_ == 0)
{
v___x_3923_ = v___x_3920_;
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v___x_3920_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3926_; 
if (v_isShared_3924_ == 0)
{
v___x_3926_ = v___x_3923_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v_a_3921_);
v___x_3926_ = v_reuseFailAlloc_3927_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
return v___x_3926_;
}
}
}
else
{
lean_object* v_a_3929_; lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3936_; 
v_a_3929_ = lean_ctor_get(v___x_3920_, 0);
v_isSharedCheck_3936_ = !lean_is_exclusive(v___x_3920_);
if (v_isSharedCheck_3936_ == 0)
{
v___x_3931_ = v___x_3920_;
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
else
{
lean_inc(v_a_3929_);
lean_dec(v___x_3920_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
lean_object* v___x_3934_; 
if (v_isShared_3932_ == 0)
{
v___x_3934_ = v___x_3931_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v_a_3929_);
v___x_3934_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
return v___x_3934_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4___boxed(lean_object** _args){
lean_object* v_i_3937_ = _args[0];
lean_object* v_rhss_3938_ = _args[1];
lean_object* v_lhs_3939_ = _args[2];
lean_object* v_eqs_3940_ = _args[3];
lean_object* v_hyps_3941_ = _args[4];
lean_object* v_subsingletonInstImplicitRhs_3942_ = _args[5];
lean_object* v_f_3943_ = _args[6];
lean_object* v_info_3944_ = _args[7];
lean_object* v_kinds_3945_ = _args[8];
lean_object* v_lhss_3946_ = _args[9];
lean_object* v_name_3947_ = _args[10];
lean_object* v_bi_3948_ = _args[11];
lean_object* v_type_3949_ = _args[12];
lean_object* v_kind_3950_ = _args[13];
lean_object* v___y_3951_ = _args[14];
lean_object* v___y_3952_ = _args[15];
lean_object* v___y_3953_ = _args[16];
lean_object* v___y_3954_ = _args[17];
lean_object* v___y_3955_ = _args[18];
_start:
{
uint8_t v_subsingletonInstImplicitRhs_boxed_3956_; uint8_t v_bi_boxed_3957_; uint8_t v_kind_boxed_3958_; lean_object* v_res_3959_; 
v_subsingletonInstImplicitRhs_boxed_3956_ = lean_unbox(v_subsingletonInstImplicitRhs_3942_);
v_bi_boxed_3957_ = lean_unbox(v_bi_3948_);
v_kind_boxed_3958_ = lean_unbox(v_kind_3950_);
v_res_3959_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__4(v_i_3937_, v_rhss_3938_, v_lhs_3939_, v_eqs_3940_, v_hyps_3941_, v_subsingletonInstImplicitRhs_boxed_3956_, v_f_3943_, v_info_3944_, v_kinds_3945_, v_lhss_3946_, v_name_3947_, v_bi_boxed_3957_, v_type_3949_, v_kind_boxed_3958_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_);
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
return v_res_3959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5___boxed(lean_object** _args){
lean_object* v_i_3960_ = _args[0];
lean_object* v_rhss_3961_ = _args[1];
lean_object* v_eqs_3962_ = _args[2];
lean_object* v_hyps_3963_ = _args[3];
lean_object* v_subsingletonInstImplicitRhs_3964_ = _args[4];
lean_object* v_f_3965_ = _args[5];
lean_object* v_info_3966_ = _args[6];
lean_object* v_kinds_3967_ = _args[7];
lean_object* v_lhss_3968_ = _args[8];
lean_object* v_lhs_3969_ = _args[9];
lean_object* v___x_3970_ = _args[10];
lean_object* v_name_3971_ = _args[11];
lean_object* v_bi_3972_ = _args[12];
lean_object* v_type_3973_ = _args[13];
lean_object* v_kind_3974_ = _args[14];
lean_object* v___y_3975_ = _args[15];
lean_object* v___y_3976_ = _args[16];
lean_object* v___y_3977_ = _args[17];
lean_object* v___y_3978_ = _args[18];
lean_object* v___y_3979_ = _args[19];
_start:
{
uint8_t v_subsingletonInstImplicitRhs_boxed_3980_; uint8_t v_bi_boxed_3981_; uint8_t v_kind_boxed_3982_; lean_object* v_res_3983_; 
v_subsingletonInstImplicitRhs_boxed_3980_ = lean_unbox(v_subsingletonInstImplicitRhs_3964_);
v_bi_boxed_3981_ = lean_unbox(v_bi_3972_);
v_kind_boxed_3982_ = lean_unbox(v_kind_3974_);
v_res_3983_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs_loop_spec__0_spec__0___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go_spec__5(v_i_3960_, v_rhss_3961_, v_eqs_3962_, v_hyps_3963_, v_subsingletonInstImplicitRhs_boxed_3980_, v_f_3965_, v_info_3966_, v_kinds_3967_, v_lhss_3968_, v_lhs_3969_, v___x_3970_, v_name_3971_, v_bi_boxed_3981_, v_type_3973_, v_kind_boxed_3982_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_);
lean_dec(v___y_3978_);
lean_dec_ref(v___y_3977_);
lean_dec(v___y_3976_);
lean_dec_ref(v___y_3975_);
return v_res_3983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go___boxed(lean_object* v_subsingletonInstImplicitRhs_3984_, lean_object* v_f_3985_, lean_object* v_info_3986_, lean_object* v_kinds_3987_, lean_object* v_lhss_3988_, lean_object* v_i_3989_, lean_object* v_rhss_3990_, lean_object* v_eqs_3991_, lean_object* v_hyps_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_){
_start:
{
uint8_t v_subsingletonInstImplicitRhs_boxed_3998_; lean_object* v_res_3999_; 
v_subsingletonInstImplicitRhs_boxed_3998_ = lean_unbox(v_subsingletonInstImplicitRhs_3984_);
v_res_3999_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go(v_subsingletonInstImplicitRhs_boxed_3998_, v_f_3985_, v_info_3986_, v_kinds_3987_, v_lhss_3988_, v_i_3989_, v_rhss_3990_, v_eqs_3991_, v_hyps_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_);
lean_dec(v_a_3996_);
lean_dec_ref(v_a_3995_);
lean_dec(v_a_3994_);
lean_dec_ref(v_a_3993_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f___lam__0(lean_object* v___x_4000_, uint8_t v_subsingletonInstImplicitRhs_4001_, lean_object* v_f_4002_, lean_object* v_info_4003_, lean_object* v_kinds_4004_, lean_object* v_lhss_4005_, lean_object* v_x_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_){
_start:
{
lean_object* v___x_4012_; uint8_t v___x_4013_; 
v___x_4012_ = lean_array_get_size(v_lhss_4005_);
v___x_4013_ = lean_nat_dec_eq(v___x_4012_, v___x_4000_);
if (v___x_4013_ == 0)
{
lean_object* v___x_4014_; lean_object* v___x_4015_; 
lean_dec_ref(v_lhss_4005_);
lean_dec_ref(v_kinds_4004_);
lean_dec_ref(v_info_4003_);
lean_dec_ref(v_f_4002_);
v___x_4014_ = lean_box(0);
v___x_4015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4015_, 0, v___x_4014_);
return v___x_4015_;
}
else
{
lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; 
v___x_4016_ = lean_unsigned_to_nat(0u);
v___x_4017_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_withNewEqs___redArg___closed__0));
v___x_4018_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f_go(v_subsingletonInstImplicitRhs_4001_, v_f_4002_, v_info_4003_, v_kinds_4004_, v_lhss_4005_, v___x_4016_, v___x_4017_, v___x_4017_, v___x_4017_, v___y_4007_, v___y_4008_, v___y_4009_, v___y_4010_);
if (lean_obj_tag(v___x_4018_) == 0)
{
lean_object* v_a_4019_; lean_object* v___x_4021_; uint8_t v_isShared_4022_; uint8_t v_isSharedCheck_4027_; 
v_a_4019_ = lean_ctor_get(v___x_4018_, 0);
v_isSharedCheck_4027_ = !lean_is_exclusive(v___x_4018_);
if (v_isSharedCheck_4027_ == 0)
{
v___x_4021_ = v___x_4018_;
v_isShared_4022_ = v_isSharedCheck_4027_;
goto v_resetjp_4020_;
}
else
{
lean_inc(v_a_4019_);
lean_dec(v___x_4018_);
v___x_4021_ = lean_box(0);
v_isShared_4022_ = v_isSharedCheck_4027_;
goto v_resetjp_4020_;
}
v_resetjp_4020_:
{
lean_object* v___x_4023_; lean_object* v___x_4025_; 
v___x_4023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4023_, 0, v_a_4019_);
if (v_isShared_4022_ == 0)
{
lean_ctor_set(v___x_4021_, 0, v___x_4023_);
v___x_4025_ = v___x_4021_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v___x_4023_);
v___x_4025_ = v_reuseFailAlloc_4026_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
return v___x_4025_;
}
}
}
else
{
lean_object* v_a_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4035_; 
v_a_4028_ = lean_ctor_get(v___x_4018_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_4018_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4030_ = v___x_4018_;
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_a_4028_);
lean_dec(v___x_4018_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4033_; 
if (v_isShared_4031_ == 0)
{
v___x_4033_ = v___x_4030_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_a_4028_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f___lam__0___boxed(lean_object* v___x_4036_, lean_object* v_subsingletonInstImplicitRhs_4037_, lean_object* v_f_4038_, lean_object* v_info_4039_, lean_object* v_kinds_4040_, lean_object* v_lhss_4041_, lean_object* v_x_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_){
_start:
{
uint8_t v_subsingletonInstImplicitRhs_boxed_4048_; lean_object* v_res_4049_; 
v_subsingletonInstImplicitRhs_boxed_4048_ = lean_unbox(v_subsingletonInstImplicitRhs_4037_);
v_res_4049_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f___lam__0(v___x_4036_, v_subsingletonInstImplicitRhs_boxed_4048_, v_f_4038_, v_info_4039_, v_kinds_4040_, v_lhss_4041_, v_x_4042_, v___y_4043_, v___y_4044_, v___y_4045_, v___y_4046_);
lean_dec(v___y_4046_);
lean_dec_ref(v___y_4045_);
lean_dec(v___y_4044_);
lean_dec_ref(v___y_4043_);
lean_dec_ref(v_x_4042_);
lean_dec(v___x_4036_);
return v_res_4049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f(uint8_t v_subsingletonInstImplicitRhs_4050_, lean_object* v_f_4051_, lean_object* v_info_4052_, lean_object* v_kinds_4053_, lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_){
_start:
{
lean_object* v_a_4060_; lean_object* v___x_4067_; 
lean_inc(v_a_4057_);
lean_inc_ref(v_a_4056_);
lean_inc(v_a_4055_);
lean_inc_ref(v_a_4054_);
lean_inc_ref(v_f_4051_);
v___x_4067_ = lean_infer_type(v_f_4051_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_);
if (lean_obj_tag(v___x_4067_) == 0)
{
lean_object* v_a_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4082_; 
v_a_4068_ = lean_ctor_get(v___x_4067_, 0);
v_isSharedCheck_4082_ = !lean_is_exclusive(v___x_4067_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4070_ = v___x_4067_;
v_isShared_4071_ = v_isSharedCheck_4082_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_a_4068_);
lean_dec(v___x_4067_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4082_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___f_4074_; lean_object* v___x_4076_; 
v___x_4072_ = lean_array_get_size(v_kinds_4053_);
v___x_4073_ = lean_box(v_subsingletonInstImplicitRhs_4050_);
v___f_4074_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4074_, 0, v___x_4072_);
lean_closure_set(v___f_4074_, 1, v___x_4073_);
lean_closure_set(v___f_4074_, 2, v_f_4051_);
lean_closure_set(v___f_4074_, 3, v_info_4052_);
lean_closure_set(v___f_4074_, 4, v_kinds_4053_);
if (v_isShared_4071_ == 0)
{
lean_ctor_set_tag(v___x_4070_, 1);
lean_ctor_set(v___x_4070_, 0, v___x_4072_);
v___x_4076_ = v___x_4070_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v___x_4072_);
v___x_4076_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
uint8_t v___x_4077_; uint8_t v___x_4078_; lean_object* v___x_4079_; 
v___x_4077_ = 1;
v___x_4078_ = 0;
v___x_4079_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkHCongrWithArity_mkProof_spec__0___redArg(v_a_4068_, v___x_4076_, v___f_4074_, v___x_4077_, v___x_4078_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_);
if (lean_obj_tag(v___x_4079_) == 0)
{
return v___x_4079_;
}
else
{
lean_object* v_a_4080_; 
v_a_4080_ = lean_ctor_get(v___x_4079_, 0);
lean_inc(v_a_4080_);
lean_dec_ref_known(v___x_4079_, 1);
v_a_4060_ = v_a_4080_;
goto v___jp_4059_;
}
}
}
}
else
{
lean_object* v_a_4083_; 
lean_dec_ref(v_kinds_4053_);
lean_dec_ref(v_info_4052_);
lean_dec_ref(v_f_4051_);
v_a_4083_ = lean_ctor_get(v___x_4067_, 0);
lean_inc(v_a_4083_);
lean_dec_ref_known(v___x_4067_, 1);
v_a_4060_ = v_a_4083_;
goto v___jp_4059_;
}
v___jp_4059_:
{
uint8_t v___x_4061_; 
v___x_4061_ = l_Lean_Exception_isInterrupt(v_a_4060_);
if (v___x_4061_ == 0)
{
uint8_t v___x_4062_; 
lean_inc_ref(v_a_4060_);
v___x_4062_ = l_Lean_Exception_isRuntime(v_a_4060_);
if (v___x_4062_ == 0)
{
lean_object* v___x_4063_; lean_object* v___x_4064_; 
lean_dec_ref(v_a_4060_);
v___x_4063_ = lean_box(0);
v___x_4064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4064_, 0, v___x_4063_);
return v___x_4064_;
}
else
{
lean_object* v___x_4065_; 
v___x_4065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4065_, 0, v_a_4060_);
return v___x_4065_;
}
}
else
{
lean_object* v___x_4066_; 
v___x_4066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4066_, 0, v_a_4060_);
return v___x_4066_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f___boxed(lean_object* v_subsingletonInstImplicitRhs_4084_, lean_object* v_f_4085_, lean_object* v_info_4086_, lean_object* v_kinds_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_){
_start:
{
uint8_t v_subsingletonInstImplicitRhs_boxed_4093_; lean_object* v_res_4094_; 
v_subsingletonInstImplicitRhs_boxed_4093_ = lean_unbox(v_subsingletonInstImplicitRhs_4084_);
v_res_4094_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f(v_subsingletonInstImplicitRhs_boxed_4093_, v_f_4085_, v_info_4086_, v_kinds_4087_, v_a_4088_, v_a_4089_, v_a_4090_, v_a_4091_);
lean_dec(v_a_4091_);
lean_dec_ref(v_a_4090_);
lean_dec(v_a_4089_);
lean_dec_ref(v_a_4088_);
return v_res_4094_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkCongrSimpCore_x3f_spec__0(size_t v_sz_4095_, size_t v_i_4096_, lean_object* v_bs_4097_){
_start:
{
uint8_t v___x_4098_; 
v___x_4098_ = lean_usize_dec_lt(v_i_4096_, v_sz_4095_);
if (v___x_4098_ == 0)
{
return v_bs_4097_;
}
else
{
lean_object* v_v_4099_; lean_object* v___x_4100_; lean_object* v_bs_x27_4101_; uint8_t v___y_4103_; uint8_t v___x_4109_; 
v_v_4099_ = lean_array_uget(v_bs_4097_, v_i_4096_);
v___x_4100_ = lean_unsigned_to_nat(0u);
v_bs_x27_4101_ = lean_array_uset(v_bs_4097_, v_i_4096_, v___x_4100_);
v___x_4109_ = lean_unbox(v_v_4099_);
switch(v___x_4109_)
{
case 3:
{
uint8_t v___x_4110_; 
lean_dec(v_v_4099_);
v___x_4110_ = 0;
v___y_4103_ = v___x_4110_;
goto v___jp_4102_;
}
case 5:
{
uint8_t v___x_4111_; 
lean_dec(v_v_4099_);
v___x_4111_ = 0;
v___y_4103_ = v___x_4111_;
goto v___jp_4102_;
}
default: 
{
uint8_t v___x_4112_; 
v___x_4112_ = lean_unbox(v_v_4099_);
lean_dec(v_v_4099_);
v___y_4103_ = v___x_4112_;
goto v___jp_4102_;
}
}
v___jp_4102_:
{
size_t v___x_4104_; size_t v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; 
v___x_4104_ = ((size_t)1ULL);
v___x_4105_ = lean_usize_add(v_i_4096_, v___x_4104_);
v___x_4106_ = lean_box(v___y_4103_);
v___x_4107_ = lean_array_uset(v_bs_x27_4101_, v_i_4096_, v___x_4106_);
v_i_4096_ = v___x_4105_;
v_bs_4097_ = v___x_4107_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkCongrSimpCore_x3f_spec__0___boxed(lean_object* v_sz_4113_, lean_object* v_i_4114_, lean_object* v_bs_4115_){
_start:
{
size_t v_sz_boxed_4116_; size_t v_i_boxed_4117_; lean_object* v_res_4118_; 
v_sz_boxed_4116_ = lean_unbox_usize(v_sz_4113_);
lean_dec(v_sz_4113_);
v_i_boxed_4117_ = lean_unbox_usize(v_i_4114_);
lean_dec(v_i_4114_);
v_res_4118_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkCongrSimpCore_x3f_spec__0(v_sz_boxed_4116_, v_i_boxed_4117_, v_bs_4115_);
return v_res_4118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpCore_x3f(lean_object* v_f_4119_, lean_object* v_info_4120_, lean_object* v_kinds_4121_, uint8_t v_subsingletonInstImplicitRhs_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_, lean_object* v_a_4125_, lean_object* v_a_4126_){
_start:
{
lean_object* v___x_4128_; 
lean_inc_ref(v_kinds_4121_);
lean_inc_ref(v_info_4120_);
lean_inc_ref(v_f_4119_);
v___x_4128_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f(v_subsingletonInstImplicitRhs_4122_, v_f_4119_, v_info_4120_, v_kinds_4121_, v_a_4123_, v_a_4124_, v_a_4125_, v_a_4126_);
if (lean_obj_tag(v___x_4128_) == 0)
{
lean_object* v_a_4129_; 
v_a_4129_ = lean_ctor_get(v___x_4128_, 0);
if (lean_obj_tag(v_a_4129_) == 1)
{
lean_dec_ref(v_kinds_4121_);
lean_dec_ref(v_info_4120_);
lean_dec_ref(v_f_4119_);
return v___x_4128_;
}
else
{
lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4142_; 
v_isSharedCheck_4142_ = !lean_is_exclusive(v___x_4128_);
if (v_isSharedCheck_4142_ == 0)
{
lean_object* v_unused_4143_; 
v_unused_4143_ = lean_ctor_get(v___x_4128_, 0);
lean_dec(v_unused_4143_);
v___x_4131_ = v___x_4128_;
v_isShared_4132_ = v_isSharedCheck_4142_;
goto v_resetjp_4130_;
}
else
{
lean_dec(v___x_4128_);
v___x_4131_ = lean_box(0);
v_isShared_4132_ = v_isSharedCheck_4142_;
goto v_resetjp_4130_;
}
v_resetjp_4130_:
{
uint8_t v___x_4133_; 
v___x_4133_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_hasCastLike(v_kinds_4121_);
if (v___x_4133_ == 0)
{
lean_object* v___x_4134_; lean_object* v___x_4136_; 
lean_dec_ref(v_kinds_4121_);
lean_dec_ref(v_info_4120_);
lean_dec_ref(v_f_4119_);
v___x_4134_ = lean_box(0);
if (v_isShared_4132_ == 0)
{
lean_ctor_set(v___x_4131_, 0, v___x_4134_);
v___x_4136_ = v___x_4131_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v___x_4134_);
v___x_4136_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
return v___x_4136_;
}
}
else
{
size_t v_sz_4138_; size_t v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; 
lean_del_object(v___x_4131_);
v_sz_4138_ = lean_array_size(v_kinds_4121_);
v___x_4139_ = ((size_t)0ULL);
v___x_4140_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkCongrSimpCore_x3f_spec__0(v_sz_4138_, v___x_4139_, v_kinds_4121_);
v___x_4141_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mk_x3f(v_subsingletonInstImplicitRhs_4122_, v_f_4119_, v_info_4120_, v___x_4140_, v_a_4123_, v_a_4124_, v_a_4125_, v_a_4126_);
return v___x_4141_;
}
}
}
}
else
{
lean_dec_ref(v_kinds_4121_);
lean_dec_ref(v_info_4120_);
lean_dec_ref(v_f_4119_);
return v___x_4128_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpCore_x3f___boxed(lean_object* v_f_4144_, lean_object* v_info_4145_, lean_object* v_kinds_4146_, lean_object* v_subsingletonInstImplicitRhs_4147_, lean_object* v_a_4148_, lean_object* v_a_4149_, lean_object* v_a_4150_, lean_object* v_a_4151_, lean_object* v_a_4152_){
_start:
{
uint8_t v_subsingletonInstImplicitRhs_boxed_4153_; lean_object* v_res_4154_; 
v_subsingletonInstImplicitRhs_boxed_4153_ = lean_unbox(v_subsingletonInstImplicitRhs_4147_);
v_res_4154_ = l_Lean_Meta_mkCongrSimpCore_x3f(v_f_4144_, v_info_4145_, v_kinds_4146_, v_subsingletonInstImplicitRhs_boxed_4153_, v_a_4148_, v_a_4149_, v_a_4150_, v_a_4151_);
lean_dec(v_a_4151_);
lean_dec_ref(v_a_4150_);
lean_dec(v_a_4149_);
lean_dec_ref(v_a_4148_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimp_x3f(lean_object* v_f_4155_, uint8_t v_subsingletonInstImplicitRhs_4156_, lean_object* v_maxArgs_x3f_4157_, lean_object* v_a_4158_, lean_object* v_a_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_){
_start:
{
lean_object* v___x_4163_; lean_object* v_a_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v___x_4163_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCast_spec__4___redArg(v_f_4155_, v_a_4159_);
v_a_4164_ = lean_ctor_get(v___x_4163_, 0);
lean_inc(v_a_4164_);
lean_dec_ref(v___x_4163_);
v___x_4165_ = l_Lean_Expr_cleanupAnnotations(v_a_4164_);
lean_dec(v_a_4164_);
lean_inc_ref(v___x_4165_);
v___x_4166_ = l_Lean_Meta_getFunInfo(v___x_4165_, v_maxArgs_x3f_4157_, v_a_4158_, v_a_4159_, v_a_4160_, v_a_4161_);
if (lean_obj_tag(v___x_4166_) == 0)
{
lean_object* v_a_4167_; lean_object* v___x_4168_; 
v_a_4167_ = lean_ctor_get(v___x_4166_, 0);
lean_inc(v_a_4167_);
lean_dec_ref_known(v___x_4166_, 1);
lean_inc_ref(v___x_4165_);
v___x_4168_ = l_Lean_Meta_getCongrSimpKinds(v___x_4165_, v_a_4167_, v_a_4158_, v_a_4159_, v_a_4160_, v_a_4161_);
if (lean_obj_tag(v___x_4168_) == 0)
{
lean_object* v_a_4169_; lean_object* v___x_4170_; 
v_a_4169_ = lean_ctor_get(v___x_4168_, 0);
lean_inc(v_a_4169_);
lean_dec_ref_known(v___x_4168_, 1);
v___x_4170_ = l_Lean_Meta_mkCongrSimpCore_x3f(v___x_4165_, v_a_4167_, v_a_4169_, v_subsingletonInstImplicitRhs_4156_, v_a_4158_, v_a_4159_, v_a_4160_, v_a_4161_);
return v___x_4170_;
}
else
{
lean_object* v_a_4171_; lean_object* v___x_4173_; uint8_t v_isShared_4174_; uint8_t v_isSharedCheck_4178_; 
lean_dec(v_a_4167_);
lean_dec_ref(v___x_4165_);
v_a_4171_ = lean_ctor_get(v___x_4168_, 0);
v_isSharedCheck_4178_ = !lean_is_exclusive(v___x_4168_);
if (v_isSharedCheck_4178_ == 0)
{
v___x_4173_ = v___x_4168_;
v_isShared_4174_ = v_isSharedCheck_4178_;
goto v_resetjp_4172_;
}
else
{
lean_inc(v_a_4171_);
lean_dec(v___x_4168_);
v___x_4173_ = lean_box(0);
v_isShared_4174_ = v_isSharedCheck_4178_;
goto v_resetjp_4172_;
}
v_resetjp_4172_:
{
lean_object* v___x_4176_; 
if (v_isShared_4174_ == 0)
{
v___x_4176_ = v___x_4173_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v_a_4171_);
v___x_4176_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
return v___x_4176_;
}
}
}
}
else
{
lean_object* v_a_4179_; lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4186_; 
lean_dec_ref(v___x_4165_);
v_a_4179_ = lean_ctor_get(v___x_4166_, 0);
v_isSharedCheck_4186_ = !lean_is_exclusive(v___x_4166_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4181_ = v___x_4166_;
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
else
{
lean_inc(v_a_4179_);
lean_dec(v___x_4166_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___x_4184_; 
if (v_isShared_4182_ == 0)
{
v___x_4184_ = v___x_4181_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4185_; 
v_reuseFailAlloc_4185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4185_, 0, v_a_4179_);
v___x_4184_ = v_reuseFailAlloc_4185_;
goto v_reusejp_4183_;
}
v_reusejp_4183_:
{
return v___x_4184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimp_x3f___boxed(lean_object* v_f_4187_, lean_object* v_subsingletonInstImplicitRhs_4188_, lean_object* v_maxArgs_x3f_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_){
_start:
{
uint8_t v_subsingletonInstImplicitRhs_boxed_4195_; lean_object* v_res_4196_; 
v_subsingletonInstImplicitRhs_boxed_4195_ = lean_unbox(v_subsingletonInstImplicitRhs_4188_);
v_res_4196_ = l_Lean_Meta_mkCongrSimp_x3f(v_f_4187_, v_subsingletonInstImplicitRhs_boxed_4195_, v_maxArgs_x3f_4189_, v_a_4190_, v_a_4191_, v_a_4192_, v_a_4193_);
lean_dec(v_a_4193_);
lean_dec_ref(v_a_4192_);
lean_dec(v_a_4191_);
lean_dec_ref(v_a_4190_);
return v_res_4196_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isHCongrReservedNameSuffix(lean_object* v_s_4201_){
_start:
{
lean_object* v___x_4202_; lean_object* v___x_4203_; uint8_t v___x_4204_; 
v___x_4202_ = lean_string_utf8_byte_size(v_s_4201_);
v___x_4203_ = lean_unsigned_to_nat(7u);
v___x_4204_ = lean_nat_dec_le(v___x_4203_, v___x_4202_);
if (v___x_4204_ == 0)
{
lean_dec_ref(v_s_4201_);
return v___x_4204_;
}
else
{
lean_object* v___x_4205_; lean_object* v___x_4206_; uint8_t v___x_4207_; 
v___x_4205_ = ((lean_object*)(l_Lean_Meta_hcongrThmSuffixBasePrefix___closed__0));
v___x_4206_ = lean_unsigned_to_nat(0u);
v___x_4207_ = lean_string_memcmp(v_s_4201_, v___x_4205_, v___x_4206_, v___x_4206_, v___x_4203_);
if (v___x_4207_ == 0)
{
lean_dec_ref(v_s_4201_);
return v___x_4207_;
}
else
{
lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; uint8_t v___x_4211_; 
lean_inc_ref(v_s_4201_);
v___x_4208_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4208_, 0, v_s_4201_);
lean_ctor_set(v___x_4208_, 1, v___x_4206_);
lean_ctor_set(v___x_4208_, 2, v___x_4202_);
v___x_4209_ = l_String_Slice_Pos_nextn(v___x_4208_, v___x_4206_, v___x_4203_);
lean_dec_ref_known(v___x_4208_, 3);
v___x_4210_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4210_, 0, v_s_4201_);
lean_ctor_set(v___x_4210_, 1, v___x_4209_);
lean_ctor_set(v___x_4210_, 2, v___x_4202_);
v___x_4211_ = l_String_Slice_isNat(v___x_4210_);
lean_dec_ref_known(v___x_4210_, 3);
return v___x_4211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isHCongrReservedNameSuffix___boxed(lean_object* v_s_4212_){
_start:
{
uint8_t v_res_4213_; lean_object* v_r_4214_; 
v_res_4213_ = l_Lean_Meta_isHCongrReservedNameSuffix(v_s_4212_);
v_r_4214_ = lean_box(v_res_4213_);
return v_r_4214_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; 
v___x_4264_ = lean_unsigned_to_nat(3482611248u);
v___x_4265_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_));
v___x_4266_ = l_Lean_Name_num___override(v___x_4265_, v___x_4264_);
return v___x_4266_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; 
v___x_4268_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_));
v___x_4269_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_);
v___x_4270_ = l_Lean_Name_str___override(v___x_4269_, v___x_4268_);
return v___x_4270_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
v___x_4272_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_));
v___x_4273_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_);
v___x_4274_ = l_Lean_Name_str___override(v___x_4273_, v___x_4272_);
return v___x_4274_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; 
v___x_4275_ = lean_unsigned_to_nat(2u);
v___x_4276_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_);
v___x_4277_ = l_Lean_Name_num___override(v___x_4276_, v___x_4275_);
return v___x_4277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4279_; uint8_t v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; 
v___x_4279_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_));
v___x_4280_ = 0;
v___x_4281_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_);
v___x_4282_ = l_Lean_registerTraceClass(v___x_4279_, v___x_4280_, v___x_4281_);
return v___x_4282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2____boxed(lean_object* v_a_4283_){
_start:
{
lean_object* v_res_4284_; 
v_res_4284_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_();
return v_res_4284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__2(lean_object* v_env_4285_, lean_object* v_as_4286_, size_t v_i_4287_, size_t v_stop_4288_, lean_object* v_b_4289_){
_start:
{
lean_object* v___y_4291_; uint8_t v___x_4295_; 
v___x_4295_ = lean_usize_dec_eq(v_i_4287_, v_stop_4288_);
if (v___x_4295_ == 0)
{
lean_object* v___x_4296_; lean_object* v_fst_4297_; uint8_t v___x_4298_; 
v___x_4296_ = lean_array_uget_borrowed(v_as_4286_, v_i_4287_);
v_fst_4297_ = lean_ctor_get(v___x_4296_, 0);
lean_inc(v_fst_4297_);
lean_inc_ref(v_env_4285_);
v___x_4298_ = l_Lean_Environment_contains(v_env_4285_, v_fst_4297_, v___x_4295_);
if (v___x_4298_ == 0)
{
v___y_4291_ = v_b_4289_;
goto v___jp_4290_;
}
else
{
lean_object* v___x_4299_; 
lean_inc(v___x_4296_);
v___x_4299_ = lean_array_push(v_b_4289_, v___x_4296_);
v___y_4291_ = v___x_4299_;
goto v___jp_4290_;
}
}
else
{
lean_dec_ref(v_env_4285_);
return v_b_4289_;
}
v___jp_4290_:
{
size_t v___x_4292_; size_t v___x_4293_; 
v___x_4292_ = ((size_t)1ULL);
v___x_4293_ = lean_usize_add(v_i_4287_, v___x_4292_);
v_i_4287_ = v___x_4293_;
v_b_4289_ = v___y_4291_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__2___boxed(lean_object* v_env_4300_, lean_object* v_as_4301_, lean_object* v_i_4302_, lean_object* v_stop_4303_, lean_object* v_b_4304_){
_start:
{
size_t v_i_boxed_4305_; size_t v_stop_boxed_4306_; lean_object* v_res_4307_; 
v_i_boxed_4305_ = lean_unbox_usize(v_i_4302_);
lean_dec(v_i_4302_);
v_stop_boxed_4306_ = lean_unbox_usize(v_stop_4303_);
lean_dec(v_stop_4303_);
v_res_4307_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__2(v_env_4300_, v_as_4301_, v_i_boxed_4305_, v_stop_boxed_4306_, v_b_4304_);
lean_dec_ref(v_as_4301_);
return v_res_4307_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__1(lean_object* v_env_4308_, lean_object* v_as_4309_, size_t v_i_4310_, size_t v_stop_4311_, lean_object* v_b_4312_){
_start:
{
lean_object* v___y_4314_; uint8_t v___x_4318_; 
v___x_4318_ = lean_usize_dec_eq(v_i_4310_, v_stop_4311_);
if (v___x_4318_ == 0)
{
lean_object* v___x_4319_; lean_object* v_fst_4320_; uint8_t v___x_4321_; lean_object* v___x_4322_; uint8_t v___x_4323_; 
v___x_4319_ = lean_array_uget_borrowed(v_as_4309_, v_i_4310_);
v_fst_4320_ = lean_ctor_get(v___x_4319_, 0);
v___x_4321_ = 1;
lean_inc_ref(v_env_4308_);
v___x_4322_ = l_Lean_Environment_setExporting(v_env_4308_, v___x_4321_);
lean_inc(v_fst_4320_);
v___x_4323_ = l_Lean_Environment_contains(v___x_4322_, v_fst_4320_, v___x_4318_);
if (v___x_4323_ == 0)
{
v___y_4314_ = v_b_4312_;
goto v___jp_4313_;
}
else
{
lean_object* v___x_4324_; 
lean_inc(v___x_4319_);
v___x_4324_ = lean_array_push(v_b_4312_, v___x_4319_);
v___y_4314_ = v___x_4324_;
goto v___jp_4313_;
}
}
else
{
lean_dec_ref(v_env_4308_);
return v_b_4312_;
}
v___jp_4313_:
{
size_t v___x_4315_; size_t v___x_4316_; 
v___x_4315_ = ((size_t)1ULL);
v___x_4316_ = lean_usize_add(v_i_4310_, v___x_4315_);
v_i_4310_ = v___x_4316_;
v_b_4312_ = v___y_4314_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__1___boxed(lean_object* v_env_4325_, lean_object* v_as_4326_, lean_object* v_i_4327_, lean_object* v_stop_4328_, lean_object* v_b_4329_){
_start:
{
size_t v_i_boxed_4330_; size_t v_stop_boxed_4331_; lean_object* v_res_4332_; 
v_i_boxed_4330_ = lean_unbox_usize(v_i_4327_);
lean_dec(v_i_4327_);
v_stop_boxed_4331_ = lean_unbox_usize(v_stop_4328_);
lean_dec(v_stop_4328_);
v_res_4332_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__1(v_env_4325_, v_as_4326_, v_i_boxed_4330_, v_stop_boxed_4331_, v_b_4329_);
lean_dec_ref(v_as_4326_);
return v_res_4332_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_4333_, lean_object* v_x_4334_){
_start:
{
if (lean_obj_tag(v_x_4334_) == 0)
{
lean_object* v_k_4335_; lean_object* v_v_4336_; lean_object* v_l_4337_; lean_object* v_r_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; 
v_k_4335_ = lean_ctor_get(v_x_4334_, 1);
v_v_4336_ = lean_ctor_get(v_x_4334_, 2);
v_l_4337_ = lean_ctor_get(v_x_4334_, 3);
v_r_4338_ = lean_ctor_get(v_x_4334_, 4);
v___x_4339_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0_spec__0(v_init_4333_, v_l_4337_);
lean_inc(v_v_4336_);
lean_inc(v_k_4335_);
v___x_4340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4340_, 0, v_k_4335_);
lean_ctor_set(v___x_4340_, 1, v_v_4336_);
v___x_4341_ = lean_array_push(v___x_4339_, v___x_4340_);
v_init_4333_ = v___x_4341_;
v_x_4334_ = v_r_4338_;
goto _start;
}
else
{
return v_init_4333_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_4343_, lean_object* v_x_4344_){
_start:
{
lean_object* v_res_4345_; 
v_res_4345_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0_spec__0(v_init_4343_, v_x_4344_);
lean_dec(v_x_4344_);
return v_res_4345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_(lean_object* v_env_4350_, lean_object* v_s_4351_){
_start:
{
lean_object* v___x_4352_; lean_object* v___y_4354_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; uint8_t v___x_4367_; 
v___x_4352_ = lean_unsigned_to_nat(0u);
v___x_4363_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_));
v___x_4364_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0_spec__0(v___x_4363_, v_s_4351_);
v___x_4365_ = lean_array_get_size(v___x_4364_);
v___x_4366_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_));
v___x_4367_ = lean_nat_dec_lt(v___x_4352_, v___x_4365_);
if (v___x_4367_ == 0)
{
lean_dec_ref(v___x_4364_);
v___y_4354_ = v___x_4366_;
goto v___jp_4353_;
}
else
{
size_t v___x_4368_; size_t v___x_4369_; lean_object* v___x_4370_; 
v___x_4368_ = ((size_t)0ULL);
v___x_4369_ = lean_usize_of_nat(v___x_4365_);
lean_inc_ref(v_env_4350_);
v___x_4370_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__2(v_env_4350_, v___x_4364_, v___x_4368_, v___x_4369_, v___x_4366_);
lean_dec_ref(v___x_4364_);
v___y_4354_ = v___x_4370_;
goto v___jp_4353_;
}
v___jp_4353_:
{
lean_object* v___x_4355_; lean_object* v___x_4356_; uint8_t v___x_4357_; 
v___x_4355_ = lean_array_get_size(v___y_4354_);
v___x_4356_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_));
v___x_4357_ = lean_nat_dec_lt(v___x_4352_, v___x_4355_);
if (v___x_4357_ == 0)
{
lean_object* v___x_4358_; 
lean_dec_ref(v_env_4350_);
v___x_4358_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4358_, 0, v___x_4356_);
lean_ctor_set(v___x_4358_, 1, v___x_4356_);
lean_ctor_set(v___x_4358_, 2, v___y_4354_);
return v___x_4358_;
}
else
{
size_t v___x_4359_; size_t v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; 
v___x_4359_ = ((size_t)0ULL);
v___x_4360_ = lean_usize_of_nat(v___x_4355_);
v___x_4361_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__1(v_env_4350_, v___y_4354_, v___x_4359_, v___x_4360_, v___x_4356_);
lean_inc_ref(v___x_4361_);
v___x_4362_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4362_, 0, v___x_4361_);
lean_ctor_set(v___x_4362_, 1, v___x_4361_);
lean_ctor_set(v___x_4362_, 2, v___y_4354_);
return v___x_4362_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2____boxed(lean_object* v_env_4371_, lean_object* v_s_4372_){
_start:
{
lean_object* v_res_4373_; 
v_res_4373_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_(v_env_4371_, v_s_4372_);
lean_dec(v_s_4372_);
return v_res_4373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; uint8_t v___x_4386_; lean_object* v___x_4387_; 
v___f_4383_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_));
v___x_4384_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_));
v___x_4385_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_));
v___x_4386_ = 0;
v___x_4387_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_4384_, v___x_4385_, v___x_4386_, v___f_4383_);
return v___x_4387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2____boxed(lean_object* v_a_4388_){
_start:
{
lean_object* v_res_4389_; 
v_res_4389_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_();
return v_res_4389_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0(lean_object* v_init_4390_, lean_object* v_t_4391_){
_start:
{
lean_object* v___x_4392_; 
v___x_4392_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0_spec__0(v_init_4390_, v_t_4391_);
return v___x_4392_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_4393_, lean_object* v_t_4394_){
_start:
{
lean_object* v_res_4395_; 
v_res_4395_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2__spec__0(v_init_4393_, v_t_4394_);
lean_dec(v_t_4394_);
return v_res_4395_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2_(lean_object* v_env_4396_, lean_object* v_n_4397_){
_start:
{
if (lean_obj_tag(v_n_4397_) == 1)
{
lean_object* v_pre_4398_; lean_object* v_str_4399_; uint8_t v___x_4403_; 
v_pre_4398_ = lean_ctor_get(v_n_4397_, 0);
lean_inc(v_pre_4398_);
v_str_4399_ = lean_ctor_get(v_n_4397_, 1);
lean_inc_ref_n(v_str_4399_, 2);
lean_dec_ref_known(v_n_4397_, 2);
v___x_4403_ = l_Lean_Meta_isHCongrReservedNameSuffix(v_str_4399_);
if (v___x_4403_ == 0)
{
lean_object* v___x_4404_; uint8_t v___x_4405_; 
v___x_4404_ = ((lean_object*)(l_Lean_Meta_congrSimpSuffix___closed__0));
v___x_4405_ = lean_string_dec_eq(v_str_4399_, v___x_4404_);
lean_dec_ref(v_str_4399_);
if (v___x_4405_ == 0)
{
lean_dec(v_pre_4398_);
lean_dec_ref(v_env_4396_);
return v___x_4405_;
}
else
{
goto v___jp_4400_;
}
}
else
{
lean_dec_ref(v_str_4399_);
goto v___jp_4400_;
}
v___jp_4400_:
{
uint8_t v___x_4401_; uint8_t v___x_4402_; 
v___x_4401_ = 1;
v___x_4402_ = l_Lean_Environment_contains(v_env_4396_, v_pre_4398_, v___x_4401_);
return v___x_4402_;
}
}
else
{
uint8_t v___x_4406_; 
lean_dec(v_n_4397_);
lean_dec_ref(v_env_4396_);
v___x_4406_ = 0;
return v___x_4406_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2____boxed(lean_object* v_env_4407_, lean_object* v_n_4408_){
_start:
{
uint8_t v_res_4409_; lean_object* v_r_4410_; 
v_res_4409_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2_(v_env_4407_, v_n_4408_);
v_r_4410_ = lean_box(v_res_4409_);
return v_r_4410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_4413_; lean_object* v___x_4414_; 
v___f_4413_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2_));
v___x_4414_ = l_Lean_registerReservedNamePredicate(v___f_4413_);
return v___x_4414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2____boxed(lean_object* v_a_4415_){
_start:
{
lean_object* v_res_4416_; 
v_res_4416_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2_();
return v_res_4416_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2___redArg(lean_object* v_thm_4417_, lean_object* v___y_4418_){
_start:
{
lean_object* v___x_4420_; lean_object* v_env_4421_; lean_object* v_toConstantVal_4422_; lean_object* v_value_4423_; lean_object* v_all_4424_; lean_object* v_type_4431_; uint8_t v___x_4432_; 
v___x_4420_ = lean_st_ref_get(v___y_4418_);
v_env_4421_ = lean_ctor_get(v___x_4420_, 0);
lean_inc_ref_n(v_env_4421_, 2);
lean_dec(v___x_4420_);
v_toConstantVal_4422_ = lean_ctor_get(v_thm_4417_, 0);
v_value_4423_ = lean_ctor_get(v_thm_4417_, 1);
v_all_4424_ = lean_ctor_get(v_thm_4417_, 2);
v_type_4431_ = lean_ctor_get(v_toConstantVal_4422_, 2);
v___x_4432_ = l_Lean_Environment_hasUnsafe(v_env_4421_, v_type_4431_);
if (v___x_4432_ == 0)
{
uint8_t v___x_4433_; 
v___x_4433_ = l_Lean_Environment_hasUnsafe(v_env_4421_, v_value_4423_);
if (v___x_4433_ == 0)
{
lean_object* v___x_4434_; lean_object* v___x_4435_; 
v___x_4434_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4434_, 0, v_thm_4417_);
v___x_4435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4435_, 0, v___x_4434_);
return v___x_4435_;
}
else
{
lean_inc(v_all_4424_);
lean_inc_ref(v_value_4423_);
lean_inc_ref(v_toConstantVal_4422_);
lean_dec_ref(v_thm_4417_);
goto v___jp_4425_;
}
}
else
{
lean_inc(v_all_4424_);
lean_inc_ref(v_value_4423_);
lean_inc_ref(v_toConstantVal_4422_);
lean_dec_ref(v_env_4421_);
lean_dec_ref(v_thm_4417_);
goto v___jp_4425_;
}
v___jp_4425_:
{
lean_object* v___x_4426_; uint8_t v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; 
v___x_4426_ = lean_box(0);
v___x_4427_ = 0;
v___x_4428_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_4428_, 0, v_toConstantVal_4422_);
lean_ctor_set(v___x_4428_, 1, v_value_4423_);
lean_ctor_set(v___x_4428_, 2, v___x_4426_);
lean_ctor_set(v___x_4428_, 3, v_all_4424_);
lean_ctor_set_uint8(v___x_4428_, sizeof(void*)*4, v___x_4427_);
v___x_4429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4429_, 0, v___x_4428_);
v___x_4430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4430_, 0, v___x_4429_);
return v___x_4430_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_thm_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_){
_start:
{
lean_object* v_res_4439_; 
v_res_4439_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2___redArg(v_thm_4436_, v___y_4437_);
lean_dec(v___y_4437_);
return v_res_4439_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2(lean_object* v_thm_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_){
_start:
{
lean_object* v___x_4446_; 
v___x_4446_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2___redArg(v_thm_4440_, v___y_4444_);
return v___x_4446_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2___boxed(lean_object* v_thm_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_){
_start:
{
lean_object* v_res_4453_; 
v_res_4453_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2(v_thm_4447_, v___y_4448_, v___y_4449_, v___y_4450_, v___y_4451_);
lean_dec(v___y_4451_);
lean_dec_ref(v___y_4450_);
lean_dec(v___y_4449_);
lean_dec_ref(v___y_4448_);
return v_res_4453_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__0(void){
_start:
{
lean_object* v___x_4454_; double v___x_4455_; 
v___x_4454_ = lean_unsigned_to_nat(0u);
v___x_4455_ = lean_float_of_nat(v___x_4454_);
return v___x_4455_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3(lean_object* v_cls_4459_, lean_object* v_msg_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_){
_start:
{
lean_object* v_ref_4466_; lean_object* v___x_4467_; lean_object* v_a_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4513_; 
v_ref_4466_ = lean_ctor_get(v___y_4463_, 2);
v___x_4467_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkHCongrWithArity_spec__0_spec__0(v_msg_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_);
v_a_4468_ = lean_ctor_get(v___x_4467_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v___x_4467_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4470_ = v___x_4467_;
v_isShared_4471_ = v_isSharedCheck_4513_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_a_4468_);
lean_dec(v___x_4467_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4513_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v___x_4472_; lean_object* v_traceState_4473_; lean_object* v_env_4474_; lean_object* v_nextMacroScope_4475_; lean_object* v_ngen_4476_; lean_object* v_auxDeclNGen_4477_; lean_object* v_cache_4478_; lean_object* v_recordedDeps_4479_; lean_object* v_messages_4480_; lean_object* v_infoState_4481_; lean_object* v_snapshotTasks_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4512_; 
v___x_4472_ = lean_st_ref_take(v___y_4464_);
v_traceState_4473_ = lean_ctor_get(v___x_4472_, 4);
v_env_4474_ = lean_ctor_get(v___x_4472_, 0);
v_nextMacroScope_4475_ = lean_ctor_get(v___x_4472_, 1);
v_ngen_4476_ = lean_ctor_get(v___x_4472_, 2);
v_auxDeclNGen_4477_ = lean_ctor_get(v___x_4472_, 3);
v_cache_4478_ = lean_ctor_get(v___x_4472_, 5);
v_recordedDeps_4479_ = lean_ctor_get(v___x_4472_, 6);
v_messages_4480_ = lean_ctor_get(v___x_4472_, 7);
v_infoState_4481_ = lean_ctor_get(v___x_4472_, 8);
v_snapshotTasks_4482_ = lean_ctor_get(v___x_4472_, 9);
v_isSharedCheck_4512_ = !lean_is_exclusive(v___x_4472_);
if (v_isSharedCheck_4512_ == 0)
{
v___x_4484_ = v___x_4472_;
v_isShared_4485_ = v_isSharedCheck_4512_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_snapshotTasks_4482_);
lean_inc(v_infoState_4481_);
lean_inc(v_messages_4480_);
lean_inc(v_recordedDeps_4479_);
lean_inc(v_cache_4478_);
lean_inc(v_traceState_4473_);
lean_inc(v_auxDeclNGen_4477_);
lean_inc(v_ngen_4476_);
lean_inc(v_nextMacroScope_4475_);
lean_inc(v_env_4474_);
lean_dec(v___x_4472_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4512_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
uint64_t v_tid_4486_; lean_object* v_traces_4487_; lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4511_; 
v_tid_4486_ = lean_ctor_get_uint64(v_traceState_4473_, sizeof(void*)*1);
v_traces_4487_ = lean_ctor_get(v_traceState_4473_, 0);
v_isSharedCheck_4511_ = !lean_is_exclusive(v_traceState_4473_);
if (v_isSharedCheck_4511_ == 0)
{
v___x_4489_ = v_traceState_4473_;
v_isShared_4490_ = v_isSharedCheck_4511_;
goto v_resetjp_4488_;
}
else
{
lean_inc(v_traces_4487_);
lean_dec(v_traceState_4473_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4511_;
goto v_resetjp_4488_;
}
v_resetjp_4488_:
{
lean_object* v___x_4491_; lean_object* v___x_4492_; double v___x_4493_; uint8_t v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4502_; 
v___x_4491_ = lean_box(0);
v___x_4492_ = lean_box(0);
v___x_4493_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__0);
v___x_4494_ = 0;
v___x_4495_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__1));
v___x_4496_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4496_, 0, v_cls_4459_);
lean_ctor_set(v___x_4496_, 1, v___x_4492_);
lean_ctor_set(v___x_4496_, 2, v___x_4495_);
lean_ctor_set_float(v___x_4496_, sizeof(void*)*3, v___x_4493_);
lean_ctor_set_float(v___x_4496_, sizeof(void*)*3 + 8, v___x_4493_);
lean_ctor_set_uint8(v___x_4496_, sizeof(void*)*3 + 16, v___x_4494_);
v___x_4497_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___closed__2));
v___x_4498_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4498_, 0, v___x_4496_);
lean_ctor_set(v___x_4498_, 1, v_a_4468_);
lean_ctor_set(v___x_4498_, 2, v___x_4497_);
lean_inc(v_ref_4466_);
v___x_4499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4499_, 0, v_ref_4466_);
lean_ctor_set(v___x_4499_, 1, v___x_4498_);
v___x_4500_ = l_Lean_PersistentArray_push___redArg(v_traces_4487_, v___x_4499_);
if (v_isShared_4490_ == 0)
{
lean_ctor_set(v___x_4489_, 0, v___x_4500_);
v___x_4502_ = v___x_4489_;
goto v_reusejp_4501_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v___x_4500_);
lean_ctor_set_uint64(v_reuseFailAlloc_4510_, sizeof(void*)*1, v_tid_4486_);
v___x_4502_ = v_reuseFailAlloc_4510_;
goto v_reusejp_4501_;
}
v_reusejp_4501_:
{
lean_object* v___x_4504_; 
if (v_isShared_4485_ == 0)
{
lean_ctor_set(v___x_4484_, 4, v___x_4502_);
v___x_4504_ = v___x_4484_;
goto v_reusejp_4503_;
}
else
{
lean_object* v_reuseFailAlloc_4509_; 
v_reuseFailAlloc_4509_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4509_, 0, v_env_4474_);
lean_ctor_set(v_reuseFailAlloc_4509_, 1, v_nextMacroScope_4475_);
lean_ctor_set(v_reuseFailAlloc_4509_, 2, v_ngen_4476_);
lean_ctor_set(v_reuseFailAlloc_4509_, 3, v_auxDeclNGen_4477_);
lean_ctor_set(v_reuseFailAlloc_4509_, 4, v___x_4502_);
lean_ctor_set(v_reuseFailAlloc_4509_, 5, v_cache_4478_);
lean_ctor_set(v_reuseFailAlloc_4509_, 6, v_recordedDeps_4479_);
lean_ctor_set(v_reuseFailAlloc_4509_, 7, v_messages_4480_);
lean_ctor_set(v_reuseFailAlloc_4509_, 8, v_infoState_4481_);
lean_ctor_set(v_reuseFailAlloc_4509_, 9, v_snapshotTasks_4482_);
v___x_4504_ = v_reuseFailAlloc_4509_;
goto v_reusejp_4503_;
}
v_reusejp_4503_:
{
lean_object* v___x_4505_; lean_object* v___x_4507_; 
v___x_4505_ = lean_st_ref_put(v___y_4464_, v___x_4504_);
if (v_isShared_4471_ == 0)
{
lean_ctor_set(v___x_4470_, 0, v___x_4491_);
v___x_4507_ = v___x_4470_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v___x_4491_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
return v___x_4507_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3___boxed(lean_object* v_cls_4514_, lean_object* v_msg_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_){
_start:
{
lean_object* v_res_4521_; 
v_res_4521_ = l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3(v_cls_4514_, v_msg_4515_, v___y_4516_, v___y_4517_, v___y_4518_, v___y_4519_);
lean_dec(v___y_4519_);
lean_dec_ref(v___y_4518_);
lean_dec(v___y_4517_);
lean_dec_ref(v___y_4516_);
return v_res_4521_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4522_; lean_object* v___x_4523_; 
v___x_4522_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_4523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4523_, 0, v___x_4522_);
return v___x_4523_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___x_4524_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4524_);
lean_ctor_set(v___x_4525_, 1, v___x_4524_);
return v___x_4525_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4529_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_));
v___x_4530_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_));
v___x_4531_ = l_Lean_Name_append(v___x_4530_, v___x_4529_);
return v___x_4531_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4533_; lean_object* v___x_4534_; 
v___x_4533_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__5_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_));
v___x_4534_ = l_Lean_stringToMessageData(v___x_4533_);
return v___x_4534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(lean_object* v_name_4535_, lean_object* v_argKinds_4536_, uint8_t v___x_4537_, lean_object* v___x_4538_, lean_object* v___x_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_){
_start:
{
lean_object* v___x_4584_; lean_object* v_a_4585_; lean_object* v___x_4586_; 
v___x_4584_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__2___redArg(v___x_4539_, v___y_4543_);
v_a_4585_ = lean_ctor_get(v___x_4584_, 0);
lean_inc(v_a_4585_);
lean_dec_ref(v___x_4584_);
v___x_4586_ = l_Lean_addDecl(v_a_4585_, v___x_4537_, v___y_4542_, v___y_4543_);
if (lean_obj_tag(v___x_4586_) == 0)
{
lean_object* v_toCold_4587_; lean_object* v_options_4588_; uint8_t v_hasTrace_4589_; 
lean_dec_ref_known(v___x_4586_, 1);
v_toCold_4587_ = lean_ctor_get(v___y_4542_, 0);
v_options_4588_ = lean_ctor_get(v_toCold_4587_, 2);
v_hasTrace_4589_ = lean_ctor_get_uint8(v_options_4588_, sizeof(void*)*1);
if (v_hasTrace_4589_ == 0)
{
goto v___jp_4545_;
}
else
{
lean_object* v_inheritedTraceOptions_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; uint8_t v___x_4593_; 
v_inheritedTraceOptions_4590_ = lean_ctor_get(v_toCold_4587_, 11);
v___x_4591_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_));
v___x_4592_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4593_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4590_, v_options_4588_, v___x_4592_);
if (v___x_4593_ == 0)
{
goto v___jp_4545_;
}
else
{
lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; 
v___x_4594_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
lean_inc(v_name_4535_);
v___x_4595_ = l_Lean_MessageData_ofName(v_name_4535_);
v___x_4596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4596_, 0, v___x_4594_);
lean_ctor_set(v___x_4596_, 1, v___x_4595_);
v___x_4597_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2___redArg___closed__3);
v___x_4598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4598_, 0, v___x_4596_);
lean_ctor_set(v___x_4598_, 1, v___x_4597_);
v___x_4599_ = l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3(v___x_4591_, v___x_4598_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_);
if (lean_obj_tag(v___x_4599_) == 0)
{
lean_dec_ref_known(v___x_4599_, 1);
goto v___jp_4545_;
}
else
{
lean_dec_ref(v___x_4538_);
lean_dec_ref(v_argKinds_4536_);
lean_dec(v_name_4535_);
return v___x_4599_;
}
}
}
}
else
{
lean_dec_ref(v___x_4538_);
lean_dec_ref(v_argKinds_4536_);
lean_dec(v_name_4535_);
return v___x_4586_;
}
v___jp_4545_:
{
lean_object* v___x_4546_; lean_object* v_env_4547_; lean_object* v_nextMacroScope_4548_; lean_object* v_ngen_4549_; lean_object* v_auxDeclNGen_4550_; lean_object* v_traceState_4551_; lean_object* v_recordedDeps_4552_; lean_object* v_messages_4553_; lean_object* v_infoState_4554_; lean_object* v_snapshotTasks_4555_; lean_object* v___x_4557_; uint8_t v_isShared_4558_; uint8_t v_isSharedCheck_4582_; 
v___x_4546_ = lean_st_ref_take(v___y_4543_);
v_env_4547_ = lean_ctor_get(v___x_4546_, 0);
v_nextMacroScope_4548_ = lean_ctor_get(v___x_4546_, 1);
v_ngen_4549_ = lean_ctor_get(v___x_4546_, 2);
v_auxDeclNGen_4550_ = lean_ctor_get(v___x_4546_, 3);
v_traceState_4551_ = lean_ctor_get(v___x_4546_, 4);
v_recordedDeps_4552_ = lean_ctor_get(v___x_4546_, 6);
v_messages_4553_ = lean_ctor_get(v___x_4546_, 7);
v_infoState_4554_ = lean_ctor_get(v___x_4546_, 8);
v_snapshotTasks_4555_ = lean_ctor_get(v___x_4546_, 9);
v_isSharedCheck_4582_ = !lean_is_exclusive(v___x_4546_);
if (v_isSharedCheck_4582_ == 0)
{
lean_object* v_unused_4583_; 
v_unused_4583_ = lean_ctor_get(v___x_4546_, 5);
lean_dec(v_unused_4583_);
v___x_4557_ = v___x_4546_;
v_isShared_4558_ = v_isSharedCheck_4582_;
goto v_resetjp_4556_;
}
else
{
lean_inc(v_snapshotTasks_4555_);
lean_inc(v_infoState_4554_);
lean_inc(v_messages_4553_);
lean_inc(v_recordedDeps_4552_);
lean_inc(v_traceState_4551_);
lean_inc(v_auxDeclNGen_4550_);
lean_inc(v_ngen_4549_);
lean_inc(v_nextMacroScope_4548_);
lean_inc(v_env_4547_);
lean_dec(v___x_4546_);
v___x_4557_ = lean_box(0);
v_isShared_4558_ = v_isSharedCheck_4582_;
goto v_resetjp_4556_;
}
v_resetjp_4556_:
{
lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4563_; 
v___x_4559_ = l_Lean_Meta_congrKindsExt;
v___x_4560_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_4559_, v_env_4547_, v_name_4535_, v_argKinds_4536_, v___x_4537_);
v___x_4561_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
if (v_isShared_4558_ == 0)
{
lean_ctor_set(v___x_4557_, 5, v___x_4561_);
lean_ctor_set(v___x_4557_, 0, v___x_4560_);
v___x_4563_ = v___x_4557_;
goto v_reusejp_4562_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v___x_4560_);
lean_ctor_set(v_reuseFailAlloc_4581_, 1, v_nextMacroScope_4548_);
lean_ctor_set(v_reuseFailAlloc_4581_, 2, v_ngen_4549_);
lean_ctor_set(v_reuseFailAlloc_4581_, 3, v_auxDeclNGen_4550_);
lean_ctor_set(v_reuseFailAlloc_4581_, 4, v_traceState_4551_);
lean_ctor_set(v_reuseFailAlloc_4581_, 5, v___x_4561_);
lean_ctor_set(v_reuseFailAlloc_4581_, 6, v_recordedDeps_4552_);
lean_ctor_set(v_reuseFailAlloc_4581_, 7, v_messages_4553_);
lean_ctor_set(v_reuseFailAlloc_4581_, 8, v_infoState_4554_);
lean_ctor_set(v_reuseFailAlloc_4581_, 9, v_snapshotTasks_4555_);
v___x_4563_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4562_;
}
v_reusejp_4562_:
{
lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v_mctx_4566_; lean_object* v_zetaDeltaFVarIds_4567_; lean_object* v_postponed_4568_; lean_object* v_diag_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4579_; 
v___x_4564_ = lean_st_ref_put(v___y_4543_, v___x_4563_);
v___x_4565_ = lean_st_ref_take(v___y_4541_);
v_mctx_4566_ = lean_ctor_get(v___x_4565_, 0);
v_zetaDeltaFVarIds_4567_ = lean_ctor_get(v___x_4565_, 2);
v_postponed_4568_ = lean_ctor_get(v___x_4565_, 3);
v_diag_4569_ = lean_ctor_get(v___x_4565_, 4);
v_isSharedCheck_4579_ = !lean_is_exclusive(v___x_4565_);
if (v_isSharedCheck_4579_ == 0)
{
lean_object* v_unused_4580_; 
v_unused_4580_ = lean_ctor_get(v___x_4565_, 1);
lean_dec(v_unused_4580_);
v___x_4571_ = v___x_4565_;
v_isShared_4572_ = v_isSharedCheck_4579_;
goto v_resetjp_4570_;
}
else
{
lean_inc(v_diag_4569_);
lean_inc(v_postponed_4568_);
lean_inc(v_zetaDeltaFVarIds_4567_);
lean_inc(v_mctx_4566_);
lean_dec(v___x_4565_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4579_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
lean_object* v___x_4573_; lean_object* v___x_4575_; 
v___x_4573_ = lean_box(0);
if (v_isShared_4572_ == 0)
{
lean_ctor_set(v___x_4571_, 1, v___x_4538_);
v___x_4575_ = v___x_4571_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v_mctx_4566_);
lean_ctor_set(v_reuseFailAlloc_4578_, 1, v___x_4538_);
lean_ctor_set(v_reuseFailAlloc_4578_, 2, v_zetaDeltaFVarIds_4567_);
lean_ctor_set(v_reuseFailAlloc_4578_, 3, v_postponed_4568_);
lean_ctor_set(v_reuseFailAlloc_4578_, 4, v_diag_4569_);
v___x_4575_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
lean_object* v___x_4576_; lean_object* v___x_4577_; 
v___x_4576_ = lean_st_ref_put(v___y_4541_, v___x_4575_);
v___x_4577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4577_, 0, v___x_4573_);
return v___x_4577_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2____boxed(lean_object* v_name_4600_, lean_object* v_argKinds_4601_, lean_object* v___x_4602_, lean_object* v___x_4603_, lean_object* v___x_4604_, lean_object* v___y_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_){
_start:
{
uint8_t v___x_15831__boxed_4610_; lean_object* v_res_4611_; 
v___x_15831__boxed_4610_ = lean_unbox(v___x_4602_);
v_res_4611_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(v_name_4600_, v_argKinds_4601_, v___x_15831__boxed_4610_, v___x_4603_, v___x_4604_, v___y_4605_, v___y_4606_, v___y_4607_, v___y_4608_);
lean_dec(v___y_4608_);
lean_dec_ref(v___y_4607_);
lean_dec(v___y_4606_);
lean_dec_ref(v___y_4605_);
return v_res_4611_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4612_; lean_object* v___x_4613_; 
v___x_4612_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_4613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4613_, 0, v___x_4612_);
return v___x_4613_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_4615_; 
v___x_4615_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0);
return v___x_4615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v___dummy_4616_){
_start:
{
lean_object* v_res_4617_; 
v_res_4617_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg();
return v_res_4617_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__1(lean_object* v_a_4618_, lean_object* v_a_4619_){
_start:
{
if (lean_obj_tag(v_a_4618_) == 0)
{
lean_object* v___x_4620_; 
v___x_4620_ = l_List_reverse___redArg(v_a_4619_);
return v___x_4620_;
}
else
{
lean_object* v_head_4621_; lean_object* v_tail_4622_; lean_object* v___x_4624_; uint8_t v_isShared_4625_; uint8_t v_isSharedCheck_4631_; 
v_head_4621_ = lean_ctor_get(v_a_4618_, 0);
v_tail_4622_ = lean_ctor_get(v_a_4618_, 1);
v_isSharedCheck_4631_ = !lean_is_exclusive(v_a_4618_);
if (v_isSharedCheck_4631_ == 0)
{
v___x_4624_ = v_a_4618_;
v_isShared_4625_ = v_isSharedCheck_4631_;
goto v_resetjp_4623_;
}
else
{
lean_inc(v_tail_4622_);
lean_inc(v_head_4621_);
lean_dec(v_a_4618_);
v___x_4624_ = lean_box(0);
v_isShared_4625_ = v_isSharedCheck_4631_;
goto v_resetjp_4623_;
}
v_resetjp_4623_:
{
lean_object* v___x_4626_; lean_object* v___x_4628_; 
v___x_4626_ = l_Lean_mkLevelParam(v_head_4621_);
if (v_isShared_4625_ == 0)
{
lean_ctor_set(v___x_4624_, 1, v_a_4619_);
lean_ctor_set(v___x_4624_, 0, v___x_4626_);
v___x_4628_ = v___x_4624_;
goto v_reusejp_4627_;
}
else
{
lean_object* v_reuseFailAlloc_4630_; 
v_reuseFailAlloc_4630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4630_, 0, v___x_4626_);
lean_ctor_set(v_reuseFailAlloc_4630_, 1, v_a_4619_);
v___x_4628_ = v_reuseFailAlloc_4630_;
goto v_reusejp_4627_;
}
v_reusejp_4627_:
{
v_a_4618_ = v_tail_4622_;
v_a_4619_ = v___x_4628_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4632_; lean_object* v___x_4633_; 
v___x_4632_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_4633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4633_, 0, v___x_4632_);
return v___x_4633_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; 
v___x_4634_ = lean_box(1);
v___x_4635_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_4636_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4637_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4637_, 0, v___x_4636_);
lean_ctor_set(v___x_4637_, 1, v___x_4635_);
lean_ctor_set(v___x_4637_, 2, v___x_4634_);
return v___x_4637_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; 
v___x_4640_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4641_ = lean_unsigned_to_nat(0u);
v___x_4642_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4642_, 0, v___x_4641_);
lean_ctor_set(v___x_4642_, 1, v___x_4641_);
lean_ctor_set(v___x_4642_, 2, v___x_4641_);
lean_ctor_set(v___x_4642_, 3, v___x_4641_);
lean_ctor_set(v___x_4642_, 4, v___x_4640_);
lean_ctor_set(v___x_4642_, 5, v___x_4640_);
lean_ctor_set(v___x_4642_, 6, v___x_4640_);
lean_ctor_set(v___x_4642_, 7, v___x_4640_);
lean_ctor_set(v___x_4642_, 8, v___x_4640_);
lean_ctor_set(v___x_4642_, 9, v___x_4640_);
lean_ctor_set(v___x_4642_, 10, v___x_4640_);
return v___x_4642_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4643_; 
v___x_4643_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0___redArg();
return v___x_4643_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4644_; lean_object* v___x_4645_; 
v___x_4644_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4645_, 0, v___x_4644_);
lean_ctor_set(v___x_4645_, 1, v___x_4644_);
return v___x_4645_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; 
v___x_4646_ = lean_unsigned_to_nat(0u);
v___x_4647_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4648_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4648_, 0, v___x_4647_);
lean_ctor_set(v___x_4648_, 1, v___x_4647_);
lean_ctor_set(v___x_4648_, 2, v___x_4646_);
return v___x_4648_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; 
v___x_4649_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4650_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4651_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4652_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4653_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4653_, 0, v___x_4652_);
lean_ctor_set(v___x_4653_, 1, v___x_4651_);
lean_ctor_set(v___x_4653_, 2, v___x_4650_);
lean_ctor_set(v___x_4653_, 3, v___x_4651_);
lean_ctor_set(v___x_4653_, 4, v___x_4651_);
lean_ctor_set(v___x_4653_, 5, v___x_4651_);
lean_ctor_set(v___x_4653_, 6, v___x_4651_);
lean_ctor_set(v___x_4653_, 7, v___x_4649_);
return v___x_4653_;
}
}
static lean_object* _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4654_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4655_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4655_, 0, v___x_4654_);
lean_ctor_set(v___x_4655_, 1, v___x_4654_);
lean_ctor_set(v___x_4655_, 2, v___x_4654_);
lean_ctor_set(v___x_4655_, 3, v___x_4654_);
lean_ctor_set(v___x_4655_, 4, v___x_4654_);
return v___x_4655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(lean_object* v___x_4656_, lean_object* v_name_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_){
_start:
{
if (lean_obj_tag(v_name_4657_) == 1)
{
lean_object* v_pre_4661_; lean_object* v_str_4662_; lean_object* v___x_4663_; lean_object* v_env_4664_; uint8_t v___x_4665_; uint8_t v___x_4666_; 
v_pre_4661_ = lean_ctor_get(v_name_4657_, 0);
lean_inc_n(v_pre_4661_, 2);
v_str_4662_ = lean_ctor_get(v_name_4657_, 1);
v___x_4663_ = lean_st_ref_get(v___y_4659_);
v_env_4664_ = lean_ctor_get(v___x_4663_, 0);
lean_inc_ref(v_env_4664_);
lean_dec(v___x_4663_);
v___x_4665_ = 1;
v___x_4666_ = l_Lean_Environment_contains(v_env_4664_, v_pre_4661_, v___x_4665_);
if (v___x_4666_ == 0)
{
lean_object* v___x_4667_; lean_object* v___x_4668_; 
lean_dec(v_pre_4661_);
lean_dec_ref_known(v_name_4657_, 2);
lean_dec(v___x_4656_);
v___x_4667_ = lean_box(v___x_4666_);
v___x_4668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4668_, 0, v___x_4667_);
return v___x_4668_;
}
else
{
uint8_t v___x_4669_; lean_object* v_a_4671_; 
lean_inc_ref(v_str_4662_);
v___x_4669_ = l_Lean_Meta_isHCongrReservedNameSuffix(v_str_4662_);
if (v___x_4669_ == 0)
{
lean_object* v___x_4678_; uint8_t v___x_4679_; 
v___x_4678_ = ((lean_object*)(l_Lean_Meta_congrSimpSuffix___closed__0));
v___x_4679_ = lean_string_dec_eq(v_str_4662_, v___x_4678_);
if (v___x_4679_ == 0)
{
lean_object* v___x_4680_; lean_object* v___x_4681_; 
lean_dec(v_pre_4661_);
lean_dec_ref_known(v_name_4657_, 2);
lean_dec(v___x_4656_);
v___x_4680_ = lean_box(v___x_4679_);
v___x_4681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4681_, 0, v___x_4680_);
return v___x_4681_;
}
else
{
uint8_t v___x_4682_; uint8_t v___x_4683_; uint8_t v___x_4684_; lean_object* v___x_4685_; uint64_t v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; uint8_t v_a_4700_; lean_object* v___x_4704_; 
v___x_4682_ = 1;
v___x_4683_ = 0;
v___x_4684_ = 2;
v___x_4685_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_4685_, 0, v___x_4669_);
lean_ctor_set_uint8(v___x_4685_, 1, v___x_4669_);
lean_ctor_set_uint8(v___x_4685_, 2, v___x_4669_);
lean_ctor_set_uint8(v___x_4685_, 3, v___x_4669_);
lean_ctor_set_uint8(v___x_4685_, 4, v___x_4669_);
lean_ctor_set_uint8(v___x_4685_, 5, v___x_4679_);
lean_ctor_set_uint8(v___x_4685_, 6, v___x_4679_);
lean_ctor_set_uint8(v___x_4685_, 7, v___x_4669_);
lean_ctor_set_uint8(v___x_4685_, 8, v___x_4679_);
lean_ctor_set_uint8(v___x_4685_, 9, v___x_4682_);
lean_ctor_set_uint8(v___x_4685_, 10, v___x_4683_);
lean_ctor_set_uint8(v___x_4685_, 11, v___x_4679_);
lean_ctor_set_uint8(v___x_4685_, 12, v___x_4679_);
lean_ctor_set_uint8(v___x_4685_, 13, v___x_4679_);
lean_ctor_set_uint8(v___x_4685_, 14, v___x_4684_);
lean_ctor_set_uint8(v___x_4685_, 15, v___x_4679_);
lean_ctor_set_uint8(v___x_4685_, 16, v___x_4679_);
lean_ctor_set_uint8(v___x_4685_, 17, v___x_4679_);
lean_ctor_set_uint8(v___x_4685_, 18, v___x_4679_);
lean_ctor_set_uint8(v___x_4685_, 19, v___x_4669_);
v___x_4686_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_4685_);
v___x_4687_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4687_, 0, v___x_4685_);
lean_ctor_set_uint64(v___x_4687_, sizeof(void*)*1, v___x_4686_);
v___x_4688_ = lean_unsigned_to_nat(0u);
v___x_4689_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_4690_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4691_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_));
v___x_4692_ = lean_box(0);
lean_inc(v___x_4656_);
v___x_4693_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4693_, 0, v___x_4687_);
lean_ctor_set(v___x_4693_, 1, v___x_4656_);
lean_ctor_set(v___x_4693_, 2, v___x_4690_);
lean_ctor_set(v___x_4693_, 3, v___x_4691_);
lean_ctor_set(v___x_4693_, 4, v___x_4692_);
lean_ctor_set(v___x_4693_, 5, v___x_4688_);
lean_ctor_set(v___x_4693_, 6, v___x_4692_);
lean_ctor_set_uint8(v___x_4693_, sizeof(void*)*7, v___x_4669_);
lean_ctor_set_uint8(v___x_4693_, sizeof(void*)*7 + 1, v___x_4669_);
lean_ctor_set_uint8(v___x_4693_, sizeof(void*)*7 + 2, v___x_4669_);
lean_ctor_set_uint8(v___x_4693_, sizeof(void*)*7 + 3, v___x_4679_);
v___x_4694_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4695_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4696_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4697_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4697_, 0, v___x_4694_);
lean_ctor_set(v___x_4697_, 1, v___x_4695_);
lean_ctor_set(v___x_4697_, 2, v___x_4656_);
lean_ctor_set(v___x_4697_, 3, v___x_4689_);
lean_ctor_set(v___x_4697_, 4, v___x_4696_);
v___x_4698_ = lean_st_mk_ref(v___x_4697_);
lean_inc(v_pre_4661_);
v___x_4704_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0(v_pre_4661_, v___x_4693_, v___x_4698_, v___y_4658_, v___y_4659_);
if (lean_obj_tag(v___x_4704_) == 0)
{
lean_object* v_a_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; 
v_a_4705_ = lean_ctor_get(v___x_4704_, 0);
lean_inc(v_a_4705_);
lean_dec_ref_known(v___x_4704_, 1);
v___x_4706_ = l_Lean_ConstantInfo_levelParams(v_a_4705_);
lean_dec(v_a_4705_);
v___x_4707_ = lean_box(0);
lean_inc(v___x_4706_);
v___x_4708_ = l_List_mapTR_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__1(v___x_4706_, v___x_4707_);
lean_inc(v_pre_4661_);
v___x_4709_ = l_Lean_mkConst(v_pre_4661_, v___x_4708_);
lean_inc_ref(v___x_4709_);
v___x_4710_ = l_Lean_Meta_getFunInfo(v___x_4709_, v___x_4692_, v___x_4693_, v___x_4698_, v___y_4658_, v___y_4659_);
if (lean_obj_tag(v___x_4710_) == 0)
{
lean_object* v_a_4711_; lean_object* v___x_4712_; 
v_a_4711_ = lean_ctor_get(v___x_4710_, 0);
lean_inc(v_a_4711_);
lean_dec_ref_known(v___x_4710_, 1);
lean_inc_ref(v___x_4709_);
v___x_4712_ = l_Lean_Meta_getCongrSimpKinds(v___x_4709_, v_a_4711_, v___x_4693_, v___x_4698_, v___y_4658_, v___y_4659_);
if (lean_obj_tag(v___x_4712_) == 0)
{
lean_object* v_a_4713_; lean_object* v___x_4714_; 
v_a_4713_ = lean_ctor_get(v___x_4712_, 0);
lean_inc(v_a_4713_);
lean_dec_ref_known(v___x_4712_, 1);
v___x_4714_ = l_Lean_Meta_mkCongrSimpCore_x3f(v___x_4709_, v_a_4711_, v_a_4713_, v___x_4679_, v___x_4693_, v___x_4698_, v___y_4658_, v___y_4659_);
if (lean_obj_tag(v___x_4714_) == 0)
{
lean_object* v_a_4715_; 
v_a_4715_ = lean_ctor_get(v___x_4714_, 0);
lean_inc(v_a_4715_);
lean_dec_ref_known(v___x_4714_, 1);
if (lean_obj_tag(v_a_4715_) == 1)
{
lean_object* v_val_4716_; lean_object* v_type_4717_; lean_object* v_proof_4718_; lean_object* v_argKinds_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4732_; 
v_val_4716_ = lean_ctor_get(v_a_4715_, 0);
lean_inc(v_val_4716_);
lean_dec_ref_known(v_a_4715_, 1);
v_type_4717_ = lean_ctor_get(v_val_4716_, 0);
v_proof_4718_ = lean_ctor_get(v_val_4716_, 1);
v_argKinds_4719_ = lean_ctor_get(v_val_4716_, 2);
v_isSharedCheck_4732_ = !lean_is_exclusive(v_val_4716_);
if (v_isSharedCheck_4732_ == 0)
{
v___x_4721_ = v_val_4716_;
v_isShared_4722_ = v_isSharedCheck_4732_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_argKinds_4719_);
lean_inc(v_proof_4718_);
lean_inc(v_type_4717_);
lean_dec(v_val_4716_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4732_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4724_; 
lean_inc_ref(v_name_4657_);
if (v_isShared_4722_ == 0)
{
lean_ctor_set(v___x_4721_, 2, v_type_4717_);
lean_ctor_set(v___x_4721_, 1, v___x_4706_);
lean_ctor_set(v___x_4721_, 0, v_name_4657_);
v___x_4724_ = v___x_4721_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v_name_4657_);
lean_ctor_set(v_reuseFailAlloc_4731_, 1, v___x_4706_);
lean_ctor_set(v_reuseFailAlloc_4731_, 2, v_type_4717_);
v___x_4724_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___f_4728_; lean_object* v___x_4729_; 
lean_inc_ref_n(v_name_4657_, 2);
v___x_4725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4725_, 0, v_name_4657_);
lean_ctor_set(v___x_4725_, 1, v___x_4707_);
v___x_4726_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4724_);
lean_ctor_set(v___x_4726_, 1, v_proof_4718_);
lean_ctor_set(v___x_4726_, 2, v___x_4725_);
v___x_4727_ = lean_box(v___x_4669_);
v___f_4728_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2____boxed), 10, 5);
lean_closure_set(v___f_4728_, 0, v_name_4657_);
lean_closure_set(v___f_4728_, 1, v_argKinds_4719_);
lean_closure_set(v___f_4728_, 2, v___x_4727_);
lean_closure_set(v___f_4728_, 3, v___x_4695_);
lean_closure_set(v___f_4728_, 4, v___x_4726_);
v___x_4729_ = l_Lean_Meta_realizeConst(v_pre_4661_, v_name_4657_, v___f_4728_, v___x_4693_, v___x_4698_, v___y_4658_, v___y_4659_);
lean_dec_ref_known(v___x_4693_, 7);
if (lean_obj_tag(v___x_4729_) == 0)
{
lean_dec_ref_known(v___x_4729_, 1);
v_a_4700_ = v___x_4679_;
goto v___jp_4699_;
}
else
{
lean_object* v_a_4730_; 
lean_dec(v___x_4698_);
v_a_4730_ = lean_ctor_get(v___x_4729_, 0);
lean_inc(v_a_4730_);
lean_dec_ref_known(v___x_4729_, 1);
v_a_4671_ = v_a_4730_;
goto v___jp_4670_;
}
}
}
}
else
{
lean_dec(v_a_4715_);
lean_dec(v___x_4706_);
lean_dec_ref_known(v___x_4693_, 7);
lean_dec(v_pre_4661_);
lean_dec_ref_known(v_name_4657_, 2);
v_a_4700_ = v___x_4669_;
goto v___jp_4699_;
}
}
else
{
lean_object* v_a_4733_; 
lean_dec(v___x_4706_);
lean_dec(v___x_4698_);
lean_dec_ref_known(v___x_4693_, 7);
lean_dec(v_pre_4661_);
lean_dec_ref_known(v_name_4657_, 2);
v_a_4733_ = lean_ctor_get(v___x_4714_, 0);
lean_inc(v_a_4733_);
lean_dec_ref_known(v___x_4714_, 1);
v_a_4671_ = v_a_4733_;
goto v___jp_4670_;
}
}
else
{
lean_object* v_a_4734_; 
lean_dec(v_a_4711_);
lean_dec_ref(v___x_4709_);
lean_dec(v___x_4706_);
lean_dec(v___x_4698_);
lean_dec_ref_known(v___x_4693_, 7);
lean_dec(v_pre_4661_);
lean_dec_ref_known(v_name_4657_, 2);
v_a_4734_ = lean_ctor_get(v___x_4712_, 0);
lean_inc(v_a_4734_);
lean_dec_ref_known(v___x_4712_, 1);
v_a_4671_ = v_a_4734_;
goto v___jp_4670_;
}
}
else
{
lean_object* v_a_4735_; 
lean_dec_ref(v___x_4709_);
lean_dec(v___x_4706_);
lean_dec(v___x_4698_);
lean_dec_ref_known(v___x_4693_, 7);
lean_dec(v_pre_4661_);
lean_dec_ref_known(v_name_4657_, 2);
v_a_4735_ = lean_ctor_get(v___x_4710_, 0);
lean_inc(v_a_4735_);
lean_dec_ref_known(v___x_4710_, 1);
v_a_4671_ = v_a_4735_;
goto v___jp_4670_;
}
}
else
{
lean_object* v_a_4736_; 
lean_dec(v___x_4698_);
lean_dec_ref_known(v___x_4693_, 7);
lean_dec(v_pre_4661_);
lean_dec_ref_known(v_name_4657_, 2);
v_a_4736_ = lean_ctor_get(v___x_4704_, 0);
lean_inc(v_a_4736_);
lean_dec_ref_known(v___x_4704_, 1);
v_a_4671_ = v_a_4736_;
goto v___jp_4670_;
}
v___jp_4699_:
{
lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; 
v___x_4701_ = lean_st_ref_get(v___x_4698_);
lean_dec(v___x_4698_);
lean_dec(v___x_4701_);
v___x_4702_ = lean_box(v_a_4700_);
v___x_4703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4703_, 0, v___x_4702_);
return v___x_4703_;
}
}
}
else
{
lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; uint8_t v___x_4744_; lean_object* v_a_4746_; uint8_t v___x_4753_; uint8_t v___x_4754_; uint8_t v___x_4755_; lean_object* v___x_4756_; uint64_t v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; 
v___x_4737_ = lean_unsigned_to_nat(7u);
v___x_4738_ = lean_unsigned_to_nat(0u);
v___x_4739_ = lean_string_utf8_byte_size(v_str_4662_);
lean_inc_ref_n(v_str_4662_, 2);
v___x_4740_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4740_, 0, v_str_4662_);
lean_ctor_set(v___x_4740_, 1, v___x_4738_);
lean_ctor_set(v___x_4740_, 2, v___x_4739_);
v___x_4741_ = l_String_Slice_Pos_nextn(v___x_4740_, v___x_4738_, v___x_4737_);
lean_dec_ref_known(v___x_4740_, 3);
v___x_4742_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4742_, 0, v_str_4662_);
lean_ctor_set(v___x_4742_, 1, v___x_4741_);
lean_ctor_set(v___x_4742_, 2, v___x_4739_);
v___x_4743_ = l_String_Slice_toNat_x21(v___x_4742_);
lean_dec_ref_known(v___x_4742_, 3);
v___x_4744_ = 0;
v___x_4753_ = 1;
v___x_4754_ = 0;
v___x_4755_ = 2;
v___x_4756_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_4756_, 0, v___x_4744_);
lean_ctor_set_uint8(v___x_4756_, 1, v___x_4744_);
lean_ctor_set_uint8(v___x_4756_, 2, v___x_4744_);
lean_ctor_set_uint8(v___x_4756_, 3, v___x_4744_);
lean_ctor_set_uint8(v___x_4756_, 4, v___x_4744_);
lean_ctor_set_uint8(v___x_4756_, 5, v___x_4669_);
lean_ctor_set_uint8(v___x_4756_, 6, v___x_4669_);
lean_ctor_set_uint8(v___x_4756_, 7, v___x_4744_);
lean_ctor_set_uint8(v___x_4756_, 8, v___x_4669_);
lean_ctor_set_uint8(v___x_4756_, 9, v___x_4753_);
lean_ctor_set_uint8(v___x_4756_, 10, v___x_4754_);
lean_ctor_set_uint8(v___x_4756_, 11, v___x_4669_);
lean_ctor_set_uint8(v___x_4756_, 12, v___x_4669_);
lean_ctor_set_uint8(v___x_4756_, 13, v___x_4669_);
lean_ctor_set_uint8(v___x_4756_, 14, v___x_4755_);
lean_ctor_set_uint8(v___x_4756_, 15, v___x_4669_);
lean_ctor_set_uint8(v___x_4756_, 16, v___x_4669_);
lean_ctor_set_uint8(v___x_4756_, 17, v___x_4669_);
lean_ctor_set_uint8(v___x_4756_, 18, v___x_4669_);
lean_ctor_set_uint8(v___x_4756_, 19, v___x_4744_);
v___x_4757_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_4756_);
v___x_4758_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4758_, 0, v___x_4756_);
lean_ctor_set_uint64(v___x_4758_, sizeof(void*)*1, v___x_4757_);
v___x_4759_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0_spec__0_spec__2_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_4760_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4761_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_));
v___x_4762_ = lean_box(0);
lean_inc(v___x_4656_);
v___x_4763_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4763_, 0, v___x_4758_);
lean_ctor_set(v___x_4763_, 1, v___x_4656_);
lean_ctor_set(v___x_4763_, 2, v___x_4760_);
lean_ctor_set(v___x_4763_, 3, v___x_4761_);
lean_ctor_set(v___x_4763_, 4, v___x_4762_);
lean_ctor_set(v___x_4763_, 5, v___x_4738_);
lean_ctor_set(v___x_4763_, 6, v___x_4762_);
lean_ctor_set_uint8(v___x_4763_, sizeof(void*)*7, v___x_4744_);
lean_ctor_set_uint8(v___x_4763_, sizeof(void*)*7 + 1, v___x_4744_);
lean_ctor_set_uint8(v___x_4763_, sizeof(void*)*7 + 2, v___x_4744_);
lean_ctor_set_uint8(v___x_4763_, sizeof(void*)*7 + 3, v___x_4669_);
v___x_4764_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4765_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4766_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_4767_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4767_, 0, v___x_4764_);
lean_ctor_set(v___x_4767_, 1, v___x_4765_);
lean_ctor_set(v___x_4767_, 2, v___x_4656_);
lean_ctor_set(v___x_4767_, 3, v___x_4759_);
lean_ctor_set(v___x_4767_, 4, v___x_4766_);
v___x_4768_ = lean_st_mk_ref(v___x_4767_);
lean_inc(v_pre_4661_);
v___x_4769_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_getClassSubobjectMask_x3f_spec__0(v_pre_4661_, v___x_4763_, v___x_4768_, v___y_4658_, v___y_4659_);
if (lean_obj_tag(v___x_4769_) == 0)
{
lean_object* v_a_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; 
v_a_4770_ = lean_ctor_get(v___x_4769_, 0);
lean_inc(v_a_4770_);
lean_dec_ref_known(v___x_4769_, 1);
v___x_4771_ = l_Lean_ConstantInfo_levelParams(v_a_4770_);
lean_dec(v_a_4770_);
v___x_4772_ = lean_box(0);
lean_inc(v___x_4771_);
v___x_4773_ = l_List_mapTR_loop___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__1(v___x_4771_, v___x_4772_);
lean_inc(v_pre_4661_);
v___x_4774_ = l_Lean_mkConst(v_pre_4661_, v___x_4773_);
v___x_4775_ = l_Lean_Meta_mkHCongrWithArity(v___x_4774_, v___x_4743_, v___x_4763_, v___x_4768_, v___y_4658_, v___y_4659_);
if (lean_obj_tag(v___x_4775_) == 0)
{
lean_object* v_a_4776_; lean_object* v_type_4777_; lean_object* v_proof_4778_; lean_object* v_argKinds_4779_; lean_object* v___x_4781_; uint8_t v_isShared_4782_; uint8_t v_isSharedCheck_4802_; 
v_a_4776_ = lean_ctor_get(v___x_4775_, 0);
lean_inc(v_a_4776_);
lean_dec_ref_known(v___x_4775_, 1);
v_type_4777_ = lean_ctor_get(v_a_4776_, 0);
v_proof_4778_ = lean_ctor_get(v_a_4776_, 1);
v_argKinds_4779_ = lean_ctor_get(v_a_4776_, 2);
v_isSharedCheck_4802_ = !lean_is_exclusive(v_a_4776_);
if (v_isSharedCheck_4802_ == 0)
{
v___x_4781_ = v_a_4776_;
v_isShared_4782_ = v_isSharedCheck_4802_;
goto v_resetjp_4780_;
}
else
{
lean_inc(v_argKinds_4779_);
lean_inc(v_proof_4778_);
lean_inc(v_type_4777_);
lean_dec(v_a_4776_);
v___x_4781_ = lean_box(0);
v_isShared_4782_ = v_isSharedCheck_4802_;
goto v_resetjp_4780_;
}
v_resetjp_4780_:
{
lean_object* v___x_4784_; 
lean_inc_ref(v_name_4657_);
if (v_isShared_4782_ == 0)
{
lean_ctor_set(v___x_4781_, 2, v_type_4777_);
lean_ctor_set(v___x_4781_, 1, v___x_4771_);
lean_ctor_set(v___x_4781_, 0, v_name_4657_);
v___x_4784_ = v___x_4781_;
goto v_reusejp_4783_;
}
else
{
lean_object* v_reuseFailAlloc_4801_; 
v_reuseFailAlloc_4801_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4801_, 0, v_name_4657_);
lean_ctor_set(v_reuseFailAlloc_4801_, 1, v___x_4771_);
lean_ctor_set(v_reuseFailAlloc_4801_, 2, v_type_4777_);
v___x_4784_ = v_reuseFailAlloc_4801_;
goto v_reusejp_4783_;
}
v_reusejp_4783_:
{
lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___f_4788_; lean_object* v___x_4789_; 
lean_inc_ref_n(v_name_4657_, 2);
v___x_4785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4785_, 0, v_name_4657_);
lean_ctor_set(v___x_4785_, 1, v___x_4772_);
v___x_4786_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4786_, 0, v___x_4784_);
lean_ctor_set(v___x_4786_, 1, v_proof_4778_);
lean_ctor_set(v___x_4786_, 2, v___x_4785_);
v___x_4787_ = lean_box(v___x_4744_);
v___f_4788_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2____boxed), 10, 5);
lean_closure_set(v___f_4788_, 0, v_name_4657_);
lean_closure_set(v___f_4788_, 1, v_argKinds_4779_);
lean_closure_set(v___f_4788_, 2, v___x_4787_);
lean_closure_set(v___f_4788_, 3, v___x_4765_);
lean_closure_set(v___f_4788_, 4, v___x_4786_);
v___x_4789_ = l_Lean_Meta_realizeConst(v_pre_4661_, v_name_4657_, v___f_4788_, v___x_4763_, v___x_4768_, v___y_4658_, v___y_4659_);
lean_dec_ref_known(v___x_4763_, 7);
if (lean_obj_tag(v___x_4789_) == 0)
{
lean_object* v___x_4791_; uint8_t v_isShared_4792_; uint8_t v_isSharedCheck_4798_; 
v_isSharedCheck_4798_ = !lean_is_exclusive(v___x_4789_);
if (v_isSharedCheck_4798_ == 0)
{
lean_object* v_unused_4799_; 
v_unused_4799_ = lean_ctor_get(v___x_4789_, 0);
lean_dec(v_unused_4799_);
v___x_4791_ = v___x_4789_;
v_isShared_4792_ = v_isSharedCheck_4798_;
goto v_resetjp_4790_;
}
else
{
lean_dec(v___x_4789_);
v___x_4791_ = lean_box(0);
v_isShared_4792_ = v_isSharedCheck_4798_;
goto v_resetjp_4790_;
}
v_resetjp_4790_:
{
lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4796_; 
v___x_4793_ = lean_st_ref_get(v___x_4768_);
lean_dec(v___x_4768_);
lean_dec(v___x_4793_);
v___x_4794_ = lean_box(v___x_4669_);
if (v_isShared_4792_ == 0)
{
lean_ctor_set(v___x_4791_, 0, v___x_4794_);
v___x_4796_ = v___x_4791_;
goto v_reusejp_4795_;
}
else
{
lean_object* v_reuseFailAlloc_4797_; 
v_reuseFailAlloc_4797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4797_, 0, v___x_4794_);
v___x_4796_ = v_reuseFailAlloc_4797_;
goto v_reusejp_4795_;
}
v_reusejp_4795_:
{
return v___x_4796_;
}
}
}
else
{
lean_object* v_a_4800_; 
lean_dec(v___x_4768_);
v_a_4800_ = lean_ctor_get(v___x_4789_, 0);
lean_inc(v_a_4800_);
lean_dec_ref_known(v___x_4789_, 1);
v_a_4746_ = v_a_4800_;
goto v___jp_4745_;
}
}
}
}
else
{
lean_object* v_a_4803_; 
lean_dec(v___x_4771_);
lean_dec(v___x_4768_);
lean_dec_ref_known(v___x_4763_, 7);
lean_dec(v_pre_4661_);
lean_dec_ref_known(v_name_4657_, 2);
v_a_4803_ = lean_ctor_get(v___x_4775_, 0);
lean_inc(v_a_4803_);
lean_dec_ref_known(v___x_4775_, 1);
v_a_4746_ = v_a_4803_;
goto v___jp_4745_;
}
}
else
{
lean_object* v_a_4804_; 
lean_dec(v___x_4768_);
lean_dec_ref_known(v___x_4763_, 7);
lean_dec(v___x_4743_);
lean_dec(v_pre_4661_);
lean_dec_ref_known(v_name_4657_, 2);
v_a_4804_ = lean_ctor_get(v___x_4769_, 0);
lean_inc(v_a_4804_);
lean_dec_ref_known(v___x_4769_, 1);
v_a_4746_ = v_a_4804_;
goto v___jp_4745_;
}
v___jp_4745_:
{
uint8_t v___x_4747_; 
v___x_4747_ = l_Lean_Exception_isInterrupt(v_a_4746_);
if (v___x_4747_ == 0)
{
uint8_t v___x_4748_; 
lean_inc_ref(v_a_4746_);
v___x_4748_ = l_Lean_Exception_isRuntime(v_a_4746_);
if (v___x_4748_ == 0)
{
lean_object* v___x_4749_; lean_object* v___x_4750_; 
lean_dec_ref(v_a_4746_);
v___x_4749_ = lean_box(v___x_4744_);
v___x_4750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4750_, 0, v___x_4749_);
return v___x_4750_;
}
else
{
lean_object* v___x_4751_; 
v___x_4751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4751_, 0, v_a_4746_);
return v___x_4751_;
}
}
else
{
lean_object* v___x_4752_; 
v___x_4752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4752_, 0, v_a_4746_);
return v___x_4752_;
}
}
}
v___jp_4670_:
{
uint8_t v___x_4672_; 
v___x_4672_ = l_Lean_Exception_isInterrupt(v_a_4671_);
if (v___x_4672_ == 0)
{
uint8_t v___x_4673_; 
lean_inc_ref(v_a_4671_);
v___x_4673_ = l_Lean_Exception_isRuntime(v_a_4671_);
if (v___x_4673_ == 0)
{
lean_object* v___x_4674_; lean_object* v___x_4675_; 
lean_dec_ref(v_a_4671_);
v___x_4674_ = lean_box(v___x_4669_);
v___x_4675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4675_, 0, v___x_4674_);
return v___x_4675_;
}
else
{
lean_object* v___x_4676_; 
v___x_4676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4676_, 0, v_a_4671_);
return v___x_4676_;
}
}
else
{
lean_object* v___x_4677_; 
v___x_4677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4677_, 0, v_a_4671_);
return v___x_4677_;
}
}
}
}
else
{
uint8_t v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; 
lean_dec(v_name_4657_);
lean_dec(v___x_4656_);
v___x_4805_ = 0;
v___x_4806_ = lean_box(v___x_4805_);
v___x_4807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4807_, 0, v___x_4806_);
return v___x_4807_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2____boxed(lean_object* v___x_4808_, lean_object* v_name_4809_, lean_object* v___y_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_){
_start:
{
lean_object* v_res_4813_; 
v_res_4813_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(v___x_4808_, v_name_4809_, v___y_4810_, v___y_4811_);
lean_dec(v___y_4811_);
lean_dec_ref(v___y_4810_);
return v_res_4813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_4817_; lean_object* v___x_4818_; 
v___f_4817_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_));
v___x_4818_ = l_Lean_registerReservedNameAction(v___f_4817_);
return v___x_4818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2____boxed(lean_object* v_a_4819_){
_start:
{
lean_object* v_res_4820_; 
v_res_4820_ = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_();
return v_res_4820_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_4821_){
_start:
{
lean_object* v___x_4822_; 
v___x_4822_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
return v___x_4822_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0___redArg(){
_start:
{
lean_object* v___x_4824_; 
v___x_4824_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
return v___x_4824_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v___dummy_4825_){
_start:
{
lean_object* v_res_4826_; 
v_res_4826_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0___redArg();
return v_res_4826_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_4827_){
_start:
{
lean_object* v___x_4828_; 
v___x_4828_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
return v___x_4828_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkHCongrWithArityForConst_x3f_spec__0(lean_object* v_msg_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_){
_start:
{
lean_object* v___f_4835_; lean_object* v___x_1795__overap_4836_; lean_object* v___x_4837_; 
v___f_4835_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go_spec__0___closed__0));
v___x_1795__overap_4836_ = lean_panic_fn_borrowed(v___f_4835_, v_msg_4829_);
lean_inc(v___y_4833_);
lean_inc_ref(v___y_4832_);
lean_inc(v___y_4831_);
lean_inc_ref(v___y_4830_);
v___x_4837_ = lean_apply_5(v___x_1795__overap_4836_, v___y_4830_, v___y_4831_, v___y_4832_, v___y_4833_, lean_box(0));
return v___x_4837_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_mkHCongrWithArityForConst_x3f_spec__0___boxed(lean_object* v_msg_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_, lean_object* v___y_4843_){
_start:
{
lean_object* v_res_4844_; 
v_res_4844_ = l_panic___at___00Lean_Meta_mkHCongrWithArityForConst_x3f_spec__0(v_msg_4838_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_);
lean_dec(v___y_4842_);
lean_dec_ref(v___y_4841_);
lean_dec(v___y_4840_);
lean_dec_ref(v___y_4839_);
return v_res_4844_;
}
}
static lean_object* _init_l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; 
v___x_4846_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__2));
v___x_4847_ = lean_unsigned_to_nat(8u);
v___x_4848_ = lean_unsigned_to_nat(461u);
v___x_4849_ = ((lean_object*)(l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___closed__0));
v___x_4850_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__0));
v___x_4851_ = l_mkPanicMessageWithDecl(v___x_4850_, v___x_4849_, v___x_4848_, v___x_4847_, v___x_4846_);
return v___x_4851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0(lean_object* v_thmName_4852_, lean_object* v_levels_4853_, lean_object* v_____r_4854_, lean_object* v___y_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_){
_start:
{
lean_object* v___x_4860_; lean_object* v___x_4861_; 
lean_inc(v_thmName_4852_);
v___x_4860_ = l_Lean_mkConst(v_thmName_4852_, v_levels_4853_);
lean_inc(v___y_4858_);
lean_inc_ref(v___y_4857_);
lean_inc(v___y_4856_);
lean_inc_ref(v___y_4855_);
lean_inc_ref(v___x_4860_);
v___x_4861_ = lean_infer_type(v___x_4860_, v___y_4855_, v___y_4856_, v___y_4857_, v___y_4858_);
if (lean_obj_tag(v___x_4861_) == 0)
{
lean_object* v_a_4862_; lean_object* v___x_4864_; uint8_t v_isShared_4865_; uint8_t v_isSharedCheck_4905_; 
v_a_4862_ = lean_ctor_get(v___x_4861_, 0);
v_isSharedCheck_4905_ = !lean_is_exclusive(v___x_4861_);
if (v_isSharedCheck_4905_ == 0)
{
v___x_4864_ = v___x_4861_;
v_isShared_4865_ = v_isSharedCheck_4905_;
goto v_resetjp_4863_;
}
else
{
lean_inc(v_a_4862_);
lean_dec(v___x_4861_);
v___x_4864_ = lean_box(0);
v_isShared_4865_ = v_isSharedCheck_4905_;
goto v_resetjp_4863_;
}
v_resetjp_4863_:
{
lean_object* v___x_4866_; lean_object* v_env_4867_; lean_object* v___x_4868_; lean_object* v_toEnvExtension_4869_; lean_object* v_asyncMode_4870_; uint8_t v___x_4871_; lean_object* v___x_4872_; 
v___x_4866_ = lean_st_ref_get(v___y_4858_);
v_env_4867_ = lean_ctor_get(v___x_4866_, 0);
lean_inc_ref(v_env_4867_);
lean_dec(v___x_4866_);
v___x_4868_ = l_Lean_Meta_congrKindsExt;
v_toEnvExtension_4869_ = lean_ctor_get(v___x_4868_, 0);
v_asyncMode_4870_ = lean_ctor_get(v_toEnvExtension_4869_, 2);
v___x_4871_ = 0;
v___x_4872_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_4868_, v_env_4867_, v_thmName_4852_, v_asyncMode_4870_, v___x_4871_);
if (lean_obj_tag(v___x_4872_) == 1)
{
lean_object* v_val_4873_; lean_object* v___x_4875_; uint8_t v_isShared_4876_; uint8_t v_isSharedCheck_4885_; 
v_val_4873_ = lean_ctor_get(v___x_4872_, 0);
v_isSharedCheck_4885_ = !lean_is_exclusive(v___x_4872_);
if (v_isSharedCheck_4885_ == 0)
{
v___x_4875_ = v___x_4872_;
v_isShared_4876_ = v_isSharedCheck_4885_;
goto v_resetjp_4874_;
}
else
{
lean_inc(v_val_4873_);
lean_dec(v___x_4872_);
v___x_4875_ = lean_box(0);
v_isShared_4876_ = v_isSharedCheck_4885_;
goto v_resetjp_4874_;
}
v_resetjp_4874_:
{
lean_object* v___x_4877_; lean_object* v___x_4879_; 
v___x_4877_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4877_, 0, v_a_4862_);
lean_ctor_set(v___x_4877_, 1, v___x_4860_);
lean_ctor_set(v___x_4877_, 2, v_val_4873_);
if (v_isShared_4876_ == 0)
{
lean_ctor_set(v___x_4875_, 0, v___x_4877_);
v___x_4879_ = v___x_4875_;
goto v_reusejp_4878_;
}
else
{
lean_object* v_reuseFailAlloc_4884_; 
v_reuseFailAlloc_4884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4884_, 0, v___x_4877_);
v___x_4879_ = v_reuseFailAlloc_4884_;
goto v_reusejp_4878_;
}
v_reusejp_4878_:
{
lean_object* v___x_4880_; lean_object* v___x_4882_; 
v___x_4880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4880_, 0, v___x_4879_);
if (v_isShared_4865_ == 0)
{
lean_ctor_set(v___x_4864_, 0, v___x_4880_);
v___x_4882_ = v___x_4864_;
goto v_reusejp_4881_;
}
else
{
lean_object* v_reuseFailAlloc_4883_; 
v_reuseFailAlloc_4883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4883_, 0, v___x_4880_);
v___x_4882_ = v_reuseFailAlloc_4883_;
goto v_reusejp_4881_;
}
v_reusejp_4881_:
{
return v___x_4882_;
}
}
}
}
else
{
lean_object* v___x_4886_; lean_object* v___x_4887_; 
lean_dec(v___x_4872_);
lean_del_object(v___x_4864_);
lean_dec(v_a_4862_);
lean_dec_ref(v___x_4860_);
v___x_4886_ = lean_obj_once(&l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___closed__1, &l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___closed__1_once, _init_l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___closed__1);
v___x_4887_ = l_panic___at___00Lean_Meta_mkHCongrWithArityForConst_x3f_spec__0(v___x_4886_, v___y_4855_, v___y_4856_, v___y_4857_, v___y_4858_);
if (lean_obj_tag(v___x_4887_) == 0)
{
lean_object* v_a_4888_; lean_object* v___x_4890_; uint8_t v_isShared_4891_; uint8_t v_isSharedCheck_4896_; 
v_a_4888_ = lean_ctor_get(v___x_4887_, 0);
v_isSharedCheck_4896_ = !lean_is_exclusive(v___x_4887_);
if (v_isSharedCheck_4896_ == 0)
{
v___x_4890_ = v___x_4887_;
v_isShared_4891_ = v_isSharedCheck_4896_;
goto v_resetjp_4889_;
}
else
{
lean_inc(v_a_4888_);
lean_dec(v___x_4887_);
v___x_4890_ = lean_box(0);
v_isShared_4891_ = v_isSharedCheck_4896_;
goto v_resetjp_4889_;
}
v_resetjp_4889_:
{
lean_object* v___x_4892_; lean_object* v___x_4894_; 
v___x_4892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4892_, 0, v_a_4888_);
if (v_isShared_4891_ == 0)
{
lean_ctor_set(v___x_4890_, 0, v___x_4892_);
v___x_4894_ = v___x_4890_;
goto v_reusejp_4893_;
}
else
{
lean_object* v_reuseFailAlloc_4895_; 
v_reuseFailAlloc_4895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4895_, 0, v___x_4892_);
v___x_4894_ = v_reuseFailAlloc_4895_;
goto v_reusejp_4893_;
}
v_reusejp_4893_:
{
return v___x_4894_;
}
}
}
else
{
lean_object* v_a_4897_; lean_object* v___x_4899_; uint8_t v_isShared_4900_; uint8_t v_isSharedCheck_4904_; 
v_a_4897_ = lean_ctor_get(v___x_4887_, 0);
v_isSharedCheck_4904_ = !lean_is_exclusive(v___x_4887_);
if (v_isSharedCheck_4904_ == 0)
{
v___x_4899_ = v___x_4887_;
v_isShared_4900_ = v_isSharedCheck_4904_;
goto v_resetjp_4898_;
}
else
{
lean_inc(v_a_4897_);
lean_dec(v___x_4887_);
v___x_4899_ = lean_box(0);
v_isShared_4900_ = v_isSharedCheck_4904_;
goto v_resetjp_4898_;
}
v_resetjp_4898_:
{
lean_object* v___x_4902_; 
if (v_isShared_4900_ == 0)
{
v___x_4902_ = v___x_4899_;
goto v_reusejp_4901_;
}
else
{
lean_object* v_reuseFailAlloc_4903_; 
v_reuseFailAlloc_4903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4903_, 0, v_a_4897_);
v___x_4902_ = v_reuseFailAlloc_4903_;
goto v_reusejp_4901_;
}
v_reusejp_4901_:
{
return v___x_4902_;
}
}
}
}
}
}
else
{
lean_object* v_a_4906_; lean_object* v___x_4908_; uint8_t v_isShared_4909_; uint8_t v_isSharedCheck_4913_; 
lean_dec_ref(v___x_4860_);
lean_dec(v_thmName_4852_);
v_a_4906_ = lean_ctor_get(v___x_4861_, 0);
v_isSharedCheck_4913_ = !lean_is_exclusive(v___x_4861_);
if (v_isSharedCheck_4913_ == 0)
{
v___x_4908_ = v___x_4861_;
v_isShared_4909_ = v_isSharedCheck_4913_;
goto v_resetjp_4907_;
}
else
{
lean_inc(v_a_4906_);
lean_dec(v___x_4861_);
v___x_4908_ = lean_box(0);
v_isShared_4909_ = v_isSharedCheck_4913_;
goto v_resetjp_4907_;
}
v_resetjp_4907_:
{
lean_object* v___x_4911_; 
if (v_isShared_4909_ == 0)
{
v___x_4911_ = v___x_4908_;
goto v_reusejp_4910_;
}
else
{
lean_object* v_reuseFailAlloc_4912_; 
v_reuseFailAlloc_4912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4912_, 0, v_a_4906_);
v___x_4911_ = v_reuseFailAlloc_4912_;
goto v_reusejp_4910_;
}
v_reusejp_4910_:
{
return v___x_4911_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0___boxed(lean_object* v_thmName_4914_, lean_object* v_levels_4915_, lean_object* v_____r_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_, lean_object* v___y_4920_, lean_object* v___y_4921_){
_start:
{
lean_object* v_res_4922_; 
v_res_4922_ = l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0(v_thmName_4914_, v_levels_4915_, v_____r_4916_, v___y_4917_, v___y_4918_, v___y_4919_, v___y_4920_);
lean_dec(v___y_4920_);
lean_dec_ref(v___y_4919_);
lean_dec(v___y_4918_);
lean_dec_ref(v___y_4917_);
return v_res_4922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArityForConst_x3f(lean_object* v_declName_4923_, lean_object* v_levels_4924_, lean_object* v_numArgs_4925_, lean_object* v_a_4926_, lean_object* v_a_4927_, lean_object* v_a_4928_, lean_object* v_a_4929_){
_start:
{
lean_object* v_a_4932_; lean_object* v___y_4940_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v_suffix_4953_; lean_object* v_thmName_4954_; lean_object* v___x_4955_; lean_object* v_env_4956_; uint8_t v___x_4957_; 
v___x_4951_ = ((lean_object*)(l_Lean_Meta_hcongrThmSuffixBasePrefix___closed__0));
v___x_4952_ = l_Nat_reprFast(v_numArgs_4925_);
v_suffix_4953_ = lean_string_append(v___x_4951_, v___x_4952_);
lean_dec_ref(v___x_4952_);
v_thmName_4954_ = l_Lean_Name_str___override(v_declName_4923_, v_suffix_4953_);
v___x_4955_ = lean_st_ref_get(v_a_4929_);
v_env_4956_ = lean_ctor_get(v___x_4955_, 0);
lean_inc_ref(v_env_4956_);
lean_dec(v___x_4955_);
v___x_4957_ = l_Lean_Environment_containsOnBranch(v_env_4956_, v_thmName_4954_);
lean_dec_ref(v_env_4956_);
if (v___x_4957_ == 0)
{
lean_object* v___x_4958_; 
lean_inc(v_thmName_4954_);
v___x_4958_ = l_Lean_executeReservedNameAction(v_thmName_4954_, v_a_4928_, v_a_4929_);
if (lean_obj_tag(v___x_4958_) == 0)
{
lean_object* v___x_4959_; lean_object* v___x_4960_; 
lean_dec_ref_known(v___x_4958_, 1);
v___x_4959_ = lean_box(0);
v___x_4960_ = l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0(v_thmName_4954_, v_levels_4924_, v___x_4959_, v_a_4926_, v_a_4927_, v_a_4928_, v_a_4929_);
v___y_4940_ = v___x_4960_;
goto v___jp_4939_;
}
else
{
lean_object* v_a_4961_; 
lean_dec(v_thmName_4954_);
lean_dec(v_levels_4924_);
v_a_4961_ = lean_ctor_get(v___x_4958_, 0);
lean_inc(v_a_4961_);
lean_dec_ref_known(v___x_4958_, 1);
v_a_4932_ = v_a_4961_;
goto v___jp_4931_;
}
}
else
{
lean_object* v___x_4962_; lean_object* v___x_4963_; 
v___x_4962_ = lean_box(0);
v___x_4963_ = l_Lean_Meta_mkHCongrWithArityForConst_x3f___lam__0(v_thmName_4954_, v_levels_4924_, v___x_4962_, v_a_4926_, v_a_4927_, v_a_4928_, v_a_4929_);
v___y_4940_ = v___x_4963_;
goto v___jp_4939_;
}
v___jp_4931_:
{
uint8_t v___x_4933_; 
v___x_4933_ = l_Lean_Exception_isInterrupt(v_a_4932_);
if (v___x_4933_ == 0)
{
uint8_t v___x_4934_; 
lean_inc_ref(v_a_4932_);
v___x_4934_ = l_Lean_Exception_isRuntime(v_a_4932_);
if (v___x_4934_ == 0)
{
lean_object* v___x_4935_; lean_object* v___x_4936_; 
lean_dec_ref(v_a_4932_);
v___x_4935_ = lean_box(0);
v___x_4936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4936_, 0, v___x_4935_);
return v___x_4936_;
}
else
{
lean_object* v___x_4937_; 
v___x_4937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4937_, 0, v_a_4932_);
return v___x_4937_;
}
}
else
{
lean_object* v___x_4938_; 
v___x_4938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4938_, 0, v_a_4932_);
return v___x_4938_;
}
}
v___jp_4939_:
{
if (lean_obj_tag(v___y_4940_) == 0)
{
lean_object* v_a_4941_; lean_object* v___x_4943_; uint8_t v_isShared_4944_; uint8_t v_isSharedCheck_4949_; 
v_a_4941_ = lean_ctor_get(v___y_4940_, 0);
v_isSharedCheck_4949_ = !lean_is_exclusive(v___y_4940_);
if (v_isSharedCheck_4949_ == 0)
{
v___x_4943_ = v___y_4940_;
v_isShared_4944_ = v_isSharedCheck_4949_;
goto v_resetjp_4942_;
}
else
{
lean_inc(v_a_4941_);
lean_dec(v___y_4940_);
v___x_4943_ = lean_box(0);
v_isShared_4944_ = v_isSharedCheck_4949_;
goto v_resetjp_4942_;
}
v_resetjp_4942_:
{
lean_object* v_a_4945_; lean_object* v___x_4947_; 
v_a_4945_ = lean_ctor_get(v_a_4941_, 0);
lean_inc(v_a_4945_);
lean_dec(v_a_4941_);
if (v_isShared_4944_ == 0)
{
lean_ctor_set(v___x_4943_, 0, v_a_4945_);
v___x_4947_ = v___x_4943_;
goto v_reusejp_4946_;
}
else
{
lean_object* v_reuseFailAlloc_4948_; 
v_reuseFailAlloc_4948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4948_, 0, v_a_4945_);
v___x_4947_ = v_reuseFailAlloc_4948_;
goto v_reusejp_4946_;
}
v_reusejp_4946_:
{
return v___x_4947_;
}
}
}
else
{
lean_object* v_a_4950_; 
v_a_4950_ = lean_ctor_get(v___y_4940_, 0);
lean_inc(v_a_4950_);
lean_dec_ref_known(v___y_4940_, 1);
v_a_4932_ = v_a_4950_;
goto v___jp_4931_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHCongrWithArityForConst_x3f___boxed(lean_object* v_declName_4964_, lean_object* v_levels_4965_, lean_object* v_numArgs_4966_, lean_object* v_a_4967_, lean_object* v_a_4968_, lean_object* v_a_4969_, lean_object* v_a_4970_, lean_object* v_a_4971_){
_start:
{
lean_object* v_res_4972_; 
v_res_4972_ = l_Lean_Meta_mkHCongrWithArityForConst_x3f(v_declName_4964_, v_levels_4965_, v_numArgs_4966_, v_a_4967_, v_a_4968_, v_a_4969_, v_a_4970_);
lean_dec(v_a_4970_);
lean_dec_ref(v_a_4969_);
lean_dec(v_a_4968_);
lean_dec_ref(v_a_4967_);
return v_res_4972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___lam__0(lean_object* v_____r_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_){
_start:
{
lean_object* v___x_4981_; lean_object* v___x_4982_; 
v___x_4981_ = ((lean_object*)(l_Lean_Meta_mkCongrSimpForConst_x3f___lam__0___closed__0));
v___x_4982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4982_, 0, v___x_4981_);
return v___x_4982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___lam__0___boxed(lean_object* v_____r_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_){
_start:
{
lean_object* v_res_4989_; 
v_res_4989_ = l_Lean_Meta_mkCongrSimpForConst_x3f___lam__0(v_____r_4983_, v___y_4984_, v___y_4985_, v___y_4986_, v___y_4987_);
lean_dec(v___y_4987_);
lean_dec_ref(v___y_4986_);
lean_dec(v___y_4985_);
lean_dec_ref(v___y_4984_);
return v_res_4989_;
}
}
static lean_object* _init_l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___closed__1(void){
_start:
{
lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; 
v___x_4991_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__2));
v___x_4992_ = lean_unsigned_to_nat(8u);
v___x_4993_ = lean_unsigned_to_nat(478u);
v___x_4994_ = ((lean_object*)(l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___closed__0));
v___x_4995_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_mkCongrSimpCore_x3f_mkProof_go___closed__0));
v___x_4996_ = l_mkPanicMessageWithDecl(v___x_4995_, v___x_4994_, v___x_4993_, v___x_4992_, v___x_4991_);
return v___x_4996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1(lean_object* v_thmName_4997_, lean_object* v_levels_4998_, lean_object* v_____r_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_){
_start:
{
lean_object* v___x_5005_; lean_object* v___x_5006_; 
lean_inc(v_thmName_4997_);
v___x_5005_ = l_Lean_mkConst(v_thmName_4997_, v_levels_4998_);
lean_inc(v___y_5003_);
lean_inc_ref(v___y_5002_);
lean_inc(v___y_5001_);
lean_inc_ref(v___y_5000_);
lean_inc_ref(v___x_5005_);
v___x_5006_ = lean_infer_type(v___x_5005_, v___y_5000_, v___y_5001_, v___y_5002_, v___y_5003_);
if (lean_obj_tag(v___x_5006_) == 0)
{
lean_object* v_a_5007_; lean_object* v___x_5009_; uint8_t v_isShared_5010_; uint8_t v_isSharedCheck_5050_; 
v_a_5007_ = lean_ctor_get(v___x_5006_, 0);
v_isSharedCheck_5050_ = !lean_is_exclusive(v___x_5006_);
if (v_isSharedCheck_5050_ == 0)
{
v___x_5009_ = v___x_5006_;
v_isShared_5010_ = v_isSharedCheck_5050_;
goto v_resetjp_5008_;
}
else
{
lean_inc(v_a_5007_);
lean_dec(v___x_5006_);
v___x_5009_ = lean_box(0);
v_isShared_5010_ = v_isSharedCheck_5050_;
goto v_resetjp_5008_;
}
v_resetjp_5008_:
{
lean_object* v___x_5011_; lean_object* v_env_5012_; lean_object* v___x_5013_; lean_object* v_toEnvExtension_5014_; lean_object* v_asyncMode_5015_; uint8_t v___x_5016_; lean_object* v___x_5017_; 
v___x_5011_ = lean_st_ref_get(v___y_5003_);
v_env_5012_ = lean_ctor_get(v___x_5011_, 0);
lean_inc_ref(v_env_5012_);
lean_dec(v___x_5011_);
v___x_5013_ = l_Lean_Meta_congrKindsExt;
v_toEnvExtension_5014_ = lean_ctor_get(v___x_5013_, 0);
v_asyncMode_5015_ = lean_ctor_get(v_toEnvExtension_5014_, 2);
v___x_5016_ = 0;
v___x_5017_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_5013_, v_env_5012_, v_thmName_4997_, v_asyncMode_5015_, v___x_5016_);
if (lean_obj_tag(v___x_5017_) == 1)
{
lean_object* v_val_5018_; lean_object* v___x_5020_; uint8_t v_isShared_5021_; uint8_t v_isSharedCheck_5030_; 
v_val_5018_ = lean_ctor_get(v___x_5017_, 0);
v_isSharedCheck_5030_ = !lean_is_exclusive(v___x_5017_);
if (v_isSharedCheck_5030_ == 0)
{
v___x_5020_ = v___x_5017_;
v_isShared_5021_ = v_isSharedCheck_5030_;
goto v_resetjp_5019_;
}
else
{
lean_inc(v_val_5018_);
lean_dec(v___x_5017_);
v___x_5020_ = lean_box(0);
v_isShared_5021_ = v_isSharedCheck_5030_;
goto v_resetjp_5019_;
}
v_resetjp_5019_:
{
lean_object* v___x_5022_; lean_object* v___x_5024_; 
v___x_5022_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5022_, 0, v_a_5007_);
lean_ctor_set(v___x_5022_, 1, v___x_5005_);
lean_ctor_set(v___x_5022_, 2, v_val_5018_);
if (v_isShared_5021_ == 0)
{
lean_ctor_set(v___x_5020_, 0, v___x_5022_);
v___x_5024_ = v___x_5020_;
goto v_reusejp_5023_;
}
else
{
lean_object* v_reuseFailAlloc_5029_; 
v_reuseFailAlloc_5029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5029_, 0, v___x_5022_);
v___x_5024_ = v_reuseFailAlloc_5029_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
lean_object* v___x_5025_; lean_object* v___x_5027_; 
v___x_5025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5025_, 0, v___x_5024_);
if (v_isShared_5010_ == 0)
{
lean_ctor_set(v___x_5009_, 0, v___x_5025_);
v___x_5027_ = v___x_5009_;
goto v_reusejp_5026_;
}
else
{
lean_object* v_reuseFailAlloc_5028_; 
v_reuseFailAlloc_5028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5028_, 0, v___x_5025_);
v___x_5027_ = v_reuseFailAlloc_5028_;
goto v_reusejp_5026_;
}
v_reusejp_5026_:
{
return v___x_5027_;
}
}
}
}
else
{
lean_object* v___x_5031_; lean_object* v___x_5032_; 
lean_dec(v___x_5017_);
lean_del_object(v___x_5009_);
lean_dec(v_a_5007_);
lean_dec_ref(v___x_5005_);
v___x_5031_ = lean_obj_once(&l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___closed__1, &l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___closed__1_once, _init_l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___closed__1);
v___x_5032_ = l_panic___at___00Lean_Meta_mkHCongrWithArityForConst_x3f_spec__0(v___x_5031_, v___y_5000_, v___y_5001_, v___y_5002_, v___y_5003_);
if (lean_obj_tag(v___x_5032_) == 0)
{
lean_object* v_a_5033_; lean_object* v___x_5035_; uint8_t v_isShared_5036_; uint8_t v_isSharedCheck_5041_; 
v_a_5033_ = lean_ctor_get(v___x_5032_, 0);
v_isSharedCheck_5041_ = !lean_is_exclusive(v___x_5032_);
if (v_isSharedCheck_5041_ == 0)
{
v___x_5035_ = v___x_5032_;
v_isShared_5036_ = v_isSharedCheck_5041_;
goto v_resetjp_5034_;
}
else
{
lean_inc(v_a_5033_);
lean_dec(v___x_5032_);
v___x_5035_ = lean_box(0);
v_isShared_5036_ = v_isSharedCheck_5041_;
goto v_resetjp_5034_;
}
v_resetjp_5034_:
{
lean_object* v___x_5037_; lean_object* v___x_5039_; 
v___x_5037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5037_, 0, v_a_5033_);
if (v_isShared_5036_ == 0)
{
lean_ctor_set(v___x_5035_, 0, v___x_5037_);
v___x_5039_ = v___x_5035_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v___x_5037_);
v___x_5039_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
return v___x_5039_;
}
}
}
else
{
lean_object* v_a_5042_; lean_object* v___x_5044_; uint8_t v_isShared_5045_; uint8_t v_isSharedCheck_5049_; 
v_a_5042_ = lean_ctor_get(v___x_5032_, 0);
v_isSharedCheck_5049_ = !lean_is_exclusive(v___x_5032_);
if (v_isSharedCheck_5049_ == 0)
{
v___x_5044_ = v___x_5032_;
v_isShared_5045_ = v_isSharedCheck_5049_;
goto v_resetjp_5043_;
}
else
{
lean_inc(v_a_5042_);
lean_dec(v___x_5032_);
v___x_5044_ = lean_box(0);
v_isShared_5045_ = v_isSharedCheck_5049_;
goto v_resetjp_5043_;
}
v_resetjp_5043_:
{
lean_object* v___x_5047_; 
if (v_isShared_5045_ == 0)
{
v___x_5047_ = v___x_5044_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5048_; 
v_reuseFailAlloc_5048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5048_, 0, v_a_5042_);
v___x_5047_ = v_reuseFailAlloc_5048_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
return v___x_5047_;
}
}
}
}
}
}
else
{
lean_object* v_a_5051_; lean_object* v___x_5053_; uint8_t v_isShared_5054_; uint8_t v_isSharedCheck_5058_; 
lean_dec_ref(v___x_5005_);
lean_dec(v_thmName_4997_);
v_a_5051_ = lean_ctor_get(v___x_5006_, 0);
v_isSharedCheck_5058_ = !lean_is_exclusive(v___x_5006_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5053_ = v___x_5006_;
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
else
{
lean_inc(v_a_5051_);
lean_dec(v___x_5006_);
v___x_5053_ = lean_box(0);
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
v_resetjp_5052_:
{
lean_object* v___x_5056_; 
if (v_isShared_5054_ == 0)
{
v___x_5056_ = v___x_5053_;
goto v_reusejp_5055_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v_a_5051_);
v___x_5056_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5055_;
}
v_reusejp_5055_:
{
return v___x_5056_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1___boxed(lean_object* v_thmName_5059_, lean_object* v_levels_5060_, lean_object* v_____r_5061_, lean_object* v___y_5062_, lean_object* v___y_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_){
_start:
{
lean_object* v_res_5067_; 
v_res_5067_ = l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1(v_thmName_5059_, v_levels_5060_, v_____r_5061_, v___y_5062_, v___y_5063_, v___y_5064_, v___y_5065_);
lean_dec(v___y_5065_);
lean_dec_ref(v___y_5064_);
lean_dec(v___y_5063_);
lean_dec_ref(v___y_5062_);
return v_res_5067_;
}
}
static lean_object* _init_l_Lean_Meta_mkCongrSimpForConst_x3f___closed__1(void){
_start:
{
lean_object* v___x_5069_; lean_object* v___x_5070_; 
v___x_5069_ = ((lean_object*)(l_Lean_Meta_mkCongrSimpForConst_x3f___closed__0));
v___x_5070_ = l_Lean_stringToMessageData(v___x_5069_);
return v___x_5070_;
}
}
static lean_object* _init_l_Lean_Meta_mkCongrSimpForConst_x3f___closed__3(void){
_start:
{
lean_object* v___x_5072_; lean_object* v___x_5073_; 
v___x_5072_ = ((lean_object*)(l_Lean_Meta_mkCongrSimpForConst_x3f___closed__2));
v___x_5073_ = l_Lean_stringToMessageData(v___x_5072_);
return v___x_5073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f(lean_object* v_declName_5074_, lean_object* v_levels_5075_, lean_object* v_a_5076_, lean_object* v_a_5077_, lean_object* v_a_5078_, lean_object* v_a_5079_){
_start:
{
lean_object* v_a_5082_; lean_object* v___y_5100_; lean_object* v___x_5105_; lean_object* v_thmName_5106_; lean_object* v_a_5108_; lean_object* v___y_5139_; lean_object* v___x_5142_; lean_object* v_env_5143_; uint8_t v___x_5144_; 
v___x_5105_ = ((lean_object*)(l_Lean_Meta_congrSimpSuffix___closed__0));
v_thmName_5106_ = l_Lean_Name_str___override(v_declName_5074_, v___x_5105_);
v___x_5142_ = lean_st_ref_get(v_a_5079_);
v_env_5143_ = lean_ctor_get(v___x_5142_, 0);
lean_inc_ref(v_env_5143_);
lean_dec(v___x_5142_);
v___x_5144_ = l_Lean_Environment_containsOnBranch(v_env_5143_, v_thmName_5106_);
lean_dec_ref(v_env_5143_);
if (v___x_5144_ == 0)
{
lean_object* v___x_5145_; 
lean_inc(v_thmName_5106_);
v___x_5145_ = l_Lean_executeReservedNameAction(v_thmName_5106_, v_a_5078_, v_a_5079_);
if (lean_obj_tag(v___x_5145_) == 0)
{
lean_object* v___x_5146_; lean_object* v___x_5147_; 
lean_dec_ref_known(v___x_5145_, 1);
v___x_5146_ = lean_box(0);
lean_inc(v_thmName_5106_);
v___x_5147_ = l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1(v_thmName_5106_, v_levels_5075_, v___x_5146_, v_a_5076_, v_a_5077_, v_a_5078_, v_a_5079_);
v___y_5139_ = v___x_5147_;
goto v___jp_5138_;
}
else
{
lean_object* v_a_5148_; 
lean_dec(v_levels_5075_);
v_a_5148_ = lean_ctor_get(v___x_5145_, 0);
lean_inc(v_a_5148_);
lean_dec_ref_known(v___x_5145_, 1);
v_a_5108_ = v_a_5148_;
goto v___jp_5107_;
}
}
else
{
lean_object* v___x_5149_; lean_object* v___x_5150_; 
v___x_5149_ = lean_box(0);
lean_inc(v_thmName_5106_);
v___x_5150_ = l_Lean_Meta_mkCongrSimpForConst_x3f___lam__1(v_thmName_5106_, v_levels_5075_, v___x_5149_, v_a_5076_, v_a_5077_, v_a_5078_, v_a_5079_);
v___y_5139_ = v___x_5150_;
goto v___jp_5138_;
}
v___jp_5081_:
{
if (lean_obj_tag(v_a_5082_) == 0)
{
lean_object* v_a_5083_; lean_object* v___x_5085_; uint8_t v_isShared_5086_; uint8_t v_isSharedCheck_5090_; 
v_a_5083_ = lean_ctor_get(v_a_5082_, 0);
v_isSharedCheck_5090_ = !lean_is_exclusive(v_a_5082_);
if (v_isSharedCheck_5090_ == 0)
{
v___x_5085_ = v_a_5082_;
v_isShared_5086_ = v_isSharedCheck_5090_;
goto v_resetjp_5084_;
}
else
{
lean_inc(v_a_5083_);
lean_dec(v_a_5082_);
v___x_5085_ = lean_box(0);
v_isShared_5086_ = v_isSharedCheck_5090_;
goto v_resetjp_5084_;
}
v_resetjp_5084_:
{
lean_object* v___x_5088_; 
if (v_isShared_5086_ == 0)
{
v___x_5088_ = v___x_5085_;
goto v_reusejp_5087_;
}
else
{
lean_object* v_reuseFailAlloc_5089_; 
v_reuseFailAlloc_5089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5089_, 0, v_a_5083_);
v___x_5088_ = v_reuseFailAlloc_5089_;
goto v_reusejp_5087_;
}
v_reusejp_5087_:
{
return v___x_5088_;
}
}
}
else
{
lean_object* v_a_5091_; lean_object* v___x_5093_; uint8_t v_isShared_5094_; uint8_t v_isSharedCheck_5098_; 
v_a_5091_ = lean_ctor_get(v_a_5082_, 0);
v_isSharedCheck_5098_ = !lean_is_exclusive(v_a_5082_);
if (v_isSharedCheck_5098_ == 0)
{
v___x_5093_ = v_a_5082_;
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
else
{
lean_inc(v_a_5091_);
lean_dec(v_a_5082_);
v___x_5093_ = lean_box(0);
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
v_resetjp_5092_:
{
lean_object* v___x_5096_; 
if (v_isShared_5094_ == 0)
{
lean_ctor_set_tag(v___x_5093_, 0);
v___x_5096_ = v___x_5093_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5097_; 
v_reuseFailAlloc_5097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5097_, 0, v_a_5091_);
v___x_5096_ = v_reuseFailAlloc_5097_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
return v___x_5096_;
}
}
}
}
v___jp_5099_:
{
lean_object* v_a_5101_; 
v_a_5101_ = lean_ctor_get(v___y_5100_, 0);
lean_inc(v_a_5101_);
lean_dec_ref(v___y_5100_);
v_a_5082_ = v_a_5101_;
goto v___jp_5081_;
}
v___jp_5102_:
{
lean_object* v___x_5103_; lean_object* v___x_5104_; 
v___x_5103_ = lean_box(0);
v___x_5104_ = l_Lean_Meta_mkCongrSimpForConst_x3f___lam__0(v___x_5103_, v_a_5076_, v_a_5077_, v_a_5078_, v_a_5079_);
v___y_5100_ = v___x_5104_;
goto v___jp_5099_;
}
v___jp_5107_:
{
uint8_t v___x_5109_; 
v___x_5109_ = l_Lean_Exception_isInterrupt(v_a_5108_);
if (v___x_5109_ == 0)
{
uint8_t v___x_5110_; 
lean_inc_ref(v_a_5108_);
v___x_5110_ = l_Lean_Exception_isRuntime(v_a_5108_);
if (v___x_5110_ == 0)
{
lean_object* v_toCold_5111_; lean_object* v_options_5112_; uint8_t v_hasTrace_5113_; 
v_toCold_5111_ = lean_ctor_get(v_a_5078_, 0);
v_options_5112_ = lean_ctor_get(v_toCold_5111_, 2);
v_hasTrace_5113_ = lean_ctor_get_uint8(v_options_5112_, sizeof(void*)*1);
if (v_hasTrace_5113_ == 0)
{
lean_dec_ref(v_a_5108_);
lean_dec(v_thmName_5106_);
goto v___jp_5102_;
}
else
{
lean_object* v_inheritedTraceOptions_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; uint8_t v___x_5117_; 
v_inheritedTraceOptions_5114_ = lean_ctor_get(v_toCold_5111_, 11);
v___x_5115_ = ((lean_object*)(l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_));
v___x_5116_ = lean_obj_once(&l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_, &l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn___lam__0___closed__4_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_);
v___x_5117_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5114_, v_options_5112_, v___x_5116_);
if (v___x_5117_ == 0)
{
lean_dec_ref(v_a_5108_);
lean_dec(v_thmName_5106_);
goto v___jp_5102_;
}
else
{
lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; 
v___x_5118_ = lean_obj_once(&l_Lean_Meta_mkCongrSimpForConst_x3f___closed__1, &l_Lean_Meta_mkCongrSimpForConst_x3f___closed__1_once, _init_l_Lean_Meta_mkCongrSimpForConst_x3f___closed__1);
v___x_5119_ = l_Lean_MessageData_ofName(v_thmName_5106_);
v___x_5120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5120_, 0, v___x_5118_);
lean_ctor_set(v___x_5120_, 1, v___x_5119_);
v___x_5121_ = lean_obj_once(&l_Lean_Meta_mkCongrSimpForConst_x3f___closed__3, &l_Lean_Meta_mkCongrSimpForConst_x3f___closed__3_once, _init_l_Lean_Meta_mkCongrSimpForConst_x3f___closed__3);
v___x_5122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5122_, 0, v___x_5120_);
lean_ctor_set(v___x_5122_, 1, v___x_5121_);
v___x_5123_ = l_Lean_Exception_toMessageData(v_a_5108_);
v___x_5124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5124_, 0, v___x_5122_);
lean_ctor_set(v___x_5124_, 1, v___x_5123_);
v___x_5125_ = l_Lean_addTrace___at___00__private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2__spec__3(v___x_5115_, v___x_5124_, v_a_5076_, v_a_5077_, v_a_5078_, v_a_5079_);
if (lean_obj_tag(v___x_5125_) == 0)
{
lean_object* v_a_5126_; lean_object* v___x_5127_; 
v_a_5126_ = lean_ctor_get(v___x_5125_, 0);
lean_inc(v_a_5126_);
lean_dec_ref_known(v___x_5125_, 1);
v___x_5127_ = l_Lean_Meta_mkCongrSimpForConst_x3f___lam__0(v_a_5126_, v_a_5076_, v_a_5077_, v_a_5078_, v_a_5079_);
v___y_5100_ = v___x_5127_;
goto v___jp_5099_;
}
else
{
lean_object* v_a_5128_; lean_object* v___x_5130_; uint8_t v_isShared_5131_; uint8_t v_isSharedCheck_5135_; 
v_a_5128_ = lean_ctor_get(v___x_5125_, 0);
v_isSharedCheck_5135_ = !lean_is_exclusive(v___x_5125_);
if (v_isSharedCheck_5135_ == 0)
{
v___x_5130_ = v___x_5125_;
v_isShared_5131_ = v_isSharedCheck_5135_;
goto v_resetjp_5129_;
}
else
{
lean_inc(v_a_5128_);
lean_dec(v___x_5125_);
v___x_5130_ = lean_box(0);
v_isShared_5131_ = v_isSharedCheck_5135_;
goto v_resetjp_5129_;
}
v_resetjp_5129_:
{
lean_object* v___x_5133_; 
if (v_isShared_5131_ == 0)
{
v___x_5133_ = v___x_5130_;
goto v_reusejp_5132_;
}
else
{
lean_object* v_reuseFailAlloc_5134_; 
v_reuseFailAlloc_5134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5134_, 0, v_a_5128_);
v___x_5133_ = v_reuseFailAlloc_5134_;
goto v_reusejp_5132_;
}
v_reusejp_5132_:
{
return v___x_5133_;
}
}
}
}
}
}
else
{
lean_object* v___x_5136_; 
lean_dec(v_thmName_5106_);
v___x_5136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5136_, 0, v_a_5108_);
return v___x_5136_;
}
}
else
{
lean_object* v___x_5137_; 
lean_dec(v_thmName_5106_);
v___x_5137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5137_, 0, v_a_5108_);
return v___x_5137_;
}
}
v___jp_5138_:
{
if (lean_obj_tag(v___y_5139_) == 0)
{
lean_object* v_a_5140_; 
lean_dec(v_thmName_5106_);
v_a_5140_ = lean_ctor_get(v___y_5139_, 0);
lean_inc(v_a_5140_);
lean_dec_ref_known(v___y_5139_, 1);
v_a_5082_ = v_a_5140_;
goto v___jp_5081_;
}
else
{
lean_object* v_a_5141_; 
v_a_5141_ = lean_ctor_get(v___y_5139_, 0);
lean_inc(v_a_5141_);
lean_dec_ref_known(v___y_5139_, 1);
v_a_5108_ = v_a_5141_;
goto v___jp_5107_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f___boxed(lean_object* v_declName_5151_, lean_object* v_levels_5152_, lean_object* v_a_5153_, lean_object* v_a_5154_, lean_object* v_a_5155_, lean_object* v_a_5156_, lean_object* v_a_5157_){
_start:
{
lean_object* v_res_5158_; 
v_res_5158_ = l_Lean_Meta_mkCongrSimpForConst_x3f(v_declName_5151_, v_levels_5152_, v_a_5153_, v_a_5154_, v_a_5155_, v_a_5156_);
lean_dec(v_a_5156_);
lean_dec_ref(v_a_5155_);
lean_dec(v_a_5154_);
lean_dec_ref(v_a_5153_);
return v_res_5158_;
}
}
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_ReservedNameAction(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_CongrTheorems(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ReservedNameAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedCongrArgKind_default = _init_l_Lean_Meta_instInhabitedCongrArgKind_default();
l_Lean_Meta_instInhabitedCongrArgKind = _init_l_Lean_Meta_instInhabitedCongrArgKind();
res = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_3482611248____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_118617060____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_congrKindsExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_congrKindsExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_1395845979____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_CongrTheorems_0__Lean_Meta_initFn_00___x40_Lean_Meta_CongrTheorems_4172217453____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_CongrTheorems(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_ReservedNameAction(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_CongrTheorems(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ReservedNameAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CongrTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_CongrTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_CongrTheorems(builtin);
}
#ifdef __cplusplus
}
#endif
