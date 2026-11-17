// Lean compiler output
// Module: Lean.Attributes
// Imports: public import Lean.CoreM public import Lean.Compiler.MetaAttr
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
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_instInhabitedEnvExtension_default___redArg();
extern lean_object* l_Lean_instInhabitedMessageData_default;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_findByName_x3f___redArg(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Environment_logDeclChange(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t l_Lean_EnvExtension_asyncMayModify___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_asyncPrefix_x3f(lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_addParenHeuristic(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_containsSortedName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeApplicationTime_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeApplicationTime;
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeApplicationTime_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeApplicationTime_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqAttributeApplicationTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqAttributeApplicationTime_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqAttributeApplicationTime___closed__0 = (const lean_object*)&l_Lean_instBEqAttributeApplicationTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqAttributeApplicationTime = (const lean_object*)&l_Lean_instBEqAttributeApplicationTime___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instMonadLiftImportMAttrM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instMonadLiftImportMAttrM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMonadLiftImportMAttrM___closed__0 = (const lean_object*)&l_Lean_instMonadLiftImportMAttrM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instMonadLiftImportMAttrM = (const lean_object*)&l_Lean_instMonadLiftImportMAttrM___closed__0_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__0 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__1 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__2 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__3 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__4 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value;
static const lean_array_object l_Lean_AttributeImplCore_ref___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__5 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__5_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__6 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__7 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__8 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__9 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__9_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__10 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__11 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__12;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__13;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__14 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__14_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__15 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__15_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__16 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__17 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__17_value;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__18;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__19;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__20;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__21;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__22;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__23;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__24;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__25;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__26;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__27;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__28;
LEAN_EXPORT lean_object* l_Lean_AttributeImplCore_ref___autoParam;
static const lean_string_object l_Lean_instInhabitedAttributeImplCore_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "instInhabitedAttributeImplCore"};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__0_value;
static const lean_string_object l_Lean_instInhabitedAttributeImplCore_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__1_value;
static const lean_ctor_object l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_0),((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 168, 67, 30, 9, 195, 195, 250)}};
static const lean_ctor_object l_Lean_instInhabitedAttributeImplCore_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_1),((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(6, 28, 76, 169, 127, 73, 161, 93)}};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__2_value;
static const lean_string_object l_Lean_instInhabitedAttributeImplCore_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__3 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__3_value;
static const lean_ctor_object l_Lean_instInhabitedAttributeImplCore_default___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__4 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAttributeImplCore_default = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAttributeImplCore = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqAttributeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqAttributeKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqAttributeKind___closed__0 = (const lean_object*)&l_Lean_instBEqAttributeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqAttributeKind = (const lean_object*)&l_Lean_instBEqAttributeKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeKind_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeKind;
static const lean_string_object l_Lean_instToStringAttributeKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_instToStringAttributeKind___lam__0___closed__0 = (const lean_object*)&l_Lean_instToStringAttributeKind___lam__0___closed__0_value;
static const lean_string_object l_Lean_instToStringAttributeKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_instToStringAttributeKind___lam__0___closed__1 = (const lean_object*)&l_Lean_instToStringAttributeKind___lam__0___closed__1_value;
static const lean_string_object l_Lean_instToStringAttributeKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_instToStringAttributeKind___lam__0___closed__2 = (const lean_object*)&l_Lean_instToStringAttributeKind___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instToStringAttributeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToStringAttributeKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToStringAttributeKind___closed__0 = (const lean_object*)&l_Lean_instToStringAttributeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToStringAttributeKind = (const lean_object*)&l_Lean_instToStringAttributeKind___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1;
static const lean_string_object l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instInhabitedAttributeImpl_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedAttributeImpl_default___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedAttributeImpl_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedAttributeImpl_default___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__4_value)} };
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__1_value;
static const lean_ctor_object l_Lean_instInhabitedAttributeImpl_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__4_value),((lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__0_value),((lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__1_value)}};
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAttributeImpl_default = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAttributeImpl = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__2_value;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_attributeMapRef;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerBuiltinAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "Failed to register attribute: Attributes can only be registered during initialization"};
static const lean_object* l_Lean_registerBuiltinAttribute___closed__0 = (const lean_object*)&l_Lean_registerBuiltinAttribute___closed__0_value;
static lean_once_cell_t l_Lean_registerBuiltinAttribute___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerBuiltinAttribute___closed__1;
static const lean_string_object l_Lean_registerBuiltinAttribute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Invalid builtin attribute declaration: `"};
static const lean_object* l_Lean_registerBuiltinAttribute___closed__2 = (const lean_object*)&l_Lean_registerBuiltinAttribute___closed__2_value;
static const lean_string_object l_Lean_registerBuiltinAttribute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "` has already been used"};
static const lean_object* l_Lean_registerBuiltinAttribute___closed__3 = (const lean_object*)&l_Lean_registerBuiltinAttribute___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value;
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__1 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__1_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__1_value),LEAN_SCALAR_PTR_LITERAL(149, 14, 146, 125, 144, 1, 65, 64)}};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__2 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value;
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Unexpected attribute argument: This attribute takes no arguments"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__3 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__3_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_ensureNoArgs___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__4;
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__5 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__5_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__5_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__6 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "macro"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 202, 70, 6, 8, 133, 137, 74)}};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__1 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value;
static const lean_string_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "export"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__2 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 70, 85, 26, 88, 142, 178, 115)}};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__3 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value;
static const lean_string_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Unexpected attribute argument"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__4 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__4_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_getIdent_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__5;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_getIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Unexpected attribute argument: Expected identifier, but found"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent___closed__0_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_getIdent___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_getIdent___closed__1;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getAttrParamOptPrio___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Unexpected attribute argument: Expected a priority, but found"};
static const lean_object* l_Lean_getAttrParamOptPrio___closed__0 = (const lean_object*)&l_Lean_getAttrParamOptPrio___closed__0_value;
static lean_once_cell_t l_Lean_getAttrParamOptPrio___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getAttrParamOptPrio___closed__1;
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_getPrio___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "Unexpected attribute argument: Expected an optional priority, but found"};
static const lean_object* l_Lean_Attribute_Builtin_getPrio___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_getPrio___closed__0_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_getPrio___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_getPrio___closed__1;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` to declaration `"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` because it is in an imported module"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "` because it is not from the present async context"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "]`: Declaration `"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` has type"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "\nbut `["};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "]` can only be added to declarations of type"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "` must be public"};
static const lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0 = (const lean_object*)&l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ensureAttrDeclIsMeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` must be marked as `meta`"};
static const lean_object* l_Lean_ensureAttrDeclIsMeta___closed__0 = (const lean_object*)&l_Lean_ensureAttrDeclIsMeta___closed__0_value;
static lean_once_cell_t l_Lean_ensureAttrDeclIsMeta___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureAttrDeclIsMeta___closed__1;
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__2_value;
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__3 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__3_value;
static lean_once_cell_t l_Lean_instInhabitedTagAttribute_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTagAttribute_default___closed__4;
static lean_once_cell_t l_Lean_instInhabitedTagAttribute_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTagAttribute_default___closed__5;
static lean_once_cell_t l_Lean_instInhabitedTagAttribute_default___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTagAttribute_default___closed__6;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___auto__1;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerTagAttribute___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tag attribute"};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__0 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__0_value)}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__1 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__1_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__2 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__2_value;
static const lean_string_object l_Lean_registerTagAttribute___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "number of local entries: "};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__3 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__3_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__3_value)}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__4 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__2_value),((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value)}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__5 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerTagAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__0 = (const lean_object*)&l_Lean_registerTagAttribute___closed__0_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__1 = (const lean_object*)&l_Lean_registerTagAttribute___closed__1_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__2 = (const lean_object*)&l_Lean_registerTagAttribute___closed__2_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__3, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__3 = (const lean_object*)&l_Lean_registerTagAttribute___closed__3_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_insert, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__4 = (const lean_object*)&l_Lean_registerTagAttribute___closed__4_value;
static lean_once_cell_t l_Lean_registerTagAttribute___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTagAttribute___closed__5;
static lean_once_cell_t l_Lean_registerTagAttribute___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTagAttribute___closed__6;
static const lean_ctor_object l_Lean_registerTagAttribute___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___closed__1_value)}};
static const lean_object* l_Lean_registerTagAttribute___closed__7 = (const lean_object*)&l_Lean_registerTagAttribute___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_hasTag___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2_value;
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3_value;
static lean_once_cell_t l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4;
static lean_once_cell_t l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedParametricAttribute_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedParametricAttribute_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "parametric attribute"};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__1_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__2_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__2_value),((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value)}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__3 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__0 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__0_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__1 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__1_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__2 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__2_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__3 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__3_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__3_value)} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__4 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__4_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__5___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__3_value)} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__5 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg(lean_object*, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Failed to add parametric attribute `["};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0_value;
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "]` to `"};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1_value;
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "`: Attribute has already been set"};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2_value;
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`: Declaration is in an imported module"};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2 = (const lean_object*)&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2_value;
static lean_once_cell_t l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3;
static lean_once_cell_t l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedEnumAttributes_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedEnumAttributes_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___auto__1;
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "enumeration attribute extension"};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__1_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__2_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__2_value),((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__3 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__0 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__0_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__1 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__1_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__2 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__2_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__3 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__3_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__4, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__4 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__4_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__6___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__5 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__5_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__6___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__6 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__6_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__7 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__7_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__1_value)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__8 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Internal error calling `"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__0 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__0_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ".setValue` for `"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__1 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__1_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = ": Declaration is not from this async context `"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__2 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__2_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__3 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__3_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "(some "};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__4 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__4_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__5 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__5_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = ": Attribute has already been set"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__6 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__6_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = ": Declaration is in an imported module"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__7 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_attributeImplBuilderTableRef;
static const lean_string_object l_Lean_registerAttributeImplBuilder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Attribute implementation builder `"};
static const lean_object* l_Lean_registerAttributeImplBuilder___closed__0 = (const lean_object*)&l_Lean_registerAttributeImplBuilder___closed__0_value;
static const lean_string_object l_Lean_registerAttributeImplBuilder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_registerAttributeImplBuilder___closed__1 = (const lean_object*)&l_Lean_registerAttributeImplBuilder___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkAttributeImplOfEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Unknown attribute implementation builder `"};
static const lean_object* l_Lean_mkAttributeImplOfEntry___closed__0 = (const lean_object*)&l_Lean_mkAttributeImplOfEntry___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedAttributeExtensionState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeExtensionState_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeExtensionState_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeExtensionState;
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial___boxed(lean_object*);
static const lean_string_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "Unexpected attribute implementation type: `{.ofConstName declName}` is not of type `Lean.AttributeImpl`"};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__0 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__0_value;
static const lean_ctor_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__0_value)}};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__1 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__1_value;
static const lean_string_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__2 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__2_value;
static const lean_string_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "AttributeImpl"};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__3 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_addAttrEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object*);
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_initFn___lam__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_initFn___lam__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "attributeExtension"};
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(219, 25, 250, 145, 208, 184, 170, 105)}};
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_addAttrEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_attributeExtension;
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames();
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames___boxed(lean_object*);
static const lean_string_object l_Lean_getBuiltinAttributeImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Unknown attribute `"};
static const lean_object* l_Lean_getBuiltinAttributeImpl___closed__0 = (const lean_object*)&l_Lean_getBuiltinAttributeImpl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAttribute___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAttributeNames(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAttributeImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_add(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_erase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_erase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_updateEnvAttributesImpl___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_updateEnvAttributesImpl_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_update_env_attributes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_updateEnvAttributesImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_get_num_attributes();
LEAN_EXPORT lean_object* l_Lean_getNumBuiltinAttributesImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lean_AttributeApplicationTime_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_AttributeApplicationTime_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lean_AttributeApplicationTime_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg(lean_object* v_afterTypeChecking_22_){
_start:
{
lean_inc(v_afterTypeChecking_22_);
return v_afterTypeChecking_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg___boxed(lean_object* v_afterTypeChecking_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg(v_afterTypeChecking_23_);
lean_dec(v_afterTypeChecking_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_afterTypeChecking_28_){
_start:
{
lean_inc(v_afterTypeChecking_28_);
return v_afterTypeChecking_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_afterTypeChecking_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lean_AttributeApplicationTime_afterTypeChecking_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_afterTypeChecking_32_);
lean_dec(v_afterTypeChecking_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg(lean_object* v_afterCompilation_35_){
_start:
{
lean_inc(v_afterCompilation_35_);
return v_afterCompilation_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg___boxed(lean_object* v_afterCompilation_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg(v_afterCompilation_36_);
lean_dec(v_afterCompilation_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_afterCompilation_41_){
_start:
{
lean_inc(v_afterCompilation_41_);
return v_afterCompilation_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_afterCompilation_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lean_AttributeApplicationTime_afterCompilation_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_afterCompilation_45_);
lean_dec(v_afterCompilation_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg(lean_object* v_beforeElaboration_48_){
_start:
{
lean_inc(v_beforeElaboration_48_);
return v_beforeElaboration_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg___boxed(lean_object* v_beforeElaboration_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg(v_beforeElaboration_49_);
lean_dec(v_beforeElaboration_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_beforeElaboration_54_){
_start:
{
lean_inc(v_beforeElaboration_54_);
return v_beforeElaboration_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_beforeElaboration_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lean_AttributeApplicationTime_beforeElaboration_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_beforeElaboration_58_);
lean_dec(v_beforeElaboration_58_);
return v_res_60_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeApplicationTime_default(void){
_start:
{
uint8_t v___x_61_; 
v___x_61_ = 0;
return v___x_61_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeApplicationTime(void){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeApplicationTime_beq(uint8_t v_x_63_, uint8_t v_y_64_){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_65_ = lean_box(v_x_63_);
v___x_66_ = lean_obj_tag_nat(v___x_65_);
lean_dec(v___x_65_);
v___x_67_ = lean_box(v_y_64_);
v___x_68_ = lean_obj_tag_nat(v___x_67_);
lean_dec(v___x_67_);
v___x_69_ = lean_nat_dec_eq(v___x_66_, v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeApplicationTime_beq___boxed(lean_object* v_x_70_, lean_object* v_y_71_){
_start:
{
uint8_t v_x_24__boxed_72_; uint8_t v_y_25__boxed_73_; uint8_t v_res_74_; lean_object* v_r_75_; 
v_x_24__boxed_72_ = lean_unbox(v_x_70_);
v_y_25__boxed_73_ = lean_unbox(v_y_71_);
v_res_74_ = l_Lean_instBEqAttributeApplicationTime_beq(v_x_24__boxed_72_, v_y_25__boxed_73_);
v_r_75_ = lean_box(v_res_74_);
return v_r_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0(lean_object* v_00_u03b1_78_, lean_object* v_x_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; lean_object* v_env_84_; lean_object* v_ref_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_83_ = lean_st_ref_get(v___y_81_);
v_env_84_ = lean_ctor_get(v___x_83_, 0);
lean_inc_ref(v_env_84_);
lean_dec(v___x_83_);
v_ref_85_ = lean_ctor_get(v___y_80_, 2);
v___x_86_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_80_);
v___x_87_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_87_, 0, v_env_84_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_apply_2(v_x_79_, v___x_87_, lean_box(0));
if (lean_obj_tag(v___x_88_) == 0)
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_96_; 
v_a_89_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_96_ == 0)
{
v___x_91_ = v___x_88_;
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_88_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_94_; 
if (v_isShared_92_ == 0)
{
v___x_94_ = v___x_91_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_a_89_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
else
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_108_; 
v_a_97_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_108_ == 0)
{
v___x_99_ = v___x_88_;
v_isShared_100_ = v_isSharedCheck_108_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_88_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_108_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_101_ = lean_io_error_to_string(v_a_97_);
v___x_102_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
v___x_103_ = l_Lean_MessageData_ofFormat(v___x_102_);
lean_inc(v_ref_85_);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v_ref_85_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 0, v___x_104_);
v___x_106_ = v___x_99_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_104_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0___boxed(lean_object* v_00_u03b1_109_, lean_object* v_x_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_instMonadLiftImportMAttrM___lam__0(v_00_u03b1_109_, v_x_110_, v___y_111_, v___y_112_);
lean_dec(v___y_112_);
lean_dec_ref(v___y_111_);
return v_res_114_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__12(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__10));
v___x_144_ = l_Lean_mkAtom(v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__13(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__12, &l_Lean_AttributeImplCore_ref___autoParam___closed__12_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__12);
v___x_146_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_147_ = lean_array_push(v___x_146_, v___x_145_);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__18(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__17));
v___x_157_ = l_Lean_mkAtom(v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__19(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__18, &l_Lean_AttributeImplCore_ref___autoParam___closed__18_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__18);
v___x_159_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_160_ = lean_array_push(v___x_159_, v___x_158_);
return v___x_160_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__20(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_161_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__19, &l_Lean_AttributeImplCore_ref___autoParam___closed__19_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__19);
v___x_162_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__16));
v___x_163_ = lean_box(2);
v___x_164_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v___x_162_);
lean_ctor_set(v___x_164_, 2, v___x_161_);
return v___x_164_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__21(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_165_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__20, &l_Lean_AttributeImplCore_ref___autoParam___closed__20_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__20);
v___x_166_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__13, &l_Lean_AttributeImplCore_ref___autoParam___closed__13_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__13);
v___x_167_ = lean_array_push(v___x_166_, v___x_165_);
return v___x_167_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__22(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_168_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__21, &l_Lean_AttributeImplCore_ref___autoParam___closed__21_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__21);
v___x_169_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__11));
v___x_170_ = lean_box(2);
v___x_171_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v___x_169_);
lean_ctor_set(v___x_171_, 2, v___x_168_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__23(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_172_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__22, &l_Lean_AttributeImplCore_ref___autoParam___closed__22_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__22);
v___x_173_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_174_ = lean_array_push(v___x_173_, v___x_172_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__24(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_175_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__23, &l_Lean_AttributeImplCore_ref___autoParam___closed__23_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__23);
v___x_176_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__9));
v___x_177_ = lean_box(2);
v___x_178_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_176_);
lean_ctor_set(v___x_178_, 2, v___x_175_);
return v___x_178_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__25(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_179_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__24, &l_Lean_AttributeImplCore_ref___autoParam___closed__24_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__24);
v___x_180_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_181_ = lean_array_push(v___x_180_, v___x_179_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__26(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_182_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__25, &l_Lean_AttributeImplCore_ref___autoParam___closed__25_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__25);
v___x_183_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__7));
v___x_184_ = lean_box(2);
v___x_185_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v___x_183_);
lean_ctor_set(v___x_185_, 2, v___x_182_);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__27(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_186_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__26, &l_Lean_AttributeImplCore_ref___autoParam___closed__26_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__26);
v___x_187_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_188_ = lean_array_push(v___x_187_, v___x_186_);
return v___x_188_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_189_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__27, &l_Lean_AttributeImplCore_ref___autoParam___closed__27_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__27);
v___x_190_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__4));
v___x_191_ = lean_box(2);
v___x_192_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
lean_ctor_set(v___x_192_, 1, v___x_190_);
lean_ctor_set(v___x_192_, 2, v___x_189_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam(void){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__28, &l_Lean_AttributeImplCore_ref___autoParam___closed__28_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx___impl(uint8_t v_x_208_){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = lean_box(v_x_208_);
v___x_210_ = lean_obj_tag_nat(v___x_209_);
lean_dec(v___x_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx___impl___boxed(lean_object* v_x_211_){
_start:
{
uint8_t v_x_4__boxed_212_; lean_object* v_res_213_; 
v_x_4__boxed_212_ = lean_unbox(v_x_211_);
v_res_213_ = l_Lean_AttributeKind_ctorIdx___impl(v_x_4__boxed_212_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg(lean_object* v_k_214_){
_start:
{
lean_inc(v_k_214_);
return v_k_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg___boxed(lean_object* v_k_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lean_AttributeKind_ctorElim___redArg(v_k_215_);
lean_dec(v_k_215_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim(lean_object* v_motive_217_, lean_object* v_ctorIdx_218_, uint8_t v_t_219_, lean_object* v_h_220_, lean_object* v_k_221_){
_start:
{
lean_inc(v_k_221_);
return v_k_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___boxed(lean_object* v_motive_222_, lean_object* v_ctorIdx_223_, lean_object* v_t_224_, lean_object* v_h_225_, lean_object* v_k_226_){
_start:
{
uint8_t v_t_boxed_227_; lean_object* v_res_228_; 
v_t_boxed_227_ = lean_unbox(v_t_224_);
v_res_228_ = l_Lean_AttributeKind_ctorElim(v_motive_222_, v_ctorIdx_223_, v_t_boxed_227_, v_h_225_, v_k_226_);
lean_dec(v_k_226_);
lean_dec(v_ctorIdx_223_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg(lean_object* v_global_229_){
_start:
{
lean_inc(v_global_229_);
return v_global_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg___boxed(lean_object* v_global_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_AttributeKind_global_elim___redArg(v_global_230_);
lean_dec(v_global_230_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim(lean_object* v_motive_232_, uint8_t v_t_233_, lean_object* v_h_234_, lean_object* v_global_235_){
_start:
{
lean_inc(v_global_235_);
return v_global_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___boxed(lean_object* v_motive_236_, lean_object* v_t_237_, lean_object* v_h_238_, lean_object* v_global_239_){
_start:
{
uint8_t v_t_boxed_240_; lean_object* v_res_241_; 
v_t_boxed_240_ = lean_unbox(v_t_237_);
v_res_241_ = l_Lean_AttributeKind_global_elim(v_motive_236_, v_t_boxed_240_, v_h_238_, v_global_239_);
lean_dec(v_global_239_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg(lean_object* v_local_242_){
_start:
{
lean_inc(v_local_242_);
return v_local_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg___boxed(lean_object* v_local_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lean_AttributeKind_local_elim___redArg(v_local_243_);
lean_dec(v_local_243_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim(lean_object* v_motive_245_, uint8_t v_t_246_, lean_object* v_h_247_, lean_object* v_local_248_){
_start:
{
lean_inc(v_local_248_);
return v_local_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___boxed(lean_object* v_motive_249_, lean_object* v_t_250_, lean_object* v_h_251_, lean_object* v_local_252_){
_start:
{
uint8_t v_t_boxed_253_; lean_object* v_res_254_; 
v_t_boxed_253_ = lean_unbox(v_t_250_);
v_res_254_ = l_Lean_AttributeKind_local_elim(v_motive_249_, v_t_boxed_253_, v_h_251_, v_local_252_);
lean_dec(v_local_252_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg(lean_object* v_scoped_255_){
_start:
{
lean_inc(v_scoped_255_);
return v_scoped_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg___boxed(lean_object* v_scoped_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Lean_AttributeKind_scoped_elim___redArg(v_scoped_256_);
lean_dec(v_scoped_256_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim(lean_object* v_motive_258_, uint8_t v_t_259_, lean_object* v_h_260_, lean_object* v_scoped_261_){
_start:
{
lean_inc(v_scoped_261_);
return v_scoped_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___boxed(lean_object* v_motive_262_, lean_object* v_t_263_, lean_object* v_h_264_, lean_object* v_scoped_265_){
_start:
{
uint8_t v_t_boxed_266_; lean_object* v_res_267_; 
v_t_boxed_266_ = lean_unbox(v_t_263_);
v_res_267_ = l_Lean_AttributeKind_scoped_elim(v_motive_262_, v_t_boxed_266_, v_h_264_, v_scoped_265_);
lean_dec(v_scoped_265_);
return v_res_267_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t v_x_268_, uint8_t v_y_269_){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_270_ = lean_box(v_x_268_);
v___x_271_ = lean_obj_tag_nat(v___x_270_);
lean_dec(v___x_270_);
v___x_272_ = lean_box(v_y_269_);
v___x_273_ = lean_obj_tag_nat(v___x_272_);
lean_dec(v___x_272_);
v___x_274_ = lean_nat_dec_eq(v___x_271_, v___x_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeKind_beq___boxed(lean_object* v_x_275_, lean_object* v_y_276_){
_start:
{
uint8_t v_x_24__boxed_277_; uint8_t v_y_25__boxed_278_; uint8_t v_res_279_; lean_object* v_r_280_; 
v_x_24__boxed_277_ = lean_unbox(v_x_275_);
v_y_25__boxed_278_ = lean_unbox(v_y_276_);
v_res_279_ = l_Lean_instBEqAttributeKind_beq(v_x_24__boxed_277_, v_y_25__boxed_278_);
v_r_280_ = lean_box(v_res_279_);
return v_r_280_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeKind_default(void){
_start:
{
uint8_t v___x_283_; 
v___x_283_ = 0;
return v___x_283_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeKind(void){
_start:
{
uint8_t v___x_284_; 
v___x_284_ = 0;
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0(uint8_t v_x_288_){
_start:
{
switch(v_x_288_)
{
case 0:
{
lean_object* v___x_289_; 
v___x_289_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__0));
return v___x_289_;
}
case 1:
{
lean_object* v___x_290_; 
v___x_290_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__1));
return v___x_290_;
}
default: 
{
lean_object* v___x_291_; 
v___x_291_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__2));
return v___x_291_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0___boxed(lean_object* v_x_292_){
_start:
{
uint8_t v_x_36__boxed_293_; lean_object* v_res_294_; 
v_x_36__boxed_293_ = lean_unbox(v_x_292_);
v_res_294_ = l_Lean_instToStringAttributeKind___lam__0(v_x_36__boxed_293_);
return v_res_294_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = l_Lean_instInhabitedMessageData_default;
v___x_298_ = lean_box(0);
v___x_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
lean_ctor_set(v___x_299_, 1, v___x_297_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0(lean_object* v_x_300_, lean_object* v___y_301_, uint8_t v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0, &l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0);
v___x_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0___boxed(lean_object* v_x_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
uint8_t v___y_1029__boxed_314_; lean_object* v_res_315_; 
v___y_1029__boxed_314_ = lean_unbox(v___y_310_);
v_res_315_ = l_Lean_instInhabitedAttributeImpl_default___lam__0(v_x_308_, v___y_309_, v___y_1029__boxed_314_, v___y_311_, v___y_312_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
lean_dec(v___y_309_);
lean_dec(v_x_308_);
return v_res_315_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_316_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0);
v___x_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
return v___x_318_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_319_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1);
v___x_320_ = lean_unsigned_to_nat(0u);
v___x_321_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
lean_ctor_set(v___x_321_, 2, v___x_320_);
lean_ctor_set(v___x_321_, 3, v___x_320_);
lean_ctor_set(v___x_321_, 4, v___x_319_);
lean_ctor_set(v___x_321_, 5, v___x_319_);
lean_ctor_set(v___x_321_, 6, v___x_319_);
lean_ctor_set(v___x_321_, 7, v___x_319_);
lean_ctor_set(v___x_321_, 8, v___x_319_);
lean_ctor_set(v___x_321_, 9, v___x_319_);
lean_ctor_set(v___x_321_, 10, v___x_319_);
return v___x_321_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_322_ = lean_unsigned_to_nat(32u);
v___x_323_ = lean_mk_empty_array_with_capacity(v___x_322_);
v___x_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
return v___x_324_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_325_ = ((size_t)5ULL);
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = lean_unsigned_to_nat(32u);
v___x_328_ = lean_mk_empty_array_with_capacity(v___x_327_);
v___x_329_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3);
v___x_330_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_330_, 0, v___x_329_);
lean_ctor_set(v___x_330_, 1, v___x_328_);
lean_ctor_set(v___x_330_, 2, v___x_326_);
lean_ctor_set(v___x_330_, 3, v___x_326_);
lean_ctor_set_usize(v___x_330_, 4, v___x_325_);
return v___x_330_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_331_ = lean_box(1);
v___x_332_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4);
v___x_333_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1);
v___x_334_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___x_332_);
lean_ctor_set(v___x_334_, 2, v___x_331_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(lean_object* v_msgData_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v___x_339_; lean_object* v_toCold_340_; lean_object* v_env_341_; lean_object* v_options_342_; uint8_t v___x_343_; lean_object* v_env_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_339_ = lean_st_ref_get(v___y_337_);
v_toCold_340_ = lean_ctor_get(v___y_336_, 0);
v_env_341_ = lean_ctor_get(v___x_339_, 0);
lean_inc_ref(v_env_341_);
lean_dec(v___x_339_);
v_options_342_ = lean_ctor_get(v_toCold_340_, 2);
v___x_343_ = 0;
v_env_344_ = l_Lean_Environment_setRecordingDeps(v_env_341_, v___x_343_);
v___x_345_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2);
v___x_346_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_342_);
v___x_347_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_347_, 0, v_env_344_);
lean_ctor_set(v___x_347_, 1, v___x_345_);
lean_ctor_set(v___x_347_, 2, v___x_346_);
lean_ctor_set(v___x_347_, 3, v_options_342_);
v___x_348_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
lean_ctor_set(v___x_348_, 1, v_msgData_335_);
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___boxed(lean_object* v_msgData_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(v_msgData_350_, v___y_351_, v___y_352_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(lean_object* v_msg_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_ref_359_; lean_object* v___x_360_; lean_object* v_a_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_369_; 
v_ref_359_ = lean_ctor_get(v___y_356_, 2);
v___x_360_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(v_msg_355_, v___y_356_, v___y_357_);
v_a_361_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_369_ == 0)
{
v___x_363_ = v___x_360_;
v_isShared_364_ = v_isSharedCheck_369_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_a_361_);
lean_dec(v___x_360_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_369_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; lean_object* v___x_367_; 
lean_inc(v_ref_359_);
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v_ref_359_);
lean_ctor_set(v___x_365_, 1, v_a_361_);
if (v_isShared_364_ == 0)
{
lean_ctor_set_tag(v___x_363_, 1);
lean_ctor_set(v___x_363_, 0, v___x_365_);
v___x_367_ = v___x_363_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_365_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg___boxed(lean_object* v_msg_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v_msg_370_, v___y_371_, v___y_372_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
return v_res_374_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = ((lean_object*)(l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0));
v___x_377_ = l_Lean_stringToMessageData(v___x_376_);
return v___x_377_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = ((lean_object*)(l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2));
v___x_380_ = l_Lean_stringToMessageData(v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1(lean_object* v___x_381_, lean_object* v_decl_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_name_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v_name_386_ = lean_ctor_get(v___x_381_, 1);
lean_inc(v_name_386_);
lean_dec_ref(v___x_381_);
v___x_387_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_388_ = l_Lean_MessageData_ofName(v_name_386_);
v___x_389_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_387_);
lean_ctor_set(v___x_389_, 1, v___x_388_);
v___x_390_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_391_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_389_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_391_, v___y_383_, v___y_384_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___boxed(lean_object* v___x_393_, lean_object* v_decl_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_instInhabitedAttributeImpl_default___lam__1(v___x_393_, v_decl_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v_decl_394_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0(lean_object* v_00_u03b1_407_, lean_object* v_msg_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v_msg_408_, v___y_409_, v___y_410_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___boxed(lean_object* v_00_u03b1_413_, lean_object* v_msg_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0(v_00_u03b1_413_, v_msg_414_, v___y_415_, v___y_416_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
return v_res_418_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_420_ = lean_box(0);
v___x_421_ = lean_unsigned_to_nat(16u);
v___x_422_ = lean_mk_array(v___x_421_, v___x_420_);
return v___x_422_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_423_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
lean_ctor_set(v___x_425_, 1, v___x_423_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_427_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_428_ = lean_st_mk_ref(v___x_427_);
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2____boxed(lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_();
return v_res_431_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(lean_object* v_a_432_, lean_object* v_x_433_){
_start:
{
if (lean_obj_tag(v_x_433_) == 0)
{
uint8_t v___x_434_; 
v___x_434_ = 0;
return v___x_434_;
}
else
{
lean_object* v_key_435_; lean_object* v_tail_436_; uint8_t v___x_437_; 
v_key_435_ = lean_ctor_get(v_x_433_, 0);
v_tail_436_ = lean_ctor_get(v_x_433_, 2);
v___x_437_ = lean_name_eq(v_key_435_, v_a_432_);
if (v___x_437_ == 0)
{
v_x_433_ = v_tail_436_;
goto _start;
}
else
{
return v___x_437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg___boxed(lean_object* v_a_439_, lean_object* v_x_440_){
_start:
{
uint8_t v_res_441_; lean_object* v_r_442_; 
v_res_441_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_439_, v_x_440_);
lean_dec(v_x_440_);
lean_dec(v_a_439_);
v_r_442_ = lean_box(v_res_441_);
return v_r_442_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(lean_object* v_m_443_, lean_object* v_a_444_){
_start:
{
lean_object* v_buckets_445_; lean_object* v___x_446_; uint64_t v___y_448_; 
v_buckets_445_ = lean_ctor_get(v_m_443_, 1);
v___x_446_ = lean_array_get_size(v_buckets_445_);
if (lean_obj_tag(v_a_444_) == 0)
{
uint64_t v___x_462_; 
v___x_462_ = 1723ULL;
v___y_448_ = v___x_462_;
goto v___jp_447_;
}
else
{
uint64_t v_hash_463_; 
v_hash_463_ = lean_ctor_get_uint64(v_a_444_, sizeof(void*)*2);
v___y_448_ = v_hash_463_;
goto v___jp_447_;
}
v___jp_447_:
{
uint64_t v___x_449_; uint64_t v___x_450_; uint64_t v_fold_451_; uint64_t v___x_452_; uint64_t v___x_453_; uint64_t v___x_454_; size_t v___x_455_; size_t v___x_456_; size_t v___x_457_; size_t v___x_458_; size_t v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_449_ = 32ULL;
v___x_450_ = lean_uint64_shift_right(v___y_448_, v___x_449_);
v_fold_451_ = lean_uint64_xor(v___y_448_, v___x_450_);
v___x_452_ = 16ULL;
v___x_453_ = lean_uint64_shift_right(v_fold_451_, v___x_452_);
v___x_454_ = lean_uint64_xor(v_fold_451_, v___x_453_);
v___x_455_ = lean_uint64_to_usize(v___x_454_);
v___x_456_ = lean_usize_of_nat(v___x_446_);
v___x_457_ = ((size_t)1ULL);
v___x_458_ = lean_usize_sub(v___x_456_, v___x_457_);
v___x_459_ = lean_usize_land(v___x_455_, v___x_458_);
v___x_460_ = lean_array_uget_borrowed(v_buckets_445_, v___x_459_);
v___x_461_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_444_, v___x_460_);
return v___x_461_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg___boxed(lean_object* v_m_464_, lean_object* v_a_465_){
_start:
{
uint8_t v_res_466_; lean_object* v_r_467_; 
v_res_466_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_m_464_, v_a_465_);
lean_dec(v_a_465_);
lean_dec_ref(v_m_464_);
v_r_467_ = lean_box(v_res_466_);
return v_r_467_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(lean_object* v_a_468_, lean_object* v_b_469_, lean_object* v_x_470_){
_start:
{
if (lean_obj_tag(v_x_470_) == 0)
{
lean_dec(v_b_469_);
lean_dec(v_a_468_);
return v_x_470_;
}
else
{
lean_object* v_key_471_; lean_object* v_value_472_; lean_object* v_tail_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_485_; 
v_key_471_ = lean_ctor_get(v_x_470_, 0);
v_value_472_ = lean_ctor_get(v_x_470_, 1);
v_tail_473_ = lean_ctor_get(v_x_470_, 2);
v_isSharedCheck_485_ = !lean_is_exclusive(v_x_470_);
if (v_isSharedCheck_485_ == 0)
{
v___x_475_ = v_x_470_;
v_isShared_476_ = v_isSharedCheck_485_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_tail_473_);
lean_inc(v_value_472_);
lean_inc(v_key_471_);
lean_dec(v_x_470_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_485_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
uint8_t v___x_477_; 
v___x_477_ = lean_name_eq(v_key_471_, v_a_468_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; lean_object* v___x_480_; 
v___x_478_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(v_a_468_, v_b_469_, v_tail_473_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 2, v___x_478_);
v___x_480_ = v___x_475_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_key_471_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_value_472_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v___x_478_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
else
{
lean_object* v___x_483_; 
lean_dec(v_value_472_);
lean_dec(v_key_471_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v_b_469_);
lean_ctor_set(v___x_475_, 0, v_a_468_);
v___x_483_ = v___x_475_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_a_468_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_b_469_);
lean_ctor_set(v_reuseFailAlloc_484_, 2, v_tail_473_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_486_, lean_object* v_x_487_){
_start:
{
if (lean_obj_tag(v_x_487_) == 0)
{
return v_x_486_;
}
else
{
lean_object* v_key_488_; lean_object* v_value_489_; lean_object* v_tail_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_516_; 
v_key_488_ = lean_ctor_get(v_x_487_, 0);
v_value_489_ = lean_ctor_get(v_x_487_, 1);
v_tail_490_ = lean_ctor_get(v_x_487_, 2);
v_isSharedCheck_516_ = !lean_is_exclusive(v_x_487_);
if (v_isSharedCheck_516_ == 0)
{
v___x_492_ = v_x_487_;
v_isShared_493_ = v_isSharedCheck_516_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_tail_490_);
lean_inc(v_value_489_);
lean_inc(v_key_488_);
lean_dec(v_x_487_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_516_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_494_; uint64_t v___y_496_; 
v___x_494_ = lean_array_get_size(v_x_486_);
if (lean_obj_tag(v_key_488_) == 0)
{
uint64_t v___x_514_; 
v___x_514_ = 1723ULL;
v___y_496_ = v___x_514_;
goto v___jp_495_;
}
else
{
uint64_t v_hash_515_; 
v_hash_515_ = lean_ctor_get_uint64(v_key_488_, sizeof(void*)*2);
v___y_496_ = v_hash_515_;
goto v___jp_495_;
}
v___jp_495_:
{
uint64_t v___x_497_; uint64_t v___x_498_; uint64_t v_fold_499_; uint64_t v___x_500_; uint64_t v___x_501_; uint64_t v___x_502_; size_t v___x_503_; size_t v___x_504_; size_t v___x_505_; size_t v___x_506_; size_t v___x_507_; lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_497_ = 32ULL;
v___x_498_ = lean_uint64_shift_right(v___y_496_, v___x_497_);
v_fold_499_ = lean_uint64_xor(v___y_496_, v___x_498_);
v___x_500_ = 16ULL;
v___x_501_ = lean_uint64_shift_right(v_fold_499_, v___x_500_);
v___x_502_ = lean_uint64_xor(v_fold_499_, v___x_501_);
v___x_503_ = lean_uint64_to_usize(v___x_502_);
v___x_504_ = lean_usize_of_nat(v___x_494_);
v___x_505_ = ((size_t)1ULL);
v___x_506_ = lean_usize_sub(v___x_504_, v___x_505_);
v___x_507_ = lean_usize_land(v___x_503_, v___x_506_);
v___x_508_ = lean_array_uget_borrowed(v_x_486_, v___x_507_);
lean_inc(v___x_508_);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 2, v___x_508_);
v___x_510_ = v___x_492_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_key_488_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_value_489_);
lean_ctor_set(v_reuseFailAlloc_513_, 2, v___x_508_);
v___x_510_ = v_reuseFailAlloc_513_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
lean_object* v___x_511_; 
v___x_511_ = lean_array_uset(v_x_486_, v___x_507_, v___x_510_);
v_x_486_ = v___x_511_;
v_x_487_ = v_tail_490_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(lean_object* v_i_517_, lean_object* v_source_518_, lean_object* v_target_519_){
_start:
{
lean_object* v___x_520_; uint8_t v___x_521_; 
v___x_520_ = lean_array_get_size(v_source_518_);
v___x_521_ = lean_nat_dec_lt(v_i_517_, v___x_520_);
if (v___x_521_ == 0)
{
lean_dec_ref(v_source_518_);
lean_dec(v_i_517_);
return v_target_519_;
}
else
{
lean_object* v_es_522_; lean_object* v___x_523_; lean_object* v_source_524_; lean_object* v_target_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v_es_522_ = lean_array_fget(v_source_518_, v_i_517_);
v___x_523_ = lean_box(0);
v_source_524_ = lean_array_fset(v_source_518_, v_i_517_, v___x_523_);
v_target_525_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(v_target_519_, v_es_522_);
v___x_526_ = lean_unsigned_to_nat(1u);
v___x_527_ = lean_nat_add(v_i_517_, v___x_526_);
lean_dec(v_i_517_);
v_i_517_ = v___x_527_;
v_source_518_ = v_source_524_;
v_target_519_ = v_target_525_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(lean_object* v_data_529_){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v_nbuckets_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_530_ = lean_array_get_size(v_data_529_);
v___x_531_ = lean_unsigned_to_nat(2u);
v_nbuckets_532_ = lean_nat_mul(v___x_530_, v___x_531_);
v___x_533_ = lean_unsigned_to_nat(0u);
v___x_534_ = lean_box(0);
v___x_535_ = lean_mk_array(v_nbuckets_532_, v___x_534_);
v___x_536_ = lean_array_propagate_mark(v_data_529_, v___x_535_);
v___x_537_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(v___x_533_, v_data_529_, v___x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(lean_object* v_m_538_, lean_object* v_a_539_, lean_object* v_b_540_){
_start:
{
lean_object* v_size_541_; lean_object* v_buckets_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_588_; 
v_size_541_ = lean_ctor_get(v_m_538_, 0);
v_buckets_542_ = lean_ctor_get(v_m_538_, 1);
v_isSharedCheck_588_ = !lean_is_exclusive(v_m_538_);
if (v_isSharedCheck_588_ == 0)
{
v___x_544_ = v_m_538_;
v_isShared_545_ = v_isSharedCheck_588_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_buckets_542_);
lean_inc(v_size_541_);
lean_dec(v_m_538_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_588_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_546_; uint64_t v___y_548_; 
v___x_546_ = lean_array_get_size(v_buckets_542_);
if (lean_obj_tag(v_a_539_) == 0)
{
uint64_t v___x_586_; 
v___x_586_ = 1723ULL;
v___y_548_ = v___x_586_;
goto v___jp_547_;
}
else
{
uint64_t v_hash_587_; 
v_hash_587_ = lean_ctor_get_uint64(v_a_539_, sizeof(void*)*2);
v___y_548_ = v_hash_587_;
goto v___jp_547_;
}
v___jp_547_:
{
uint64_t v___x_549_; uint64_t v___x_550_; uint64_t v_fold_551_; uint64_t v___x_552_; uint64_t v___x_553_; uint64_t v___x_554_; size_t v___x_555_; size_t v___x_556_; size_t v___x_557_; size_t v___x_558_; size_t v___x_559_; lean_object* v_bkt_560_; uint8_t v___x_561_; 
v___x_549_ = 32ULL;
v___x_550_ = lean_uint64_shift_right(v___y_548_, v___x_549_);
v_fold_551_ = lean_uint64_xor(v___y_548_, v___x_550_);
v___x_552_ = 16ULL;
v___x_553_ = lean_uint64_shift_right(v_fold_551_, v___x_552_);
v___x_554_ = lean_uint64_xor(v_fold_551_, v___x_553_);
v___x_555_ = lean_uint64_to_usize(v___x_554_);
v___x_556_ = lean_usize_of_nat(v___x_546_);
v___x_557_ = ((size_t)1ULL);
v___x_558_ = lean_usize_sub(v___x_556_, v___x_557_);
v___x_559_ = lean_usize_land(v___x_555_, v___x_558_);
v_bkt_560_ = lean_array_uget_borrowed(v_buckets_542_, v___x_559_);
v___x_561_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_539_, v_bkt_560_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; lean_object* v_size_x27_563_; lean_object* v___x_564_; lean_object* v_buckets_x27_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; uint8_t v___x_571_; 
v___x_562_ = lean_unsigned_to_nat(1u);
v_size_x27_563_ = lean_nat_add(v_size_541_, v___x_562_);
lean_dec(v_size_541_);
lean_inc(v_bkt_560_);
v___x_564_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_564_, 0, v_a_539_);
lean_ctor_set(v___x_564_, 1, v_b_540_);
lean_ctor_set(v___x_564_, 2, v_bkt_560_);
v_buckets_x27_565_ = lean_array_uset(v_buckets_542_, v___x_559_, v___x_564_);
v___x_566_ = lean_unsigned_to_nat(4u);
v___x_567_ = lean_nat_mul(v_size_x27_563_, v___x_566_);
v___x_568_ = lean_unsigned_to_nat(3u);
v___x_569_ = lean_nat_div(v___x_567_, v___x_568_);
lean_dec(v___x_567_);
v___x_570_ = lean_array_get_size(v_buckets_x27_565_);
v___x_571_ = lean_nat_dec_le(v___x_569_, v___x_570_);
lean_dec(v___x_569_);
if (v___x_571_ == 0)
{
lean_object* v_val_572_; lean_object* v___x_574_; 
v_val_572_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(v_buckets_x27_565_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 1, v_val_572_);
lean_ctor_set(v___x_544_, 0, v_size_x27_563_);
v___x_574_ = v___x_544_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_size_x27_563_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v_val_572_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
else
{
lean_object* v___x_577_; 
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 1, v_buckets_x27_565_);
lean_ctor_set(v___x_544_, 0, v_size_x27_563_);
v___x_577_ = v___x_544_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_size_x27_563_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_buckets_x27_565_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
else
{
lean_object* v___x_579_; lean_object* v_buckets_x27_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
lean_inc(v_bkt_560_);
v___x_579_ = lean_box(0);
v_buckets_x27_580_ = lean_array_uset(v_buckets_542_, v___x_559_, v___x_579_);
v___x_581_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(v_a_539_, v_b_540_, v_bkt_560_);
v___x_582_ = lean_array_uset(v_buckets_x27_580_, v___x_559_, v___x_581_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 1, v___x_582_);
v___x_584_ = v___x_544_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_size_541_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v___x_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_registerBuiltinAttribute___closed__1(void){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__0));
v___x_591_ = lean_mk_io_user_error(v___x_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute(lean_object* v_attr_594_){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v_toAttributeImplCore_598_; lean_object* v_name_599_; uint8_t v___x_600_; 
v___x_596_ = l_Lean_attributeMapRef;
v___x_597_ = lean_st_ref_get(v___x_596_);
v_toAttributeImplCore_598_ = lean_ctor_get(v_attr_594_, 0);
v_name_599_ = lean_ctor_get(v_toAttributeImplCore_598_, 1);
lean_inc(v_name_599_);
v___x_600_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v___x_597_, v_name_599_);
lean_dec(v___x_597_);
if (v___x_600_ == 0)
{
uint8_t v___x_601_; 
v___x_601_ = l_Lean_initializing();
if (v___x_601_ == 0)
{
lean_object* v___x_602_; lean_object* v___x_603_; 
lean_dec(v_name_599_);
lean_dec_ref(v_attr_594_);
v___x_602_ = lean_obj_once(&l_Lean_registerBuiltinAttribute___closed__1, &l_Lean_registerBuiltinAttribute___closed__1_once, _init_l_Lean_registerBuiltinAttribute___closed__1);
v___x_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
return v___x_603_;
}
else
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_604_ = lean_st_ref_take(v___x_596_);
v___x_605_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v___x_604_, v_name_599_, v_attr_594_);
v___x_606_ = lean_st_ref_put(v___x_596_, v___x_605_);
v___x_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
return v___x_607_;
}
}
else
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
lean_dec_ref(v_attr_594_);
v___x_608_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__2));
v___x_609_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_599_, v___x_600_);
v___x_610_ = lean_string_append(v___x_608_, v___x_609_);
lean_dec_ref(v___x_609_);
v___x_611_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__3));
v___x_612_ = lean_string_append(v___x_610_, v___x_611_);
v___x_613_ = lean_mk_io_user_error(v___x_612_);
v___x_614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
return v___x_614_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute___boxed(lean_object* v_attr_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Lean_registerBuiltinAttribute(v_attr_615_);
return v_res_617_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0(lean_object* v_00_u03b2_618_, lean_object* v_m_619_, lean_object* v_a_620_){
_start:
{
uint8_t v___x_621_; 
v___x_621_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_m_619_, v_a_620_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___boxed(lean_object* v_00_u03b2_622_, lean_object* v_m_623_, lean_object* v_a_624_){
_start:
{
uint8_t v_res_625_; lean_object* v_r_626_; 
v_res_625_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0(v_00_u03b2_622_, v_m_623_, v_a_624_);
lean_dec(v_a_624_);
lean_dec_ref(v_m_623_);
v_r_626_ = lean_box(v_res_625_);
return v_r_626_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1(lean_object* v_00_u03b2_627_, lean_object* v_m_628_, lean_object* v_a_629_, lean_object* v_b_630_){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_m_628_, v_a_629_, v_b_630_);
return v___x_631_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0(lean_object* v_00_u03b2_632_, lean_object* v_a_633_, lean_object* v_x_634_){
_start:
{
uint8_t v___x_635_; 
v___x_635_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_633_, v_x_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___boxed(lean_object* v_00_u03b2_636_, lean_object* v_a_637_, lean_object* v_x_638_){
_start:
{
uint8_t v_res_639_; lean_object* v_r_640_; 
v_res_639_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0(v_00_u03b2_636_, v_a_637_, v_x_638_);
lean_dec(v_x_638_);
lean_dec(v_a_637_);
v_r_640_ = lean_box(v_res_639_);
return v_r_640_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2(lean_object* v_00_u03b2_641_, lean_object* v_data_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(v_data_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3(lean_object* v_00_u03b2_644_, lean_object* v_a_645_, lean_object* v_b_646_, lean_object* v_x_647_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(v_a_645_, v_b_646_, v_x_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_649_, lean_object* v_i_650_, lean_object* v_source_651_, lean_object* v_target_652_){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(v_i_650_, v_source_651_, v_target_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_654_, lean_object* v_x_655_, lean_object* v_x_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(v_x_655_, v_x_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(lean_object* v_ref_658_, lean_object* v_msg_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v_toCold_663_; lean_object* v_currRecDepth_664_; lean_object* v_ref_665_; uint16_t v_optionFlags_666_; uint8_t v_suppressElabErrors_667_; uint8_t v_checkDeprecated_668_; uint8_t v_isRecordingDeps_669_; lean_object* v_ref_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v_toCold_663_ = lean_ctor_get(v___y_660_, 0);
v_currRecDepth_664_ = lean_ctor_get(v___y_660_, 1);
v_ref_665_ = lean_ctor_get(v___y_660_, 2);
v_optionFlags_666_ = lean_ctor_get_uint16(v___y_660_, sizeof(void*)*3);
v_suppressElabErrors_667_ = lean_ctor_get_uint8(v___y_660_, sizeof(void*)*3 + 2);
v_checkDeprecated_668_ = lean_ctor_get_uint8(v___y_660_, sizeof(void*)*3 + 3);
v_isRecordingDeps_669_ = lean_ctor_get_uint8(v___y_660_, sizeof(void*)*3 + 4);
v_ref_670_ = l_Lean_replaceRef(v_ref_658_, v_ref_665_);
lean_inc(v_currRecDepth_664_);
lean_inc_ref(v_toCold_663_);
v___x_671_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_671_, 0, v_toCold_663_);
lean_ctor_set(v___x_671_, 1, v_currRecDepth_664_);
lean_ctor_set(v___x_671_, 2, v_ref_670_);
lean_ctor_set_uint16(v___x_671_, sizeof(void*)*3, v_optionFlags_666_);
lean_ctor_set_uint8(v___x_671_, sizeof(void*)*3 + 2, v_suppressElabErrors_667_);
lean_ctor_set_uint8(v___x_671_, sizeof(void*)*3 + 3, v_checkDeprecated_668_);
lean_ctor_set_uint8(v___x_671_, sizeof(void*)*3 + 4, v_isRecordingDeps_669_);
v___x_672_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v_msg_659_, v___x_671_, v___y_661_);
lean_dec_ref_known(v___x_671_, 3);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg___boxed(lean_object* v_ref_673_, lean_object* v_msg_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_ref_673_, v_msg_674_, v___y_675_, v___y_676_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec(v_ref_673_);
return v_res_678_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_ensureNoArgs___closed__4(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_687_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__3));
v___x_688_ = l_Lean_stringToMessageData(v___x_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object* v_stx_695_, lean_object* v_a_696_, lean_object* v_a_697_){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; uint8_t v___x_710_; 
lean_inc(v_stx_695_);
v___x_708_ = l_Lean_Syntax_getKind(v_stx_695_);
v___x_709_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__6));
v___x_710_ = lean_name_eq(v___x_708_, v___x_709_);
lean_dec(v___x_708_);
if (v___x_710_ == 0)
{
goto v___jp_702_;
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_711_ = lean_unsigned_to_nat(1u);
v___x_712_ = l_Lean_Syntax_getArg(v_stx_695_, v___x_711_);
v___x_713_ = l_Lean_Syntax_isNone(v___x_712_);
lean_dec(v___x_712_);
if (v___x_713_ == 0)
{
goto v___jp_702_;
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_714_ = lean_unsigned_to_nat(2u);
v___x_715_ = l_Lean_Syntax_getArg(v_stx_695_, v___x_714_);
v___x_716_ = l_Lean_Syntax_isNone(v___x_715_);
lean_dec(v___x_715_);
if (v___x_716_ == 0)
{
goto v___jp_702_;
}
else
{
lean_dec(v_stx_695_);
goto v___jp_699_;
}
}
}
v___jp_699_:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = lean_box(0);
v___x_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_701_, 0, v___x_700_);
return v___x_701_;
}
v___jp_702_:
{
lean_object* v___x_703_; lean_object* v___x_704_; uint8_t v___x_705_; 
lean_inc(v_stx_695_);
v___x_703_ = l_Lean_Syntax_getKind(v_stx_695_);
v___x_704_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__2));
v___x_705_ = lean_name_eq(v___x_703_, v___x_704_);
lean_dec(v___x_703_);
if (v___x_705_ == 0)
{
if (lean_obj_tag(v_stx_695_) == 0)
{
goto v___jp_699_;
}
else
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = lean_obj_once(&l_Lean_Attribute_Builtin_ensureNoArgs___closed__4, &l_Lean_Attribute_Builtin_ensureNoArgs___closed__4_once, _init_l_Lean_Attribute_Builtin_ensureNoArgs___closed__4);
v___x_707_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_695_, v___x_706_, v_a_696_, v_a_697_);
lean_dec(v_stx_695_);
return v___x_707_;
}
}
else
{
lean_dec(v_stx_695_);
goto v___jp_699_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___boxed(lean_object* v_stx_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_717_, v_a_718_, v_a_719_);
lean_dec(v_a_719_);
lean_dec_ref(v_a_718_);
return v_res_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0(lean_object* v_00_u03b1_722_, lean_object* v_ref_723_, lean_object* v_msg_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_ref_723_, v_msg_724_, v___y_725_, v___y_726_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___boxed(lean_object* v_00_u03b1_729_, lean_object* v_ref_730_, lean_object* v_msg_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0(v_00_u03b1_729_, v_ref_730_, v_msg_731_, v___y_732_, v___y_733_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
lean_dec(v_ref_730_);
return v_res_735_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_getIdent_x3f___closed__5(void){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent_x3f___closed__4));
v___x_750_ = l_Lean_stringToMessageData(v___x_749_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f(lean_object* v_stx_751_, lean_object* v_a_752_, lean_object* v_a_753_){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; uint8_t v___x_765_; 
lean_inc(v_stx_751_);
v___x_763_ = l_Lean_Syntax_getKind(v_stx_751_);
v___x_764_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__6));
v___x_765_ = lean_name_eq(v___x_763_, v___x_764_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_766_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent_x3f___closed__1));
v___x_767_ = lean_name_eq(v___x_763_, v___x_766_);
if (v___x_767_ == 0)
{
lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_768_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent_x3f___closed__3));
v___x_769_ = lean_name_eq(v___x_763_, v___x_768_);
lean_dec(v___x_763_);
if (v___x_769_ == 0)
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_obj_once(&l_Lean_Attribute_Builtin_getIdent_x3f___closed__5, &l_Lean_Attribute_Builtin_getIdent_x3f___closed__5_once, _init_l_Lean_Attribute_Builtin_getIdent_x3f___closed__5);
v___x_771_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_751_, v___x_770_, v_a_752_, v_a_753_);
lean_dec(v_stx_751_);
return v___x_771_;
}
else
{
goto v___jp_755_;
}
}
else
{
lean_dec(v___x_763_);
goto v___jp_755_;
}
}
else
{
lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; 
lean_dec(v___x_763_);
v___x_772_ = lean_unsigned_to_nat(1u);
v___x_773_ = l_Lean_Syntax_getArg(v_stx_751_, v___x_772_);
lean_dec(v_stx_751_);
v___x_774_ = l_Lean_Syntax_isNone(v___x_773_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_775_ = lean_unsigned_to_nat(0u);
v___x_776_ = l_Lean_Syntax_getArg(v___x_773_, v___x_775_);
lean_dec(v___x_773_);
v___x_777_ = l_Lean_Syntax_isIdent(v___x_776_);
if (v___x_777_ == 0)
{
lean_dec(v___x_776_);
goto v___jp_760_;
}
else
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_778_, 0, v___x_776_);
v___x_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
return v___x_779_;
}
}
else
{
lean_dec(v___x_773_);
goto v___jp_760_;
}
}
v___jp_755_:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_756_ = lean_unsigned_to_nat(1u);
v___x_757_ = l_Lean_Syntax_getArg(v_stx_751_, v___x_756_);
lean_dec(v_stx_751_);
v___x_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
v___x_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
return v___x_759_;
}
v___jp_760_:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = lean_box(0);
v___x_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
return v___x_762_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___boxed(lean_object* v_stx_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_Lean_Attribute_Builtin_getIdent_x3f(v_stx_780_, v_a_781_, v_a_782_);
lean_dec(v_a_782_);
lean_dec_ref(v_a_781_);
return v_res_784_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_getIdent___closed__1(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent___closed__0));
v___x_787_ = l_Lean_stringToMessageData(v___x_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent(lean_object* v_stx_788_, lean_object* v_a_789_, lean_object* v_a_790_){
_start:
{
lean_object* v___x_792_; 
lean_inc(v_stx_788_);
v___x_792_ = l_Lean_Attribute_Builtin_getIdent_x3f(v_stx_788_, v_a_789_, v_a_790_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_806_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_806_ == 0)
{
v___x_795_ = v___x_792_;
v_isShared_796_ = v_isSharedCheck_806_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_792_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_806_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
if (lean_obj_tag(v_a_793_) == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
lean_del_object(v___x_795_);
v___x_797_ = lean_obj_once(&l_Lean_Attribute_Builtin_getIdent___closed__1, &l_Lean_Attribute_Builtin_getIdent___closed__1_once, _init_l_Lean_Attribute_Builtin_getIdent___closed__1);
lean_inc(v_stx_788_);
v___x_798_ = l_Lean_MessageData_ofSyntax(v_stx_788_);
v___x_799_ = l_Lean_indentD(v___x_798_);
v___x_800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_797_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
v___x_801_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_788_, v___x_800_, v_a_789_, v_a_790_);
lean_dec(v_stx_788_);
return v___x_801_;
}
else
{
lean_object* v_val_802_; lean_object* v___x_804_; 
lean_dec(v_stx_788_);
v_val_802_ = lean_ctor_get(v_a_793_, 0);
lean_inc(v_val_802_);
lean_dec_ref_known(v_a_793_, 1);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v_val_802_);
v___x_804_ = v___x_795_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_val_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec(v_stx_788_);
v_a_807_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_792_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_792_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent___boxed(lean_object* v_stx_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_Attribute_Builtin_getIdent(v_stx_815_, v_a_816_, v_a_817_);
lean_dec(v_a_817_);
lean_dec_ref(v_a_816_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f(lean_object* v_stx_820_, lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_Attribute_Builtin_getIdent_x3f(v_stx_820_, v_a_821_, v_a_822_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_845_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_845_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_845_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_845_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
if (lean_obj_tag(v_a_825_) == 0)
{
lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_829_ = lean_box(0);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_829_);
v___x_831_ = v___x_827_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
else
{
lean_object* v_val_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_844_; 
v_val_833_ = lean_ctor_get(v_a_825_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v_a_825_);
if (v_isSharedCheck_844_ == 0)
{
v___x_835_ = v_a_825_;
v_isShared_836_ = v_isSharedCheck_844_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_val_833_);
lean_dec(v_a_825_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_844_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_837_ = l_Lean_Syntax_getId(v_val_833_);
lean_dec(v_val_833_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v___x_837_);
v___x_839_ = v___x_835_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v___x_837_);
v___x_839_ = v_reuseFailAlloc_843_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
lean_object* v___x_841_; 
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_839_);
v___x_841_ = v___x_827_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
}
}
else
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
v_a_846_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_824_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_824_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f___boxed(lean_object* v_stx_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lean_Attribute_Builtin_getId_x3f(v_stx_854_, v_a_855_, v_a_856_);
lean_dec(v_a_856_);
lean_dec_ref(v_a_855_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId(lean_object* v_stx_859_, lean_object* v_a_860_, lean_object* v_a_861_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = l_Lean_Attribute_Builtin_getIdent(v_stx_859_, v_a_860_, v_a_861_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_872_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_872_ == 0)
{
v___x_866_ = v___x_863_;
v_isShared_867_ = v_isSharedCheck_872_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_863_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_872_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_868_; lean_object* v___x_870_; 
v___x_868_ = l_Lean_Syntax_getId(v_a_864_);
lean_dec(v_a_864_);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v___x_868_);
v___x_870_ = v___x_866_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_868_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
else
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
v_a_873_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_880_ == 0)
{
v___x_875_ = v___x_863_;
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_863_);
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
v_reuseFailAlloc_879_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId___boxed(lean_object* v_stx_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lean_Attribute_Builtin_getId(v_stx_881_, v_a_882_, v_a_883_);
lean_dec(v_a_883_);
lean_dec_ref(v_a_882_);
return v_res_885_;
}
}
static lean_object* _init_l_Lean_getAttrParamOptPrio___closed__1(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = ((lean_object*)(l_Lean_getAttrParamOptPrio___closed__0));
v___x_888_ = l_Lean_stringToMessageData(v___x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio(lean_object* v_optPrioStx_889_, lean_object* v_a_890_, lean_object* v_a_891_){
_start:
{
uint8_t v___x_893_; 
v___x_893_ = l_Lean_Syntax_isNone(v_optPrioStx_889_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_894_ = lean_unsigned_to_nat(0u);
v___x_895_ = l_Lean_Syntax_getArg(v_optPrioStx_889_, v___x_894_);
v___x_896_ = l_Lean_Syntax_isNatLit_x3f(v___x_895_);
lean_dec(v___x_895_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_897_ = lean_obj_once(&l_Lean_getAttrParamOptPrio___closed__1, &l_Lean_getAttrParamOptPrio___closed__1_once, _init_l_Lean_getAttrParamOptPrio___closed__1);
lean_inc(v_optPrioStx_889_);
v___x_898_ = l_Lean_MessageData_ofSyntax(v_optPrioStx_889_);
v___x_899_ = l_Lean_indentD(v___x_898_);
v___x_900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_897_);
lean_ctor_set(v___x_900_, 1, v___x_899_);
v___x_901_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_optPrioStx_889_, v___x_900_, v_a_890_, v_a_891_);
lean_dec(v_optPrioStx_889_);
return v___x_901_;
}
else
{
lean_object* v_val_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec(v_optPrioStx_889_);
v_val_902_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_896_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_val_902_);
lean_dec(v___x_896_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
lean_ctor_set_tag(v___x_904_, 0);
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_val_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; 
lean_dec(v_optPrioStx_889_);
v___x_910_ = lean_unsigned_to_nat(1000u);
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio___boxed(lean_object* v_optPrioStx_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = l_Lean_getAttrParamOptPrio(v_optPrioStx_912_, v_a_913_, v_a_914_);
lean_dec(v_a_914_);
lean_dec_ref(v_a_913_);
return v_res_916_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_getPrio___closed__1(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_918_ = ((lean_object*)(l_Lean_Attribute_Builtin_getPrio___closed__0));
v___x_919_ = l_Lean_stringToMessageData(v___x_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio(lean_object* v_stx_920_, lean_object* v_a_921_, lean_object* v_a_922_){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; 
lean_inc(v_stx_920_);
v___x_924_ = l_Lean_Syntax_getKind(v_stx_920_);
v___x_925_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__6));
v___x_926_ = lean_name_eq(v___x_924_, v___x_925_);
lean_dec(v___x_924_);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_927_ = lean_obj_once(&l_Lean_Attribute_Builtin_getPrio___closed__1, &l_Lean_Attribute_Builtin_getPrio___closed__1_once, _init_l_Lean_Attribute_Builtin_getPrio___closed__1);
lean_inc(v_stx_920_);
v___x_928_ = l_Lean_MessageData_ofSyntax(v_stx_920_);
v___x_929_ = l_Lean_indentD(v___x_928_);
v___x_930_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_927_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
v___x_931_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_920_, v___x_930_, v_a_921_, v_a_922_);
lean_dec(v_stx_920_);
return v___x_931_;
}
else
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_932_ = lean_unsigned_to_nat(1u);
v___x_933_ = l_Lean_Syntax_getArg(v_stx_920_, v___x_932_);
lean_dec(v_stx_920_);
v___x_934_ = l_Lean_getAttrParamOptPrio(v___x_933_, v_a_921_, v_a_922_);
return v___x_934_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio___boxed(lean_object* v_stx_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_Attribute_Builtin_getPrio(v_stx_935_, v_a_936_, v_a_937_);
lean_dec(v_a_937_);
lean_dec_ref(v_a_936_);
return v_res_939_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__1(void){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_941_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__0));
v___x_942_ = l_Lean_stringToMessageData(v___x_941_);
return v___x_942_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__3(void){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__2));
v___x_945_ = l_Lean_stringToMessageData(v___x_944_);
return v___x_945_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5(void){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_948_ = l_Lean_stringToMessageData(v___x_947_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg(lean_object* v_inst_949_, lean_object* v_inst_950_, lean_object* v_name_951_, uint8_t v_kind_952_){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___y_959_; 
v___x_953_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__1);
v___x_954_ = l_Lean_MessageData_ofName(v_name_951_);
v___x_955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_953_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__3);
v___x_957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_955_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
switch(v_kind_952_)
{
case 0:
{
lean_object* v___x_966_; 
v___x_966_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__0));
v___y_959_ = v___x_966_;
goto v___jp_958_;
}
case 1:
{
lean_object* v___x_967_; 
v___x_967_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__1));
v___y_959_ = v___x_967_;
goto v___jp_958_;
}
default: 
{
lean_object* v___x_968_; 
v___x_968_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__2));
v___y_959_ = v___x_968_;
goto v___jp_958_;
}
}
v___jp_958_:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
lean_inc_ref(v___y_959_);
v___x_960_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_960_, 0, v___y_959_);
v___x_961_ = l_Lean_MessageData_ofFormat(v___x_960_);
v___x_962_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_962_, 0, v___x_957_);
lean_ctor_set(v___x_962_, 1, v___x_961_);
v___x_963_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_962_);
lean_ctor_set(v___x_964_, 1, v___x_963_);
v___x_965_ = l_Lean_throwError___redArg(v_inst_949_, v_inst_950_, v___x_964_);
return v___x_965_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg___boxed(lean_object* v_inst_969_, lean_object* v_inst_970_, lean_object* v_name_971_, lean_object* v_kind_972_){
_start:
{
uint8_t v_kind_boxed_973_; lean_object* v_res_974_; 
v_kind_boxed_973_ = lean_unbox(v_kind_972_);
v_res_974_ = l_Lean_throwAttrMustBeGlobal___redArg(v_inst_969_, v_inst_970_, v_name_971_, v_kind_boxed_973_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal(lean_object* v_m_975_, lean_object* v_inst_976_, lean_object* v_inst_977_, lean_object* v_00_u03b1_978_, lean_object* v_name_979_, uint8_t v_kind_980_){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = l_Lean_throwAttrMustBeGlobal___redArg(v_inst_976_, v_inst_977_, v_name_979_, v_kind_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___boxed(lean_object* v_m_982_, lean_object* v_inst_983_, lean_object* v_inst_984_, lean_object* v_00_u03b1_985_, lean_object* v_name_986_, lean_object* v_kind_987_){
_start:
{
uint8_t v_kind_boxed_988_; lean_object* v_res_989_; 
v_kind_boxed_988_ = lean_unbox(v_kind_987_);
v_res_989_ = l_Lean_throwAttrMustBeGlobal(v_m_982_, v_inst_983_, v_inst_984_, v_00_u03b1_985_, v_name_986_, v_kind_boxed_988_);
return v_res_989_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___redArg___closed__0));
v___x_992_ = l_Lean_stringToMessageData(v___x_991_);
return v___x_992_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___redArg___closed__2));
v___x_995_ = l_Lean_stringToMessageData(v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__5(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___redArg___closed__4));
v___x_998_ = l_Lean_stringToMessageData(v___x_997_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___redArg(lean_object* v_inst_999_, lean_object* v_inst_1000_, lean_object* v_attrName_1001_, lean_object* v_declName_1002_){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; uint8_t v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1003_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1004_ = l_Lean_MessageData_ofName(v_attrName_1001_);
v___x_1005_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1003_);
lean_ctor_set(v___x_1005_, 1, v___x_1004_);
v___x_1006_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1007_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1005_);
lean_ctor_set(v___x_1007_, 1, v___x_1006_);
v___x_1008_ = 0;
v___x_1009_ = l_Lean_MessageData_ofConstName(v_declName_1002_, v___x_1008_);
v___x_1010_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1007_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__5);
v___x_1012_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1010_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
v___x_1013_ = l_Lean_throwError___redArg(v_inst_999_, v_inst_1000_, v___x_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule(lean_object* v_m_1014_, lean_object* v_inst_1015_, lean_object* v_inst_1016_, lean_object* v_00_u03b1_1017_, lean_object* v_attrName_1018_, lean_object* v_declName_1019_){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = l_Lean_throwAttrDeclInImportedModule___redArg(v_inst_1015_, v_inst_1016_, v_attrName_1018_, v_declName_1019_);
return v___x_1020_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0));
v___x_1023_ = l_Lean_stringToMessageData(v___x_1022_);
return v___x_1023_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3(void){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2));
v___x_1026_ = l_Lean_stringToMessageData(v___x_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg(lean_object* v_inst_1027_, lean_object* v_inst_1028_, lean_object* v_attrName_1029_, lean_object* v_declName_1030_, lean_object* v_asyncPrefix_x3f_1031_){
_start:
{
lean_object* v___y_1033_; 
if (lean_obj_tag(v_asyncPrefix_x3f_1031_) == 0)
{
lean_object* v___x_1046_; 
v___x_1046_ = l_Lean_MessageData_nil;
v___y_1033_ = v___x_1046_;
goto v___jp_1032_;
}
else
{
lean_object* v_val_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v_val_1047_ = lean_ctor_get(v_asyncPrefix_x3f_1031_, 0);
lean_inc(v_val_1047_);
lean_dec_ref_known(v_asyncPrefix_x3f_1031_, 1);
v___x_1048_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3);
v___x_1049_ = l_Lean_MessageData_ofName(v_val_1047_);
v___x_1050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1048_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_1052_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___y_1033_ = v___x_1052_;
goto v___jp_1032_;
}
v___jp_1032_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1034_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1035_ = l_Lean_MessageData_ofName(v_attrName_1029_);
v___x_1036_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1034_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1037_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1036_);
lean_ctor_set(v___x_1038_, 1, v___x_1037_);
v___x_1039_ = 0;
v___x_1040_ = l_Lean_MessageData_ofConstName(v_declName_1030_, v___x_1039_);
v___x_1041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1038_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1);
v___x_1043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1041_);
lean_ctor_set(v___x_1043_, 1, v___x_1042_);
v___x_1044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
lean_ctor_set(v___x_1044_, 1, v___y_1033_);
v___x_1045_ = l_Lean_throwError___redArg(v_inst_1027_, v_inst_1028_, v___x_1044_);
return v___x_1045_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx(lean_object* v_m_1053_, lean_object* v_inst_1054_, lean_object* v_inst_1055_, lean_object* v_00_u03b1_1056_, lean_object* v_attrName_1057_, lean_object* v_declName_1058_, lean_object* v_asyncPrefix_x3f_1059_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Lean_throwAttrNotInAsyncCtx___redArg(v_inst_1054_, v_inst_1055_, v_attrName_1057_, v_declName_1058_, v_asyncPrefix_x3f_1059_);
return v___x_1060_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1(void){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0));
v___x_1063_ = l_Lean_stringToMessageData(v___x_1062_);
return v___x_1063_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3(void){
_start:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1065_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2));
v___x_1066_ = l_Lean_stringToMessageData(v___x_1065_);
return v___x_1066_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4));
v___x_1069_ = l_Lean_stringToMessageData(v___x_1068_);
return v___x_1069_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7(void){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6));
v___x_1072_ = l_Lean_stringToMessageData(v___x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg(lean_object* v_inst_1073_, lean_object* v_inst_1074_, lean_object* v_attrName_1075_, lean_object* v_declName_1076_, lean_object* v_givenType_1077_, lean_object* v_expectedType_1078_){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; uint8_t v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1079_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1080_ = l_Lean_MessageData_ofName(v_attrName_1075_);
lean_inc_ref(v___x_1080_);
v___x_1081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1079_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1);
v___x_1083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1081_);
lean_ctor_set(v___x_1083_, 1, v___x_1082_);
v___x_1084_ = 0;
v___x_1085_ = l_Lean_MessageData_ofConstName(v_declName_1076_, v___x_1084_);
v___x_1086_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1083_);
lean_ctor_set(v___x_1086_, 1, v___x_1085_);
v___x_1087_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3);
v___x_1088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = l_Lean_indentExpr(v_givenType_1077_);
v___x_1090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1088_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5);
v___x_1092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1090_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
lean_ctor_set(v___x_1093_, 1, v___x_1080_);
v___x_1094_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7);
v___x_1095_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1093_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
v___x_1096_ = l_Lean_indentExpr(v_expectedType_1078_);
v___x_1097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = l_Lean_throwError___redArg(v_inst_1073_, v_inst_1074_, v___x_1097_);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType(lean_object* v_m_1099_, lean_object* v_inst_1100_, lean_object* v_inst_1101_, lean_object* v_00_u03b1_1102_, lean_object* v_attrName_1103_, lean_object* v_declName_1104_, lean_object* v_givenType_1105_, lean_object* v_expectedType_1106_){
_start:
{
lean_object* v___x_1107_; 
v___x_1107_ = l_Lean_throwAttrDeclNotOfExpectedType___redArg(v_inst_1100_, v_inst_1101_, v_attrName_1103_, v_declName_1104_, v_givenType_1105_, v_expectedType_1106_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(lean_object* v_constName_1108_, uint8_t v_skipRealize_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v___x_1112_; lean_object* v_env_1113_; uint8_t v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1112_ = lean_st_ref_get(v___y_1110_);
v_env_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc_ref(v_env_1113_);
lean_dec(v___x_1112_);
v___x_1114_ = l_Lean_Environment_contains(v_env_1113_, v_constName_1108_, v_skipRealize_1109_);
v___x_1115_ = lean_box(v___x_1114_);
v___x_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg___boxed(lean_object* v_constName_1117_, lean_object* v_skipRealize_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
uint8_t v_skipRealize_boxed_1121_; lean_object* v_res_1122_; 
v_skipRealize_boxed_1121_ = lean_unbox(v_skipRealize_1118_);
v_res_1122_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(v_constName_1117_, v_skipRealize_boxed_1121_, v___y_1119_);
lean_dec(v___y_1119_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1(lean_object* v_constName_1123_, uint8_t v_skipRealize_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(v_constName_1123_, v_skipRealize_1124_, v___y_1126_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___boxed(lean_object* v_constName_1129_, lean_object* v_skipRealize_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
uint8_t v_skipRealize_boxed_1134_; lean_object* v_res_1135_; 
v_skipRealize_boxed_1134_ = lean_unbox(v_skipRealize_1130_);
v_res_1135_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1(v_constName_1129_, v_skipRealize_boxed_1134_, v___y_1131_, v___y_1132_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(lean_object* v___y_1136_, uint8_t v_isExporting_1137_, lean_object* v___x_1138_, lean_object* v_a_x3f_1139_){
_start:
{
lean_object* v___x_1141_; lean_object* v_env_1142_; lean_object* v_nextMacroScope_1143_; lean_object* v_ngen_1144_; lean_object* v_auxDeclNGen_1145_; lean_object* v_traceState_1146_; lean_object* v_recordedDeps_1147_; lean_object* v_messages_1148_; lean_object* v_infoState_1149_; lean_object* v_snapshotTasks_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1161_; 
v___x_1141_ = lean_st_ref_take(v___y_1136_);
v_env_1142_ = lean_ctor_get(v___x_1141_, 0);
v_nextMacroScope_1143_ = lean_ctor_get(v___x_1141_, 1);
v_ngen_1144_ = lean_ctor_get(v___x_1141_, 2);
v_auxDeclNGen_1145_ = lean_ctor_get(v___x_1141_, 3);
v_traceState_1146_ = lean_ctor_get(v___x_1141_, 4);
v_recordedDeps_1147_ = lean_ctor_get(v___x_1141_, 6);
v_messages_1148_ = lean_ctor_get(v___x_1141_, 7);
v_infoState_1149_ = lean_ctor_get(v___x_1141_, 8);
v_snapshotTasks_1150_ = lean_ctor_get(v___x_1141_, 9);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1161_ == 0)
{
lean_object* v_unused_1162_; 
v_unused_1162_ = lean_ctor_get(v___x_1141_, 5);
lean_dec(v_unused_1162_);
v___x_1152_ = v___x_1141_;
v_isShared_1153_ = v_isSharedCheck_1161_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_snapshotTasks_1150_);
lean_inc(v_infoState_1149_);
lean_inc(v_messages_1148_);
lean_inc(v_recordedDeps_1147_);
lean_inc(v_traceState_1146_);
lean_inc(v_auxDeclNGen_1145_);
lean_inc(v_ngen_1144_);
lean_inc(v_nextMacroScope_1143_);
lean_inc(v_env_1142_);
lean_dec(v___x_1141_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1161_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1157_; 
v___x_1154_ = lean_box(0);
v___x_1155_ = l_Lean_Environment_setExporting(v_env_1142_, v_isExporting_1137_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 5, v___x_1138_);
lean_ctor_set(v___x_1152_, 0, v___x_1155_);
v___x_1157_ = v___x_1152_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1155_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v_nextMacroScope_1143_);
lean_ctor_set(v_reuseFailAlloc_1160_, 2, v_ngen_1144_);
lean_ctor_set(v_reuseFailAlloc_1160_, 3, v_auxDeclNGen_1145_);
lean_ctor_set(v_reuseFailAlloc_1160_, 4, v_traceState_1146_);
lean_ctor_set(v_reuseFailAlloc_1160_, 5, v___x_1138_);
lean_ctor_set(v_reuseFailAlloc_1160_, 6, v_recordedDeps_1147_);
lean_ctor_set(v_reuseFailAlloc_1160_, 7, v_messages_1148_);
lean_ctor_set(v_reuseFailAlloc_1160_, 8, v_infoState_1149_);
lean_ctor_set(v_reuseFailAlloc_1160_, 9, v_snapshotTasks_1150_);
v___x_1157_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1158_ = lean_st_ref_put(v___y_1136_, v___x_1157_);
v___x_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1154_);
return v___x_1159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0___boxed(lean_object* v___y_1163_, lean_object* v_isExporting_1164_, lean_object* v___x_1165_, lean_object* v_a_x3f_1166_, lean_object* v___y_1167_){
_start:
{
uint8_t v_isExporting_boxed_1168_; lean_object* v_res_1169_; 
v_isExporting_boxed_1168_ = lean_unbox(v_isExporting_1164_);
v_res_1169_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(v___y_1163_, v_isExporting_boxed_1168_, v___x_1165_, v_a_x3f_1166_);
lean_dec(v_a_x3f_1166_);
lean_dec(v___y_1163_);
return v_res_1169_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0);
v___x_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
return v___x_1171_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0);
v___x_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1172_);
lean_ctor_set(v___x_1173_, 1, v___x_1172_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(lean_object* v_x_1174_, uint8_t v_isExporting_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; lean_object* v_env_1180_; lean_object* v___x_1181_; uint8_t v_isModule_1182_; 
v___x_1179_ = lean_st_ref_get(v___y_1177_);
v_env_1180_ = lean_ctor_get(v___x_1179_, 0);
lean_inc_ref(v_env_1180_);
lean_dec(v___x_1179_);
v___x_1181_ = l_Lean_Environment_header(v_env_1180_);
v_isModule_1182_ = lean_ctor_get_uint8(v___x_1181_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1181_);
if (v_isModule_1182_ == 0)
{
lean_object* v___x_1183_; 
lean_dec_ref(v_env_1180_);
lean_inc(v___y_1177_);
lean_inc_ref(v___y_1176_);
v___x_1183_ = lean_apply_3(v_x_1174_, v___y_1176_, v___y_1177_, lean_box(0));
return v___x_1183_;
}
else
{
uint8_t v_isExporting_1184_; 
v_isExporting_1184_ = lean_ctor_get_uint8(v_env_1180_, sizeof(void*)*13);
lean_dec_ref(v_env_1180_);
if (v_isExporting_1175_ == 0)
{
if (v_isExporting_1184_ == 0)
{
lean_object* v___x_1236_; 
lean_inc(v___y_1177_);
lean_inc_ref(v___y_1176_);
v___x_1236_ = lean_apply_3(v_x_1174_, v___y_1176_, v___y_1177_, lean_box(0));
return v___x_1236_;
}
else
{
goto v___jp_1185_;
}
}
else
{
if (v_isExporting_1184_ == 0)
{
goto v___jp_1185_;
}
else
{
lean_object* v___x_1237_; 
lean_inc(v___y_1177_);
lean_inc_ref(v___y_1176_);
v___x_1237_ = lean_apply_3(v_x_1174_, v___y_1176_, v___y_1177_, lean_box(0));
return v___x_1237_;
}
}
v___jp_1185_:
{
lean_object* v___x_1186_; lean_object* v_env_1187_; lean_object* v_nextMacroScope_1188_; lean_object* v_ngen_1189_; lean_object* v_auxDeclNGen_1190_; lean_object* v_traceState_1191_; lean_object* v_recordedDeps_1192_; lean_object* v_messages_1193_; lean_object* v_infoState_1194_; lean_object* v_snapshotTasks_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1234_; 
v___x_1186_ = lean_st_ref_take(v___y_1177_);
v_env_1187_ = lean_ctor_get(v___x_1186_, 0);
v_nextMacroScope_1188_ = lean_ctor_get(v___x_1186_, 1);
v_ngen_1189_ = lean_ctor_get(v___x_1186_, 2);
v_auxDeclNGen_1190_ = lean_ctor_get(v___x_1186_, 3);
v_traceState_1191_ = lean_ctor_get(v___x_1186_, 4);
v_recordedDeps_1192_ = lean_ctor_get(v___x_1186_, 6);
v_messages_1193_ = lean_ctor_get(v___x_1186_, 7);
v_infoState_1194_ = lean_ctor_get(v___x_1186_, 8);
v_snapshotTasks_1195_ = lean_ctor_get(v___x_1186_, 9);
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1186_);
if (v_isSharedCheck_1234_ == 0)
{
lean_object* v_unused_1235_; 
v_unused_1235_ = lean_ctor_get(v___x_1186_, 5);
lean_dec(v_unused_1235_);
v___x_1197_ = v___x_1186_;
v_isShared_1198_ = v_isSharedCheck_1234_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_snapshotTasks_1195_);
lean_inc(v_infoState_1194_);
lean_inc(v_messages_1193_);
lean_inc(v_recordedDeps_1192_);
lean_inc(v_traceState_1191_);
lean_inc(v_auxDeclNGen_1190_);
lean_inc(v_ngen_1189_);
lean_inc(v_nextMacroScope_1188_);
lean_inc(v_env_1187_);
lean_dec(v___x_1186_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1234_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1202_; 
v___x_1199_ = l_Lean_Environment_setExporting(v_env_1187_, v_isExporting_1175_);
v___x_1200_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 5, v___x_1200_);
lean_ctor_set(v___x_1197_, 0, v___x_1199_);
v___x_1202_ = v___x_1197_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v___x_1199_);
lean_ctor_set(v_reuseFailAlloc_1233_, 1, v_nextMacroScope_1188_);
lean_ctor_set(v_reuseFailAlloc_1233_, 2, v_ngen_1189_);
lean_ctor_set(v_reuseFailAlloc_1233_, 3, v_auxDeclNGen_1190_);
lean_ctor_set(v_reuseFailAlloc_1233_, 4, v_traceState_1191_);
lean_ctor_set(v_reuseFailAlloc_1233_, 5, v___x_1200_);
lean_ctor_set(v_reuseFailAlloc_1233_, 6, v_recordedDeps_1192_);
lean_ctor_set(v_reuseFailAlloc_1233_, 7, v_messages_1193_);
lean_ctor_set(v_reuseFailAlloc_1233_, 8, v_infoState_1194_);
lean_ctor_set(v_reuseFailAlloc_1233_, 9, v_snapshotTasks_1195_);
v___x_1202_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1203_; lean_object* v_r_1204_; 
v___x_1203_ = lean_st_ref_put(v___y_1177_, v___x_1202_);
lean_inc(v___y_1177_);
lean_inc_ref(v___y_1176_);
v_r_1204_ = lean_apply_3(v_x_1174_, v___y_1176_, v___y_1177_, lean_box(0));
if (lean_obj_tag(v_r_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1221_; 
v_a_1205_ = lean_ctor_get(v_r_1204_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v_r_1204_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1207_ = v_r_1204_;
v_isShared_1208_ = v_isSharedCheck_1221_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v_r_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1221_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
lean_inc(v_a_1205_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set_tag(v___x_1207_, 1);
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
lean_object* v___x_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1218_; 
v___x_1211_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(v___y_1177_, v_isExporting_1184_, v___x_1200_, v___x_1210_);
lean_dec_ref(v___x_1210_);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1218_ == 0)
{
lean_object* v_unused_1219_; 
v_unused_1219_ = lean_ctor_get(v___x_1211_, 0);
lean_dec(v_unused_1219_);
v___x_1213_ = v___x_1211_;
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
else
{
lean_dec(v___x_1211_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1216_; 
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 0, v_a_1205_);
v___x_1216_ = v___x_1213_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_a_1205_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
}
}
else
{
lean_object* v_a_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1231_; 
v_a_1222_ = lean_ctor_get(v_r_1204_, 0);
lean_inc(v_a_1222_);
lean_dec_ref_known(v_r_1204_, 1);
v___x_1223_ = lean_box(0);
v___x_1224_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(v___y_1177_, v_isExporting_1184_, v___x_1200_, v___x_1223_);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1231_ == 0)
{
lean_object* v_unused_1232_; 
v_unused_1232_ = lean_ctor_get(v___x_1224_, 0);
lean_dec(v_unused_1232_);
v___x_1226_ = v___x_1224_;
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
else
{
lean_dec(v___x_1224_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1229_; 
if (v_isShared_1227_ == 0)
{
lean_ctor_set_tag(v___x_1226_, 1);
lean_ctor_set(v___x_1226_, 0, v_a_1222_);
v___x_1229_ = v___x_1226_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_a_1222_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___boxed(lean_object* v_x_1238_, lean_object* v_isExporting_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
uint8_t v_isExporting_boxed_1243_; lean_object* v_res_1244_; 
v_isExporting_boxed_1243_ = lean_unbox(v_isExporting_1239_);
v_res_1244_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(v_x_1238_, v_isExporting_boxed_1243_, v___y_1240_, v___y_1241_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2(lean_object* v_00_u03b1_1245_, lean_object* v_x_1246_, uint8_t v_isExporting_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(v_x_1246_, v_isExporting_1247_, v___y_1248_, v___y_1249_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___boxed(lean_object* v_00_u03b1_1252_, lean_object* v_x_1253_, lean_object* v_isExporting_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
uint8_t v_isExporting_boxed_1258_; lean_object* v_res_1259_; 
v_isExporting_boxed_1258_ = lean_unbox(v_isExporting_1254_);
v_res_1259_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2(v_00_u03b1_1252_, v_x_1253_, v_isExporting_boxed_1258_, v___y_1255_, v___y_1256_);
lean_dec(v___y_1256_);
lean_dec_ref(v___y_1255_);
return v_res_1259_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(lean_object* v_opts_1260_, lean_object* v_opt_1261_){
_start:
{
lean_object* v_name_1262_; lean_object* v_defValue_1263_; lean_object* v_map_1264_; lean_object* v___x_1265_; 
v_name_1262_ = lean_ctor_get(v_opt_1261_, 0);
v_defValue_1263_ = lean_ctor_get(v_opt_1261_, 1);
v_map_1264_ = lean_ctor_get(v_opts_1260_, 0);
v___x_1265_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1264_, v_name_1262_);
if (lean_obj_tag(v___x_1265_) == 0)
{
uint8_t v___x_1266_; 
v___x_1266_ = lean_unbox(v_defValue_1263_);
return v___x_1266_;
}
else
{
lean_object* v_val_1267_; 
v_val_1267_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_val_1267_);
lean_dec_ref_known(v___x_1265_, 1);
if (lean_obj_tag(v_val_1267_) == 1)
{
uint8_t v_v_1268_; 
v_v_1268_ = lean_ctor_get_uint8(v_val_1267_, 0);
lean_dec_ref_known(v_val_1267_, 0);
return v_v_1268_;
}
else
{
uint8_t v___x_1269_; 
lean_dec(v_val_1267_);
v___x_1269_ = lean_unbox(v_defValue_1263_);
return v___x_1269_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3___boxed(lean_object* v_opts_1270_, lean_object* v_opt_1271_){
_start:
{
uint8_t v_res_1272_; lean_object* v_r_1273_; 
v_res_1272_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(v_opts_1270_, v_opt_1271_);
lean_dec_ref(v_opt_1271_);
lean_dec_ref(v_opts_1270_);
v_r_1273_ = lean_box(v_res_1272_);
return v_r_1273_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0(uint8_t v___x_1281_, lean_object* v_x_1282_){
_start:
{
if (lean_obj_tag(v_x_1282_) == 1)
{
lean_object* v_pre_1283_; 
v_pre_1283_ = lean_ctor_get(v_x_1282_, 0);
switch(lean_obj_tag(v_pre_1283_))
{
case 1:
{
lean_object* v_pre_1284_; 
v_pre_1284_ = lean_ctor_get(v_pre_1283_, 0);
switch(lean_obj_tag(v_pre_1284_))
{
case 0:
{
lean_object* v_str_1285_; lean_object* v_str_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
v_str_1285_ = lean_ctor_get(v_x_1282_, 1);
v_str_1286_ = lean_ctor_get(v_pre_1283_, 1);
v___x_1287_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0));
v___x_1288_ = lean_string_dec_eq(v_str_1286_, v___x_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; uint8_t v___x_1290_; 
v___x_1289_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__2));
v___x_1290_ = lean_string_dec_eq(v_str_1286_, v___x_1289_);
if (v___x_1290_ == 0)
{
return v___x_1290_;
}
else
{
lean_object* v___x_1291_; uint8_t v___x_1292_; 
v___x_1291_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1));
v___x_1292_ = lean_string_dec_eq(v_str_1285_, v___x_1291_);
return v___x_1292_;
}
}
else
{
lean_object* v___x_1293_; uint8_t v___x_1294_; 
v___x_1293_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2));
v___x_1294_ = lean_string_dec_eq(v_str_1285_, v___x_1293_);
return v___x_1294_;
}
}
case 1:
{
lean_object* v_pre_1295_; 
v_pre_1295_ = lean_ctor_get(v_pre_1284_, 0);
if (lean_obj_tag(v_pre_1295_) == 0)
{
lean_object* v_str_1296_; lean_object* v_str_1297_; lean_object* v_str_1298_; lean_object* v___x_1299_; uint8_t v___x_1300_; 
v_str_1296_ = lean_ctor_get(v_x_1282_, 1);
v_str_1297_ = lean_ctor_get(v_pre_1283_, 1);
v_str_1298_ = lean_ctor_get(v_pre_1284_, 1);
v___x_1299_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3));
v___x_1300_ = lean_string_dec_eq(v_str_1298_, v___x_1299_);
if (v___x_1300_ == 0)
{
return v___x_1300_;
}
else
{
lean_object* v___x_1301_; uint8_t v___x_1302_; 
v___x_1301_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4));
v___x_1302_ = lean_string_dec_eq(v_str_1297_, v___x_1301_);
if (v___x_1302_ == 0)
{
return v___x_1302_;
}
else
{
lean_object* v___x_1303_; uint8_t v___x_1304_; 
v___x_1303_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5));
v___x_1304_ = lean_string_dec_eq(v_str_1296_, v___x_1303_);
return v___x_1304_;
}
}
}
else
{
return v___x_1281_;
}
}
default: 
{
return v___x_1281_;
}
}
}
case 0:
{
lean_object* v_str_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; 
v_str_1305_ = lean_ctor_get(v_x_1282_, 1);
v___x_1306_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6));
v___x_1307_ = lean_string_dec_eq(v_str_1305_, v___x_1306_);
return v___x_1307_;
}
default: 
{
return v___x_1281_;
}
}
}
else
{
return v___x_1281_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___boxed(lean_object* v___x_1308_, lean_object* v_x_1309_){
_start:
{
uint8_t v___x_5171__boxed_1310_; uint8_t v_res_1311_; lean_object* v_r_1312_; 
v___x_5171__boxed_1310_ = lean_unbox(v___x_1308_);
v_res_1311_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0(v___x_5171__boxed_1310_, v_x_1309_);
lean_dec(v_x_1309_);
v_r_1312_ = lean_box(v_res_1311_);
return v_r_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(lean_object* v_ref_1316_, lean_object* v_msgData_1317_, uint8_t v_severity_1318_, uint8_t v_isSilent_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v___y_1324_; uint8_t v___y_1325_; uint8_t v___y_1326_; lean_object* v___y_1327_; lean_object* v___y_1328_; lean_object* v___y_1329_; lean_object* v___y_1330_; lean_object* v_toCold_1331_; lean_object* v___y_1332_; lean_object* v___y_1361_; lean_object* v___y_1362_; uint8_t v___y_1363_; uint8_t v___y_1364_; lean_object* v___y_1365_; lean_object* v___y_1366_; uint8_t v___y_1367_; lean_object* v___y_1368_; lean_object* v___y_1388_; lean_object* v___y_1389_; uint8_t v___y_1390_; lean_object* v___y_1391_; uint8_t v___y_1392_; uint8_t v___y_1393_; lean_object* v___y_1394_; uint8_t v___y_1398_; uint8_t v___x_1415_; uint8_t v___x_1416_; 
v___x_1415_ = 2;
v___x_1416_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1318_, v___x_1415_);
if (v___x_1416_ == 0)
{
goto v___jp_1408_;
}
else
{
uint8_t v___x_1417_; 
lean_inc_ref(v_msgData_1317_);
v___x_1417_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1317_);
if (v___x_1417_ == 0)
{
goto v___jp_1408_;
}
else
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
lean_dec_ref(v_msgData_1317_);
v___x_1418_ = lean_box(0);
v___x_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
return v___x_1419_;
}
}
v___jp_1323_:
{
lean_object* v_currNamespace_1333_; lean_object* v_openDecls_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v_env_1339_; lean_object* v_nextMacroScope_1340_; lean_object* v_ngen_1341_; lean_object* v_auxDeclNGen_1342_; lean_object* v_traceState_1343_; lean_object* v_cache_1344_; lean_object* v_recordedDeps_1345_; lean_object* v_messages_1346_; lean_object* v_infoState_1347_; lean_object* v_snapshotTasks_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1359_; 
v_currNamespace_1333_ = lean_ctor_get(v_toCold_1331_, 4);
v_openDecls_1334_ = lean_ctor_get(v_toCold_1331_, 5);
lean_inc(v_openDecls_1334_);
lean_inc(v_currNamespace_1333_);
v___x_1335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1335_, 0, v_currNamespace_1333_);
lean_ctor_set(v___x_1335_, 1, v_openDecls_1334_);
v___x_1336_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
lean_ctor_set(v___x_1336_, 1, v___y_1329_);
lean_inc_ref(v___y_1324_);
lean_inc_ref(v___y_1330_);
v___x_1337_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1337_, 0, v___y_1330_);
lean_ctor_set(v___x_1337_, 1, v___y_1328_);
lean_ctor_set(v___x_1337_, 2, v___y_1327_);
lean_ctor_set(v___x_1337_, 3, v___y_1324_);
lean_ctor_set(v___x_1337_, 4, v___x_1336_);
lean_ctor_set_uint8(v___x_1337_, sizeof(void*)*5, v___y_1326_);
lean_ctor_set_uint8(v___x_1337_, sizeof(void*)*5 + 1, v___y_1325_);
lean_ctor_set_uint8(v___x_1337_, sizeof(void*)*5 + 2, v_isSilent_1319_);
v___x_1338_ = lean_st_ref_take(v___y_1332_);
v_env_1339_ = lean_ctor_get(v___x_1338_, 0);
v_nextMacroScope_1340_ = lean_ctor_get(v___x_1338_, 1);
v_ngen_1341_ = lean_ctor_get(v___x_1338_, 2);
v_auxDeclNGen_1342_ = lean_ctor_get(v___x_1338_, 3);
v_traceState_1343_ = lean_ctor_get(v___x_1338_, 4);
v_cache_1344_ = lean_ctor_get(v___x_1338_, 5);
v_recordedDeps_1345_ = lean_ctor_get(v___x_1338_, 6);
v_messages_1346_ = lean_ctor_get(v___x_1338_, 7);
v_infoState_1347_ = lean_ctor_get(v___x_1338_, 8);
v_snapshotTasks_1348_ = lean_ctor_get(v___x_1338_, 9);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1338_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1350_ = v___x_1338_;
v_isShared_1351_ = v_isSharedCheck_1359_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_snapshotTasks_1348_);
lean_inc(v_infoState_1347_);
lean_inc(v_messages_1346_);
lean_inc(v_recordedDeps_1345_);
lean_inc(v_cache_1344_);
lean_inc(v_traceState_1343_);
lean_inc(v_auxDeclNGen_1342_);
lean_inc(v_ngen_1341_);
lean_inc(v_nextMacroScope_1340_);
lean_inc(v_env_1339_);
lean_dec(v___x_1338_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1359_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1352_ = lean_box(0);
v___x_1353_ = l_Lean_MessageLog_add(v___x_1337_, v_messages_1346_);
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 7, v___x_1353_);
v___x_1355_ = v___x_1350_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_env_1339_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_nextMacroScope_1340_);
lean_ctor_set(v_reuseFailAlloc_1358_, 2, v_ngen_1341_);
lean_ctor_set(v_reuseFailAlloc_1358_, 3, v_auxDeclNGen_1342_);
lean_ctor_set(v_reuseFailAlloc_1358_, 4, v_traceState_1343_);
lean_ctor_set(v_reuseFailAlloc_1358_, 5, v_cache_1344_);
lean_ctor_set(v_reuseFailAlloc_1358_, 6, v_recordedDeps_1345_);
lean_ctor_set(v_reuseFailAlloc_1358_, 7, v___x_1353_);
lean_ctor_set(v_reuseFailAlloc_1358_, 8, v_infoState_1347_);
lean_ctor_set(v_reuseFailAlloc_1358_, 9, v_snapshotTasks_1348_);
v___x_1355_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = lean_st_ref_put(v___y_1332_, v___x_1355_);
v___x_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1352_);
return v___x_1357_;
}
}
}
v___jp_1360_:
{
lean_object* v_fileName_1369_; lean_object* v_fileMap_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1386_; 
v_fileName_1369_ = lean_ctor_get(v___y_1365_, 0);
v_fileMap_1370_ = lean_ctor_get(v___y_1365_, 1);
v___x_1371_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1317_);
v___x_1372_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(v___x_1371_, v___y_1320_, v___y_1321_);
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1386_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1386_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
lean_inc_ref_n(v_fileMap_1370_, 2);
v___x_1377_ = l_Lean_FileMap_toPosition(v_fileMap_1370_, v___y_1366_);
lean_dec(v___y_1366_);
v___x_1378_ = l_Lean_FileMap_toPosition(v_fileMap_1370_, v___y_1368_);
lean_dec(v___y_1368_);
v___x_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1378_);
v___x_1380_ = ((lean_object*)(l_Lean_instInhabitedAttributeImplCore_default___closed__3));
if (v___y_1367_ == 0)
{
lean_del_object(v___x_1375_);
v___y_1324_ = v___x_1380_;
v___y_1325_ = v___y_1364_;
v___y_1326_ = v___y_1363_;
v___y_1327_ = v___x_1379_;
v___y_1328_ = v___x_1377_;
v___y_1329_ = v_a_1373_;
v___y_1330_ = v_fileName_1369_;
v_toCold_1331_ = v___y_1362_;
v___y_1332_ = v___y_1321_;
goto v___jp_1323_;
}
else
{
uint8_t v___x_1381_; 
lean_inc(v_a_1373_);
lean_inc_ref(v___y_1361_);
v___x_1381_ = l_Lean_MessageData_hasTag(v___y_1361_, v_a_1373_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; lean_object* v___x_1384_; 
lean_dec_ref_known(v___x_1379_, 1);
lean_dec_ref(v___x_1377_);
lean_dec(v_a_1373_);
v___x_1382_ = lean_box(0);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1382_);
v___x_1384_ = v___x_1375_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1382_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
else
{
lean_del_object(v___x_1375_);
v___y_1324_ = v___x_1380_;
v___y_1325_ = v___y_1364_;
v___y_1326_ = v___y_1363_;
v___y_1327_ = v___x_1379_;
v___y_1328_ = v___x_1377_;
v___y_1329_ = v_a_1373_;
v___y_1330_ = v_fileName_1369_;
v_toCold_1331_ = v___y_1362_;
v___y_1332_ = v___y_1321_;
goto v___jp_1323_;
}
}
}
}
v___jp_1387_:
{
lean_object* v___x_1395_; 
v___x_1395_ = l_Lean_Syntax_getTailPos_x3f(v___y_1389_, v___y_1390_);
lean_dec(v___y_1389_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_inc(v___y_1394_);
v___y_1361_ = v___y_1388_;
v___y_1362_ = v___y_1391_;
v___y_1363_ = v___y_1390_;
v___y_1364_ = v___y_1393_;
v___y_1365_ = v___y_1391_;
v___y_1366_ = v___y_1394_;
v___y_1367_ = v___y_1392_;
v___y_1368_ = v___y_1394_;
goto v___jp_1360_;
}
else
{
lean_object* v_val_1396_; 
v_val_1396_ = lean_ctor_get(v___x_1395_, 0);
lean_inc(v_val_1396_);
lean_dec_ref_known(v___x_1395_, 1);
v___y_1361_ = v___y_1388_;
v___y_1362_ = v___y_1391_;
v___y_1363_ = v___y_1390_;
v___y_1364_ = v___y_1393_;
v___y_1365_ = v___y_1391_;
v___y_1366_ = v___y_1394_;
v___y_1367_ = v___y_1392_;
v___y_1368_ = v_val_1396_;
goto v___jp_1360_;
}
}
v___jp_1397_:
{
lean_object* v_toCold_1399_; lean_object* v_ref_1400_; uint8_t v_suppressElabErrors_1401_; lean_object* v_ref_1402_; uint8_t v___x_1403_; lean_object* v___f_1404_; lean_object* v___x_1405_; 
v_toCold_1399_ = lean_ctor_get(v___y_1320_, 0);
v_ref_1400_ = lean_ctor_get(v___y_1320_, 2);
v_suppressElabErrors_1401_ = lean_ctor_get_uint8(v___y_1320_, sizeof(void*)*3 + 2);
v_ref_1402_ = l_Lean_replaceRef(v_ref_1316_, v_ref_1400_);
v___x_1403_ = 0;
v___f_1404_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___closed__0));
v___x_1405_ = l_Lean_Syntax_getPos_x3f(v_ref_1402_, v___x_1403_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_object* v___x_1406_; 
v___x_1406_ = lean_unsigned_to_nat(0u);
v___y_1388_ = v___f_1404_;
v___y_1389_ = v_ref_1402_;
v___y_1390_ = v___x_1403_;
v___y_1391_ = v_toCold_1399_;
v___y_1392_ = v_suppressElabErrors_1401_;
v___y_1393_ = v___y_1398_;
v___y_1394_ = v___x_1406_;
goto v___jp_1387_;
}
else
{
lean_object* v_val_1407_; 
v_val_1407_ = lean_ctor_get(v___x_1405_, 0);
lean_inc(v_val_1407_);
lean_dec_ref_known(v___x_1405_, 1);
v___y_1388_ = v___f_1404_;
v___y_1389_ = v_ref_1402_;
v___y_1390_ = v___x_1403_;
v___y_1391_ = v_toCold_1399_;
v___y_1392_ = v_suppressElabErrors_1401_;
v___y_1393_ = v___y_1398_;
v___y_1394_ = v_val_1407_;
goto v___jp_1387_;
}
}
v___jp_1408_:
{
uint8_t v___x_1409_; uint8_t v___x_1410_; 
v___x_1409_ = 1;
v___x_1410_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1318_, v___x_1409_);
if (v___x_1410_ == 0)
{
v___y_1398_ = v_severity_1318_;
goto v___jp_1397_;
}
else
{
lean_object* v___x_1411_; lean_object* v___x_1412_; uint8_t v___x_1413_; 
v___x_1411_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1320_);
v___x_1412_ = l_Lean_warningAsError;
v___x_1413_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(v___x_1411_, v___x_1412_);
lean_dec_ref(v___x_1411_);
if (v___x_1413_ == 0)
{
v___y_1398_ = v_severity_1318_;
goto v___jp_1397_;
}
else
{
uint8_t v___x_1414_; 
v___x_1414_ = 2;
v___y_1398_ = v___x_1414_;
goto v___jp_1397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___boxed(lean_object* v_ref_1420_, lean_object* v_msgData_1421_, lean_object* v_severity_1422_, lean_object* v_isSilent_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
uint8_t v_severity_boxed_1427_; uint8_t v_isSilent_boxed_1428_; lean_object* v_res_1429_; 
v_severity_boxed_1427_ = lean_unbox(v_severity_1422_);
v_isSilent_boxed_1428_ = lean_unbox(v_isSilent_1423_);
v_res_1429_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(v_ref_1420_, v_msgData_1421_, v_severity_boxed_1427_, v_isSilent_boxed_1428_, v___y_1424_, v___y_1425_);
lean_dec(v___y_1425_);
lean_dec_ref(v___y_1424_);
lean_dec(v_ref_1420_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(lean_object* v_msgData_1430_, uint8_t v_severity_1431_, uint8_t v_isSilent_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_){
_start:
{
lean_object* v_ref_1436_; lean_object* v___x_1437_; 
v_ref_1436_ = lean_ctor_get(v___y_1433_, 2);
v___x_1437_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(v_ref_1436_, v_msgData_1430_, v_severity_1431_, v_isSilent_1432_, v___y_1433_, v___y_1434_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5___boxed(lean_object* v_msgData_1438_, lean_object* v_severity_1439_, lean_object* v_isSilent_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
uint8_t v_severity_boxed_1444_; uint8_t v_isSilent_boxed_1445_; lean_object* v_res_1446_; 
v_severity_boxed_1444_ = lean_unbox(v_severity_1439_);
v_isSilent_boxed_1445_ = lean_unbox(v_isSilent_1440_);
v_res_1446_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(v_msgData_1438_, v_severity_boxed_1444_, v_isSilent_boxed_1445_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(lean_object* v_msgData_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_){
_start:
{
uint8_t v___x_1451_; uint8_t v___x_1452_; lean_object* v___x_1453_; 
v___x_1451_ = 1;
v___x_1452_ = 0;
v___x_1453_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(v_msgData_1447_, v___x_1451_, v___x_1452_, v___y_1448_, v___y_1449_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1___boxed(lean_object* v_msgData_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v_res_1458_; 
v_res_1458_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(v_msgData_1454_, v___y_1455_, v___y_1456_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(lean_object* v_opt_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v___x_1462_; uint8_t v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1462_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1460_);
v___x_1463_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(v___x_1462_, v_opt_1459_);
lean_dec_ref(v___x_1462_);
v___x_1464_ = lean_box(v___x_1463_);
v___x_1465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1464_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg___boxed(lean_object* v_opt_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(v_opt_1466_, v___y_1467_);
lean_dec_ref(v___y_1467_);
lean_dec_ref(v_opt_1466_);
return v_res_1469_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; 
v___x_1471_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0));
v___x_1472_ = l_Lean_stringToMessageData(v___x_1471_);
return v___x_1472_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2));
v___x_1475_ = l_Lean_stringToMessageData(v___x_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(lean_object* v_id_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v___x_1480_; lean_object* v_env_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v_a_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1503_; 
v___x_1480_ = lean_st_ref_get(v___y_1478_);
v_env_1481_ = lean_ctor_get(v___x_1480_, 0);
lean_inc_ref(v_env_1481_);
lean_dec(v___x_1480_);
v___x_1482_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1483_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(v___x_1482_, v___y_1477_);
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1486_ = v___x_1483_;
v_isShared_1487_ = v_isSharedCheck_1503_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_a_1484_);
lean_dec(v___x_1483_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1503_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
uint8_t v_isExporting_1493_; 
v_isExporting_1493_ = lean_ctor_get_uint8(v_env_1481_, sizeof(void*)*13);
lean_dec_ref(v_env_1481_);
if (v_isExporting_1493_ == 0)
{
lean_dec(v_a_1484_);
lean_dec(v_id_1476_);
goto v___jp_1488_;
}
else
{
uint8_t v___x_1494_; 
v___x_1494_ = l_Lean_isPrivateName(v_id_1476_);
if (v___x_1494_ == 0)
{
lean_dec(v_a_1484_);
lean_dec(v_id_1476_);
goto v___jp_1488_;
}
else
{
uint8_t v___x_1495_; 
v___x_1495_ = lean_unbox(v_a_1484_);
lean_dec(v_a_1484_);
if (v___x_1495_ == 0)
{
lean_dec(v_id_1476_);
goto v___jp_1488_;
}
else
{
lean_object* v___x_1496_; uint8_t v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
lean_del_object(v___x_1486_);
v___x_1496_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1);
v___x_1497_ = 0;
v___x_1498_ = l_Lean_MessageData_ofConstName(v_id_1476_, v___x_1497_);
v___x_1499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1496_);
lean_ctor_set(v___x_1499_, 1, v___x_1498_);
v___x_1500_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3);
v___x_1501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1499_);
lean_ctor_set(v___x_1501_, 1, v___x_1500_);
v___x_1502_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(v___x_1501_, v___y_1477_, v___y_1478_);
return v___x_1502_;
}
}
}
v___jp_1488_:
{
lean_object* v___x_1489_; lean_object* v___x_1491_; 
v___x_1489_ = lean_box(0);
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 0, v___x_1489_);
v___x_1491_ = v___x_1486_;
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
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___boxed(lean_object* v_id_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(v_id_1504_, v___y_1505_, v___y_1506_);
lean_dec(v___y_1506_);
lean_dec_ref(v___y_1505_);
return v_res_1508_;
}
}
static lean_object* _init_l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = ((lean_object*)(l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0));
v___x_1511_ = l_Lean_stringToMessageData(v___x_1510_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0(lean_object* v_declName_1512_, uint8_t v_isModule_1513_, lean_object* v_attrName_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v___x_1518_; 
lean_inc(v_declName_1512_);
v___x_1518_ = l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(v_declName_1512_, v___y_1515_, v___y_1516_);
if (lean_obj_tag(v___x_1518_) == 0)
{
lean_object* v___x_1519_; lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1540_; 
lean_dec_ref_known(v___x_1518_, 1);
lean_inc(v_declName_1512_);
v___x_1519_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(v_declName_1512_, v_isModule_1513_, v___y_1516_);
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1522_ = v___x_1519_;
v_isShared_1523_ = v_isSharedCheck_1540_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1519_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1540_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
uint8_t v___x_1524_; 
v___x_1524_ = lean_unbox(v_a_1520_);
if (v___x_1524_ == 0)
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; uint8_t v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
lean_del_object(v___x_1522_);
v___x_1525_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1526_ = l_Lean_MessageData_ofName(v_attrName_1514_);
v___x_1527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1525_);
lean_ctor_set(v___x_1527_, 1, v___x_1526_);
v___x_1528_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1);
v___x_1529_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1527_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
v___x_1530_ = lean_unbox(v_a_1520_);
lean_dec(v_a_1520_);
v___x_1531_ = l_Lean_MessageData_ofConstName(v_declName_1512_, v___x_1530_);
v___x_1532_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1529_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
v___x_1533_ = lean_obj_once(&l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1, &l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1_once, _init_l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1);
v___x_1534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1532_);
lean_ctor_set(v___x_1534_, 1, v___x_1533_);
v___x_1535_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1534_, v___y_1515_, v___y_1516_);
return v___x_1535_;
}
else
{
lean_object* v___x_1536_; lean_object* v___x_1538_; 
lean_dec(v_a_1520_);
lean_dec(v_attrName_1514_);
lean_dec(v_declName_1512_);
v___x_1536_ = lean_box(0);
if (v_isShared_1523_ == 0)
{
lean_ctor_set(v___x_1522_, 0, v___x_1536_);
v___x_1538_ = v___x_1522_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
else
{
lean_dec(v_attrName_1514_);
lean_dec(v_declName_1512_);
return v___x_1518_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___boxed(lean_object* v_declName_1541_, lean_object* v_isModule_1542_, lean_object* v_attrName_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_){
_start:
{
uint8_t v_isModule_boxed_1547_; lean_object* v_res_1548_; 
v_isModule_boxed_1547_ = lean_unbox(v_isModule_1542_);
v_res_1548_ = l_Lean_ensureAttrDeclIsPublic___lam__0(v_declName_1541_, v_isModule_boxed_1547_, v_attrName_1543_, v___y_1544_, v___y_1545_);
lean_dec(v___y_1545_);
lean_dec_ref(v___y_1544_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic(lean_object* v_attrName_1549_, lean_object* v_declName_1550_, uint8_t v_attrKind_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v___x_1555_; lean_object* v_env_1559_; lean_object* v___x_1560_; uint8_t v_isModule_1561_; 
v___x_1555_ = lean_st_ref_get(v_a_1553_);
v_env_1559_ = lean_ctor_get(v___x_1555_, 0);
lean_inc_ref(v_env_1559_);
lean_dec(v___x_1555_);
v___x_1560_ = l_Lean_Environment_header(v_env_1559_);
lean_dec_ref(v_env_1559_);
v_isModule_1561_ = lean_ctor_get_uint8(v___x_1560_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1560_);
if (v_isModule_1561_ == 0)
{
lean_dec(v_declName_1550_);
lean_dec(v_attrName_1549_);
goto v___jp_1556_;
}
else
{
uint8_t v___x_1562_; uint8_t v___x_1563_; 
v___x_1562_ = 1;
v___x_1563_ = l_Lean_instBEqAttributeKind_beq(v_attrKind_1551_, v___x_1562_);
if (v___x_1563_ == 0)
{
lean_object* v___x_1564_; lean_object* v___f_1565_; lean_object* v___x_1566_; 
v___x_1564_ = lean_box(v_isModule_1561_);
v___f_1565_ = lean_alloc_closure((void*)(l_Lean_ensureAttrDeclIsPublic___lam__0___boxed), 6, 3);
lean_closure_set(v___f_1565_, 0, v_declName_1550_);
lean_closure_set(v___f_1565_, 1, v___x_1564_);
lean_closure_set(v___f_1565_, 2, v_attrName_1549_);
v___x_1566_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(v___f_1565_, v_isModule_1561_, v_a_1552_, v_a_1553_);
return v___x_1566_;
}
else
{
lean_dec(v_declName_1550_);
lean_dec(v_attrName_1549_);
goto v___jp_1556_;
}
}
v___jp_1556_:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1557_ = lean_box(0);
v___x_1558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
return v___x_1558_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___boxed(lean_object* v_attrName_1567_, lean_object* v_declName_1568_, lean_object* v_attrKind_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_){
_start:
{
uint8_t v_attrKind_boxed_1573_; lean_object* v_res_1574_; 
v_attrKind_boxed_1573_ = lean_unbox(v_attrKind_1569_);
v_res_1574_ = l_Lean_ensureAttrDeclIsPublic(v_attrName_1567_, v_declName_1568_, v_attrKind_boxed_1573_, v_a_1570_, v_a_1571_);
lean_dec(v_a_1571_);
lean_dec_ref(v_a_1570_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0(lean_object* v_opt_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(v_opt_1575_, v___y_1576_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___boxed(lean_object* v_opt_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0(v_opt_1580_, v___y_1581_, v___y_1582_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
lean_dec_ref(v_opt_1580_);
return v_res_1584_;
}
}
static lean_object* _init_l_Lean_ensureAttrDeclIsMeta___closed__1(void){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = ((lean_object*)(l_Lean_ensureAttrDeclIsMeta___closed__0));
v___x_1587_ = l_Lean_stringToMessageData(v___x_1586_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta(lean_object* v_attrName_1588_, lean_object* v_declName_1589_, uint8_t v_attrKind_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_){
_start:
{
lean_object* v___x_1594_; lean_object* v_env_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; uint8_t v_isModule_1598_; 
v___x_1594_ = lean_st_ref_get(v_a_1592_);
v_env_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc_ref(v_env_1595_);
lean_dec(v___x_1594_);
v___x_1596_ = lean_st_ref_get(v_a_1592_);
v___x_1597_ = l_Lean_Environment_header(v_env_1595_);
lean_dec_ref(v_env_1595_);
v_isModule_1598_ = lean_ctor_get_uint8(v___x_1597_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1597_);
if (v_isModule_1598_ == 0)
{
lean_object* v___x_1599_; 
lean_dec(v___x_1596_);
v___x_1599_ = l_Lean_ensureAttrDeclIsPublic(v_attrName_1588_, v_declName_1589_, v_attrKind_1590_, v_a_1591_, v_a_1592_);
return v___x_1599_;
}
else
{
lean_object* v_env_1600_; uint8_t v___x_1601_; 
v_env_1600_ = lean_ctor_get(v___x_1596_, 0);
lean_inc_ref(v_env_1600_);
lean_dec(v___x_1596_);
lean_inc(v_declName_1589_);
v___x_1601_ = l_Lean_isMarkedMeta(v_env_1600_, v_declName_1589_);
if (v___x_1601_ == 0)
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1602_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1603_ = l_Lean_MessageData_ofName(v_attrName_1588_);
v___x_1604_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1602_);
lean_ctor_set(v___x_1604_, 1, v___x_1603_);
v___x_1605_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1);
v___x_1606_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1604_);
lean_ctor_set(v___x_1606_, 1, v___x_1605_);
v___x_1607_ = l_Lean_MessageData_ofConstName(v_declName_1589_, v___x_1601_);
v___x_1608_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1606_);
lean_ctor_set(v___x_1608_, 1, v___x_1607_);
v___x_1609_ = lean_obj_once(&l_Lean_ensureAttrDeclIsMeta___closed__1, &l_Lean_ensureAttrDeclIsMeta___closed__1_once, _init_l_Lean_ensureAttrDeclIsMeta___closed__1);
v___x_1610_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1608_);
lean_ctor_set(v___x_1610_, 1, v___x_1609_);
v___x_1611_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1610_, v_a_1591_, v_a_1592_);
return v___x_1611_;
}
else
{
lean_object* v___x_1612_; 
v___x_1612_ = l_Lean_ensureAttrDeclIsPublic(v_attrName_1588_, v_declName_1589_, v_attrKind_1590_, v_a_1591_, v_a_1592_);
return v___x_1612_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta___boxed(lean_object* v_attrName_1613_, lean_object* v_declName_1614_, lean_object* v_attrKind_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_){
_start:
{
uint8_t v_attrKind_boxed_1619_; lean_object* v_res_1620_; 
v_attrKind_boxed_1619_ = lean_unbox(v_attrKind_1615_);
v_res_1620_ = l_Lean_ensureAttrDeclIsMeta(v_attrName_1613_, v_declName_1614_, v_attrKind_boxed_1619_, v_a_1616_, v_a_1617_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0(lean_object* v_x_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1627_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1));
v___x_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___boxed(lean_object* v_x_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Lean_instInhabitedTagAttribute_default___lam__0(v_x_1629_, v___y_1630_);
lean_dec_ref(v___y_1630_);
lean_dec_ref(v_x_1629_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1(lean_object* v_s_1633_, lean_object* v_x_1634_){
_start:
{
lean_inc(v_s_1633_);
return v_s_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1___boxed(lean_object* v_s_1635_, lean_object* v_x_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l_Lean_instInhabitedTagAttribute_default___lam__1(v_s_1635_, v_x_1636_);
lean_dec(v_x_1636_);
lean_dec(v_s_1635_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2(lean_object* v_x_1642_, lean_object* v_x_1643_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1));
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___boxed(lean_object* v_x_1645_, lean_object* v_x_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l_Lean_instInhabitedTagAttribute_default___lam__2(v_x_1645_, v_x_1646_);
lean_dec(v_x_1646_);
lean_dec_ref(v_x_1645_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3(lean_object* v_x_1648_){
_start:
{
lean_object* v___x_1649_; 
v___x_1649_ = lean_box(0);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3___boxed(lean_object* v_x_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l_Lean_instInhabitedTagAttribute_default___lam__3(v_x_1650_);
lean_dec(v_x_1650_);
return v_res_1651_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default___closed__4(void){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l_Lean_instInhabitedEnvExtension_default___redArg();
return v___x_1656_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default___closed__5(void){
_start:
{
lean_object* v___f_1657_; lean_object* v___f_1658_; lean_object* v___f_1659_; lean_object* v___f_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___f_1657_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__3));
v___f_1658_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__2));
v___f_1659_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__1));
v___f_1660_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__0));
v___x_1661_ = lean_box(0);
v___x_1662_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__4, &l_Lean_instInhabitedTagAttribute_default___closed__4_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__4);
v___x_1663_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1662_);
lean_ctor_set(v___x_1663_, 1, v___x_1661_);
lean_ctor_set(v___x_1663_, 2, v___f_1660_);
lean_ctor_set(v___x_1663_, 3, v___f_1659_);
lean_ctor_set(v___x_1663_, 4, v___f_1658_);
lean_ctor_set(v___x_1663_, 5, v___f_1657_);
return v___x_1663_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default___closed__6(void){
_start:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1664_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__5, &l_Lean_instInhabitedTagAttribute_default___closed__5_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__5);
v___x_1665_ = ((lean_object*)(l_Lean_instInhabitedAttributeImpl_default));
v___x_1666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1665_);
lean_ctor_set(v___x_1666_, 1, v___x_1664_);
return v___x_1666_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default(void){
_start:
{
lean_object* v___x_1667_; 
v___x_1667_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__6, &l_Lean_instInhabitedTagAttribute_default___closed__6_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__6);
return v___x_1667_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute(void){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = l_Lean_instInhabitedTagAttribute_default;
return v___x_1668_;
}
}
static lean_object* _init_l_Lean_registerTagAttribute___auto__1(void){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__28, &l_Lean_AttributeImplCore_ref___autoParam___closed__28_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0(lean_object* v_x_1670_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0));
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0___boxed(lean_object* v_x_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l_Lean_registerTagAttribute___lam__0(v_x_1672_);
lean_dec(v_x_1672_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0(lean_object* v_newState_1674_, lean_object* v_x_1675_, lean_object* v_x_1676_){
_start:
{
if (lean_obj_tag(v_x_1676_) == 0)
{
return v_x_1675_;
}
else
{
lean_object* v_head_1677_; lean_object* v_tail_1678_; uint8_t v___x_1679_; 
v_head_1677_ = lean_ctor_get(v_x_1676_, 0);
lean_inc(v_head_1677_);
v_tail_1678_ = lean_ctor_get(v_x_1676_, 1);
lean_inc(v_tail_1678_);
lean_dec_ref_known(v_x_1676_, 2);
v___x_1679_ = l_Lean_NameSet_contains(v_newState_1674_, v_head_1677_);
if (v___x_1679_ == 0)
{
lean_dec(v_head_1677_);
v_x_1676_ = v_tail_1678_;
goto _start;
}
else
{
lean_object* v___x_1681_; 
v___x_1681_ = l_Lean_NameSet_insert(v_x_1675_, v_head_1677_);
v_x_1675_ = v___x_1681_;
v_x_1676_ = v_tail_1678_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0___boxed(lean_object* v_newState_1683_, lean_object* v_x_1684_, lean_object* v_x_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_List_foldl___at___00Lean_registerTagAttribute_spec__0(v_newState_1683_, v_x_1684_, v_x_1685_);
lean_dec(v_newState_1683_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1(lean_object* v_x_1687_, lean_object* v_newState_1688_, lean_object* v_newConsts_1689_, lean_object* v_s_1690_){
_start:
{
lean_object* v___x_1691_; 
v___x_1691_ = l_List_foldl___at___00Lean_registerTagAttribute_spec__0(v_newState_1688_, v_s_1690_, v_newConsts_1689_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1___boxed(lean_object* v_x_1692_, lean_object* v_newState_1693_, lean_object* v_newConsts_1694_, lean_object* v_s_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l_Lean_registerTagAttribute___lam__1(v_x_1692_, v_newState_1693_, v_newConsts_1694_, v_s_1695_);
lean_dec(v_newState_1693_);
lean_dec(v_x_1692_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__2(lean_object* v_s_1709_){
_start:
{
lean_object* v___x_1710_; lean_object* v___y_1712_; 
v___x_1710_ = ((lean_object*)(l_Lean_registerTagAttribute___lam__2___closed__5));
if (lean_obj_tag(v_s_1709_) == 0)
{
lean_object* v_size_1716_; 
v_size_1716_ = lean_ctor_get(v_s_1709_, 0);
lean_inc(v_size_1716_);
lean_dec_ref_known(v_s_1709_, 5);
v___y_1712_ = v_size_1716_;
goto v___jp_1711_;
}
else
{
lean_object* v___x_1717_; 
v___x_1717_ = lean_unsigned_to_nat(0u);
v___y_1712_ = v___x_1717_;
goto v___jp_1711_;
}
v___jp_1711_:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1713_ = l_Nat_reprFast(v___y_1712_);
v___x_1714_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
v___x_1715_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1710_);
lean_ctor_set(v___x_1715_, 1, v___x_1714_);
return v___x_1715_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg(lean_object* v_hi_1718_, lean_object* v_pivot_1719_, lean_object* v_as_1720_, lean_object* v_i_1721_, lean_object* v_k_1722_){
_start:
{
uint8_t v___x_1723_; 
v___x_1723_ = lean_nat_dec_lt(v_k_1722_, v_hi_1718_);
if (v___x_1723_ == 0)
{
lean_object* v___x_1724_; lean_object* v___x_1725_; 
lean_dec(v_k_1722_);
v___x_1724_ = lean_array_fswap(v_as_1720_, v_i_1721_, v_hi_1718_);
v___x_1725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1725_, 0, v_i_1721_);
lean_ctor_set(v___x_1725_, 1, v___x_1724_);
return v___x_1725_;
}
else
{
lean_object* v___x_1726_; uint8_t v___x_1727_; 
v___x_1726_ = lean_array_fget_borrowed(v_as_1720_, v_k_1722_);
v___x_1727_ = l_Lean_Name_quickLt(v___x_1726_, v_pivot_1719_);
if (v___x_1727_ == 0)
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = lean_unsigned_to_nat(1u);
v___x_1729_ = lean_nat_add(v_k_1722_, v___x_1728_);
lean_dec(v_k_1722_);
v_k_1722_ = v___x_1729_;
goto _start;
}
else
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1731_ = lean_array_fswap(v_as_1720_, v_i_1721_, v_k_1722_);
v___x_1732_ = lean_unsigned_to_nat(1u);
v___x_1733_ = lean_nat_add(v_i_1721_, v___x_1732_);
lean_dec(v_i_1721_);
v___x_1734_ = lean_nat_add(v_k_1722_, v___x_1732_);
lean_dec(v_k_1722_);
v_as_1720_ = v___x_1731_;
v_i_1721_ = v___x_1733_;
v_k_1722_ = v___x_1734_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg___boxed(lean_object* v_hi_1736_, lean_object* v_pivot_1737_, lean_object* v_as_1738_, lean_object* v_i_1739_, lean_object* v_k_1740_){
_start:
{
lean_object* v_res_1741_; 
v_res_1741_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg(v_hi_1736_, v_pivot_1737_, v_as_1738_, v_i_1739_, v_k_1740_);
lean_dec(v_pivot_1737_);
lean_dec(v_hi_1736_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(lean_object* v_n_1742_, lean_object* v_as_1743_, lean_object* v_lo_1744_, lean_object* v_hi_1745_){
_start:
{
lean_object* v___y_1747_; uint8_t v___x_1757_; 
v___x_1757_ = lean_nat_dec_lt(v_lo_1744_, v_hi_1745_);
if (v___x_1757_ == 0)
{
lean_dec(v_lo_1744_);
return v_as_1743_;
}
else
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v_mid_1760_; lean_object* v___y_1762_; lean_object* v___y_1768_; lean_object* v___x_1773_; lean_object* v___x_1774_; uint8_t v___x_1775_; 
v___x_1758_ = lean_nat_add(v_lo_1744_, v_hi_1745_);
v___x_1759_ = lean_unsigned_to_nat(1u);
v_mid_1760_ = lean_nat_shiftr(v___x_1758_, v___x_1759_);
lean_dec(v___x_1758_);
v___x_1773_ = lean_array_fget_borrowed(v_as_1743_, v_mid_1760_);
v___x_1774_ = lean_array_fget_borrowed(v_as_1743_, v_lo_1744_);
v___x_1775_ = l_Lean_Name_quickLt(v___x_1773_, v___x_1774_);
if (v___x_1775_ == 0)
{
v___y_1768_ = v_as_1743_;
goto v___jp_1767_;
}
else
{
lean_object* v___x_1776_; 
v___x_1776_ = lean_array_fswap(v_as_1743_, v_lo_1744_, v_mid_1760_);
v___y_1768_ = v___x_1776_;
goto v___jp_1767_;
}
v___jp_1761_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; uint8_t v___x_1765_; 
v___x_1763_ = lean_array_fget_borrowed(v___y_1762_, v_mid_1760_);
v___x_1764_ = lean_array_fget_borrowed(v___y_1762_, v_hi_1745_);
v___x_1765_ = l_Lean_Name_quickLt(v___x_1763_, v___x_1764_);
if (v___x_1765_ == 0)
{
lean_dec(v_mid_1760_);
v___y_1747_ = v___y_1762_;
goto v___jp_1746_;
}
else
{
lean_object* v___x_1766_; 
v___x_1766_ = lean_array_fswap(v___y_1762_, v_mid_1760_, v_hi_1745_);
lean_dec(v_mid_1760_);
v___y_1747_ = v___x_1766_;
goto v___jp_1746_;
}
}
v___jp_1767_:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; uint8_t v___x_1771_; 
v___x_1769_ = lean_array_fget_borrowed(v___y_1768_, v_hi_1745_);
v___x_1770_ = lean_array_fget_borrowed(v___y_1768_, v_lo_1744_);
v___x_1771_ = l_Lean_Name_quickLt(v___x_1769_, v___x_1770_);
if (v___x_1771_ == 0)
{
v___y_1762_ = v___y_1768_;
goto v___jp_1761_;
}
else
{
lean_object* v___x_1772_; 
v___x_1772_ = lean_array_fswap(v___y_1768_, v_lo_1744_, v_hi_1745_);
v___y_1762_ = v___x_1772_;
goto v___jp_1761_;
}
}
}
v___jp_1746_:
{
lean_object* v_pivot_1748_; lean_object* v___x_1749_; lean_object* v_fst_1750_; lean_object* v_snd_1751_; uint8_t v___x_1752_; 
v_pivot_1748_ = lean_array_fget(v___y_1747_, v_hi_1745_);
lean_inc_n(v_lo_1744_, 2);
v___x_1749_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg(v_hi_1745_, v_pivot_1748_, v___y_1747_, v_lo_1744_, v_lo_1744_);
lean_dec(v_pivot_1748_);
v_fst_1750_ = lean_ctor_get(v___x_1749_, 0);
lean_inc(v_fst_1750_);
v_snd_1751_ = lean_ctor_get(v___x_1749_, 1);
lean_inc(v_snd_1751_);
lean_dec_ref(v___x_1749_);
v___x_1752_ = lean_nat_dec_le(v_hi_1745_, v_fst_1750_);
if (v___x_1752_ == 0)
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1753_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(v_n_1742_, v_snd_1751_, v_lo_1744_, v_fst_1750_);
v___x_1754_ = lean_unsigned_to_nat(1u);
v___x_1755_ = lean_nat_add(v_fst_1750_, v___x_1754_);
lean_dec(v_fst_1750_);
v_as_1743_ = v___x_1753_;
v_lo_1744_ = v___x_1755_;
goto _start;
}
else
{
lean_dec(v_fst_1750_);
lean_dec(v_lo_1744_);
return v_snd_1751_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg___boxed(lean_object* v_n_1777_, lean_object* v_as_1778_, lean_object* v_lo_1779_, lean_object* v_hi_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(v_n_1777_, v_as_1778_, v_lo_1779_, v_hi_1780_);
lean_dec(v_hi_1780_);
lean_dec(v_n_1777_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2(lean_object* v_env_1782_, lean_object* v_as_1783_, size_t v_i_1784_, size_t v_stop_1785_, lean_object* v_b_1786_){
_start:
{
lean_object* v___y_1788_; uint8_t v___x_1792_; 
v___x_1792_ = lean_usize_dec_eq(v_i_1784_, v_stop_1785_);
if (v___x_1792_ == 0)
{
lean_object* v___x_1793_; uint8_t v___x_1794_; lean_object* v___x_1795_; uint8_t v___x_1796_; 
v___x_1793_ = lean_array_uget_borrowed(v_as_1783_, v_i_1784_);
v___x_1794_ = 1;
lean_inc_ref(v_env_1782_);
v___x_1795_ = l_Lean_Environment_setExporting(v_env_1782_, v___x_1794_);
lean_inc(v___x_1793_);
v___x_1796_ = l_Lean_Environment_contains(v___x_1795_, v___x_1793_, v___x_1792_);
if (v___x_1796_ == 0)
{
v___y_1788_ = v_b_1786_;
goto v___jp_1787_;
}
else
{
lean_object* v___x_1797_; 
lean_inc(v___x_1793_);
v___x_1797_ = lean_array_push(v_b_1786_, v___x_1793_);
v___y_1788_ = v___x_1797_;
goto v___jp_1787_;
}
}
else
{
lean_dec_ref(v_env_1782_);
return v_b_1786_;
}
v___jp_1787_:
{
size_t v___x_1789_; size_t v___x_1790_; 
v___x_1789_ = ((size_t)1ULL);
v___x_1790_ = lean_usize_add(v_i_1784_, v___x_1789_);
v_i_1784_ = v___x_1790_;
v_b_1786_ = v___y_1788_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2___boxed(lean_object* v_env_1798_, lean_object* v_as_1799_, lean_object* v_i_1800_, lean_object* v_stop_1801_, lean_object* v_b_1802_){
_start:
{
size_t v_i_boxed_1803_; size_t v_stop_boxed_1804_; lean_object* v_res_1805_; 
v_i_boxed_1803_ = lean_unbox_usize(v_i_1800_);
lean_dec(v_i_1800_);
v_stop_boxed_1804_ = lean_unbox_usize(v_stop_1801_);
lean_dec(v_stop_1801_);
v_res_1805_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2(v_env_1798_, v_as_1799_, v_i_boxed_1803_, v_stop_boxed_1804_, v_b_1802_);
lean_dec_ref(v_as_1799_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1_spec__1(lean_object* v_init_1806_, lean_object* v_x_1807_){
_start:
{
if (lean_obj_tag(v_x_1807_) == 0)
{
lean_object* v_k_1808_; lean_object* v_l_1809_; lean_object* v_r_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v_k_1808_ = lean_ctor_get(v_x_1807_, 1);
lean_inc(v_k_1808_);
v_l_1809_ = lean_ctor_get(v_x_1807_, 3);
lean_inc(v_l_1809_);
v_r_1810_ = lean_ctor_get(v_x_1807_, 4);
lean_inc(v_r_1810_);
lean_dec_ref_known(v_x_1807_, 5);
v___x_1811_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1_spec__1(v_init_1806_, v_l_1809_);
v___x_1812_ = lean_array_push(v___x_1811_, v_k_1808_);
v_init_1806_ = v___x_1812_;
v_x_1807_ = v_r_1810_;
goto _start;
}
else
{
return v_init_1806_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__3(lean_object* v_env_1814_, lean_object* v_es_1815_){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___y_1819_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___y_1830_; lean_object* v___y_1831_; uint8_t v___x_1833_; 
v___x_1816_ = lean_unsigned_to_nat(0u);
v___x_1817_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0));
v___x_1827_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1_spec__1(v___x_1817_, v_es_1815_);
v___x_1828_ = lean_array_get_size(v___x_1827_);
v___x_1833_ = lean_nat_dec_eq(v___x_1828_, v___x_1816_);
if (v___x_1833_ == 0)
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___y_1837_; uint8_t v___x_1839_; 
v___x_1834_ = lean_unsigned_to_nat(1u);
v___x_1835_ = lean_nat_sub(v___x_1828_, v___x_1834_);
v___x_1839_ = lean_nat_dec_le(v___x_1816_, v___x_1835_);
if (v___x_1839_ == 0)
{
lean_inc(v___x_1835_);
v___y_1837_ = v___x_1835_;
goto v___jp_1836_;
}
else
{
v___y_1837_ = v___x_1816_;
goto v___jp_1836_;
}
v___jp_1836_:
{
uint8_t v___x_1838_; 
v___x_1838_ = lean_nat_dec_le(v___y_1837_, v___x_1835_);
if (v___x_1838_ == 0)
{
lean_dec(v___x_1835_);
lean_inc(v___y_1837_);
v___y_1830_ = v___y_1837_;
v___y_1831_ = v___y_1837_;
goto v___jp_1829_;
}
else
{
v___y_1830_ = v___y_1837_;
v___y_1831_ = v___x_1835_;
goto v___jp_1829_;
}
}
}
else
{
v___y_1819_ = v___x_1827_;
goto v___jp_1818_;
}
v___jp_1818_:
{
lean_object* v___x_1820_; uint8_t v___x_1821_; 
v___x_1820_ = lean_array_get_size(v___y_1819_);
v___x_1821_ = lean_nat_dec_lt(v___x_1816_, v___x_1820_);
if (v___x_1821_ == 0)
{
lean_object* v___x_1822_; 
lean_dec_ref(v_env_1814_);
v___x_1822_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1817_);
lean_ctor_set(v___x_1822_, 1, v___x_1817_);
lean_ctor_set(v___x_1822_, 2, v___y_1819_);
return v___x_1822_;
}
else
{
size_t v___x_1823_; size_t v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1823_ = ((size_t)0ULL);
v___x_1824_ = lean_usize_of_nat(v___x_1820_);
v___x_1825_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2(v_env_1814_, v___y_1819_, v___x_1823_, v___x_1824_, v___x_1817_);
lean_inc_ref(v___x_1825_);
v___x_1826_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
lean_ctor_set(v___x_1826_, 1, v___x_1825_);
lean_ctor_set(v___x_1826_, 2, v___y_1819_);
return v___x_1826_;
}
}
v___jp_1829_:
{
lean_object* v___x_1832_; 
v___x_1832_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(v___x_1828_, v___x_1827_, v___y_1830_, v___y_1831_);
lean_dec(v___y_1831_);
v___y_1819_ = v___x_1832_;
goto v___jp_1818_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__4(lean_object* v_name_1840_, lean_object* v_decl_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1845_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_1846_ = l_Lean_MessageData_ofName(v_name_1840_);
v___x_1847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1845_);
lean_ctor_set(v___x_1847_, 1, v___x_1846_);
v___x_1848_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_1849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1847_);
lean_ctor_set(v___x_1849_, 1, v___x_1848_);
v___x_1850_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1849_, v___y_1842_, v___y_1843_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__4___boxed(lean_object* v_name_1851_, lean_object* v_decl_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Lean_registerTagAttribute___lam__4(v_name_1851_, v_decl_1852_, v___y_1853_, v___y_1854_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v_decl_1852_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5(lean_object* v___x_1857_, lean_object* v_x_1858_, lean_object* v_x_1859_){
_start:
{
lean_object* v___x_1861_; 
v___x_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1857_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5___boxed(lean_object* v___x_1862_, lean_object* v_x_1863_, lean_object* v_x_1864_, lean_object* v___y_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l_Lean_registerTagAttribute___lam__5(v___x_1862_, v_x_1863_, v_x_1864_);
lean_dec_ref(v_x_1864_);
lean_dec_ref(v_x_1863_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6(lean_object* v___x_1867_){
_start:
{
lean_object* v___x_1869_; 
v___x_1869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1867_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6___boxed(lean_object* v___x_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l_Lean_registerTagAttribute___lam__6(v___x_1870_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__7(lean_object* v_a_1873_, lean_object* v_decl_1874_, lean_object* v_s_1875_){
_start:
{
lean_object* v_addEntryFn_1876_; lean_object* v_importedEntries_1877_; lean_object* v_state_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1886_; 
v_addEntryFn_1876_ = lean_ctor_get(v_a_1873_, 3);
lean_inc(v_addEntryFn_1876_);
lean_dec_ref(v_a_1873_);
v_importedEntries_1877_ = lean_ctor_get(v_s_1875_, 0);
v_state_1878_ = lean_ctor_get(v_s_1875_, 1);
v_isSharedCheck_1886_ = !lean_is_exclusive(v_s_1875_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1880_ = v_s_1875_;
v_isShared_1881_ = v_isSharedCheck_1886_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_state_1878_);
lean_inc(v_importedEntries_1877_);
lean_dec(v_s_1875_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1886_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v_state_1882_; lean_object* v___x_1884_; 
v_state_1882_ = lean_apply_2(v_addEntryFn_1876_, v_state_1878_, v_decl_1874_);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 1, v_state_1882_);
v___x_1884_ = v___x_1880_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_importedEntries_1877_);
lean_ctor_set(v_reuseFailAlloc_1885_, 1, v_state_1882_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(lean_object* v_attrName_1887_, lean_object* v_declName_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_){
_start:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; uint8_t v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1892_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1893_ = l_Lean_MessageData_ofName(v_attrName_1887_);
v___x_1894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1892_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
v___x_1895_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1894_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
v___x_1897_ = 0;
v___x_1898_ = l_Lean_MessageData_ofConstName(v_declName_1888_, v___x_1897_);
v___x_1899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1896_);
lean_ctor_set(v___x_1899_, 1, v___x_1898_);
v___x_1900_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__5);
v___x_1901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1899_);
lean_ctor_set(v___x_1901_, 1, v___x_1900_);
v___x_1902_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1901_, v___y_1889_, v___y_1890_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg___boxed(lean_object* v_attrName_1903_, lean_object* v_declName_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(v_attrName_1903_, v_declName_1904_, v___y_1905_, v___y_1906_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg(lean_object* v_attrName_1909_, lean_object* v_declName_1910_, lean_object* v_asyncPrefix_x3f_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_){
_start:
{
lean_object* v___y_1916_; 
if (lean_obj_tag(v_asyncPrefix_x3f_1911_) == 0)
{
lean_object* v___x_1929_; 
v___x_1929_ = l_Lean_MessageData_nil;
v___y_1916_ = v___x_1929_;
goto v___jp_1915_;
}
else
{
lean_object* v_val_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v_val_1930_ = lean_ctor_get(v_asyncPrefix_x3f_1911_, 0);
lean_inc(v_val_1930_);
lean_dec_ref_known(v_asyncPrefix_x3f_1911_, 1);
v___x_1931_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3);
v___x_1932_ = l_Lean_MessageData_ofName(v_val_1930_);
v___x_1933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1933_, 0, v___x_1931_);
lean_ctor_set(v___x_1933_, 1, v___x_1932_);
v___x_1934_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_1935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1933_);
lean_ctor_set(v___x_1935_, 1, v___x_1934_);
v___y_1916_ = v___x_1935_;
goto v___jp_1915_;
}
v___jp_1915_:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; uint8_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1917_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1918_ = l_Lean_MessageData_ofName(v_attrName_1909_);
v___x_1919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1917_);
lean_ctor_set(v___x_1919_, 1, v___x_1918_);
v___x_1920_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1921_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1919_);
lean_ctor_set(v___x_1921_, 1, v___x_1920_);
v___x_1922_ = 0;
v___x_1923_ = l_Lean_MessageData_ofConstName(v_declName_1910_, v___x_1922_);
v___x_1924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1921_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___x_1925_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1);
v___x_1926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1924_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1926_);
lean_ctor_set(v___x_1927_, 1, v___y_1916_);
v___x_1928_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1927_, v___y_1912_, v___y_1913_);
return v___x_1928_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg___boxed(lean_object* v_attrName_1936_, lean_object* v_declName_1937_, lean_object* v_asyncPrefix_x3f_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg(v_attrName_1936_, v_declName_1937_, v_asyncPrefix_x3f_1938_, v___y_1939_, v___y_1940_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(lean_object* v_name_1943_, uint8_t v_kind_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___y_1954_; 
v___x_1948_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__1);
v___x_1949_ = l_Lean_MessageData_ofName(v_name_1943_);
v___x_1950_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1948_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
v___x_1951_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__3);
v___x_1952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1950_);
lean_ctor_set(v___x_1952_, 1, v___x_1951_);
switch(v_kind_1944_)
{
case 0:
{
lean_object* v___x_1961_; 
v___x_1961_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__0));
v___y_1954_ = v___x_1961_;
goto v___jp_1953_;
}
case 1:
{
lean_object* v___x_1962_; 
v___x_1962_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__1));
v___y_1954_ = v___x_1962_;
goto v___jp_1953_;
}
default: 
{
lean_object* v___x_1963_; 
v___x_1963_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__2));
v___y_1954_ = v___x_1963_;
goto v___jp_1953_;
}
}
v___jp_1953_:
{
lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
lean_inc_ref(v___y_1954_);
v___x_1955_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1955_, 0, v___y_1954_);
v___x_1956_ = l_Lean_MessageData_ofFormat(v___x_1955_);
v___x_1957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1952_);
lean_ctor_set(v___x_1957_, 1, v___x_1956_);
v___x_1958_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_1959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1957_);
lean_ctor_set(v___x_1959_, 1, v___x_1958_);
v___x_1960_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1959_, v___y_1945_, v___y_1946_);
return v___x_1960_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg___boxed(lean_object* v_name_1964_, lean_object* v_kind_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
uint8_t v_kind_boxed_1969_; lean_object* v_res_1970_; 
v_kind_boxed_1969_ = lean_unbox(v_kind_1965_);
v_res_1970_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(v_name_1964_, v_kind_boxed_1969_, v___y_1966_, v___y_1967_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__8(lean_object* v_a_1971_, lean_object* v_validate_1972_, lean_object* v_name_1973_, lean_object* v_decl_1974_, lean_object* v_stx_1975_, uint8_t v_kind_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v___y_1981_; lean_object* v___y_1982_; lean_object* v_nextMacroScope_1983_; lean_object* v_ngen_1984_; lean_object* v_auxDeclNGen_1985_; lean_object* v_traceState_1986_; lean_object* v_recordedDeps_1987_; lean_object* v_messages_1988_; lean_object* v_infoState_1989_; lean_object* v_snapshotTasks_1990_; lean_object* v___y_1991_; lean_object* v___f_1996_; lean_object* v___y_1998_; lean_object* v___y_1999_; lean_object* v___y_2020_; lean_object* v___y_2021_; lean_object* v___y_2022_; lean_object* v___x_2033_; 
lean_inc(v_decl_1974_);
lean_inc_ref(v_a_1971_);
v___f_1996_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__7), 3, 2);
lean_closure_set(v___f_1996_, 0, v_a_1971_);
lean_closure_set(v___f_1996_, 1, v_decl_1974_);
v___x_2033_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_1975_, v___y_1977_, v___y_1978_);
if (lean_obj_tag(v___x_2033_) == 0)
{
uint8_t v___x_2034_; uint8_t v___x_2035_; 
lean_dec_ref_known(v___x_2033_, 1);
v___x_2034_ = 0;
v___x_2035_ = l_Lean_instBEqAttributeKind_beq(v_kind_1976_, v___x_2034_);
if (v___x_2035_ == 0)
{
lean_object* v___x_2036_; 
lean_dec_ref(v___f_1996_);
lean_dec(v_decl_1974_);
lean_dec_ref(v_validate_1972_);
lean_dec_ref(v_a_1971_);
v___x_2036_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(v_name_1973_, v_kind_1976_, v___y_1977_, v___y_1978_);
return v___x_2036_;
}
else
{
goto v___jp_2028_;
}
}
else
{
lean_dec_ref(v___f_1996_);
lean_dec(v_decl_1974_);
lean_dec(v_name_1973_);
lean_dec_ref(v_validate_1972_);
lean_dec_ref(v_a_1971_);
return v___x_2033_;
}
v___jp_1980_:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1992_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
v___x_1993_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1993_, 0, v___y_1991_);
lean_ctor_set(v___x_1993_, 1, v_nextMacroScope_1983_);
lean_ctor_set(v___x_1993_, 2, v_ngen_1984_);
lean_ctor_set(v___x_1993_, 3, v_auxDeclNGen_1985_);
lean_ctor_set(v___x_1993_, 4, v_traceState_1986_);
lean_ctor_set(v___x_1993_, 5, v___x_1992_);
lean_ctor_set(v___x_1993_, 6, v_recordedDeps_1987_);
lean_ctor_set(v___x_1993_, 7, v_messages_1988_);
lean_ctor_set(v___x_1993_, 8, v_infoState_1989_);
lean_ctor_set(v___x_1993_, 9, v_snapshotTasks_1990_);
v___x_1994_ = lean_st_ref_put(v___y_1982_, v___x_1993_);
v___x_1995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1995_, 0, v___y_1981_);
return v___x_1995_;
}
v___jp_1997_:
{
lean_object* v___x_2000_; 
lean_inc(v___y_1999_);
lean_inc_ref(v___y_1998_);
lean_inc(v_decl_1974_);
v___x_2000_ = lean_apply_4(v_validate_1972_, v_decl_1974_, v___y_1998_, v___y_1999_, lean_box(0));
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v___x_2001_; lean_object* v_toEnvExtension_2002_; lean_object* v_env_2003_; lean_object* v_nextMacroScope_2004_; lean_object* v_ngen_2005_; lean_object* v_auxDeclNGen_2006_; lean_object* v_traceState_2007_; lean_object* v_recordedDeps_2008_; lean_object* v_messages_2009_; lean_object* v_infoState_2010_; lean_object* v_snapshotTasks_2011_; lean_object* v_asyncMode_2012_; uint8_t v_logWrites_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; 
lean_dec_ref_known(v___x_2000_, 1);
v___x_2001_ = lean_st_ref_take(v___y_1999_);
v_toEnvExtension_2002_ = lean_ctor_get(v_a_1971_, 0);
lean_inc_ref(v_toEnvExtension_2002_);
lean_dec_ref(v_a_1971_);
v_env_2003_ = lean_ctor_get(v___x_2001_, 0);
lean_inc_ref(v_env_2003_);
v_nextMacroScope_2004_ = lean_ctor_get(v___x_2001_, 1);
lean_inc(v_nextMacroScope_2004_);
v_ngen_2005_ = lean_ctor_get(v___x_2001_, 2);
lean_inc_ref(v_ngen_2005_);
v_auxDeclNGen_2006_ = lean_ctor_get(v___x_2001_, 3);
lean_inc_ref(v_auxDeclNGen_2006_);
v_traceState_2007_ = lean_ctor_get(v___x_2001_, 4);
lean_inc_ref(v_traceState_2007_);
v_recordedDeps_2008_ = lean_ctor_get(v___x_2001_, 6);
lean_inc_ref(v_recordedDeps_2008_);
v_messages_2009_ = lean_ctor_get(v___x_2001_, 7);
lean_inc_ref(v_messages_2009_);
v_infoState_2010_ = lean_ctor_get(v___x_2001_, 8);
lean_inc_ref(v_infoState_2010_);
v_snapshotTasks_2011_ = lean_ctor_get(v___x_2001_, 9);
lean_inc_ref(v_snapshotTasks_2011_);
lean_dec(v___x_2001_);
v_asyncMode_2012_ = lean_ctor_get(v_toEnvExtension_2002_, 2);
lean_inc(v_asyncMode_2012_);
v_logWrites_2013_ = lean_ctor_get_uint8(v_toEnvExtension_2002_, sizeof(void*)*6);
v___x_2014_ = lean_box(0);
v___x_2015_ = 1;
if (v_logWrites_2013_ == 0)
{
lean_object* v___x_2016_; 
v___x_2016_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2002_, v_env_2003_, v___f_1996_, v_asyncMode_2012_, v_decl_1974_, v___x_2015_);
lean_dec(v_asyncMode_2012_);
v___y_1981_ = v___x_2014_;
v___y_1982_ = v___y_1999_;
v_nextMacroScope_1983_ = v_nextMacroScope_2004_;
v_ngen_1984_ = v_ngen_2005_;
v_auxDeclNGen_1985_ = v_auxDeclNGen_2006_;
v_traceState_1986_ = v_traceState_2007_;
v_recordedDeps_1987_ = v_recordedDeps_2008_;
v_messages_1988_ = v_messages_2009_;
v_infoState_1989_ = v_infoState_2010_;
v_snapshotTasks_1990_ = v_snapshotTasks_2011_;
v___y_1991_ = v___x_2016_;
goto v___jp_1980_;
}
else
{
lean_object* v___x_2017_; lean_object* v___x_2018_; 
lean_inc(v_decl_1974_);
v___x_2017_ = l_Lean_Environment_logDeclChange(v_env_2003_, v_decl_1974_);
v___x_2018_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2002_, v___x_2017_, v___f_1996_, v_asyncMode_2012_, v_decl_1974_, v___x_2015_);
lean_dec(v_asyncMode_2012_);
v___y_1981_ = v___x_2014_;
v___y_1982_ = v___y_1999_;
v_nextMacroScope_1983_ = v_nextMacroScope_2004_;
v_ngen_1984_ = v_ngen_2005_;
v_auxDeclNGen_1985_ = v_auxDeclNGen_2006_;
v_traceState_1986_ = v_traceState_2007_;
v_recordedDeps_1987_ = v_recordedDeps_2008_;
v_messages_1988_ = v_messages_2009_;
v_infoState_1989_ = v_infoState_2010_;
v_snapshotTasks_1990_ = v_snapshotTasks_2011_;
v___y_1991_ = v___x_2018_;
goto v___jp_1980_;
}
}
else
{
lean_dec_ref(v___f_1996_);
lean_dec(v_decl_1974_);
lean_dec_ref(v_a_1971_);
return v___x_2000_;
}
}
v___jp_2019_:
{
lean_object* v_toEnvExtension_2023_; lean_object* v_asyncMode_2024_; uint8_t v___x_2025_; 
v_toEnvExtension_2023_ = lean_ctor_get(v_a_1971_, 0);
v_asyncMode_2024_ = lean_ctor_get(v_toEnvExtension_2023_, 2);
lean_inc(v_decl_1974_);
lean_inc_ref(v___y_2020_);
v___x_2025_ = l_Lean_EnvExtension_asyncMayModify___redArg(v___y_2020_, v_decl_1974_, v_asyncMode_2024_);
if (v___x_2025_ == 0)
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
lean_dec_ref(v___f_1996_);
lean_dec_ref(v_validate_1972_);
lean_dec_ref(v_a_1971_);
v___x_2026_ = l_Lean_Environment_asyncPrefix_x3f(v___y_2020_);
v___x_2027_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg(v_name_1973_, v_decl_1974_, v___x_2026_, v___y_2021_, v___y_2022_);
return v___x_2027_;
}
else
{
lean_dec_ref(v___y_2020_);
lean_dec(v_name_1973_);
v___y_1998_ = v___y_2021_;
v___y_1999_ = v___y_2022_;
goto v___jp_1997_;
}
}
v___jp_2028_:
{
lean_object* v___x_2029_; lean_object* v_env_2030_; lean_object* v___x_2031_; 
v___x_2029_ = lean_st_ref_get(v___y_1978_);
v_env_2030_ = lean_ctor_get(v___x_2029_, 0);
lean_inc_ref(v_env_2030_);
lean_dec(v___x_2029_);
v___x_2031_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2030_, v_decl_1974_);
if (lean_obj_tag(v___x_2031_) == 0)
{
v___y_2020_ = v_env_2030_;
v___y_2021_ = v___y_1977_;
v___y_2022_ = v___y_1978_;
goto v___jp_2019_;
}
else
{
lean_object* v___x_2032_; 
lean_dec_ref_known(v___x_2031_, 1);
lean_dec_ref(v_env_2030_);
lean_dec_ref(v___f_1996_);
lean_dec_ref(v_validate_1972_);
lean_dec_ref(v_a_1971_);
v___x_2032_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(v_name_1973_, v_decl_1974_, v___y_1977_, v___y_1978_);
return v___x_2032_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__8___boxed(lean_object* v_a_2037_, lean_object* v_validate_2038_, lean_object* v_name_2039_, lean_object* v_decl_2040_, lean_object* v_stx_2041_, lean_object* v_kind_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_){
_start:
{
uint8_t v_kind_boxed_2046_; lean_object* v_res_2047_; 
v_kind_boxed_2046_ = lean_unbox(v_kind_2042_);
v_res_2047_ = l_Lean_registerTagAttribute___lam__8(v_a_2037_, v_validate_2038_, v_name_2039_, v_decl_2040_, v_stx_2041_, v_kind_boxed_2046_, v___y_2043_, v___y_2044_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
return v_res_2047_;
}
}
static lean_object* _init_l_Lean_registerTagAttribute___closed__5(void){
_start:
{
lean_object* v___x_2053_; lean_object* v___f_2054_; 
v___x_2053_ = l_Lean_NameSet_empty;
v___f_2054_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__5___boxed), 4, 1);
lean_closure_set(v___f_2054_, 0, v___x_2053_);
return v___f_2054_;
}
}
static lean_object* _init_l_Lean_registerTagAttribute___closed__6(void){
_start:
{
lean_object* v___x_2055_; lean_object* v___f_2056_; 
v___x_2055_ = l_Lean_NameSet_empty;
v___f_2056_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__6___boxed), 2, 1);
lean_closure_set(v___f_2056_, 0, v___x_2055_);
return v___f_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute(lean_object* v_name_2059_, lean_object* v_descr_2060_, lean_object* v_validate_2061_, lean_object* v_ref_2062_, uint8_t v_applicationTime_2063_, lean_object* v_asyncMode_2064_, uint8_t v_logWrites_2065_){
_start:
{
lean_object* v___f_2067_; lean_object* v___f_2068_; lean_object* v___f_2069_; lean_object* v___f_2070_; lean_object* v___f_2071_; lean_object* v___f_2072_; lean_object* v___f_2073_; lean_object* v___x_2074_; uint8_t v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___f_2067_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__0));
v___f_2068_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__2));
v___f_2069_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__3));
v___f_2070_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__4));
lean_inc(v_name_2059_);
v___f_2071_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__4___boxed), 5, 1);
lean_closure_set(v___f_2071_, 0, v_name_2059_);
v___f_2072_ = lean_obj_once(&l_Lean_registerTagAttribute___closed__5, &l_Lean_registerTagAttribute___closed__5_once, _init_l_Lean_registerTagAttribute___closed__5);
v___f_2073_ = lean_obj_once(&l_Lean_registerTagAttribute___closed__6, &l_Lean_registerTagAttribute___closed__6_once, _init_l_Lean_registerTagAttribute___closed__6);
v___x_2074_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__7));
v___x_2075_ = 0;
lean_inc(v_ref_2062_);
v___x_2076_ = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(v___x_2076_, 0, v_ref_2062_);
lean_ctor_set(v___x_2076_, 1, v___f_2073_);
lean_ctor_set(v___x_2076_, 2, v___f_2072_);
lean_ctor_set(v___x_2076_, 3, v___f_2070_);
lean_ctor_set(v___x_2076_, 4, v___f_2069_);
lean_ctor_set(v___x_2076_, 5, v___f_2068_);
lean_ctor_set(v___x_2076_, 6, v_asyncMode_2064_);
lean_ctor_set(v___x_2076_, 7, v___x_2074_);
lean_ctor_set_uint8(v___x_2076_, sizeof(void*)*8, v___x_2075_);
lean_ctor_set_uint8(v___x_2076_, sizeof(void*)*8 + 1, v_logWrites_2065_);
v___x_2077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2076_);
lean_ctor_set(v___x_2077_, 1, v___f_2067_);
v___x_2078_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2077_);
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_object* v_a_2079_; lean_object* v___f_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v_a_2079_ = lean_ctor_get(v___x_2078_, 0);
lean_inc_n(v_a_2079_, 2);
lean_dec_ref_known(v___x_2078_, 1);
lean_inc(v_name_2059_);
v___f_2080_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__8___boxed), 9, 3);
lean_closure_set(v___f_2080_, 0, v_a_2079_);
lean_closure_set(v___f_2080_, 1, v_validate_2061_);
lean_closure_set(v___f_2080_, 2, v_name_2059_);
v___x_2081_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2081_, 0, v_ref_2062_);
lean_ctor_set(v___x_2081_, 1, v_name_2059_);
lean_ctor_set(v___x_2081_, 2, v_descr_2060_);
lean_ctor_set_uint8(v___x_2081_, sizeof(void*)*3, v_applicationTime_2063_);
v___x_2082_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
lean_ctor_set(v___x_2082_, 1, v___f_2080_);
lean_ctor_set(v___x_2082_, 2, v___f_2071_);
lean_inc_ref(v___x_2082_);
v___x_2083_ = l_Lean_registerBuiltinAttribute(v___x_2082_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2091_; 
v_isSharedCheck_2091_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2091_ == 0)
{
lean_object* v_unused_2092_; 
v_unused_2092_ = lean_ctor_get(v___x_2083_, 0);
lean_dec(v_unused_2092_);
v___x_2085_ = v___x_2083_;
v_isShared_2086_ = v_isSharedCheck_2091_;
goto v_resetjp_2084_;
}
else
{
lean_dec(v___x_2083_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2091_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2087_; lean_object* v___x_2089_; 
v___x_2087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2082_);
lean_ctor_set(v___x_2087_, 1, v_a_2079_);
if (v_isShared_2086_ == 0)
{
lean_ctor_set(v___x_2085_, 0, v___x_2087_);
v___x_2089_ = v___x_2085_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v___x_2087_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
return v___x_2089_;
}
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
lean_dec_ref_known(v___x_2082_, 3);
lean_dec(v_a_2079_);
v_a_2093_ = lean_ctor_get(v___x_2083_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2083_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2083_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
else
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
lean_dec_ref(v___f_2071_);
lean_dec(v_ref_2062_);
lean_dec_ref(v_validate_2061_);
lean_dec_ref(v_descr_2060_);
lean_dec(v_name_2059_);
v_a_2101_ = lean_ctor_get(v___x_2078_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2078_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2078_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___boxed(lean_object* v_name_2109_, lean_object* v_descr_2110_, lean_object* v_validate_2111_, lean_object* v_ref_2112_, lean_object* v_applicationTime_2113_, lean_object* v_asyncMode_2114_, lean_object* v_logWrites_2115_, lean_object* v_a_2116_){
_start:
{
uint8_t v_applicationTime_boxed_2117_; uint8_t v_logWrites_boxed_2118_; lean_object* v_res_2119_; 
v_applicationTime_boxed_2117_ = lean_unbox(v_applicationTime_2113_);
v_logWrites_boxed_2118_ = lean_unbox(v_logWrites_2115_);
v_res_2119_ = l_Lean_registerTagAttribute(v_name_2109_, v_descr_2110_, v_validate_2111_, v_ref_2112_, v_applicationTime_boxed_2117_, v_asyncMode_2114_, v_logWrites_boxed_2118_);
return v_res_2119_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1(lean_object* v_init_2120_, lean_object* v_t_2121_){
_start:
{
lean_object* v___x_2122_; 
v___x_2122_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1_spec__1(v_init_2120_, v_t_2121_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3(lean_object* v_n_2123_, lean_object* v_as_2124_, lean_object* v_lo_2125_, lean_object* v_hi_2126_, lean_object* v_w_2127_, lean_object* v_hlo_2128_, lean_object* v_hhi_2129_){
_start:
{
lean_object* v___x_2130_; 
v___x_2130_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(v_n_2123_, v_as_2124_, v_lo_2125_, v_hi_2126_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___boxed(lean_object* v_n_2131_, lean_object* v_as_2132_, lean_object* v_lo_2133_, lean_object* v_hi_2134_, lean_object* v_w_2135_, lean_object* v_hlo_2136_, lean_object* v_hhi_2137_){
_start:
{
lean_object* v_res_2138_; 
v_res_2138_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3(v_n_2131_, v_as_2132_, v_lo_2133_, v_hi_2134_, v_w_2135_, v_hlo_2136_, v_hhi_2137_);
lean_dec(v_hi_2134_);
lean_dec(v_n_2131_);
return v_res_2138_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4(lean_object* v_00_u03b1_2139_, lean_object* v_attrName_2140_, lean_object* v_declName_2141_, lean_object* v_asyncPrefix_x3f_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg(v_attrName_2140_, v_declName_2141_, v_asyncPrefix_x3f_2142_, v___y_2143_, v___y_2144_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___boxed(lean_object* v_00_u03b1_2147_, lean_object* v_attrName_2148_, lean_object* v_declName_2149_, lean_object* v_asyncPrefix_x3f_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4(v_00_u03b1_2147_, v_attrName_2148_, v_declName_2149_, v_asyncPrefix_x3f_2150_, v___y_2151_, v___y_2152_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5(lean_object* v_00_u03b1_2155_, lean_object* v_attrName_2156_, lean_object* v_declName_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v___x_2161_; 
v___x_2161_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(v_attrName_2156_, v_declName_2157_, v___y_2158_, v___y_2159_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___boxed(lean_object* v_00_u03b1_2162_, lean_object* v_attrName_2163_, lean_object* v_declName_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_){
_start:
{
lean_object* v_res_2168_; 
v_res_2168_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5(v_00_u03b1_2162_, v_attrName_2163_, v_declName_2164_, v___y_2165_, v___y_2166_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6(lean_object* v_00_u03b1_2169_, lean_object* v_name_2170_, uint8_t v_kind_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_){
_start:
{
lean_object* v___x_2175_; 
v___x_2175_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(v_name_2170_, v_kind_2171_, v___y_2172_, v___y_2173_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___boxed(lean_object* v_00_u03b1_2176_, lean_object* v_name_2177_, lean_object* v_kind_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_){
_start:
{
uint8_t v_kind_boxed_2182_; lean_object* v_res_2183_; 
v_kind_boxed_2182_ = lean_unbox(v_kind_2178_);
v_res_2183_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6(v_00_u03b1_2176_, v_name_2177_, v_kind_boxed_2182_, v___y_2179_, v___y_2180_);
lean_dec(v___y_2180_);
lean_dec_ref(v___y_2179_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4(lean_object* v_n_2184_, lean_object* v_lo_2185_, lean_object* v_hi_2186_, lean_object* v_hhi_2187_, lean_object* v_pivot_2188_, lean_object* v_as_2189_, lean_object* v_i_2190_, lean_object* v_k_2191_, lean_object* v_ilo_2192_, lean_object* v_ik_2193_, lean_object* v_w_2194_){
_start:
{
lean_object* v___x_2195_; 
v___x_2195_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg(v_hi_2186_, v_pivot_2188_, v_as_2189_, v_i_2190_, v_k_2191_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___boxed(lean_object* v_n_2196_, lean_object* v_lo_2197_, lean_object* v_hi_2198_, lean_object* v_hhi_2199_, lean_object* v_pivot_2200_, lean_object* v_as_2201_, lean_object* v_i_2202_, lean_object* v_k_2203_, lean_object* v_ilo_2204_, lean_object* v_ik_2205_, lean_object* v_w_2206_){
_start:
{
lean_object* v_res_2207_; 
v_res_2207_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4(v_n_2196_, v_lo_2197_, v_hi_2198_, v_hhi_2199_, v_pivot_2200_, v_as_2201_, v_i_2202_, v_k_2203_, v_ilo_2204_, v_ik_2205_, v_w_2206_);
lean_dec(v_pivot_2200_);
lean_dec(v_hi_2198_);
lean_dec(v_lo_2197_);
lean_dec(v_n_2196_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__0(lean_object* v_addEntryFn_2208_, lean_object* v_decl_2209_, lean_object* v_s_2210_){
_start:
{
lean_object* v_importedEntries_2211_; lean_object* v_state_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2220_; 
v_importedEntries_2211_ = lean_ctor_get(v_s_2210_, 0);
v_state_2212_ = lean_ctor_get(v_s_2210_, 1);
v_isSharedCheck_2220_ = !lean_is_exclusive(v_s_2210_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2214_ = v_s_2210_;
v_isShared_2215_ = v_isSharedCheck_2220_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_state_2212_);
lean_inc(v_importedEntries_2211_);
lean_dec(v_s_2210_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2220_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v_state_2216_; lean_object* v___x_2218_; 
v_state_2216_ = lean_apply_2(v_addEntryFn_2208_, v_state_2212_, v_decl_2209_);
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 1, v_state_2216_);
v___x_2218_ = v___x_2214_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_importedEntries_2211_);
lean_ctor_set(v_reuseFailAlloc_2219_, 1, v_state_2216_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__1(lean_object* v_attr_2221_, lean_object* v_decl_2222_, lean_object* v_env_2223_){
_start:
{
lean_object* v_ext_2224_; lean_object* v_toEnvExtension_2225_; lean_object* v_addEntryFn_2226_; lean_object* v_asyncMode_2227_; uint8_t v_logWrites_2228_; lean_object* v___f_2229_; uint8_t v___x_2230_; 
v_ext_2224_ = lean_ctor_get(v_attr_2221_, 1);
lean_inc_ref(v_ext_2224_);
lean_dec_ref(v_attr_2221_);
v_toEnvExtension_2225_ = lean_ctor_get(v_ext_2224_, 0);
lean_inc_ref(v_toEnvExtension_2225_);
v_addEntryFn_2226_ = lean_ctor_get(v_ext_2224_, 3);
lean_inc(v_addEntryFn_2226_);
lean_dec_ref(v_ext_2224_);
v_asyncMode_2227_ = lean_ctor_get(v_toEnvExtension_2225_, 2);
lean_inc(v_asyncMode_2227_);
v_logWrites_2228_ = lean_ctor_get_uint8(v_toEnvExtension_2225_, sizeof(void*)*6);
lean_inc(v_decl_2222_);
v___f_2229_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2229_, 0, v_addEntryFn_2226_);
lean_closure_set(v___f_2229_, 1, v_decl_2222_);
v___x_2230_ = 1;
if (v_logWrites_2228_ == 0)
{
lean_object* v___x_2231_; 
v___x_2231_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2225_, v_env_2223_, v___f_2229_, v_asyncMode_2227_, v_decl_2222_, v___x_2230_);
lean_dec(v_asyncMode_2227_);
return v___x_2231_;
}
else
{
lean_object* v___x_2232_; lean_object* v___x_2233_; 
lean_inc_ref(v_toEnvExtension_2225_);
v___x_2232_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_2225_, v_env_2223_);
lean_dec_ref(v_env_2223_);
v___x_2233_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2225_, v___x_2232_, v___f_2229_, v_asyncMode_2227_, v_decl_2222_, v___x_2230_);
lean_dec(v_asyncMode_2227_);
return v___x_2233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__2(lean_object* v_modifyEnv_2234_, lean_object* v___f_2235_, lean_object* v_____r_2236_){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = lean_apply_1(v_modifyEnv_2234_, v___f_2235_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__3(lean_object* v_attr_2238_, lean_object* v_env_2239_, lean_object* v_decl_2240_, lean_object* v_inst_2241_, lean_object* v_inst_2242_, lean_object* v_toBind_2243_, lean_object* v___f_2244_, lean_object* v_modifyEnv_2245_, lean_object* v___f_2246_, lean_object* v_____r_2247_){
_start:
{
lean_object* v_ext_2248_; lean_object* v_toEnvExtension_2249_; lean_object* v_attr_2250_; lean_object* v_asyncMode_2251_; uint8_t v___x_2252_; 
v_ext_2248_ = lean_ctor_get(v_attr_2238_, 1);
v_toEnvExtension_2249_ = lean_ctor_get(v_ext_2248_, 0);
lean_inc_ref(v_toEnvExtension_2249_);
v_attr_2250_ = lean_ctor_get(v_attr_2238_, 0);
lean_inc_ref(v_attr_2250_);
lean_dec_ref(v_attr_2238_);
v_asyncMode_2251_ = lean_ctor_get(v_toEnvExtension_2249_, 2);
lean_inc(v_asyncMode_2251_);
lean_dec_ref(v_toEnvExtension_2249_);
lean_inc(v_decl_2240_);
lean_inc_ref(v_env_2239_);
v___x_2252_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_2239_, v_decl_2240_, v_asyncMode_2251_);
lean_dec(v_asyncMode_2251_);
if (v___x_2252_ == 0)
{
lean_object* v_toAttributeImplCore_2253_; lean_object* v_name_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
lean_dec_ref(v___f_2246_);
lean_dec(v_modifyEnv_2245_);
v_toAttributeImplCore_2253_ = lean_ctor_get(v_attr_2250_, 0);
lean_inc_ref(v_toAttributeImplCore_2253_);
lean_dec_ref(v_attr_2250_);
v_name_2254_ = lean_ctor_get(v_toAttributeImplCore_2253_, 1);
lean_inc(v_name_2254_);
lean_dec_ref(v_toAttributeImplCore_2253_);
v___x_2255_ = l_Lean_Environment_asyncPrefix_x3f(v_env_2239_);
v___x_2256_ = l_Lean_throwAttrNotInAsyncCtx___redArg(v_inst_2241_, v_inst_2242_, v_name_2254_, v_decl_2240_, v___x_2255_);
v___x_2257_ = lean_apply_4(v_toBind_2243_, lean_box(0), lean_box(0), v___x_2256_, v___f_2244_);
return v___x_2257_;
}
else
{
lean_object* v___x_2258_; 
lean_dec_ref(v_attr_2250_);
lean_dec(v___f_2244_);
lean_dec(v_toBind_2243_);
lean_dec_ref(v_inst_2242_);
lean_dec_ref(v_inst_2241_);
lean_dec(v_decl_2240_);
lean_dec_ref(v_env_2239_);
v___x_2258_ = lean_apply_1(v_modifyEnv_2245_, v___f_2246_);
return v___x_2258_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__4(lean_object* v___f_2259_, lean_object* v_____r_2260_){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = lean_apply_1(v___f_2259_, v_____r_2260_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__5(lean_object* v_attr_2262_, lean_object* v_decl_2263_, lean_object* v_inst_2264_, lean_object* v_inst_2265_, lean_object* v_toBind_2266_, lean_object* v___f_2267_, lean_object* v_modifyEnv_2268_, lean_object* v___f_2269_, lean_object* v_env_2270_){
_start:
{
lean_object* v___f_2271_; lean_object* v___x_2272_; 
lean_inc_ref(v___f_2269_);
lean_inc(v_modifyEnv_2268_);
lean_inc(v___f_2267_);
lean_inc(v_toBind_2266_);
lean_inc_ref(v_inst_2265_);
lean_inc_ref(v_inst_2264_);
lean_inc(v_decl_2263_);
lean_inc_ref(v_env_2270_);
lean_inc_ref(v_attr_2262_);
v___f_2271_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__3), 10, 9);
lean_closure_set(v___f_2271_, 0, v_attr_2262_);
lean_closure_set(v___f_2271_, 1, v_env_2270_);
lean_closure_set(v___f_2271_, 2, v_decl_2263_);
lean_closure_set(v___f_2271_, 3, v_inst_2264_);
lean_closure_set(v___f_2271_, 4, v_inst_2265_);
lean_closure_set(v___f_2271_, 5, v_toBind_2266_);
lean_closure_set(v___f_2271_, 6, v___f_2267_);
lean_closure_set(v___f_2271_, 7, v_modifyEnv_2268_);
lean_closure_set(v___f_2271_, 8, v___f_2269_);
v___x_2272_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2270_, v_decl_2263_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v___x_2273_; lean_object* v___x_2274_; 
lean_dec_ref(v___f_2271_);
v___x_2273_ = lean_box(0);
v___x_2274_ = l_Lean_TagAttribute_setTag___redArg___lam__3(v_attr_2262_, v_env_2270_, v_decl_2263_, v_inst_2264_, v_inst_2265_, v_toBind_2266_, v___f_2267_, v_modifyEnv_2268_, v___f_2269_, v___x_2273_);
return v___x_2274_;
}
else
{
lean_object* v_attr_2275_; lean_object* v_toAttributeImplCore_2276_; lean_object* v_name_2277_; lean_object* v___f_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
lean_dec_ref_known(v___x_2272_, 1);
lean_dec_ref(v_env_2270_);
lean_dec_ref(v___f_2269_);
lean_dec(v_modifyEnv_2268_);
lean_dec(v___f_2267_);
v_attr_2275_ = lean_ctor_get(v_attr_2262_, 0);
lean_inc_ref(v_attr_2275_);
lean_dec_ref(v_attr_2262_);
v_toAttributeImplCore_2276_ = lean_ctor_get(v_attr_2275_, 0);
lean_inc_ref(v_toAttributeImplCore_2276_);
lean_dec_ref(v_attr_2275_);
v_name_2277_ = lean_ctor_get(v_toAttributeImplCore_2276_, 1);
lean_inc(v_name_2277_);
lean_dec_ref(v_toAttributeImplCore_2276_);
v___f_2278_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2278_, 0, v___f_2271_);
v___x_2279_ = l_Lean_throwAttrDeclInImportedModule___redArg(v_inst_2264_, v_inst_2265_, v_name_2277_, v_decl_2263_);
v___x_2280_ = lean_apply_4(v_toBind_2266_, lean_box(0), lean_box(0), v___x_2279_, v___f_2278_);
return v___x_2280_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg(lean_object* v_inst_2281_, lean_object* v_inst_2282_, lean_object* v_inst_2283_, lean_object* v_attr_2284_, lean_object* v_decl_2285_){
_start:
{
lean_object* v_toBind_2286_; lean_object* v_getEnv_2287_; lean_object* v_modifyEnv_2288_; lean_object* v___f_2289_; lean_object* v___f_2290_; lean_object* v___f_2291_; lean_object* v___x_2292_; 
v_toBind_2286_ = lean_ctor_get(v_inst_2281_, 1);
lean_inc_n(v_toBind_2286_, 2);
v_getEnv_2287_ = lean_ctor_get(v_inst_2283_, 0);
lean_inc(v_getEnv_2287_);
v_modifyEnv_2288_ = lean_ctor_get(v_inst_2283_, 1);
lean_inc_n(v_modifyEnv_2288_, 2);
lean_dec_ref(v_inst_2283_);
lean_inc(v_decl_2285_);
lean_inc_ref(v_attr_2284_);
v___f_2289_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2289_, 0, v_attr_2284_);
lean_closure_set(v___f_2289_, 1, v_decl_2285_);
lean_inc_ref(v___f_2289_);
v___f_2290_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2290_, 0, v_modifyEnv_2288_);
lean_closure_set(v___f_2290_, 1, v___f_2289_);
v___f_2291_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__5), 9, 8);
lean_closure_set(v___f_2291_, 0, v_attr_2284_);
lean_closure_set(v___f_2291_, 1, v_decl_2285_);
lean_closure_set(v___f_2291_, 2, v_inst_2281_);
lean_closure_set(v___f_2291_, 3, v_inst_2282_);
lean_closure_set(v___f_2291_, 4, v_toBind_2286_);
lean_closure_set(v___f_2291_, 5, v___f_2290_);
lean_closure_set(v___f_2291_, 6, v_modifyEnv_2288_);
lean_closure_set(v___f_2291_, 7, v___f_2289_);
v___x_2292_ = lean_apply_4(v_toBind_2286_, lean_box(0), lean_box(0), v_getEnv_2287_, v___f_2291_);
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag(lean_object* v_m_2293_, lean_object* v_inst_2294_, lean_object* v_inst_2295_, lean_object* v_inst_2296_, lean_object* v_attr_2297_, lean_object* v_decl_2298_){
_start:
{
lean_object* v___x_2299_; 
v___x_2299_ = l_Lean_TagAttribute_setTag___redArg(v_inst_2294_, v_inst_2295_, v_inst_2296_, v_attr_2297_, v_decl_2298_);
return v___x_2299_;
}
}
LEAN_EXPORT uint8_t l_Lean_TagAttribute_hasTag(lean_object* v_attr_2300_, lean_object* v_env_2301_, lean_object* v_decl_2302_){
_start:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2303_ = lean_box(1);
v___x_2304_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2301_, v_decl_2302_);
if (lean_obj_tag(v___x_2304_) == 0)
{
lean_object* v_ext_2305_; lean_object* v_toEnvExtension_2306_; lean_object* v_asyncMode_2307_; uint8_t v___x_2308_; lean_object* v___x_2309_; uint8_t v___x_2310_; 
v_ext_2305_ = lean_ctor_get(v_attr_2300_, 1);
v_toEnvExtension_2306_ = lean_ctor_get(v_ext_2305_, 0);
v_asyncMode_2307_ = lean_ctor_get(v_toEnvExtension_2306_, 2);
v___x_2308_ = 0;
lean_inc(v_decl_2302_);
v___x_2309_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2303_, v_ext_2305_, v_env_2301_, v_asyncMode_2307_, v_decl_2302_, v___x_2308_);
v___x_2310_ = l_Lean_NameSet_contains(v___x_2309_, v_decl_2302_);
lean_dec(v_decl_2302_);
lean_dec(v___x_2309_);
return v___x_2310_;
}
else
{
lean_object* v_val_2311_; lean_object* v_ext_2312_; uint8_t v___x_2313_; lean_object* v___x_2314_; uint8_t v___x_2315_; 
v_val_2311_ = lean_ctor_get(v___x_2304_, 0);
lean_inc(v_val_2311_);
lean_dec_ref_known(v___x_2304_, 1);
v_ext_2312_ = lean_ctor_get(v_attr_2300_, 1);
v___x_2313_ = 0;
v___x_2314_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2303_, v_ext_2312_, v_env_2301_, v_val_2311_, v___x_2313_);
lean_dec(v_val_2311_);
lean_dec_ref(v_env_2301_);
v___x_2315_ = l_Lean_containsSortedName(v___x_2314_, v_decl_2302_);
lean_dec(v_decl_2302_);
lean_dec_ref(v___x_2314_);
return v___x_2315_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_hasTag___boxed(lean_object* v_attr_2316_, lean_object* v_env_2317_, lean_object* v_decl_2318_){
_start:
{
uint8_t v_res_2319_; lean_object* v_r_2320_; 
v_res_2319_ = l_Lean_TagAttribute_hasTag(v_attr_2316_, v_env_2317_, v_decl_2318_);
lean_dec_ref(v_attr_2316_);
v_r_2320_ = lean_box(v_res_2319_);
return v_r_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0(lean_object* v_x_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2324_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1));
v___x_2325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2324_);
return v___x_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0___boxed(lean_object* v_x_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_){
_start:
{
lean_object* v_res_2329_; 
v_res_2329_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0(v_x_2326_, v___y_2327_);
lean_dec_ref(v___y_2327_);
lean_dec_ref(v_x_2326_);
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1(lean_object* v_s_2330_, lean_object* v_x_2331_){
_start:
{
lean_inc_ref(v_s_2330_);
return v_s_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1___boxed(lean_object* v_s_2332_, lean_object* v_x_2333_){
_start:
{
lean_object* v_res_2334_; 
v_res_2334_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1(v_s_2332_, v_x_2333_);
lean_dec_ref(v_x_2333_);
lean_dec_ref(v_s_2332_);
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2(lean_object* v_x_2339_, lean_object* v_x_2340_){
_start:
{
lean_object* v___x_2341_; 
v___x_2341_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1));
return v___x_2341_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___boxed(lean_object* v_x_2342_, lean_object* v_x_2343_){
_start:
{
lean_object* v_res_2344_; 
v_res_2344_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2(v_x_2342_, v_x_2343_);
lean_dec_ref(v_x_2343_);
lean_dec_ref(v_x_2342_);
return v_res_2344_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3(lean_object* v_x_2345_){
_start:
{
lean_object* v___x_2346_; 
v___x_2346_ = lean_box(0);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3___boxed(lean_object* v_x_2347_){
_start:
{
lean_object* v_res_2348_; 
v_res_2348_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3(v_x_2347_);
lean_dec_ref(v_x_2347_);
return v_res_2348_;
}
}
static lean_object* _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4(void){
_start:
{
lean_object* v___f_2353_; lean_object* v___f_2354_; lean_object* v___f_2355_; lean_object* v___f_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___f_2353_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3));
v___f_2354_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2));
v___f_2355_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1));
v___f_2356_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0));
v___x_2357_ = lean_box(0);
v___x_2358_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__4, &l_Lean_instInhabitedTagAttribute_default___closed__4_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__4);
v___x_2359_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2358_);
lean_ctor_set(v___x_2359_, 1, v___x_2357_);
lean_ctor_set(v___x_2359_, 2, v___f_2356_);
lean_ctor_set(v___x_2359_, 3, v___f_2355_);
lean_ctor_set(v___x_2359_, 4, v___f_2354_);
lean_ctor_set(v___x_2359_, 5, v___f_2353_);
return v___x_2359_;
}
}
static lean_object* _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5(void){
_start:
{
uint8_t v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2360_ = 0;
v___x_2361_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4, &l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4_once, _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4);
v___x_2362_ = ((lean_object*)(l_Lean_instInhabitedAttributeImpl_default));
v___x_2363_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
lean_ctor_set(v___x_2363_, 1, v___x_2361_);
lean_ctor_set_uint8(v___x_2363_, sizeof(void*)*2, v___x_2360_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg(){
_start:
{
lean_object* v___x_2365_; 
v___x_2365_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5, &l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5_once, _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___boxed(lean_object* v___dummy_2366_){
_start:
{
lean_object* v_res_2367_; 
v_res_2367_ = l_Lean_instInhabitedParametricAttribute_default___redArg();
return v_res_2367_;
}
}
static lean_object* _init_l_Lean_instInhabitedParametricAttribute_default___closed__0(void){
_start:
{
lean_object* v___x_2368_; 
v___x_2368_ = l_Lean_instInhabitedParametricAttribute_default___redArg();
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default(lean_object* v_00_u03b1_2369_){
_start:
{
lean_object* v___x_2370_; 
v___x_2370_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___closed__0, &l_Lean_instInhabitedParametricAttribute_default___closed__0_once, _init_l_Lean_instInhabitedParametricAttribute_default___closed__0);
return v___x_2370_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg(){
_start:
{
lean_object* v___x_2372_; 
v___x_2372_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___closed__0, &l_Lean_instInhabitedParametricAttribute_default___closed__0_once, _init_l_Lean_instInhabitedParametricAttribute_default___closed__0);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg___boxed(lean_object* v___dummy_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l_Lean_instInhabitedParametricAttribute___redArg();
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute(lean_object* v_a_2375_){
_start:
{
lean_object* v___x_2376_; 
v___x_2376_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___closed__0, &l_Lean_instInhabitedParametricAttribute_default___closed__0_once, _init_l_Lean_instInhabitedParametricAttribute_default___closed__0);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__0(lean_object* v_x_2377_, lean_object* v_p_2378_){
_start:
{
lean_object* v_fst_2379_; lean_object* v_snd_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2397_; 
v_fst_2379_ = lean_ctor_get(v_x_2377_, 0);
v_snd_2380_ = lean_ctor_get(v_x_2377_, 1);
v_isSharedCheck_2397_ = !lean_is_exclusive(v_x_2377_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2382_ = v_x_2377_;
v_isShared_2383_ = v_isSharedCheck_2397_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_snd_2380_);
lean_inc(v_fst_2379_);
lean_dec(v_x_2377_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2397_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v_fst_2384_; lean_object* v_snd_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2396_; 
v_fst_2384_ = lean_ctor_get(v_p_2378_, 0);
v_snd_2385_ = lean_ctor_get(v_p_2378_, 1);
v_isSharedCheck_2396_ = !lean_is_exclusive(v_p_2378_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2387_ = v_p_2378_;
v_isShared_2388_ = v_isSharedCheck_2396_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_snd_2385_);
lean_inc(v_fst_2384_);
lean_dec(v_p_2378_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2396_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
lean_inc(v_fst_2384_);
if (v_isShared_2383_ == 0)
{
lean_ctor_set_tag(v___x_2382_, 1);
lean_ctor_set(v___x_2382_, 1, v_fst_2379_);
lean_ctor_set(v___x_2382_, 0, v_fst_2384_);
v___x_2390_ = v___x_2382_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v_fst_2384_);
lean_ctor_set(v_reuseFailAlloc_2395_, 1, v_fst_2379_);
v___x_2390_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
lean_object* v___x_2391_; lean_object* v___x_2393_; 
v___x_2391_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2384_, v_snd_2385_, v_snd_2380_);
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 1, v___x_2391_);
lean_ctor_set(v___x_2387_, 0, v___x_2390_);
v___x_2393_ = v___x_2387_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v___x_2390_);
lean_ctor_set(v_reuseFailAlloc_2394_, 1, v___x_2391_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
return v___x_2393_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(lean_object* v_init_2398_, lean_object* v_x_2399_){
_start:
{
if (lean_obj_tag(v_x_2399_) == 0)
{
lean_object* v_k_2400_; lean_object* v_v_2401_; lean_object* v_l_2402_; lean_object* v_r_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; 
v_k_2400_ = lean_ctor_get(v_x_2399_, 1);
v_v_2401_ = lean_ctor_get(v_x_2399_, 2);
v_l_2402_ = lean_ctor_get(v_x_2399_, 3);
v_r_2403_ = lean_ctor_get(v_x_2399_, 4);
v___x_2404_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_init_2398_, v_l_2402_);
lean_inc(v_v_2401_);
lean_inc(v_k_2400_);
v___x_2405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2405_, 0, v_k_2400_);
lean_ctor_set(v___x_2405_, 1, v_v_2401_);
v___x_2406_ = lean_array_push(v___x_2404_, v___x_2405_);
v_init_2398_ = v___x_2406_;
v_x_2399_ = v_r_2403_;
goto _start;
}
else
{
return v_init_2398_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg___boxed(lean_object* v_init_2408_, lean_object* v_x_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_init_2408_, v_x_2409_);
lean_dec(v_x_2409_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(lean_object* v_snd_2411_, lean_object* v_as_2412_, size_t v_i_2413_, size_t v_stop_2414_, lean_object* v_b_2415_){
_start:
{
lean_object* v___y_2417_; uint8_t v___x_2421_; 
v___x_2421_ = lean_usize_dec_eq(v_i_2413_, v_stop_2414_);
if (v___x_2421_ == 0)
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2422_ = lean_array_uget_borrowed(v_as_2412_, v_i_2413_);
v___x_2423_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_snd_2411_, v___x_2422_);
if (lean_obj_tag(v___x_2423_) == 0)
{
v___y_2417_ = v_b_2415_;
goto v___jp_2416_;
}
else
{
lean_object* v_val_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v_val_2424_ = lean_ctor_get(v___x_2423_, 0);
lean_inc(v_val_2424_);
lean_dec_ref_known(v___x_2423_, 1);
lean_inc(v___x_2422_);
v___x_2425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2422_);
lean_ctor_set(v___x_2425_, 1, v_val_2424_);
v___x_2426_ = lean_array_push(v_b_2415_, v___x_2425_);
v___y_2417_ = v___x_2426_;
goto v___jp_2416_;
}
}
else
{
return v_b_2415_;
}
v___jp_2416_:
{
size_t v___x_2418_; size_t v___x_2419_; 
v___x_2418_ = ((size_t)1ULL);
v___x_2419_ = lean_usize_add(v_i_2413_, v___x_2418_);
v_i_2413_ = v___x_2419_;
v_b_2415_ = v___y_2417_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg___boxed(lean_object* v_snd_2427_, lean_object* v_as_2428_, lean_object* v_i_2429_, lean_object* v_stop_2430_, lean_object* v_b_2431_){
_start:
{
size_t v_i_boxed_2432_; size_t v_stop_boxed_2433_; lean_object* v_res_2434_; 
v_i_boxed_2432_ = lean_unbox_usize(v_i_2429_);
lean_dec(v_i_2429_);
v_stop_boxed_2433_ = lean_unbox_usize(v_stop_2430_);
lean_dec(v_stop_2430_);
v_res_2434_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(v_snd_2427_, v_as_2428_, v_i_boxed_2432_, v_stop_boxed_2433_, v_b_2431_);
lean_dec_ref(v_as_2428_);
lean_dec(v_snd_2427_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg(lean_object* v_snd_2435_, lean_object* v_as_2436_, lean_object* v_start_2437_, lean_object* v_stop_2438_){
_start:
{
lean_object* v___x_2439_; uint8_t v___x_2440_; 
v___x_2439_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v___x_2440_ = lean_nat_dec_lt(v_start_2437_, v_stop_2438_);
if (v___x_2440_ == 0)
{
return v___x_2439_;
}
else
{
lean_object* v___x_2441_; uint8_t v___x_2442_; 
v___x_2441_ = lean_array_get_size(v_as_2436_);
v___x_2442_ = lean_nat_dec_le(v_stop_2438_, v___x_2441_);
if (v___x_2442_ == 0)
{
uint8_t v___x_2443_; 
v___x_2443_ = lean_nat_dec_lt(v_start_2437_, v___x_2441_);
if (v___x_2443_ == 0)
{
return v___x_2439_;
}
else
{
size_t v___x_2444_; size_t v___x_2445_; lean_object* v___x_2446_; 
v___x_2444_ = lean_usize_of_nat(v_start_2437_);
v___x_2445_ = lean_usize_of_nat(v___x_2441_);
v___x_2446_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(v_snd_2435_, v_as_2436_, v___x_2444_, v___x_2445_, v___x_2439_);
return v___x_2446_;
}
}
else
{
size_t v___x_2447_; size_t v___x_2448_; lean_object* v___x_2449_; 
v___x_2447_ = lean_usize_of_nat(v_start_2437_);
v___x_2448_ = lean_usize_of_nat(v_stop_2438_);
v___x_2449_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(v_snd_2435_, v_as_2436_, v___x_2447_, v___x_2448_, v___x_2439_);
return v___x_2449_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg___boxed(lean_object* v_snd_2450_, lean_object* v_as_2451_, lean_object* v_start_2452_, lean_object* v_stop_2453_){
_start:
{
lean_object* v_res_2454_; 
v_res_2454_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg(v_snd_2450_, v_as_2451_, v_start_2452_, v_stop_2453_);
lean_dec(v_stop_2453_);
lean_dec(v_start_2452_);
lean_dec_ref(v_as_2451_);
lean_dec(v_snd_2450_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(lean_object* v_hi_2455_, lean_object* v_pivot_2456_, lean_object* v_as_2457_, lean_object* v_i_2458_, lean_object* v_k_2459_){
_start:
{
uint8_t v___x_2460_; 
v___x_2460_ = lean_nat_dec_lt(v_k_2459_, v_hi_2455_);
if (v___x_2460_ == 0)
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
lean_dec(v_k_2459_);
v___x_2461_ = lean_array_fswap(v_as_2457_, v_i_2458_, v_hi_2455_);
v___x_2462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2462_, 0, v_i_2458_);
lean_ctor_set(v___x_2462_, 1, v___x_2461_);
return v___x_2462_;
}
else
{
lean_object* v___x_2463_; lean_object* v_fst_2464_; lean_object* v_fst_2465_; uint8_t v___x_2466_; 
v___x_2463_ = lean_array_fget_borrowed(v_as_2457_, v_k_2459_);
v_fst_2464_ = lean_ctor_get(v___x_2463_, 0);
v_fst_2465_ = lean_ctor_get(v_pivot_2456_, 0);
v___x_2466_ = l_Lean_Name_quickLt(v_fst_2464_, v_fst_2465_);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2467_ = lean_unsigned_to_nat(1u);
v___x_2468_ = lean_nat_add(v_k_2459_, v___x_2467_);
lean_dec(v_k_2459_);
v_k_2459_ = v___x_2468_;
goto _start;
}
else
{
lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2470_ = lean_array_fswap(v_as_2457_, v_i_2458_, v_k_2459_);
v___x_2471_ = lean_unsigned_to_nat(1u);
v___x_2472_ = lean_nat_add(v_i_2458_, v___x_2471_);
lean_dec(v_i_2458_);
v___x_2473_ = lean_nat_add(v_k_2459_, v___x_2471_);
lean_dec(v_k_2459_);
v_as_2457_ = v___x_2470_;
v_i_2458_ = v___x_2472_;
v_k_2459_ = v___x_2473_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg___boxed(lean_object* v_hi_2475_, lean_object* v_pivot_2476_, lean_object* v_as_2477_, lean_object* v_i_2478_, lean_object* v_k_2479_){
_start:
{
lean_object* v_res_2480_; 
v_res_2480_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(v_hi_2475_, v_pivot_2476_, v_as_2477_, v_i_2478_, v_k_2479_);
lean_dec_ref(v_pivot_2476_);
lean_dec(v_hi_2475_);
return v_res_2480_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(lean_object* v_a_2481_, lean_object* v_b_2482_){
_start:
{
lean_object* v_fst_2483_; lean_object* v_fst_2484_; uint8_t v___x_2485_; 
v_fst_2483_ = lean_ctor_get(v_a_2481_, 0);
v_fst_2484_ = lean_ctor_get(v_b_2482_, 0);
v___x_2485_ = l_Lean_Name_quickLt(v_fst_2483_, v_fst_2484_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0___boxed(lean_object* v_a_2486_, lean_object* v_b_2487_){
_start:
{
uint8_t v_res_2488_; lean_object* v_r_2489_; 
v_res_2488_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(v_a_2486_, v_b_2487_);
lean_dec_ref(v_b_2487_);
lean_dec_ref(v_a_2486_);
v_r_2489_ = lean_box(v_res_2488_);
return v_r_2489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(lean_object* v_n_2490_, lean_object* v_as_2491_, lean_object* v_lo_2492_, lean_object* v_hi_2493_){
_start:
{
lean_object* v___y_2495_; uint8_t v___x_2505_; 
v___x_2505_ = lean_nat_dec_lt(v_lo_2492_, v_hi_2493_);
if (v___x_2505_ == 0)
{
lean_dec(v_lo_2492_);
return v_as_2491_;
}
else
{
lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v_mid_2508_; lean_object* v___y_2510_; lean_object* v___y_2516_; lean_object* v___x_2521_; lean_object* v___x_2522_; uint8_t v___x_2523_; 
v___x_2506_ = lean_nat_add(v_lo_2492_, v_hi_2493_);
v___x_2507_ = lean_unsigned_to_nat(1u);
v_mid_2508_ = lean_nat_shiftr(v___x_2506_, v___x_2507_);
lean_dec(v___x_2506_);
v___x_2521_ = lean_array_fget_borrowed(v_as_2491_, v_mid_2508_);
v___x_2522_ = lean_array_fget_borrowed(v_as_2491_, v_lo_2492_);
v___x_2523_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(v___x_2521_, v___x_2522_);
if (v___x_2523_ == 0)
{
v___y_2516_ = v_as_2491_;
goto v___jp_2515_;
}
else
{
lean_object* v___x_2524_; 
v___x_2524_ = lean_array_fswap(v_as_2491_, v_lo_2492_, v_mid_2508_);
v___y_2516_ = v___x_2524_;
goto v___jp_2515_;
}
v___jp_2509_:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; uint8_t v___x_2513_; 
v___x_2511_ = lean_array_fget_borrowed(v___y_2510_, v_mid_2508_);
v___x_2512_ = lean_array_fget_borrowed(v___y_2510_, v_hi_2493_);
v___x_2513_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(v___x_2511_, v___x_2512_);
if (v___x_2513_ == 0)
{
lean_dec(v_mid_2508_);
v___y_2495_ = v___y_2510_;
goto v___jp_2494_;
}
else
{
lean_object* v___x_2514_; 
v___x_2514_ = lean_array_fswap(v___y_2510_, v_mid_2508_, v_hi_2493_);
lean_dec(v_mid_2508_);
v___y_2495_ = v___x_2514_;
goto v___jp_2494_;
}
}
v___jp_2515_:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; uint8_t v___x_2519_; 
v___x_2517_ = lean_array_fget_borrowed(v___y_2516_, v_hi_2493_);
v___x_2518_ = lean_array_fget_borrowed(v___y_2516_, v_lo_2492_);
v___x_2519_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(v___x_2517_, v___x_2518_);
if (v___x_2519_ == 0)
{
v___y_2510_ = v___y_2516_;
goto v___jp_2509_;
}
else
{
lean_object* v___x_2520_; 
v___x_2520_ = lean_array_fswap(v___y_2516_, v_lo_2492_, v_hi_2493_);
v___y_2510_ = v___x_2520_;
goto v___jp_2509_;
}
}
}
v___jp_2494_:
{
lean_object* v_pivot_2496_; lean_object* v___x_2497_; lean_object* v_fst_2498_; lean_object* v_snd_2499_; uint8_t v___x_2500_; 
v_pivot_2496_ = lean_array_fget(v___y_2495_, v_hi_2493_);
lean_inc_n(v_lo_2492_, 2);
v___x_2497_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(v_hi_2493_, v_pivot_2496_, v___y_2495_, v_lo_2492_, v_lo_2492_);
lean_dec(v_pivot_2496_);
v_fst_2498_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_fst_2498_);
v_snd_2499_ = lean_ctor_get(v___x_2497_, 1);
lean_inc(v_snd_2499_);
lean_dec_ref(v___x_2497_);
v___x_2500_ = lean_nat_dec_le(v_hi_2493_, v_fst_2498_);
if (v___x_2500_ == 0)
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2501_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v_n_2490_, v_snd_2499_, v_lo_2492_, v_fst_2498_);
v___x_2502_ = lean_unsigned_to_nat(1u);
v___x_2503_ = lean_nat_add(v_fst_2498_, v___x_2502_);
lean_dec(v_fst_2498_);
v_as_2491_ = v___x_2501_;
v_lo_2492_ = v___x_2503_;
goto _start;
}
else
{
lean_dec(v_fst_2498_);
lean_dec(v_lo_2492_);
return v_snd_2499_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___boxed(lean_object* v_n_2525_, lean_object* v_as_2526_, lean_object* v_lo_2527_, lean_object* v_hi_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v_n_2525_, v_as_2526_, v_lo_2527_, v_hi_2528_);
lean_dec(v_hi_2528_);
lean_dec(v_n_2525_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(lean_object* v_filterExport_2530_, lean_object* v_env_2531_, lean_object* v_as_2532_, size_t v_i_2533_, size_t v_stop_2534_, lean_object* v_b_2535_){
_start:
{
lean_object* v___y_2537_; uint8_t v___x_2541_; 
v___x_2541_ = lean_usize_dec_eq(v_i_2533_, v_stop_2534_);
if (v___x_2541_ == 0)
{
lean_object* v___x_2542_; lean_object* v_fst_2543_; lean_object* v_snd_2544_; lean_object* v___x_2545_; uint8_t v___x_2546_; 
v___x_2542_ = lean_array_uget_borrowed(v_as_2532_, v_i_2533_);
v_fst_2543_ = lean_ctor_get(v___x_2542_, 0);
v_snd_2544_ = lean_ctor_get(v___x_2542_, 1);
lean_inc_ref(v_filterExport_2530_);
lean_inc(v_snd_2544_);
lean_inc(v_fst_2543_);
lean_inc_ref(v_env_2531_);
v___x_2545_ = lean_apply_3(v_filterExport_2530_, v_env_2531_, v_fst_2543_, v_snd_2544_);
v___x_2546_ = lean_unbox(v___x_2545_);
if (v___x_2546_ == 0)
{
v___y_2537_ = v_b_2535_;
goto v___jp_2536_;
}
else
{
lean_object* v___x_2547_; 
lean_inc(v___x_2542_);
v___x_2547_ = lean_array_push(v_b_2535_, v___x_2542_);
v___y_2537_ = v___x_2547_;
goto v___jp_2536_;
}
}
else
{
lean_dec_ref(v_env_2531_);
lean_dec_ref(v_filterExport_2530_);
return v_b_2535_;
}
v___jp_2536_:
{
size_t v___x_2538_; size_t v___x_2539_; 
v___x_2538_ = ((size_t)1ULL);
v___x_2539_ = lean_usize_add(v_i_2533_, v___x_2538_);
v_i_2533_ = v___x_2539_;
v_b_2535_ = v___y_2537_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg___boxed(lean_object* v_filterExport_2548_, lean_object* v_env_2549_, lean_object* v_as_2550_, lean_object* v_i_2551_, lean_object* v_stop_2552_, lean_object* v_b_2553_){
_start:
{
size_t v_i_boxed_2554_; size_t v_stop_boxed_2555_; lean_object* v_res_2556_; 
v_i_boxed_2554_ = lean_unbox_usize(v_i_2551_);
lean_dec(v_i_2551_);
v_stop_boxed_2555_ = lean_unbox_usize(v_stop_2552_);
lean_dec(v_stop_2552_);
v_res_2556_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(v_filterExport_2548_, v_env_2549_, v_as_2550_, v_i_boxed_2554_, v_stop_boxed_2555_, v_b_2553_);
lean_dec_ref(v_as_2550_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__1(lean_object* v_filterExport_2557_, uint8_t v_preserveOrder_2558_, lean_object* v_env_2559_, lean_object* v_x_2560_){
_start:
{
lean_object* v___y_2562_; 
if (v_preserveOrder_2558_ == 0)
{
lean_object* v_snd_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v_r_2575_; lean_object* v___x_2576_; lean_object* v___y_2578_; lean_object* v___y_2579_; uint8_t v___x_2581_; 
v_snd_2572_ = lean_ctor_get(v_x_2560_, 1);
lean_inc(v_snd_2572_);
lean_dec_ref(v_x_2560_);
v___x_2573_ = lean_unsigned_to_nat(0u);
v___x_2574_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v_r_2575_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v___x_2574_, v_snd_2572_);
lean_dec(v_snd_2572_);
v___x_2576_ = lean_array_get_size(v_r_2575_);
v___x_2581_ = lean_nat_dec_eq(v___x_2576_, v___x_2573_);
if (v___x_2581_ == 0)
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___y_2585_; uint8_t v___x_2587_; 
v___x_2582_ = lean_unsigned_to_nat(1u);
v___x_2583_ = lean_nat_sub(v___x_2576_, v___x_2582_);
v___x_2587_ = lean_nat_dec_le(v___x_2573_, v___x_2583_);
if (v___x_2587_ == 0)
{
lean_inc(v___x_2583_);
v___y_2585_ = v___x_2583_;
goto v___jp_2584_;
}
else
{
v___y_2585_ = v___x_2573_;
goto v___jp_2584_;
}
v___jp_2584_:
{
uint8_t v___x_2586_; 
v___x_2586_ = lean_nat_dec_le(v___y_2585_, v___x_2583_);
if (v___x_2586_ == 0)
{
lean_dec(v___x_2583_);
lean_inc(v___y_2585_);
v___y_2578_ = v___y_2585_;
v___y_2579_ = v___y_2585_;
goto v___jp_2577_;
}
else
{
v___y_2578_ = v___y_2585_;
v___y_2579_ = v___x_2583_;
goto v___jp_2577_;
}
}
}
else
{
v___y_2562_ = v_r_2575_;
goto v___jp_2561_;
}
v___jp_2577_:
{
lean_object* v___x_2580_; 
v___x_2580_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v___x_2576_, v_r_2575_, v___y_2578_, v___y_2579_);
lean_dec(v___y_2579_);
v___y_2562_ = v___x_2580_;
goto v___jp_2561_;
}
}
else
{
lean_object* v_fst_2588_; lean_object* v_snd_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v_fst_2588_ = lean_ctor_get(v_x_2560_, 0);
lean_inc(v_fst_2588_);
v_snd_2589_ = lean_ctor_get(v_x_2560_, 1);
lean_inc(v_snd_2589_);
lean_dec_ref(v_x_2560_);
v___x_2590_ = lean_array_mk(v_fst_2588_);
v___x_2591_ = l_Array_reverse___redArg(v___x_2590_);
v___x_2592_ = lean_unsigned_to_nat(0u);
v___x_2593_ = lean_array_get_size(v___x_2591_);
v___x_2594_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg(v_snd_2589_, v___x_2591_, v___x_2592_, v___x_2593_);
lean_dec_ref(v___x_2591_);
lean_dec(v_snd_2589_);
v___y_2562_ = v___x_2594_;
goto v___jp_2561_;
}
v___jp_2561_:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; uint8_t v___x_2566_; 
v___x_2563_ = lean_unsigned_to_nat(0u);
v___x_2564_ = lean_array_get_size(v___y_2562_);
v___x_2565_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v___x_2566_ = lean_nat_dec_lt(v___x_2563_, v___x_2564_);
if (v___x_2566_ == 0)
{
lean_object* v___x_2567_; 
lean_dec_ref(v_env_2559_);
lean_dec_ref(v_filterExport_2557_);
v___x_2567_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2565_);
lean_ctor_set(v___x_2567_, 1, v___x_2565_);
lean_ctor_set(v___x_2567_, 2, v___y_2562_);
return v___x_2567_;
}
else
{
size_t v___x_2568_; size_t v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2568_ = ((size_t)0ULL);
v___x_2569_ = lean_usize_of_nat(v___x_2564_);
v___x_2570_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(v_filterExport_2557_, v_env_2559_, v___y_2562_, v___x_2568_, v___x_2569_, v___x_2565_);
lean_inc_ref(v___x_2570_);
v___x_2571_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2570_);
lean_ctor_set(v___x_2571_, 1, v___x_2570_);
lean_ctor_set(v___x_2571_, 2, v___y_2562_);
return v___x_2571_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__1___boxed(lean_object* v_filterExport_2595_, lean_object* v_preserveOrder_2596_, lean_object* v_env_2597_, lean_object* v_x_2598_){
_start:
{
uint8_t v_preserveOrder_boxed_2599_; lean_object* v_res_2600_; 
v_preserveOrder_boxed_2599_ = lean_unbox(v_preserveOrder_2596_);
v_res_2600_ = l_Lean_registerParametricAttributeExt___redArg___lam__1(v_filterExport_2595_, v_preserveOrder_boxed_2599_, v_env_2597_, v_x_2598_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2(lean_object* v_x_2610_){
_start:
{
lean_object* v_snd_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2625_; 
v_snd_2611_ = lean_ctor_get(v_x_2610_, 1);
v_isSharedCheck_2625_ = !lean_is_exclusive(v_x_2610_);
if (v_isSharedCheck_2625_ == 0)
{
lean_object* v_unused_2626_; 
v_unused_2626_ = lean_ctor_get(v_x_2610_, 0);
lean_dec(v_unused_2626_);
v___x_2613_ = v_x_2610_;
v_isShared_2614_ = v_isSharedCheck_2625_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_snd_2611_);
lean_dec(v_x_2610_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2625_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2615_; lean_object* v___y_2617_; 
v___x_2615_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__3));
if (lean_obj_tag(v_snd_2611_) == 0)
{
lean_object* v_size_2623_; 
v_size_2623_ = lean_ctor_get(v_snd_2611_, 0);
lean_inc(v_size_2623_);
lean_dec_ref_known(v_snd_2611_, 5);
v___y_2617_ = v_size_2623_;
goto v___jp_2616_;
}
else
{
lean_object* v___x_2624_; 
v___x_2624_ = lean_unsigned_to_nat(0u);
v___y_2617_ = v___x_2624_;
goto v___jp_2616_;
}
v___jp_2616_:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2621_; 
v___x_2618_ = l_Nat_reprFast(v___y_2617_);
v___x_2619_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
if (v_isShared_2614_ == 0)
{
lean_ctor_set_tag(v___x_2613_, 5);
lean_ctor_set(v___x_2613_, 1, v___x_2619_);
lean_ctor_set(v___x_2613_, 0, v___x_2615_);
v___x_2621_ = v___x_2613_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2615_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v___x_2619_);
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
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3(lean_object* v_x_2627_){
_start:
{
lean_object* v___x_2628_; 
v___x_2628_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3___boxed(lean_object* v_x_2629_){
_start:
{
lean_object* v_res_2630_; 
v_res_2630_ = l_Lean_registerParametricAttributeExt___redArg___lam__3(v_x_2629_);
lean_dec_ref(v_x_2629_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4(lean_object* v___x_2631_){
_start:
{
lean_object* v___x_2633_; 
v___x_2633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2633_, 0, v___x_2631_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4___boxed(lean_object* v___x_2634_, lean_object* v___y_2635_){
_start:
{
lean_object* v_res_2636_; 
v_res_2636_ = l_Lean_registerParametricAttributeExt___redArg___lam__4(v___x_2634_);
return v_res_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5(lean_object* v___x_2637_, lean_object* v_x_2638_, lean_object* v___y_2639_){
_start:
{
lean_object* v___x_2641_; 
v___x_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2637_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5___boxed(lean_object* v___x_2642_, lean_object* v_x_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_){
_start:
{
lean_object* v_res_2646_; 
v_res_2646_ = l_Lean_registerParametricAttributeExt___redArg___lam__5(v___x_2642_, v_x_2643_, v___y_2644_);
lean_dec_ref(v___y_2644_);
lean_dec_ref(v_x_2643_);
return v_res_2646_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg(lean_object* v_ref_2657_, uint8_t v_preserveOrder_2658_, lean_object* v_filterExport_2659_, uint8_t v_logWrites_2660_){
_start:
{
lean_object* v___f_2662_; lean_object* v___x_2663_; lean_object* v___f_2664_; lean_object* v___f_2665_; lean_object* v___f_2666_; lean_object* v___f_2667_; lean_object* v___f_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; uint8_t v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; 
v___f_2662_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__0));
v___x_2663_ = lean_box(v_preserveOrder_2658_);
v___f_2664_ = lean_alloc_closure((void*)(l_Lean_registerParametricAttributeExt___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2664_, 0, v_filterExport_2659_);
lean_closure_set(v___f_2664_, 1, v___x_2663_);
v___f_2665_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__1));
v___f_2666_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__2));
v___f_2667_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__4));
v___f_2668_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__5));
v___x_2669_ = lean_box(2);
v___x_2670_ = lean_box(0);
v___x_2671_ = 0;
v___x_2672_ = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(v___x_2672_, 0, v_ref_2657_);
lean_ctor_set(v___x_2672_, 1, v___f_2667_);
lean_ctor_set(v___x_2672_, 2, v___f_2668_);
lean_ctor_set(v___x_2672_, 3, v___f_2662_);
lean_ctor_set(v___x_2672_, 4, v___f_2664_);
lean_ctor_set(v___x_2672_, 5, v___f_2665_);
lean_ctor_set(v___x_2672_, 6, v___x_2669_);
lean_ctor_set(v___x_2672_, 7, v___x_2670_);
lean_ctor_set_uint8(v___x_2672_, sizeof(void*)*8, v___x_2671_);
lean_ctor_set_uint8(v___x_2672_, sizeof(void*)*8 + 1, v_logWrites_2660_);
v___x_2673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2672_);
lean_ctor_set(v___x_2673_, 1, v___f_2666_);
v___x_2674_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2673_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___boxed(lean_object* v_ref_2675_, lean_object* v_preserveOrder_2676_, lean_object* v_filterExport_2677_, lean_object* v_logWrites_2678_, lean_object* v_a_2679_){
_start:
{
uint8_t v_preserveOrder_boxed_2680_; uint8_t v_logWrites_boxed_2681_; lean_object* v_res_2682_; 
v_preserveOrder_boxed_2680_ = lean_unbox(v_preserveOrder_2676_);
v_logWrites_boxed_2681_ = lean_unbox(v_logWrites_2678_);
v_res_2682_ = l_Lean_registerParametricAttributeExt___redArg(v_ref_2675_, v_preserveOrder_boxed_2680_, v_filterExport_2677_, v_logWrites_boxed_2681_);
return v_res_2682_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt(lean_object* v_00_u03b1_2683_, lean_object* v_ref_2684_, uint8_t v_preserveOrder_2685_, lean_object* v_filterExport_2686_, uint8_t v_logWrites_2687_){
_start:
{
lean_object* v___x_2689_; 
v___x_2689_ = l_Lean_registerParametricAttributeExt___redArg(v_ref_2684_, v_preserveOrder_2685_, v_filterExport_2686_, v_logWrites_2687_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___boxed(lean_object* v_00_u03b1_2690_, lean_object* v_ref_2691_, lean_object* v_preserveOrder_2692_, lean_object* v_filterExport_2693_, lean_object* v_logWrites_2694_, lean_object* v_a_2695_){
_start:
{
uint8_t v_preserveOrder_boxed_2696_; uint8_t v_logWrites_boxed_2697_; lean_object* v_res_2698_; 
v_preserveOrder_boxed_2696_ = lean_unbox(v_preserveOrder_2692_);
v_logWrites_boxed_2697_ = lean_unbox(v_logWrites_2694_);
v_res_2698_ = l_Lean_registerParametricAttributeExt(v_00_u03b1_2690_, v_ref_2691_, v_preserveOrder_boxed_2696_, v_filterExport_2693_, v_logWrites_boxed_2697_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0(lean_object* v_00_u03b1_2699_, lean_object* v_filterExport_2700_, lean_object* v_env_2701_, lean_object* v_as_2702_, size_t v_i_2703_, size_t v_stop_2704_, lean_object* v_b_2705_){
_start:
{
lean_object* v___x_2706_; 
v___x_2706_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(v_filterExport_2700_, v_env_2701_, v_as_2702_, v_i_2703_, v_stop_2704_, v_b_2705_);
return v___x_2706_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___boxed(lean_object* v_00_u03b1_2707_, lean_object* v_filterExport_2708_, lean_object* v_env_2709_, lean_object* v_as_2710_, lean_object* v_i_2711_, lean_object* v_stop_2712_, lean_object* v_b_2713_){
_start:
{
size_t v_i_boxed_2714_; size_t v_stop_boxed_2715_; lean_object* v_res_2716_; 
v_i_boxed_2714_ = lean_unbox_usize(v_i_2711_);
lean_dec(v_i_2711_);
v_stop_boxed_2715_ = lean_unbox_usize(v_stop_2712_);
lean_dec(v_stop_2712_);
v_res_2716_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0(v_00_u03b1_2707_, v_filterExport_2708_, v_env_2709_, v_as_2710_, v_i_boxed_2714_, v_stop_boxed_2715_, v_b_2713_);
lean_dec_ref(v_as_2710_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___redArg(lean_object* v_init_2717_, lean_object* v_t_2718_){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_init_2717_, v_t_2718_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___redArg___boxed(lean_object* v_init_2720_, lean_object* v_t_2721_){
_start:
{
lean_object* v_res_2722_; 
v_res_2722_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___redArg(v_init_2720_, v_t_2721_);
lean_dec(v_t_2721_);
return v_res_2722_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1(lean_object* v_00_u03b1_2723_, lean_object* v_init_2724_, lean_object* v_t_2725_){
_start:
{
lean_object* v___x_2726_; 
v___x_2726_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_init_2724_, v_t_2725_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___boxed(lean_object* v_00_u03b1_2727_, lean_object* v_init_2728_, lean_object* v_t_2729_){
_start:
{
lean_object* v_res_2730_; 
v_res_2730_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1(v_00_u03b1_2727_, v_init_2728_, v_t_2729_);
lean_dec(v_t_2729_);
return v_res_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2(lean_object* v_00_u03b1_2731_, lean_object* v_n_2732_, lean_object* v_as_2733_, lean_object* v_lo_2734_, lean_object* v_hi_2735_, lean_object* v_w_2736_, lean_object* v_hlo_2737_, lean_object* v_hhi_2738_){
_start:
{
lean_object* v___x_2739_; 
v___x_2739_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v_n_2732_, v_as_2733_, v_lo_2734_, v_hi_2735_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___boxed(lean_object* v_00_u03b1_2740_, lean_object* v_n_2741_, lean_object* v_as_2742_, lean_object* v_lo_2743_, lean_object* v_hi_2744_, lean_object* v_w_2745_, lean_object* v_hlo_2746_, lean_object* v_hhi_2747_){
_start:
{
lean_object* v_res_2748_; 
v_res_2748_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2(v_00_u03b1_2740_, v_n_2741_, v_as_2742_, v_lo_2743_, v_hi_2744_, v_w_2745_, v_hlo_2746_, v_hhi_2747_);
lean_dec(v_hi_2744_);
lean_dec(v_n_2741_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3(lean_object* v_00_u03b1_2749_, lean_object* v_snd_2750_, lean_object* v_as_2751_, lean_object* v_start_2752_, lean_object* v_stop_2753_){
_start:
{
lean_object* v___x_2754_; 
v___x_2754_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg(v_snd_2750_, v_as_2751_, v_start_2752_, v_stop_2753_);
return v___x_2754_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___boxed(lean_object* v_00_u03b1_2755_, lean_object* v_snd_2756_, lean_object* v_as_2757_, lean_object* v_start_2758_, lean_object* v_stop_2759_){
_start:
{
lean_object* v_res_2760_; 
v_res_2760_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3(v_00_u03b1_2755_, v_snd_2756_, v_as_2757_, v_start_2758_, v_stop_2759_);
lean_dec(v_stop_2759_);
lean_dec(v_start_2758_);
lean_dec_ref(v_as_2757_);
lean_dec(v_snd_2756_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1(lean_object* v_00_u03b1_2761_, lean_object* v_init_2762_, lean_object* v_x_2763_){
_start:
{
lean_object* v___x_2764_; 
v___x_2764_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_init_2762_, v_x_2763_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2765_, lean_object* v_init_2766_, lean_object* v_x_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1(v_00_u03b1_2765_, v_init_2766_, v_x_2767_);
lean_dec(v_x_2767_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3(lean_object* v_00_u03b1_2769_, lean_object* v_n_2770_, lean_object* v_lo_2771_, lean_object* v_hi_2772_, lean_object* v_hhi_2773_, lean_object* v_pivot_2774_, lean_object* v_as_2775_, lean_object* v_i_2776_, lean_object* v_k_2777_, lean_object* v_ilo_2778_, lean_object* v_ik_2779_, lean_object* v_w_2780_){
_start:
{
lean_object* v___x_2781_; 
v___x_2781_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(v_hi_2772_, v_pivot_2774_, v_as_2775_, v_i_2776_, v_k_2777_);
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___boxed(lean_object* v_00_u03b1_2782_, lean_object* v_n_2783_, lean_object* v_lo_2784_, lean_object* v_hi_2785_, lean_object* v_hhi_2786_, lean_object* v_pivot_2787_, lean_object* v_as_2788_, lean_object* v_i_2789_, lean_object* v_k_2790_, lean_object* v_ilo_2791_, lean_object* v_ik_2792_, lean_object* v_w_2793_){
_start:
{
lean_object* v_res_2794_; 
v_res_2794_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3(v_00_u03b1_2782_, v_n_2783_, v_lo_2784_, v_hi_2785_, v_hhi_2786_, v_pivot_2787_, v_as_2788_, v_i_2789_, v_k_2790_, v_ilo_2791_, v_ik_2792_, v_w_2793_);
lean_dec_ref(v_pivot_2787_);
lean_dec(v_hi_2785_);
lean_dec(v_lo_2784_);
lean_dec(v_n_2783_);
return v_res_2794_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5(lean_object* v_00_u03b1_2795_, lean_object* v_snd_2796_, lean_object* v_as_2797_, size_t v_i_2798_, size_t v_stop_2799_, lean_object* v_b_2800_){
_start:
{
lean_object* v___x_2801_; 
v___x_2801_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(v_snd_2796_, v_as_2797_, v_i_2798_, v_stop_2799_, v_b_2800_);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___boxed(lean_object* v_00_u03b1_2802_, lean_object* v_snd_2803_, lean_object* v_as_2804_, lean_object* v_i_2805_, lean_object* v_stop_2806_, lean_object* v_b_2807_){
_start:
{
size_t v_i_boxed_2808_; size_t v_stop_boxed_2809_; lean_object* v_res_2810_; 
v_i_boxed_2808_ = lean_unbox_usize(v_i_2805_);
lean_dec(v_i_2805_);
v_stop_boxed_2809_ = lean_unbox_usize(v_stop_2806_);
lean_dec(v_stop_2806_);
v_res_2810_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5(v_00_u03b1_2802_, v_snd_2803_, v_as_2804_, v_i_boxed_2808_, v_stop_boxed_2809_, v_b_2807_);
lean_dec_ref(v_as_2804_);
lean_dec(v_snd_2803_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(lean_object* v_env_2811_, lean_object* v___y_2812_){
_start:
{
lean_object* v___x_2814_; lean_object* v_nextMacroScope_2815_; lean_object* v_ngen_2816_; lean_object* v_auxDeclNGen_2817_; lean_object* v_traceState_2818_; lean_object* v_recordedDeps_2819_; lean_object* v_messages_2820_; lean_object* v_infoState_2821_; lean_object* v_snapshotTasks_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2833_; 
v___x_2814_ = lean_st_ref_take(v___y_2812_);
v_nextMacroScope_2815_ = lean_ctor_get(v___x_2814_, 1);
v_ngen_2816_ = lean_ctor_get(v___x_2814_, 2);
v_auxDeclNGen_2817_ = lean_ctor_get(v___x_2814_, 3);
v_traceState_2818_ = lean_ctor_get(v___x_2814_, 4);
v_recordedDeps_2819_ = lean_ctor_get(v___x_2814_, 6);
v_messages_2820_ = lean_ctor_get(v___x_2814_, 7);
v_infoState_2821_ = lean_ctor_get(v___x_2814_, 8);
v_snapshotTasks_2822_ = lean_ctor_get(v___x_2814_, 9);
v_isSharedCheck_2833_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2833_ == 0)
{
lean_object* v_unused_2834_; lean_object* v_unused_2835_; 
v_unused_2834_ = lean_ctor_get(v___x_2814_, 5);
lean_dec(v_unused_2834_);
v_unused_2835_ = lean_ctor_get(v___x_2814_, 0);
lean_dec(v_unused_2835_);
v___x_2824_ = v___x_2814_;
v_isShared_2825_ = v_isSharedCheck_2833_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_snapshotTasks_2822_);
lean_inc(v_infoState_2821_);
lean_inc(v_messages_2820_);
lean_inc(v_recordedDeps_2819_);
lean_inc(v_traceState_2818_);
lean_inc(v_auxDeclNGen_2817_);
lean_inc(v_ngen_2816_);
lean_inc(v_nextMacroScope_2815_);
lean_dec(v___x_2814_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2833_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2829_; 
v___x_2826_ = lean_box(0);
v___x_2827_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 5, v___x_2827_);
lean_ctor_set(v___x_2824_, 0, v_env_2811_);
v___x_2829_ = v___x_2824_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_env_2811_);
lean_ctor_set(v_reuseFailAlloc_2832_, 1, v_nextMacroScope_2815_);
lean_ctor_set(v_reuseFailAlloc_2832_, 2, v_ngen_2816_);
lean_ctor_set(v_reuseFailAlloc_2832_, 3, v_auxDeclNGen_2817_);
lean_ctor_set(v_reuseFailAlloc_2832_, 4, v_traceState_2818_);
lean_ctor_set(v_reuseFailAlloc_2832_, 5, v___x_2827_);
lean_ctor_set(v_reuseFailAlloc_2832_, 6, v_recordedDeps_2819_);
lean_ctor_set(v_reuseFailAlloc_2832_, 7, v_messages_2820_);
lean_ctor_set(v_reuseFailAlloc_2832_, 8, v_infoState_2821_);
lean_ctor_set(v_reuseFailAlloc_2832_, 9, v_snapshotTasks_2822_);
v___x_2829_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2830_ = lean_st_ref_put(v___y_2812_, v___x_2829_);
v___x_2831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2831_, 0, v___x_2826_);
return v___x_2831_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg___boxed(lean_object* v_env_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_){
_start:
{
lean_object* v_res_2839_; 
v_res_2839_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(v_env_2836_, v___y_2837_);
lean_dec(v___y_2837_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0(lean_object* v_env_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_){
_start:
{
lean_object* v___x_2844_; 
v___x_2844_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(v_env_2840_, v___y_2842_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___boxed(lean_object* v_env_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0(v_env_2845_, v___y_2846_, v___y_2847_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2846_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__0(lean_object* v_addEntryFn_2850_, lean_object* v___x_2851_, lean_object* v_s_2852_){
_start:
{
lean_object* v_importedEntries_2853_; lean_object* v_state_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2862_; 
v_importedEntries_2853_ = lean_ctor_get(v_s_2852_, 0);
v_state_2854_ = lean_ctor_get(v_s_2852_, 1);
v_isSharedCheck_2862_ = !lean_is_exclusive(v_s_2852_);
if (v_isSharedCheck_2862_ == 0)
{
v___x_2856_ = v_s_2852_;
v_isShared_2857_ = v_isSharedCheck_2862_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_state_2854_);
lean_inc(v_importedEntries_2853_);
lean_dec(v_s_2852_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2862_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v_state_2858_; lean_object* v___x_2860_; 
v_state_2858_ = lean_apply_2(v_addEntryFn_2850_, v_state_2854_, v___x_2851_);
if (v_isShared_2857_ == 0)
{
lean_ctor_set(v___x_2856_, 1, v_state_2858_);
v___x_2860_ = v___x_2856_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v_importedEntries_2853_);
lean_ctor_set(v_reuseFailAlloc_2861_, 1, v_state_2858_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1(lean_object* v_afterSet_2863_, lean_object* v_getParam_2864_, lean_object* v_ext_2865_, lean_object* v_toAttributeImplCore_2866_, lean_object* v_decl_2867_, lean_object* v_stx_2868_, uint8_t v_kind_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_){
_start:
{
lean_object* v___y_2874_; lean_object* v___y_2875_; lean_object* v___y_2876_; lean_object* v_nextMacroScope_2877_; lean_object* v_ngen_2878_; lean_object* v_auxDeclNGen_2879_; lean_object* v_traceState_2880_; lean_object* v_recordedDeps_2881_; lean_object* v_messages_2882_; lean_object* v_infoState_2883_; lean_object* v_snapshotTasks_2884_; lean_object* v___y_2885_; lean_object* v___y_2886_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; uint8_t v___x_2935_; uint8_t v___x_2936_; 
v___x_2935_ = 0;
v___x_2936_ = l_Lean_instBEqAttributeKind_beq(v_kind_2869_, v___x_2935_);
if (v___x_2936_ == 0)
{
lean_object* v_name_2937_; lean_object* v___x_2938_; 
lean_dec(v_stx_2868_);
lean_dec(v_decl_2867_);
lean_dec_ref(v_ext_2865_);
lean_dec_ref(v_getParam_2864_);
lean_dec_ref(v_afterSet_2863_);
v_name_2937_ = lean_ctor_get(v_toAttributeImplCore_2866_, 1);
lean_inc(v_name_2937_);
lean_dec_ref(v_toAttributeImplCore_2866_);
v___x_2938_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(v_name_2937_, v_kind_2869_, v___y_2870_, v___y_2871_);
return v___x_2938_;
}
else
{
goto v___jp_2929_;
}
v___jp_2873_:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
v___x_2887_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
v___x_2888_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2888_, 0, v___y_2886_);
lean_ctor_set(v___x_2888_, 1, v_nextMacroScope_2877_);
lean_ctor_set(v___x_2888_, 2, v_ngen_2878_);
lean_ctor_set(v___x_2888_, 3, v_auxDeclNGen_2879_);
lean_ctor_set(v___x_2888_, 4, v_traceState_2880_);
lean_ctor_set(v___x_2888_, 5, v___x_2887_);
lean_ctor_set(v___x_2888_, 6, v_recordedDeps_2881_);
lean_ctor_set(v___x_2888_, 7, v_messages_2882_);
lean_ctor_set(v___x_2888_, 8, v_infoState_2883_);
lean_ctor_set(v___x_2888_, 9, v_snapshotTasks_2884_);
v___x_2889_ = lean_st_ref_put(v___y_2885_, v___x_2888_);
lean_inc(v___y_2885_);
lean_inc_ref(v___y_2874_);
v___x_2890_ = lean_apply_5(v_afterSet_2863_, v_decl_2867_, v___y_2876_, v___y_2874_, v___y_2885_, lean_box(0));
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_dec_ref(v___y_2875_);
return v___x_2890_;
}
else
{
lean_object* v_a_2891_; uint8_t v___x_2892_; 
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_a_2891_);
v___x_2892_ = l_Lean_Exception_isInterrupt(v_a_2891_);
if (v___x_2892_ == 0)
{
uint8_t v___x_2893_; 
v___x_2893_ = l_Lean_Exception_isRuntime(v_a_2891_);
if (v___x_2893_ == 0)
{
lean_object* v___x_2894_; 
lean_dec_ref_known(v___x_2890_, 1);
v___x_2894_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(v___y_2875_, v___y_2885_);
return v___x_2894_;
}
else
{
lean_dec_ref(v___y_2875_);
return v___x_2890_;
}
}
else
{
lean_dec(v_a_2891_);
lean_dec_ref(v___y_2875_);
return v___x_2890_;
}
}
}
v___jp_2895_:
{
lean_object* v___x_2899_; 
lean_inc(v___y_2898_);
lean_inc_ref(v___y_2897_);
lean_inc(v_decl_2867_);
v___x_2899_ = lean_apply_5(v_getParam_2864_, v_decl_2867_, v_stx_2868_, v___y_2897_, v___y_2898_, lean_box(0));
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_object* v_a_2900_; lean_object* v___x_2901_; lean_object* v_toEnvExtension_2902_; lean_object* v_env_2903_; lean_object* v_nextMacroScope_2904_; lean_object* v_ngen_2905_; lean_object* v_auxDeclNGen_2906_; lean_object* v_traceState_2907_; lean_object* v_recordedDeps_2908_; lean_object* v_messages_2909_; lean_object* v_infoState_2910_; lean_object* v_snapshotTasks_2911_; lean_object* v_addEntryFn_2912_; lean_object* v_asyncMode_2913_; uint8_t v_logWrites_2914_; lean_object* v___x_2915_; lean_object* v___f_2916_; uint8_t v___x_2917_; 
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
lean_inc_n(v_a_2900_, 2);
lean_dec_ref_known(v___x_2899_, 1);
v___x_2901_ = lean_st_ref_take(v___y_2898_);
v_toEnvExtension_2902_ = lean_ctor_get(v_ext_2865_, 0);
lean_inc_ref(v_toEnvExtension_2902_);
v_env_2903_ = lean_ctor_get(v___x_2901_, 0);
lean_inc_ref(v_env_2903_);
v_nextMacroScope_2904_ = lean_ctor_get(v___x_2901_, 1);
lean_inc(v_nextMacroScope_2904_);
v_ngen_2905_ = lean_ctor_get(v___x_2901_, 2);
lean_inc_ref(v_ngen_2905_);
v_auxDeclNGen_2906_ = lean_ctor_get(v___x_2901_, 3);
lean_inc_ref(v_auxDeclNGen_2906_);
v_traceState_2907_ = lean_ctor_get(v___x_2901_, 4);
lean_inc_ref(v_traceState_2907_);
v_recordedDeps_2908_ = lean_ctor_get(v___x_2901_, 6);
lean_inc_ref(v_recordedDeps_2908_);
v_messages_2909_ = lean_ctor_get(v___x_2901_, 7);
lean_inc_ref(v_messages_2909_);
v_infoState_2910_ = lean_ctor_get(v___x_2901_, 8);
lean_inc_ref(v_infoState_2910_);
v_snapshotTasks_2911_ = lean_ctor_get(v___x_2901_, 9);
lean_inc_ref(v_snapshotTasks_2911_);
lean_dec(v___x_2901_);
v_addEntryFn_2912_ = lean_ctor_get(v_ext_2865_, 3);
lean_inc(v_addEntryFn_2912_);
lean_dec_ref(v_ext_2865_);
v_asyncMode_2913_ = lean_ctor_get(v_toEnvExtension_2902_, 2);
lean_inc(v_asyncMode_2913_);
v_logWrites_2914_ = lean_ctor_get_uint8(v_toEnvExtension_2902_, sizeof(void*)*6);
lean_inc(v_decl_2867_);
v___x_2915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2915_, 0, v_decl_2867_);
lean_ctor_set(v___x_2915_, 1, v_a_2900_);
v___f_2916_ = lean_alloc_closure((void*)(l_Lean_registerParametricAttributeForExt___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2916_, 0, v_addEntryFn_2912_);
lean_closure_set(v___f_2916_, 1, v___x_2915_);
v___x_2917_ = 1;
if (v_logWrites_2914_ == 0)
{
lean_object* v___x_2918_; 
lean_inc(v_decl_2867_);
v___x_2918_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2902_, v_env_2903_, v___f_2916_, v_asyncMode_2913_, v_decl_2867_, v___x_2917_);
lean_dec(v_asyncMode_2913_);
v___y_2874_ = v___y_2897_;
v___y_2875_ = v___y_2896_;
v___y_2876_ = v_a_2900_;
v_nextMacroScope_2877_ = v_nextMacroScope_2904_;
v_ngen_2878_ = v_ngen_2905_;
v_auxDeclNGen_2879_ = v_auxDeclNGen_2906_;
v_traceState_2880_ = v_traceState_2907_;
v_recordedDeps_2881_ = v_recordedDeps_2908_;
v_messages_2882_ = v_messages_2909_;
v_infoState_2883_ = v_infoState_2910_;
v_snapshotTasks_2884_ = v_snapshotTasks_2911_;
v___y_2885_ = v___y_2898_;
v___y_2886_ = v___x_2918_;
goto v___jp_2873_;
}
else
{
lean_object* v___x_2919_; lean_object* v___x_2920_; 
lean_inc_n(v_decl_2867_, 2);
v___x_2919_ = l_Lean_Environment_logDeclChange(v_env_2903_, v_decl_2867_);
v___x_2920_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2902_, v___x_2919_, v___f_2916_, v_asyncMode_2913_, v_decl_2867_, v___x_2917_);
lean_dec(v_asyncMode_2913_);
v___y_2874_ = v___y_2897_;
v___y_2875_ = v___y_2896_;
v___y_2876_ = v_a_2900_;
v_nextMacroScope_2877_ = v_nextMacroScope_2904_;
v_ngen_2878_ = v_ngen_2905_;
v_auxDeclNGen_2879_ = v_auxDeclNGen_2906_;
v_traceState_2880_ = v_traceState_2907_;
v_recordedDeps_2881_ = v_recordedDeps_2908_;
v_messages_2882_ = v_messages_2909_;
v_infoState_2883_ = v_infoState_2910_;
v_snapshotTasks_2884_ = v_snapshotTasks_2911_;
v___y_2885_ = v___y_2898_;
v___y_2886_ = v___x_2920_;
goto v___jp_2873_;
}
}
else
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2928_; 
lean_dec_ref(v___y_2896_);
lean_dec(v_decl_2867_);
lean_dec_ref(v_ext_2865_);
lean_dec_ref(v_afterSet_2863_);
v_a_2921_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_2928_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2923_ = v___x_2899_;
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v___x_2899_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2926_; 
if (v_isShared_2924_ == 0)
{
v___x_2926_ = v___x_2923_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_a_2921_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
}
}
v___jp_2929_:
{
lean_object* v___x_2930_; lean_object* v_env_2931_; lean_object* v___x_2932_; 
v___x_2930_ = lean_st_ref_get(v___y_2871_);
v_env_2931_ = lean_ctor_get(v___x_2930_, 0);
lean_inc_ref(v_env_2931_);
lean_dec(v___x_2930_);
v___x_2932_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2931_, v_decl_2867_);
if (lean_obj_tag(v___x_2932_) == 0)
{
lean_dec_ref(v_toAttributeImplCore_2866_);
v___y_2896_ = v_env_2931_;
v___y_2897_ = v___y_2870_;
v___y_2898_ = v___y_2871_;
goto v___jp_2895_;
}
else
{
lean_object* v_name_2933_; lean_object* v___x_2934_; 
lean_dec_ref_known(v___x_2932_, 1);
lean_dec_ref(v_env_2931_);
lean_dec(v_stx_2868_);
lean_dec_ref(v_ext_2865_);
lean_dec_ref(v_getParam_2864_);
lean_dec_ref(v_afterSet_2863_);
v_name_2933_ = lean_ctor_get(v_toAttributeImplCore_2866_, 1);
lean_inc(v_name_2933_);
lean_dec_ref(v_toAttributeImplCore_2866_);
v___x_2934_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(v_name_2933_, v_decl_2867_, v___y_2870_, v___y_2871_);
return v___x_2934_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1___boxed(lean_object* v_afterSet_2939_, lean_object* v_getParam_2940_, lean_object* v_ext_2941_, lean_object* v_toAttributeImplCore_2942_, lean_object* v_decl_2943_, lean_object* v_stx_2944_, lean_object* v_kind_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
uint8_t v_kind_boxed_2949_; lean_object* v_res_2950_; 
v_kind_boxed_2949_ = lean_unbox(v_kind_2945_);
v_res_2950_ = l_Lean_registerParametricAttributeForExt___redArg___lam__1(v_afterSet_2939_, v_getParam_2940_, v_ext_2941_, v_toAttributeImplCore_2942_, v_decl_2943_, v_stx_2944_, v_kind_boxed_2949_, v___y_2946_, v___y_2947_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__2(lean_object* v_toAttributeImplCore_2951_, lean_object* v_decl_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_){
_start:
{
lean_object* v_name_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v_name_2956_ = lean_ctor_get(v_toAttributeImplCore_2951_, 1);
lean_inc(v_name_2956_);
lean_dec_ref(v_toAttributeImplCore_2951_);
v___x_2957_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_2958_ = l_Lean_MessageData_ofName(v_name_2956_);
v___x_2959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2957_);
lean_ctor_set(v___x_2959_, 1, v___x_2958_);
v___x_2960_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_2961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2961_, 0, v___x_2959_);
lean_ctor_set(v___x_2961_, 1, v___x_2960_);
v___x_2962_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_2961_, v___y_2953_, v___y_2954_);
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__2___boxed(lean_object* v_toAttributeImplCore_2963_, lean_object* v_decl_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = l_Lean_registerParametricAttributeForExt___redArg___lam__2(v_toAttributeImplCore_2963_, v_decl_2964_, v___y_2965_, v___y_2966_);
lean_dec(v___y_2966_);
lean_dec_ref(v___y_2965_);
lean_dec(v_decl_2964_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg(lean_object* v_impl_2969_, lean_object* v_ext_2970_){
_start:
{
lean_object* v_toAttributeImplCore_2972_; lean_object* v_getParam_2973_; lean_object* v_afterSet_2974_; uint8_t v_preserveOrder_2975_; lean_object* v___f_2976_; lean_object* v___f_2977_; lean_object* v_attrImpl_2978_; lean_object* v___x_2979_; 
v_toAttributeImplCore_2972_ = lean_ctor_get(v_impl_2969_, 0);
lean_inc_ref_n(v_toAttributeImplCore_2972_, 3);
v_getParam_2973_ = lean_ctor_get(v_impl_2969_, 1);
lean_inc_ref(v_getParam_2973_);
v_afterSet_2974_ = lean_ctor_get(v_impl_2969_, 2);
lean_inc_ref(v_afterSet_2974_);
v_preserveOrder_2975_ = lean_ctor_get_uint8(v_impl_2969_, sizeof(void*)*4);
lean_dec_ref(v_impl_2969_);
lean_inc_ref(v_ext_2970_);
v___f_2976_ = lean_alloc_closure((void*)(l_Lean_registerParametricAttributeForExt___redArg___lam__1___boxed), 10, 4);
lean_closure_set(v___f_2976_, 0, v_afterSet_2974_);
lean_closure_set(v___f_2976_, 1, v_getParam_2973_);
lean_closure_set(v___f_2976_, 2, v_ext_2970_);
lean_closure_set(v___f_2976_, 3, v_toAttributeImplCore_2972_);
v___f_2977_ = lean_alloc_closure((void*)(l_Lean_registerParametricAttributeForExt___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_2977_, 0, v_toAttributeImplCore_2972_);
v_attrImpl_2978_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_attrImpl_2978_, 0, v_toAttributeImplCore_2972_);
lean_ctor_set(v_attrImpl_2978_, 1, v___f_2976_);
lean_ctor_set(v_attrImpl_2978_, 2, v___f_2977_);
lean_inc_ref(v_attrImpl_2978_);
v___x_2979_ = l_Lean_registerBuiltinAttribute(v_attrImpl_2978_);
if (lean_obj_tag(v___x_2979_) == 0)
{
lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2987_; 
v_isSharedCheck_2987_ = !lean_is_exclusive(v___x_2979_);
if (v_isSharedCheck_2987_ == 0)
{
lean_object* v_unused_2988_; 
v_unused_2988_ = lean_ctor_get(v___x_2979_, 0);
lean_dec(v_unused_2988_);
v___x_2981_ = v___x_2979_;
v_isShared_2982_ = v_isSharedCheck_2987_;
goto v_resetjp_2980_;
}
else
{
lean_dec(v___x_2979_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2987_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___x_2983_; lean_object* v___x_2985_; 
v___x_2983_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2983_, 0, v_attrImpl_2978_);
lean_ctor_set(v___x_2983_, 1, v_ext_2970_);
lean_ctor_set_uint8(v___x_2983_, sizeof(void*)*2, v_preserveOrder_2975_);
if (v_isShared_2982_ == 0)
{
lean_ctor_set(v___x_2981_, 0, v___x_2983_);
v___x_2985_ = v___x_2981_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v___x_2983_);
v___x_2985_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
return v___x_2985_;
}
}
}
else
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2996_; 
lean_dec_ref_known(v_attrImpl_2978_, 3);
lean_dec_ref(v_ext_2970_);
v_a_2989_ = lean_ctor_get(v___x_2979_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v___x_2979_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2991_ = v___x_2979_;
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2979_);
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
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___boxed(lean_object* v_impl_2997_, lean_object* v_ext_2998_, lean_object* v_a_2999_){
_start:
{
lean_object* v_res_3000_; 
v_res_3000_ = l_Lean_registerParametricAttributeForExt___redArg(v_impl_2997_, v_ext_2998_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt(lean_object* v_00_u03b1_3001_, lean_object* v_impl_3002_, lean_object* v_ext_3003_){
_start:
{
lean_object* v___x_3005_; 
v___x_3005_ = l_Lean_registerParametricAttributeForExt___redArg(v_impl_3002_, v_ext_3003_);
return v___x_3005_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___boxed(lean_object* v_00_u03b1_3006_, lean_object* v_impl_3007_, lean_object* v_ext_3008_, lean_object* v_a_3009_){
_start:
{
lean_object* v_res_3010_; 
v_res_3010_ = l_Lean_registerParametricAttributeForExt(v_00_u03b1_3006_, v_impl_3007_, v_ext_3008_);
return v_res_3010_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg(lean_object* v_impl_3011_){
_start:
{
lean_object* v_toAttributeImplCore_3013_; uint8_t v_preserveOrder_3014_; lean_object* v_filterExport_3015_; lean_object* v_ref_3016_; uint8_t v___x_3017_; lean_object* v___x_3018_; 
v_toAttributeImplCore_3013_ = lean_ctor_get(v_impl_3011_, 0);
v_preserveOrder_3014_ = lean_ctor_get_uint8(v_impl_3011_, sizeof(void*)*4);
v_filterExport_3015_ = lean_ctor_get(v_impl_3011_, 3);
v_ref_3016_ = lean_ctor_get(v_toAttributeImplCore_3013_, 0);
v___x_3017_ = 0;
lean_inc_ref(v_filterExport_3015_);
lean_inc(v_ref_3016_);
v___x_3018_ = l_Lean_registerParametricAttributeExt___redArg(v_ref_3016_, v_preserveOrder_3014_, v_filterExport_3015_, v___x_3017_);
if (lean_obj_tag(v___x_3018_) == 0)
{
lean_object* v_a_3019_; lean_object* v___x_3020_; 
v_a_3019_ = lean_ctor_get(v___x_3018_, 0);
lean_inc(v_a_3019_);
lean_dec_ref_known(v___x_3018_, 1);
v___x_3020_ = l_Lean_registerParametricAttributeForExt___redArg(v_impl_3011_, v_a_3019_);
return v___x_3020_;
}
else
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
lean_dec_ref(v_impl_3011_);
v_a_3021_ = lean_ctor_get(v___x_3018_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_3018_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3023_ = v___x_3018_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v___x_3018_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_a_3021_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg___boxed(lean_object* v_impl_3029_, lean_object* v_a_3030_){
_start:
{
lean_object* v_res_3031_; 
v_res_3031_ = l_Lean_registerParametricAttribute___redArg(v_impl_3029_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute(lean_object* v_00_u03b1_3032_, lean_object* v_impl_3033_){
_start:
{
lean_object* v___x_3035_; 
v___x_3035_ = l_Lean_registerParametricAttribute___redArg(v_impl_3033_);
return v___x_3035_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___boxed(lean_object* v_00_u03b1_3036_, lean_object* v_impl_3037_, lean_object* v_a_3038_){
_start:
{
lean_object* v_res_3039_; 
v_res_3039_ = l_Lean_registerParametricAttribute(v_00_u03b1_3036_, v_impl_3037_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(lean_object* v_inst_3045_, lean_object* v_ext_3046_, uint8_t v_preserveOrder_3047_, lean_object* v_env_3048_, lean_object* v_decl_3049_){
_start:
{
lean_object* v___y_3051_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3062_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0));
v___x_3063_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3048_, v_decl_3049_);
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v_toEnvExtension_3064_; lean_object* v_asyncMode_3065_; lean_object* v___x_3066_; uint8_t v___x_3067_; lean_object* v___x_3068_; lean_object* v_snd_3069_; lean_object* v___x_3070_; 
lean_dec(v_inst_3045_);
v_toEnvExtension_3064_ = lean_ctor_get(v_ext_3046_, 0);
v_asyncMode_3065_ = lean_ctor_get(v_toEnvExtension_3064_, 2);
v___x_3066_ = lean_box(0);
v___x_3067_ = 0;
v___x_3068_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3062_, v_ext_3046_, v_env_3048_, v_asyncMode_3065_, v___x_3066_, v___x_3067_);
v_snd_3069_ = lean_ctor_get(v___x_3068_, 1);
lean_inc(v_snd_3069_);
lean_dec(v___x_3068_);
v___x_3070_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_snd_3069_, v_decl_3049_);
lean_dec(v_decl_3049_);
lean_dec(v_snd_3069_);
return v___x_3070_;
}
else
{
if (v_preserveOrder_3047_ == 0)
{
lean_object* v_val_3071_; uint8_t v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; uint8_t v___x_3076_; 
v_val_3071_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_val_3071_);
lean_dec_ref_known(v___x_3063_, 1);
v___x_3072_ = 0;
v___x_3073_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3062_, v_ext_3046_, v_env_3048_, v_val_3071_, v___x_3072_);
lean_dec(v_val_3071_);
lean_dec_ref(v_env_3048_);
v___x_3074_ = lean_unsigned_to_nat(0u);
v___x_3075_ = lean_array_get_size(v___x_3073_);
v___x_3076_ = lean_nat_dec_lt(v___x_3074_, v___x_3075_);
if (v___x_3076_ == 0)
{
lean_object* v___x_3077_; 
lean_dec_ref(v___x_3073_);
lean_dec(v_decl_3049_);
lean_dec(v_inst_3045_);
v___x_3077_ = lean_box(0);
return v___x_3077_;
}
else
{
lean_object* v___x_3078_; lean_object* v___x_3079_; uint8_t v___x_3080_; 
v___x_3078_ = lean_unsigned_to_nat(1u);
v___x_3079_ = lean_nat_sub(v___x_3075_, v___x_3078_);
v___x_3080_ = lean_nat_dec_le(v___x_3074_, v___x_3079_);
if (v___x_3080_ == 0)
{
lean_object* v___x_3081_; 
lean_dec(v___x_3079_);
lean_dec_ref(v___x_3073_);
lean_dec(v_decl_3049_);
lean_dec(v_inst_3045_);
v___x_3081_ = lean_box(0);
return v___x_3081_;
}
else
{
lean_object* v___f_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___f_3082_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1));
v___x_3083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3083_, 0, v_decl_3049_);
lean_ctor_set(v___x_3083_, 1, v_inst_3045_);
v___x_3084_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2));
v___x_3085_ = l_Array_binSearchAux___redArg(v___f_3082_, v___x_3084_, v___x_3073_, v___x_3083_, v___x_3074_, v___x_3079_);
lean_dec_ref(v___x_3073_);
v___y_3051_ = v___x_3085_;
goto v___jp_3050_;
}
}
}
else
{
lean_object* v_val_3086_; uint8_t v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
lean_dec(v_inst_3045_);
v_val_3086_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_val_3086_);
lean_dec_ref_known(v___x_3063_, 1);
v___x_3087_ = 0;
v___x_3088_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3062_, v_ext_3046_, v_env_3048_, v_val_3086_, v___x_3087_);
lean_dec(v_val_3086_);
lean_dec_ref(v_env_3048_);
v___x_3089_ = l_Lean_findByName_x3f___redArg(v___x_3088_, v_decl_3049_);
lean_dec(v_decl_3049_);
lean_dec_ref(v___x_3088_);
v___y_3051_ = v___x_3089_;
goto v___jp_3050_;
}
}
v___jp_3050_:
{
if (lean_obj_tag(v___y_3051_) == 0)
{
lean_object* v___x_3052_; 
v___x_3052_ = lean_box(0);
return v___x_3052_;
}
else
{
lean_object* v_val_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3061_; 
v_val_3053_ = lean_ctor_get(v___y_3051_, 0);
v_isSharedCheck_3061_ = !lean_is_exclusive(v___y_3051_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_3055_ = v___y_3051_;
v_isShared_3056_ = v_isSharedCheck_3061_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_val_3053_);
lean_dec(v___y_3051_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3061_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v_snd_3057_; lean_object* v___x_3059_; 
v_snd_3057_ = lean_ctor_get(v_val_3053_, 1);
lean_inc(v_snd_3057_);
lean_dec(v_val_3053_);
if (v_isShared_3056_ == 0)
{
lean_ctor_set(v___x_3055_, 0, v_snd_3057_);
v___x_3059_ = v___x_3055_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v_snd_3057_);
v___x_3059_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
return v___x_3059_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___boxed(lean_object* v_inst_3090_, lean_object* v_ext_3091_, lean_object* v_preserveOrder_3092_, lean_object* v_env_3093_, lean_object* v_decl_3094_){
_start:
{
uint8_t v_preserveOrder_boxed_3095_; lean_object* v_res_3096_; 
v_preserveOrder_boxed_3095_ = lean_unbox(v_preserveOrder_3092_);
v_res_3096_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v_inst_3090_, v_ext_3091_, v_preserveOrder_boxed_3095_, v_env_3093_, v_decl_3094_);
lean_dec_ref(v_ext_3091_);
return v_res_3096_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f(lean_object* v_00_u03b1_3097_, lean_object* v_inst_3098_, lean_object* v_ext_3099_, uint8_t v_preserveOrder_3100_, lean_object* v_env_3101_, lean_object* v_decl_3102_){
_start:
{
lean_object* v___x_3103_; 
v___x_3103_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v_inst_3098_, v_ext_3099_, v_preserveOrder_3100_, v_env_3101_, v_decl_3102_);
return v___x_3103_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___boxed(lean_object* v_00_u03b1_3104_, lean_object* v_inst_3105_, lean_object* v_ext_3106_, lean_object* v_preserveOrder_3107_, lean_object* v_env_3108_, lean_object* v_decl_3109_){
_start:
{
uint8_t v_preserveOrder_boxed_3110_; lean_object* v_res_3111_; 
v_preserveOrder_boxed_3110_ = lean_unbox(v_preserveOrder_3107_);
v_res_3111_ = l_Lean_ParametricAttribute_getParamFromExt_x3f(v_00_u03b1_3104_, v_inst_3105_, v_ext_3106_, v_preserveOrder_boxed_3110_, v_env_3108_, v_decl_3109_);
lean_dec_ref(v_ext_3106_);
return v_res_3111_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object* v_inst_3112_, lean_object* v_attr_3113_, lean_object* v_env_3114_, lean_object* v_decl_3115_){
_start:
{
lean_object* v_ext_3116_; uint8_t v_preserveOrder_3117_; lean_object* v___x_3118_; 
v_ext_3116_ = lean_ctor_get(v_attr_3113_, 1);
v_preserveOrder_3117_ = lean_ctor_get_uint8(v_attr_3113_, sizeof(void*)*2);
v___x_3118_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v_inst_3112_, v_ext_3116_, v_preserveOrder_3117_, v_env_3114_, v_decl_3115_);
return v___x_3118_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg___boxed(lean_object* v_inst_3119_, lean_object* v_attr_3120_, lean_object* v_env_3121_, lean_object* v_decl_3122_){
_start:
{
lean_object* v_res_3123_; 
v_res_3123_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v_inst_3119_, v_attr_3120_, v_env_3121_, v_decl_3122_);
lean_dec_ref(v_attr_3120_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f(lean_object* v_00_u03b1_3124_, lean_object* v_inst_3125_, lean_object* v_attr_3126_, lean_object* v_env_3127_, lean_object* v_decl_3128_){
_start:
{
lean_object* v___x_3129_; 
v___x_3129_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v_inst_3125_, v_attr_3126_, v_env_3127_, v_decl_3128_);
return v___x_3129_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___boxed(lean_object* v_00_u03b1_3130_, lean_object* v_inst_3131_, lean_object* v_attr_3132_, lean_object* v_env_3133_, lean_object* v_decl_3134_){
_start:
{
lean_object* v_res_3135_; 
v_res_3135_ = l_Lean_ParametricAttribute_getParam_x3f(v_00_u03b1_3130_, v_inst_3131_, v_attr_3132_, v_env_3133_, v_decl_3134_);
lean_dec_ref(v_attr_3132_);
return v_res_3135_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg(lean_object* v_ext_3140_, lean_object* v_attr_3141_, lean_object* v_env_3142_, lean_object* v_decl_3143_, lean_object* v_param_3144_){
_start:
{
lean_object* v___x_3145_; 
v___x_3145_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3142_, v_decl_3143_);
if (lean_obj_tag(v___x_3145_) == 0)
{
lean_object* v_toEnvExtension_3146_; lean_object* v_addEntryFn_3147_; lean_object* v_asyncMode_3148_; uint8_t v_logWrites_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; uint8_t v___x_3152_; lean_object* v___x_3153_; lean_object* v_snd_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3189_; 
v_toEnvExtension_3146_ = lean_ctor_get(v_ext_3140_, 0);
lean_inc_ref(v_toEnvExtension_3146_);
v_addEntryFn_3147_ = lean_ctor_get(v_ext_3140_, 3);
lean_inc(v_addEntryFn_3147_);
v_asyncMode_3148_ = lean_ctor_get(v_toEnvExtension_3146_, 2);
lean_inc(v_asyncMode_3148_);
v_logWrites_3149_ = lean_ctor_get_uint8(v_toEnvExtension_3146_, sizeof(void*)*6);
v___x_3150_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0));
v___x_3151_ = lean_box(0);
v___x_3152_ = 0;
lean_inc_ref(v_env_3142_);
v___x_3153_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3150_, v_ext_3140_, v_env_3142_, v_asyncMode_3148_, v___x_3151_, v___x_3152_);
lean_dec_ref(v_ext_3140_);
v_snd_3154_ = lean_ctor_get(v___x_3153_, 1);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3153_);
if (v_isSharedCheck_3189_ == 0)
{
lean_object* v_unused_3190_; 
v_unused_3190_ = lean_ctor_get(v___x_3153_, 0);
lean_dec(v_unused_3190_);
v___x_3156_ = v___x_3153_;
v_isShared_3157_ = v_isSharedCheck_3189_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_snd_3154_);
lean_dec(v___x_3153_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3189_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3158_; 
v___x_3158_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_snd_3154_, v_decl_3143_);
lean_dec(v_snd_3154_);
if (lean_obj_tag(v___x_3158_) == 0)
{
lean_object* v___x_3160_; 
lean_dec_ref(v_attr_3141_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 1, v_param_3144_);
lean_ctor_set(v___x_3156_, 0, v_decl_3143_);
v___x_3160_ = v___x_3156_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_decl_3143_);
lean_ctor_set(v_reuseFailAlloc_3168_, 1, v_param_3144_);
v___x_3160_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
lean_object* v___f_3161_; uint8_t v___x_3162_; 
v___f_3161_ = lean_alloc_closure((void*)(l_Lean_registerParametricAttributeForExt___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3161_, 0, v_addEntryFn_3147_);
lean_closure_set(v___f_3161_, 1, v___x_3160_);
v___x_3162_ = 1;
if (v_logWrites_3149_ == 0)
{
lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3163_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3146_, v_env_3142_, v___f_3161_, v_asyncMode_3148_, v___x_3151_, v___x_3162_);
lean_dec(v_asyncMode_3148_);
v___x_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
return v___x_3164_;
}
else
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
lean_inc_ref(v_toEnvExtension_3146_);
v___x_3165_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3146_, v_env_3142_);
lean_dec_ref(v_env_3142_);
v___x_3166_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3146_, v___x_3165_, v___f_3161_, v_asyncMode_3148_, v___x_3151_, v___x_3162_);
lean_dec(v_asyncMode_3148_);
v___x_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3166_);
return v___x_3167_;
}
}
}
else
{
lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3187_; 
lean_del_object(v___x_3156_);
lean_dec(v_asyncMode_3148_);
lean_dec(v_addEntryFn_3147_);
lean_dec_ref(v_toEnvExtension_3146_);
lean_dec(v_param_3144_);
lean_dec_ref(v_env_3142_);
v_isSharedCheck_3187_ = !lean_is_exclusive(v___x_3158_);
if (v_isSharedCheck_3187_ == 0)
{
lean_object* v_unused_3188_; 
v_unused_3188_ = lean_ctor_get(v___x_3158_, 0);
lean_dec(v_unused_3188_);
v___x_3170_ = v___x_3158_;
v_isShared_3171_ = v_isSharedCheck_3187_;
goto v_resetjp_3169_;
}
else
{
lean_dec(v___x_3158_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3187_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v_toAttributeImplCore_3172_; lean_object* v_name_3173_; lean_object* v___x_3174_; uint8_t v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3185_; 
v_toAttributeImplCore_3172_ = lean_ctor_get(v_attr_3141_, 0);
lean_inc_ref(v_toAttributeImplCore_3172_);
lean_dec_ref(v_attr_3141_);
v_name_3173_ = lean_ctor_get(v_toAttributeImplCore_3172_, 1);
lean_inc(v_name_3173_);
lean_dec_ref(v_toAttributeImplCore_3172_);
v___x_3174_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0));
v___x_3175_ = 1;
v___x_3176_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3173_, v___x_3175_);
v___x_3177_ = lean_string_append(v___x_3174_, v___x_3176_);
lean_dec_ref(v___x_3176_);
v___x_3178_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1));
v___x_3179_ = lean_string_append(v___x_3177_, v___x_3178_);
v___x_3180_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_3143_, v___x_3175_);
v___x_3181_ = lean_string_append(v___x_3179_, v___x_3180_);
lean_dec_ref(v___x_3180_);
v___x_3182_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2));
v___x_3183_ = lean_string_append(v___x_3181_, v___x_3182_);
if (v_isShared_3171_ == 0)
{
lean_ctor_set_tag(v___x_3170_, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3183_);
v___x_3185_ = v___x_3170_;
goto v_reusejp_3184_;
}
else
{
lean_object* v_reuseFailAlloc_3186_; 
v_reuseFailAlloc_3186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3186_, 0, v___x_3183_);
v___x_3185_ = v_reuseFailAlloc_3186_;
goto v_reusejp_3184_;
}
v_reusejp_3184_:
{
return v___x_3185_;
}
}
}
}
}
else
{
lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3209_; 
lean_dec(v_param_3144_);
lean_dec_ref(v_env_3142_);
lean_dec_ref(v_ext_3140_);
v_isSharedCheck_3209_ = !lean_is_exclusive(v___x_3145_);
if (v_isSharedCheck_3209_ == 0)
{
lean_object* v_unused_3210_; 
v_unused_3210_ = lean_ctor_get(v___x_3145_, 0);
lean_dec(v_unused_3210_);
v___x_3192_ = v___x_3145_;
v_isShared_3193_ = v_isSharedCheck_3209_;
goto v_resetjp_3191_;
}
else
{
lean_dec(v___x_3145_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3209_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v_toAttributeImplCore_3194_; lean_object* v_name_3195_; lean_object* v___x_3196_; uint8_t v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3207_; 
v_toAttributeImplCore_3194_ = lean_ctor_get(v_attr_3141_, 0);
lean_inc_ref(v_toAttributeImplCore_3194_);
lean_dec_ref(v_attr_3141_);
v_name_3195_ = lean_ctor_get(v_toAttributeImplCore_3194_, 1);
lean_inc(v_name_3195_);
lean_dec_ref(v_toAttributeImplCore_3194_);
v___x_3196_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0));
v___x_3197_ = 1;
v___x_3198_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3195_, v___x_3197_);
v___x_3199_ = lean_string_append(v___x_3196_, v___x_3198_);
lean_dec_ref(v___x_3198_);
v___x_3200_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1));
v___x_3201_ = lean_string_append(v___x_3199_, v___x_3200_);
v___x_3202_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_3143_, v___x_3197_);
v___x_3203_ = lean_string_append(v___x_3201_, v___x_3202_);
lean_dec_ref(v___x_3202_);
v___x_3204_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3));
v___x_3205_ = lean_string_append(v___x_3203_, v___x_3204_);
if (v_isShared_3193_ == 0)
{
lean_ctor_set_tag(v___x_3192_, 0);
lean_ctor_set(v___x_3192_, 0, v___x_3205_);
v___x_3207_ = v___x_3192_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v___x_3205_);
v___x_3207_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
return v___x_3207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt(lean_object* v_00_u03b1_3211_, lean_object* v_ext_3212_, lean_object* v_attr_3213_, lean_object* v_env_3214_, lean_object* v_decl_3215_, lean_object* v_param_3216_){
_start:
{
lean_object* v___x_3217_; 
v___x_3217_ = l_Lean_ParametricAttribute_setParamFromExt___redArg(v_ext_3212_, v_attr_3213_, v_env_3214_, v_decl_3215_, v_param_3216_);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam___redArg(lean_object* v_attr_3218_, lean_object* v_env_3219_, lean_object* v_decl_3220_, lean_object* v_param_3221_){
_start:
{
lean_object* v_attr_3222_; lean_object* v_ext_3223_; lean_object* v___x_3224_; 
v_attr_3222_ = lean_ctor_get(v_attr_3218_, 0);
lean_inc_ref(v_attr_3222_);
v_ext_3223_ = lean_ctor_get(v_attr_3218_, 1);
lean_inc_ref(v_ext_3223_);
lean_dec_ref(v_attr_3218_);
v___x_3224_ = l_Lean_ParametricAttribute_setParamFromExt___redArg(v_ext_3223_, v_attr_3222_, v_env_3219_, v_decl_3220_, v_param_3221_);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam(lean_object* v_00_u03b1_3225_, lean_object* v_attr_3226_, lean_object* v_env_3227_, lean_object* v_decl_3228_, lean_object* v_param_3229_){
_start:
{
lean_object* v___x_3230_; 
v___x_3230_ = l_Lean_ParametricAttribute_setParam___redArg(v_attr_3226_, v_env_3227_, v_decl_3228_, v_param_3229_);
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0(lean_object* v_x_3231_, lean_object* v___y_3232_){
_start:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3234_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1));
v___x_3235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3235_, 0, v___x_3234_);
return v___x_3235_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0___boxed(lean_object* v_x_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_){
_start:
{
lean_object* v_res_3239_; 
v_res_3239_ = l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0(v_x_3236_, v___y_3237_);
lean_dec_ref(v___y_3237_);
lean_dec_ref(v_x_3236_);
return v_res_3239_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1(lean_object* v_s_3240_, lean_object* v_x_3241_){
_start:
{
lean_inc(v_s_3240_);
return v_s_3240_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1___boxed(lean_object* v_s_3242_, lean_object* v_x_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1(v_s_3242_, v_x_3243_);
lean_dec_ref(v_x_3243_);
lean_dec(v_s_3242_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2(lean_object* v_x_3245_, lean_object* v_x_3246_){
_start:
{
lean_object* v___x_3247_; 
v___x_3247_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1));
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2___boxed(lean_object* v_x_3248_, lean_object* v_x_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2(v_x_3248_, v_x_3249_);
lean_dec(v_x_3249_);
lean_dec_ref(v_x_3248_);
return v_res_3250_;
}
}
static lean_object* _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3(void){
_start:
{
lean_object* v___f_3254_; lean_object* v___f_3255_; lean_object* v___f_3256_; lean_object* v___f_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v___f_3254_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__3));
v___f_3255_ = ((lean_object*)(l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2));
v___f_3256_ = ((lean_object*)(l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1));
v___f_3257_ = ((lean_object*)(l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0));
v___x_3258_ = lean_box(0);
v___x_3259_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__4, &l_Lean_instInhabitedTagAttribute_default___closed__4_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__4);
v___x_3260_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3259_);
lean_ctor_set(v___x_3260_, 1, v___x_3258_);
lean_ctor_set(v___x_3260_, 2, v___f_3257_);
lean_ctor_set(v___x_3260_, 3, v___f_3256_);
lean_ctor_set(v___x_3260_, 4, v___f_3255_);
lean_ctor_set(v___x_3260_, 5, v___f_3254_);
return v___x_3260_;
}
}
static lean_object* _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4(void){
_start:
{
lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; 
v___x_3261_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3, &l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3_once, _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3);
v___x_3262_ = lean_box(0);
v___x_3263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3262_);
lean_ctor_set(v___x_3263_, 1, v___x_3261_);
return v___x_3263_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg(){
_start:
{
lean_object* v___x_3265_; 
v___x_3265_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4, &l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4_once, _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4);
return v___x_3265_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___boxed(lean_object* v___dummy_3266_){
_start:
{
lean_object* v_res_3267_; 
v_res_3267_ = l_Lean_instInhabitedEnumAttributes_default___redArg();
return v_res_3267_;
}
}
static lean_object* _init_l_Lean_instInhabitedEnumAttributes_default___closed__0(void){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Lean_instInhabitedEnumAttributes_default___redArg();
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default(lean_object* v_00_u03b1_3269_){
_start:
{
lean_object* v___x_3270_; 
v___x_3270_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___closed__0, &l_Lean_instInhabitedEnumAttributes_default___closed__0_once, _init_l_Lean_instInhabitedEnumAttributes_default___closed__0);
return v___x_3270_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg(){
_start:
{
lean_object* v___x_3272_; 
v___x_3272_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___closed__0, &l_Lean_instInhabitedEnumAttributes_default___closed__0_once, _init_l_Lean_instInhabitedEnumAttributes_default___closed__0);
return v___x_3272_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg___boxed(lean_object* v___dummy_3273_){
_start:
{
lean_object* v_res_3274_; 
v_res_3274_ = l_Lean_instInhabitedEnumAttributes___redArg();
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes(lean_object* v_a_3275_){
_start:
{
lean_object* v___x_3276_; 
v___x_3276_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___closed__0, &l_Lean_instInhabitedEnumAttributes_default___closed__0_once, _init_l_Lean_instInhabitedEnumAttributes_default___closed__0);
return v___x_3276_;
}
}
static lean_object* _init_l_Lean_registerEnumAttributes___auto__1(void){
_start:
{
lean_object* v___x_3277_; 
v___x_3277_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__28, &l_Lean_AttributeImplCore_ref___autoParam___closed__28_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28);
return v___x_3277_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0(lean_object* v_x_3278_){
_start:
{
lean_object* v___x_3279_; 
v___x_3279_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
return v___x_3279_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0___boxed(lean_object* v_x_3280_){
_start:
{
lean_object* v_res_3281_; 
v_res_3281_ = l_Lean_registerEnumAttributes___redArg___lam__0(v_x_3280_);
lean_dec(v_x_3280_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(lean_object* v_newState_3282_, lean_object* v_x_3283_, lean_object* v_x_3284_){
_start:
{
if (lean_obj_tag(v_x_3284_) == 0)
{
return v_x_3283_;
}
else
{
lean_object* v_head_3285_; lean_object* v_tail_3286_; lean_object* v___x_3287_; 
v_head_3285_ = lean_ctor_get(v_x_3284_, 0);
lean_inc(v_head_3285_);
v_tail_3286_ = lean_ctor_get(v_x_3284_, 1);
lean_inc(v_tail_3286_);
lean_dec_ref_known(v_x_3284_, 2);
v___x_3287_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_newState_3282_, v_head_3285_);
if (lean_obj_tag(v___x_3287_) == 1)
{
lean_object* v_val_3288_; lean_object* v___x_3289_; 
v_val_3288_ = lean_ctor_get(v___x_3287_, 0);
lean_inc(v_val_3288_);
lean_dec_ref_known(v___x_3287_, 1);
v___x_3289_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_head_3285_, v_val_3288_, v_x_3283_);
v_x_3283_ = v___x_3289_;
v_x_3284_ = v_tail_3286_;
goto _start;
}
else
{
lean_dec(v___x_3287_);
lean_dec(v_head_3285_);
v_x_3284_ = v_tail_3286_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg___boxed(lean_object* v_newState_3292_, lean_object* v_x_3293_, lean_object* v_x_3294_){
_start:
{
lean_object* v_res_3295_; 
v_res_3295_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(v_newState_3292_, v_x_3293_, v_x_3294_);
lean_dec(v_newState_3292_);
return v_res_3295_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1(lean_object* v_x_3296_, lean_object* v_newState_3297_, lean_object* v_consts_3298_, lean_object* v_st_3299_){
_start:
{
lean_object* v___x_3300_; 
v___x_3300_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(v_newState_3297_, v_st_3299_, v_consts_3298_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1___boxed(lean_object* v_x_3301_, lean_object* v_newState_3302_, lean_object* v_consts_3303_, lean_object* v_st_3304_){
_start:
{
lean_object* v_res_3305_; 
v_res_3305_ = l_Lean_registerEnumAttributes___redArg___lam__1(v_x_3301_, v_newState_3302_, v_consts_3303_, v_st_3304_);
lean_dec(v_newState_3302_);
lean_dec(v_x_3301_);
return v_res_3305_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__2(lean_object* v_s_3315_){
_start:
{
lean_object* v___x_3316_; lean_object* v___y_3318_; 
v___x_3316_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___lam__2___closed__3));
if (lean_obj_tag(v_s_3315_) == 0)
{
lean_object* v_size_3322_; 
v_size_3322_ = lean_ctor_get(v_s_3315_, 0);
lean_inc(v_size_3322_);
lean_dec_ref_known(v_s_3315_, 5);
v___y_3318_ = v_size_3322_;
goto v___jp_3317_;
}
else
{
lean_object* v___x_3323_; 
v___x_3323_ = lean_unsigned_to_nat(0u);
v___y_3318_ = v___x_3323_;
goto v___jp_3317_;
}
v___jp_3317_:
{
lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v___x_3319_ = l_Nat_reprFast(v___y_3318_);
v___x_3320_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3319_);
v___x_3321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3321_, 0, v___x_3316_);
lean_ctor_set(v___x_3321_, 1, v___x_3320_);
return v___x_3321_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(lean_object* v_env_3324_, lean_object* v_as_3325_, size_t v_i_3326_, size_t v_stop_3327_, lean_object* v_b_3328_){
_start:
{
lean_object* v___y_3330_; uint8_t v___x_3334_; 
v___x_3334_ = lean_usize_dec_eq(v_i_3326_, v_stop_3327_);
if (v___x_3334_ == 0)
{
lean_object* v___x_3335_; lean_object* v_fst_3336_; uint8_t v___x_3337_; lean_object* v___x_3338_; uint8_t v___x_3339_; 
v___x_3335_ = lean_array_uget_borrowed(v_as_3325_, v_i_3326_);
v_fst_3336_ = lean_ctor_get(v___x_3335_, 0);
v___x_3337_ = 1;
lean_inc_ref(v_env_3324_);
v___x_3338_ = l_Lean_Environment_setExporting(v_env_3324_, v___x_3337_);
lean_inc(v_fst_3336_);
v___x_3339_ = l_Lean_Environment_contains(v___x_3338_, v_fst_3336_, v___x_3334_);
if (v___x_3339_ == 0)
{
v___y_3330_ = v_b_3328_;
goto v___jp_3329_;
}
else
{
lean_object* v___x_3340_; 
lean_inc(v___x_3335_);
v___x_3340_ = lean_array_push(v_b_3328_, v___x_3335_);
v___y_3330_ = v___x_3340_;
goto v___jp_3329_;
}
}
else
{
lean_dec_ref(v_env_3324_);
return v_b_3328_;
}
v___jp_3329_:
{
size_t v___x_3331_; size_t v___x_3332_; 
v___x_3331_ = ((size_t)1ULL);
v___x_3332_ = lean_usize_add(v_i_3326_, v___x_3331_);
v_i_3326_ = v___x_3332_;
v_b_3328_ = v___y_3330_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg___boxed(lean_object* v_env_3341_, lean_object* v_as_3342_, lean_object* v_i_3343_, lean_object* v_stop_3344_, lean_object* v_b_3345_){
_start:
{
size_t v_i_boxed_3346_; size_t v_stop_boxed_3347_; lean_object* v_res_3348_; 
v_i_boxed_3346_ = lean_unbox_usize(v_i_3343_);
lean_dec(v_i_3343_);
v_stop_boxed_3347_ = lean_unbox_usize(v_stop_3344_);
lean_dec(v_stop_3344_);
v_res_3348_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(v_env_3341_, v_as_3342_, v_i_boxed_3346_, v_stop_boxed_3347_, v_b_3345_);
lean_dec_ref(v_as_3342_);
return v_res_3348_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__3(lean_object* v_env_3349_, lean_object* v_m_3350_){
_start:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___y_3354_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___y_3365_; lean_object* v___y_3366_; uint8_t v___x_3368_; 
v___x_3351_ = lean_unsigned_to_nat(0u);
v___x_3352_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v___x_3362_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v___x_3352_, v_m_3350_);
v___x_3363_ = lean_array_get_size(v___x_3362_);
v___x_3368_ = lean_nat_dec_eq(v___x_3363_, v___x_3351_);
if (v___x_3368_ == 0)
{
lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___y_3372_; uint8_t v___x_3374_; 
v___x_3369_ = lean_unsigned_to_nat(1u);
v___x_3370_ = lean_nat_sub(v___x_3363_, v___x_3369_);
v___x_3374_ = lean_nat_dec_le(v___x_3351_, v___x_3370_);
if (v___x_3374_ == 0)
{
lean_inc(v___x_3370_);
v___y_3372_ = v___x_3370_;
goto v___jp_3371_;
}
else
{
v___y_3372_ = v___x_3351_;
goto v___jp_3371_;
}
v___jp_3371_:
{
uint8_t v___x_3373_; 
v___x_3373_ = lean_nat_dec_le(v___y_3372_, v___x_3370_);
if (v___x_3373_ == 0)
{
lean_dec(v___x_3370_);
lean_inc(v___y_3372_);
v___y_3365_ = v___y_3372_;
v___y_3366_ = v___y_3372_;
goto v___jp_3364_;
}
else
{
v___y_3365_ = v___y_3372_;
v___y_3366_ = v___x_3370_;
goto v___jp_3364_;
}
}
}
else
{
v___y_3354_ = v___x_3362_;
goto v___jp_3353_;
}
v___jp_3353_:
{
lean_object* v___x_3355_; uint8_t v___x_3356_; 
v___x_3355_ = lean_array_get_size(v___y_3354_);
v___x_3356_ = lean_nat_dec_lt(v___x_3351_, v___x_3355_);
if (v___x_3356_ == 0)
{
lean_object* v___x_3357_; 
lean_dec_ref(v_env_3349_);
v___x_3357_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3357_, 0, v___x_3352_);
lean_ctor_set(v___x_3357_, 1, v___x_3352_);
lean_ctor_set(v___x_3357_, 2, v___y_3354_);
return v___x_3357_;
}
else
{
size_t v___x_3358_; size_t v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; 
v___x_3358_ = ((size_t)0ULL);
v___x_3359_ = lean_usize_of_nat(v___x_3355_);
v___x_3360_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(v_env_3349_, v___y_3354_, v___x_3358_, v___x_3359_, v___x_3352_);
lean_inc_ref(v___x_3360_);
v___x_3361_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3360_);
lean_ctor_set(v___x_3361_, 1, v___x_3360_);
lean_ctor_set(v___x_3361_, 2, v___y_3354_);
return v___x_3361_;
}
}
v___jp_3364_:
{
lean_object* v___x_3367_; 
v___x_3367_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v___x_3363_, v___x_3362_, v___y_3365_, v___y_3366_);
lean_dec(v___y_3366_);
v___y_3354_ = v___x_3367_;
goto v___jp_3353_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__3___boxed(lean_object* v_env_3375_, lean_object* v_m_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = l_Lean_registerEnumAttributes___redArg___lam__3(v_env_3375_, v_m_3376_);
lean_dec(v_m_3376_);
return v_res_3377_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__4(lean_object* v_s_3378_, lean_object* v_p_3379_){
_start:
{
lean_object* v_fst_3380_; lean_object* v_snd_3381_; lean_object* v___x_3382_; 
v_fst_3380_ = lean_ctor_get(v_p_3379_, 0);
lean_inc(v_fst_3380_);
v_snd_3381_ = lean_ctor_get(v_p_3379_, 1);
lean_inc(v_snd_3381_);
lean_dec_ref(v_p_3379_);
v___x_3382_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3380_, v_snd_3381_, v_s_3378_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6(lean_object* v___x_3383_, lean_object* v_x_3384_, lean_object* v_x_3385_){
_start:
{
lean_object* v___x_3387_; 
v___x_3387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3383_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6___boxed(lean_object* v___x_3388_, lean_object* v_x_3389_, lean_object* v_x_3390_, lean_object* v___y_3391_){
_start:
{
lean_object* v_res_3392_; 
v_res_3392_ = l_Lean_registerEnumAttributes___redArg___lam__6(v___x_3388_, v_x_3389_, v_x_3390_);
lean_dec_ref(v_x_3390_);
lean_dec_ref(v_x_3389_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3(lean_object* v_as_3393_){
_start:
{
if (lean_obj_tag(v_as_3393_) == 0)
{
lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3395_ = lean_box(0);
v___x_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3395_);
return v___x_3396_;
}
else
{
lean_object* v_head_3397_; lean_object* v_tail_3398_; lean_object* v___x_3399_; 
v_head_3397_ = lean_ctor_get(v_as_3393_, 0);
lean_inc(v_head_3397_);
v_tail_3398_ = lean_ctor_get(v_as_3393_, 1);
lean_inc(v_tail_3398_);
lean_dec_ref_known(v_as_3393_, 2);
v___x_3399_ = l_Lean_registerBuiltinAttribute(v_head_3397_);
if (lean_obj_tag(v___x_3399_) == 0)
{
lean_dec_ref_known(v___x_3399_, 1);
v_as_3393_ = v_tail_3398_;
goto _start;
}
else
{
lean_dec(v_tail_3398_);
return v___x_3399_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3___boxed(lean_object* v_as_3401_, lean_object* v___y_3402_){
_start:
{
lean_object* v_res_3403_; 
v_res_3403_ = l_List_forM___at___00Lean_registerEnumAttributes_spec__3(v_as_3401_);
return v_res_3403_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1(lean_object* v_addEntryFn_3404_, lean_object* v___x_3405_, lean_object* v_s_3406_){
_start:
{
lean_object* v_importedEntries_3407_; lean_object* v_state_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3416_; 
v_importedEntries_3407_ = lean_ctor_get(v_s_3406_, 0);
v_state_3408_ = lean_ctor_get(v_s_3406_, 1);
v_isSharedCheck_3416_ = !lean_is_exclusive(v_s_3406_);
if (v_isSharedCheck_3416_ == 0)
{
v___x_3410_ = v_s_3406_;
v_isShared_3411_ = v_isSharedCheck_3416_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_state_3408_);
lean_inc(v_importedEntries_3407_);
lean_dec(v_s_3406_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3416_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v_state_3412_; lean_object* v___x_3414_; 
v_state_3412_ = lean_apply_2(v_addEntryFn_3404_, v_state_3408_, v___x_3405_);
if (v_isShared_3411_ == 0)
{
lean_ctor_set(v___x_3410_, 1, v_state_3412_);
v___x_3414_ = v___x_3410_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v_importedEntries_3407_);
lean_ctor_set(v_reuseFailAlloc_3415_, 1, v_state_3412_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
return v___x_3414_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__2(lean_object* v_validate_3417_, lean_object* v_snd_3418_, lean_object* v_a_3419_, lean_object* v_fst_3420_, lean_object* v_decl_3421_, lean_object* v_stx_3422_, uint8_t v_kind_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_){
_start:
{
lean_object* v___y_3428_; lean_object* v_nextMacroScope_3429_; lean_object* v_ngen_3430_; lean_object* v_auxDeclNGen_3431_; lean_object* v_traceState_3432_; lean_object* v_recordedDeps_3433_; lean_object* v_messages_3434_; lean_object* v_infoState_3435_; lean_object* v_snapshotTasks_3436_; lean_object* v___y_3437_; lean_object* v___y_3438_; lean_object* v___y_3444_; lean_object* v___y_3445_; lean_object* v___x_3473_; 
v___x_3473_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_3422_, v___y_3424_, v___y_3425_);
if (lean_obj_tag(v___x_3473_) == 0)
{
uint8_t v___x_3474_; uint8_t v___x_3475_; 
lean_dec_ref_known(v___x_3473_, 1);
v___x_3474_ = 0;
v___x_3475_ = l_Lean_instBEqAttributeKind_beq(v_kind_3423_, v___x_3474_);
if (v___x_3475_ == 0)
{
lean_object* v___x_3476_; 
lean_dec(v_decl_3421_);
lean_dec_ref(v_a_3419_);
lean_dec(v_snd_3418_);
lean_dec_ref(v_validate_3417_);
v___x_3476_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(v_fst_3420_, v_kind_3423_, v___y_3424_, v___y_3425_);
return v___x_3476_;
}
else
{
goto v___jp_3468_;
}
}
else
{
lean_dec(v_decl_3421_);
lean_dec(v_fst_3420_);
lean_dec_ref(v_a_3419_);
lean_dec(v_snd_3418_);
lean_dec_ref(v_validate_3417_);
return v___x_3473_;
}
v___jp_3427_:
{
lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v___x_3439_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
v___x_3440_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3440_, 0, v___y_3438_);
lean_ctor_set(v___x_3440_, 1, v_nextMacroScope_3429_);
lean_ctor_set(v___x_3440_, 2, v_ngen_3430_);
lean_ctor_set(v___x_3440_, 3, v_auxDeclNGen_3431_);
lean_ctor_set(v___x_3440_, 4, v_traceState_3432_);
lean_ctor_set(v___x_3440_, 5, v___x_3439_);
lean_ctor_set(v___x_3440_, 6, v_recordedDeps_3433_);
lean_ctor_set(v___x_3440_, 7, v_messages_3434_);
lean_ctor_set(v___x_3440_, 8, v_infoState_3435_);
lean_ctor_set(v___x_3440_, 9, v_snapshotTasks_3436_);
v___x_3441_ = lean_st_ref_put(v___y_3428_, v___x_3440_);
v___x_3442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3442_, 0, v___y_3437_);
return v___x_3442_;
}
v___jp_3443_:
{
lean_object* v___x_3446_; 
lean_inc(v___y_3445_);
lean_inc_ref(v___y_3444_);
lean_inc(v_snd_3418_);
lean_inc(v_decl_3421_);
v___x_3446_ = lean_apply_5(v_validate_3417_, v_decl_3421_, v_snd_3418_, v___y_3444_, v___y_3445_, lean_box(0));
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v___x_3447_; lean_object* v_toEnvExtension_3448_; lean_object* v_env_3449_; lean_object* v_nextMacroScope_3450_; lean_object* v_ngen_3451_; lean_object* v_auxDeclNGen_3452_; lean_object* v_traceState_3453_; lean_object* v_recordedDeps_3454_; lean_object* v_messages_3455_; lean_object* v_infoState_3456_; lean_object* v_snapshotTasks_3457_; lean_object* v_addEntryFn_3458_; lean_object* v_asyncMode_3459_; uint8_t v_logWrites_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___f_3463_; uint8_t v___x_3464_; 
lean_dec_ref_known(v___x_3446_, 1);
v___x_3447_ = lean_st_ref_take(v___y_3445_);
v_toEnvExtension_3448_ = lean_ctor_get(v_a_3419_, 0);
lean_inc_ref(v_toEnvExtension_3448_);
v_env_3449_ = lean_ctor_get(v___x_3447_, 0);
lean_inc_ref(v_env_3449_);
v_nextMacroScope_3450_ = lean_ctor_get(v___x_3447_, 1);
lean_inc(v_nextMacroScope_3450_);
v_ngen_3451_ = lean_ctor_get(v___x_3447_, 2);
lean_inc_ref(v_ngen_3451_);
v_auxDeclNGen_3452_ = lean_ctor_get(v___x_3447_, 3);
lean_inc_ref(v_auxDeclNGen_3452_);
v_traceState_3453_ = lean_ctor_get(v___x_3447_, 4);
lean_inc_ref(v_traceState_3453_);
v_recordedDeps_3454_ = lean_ctor_get(v___x_3447_, 6);
lean_inc_ref(v_recordedDeps_3454_);
v_messages_3455_ = lean_ctor_get(v___x_3447_, 7);
lean_inc_ref(v_messages_3455_);
v_infoState_3456_ = lean_ctor_get(v___x_3447_, 8);
lean_inc_ref(v_infoState_3456_);
v_snapshotTasks_3457_ = lean_ctor_get(v___x_3447_, 9);
lean_inc_ref(v_snapshotTasks_3457_);
lean_dec(v___x_3447_);
v_addEntryFn_3458_ = lean_ctor_get(v_a_3419_, 3);
lean_inc(v_addEntryFn_3458_);
lean_dec_ref(v_a_3419_);
v_asyncMode_3459_ = lean_ctor_get(v_toEnvExtension_3448_, 2);
lean_inc(v_asyncMode_3459_);
v_logWrites_3460_ = lean_ctor_get_uint8(v_toEnvExtension_3448_, sizeof(void*)*6);
v___x_3461_ = lean_box(0);
lean_inc(v_decl_3421_);
v___x_3462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3462_, 0, v_decl_3421_);
lean_ctor_set(v___x_3462_, 1, v_snd_3418_);
v___f_3463_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3463_, 0, v_addEntryFn_3458_);
lean_closure_set(v___f_3463_, 1, v___x_3462_);
v___x_3464_ = 1;
if (v_logWrites_3460_ == 0)
{
lean_object* v___x_3465_; 
v___x_3465_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3448_, v_env_3449_, v___f_3463_, v_asyncMode_3459_, v_decl_3421_, v___x_3464_);
lean_dec(v_asyncMode_3459_);
v___y_3428_ = v___y_3445_;
v_nextMacroScope_3429_ = v_nextMacroScope_3450_;
v_ngen_3430_ = v_ngen_3451_;
v_auxDeclNGen_3431_ = v_auxDeclNGen_3452_;
v_traceState_3432_ = v_traceState_3453_;
v_recordedDeps_3433_ = v_recordedDeps_3454_;
v_messages_3434_ = v_messages_3455_;
v_infoState_3435_ = v_infoState_3456_;
v_snapshotTasks_3436_ = v_snapshotTasks_3457_;
v___y_3437_ = v___x_3461_;
v___y_3438_ = v___x_3465_;
goto v___jp_3427_;
}
else
{
lean_object* v___x_3466_; lean_object* v___x_3467_; 
lean_inc_ref(v_toEnvExtension_3448_);
v___x_3466_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3448_, v_env_3449_);
lean_dec_ref(v_env_3449_);
v___x_3467_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3448_, v___x_3466_, v___f_3463_, v_asyncMode_3459_, v_decl_3421_, v___x_3464_);
lean_dec(v_asyncMode_3459_);
v___y_3428_ = v___y_3445_;
v_nextMacroScope_3429_ = v_nextMacroScope_3450_;
v_ngen_3430_ = v_ngen_3451_;
v_auxDeclNGen_3431_ = v_auxDeclNGen_3452_;
v_traceState_3432_ = v_traceState_3453_;
v_recordedDeps_3433_ = v_recordedDeps_3454_;
v_messages_3434_ = v_messages_3455_;
v_infoState_3435_ = v_infoState_3456_;
v_snapshotTasks_3436_ = v_snapshotTasks_3457_;
v___y_3437_ = v___x_3461_;
v___y_3438_ = v___x_3467_;
goto v___jp_3427_;
}
}
else
{
lean_dec(v_decl_3421_);
lean_dec_ref(v_a_3419_);
lean_dec(v_snd_3418_);
return v___x_3446_;
}
}
v___jp_3468_:
{
lean_object* v___x_3469_; lean_object* v_env_3470_; lean_object* v___x_3471_; 
v___x_3469_ = lean_st_ref_get(v___y_3425_);
v_env_3470_ = lean_ctor_get(v___x_3469_, 0);
lean_inc_ref(v_env_3470_);
lean_dec(v___x_3469_);
v___x_3471_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3470_, v_decl_3421_);
lean_dec_ref(v_env_3470_);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_dec(v_fst_3420_);
v___y_3444_ = v___y_3424_;
v___y_3445_ = v___y_3425_;
goto v___jp_3443_;
}
else
{
lean_object* v___x_3472_; 
lean_dec_ref_known(v___x_3471_, 1);
lean_dec_ref(v_a_3419_);
lean_dec(v_snd_3418_);
lean_dec_ref(v_validate_3417_);
v___x_3472_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(v_fst_3420_, v_decl_3421_, v___y_3424_, v___y_3425_);
return v___x_3472_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__2___boxed(lean_object* v_validate_3477_, lean_object* v_snd_3478_, lean_object* v_a_3479_, lean_object* v_fst_3480_, lean_object* v_decl_3481_, lean_object* v_stx_3482_, lean_object* v_kind_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_){
_start:
{
uint8_t v_kind_boxed_3487_; lean_object* v_res_3488_; 
v_kind_boxed_3487_ = lean_unbox(v_kind_3483_);
v_res_3488_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__2(v_validate_3477_, v_snd_3478_, v_a_3479_, v_fst_3480_, v_decl_3481_, v_stx_3482_, v_kind_boxed_3487_, v___y_3484_, v___y_3485_);
lean_dec(v___y_3485_);
lean_dec_ref(v___y_3484_);
return v_res_3488_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0(lean_object* v_fst_3489_, lean_object* v_decl_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_){
_start:
{
lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3494_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_3495_ = l_Lean_MessageData_ofName(v_fst_3489_);
v___x_3496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3494_);
lean_ctor_set(v___x_3496_, 1, v___x_3495_);
v___x_3497_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_3498_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3496_);
lean_ctor_set(v___x_3498_, 1, v___x_3497_);
v___x_3499_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_3498_, v___y_3491_, v___y_3492_);
return v___x_3499_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0___boxed(lean_object* v_fst_3500_, lean_object* v_decl_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_){
_start:
{
lean_object* v_res_3505_; 
v_res_3505_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0(v_fst_3500_, v_decl_3501_, v___y_3502_, v___y_3503_);
lean_dec(v___y_3503_);
lean_dec_ref(v___y_3502_);
lean_dec(v_decl_3501_);
return v_res_3505_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(lean_object* v_validate_3506_, lean_object* v_a_3507_, lean_object* v_ref_3508_, uint8_t v_applicationTime_3509_, lean_object* v_a_3510_, lean_object* v_a_3511_){
_start:
{
if (lean_obj_tag(v_a_3510_) == 0)
{
lean_object* v___x_3512_; 
lean_dec(v_ref_3508_);
lean_dec_ref(v_a_3507_);
lean_dec_ref(v_validate_3506_);
v___x_3512_ = l_List_reverse___redArg(v_a_3511_);
return v___x_3512_;
}
else
{
lean_object* v_head_3513_; lean_object* v_snd_3514_; lean_object* v_tail_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3530_; 
v_head_3513_ = lean_ctor_get(v_a_3510_, 0);
lean_inc(v_head_3513_);
v_snd_3514_ = lean_ctor_get(v_head_3513_, 1);
lean_inc(v_snd_3514_);
v_tail_3515_ = lean_ctor_get(v_a_3510_, 1);
v_isSharedCheck_3530_ = !lean_is_exclusive(v_a_3510_);
if (v_isSharedCheck_3530_ == 0)
{
lean_object* v_unused_3531_; 
v_unused_3531_ = lean_ctor_get(v_a_3510_, 0);
lean_dec(v_unused_3531_);
v___x_3517_ = v_a_3510_;
v_isShared_3518_ = v_isSharedCheck_3530_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_tail_3515_);
lean_dec(v_a_3510_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3530_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v_fst_3519_; lean_object* v_fst_3520_; lean_object* v_snd_3521_; lean_object* v___f_3522_; lean_object* v___f_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3527_; 
v_fst_3519_ = lean_ctor_get(v_head_3513_, 0);
lean_inc_n(v_fst_3519_, 3);
lean_dec(v_head_3513_);
v_fst_3520_ = lean_ctor_get(v_snd_3514_, 0);
lean_inc(v_fst_3520_);
v_snd_3521_ = lean_ctor_get(v_snd_3514_, 1);
lean_inc(v_snd_3521_);
lean_dec(v_snd_3514_);
v___f_3522_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_3522_, 0, v_fst_3519_);
lean_inc_ref(v_a_3507_);
lean_inc_ref(v_validate_3506_);
v___f_3523_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__2___boxed), 10, 4);
lean_closure_set(v___f_3523_, 0, v_validate_3506_);
lean_closure_set(v___f_3523_, 1, v_snd_3521_);
lean_closure_set(v___f_3523_, 2, v_a_3507_);
lean_closure_set(v___f_3523_, 3, v_fst_3519_);
lean_inc(v_ref_3508_);
v___x_3524_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3524_, 0, v_ref_3508_);
lean_ctor_set(v___x_3524_, 1, v_fst_3519_);
lean_ctor_set(v___x_3524_, 2, v_fst_3520_);
lean_ctor_set_uint8(v___x_3524_, sizeof(void*)*3, v_applicationTime_3509_);
v___x_3525_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3524_);
lean_ctor_set(v___x_3525_, 1, v___f_3523_);
lean_ctor_set(v___x_3525_, 2, v___f_3522_);
if (v_isShared_3518_ == 0)
{
lean_ctor_set(v___x_3517_, 1, v_a_3511_);
lean_ctor_set(v___x_3517_, 0, v___x_3525_);
v___x_3527_ = v___x_3517_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v___x_3525_);
lean_ctor_set(v_reuseFailAlloc_3529_, 1, v_a_3511_);
v___x_3527_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
v_a_3510_ = v_tail_3515_;
v_a_3511_ = v___x_3527_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___boxed(lean_object* v_validate_3532_, lean_object* v_a_3533_, lean_object* v_ref_3534_, lean_object* v_applicationTime_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_){
_start:
{
uint8_t v_applicationTime_boxed_3538_; lean_object* v_res_3539_; 
v_applicationTime_boxed_3538_ = lean_unbox(v_applicationTime_3535_);
v_res_3539_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(v_validate_3532_, v_a_3533_, v_ref_3534_, v_applicationTime_boxed_3538_, v_a_3536_, v_a_3537_);
return v_res_3539_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg(lean_object* v_attrDescrs_3553_, lean_object* v_validate_3554_, uint8_t v_applicationTime_3555_, lean_object* v_ref_3556_){
_start:
{
lean_object* v___f_3558_; lean_object* v___f_3559_; lean_object* v___f_3560_; lean_object* v___f_3561_; lean_object* v___f_3562_; lean_object* v___f_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; uint8_t v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; 
v___f_3558_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__0));
v___f_3559_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__2));
v___f_3560_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__3));
v___f_3561_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__4));
v___f_3562_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__5));
v___f_3563_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__6));
v___x_3564_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__7));
v___x_3565_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__8));
v___x_3566_ = 0;
lean_inc(v_ref_3556_);
v___x_3567_ = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(v___x_3567_, 0, v_ref_3556_);
lean_ctor_set(v___x_3567_, 1, v___f_3562_);
lean_ctor_set(v___x_3567_, 2, v___f_3563_);
lean_ctor_set(v___x_3567_, 3, v___f_3561_);
lean_ctor_set(v___x_3567_, 4, v___f_3560_);
lean_ctor_set(v___x_3567_, 5, v___f_3559_);
lean_ctor_set(v___x_3567_, 6, v___x_3564_);
lean_ctor_set(v___x_3567_, 7, v___x_3565_);
lean_ctor_set_uint8(v___x_3567_, sizeof(void*)*8, v___x_3566_);
lean_ctor_set_uint8(v___x_3567_, sizeof(void*)*8 + 1, v___x_3566_);
v___x_3568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3567_);
lean_ctor_set(v___x_3568_, 1, v___f_3558_);
v___x_3569_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_3568_);
if (lean_obj_tag(v___x_3569_) == 0)
{
lean_object* v_a_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v_a_3570_ = lean_ctor_get(v___x_3569_, 0);
lean_inc_n(v_a_3570_, 2);
lean_dec_ref_known(v___x_3569_, 1);
v___x_3571_ = lean_box(0);
v___x_3572_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(v_validate_3554_, v_a_3570_, v_ref_3556_, v_applicationTime_3555_, v_attrDescrs_3553_, v___x_3571_);
lean_inc(v___x_3572_);
v___x_3573_ = l_List_forM___at___00Lean_registerEnumAttributes_spec__3(v___x_3572_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3581_; 
v_isSharedCheck_3581_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3581_ == 0)
{
lean_object* v_unused_3582_; 
v_unused_3582_ = lean_ctor_get(v___x_3573_, 0);
lean_dec(v_unused_3582_);
v___x_3575_ = v___x_3573_;
v_isShared_3576_ = v_isSharedCheck_3581_;
goto v_resetjp_3574_;
}
else
{
lean_dec(v___x_3573_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3581_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v___x_3577_; lean_object* v___x_3579_; 
v___x_3577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3572_);
lean_ctor_set(v___x_3577_, 1, v_a_3570_);
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 0, v___x_3577_);
v___x_3579_ = v___x_3575_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v___x_3577_);
v___x_3579_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
return v___x_3579_;
}
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3590_; 
lean_dec(v___x_3572_);
lean_dec(v_a_3570_);
v_a_3583_ = lean_ctor_get(v___x_3573_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3585_ = v___x_3573_;
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v___x_3573_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
if (v_isShared_3586_ == 0)
{
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_a_3583_);
v___x_3588_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
return v___x_3588_;
}
}
}
}
else
{
lean_object* v_a_3591_; lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3598_; 
lean_dec(v_ref_3556_);
lean_dec_ref(v_validate_3554_);
lean_dec(v_attrDescrs_3553_);
v_a_3591_ = lean_ctor_get(v___x_3569_, 0);
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3569_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3593_ = v___x_3569_;
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
else
{
lean_inc(v_a_3591_);
lean_dec(v___x_3569_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3596_; 
if (v_isShared_3594_ == 0)
{
v___x_3596_ = v___x_3593_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_a_3591_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
return v___x_3596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___boxed(lean_object* v_attrDescrs_3599_, lean_object* v_validate_3600_, lean_object* v_applicationTime_3601_, lean_object* v_ref_3602_, lean_object* v_a_3603_){
_start:
{
uint8_t v_applicationTime_boxed_3604_; lean_object* v_res_3605_; 
v_applicationTime_boxed_3604_ = lean_unbox(v_applicationTime_3601_);
v_res_3605_ = l_Lean_registerEnumAttributes___redArg(v_attrDescrs_3599_, v_validate_3600_, v_applicationTime_boxed_3604_, v_ref_3602_);
return v_res_3605_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes(lean_object* v_00_u03b1_3606_, lean_object* v_attrDescrs_3607_, lean_object* v_validate_3608_, uint8_t v_applicationTime_3609_, lean_object* v_ref_3610_){
_start:
{
lean_object* v___x_3612_; 
v___x_3612_ = l_Lean_registerEnumAttributes___redArg(v_attrDescrs_3607_, v_validate_3608_, v_applicationTime_3609_, v_ref_3610_);
return v___x_3612_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___boxed(lean_object* v_00_u03b1_3613_, lean_object* v_attrDescrs_3614_, lean_object* v_validate_3615_, lean_object* v_applicationTime_3616_, lean_object* v_ref_3617_, lean_object* v_a_3618_){
_start:
{
uint8_t v_applicationTime_boxed_3619_; lean_object* v_res_3620_; 
v_applicationTime_boxed_3619_ = lean_unbox(v_applicationTime_3616_);
v_res_3620_ = l_Lean_registerEnumAttributes(v_00_u03b1_3613_, v_attrDescrs_3614_, v_validate_3615_, v_applicationTime_boxed_3619_, v_ref_3617_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0(lean_object* v_00_u03b1_3621_, lean_object* v_env_3622_, lean_object* v_as_3623_, size_t v_i_3624_, size_t v_stop_3625_, lean_object* v_b_3626_){
_start:
{
lean_object* v___x_3627_; 
v___x_3627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(v_env_3622_, v_as_3623_, v_i_3624_, v_stop_3625_, v_b_3626_);
return v___x_3627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___boxed(lean_object* v_00_u03b1_3628_, lean_object* v_env_3629_, lean_object* v_as_3630_, lean_object* v_i_3631_, lean_object* v_stop_3632_, lean_object* v_b_3633_){
_start:
{
size_t v_i_boxed_3634_; size_t v_stop_boxed_3635_; lean_object* v_res_3636_; 
v_i_boxed_3634_ = lean_unbox_usize(v_i_3631_);
lean_dec(v_i_3631_);
v_stop_boxed_3635_ = lean_unbox_usize(v_stop_3632_);
lean_dec(v_stop_3632_);
v_res_3636_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0(v_00_u03b1_3628_, v_env_3629_, v_as_3630_, v_i_boxed_3634_, v_stop_boxed_3635_, v_b_3633_);
lean_dec_ref(v_as_3630_);
return v_res_3636_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1(lean_object* v_00_u03b1_3637_, lean_object* v_newState_3638_, lean_object* v_x_3639_, lean_object* v_x_3640_){
_start:
{
lean_object* v___x_3641_; 
v___x_3641_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(v_newState_3638_, v_x_3639_, v_x_3640_);
return v___x_3641_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___boxed(lean_object* v_00_u03b1_3642_, lean_object* v_newState_3643_, lean_object* v_x_3644_, lean_object* v_x_3645_){
_start:
{
lean_object* v_res_3646_; 
v_res_3646_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1(v_00_u03b1_3642_, v_newState_3643_, v_x_3644_, v_x_3645_);
lean_dec(v_newState_3643_);
return v_res_3646_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2(lean_object* v_00_u03b1_3647_, lean_object* v_validate_3648_, lean_object* v_a_3649_, lean_object* v_ref_3650_, uint8_t v_applicationTime_3651_, lean_object* v_a_3652_, lean_object* v_a_3653_){
_start:
{
lean_object* v___x_3654_; 
v___x_3654_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(v_validate_3648_, v_a_3649_, v_ref_3650_, v_applicationTime_3651_, v_a_3652_, v_a_3653_);
return v___x_3654_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___boxed(lean_object* v_00_u03b1_3655_, lean_object* v_validate_3656_, lean_object* v_a_3657_, lean_object* v_ref_3658_, lean_object* v_applicationTime_3659_, lean_object* v_a_3660_, lean_object* v_a_3661_){
_start:
{
uint8_t v_applicationTime_boxed_3662_; lean_object* v_res_3663_; 
v_applicationTime_boxed_3662_ = lean_unbox(v_applicationTime_3659_);
v_res_3663_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2(v_00_u03b1_3655_, v_validate_3656_, v_a_3657_, v_ref_3658_, v_applicationTime_boxed_3662_, v_a_3660_, v_a_3661_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue___redArg(lean_object* v_inst_3664_, lean_object* v_attr_3665_, lean_object* v_env_3666_, lean_object* v_decl_3667_){
_start:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; 
v___x_3668_ = lean_box(1);
v___x_3669_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3666_, v_decl_3667_);
if (lean_obj_tag(v___x_3669_) == 0)
{
lean_object* v_ext_3670_; lean_object* v_toEnvExtension_3671_; lean_object* v_asyncMode_3672_; uint8_t v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; 
lean_dec(v_inst_3664_);
v_ext_3670_ = lean_ctor_get(v_attr_3665_, 1);
lean_inc_ref(v_ext_3670_);
lean_dec_ref(v_attr_3665_);
v_toEnvExtension_3671_ = lean_ctor_get(v_ext_3670_, 0);
v_asyncMode_3672_ = lean_ctor_get(v_toEnvExtension_3671_, 2);
lean_inc(v_asyncMode_3672_);
v___x_3673_ = 0;
lean_inc(v_decl_3667_);
v___x_3674_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3668_, v_ext_3670_, v_env_3666_, v_asyncMode_3672_, v_decl_3667_, v___x_3673_);
lean_dec(v_asyncMode_3672_);
lean_dec_ref(v_ext_3670_);
v___x_3675_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3674_, v_decl_3667_);
lean_dec(v_decl_3667_);
lean_dec(v___x_3674_);
return v___x_3675_;
}
else
{
lean_object* v_val_3676_; lean_object* v_ext_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3707_; 
v_val_3676_ = lean_ctor_get(v___x_3669_, 0);
lean_inc(v_val_3676_);
lean_dec_ref_known(v___x_3669_, 1);
v_ext_3677_ = lean_ctor_get(v_attr_3665_, 1);
v_isSharedCheck_3707_ = !lean_is_exclusive(v_attr_3665_);
if (v_isSharedCheck_3707_ == 0)
{
lean_object* v_unused_3708_; 
v_unused_3708_ = lean_ctor_get(v_attr_3665_, 0);
lean_dec(v_unused_3708_);
v___x_3679_ = v_attr_3665_;
v_isShared_3680_ = v_isSharedCheck_3707_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_ext_3677_);
lean_dec(v_attr_3665_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3707_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
uint8_t v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; uint8_t v___x_3685_; 
v___x_3681_ = 0;
v___x_3682_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3668_, v_ext_3677_, v_env_3666_, v_val_3676_, v___x_3681_);
lean_dec(v_val_3676_);
lean_dec_ref(v_env_3666_);
lean_dec_ref(v_ext_3677_);
v___x_3683_ = lean_unsigned_to_nat(0u);
v___x_3684_ = lean_array_get_size(v___x_3682_);
v___x_3685_ = lean_nat_dec_lt(v___x_3683_, v___x_3684_);
if (v___x_3685_ == 0)
{
lean_object* v___x_3686_; 
lean_dec_ref(v___x_3682_);
lean_del_object(v___x_3679_);
lean_dec(v_decl_3667_);
lean_dec(v_inst_3664_);
v___x_3686_ = lean_box(0);
return v___x_3686_;
}
else
{
lean_object* v___x_3687_; lean_object* v___x_3688_; uint8_t v___x_3689_; 
v___x_3687_ = lean_unsigned_to_nat(1u);
v___x_3688_ = lean_nat_sub(v___x_3684_, v___x_3687_);
v___x_3689_ = lean_nat_dec_le(v___x_3683_, v___x_3688_);
if (v___x_3689_ == 0)
{
lean_object* v___x_3690_; 
lean_dec(v___x_3688_);
lean_dec_ref(v___x_3682_);
lean_del_object(v___x_3679_);
lean_dec(v_decl_3667_);
lean_dec(v_inst_3664_);
v___x_3690_ = lean_box(0);
return v___x_3690_;
}
else
{
lean_object* v___f_3691_; lean_object* v___x_3693_; 
v___f_3691_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1));
if (v_isShared_3680_ == 0)
{
lean_ctor_set(v___x_3679_, 1, v_inst_3664_);
lean_ctor_set(v___x_3679_, 0, v_decl_3667_);
v___x_3693_ = v___x_3679_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v_decl_3667_);
lean_ctor_set(v_reuseFailAlloc_3706_, 1, v_inst_3664_);
v___x_3693_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; 
v___x_3694_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2));
v___x_3695_ = l_Array_binSearchAux___redArg(v___f_3691_, v___x_3694_, v___x_3682_, v___x_3693_, v___x_3683_, v___x_3688_);
lean_dec_ref(v___x_3682_);
if (lean_obj_tag(v___x_3695_) == 0)
{
lean_object* v___x_3696_; 
v___x_3696_ = lean_box(0);
return v___x_3696_;
}
else
{
lean_object* v_val_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3705_; 
v_val_3697_ = lean_ctor_get(v___x_3695_, 0);
v_isSharedCheck_3705_ = !lean_is_exclusive(v___x_3695_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3699_ = v___x_3695_;
v_isShared_3700_ = v_isSharedCheck_3705_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_val_3697_);
lean_dec(v___x_3695_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3705_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
lean_object* v_snd_3701_; lean_object* v___x_3703_; 
v_snd_3701_ = lean_ctor_get(v_val_3697_, 1);
lean_inc(v_snd_3701_);
lean_dec(v_val_3697_);
if (v_isShared_3700_ == 0)
{
lean_ctor_set(v___x_3699_, 0, v_snd_3701_);
v___x_3703_ = v___x_3699_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v_snd_3701_);
v___x_3703_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
return v___x_3703_;
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
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue(lean_object* v_00_u03b1_3709_, lean_object* v_inst_3710_, lean_object* v_attr_3711_, lean_object* v_env_3712_, lean_object* v_decl_3713_){
_start:
{
lean_object* v___x_3714_; 
v___x_3714_ = l_Lean_EnumAttributes_getValue___redArg(v_inst_3710_, v_attr_3711_, v_env_3712_, v_decl_3713_);
return v___x_3714_;
}
}
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue___redArg(lean_object* v_attrs_3723_, lean_object* v_env_3724_, lean_object* v_decl_3725_, lean_object* v_val_3726_){
_start:
{
lean_object* v_ext_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3797_; 
v_ext_3727_ = lean_ctor_get(v_attrs_3723_, 1);
v_isSharedCheck_3797_ = !lean_is_exclusive(v_attrs_3723_);
if (v_isSharedCheck_3797_ == 0)
{
lean_object* v_unused_3798_; 
v_unused_3798_ = lean_ctor_get(v_attrs_3723_, 0);
lean_dec(v_unused_3798_);
v___x_3729_ = v_attrs_3723_;
v_isShared_3730_ = v_isSharedCheck_3797_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_ext_3727_);
lean_dec(v_attrs_3723_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3797_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v_toEnvExtension_3731_; lean_object* v_name_3732_; lean_object* v_addEntryFn_3733_; lean_object* v___x_3734_; uint8_t v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v_pfx_3743_; lean_object* v___x_3744_; 
v_toEnvExtension_3731_ = lean_ctor_get(v_ext_3727_, 0);
lean_inc_ref(v_toEnvExtension_3731_);
v_name_3732_ = lean_ctor_get(v_ext_3727_, 1);
v_addEntryFn_3733_ = lean_ctor_get(v_ext_3727_, 3);
lean_inc(v_addEntryFn_3733_);
v___x_3734_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__0));
v___x_3735_ = 1;
lean_inc(v_name_3732_);
v___x_3736_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3732_, v___x_3735_);
v___x_3737_ = lean_string_append(v___x_3734_, v___x_3736_);
lean_dec_ref(v___x_3736_);
v___x_3738_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__1));
v___x_3739_ = lean_string_append(v___x_3737_, v___x_3738_);
lean_inc(v_decl_3725_);
v___x_3740_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_3725_, v___x_3735_);
v___x_3741_ = lean_string_append(v___x_3739_, v___x_3740_);
lean_dec_ref(v___x_3740_);
v___x_3742_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v_pfx_3743_ = lean_string_append(v___x_3741_, v___x_3742_);
v___x_3744_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3724_, v_decl_3725_);
if (lean_obj_tag(v___x_3744_) == 0)
{
lean_object* v_asyncMode_3745_; uint8_t v_logWrites_3746_; uint8_t v___x_3747_; 
v_asyncMode_3745_ = lean_ctor_get(v_toEnvExtension_3731_, 2);
lean_inc(v_asyncMode_3745_);
v_logWrites_3746_ = lean_ctor_get_uint8(v_toEnvExtension_3731_, sizeof(void*)*6);
lean_inc(v_decl_3725_);
lean_inc_ref(v_env_3724_);
v___x_3747_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_3724_, v_decl_3725_, v_asyncMode_3745_);
if (v___x_3747_ == 0)
{
lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___y_3751_; lean_object* v___x_3755_; 
lean_dec(v_asyncMode_3745_);
lean_dec(v_addEntryFn_3733_);
lean_dec_ref(v_toEnvExtension_3731_);
lean_del_object(v___x_3729_);
lean_dec_ref(v_ext_3727_);
lean_dec(v_val_3726_);
lean_dec(v_decl_3725_);
v___x_3748_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__2));
v___x_3749_ = lean_string_append(v_pfx_3743_, v___x_3748_);
v___x_3755_ = l_Lean_Environment_asyncPrefix_x3f(v_env_3724_);
if (lean_obj_tag(v___x_3755_) == 0)
{
lean_object* v___x_3756_; 
v___x_3756_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__3));
v___y_3751_ = v___x_3756_;
goto v___jp_3750_;
}
else
{
lean_object* v_val_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; 
v_val_3757_ = lean_ctor_get(v___x_3755_, 0);
lean_inc(v_val_3757_);
lean_dec_ref_known(v___x_3755_, 1);
v___x_3758_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__4));
v___x_3759_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_3757_, v___x_3735_);
v___x_3760_ = l_addParenHeuristic(v___x_3759_);
v___x_3761_ = lean_string_append(v___x_3758_, v___x_3760_);
lean_dec_ref(v___x_3760_);
v___x_3762_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__5));
v___x_3763_ = lean_string_append(v___x_3761_, v___x_3762_);
v___y_3751_ = v___x_3763_;
goto v___jp_3750_;
}
v___jp_3750_:
{
lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; 
v___x_3752_ = lean_string_append(v___x_3749_, v___y_3751_);
lean_dec_ref(v___y_3751_);
v___x_3753_ = lean_string_append(v___x_3752_, v___x_3742_);
v___x_3754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3754_, 0, v___x_3753_);
return v___x_3754_;
}
}
else
{
lean_object* v___x_3764_; uint8_t v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3764_ = lean_box(1);
v___x_3765_ = 0;
lean_inc(v_decl_3725_);
lean_inc_ref(v_env_3724_);
v___x_3766_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3764_, v_ext_3727_, v_env_3724_, v_asyncMode_3745_, v_decl_3725_, v___x_3765_);
lean_dec_ref(v_ext_3727_);
v___x_3767_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3766_, v_decl_3725_);
lean_dec(v___x_3766_);
if (lean_obj_tag(v___x_3767_) == 0)
{
lean_object* v___x_3769_; 
lean_dec_ref(v_pfx_3743_);
lean_inc(v_decl_3725_);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 1, v_val_3726_);
lean_ctor_set(v___x_3729_, 0, v_decl_3725_);
v___x_3769_ = v___x_3729_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v_decl_3725_);
lean_ctor_set(v_reuseFailAlloc_3776_, 1, v_val_3726_);
v___x_3769_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
lean_object* v___f_3770_; 
v___f_3770_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3770_, 0, v_addEntryFn_3733_);
lean_closure_set(v___f_3770_, 1, v___x_3769_);
if (v_logWrites_3746_ == 0)
{
lean_object* v___x_3771_; lean_object* v___x_3772_; 
v___x_3771_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3731_, v_env_3724_, v___f_3770_, v_asyncMode_3745_, v_decl_3725_, v___x_3747_);
lean_dec(v_asyncMode_3745_);
v___x_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3771_);
return v___x_3772_;
}
else
{
lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; 
lean_inc_ref(v_toEnvExtension_3731_);
v___x_3773_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3731_, v_env_3724_);
lean_dec_ref(v_env_3724_);
v___x_3774_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3731_, v___x_3773_, v___f_3770_, v_asyncMode_3745_, v_decl_3725_, v___x_3747_);
lean_dec(v_asyncMode_3745_);
v___x_3775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3774_);
return v___x_3775_;
}
}
}
else
{
lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3785_; 
lean_dec(v_asyncMode_3745_);
lean_dec(v_addEntryFn_3733_);
lean_dec_ref(v_toEnvExtension_3731_);
lean_del_object(v___x_3729_);
lean_dec(v_val_3726_);
lean_dec(v_decl_3725_);
lean_dec_ref(v_env_3724_);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3767_);
if (v_isSharedCheck_3785_ == 0)
{
lean_object* v_unused_3786_; 
v_unused_3786_ = lean_ctor_get(v___x_3767_, 0);
lean_dec(v_unused_3786_);
v___x_3778_ = v___x_3767_;
v_isShared_3779_ = v_isSharedCheck_3785_;
goto v_resetjp_3777_;
}
else
{
lean_dec(v___x_3767_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3785_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3783_; 
v___x_3780_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__6));
v___x_3781_ = lean_string_append(v_pfx_3743_, v___x_3780_);
if (v_isShared_3779_ == 0)
{
lean_ctor_set_tag(v___x_3778_, 0);
lean_ctor_set(v___x_3778_, 0, v___x_3781_);
v___x_3783_ = v___x_3778_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v___x_3781_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
}
}
else
{
lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3795_; 
lean_dec(v_addEntryFn_3733_);
lean_dec_ref(v_toEnvExtension_3731_);
lean_del_object(v___x_3729_);
lean_dec_ref(v_ext_3727_);
lean_dec(v_val_3726_);
lean_dec(v_decl_3725_);
lean_dec_ref(v_env_3724_);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3744_);
if (v_isSharedCheck_3795_ == 0)
{
lean_object* v_unused_3796_; 
v_unused_3796_ = lean_ctor_get(v___x_3744_, 0);
lean_dec(v_unused_3796_);
v___x_3788_ = v___x_3744_;
v_isShared_3789_ = v_isSharedCheck_3795_;
goto v_resetjp_3787_;
}
else
{
lean_dec(v___x_3744_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3795_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3793_; 
v___x_3790_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__7));
v___x_3791_ = lean_string_append(v_pfx_3743_, v___x_3790_);
if (v_isShared_3789_ == 0)
{
lean_ctor_set_tag(v___x_3788_, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3791_);
v___x_3793_ = v___x_3788_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v___x_3791_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
return v___x_3793_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue(lean_object* v_00_u03b1_3799_, lean_object* v_attrs_3800_, lean_object* v_env_3801_, lean_object* v_decl_3802_, lean_object* v_val_3803_){
_start:
{
lean_object* v___x_3804_; 
v___x_3804_ = l_Lean_EnumAttributes_setValue___redArg(v_attrs_3800_, v_env_3801_, v_decl_3802_, v_val_3803_);
return v___x_3804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3806_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_3807_ = lean_st_mk_ref(v___x_3806_);
v___x_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
return v___x_3808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2____boxed(lean_object* v_a_3809_){
_start:
{
lean_object* v_res_3810_; 
v_res_3810_ = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_();
return v_res_3810_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder(lean_object* v_builderId_3813_, lean_object* v_builder_3814_){
_start:
{
lean_object* v___x_3816_; lean_object* v___x_3817_; uint8_t v___x_3818_; 
v___x_3816_ = l_Lean_attributeImplBuilderTableRef;
v___x_3817_ = lean_st_ref_get(v___x_3816_);
v___x_3818_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v___x_3817_, v_builderId_3813_);
lean_dec(v___x_3817_);
if (v___x_3818_ == 0)
{
lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; 
v___x_3819_ = lean_st_ref_take(v___x_3816_);
v___x_3820_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v___x_3819_, v_builderId_3813_, v_builder_3814_);
v___x_3821_ = lean_st_ref_put(v___x_3816_, v___x_3820_);
v___x_3822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3822_, 0, v___x_3821_);
return v___x_3822_;
}
else
{
lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; 
lean_dec_ref(v_builder_3814_);
v___x_3823_ = ((lean_object*)(l_Lean_registerAttributeImplBuilder___closed__0));
v___x_3824_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_builderId_3813_, v___x_3818_);
v___x_3825_ = lean_string_append(v___x_3823_, v___x_3824_);
lean_dec_ref(v___x_3824_);
v___x_3826_ = ((lean_object*)(l_Lean_registerAttributeImplBuilder___closed__1));
v___x_3827_ = lean_string_append(v___x_3825_, v___x_3826_);
v___x_3828_ = lean_mk_io_user_error(v___x_3827_);
v___x_3829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3828_);
return v___x_3829_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder___boxed(lean_object* v_builderId_3830_, lean_object* v_builder_3831_, lean_object* v_a_3832_){
_start:
{
lean_object* v_res_3833_; 
v_res_3833_ = l_Lean_registerAttributeImplBuilder(v_builderId_3830_, v_builder_3831_);
return v_res_3833_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(lean_object* v_e_3834_){
_start:
{
if (lean_obj_tag(v_e_3834_) == 0)
{
lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3844_; 
v_a_3836_ = lean_ctor_get(v_e_3834_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v_e_3834_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3838_ = v_e_3834_;
v_isShared_3839_ = v_isSharedCheck_3844_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v_e_3834_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3844_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3840_; lean_object* v___x_3842_; 
v___x_3840_ = lean_mk_io_user_error(v_a_3836_);
if (v_isShared_3839_ == 0)
{
lean_ctor_set_tag(v___x_3838_, 1);
lean_ctor_set(v___x_3838_, 0, v___x_3840_);
v___x_3842_ = v___x_3838_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v___x_3840_);
v___x_3842_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
return v___x_3842_;
}
}
}
else
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3852_; 
v_a_3845_ = lean_ctor_get(v_e_3834_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v_e_3834_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3847_ = v_e_3834_;
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v_e_3834_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3850_; 
if (v_isShared_3848_ == 0)
{
lean_ctor_set_tag(v___x_3847_, 0);
v___x_3850_ = v___x_3847_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_a_3845_);
v___x_3850_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
return v___x_3850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg___boxed(lean_object* v_e_3853_, lean_object* v_a_3854_){
_start:
{
lean_object* v_res_3855_; 
v_res_3855_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(v_e_3853_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1(lean_object* v_00_u03b1_3856_, lean_object* v_e_3857_){
_start:
{
lean_object* v___x_3859_; 
v___x_3859_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(v_e_3857_);
return v___x_3859_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___boxed(lean_object* v_00_u03b1_3860_, lean_object* v_e_3861_, lean_object* v_a_3862_){
_start:
{
lean_object* v_res_3863_; 
v_res_3863_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1(v_00_u03b1_3860_, v_e_3861_);
return v_res_3863_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(lean_object* v_a_3864_, lean_object* v_x_3865_){
_start:
{
if (lean_obj_tag(v_x_3865_) == 0)
{
lean_object* v___x_3866_; 
v___x_3866_ = lean_box(0);
return v___x_3866_;
}
else
{
lean_object* v_key_3867_; lean_object* v_value_3868_; lean_object* v_tail_3869_; uint8_t v___x_3870_; 
v_key_3867_ = lean_ctor_get(v_x_3865_, 0);
v_value_3868_ = lean_ctor_get(v_x_3865_, 1);
v_tail_3869_ = lean_ctor_get(v_x_3865_, 2);
v___x_3870_ = lean_name_eq(v_key_3867_, v_a_3864_);
if (v___x_3870_ == 0)
{
v_x_3865_ = v_tail_3869_;
goto _start;
}
else
{
lean_object* v___x_3872_; 
lean_inc(v_value_3868_);
v___x_3872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3872_, 0, v_value_3868_);
return v___x_3872_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg___boxed(lean_object* v_a_3873_, lean_object* v_x_3874_){
_start:
{
lean_object* v_res_3875_; 
v_res_3875_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(v_a_3873_, v_x_3874_);
lean_dec(v_x_3874_);
lean_dec(v_a_3873_);
return v_res_3875_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(lean_object* v_m_3876_, lean_object* v_a_3877_){
_start:
{
lean_object* v_buckets_3878_; lean_object* v___x_3879_; uint64_t v___y_3881_; 
v_buckets_3878_ = lean_ctor_get(v_m_3876_, 1);
v___x_3879_ = lean_array_get_size(v_buckets_3878_);
if (lean_obj_tag(v_a_3877_) == 0)
{
uint64_t v___x_3895_; 
v___x_3895_ = 1723ULL;
v___y_3881_ = v___x_3895_;
goto v___jp_3880_;
}
else
{
uint64_t v_hash_3896_; 
v_hash_3896_ = lean_ctor_get_uint64(v_a_3877_, sizeof(void*)*2);
v___y_3881_ = v_hash_3896_;
goto v___jp_3880_;
}
v___jp_3880_:
{
uint64_t v___x_3882_; uint64_t v___x_3883_; uint64_t v_fold_3884_; uint64_t v___x_3885_; uint64_t v___x_3886_; uint64_t v___x_3887_; size_t v___x_3888_; size_t v___x_3889_; size_t v___x_3890_; size_t v___x_3891_; size_t v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v___x_3882_ = 32ULL;
v___x_3883_ = lean_uint64_shift_right(v___y_3881_, v___x_3882_);
v_fold_3884_ = lean_uint64_xor(v___y_3881_, v___x_3883_);
v___x_3885_ = 16ULL;
v___x_3886_ = lean_uint64_shift_right(v_fold_3884_, v___x_3885_);
v___x_3887_ = lean_uint64_xor(v_fold_3884_, v___x_3886_);
v___x_3888_ = lean_uint64_to_usize(v___x_3887_);
v___x_3889_ = lean_usize_of_nat(v___x_3879_);
v___x_3890_ = ((size_t)1ULL);
v___x_3891_ = lean_usize_sub(v___x_3889_, v___x_3890_);
v___x_3892_ = lean_usize_land(v___x_3888_, v___x_3891_);
v___x_3893_ = lean_array_uget_borrowed(v_buckets_3878_, v___x_3892_);
v___x_3894_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(v_a_3877_, v___x_3893_);
return v___x_3894_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg___boxed(lean_object* v_m_3897_, lean_object* v_a_3898_){
_start:
{
lean_object* v_res_3899_; 
v_res_3899_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v_m_3897_, v_a_3898_);
lean_dec(v_a_3898_);
lean_dec_ref(v_m_3897_);
return v_res_3899_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry(lean_object* v_e_3901_){
_start:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v_builderId_3905_; lean_object* v_ref_3906_; lean_object* v_args_3907_; lean_object* v___x_3908_; 
v___x_3903_ = l_Lean_attributeImplBuilderTableRef;
v___x_3904_ = lean_st_ref_get(v___x_3903_);
v_builderId_3905_ = lean_ctor_get(v_e_3901_, 0);
lean_inc(v_builderId_3905_);
v_ref_3906_ = lean_ctor_get(v_e_3901_, 1);
lean_inc(v_ref_3906_);
v_args_3907_ = lean_ctor_get(v_e_3901_, 2);
lean_inc(v_args_3907_);
lean_dec_ref(v_e_3901_);
v___x_3908_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v___x_3904_, v_builderId_3905_);
lean_dec(v___x_3904_);
if (lean_obj_tag(v___x_3908_) == 0)
{
lean_object* v___x_3909_; uint8_t v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; 
lean_dec(v_args_3907_);
lean_dec(v_ref_3906_);
v___x_3909_ = ((lean_object*)(l_Lean_mkAttributeImplOfEntry___closed__0));
v___x_3910_ = 1;
v___x_3911_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_builderId_3905_, v___x_3910_);
v___x_3912_ = lean_string_append(v___x_3909_, v___x_3911_);
lean_dec_ref(v___x_3911_);
v___x_3913_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_3914_ = lean_string_append(v___x_3912_, v___x_3913_);
v___x_3915_ = lean_mk_io_user_error(v___x_3914_);
v___x_3916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3916_, 0, v___x_3915_);
return v___x_3916_;
}
else
{
lean_object* v_val_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; 
lean_dec(v_builderId_3905_);
v_val_3917_ = lean_ctor_get(v___x_3908_, 0);
lean_inc(v_val_3917_);
lean_dec_ref_known(v___x_3908_, 1);
v___x_3918_ = lean_apply_2(v_val_3917_, v_ref_3906_, v_args_3907_);
v___x_3919_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(v___x_3918_);
return v___x_3919_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry___boxed(lean_object* v_e_3920_, lean_object* v_a_3921_){
_start:
{
lean_object* v_res_3922_; 
v_res_3922_ = l_Lean_mkAttributeImplOfEntry(v_e_3920_);
return v_res_3922_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0(lean_object* v_00_u03b2_3923_, lean_object* v_m_3924_, lean_object* v_a_3925_){
_start:
{
lean_object* v___x_3926_; 
v___x_3926_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v_m_3924_, v_a_3925_);
return v___x_3926_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___boxed(lean_object* v_00_u03b2_3927_, lean_object* v_m_3928_, lean_object* v_a_3929_){
_start:
{
lean_object* v_res_3930_; 
v_res_3930_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0(v_00_u03b2_3927_, v_m_3928_, v_a_3929_);
lean_dec(v_a_3929_);
lean_dec_ref(v_m_3928_);
return v_res_3930_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0(lean_object* v_00_u03b2_3931_, lean_object* v_a_3932_, lean_object* v_x_3933_){
_start:
{
lean_object* v___x_3934_; 
v___x_3934_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(v_a_3932_, v_x_3933_);
return v___x_3934_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3935_, lean_object* v_a_3936_, lean_object* v_x_3937_){
_start:
{
lean_object* v_res_3938_; 
v_res_3938_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0(v_00_u03b2_3935_, v_a_3936_, v_x_3937_);
lean_dec(v_x_3937_);
lean_dec(v_a_3936_);
return v_res_3938_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeExtensionState_default___closed__0(void){
_start:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3939_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_3940_ = lean_box(0);
v___x_3941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
lean_ctor_set(v___x_3941_, 1, v___x_3939_);
return v___x_3941_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeExtensionState_default(void){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = lean_obj_once(&l_Lean_instInhabitedAttributeExtensionState_default___closed__0, &l_Lean_instInhabitedAttributeExtensionState_default___closed__0_once, _init_l_Lean_instInhabitedAttributeExtensionState_default___closed__0);
return v___x_3942_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeExtensionState(void){
_start:
{
lean_object* v___x_3943_; 
v___x_3943_ = l_Lean_instInhabitedAttributeExtensionState_default;
return v___x_3943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial(){
_start:
{
lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
v___x_3945_ = l_Lean_attributeMapRef;
v___x_3946_ = lean_st_ref_get(v___x_3945_);
v___x_3947_ = lean_box(0);
v___x_3948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3948_, 0, v___x_3947_);
lean_ctor_set(v___x_3948_, 1, v___x_3946_);
v___x_3949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
return v___x_3949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial___boxed(lean_object* v_a_3950_){
_start:
{
lean_object* v_res_3951_; 
v_res_3951_ = l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial();
return v_res_3951_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe(lean_object* v_env_3957_, lean_object* v_opts_3958_, lean_object* v_declName_3959_){
_start:
{
uint8_t v___x_3962_; lean_object* v___x_3963_; 
v___x_3962_ = 0;
lean_inc(v_declName_3959_);
lean_inc_ref(v_env_3957_);
v___x_3963_ = l_Lean_Environment_find_x3f(v_env_3957_, v_declName_3959_, v___x_3962_);
if (lean_obj_tag(v___x_3963_) == 0)
{
lean_object* v___x_3964_; uint8_t v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; 
lean_dec_ref(v_env_3957_);
v___x_3964_ = ((lean_object*)(l_Lean_mkAttributeImplOfConstantUnsafe___closed__2));
v___x_3965_ = 1;
v___x_3966_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_3959_, v___x_3965_);
v___x_3967_ = lean_string_append(v___x_3964_, v___x_3966_);
lean_dec_ref(v___x_3966_);
v___x_3968_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_3969_ = lean_string_append(v___x_3967_, v___x_3968_);
v___x_3970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3970_, 0, v___x_3969_);
return v___x_3970_;
}
else
{
lean_object* v_val_3971_; lean_object* v___x_3972_; 
v_val_3971_ = lean_ctor_get(v___x_3963_, 0);
lean_inc(v_val_3971_);
lean_dec_ref_known(v___x_3963_, 1);
v___x_3972_ = l_Lean_ConstantInfo_type(v_val_3971_);
lean_dec(v_val_3971_);
if (lean_obj_tag(v___x_3972_) == 4)
{
lean_object* v_declName_3973_; 
v_declName_3973_ = lean_ctor_get(v___x_3972_, 0);
lean_inc(v_declName_3973_);
lean_dec_ref_known(v___x_3972_, 2);
if (lean_obj_tag(v_declName_3973_) == 1)
{
lean_object* v_pre_3974_; 
v_pre_3974_ = lean_ctor_get(v_declName_3973_, 0);
lean_inc(v_pre_3974_);
if (lean_obj_tag(v_pre_3974_) == 1)
{
lean_object* v_pre_3975_; 
v_pre_3975_ = lean_ctor_get(v_pre_3974_, 0);
if (lean_obj_tag(v_pre_3975_) == 0)
{
lean_object* v_str_3976_; lean_object* v_str_3977_; lean_object* v___x_3978_; uint8_t v___x_3979_; 
v_str_3976_ = lean_ctor_get(v_declName_3973_, 1);
lean_inc_ref(v_str_3976_);
lean_dec_ref_known(v_declName_3973_, 2);
v_str_3977_ = lean_ctor_get(v_pre_3974_, 1);
lean_inc_ref(v_str_3977_);
lean_dec_ref_known(v_pre_3974_, 2);
v___x_3978_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__0));
v___x_3979_ = lean_string_dec_eq(v_str_3977_, v___x_3978_);
lean_dec_ref(v_str_3977_);
if (v___x_3979_ == 0)
{
lean_dec_ref(v_str_3976_);
lean_dec(v_declName_3959_);
lean_dec_ref(v_env_3957_);
goto v___jp_3960_;
}
else
{
lean_object* v___x_3980_; uint8_t v___x_3981_; 
v___x_3980_ = ((lean_object*)(l_Lean_mkAttributeImplOfConstantUnsafe___closed__3));
v___x_3981_ = lean_string_dec_eq(v_str_3976_, v___x_3980_);
lean_dec_ref(v_str_3976_);
if (v___x_3981_ == 0)
{
lean_dec(v_declName_3959_);
lean_dec_ref(v_env_3957_);
goto v___jp_3960_;
}
else
{
lean_object* v___x_3982_; 
v___x_3982_ = l_Lean_Environment_evalConst___redArg(v_env_3957_, v_opts_3958_, v_declName_3959_, v___x_3981_);
lean_dec(v_declName_3959_);
lean_dec_ref(v_env_3957_);
return v___x_3982_;
}
}
}
else
{
lean_dec_ref_known(v_pre_3974_, 2);
lean_dec_ref_known(v_declName_3973_, 2);
lean_dec(v_declName_3959_);
lean_dec_ref(v_env_3957_);
goto v___jp_3960_;
}
}
else
{
lean_dec_ref_known(v_declName_3973_, 2);
lean_dec(v_pre_3974_);
lean_dec(v_declName_3959_);
lean_dec_ref(v_env_3957_);
goto v___jp_3960_;
}
}
else
{
lean_dec(v_declName_3973_);
lean_dec(v_declName_3959_);
lean_dec_ref(v_env_3957_);
goto v___jp_3960_;
}
}
else
{
lean_dec_ref(v___x_3972_);
lean_dec(v_declName_3959_);
lean_dec_ref(v_env_3957_);
goto v___jp_3960_;
}
}
v___jp_3960_:
{
lean_object* v___x_3961_; 
v___x_3961_ = ((lean_object*)(l_Lean_mkAttributeImplOfConstantUnsafe___closed__1));
return v___x_3961_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___boxed(lean_object* v_env_3983_, lean_object* v_opts_3984_, lean_object* v_declName_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Lean_mkAttributeImplOfConstantUnsafe(v_env_3983_, v_opts_3984_, v_declName_3985_);
lean_dec_ref(v_opts_3984_);
return v_res_3986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(lean_object* v_as_3987_, size_t v_i_3988_, size_t v_stop_3989_, lean_object* v_b_3990_){
_start:
{
uint8_t v___x_3992_; 
v___x_3992_ = lean_usize_dec_eq(v_i_3988_, v_stop_3989_);
if (v___x_3992_ == 0)
{
lean_object* v___x_3993_; lean_object* v___x_3994_; 
v___x_3993_ = lean_array_uget_borrowed(v_as_3987_, v_i_3988_);
lean_inc(v___x_3993_);
v___x_3994_ = l_Lean_mkAttributeImplOfEntry(v___x_3993_);
if (lean_obj_tag(v___x_3994_) == 0)
{
lean_object* v_a_3995_; lean_object* v_toAttributeImplCore_3996_; lean_object* v_name_3997_; lean_object* v___x_3998_; size_t v___x_3999_; size_t v___x_4000_; 
v_a_3995_ = lean_ctor_get(v___x_3994_, 0);
lean_inc(v_a_3995_);
lean_dec_ref_known(v___x_3994_, 1);
v_toAttributeImplCore_3996_ = lean_ctor_get(v_a_3995_, 0);
v_name_3997_ = lean_ctor_get(v_toAttributeImplCore_3996_, 1);
lean_inc(v_name_3997_);
v___x_3998_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_b_3990_, v_name_3997_, v_a_3995_);
v___x_3999_ = ((size_t)1ULL);
v___x_4000_ = lean_usize_add(v_i_3988_, v___x_3999_);
v_i_3988_ = v___x_4000_;
v_b_3990_ = v___x_3998_;
goto _start;
}
else
{
lean_object* v_a_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4009_; 
lean_dec_ref(v_b_3990_);
v_a_4002_ = lean_ctor_get(v___x_3994_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_3994_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_4004_ = v___x_3994_;
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_a_4002_);
lean_dec(v___x_3994_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4007_; 
if (v_isShared_4005_ == 0)
{
v___x_4007_ = v___x_4004_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_a_4002_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
}
else
{
lean_object* v___x_4010_; 
v___x_4010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4010_, 0, v_b_3990_);
return v___x_4010_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg___boxed(lean_object* v_as_4011_, lean_object* v_i_4012_, lean_object* v_stop_4013_, lean_object* v_b_4014_, lean_object* v___y_4015_){
_start:
{
size_t v_i_boxed_4016_; size_t v_stop_boxed_4017_; lean_object* v_res_4018_; 
v_i_boxed_4016_ = lean_unbox_usize(v_i_4012_);
lean_dec(v_i_4012_);
v_stop_boxed_4017_ = lean_unbox_usize(v_stop_4013_);
lean_dec(v_stop_4013_);
v_res_4018_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(v_as_4011_, v_i_boxed_4016_, v_stop_boxed_4017_, v_b_4014_);
lean_dec_ref(v_as_4011_);
return v_res_4018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(lean_object* v_as_4019_, size_t v_i_4020_, size_t v_stop_4021_, lean_object* v_b_4022_, lean_object* v___y_4023_){
_start:
{
lean_object* v_a_4026_; uint8_t v___x_4030_; 
v___x_4030_ = lean_usize_dec_eq(v_i_4020_, v_stop_4021_);
if (v___x_4030_ == 0)
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; uint8_t v___x_4034_; 
v___x_4031_ = lean_array_uget_borrowed(v_as_4019_, v_i_4020_);
v___x_4032_ = lean_unsigned_to_nat(0u);
v___x_4033_ = lean_array_get_size(v___x_4031_);
v___x_4034_ = lean_nat_dec_lt(v___x_4032_, v___x_4033_);
if (v___x_4034_ == 0)
{
v_a_4026_ = v_b_4022_;
goto v___jp_4025_;
}
else
{
size_t v___x_4035_; size_t v___x_4036_; lean_object* v___x_4037_; 
v___x_4035_ = ((size_t)0ULL);
v___x_4036_ = lean_usize_of_nat(v___x_4033_);
v___x_4037_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(v___x_4031_, v___x_4035_, v___x_4036_, v_b_4022_);
if (lean_obj_tag(v___x_4037_) == 0)
{
lean_object* v_a_4038_; 
v_a_4038_ = lean_ctor_get(v___x_4037_, 0);
lean_inc(v_a_4038_);
lean_dec_ref_known(v___x_4037_, 1);
v_a_4026_ = v_a_4038_;
goto v___jp_4025_;
}
else
{
return v___x_4037_;
}
}
}
else
{
lean_object* v___x_4039_; 
v___x_4039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4039_, 0, v_b_4022_);
return v___x_4039_;
}
v___jp_4025_:
{
size_t v___x_4027_; size_t v___x_4028_; 
v___x_4027_ = ((size_t)1ULL);
v___x_4028_ = lean_usize_add(v_i_4020_, v___x_4027_);
v_i_4020_ = v___x_4028_;
v_b_4022_ = v_a_4026_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1___boxed(lean_object* v_as_4040_, lean_object* v_i_4041_, lean_object* v_stop_4042_, lean_object* v_b_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_){
_start:
{
size_t v_i_boxed_4046_; size_t v_stop_boxed_4047_; lean_object* v_res_4048_; 
v_i_boxed_4046_ = lean_unbox_usize(v_i_4041_);
lean_dec(v_i_4041_);
v_stop_boxed_4047_ = lean_unbox_usize(v_stop_4042_);
lean_dec(v_stop_4042_);
v_res_4048_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(v_as_4040_, v_i_boxed_4046_, v_stop_boxed_4047_, v_b_4043_, v___y_4044_);
lean_dec_ref(v___y_4044_);
lean_dec_ref(v_as_4040_);
return v_res_4048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported(lean_object* v_es_4049_, lean_object* v_a_4050_){
_start:
{
lean_object* v_a_4053_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; uint8_t v___x_4061_; 
v___x_4057_ = l_Lean_attributeMapRef;
v___x_4058_ = lean_st_ref_get(v___x_4057_);
v___x_4059_ = lean_unsigned_to_nat(0u);
v___x_4060_ = lean_array_get_size(v_es_4049_);
v___x_4061_ = lean_nat_dec_lt(v___x_4059_, v___x_4060_);
if (v___x_4061_ == 0)
{
v_a_4053_ = v___x_4058_;
goto v___jp_4052_;
}
else
{
size_t v___x_4062_; size_t v___x_4063_; lean_object* v___x_4064_; 
v___x_4062_ = ((size_t)0ULL);
v___x_4063_ = lean_usize_of_nat(v___x_4060_);
v___x_4064_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(v_es_4049_, v___x_4062_, v___x_4063_, v___x_4058_, v_a_4050_);
if (lean_obj_tag(v___x_4064_) == 0)
{
lean_object* v_a_4065_; 
v_a_4065_ = lean_ctor_get(v___x_4064_, 0);
lean_inc(v_a_4065_);
lean_dec_ref_known(v___x_4064_, 1);
v_a_4053_ = v_a_4065_;
goto v___jp_4052_;
}
else
{
lean_object* v_a_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4073_; 
v_a_4066_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4073_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4073_ == 0)
{
v___x_4068_ = v___x_4064_;
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_a_4066_);
lean_dec(v___x_4064_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___x_4071_; 
if (v_isShared_4069_ == 0)
{
v___x_4071_ = v___x_4068_;
goto v_reusejp_4070_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v_a_4066_);
v___x_4071_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4070_;
}
v_reusejp_4070_:
{
return v___x_4071_;
}
}
}
}
v___jp_4052_:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; 
v___x_4054_ = lean_box(0);
v___x_4055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4055_, 0, v___x_4054_);
lean_ctor_set(v___x_4055_, 1, v_a_4053_);
v___x_4056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4056_, 0, v___x_4055_);
return v___x_4056_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported___boxed(lean_object* v_es_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_){
_start:
{
lean_object* v_res_4077_; 
v_res_4077_ = l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported(v_es_4074_, v_a_4075_);
lean_dec_ref(v_a_4075_);
lean_dec_ref(v_es_4074_);
return v_res_4077_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0(lean_object* v_as_4078_, size_t v_i_4079_, size_t v_stop_4080_, lean_object* v_b_4081_, lean_object* v___y_4082_){
_start:
{
lean_object* v___x_4084_; 
v___x_4084_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(v_as_4078_, v_i_4079_, v_stop_4080_, v_b_4081_);
return v___x_4084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___boxed(lean_object* v_as_4085_, lean_object* v_i_4086_, lean_object* v_stop_4087_, lean_object* v_b_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_){
_start:
{
size_t v_i_boxed_4091_; size_t v_stop_boxed_4092_; lean_object* v_res_4093_; 
v_i_boxed_4091_ = lean_unbox_usize(v_i_4086_);
lean_dec(v_i_4086_);
v_stop_boxed_4092_ = lean_unbox_usize(v_stop_4087_);
lean_dec(v_stop_4087_);
v_res_4093_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0(v_as_4085_, v_i_boxed_4091_, v_stop_boxed_4092_, v_b_4088_, v___y_4089_);
lean_dec_ref(v___y_4089_);
lean_dec_ref(v_as_4085_);
return v_res_4093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_addAttrEntry(lean_object* v_s_4094_, lean_object* v_e_4095_){
_start:
{
lean_object* v_snd_4096_; lean_object* v_toAttributeImplCore_4097_; lean_object* v_fst_4098_; lean_object* v___x_4100_; uint8_t v_isShared_4101_; uint8_t v_isSharedCheck_4116_; 
v_snd_4096_ = lean_ctor_get(v_e_4095_, 1);
lean_inc(v_snd_4096_);
v_toAttributeImplCore_4097_ = lean_ctor_get(v_snd_4096_, 0);
v_fst_4098_ = lean_ctor_get(v_e_4095_, 0);
v_isSharedCheck_4116_ = !lean_is_exclusive(v_e_4095_);
if (v_isSharedCheck_4116_ == 0)
{
lean_object* v_unused_4117_; 
v_unused_4117_ = lean_ctor_get(v_e_4095_, 1);
lean_dec(v_unused_4117_);
v___x_4100_ = v_e_4095_;
v_isShared_4101_ = v_isSharedCheck_4116_;
goto v_resetjp_4099_;
}
else
{
lean_inc(v_fst_4098_);
lean_dec(v_e_4095_);
v___x_4100_ = lean_box(0);
v_isShared_4101_ = v_isSharedCheck_4116_;
goto v_resetjp_4099_;
}
v_resetjp_4099_:
{
lean_object* v_newEntries_4102_; lean_object* v_map_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4115_; 
v_newEntries_4102_ = lean_ctor_get(v_s_4094_, 0);
v_map_4103_ = lean_ctor_get(v_s_4094_, 1);
v_isSharedCheck_4115_ = !lean_is_exclusive(v_s_4094_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4105_ = v_s_4094_;
v_isShared_4106_ = v_isSharedCheck_4115_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_map_4103_);
lean_inc(v_newEntries_4102_);
lean_dec(v_s_4094_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4115_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v_name_4107_; lean_object* v___x_4109_; 
v_name_4107_ = lean_ctor_get(v_toAttributeImplCore_4097_, 1);
lean_inc(v_name_4107_);
if (v_isShared_4101_ == 0)
{
lean_ctor_set_tag(v___x_4100_, 1);
lean_ctor_set(v___x_4100_, 1, v_newEntries_4102_);
v___x_4109_ = v___x_4100_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v_fst_4098_);
lean_ctor_set(v_reuseFailAlloc_4114_, 1, v_newEntries_4102_);
v___x_4109_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
lean_object* v___x_4110_; lean_object* v___x_4112_; 
v___x_4110_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_map_4103_, v_name_4107_, v_snd_4096_);
if (v_isShared_4106_ == 0)
{
lean_ctor_set(v___x_4105_, 1, v___x_4110_);
lean_ctor_set(v___x_4105_, 0, v___x_4109_);
v___x_4112_ = v___x_4105_;
goto v_reusejp_4111_;
}
else
{
lean_object* v_reuseFailAlloc_4113_; 
v_reuseFailAlloc_4113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4113_, 0, v___x_4109_);
lean_ctor_set(v_reuseFailAlloc_4113_, 1, v___x_4110_);
v___x_4112_ = v_reuseFailAlloc_4113_;
goto v_reusejp_4111_;
}
v_reusejp_4111_:
{
return v___x_4112_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object* v_x_4118_, lean_object* v_s_4119_){
_start:
{
lean_object* v_newEntries_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; 
v_newEntries_4120_ = lean_ctor_get(v_s_4119_, 0);
lean_inc(v_newEntries_4120_);
lean_dec_ref(v_s_4119_);
v___x_4121_ = l_List_reverse___redArg(v_newEntries_4120_);
v___x_4122_ = lean_array_mk(v___x_4121_);
lean_inc_ref_n(v___x_4122_, 2);
v___x_4123_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4123_, 0, v___x_4122_);
lean_ctor_set(v___x_4123_, 1, v___x_4122_);
lean_ctor_set(v___x_4123_, 2, v___x_4122_);
return v___x_4123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object* v_x_4124_, lean_object* v_s_4125_){
_start:
{
lean_object* v_res_4126_; 
v_res_4126_ = l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(v_x_4124_, v_s_4125_);
lean_dec_ref(v_x_4124_);
return v_res_4126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object* v_s_4127_){
_start:
{
lean_object* v_newEntries_4128_; lean_object* v___x_4130_; uint8_t v_isShared_4131_; uint8_t v_isSharedCheck_4139_; 
v_newEntries_4128_ = lean_ctor_get(v_s_4127_, 0);
v_isSharedCheck_4139_ = !lean_is_exclusive(v_s_4127_);
if (v_isSharedCheck_4139_ == 0)
{
lean_object* v_unused_4140_; 
v_unused_4140_ = lean_ctor_get(v_s_4127_, 1);
lean_dec(v_unused_4140_);
v___x_4130_ = v_s_4127_;
v_isShared_4131_ = v_isSharedCheck_4139_;
goto v_resetjp_4129_;
}
else
{
lean_inc(v_newEntries_4128_);
lean_dec(v_s_4127_);
v___x_4130_ = lean_box(0);
v_isShared_4131_ = v_isSharedCheck_4139_;
goto v_resetjp_4129_;
}
v_resetjp_4129_:
{
lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4137_; 
v___x_4132_ = ((lean_object*)(l_Lean_registerTagAttribute___lam__2___closed__4));
v___x_4133_ = l_List_lengthTR___redArg(v_newEntries_4128_);
lean_dec(v_newEntries_4128_);
v___x_4134_ = l_Nat_reprFast(v___x_4133_);
v___x_4135_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4135_, 0, v___x_4134_);
if (v_isShared_4131_ == 0)
{
lean_ctor_set_tag(v___x_4130_, 5);
lean_ctor_set(v___x_4130_, 1, v___x_4135_);
lean_ctor_set(v___x_4130_, 0, v___x_4132_);
v___x_4137_ = v___x_4130_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v___x_4132_);
lean_ctor_set(v_reuseFailAlloc_4138_, 1, v___x_4135_);
v___x_4137_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
return v___x_4137_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object* v_s_4141_){
_start:
{
lean_object* v_newEntries_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; 
v_newEntries_4142_ = lean_ctor_get(v_s_4141_, 0);
lean_inc(v_newEntries_4142_);
lean_dec_ref(v_s_4141_);
v___x_4143_ = l_List_reverse___redArg(v_newEntries_4142_);
v___x_4144_ = lean_array_mk(v___x_4143_);
return v___x_4144_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___f_4157_; lean_object* v___f_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; 
v___x_4154_ = 0;
v___x_4155_ = lean_box(0);
v___x_4156_ = lean_box(2);
v___f_4157_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___f_4158_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4159_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4160_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4161_ = lean_alloc_closure((void*)(l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial___boxed), 1, 0);
v___x_4162_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4163_ = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(v___x_4163_, 0, v___x_4162_);
lean_ctor_set(v___x_4163_, 1, v___x_4161_);
lean_ctor_set(v___x_4163_, 2, v___x_4160_);
lean_ctor_set(v___x_4163_, 3, v___x_4159_);
lean_ctor_set(v___x_4163_, 4, v___f_4158_);
lean_ctor_set(v___x_4163_, 5, v___f_4157_);
lean_ctor_set(v___x_4163_, 6, v___x_4156_);
lean_ctor_set(v___x_4163_, 7, v___x_4155_);
lean_ctor_set_uint8(v___x_4163_, sizeof(void*)*8, v___x_4154_);
lean_ctor_set_uint8(v___x_4163_, sizeof(void*)*8 + 1, v___x_4154_);
return v___x_4163_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v___f_4164_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4165_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_);
v___x_4166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4166_, 0, v___x_4165_);
lean_ctor_set(v___x_4166_, 1, v___f_4164_);
return v___x_4166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4168_; lean_object* v___x_4169_; 
v___x_4168_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_);
v___x_4169_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_4168_);
return v___x_4169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object* v_a_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_();
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute(lean_object* v_n_4172_){
_start:
{
lean_object* v___x_4174_; lean_object* v___x_4175_; uint8_t v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; 
v___x_4174_ = l_Lean_attributeMapRef;
v___x_4175_ = lean_st_ref_get(v___x_4174_);
v___x_4176_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v___x_4175_, v_n_4172_);
lean_dec(v___x_4175_);
v___x_4177_ = lean_box(v___x_4176_);
v___x_4178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4178_, 0, v___x_4177_);
return v___x_4178_;
}
}
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute___boxed(lean_object* v_n_4179_, lean_object* v_a_4180_){
_start:
{
lean_object* v_res_4181_; 
v_res_4181_ = l_Lean_isBuiltinAttribute(v_n_4179_);
lean_dec(v_n_4179_);
return v_res_4181_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(lean_object* v_x_4182_, lean_object* v_x_4183_){
_start:
{
if (lean_obj_tag(v_x_4183_) == 0)
{
return v_x_4182_;
}
else
{
lean_object* v_key_4184_; lean_object* v_tail_4185_; lean_object* v___x_4186_; 
v_key_4184_ = lean_ctor_get(v_x_4183_, 0);
v_tail_4185_ = lean_ctor_get(v_x_4183_, 2);
lean_inc(v_key_4184_);
v___x_4186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4186_, 0, v_key_4184_);
lean_ctor_set(v___x_4186_, 1, v_x_4182_);
v_x_4182_ = v___x_4186_;
v_x_4183_ = v_tail_4185_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0___boxed(lean_object* v_x_4188_, lean_object* v_x_4189_){
_start:
{
lean_object* v_res_4190_; 
v_res_4190_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(v_x_4188_, v_x_4189_);
lean_dec(v_x_4189_);
return v_res_4190_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(lean_object* v_as_4191_, size_t v_i_4192_, size_t v_stop_4193_, lean_object* v_b_4194_){
_start:
{
uint8_t v___x_4195_; 
v___x_4195_ = lean_usize_dec_eq(v_i_4192_, v_stop_4193_);
if (v___x_4195_ == 0)
{
lean_object* v___x_4196_; lean_object* v___x_4197_; size_t v___x_4198_; size_t v___x_4199_; 
v___x_4196_ = lean_array_uget_borrowed(v_as_4191_, v_i_4192_);
v___x_4197_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(v_b_4194_, v___x_4196_);
v___x_4198_ = ((size_t)1ULL);
v___x_4199_ = lean_usize_add(v_i_4192_, v___x_4198_);
v_i_4192_ = v___x_4199_;
v_b_4194_ = v___x_4197_;
goto _start;
}
else
{
return v_b_4194_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1___boxed(lean_object* v_as_4201_, lean_object* v_i_4202_, lean_object* v_stop_4203_, lean_object* v_b_4204_){
_start:
{
size_t v_i_boxed_4205_; size_t v_stop_boxed_4206_; lean_object* v_res_4207_; 
v_i_boxed_4205_ = lean_unbox_usize(v_i_4202_);
lean_dec(v_i_4202_);
v_stop_boxed_4206_ = lean_unbox_usize(v_stop_4203_);
lean_dec(v_stop_4203_);
v_res_4207_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(v_as_4201_, v_i_boxed_4205_, v_stop_boxed_4206_, v_b_4204_);
lean_dec_ref(v_as_4201_);
return v_res_4207_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames(){
_start:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v_buckets_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; uint8_t v___x_4215_; 
v___x_4209_ = l_Lean_attributeMapRef;
v___x_4210_ = lean_st_ref_get(v___x_4209_);
v_buckets_4211_ = lean_ctor_get(v___x_4210_, 1);
lean_inc_ref(v_buckets_4211_);
lean_dec(v___x_4210_);
v___x_4212_ = lean_box(0);
v___x_4213_ = lean_unsigned_to_nat(0u);
v___x_4214_ = lean_array_get_size(v_buckets_4211_);
v___x_4215_ = lean_nat_dec_lt(v___x_4213_, v___x_4214_);
if (v___x_4215_ == 0)
{
lean_object* v___x_4216_; 
lean_dec_ref(v_buckets_4211_);
v___x_4216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4216_, 0, v___x_4212_);
return v___x_4216_;
}
else
{
size_t v___x_4217_; size_t v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v___x_4217_ = ((size_t)0ULL);
v___x_4218_ = lean_usize_of_nat(v___x_4214_);
v___x_4219_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(v_buckets_4211_, v___x_4217_, v___x_4218_, v___x_4212_);
lean_dec_ref(v_buckets_4211_);
v___x_4220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4219_);
return v___x_4220_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames___boxed(lean_object* v_a_4221_){
_start:
{
lean_object* v_res_4222_; 
v_res_4222_ = l_Lean_getBuiltinAttributeNames();
return v_res_4222_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl(lean_object* v_attrName_4224_){
_start:
{
lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; 
v___x_4226_ = l_Lean_attributeMapRef;
v___x_4227_ = lean_st_ref_get(v___x_4226_);
v___x_4228_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v___x_4227_, v_attrName_4224_);
lean_dec(v___x_4227_);
if (lean_obj_tag(v___x_4228_) == 0)
{
lean_object* v___x_4229_; uint8_t v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; 
v___x_4229_ = ((lean_object*)(l_Lean_getBuiltinAttributeImpl___closed__0));
v___x_4230_ = 1;
v___x_4231_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_4224_, v___x_4230_);
v___x_4232_ = lean_string_append(v___x_4229_, v___x_4231_);
lean_dec_ref(v___x_4231_);
v___x_4233_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_4234_ = lean_string_append(v___x_4232_, v___x_4233_);
v___x_4235_ = lean_mk_io_user_error(v___x_4234_);
v___x_4236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4235_);
return v___x_4236_;
}
else
{
lean_object* v_val_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4244_; 
lean_dec(v_attrName_4224_);
v_val_4237_ = lean_ctor_get(v___x_4228_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v___x_4228_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4239_ = v___x_4228_;
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_val_4237_);
lean_dec(v___x_4228_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v___x_4242_; 
if (v_isShared_4240_ == 0)
{
lean_ctor_set_tag(v___x_4239_, 0);
v___x_4242_ = v___x_4239_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v_val_4237_);
v___x_4242_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
return v___x_4242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl___boxed(lean_object* v_attrName_4245_, lean_object* v_a_4246_){
_start:
{
lean_object* v_res_4247_; 
v_res_4247_ = l_Lean_getBuiltinAttributeImpl(v_attrName_4245_);
return v_res_4247_;
}
}
LEAN_EXPORT uint8_t l_Lean_isAttribute(lean_object* v_env_4248_, lean_object* v_attrName_4249_){
_start:
{
lean_object* v___x_4250_; lean_object* v_toEnvExtension_4251_; lean_object* v_asyncMode_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; uint8_t v___x_4255_; lean_object* v___x_4256_; lean_object* v_map_4257_; uint8_t v___x_4258_; 
v___x_4250_ = l_Lean_attributeExtension;
v_toEnvExtension_4251_ = lean_ctor_get(v___x_4250_, 0);
v_asyncMode_4252_ = lean_ctor_get(v_toEnvExtension_4251_, 2);
v___x_4253_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4254_ = lean_box(0);
v___x_4255_ = 0;
v___x_4256_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4253_, v___x_4250_, v_env_4248_, v_asyncMode_4252_, v___x_4254_, v___x_4255_);
v_map_4257_ = lean_ctor_get(v___x_4256_, 1);
lean_inc_ref(v_map_4257_);
lean_dec(v___x_4256_);
v___x_4258_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_map_4257_, v_attrName_4249_);
lean_dec_ref(v_map_4257_);
return v___x_4258_;
}
}
LEAN_EXPORT lean_object* l_Lean_isAttribute___boxed(lean_object* v_env_4259_, lean_object* v_attrName_4260_){
_start:
{
uint8_t v_res_4261_; lean_object* v_r_4262_; 
v_res_4261_ = l_Lean_isAttribute(v_env_4259_, v_attrName_4260_);
lean_dec(v_attrName_4260_);
v_r_4262_ = lean_box(v_res_4261_);
return v_r_4262_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAttributeNames(lean_object* v_env_4263_){
_start:
{
lean_object* v___x_4264_; lean_object* v_toEnvExtension_4265_; lean_object* v_asyncMode_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; uint8_t v___x_4269_; lean_object* v___x_4270_; lean_object* v_map_4271_; lean_object* v_buckets_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; uint8_t v___x_4276_; 
v___x_4264_ = l_Lean_attributeExtension;
v_toEnvExtension_4265_ = lean_ctor_get(v___x_4264_, 0);
v_asyncMode_4266_ = lean_ctor_get(v_toEnvExtension_4265_, 2);
v___x_4267_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4268_ = lean_box(0);
v___x_4269_ = 0;
v___x_4270_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4267_, v___x_4264_, v_env_4263_, v_asyncMode_4266_, v___x_4268_, v___x_4269_);
v_map_4271_ = lean_ctor_get(v___x_4270_, 1);
lean_inc_ref(v_map_4271_);
lean_dec(v___x_4270_);
v_buckets_4272_ = lean_ctor_get(v_map_4271_, 1);
lean_inc_ref(v_buckets_4272_);
lean_dec_ref(v_map_4271_);
v___x_4273_ = lean_box(0);
v___x_4274_ = lean_unsigned_to_nat(0u);
v___x_4275_ = lean_array_get_size(v_buckets_4272_);
v___x_4276_ = lean_nat_dec_lt(v___x_4274_, v___x_4275_);
if (v___x_4276_ == 0)
{
lean_dec_ref(v_buckets_4272_);
return v___x_4273_;
}
else
{
size_t v___x_4277_; size_t v___x_4278_; lean_object* v___x_4279_; 
v___x_4277_ = ((size_t)0ULL);
v___x_4278_ = lean_usize_of_nat(v___x_4275_);
v___x_4279_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(v_buckets_4272_, v___x_4277_, v___x_4278_, v___x_4273_);
lean_dec_ref(v_buckets_4272_);
return v___x_4279_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAttributeImpl(lean_object* v_env_4280_, lean_object* v_attrName_4281_){
_start:
{
lean_object* v___x_4282_; lean_object* v_toEnvExtension_4283_; lean_object* v_asyncMode_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; uint8_t v___x_4287_; lean_object* v___x_4288_; lean_object* v_map_4289_; lean_object* v___x_4290_; 
v___x_4282_ = l_Lean_attributeExtension;
v_toEnvExtension_4283_ = lean_ctor_get(v___x_4282_, 0);
v_asyncMode_4284_ = lean_ctor_get(v_toEnvExtension_4283_, 2);
v___x_4285_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4286_ = lean_box(0);
v___x_4287_ = 0;
v___x_4288_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4285_, v___x_4282_, v_env_4280_, v_asyncMode_4284_, v___x_4286_, v___x_4287_);
v_map_4289_ = lean_ctor_get(v___x_4288_, 1);
lean_inc_ref(v_map_4289_);
lean_dec(v___x_4288_);
v___x_4290_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v_map_4289_, v_attrName_4281_);
lean_dec_ref(v_map_4289_);
if (lean_obj_tag(v___x_4290_) == 0)
{
lean_object* v___x_4291_; uint8_t v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; 
v___x_4291_ = ((lean_object*)(l_Lean_getBuiltinAttributeImpl___closed__0));
v___x_4292_ = 1;
v___x_4293_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_4281_, v___x_4292_);
v___x_4294_ = lean_string_append(v___x_4291_, v___x_4293_);
lean_dec_ref(v___x_4293_);
v___x_4295_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_4296_ = lean_string_append(v___x_4294_, v___x_4295_);
v___x_4297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4296_);
return v___x_4297_;
}
else
{
lean_object* v_val_4298_; lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4305_; 
lean_dec(v_attrName_4281_);
v_val_4298_ = lean_ctor_get(v___x_4290_, 0);
v_isSharedCheck_4305_ = !lean_is_exclusive(v___x_4290_);
if (v_isSharedCheck_4305_ == 0)
{
v___x_4300_ = v___x_4290_;
v_isShared_4301_ = v_isSharedCheck_4305_;
goto v_resetjp_4299_;
}
else
{
lean_inc(v_val_4298_);
lean_dec(v___x_4290_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4305_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
lean_object* v___x_4303_; 
if (v_isShared_4301_ == 0)
{
v___x_4303_ = v___x_4300_;
goto v_reusejp_4302_;
}
else
{
lean_object* v_reuseFailAlloc_4304_; 
v_reuseFailAlloc_4304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4304_, 0, v_val_4298_);
v___x_4303_ = v_reuseFailAlloc_4304_;
goto v_reusejp_4302_;
}
v_reusejp_4302_:
{
return v___x_4303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder___lam__0(lean_object* v_addEntryFn_4306_, lean_object* v___x_4307_, lean_object* v_s_4308_){
_start:
{
lean_object* v_importedEntries_4309_; lean_object* v_state_4310_; lean_object* v___x_4312_; uint8_t v_isShared_4313_; uint8_t v_isSharedCheck_4318_; 
v_importedEntries_4309_ = lean_ctor_get(v_s_4308_, 0);
v_state_4310_ = lean_ctor_get(v_s_4308_, 1);
v_isSharedCheck_4318_ = !lean_is_exclusive(v_s_4308_);
if (v_isSharedCheck_4318_ == 0)
{
v___x_4312_ = v_s_4308_;
v_isShared_4313_ = v_isSharedCheck_4318_;
goto v_resetjp_4311_;
}
else
{
lean_inc(v_state_4310_);
lean_inc(v_importedEntries_4309_);
lean_dec(v_s_4308_);
v___x_4312_ = lean_box(0);
v_isShared_4313_ = v_isSharedCheck_4318_;
goto v_resetjp_4311_;
}
v_resetjp_4311_:
{
lean_object* v_state_4314_; lean_object* v___x_4316_; 
v_state_4314_ = lean_apply_2(v_addEntryFn_4306_, v_state_4310_, v___x_4307_);
if (v_isShared_4313_ == 0)
{
lean_ctor_set(v___x_4312_, 1, v_state_4314_);
v___x_4316_ = v___x_4312_;
goto v_reusejp_4315_;
}
else
{
lean_object* v_reuseFailAlloc_4317_; 
v_reuseFailAlloc_4317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4317_, 0, v_importedEntries_4309_);
lean_ctor_set(v_reuseFailAlloc_4317_, 1, v_state_4314_);
v___x_4316_ = v_reuseFailAlloc_4317_;
goto v_reusejp_4315_;
}
v_reusejp_4315_:
{
return v___x_4316_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder(lean_object* v_env_4319_, lean_object* v_builderId_4320_, lean_object* v_ref_4321_, lean_object* v_args_4322_){
_start:
{
lean_object* v_entry_4324_; lean_object* v___x_4325_; 
v_entry_4324_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_entry_4324_, 0, v_builderId_4320_);
lean_ctor_set(v_entry_4324_, 1, v_ref_4321_);
lean_ctor_set(v_entry_4324_, 2, v_args_4322_);
lean_inc_ref(v_entry_4324_);
v___x_4325_ = l_Lean_mkAttributeImplOfEntry(v_entry_4324_);
if (lean_obj_tag(v___x_4325_) == 0)
{
lean_object* v_a_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4360_; 
v_a_4326_ = lean_ctor_get(v___x_4325_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4325_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4328_ = v___x_4325_;
v_isShared_4329_ = v_isSharedCheck_4360_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_a_4326_);
lean_dec(v___x_4325_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4360_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v_toAttributeImplCore_4330_; lean_object* v_name_4331_; uint8_t v___x_4332_; 
v_toAttributeImplCore_4330_ = lean_ctor_get(v_a_4326_, 0);
v_name_4331_ = lean_ctor_get(v_toAttributeImplCore_4330_, 1);
lean_inc_ref(v_env_4319_);
v___x_4332_ = l_Lean_isAttribute(v_env_4319_, v_name_4331_);
if (v___x_4332_ == 0)
{
lean_object* v___x_4333_; lean_object* v_toEnvExtension_4334_; lean_object* v_addEntryFn_4335_; lean_object* v_asyncMode_4336_; uint8_t v_logWrites_4337_; lean_object* v___x_4338_; lean_object* v___f_4339_; lean_object* v___x_4340_; uint8_t v___x_4341_; 
v___x_4333_ = l_Lean_attributeExtension;
v_toEnvExtension_4334_ = lean_ctor_get(v___x_4333_, 0);
v_addEntryFn_4335_ = lean_ctor_get(v___x_4333_, 3);
v_asyncMode_4336_ = lean_ctor_get(v_toEnvExtension_4334_, 2);
v_logWrites_4337_ = lean_ctor_get_uint8(v_toEnvExtension_4334_, sizeof(void*)*6);
v___x_4338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4338_, 0, v_entry_4324_);
lean_ctor_set(v___x_4338_, 1, v_a_4326_);
lean_inc(v_addEntryFn_4335_);
v___f_4339_ = lean_alloc_closure((void*)(l_Lean_registerAttributeOfBuilder___lam__0), 3, 2);
lean_closure_set(v___f_4339_, 0, v_addEntryFn_4335_);
lean_closure_set(v___f_4339_, 1, v___x_4338_);
v___x_4340_ = lean_box(0);
v___x_4341_ = 1;
if (v_logWrites_4337_ == 0)
{
lean_object* v___x_4342_; lean_object* v___x_4344_; 
lean_inc_ref(v_toEnvExtension_4334_);
v___x_4342_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_4334_, v_env_4319_, v___f_4339_, v_asyncMode_4336_, v___x_4340_, v___x_4341_);
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 0, v___x_4342_);
v___x_4344_ = v___x_4328_;
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
else
{
lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4349_; 
lean_inc_ref_n(v_toEnvExtension_4334_, 2);
v___x_4346_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_4334_, v_env_4319_);
lean_dec_ref(v_env_4319_);
v___x_4347_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_4334_, v___x_4346_, v___f_4339_, v_asyncMode_4336_, v___x_4340_, v___x_4341_);
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 0, v___x_4347_);
v___x_4349_ = v___x_4328_;
goto v_reusejp_4348_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v___x_4347_);
v___x_4349_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4348_;
}
v_reusejp_4348_:
{
return v___x_4349_;
}
}
}
else
{
lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4358_; 
lean_inc(v_name_4331_);
lean_dec(v_a_4326_);
lean_dec_ref_known(v_entry_4324_, 3);
lean_dec_ref(v_env_4319_);
v___x_4351_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__2));
v___x_4352_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4331_, v___x_4332_);
v___x_4353_ = lean_string_append(v___x_4351_, v___x_4352_);
lean_dec_ref(v___x_4352_);
v___x_4354_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__3));
v___x_4355_ = lean_string_append(v___x_4353_, v___x_4354_);
v___x_4356_ = lean_mk_io_user_error(v___x_4355_);
if (v_isShared_4329_ == 0)
{
lean_ctor_set_tag(v___x_4328_, 1);
lean_ctor_set(v___x_4328_, 0, v___x_4356_);
v___x_4358_ = v___x_4328_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v___x_4356_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
}
}
else
{
lean_object* v_a_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4368_; 
lean_dec_ref_known(v_entry_4324_, 3);
lean_dec_ref(v_env_4319_);
v_a_4361_ = lean_ctor_get(v___x_4325_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4325_);
if (v_isSharedCheck_4368_ == 0)
{
v___x_4363_ = v___x_4325_;
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_a_4361_);
lean_dec(v___x_4325_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v___x_4366_; 
if (v_isShared_4364_ == 0)
{
v___x_4366_ = v___x_4363_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v_a_4361_);
v___x_4366_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
return v___x_4366_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder___boxed(lean_object* v_env_4369_, lean_object* v_builderId_4370_, lean_object* v_ref_4371_, lean_object* v_args_4372_, lean_object* v_a_4373_){
_start:
{
lean_object* v_res_4374_; 
v_res_4374_ = l_Lean_registerAttributeOfBuilder(v_env_4369_, v_builderId_4370_, v_ref_4371_, v_args_4372_);
return v_res_4374_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(lean_object* v_x_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_){
_start:
{
if (lean_obj_tag(v_x_4375_) == 0)
{
lean_object* v_a_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; 
v_a_4379_ = lean_ctor_get(v_x_4375_, 0);
lean_inc(v_a_4379_);
lean_dec_ref_known(v_x_4375_, 1);
v___x_4380_ = l_Lean_stringToMessageData(v_a_4379_);
v___x_4381_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_4380_, v___y_4376_, v___y_4377_);
return v___x_4381_;
}
else
{
lean_object* v_a_4382_; lean_object* v___x_4384_; uint8_t v_isShared_4385_; uint8_t v_isSharedCheck_4389_; 
v_a_4382_ = lean_ctor_get(v_x_4375_, 0);
v_isSharedCheck_4389_ = !lean_is_exclusive(v_x_4375_);
if (v_isSharedCheck_4389_ == 0)
{
v___x_4384_ = v_x_4375_;
v_isShared_4385_ = v_isSharedCheck_4389_;
goto v_resetjp_4383_;
}
else
{
lean_inc(v_a_4382_);
lean_dec(v_x_4375_);
v___x_4384_ = lean_box(0);
v_isShared_4385_ = v_isSharedCheck_4389_;
goto v_resetjp_4383_;
}
v_resetjp_4383_:
{
lean_object* v___x_4387_; 
if (v_isShared_4385_ == 0)
{
lean_ctor_set_tag(v___x_4384_, 0);
v___x_4387_ = v___x_4384_;
goto v_reusejp_4386_;
}
else
{
lean_object* v_reuseFailAlloc_4388_; 
v_reuseFailAlloc_4388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4388_, 0, v_a_4382_);
v___x_4387_ = v_reuseFailAlloc_4388_;
goto v_reusejp_4386_;
}
v_reusejp_4386_:
{
return v___x_4387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg___boxed(lean_object* v_x_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_){
_start:
{
lean_object* v_res_4394_; 
v_res_4394_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v_x_4390_, v___y_4391_, v___y_4392_);
lean_dec(v___y_4392_);
lean_dec_ref(v___y_4391_);
return v_res_4394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_add(lean_object* v_declName_4395_, lean_object* v_attrName_4396_, lean_object* v_stx_4397_, uint8_t v_kind_4398_, lean_object* v_a_4399_, lean_object* v_a_4400_){
_start:
{
lean_object* v___x_4402_; lean_object* v_env_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; 
v___x_4402_ = lean_st_ref_get(v_a_4400_);
v_env_4403_ = lean_ctor_get(v___x_4402_, 0);
lean_inc_ref(v_env_4403_);
lean_dec(v___x_4402_);
v___x_4404_ = l_Lean_getAttributeImpl(v_env_4403_, v_attrName_4396_);
v___x_4405_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v___x_4404_, v_a_4399_, v_a_4400_);
if (lean_obj_tag(v___x_4405_) == 0)
{
lean_object* v_a_4406_; lean_object* v_add_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; 
v_a_4406_ = lean_ctor_get(v___x_4405_, 0);
lean_inc(v_a_4406_);
lean_dec_ref_known(v___x_4405_, 1);
v_add_4407_ = lean_ctor_get(v_a_4406_, 1);
lean_inc_ref(v_add_4407_);
lean_dec(v_a_4406_);
v___x_4408_ = lean_box(v_kind_4398_);
lean_inc(v_a_4400_);
lean_inc_ref(v_a_4399_);
v___x_4409_ = lean_apply_6(v_add_4407_, v_declName_4395_, v_stx_4397_, v___x_4408_, v_a_4399_, v_a_4400_, lean_box(0));
return v___x_4409_;
}
else
{
lean_object* v_a_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4417_; 
lean_dec(v_stx_4397_);
lean_dec(v_declName_4395_);
v_a_4410_ = lean_ctor_get(v___x_4405_, 0);
v_isSharedCheck_4417_ = !lean_is_exclusive(v___x_4405_);
if (v_isSharedCheck_4417_ == 0)
{
v___x_4412_ = v___x_4405_;
v_isShared_4413_ = v_isSharedCheck_4417_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_a_4410_);
lean_dec(v___x_4405_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4417_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
lean_object* v___x_4415_; 
if (v_isShared_4413_ == 0)
{
v___x_4415_ = v___x_4412_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4416_; 
v_reuseFailAlloc_4416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4416_, 0, v_a_4410_);
v___x_4415_ = v_reuseFailAlloc_4416_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
return v___x_4415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_add___boxed(lean_object* v_declName_4418_, lean_object* v_attrName_4419_, lean_object* v_stx_4420_, lean_object* v_kind_4421_, lean_object* v_a_4422_, lean_object* v_a_4423_, lean_object* v_a_4424_){
_start:
{
uint8_t v_kind_boxed_4425_; lean_object* v_res_4426_; 
v_kind_boxed_4425_ = lean_unbox(v_kind_4421_);
v_res_4426_ = l_Lean_Attribute_add(v_declName_4418_, v_attrName_4419_, v_stx_4420_, v_kind_boxed_4425_, v_a_4422_, v_a_4423_);
lean_dec(v_a_4423_);
lean_dec_ref(v_a_4422_);
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0(lean_object* v_00_u03b1_4427_, lean_object* v_x_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_){
_start:
{
lean_object* v___x_4432_; 
v___x_4432_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v_x_4428_, v___y_4429_, v___y_4430_);
return v___x_4432_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___boxed(lean_object* v_00_u03b1_4433_, lean_object* v_x_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_){
_start:
{
lean_object* v_res_4438_; 
v_res_4438_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0(v_00_u03b1_4433_, v_x_4434_, v___y_4435_, v___y_4436_);
lean_dec(v___y_4436_);
lean_dec_ref(v___y_4435_);
return v_res_4438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_erase(lean_object* v_declName_4439_, lean_object* v_attrName_4440_, lean_object* v_a_4441_, lean_object* v_a_4442_){
_start:
{
lean_object* v___x_4444_; lean_object* v_env_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; 
v___x_4444_ = lean_st_ref_get(v_a_4442_);
v_env_4445_ = lean_ctor_get(v___x_4444_, 0);
lean_inc_ref(v_env_4445_);
lean_dec(v___x_4444_);
v___x_4446_ = l_Lean_getAttributeImpl(v_env_4445_, v_attrName_4440_);
v___x_4447_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v___x_4446_, v_a_4441_, v_a_4442_);
if (lean_obj_tag(v___x_4447_) == 0)
{
lean_object* v_a_4448_; lean_object* v_erase_4449_; lean_object* v___x_4450_; 
v_a_4448_ = lean_ctor_get(v___x_4447_, 0);
lean_inc(v_a_4448_);
lean_dec_ref_known(v___x_4447_, 1);
v_erase_4449_ = lean_ctor_get(v_a_4448_, 2);
lean_inc_ref(v_erase_4449_);
lean_dec(v_a_4448_);
lean_inc(v_a_4442_);
lean_inc_ref(v_a_4441_);
v___x_4450_ = lean_apply_4(v_erase_4449_, v_declName_4439_, v_a_4441_, v_a_4442_, lean_box(0));
return v___x_4450_;
}
else
{
lean_object* v_a_4451_; lean_object* v___x_4453_; uint8_t v_isShared_4454_; uint8_t v_isSharedCheck_4458_; 
lean_dec(v_declName_4439_);
v_a_4451_ = lean_ctor_get(v___x_4447_, 0);
v_isSharedCheck_4458_ = !lean_is_exclusive(v___x_4447_);
if (v_isSharedCheck_4458_ == 0)
{
v___x_4453_ = v___x_4447_;
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
else
{
lean_inc(v_a_4451_);
lean_dec(v___x_4447_);
v___x_4453_ = lean_box(0);
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
v_resetjp_4452_:
{
lean_object* v___x_4456_; 
if (v_isShared_4454_ == 0)
{
v___x_4456_ = v___x_4453_;
goto v_reusejp_4455_;
}
else
{
lean_object* v_reuseFailAlloc_4457_; 
v_reuseFailAlloc_4457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4457_, 0, v_a_4451_);
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
LEAN_EXPORT lean_object* l_Lean_Attribute_erase___boxed(lean_object* v_declName_4459_, lean_object* v_attrName_4460_, lean_object* v_a_4461_, lean_object* v_a_4462_, lean_object* v_a_4463_){
_start:
{
lean_object* v_res_4464_; 
v_res_4464_ = l_Lean_Attribute_erase(v_declName_4459_, v_attrName_4460_, v_a_4461_, v_a_4462_);
lean_dec(v_a_4462_);
lean_dec_ref(v_a_4461_);
return v_res_4464_;
}
}
LEAN_EXPORT lean_object* l_Lean_updateEnvAttributesImpl___lam__0(lean_object* v___y_4465_, lean_object* v_ps_4466_){
_start:
{
lean_object* v_importedEntries_4467_; lean_object* v___x_4469_; uint8_t v_isShared_4470_; uint8_t v_isSharedCheck_4474_; 
v_importedEntries_4467_ = lean_ctor_get(v_ps_4466_, 0);
v_isSharedCheck_4474_ = !lean_is_exclusive(v_ps_4466_);
if (v_isSharedCheck_4474_ == 0)
{
lean_object* v_unused_4475_; 
v_unused_4475_ = lean_ctor_get(v_ps_4466_, 1);
lean_dec(v_unused_4475_);
v___x_4469_ = v_ps_4466_;
v_isShared_4470_ = v_isSharedCheck_4474_;
goto v_resetjp_4468_;
}
else
{
lean_inc(v_importedEntries_4467_);
lean_dec(v_ps_4466_);
v___x_4469_ = lean_box(0);
v_isShared_4470_ = v_isSharedCheck_4474_;
goto v_resetjp_4468_;
}
v_resetjp_4468_:
{
lean_object* v___x_4472_; 
if (v_isShared_4470_ == 0)
{
lean_ctor_set(v___x_4469_, 1, v___y_4465_);
v___x_4472_ = v___x_4469_;
goto v_reusejp_4471_;
}
else
{
lean_object* v_reuseFailAlloc_4473_; 
v_reuseFailAlloc_4473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4473_, 0, v_importedEntries_4467_);
lean_ctor_set(v_reuseFailAlloc_4473_, 1, v___y_4465_);
v___x_4472_ = v_reuseFailAlloc_4473_;
goto v_reusejp_4471_;
}
v_reusejp_4471_:
{
return v___x_4472_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_updateEnvAttributesImpl_spec__0(lean_object* v_x_4476_, lean_object* v_x_4477_){
_start:
{
if (lean_obj_tag(v_x_4477_) == 0)
{
return v_x_4476_;
}
else
{
lean_object* v_key_4478_; lean_object* v_value_4479_; lean_object* v_tail_4480_; lean_object* v_newEntries_4481_; lean_object* v_map_4482_; uint8_t v___x_4483_; 
v_key_4478_ = lean_ctor_get(v_x_4477_, 0);
lean_inc(v_key_4478_);
v_value_4479_ = lean_ctor_get(v_x_4477_, 1);
lean_inc(v_value_4479_);
v_tail_4480_ = lean_ctor_get(v_x_4477_, 2);
lean_inc(v_tail_4480_);
lean_dec_ref_known(v_x_4477_, 3);
v_newEntries_4481_ = lean_ctor_get(v_x_4476_, 0);
v_map_4482_ = lean_ctor_get(v_x_4476_, 1);
v___x_4483_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_map_4482_, v_key_4478_);
if (v___x_4483_ == 0)
{
lean_object* v___x_4485_; uint8_t v_isShared_4486_; uint8_t v_isSharedCheck_4492_; 
lean_inc_ref(v_map_4482_);
lean_inc(v_newEntries_4481_);
v_isSharedCheck_4492_ = !lean_is_exclusive(v_x_4476_);
if (v_isSharedCheck_4492_ == 0)
{
lean_object* v_unused_4493_; lean_object* v_unused_4494_; 
v_unused_4493_ = lean_ctor_get(v_x_4476_, 1);
lean_dec(v_unused_4493_);
v_unused_4494_ = lean_ctor_get(v_x_4476_, 0);
lean_dec(v_unused_4494_);
v___x_4485_ = v_x_4476_;
v_isShared_4486_ = v_isSharedCheck_4492_;
goto v_resetjp_4484_;
}
else
{
lean_dec(v_x_4476_);
v___x_4485_ = lean_box(0);
v_isShared_4486_ = v_isSharedCheck_4492_;
goto v_resetjp_4484_;
}
v_resetjp_4484_:
{
lean_object* v___x_4487_; lean_object* v___x_4489_; 
v___x_4487_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_map_4482_, v_key_4478_, v_value_4479_);
if (v_isShared_4486_ == 0)
{
lean_ctor_set(v___x_4485_, 1, v___x_4487_);
v___x_4489_ = v___x_4485_;
goto v_reusejp_4488_;
}
else
{
lean_object* v_reuseFailAlloc_4491_; 
v_reuseFailAlloc_4491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4491_, 0, v_newEntries_4481_);
lean_ctor_set(v_reuseFailAlloc_4491_, 1, v___x_4487_);
v___x_4489_ = v_reuseFailAlloc_4491_;
goto v_reusejp_4488_;
}
v_reusejp_4488_:
{
v_x_4476_ = v___x_4489_;
v_x_4477_ = v_tail_4480_;
goto _start;
}
}
}
else
{
lean_dec(v_value_4479_);
lean_dec(v_key_4478_);
v_x_4477_ = v_tail_4480_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(lean_object* v_as_4496_, size_t v_i_4497_, size_t v_stop_4498_, lean_object* v_b_4499_){
_start:
{
uint8_t v___x_4500_; 
v___x_4500_ = lean_usize_dec_eq(v_i_4497_, v_stop_4498_);
if (v___x_4500_ == 0)
{
lean_object* v___x_4501_; lean_object* v___x_4502_; size_t v___x_4503_; size_t v___x_4504_; 
v___x_4501_ = lean_array_uget_borrowed(v_as_4496_, v_i_4497_);
lean_inc(v___x_4501_);
v___x_4502_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_updateEnvAttributesImpl_spec__0(v_b_4499_, v___x_4501_);
v___x_4503_ = ((size_t)1ULL);
v___x_4504_ = lean_usize_add(v_i_4497_, v___x_4503_);
v_i_4497_ = v___x_4504_;
v_b_4499_ = v___x_4502_;
goto _start;
}
else
{
return v_b_4499_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1___boxed(lean_object* v_as_4506_, lean_object* v_i_4507_, lean_object* v_stop_4508_, lean_object* v_b_4509_){
_start:
{
size_t v_i_boxed_4510_; size_t v_stop_boxed_4511_; lean_object* v_res_4512_; 
v_i_boxed_4510_ = lean_unbox_usize(v_i_4507_);
lean_dec(v_i_4507_);
v_stop_boxed_4511_ = lean_unbox_usize(v_stop_4508_);
lean_dec(v_stop_4508_);
v_res_4512_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(v_as_4506_, v_i_boxed_4510_, v_stop_boxed_4511_, v_b_4509_);
lean_dec_ref(v_as_4506_);
return v_res_4512_;
}
}
LEAN_EXPORT lean_object* lean_update_env_attributes(lean_object* v_env_4513_){
_start:
{
lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v_toEnvExtension_4519_; lean_object* v_asyncMode_4520_; uint8_t v_logWrites_4521_; lean_object* v___y_4523_; lean_object* v_buckets_4532_; lean_object* v___x_4533_; uint8_t v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; uint8_t v___x_4538_; 
v___x_4515_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4516_ = l_Lean_attributeMapRef;
v___x_4517_ = lean_st_ref_get(v___x_4516_);
v___x_4518_ = l_Lean_attributeExtension;
v_toEnvExtension_4519_ = lean_ctor_get(v___x_4518_, 0);
v_asyncMode_4520_ = lean_ctor_get(v_toEnvExtension_4519_, 2);
v_logWrites_4521_ = lean_ctor_get_uint8(v_toEnvExtension_4519_, sizeof(void*)*6);
v_buckets_4532_ = lean_ctor_get(v___x_4517_, 1);
lean_inc_ref(v_buckets_4532_);
lean_dec(v___x_4517_);
v___x_4533_ = lean_box(0);
v___x_4534_ = 0;
lean_inc_ref(v_env_4513_);
v___x_4535_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4515_, v___x_4518_, v_env_4513_, v_asyncMode_4520_, v___x_4533_, v___x_4534_);
v___x_4536_ = lean_unsigned_to_nat(0u);
v___x_4537_ = lean_array_get_size(v_buckets_4532_);
v___x_4538_ = lean_nat_dec_lt(v___x_4536_, v___x_4537_);
if (v___x_4538_ == 0)
{
lean_dec_ref(v_buckets_4532_);
v___y_4523_ = v___x_4535_;
goto v___jp_4522_;
}
else
{
size_t v___x_4539_; size_t v___x_4540_; lean_object* v___x_4541_; 
v___x_4539_ = ((size_t)0ULL);
v___x_4540_ = lean_usize_of_nat(v___x_4537_);
v___x_4541_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(v_buckets_4532_, v___x_4539_, v___x_4540_, v___x_4535_);
lean_dec_ref(v_buckets_4532_);
v___y_4523_ = v___x_4541_;
goto v___jp_4522_;
}
v___jp_4522_:
{
lean_object* v___f_4524_; lean_object* v___x_4525_; uint8_t v___x_4526_; 
v___f_4524_ = lean_alloc_closure((void*)(l_Lean_updateEnvAttributesImpl___lam__0), 2, 1);
lean_closure_set(v___f_4524_, 0, v___y_4523_);
v___x_4525_ = lean_box(0);
v___x_4526_ = 1;
if (v_logWrites_4521_ == 0)
{
lean_object* v___x_4527_; lean_object* v___x_4528_; 
lean_inc_ref(v_toEnvExtension_4519_);
v___x_4527_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_4519_, v_env_4513_, v___f_4524_, v_asyncMode_4520_, v___x_4525_, v___x_4526_);
v___x_4528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4528_, 0, v___x_4527_);
return v___x_4528_;
}
else
{
lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; 
lean_inc_ref_n(v_toEnvExtension_4519_, 2);
v___x_4529_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_4519_, v_env_4513_);
lean_dec_ref(v_env_4513_);
v___x_4530_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_4519_, v___x_4529_, v___f_4524_, v_asyncMode_4520_, v___x_4525_, v___x_4526_);
v___x_4531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4531_, 0, v___x_4530_);
return v___x_4531_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_updateEnvAttributesImpl___boxed(lean_object* v_env_4542_, lean_object* v_a_4543_){
_start:
{
lean_object* v_res_4544_; 
v_res_4544_ = lean_update_env_attributes(v_env_4542_);
return v_res_4544_;
}
}
LEAN_EXPORT lean_object* lean_get_num_attributes(){
_start:
{
lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v_size_4548_; lean_object* v___x_4549_; 
v___x_4546_ = l_Lean_attributeMapRef;
v___x_4547_ = lean_st_ref_get(v___x_4546_);
v_size_4548_ = lean_ctor_get(v___x_4547_, 0);
lean_inc(v_size_4548_);
lean_dec(v___x_4547_);
v___x_4549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4549_, 0, v_size_4548_);
return v___x_4549_;
}
}
LEAN_EXPORT lean_object* l_Lean_getNumBuiltinAttributesImpl___boxed(lean_object* v_a_4550_){
_start:
{
lean_object* v_res_4551_; 
v_res_4551_ = lean_get_num_attributes();
return v_res_4551_;
}
}
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedAttributeApplicationTime_default = _init_l_Lean_instInhabitedAttributeApplicationTime_default();
l_Lean_instInhabitedAttributeApplicationTime = _init_l_Lean_instInhabitedAttributeApplicationTime();
l_Lean_instInhabitedAttributeKind_default = _init_l_Lean_instInhabitedAttributeKind_default();
l_Lean_instInhabitedAttributeKind = _init_l_Lean_instInhabitedAttributeKind();
res = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_attributeMapRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_attributeMapRef);
lean_dec_ref(res);
l_Lean_instInhabitedTagAttribute_default = _init_l_Lean_instInhabitedTagAttribute_default();
lean_mark_persistent(l_Lean_instInhabitedTagAttribute_default);
l_Lean_instInhabitedTagAttribute = _init_l_Lean_instInhabitedTagAttribute();
lean_mark_persistent(l_Lean_instInhabitedTagAttribute);
res = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_attributeImplBuilderTableRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_attributeImplBuilderTableRef);
lean_dec_ref(res);
l_Lean_instInhabitedAttributeExtensionState_default = _init_l_Lean_instInhabitedAttributeExtensionState_default();
lean_mark_persistent(l_Lean_instInhabitedAttributeExtensionState_default);
l_Lean_instInhabitedAttributeExtensionState = _init_l_Lean_instInhabitedAttributeExtensionState();
lean_mark_persistent(l_Lean_instInhabitedAttributeExtensionState);
res = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_attributeExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_attributeExtension);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_AttributeImplCore_ref___autoParam = _init_l_Lean_AttributeImplCore_ref___autoParam();
lean_mark_persistent(l_Lean_AttributeImplCore_ref___autoParam);
l_Lean_registerTagAttribute___auto__1 = _init_l_Lean_registerTagAttribute___auto__1();
lean_mark_persistent(l_Lean_registerTagAttribute___auto__1);
l_Lean_registerEnumAttributes___auto__1 = _init_l_Lean_registerEnumAttributes___auto__1();
lean_mark_persistent(l_Lean_registerEnumAttributes___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Attributes(builtin);
}
#ifdef __cplusplus
}
#endif
