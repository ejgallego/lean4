// Lean compiler output
// Module: Lean.Server.GoTo
// Imports: public import Lean.Server.Utils public import Lean.Data.Lsp.Internal public import Lean.Util.CollectFVars public import Lean.Util.ForEachExpr meta import Lean.Parser.Module
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
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_Info_toElabInfo_x3f(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
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
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* l_Lean_Server_documentUriFromModule_x3f(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
extern lean_object* l_Lean_builtinDeclRanges;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_isAuxRecursor(lean_object*, lean_object*);
uint8_t l_Lean_isNoConfusion(lean_object*, lean_object*);
lean_object* l_Lean_DeclarationRange_toLspRange(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Elab_Info_range_x3f(lean_object*);
lean_object* l_Lean_Syntax_Range_toLspRange(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_errorExplanationExt;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_findInfo_x3f(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_isInstance___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Expr_getAppFn_x27(lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
lean_object* l_Lean_Elab_Info_lctx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_declaration_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_declaration_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_declaration_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_declaration_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_definition_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_definition_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_definition_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_definition_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_type_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_type_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_type_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_type_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_instBEqGoToKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_instBEqGoToKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_instBEqGoToKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_instBEqGoToKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instBEqGoToKind___closed__0 = (const lean_object*)&l_Lean_Server_instBEqGoToKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instBEqGoToKind = (const lean_object*)&l_Lean_Server_instBEqGoToKind___closed__0_value;
static const lean_string_object l_Lean_Server_instToJsonGoToKind_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean_Server_instToJsonGoToKind_toJson___closed__0 = (const lean_object*)&l_Lean_Server_instToJsonGoToKind_toJson___closed__0_value;
static const lean_ctor_object l_Lean_Server_instToJsonGoToKind_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_instToJsonGoToKind_toJson___closed__0_value)}};
static const lean_object* l_Lean_Server_instToJsonGoToKind_toJson___closed__1 = (const lean_object*)&l_Lean_Server_instToJsonGoToKind_toJson___closed__1_value;
static const lean_string_object l_Lean_Server_instToJsonGoToKind_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Server_instToJsonGoToKind_toJson___closed__2 = (const lean_object*)&l_Lean_Server_instToJsonGoToKind_toJson___closed__2_value;
static const lean_ctor_object l_Lean_Server_instToJsonGoToKind_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_instToJsonGoToKind_toJson___closed__2_value)}};
static const lean_object* l_Lean_Server_instToJsonGoToKind_toJson___closed__3 = (const lean_object*)&l_Lean_Server_instToJsonGoToKind_toJson___closed__3_value;
static const lean_string_object l_Lean_Server_instToJsonGoToKind_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lean_Server_instToJsonGoToKind_toJson___closed__4 = (const lean_object*)&l_Lean_Server_instToJsonGoToKind_toJson___closed__4_value;
static const lean_ctor_object l_Lean_Server_instToJsonGoToKind_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_instToJsonGoToKind_toJson___closed__4_value)}};
static const lean_object* l_Lean_Server_instToJsonGoToKind_toJson___closed__5 = (const lean_object*)&l_Lean_Server_instToJsonGoToKind_toJson___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Server_instToJsonGoToKind_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_instToJsonGoToKind_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Server_instToJsonGoToKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_instToJsonGoToKind_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instToJsonGoToKind___closed__0 = (const lean_object*)&l_Lean_Server_instToJsonGoToKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instToJsonGoToKind = (const lean_object*)&l_Lean_Server_instToJsonGoToKind___closed__0_value;
static const lean_string_object l_Lean_Server_instFromJsonGoToKind_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_Server_instFromJsonGoToKind_fromJson___closed__0 = (const lean_object*)&l_Lean_Server_instFromJsonGoToKind_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Server_instFromJsonGoToKind_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instFromJsonGoToKind_fromJson___closed__0_value)}};
static const lean_object* l_Lean_Server_instFromJsonGoToKind_fromJson___closed__1 = (const lean_object*)&l_Lean_Server_instFromJsonGoToKind_fromJson___closed__1_value;
static const lean_string_object l_Lean_Server_instFromJsonGoToKind_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_Server_instFromJsonGoToKind_fromJson___closed__2 = (const lean_object*)&l_Lean_Server_instFromJsonGoToKind_fromJson___closed__2_value;
static const lean_ctor_object l_Lean_Server_instFromJsonGoToKind_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instFromJsonGoToKind_fromJson___closed__2_value)}};
static const lean_object* l_Lean_Server_instFromJsonGoToKind_fromJson___closed__3 = (const lean_object*)&l_Lean_Server_instFromJsonGoToKind_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_Server_instFromJsonGoToKind_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Server_instFromJsonGoToKind_fromJson___closed__4 = (const lean_object*)&l_Lean_Server_instFromJsonGoToKind_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Server_instFromJsonGoToKind_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_instFromJsonGoToKind_fromJson___closed__5 = (const lean_object*)&l_Lean_Server_instFromJsonGoToKind_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_Server_instFromJsonGoToKind_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Server_instFromJsonGoToKind_fromJson___closed__6 = (const lean_object*)&l_Lean_Server_instFromJsonGoToKind_fromJson___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Server_instFromJsonGoToKind_fromJson(lean_object*);
static const lean_closure_object l_Lean_Server_instFromJsonGoToKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_instFromJsonGoToKind_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instFromJsonGoToKind___closed__0 = (const lean_object*)&l_Lean_Server_instFromJsonGoToKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instFromJsonGoToKind = (const lean_object*)&l_Lean_Server_instFromJsonGoToKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_determineTargetExprs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_determineTargetExprs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_GoToKind_determineTargetExprs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_GoToKind_determineTargetExprs___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_GoToKind_determineTargetExprs___closed__0 = (const lean_object*)&l_Lean_Server_GoToKind_determineTargetExprs___closed__0_value;
static lean_once_cell_t l_Lean_Server_GoToKind_determineTargetExprs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_GoToKind_determineTargetExprs___closed__1;
static lean_once_cell_t l_Lean_Server_GoToKind_determineTargetExprs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_GoToKind_determineTargetExprs___closed__2;
static const lean_array_object l_Lean_Server_GoToKind_determineTargetExprs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_GoToKind_determineTargetExprs___closed__3 = (const lean_object*)&l_Lean_Server_GoToKind_determineTargetExprs___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_determineTargetExprs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_determineTargetExprs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_getInstanceProjectionArg_x3f_reduceToProjection_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_getInstanceProjectionArg_x3f_reduceToProjection_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_getInstanceProjectionArg_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_getInstanceProjectionArg_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_getInstanceProjectionArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_getInstanceProjectionArg_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_isInstanceProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_isInstanceProjection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_isInstanceProjectionInfoFor(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_isInstanceProjectionInfoFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_locationLinksFromDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_locationLinksFromDecl___closed__0 = (const lean_object*)&l_Lean_Server_locationLinksFromDecl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromBinder___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromBinder___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromBinder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromBinder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_locationLinksFromImport___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__0 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__0_value;
static const lean_string_object l_Lean_Server_locationLinksFromImport___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__1 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__1_value;
static const lean_string_object l_Lean_Server_locationLinksFromImport___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__2 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__2_value;
static const lean_string_object l_Lean_Server_locationLinksFromImport___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__3 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 219, 158, 40, 50, 143, 61, 44)}};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__4 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__5 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__5_value),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__5_value)}};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__6 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__6_value;
static const lean_string_object l_Lean_Server_locationLinksFromImport___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__7 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__8_value_aux_1),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__8_value_aux_2),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(107, 73, 92, 3, 207, 252, 164, 131)}};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__8 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__8_value;
static const lean_string_object l_Lean_Server_locationLinksFromImport___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__9 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__10_value_aux_0),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__10_value_aux_1),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__10_value_aux_2),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(89, 228, 64, 55, 26, 167, 248, 235)}};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__10 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__10_value;
static const lean_string_object l_Lean_Server_locationLinksFromImport___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__11 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__12_value_aux_0),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__12_value_aux_1),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Server_locationLinksFromImport___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__12_value_aux_2),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(198, 166, 14, 39, 152, 190, 236, 172)}};
static const lean_object* l_Lean_Server_locationLinksFromImport___redArg___closed__12 = (const lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromImport___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromImport___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromImport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromImport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Delab"};
static const lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 78, 224, 2, 255, 4, 162, 217)}};
static const lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__3 = (const lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__4 = (const lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__4_value;
static const lean_string_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "elabApp"};
static const lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__5 = (const lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(18, 176, 207, 17, 163, 78, 118, 84)}};
static const lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__6 = (const lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__6_value;
static const lean_string_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabIdent"};
static const lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__7 = (const lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_locationLinksFromImport___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(51, 171, 47, 134, 165, 146, 127, 3)}};
static const lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__8 = (const lean_object*)&l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksDefault_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksDefault_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_locationLinksDefault_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_locationLinksDefault_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromErrorNameInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromErrorNameInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromInstanceProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromInstanceProjection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksFromTermInfo_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksFromTermInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromTermInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromTermInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromDelabTermInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromDelabTermInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromFieldInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromFieldInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromOptionInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromOptionInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromCommandInfo___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromCommandInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromCommandInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromCommandInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lean_Server_GoToKind_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Server_GoToKind_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lean_Server_GoToKind_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_declaration_elim___redArg(lean_object* v_declaration_22_){
_start:
{
lean_inc(v_declaration_22_);
return v_declaration_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_declaration_elim___redArg___boxed(lean_object* v_declaration_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Server_GoToKind_declaration_elim___redArg(v_declaration_23_);
lean_dec(v_declaration_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_declaration_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_declaration_28_){
_start:
{
lean_inc(v_declaration_28_);
return v_declaration_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_declaration_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_declaration_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lean_Server_GoToKind_declaration_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_declaration_32_);
lean_dec(v_declaration_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_definition_elim___redArg(lean_object* v_definition_35_){
_start:
{
lean_inc(v_definition_35_);
return v_definition_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_definition_elim___redArg___boxed(lean_object* v_definition_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Server_GoToKind_definition_elim___redArg(v_definition_36_);
lean_dec(v_definition_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_definition_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_definition_41_){
_start:
{
lean_inc(v_definition_41_);
return v_definition_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_definition_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_definition_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lean_Server_GoToKind_definition_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_definition_45_);
lean_dec(v_definition_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_type_elim___redArg(lean_object* v_type_48_){
_start:
{
lean_inc(v_type_48_);
return v_type_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_type_elim___redArg___boxed(lean_object* v_type_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Server_GoToKind_type_elim___redArg(v_type_49_);
lean_dec(v_type_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_type_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_type_54_){
_start:
{
lean_inc(v_type_54_);
return v_type_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_type_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_type_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lean_Server_GoToKind_type_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_type_58_);
lean_dec(v_type_58_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_instBEqGoToKind_beq(uint8_t v_x_61_, uint8_t v_y_62_){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_63_ = lean_box(v_x_61_);
v___x_64_ = lean_obj_tag_nat(v___x_63_);
lean_dec(v___x_63_);
v___x_65_ = lean_box(v_y_62_);
v___x_66_ = lean_obj_tag_nat(v___x_65_);
lean_dec(v___x_65_);
v___x_67_ = lean_nat_dec_eq(v___x_64_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instBEqGoToKind_beq___boxed(lean_object* v_x_68_, lean_object* v_y_69_){
_start:
{
uint8_t v_x_24__boxed_70_; uint8_t v_y_25__boxed_71_; uint8_t v_res_72_; lean_object* v_r_73_; 
v_x_24__boxed_70_ = lean_unbox(v_x_68_);
v_y_25__boxed_71_ = lean_unbox(v_y_69_);
v_res_72_ = l_Lean_Server_instBEqGoToKind_beq(v_x_24__boxed_70_, v_y_25__boxed_71_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instToJsonGoToKind_toJson(uint8_t v_x_85_){
_start:
{
switch(v_x_85_)
{
case 0:
{
lean_object* v___x_86_; 
v___x_86_ = ((lean_object*)(l_Lean_Server_instToJsonGoToKind_toJson___closed__1));
return v___x_86_;
}
case 1:
{
lean_object* v___x_87_; 
v___x_87_ = ((lean_object*)(l_Lean_Server_instToJsonGoToKind_toJson___closed__3));
return v___x_87_;
}
default: 
{
lean_object* v___x_88_; 
v___x_88_ = ((lean_object*)(l_Lean_Server_instToJsonGoToKind_toJson___closed__5));
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instToJsonGoToKind_toJson___boxed(lean_object* v_x_89_){
_start:
{
uint8_t v_x_67__boxed_90_; lean_object* v_res_91_; 
v_x_67__boxed_90_ = lean_unbox(v_x_89_);
v_res_91_ = l_Lean_Server_instToJsonGoToKind_toJson(v_x_67__boxed_90_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instFromJsonGoToKind_fromJson(lean_object* v_json_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Json_getTag_x3f(v_json_109_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v___x_111_; 
v___x_111_ = ((lean_object*)(l_Lean_Server_instFromJsonGoToKind_fromJson___closed__1));
return v___x_111_;
}
else
{
lean_object* v_val_112_; lean_object* v___x_113_; uint8_t v___x_114_; 
v_val_112_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_val_112_);
lean_dec_ref_known(v___x_110_, 1);
v___x_113_ = ((lean_object*)(l_Lean_Server_instToJsonGoToKind_toJson___closed__4));
v___x_114_ = lean_string_dec_eq(v_val_112_, v___x_113_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_115_ = ((lean_object*)(l_Lean_Server_instToJsonGoToKind_toJson___closed__0));
v___x_116_ = lean_string_dec_eq(v_val_112_, v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_117_ = ((lean_object*)(l_Lean_Server_instToJsonGoToKind_toJson___closed__2));
v___x_118_ = lean_string_dec_eq(v_val_112_, v___x_117_);
lean_dec(v_val_112_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; 
v___x_119_ = ((lean_object*)(l_Lean_Server_instFromJsonGoToKind_fromJson___closed__3));
return v___x_119_;
}
else
{
lean_object* v___x_120_; 
v___x_120_ = ((lean_object*)(l_Lean_Server_instFromJsonGoToKind_fromJson___closed__4));
return v___x_120_;
}
}
else
{
lean_object* v___x_121_; 
lean_dec(v_val_112_);
v___x_121_ = ((lean_object*)(l_Lean_Server_instFromJsonGoToKind_fromJson___closed__5));
return v___x_121_;
}
}
else
{
lean_object* v___x_122_; 
lean_dec(v_val_112_);
v___x_122_ = ((lean_object*)(l_Lean_Server_instFromJsonGoToKind_fromJson___closed__6));
return v___x_122_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___redArg(lean_object* v_e_125_, lean_object* v___y_126_){
_start:
{
uint8_t v___x_128_; 
v___x_128_ = l_Lean_Expr_hasMVar(v_e_125_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; 
v___x_129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_129_, 0, v_e_125_);
return v___x_129_;
}
else
{
lean_object* v___x_130_; lean_object* v_mctx_131_; lean_object* v___x_132_; lean_object* v_fst_133_; lean_object* v_snd_134_; lean_object* v___x_135_; lean_object* v_cache_136_; lean_object* v_zetaDeltaFVarIds_137_; lean_object* v_postponed_138_; lean_object* v_diag_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_148_; 
v___x_130_ = lean_st_ref_get(v___y_126_);
v_mctx_131_ = lean_ctor_get(v___x_130_, 0);
lean_inc_ref(v_mctx_131_);
lean_dec(v___x_130_);
v___x_132_ = l_Lean_instantiateMVarsCore(v_mctx_131_, v_e_125_);
v_fst_133_ = lean_ctor_get(v___x_132_, 0);
lean_inc(v_fst_133_);
v_snd_134_ = lean_ctor_get(v___x_132_, 1);
lean_inc(v_snd_134_);
lean_dec_ref(v___x_132_);
v___x_135_ = lean_st_ref_take(v___y_126_);
v_cache_136_ = lean_ctor_get(v___x_135_, 1);
v_zetaDeltaFVarIds_137_ = lean_ctor_get(v___x_135_, 2);
v_postponed_138_ = lean_ctor_get(v___x_135_, 3);
v_diag_139_ = lean_ctor_get(v___x_135_, 4);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_148_ == 0)
{
lean_object* v_unused_149_; 
v_unused_149_ = lean_ctor_get(v___x_135_, 0);
lean_dec(v_unused_149_);
v___x_141_ = v___x_135_;
v_isShared_142_ = v_isSharedCheck_148_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_diag_139_);
lean_inc(v_postponed_138_);
lean_inc(v_zetaDeltaFVarIds_137_);
lean_inc(v_cache_136_);
lean_dec(v___x_135_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_148_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
lean_ctor_set(v___x_141_, 0, v_snd_134_);
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_snd_134_);
lean_ctor_set(v_reuseFailAlloc_147_, 1, v_cache_136_);
lean_ctor_set(v_reuseFailAlloc_147_, 2, v_zetaDeltaFVarIds_137_);
lean_ctor_set(v_reuseFailAlloc_147_, 3, v_postponed_138_);
lean_ctor_set(v_reuseFailAlloc_147_, 4, v_diag_139_);
v___x_144_ = v_reuseFailAlloc_147_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_st_ref_put(v___y_126_, v___x_144_);
v___x_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_146_, 0, v_fst_133_);
return v___x_146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___redArg___boxed(lean_object* v_e_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___redArg(v_e_150_, v___y_151_);
lean_dec(v___y_151_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0(lean_object* v_e_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___redArg(v_e_154_, v___y_156_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___boxed(lean_object* v_e_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0(v_e_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_determineTargetExprs___lam__0(lean_object* v_e_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v_snd_176_; 
switch(lean_obj_tag(v_e_168_))
{
case 1:
{
lean_object* v___x_181_; 
v___x_181_ = lean_array_push(v___y_169_, v_e_168_);
v_snd_176_ = v___x_181_;
goto v___jp_175_;
}
case 4:
{
lean_object* v___x_182_; 
v___x_182_ = lean_array_push(v___y_169_, v_e_168_);
v_snd_176_ = v___x_182_;
goto v___jp_175_;
}
default: 
{
lean_dec_ref(v_e_168_);
v_snd_176_ = v___y_169_;
goto v___jp_175_;
}
}
v___jp_175_:
{
uint8_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_177_ = 1;
v___x_178_ = lean_box(v___x_177_);
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
lean_ctor_set(v___x_179_, 1, v_snd_176_);
v___x_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
return v___x_180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_determineTargetExprs___lam__0___boxed(lean_object* v_e_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lean_Server_GoToKind_determineTargetExprs___lam__0(v_e_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_);
lean_dec(v___y_188_);
lean_dec_ref(v___y_187_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__6___redArg(lean_object* v_a_191_, lean_object* v_b_192_, lean_object* v_x_193_){
_start:
{
if (lean_obj_tag(v_x_193_) == 0)
{
lean_dec(v_b_192_);
lean_dec_ref(v_a_191_);
return v_x_193_;
}
else
{
lean_object* v_key_194_; lean_object* v_value_195_; lean_object* v_tail_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_208_; 
v_key_194_ = lean_ctor_get(v_x_193_, 0);
v_value_195_ = lean_ctor_get(v_x_193_, 1);
v_tail_196_ = lean_ctor_get(v_x_193_, 2);
v_isSharedCheck_208_ = !lean_is_exclusive(v_x_193_);
if (v_isSharedCheck_208_ == 0)
{
v___x_198_ = v_x_193_;
v_isShared_199_ = v_isSharedCheck_208_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_tail_196_);
lean_inc(v_value_195_);
lean_inc(v_key_194_);
lean_dec(v_x_193_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_208_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
uint8_t v___x_200_; 
v___x_200_ = lean_expr_eqv(v_key_194_, v_a_191_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; lean_object* v___x_203_; 
v___x_201_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__6___redArg(v_a_191_, v_b_192_, v_tail_196_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 2, v___x_201_);
v___x_203_ = v___x_198_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_key_194_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v_value_195_);
lean_ctor_set(v_reuseFailAlloc_204_, 2, v___x_201_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
else
{
lean_object* v___x_206_; 
lean_dec(v_value_195_);
lean_dec(v_key_194_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v_b_192_);
lean_ctor_set(v___x_198_, 0, v_a_191_);
v___x_206_ = v___x_198_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_a_191_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v_b_192_);
lean_ctor_set(v_reuseFailAlloc_207_, 2, v_tail_196_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4___redArg(lean_object* v_a_209_, lean_object* v_x_210_){
_start:
{
if (lean_obj_tag(v_x_210_) == 0)
{
uint8_t v___x_211_; 
v___x_211_ = 0;
return v___x_211_;
}
else
{
lean_object* v_key_212_; lean_object* v_tail_213_; uint8_t v___x_214_; 
v_key_212_ = lean_ctor_get(v_x_210_, 0);
v_tail_213_ = lean_ctor_get(v_x_210_, 2);
v___x_214_ = lean_expr_eqv(v_key_212_, v_a_209_);
if (v___x_214_ == 0)
{
v_x_210_ = v_tail_213_;
goto _start;
}
else
{
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_a_216_, lean_object* v_x_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4___redArg(v_a_216_, v_x_217_);
lean_dec(v_x_217_);
lean_dec_ref(v_a_216_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6_spec__7___redArg(lean_object* v_x_220_, lean_object* v_x_221_){
_start:
{
if (lean_obj_tag(v_x_221_) == 0)
{
return v_x_220_;
}
else
{
lean_object* v_key_222_; lean_object* v_value_223_; lean_object* v_tail_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_247_; 
v_key_222_ = lean_ctor_get(v_x_221_, 0);
v_value_223_ = lean_ctor_get(v_x_221_, 1);
v_tail_224_ = lean_ctor_get(v_x_221_, 2);
v_isSharedCheck_247_ = !lean_is_exclusive(v_x_221_);
if (v_isSharedCheck_247_ == 0)
{
v___x_226_ = v_x_221_;
v_isShared_227_ = v_isSharedCheck_247_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_tail_224_);
lean_inc(v_value_223_);
lean_inc(v_key_222_);
lean_dec(v_x_221_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_247_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; uint64_t v___x_229_; uint64_t v___x_230_; uint64_t v___x_231_; uint64_t v_fold_232_; uint64_t v___x_233_; uint64_t v___x_234_; uint64_t v___x_235_; size_t v___x_236_; size_t v___x_237_; size_t v___x_238_; size_t v___x_239_; size_t v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_228_ = lean_array_get_size(v_x_220_);
v___x_229_ = l_Lean_Expr_hash(v_key_222_);
v___x_230_ = 32ULL;
v___x_231_ = lean_uint64_shift_right(v___x_229_, v___x_230_);
v_fold_232_ = lean_uint64_xor(v___x_229_, v___x_231_);
v___x_233_ = 16ULL;
v___x_234_ = lean_uint64_shift_right(v_fold_232_, v___x_233_);
v___x_235_ = lean_uint64_xor(v_fold_232_, v___x_234_);
v___x_236_ = lean_uint64_to_usize(v___x_235_);
v___x_237_ = lean_usize_of_nat(v___x_228_);
v___x_238_ = ((size_t)1ULL);
v___x_239_ = lean_usize_sub(v___x_237_, v___x_238_);
v___x_240_ = lean_usize_land(v___x_236_, v___x_239_);
v___x_241_ = lean_array_uget_borrowed(v_x_220_, v___x_240_);
lean_inc(v___x_241_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 2, v___x_241_);
v___x_243_ = v___x_226_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_key_222_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v_value_223_);
lean_ctor_set(v_reuseFailAlloc_246_, 2, v___x_241_);
v___x_243_ = v_reuseFailAlloc_246_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_244_; 
v___x_244_ = lean_array_uset(v_x_220_, v___x_240_, v___x_243_);
v_x_220_ = v___x_244_;
v_x_221_ = v_tail_224_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6___redArg(lean_object* v_i_248_, lean_object* v_source_249_, lean_object* v_target_250_){
_start:
{
lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = lean_array_get_size(v_source_249_);
v___x_252_ = lean_nat_dec_lt(v_i_248_, v___x_251_);
if (v___x_252_ == 0)
{
lean_dec_ref(v_source_249_);
lean_dec(v_i_248_);
return v_target_250_;
}
else
{
lean_object* v_es_253_; lean_object* v___x_254_; lean_object* v_source_255_; lean_object* v_target_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v_es_253_ = lean_array_fget(v_source_249_, v_i_248_);
v___x_254_ = lean_box(0);
v_source_255_ = lean_array_fset(v_source_249_, v_i_248_, v___x_254_);
v_target_256_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6_spec__7___redArg(v_target_250_, v_es_253_);
v___x_257_ = lean_unsigned_to_nat(1u);
v___x_258_ = lean_nat_add(v_i_248_, v___x_257_);
lean_dec(v_i_248_);
v_i_248_ = v___x_258_;
v_source_249_ = v_source_255_;
v_target_250_ = v_target_256_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5___redArg(lean_object* v_data_260_){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v_nbuckets_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_261_ = lean_array_get_size(v_data_260_);
v___x_262_ = lean_unsigned_to_nat(2u);
v_nbuckets_263_ = lean_nat_mul(v___x_261_, v___x_262_);
v___x_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = lean_box(0);
v___x_266_ = lean_mk_array(v_nbuckets_263_, v___x_265_);
v___x_267_ = lean_array_propagate_mark(v_data_260_, v___x_266_);
v___x_268_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6___redArg(v___x_264_, v_data_260_, v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2___redArg(lean_object* v_m_269_, lean_object* v_a_270_, lean_object* v_b_271_){
_start:
{
lean_object* v_size_272_; lean_object* v_buckets_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_316_; 
v_size_272_ = lean_ctor_get(v_m_269_, 0);
v_buckets_273_ = lean_ctor_get(v_m_269_, 1);
v_isSharedCheck_316_ = !lean_is_exclusive(v_m_269_);
if (v_isSharedCheck_316_ == 0)
{
v___x_275_ = v_m_269_;
v_isShared_276_ = v_isSharedCheck_316_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_buckets_273_);
lean_inc(v_size_272_);
lean_dec(v_m_269_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_316_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; uint64_t v___x_278_; uint64_t v___x_279_; uint64_t v___x_280_; uint64_t v_fold_281_; uint64_t v___x_282_; uint64_t v___x_283_; uint64_t v___x_284_; size_t v___x_285_; size_t v___x_286_; size_t v___x_287_; size_t v___x_288_; size_t v___x_289_; lean_object* v_bkt_290_; uint8_t v___x_291_; 
v___x_277_ = lean_array_get_size(v_buckets_273_);
v___x_278_ = l_Lean_Expr_hash(v_a_270_);
v___x_279_ = 32ULL;
v___x_280_ = lean_uint64_shift_right(v___x_278_, v___x_279_);
v_fold_281_ = lean_uint64_xor(v___x_278_, v___x_280_);
v___x_282_ = 16ULL;
v___x_283_ = lean_uint64_shift_right(v_fold_281_, v___x_282_);
v___x_284_ = lean_uint64_xor(v_fold_281_, v___x_283_);
v___x_285_ = lean_uint64_to_usize(v___x_284_);
v___x_286_ = lean_usize_of_nat(v___x_277_);
v___x_287_ = ((size_t)1ULL);
v___x_288_ = lean_usize_sub(v___x_286_, v___x_287_);
v___x_289_ = lean_usize_land(v___x_285_, v___x_288_);
v_bkt_290_ = lean_array_uget_borrowed(v_buckets_273_, v___x_289_);
v___x_291_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4___redArg(v_a_270_, v_bkt_290_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; lean_object* v_size_x27_293_; lean_object* v___x_294_; lean_object* v_buckets_x27_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_292_ = lean_unsigned_to_nat(1u);
v_size_x27_293_ = lean_nat_add(v_size_272_, v___x_292_);
lean_dec(v_size_272_);
lean_inc(v_bkt_290_);
v___x_294_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_294_, 0, v_a_270_);
lean_ctor_set(v___x_294_, 1, v_b_271_);
lean_ctor_set(v___x_294_, 2, v_bkt_290_);
v_buckets_x27_295_ = lean_array_uset(v_buckets_273_, v___x_289_, v___x_294_);
v___x_296_ = lean_unsigned_to_nat(4u);
v___x_297_ = lean_nat_mul(v_size_x27_293_, v___x_296_);
v___x_298_ = lean_unsigned_to_nat(3u);
v___x_299_ = lean_nat_div(v___x_297_, v___x_298_);
lean_dec(v___x_297_);
v___x_300_ = lean_array_get_size(v_buckets_x27_295_);
v___x_301_ = lean_nat_dec_le(v___x_299_, v___x_300_);
lean_dec(v___x_299_);
if (v___x_301_ == 0)
{
lean_object* v_val_302_; lean_object* v___x_304_; 
v_val_302_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5___redArg(v_buckets_x27_295_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v_val_302_);
lean_ctor_set(v___x_275_, 0, v_size_x27_293_);
v___x_304_ = v___x_275_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_size_x27_293_);
lean_ctor_set(v_reuseFailAlloc_305_, 1, v_val_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
else
{
lean_object* v___x_307_; 
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v_buckets_x27_295_);
lean_ctor_set(v___x_275_, 0, v_size_x27_293_);
v___x_307_ = v___x_275_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_size_x27_293_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v_buckets_x27_295_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
else
{
lean_object* v___x_309_; lean_object* v_buckets_x27_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_314_; 
lean_inc(v_bkt_290_);
v___x_309_ = lean_box(0);
v_buckets_x27_310_ = lean_array_uset(v_buckets_273_, v___x_289_, v___x_309_);
v___x_311_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__6___redArg(v_a_270_, v_b_271_, v_bkt_290_);
v___x_312_ = lean_array_uset(v_buckets_x27_310_, v___x_289_, v___x_311_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v___x_312_);
v___x_314_ = v___x_275_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_size_272_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v___x_312_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2___redArg(lean_object* v_a_317_, lean_object* v_x_318_){
_start:
{
if (lean_obj_tag(v_x_318_) == 0)
{
lean_object* v___x_319_; 
v___x_319_ = lean_box(0);
return v___x_319_;
}
else
{
lean_object* v_key_320_; lean_object* v_value_321_; lean_object* v_tail_322_; uint8_t v___x_323_; 
v_key_320_ = lean_ctor_get(v_x_318_, 0);
v_value_321_ = lean_ctor_get(v_x_318_, 1);
v_tail_322_ = lean_ctor_get(v_x_318_, 2);
v___x_323_ = lean_expr_eqv(v_key_320_, v_a_317_);
if (v___x_323_ == 0)
{
v_x_318_ = v_tail_322_;
goto _start;
}
else
{
lean_object* v___x_325_; 
lean_inc(v_value_321_);
v___x_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_325_, 0, v_value_321_);
return v___x_325_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_a_326_, lean_object* v_x_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2___redArg(v_a_326_, v_x_327_);
lean_dec(v_x_327_);
lean_dec_ref(v_a_326_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1___redArg(lean_object* v_m_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_buckets_331_; lean_object* v___x_332_; uint64_t v___x_333_; uint64_t v___x_334_; uint64_t v___x_335_; uint64_t v_fold_336_; uint64_t v___x_337_; uint64_t v___x_338_; uint64_t v___x_339_; size_t v___x_340_; size_t v___x_341_; size_t v___x_342_; size_t v___x_343_; size_t v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_buckets_331_ = lean_ctor_get(v_m_329_, 1);
v___x_332_ = lean_array_get_size(v_buckets_331_);
v___x_333_ = l_Lean_Expr_hash(v_a_330_);
v___x_334_ = 32ULL;
v___x_335_ = lean_uint64_shift_right(v___x_333_, v___x_334_);
v_fold_336_ = lean_uint64_xor(v___x_333_, v___x_335_);
v___x_337_ = 16ULL;
v___x_338_ = lean_uint64_shift_right(v_fold_336_, v___x_337_);
v___x_339_ = lean_uint64_xor(v_fold_336_, v___x_338_);
v___x_340_ = lean_uint64_to_usize(v___x_339_);
v___x_341_ = lean_usize_of_nat(v___x_332_);
v___x_342_ = ((size_t)1ULL);
v___x_343_ = lean_usize_sub(v___x_341_, v___x_342_);
v___x_344_ = lean_usize_land(v___x_340_, v___x_343_);
v___x_345_ = lean_array_uget_borrowed(v_buckets_331_, v___x_344_);
v___x_346_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2___redArg(v_a_330_, v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1___redArg___boxed(lean_object* v_m_347_, lean_object* v_a_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1___redArg(v_m_347_, v_a_348_);
lean_dec_ref(v_a_348_);
lean_dec_ref(v_m_347_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(lean_object* v_g_350_, lean_object* v_e_351_, lean_object* v_a_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_a_360_; lean_object* v_fst_361_; lean_object* v___y_367_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = lean_st_ref_get(v_a_352_);
v___x_371_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1___redArg(v___x_370_, v_e_351_);
lean_dec(v___x_370_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v___x_372_; 
lean_inc_ref(v_g_350_);
lean_inc(v___y_357_);
lean_inc_ref(v___y_356_);
lean_inc(v___y_355_);
lean_inc_ref(v___y_354_);
lean_inc_ref(v_e_351_);
v___x_372_ = lean_apply_7(v_g_350_, v_e_351_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, lean_box(0));
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; lean_object* v_fst_374_; lean_object* v_snd_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_420_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_a_373_);
lean_dec_ref_known(v___x_372_, 1);
v_fst_374_ = lean_ctor_get(v_a_373_, 0);
v_snd_375_ = lean_ctor_get(v_a_373_, 1);
v_isSharedCheck_420_ = !lean_is_exclusive(v_a_373_);
if (v_isSharedCheck_420_ == 0)
{
v___x_377_ = v_a_373_;
v_isShared_378_ = v_isSharedCheck_420_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_snd_375_);
lean_inc(v_fst_374_);
lean_dec(v_a_373_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_420_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v_d_380_; lean_object* v_b_381_; lean_object* v___y_382_; uint8_t v___x_387_; 
v___x_387_ = lean_unbox(v_fst_374_);
lean_dec(v_fst_374_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; lean_object* v___x_390_; 
lean_dec_ref(v_g_350_);
v___x_388_ = lean_box(0);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_388_);
v___x_390_ = v___x_377_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_388_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_snd_375_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
v_a_360_ = v___x_390_;
v_fst_361_ = v___x_388_;
goto v___jp_359_;
}
}
else
{
switch(lean_obj_tag(v_e_351_))
{
case 7:
{
lean_object* v_binderType_392_; lean_object* v_body_393_; 
lean_del_object(v___x_377_);
v_binderType_392_ = lean_ctor_get(v_e_351_, 1);
v_body_393_ = lean_ctor_get(v_e_351_, 2);
lean_inc_ref(v_body_393_);
lean_inc_ref(v_binderType_392_);
v_d_380_ = v_binderType_392_;
v_b_381_ = v_body_393_;
v___y_382_ = v_a_352_;
goto v___jp_379_;
}
case 6:
{
lean_object* v_binderType_394_; lean_object* v_body_395_; 
lean_del_object(v___x_377_);
v_binderType_394_ = lean_ctor_get(v_e_351_, 1);
v_body_395_ = lean_ctor_get(v_e_351_, 2);
lean_inc_ref(v_body_395_);
lean_inc_ref(v_binderType_394_);
v_d_380_ = v_binderType_394_;
v_b_381_ = v_body_395_;
v___y_382_ = v_a_352_;
goto v___jp_379_;
}
case 8:
{
lean_object* v_type_396_; lean_object* v_value_397_; lean_object* v_body_398_; lean_object* v___x_399_; 
lean_del_object(v___x_377_);
v_type_396_ = lean_ctor_get(v_e_351_, 1);
v_value_397_ = lean_ctor_get(v_e_351_, 2);
v_body_398_ = lean_ctor_get(v_e_351_, 3);
lean_inc_ref(v_type_396_);
lean_inc_ref(v_g_350_);
v___x_399_ = l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(v_g_350_, v_type_396_, v_a_352_, v_snd_375_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; lean_object* v_snd_401_; lean_object* v___x_402_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_a_400_);
lean_dec_ref_known(v___x_399_, 1);
v_snd_401_ = lean_ctor_get(v_a_400_, 1);
lean_inc(v_snd_401_);
lean_dec(v_a_400_);
lean_inc_ref(v_value_397_);
lean_inc_ref(v_g_350_);
v___x_402_ = l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(v_g_350_, v_value_397_, v_a_352_, v_snd_401_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v_snd_404_; lean_object* v___x_405_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref_known(v___x_402_, 1);
v_snd_404_ = lean_ctor_get(v_a_403_, 1);
lean_inc(v_snd_404_);
lean_dec(v_a_403_);
lean_inc_ref(v_body_398_);
v___x_405_ = l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(v_g_350_, v_body_398_, v_a_352_, v_snd_404_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
v___y_367_ = v___x_405_;
goto v___jp_366_;
}
else
{
lean_dec_ref_known(v_e_351_, 4);
lean_dec_ref(v_g_350_);
return v___x_402_;
}
}
else
{
lean_dec_ref_known(v_e_351_, 4);
lean_dec_ref(v_g_350_);
return v___x_399_;
}
}
case 5:
{
lean_object* v_fn_406_; lean_object* v_arg_407_; lean_object* v___x_408_; 
lean_del_object(v___x_377_);
v_fn_406_ = lean_ctor_get(v_e_351_, 0);
v_arg_407_ = lean_ctor_get(v_e_351_, 1);
lean_inc_ref(v_fn_406_);
lean_inc_ref(v_g_350_);
v___x_408_ = l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(v_g_350_, v_fn_406_, v_a_352_, v_snd_375_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v_a_409_; lean_object* v_snd_410_; lean_object* v___x_411_; 
v_a_409_ = lean_ctor_get(v___x_408_, 0);
lean_inc(v_a_409_);
lean_dec_ref_known(v___x_408_, 1);
v_snd_410_ = lean_ctor_get(v_a_409_, 1);
lean_inc(v_snd_410_);
lean_dec(v_a_409_);
lean_inc_ref(v_arg_407_);
v___x_411_ = l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(v_g_350_, v_arg_407_, v_a_352_, v_snd_410_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
v___y_367_ = v___x_411_;
goto v___jp_366_;
}
else
{
lean_dec_ref_known(v_e_351_, 2);
lean_dec_ref(v_g_350_);
return v___x_408_;
}
}
case 10:
{
lean_object* v_expr_412_; lean_object* v___x_413_; 
lean_del_object(v___x_377_);
v_expr_412_ = lean_ctor_get(v_e_351_, 1);
lean_inc_ref(v_expr_412_);
v___x_413_ = l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(v_g_350_, v_expr_412_, v_a_352_, v_snd_375_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
v___y_367_ = v___x_413_;
goto v___jp_366_;
}
case 11:
{
lean_object* v_struct_414_; lean_object* v___x_415_; 
lean_del_object(v___x_377_);
v_struct_414_ = lean_ctor_get(v_e_351_, 2);
lean_inc_ref(v_struct_414_);
v___x_415_ = l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(v_g_350_, v_struct_414_, v_a_352_, v_snd_375_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
v___y_367_ = v___x_415_;
goto v___jp_366_;
}
default: 
{
lean_object* v___x_416_; lean_object* v___x_418_; 
lean_dec_ref(v_g_350_);
v___x_416_ = lean_box(0);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_416_);
v___x_418_ = v___x_377_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v___x_416_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v_snd_375_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
v_a_360_ = v___x_418_;
v_fst_361_ = v___x_416_;
goto v___jp_359_;
}
}
}
}
v___jp_379_:
{
lean_object* v___x_383_; 
lean_inc_ref(v_g_350_);
v___x_383_ = l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(v_g_350_, v_d_380_, v___y_382_, v_snd_375_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v_a_384_; lean_object* v_snd_385_; lean_object* v___x_386_; 
v_a_384_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_a_384_);
lean_dec_ref_known(v___x_383_, 1);
v_snd_385_ = lean_ctor_get(v_a_384_, 1);
lean_inc(v_snd_385_);
lean_dec(v_a_384_);
v___x_386_ = l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(v_g_350_, v_b_381_, v___y_382_, v_snd_385_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
v___y_367_ = v___x_386_;
goto v___jp_366_;
}
else
{
lean_dec_ref(v_b_381_);
lean_dec_ref(v_e_351_);
lean_dec_ref(v_g_350_);
return v___x_383_;
}
}
}
}
else
{
lean_object* v_a_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
lean_dec_ref(v_e_351_);
lean_dec_ref(v_g_350_);
v_a_421_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_428_ == 0)
{
v___x_423_ = v___x_372_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_a_421_);
lean_dec(v___x_372_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_421_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
else
{
lean_object* v_val_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_437_; 
lean_dec_ref(v_e_351_);
lean_dec_ref(v_g_350_);
v_val_429_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_437_ == 0)
{
v___x_431_ = v___x_371_;
v_isShared_432_ = v_isSharedCheck_437_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_val_429_);
lean_dec(v___x_371_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_437_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_433_; lean_object* v___x_435_; 
v___x_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_433_, 0, v_val_429_);
lean_ctor_set(v___x_433_, 1, v___y_353_);
if (v_isShared_432_ == 0)
{
lean_ctor_set_tag(v___x_431_, 0);
lean_ctor_set(v___x_431_, 0, v___x_433_);
v___x_435_ = v___x_431_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_433_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
v___jp_359_:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_362_ = lean_st_ref_take(v_a_352_);
v___x_363_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2___redArg(v___x_362_, v_e_351_, v_fst_361_);
v___x_364_ = lean_st_ref_put(v_a_352_, v___x_363_);
v___x_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_365_, 0, v_a_360_);
return v___x_365_;
}
v___jp_366_:
{
if (lean_obj_tag(v___y_367_) == 0)
{
lean_object* v_a_368_; lean_object* v_fst_369_; 
v_a_368_ = lean_ctor_get(v___y_367_, 0);
lean_inc(v_a_368_);
lean_dec_ref_known(v___y_367_, 1);
v_fst_369_ = lean_ctor_get(v_a_368_, 0);
lean_inc(v_fst_369_);
v_a_360_ = v_a_368_;
v_fst_361_ = v_fst_369_;
goto v___jp_359_;
}
else
{
lean_dec_ref(v_e_351_);
return v___y_367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1___boxed(lean_object* v_g_438_, lean_object* v_e_439_, lean_object* v_a_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(v_g_438_, v_e_439_, v_a_440_, v___y_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
lean_dec(v_a_440_);
return v_res_447_;
}
}
static lean_object* _init_l_Lean_Server_GoToKind_determineTargetExprs___closed__1(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_box(0);
v___x_450_ = lean_unsigned_to_nat(16u);
v___x_451_ = lean_mk_array(v___x_450_, v___x_449_);
return v___x_451_;
}
}
static lean_object* _init_l_Lean_Server_GoToKind_determineTargetExprs___closed__2(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_452_ = lean_obj_once(&l_Lean_Server_GoToKind_determineTargetExprs___closed__1, &l_Lean_Server_GoToKind_determineTargetExprs___closed__1_once, _init_l_Lean_Server_GoToKind_determineTargetExprs___closed__1);
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
lean_ctor_set(v___x_454_, 1, v___x_452_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_determineTargetExprs(uint8_t v_kind_457_, lean_object* v_ti_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_){
_start:
{
if (v_kind_457_ == 2)
{
lean_object* v_expr_464_; lean_object* v___f_465_; lean_object* v___x_466_; 
v_expr_464_ = lean_ctor_get(v_ti_458_, 3);
lean_inc_ref(v_expr_464_);
lean_dec_ref(v_ti_458_);
v___f_465_ = ((lean_object*)(l_Lean_Server_GoToKind_determineTargetExprs___closed__0));
lean_inc(v_a_462_);
lean_inc_ref(v_a_461_);
lean_inc(v_a_460_);
lean_inc_ref(v_a_459_);
v___x_466_ = lean_infer_type(v_expr_464_, v_a_459_, v_a_460_, v_a_461_, v_a_462_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v_a_467_; lean_object* v___x_468_; lean_object* v_a_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v_a_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_a_467_);
lean_dec_ref_known(v___x_466_, 1);
v___x_468_ = l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___redArg(v_a_467_, v_a_460_);
v_a_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc(v_a_469_);
lean_dec_ref(v___x_468_);
v___x_470_ = lean_obj_once(&l_Lean_Server_GoToKind_determineTargetExprs___closed__2, &l_Lean_Server_GoToKind_determineTargetExprs___closed__2_once, _init_l_Lean_Server_GoToKind_determineTargetExprs___closed__2);
v___x_471_ = ((lean_object*)(l_Lean_Server_GoToKind_determineTargetExprs___closed__3));
v___x_472_ = lean_st_mk_ref(v___x_470_);
v___x_473_ = l_Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1(v___f_465_, v_a_469_, v___x_472_, v___x_471_, v_a_459_, v_a_460_, v_a_461_, v_a_462_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_483_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_483_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_483_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_483_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v_snd_478_; lean_object* v___x_479_; lean_object* v___x_481_; 
v_snd_478_ = lean_ctor_get(v_a_474_, 1);
lean_inc(v_snd_478_);
lean_dec(v_a_474_);
v___x_479_ = lean_st_ref_get(v___x_472_);
lean_dec(v___x_472_);
lean_dec(v___x_479_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v_snd_478_);
v___x_481_ = v___x_476_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_snd_478_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
lean_dec(v___x_472_);
v_a_484_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_473_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_473_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
else
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
v_a_492_ = lean_ctor_get(v___x_466_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v___x_466_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_466_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_a_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
}
else
{
lean_object* v_expr_500_; lean_object* v___x_501_; lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_512_; 
v_expr_500_ = lean_ctor_get(v_ti_458_, 3);
lean_inc_ref(v_expr_500_);
lean_dec_ref(v_ti_458_);
v___x_501_ = l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___redArg(v_expr_500_, v_a_460_);
v_a_502_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_512_ == 0)
{
v___x_504_ = v___x_501_;
v_isShared_505_ = v_isSharedCheck_512_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_501_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_512_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_506_ = lean_unsigned_to_nat(1u);
v___x_507_ = lean_mk_empty_array_with_capacity(v___x_506_);
v___x_508_ = lean_array_push(v___x_507_, v_a_502_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v___x_508_);
v___x_510_ = v___x_504_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_508_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToKind_determineTargetExprs___boxed(lean_object* v_kind_513_, lean_object* v_ti_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_){
_start:
{
uint8_t v_kind_boxed_520_; lean_object* v_res_521_; 
v_kind_boxed_520_ = lean_unbox(v_kind_513_);
v_res_521_ = l_Lean_Server_GoToKind_determineTargetExprs(v_kind_boxed_520_, v_ti_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_);
lean_dec(v_a_518_);
lean_dec_ref(v_a_517_);
lean_dec(v_a_516_);
lean_dec_ref(v_a_515_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1(lean_object* v_00_u03b2_522_, lean_object* v_m_523_, lean_object* v_a_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1___redArg(v_m_523_, v_a_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1___boxed(lean_object* v_00_u03b2_526_, lean_object* v_m_527_, lean_object* v_a_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1(v_00_u03b2_526_, v_m_527_, v_a_528_);
lean_dec_ref(v_a_528_);
lean_dec_ref(v_m_527_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2(lean_object* v_00_u03b2_530_, lean_object* v_m_531_, lean_object* v_a_532_, lean_object* v_b_533_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2___redArg(v_m_531_, v_a_532_, v_b_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_535_, lean_object* v_a_536_, lean_object* v_x_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2___redArg(v_a_536_, v_x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_539_, lean_object* v_a_540_, lean_object* v_x_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__1_spec__2(v_00_u03b2_539_, v_a_540_, v_x_541_);
lean_dec(v_x_541_);
lean_dec_ref(v_a_540_);
return v_res_542_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_543_, lean_object* v_a_544_, lean_object* v_x_545_){
_start:
{
uint8_t v___x_546_; 
v___x_546_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4___redArg(v_a_544_, v_x_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_547_, lean_object* v_a_548_, lean_object* v_x_549_){
_start:
{
uint8_t v_res_550_; lean_object* v_r_551_; 
v_res_550_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__4(v_00_u03b2_547_, v_a_548_, v_x_549_);
lean_dec(v_x_549_);
lean_dec_ref(v_a_548_);
v_r_551_ = lean_box(v_res_550_);
return v_r_551_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_552_, lean_object* v_data_553_){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5___redArg(v_data_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_555_, lean_object* v_a_556_, lean_object* v_b_557_, lean_object* v_x_558_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__6___redArg(v_a_556_, v_b_557_, v_x_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6(lean_object* v_00_u03b2_560_, lean_object* v_i_561_, lean_object* v_source_562_, lean_object* v_target_563_){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6___redArg(v_i_561_, v_source_562_, v_target_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_565_, lean_object* v_x_566_, lean_object* v_x_567_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Server_GoToKind_determineTargetExprs_spec__1_spec__2_spec__5_spec__6_spec__7___redArg(v_x_566_, v_x_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_getInstanceProjectionArg_x3f_reduceToProjection_x3f(lean_object* v_e_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_st_ref_get(v_a_573_);
v___x_576_ = l_Lean_Expr_getAppFn_x27(v_e_569_);
if (lean_obj_tag(v___x_576_) == 4)
{
lean_object* v_declName_577_; lean_object* v_env_578_; lean_object* v___x_579_; 
v_declName_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_declName_577_);
lean_dec_ref_known(v___x_576_, 2);
v_env_578_ = lean_ctor_get(v___x_575_, 0);
lean_inc_ref(v_env_578_);
lean_dec(v___x_575_);
v___x_579_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_578_, v_declName_577_);
if (lean_obj_tag(v___x_579_) == 1)
{
lean_object* v_val_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_589_; 
v_val_580_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_589_ == 0)
{
v___x_582_ = v___x_579_;
v_isShared_583_ = v_isSharedCheck_589_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_val_580_);
lean_dec(v___x_579_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_589_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_584_, 0, v_e_569_);
lean_ctor_set(v___x_584_, 1, v_val_580_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_584_);
v___x_586_ = v___x_582_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_584_);
v___x_586_ = v_reuseFailAlloc_588_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
lean_object* v___x_587_; 
v___x_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
return v___x_587_;
}
}
}
else
{
uint8_t v___x_590_; lean_object* v___x_591_; 
lean_dec(v___x_579_);
v___x_590_ = 0;
v___x_591_ = l_Lean_Meta_unfoldDefinition_x3f(v_e_569_, v___x_590_, v_a_570_, v_a_571_, v_a_572_, v_a_573_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_602_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_602_ == 0)
{
v___x_594_ = v___x_591_;
v_isShared_595_ = v_isSharedCheck_602_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_591_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_602_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
if (lean_obj_tag(v_a_592_) == 1)
{
lean_object* v_val_596_; 
lean_del_object(v___x_594_);
v_val_596_ = lean_ctor_get(v_a_592_, 0);
lean_inc(v_val_596_);
lean_dec_ref_known(v_a_592_, 1);
v_e_569_ = v_val_596_;
goto _start;
}
else
{
lean_object* v___x_598_; lean_object* v___x_600_; 
lean_dec(v_a_592_);
v___x_598_ = lean_box(0);
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 0, v___x_598_);
v___x_600_ = v___x_594_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_598_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
else
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
v_a_603_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_591_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_591_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
}
else
{
lean_object* v___x_611_; lean_object* v___x_612_; 
lean_dec_ref(v___x_576_);
lean_dec(v___x_575_);
lean_dec_ref(v_e_569_);
v___x_611_ = lean_box(0);
v___x_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
return v___x_612_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_getInstanceProjectionArg_x3f_reduceToProjection_x3f___boxed(lean_object* v_e_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l___private_Lean_Server_GoTo_0__Lean_Server_getInstanceProjectionArg_x3f_reduceToProjection_x3f(v_e_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_);
lean_dec(v_a_617_);
lean_dec_ref(v_a_616_);
lean_dec(v_a_615_);
lean_dec_ref(v_a_614_);
return v_res_619_;
}
}
static lean_object* _init_l_Lean_Server_getInstanceProjectionArg_x3f___closed__0(void){
_start:
{
lean_object* v___x_620_; lean_object* v_dummy_621_; 
v___x_620_ = lean_box(0);
v_dummy_621_ = l_Lean_Expr_sort___override(v___x_620_);
return v_dummy_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_getInstanceProjectionArg_x3f(lean_object* v_e_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_){
_start:
{
lean_object* v___y_629_; lean_object* v___x_674_; uint8_t v_transparency_675_; uint8_t v___x_676_; uint8_t v___x_677_; 
v___x_674_ = l_Lean_Meta_Context_config(v_a_623_);
v_transparency_675_ = lean_ctor_get_uint8(v___x_674_, 9);
lean_dec_ref(v___x_674_);
v___x_676_ = 2;
v___x_677_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_675_, v___x_676_);
if (v___x_677_ == 0)
{
lean_object* v_keyedConfig_678_; uint8_t v_trackZetaDelta_679_; lean_object* v_zetaDeltaSet_680_; lean_object* v_lctx_681_; lean_object* v_localInstances_682_; lean_object* v_defEqCtx_x3f_683_; lean_object* v_synthPendingDepth_684_; lean_object* v_customCanUnfoldPredicate_x3f_685_; uint8_t v_univApprox_686_; uint8_t v_inTypeClassResolution_687_; uint8_t v_cacheInferType_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v_keyedConfig_678_ = lean_ctor_get(v_a_623_, 0);
v_trackZetaDelta_679_ = lean_ctor_get_uint8(v_a_623_, sizeof(void*)*7);
v_zetaDeltaSet_680_ = lean_ctor_get(v_a_623_, 1);
v_lctx_681_ = lean_ctor_get(v_a_623_, 2);
v_localInstances_682_ = lean_ctor_get(v_a_623_, 3);
v_defEqCtx_x3f_683_ = lean_ctor_get(v_a_623_, 4);
v_synthPendingDepth_684_ = lean_ctor_get(v_a_623_, 5);
v_customCanUnfoldPredicate_x3f_685_ = lean_ctor_get(v_a_623_, 6);
v_univApprox_686_ = lean_ctor_get_uint8(v_a_623_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_687_ = lean_ctor_get_uint8(v_a_623_, sizeof(void*)*7 + 2);
v_cacheInferType_688_ = lean_ctor_get_uint8(v_a_623_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_678_);
v___x_689_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_676_, v_keyedConfig_678_);
lean_inc(v_customCanUnfoldPredicate_x3f_685_);
lean_inc(v_synthPendingDepth_684_);
lean_inc(v_defEqCtx_x3f_683_);
lean_inc_ref(v_localInstances_682_);
lean_inc_ref(v_lctx_681_);
lean_inc(v_zetaDeltaSet_680_);
v___x_690_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_690_, 0, v___x_689_);
lean_ctor_set(v___x_690_, 1, v_zetaDeltaSet_680_);
lean_ctor_set(v___x_690_, 2, v_lctx_681_);
lean_ctor_set(v___x_690_, 3, v_localInstances_682_);
lean_ctor_set(v___x_690_, 4, v_defEqCtx_x3f_683_);
lean_ctor_set(v___x_690_, 5, v_synthPendingDepth_684_);
lean_ctor_set(v___x_690_, 6, v_customCanUnfoldPredicate_x3f_685_);
lean_ctor_set_uint8(v___x_690_, sizeof(void*)*7, v_trackZetaDelta_679_);
lean_ctor_set_uint8(v___x_690_, sizeof(void*)*7 + 1, v_univApprox_686_);
lean_ctor_set_uint8(v___x_690_, sizeof(void*)*7 + 2, v_inTypeClassResolution_687_);
lean_ctor_set_uint8(v___x_690_, sizeof(void*)*7 + 3, v_cacheInferType_688_);
v___x_691_ = l___private_Lean_Server_GoTo_0__Lean_Server_getInstanceProjectionArg_x3f_reduceToProjection_x3f(v_e_622_, v___x_690_, v_a_624_, v_a_625_, v_a_626_);
lean_dec_ref_known(v___x_690_, 7);
v___y_629_ = v___x_691_;
goto v___jp_628_;
}
else
{
lean_object* v___x_692_; 
v___x_692_ = l___private_Lean_Server_GoTo_0__Lean_Server_getInstanceProjectionArg_x3f_reduceToProjection_x3f(v_e_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
v___y_629_ = v___x_692_;
goto v___jp_628_;
}
v___jp_628_:
{
if (lean_obj_tag(v___y_629_) == 0)
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_665_; 
v_a_630_ = lean_ctor_get(v___y_629_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___y_629_);
if (v_isSharedCheck_665_ == 0)
{
v___x_632_ = v___y_629_;
v_isShared_633_ = v_isSharedCheck_665_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___y_629_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_665_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
if (lean_obj_tag(v_a_630_) == 1)
{
lean_object* v_val_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_660_; 
v_val_634_ = lean_ctor_get(v_a_630_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v_a_630_);
if (v_isSharedCheck_660_ == 0)
{
v___x_636_ = v_a_630_;
v_isShared_637_ = v_isSharedCheck_660_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_val_634_);
lean_dec(v_a_630_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_660_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v_snd_638_; lean_object* v_fst_639_; lean_object* v_numParams_640_; lean_object* v_dummy_641_; lean_object* v_nargs_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; uint8_t v___x_648_; 
v_snd_638_ = lean_ctor_get(v_val_634_, 1);
lean_inc(v_snd_638_);
v_fst_639_ = lean_ctor_get(v_val_634_, 0);
lean_inc(v_fst_639_);
lean_dec(v_val_634_);
v_numParams_640_ = lean_ctor_get(v_snd_638_, 1);
lean_inc(v_numParams_640_);
lean_dec(v_snd_638_);
v_dummy_641_ = lean_obj_once(&l_Lean_Server_getInstanceProjectionArg_x3f___closed__0, &l_Lean_Server_getInstanceProjectionArg_x3f___closed__0_once, _init_l_Lean_Server_getInstanceProjectionArg_x3f___closed__0);
v_nargs_642_ = l_Lean_Expr_getAppNumArgs(v_fst_639_);
lean_inc(v_nargs_642_);
v___x_643_ = lean_mk_array(v_nargs_642_, v_dummy_641_);
v___x_644_ = lean_unsigned_to_nat(1u);
v___x_645_ = lean_nat_sub(v_nargs_642_, v___x_644_);
lean_dec(v_nargs_642_);
v___x_646_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_fst_639_, v___x_643_, v___x_645_);
v___x_647_ = lean_array_get_size(v___x_646_);
v___x_648_ = lean_nat_dec_lt(v_numParams_640_, v___x_647_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; lean_object* v___x_651_; 
lean_dec_ref(v___x_646_);
lean_dec(v_numParams_640_);
lean_del_object(v___x_636_);
v___x_649_ = lean_box(0);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v___x_649_);
v___x_651_ = v___x_632_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
else
{
lean_object* v___x_653_; lean_object* v___x_655_; 
v___x_653_ = lean_array_fget(v___x_646_, v_numParams_640_);
lean_dec(v_numParams_640_);
lean_dec_ref(v___x_646_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 0, v___x_653_);
v___x_655_ = v___x_636_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_653_);
v___x_655_ = v_reuseFailAlloc_659_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_657_; 
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v___x_655_);
v___x_657_ = v___x_632_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v___x_655_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
}
}
else
{
lean_object* v___x_661_; lean_object* v___x_663_; 
lean_dec(v_a_630_);
v___x_661_ = lean_box(0);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v___x_661_);
v___x_663_ = v___x_632_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_661_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
v_a_666_ = lean_ctor_get(v___y_629_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___y_629_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___y_629_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___y_629_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_getInstanceProjectionArg_x3f___boxed(lean_object* v_e_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lean_Server_getInstanceProjectionArg_x3f(v_e_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_);
lean_dec(v_a_697_);
lean_dec_ref(v_a_696_);
lean_dec(v_a_695_);
lean_dec_ref(v_a_694_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_isInstanceProjection(lean_object* v_e_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = l_Lean_Server_getInstanceProjectionArg_x3f(v_e_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_721_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_721_ == 0)
{
v___x_709_ = v___x_706_;
v_isShared_710_ = v_isSharedCheck_721_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_706_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_721_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
if (lean_obj_tag(v_a_707_) == 0)
{
uint8_t v___x_711_; lean_object* v___x_712_; lean_object* v___x_714_; 
v___x_711_ = 0;
v___x_712_ = lean_box(v___x_711_);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v___x_712_);
v___x_714_ = v___x_709_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_712_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
else
{
uint8_t v___x_716_; lean_object* v___x_717_; lean_object* v___x_719_; 
lean_dec_ref_known(v_a_707_, 1);
v___x_716_ = 1;
v___x_717_ = lean_box(v___x_716_);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v___x_717_);
v___x_719_ = v___x_709_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_717_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
v_a_722_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_706_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_706_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_isInstanceProjection___boxed(lean_object* v_e_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lean_Server_isInstanceProjection(v_e_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
lean_dec(v_a_734_);
lean_dec_ref(v_a_733_);
lean_dec(v_a_732_);
lean_dec_ref(v_a_731_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_isInstanceProjectionInfoFor(uint8_t v_kind_737_, lean_object* v_ti1_738_, lean_object* v_ti2_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_){
_start:
{
uint8_t v___x_749_; uint8_t v___x_750_; 
v___x_749_ = 2;
v___x_750_ = l_Lean_Server_instBEqGoToKind_beq(v_kind_737_, v___x_749_);
if (v___x_750_ == 0)
{
lean_object* v_toElabInfo_751_; lean_object* v_expr_752_; lean_object* v_stx_753_; uint8_t v___x_754_; lean_object* v___x_755_; 
v_toElabInfo_751_ = lean_ctor_get(v_ti1_738_, 0);
lean_inc_ref(v_toElabInfo_751_);
v_expr_752_ = lean_ctor_get(v_ti1_738_, 3);
lean_inc_ref(v_expr_752_);
lean_dec_ref(v_ti1_738_);
v_stx_753_ = lean_ctor_get(v_toElabInfo_751_, 1);
lean_inc(v_stx_753_);
lean_dec_ref(v_toElabInfo_751_);
v___x_754_ = 1;
v___x_755_ = l_Lean_Syntax_getPos_x3f(v_stx_753_, v___x_754_);
lean_dec(v_stx_753_);
if (lean_obj_tag(v___x_755_) == 1)
{
lean_object* v_toElabInfo_756_; lean_object* v_val_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_791_; 
v_toElabInfo_756_ = lean_ctor_get(v_ti2_739_, 0);
lean_inc_ref(v_toElabInfo_756_);
v_val_757_ = lean_ctor_get(v___x_755_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_791_ == 0)
{
v___x_759_ = v___x_755_;
v_isShared_760_ = v_isSharedCheck_791_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_val_757_);
lean_dec(v___x_755_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_791_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v_expr_761_; lean_object* v_stx_762_; lean_object* v___x_763_; 
v_expr_761_ = lean_ctor_get(v_ti2_739_, 3);
lean_inc_ref(v_expr_761_);
lean_dec_ref(v_ti2_739_);
v_stx_762_ = lean_ctor_get(v_toElabInfo_756_, 1);
lean_inc(v_stx_762_);
lean_dec_ref(v_toElabInfo_756_);
v___x_763_ = l_Lean_Syntax_getPos_x3f(v_stx_762_, v___x_754_);
lean_dec(v_stx_762_);
if (lean_obj_tag(v___x_763_) == 1)
{
lean_object* v_val_764_; uint8_t v_decide_765_; 
lean_del_object(v___x_759_);
v_val_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_val_764_);
lean_dec_ref_known(v___x_763_, 1);
v_decide_765_ = lean_nat_dec_eq(v_val_757_, v_val_764_);
lean_dec(v_val_764_);
lean_dec(v_val_757_);
if (v_decide_765_ == 0)
{
lean_dec_ref(v_expr_761_);
lean_dec_ref(v_expr_752_);
goto v___jp_745_;
}
else
{
lean_object* v___x_766_; lean_object* v_a_767_; lean_object* v___x_768_; lean_object* v_a_769_; lean_object* v___x_770_; 
v___x_766_ = l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___redArg(v_expr_752_, v_a_741_);
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc_n(v_a_767_, 2);
lean_dec_ref(v___x_766_);
v___x_768_ = l_Lean_instantiateMVars___at___00Lean_Server_GoToKind_determineTargetExprs_spec__0___redArg(v_expr_761_, v_a_741_);
v_a_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_a_769_);
lean_dec_ref(v___x_768_);
v___x_770_ = l_Lean_Server_isInstanceProjection(v_a_767_, v_a_740_, v_a_741_, v_a_742_, v_a_743_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_772_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_771_);
lean_dec_ref_known(v___x_770_, 1);
lean_inc(v_a_769_);
v___x_772_ = l_Lean_Server_isInstanceProjection(v_a_769_, v_a_740_, v_a_741_, v_a_742_, v_a_743_);
if (lean_obj_tag(v___x_772_) == 0)
{
uint8_t v___x_773_; 
v___x_773_ = lean_unbox(v_a_771_);
lean_dec(v_a_771_);
if (v___x_773_ == 0)
{
lean_dec_ref_known(v___x_772_, 1);
lean_dec(v_a_769_);
lean_dec(v_a_767_);
goto v___jp_745_;
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_786_; 
v_a_774_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_786_ == 0)
{
v___x_776_ = v___x_772_;
v_isShared_777_ = v_isSharedCheck_786_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_772_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_786_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
uint8_t v___x_778_; 
v___x_778_ = lean_unbox(v_a_774_);
lean_dec(v_a_774_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; lean_object* v___x_780_; uint8_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_784_; 
v___x_779_ = l_Lean_Expr_getAppFn_x27(v_a_767_);
lean_dec(v_a_767_);
v___x_780_ = l_Lean_Expr_getAppFn_x27(v_a_769_);
lean_dec(v_a_769_);
v___x_781_ = lean_expr_eqv(v___x_779_, v___x_780_);
lean_dec_ref(v___x_780_);
lean_dec_ref(v___x_779_);
v___x_782_ = lean_box(v___x_781_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v___x_782_);
v___x_784_ = v___x_776_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_782_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
else
{
lean_del_object(v___x_776_);
lean_dec(v_a_769_);
lean_dec(v_a_767_);
goto v___jp_745_;
}
}
}
}
else
{
lean_dec(v_a_771_);
lean_dec(v_a_769_);
lean_dec(v_a_767_);
return v___x_772_;
}
}
else
{
lean_dec(v_a_769_);
lean_dec(v_a_767_);
return v___x_770_;
}
}
}
else
{
lean_object* v___x_787_; lean_object* v___x_789_; 
lean_dec(v___x_763_);
lean_dec_ref(v_expr_761_);
lean_dec(v_val_757_);
lean_dec_ref(v_expr_752_);
v___x_787_ = lean_box(v___x_750_);
if (v_isShared_760_ == 0)
{
lean_ctor_set_tag(v___x_759_, 0);
lean_ctor_set(v___x_759_, 0, v___x_787_);
v___x_789_ = v___x_759_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v___x_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
else
{
lean_object* v___x_792_; lean_object* v___x_793_; 
lean_dec(v___x_755_);
lean_dec_ref(v_expr_752_);
lean_dec_ref(v_ti2_739_);
v___x_792_ = lean_box(v___x_750_);
v___x_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_793_, 0, v___x_792_);
return v___x_793_;
}
}
else
{
lean_dec_ref(v_ti2_739_);
lean_dec_ref(v_ti1_738_);
goto v___jp_745_;
}
v___jp_745_:
{
uint8_t v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_746_ = 0;
v___x_747_ = lean_box(v___x_746_);
v___x_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
return v___x_748_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_isInstanceProjectionInfoFor___boxed(lean_object* v_kind_794_, lean_object* v_ti1_795_, lean_object* v_ti2_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_){
_start:
{
uint8_t v_kind_boxed_802_; lean_object* v_res_803_; 
v_kind_boxed_802_ = lean_unbox(v_kind_794_);
v_res_803_ = l_Lean_Server_isInstanceProjectionInfoFor(v_kind_boxed_802_, v_ti1_795_, v_ti2_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
lean_dec(v_a_800_);
lean_dec_ref(v_a_799_);
lean_dec(v_a_798_);
lean_dec_ref(v_a_797_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToM_run___redArg(lean_object* v_ctx_804_, lean_object* v_ci_805_, lean_object* v_lctx_806_, lean_object* v_act_807_){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = lean_apply_1(v_act_807_, v_ctx_804_);
v___x_810_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ci_805_, v_lctx_806_, v___x_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToM_run___redArg___boxed(lean_object* v_ctx_811_, lean_object* v_ci_812_, lean_object* v_lctx_813_, lean_object* v_act_814_, lean_object* v_a_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lean_Server_GoToM_run___redArg(v_ctx_811_, v_ci_812_, v_lctx_813_, v_act_814_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToM_run(lean_object* v_00_u03b1_817_, lean_object* v_ctx_818_, lean_object* v_ci_819_, lean_object* v_lctx_820_, lean_object* v_act_821_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l_Lean_Server_GoToM_run___redArg(v_ctx_818_, v_ci_819_, v_lctx_820_, v_act_821_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_GoToM_run___boxed(lean_object* v_00_u03b1_824_, lean_object* v_ctx_825_, lean_object* v_ci_826_, lean_object* v_lctx_827_, lean_object* v_act_828_, lean_object* v_a_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Lean_Server_GoToM_run(v_00_u03b1_824_, v_ctx_825_, v_ci_826_, v_lctx_827_, v_act_828_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7_spec__8(lean_object* v_msgData_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v___x_837_; lean_object* v_env_838_; uint8_t v___x_839_; lean_object* v_env_840_; lean_object* v___x_841_; lean_object* v_toCold_842_; lean_object* v_mctx_843_; lean_object* v_lctx_844_; lean_object* v_options_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_837_ = lean_st_ref_get(v___y_835_);
v_env_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc_ref(v_env_838_);
lean_dec(v___x_837_);
v___x_839_ = 0;
v_env_840_ = l_Lean_Environment_setRecordingDeps(v_env_838_, v___x_839_);
v___x_841_ = lean_st_ref_get(v___y_833_);
v_toCold_842_ = lean_ctor_get(v___y_834_, 0);
v_mctx_843_ = lean_ctor_get(v___x_841_, 0);
lean_inc_ref(v_mctx_843_);
lean_dec(v___x_841_);
v_lctx_844_ = lean_ctor_get(v___y_832_, 2);
v_options_845_ = lean_ctor_get(v_toCold_842_, 2);
lean_inc_ref(v_options_845_);
lean_inc_ref(v_lctx_844_);
v___x_846_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_846_, 0, v_env_840_);
lean_ctor_set(v___x_846_, 1, v_mctx_843_);
lean_ctor_set(v___x_846_, 2, v_lctx_844_);
lean_ctor_set(v___x_846_, 3, v_options_845_);
v___x_847_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
lean_ctor_set(v___x_847_, 1, v_msgData_831_);
v___x_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7_spec__8___boxed(lean_object* v_msgData_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7_spec__8(v_msgData_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7___redArg(lean_object* v_msg_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_ref_862_; lean_object* v___x_863_; lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_872_; 
v_ref_862_ = lean_ctor_get(v___y_859_, 2);
v___x_863_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7_spec__8(v_msg_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
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
lean_inc(v_ref_862_);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v_ref_862_);
lean_ctor_set(v___x_868_, 1, v_a_864_);
if (v_isShared_867_ == 0)
{
lean_ctor_set_tag(v___x_866_, 1);
lean_ctor_set(v___x_866_, 0, v___x_868_);
v___x_870_ = v___x_866_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7___redArg___boxed(lean_object* v_msg_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7___redArg(v_msg_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec(v___y_875_);
lean_dec_ref(v___y_874_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_ref_880_, lean_object* v_msg_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
lean_object* v_toCold_888_; lean_object* v_currRecDepth_889_; lean_object* v_ref_890_; uint16_t v_optionFlags_891_; uint8_t v_suppressElabErrors_892_; uint8_t v_checkDeprecated_893_; uint8_t v_isRecordingDeps_894_; lean_object* v_ref_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_toCold_888_ = lean_ctor_get(v___y_885_, 0);
v_currRecDepth_889_ = lean_ctor_get(v___y_885_, 1);
v_ref_890_ = lean_ctor_get(v___y_885_, 2);
v_optionFlags_891_ = lean_ctor_get_uint16(v___y_885_, sizeof(void*)*3);
v_suppressElabErrors_892_ = lean_ctor_get_uint8(v___y_885_, sizeof(void*)*3 + 2);
v_checkDeprecated_893_ = lean_ctor_get_uint8(v___y_885_, sizeof(void*)*3 + 3);
v_isRecordingDeps_894_ = lean_ctor_get_uint8(v___y_885_, sizeof(void*)*3 + 4);
v_ref_895_ = l_Lean_replaceRef(v_ref_880_, v_ref_890_);
lean_inc(v_currRecDepth_889_);
lean_inc_ref(v_toCold_888_);
v___x_896_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_896_, 0, v_toCold_888_);
lean_ctor_set(v___x_896_, 1, v_currRecDepth_889_);
lean_ctor_set(v___x_896_, 2, v_ref_895_);
lean_ctor_set_uint16(v___x_896_, sizeof(void*)*3, v_optionFlags_891_);
lean_ctor_set_uint8(v___x_896_, sizeof(void*)*3 + 2, v_suppressElabErrors_892_);
lean_ctor_set_uint8(v___x_896_, sizeof(void*)*3 + 3, v_checkDeprecated_893_);
lean_ctor_set_uint8(v___x_896_, sizeof(void*)*3 + 4, v_isRecordingDeps_894_);
v___x_897_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7___redArg(v_msg_881_, v___y_883_, v___y_884_, v___x_896_, v___y_886_);
lean_dec_ref_known(v___x_896_, 3);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_ref_898_, lean_object* v_msg_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_898_, v_msg_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec_ref(v___y_900_);
lean_dec(v_ref_898_);
return v_res_906_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_907_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_908_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__0);
v___x_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
return v___x_909_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_910_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_911_ = lean_unsigned_to_nat(0u);
v___x_912_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
lean_ctor_set(v___x_912_, 2, v___x_911_);
lean_ctor_set(v___x_912_, 3, v___x_911_);
lean_ctor_set(v___x_912_, 4, v___x_910_);
lean_ctor_set(v___x_912_, 5, v___x_910_);
lean_ctor_set(v___x_912_, 6, v___x_910_);
lean_ctor_set(v___x_912_, 7, v___x_910_);
lean_ctor_set(v___x_912_, 8, v___x_910_);
lean_ctor_set(v___x_912_, 9, v___x_910_);
lean_ctor_set(v___x_912_, 10, v___x_910_);
return v___x_912_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_913_ = lean_unsigned_to_nat(32u);
v___x_914_ = lean_mk_empty_array_with_capacity(v___x_913_);
v___x_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
return v___x_915_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__4(void){
_start:
{
size_t v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_916_ = ((size_t)5ULL);
v___x_917_ = lean_unsigned_to_nat(0u);
v___x_918_ = lean_unsigned_to_nat(32u);
v___x_919_ = lean_mk_empty_array_with_capacity(v___x_918_);
v___x_920_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3);
v___x_921_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_921_, 0, v___x_920_);
lean_ctor_set(v___x_921_, 1, v___x_919_);
lean_ctor_set(v___x_921_, 2, v___x_917_);
lean_ctor_set(v___x_921_, 3, v___x_917_);
lean_ctor_set_usize(v___x_921_, 4, v___x_916_);
return v___x_921_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_922_ = lean_box(1);
v___x_923_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__4);
v___x_924_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_925_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
lean_ctor_set(v___x_925_, 1, v___x_923_);
lean_ctor_set(v___x_925_, 2, v___x_922_);
return v___x_925_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__6));
v___x_928_ = l_Lean_stringToMessageData(v___x_927_);
return v___x_928_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_930_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__8));
v___x_931_ = l_Lean_stringToMessageData(v___x_930_);
return v___x_931_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_933_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__10));
v___x_934_ = l_Lean_stringToMessageData(v___x_933_);
return v___x_934_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__12));
v___x_937_ = l_Lean_stringToMessageData(v___x_936_);
return v___x_937_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__15(void){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__14));
v___x_940_ = l_Lean_stringToMessageData(v___x_939_);
return v___x_940_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__17(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__16));
v___x_943_ = l_Lean_stringToMessageData(v___x_942_);
return v___x_943_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__19(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__18));
v___x_946_ = l_Lean_stringToMessageData(v___x_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(lean_object* v_msg_947_, lean_object* v_declHint_948_, lean_object* v___y_949_){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v_env_953_; uint8_t v___x_954_; 
v___x_951_ = lean_box(0);
v___x_952_ = lean_st_ref_get(v___y_949_);
v_env_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc_ref(v_env_953_);
lean_dec(v___x_952_);
v___x_954_ = l_Lean_Name_isAnonymous(v_declHint_948_);
if (v___x_954_ == 0)
{
uint8_t v_isExporting_955_; 
v_isExporting_955_ = lean_ctor_get_uint8(v_env_953_, sizeof(void*)*13);
if (v_isExporting_955_ == 0)
{
lean_object* v___x_956_; 
lean_dec_ref(v_env_953_);
lean_dec(v_declHint_948_);
v___x_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_956_, 0, v_msg_947_);
return v___x_956_;
}
else
{
lean_object* v___x_957_; uint8_t v___x_958_; 
lean_inc_ref(v_env_953_);
v___x_957_ = l_Lean_Environment_setExporting(v_env_953_, v___x_954_);
lean_inc(v_declHint_948_);
lean_inc_ref(v___x_957_);
v___x_958_ = l_Lean_Environment_contains(v___x_957_, v_declHint_948_, v_isExporting_955_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; 
lean_dec_ref(v___x_957_);
lean_dec_ref(v_env_953_);
lean_dec(v_declHint_948_);
v___x_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_959_, 0, v_msg_947_);
return v___x_959_;
}
else
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v_c_965_; lean_object* v___x_966_; 
v___x_960_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__2);
v___x_961_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5);
v___x_962_ = l_Lean_Options_empty;
lean_inc_ref(v___x_957_);
v___x_963_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_963_, 0, v___x_957_);
lean_ctor_set(v___x_963_, 1, v___x_960_);
lean_ctor_set(v___x_963_, 2, v___x_961_);
lean_ctor_set(v___x_963_, 3, v___x_962_);
lean_inc(v_declHint_948_);
v___x_964_ = l_Lean_MessageData_ofConstName(v_declHint_948_, v___x_954_);
v_c_965_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_965_, 0, v___x_963_);
lean_ctor_set(v_c_965_, 1, v___x_964_);
v___x_966_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_957_, v_declHint_948_);
lean_dec_ref(v___x_957_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
lean_dec_ref(v_env_953_);
lean_dec(v_declHint_948_);
v___x_967_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7);
v___x_968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
lean_ctor_set(v___x_968_, 1, v_c_965_);
v___x_969_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9);
v___x_970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_968_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = l_Lean_MessageData_note(v___x_970_);
v___x_972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_972_, 0, v_msg_947_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
return v___x_973_;
}
else
{
lean_object* v_val_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_1008_; 
v_val_974_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_976_ = v___x_966_;
v_isShared_977_ = v_isSharedCheck_1008_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_val_974_);
lean_dec(v___x_966_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_1008_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_978_; lean_object* v_moduleNames_979_; lean_object* v_mod_980_; uint8_t v___x_981_; 
v___x_978_ = l_Lean_Environment_header(v_env_953_);
lean_dec_ref(v_env_953_);
v_moduleNames_979_ = lean_ctor_get(v___x_978_, 4);
lean_inc_ref(v_moduleNames_979_);
lean_dec_ref(v___x_978_);
v_mod_980_ = lean_array_get(v___x_951_, v_moduleNames_979_, v_val_974_);
lean_dec(v_val_974_);
lean_dec_ref(v_moduleNames_979_);
v___x_981_ = l_Lean_isPrivateName(v_declHint_948_);
lean_dec(v_declHint_948_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_993_; 
v___x_982_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11);
v___x_983_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_982_);
lean_ctor_set(v___x_983_, 1, v_c_965_);
v___x_984_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13);
v___x_985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_983_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = l_Lean_MessageData_ofName(v_mod_980_);
v___x_987_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_985_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__15);
v___x_989_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_987_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = l_Lean_MessageData_note(v___x_989_);
v___x_991_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_991_, 0, v_msg_947_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
if (v_isShared_977_ == 0)
{
lean_ctor_set_tag(v___x_976_, 0);
lean_ctor_set(v___x_976_, 0, v___x_991_);
v___x_993_ = v___x_976_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_991_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
else
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1006_; 
v___x_995_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7);
v___x_996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
lean_ctor_set(v___x_996_, 1, v_c_965_);
v___x_997_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__17);
v___x_998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_996_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
v___x_999_ = l_Lean_MessageData_ofName(v_mod_980_);
v___x_1000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__19);
v___x_1002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1000_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___x_1003_ = l_Lean_MessageData_note(v___x_1002_);
v___x_1004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1004_, 0, v_msg_947_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
if (v_isShared_977_ == 0)
{
lean_ctor_set_tag(v___x_976_, 0);
lean_ctor_set(v___x_976_, 0, v___x_1004_);
v___x_1006_ = v___x_976_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v___x_1004_);
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
}
else
{
lean_object* v___x_1009_; 
lean_dec_ref(v_env_953_);
lean_dec(v_declHint_948_);
v___x_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1009_, 0, v_msg_947_);
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_msg_1010_, lean_object* v_declHint_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_1010_, v_declHint_1011_, v___y_1012_);
lean_dec(v___y_1012_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_msg_1015_, lean_object* v_declHint_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v___x_1023_; lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1033_; 
v___x_1023_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_1015_, v_declHint_1016_, v___y_1021_);
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1033_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1033_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1031_; 
v___x_1028_ = l_Lean_unknownIdentifierMessageTag;
v___x_1029_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
lean_ctor_set(v___x_1029_, 1, v_a_1024_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v___x_1029_);
v___x_1031_ = v___x_1026_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1029_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_1034_, lean_object* v_declHint_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_msg_1034_, v_declHint_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
lean_dec_ref(v___y_1036_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_ref_1043_, lean_object* v_msg_1044_, lean_object* v_declHint_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v___x_1052_; lean_object* v_a_1053_; lean_object* v___x_1054_; 
v___x_1052_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_msg_1044_, v_declHint_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
v_a_1053_ = lean_ctor_get(v___x_1052_, 0);
lean_inc(v_a_1053_);
lean_dec_ref(v___x_1052_);
v___x_1054_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_1043_, v_a_1053_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_ref_1055_, lean_object* v_msg_1056_, lean_object* v_declHint_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_ref_1055_, v_msg_1056_, v_declHint_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec(v_ref_1055_);
return v_res_1064_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__0));
v___x_1067_ = l_Lean_stringToMessageData(v___x_1066_);
return v___x_1067_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1069_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__2));
v___x_1070_ = l_Lean_stringToMessageData(v___x_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_ref_1071_, lean_object* v_constName_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v___x_1079_; uint8_t v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1079_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_1080_ = 0;
lean_inc(v_constName_1072_);
v___x_1081_ = l_Lean_MessageData_ofConstName(v_constName_1072_, v___x_1080_);
v___x_1082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1079_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3);
v___x_1084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1082_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
v___x_1085_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_ref_1071_, v___x_1084_, v_constName_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_ref_1086_, lean_object* v_constName_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1086_, v_constName_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_);
lean_dec(v___y_1092_);
lean_dec_ref(v___y_1091_);
lean_dec(v___y_1090_);
lean_dec_ref(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v_ref_1086_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_ref_1102_; lean_object* v___x_1103_; 
v_ref_1102_ = lean_ctor_get(v___y_1099_, 2);
v___x_1103_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1102_, v_constName_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1___redArg(v_constName_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec_ref(v___y_1105_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0(lean_object* v_constName_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v___x_1119_; lean_object* v_env_1120_; uint8_t v___x_1121_; lean_object* v___x_1122_; 
v___x_1119_ = lean_st_ref_get(v___y_1117_);
v_env_1120_ = lean_ctor_get(v___x_1119_, 0);
lean_inc_ref(v_env_1120_);
lean_dec(v___x_1119_);
v___x_1121_ = 0;
lean_inc(v_constName_1112_);
v___x_1122_ = l_Lean_Environment_find_x3f(v_env_1120_, v_constName_1112_, v___x_1121_);
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1___redArg(v_constName_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
return v___x_1123_;
}
else
{
lean_object* v_val_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
lean_dec(v_constName_1112_);
v_val_1124_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1122_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_val_1124_);
lean_dec(v___x_1122_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
lean_ctor_set_tag(v___x_1126_, 0);
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_val_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0___boxed(lean_object* v_constName_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0(v_constName_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec_ref(v___y_1133_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0(lean_object* v_declName_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = lean_box(0);
lean_inc(v_declName_1140_);
v___x_1148_ = l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0(v_declName_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1174_; 
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1174_ == 0)
{
lean_object* v_unused_1175_; 
v_unused_1175_ = lean_ctor_get(v___x_1148_, 0);
lean_dec(v_unused_1175_);
v___x_1150_ = v___x_1148_;
v_isShared_1151_ = v_isSharedCheck_1174_;
goto v_resetjp_1149_;
}
else
{
lean_dec(v___x_1148_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1174_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1152_; lean_object* v_env_1153_; lean_object* v___x_1154_; 
v___x_1152_ = lean_st_ref_get(v___y_1145_);
v_env_1153_ = lean_ctor_get(v___x_1152_, 0);
lean_inc_ref(v_env_1153_);
lean_dec(v___x_1152_);
v___x_1154_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1153_, v_declName_1140_);
lean_dec(v_declName_1140_);
lean_dec_ref(v_env_1153_);
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v___x_1155_; lean_object* v___x_1157_; 
v___x_1155_ = lean_box(0);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v___x_1155_);
v___x_1157_ = v___x_1150_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v___x_1155_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
else
{
lean_object* v_val_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1173_; 
v_val_1159_ = lean_ctor_get(v___x_1154_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1161_ = v___x_1154_;
v_isShared_1162_ = v_isSharedCheck_1173_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_val_1159_);
lean_dec(v___x_1154_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1173_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1163_; lean_object* v_env_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1168_; 
v___x_1163_ = lean_st_ref_get(v___y_1145_);
v_env_1164_ = lean_ctor_get(v___x_1163_, 0);
lean_inc_ref(v_env_1164_);
lean_dec(v___x_1163_);
v___x_1165_ = l_Lean_Environment_allImportedModuleNames(v_env_1164_);
lean_dec_ref(v_env_1164_);
v___x_1166_ = lean_array_get(v___x_1147_, v___x_1165_, v_val_1159_);
lean_dec(v_val_1159_);
lean_dec_ref(v___x_1165_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 0, v___x_1166_);
v___x_1168_ = v___x_1161_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
lean_object* v___x_1170_; 
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v___x_1168_);
v___x_1170_ = v___x_1150_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1168_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
}
}
else
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
lean_dec(v_declName_1140_);
v_a_1176_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v___x_1148_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1148_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0___boxed(lean_object* v_declName_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0(v_declName_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec_ref(v___y_1185_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f(lean_object* v_declName_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0(v_declName_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_, v_a_1197_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1254_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1202_ = v___x_1199_;
v_isShared_1203_ = v_isSharedCheck_1254_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1199_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1254_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
if (lean_obj_tag(v_a_1200_) == 0)
{
lean_object* v_doc_1204_; lean_object* v_uri_1205_; lean_object* v_mod_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1210_; 
v_doc_1204_ = lean_ctor_get(v_a_1193_, 0);
v_uri_1205_ = lean_ctor_get(v_doc_1204_, 0);
v_mod_1206_ = lean_ctor_get(v_doc_1204_, 1);
lean_inc_ref(v_uri_1205_);
lean_inc(v_mod_1206_);
v___x_1207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1207_, 0, v_mod_1206_);
lean_ctor_set(v___x_1207_, 1, v_uri_1205_);
v___x_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1208_);
v___x_1210_ = v___x_1202_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1208_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
else
{
lean_object* v_val_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1253_; 
lean_del_object(v___x_1202_);
v_val_1212_ = lean_ctor_get(v_a_1200_, 0);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_a_1200_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1214_ = v_a_1200_;
v_isShared_1215_ = v_isSharedCheck_1253_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_val_1212_);
lean_dec(v_a_1200_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1253_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v_ref_1216_; lean_object* v___x_1217_; 
v_ref_1216_ = lean_ctor_get(v_a_1196_, 2);
lean_inc(v_val_1212_);
v___x_1217_ = l_Lean_Server_documentUriFromModule_x3f(v_val_1212_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1238_; 
lean_del_object(v___x_1214_);
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1238_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1238_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
if (lean_obj_tag(v_a_1218_) == 1)
{
lean_object* v_val_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1233_; 
v_val_1222_ = lean_ctor_get(v_a_1218_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v_a_1218_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1224_ = v_a_1218_;
v_isShared_1225_ = v_isSharedCheck_1233_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_val_1222_);
lean_dec(v_a_1218_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1233_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1226_; lean_object* v___x_1228_; 
v___x_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1226_, 0, v_val_1212_);
lean_ctor_set(v___x_1226_, 1, v_val_1222_);
if (v_isShared_1225_ == 0)
{
lean_ctor_set(v___x_1224_, 0, v___x_1226_);
v___x_1228_ = v___x_1224_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v___x_1226_);
v___x_1228_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
lean_object* v___x_1230_; 
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 0, v___x_1228_);
v___x_1230_ = v___x_1220_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v___x_1228_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
}
else
{
lean_object* v___x_1234_; lean_object* v___x_1236_; 
lean_dec(v_a_1218_);
lean_dec(v_val_1212_);
v___x_1234_ = lean_box(0);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 0, v___x_1234_);
v___x_1236_ = v___x_1220_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v___x_1234_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
}
else
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1252_; 
lean_dec(v_val_1212_);
v_a_1239_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1241_ = v___x_1217_;
v_isShared_1242_ = v_isSharedCheck_1252_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1217_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1252_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1243_; lean_object* v___x_1245_; 
v___x_1243_ = lean_io_error_to_string(v_a_1239_);
if (v_isShared_1215_ == 0)
{
lean_ctor_set_tag(v___x_1214_, 3);
lean_ctor_set(v___x_1214_, 0, v___x_1243_);
v___x_1245_ = v___x_1214_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v___x_1243_);
v___x_1245_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
v___x_1246_ = l_Lean_MessageData_ofFormat(v___x_1245_);
lean_inc(v_ref_1216_);
v___x_1247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1247_, 0, v_ref_1216_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
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
return v___x_1249_;
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
lean_object* v_a_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1262_; 
v_a_1255_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1257_ = v___x_1199_;
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_a_1255_);
lean_dec(v___x_1199_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1260_; 
if (v_isShared_1258_ == 0)
{
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1255_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f___boxed(lean_object* v_declName_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_){
_start:
{
lean_object* v_res_1270_; 
v_res_1270_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f(v_declName_1263_, v_a_1264_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_);
lean_dec(v_a_1268_);
lean_dec_ref(v_a_1267_);
lean_dec(v_a_1266_);
lean_dec_ref(v_a_1265_);
lean_dec_ref(v_a_1264_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1271_, lean_object* v_constName_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_){
_start:
{
lean_object* v___x_1279_; 
v___x_1279_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1___redArg(v_constName_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1280_, lean_object* v_constName_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1(v_00_u03b1_1280_, v_constName_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
lean_dec_ref(v___y_1282_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1289_, lean_object* v_ref_1290_, lean_object* v_constName_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1290_, v_constName_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1299_, lean_object* v_ref_1300_, lean_object* v_constName_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_1299_, v_ref_1300_, v_constName_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v_ref_1300_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b1_1309_, lean_object* v_ref_1310_, lean_object* v_msg_1311_, lean_object* v_declHint_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
lean_object* v___x_1319_; 
v___x_1319_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_ref_1310_, v_msg_1311_, v_declHint_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1320_, lean_object* v_ref_1321_, lean_object* v_msg_1322_, lean_object* v_declHint_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3(v_00_u03b1_1320_, v_ref_1321_, v_msg_1322_, v_declHint_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v_ref_1321_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5(lean_object* v_msg_1331_, lean_object* v_declHint_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_1331_, v_declHint_1332_, v___y_1337_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5___boxed(lean_object* v_msg_1340_, lean_object* v_declHint_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4_spec__5(v_msg_1340_, v_declHint_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec_ref(v___y_1342_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1349_, lean_object* v_ref_1350_, lean_object* v_msg_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_1350_, v_msg_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1359_, lean_object* v_ref_1360_, lean_object* v_msg_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5(v_00_u03b1_1359_, v_ref_1360_, v_msg_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
lean_dec_ref(v___y_1362_);
lean_dec(v_ref_1360_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7(lean_object* v_00_u03b1_1369_, lean_object* v_msg_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7___redArg(v_msg_1370_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1378_, lean_object* v_msg_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5_spec__7(v_00_u03b1_1378_, v_msg_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec_ref(v___y_1380_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0___redArg(lean_object* v_declName_1387_, lean_object* v___y_1388_){
_start:
{
lean_object* v___x_1390_; lean_object* v_env_1391_; uint8_t v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1390_ = lean_st_ref_get(v___y_1388_);
v_env_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc_ref(v_env_1391_);
lean_dec(v___x_1390_);
v___x_1392_ = l_Lean_isRecCore(v_env_1391_, v_declName_1387_);
v___x_1393_ = lean_box(v___x_1392_);
v___x_1394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0___redArg___boxed(lean_object* v_declName_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0___redArg(v_declName_1395_, v___y_1396_);
lean_dec(v___y_1396_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1___redArg(lean_object* v_declName_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v___x_1402_; lean_object* v_env_1403_; lean_object* v___x_1404_; lean_object* v_env_1405_; lean_object* v___x_1406_; lean_object* v_toEnvExtension_1407_; lean_object* v_asyncMode_1408_; uint8_t v___x_1409_; lean_object* v___x_1410_; 
v___x_1402_ = lean_st_ref_get(v___y_1400_);
v_env_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc_ref(v_env_1403_);
lean_dec(v___x_1402_);
v___x_1404_ = lean_st_ref_get(v___y_1400_);
v_env_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc_ref(v_env_1405_);
lean_dec(v___x_1404_);
v___x_1406_ = l_Lean_declRangeExt;
v_toEnvExtension_1407_ = lean_ctor_get(v___x_1406_, 0);
v_asyncMode_1408_ = lean_ctor_get(v_toEnvExtension_1407_, 2);
v___x_1409_ = 0;
lean_inc(v_declName_1399_);
v___x_1410_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1406_, v_env_1403_, v_declName_1399_, v_asyncMode_1408_, v___x_1409_);
if (lean_obj_tag(v___x_1410_) == 0)
{
uint8_t v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1411_ = 1;
v___x_1412_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1406_, v_env_1405_, v_declName_1399_, v_asyncMode_1408_, v___x_1411_);
v___x_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
return v___x_1413_;
}
else
{
lean_object* v___x_1414_; 
lean_dec_ref(v_env_1405_);
lean_dec(v_declName_1399_);
v___x_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1410_);
return v___x_1414_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1___redArg___boxed(lean_object* v_declName_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1___redArg(v_declName_1415_, v___y_1416_);
lean_dec(v___y_1416_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0(lean_object* v_declName_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_){
_start:
{
lean_object* v_ranges_1427_; lean_object* v___x_1433_; lean_object* v_env_1434_; lean_object* v___x_1435_; lean_object* v_a_1436_; uint8_t v___x_1441_; 
v___x_1433_ = lean_st_ref_get(v___y_1424_);
v_env_1434_ = lean_ctor_get(v___x_1433_, 0);
lean_inc_ref_n(v_env_1434_, 2);
lean_dec(v___x_1433_);
lean_inc_n(v_declName_1419_, 2);
v___x_1435_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0___redArg(v_declName_1419_, v___y_1424_);
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_a_1436_);
lean_dec_ref(v___x_1435_);
v___x_1441_ = l_Lean_isAuxRecursor(v_env_1434_, v_declName_1419_);
if (v___x_1441_ == 0)
{
uint8_t v___x_1442_; 
lean_inc(v_declName_1419_);
v___x_1442_ = l_Lean_isNoConfusion(v_env_1434_, v_declName_1419_);
if (v___x_1442_ == 0)
{
uint8_t v___x_1443_; 
v___x_1443_ = lean_unbox(v_a_1436_);
lean_dec(v_a_1436_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1444_; lean_object* v_a_1445_; 
lean_inc(v_declName_1419_);
v___x_1444_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1___redArg(v_declName_1419_, v___y_1424_);
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_a_1445_);
lean_dec_ref(v___x_1444_);
v_ranges_1427_ = v_a_1445_;
goto v___jp_1426_;
}
else
{
goto v___jp_1437_;
}
}
else
{
lean_dec(v_a_1436_);
goto v___jp_1437_;
}
}
else
{
lean_dec(v_a_1436_);
lean_dec_ref(v_env_1434_);
goto v___jp_1437_;
}
v___jp_1426_:
{
if (lean_obj_tag(v_ranges_1427_) == 0)
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1428_ = l_Lean_builtinDeclRanges;
v___x_1429_ = lean_st_ref_get(v___x_1428_);
v___x_1430_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1429_, v_declName_1419_);
lean_dec(v_declName_1419_);
lean_dec(v___x_1429_);
v___x_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
return v___x_1431_;
}
else
{
lean_object* v___x_1432_; 
lean_dec(v_declName_1419_);
v___x_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1432_, 0, v_ranges_1427_);
return v___x_1432_;
}
}
v___jp_1437_:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v_a_1440_; 
v___x_1438_ = l_Lean_Name_getPrefix(v_declName_1419_);
v___x_1439_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1___redArg(v___x_1438_, v___y_1424_);
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref(v___x_1439_);
v_ranges_1427_ = v_a_1440_;
goto v___jp_1426_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0___boxed(lean_object* v_declName_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0(v_declName_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
lean_dec_ref(v___y_1447_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromDecl(lean_object* v_declName_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_){
_start:
{
lean_object* v___x_1463_; lean_object* v_env_1464_; uint8_t v___x_1465_; uint8_t v___x_1466_; 
v___x_1463_ = lean_st_ref_get(v_a_1461_);
v_env_1464_ = lean_ctor_get(v___x_1463_, 0);
lean_inc_ref(v_env_1464_);
lean_dec(v___x_1463_);
v___x_1465_ = 1;
lean_inc(v_declName_1456_);
v___x_1466_ = l_Lean_Environment_contains(v_env_1464_, v_declName_1456_, v___x_1465_);
if (v___x_1466_ == 0)
{
lean_object* v___x_1467_; lean_object* v___x_1468_; 
lean_dec(v_declName_1456_);
v___x_1467_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_1468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1467_);
return v___x_1468_;
}
else
{
uint8_t v___x_1469_; lean_object* v___x_1470_; 
v___x_1469_ = 0;
lean_inc(v_declName_1456_);
v___x_1470_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromDecl_declMod_x3f(v_declName_1456_, v_a_1457_, v_a_1458_, v_a_1459_, v_a_1460_, v_a_1461_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1546_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1473_ = v___x_1470_;
v_isShared_1474_ = v_isSharedCheck_1546_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1470_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1546_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
if (lean_obj_tag(v_a_1471_) == 1)
{
lean_object* v_val_1475_; lean_object* v_fst_1476_; lean_object* v_snd_1477_; lean_object* v___x_1478_; 
lean_del_object(v___x_1473_);
v_val_1475_ = lean_ctor_get(v_a_1471_, 0);
lean_inc(v_val_1475_);
lean_dec_ref_known(v_a_1471_, 1);
v_fst_1476_ = lean_ctor_get(v_val_1475_, 0);
lean_inc(v_fst_1476_);
v_snd_1477_ = lean_ctor_get(v_val_1475_, 1);
lean_inc(v_snd_1477_);
lean_dec(v_val_1475_);
lean_inc(v_declName_1456_);
v___x_1478_ = l_Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0(v_declName_1456_, v_a_1457_, v_a_1458_, v_a_1459_, v_a_1460_, v_a_1461_);
if (lean_obj_tag(v___x_1478_) == 0)
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1533_; 
v_a_1479_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1481_ = v___x_1478_;
v_isShared_1482_ = v_isSharedCheck_1533_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1478_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1533_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
if (lean_obj_tag(v_a_1479_) == 1)
{
lean_object* v_val_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1528_; 
v_val_1483_ = lean_ctor_get(v_a_1479_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v_a_1479_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1485_ = v_a_1479_;
v_isShared_1486_ = v_isSharedCheck_1528_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_val_1483_);
lean_dec(v_a_1479_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1528_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___y_1488_; lean_object* v_originInfo_x3f_1512_; 
v_originInfo_x3f_1512_ = lean_ctor_get(v_a_1457_, 2);
if (lean_obj_tag(v_originInfo_x3f_1512_) == 0)
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_box(0);
v___y_1488_ = v___x_1513_;
goto v___jp_1487_;
}
else
{
lean_object* v_doc_1514_; lean_object* v_val_1515_; lean_object* v___x_1516_; 
v_doc_1514_ = lean_ctor_get(v_a_1457_, 0);
v_val_1515_ = lean_ctor_get(v_originInfo_x3f_1512_, 0);
v___x_1516_ = l_Lean_Elab_Info_range_x3f(v_val_1515_);
if (lean_obj_tag(v___x_1516_) == 0)
{
lean_object* v___x_1517_; 
v___x_1517_ = lean_box(0);
v___y_1488_ = v___x_1517_;
goto v___jp_1487_;
}
else
{
lean_object* v_val_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1527_; 
v_val_1518_ = lean_ctor_get(v___x_1516_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1516_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1520_ = v___x_1516_;
v_isShared_1521_ = v_isSharedCheck_1527_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_val_1518_);
lean_dec(v___x_1516_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1527_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v_text_1522_; lean_object* v___x_1523_; lean_object* v___x_1525_; 
v_text_1522_ = lean_ctor_get(v_doc_1514_, 3);
lean_inc_ref(v_text_1522_);
v___x_1523_ = l_Lean_Syntax_Range_toLspRange(v_text_1522_, v_val_1518_);
if (v_isShared_1521_ == 0)
{
lean_ctor_set(v___x_1520_, 0, v___x_1523_);
v___x_1525_ = v___x_1520_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
v___y_1488_ = v___x_1525_;
goto v___jp_1487_;
}
}
}
}
v___jp_1487_:
{
lean_object* v_range_1489_; lean_object* v_selectionRange_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1511_; 
v_range_1489_ = lean_ctor_get(v_val_1483_, 0);
v_selectionRange_1490_ = lean_ctor_get(v_val_1483_, 1);
v_isSharedCheck_1511_ = !lean_is_exclusive(v_val_1483_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1492_ = v_val_1483_;
v_isShared_1493_ = v_isSharedCheck_1511_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_selectionRange_1490_);
lean_inc(v_range_1489_);
lean_dec(v_val_1483_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1511_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1499_; 
v___x_1494_ = l_Lean_DeclarationRange_toLspRange(v_range_1489_);
v___x_1495_ = l_Lean_DeclarationRange_toLspRange(v_selectionRange_1490_);
v___x_1496_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1496_, 0, v___y_1488_);
lean_ctor_set(v___x_1496_, 1, v_snd_1477_);
lean_ctor_set(v___x_1496_, 2, v___x_1494_);
lean_ctor_set(v___x_1496_, 3, v___x_1495_);
v___x_1497_ = l_Lean_Name_eraseMacroScopes(v_declName_1456_);
lean_dec(v_declName_1456_);
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 1, v___x_1497_);
lean_ctor_set(v___x_1492_, 0, v_fst_1476_);
v___x_1499_ = v___x_1492_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_fst_1476_);
lean_ctor_set(v_reuseFailAlloc_1510_, 1, v___x_1497_);
v___x_1499_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
lean_object* v___x_1501_; 
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 0, v___x_1499_);
v___x_1501_ = v___x_1485_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v___x_1499_);
v___x_1501_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1507_; 
v___x_1502_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1502_, 0, v___x_1496_);
lean_ctor_set(v___x_1502_, 1, v___x_1501_);
lean_ctor_set_uint8(v___x_1502_, sizeof(void*)*2, v___x_1469_);
v___x_1503_ = lean_unsigned_to_nat(1u);
v___x_1504_ = lean_mk_empty_array_with_capacity(v___x_1503_);
v___x_1505_ = lean_array_push(v___x_1504_, v___x_1502_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 0, v___x_1505_);
v___x_1507_ = v___x_1481_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1505_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1529_; lean_object* v___x_1531_; 
lean_dec(v_a_1479_);
lean_dec(v_snd_1477_);
lean_dec(v_fst_1476_);
lean_dec(v_declName_1456_);
v___x_1529_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 0, v___x_1529_);
v___x_1531_ = v___x_1481_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v___x_1529_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
lean_dec(v_snd_1477_);
lean_dec(v_fst_1476_);
lean_dec(v_declName_1456_);
v_a_1534_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1478_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1478_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
else
{
lean_object* v___x_1542_; lean_object* v___x_1544_; 
lean_dec(v_a_1471_);
lean_dec(v_declName_1456_);
v___x_1542_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v___x_1542_);
v___x_1544_ = v___x_1473_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v___x_1542_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
else
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1554_; 
lean_dec(v_declName_1456_);
v_a_1547_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1554_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1549_ = v___x_1470_;
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v___x_1470_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1552_; 
if (v_isShared_1550_ == 0)
{
v___x_1552_ = v___x_1549_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v_a_1547_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromDecl___boxed(lean_object* v_declName_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_){
_start:
{
lean_object* v_res_1562_; 
v_res_1562_ = l_Lean_Server_locationLinksFromDecl(v_declName_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_);
lean_dec(v_a_1560_);
lean_dec_ref(v_a_1559_);
lean_dec(v_a_1558_);
lean_dec_ref(v_a_1557_);
lean_dec_ref(v_a_1556_);
return v_res_1562_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0(lean_object* v_declName_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0___redArg(v_declName_1563_, v___y_1568_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0___boxed(lean_object* v_declName_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__0(v_declName_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_);
lean_dec(v___y_1576_);
lean_dec_ref(v___y_1575_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec_ref(v___y_1572_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1(lean_object* v_declName_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1___redArg(v_declName_1579_, v___y_1584_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1___boxed(lean_object* v_declName_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00Lean_Server_locationLinksFromDecl_spec__0_spec__1(v_declName_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_);
lean_dec(v___y_1592_);
lean_dec_ref(v___y_1591_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
lean_dec_ref(v___y_1588_);
return v_res_1594_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg___lam__0(lean_object* v_id_1595_, lean_object* v_x_1596_){
_start:
{
if (lean_obj_tag(v_x_1596_) == 1)
{
lean_object* v_i_1597_; lean_object* v_expr_1598_; 
v_i_1597_ = lean_ctor_get(v_x_1596_, 0);
v_expr_1598_ = lean_ctor_get(v_i_1597_, 3);
if (lean_obj_tag(v_expr_1598_) == 1)
{
uint8_t v_isBinder_1599_; 
v_isBinder_1599_ = lean_ctor_get_uint8(v_i_1597_, sizeof(void*)*4);
if (v_isBinder_1599_ == 1)
{
lean_object* v_fvarId_1600_; uint8_t v___x_1601_; 
v_fvarId_1600_ = lean_ctor_get(v_expr_1598_, 0);
v___x_1601_ = l_Lean_instBEqFVarId_beq(v_fvarId_1600_, v_id_1595_);
return v___x_1601_;
}
else
{
uint8_t v___x_1602_; 
v___x_1602_ = 0;
return v___x_1602_;
}
}
else
{
uint8_t v___x_1603_; 
v___x_1603_ = 0;
return v___x_1603_;
}
}
else
{
uint8_t v___x_1604_; 
v___x_1604_ = 0;
return v___x_1604_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg___lam__0___boxed(lean_object* v_id_1605_, lean_object* v_x_1606_){
_start:
{
uint8_t v_res_1607_; lean_object* v_r_1608_; 
v_res_1607_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg___lam__0(v_id_1605_, v_x_1606_);
lean_dec_ref(v_x_1606_);
lean_dec(v_id_1605_);
v_r_1608_ = lean_box(v_res_1607_);
return v_r_1608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg(lean_object* v_id_1609_, lean_object* v_a_1610_){
_start:
{
lean_object* v_infoTree_x3f_1612_; 
v_infoTree_x3f_1612_ = lean_ctor_get(v_a_1610_, 1);
if (lean_obj_tag(v_infoTree_x3f_1612_) == 1)
{
lean_object* v_val_1613_; lean_object* v___f_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v_val_1613_ = lean_ctor_get(v_infoTree_x3f_1612_, 0);
v___f_1614_ = lean_alloc_closure((void*)(l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1614_, 0, v_id_1609_);
lean_inc(v_val_1613_);
v___x_1615_ = l_Lean_Elab_InfoTree_findInfo_x3f(v___f_1614_, v_val_1613_);
v___x_1616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1615_);
return v___x_1616_;
}
else
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
lean_dec(v_id_1609_);
v___x_1617_ = lean_box(0);
v___x_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1617_);
return v___x_1618_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg___boxed(lean_object* v_id_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg(v_id_1619_, v_a_1620_);
lean_dec_ref(v_a_1620_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f(lean_object* v_id_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg(v_id_1623_, v_a_1624_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___boxed(lean_object* v_id_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_){
_start:
{
lean_object* v_res_1638_; 
v_res_1638_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f(v_id_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_);
lean_dec(v_a_1636_);
lean_dec_ref(v_a_1635_);
lean_dec(v_a_1634_);
lean_dec_ref(v_a_1633_);
lean_dec_ref(v_a_1632_);
return v_res_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromBinder___redArg(lean_object* v_id_1639_, lean_object* v_a_1640_){
_start:
{
lean_object* v_doc_1642_; lean_object* v_originInfo_x3f_1643_; lean_object* v___x_1644_; lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1688_; 
v_doc_1642_ = lean_ctor_get(v_a_1640_, 0);
v_originInfo_x3f_1643_ = lean_ctor_get(v_a_1640_, 2);
v___x_1644_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromBinder_binderInfo_x3f___redArg(v_id_1639_, v_a_1640_);
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1647_ = v___x_1644_;
v_isShared_1648_ = v_isSharedCheck_1688_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_dec(v___x_1644_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1688_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
if (lean_obj_tag(v_a_1645_) == 1)
{
lean_object* v_val_1649_; lean_object* v___x_1650_; 
v_val_1649_ = lean_ctor_get(v_a_1645_, 0);
lean_inc(v_val_1649_);
lean_dec_ref_known(v_a_1645_, 1);
v___x_1650_ = l_Lean_Elab_Info_range_x3f(v_val_1649_);
lean_dec(v_val_1649_);
if (lean_obj_tag(v___x_1650_) == 1)
{
lean_object* v_val_1651_; lean_object* v_uri_1652_; lean_object* v_text_1653_; lean_object* v___x_1654_; lean_object* v___y_1656_; 
v_val_1651_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_val_1651_);
lean_dec_ref_known(v___x_1650_, 1);
v_uri_1652_ = lean_ctor_get(v_doc_1642_, 0);
v_text_1653_ = lean_ctor_get(v_doc_1642_, 3);
lean_inc_ref(v_text_1653_);
v___x_1654_ = l_Lean_Syntax_Range_toLspRange(v_text_1653_, v_val_1651_);
if (lean_obj_tag(v_originInfo_x3f_1643_) == 0)
{
lean_object* v___x_1667_; 
v___x_1667_ = lean_box(0);
v___y_1656_ = v___x_1667_;
goto v___jp_1655_;
}
else
{
lean_object* v_val_1668_; lean_object* v___x_1669_; 
v_val_1668_ = lean_ctor_get(v_originInfo_x3f_1643_, 0);
v___x_1669_ = l_Lean_Elab_Info_range_x3f(v_val_1668_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v___x_1670_; 
v___x_1670_ = lean_box(0);
v___y_1656_ = v___x_1670_;
goto v___jp_1655_;
}
else
{
lean_object* v_val_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1679_; 
v_val_1671_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1673_ = v___x_1669_;
v_isShared_1674_ = v_isSharedCheck_1679_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_val_1671_);
lean_dec(v___x_1669_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1679_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1675_; lean_object* v___x_1677_; 
lean_inc_ref(v_text_1653_);
v___x_1675_ = l_Lean_Syntax_Range_toLspRange(v_text_1653_, v_val_1671_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 0, v___x_1675_);
v___x_1677_ = v___x_1673_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v___x_1675_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
v___y_1656_ = v___x_1677_;
goto v___jp_1655_;
}
}
}
}
v___jp_1655_:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; uint8_t v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1665_; 
lean_inc_ref(v___x_1654_);
lean_inc_ref(v_uri_1652_);
v___x_1657_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1657_, 0, v___y_1656_);
lean_ctor_set(v___x_1657_, 1, v_uri_1652_);
lean_ctor_set(v___x_1657_, 2, v___x_1654_);
lean_ctor_set(v___x_1657_, 3, v___x_1654_);
v___x_1658_ = lean_box(0);
v___x_1659_ = 0;
v___x_1660_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1660_, 0, v___x_1657_);
lean_ctor_set(v___x_1660_, 1, v___x_1658_);
lean_ctor_set_uint8(v___x_1660_, sizeof(void*)*2, v___x_1659_);
v___x_1661_ = lean_unsigned_to_nat(1u);
v___x_1662_ = lean_mk_empty_array_with_capacity(v___x_1661_);
v___x_1663_ = lean_array_push(v___x_1662_, v___x_1660_);
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 0, v___x_1663_);
v___x_1665_ = v___x_1647_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v___x_1663_);
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
lean_object* v___x_1680_; lean_object* v___x_1682_; 
lean_dec(v___x_1650_);
v___x_1680_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 0, v___x_1680_);
v___x_1682_ = v___x_1647_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v___x_1680_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
else
{
lean_object* v___x_1684_; lean_object* v___x_1686_; 
lean_dec(v_a_1645_);
v___x_1684_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 0, v___x_1684_);
v___x_1686_ = v___x_1647_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1684_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromBinder___redArg___boxed(lean_object* v_id_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lean_Server_locationLinksFromBinder___redArg(v_id_1689_, v_a_1690_);
lean_dec_ref(v_a_1690_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromBinder(lean_object* v_id_1693_, lean_object* v_a_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_){
_start:
{
lean_object* v___x_1700_; 
v___x_1700_ = l_Lean_Server_locationLinksFromBinder___redArg(v_id_1693_, v_a_1694_);
return v___x_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromBinder___boxed(lean_object* v_id_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l_Lean_Server_locationLinksFromBinder(v_id_1701_, v_a_1702_, v_a_1703_, v_a_1704_, v_a_1705_, v_a_1706_);
lean_dec(v_a_1706_);
lean_dec_ref(v_a_1705_);
lean_dec(v_a_1704_);
lean_dec_ref(v_a_1703_);
lean_dec_ref(v_a_1702_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromImport___redArg(lean_object* v_i_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_){
_start:
{
lean_object* v___y_1745_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v_stx_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1853_; 
v_stx_1756_ = lean_ctor_get(v_i_1740_, 1);
v_isSharedCheck_1853_ = !lean_is_exclusive(v_i_1740_);
if (v_isSharedCheck_1853_ == 0)
{
lean_object* v_unused_1854_; 
v_unused_1854_ = lean_ctor_get(v_i_1740_, 0);
lean_dec(v_unused_1854_);
v___x_1758_ = v_i_1740_;
v_isShared_1759_ = v_isSharedCheck_1853_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_stx_1756_);
lean_dec(v_i_1740_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1853_;
goto v_resetjp_1757_;
}
v___jp_1744_:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; uint8_t v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
lean_inc_ref_n(v___y_1746_, 2);
v___x_1748_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1748_, 0, v___y_1747_);
lean_ctor_set(v___x_1748_, 1, v___y_1745_);
lean_ctor_set(v___x_1748_, 2, v___y_1746_);
lean_ctor_set(v___x_1748_, 3, v___y_1746_);
v___x_1749_ = lean_box(0);
v___x_1750_ = 0;
v___x_1751_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1751_, 0, v___x_1748_);
lean_ctor_set(v___x_1751_, 1, v___x_1749_);
lean_ctor_set_uint8(v___x_1751_, sizeof(void*)*2, v___x_1750_);
v___x_1752_ = lean_unsigned_to_nat(1u);
v___x_1753_ = lean_mk_empty_array_with_capacity(v___x_1752_);
v___x_1754_ = lean_array_push(v___x_1753_, v___x_1751_);
v___x_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1754_);
return v___x_1755_;
}
v_resetjp_1757_:
{
lean_object* v___x_1760_; uint8_t v___x_1761_; 
v___x_1760_ = ((lean_object*)(l_Lean_Server_locationLinksFromImport___redArg___closed__4));
lean_inc(v_stx_1756_);
v___x_1761_ = l_Lean_Syntax_isOfKind(v_stx_1756_, v___x_1760_);
if (v___x_1761_ == 0)
{
lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_del_object(v___x_1758_);
lean_dec(v_stx_1756_);
v___x_1762_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
return v___x_1763_;
}
else
{
lean_object* v___x_1764_; lean_object* v___y_1766_; lean_object* v___y_1816_; lean_object* v___y_1817_; lean_object* v___y_1830_; lean_object* v___x_1842_; uint8_t v___x_1843_; 
v___x_1764_ = lean_unsigned_to_nat(0u);
v___x_1842_ = l_Lean_Syntax_getArg(v_stx_1756_, v___x_1764_);
v___x_1843_ = l_Lean_Syntax_isNone(v___x_1842_);
if (v___x_1843_ == 0)
{
lean_object* v___x_1844_; uint8_t v___x_1845_; 
v___x_1844_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1842_);
v___x_1845_ = l_Lean_Syntax_matchesNull(v___x_1842_, v___x_1844_);
if (v___x_1845_ == 0)
{
lean_object* v___x_1846_; lean_object* v___x_1847_; 
lean_dec(v___x_1842_);
lean_del_object(v___x_1758_);
lean_dec(v_stx_1756_);
v___x_1846_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
return v___x_1847_;
}
else
{
lean_object* v___x_1848_; lean_object* v___x_1849_; uint8_t v___x_1850_; 
v___x_1848_ = l_Lean_Syntax_getArg(v___x_1842_, v___x_1764_);
lean_dec(v___x_1842_);
v___x_1849_ = ((lean_object*)(l_Lean_Server_locationLinksFromImport___redArg___closed__12));
v___x_1850_ = l_Lean_Syntax_isOfKind(v___x_1848_, v___x_1849_);
if (v___x_1850_ == 0)
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
lean_del_object(v___x_1758_);
lean_dec(v_stx_1756_);
v___x_1851_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
return v___x_1852_;
}
else
{
v___y_1830_ = v_a_1742_;
goto v___jp_1829_;
}
}
}
else
{
lean_dec(v___x_1842_);
v___y_1830_ = v_a_1742_;
goto v___jp_1829_;
}
v___jp_1765_:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; 
v___x_1767_ = lean_unsigned_to_nat(5u);
v___x_1768_ = l_Lean_Syntax_getArg(v_stx_1756_, v___x_1767_);
v___x_1769_ = l_Lean_Syntax_matchesNull(v___x_1768_, v___x_1764_);
if (v___x_1769_ == 0)
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
lean_del_object(v___x_1758_);
lean_dec(v_stx_1756_);
v___x_1770_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1770_);
return v___x_1771_;
}
else
{
lean_object* v_ref_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v_ref_1772_ = lean_ctor_get(v___y_1766_, 2);
v___x_1773_ = lean_unsigned_to_nat(4u);
v___x_1774_ = l_Lean_Syntax_getArg(v_stx_1756_, v___x_1773_);
lean_dec(v_stx_1756_);
v___x_1775_ = l_Lean_TSyntax_getId(v___x_1774_);
v___x_1776_ = l_Lean_Server_documentUriFromModule_x3f(v___x_1775_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1800_; 
lean_del_object(v___x_1758_);
v_a_1777_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1779_ = v___x_1776_;
v_isShared_1780_ = v_isSharedCheck_1800_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1776_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1800_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
if (lean_obj_tag(v_a_1777_) == 1)
{
lean_object* v_val_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
lean_del_object(v___x_1779_);
v_val_1781_ = lean_ctor_get(v_a_1777_, 0);
lean_inc(v_val_1781_);
lean_dec_ref_known(v_a_1777_, 1);
v___x_1782_ = ((lean_object*)(l_Lean_Server_locationLinksFromImport___redArg___closed__6));
v___x_1783_ = l_Lean_Syntax_getRange_x3f(v___x_1774_, v___x_1769_);
lean_dec(v___x_1774_);
if (lean_obj_tag(v___x_1783_) == 0)
{
lean_object* v___x_1784_; 
v___x_1784_ = lean_box(0);
v___y_1745_ = v_val_1781_;
v___y_1746_ = v___x_1782_;
v___y_1747_ = v___x_1784_;
goto v___jp_1744_;
}
else
{
lean_object* v_doc_1785_; lean_object* v_val_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1795_; 
v_doc_1785_ = lean_ctor_get(v_a_1741_, 0);
v_val_1786_ = lean_ctor_get(v___x_1783_, 0);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___x_1783_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1788_ = v___x_1783_;
v_isShared_1789_ = v_isSharedCheck_1795_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_val_1786_);
lean_dec(v___x_1783_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1795_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v_text_1790_; lean_object* v___x_1791_; lean_object* v___x_1793_; 
v_text_1790_ = lean_ctor_get(v_doc_1785_, 3);
lean_inc_ref(v_text_1790_);
v___x_1791_ = l_Lean_Syntax_Range_toLspRange(v_text_1790_, v_val_1786_);
if (v_isShared_1789_ == 0)
{
lean_ctor_set(v___x_1788_, 0, v___x_1791_);
v___x_1793_ = v___x_1788_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
v___y_1745_ = v_val_1781_;
v___y_1746_ = v___x_1782_;
v___y_1747_ = v___x_1793_;
goto v___jp_1744_;
}
}
}
}
else
{
lean_object* v___x_1796_; lean_object* v___x_1798_; 
lean_dec(v_a_1777_);
lean_dec(v___x_1774_);
v___x_1796_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
if (v_isShared_1780_ == 0)
{
lean_ctor_set(v___x_1779_, 0, v___x_1796_);
v___x_1798_ = v___x_1779_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v___x_1796_);
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
lean_object* v_a_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1814_; 
lean_dec(v___x_1774_);
v_a_1801_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1803_ = v___x_1776_;
v_isShared_1804_ = v_isSharedCheck_1814_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_a_1801_);
lean_dec(v___x_1776_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1814_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1809_; 
v___x_1805_ = lean_io_error_to_string(v_a_1801_);
v___x_1806_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1805_);
v___x_1807_ = l_Lean_MessageData_ofFormat(v___x_1806_);
lean_inc(v_ref_1772_);
if (v_isShared_1759_ == 0)
{
lean_ctor_set(v___x_1758_, 1, v___x_1807_);
lean_ctor_set(v___x_1758_, 0, v_ref_1772_);
v___x_1809_ = v___x_1758_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v_ref_1772_);
lean_ctor_set(v_reuseFailAlloc_1813_, 1, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1811_; 
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 0, v___x_1809_);
v___x_1811_ = v___x_1803_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1809_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
}
}
v___jp_1815_:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; uint8_t v___x_1820_; 
v___x_1818_ = lean_unsigned_to_nat(3u);
v___x_1819_ = l_Lean_Syntax_getArg(v_stx_1756_, v___x_1818_);
v___x_1820_ = l_Lean_Syntax_isNone(v___x_1819_);
if (v___x_1820_ == 0)
{
uint8_t v___x_1821_; 
lean_inc(v___x_1819_);
v___x_1821_ = l_Lean_Syntax_matchesNull(v___x_1819_, v___y_1816_);
if (v___x_1821_ == 0)
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
lean_dec(v___x_1819_);
lean_del_object(v___x_1758_);
lean_dec(v_stx_1756_);
v___x_1822_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1822_);
return v___x_1823_;
}
else
{
lean_object* v___x_1824_; lean_object* v___x_1825_; uint8_t v___x_1826_; 
v___x_1824_ = l_Lean_Syntax_getArg(v___x_1819_, v___x_1764_);
lean_dec(v___x_1819_);
v___x_1825_ = ((lean_object*)(l_Lean_Server_locationLinksFromImport___redArg___closed__8));
v___x_1826_ = l_Lean_Syntax_isOfKind(v___x_1824_, v___x_1825_);
if (v___x_1826_ == 0)
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
lean_del_object(v___x_1758_);
lean_dec(v_stx_1756_);
v___x_1827_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_1828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
return v___x_1828_;
}
else
{
v___y_1766_ = v___y_1817_;
goto v___jp_1765_;
}
}
}
else
{
lean_dec(v___x_1819_);
v___y_1766_ = v___y_1817_;
goto v___jp_1765_;
}
}
v___jp_1829_:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; uint8_t v___x_1833_; 
v___x_1831_ = lean_unsigned_to_nat(1u);
v___x_1832_ = l_Lean_Syntax_getArg(v_stx_1756_, v___x_1831_);
v___x_1833_ = l_Lean_Syntax_isNone(v___x_1832_);
if (v___x_1833_ == 0)
{
uint8_t v___x_1834_; 
lean_inc(v___x_1832_);
v___x_1834_ = l_Lean_Syntax_matchesNull(v___x_1832_, v___x_1831_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; lean_object* v___x_1836_; 
lean_dec(v___x_1832_);
lean_del_object(v___x_1758_);
lean_dec(v_stx_1756_);
v___x_1835_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_1836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
return v___x_1836_;
}
else
{
lean_object* v___x_1837_; lean_object* v___x_1838_; uint8_t v___x_1839_; 
v___x_1837_ = l_Lean_Syntax_getArg(v___x_1832_, v___x_1764_);
lean_dec(v___x_1832_);
v___x_1838_ = ((lean_object*)(l_Lean_Server_locationLinksFromImport___redArg___closed__10));
v___x_1839_ = l_Lean_Syntax_isOfKind(v___x_1837_, v___x_1838_);
if (v___x_1839_ == 0)
{
lean_object* v___x_1840_; lean_object* v___x_1841_; 
lean_del_object(v___x_1758_);
lean_dec(v_stx_1756_);
v___x_1840_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_1841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1840_);
return v___x_1841_;
}
else
{
v___y_1816_ = v___x_1831_;
v___y_1817_ = v___y_1830_;
goto v___jp_1815_;
}
}
}
else
{
lean_dec(v___x_1832_);
v___y_1816_ = v___x_1831_;
v___y_1817_ = v___y_1830_;
goto v___jp_1815_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromImport___redArg___boxed(lean_object* v_i_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_Lean_Server_locationLinksFromImport___redArg(v_i_1855_, v_a_1856_, v_a_1857_);
lean_dec_ref(v_a_1857_);
lean_dec_ref(v_a_1856_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromImport(lean_object* v_i_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_){
_start:
{
lean_object* v___x_1867_; 
v___x_1867_ = l_Lean_Server_locationLinksFromImport___redArg(v_i_1860_, v_a_1861_, v_a_1864_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromImport___boxed(lean_object* v_i_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l_Lean_Server_locationLinksFromImport(v_i_1868_, v_a_1869_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_);
lean_dec(v_a_1873_);
lean_dec_ref(v_a_1872_);
lean_dec(v_a_1871_);
lean_dec_ref(v_a_1870_);
lean_dec_ref(v_a_1869_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg(lean_object* v_a_1895_, lean_object* v_a_1896_){
_start:
{
lean_object* v___x_1901_; lean_object* v_originInfo_x3f_1902_; 
v___x_1901_ = lean_st_ref_get(v_a_1896_);
v_originInfo_x3f_1902_ = lean_ctor_get(v_a_1895_, 2);
if (lean_obj_tag(v_originInfo_x3f_1902_) == 1)
{
uint8_t v_kind_1903_; lean_object* v_val_1904_; lean_object* v___x_1905_; 
v_kind_1903_ = lean_ctor_get_uint8(v_a_1895_, sizeof(void*)*4);
v_val_1904_ = lean_ctor_get(v_originInfo_x3f_1902_, 0);
lean_inc(v_val_1904_);
v___x_1905_ = l_Lean_Elab_Info_toElabInfo_x3f(v_val_1904_);
if (lean_obj_tag(v___x_1905_) == 1)
{
lean_object* v_val_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1939_; 
v_val_1906_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1908_ = v___x_1905_;
v_isShared_1909_ = v_isSharedCheck_1939_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_val_1906_);
lean_dec(v___x_1905_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1939_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v_elaborator_1910_; lean_object* v_stx_1911_; lean_object* v___x_1912_; uint8_t v___x_1913_; 
v_elaborator_1910_ = lean_ctor_get(v_val_1906_, 0);
lean_inc(v_elaborator_1910_);
v_stx_1911_ = lean_ctor_get(v_val_1906_, 1);
lean_inc(v_stx_1911_);
lean_dec(v_val_1906_);
v___x_1912_ = ((lean_object*)(l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__2));
v___x_1913_ = lean_name_eq(v_elaborator_1910_, v___x_1912_);
if (v___x_1913_ == 0)
{
lean_object* v___x_1914_; uint8_t v___x_1915_; 
v___x_1914_ = ((lean_object*)(l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__6));
v___x_1915_ = lean_name_eq(v_elaborator_1910_, v___x_1914_);
if (v___x_1915_ == 0)
{
lean_object* v___x_1916_; uint8_t v___x_1917_; 
v___x_1916_ = ((lean_object*)(l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__8));
v___x_1917_ = lean_name_eq(v_elaborator_1910_, v___x_1916_);
if (v___x_1917_ == 0)
{
lean_object* v_env_1918_; lean_object* v_names_1920_; lean_object* v___x_1935_; uint8_t v___x_1936_; uint8_t v___x_1937_; 
v_env_1918_ = lean_ctor_get(v___x_1901_, 0);
lean_inc_ref_n(v_env_1918_, 2);
lean_dec(v___x_1901_);
v___x_1935_ = ((lean_object*)(l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__0));
v___x_1936_ = 1;
lean_inc(v_elaborator_1910_);
v___x_1937_ = l_Lean_Environment_contains(v_env_1918_, v_elaborator_1910_, v___x_1936_);
if (v___x_1937_ == 0)
{
lean_dec(v_elaborator_1910_);
v_names_1920_ = v___x_1935_;
goto v___jp_1919_;
}
else
{
lean_object* v___x_1938_; 
v___x_1938_ = lean_array_push(v___x_1935_, v_elaborator_1910_);
v_names_1920_ = v___x_1938_;
goto v___jp_1919_;
}
v___jp_1919_:
{
uint8_t v___x_1921_; uint8_t v___x_1922_; 
v___x_1921_ = 0;
v___x_1922_ = l_Lean_Server_instBEqGoToKind_beq(v_kind_1903_, v___x_1921_);
if (v___x_1922_ == 0)
{
lean_object* v___x_1924_; 
lean_dec_ref(v_env_1918_);
lean_dec(v_stx_1911_);
if (v_isShared_1909_ == 0)
{
lean_ctor_set_tag(v___x_1908_, 0);
lean_ctor_set(v___x_1908_, 0, v_names_1920_);
v___x_1924_ = v___x_1908_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_names_1920_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
else
{
lean_object* v___x_1926_; uint8_t v___x_1927_; 
v___x_1926_ = l_Lean_Syntax_getKind(v_stx_1911_);
lean_inc(v___x_1926_);
v___x_1927_ = l_Lean_Environment_contains(v_env_1918_, v___x_1926_, v___x_1922_);
if (v___x_1927_ == 0)
{
lean_object* v___x_1929_; 
lean_dec(v___x_1926_);
if (v_isShared_1909_ == 0)
{
lean_ctor_set_tag(v___x_1908_, 0);
lean_ctor_set(v___x_1908_, 0, v_names_1920_);
v___x_1929_ = v___x_1908_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_names_1920_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
else
{
lean_object* v___x_1931_; lean_object* v___x_1933_; 
v___x_1931_ = lean_array_push(v_names_1920_, v___x_1926_);
if (v_isShared_1909_ == 0)
{
lean_ctor_set_tag(v___x_1908_, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1931_);
v___x_1933_ = v___x_1908_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1931_);
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
}
else
{
lean_dec(v_stx_1911_);
lean_dec(v_elaborator_1910_);
lean_del_object(v___x_1908_);
lean_dec(v___x_1901_);
goto v___jp_1898_;
}
}
else
{
lean_dec(v_stx_1911_);
lean_dec(v_elaborator_1910_);
lean_del_object(v___x_1908_);
lean_dec(v___x_1901_);
goto v___jp_1898_;
}
}
else
{
lean_dec(v_stx_1911_);
lean_dec(v_elaborator_1910_);
lean_del_object(v___x_1908_);
lean_dec(v___x_1901_);
goto v___jp_1898_;
}
}
}
else
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
lean_dec(v___x_1905_);
lean_dec(v___x_1901_);
v___x_1940_ = ((lean_object*)(l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__0));
v___x_1941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1940_);
return v___x_1941_;
}
}
else
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
lean_dec(v___x_1901_);
v___x_1942_ = ((lean_object*)(l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__0));
v___x_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
return v___x_1943_;
}
v___jp_1898_:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1899_ = ((lean_object*)(l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__0));
v___x_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1899_);
return v___x_1900_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___boxed(lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg(v_a_1944_, v_a_1945_);
lean_dec(v_a_1945_);
lean_dec_ref(v_a_1944_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames(lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_){
_start:
{
lean_object* v___x_1954_; 
v___x_1954_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg(v_a_1948_, v_a_1952_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___boxed(lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames(v_a_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_);
lean_dec(v_a_1959_);
lean_dec_ref(v_a_1958_);
lean_dec(v_a_1957_);
lean_dec_ref(v_a_1956_);
lean_dec_ref(v_a_1955_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksDefault_spec__0(lean_object* v_as_1962_, size_t v_sz_1963_, size_t v_i_1964_, lean_object* v_b_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
uint8_t v___x_1972_; 
v___x_1972_ = lean_usize_dec_lt(v_i_1964_, v_sz_1963_);
if (v___x_1972_ == 0)
{
lean_object* v___x_1973_; 
v___x_1973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1973_, 0, v_b_1965_);
return v___x_1973_;
}
else
{
lean_object* v_a_1974_; lean_object* v___x_1975_; 
v_a_1974_ = lean_array_uget_borrowed(v_as_1962_, v_i_1964_);
lean_inc(v_a_1974_);
v___x_1975_ = l_Lean_Server_locationLinksFromDecl(v_a_1974_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; lean_object* v___x_1977_; size_t v___x_1978_; size_t v___x_1979_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
lean_inc(v_a_1976_);
lean_dec_ref_known(v___x_1975_, 1);
v___x_1977_ = l_Array_append___redArg(v_b_1965_, v_a_1976_);
lean_dec(v_a_1976_);
v___x_1978_ = ((size_t)1ULL);
v___x_1979_ = lean_usize_add(v_i_1964_, v___x_1978_);
v_i_1964_ = v___x_1979_;
v_b_1965_ = v___x_1977_;
goto _start;
}
else
{
lean_dec_ref(v_b_1965_);
return v___x_1975_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksDefault_spec__0___boxed(lean_object* v_as_1981_, lean_object* v_sz_1982_, lean_object* v_i_1983_, lean_object* v_b_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_){
_start:
{
size_t v_sz_boxed_1991_; size_t v_i_boxed_1992_; lean_object* v_res_1993_; 
v_sz_boxed_1991_ = lean_unbox_usize(v_sz_1982_);
lean_dec(v_sz_1982_);
v_i_boxed_1992_ = lean_unbox_usize(v_i_1983_);
lean_dec(v_i_1983_);
v_res_1993_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksDefault_spec__0(v_as_1981_, v_sz_boxed_1991_, v_i_boxed_1992_, v_b_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_);
lean_dec(v___y_1989_);
lean_dec_ref(v___y_1988_);
lean_dec(v___y_1987_);
lean_dec_ref(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec_ref(v_as_1981_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_locationLinksDefault_spec__1(size_t v_sz_1994_, size_t v_i_1995_, lean_object* v_bs_1996_){
_start:
{
uint8_t v___x_1997_; 
v___x_1997_ = lean_usize_dec_lt(v_i_1995_, v_sz_1994_);
if (v___x_1997_ == 0)
{
return v_bs_1996_;
}
else
{
lean_object* v_v_1998_; lean_object* v_toLocationLink_1999_; lean_object* v_ident_x3f_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2013_; 
v_v_1998_ = lean_array_uget(v_bs_1996_, v_i_1995_);
v_toLocationLink_1999_ = lean_ctor_get(v_v_1998_, 0);
v_ident_x3f_2000_ = lean_ctor_get(v_v_1998_, 1);
v_isSharedCheck_2013_ = !lean_is_exclusive(v_v_1998_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2002_ = v_v_1998_;
v_isShared_2003_ = v_isSharedCheck_2013_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_ident_x3f_2000_);
lean_inc(v_toLocationLink_1999_);
lean_dec(v_v_1998_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2013_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2004_; lean_object* v_bs_x27_2005_; lean_object* v___x_2007_; 
v___x_2004_ = lean_unsigned_to_nat(0u);
v_bs_x27_2005_ = lean_array_uset(v_bs_1996_, v_i_1995_, v___x_2004_);
if (v_isShared_2003_ == 0)
{
v___x_2007_ = v___x_2002_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_toLocationLink_1999_);
lean_ctor_set(v_reuseFailAlloc_2012_, 1, v_ident_x3f_2000_);
v___x_2007_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
size_t v___x_2008_; size_t v___x_2009_; lean_object* v___x_2010_; 
lean_ctor_set_uint8(v___x_2007_, sizeof(void*)*2, v___x_1997_);
v___x_2008_ = ((size_t)1ULL);
v___x_2009_ = lean_usize_add(v_i_1995_, v___x_2008_);
v___x_2010_ = lean_array_uset(v_bs_x27_2005_, v_i_1995_, v___x_2007_);
v_i_1995_ = v___x_2009_;
v_bs_1996_ = v___x_2010_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_locationLinksDefault_spec__1___boxed(lean_object* v_sz_2014_, lean_object* v_i_2015_, lean_object* v_bs_2016_){
_start:
{
size_t v_sz_boxed_2017_; size_t v_i_boxed_2018_; lean_object* v_res_2019_; 
v_sz_boxed_2017_ = lean_unbox_usize(v_sz_2014_);
lean_dec(v_sz_2014_);
v_i_boxed_2018_ = lean_unbox_usize(v_i_2015_);
lean_dec(v_i_2015_);
v_res_2019_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_locationLinksDefault_spec__1(v_sz_boxed_2017_, v_i_boxed_2018_, v_bs_2016_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksDefault(lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_){
_start:
{
lean_object* v___x_2026_; lean_object* v_a_2027_; lean_object* v___x_2028_; size_t v_sz_2029_; size_t v___x_2030_; lean_object* v___x_2031_; 
v___x_2026_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg(v_a_2020_, v_a_2024_);
v_a_2027_ = lean_ctor_get(v___x_2026_, 0);
lean_inc(v_a_2027_);
lean_dec_ref(v___x_2026_);
v___x_2028_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v_sz_2029_ = lean_array_size(v_a_2027_);
v___x_2030_ = ((size_t)0ULL);
v___x_2031_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksDefault_spec__0(v_a_2027_, v_sz_2029_, v___x_2030_, v___x_2028_, v_a_2020_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_);
lean_dec(v_a_2027_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2041_; 
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2034_ = v___x_2031_;
v_isShared_2035_ = v_isSharedCheck_2041_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v___x_2031_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2041_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
size_t v_sz_2036_; lean_object* v___x_2037_; lean_object* v___x_2039_; 
v_sz_2036_ = lean_array_size(v_a_2032_);
v___x_2037_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_locationLinksDefault_spec__1(v_sz_2036_, v___x_2030_, v_a_2032_);
if (v_isShared_2035_ == 0)
{
lean_ctor_set(v___x_2034_, 0, v___x_2037_);
v___x_2039_ = v___x_2034_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v___x_2037_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
else
{
return v___x_2031_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksDefault___boxed(lean_object* v_a_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_){
_start:
{
lean_object* v_res_2048_; 
v_res_2048_ = l_Lean_Server_locationLinksDefault(v_a_2042_, v_a_2043_, v_a_2044_, v_a_2045_, v_a_2046_);
lean_dec(v_a_2046_);
lean_dec_ref(v_a_2045_);
lean_dec(v_a_2044_);
lean_dec_ref(v_a_2043_);
lean_dec_ref(v_a_2042_);
return v_res_2048_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0___redArg(lean_object* v_name_2049_, lean_object* v___y_2050_){
_start:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v_env_2054_; lean_object* v___x_2055_; lean_object* v_toEnvExtension_2056_; lean_object* v_asyncMode_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; 
v___x_2052_ = lean_box(1);
v___x_2053_ = lean_st_ref_get(v___y_2050_);
v_env_2054_ = lean_ctor_get(v___x_2053_, 0);
lean_inc_ref(v_env_2054_);
lean_dec(v___x_2053_);
v___x_2055_ = l_Lean_errorExplanationExt;
v_toEnvExtension_2056_ = lean_ctor_get(v___x_2055_, 0);
v_asyncMode_2057_ = lean_ctor_get(v_toEnvExtension_2056_, 2);
v___x_2058_ = lean_box(0);
v___x_2059_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2052_, v___x_2055_, v_env_2054_, v_asyncMode_2057_, v___x_2058_);
v___x_2060_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_2059_, v_name_2049_);
lean_dec(v___x_2059_);
v___x_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2060_);
return v___x_2061_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0___redArg___boxed(lean_object* v_name_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_){
_start:
{
lean_object* v_res_2065_; 
v_res_2065_ = l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0___redArg(v_name_2062_, v___y_2063_);
lean_dec(v___y_2063_);
lean_dec(v_name_2062_);
return v_res_2065_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0(lean_object* v_name_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v___x_2073_; 
v___x_2073_ = l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0___redArg(v_name_2066_, v___y_2071_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0___boxed(lean_object* v_name_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_){
_start:
{
lean_object* v_res_2081_; 
v_res_2081_ = l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0(v_name_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
lean_dec(v___y_2077_);
lean_dec_ref(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec(v_name_2074_);
return v_res_2081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromErrorNameInfo(lean_object* v_eni_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_){
_start:
{
lean_object* v_stx_2089_; lean_object* v_errorName_2090_; lean_object* v___x_2091_; lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2172_; 
v_stx_2089_ = lean_ctor_get(v_eni_2082_, 0);
v_errorName_2090_ = lean_ctor_get(v_eni_2082_, 1);
v___x_2091_ = l_Lean_getErrorExplanation_x3f___at___00Lean_Server_locationLinksFromErrorNameInfo_spec__0___redArg(v_errorName_2090_, v_a_2087_);
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2172_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2172_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
if (lean_obj_tag(v_a_2092_) == 1)
{
lean_object* v_val_2096_; lean_object* v_declLoc_x3f_2097_; 
v_val_2096_ = lean_ctor_get(v_a_2092_, 0);
lean_inc(v_val_2096_);
lean_dec_ref_known(v_a_2092_, 1);
v_declLoc_x3f_2097_ = lean_ctor_get(v_val_2096_, 2);
lean_inc(v_declLoc_x3f_2097_);
lean_dec(v_val_2096_);
if (lean_obj_tag(v_declLoc_x3f_2097_) == 1)
{
lean_object* v_val_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2163_; 
lean_del_object(v___x_2094_);
v_val_2098_ = lean_ctor_get(v_declLoc_x3f_2097_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v_declLoc_x3f_2097_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2100_ = v_declLoc_x3f_2097_;
v_isShared_2101_ = v_isSharedCheck_2163_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_val_2098_);
lean_dec(v_declLoc_x3f_2097_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2163_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v_module_2102_; lean_object* v_range_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2162_; 
v_module_2102_ = lean_ctor_get(v_val_2098_, 0);
v_range_2103_ = lean_ctor_get(v_val_2098_, 1);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_val_2098_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2105_ = v_val_2098_;
v_isShared_2106_ = v_isSharedCheck_2162_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_range_2103_);
lean_inc(v_module_2102_);
lean_dec(v_val_2098_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2162_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v_ref_2107_; lean_object* v___x_2108_; 
v_ref_2107_ = lean_ctor_get(v_a_2086_, 2);
v___x_2108_ = l_Lean_Server_documentUriFromModule_x3f(v_module_2102_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2145_; 
lean_del_object(v___x_2105_);
lean_del_object(v___x_2100_);
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2111_ = v___x_2108_;
v_isShared_2112_ = v_isSharedCheck_2145_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2108_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2145_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
if (lean_obj_tag(v_a_2109_) == 1)
{
lean_object* v_val_2113_; lean_object* v___x_2114_; lean_object* v___y_2116_; uint8_t v___x_2127_; lean_object* v___x_2128_; 
v_val_2113_ = lean_ctor_get(v_a_2109_, 0);
lean_inc(v_val_2113_);
lean_dec_ref_known(v_a_2109_, 1);
v___x_2114_ = l_Lean_DeclarationRange_toLspRange(v_range_2103_);
v___x_2127_ = 1;
v___x_2128_ = l_Lean_Syntax_getRange_x3f(v_stx_2089_, v___x_2127_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v___x_2129_; 
v___x_2129_ = lean_box(0);
v___y_2116_ = v___x_2129_;
goto v___jp_2115_;
}
else
{
lean_object* v_doc_2130_; lean_object* v_val_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2140_; 
v_doc_2130_ = lean_ctor_get(v_a_2083_, 0);
v_val_2131_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_2133_ = v___x_2128_;
v_isShared_2134_ = v_isSharedCheck_2140_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_val_2131_);
lean_dec(v___x_2128_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2140_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v_text_2135_; lean_object* v___x_2136_; lean_object* v___x_2138_; 
v_text_2135_ = lean_ctor_get(v_doc_2130_, 3);
lean_inc_ref(v_text_2135_);
v___x_2136_ = l_Lean_Syntax_Range_toLspRange(v_text_2135_, v_val_2131_);
if (v_isShared_2134_ == 0)
{
lean_ctor_set(v___x_2133_, 0, v___x_2136_);
v___x_2138_ = v___x_2133_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v___x_2136_);
v___x_2138_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
v___y_2116_ = v___x_2138_;
goto v___jp_2115_;
}
}
}
v___jp_2115_:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; uint8_t v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2125_; 
lean_inc_ref(v___x_2114_);
v___x_2117_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2117_, 0, v___y_2116_);
lean_ctor_set(v___x_2117_, 1, v_val_2113_);
lean_ctor_set(v___x_2117_, 2, v___x_2114_);
lean_ctor_set(v___x_2117_, 3, v___x_2114_);
v___x_2118_ = lean_box(0);
v___x_2119_ = 0;
v___x_2120_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2120_, 0, v___x_2117_);
lean_ctor_set(v___x_2120_, 1, v___x_2118_);
lean_ctor_set_uint8(v___x_2120_, sizeof(void*)*2, v___x_2119_);
v___x_2121_ = lean_unsigned_to_nat(1u);
v___x_2122_ = lean_mk_empty_array_with_capacity(v___x_2121_);
v___x_2123_ = lean_array_push(v___x_2122_, v___x_2120_);
if (v_isShared_2112_ == 0)
{
lean_ctor_set(v___x_2111_, 0, v___x_2123_);
v___x_2125_ = v___x_2111_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2123_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
else
{
lean_object* v___x_2141_; lean_object* v___x_2143_; 
lean_dec(v_a_2109_);
lean_dec_ref(v_range_2103_);
v___x_2141_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
if (v_isShared_2112_ == 0)
{
lean_ctor_set(v___x_2111_, 0, v___x_2141_);
v___x_2143_ = v___x_2111_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v___x_2141_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
}
}
else
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2161_; 
lean_dec_ref(v_range_2103_);
v_a_2146_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2148_ = v___x_2108_;
v_isShared_2149_ = v_isSharedCheck_2161_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2108_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2161_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2150_; lean_object* v___x_2152_; 
v___x_2150_ = lean_io_error_to_string(v_a_2146_);
if (v_isShared_2101_ == 0)
{
lean_ctor_set_tag(v___x_2100_, 3);
lean_ctor_set(v___x_2100_, 0, v___x_2150_);
v___x_2152_ = v___x_2100_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v___x_2150_);
v___x_2152_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
lean_object* v___x_2153_; lean_object* v___x_2155_; 
v___x_2153_ = l_Lean_MessageData_ofFormat(v___x_2152_);
lean_inc(v_ref_2107_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 1, v___x_2153_);
lean_ctor_set(v___x_2105_, 0, v_ref_2107_);
v___x_2155_ = v___x_2105_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_ref_2107_);
lean_ctor_set(v_reuseFailAlloc_2159_, 1, v___x_2153_);
v___x_2155_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
lean_object* v___x_2157_; 
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 0, v___x_2155_);
v___x_2157_ = v___x_2148_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2155_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
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
lean_object* v___x_2164_; lean_object* v___x_2166_; 
lean_dec(v_declLoc_x3f_2097_);
v___x_2164_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v___x_2164_);
v___x_2166_ = v___x_2094_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2164_);
v___x_2166_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
return v___x_2166_;
}
}
}
else
{
lean_object* v___x_2168_; lean_object* v___x_2170_; 
lean_dec(v_a_2092_);
v___x_2168_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v___x_2168_);
v___x_2170_ = v___x_2094_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v___x_2168_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromErrorNameInfo___boxed(lean_object* v_eni_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_){
_start:
{
lean_object* v_res_2180_; 
v_res_2180_ = l_Lean_Server_locationLinksFromErrorNameInfo(v_eni_2173_, v_a_2174_, v_a_2175_, v_a_2176_, v_a_2177_, v_a_2178_);
lean_dec(v_a_2178_);
lean_dec_ref(v_a_2177_);
lean_dec(v_a_2176_);
lean_dec_ref(v_a_2175_);
lean_dec_ref(v_a_2174_);
lean_dec_ref(v_eni_2173_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances___redArg(lean_object* v_e_2181_, lean_object* v_a_2182_){
_start:
{
switch(lean_obj_tag(v_e_2181_))
{
case 4:
{
lean_object* v_declName_2184_; lean_object* v___x_2185_; 
v_declName_2184_ = lean_ctor_get(v_e_2181_, 0);
lean_inc(v_declName_2184_);
lean_dec_ref_known(v_e_2181_, 2);
v___x_2185_ = l_Lean_Meta_isInstance___redArg(v_declName_2184_, v_a_2182_);
if (lean_obj_tag(v___x_2185_) == 0)
{
lean_object* v_a_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2201_; 
v_a_2186_ = lean_ctor_get(v___x_2185_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2185_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2188_ = v___x_2185_;
v_isShared_2189_ = v_isSharedCheck_2201_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_a_2186_);
lean_dec(v___x_2185_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2201_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
uint8_t v___x_2190_; 
v___x_2190_ = lean_unbox(v_a_2186_);
lean_dec(v_a_2186_);
if (v___x_2190_ == 0)
{
lean_object* v___x_2191_; lean_object* v___x_2193_; 
lean_dec(v_declName_2184_);
v___x_2191_ = ((lean_object*)(l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__0));
if (v_isShared_2189_ == 0)
{
lean_ctor_set(v___x_2188_, 0, v___x_2191_);
v___x_2193_ = v___x_2188_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v___x_2191_);
v___x_2193_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
return v___x_2193_;
}
}
else
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2199_; 
v___x_2195_ = lean_unsigned_to_nat(1u);
v___x_2196_ = lean_mk_empty_array_with_capacity(v___x_2195_);
v___x_2197_ = lean_array_push(v___x_2196_, v_declName_2184_);
if (v_isShared_2189_ == 0)
{
lean_ctor_set(v___x_2188_, 0, v___x_2197_);
v___x_2199_ = v___x_2188_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v___x_2197_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
}
else
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2209_; 
lean_dec(v_declName_2184_);
v_a_2202_ = lean_ctor_get(v___x_2185_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2185_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2204_ = v___x_2185_;
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2185_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
case 5:
{
lean_object* v_fn_2210_; lean_object* v_arg_2211_; lean_object* v___x_2212_; 
v_fn_2210_ = lean_ctor_get(v_e_2181_, 0);
lean_inc_ref(v_fn_2210_);
v_arg_2211_ = lean_ctor_get(v_e_2181_, 1);
lean_inc_ref(v_arg_2211_);
lean_dec_ref_known(v_e_2181_, 2);
v___x_2212_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances___redArg(v_fn_2210_, v_a_2182_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v_a_2213_; lean_object* v___x_2214_; 
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_a_2213_);
lean_dec_ref_known(v___x_2212_, 1);
v___x_2214_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances___redArg(v_arg_2211_, v_a_2182_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2223_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2217_ = v___x_2214_;
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2214_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2219_; lean_object* v___x_2221_; 
v___x_2219_ = l_Array_append___redArg(v_a_2215_, v_a_2213_);
lean_dec(v_a_2213_);
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 0, v___x_2219_);
v___x_2221_ = v___x_2217_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2219_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
else
{
lean_dec(v_a_2213_);
return v___x_2214_;
}
}
else
{
lean_dec_ref(v_arg_2211_);
return v___x_2212_;
}
}
case 10:
{
lean_object* v_expr_2224_; 
v_expr_2224_ = lean_ctor_get(v_e_2181_, 1);
lean_inc_ref(v_expr_2224_);
lean_dec_ref_known(v_e_2181_, 2);
v_e_2181_ = v_expr_2224_;
goto _start;
}
default: 
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
lean_dec_ref(v_e_2181_);
v___x_2226_ = ((lean_object*)(l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksDefault_defaultDeclNames___redArg___closed__0));
v___x_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
return v___x_2227_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances___redArg___boxed(lean_object* v_e_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_){
_start:
{
lean_object* v_res_2231_; 
v_res_2231_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances___redArg(v_e_2228_, v_a_2229_);
lean_dec(v_a_2229_);
return v_res_2231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances(lean_object* v_e_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_){
_start:
{
lean_object* v___x_2239_; 
v___x_2239_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances___redArg(v_e_2232_, v_a_2237_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances___boxed(lean_object* v_e_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances(v_e_2240_, v_a_2241_, v_a_2242_, v_a_2243_, v_a_2244_, v_a_2245_);
lean_dec(v_a_2245_);
lean_dec_ref(v_a_2244_);
lean_dec(v_a_2243_);
lean_dec_ref(v_a_2242_);
lean_dec_ref(v_a_2241_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromInstanceProjection(lean_object* v_e_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = l_Lean_Expr_getAppFn(v_e_2248_);
v___x_2256_ = l_Lean_Expr_consumeMData(v___x_2255_);
lean_dec_ref(v___x_2255_);
if (lean_obj_tag(v___x_2256_) == 4)
{
lean_object* v_declName_2257_; lean_object* v___x_2258_; 
v_declName_2257_ = lean_ctor_get(v___x_2256_, 0);
lean_inc(v_declName_2257_);
lean_dec_ref_known(v___x_2256_, 2);
v___x_2258_ = l_Lean_Server_getInstanceProjectionArg_x3f(v_e_2248_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2293_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2261_ = v___x_2258_;
v_isShared_2262_ = v_isSharedCheck_2293_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2258_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2293_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
if (lean_obj_tag(v_a_2259_) == 1)
{
lean_object* v_val_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
lean_del_object(v___x_2261_);
v_val_2263_ = lean_ctor_get(v_a_2259_, 0);
lean_inc(v_val_2263_);
lean_dec_ref_known(v_a_2259_, 1);
v___x_2264_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_2265_ = l___private_Lean_Server_GoTo_0__Lean_Server_locationLinksFromInstanceProjection_extractInstances___redArg(v_val_2263_, v_a_2253_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v_a_2266_; size_t v_sz_2267_; size_t v___x_2268_; lean_object* v___x_2269_; 
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2266_);
lean_dec_ref_known(v___x_2265_, 1);
v_sz_2267_ = lean_array_size(v_a_2266_);
v___x_2268_ = ((size_t)0ULL);
v___x_2269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksDefault_spec__0(v_a_2266_, v_sz_2267_, v___x_2268_, v___x_2264_, v_a_2249_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_);
lean_dec(v_a_2266_);
if (lean_obj_tag(v___x_2269_) == 0)
{
lean_object* v_a_2270_; lean_object* v___x_2271_; 
v_a_2270_ = lean_ctor_get(v___x_2269_, 0);
lean_inc(v_a_2270_);
lean_dec_ref_known(v___x_2269_, 1);
v___x_2271_ = l_Lean_Server_locationLinksFromDecl(v_declName_2257_, v_a_2249_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2280_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2274_ = v___x_2271_;
v_isShared_2275_ = v_isSharedCheck_2280_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v___x_2271_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2280_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2276_; lean_object* v___x_2278_; 
v___x_2276_ = l_Array_append___redArg(v_a_2270_, v_a_2272_);
lean_dec(v_a_2272_);
if (v_isShared_2275_ == 0)
{
lean_ctor_set(v___x_2274_, 0, v___x_2276_);
v___x_2278_ = v___x_2274_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v___x_2276_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
return v___x_2278_;
}
}
}
else
{
lean_dec(v_a_2270_);
return v___x_2271_;
}
}
else
{
lean_dec(v_declName_2257_);
return v___x_2269_;
}
}
else
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2288_; 
lean_dec(v_declName_2257_);
v_a_2281_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2283_ = v___x_2265_;
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2265_);
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
}
else
{
lean_object* v___x_2289_; lean_object* v___x_2291_; 
lean_dec(v_a_2259_);
lean_dec(v_declName_2257_);
v___x_2289_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 0, v___x_2289_);
v___x_2291_ = v___x_2261_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v___x_2289_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
lean_dec(v_declName_2257_);
v_a_2294_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v___x_2258_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2258_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_a_2294_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
}
else
{
lean_object* v___x_2302_; lean_object* v___x_2303_; 
lean_dec_ref(v___x_2256_);
lean_dec_ref(v_e_2248_);
v___x_2302_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
return v___x_2303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromInstanceProjection___boxed(lean_object* v_e_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l_Lean_Server_locationLinksFromInstanceProjection(v_e_2304_, v_a_2305_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_);
lean_dec(v_a_2309_);
lean_dec_ref(v_a_2308_);
lean_dec(v_a_2307_);
lean_dec_ref(v_a_2306_);
lean_dec_ref(v_a_2305_);
return v_res_2311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksFromTermInfo_spec__0(lean_object* v_as_2312_, size_t v_sz_2313_, size_t v_i_2314_, lean_object* v_b_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_){
_start:
{
lean_object* v_newLL_2323_; uint8_t v___x_2328_; 
v___x_2328_ = lean_usize_dec_lt(v_i_2314_, v_sz_2313_);
if (v___x_2328_ == 0)
{
lean_object* v___x_2329_; 
v___x_2329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2329_, 0, v_b_2315_);
return v___x_2329_;
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2331_; 
v_a_2330_ = lean_array_uget_borrowed(v_as_2312_, v_i_2314_);
v___x_2331_ = l_Lean_Expr_consumeMData(v_a_2330_);
switch(lean_obj_tag(v___x_2331_))
{
case 4:
{
lean_object* v_declName_2332_; lean_object* v___x_2333_; 
v_declName_2332_ = lean_ctor_get(v___x_2331_, 0);
lean_inc(v_declName_2332_);
lean_dec_ref_known(v___x_2331_, 2);
v___x_2333_ = l_Lean_Server_locationLinksFromDecl(v_declName_2332_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_object* v_a_2334_; 
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
lean_inc(v_a_2334_);
lean_dec_ref_known(v___x_2333_, 1);
v_newLL_2323_ = v_a_2334_;
goto v___jp_2322_;
}
else
{
lean_dec_ref(v_b_2315_);
return v___x_2333_;
}
}
case 1:
{
lean_object* v_fvarId_2335_; lean_object* v___x_2336_; 
v_fvarId_2335_ = lean_ctor_get(v___x_2331_, 0);
lean_inc(v_fvarId_2335_);
lean_dec_ref_known(v___x_2331_, 1);
v___x_2336_ = l_Lean_Server_locationLinksFromBinder___redArg(v_fvarId_2335_, v___y_2316_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v_a_2337_; 
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2336_, 1);
v_newLL_2323_ = v_a_2337_;
goto v___jp_2322_;
}
else
{
lean_dec_ref(v_b_2315_);
return v___x_2336_;
}
}
default: 
{
lean_object* v___x_2338_; 
lean_dec_ref(v___x_2331_);
lean_inc(v_a_2330_);
v___x_2338_ = l_Lean_Server_locationLinksFromInstanceProjection(v_a_2330_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_);
if (lean_obj_tag(v___x_2338_) == 0)
{
lean_object* v_a_2339_; 
v_a_2339_ = lean_ctor_get(v___x_2338_, 0);
lean_inc(v_a_2339_);
lean_dec_ref_known(v___x_2338_, 1);
v_newLL_2323_ = v_a_2339_;
goto v___jp_2322_;
}
else
{
lean_dec_ref(v_b_2315_);
return v___x_2338_;
}
}
}
}
v___jp_2322_:
{
lean_object* v___x_2324_; size_t v___x_2325_; size_t v___x_2326_; 
v___x_2324_ = l_Array_append___redArg(v_b_2315_, v_newLL_2323_);
lean_dec_ref(v_newLL_2323_);
v___x_2325_ = ((size_t)1ULL);
v___x_2326_ = lean_usize_add(v_i_2314_, v___x_2325_);
v_i_2314_ = v___x_2326_;
v_b_2315_ = v___x_2324_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksFromTermInfo_spec__0___boxed(lean_object* v_as_2340_, lean_object* v_sz_2341_, lean_object* v_i_2342_, lean_object* v_b_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_){
_start:
{
size_t v_sz_boxed_2350_; size_t v_i_boxed_2351_; lean_object* v_res_2352_; 
v_sz_boxed_2350_ = lean_unbox_usize(v_sz_2341_);
lean_dec(v_sz_2341_);
v_i_boxed_2351_ = lean_unbox_usize(v_i_2342_);
lean_dec(v_i_2342_);
v_res_2352_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksFromTermInfo_spec__0(v_as_2340_, v_sz_boxed_2350_, v_i_boxed_2351_, v_b_2343_, v___y_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_);
lean_dec(v___y_2348_);
lean_dec_ref(v___y_2347_);
lean_dec(v___y_2346_);
lean_dec_ref(v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec_ref(v_as_2340_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromTermInfo(lean_object* v_ti_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_){
_start:
{
uint8_t v_kind_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v_kind_2360_ = lean_ctor_get_uint8(v_a_2354_, sizeof(void*)*4);
v___x_2361_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_2362_ = l_Lean_Server_GoToKind_determineTargetExprs(v_kind_2360_, v_ti_2353_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_);
if (lean_obj_tag(v___x_2362_) == 0)
{
lean_object* v_a_2363_; size_t v_sz_2364_; size_t v___x_2365_; lean_object* v___x_2366_; 
v_a_2363_ = lean_ctor_get(v___x_2362_, 0);
lean_inc(v_a_2363_);
lean_dec_ref_known(v___x_2362_, 1);
v_sz_2364_ = lean_array_size(v_a_2363_);
v___x_2365_ = ((size_t)0ULL);
v___x_2366_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_locationLinksFromTermInfo_spec__0(v_a_2363_, v_sz_2364_, v___x_2365_, v___x_2361_, v_a_2354_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_);
lean_dec(v_a_2363_);
return v___x_2366_;
}
else
{
lean_object* v_a_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2374_; 
v_a_2367_ = lean_ctor_get(v___x_2362_, 0);
v_isSharedCheck_2374_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2369_ = v___x_2362_;
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_a_2367_);
lean_dec(v___x_2362_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v___x_2372_; 
if (v_isShared_2370_ == 0)
{
v___x_2372_ = v___x_2369_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v_a_2367_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
return v___x_2372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromTermInfo___boxed(lean_object* v_ti_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l_Lean_Server_locationLinksFromTermInfo(v_ti_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_, v_a_2380_);
lean_dec(v_a_2380_);
lean_dec_ref(v_a_2379_);
lean_dec(v_a_2378_);
lean_dec_ref(v_a_2377_);
lean_dec_ref(v_a_2376_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromDelabTermInfo(lean_object* v_dti_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_){
_start:
{
lean_object* v_location_x3f_2390_; 
v_location_x3f_2390_ = lean_ctor_get(v_dti_2383_, 1);
lean_inc(v_location_x3f_2390_);
if (lean_obj_tag(v_location_x3f_2390_) == 1)
{
lean_object* v_val_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2460_; 
v_val_2391_ = lean_ctor_get(v_location_x3f_2390_, 0);
v_isSharedCheck_2460_ = !lean_is_exclusive(v_location_x3f_2390_);
if (v_isSharedCheck_2460_ == 0)
{
v___x_2393_ = v_location_x3f_2390_;
v_isShared_2394_ = v_isSharedCheck_2460_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_val_2391_);
lean_dec(v_location_x3f_2390_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2460_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v_toTermInfo_2395_; lean_object* v_module_2396_; lean_object* v_range_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2459_; 
v_toTermInfo_2395_ = lean_ctor_get(v_dti_2383_, 0);
v_module_2396_ = lean_ctor_get(v_val_2391_, 0);
v_range_2397_ = lean_ctor_get(v_val_2391_, 1);
v_isSharedCheck_2459_ = !lean_is_exclusive(v_val_2391_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2399_ = v_val_2391_;
v_isShared_2400_ = v_isSharedCheck_2459_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_range_2397_);
lean_inc(v_module_2396_);
lean_dec(v_val_2391_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2459_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v_ref_2401_; lean_object* v___x_2402_; 
v_ref_2401_ = lean_ctor_get(v_a_2387_, 2);
v___x_2402_ = l_Lean_Server_documentUriFromModule_x3f(v_module_2396_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2442_; 
lean_del_object(v___x_2399_);
lean_del_object(v___x_2393_);
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2405_ = v___x_2402_;
v_isShared_2406_ = v_isSharedCheck_2442_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2402_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2442_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
if (lean_obj_tag(v_a_2403_) == 1)
{
lean_object* v_val_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2440_; 
v_val_2407_ = lean_ctor_get(v_a_2403_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v_a_2403_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2409_ = v_a_2403_;
v_isShared_2410_ = v_isSharedCheck_2440_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_val_2407_);
lean_dec(v_a_2403_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2440_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2411_; lean_object* v___y_2413_; lean_object* v___x_2425_; 
v___x_2411_ = l_Lean_DeclarationRange_toLspRange(v_range_2397_);
if (v_isShared_2410_ == 0)
{
lean_ctor_set_tag(v___x_2409_, 13);
lean_ctor_set(v___x_2409_, 0, v_dti_2383_);
v___x_2425_ = v___x_2409_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(13, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_dti_2383_);
v___x_2425_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2424_;
}
v___jp_2412_:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; uint8_t v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2422_; 
lean_inc_ref(v___x_2411_);
v___x_2414_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2414_, 0, v___y_2413_);
lean_ctor_set(v___x_2414_, 1, v_val_2407_);
lean_ctor_set(v___x_2414_, 2, v___x_2411_);
lean_ctor_set(v___x_2414_, 3, v___x_2411_);
v___x_2415_ = lean_box(0);
v___x_2416_ = 0;
v___x_2417_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2417_, 0, v___x_2414_);
lean_ctor_set(v___x_2417_, 1, v___x_2415_);
lean_ctor_set_uint8(v___x_2417_, sizeof(void*)*2, v___x_2416_);
v___x_2418_ = lean_unsigned_to_nat(1u);
v___x_2419_ = lean_mk_empty_array_with_capacity(v___x_2418_);
v___x_2420_ = lean_array_push(v___x_2419_, v___x_2417_);
if (v_isShared_2406_ == 0)
{
lean_ctor_set(v___x_2405_, 0, v___x_2420_);
v___x_2422_ = v___x_2405_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v___x_2420_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
v_reusejp_2424_:
{
lean_object* v___x_2426_; 
v___x_2426_ = l_Lean_Elab_Info_range_x3f(v___x_2425_);
lean_dec_ref(v___x_2425_);
if (lean_obj_tag(v___x_2426_) == 0)
{
lean_object* v___x_2427_; 
v___x_2427_ = lean_box(0);
v___y_2413_ = v___x_2427_;
goto v___jp_2412_;
}
else
{
lean_object* v_doc_2428_; lean_object* v_val_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2438_; 
v_doc_2428_ = lean_ctor_get(v_a_2384_, 0);
v_val_2429_ = lean_ctor_get(v___x_2426_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2426_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2431_ = v___x_2426_;
v_isShared_2432_ = v_isSharedCheck_2438_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_val_2429_);
lean_dec(v___x_2426_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2438_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v_text_2433_; lean_object* v___x_2434_; lean_object* v___x_2436_; 
v_text_2433_ = lean_ctor_get(v_doc_2428_, 3);
lean_inc_ref(v_text_2433_);
v___x_2434_ = l_Lean_Syntax_Range_toLspRange(v_text_2433_, v_val_2429_);
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 0, v___x_2434_);
v___x_2436_ = v___x_2431_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v___x_2434_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
v___y_2413_ = v___x_2436_;
goto v___jp_2412_;
}
}
}
}
}
}
else
{
lean_object* v___x_2441_; 
lean_inc_ref(v_toTermInfo_2395_);
lean_del_object(v___x_2405_);
lean_dec(v_a_2403_);
lean_dec_ref(v_range_2397_);
lean_dec_ref(v_dti_2383_);
v___x_2441_ = l_Lean_Server_locationLinksFromTermInfo(v_toTermInfo_2395_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2441_;
}
}
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2458_; 
lean_dec_ref(v_range_2397_);
lean_dec_ref(v_dti_2383_);
v_a_2443_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2458_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2458_ == 0)
{
v___x_2445_ = v___x_2402_;
v_isShared_2446_ = v_isSharedCheck_2458_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2402_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2458_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2447_; lean_object* v___x_2449_; 
v___x_2447_ = lean_io_error_to_string(v_a_2443_);
if (v_isShared_2394_ == 0)
{
lean_ctor_set_tag(v___x_2393_, 3);
lean_ctor_set(v___x_2393_, 0, v___x_2447_);
v___x_2449_ = v___x_2393_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v___x_2447_);
v___x_2449_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
lean_object* v___x_2450_; lean_object* v___x_2452_; 
v___x_2450_ = l_Lean_MessageData_ofFormat(v___x_2449_);
lean_inc(v_ref_2401_);
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 1, v___x_2450_);
lean_ctor_set(v___x_2399_, 0, v_ref_2401_);
v___x_2452_ = v___x_2399_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_ref_2401_);
lean_ctor_set(v_reuseFailAlloc_2456_, 1, v___x_2450_);
v___x_2452_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
lean_object* v___x_2454_; 
if (v_isShared_2446_ == 0)
{
lean_ctor_set(v___x_2445_, 0, v___x_2452_);
v___x_2454_ = v___x_2445_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v___x_2452_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
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
lean_object* v_toTermInfo_2461_; lean_object* v___x_2462_; 
lean_dec(v_location_x3f_2390_);
v_toTermInfo_2461_ = lean_ctor_get(v_dti_2383_, 0);
lean_inc_ref(v_toTermInfo_2461_);
lean_dec_ref(v_dti_2383_);
v___x_2462_ = l_Lean_Server_locationLinksFromTermInfo(v_toTermInfo_2461_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2462_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromDelabTermInfo___boxed(lean_object* v_dti_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_Lean_Server_locationLinksFromDelabTermInfo(v_dti_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
lean_dec(v_a_2468_);
lean_dec_ref(v_a_2467_);
lean_dec(v_a_2466_);
lean_dec_ref(v_a_2465_);
lean_dec_ref(v_a_2464_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0___redArg(lean_object* v_e_2471_, lean_object* v___y_2472_){
_start:
{
uint8_t v___x_2474_; 
v___x_2474_ = l_Lean_Expr_hasMVar(v_e_2471_);
if (v___x_2474_ == 0)
{
lean_object* v___x_2475_; 
v___x_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2475_, 0, v_e_2471_);
return v___x_2475_;
}
else
{
lean_object* v___x_2476_; lean_object* v_mctx_2477_; lean_object* v___x_2478_; lean_object* v_fst_2479_; lean_object* v_snd_2480_; lean_object* v___x_2481_; lean_object* v_cache_2482_; lean_object* v_zetaDeltaFVarIds_2483_; lean_object* v_postponed_2484_; lean_object* v_diag_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2494_; 
v___x_2476_ = lean_st_ref_get(v___y_2472_);
v_mctx_2477_ = lean_ctor_get(v___x_2476_, 0);
lean_inc_ref(v_mctx_2477_);
lean_dec(v___x_2476_);
v___x_2478_ = l_Lean_instantiateMVarsCore(v_mctx_2477_, v_e_2471_);
v_fst_2479_ = lean_ctor_get(v___x_2478_, 0);
lean_inc(v_fst_2479_);
v_snd_2480_ = lean_ctor_get(v___x_2478_, 1);
lean_inc(v_snd_2480_);
lean_dec_ref(v___x_2478_);
v___x_2481_ = lean_st_ref_take(v___y_2472_);
v_cache_2482_ = lean_ctor_get(v___x_2481_, 1);
v_zetaDeltaFVarIds_2483_ = lean_ctor_get(v___x_2481_, 2);
v_postponed_2484_ = lean_ctor_get(v___x_2481_, 3);
v_diag_2485_ = lean_ctor_get(v___x_2481_, 4);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2481_);
if (v_isSharedCheck_2494_ == 0)
{
lean_object* v_unused_2495_; 
v_unused_2495_ = lean_ctor_get(v___x_2481_, 0);
lean_dec(v_unused_2495_);
v___x_2487_ = v___x_2481_;
v_isShared_2488_ = v_isSharedCheck_2494_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_diag_2485_);
lean_inc(v_postponed_2484_);
lean_inc(v_zetaDeltaFVarIds_2483_);
lean_inc(v_cache_2482_);
lean_dec(v___x_2481_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2494_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
lean_ctor_set(v___x_2487_, 0, v_snd_2480_);
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_snd_2480_);
lean_ctor_set(v_reuseFailAlloc_2493_, 1, v_cache_2482_);
lean_ctor_set(v_reuseFailAlloc_2493_, 2, v_zetaDeltaFVarIds_2483_);
lean_ctor_set(v_reuseFailAlloc_2493_, 3, v_postponed_2484_);
lean_ctor_set(v_reuseFailAlloc_2493_, 4, v_diag_2485_);
v___x_2490_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2491_ = lean_st_ref_put(v___y_2472_, v___x_2490_);
v___x_2492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2492_, 0, v_fst_2479_);
return v___x_2492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0___redArg___boxed(lean_object* v_e_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0___redArg(v_e_2496_, v___y_2497_);
lean_dec(v___y_2497_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0(lean_object* v_e_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_){
_start:
{
lean_object* v___x_2507_; 
v___x_2507_ = l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0___redArg(v_e_2500_, v___y_2503_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0___boxed(lean_object* v_e_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_){
_start:
{
lean_object* v_res_2515_; 
v_res_2515_ = l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0(v_e_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_);
lean_dec(v___y_2513_);
lean_dec_ref(v___y_2512_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec_ref(v___y_2509_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromFieldInfo(lean_object* v_fi_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_){
_start:
{
uint8_t v_kind_2523_; uint8_t v___x_2524_; uint8_t v___x_2525_; 
v_kind_2523_ = lean_ctor_get_uint8(v_a_2517_, sizeof(void*)*4);
v___x_2524_ = 2;
v___x_2525_ = l_Lean_Server_instBEqGoToKind_beq(v_kind_2523_, v___x_2524_);
if (v___x_2525_ == 0)
{
lean_object* v_projName_2526_; lean_object* v___x_2527_; 
v_projName_2526_ = lean_ctor_get(v_fi_2516_, 0);
lean_inc(v_projName_2526_);
lean_dec_ref(v_fi_2516_);
v___x_2527_ = l_Lean_Server_locationLinksFromDecl(v_projName_2526_, v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_);
return v___x_2527_;
}
else
{
lean_object* v_val_2528_; lean_object* v___x_2529_; 
v_val_2528_ = lean_ctor_get(v_fi_2516_, 3);
lean_inc_ref(v_val_2528_);
lean_dec_ref(v_fi_2516_);
lean_inc(v_a_2521_);
lean_inc_ref(v_a_2520_);
lean_inc(v_a_2519_);
lean_inc_ref(v_a_2518_);
v___x_2529_ = lean_infer_type(v_val_2528_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_);
if (lean_obj_tag(v___x_2529_) == 0)
{
lean_object* v_a_2530_; lean_object* v___x_2531_; lean_object* v_a_2532_; lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2544_; 
v_a_2530_ = lean_ctor_get(v___x_2529_, 0);
lean_inc(v_a_2530_);
lean_dec_ref_known(v___x_2529_, 1);
v___x_2531_ = l_Lean_instantiateMVars___at___00Lean_Server_locationLinksFromFieldInfo_spec__0___redArg(v_a_2530_, v_a_2519_);
v_a_2532_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2534_ = v___x_2531_;
v_isShared_2535_ = v_isSharedCheck_2544_;
goto v_resetjp_2533_;
}
else
{
lean_inc(v_a_2532_);
lean_dec(v___x_2531_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2544_;
goto v_resetjp_2533_;
}
v_resetjp_2533_:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2536_ = l_Lean_Expr_getAppFn(v_a_2532_);
lean_dec(v_a_2532_);
v___x_2537_ = l_Lean_Expr_constName_x3f(v___x_2536_);
lean_dec_ref(v___x_2536_);
if (lean_obj_tag(v___x_2537_) == 1)
{
lean_object* v_val_2538_; lean_object* v___x_2539_; 
lean_del_object(v___x_2534_);
v_val_2538_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_val_2538_);
lean_dec_ref_known(v___x_2537_, 1);
v___x_2539_ = l_Lean_Server_locationLinksFromDecl(v_val_2538_, v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_);
return v___x_2539_;
}
else
{
lean_object* v___x_2540_; lean_object* v___x_2542_; 
lean_dec(v___x_2537_);
v___x_2540_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
if (v_isShared_2535_ == 0)
{
lean_ctor_set(v___x_2534_, 0, v___x_2540_);
v___x_2542_ = v___x_2534_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2540_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
}
else
{
lean_object* v_a_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2552_; 
v_a_2545_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2552_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2552_ == 0)
{
v___x_2547_ = v___x_2529_;
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_a_2545_);
lean_dec(v___x_2529_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v___x_2550_; 
if (v_isShared_2548_ == 0)
{
v___x_2550_ = v___x_2547_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v_a_2545_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
return v___x_2550_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromFieldInfo___boxed(lean_object* v_fi_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_){
_start:
{
lean_object* v_res_2560_; 
v_res_2560_ = l_Lean_Server_locationLinksFromFieldInfo(v_fi_2553_, v_a_2554_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_);
lean_dec(v_a_2558_);
lean_dec_ref(v_a_2557_);
lean_dec(v_a_2556_);
lean_dec_ref(v_a_2555_);
lean_dec_ref(v_a_2554_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromOptionInfo(lean_object* v_i_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_){
_start:
{
lean_object* v_declName_2568_; lean_object* v___x_2569_; 
v_declName_2568_ = lean_ctor_get(v_i_2561_, 2);
lean_inc(v_declName_2568_);
lean_dec_ref(v_i_2561_);
v___x_2569_ = l_Lean_Server_locationLinksFromDecl(v_declName_2568_, v_a_2562_, v_a_2563_, v_a_2564_, v_a_2565_, v_a_2566_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromOptionInfo___boxed(lean_object* v_i_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lean_Server_locationLinksFromOptionInfo(v_i_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_);
lean_dec(v_a_2575_);
lean_dec_ref(v_a_2574_);
lean_dec(v_a_2573_);
lean_dec_ref(v_a_2572_);
lean_dec_ref(v_a_2571_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromCommandInfo___redArg(lean_object* v_i_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_){
_start:
{
lean_object* v_elaborator_2585_; 
v_elaborator_2585_ = lean_ctor_get(v_i_2578_, 0);
if (lean_obj_tag(v_elaborator_2585_) == 1)
{
lean_object* v_pre_2586_; 
v_pre_2586_ = lean_ctor_get(v_elaborator_2585_, 0);
if (lean_obj_tag(v_pre_2586_) == 0)
{
lean_object* v_str_2587_; lean_object* v___x_2588_; uint8_t v___x_2589_; 
v_str_2587_ = lean_ctor_get(v_elaborator_2585_, 1);
v___x_2588_ = ((lean_object*)(l_Lean_Server_locationLinksFromImport___redArg___closed__3));
v___x_2589_ = lean_string_dec_eq(v_str_2587_, v___x_2588_);
if (v___x_2589_ == 0)
{
lean_dec_ref(v_i_2578_);
goto v___jp_2582_;
}
else
{
uint8_t v_kind_2590_; uint8_t v___x_2591_; uint8_t v___x_2592_; 
v_kind_2590_ = lean_ctor_get_uint8(v_a_2579_, sizeof(void*)*4);
v___x_2591_ = 2;
v___x_2592_ = l_Lean_Server_instBEqGoToKind_beq(v_kind_2590_, v___x_2591_);
if (v___x_2592_ == 0)
{
lean_object* v___x_2593_; 
v___x_2593_ = l_Lean_Server_locationLinksFromImport___redArg(v_i_2578_, v_a_2579_, v_a_2580_);
return v___x_2593_;
}
else
{
lean_dec_ref(v_i_2578_);
goto v___jp_2582_;
}
}
}
else
{
lean_dec_ref(v_i_2578_);
goto v___jp_2582_;
}
}
else
{
lean_dec_ref(v_i_2578_);
goto v___jp_2582_;
}
v___jp_2582_:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2583_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
v___x_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2583_);
return v___x_2584_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromCommandInfo___redArg___boxed(lean_object* v_i_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_){
_start:
{
lean_object* v_res_2598_; 
v_res_2598_ = l_Lean_Server_locationLinksFromCommandInfo___redArg(v_i_2594_, v_a_2595_, v_a_2596_);
lean_dec_ref(v_a_2596_);
lean_dec_ref(v_a_2595_);
return v_res_2598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromCommandInfo(lean_object* v_i_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_){
_start:
{
lean_object* v___x_2606_; 
v___x_2606_ = l_Lean_Server_locationLinksFromCommandInfo___redArg(v_i_2599_, v_a_2600_, v_a_2603_);
return v___x_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksFromCommandInfo___boxed(lean_object* v_i_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_){
_start:
{
lean_object* v_res_2614_; 
v_res_2614_ = l_Lean_Server_locationLinksFromCommandInfo(v_i_2607_, v_a_2608_, v_a_2609_, v_a_2610_, v_a_2611_, v_a_2612_);
lean_dec(v_a_2612_);
lean_dec_ref(v_a_2611_);
lean_dec(v_a_2610_);
lean_dec_ref(v_a_2609_);
lean_dec_ref(v_a_2608_);
return v_res_2614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo___lam__0(uint8_t v_kind_2615_, lean_object* v_ll_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_){
_start:
{
uint8_t v___x_2634_; uint8_t v___x_2635_; 
v___x_2634_ = 0;
v___x_2635_ = l_Lean_Server_instBEqGoToKind_beq(v_kind_2615_, v___x_2634_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2636_; lean_object* v___x_2637_; uint8_t v___x_2638_; 
v___x_2636_ = lean_array_get_size(v_ll_2616_);
v___x_2637_ = lean_unsigned_to_nat(0u);
v___x_2638_ = lean_nat_dec_eq(v___x_2636_, v___x_2637_);
if (v___x_2638_ == 0)
{
lean_object* v___x_2639_; 
v___x_2639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2639_, 0, v_ll_2616_);
return v___x_2639_;
}
else
{
goto v___jp_2623_;
}
}
else
{
goto v___jp_2623_;
}
v___jp_2623_:
{
lean_object* v___x_2624_; 
v___x_2624_ = l_Lean_Server_locationLinksDefault(v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2633_; 
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2627_ = v___x_2624_;
v_isShared_2628_ = v_isSharedCheck_2633_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2624_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2633_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2629_; lean_object* v___x_2631_; 
v___x_2629_ = l_Array_append___redArg(v_ll_2616_, v_a_2625_);
lean_dec(v_a_2625_);
if (v_isShared_2628_ == 0)
{
lean_ctor_set(v___x_2627_, 0, v___x_2629_);
v___x_2631_ = v___x_2627_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v___x_2629_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
else
{
lean_dec_ref(v_ll_2616_);
return v___x_2624_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo___lam__0___boxed(lean_object* v_kind_2640_, lean_object* v_ll_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
uint8_t v_kind_boxed_2648_; lean_object* v_res_2649_; 
v_kind_boxed_2648_ = lean_unbox(v_kind_2640_);
v_res_2649_ = l_Lean_Server_locationLinksOfInfo___lam__0(v_kind_boxed_2648_, v_ll_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
lean_dec_ref(v___y_2642_);
return v_res_2649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo___lam__1(lean_object* v_info_2650_, lean_object* v___f_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
switch(lean_obj_tag(v_info_2650_))
{
case 1:
{
lean_object* v_i_2658_; lean_object* v___x_2659_; 
v_i_2658_ = lean_ctor_get(v_info_2650_, 0);
lean_inc_ref(v_i_2658_);
lean_dec_ref_known(v_info_2650_, 1);
v___x_2659_ = l_Lean_Server_locationLinksFromTermInfo(v_i_2658_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v_a_2660_; lean_object* v___x_2661_; 
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_a_2660_);
lean_dec_ref_known(v___x_2659_, 1);
lean_inc(v___y_2656_);
lean_inc_ref(v___y_2655_);
lean_inc(v___y_2654_);
lean_inc_ref(v___y_2653_);
lean_inc_ref(v___y_2652_);
v___x_2661_ = lean_apply_7(v___f_2651_, v_a_2660_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, lean_box(0));
return v___x_2661_;
}
else
{
lean_dec_ref(v___f_2651_);
return v___x_2659_;
}
}
case 13:
{
lean_object* v_i_2662_; lean_object* v___x_2663_; 
v_i_2662_ = lean_ctor_get(v_info_2650_, 0);
lean_inc_ref(v_i_2662_);
lean_dec_ref_known(v_info_2650_, 1);
v___x_2663_ = l_Lean_Server_locationLinksFromDelabTermInfo(v_i_2662_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; lean_object* v___x_2665_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
lean_inc(v_a_2664_);
lean_dec_ref_known(v___x_2663_, 1);
lean_inc(v___y_2656_);
lean_inc_ref(v___y_2655_);
lean_inc(v___y_2654_);
lean_inc_ref(v___y_2653_);
lean_inc_ref(v___y_2652_);
v___x_2665_ = lean_apply_7(v___f_2651_, v_a_2664_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, lean_box(0));
return v___x_2665_;
}
else
{
lean_dec_ref(v___f_2651_);
return v___x_2663_;
}
}
case 7:
{
lean_object* v_i_2666_; lean_object* v___x_2667_; 
v_i_2666_ = lean_ctor_get(v_info_2650_, 0);
lean_inc_ref(v_i_2666_);
lean_dec_ref_known(v_info_2650_, 1);
v___x_2667_ = l_Lean_Server_locationLinksFromFieldInfo(v_i_2666_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2668_; lean_object* v___x_2669_; 
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_a_2668_);
lean_dec_ref_known(v___x_2667_, 1);
lean_inc(v___y_2656_);
lean_inc_ref(v___y_2655_);
lean_inc(v___y_2654_);
lean_inc_ref(v___y_2653_);
lean_inc_ref(v___y_2652_);
v___x_2669_ = lean_apply_7(v___f_2651_, v_a_2668_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, lean_box(0));
return v___x_2669_;
}
else
{
lean_dec_ref(v___f_2651_);
return v___x_2667_;
}
}
case 5:
{
lean_object* v_i_2670_; lean_object* v___x_2671_; 
v_i_2670_ = lean_ctor_get(v_info_2650_, 0);
lean_inc_ref(v_i_2670_);
lean_dec_ref_known(v_info_2650_, 1);
v___x_2671_ = l_Lean_Server_locationLinksFromOptionInfo(v_i_2670_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_object* v_a_2672_; lean_object* v___x_2673_; 
v_a_2672_ = lean_ctor_get(v___x_2671_, 0);
lean_inc(v_a_2672_);
lean_dec_ref_known(v___x_2671_, 1);
lean_inc(v___y_2656_);
lean_inc_ref(v___y_2655_);
lean_inc(v___y_2654_);
lean_inc_ref(v___y_2653_);
lean_inc_ref(v___y_2652_);
v___x_2673_ = lean_apply_7(v___f_2651_, v_a_2672_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, lean_box(0));
return v___x_2673_;
}
else
{
lean_dec_ref(v___f_2651_);
return v___x_2671_;
}
}
case 3:
{
lean_object* v_i_2674_; lean_object* v___x_2675_; 
v_i_2674_ = lean_ctor_get(v_info_2650_, 0);
lean_inc_ref(v_i_2674_);
lean_dec_ref_known(v_info_2650_, 1);
v___x_2675_ = l_Lean_Server_locationLinksFromCommandInfo___redArg(v_i_2674_, v___y_2652_, v___y_2655_);
if (lean_obj_tag(v___x_2675_) == 0)
{
lean_object* v_a_2676_; lean_object* v___x_2677_; 
v_a_2676_ = lean_ctor_get(v___x_2675_, 0);
lean_inc(v_a_2676_);
lean_dec_ref_known(v___x_2675_, 1);
lean_inc(v___y_2656_);
lean_inc_ref(v___y_2655_);
lean_inc(v___y_2654_);
lean_inc_ref(v___y_2653_);
lean_inc_ref(v___y_2652_);
v___x_2677_ = lean_apply_7(v___f_2651_, v_a_2676_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, lean_box(0));
return v___x_2677_;
}
else
{
lean_dec_ref(v___f_2651_);
return v___x_2675_;
}
}
case 6:
{
lean_object* v_i_2678_; lean_object* v___x_2679_; 
v_i_2678_ = lean_ctor_get(v_info_2650_, 0);
lean_inc_ref(v_i_2678_);
lean_dec_ref_known(v_info_2650_, 1);
v___x_2679_ = l_Lean_Server_locationLinksFromErrorNameInfo(v_i_2678_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
lean_dec_ref(v_i_2678_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2681_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_a_2680_);
lean_dec_ref_known(v___x_2679_, 1);
lean_inc(v___y_2656_);
lean_inc_ref(v___y_2655_);
lean_inc(v___y_2654_);
lean_inc_ref(v___y_2653_);
lean_inc_ref(v___y_2652_);
v___x_2681_ = lean_apply_7(v___f_2651_, v_a_2680_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, lean_box(0));
return v___x_2681_;
}
else
{
lean_dec_ref(v___f_2651_);
return v___x_2679_;
}
}
case 17:
{
lean_object* v_i_2682_; lean_object* v_name_2683_; lean_object* v___x_2684_; 
v_i_2682_ = lean_ctor_get(v_info_2650_, 0);
lean_inc_ref(v_i_2682_);
lean_dec_ref_known(v_info_2650_, 1);
v_name_2683_ = lean_ctor_get(v_i_2682_, 1);
lean_inc(v_name_2683_);
lean_dec_ref(v_i_2682_);
v___x_2684_ = l_Lean_Server_locationLinksFromDecl(v_name_2683_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v_a_2685_; lean_object* v___x_2686_; 
v_a_2685_ = lean_ctor_get(v___x_2684_, 0);
lean_inc(v_a_2685_);
lean_dec_ref_known(v___x_2684_, 1);
lean_inc(v___y_2656_);
lean_inc_ref(v___y_2655_);
lean_inc(v___y_2654_);
lean_inc_ref(v___y_2653_);
lean_inc_ref(v___y_2652_);
v___x_2686_ = lean_apply_7(v___f_2651_, v_a_2685_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, lean_box(0));
return v___x_2686_;
}
else
{
lean_dec_ref(v___f_2651_);
return v___x_2684_;
}
}
default: 
{
lean_object* v___x_2687_; lean_object* v___x_2688_; 
lean_dec_ref(v_info_2650_);
v___x_2687_ = ((lean_object*)(l_Lean_Server_locationLinksFromDecl___closed__0));
lean_inc(v___y_2656_);
lean_inc_ref(v___y_2655_);
lean_inc(v___y_2654_);
lean_inc_ref(v___y_2653_);
lean_inc_ref(v___y_2652_);
v___x_2688_ = lean_apply_7(v___f_2651_, v___x_2687_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, lean_box(0));
return v___x_2688_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo___lam__1___boxed(lean_object* v_info_2689_, lean_object* v___f_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_){
_start:
{
lean_object* v_res_2697_; 
v_res_2697_ = l_Lean_Server_locationLinksOfInfo___lam__1(v_info_2689_, v___f_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_);
lean_dec(v___y_2695_);
lean_dec_ref(v___y_2694_);
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
lean_dec_ref(v___y_2691_);
return v_res_2697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo(lean_object* v_doc_2698_, uint8_t v_kind_2699_, lean_object* v_ictx_2700_, lean_object* v_infoTree_x3f_2701_){
_start:
{
lean_object* v_ctx_2703_; lean_object* v_info_2704_; lean_object* v_children_2705_; lean_object* v___x_2706_; lean_object* v___f_2707_; lean_object* v___y_2708_; lean_object* v___x_2709_; lean_object* v_ctx_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v_ctx_2703_ = lean_ctor_get(v_ictx_2700_, 0);
lean_inc_ref(v_ctx_2703_);
v_info_2704_ = lean_ctor_get(v_ictx_2700_, 1);
lean_inc_ref_n(v_info_2704_, 3);
v_children_2705_ = lean_ctor_get(v_ictx_2700_, 2);
lean_inc_ref(v_children_2705_);
lean_dec_ref(v_ictx_2700_);
v___x_2706_ = lean_box(v_kind_2699_);
v___f_2707_ = lean_alloc_closure((void*)(l_Lean_Server_locationLinksOfInfo___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2707_, 0, v___x_2706_);
v___y_2708_ = lean_alloc_closure((void*)(l_Lean_Server_locationLinksOfInfo___lam__1___boxed), 8, 2);
lean_closure_set(v___y_2708_, 0, v_info_2704_);
lean_closure_set(v___y_2708_, 1, v___f_2707_);
v___x_2709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2709_, 0, v_info_2704_);
v_ctx_2710_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_ctx_2710_, 0, v_doc_2698_);
lean_ctor_set(v_ctx_2710_, 1, v_infoTree_x3f_2701_);
lean_ctor_set(v_ctx_2710_, 2, v___x_2709_);
lean_ctor_set(v_ctx_2710_, 3, v_children_2705_);
lean_ctor_set_uint8(v_ctx_2710_, sizeof(void*)*4, v_kind_2699_);
v___x_2711_ = l_Lean_Elab_Info_lctx(v_info_2704_);
lean_dec_ref(v_info_2704_);
v___x_2712_ = l_Lean_Server_GoToM_run___redArg(v_ctx_2710_, v_ctx_2703_, v___x_2711_, v___y_2708_);
return v___x_2712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_locationLinksOfInfo___boxed(lean_object* v_doc_2713_, lean_object* v_kind_2714_, lean_object* v_ictx_2715_, lean_object* v_infoTree_x3f_2716_, lean_object* v_a_2717_){
_start:
{
uint8_t v_kind_boxed_2718_; lean_object* v_res_2719_; 
v_kind_boxed_2718_ = lean_unbox(v_kind_2714_);
v_res_2719_ = l_Lean_Server_locationLinksOfInfo(v_doc_2713_, v_kind_boxed_2718_, v_ictx_2715_, v_infoTree_x3f_2716_);
return v_res_2719_;
}
}
lean_object* runtime_initialize_Lean_Server_Utils(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Lsp_Internal(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_GoTo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_GoTo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_Utils(uint8_t builtin);
lean_object* initialize_Lean_Data_Lsp_Internal(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_GoTo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_GoTo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_GoTo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_GoTo(builtin);
}
#ifdef __cplusplus
}
#endif
