// Lean compiler output
// Module: Lean.PrettyPrinter.Delaborator.Metavariable
// Imports: public import Lean.PrettyPrinter.Delaborator.Basic import Lean.Elab.ErrorUtils
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
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
uint8_t l_Lean_getPPMVars(lean_object*);
uint8_t l_Lean_getPPMVarsAnonymous(lean_object*);
lean_object* l_Lean_MVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_MetavarContext_findUserName_x3f(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_LocalDecl_index(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn_x27(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_hasValue(lean_object*, uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_PPContext_runMetaM___redArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
extern lean_object* l_Lean_reservedMacroScope;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getPPMVars___boxed(lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getPPMVarsAnonymous___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__3_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_mvar"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__4 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(160, 189, 119, 183, 234, 3, 131, 163)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__5 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__0_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__1_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__2_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(218, 189, 67, 60, 211, 196, 112, 165)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__6 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "_delabMVar"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 43, 235, 14, 84, 75, 70, 222)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__0_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__1_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__0_value)} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__2_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPMVars___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__3_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPMVarsAnonymous___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " (unreachable)"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__0_value;
static const lean_closure_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\?_"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__2_value;
static const lean_closure_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__2_value)} };
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Internal_ErrorUtils_Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Internal_ErrorUtils_Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "\n\nAdditional "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__0_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "variable"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "variables"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__2_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = " in this metavariable's local context: "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__3_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__0_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Variable"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Variables"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__2_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = " absent from this metavariable's local context: "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = " Substitution is awaiting assignment of the following "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__0_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "metavariable"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "metavariables"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__2_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__3_value;
static const lean_array_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__4 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 225, .m_capacity = 225, .m_length = 224, .m_data = "Substitution is delayed until the metavariable's value contains no metavariables, since all occurrences of the variables from its local context will need to be replaced with expressions that are valid in the current context."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__0_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "\n\nThis metavariable has been assigned."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "\n\nThis metavariable has been assigned, but it appears here via a *delayed assignment*. "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__2_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "\n\nThis metavariable cannot be assigned due to the current metavariable context depth."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__3_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "\n\nThis metavariable appears here via a *delayed assignment*. "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__4 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__4_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "\n\nThis metavariable has a name but it is unreachable."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__5 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__5_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "Part of the encoding of the *delayed assignment* mechanism. Represents the metavariable "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__6 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__6_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = ", which has additional local context variables. "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__7 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__7_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 125, .m_capacity = 125, .m_length = 124, .m_data = "[Error: This delayed assignment refers to a metavariable not present in the metavariable context. Please report this issue.]"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__8 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__8_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 221, .m_capacity = 221, .m_length = 220, .m_data = "A metavariable representing an expression that should be solved for by unification during the elaboration process. They are created during elaboration as placeholders for implicit arguments and by `_` placeholder syntax."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__9 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__9_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 240, .m_capacity = 240, .m_length = 239, .m_data = "A metavariable representing a typeclass instance whose synthesis is still pending. They can be solved for by unification during the elaboration process, but the inferred expression and the synthesized instance must be definitionally equal."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__10 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__10_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 235, .m_capacity = 235, .m_length = 234, .m_data = "A metavariable representing a tactic goal or an expression whose elaboration is still pending. They usually act like constants until they are completely solved for. They can be created using `\?_` and `\?n` synthetic placeholder syntax."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__11 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__11_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "[Error: This metavariable is not present in the metavariable context. Please report this issue.]"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__12 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0(lean_object* v_x_1_, lean_object* v_x_2_){
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
v___x_8_ = l_Lean_instBEqMVarId_beq(v_val_6_, v_val_7_);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_instBEqOption_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0(v_x_9_, v_x_10_);
lean_dec(v_x_10_);
lean_dec(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(lean_object* v_m_22_, lean_object* v_mkMVarPlaceholder_23_, lean_object* v_mkMVar_24_, lean_object* v_mkMVarDead_25_, uint8_t v_ppMVars_26_, uint8_t v_ppMVarsAnonymous_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
if (v_ppMVars_26_ == 0)
{
lean_object* v___x_33_; 
lean_dec_ref(v_mkMVarDead_25_);
lean_dec_ref(v_mkMVar_24_);
lean_dec(v_m_22_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_33_ = lean_apply_5(v_mkMVarPlaceholder_23_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_33_;
}
else
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_MVarId_findDecl_x3f___redArg(v_m_22_, v_a_29_);
if (lean_obj_tag(v___x_34_) == 0)
{
lean_object* v_a_35_; 
v_a_35_ = lean_ctor_get(v___x_34_, 0);
lean_inc(v_a_35_);
lean_dec_ref_known(v___x_34_, 1);
if (lean_obj_tag(v_a_35_) == 1)
{
lean_object* v_val_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_57_; 
v_val_36_ = lean_ctor_get(v_a_35_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v_a_35_);
if (v_isSharedCheck_57_ == 0)
{
v___x_38_ = v_a_35_;
v_isShared_39_ = v_isSharedCheck_57_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_val_36_);
lean_dec(v_a_35_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_57_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v_userName_40_; 
v_userName_40_ = lean_ctor_get(v_val_36_, 0);
if (lean_obj_tag(v_userName_40_) == 0)
{
lean_del_object(v___x_38_);
lean_dec_ref(v_mkMVarDead_25_);
lean_dec(v_m_22_);
if (v_ppMVarsAnonymous_27_ == 0)
{
lean_object* v___x_41_; 
lean_dec(v_val_36_);
lean_dec_ref(v_mkMVar_24_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_41_ = lean_apply_5(v_mkMVarPlaceholder_23_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_41_;
}
else
{
lean_object* v_index_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
lean_dec_ref(v_mkMVarPlaceholder_23_);
v_index_42_ = lean_ctor_get(v_val_36_, 6);
lean_inc(v_index_42_);
lean_dec(v_val_36_);
v___x_43_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__1));
v___x_44_ = lean_unsigned_to_nat(1u);
v___x_45_ = lean_nat_add(v_index_42_, v___x_44_);
lean_dec(v_index_42_);
v___x_46_ = l_Lean_Name_num___override(v___x_43_, v___x_45_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_47_ = lean_apply_6(v_mkMVar_24_, v___x_46_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_47_;
}
}
else
{
lean_object* v___x_48_; lean_object* v_mctx_49_; lean_object* v___x_51_; 
lean_inc(v_userName_40_);
lean_dec(v_val_36_);
lean_dec_ref(v_mkMVarPlaceholder_23_);
v___x_48_ = lean_st_ref_get(v_a_29_);
v_mctx_49_ = lean_ctor_get(v___x_48_, 0);
lean_inc_ref(v_mctx_49_);
lean_dec(v___x_48_);
if (v_isShared_39_ == 0)
{
lean_ctor_set(v___x_38_, 0, v_m_22_);
v___x_51_ = v___x_38_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_m_22_);
v___x_51_ = v_reuseFailAlloc_56_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_52_ = l_Lean_MetavarContext_findUserName_x3f(v_mctx_49_, v_userName_40_);
lean_dec_ref(v_mctx_49_);
v___x_53_ = l_instBEqOption_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0(v___x_51_, v___x_52_);
lean_dec(v___x_52_);
lean_dec_ref(v___x_51_);
if (v___x_53_ == 0)
{
lean_object* v___x_54_; 
lean_dec_ref(v_mkMVar_24_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_54_ = lean_apply_6(v_mkMVarDead_25_, v_userName_40_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_54_;
}
else
{
lean_object* v___x_55_; 
lean_dec_ref(v_mkMVarDead_25_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_55_ = lean_apply_6(v_mkMVar_24_, v_userName_40_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_55_;
}
}
}
}
}
else
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
lean_dec(v_a_35_);
lean_dec_ref(v_mkMVarDead_25_);
lean_dec_ref(v_mkMVarPlaceholder_23_);
v___x_58_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__3));
v___x_59_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__5));
v___x_60_ = l_Lean_Name_replacePrefix(v_m_22_, v___x_58_, v___x_59_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_61_ = lean_apply_6(v_mkMVar_24_, v___x_60_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_61_;
}
}
else
{
lean_object* v_a_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_69_; 
lean_dec_ref(v_mkMVarDead_25_);
lean_dec_ref(v_mkMVar_24_);
lean_dec_ref(v_mkMVarPlaceholder_23_);
lean_dec(v_m_22_);
v_a_62_ = lean_ctor_get(v___x_34_, 0);
v_isSharedCheck_69_ = !lean_is_exclusive(v___x_34_);
if (v_isSharedCheck_69_ == 0)
{
v___x_64_ = v___x_34_;
v_isShared_65_ = v_isSharedCheck_69_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_a_62_);
lean_dec(v___x_34_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_69_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_67_; 
if (v_isShared_65_ == 0)
{
v___x_67_ = v___x_64_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_a_62_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___boxed(lean_object* v_m_70_, lean_object* v_mkMVarPlaceholder_71_, lean_object* v_mkMVar_72_, lean_object* v_mkMVarDead_73_, lean_object* v_ppMVars_74_, lean_object* v_ppMVarsAnonymous_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
uint8_t v_ppMVars_boxed_81_; uint8_t v_ppMVarsAnonymous_boxed_82_; lean_object* v_res_83_; 
v_ppMVars_boxed_81_ = lean_unbox(v_ppMVars_74_);
v_ppMVarsAnonymous_boxed_82_ = lean_unbox(v_ppMVarsAnonymous_75_);
v_res_83_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(v_m_70_, v_mkMVarPlaceholder_71_, v_mkMVar_72_, v_mkMVarDead_73_, v_ppMVars_boxed_81_, v_ppMVarsAnonymous_boxed_82_, v_a_76_, v_a_77_, v_a_78_, v_a_79_);
lean_dec(v_a_79_);
lean_dec_ref(v_a_78_);
lean_dec(v_a_77_);
lean_dec_ref(v_a_76_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux(lean_object* v_00_u03b1_84_, lean_object* v_m_85_, lean_object* v_mkMVarPlaceholder_86_, lean_object* v_mkMVar_87_, lean_object* v_mkMVarDead_88_, uint8_t v_ppMVars_89_, uint8_t v_ppMVarsAnonymous_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(v_m_85_, v_mkMVarPlaceholder_86_, v_mkMVar_87_, v_mkMVarDead_88_, v_ppMVars_89_, v_ppMVarsAnonymous_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___boxed(lean_object* v_00_u03b1_97_, lean_object* v_m_98_, lean_object* v_mkMVarPlaceholder_99_, lean_object* v_mkMVar_100_, lean_object* v_mkMVarDead_101_, lean_object* v_ppMVars_102_, lean_object* v_ppMVarsAnonymous_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
uint8_t v_ppMVars_boxed_109_; uint8_t v_ppMVarsAnonymous_boxed_110_; lean_object* v_res_111_; 
v_ppMVars_boxed_109_ = lean_unbox(v_ppMVars_102_);
v_ppMVarsAnonymous_boxed_110_ = lean_unbox(v_ppMVarsAnonymous_103_);
v_res_111_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux(v_00_u03b1_97_, v_m_98_, v_mkMVarPlaceholder_99_, v_mkMVar_100_, v_mkMVarDead_101_, v_ppMVars_boxed_109_, v_ppMVarsAnonymous_boxed_110_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0(lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v_ref_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_ref_117_ = lean_ctor_get(v___y_114_, 2);
v___x_118_ = 0;
v___x_119_ = l_Lean_SourceInfo_fromRef(v_ref_117_, v___x_118_);
v___x_120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0___boxed(lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0(v___y_121_, v___y_122_, v___y_123_, v___y_124_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1(lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v_ref_143_; uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_ref_143_ = lean_ctor_get(v___y_140_, 2);
v___x_144_ = 0;
v___x_145_ = l_Lean_SourceInfo_fromRef(v_ref_143_, v___x_144_);
v___x_146_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4));
v___x_147_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5));
lean_inc_n(v___x_145_, 2);
v___x_148_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_145_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__6));
v___x_150_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_145_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
v___x_151_ = l_Lean_Syntax_node2(v___x_145_, v___x_146_, v___x_148_, v___x_150_);
v___x_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___boxed(lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1(v___y_153_, v___y_154_, v___y_155_, v___y_156_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2(lean_object* v___f_159_, lean_object* v_n_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
lean_object* v___x_166_; 
lean_inc(v___y_164_);
lean_inc_ref(v___y_163_);
lean_inc(v___y_162_);
lean_inc_ref(v___y_161_);
v___x_166_ = lean_apply_5(v___f_159_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, lean_box(0));
if (lean_obj_tag(v___x_166_) == 0)
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_179_; 
v_a_167_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_179_ == 0)
{
v___x_169_ = v___x_166_;
v_isShared_170_ = v_isSharedCheck_179_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v___x_166_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_179_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_171_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4));
v___x_172_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5));
lean_inc(v_a_167_);
v___x_173_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_173_, 0, v_a_167_);
lean_ctor_set(v___x_173_, 1, v___x_172_);
v___x_174_ = l_Lean_mkIdent(v_n_160_);
v___x_175_ = l_Lean_Syntax_node2(v_a_167_, v___x_171_, v___x_173_, v___x_174_);
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 0, v___x_175_);
v___x_177_ = v___x_169_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
else
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_187_; 
lean_dec(v_n_160_);
v_a_180_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_187_ == 0)
{
v___x_182_ = v___x_166_;
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_166_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_a_180_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2___boxed(lean_object* v___f_188_, lean_object* v_n_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2(v___f_188_, v_n_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3(lean_object* v_m_199_, lean_object* v___f_200_, lean_object* v_n_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_207_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__1));
v___x_208_ = l_Lean_Name_append(v___x_207_, v_m_199_);
v___x_209_ = l_Lean_reservedMacroScope;
v___x_210_ = l_Lean_addMacroScope(v___x_208_, v_n_201_, v___x_209_);
lean_inc(v___y_205_);
lean_inc_ref(v___y_204_);
lean_inc(v___y_203_);
lean_inc_ref(v___y_202_);
v___x_211_ = lean_apply_5(v___f_200_, v___y_202_, v___y_203_, v___y_204_, v___y_205_, lean_box(0));
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_224_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_224_ == 0)
{
v___x_214_ = v___x_211_;
v_isShared_215_ = v_isSharedCheck_224_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v___x_211_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_224_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_222_; 
v___x_216_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4));
v___x_217_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5));
lean_inc(v_a_212_);
v___x_218_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_218_, 0, v_a_212_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = l_Lean_mkIdent(v___x_210_);
v___x_220_ = l_Lean_Syntax_node2(v_a_212_, v___x_216_, v___x_218_, v___x_219_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v___x_220_);
v___x_222_ = v___x_214_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
else
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
lean_dec(v___x_210_);
v_a_225_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_232_ == 0)
{
v___x_227_ = v___x_211_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_211_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_a_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___boxed(lean_object* v_m_233_, lean_object* v___f_234_, lean_object* v_n_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3(v_m_233_, v___f_234_, v_n_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
lean_dec(v___y_239_);
lean_dec_ref(v___y_238_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux(lean_object* v_m_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v___f_256_; lean_object* v___f_257_; lean_object* v___f_258_; lean_object* v___f_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___f_256_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__0));
v___f_257_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__1));
v___f_258_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__2));
lean_inc(v_m_248_);
v___f_259_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___boxed), 8, 2);
lean_closure_set(v___f_259_, 0, v_m_248_);
lean_closure_set(v___f_259_, 1, v___f_256_);
v___x_260_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__3));
v___x_261_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_260_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_);
if (lean_obj_tag(v___x_261_) == 0)
{
lean_object* v_a_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v_a_262_ = lean_ctor_get(v___x_261_, 0);
lean_inc(v_a_262_);
lean_dec_ref_known(v___x_261_, 1);
v___x_263_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__4));
v___x_264_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_263_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_a_265_; uint8_t v___x_266_; uint8_t v___x_267_; lean_object* v___x_268_; 
v_a_265_ = lean_ctor_get(v___x_264_, 0);
lean_inc(v_a_265_);
lean_dec_ref_known(v___x_264_, 1);
v___x_266_ = lean_unbox(v_a_262_);
lean_dec(v_a_262_);
v___x_267_ = lean_unbox(v_a_265_);
lean_dec(v_a_265_);
v___x_268_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(v_m_248_, v___f_257_, v___f_258_, v___f_259_, v___x_266_, v___x_267_, v_a_251_, v_a_252_, v_a_253_, v_a_254_);
return v___x_268_;
}
else
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
lean_dec(v_a_262_);
lean_dec_ref(v___f_259_);
lean_dec(v_m_248_);
v_a_269_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_264_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_264_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
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
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
lean_dec_ref(v___f_259_);
lean_dec(v_m_248_);
v_a_277_ = lean_ctor_get(v___x_261_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_261_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_261_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___boxed(lean_object* v_m_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lean_PrettyPrinter_Delaborator_delabMVarAux(v_m_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_290_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0(lean_object* v_n_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
lean_object* v___x_301_; uint8_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_301_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5));
v___x_302_ = 1;
v___x_303_ = l_Lean_Name_toString(v_n_295_, v___x_302_);
v___x_304_ = lean_string_append(v___x_301_, v___x_303_);
lean_dec_ref(v___x_303_);
v___x_305_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___closed__0));
v___x_306_ = lean_string_append(v___x_304_, v___x_305_);
v___x_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___boxed(lean_object* v_n_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0(v_n_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1(lean_object* v_n_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v___x_321_; uint8_t v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_321_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5));
v___x_322_ = 1;
v___x_323_ = l_Lean_Name_toString(v_n_315_, v___x_322_);
v___x_324_ = lean_string_append(v___x_321_, v___x_323_);
lean_dec_ref(v___x_323_);
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1___boxed(lean_object* v_n_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1(v_n_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
lean_dec(v___y_330_);
lean_dec_ref(v___y_329_);
lean_dec(v___y_328_);
lean_dec_ref(v___y_327_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2(lean_object* v___x_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_333_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2___boxed(lean_object* v___x_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2(v___x_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr(lean_object* v_m_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
lean_object* v___f_358_; lean_object* v___f_359_; lean_object* v___x_360_; lean_object* v___f_361_; uint8_t v___x_362_; uint8_t v___x_363_; lean_object* v___x_364_; 
v___f_358_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__0));
v___f_359_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__1));
v___x_360_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_355_);
v___f_361_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__3));
v___x_362_ = l_Lean_getPPMVars(v___x_360_);
v___x_363_ = l_Lean_getPPMVarsAnonymous(v___x_360_);
lean_dec_ref(v___x_360_);
v___x_364_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(v_m_352_, v___f_361_, v___f_359_, v___f_358_, v___x_362_, v___x_363_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___boxed(lean_object* v_m_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr(v_m_365_, v_a_366_, v_a_367_, v_a_368_, v_a_369_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
lean_dec(v_a_367_);
lean_dec_ref(v_a_366_);
return v_res_371_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(lean_object* v_a_372_, lean_object* v_x_373_){
_start:
{
if (lean_obj_tag(v_x_373_) == 0)
{
uint8_t v___x_374_; 
v___x_374_ = 0;
return v___x_374_;
}
else
{
lean_object* v_key_375_; lean_object* v_tail_376_; uint8_t v___x_377_; 
v_key_375_ = lean_ctor_get(v_x_373_, 0);
v_tail_376_ = lean_ctor_get(v_x_373_, 2);
v___x_377_ = l_Lean_instBEqFVarId_beq(v_key_375_, v_a_372_);
if (v___x_377_ == 0)
{
v_x_373_ = v_tail_376_;
goto _start;
}
else
{
return v___x_377_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg___boxed(lean_object* v_a_379_, lean_object* v_x_380_){
_start:
{
uint8_t v_res_381_; lean_object* v_r_382_; 
v_res_381_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(v_a_379_, v_x_380_);
lean_dec(v_x_380_);
lean_dec(v_a_379_);
v_r_382_ = lean_box(v_res_381_);
return v_r_382_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg(lean_object* v_m_383_, lean_object* v_a_384_){
_start:
{
lean_object* v_buckets_385_; lean_object* v___x_386_; uint64_t v___x_387_; uint64_t v___x_388_; uint64_t v___x_389_; uint64_t v_fold_390_; uint64_t v___x_391_; uint64_t v___x_392_; uint64_t v___x_393_; size_t v___x_394_; size_t v___x_395_; size_t v___x_396_; size_t v___x_397_; size_t v___x_398_; lean_object* v___x_399_; uint8_t v___x_400_; 
v_buckets_385_ = lean_ctor_get(v_m_383_, 1);
v___x_386_ = lean_array_get_size(v_buckets_385_);
v___x_387_ = l_Lean_instHashableFVarId_hash(v_a_384_);
v___x_388_ = 32ULL;
v___x_389_ = lean_uint64_shift_right(v___x_387_, v___x_388_);
v_fold_390_ = lean_uint64_xor(v___x_387_, v___x_389_);
v___x_391_ = 16ULL;
v___x_392_ = lean_uint64_shift_right(v_fold_390_, v___x_391_);
v___x_393_ = lean_uint64_xor(v_fold_390_, v___x_392_);
v___x_394_ = lean_uint64_to_usize(v___x_393_);
v___x_395_ = lean_usize_of_nat(v___x_386_);
v___x_396_ = ((size_t)1ULL);
v___x_397_ = lean_usize_sub(v___x_395_, v___x_396_);
v___x_398_ = lean_usize_land(v___x_394_, v___x_397_);
v___x_399_ = lean_array_uget_borrowed(v_buckets_385_, v___x_398_);
v___x_400_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(v_a_384_, v___x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg___boxed(lean_object* v_m_401_, lean_object* v_a_402_){
_start:
{
uint8_t v_res_403_; lean_object* v_r_404_; 
v_res_403_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg(v_m_401_, v_a_402_);
lean_dec(v_a_402_);
lean_dec_ref(v_m_401_);
v_r_404_ = lean_box(v_res_403_);
return v_r_404_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_405_, lean_object* v_x_406_){
_start:
{
if (lean_obj_tag(v_x_406_) == 0)
{
return v_x_405_;
}
else
{
lean_object* v_key_407_; lean_object* v_value_408_; lean_object* v_tail_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_432_; 
v_key_407_ = lean_ctor_get(v_x_406_, 0);
v_value_408_ = lean_ctor_get(v_x_406_, 1);
v_tail_409_ = lean_ctor_get(v_x_406_, 2);
v_isSharedCheck_432_ = !lean_is_exclusive(v_x_406_);
if (v_isSharedCheck_432_ == 0)
{
v___x_411_ = v_x_406_;
v_isShared_412_ = v_isSharedCheck_432_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_tail_409_);
lean_inc(v_value_408_);
lean_inc(v_key_407_);
lean_dec(v_x_406_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_432_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; uint64_t v___x_414_; uint64_t v___x_415_; uint64_t v___x_416_; uint64_t v_fold_417_; uint64_t v___x_418_; uint64_t v___x_419_; uint64_t v___x_420_; size_t v___x_421_; size_t v___x_422_; size_t v___x_423_; size_t v___x_424_; size_t v___x_425_; lean_object* v___x_426_; lean_object* v___x_428_; 
v___x_413_ = lean_array_get_size(v_x_405_);
v___x_414_ = l_Lean_instHashableFVarId_hash(v_key_407_);
v___x_415_ = 32ULL;
v___x_416_ = lean_uint64_shift_right(v___x_414_, v___x_415_);
v_fold_417_ = lean_uint64_xor(v___x_414_, v___x_416_);
v___x_418_ = 16ULL;
v___x_419_ = lean_uint64_shift_right(v_fold_417_, v___x_418_);
v___x_420_ = lean_uint64_xor(v_fold_417_, v___x_419_);
v___x_421_ = lean_uint64_to_usize(v___x_420_);
v___x_422_ = lean_usize_of_nat(v___x_413_);
v___x_423_ = ((size_t)1ULL);
v___x_424_ = lean_usize_sub(v___x_422_, v___x_423_);
v___x_425_ = lean_usize_land(v___x_421_, v___x_424_);
v___x_426_ = lean_array_uget_borrowed(v_x_405_, v___x_425_);
lean_inc(v___x_426_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 2, v___x_426_);
v___x_428_ = v___x_411_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_key_407_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_value_408_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v___x_426_);
v___x_428_ = v_reuseFailAlloc_431_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
lean_object* v___x_429_; 
v___x_429_ = lean_array_uset(v_x_405_, v___x_425_, v___x_428_);
v_x_405_ = v___x_429_;
v_x_406_ = v_tail_409_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3___redArg(lean_object* v_i_433_, lean_object* v_source_434_, lean_object* v_target_435_){
_start:
{
lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_436_ = lean_array_get_size(v_source_434_);
v___x_437_ = lean_nat_dec_lt(v_i_433_, v___x_436_);
if (v___x_437_ == 0)
{
lean_dec_ref(v_source_434_);
lean_dec(v_i_433_);
return v_target_435_;
}
else
{
lean_object* v_es_438_; lean_object* v___x_439_; lean_object* v_source_440_; lean_object* v_target_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v_es_438_ = lean_array_fget(v_source_434_, v_i_433_);
v___x_439_ = lean_box(0);
v_source_440_ = lean_array_fset(v_source_434_, v_i_433_, v___x_439_);
v_target_441_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5___redArg(v_target_435_, v_es_438_);
v___x_442_ = lean_unsigned_to_nat(1u);
v___x_443_ = lean_nat_add(v_i_433_, v___x_442_);
lean_dec(v_i_433_);
v_i_433_ = v___x_443_;
v_source_434_ = v_source_440_;
v_target_435_ = v_target_441_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2___redArg(lean_object* v_data_445_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v_nbuckets_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_446_ = lean_array_get_size(v_data_445_);
v___x_447_ = lean_unsigned_to_nat(2u);
v_nbuckets_448_ = lean_nat_mul(v___x_446_, v___x_447_);
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = lean_box(0);
v___x_451_ = lean_mk_array(v_nbuckets_448_, v___x_450_);
v___x_452_ = lean_array_propagate_mark(v_data_445_, v___x_451_);
v___x_453_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3___redArg(v___x_449_, v_data_445_, v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1___redArg(lean_object* v_m_454_, lean_object* v_a_455_, lean_object* v_b_456_){
_start:
{
lean_object* v_size_457_; lean_object* v_buckets_458_; lean_object* v___x_459_; uint64_t v___x_460_; uint64_t v___x_461_; uint64_t v___x_462_; uint64_t v_fold_463_; uint64_t v___x_464_; uint64_t v___x_465_; uint64_t v___x_466_; size_t v___x_467_; size_t v___x_468_; size_t v___x_469_; size_t v___x_470_; size_t v___x_471_; lean_object* v_bkt_472_; uint8_t v___x_473_; 
v_size_457_ = lean_ctor_get(v_m_454_, 0);
v_buckets_458_ = lean_ctor_get(v_m_454_, 1);
v___x_459_ = lean_array_get_size(v_buckets_458_);
v___x_460_ = l_Lean_instHashableFVarId_hash(v_a_455_);
v___x_461_ = 32ULL;
v___x_462_ = lean_uint64_shift_right(v___x_460_, v___x_461_);
v_fold_463_ = lean_uint64_xor(v___x_460_, v___x_462_);
v___x_464_ = 16ULL;
v___x_465_ = lean_uint64_shift_right(v_fold_463_, v___x_464_);
v___x_466_ = lean_uint64_xor(v_fold_463_, v___x_465_);
v___x_467_ = lean_uint64_to_usize(v___x_466_);
v___x_468_ = lean_usize_of_nat(v___x_459_);
v___x_469_ = ((size_t)1ULL);
v___x_470_ = lean_usize_sub(v___x_468_, v___x_469_);
v___x_471_ = lean_usize_land(v___x_467_, v___x_470_);
v_bkt_472_ = lean_array_uget_borrowed(v_buckets_458_, v___x_471_);
v___x_473_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(v_a_455_, v_bkt_472_);
if (v___x_473_ == 0)
{
lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_494_; 
lean_inc_ref(v_buckets_458_);
lean_inc(v_size_457_);
v_isSharedCheck_494_ = !lean_is_exclusive(v_m_454_);
if (v_isSharedCheck_494_ == 0)
{
lean_object* v_unused_495_; lean_object* v_unused_496_; 
v_unused_495_ = lean_ctor_get(v_m_454_, 1);
lean_dec(v_unused_495_);
v_unused_496_ = lean_ctor_get(v_m_454_, 0);
lean_dec(v_unused_496_);
v___x_475_ = v_m_454_;
v_isShared_476_ = v_isSharedCheck_494_;
goto v_resetjp_474_;
}
else
{
lean_dec(v_m_454_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_494_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v_size_x27_478_; lean_object* v___x_479_; lean_object* v_buckets_x27_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_477_ = lean_unsigned_to_nat(1u);
v_size_x27_478_ = lean_nat_add(v_size_457_, v___x_477_);
lean_dec(v_size_457_);
lean_inc(v_bkt_472_);
v___x_479_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_479_, 0, v_a_455_);
lean_ctor_set(v___x_479_, 1, v_b_456_);
lean_ctor_set(v___x_479_, 2, v_bkt_472_);
v_buckets_x27_480_ = lean_array_uset(v_buckets_458_, v___x_471_, v___x_479_);
v___x_481_ = lean_unsigned_to_nat(4u);
v___x_482_ = lean_nat_mul(v_size_x27_478_, v___x_481_);
v___x_483_ = lean_unsigned_to_nat(3u);
v___x_484_ = lean_nat_div(v___x_482_, v___x_483_);
lean_dec(v___x_482_);
v___x_485_ = lean_array_get_size(v_buckets_x27_480_);
v___x_486_ = lean_nat_dec_le(v___x_484_, v___x_485_);
lean_dec(v___x_484_);
if (v___x_486_ == 0)
{
lean_object* v_val_487_; lean_object* v___x_489_; 
v_val_487_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2___redArg(v_buckets_x27_480_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v_val_487_);
lean_ctor_set(v___x_475_, 0, v_size_x27_478_);
v___x_489_ = v___x_475_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_size_x27_478_);
lean_ctor_set(v_reuseFailAlloc_490_, 1, v_val_487_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
else
{
lean_object* v___x_492_; 
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v_buckets_x27_480_);
lean_ctor_set(v___x_475_, 0, v_size_x27_478_);
v___x_492_ = v___x_475_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_size_x27_478_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_buckets_x27_480_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
else
{
lean_dec(v_b_456_);
lean_dec(v_a_455_);
return v_m_454_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg(lean_object* v_val_500_, lean_object* v_as_501_, size_t v_sz_502_, size_t v_i_503_, lean_object* v_b_504_){
_start:
{
lean_object* v_a_507_; uint8_t v___x_511_; 
v___x_511_ = lean_usize_dec_lt(v_i_503_, v_sz_502_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; 
lean_dec_ref(v_val_500_);
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v_b_504_);
return v___x_512_;
}
else
{
lean_object* v_snd_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_605_; 
v_snd_513_ = lean_ctor_get(v_b_504_, 1);
v_isSharedCheck_605_ = !lean_is_exclusive(v_b_504_);
if (v_isSharedCheck_605_ == 0)
{
lean_object* v_unused_606_; 
v_unused_606_ = lean_ctor_get(v_b_504_, 0);
lean_dec(v_unused_606_);
v___x_515_ = v_b_504_;
v_isShared_516_ = v_isSharedCheck_605_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_snd_513_);
lean_dec(v_b_504_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_605_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v_snd_517_; lean_object* v_fst_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_604_; 
v_snd_517_ = lean_ctor_get(v_snd_513_, 1);
v_fst_518_ = lean_ctor_get(v_snd_513_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v_snd_513_);
if (v_isSharedCheck_604_ == 0)
{
v___x_520_ = v_snd_513_;
v_isShared_521_ = v_isSharedCheck_604_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_snd_517_);
lean_inc(v_fst_518_);
lean_dec(v_snd_513_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_604_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v_array_522_; lean_object* v_start_523_; lean_object* v_stop_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v_array_522_ = lean_ctor_get(v_snd_517_, 0);
v_start_523_ = lean_ctor_get(v_snd_517_, 1);
v_stop_524_ = lean_ctor_get(v_snd_517_, 2);
v___x_525_ = lean_box(0);
v___x_526_ = lean_nat_dec_lt(v_start_523_, v_stop_524_);
if (v___x_526_ == 0)
{
lean_object* v___x_528_; 
lean_dec_ref(v_val_500_);
if (v_isShared_521_ == 0)
{
v___x_528_ = v___x_520_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_fst_518_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v_snd_517_);
v___x_528_ = v_reuseFailAlloc_533_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_530_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v___x_528_);
lean_ctor_set(v___x_515_, 0, v___x_525_);
v___x_530_ = v___x_515_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_525_);
lean_ctor_set(v_reuseFailAlloc_532_, 1, v___x_528_);
v___x_530_ = v_reuseFailAlloc_532_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
lean_object* v___x_531_; 
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
return v___x_531_;
}
}
}
else
{
lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_600_; 
lean_inc(v_stop_524_);
lean_inc(v_start_523_);
lean_inc_ref(v_array_522_);
v_isSharedCheck_600_ = !lean_is_exclusive(v_snd_517_);
if (v_isSharedCheck_600_ == 0)
{
lean_object* v_unused_601_; lean_object* v_unused_602_; lean_object* v_unused_603_; 
v_unused_601_ = lean_ctor_get(v_snd_517_, 2);
lean_dec(v_unused_601_);
v_unused_602_ = lean_ctor_get(v_snd_517_, 1);
lean_dec(v_unused_602_);
v_unused_603_ = lean_ctor_get(v_snd_517_, 0);
lean_dec(v_unused_603_);
v___x_535_ = v_snd_517_;
v_isShared_536_ = v_isSharedCheck_600_;
goto v_resetjp_534_;
}
else
{
lean_dec(v_snd_517_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_600_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v_lctx_537_; lean_object* v___x_538_; lean_object* v_a_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v_lctx_537_ = lean_ctor_get(v_val_500_, 1);
v___x_538_ = lean_array_fget(v_array_522_, v_start_523_);
v_a_539_ = lean_array_uget_borrowed(v_as_501_, v_i_503_);
v___x_540_ = lean_unsigned_to_nat(1u);
v___x_541_ = lean_nat_add(v_start_523_, v___x_540_);
lean_dec(v_start_523_);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 1, v___x_541_);
v___x_543_ = v___x_535_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_array_522_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v___x_541_);
lean_ctor_set(v_reuseFailAlloc_599_, 2, v_stop_524_);
v___x_543_ = v_reuseFailAlloc_599_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = l_Lean_Expr_fvarId_x21(v_a_539_);
lean_inc_ref(v_lctx_537_);
v___x_545_ = lean_local_ctx_find(v_lctx_537_, v___x_544_);
if (lean_obj_tag(v___x_545_) == 1)
{
lean_object* v_val_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_590_; 
v_val_546_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_590_ == 0)
{
v___x_548_ = v___x_545_;
v_isShared_549_ = v_isSharedCheck_590_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_val_546_);
lean_dec(v___x_545_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_590_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
uint8_t v___x_550_; uint8_t v___x_551_; 
v___x_550_ = 0;
v___x_551_ = l_Lean_LocalDecl_hasValue(v_val_546_, v___x_550_);
lean_dec(v_val_546_);
if (v___x_551_ == 0)
{
if (lean_obj_tag(v___x_538_) == 1)
{
lean_object* v_fvarId_552_; uint8_t v___x_553_; 
v_fvarId_552_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_fvarId_552_);
lean_dec_ref_known(v___x_538_, 1);
v___x_553_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg(v_fst_518_, v_fvarId_552_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_557_; 
lean_del_object(v___x_548_);
v___x_554_ = lean_box(0);
v___x_555_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1___redArg(v_fst_518_, v_fvarId_552_, v___x_554_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 1, v___x_543_);
lean_ctor_set(v___x_520_, 0, v___x_555_);
v___x_557_ = v___x_520_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_555_);
lean_ctor_set(v_reuseFailAlloc_561_, 1, v___x_543_);
v___x_557_ = v_reuseFailAlloc_561_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
lean_object* v___x_559_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v___x_557_);
lean_ctor_set(v___x_515_, 0, v___x_525_);
v___x_559_ = v___x_515_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_525_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v___x_557_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
v_a_507_ = v___x_559_;
goto v___jp_506_;
}
}
}
else
{
lean_object* v___x_562_; lean_object* v___x_564_; 
lean_dec(v_fvarId_552_);
lean_dec_ref(v_val_500_);
v___x_562_ = lean_box(v___x_551_);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 0, v___x_562_);
v___x_564_ = v___x_548_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_572_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
lean_object* v___x_566_; 
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 1, v___x_543_);
v___x_566_ = v___x_520_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_fst_518_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v___x_543_);
v___x_566_ = v_reuseFailAlloc_571_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
lean_object* v___x_568_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v___x_566_);
lean_ctor_set(v___x_515_, 0, v___x_564_);
v___x_568_ = v___x_515_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_564_);
lean_ctor_set(v_reuseFailAlloc_570_, 1, v___x_566_);
v___x_568_ = v_reuseFailAlloc_570_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
lean_object* v___x_569_; 
v___x_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
return v___x_569_;
}
}
}
}
}
else
{
lean_object* v___x_573_; lean_object* v___x_575_; 
lean_dec(v___x_538_);
lean_dec_ref(v_val_500_);
v___x_573_ = lean_box(v___x_551_);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 0, v___x_573_);
v___x_575_ = v___x_548_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v___x_573_);
v___x_575_ = v_reuseFailAlloc_583_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_577_; 
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 1, v___x_543_);
v___x_577_ = v___x_520_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_fst_518_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v___x_543_);
v___x_577_ = v_reuseFailAlloc_582_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
lean_object* v___x_579_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v___x_577_);
lean_ctor_set(v___x_515_, 0, v___x_575_);
v___x_579_ = v___x_515_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_575_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___x_577_);
v___x_579_ = v_reuseFailAlloc_581_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; 
v___x_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
return v___x_580_;
}
}
}
}
}
else
{
lean_object* v___x_585_; 
lean_del_object(v___x_548_);
lean_dec(v___x_538_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 1, v___x_543_);
v___x_585_ = v___x_520_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_fst_518_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v___x_543_);
v___x_585_ = v_reuseFailAlloc_589_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_587_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v___x_585_);
lean_ctor_set(v___x_515_, 0, v___x_525_);
v___x_587_ = v___x_515_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_525_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
v_a_507_ = v___x_587_;
goto v___jp_506_;
}
}
}
}
}
else
{
lean_object* v___x_591_; lean_object* v___x_593_; 
lean_dec(v___x_545_);
lean_dec(v___x_538_);
lean_dec_ref(v_val_500_);
v___x_591_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___closed__0));
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 1, v___x_543_);
v___x_593_ = v___x_520_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_fst_518_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v___x_543_);
v___x_593_ = v_reuseFailAlloc_598_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_595_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v___x_593_);
lean_ctor_set(v___x_515_, 0, v___x_591_);
v___x_595_ = v___x_515_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_591_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v___x_593_);
v___x_595_ = v_reuseFailAlloc_597_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
lean_object* v___x_596_; 
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
return v___x_596_;
}
}
}
}
}
}
}
}
}
v___jp_506_:
{
size_t v___x_508_; size_t v___x_509_; 
v___x_508_ = ((size_t)1ULL);
v___x_509_ = lean_usize_add(v_i_503_, v___x_508_);
v_i_503_ = v___x_509_;
v_b_504_ = v_a_507_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___boxed(lean_object* v_val_607_, lean_object* v_as_608_, lean_object* v_sz_609_, lean_object* v_i_610_, lean_object* v_b_611_, lean_object* v___y_612_){
_start:
{
size_t v_sz_boxed_613_; size_t v_i_boxed_614_; lean_object* v_res_615_; 
v_sz_boxed_613_ = lean_unbox_usize(v_sz_609_);
lean_dec(v_sz_609_);
v_i_boxed_614_ = lean_unbox_usize(v_i_610_);
lean_dec(v_i_610_);
v_res_615_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg(v_val_607_, v_as_608_, v_sz_boxed_613_, v_i_boxed_614_, v_b_611_);
lean_dec_ref(v_as_608_);
return v_res_615_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0(void){
_start:
{
lean_object* v___x_616_; lean_object* v_dummy_617_; 
v___x_616_ = lean_box(0);
v_dummy_617_ = l_Lean_Expr_sort___override(v___x_616_);
return v_dummy_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment(lean_object* v_e_618_, lean_object* v_decl_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_){
_start:
{
lean_object* v_fvars_625_; lean_object* v_mvarIdPending_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_694_; 
v_fvars_625_ = lean_ctor_get(v_decl_619_, 0);
v_mvarIdPending_626_ = lean_ctor_get(v_decl_619_, 1);
v_isSharedCheck_694_ = !lean_is_exclusive(v_decl_619_);
if (v_isSharedCheck_694_ == 0)
{
v___x_628_ = v_decl_619_;
v_isShared_629_ = v_isSharedCheck_694_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_mvarIdPending_626_);
lean_inc(v_fvars_625_);
lean_dec(v_decl_619_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_694_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_630_ = l_Lean_Expr_getAppNumArgs(v_e_618_);
v___x_631_ = lean_array_get_size(v_fvars_625_);
v___x_632_ = lean_nat_dec_eq(v___x_630_, v___x_631_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; 
lean_dec(v___x_630_);
lean_del_object(v___x_628_);
lean_dec(v_mvarIdPending_626_);
lean_dec_ref(v_fvars_625_);
lean_dec_ref(v_e_618_);
v___x_633_ = lean_box(v___x_632_);
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
return v___x_634_;
}
else
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_636_ = l_Lean_MVarId_findDecl_x3f___redArg(v_mvarIdPending_626_, v_a_621_);
lean_dec(v_mvarIdPending_626_);
if (lean_obj_tag(v___x_636_) == 0)
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_685_; 
v_a_637_ = lean_ctor_get(v___x_636_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_685_ == 0)
{
v___x_639_ = v___x_636_;
v_isShared_640_ = v_isSharedCheck_685_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_636_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_685_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
if (lean_obj_tag(v_a_637_) == 1)
{
lean_object* v_val_641_; lean_object* v_dummy_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_652_; 
lean_del_object(v___x_639_);
v_val_641_ = lean_ctor_get(v_a_637_, 0);
lean_inc(v_val_641_);
lean_dec_ref_known(v_a_637_, 1);
v_dummy_642_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0, &l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0_once, _init_l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0);
lean_inc(v___x_630_);
v___x_643_ = lean_mk_array(v___x_630_, v_dummy_642_);
v___x_644_ = lean_unsigned_to_nat(1u);
v___x_645_ = lean_nat_sub(v___x_630_, v___x_644_);
lean_dec(v___x_630_);
v___x_646_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_618_, v___x_643_, v___x_645_);
v___x_647_ = lean_unsigned_to_nat(0u);
v___x_648_ = lean_array_get_size(v___x_646_);
v___x_649_ = l_Array_toSubarray___redArg(v___x_646_, v___x_647_, v___x_648_);
v___x_650_ = lean_box(0);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_649_);
lean_ctor_set(v___x_628_, 0, v___x_635_);
v___x_652_ = v___x_628_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v___x_649_);
v___x_652_ = v_reuseFailAlloc_679_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_object* v___x_653_; size_t v_sz_654_; size_t v___x_655_; lean_object* v___x_656_; 
v___x_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_650_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v_sz_654_ = lean_array_size(v_fvars_625_);
v___x_655_ = ((size_t)0ULL);
v___x_656_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg(v_val_641_, v_fvars_625_, v_sz_654_, v___x_655_, v___x_653_);
lean_dec_ref(v_fvars_625_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_670_; 
v_a_657_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_670_ == 0)
{
v___x_659_ = v___x_656_;
v_isShared_660_ = v_isSharedCheck_670_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_656_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_670_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v_fst_661_; 
v_fst_661_ = lean_ctor_get(v_a_657_, 0);
lean_inc(v_fst_661_);
lean_dec(v_a_657_);
if (lean_obj_tag(v_fst_661_) == 0)
{
lean_object* v___x_662_; lean_object* v___x_664_; 
v___x_662_ = lean_box(v___x_632_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 0, v___x_662_);
v___x_664_ = v___x_659_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v___x_662_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
else
{
lean_object* v_val_666_; lean_object* v___x_668_; 
v_val_666_ = lean_ctor_get(v_fst_661_, 0);
lean_inc(v_val_666_);
lean_dec_ref_known(v_fst_661_, 1);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 0, v_val_666_);
v___x_668_ = v___x_659_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_val_666_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
v_a_671_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_656_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_656_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
else
{
uint8_t v___x_680_; lean_object* v___x_681_; lean_object* v___x_683_; 
lean_dec(v_a_637_);
lean_dec(v___x_630_);
lean_del_object(v___x_628_);
lean_dec_ref(v_fvars_625_);
lean_dec_ref(v_e_618_);
v___x_680_ = 0;
v___x_681_ = lean_box(v___x_680_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v___x_681_);
v___x_683_ = v___x_639_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_681_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
else
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
lean_dec(v___x_630_);
lean_del_object(v___x_628_);
lean_dec_ref(v_fvars_625_);
lean_dec_ref(v_e_618_);
v_a_686_ = lean_ctor_get(v___x_636_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_636_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_636_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_686_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___boxed(lean_object* v_e_695_, lean_object* v_decl_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment(v_e_695_, v_decl_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
lean_dec(v_a_700_);
lean_dec_ref(v_a_699_);
lean_dec(v_a_698_);
lean_dec_ref(v_a_697_);
return v_res_702_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0(lean_object* v_00_u03b2_703_, lean_object* v_m_704_, lean_object* v_a_705_){
_start:
{
uint8_t v___x_706_; 
v___x_706_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg(v_m_704_, v_a_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___boxed(lean_object* v_00_u03b2_707_, lean_object* v_m_708_, lean_object* v_a_709_){
_start:
{
uint8_t v_res_710_; lean_object* v_r_711_; 
v_res_710_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0(v_00_u03b2_707_, v_m_708_, v_a_709_);
lean_dec(v_a_709_);
lean_dec_ref(v_m_708_);
v_r_711_ = lean_box(v_res_710_);
return v_r_711_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1(lean_object* v_00_u03b2_712_, lean_object* v_m_713_, lean_object* v_a_714_, lean_object* v_b_715_){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1___redArg(v_m_713_, v_a_714_, v_b_715_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2(lean_object* v_val_717_, lean_object* v_as_718_, size_t v_sz_719_, size_t v_i_720_, lean_object* v_b_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg(v_val_717_, v_as_718_, v_sz_719_, v_i_720_, v_b_721_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___boxed(lean_object* v_val_728_, lean_object* v_as_729_, lean_object* v_sz_730_, lean_object* v_i_731_, lean_object* v_b_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
size_t v_sz_boxed_738_; size_t v_i_boxed_739_; lean_object* v_res_740_; 
v_sz_boxed_738_ = lean_unbox_usize(v_sz_730_);
lean_dec(v_sz_730_);
v_i_boxed_739_ = lean_unbox_usize(v_i_731_);
lean_dec(v_i_731_);
v_res_740_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2(v_val_728_, v_as_729_, v_sz_boxed_738_, v_i_boxed_739_, v_b_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
lean_dec_ref(v_as_729_);
return v_res_740_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0(lean_object* v_00_u03b2_741_, lean_object* v_a_742_, lean_object* v_x_743_){
_start:
{
uint8_t v___x_744_; 
v___x_744_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(v_a_742_, v_x_743_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___boxed(lean_object* v_00_u03b2_745_, lean_object* v_a_746_, lean_object* v_x_747_){
_start:
{
uint8_t v_res_748_; lean_object* v_r_749_; 
v_res_748_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0(v_00_u03b2_745_, v_a_746_, v_x_747_);
lean_dec(v_x_747_);
lean_dec(v_a_746_);
v_r_749_ = lean_box(v_res_748_);
return v_r_749_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2(lean_object* v_00_u03b2_750_, lean_object* v_data_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2___redArg(v_data_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_753_, lean_object* v_i_754_, lean_object* v_source_755_, lean_object* v_target_756_){
_start:
{
lean_object* v___x_757_; 
v___x_757_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3___redArg(v_i_754_, v_source_755_, v_target_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_758_, lean_object* v_x_759_, lean_object* v_x_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5___redArg(v_x_759_, v_x_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(lean_object* v_mvarId_762_, lean_object* v___y_763_){
_start:
{
lean_object* v___x_765_; lean_object* v_mctx_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_765_ = lean_st_ref_get(v___y_763_);
v_mctx_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc_ref(v_mctx_766_);
lean_dec(v___x_765_);
v___x_767_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_766_, v_mvarId_762_);
lean_dec_ref(v_mctx_766_);
v___x_768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_768_, 0, v___x_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg___boxed(lean_object* v_mvarId_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(v_mvarId_769_, v___y_770_);
lean_dec(v___y_770_);
lean_dec(v_mvarId_769_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0(lean_object* v_mvarId_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(v_mvarId_773_, v___y_775_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___boxed(lean_object* v_mvarId_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0(v_mvarId_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v_mvarId_780_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg(lean_object* v_e_787_, lean_object* v___y_788_){
_start:
{
uint8_t v___x_790_; 
v___x_790_ = l_Lean_Expr_hasMVar(v_e_787_);
if (v___x_790_ == 0)
{
lean_object* v___x_791_; 
v___x_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_791_, 0, v_e_787_);
return v___x_791_;
}
else
{
lean_object* v___x_792_; lean_object* v_mctx_793_; lean_object* v___x_794_; lean_object* v_fst_795_; lean_object* v_snd_796_; lean_object* v___x_797_; lean_object* v_cache_798_; lean_object* v_zetaDeltaFVarIds_799_; lean_object* v_postponed_800_; lean_object* v_diag_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_810_; 
v___x_792_ = lean_st_ref_get(v___y_788_);
v_mctx_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc_ref(v_mctx_793_);
lean_dec(v___x_792_);
v___x_794_ = l_Lean_instantiateMVarsCore(v_mctx_793_, v_e_787_);
v_fst_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_fst_795_);
v_snd_796_ = lean_ctor_get(v___x_794_, 1);
lean_inc(v_snd_796_);
lean_dec_ref(v___x_794_);
v___x_797_ = lean_st_ref_take(v___y_788_);
v_cache_798_ = lean_ctor_get(v___x_797_, 1);
v_zetaDeltaFVarIds_799_ = lean_ctor_get(v___x_797_, 2);
v_postponed_800_ = lean_ctor_get(v___x_797_, 3);
v_diag_801_ = lean_ctor_get(v___x_797_, 4);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_810_ == 0)
{
lean_object* v_unused_811_; 
v_unused_811_ = lean_ctor_get(v___x_797_, 0);
lean_dec(v_unused_811_);
v___x_803_ = v___x_797_;
v_isShared_804_ = v_isSharedCheck_810_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_diag_801_);
lean_inc(v_postponed_800_);
lean_inc(v_zetaDeltaFVarIds_799_);
lean_inc(v_cache_798_);
lean_dec(v___x_797_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_810_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 0, v_snd_796_);
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_snd_796_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v_cache_798_);
lean_ctor_set(v_reuseFailAlloc_809_, 2, v_zetaDeltaFVarIds_799_);
lean_ctor_set(v_reuseFailAlloc_809_, 3, v_postponed_800_);
lean_ctor_set(v_reuseFailAlloc_809_, 4, v_diag_801_);
v___x_806_ = v_reuseFailAlloc_809_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = lean_st_ref_put(v___y_788_, v___x_806_);
v___x_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_808_, 0, v_fst_795_);
return v___x_808_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg___boxed(lean_object* v_e_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg(v_e_812_, v___y_813_);
lean_dec(v___y_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1(lean_object* v_e_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v___x_822_; 
v___x_822_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg(v_e_816_, v___y_818_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___boxed(lean_object* v_e_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1(v_e_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(lean_object* v_mvarId_830_, lean_object* v___y_831_){
_start:
{
lean_object* v___x_833_; lean_object* v_mctx_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_833_ = lean_st_ref_get(v___y_831_);
v_mctx_834_ = lean_ctor_get(v___x_833_, 0);
lean_inc_ref(v_mctx_834_);
lean_dec(v___x_833_);
v___x_835_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_834_, v_mvarId_830_);
lean_dec_ref(v_mctx_834_);
v___x_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg___boxed(lean_object* v_mvarId_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(v_mvarId_837_, v___y_838_);
lean_dec(v___y_838_);
lean_dec(v_mvarId_837_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2(lean_object* v_mvarId_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(v_mvarId_841_, v___y_843_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___boxed(lean_object* v_mvarId_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2(v_mvarId_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v_mvarId_848_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending(lean_object* v_mvarIdPending_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(v_mvarIdPending_855_, v_a_857_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_937_; 
v_a_862_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_937_ == 0)
{
v___x_864_ = v___x_861_;
v_isShared_865_ = v_isSharedCheck_937_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_861_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_937_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
if (lean_obj_tag(v_a_862_) == 1)
{
lean_object* v_val_866_; lean_object* v___x_867_; uint8_t v___x_868_; 
v_val_866_ = lean_ctor_get(v_a_862_, 0);
lean_inc(v_val_866_);
lean_dec_ref_known(v_a_862_, 1);
v___x_867_ = l_Lean_Expr_getAppFn_x27(v_val_866_);
v___x_868_ = l_Lean_Expr_isMVar(v___x_867_);
lean_dec_ref(v___x_867_);
if (v___x_868_ == 0)
{
lean_object* v___x_870_; 
lean_dec(v_val_866_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v_mvarIdPending_855_);
v___x_870_ = v___x_864_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_mvarIdPending_855_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
else
{
lean_object* v___x_872_; 
lean_del_object(v___x_864_);
v___x_872_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg(v_val_866_, v_a_857_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_925_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_925_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_925_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_925_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_Expr_consumeMData(v_a_873_);
lean_dec(v_a_873_);
if (lean_obj_tag(v___x_877_) == 2)
{
lean_object* v_mvarId_878_; lean_object* v___x_880_; 
lean_dec(v_mvarIdPending_855_);
v_mvarId_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_mvarId_878_);
lean_dec_ref_known(v___x_877_, 1);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v_mvarId_878_);
v___x_880_ = v___x_875_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_mvarId_878_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
else
{
lean_object* v___x_882_; 
v___x_882_ = l_Lean_Expr_getAppFn_x27(v___x_877_);
if (lean_obj_tag(v___x_882_) == 2)
{
lean_object* v_mvarId_883_; lean_object* v___x_884_; 
lean_del_object(v___x_875_);
v_mvarId_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_mvarId_883_);
lean_dec_ref_known(v___x_882_, 1);
v___x_884_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(v_mvarId_883_, v_a_857_);
lean_dec(v_mvarId_883_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_913_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_913_ == 0)
{
v___x_887_ = v___x_884_;
v_isShared_888_ = v_isSharedCheck_913_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_884_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_913_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
if (lean_obj_tag(v_a_885_) == 1)
{
lean_object* v_val_889_; lean_object* v___x_890_; 
lean_del_object(v___x_887_);
v_val_889_ = lean_ctor_get(v_a_885_, 0);
lean_inc_n(v_val_889_, 2);
lean_dec_ref_known(v_a_885_, 1);
v___x_890_ = l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment(v___x_877_, v_val_889_, v_a_856_, v_a_857_, v_a_858_, v_a_859_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_901_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_901_ == 0)
{
v___x_893_ = v___x_890_;
v_isShared_894_ = v_isSharedCheck_901_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_890_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_901_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
uint8_t v___x_895_; 
v___x_895_ = lean_unbox(v_a_891_);
lean_dec(v_a_891_);
if (v___x_895_ == 0)
{
lean_object* v___x_897_; 
lean_dec(v_val_889_);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v_mvarIdPending_855_);
v___x_897_ = v___x_893_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_mvarIdPending_855_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
else
{
lean_object* v_mvarIdPending_899_; 
lean_del_object(v___x_893_);
lean_dec(v_mvarIdPending_855_);
v_mvarIdPending_899_ = lean_ctor_get(v_val_889_, 1);
lean_inc(v_mvarIdPending_899_);
lean_dec(v_val_889_);
v_mvarIdPending_855_ = v_mvarIdPending_899_;
goto _start;
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec(v_val_889_);
lean_dec(v_mvarIdPending_855_);
v_a_902_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_890_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_890_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
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
lean_object* v___x_911_; 
lean_dec(v_a_885_);
lean_dec_ref(v___x_877_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v_mvarIdPending_855_);
v___x_911_ = v___x_887_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_mvarIdPending_855_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
else
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
lean_dec_ref(v___x_877_);
lean_dec(v_mvarIdPending_855_);
v_a_914_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_884_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_884_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
else
{
lean_object* v___x_923_; 
lean_dec_ref(v___x_882_);
lean_dec_ref(v___x_877_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v_mvarIdPending_855_);
v___x_923_ = v___x_875_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_mvarIdPending_855_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec(v_mvarIdPending_855_);
v_a_926_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_872_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_872_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
else
{
lean_object* v___x_935_; 
lean_dec(v_a_862_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v_mvarIdPending_855_);
v___x_935_ = v___x_864_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_mvarIdPending_855_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
else
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
lean_dec(v_mvarIdPending_855_);
v_a_938_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_861_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_861_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_938_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending___boxed(lean_object* v_mvarIdPending_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending(v_mvarIdPending_946_, v_a_947_, v_a_948_, v_a_949_, v_a_950_);
lean_dec(v_a_950_);
lean_dec_ref(v_a_949_);
lean_dec(v_a_948_);
lean_dec_ref(v_a_947_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(lean_object* v_n_954_){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_955_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___closed__0));
v___x_956_ = lean_string_append(v___x_955_, v_n_954_);
v___x_957_ = lean_string_append(v___x_956_, v___x_955_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___boxed(lean_object* v_n_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(v_n_958_);
lean_dec_ref(v_n_958_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString_spec__0(lean_object* v_a_960_, lean_object* v_a_961_){
_start:
{
if (lean_obj_tag(v_a_960_) == 0)
{
lean_object* v___x_962_; 
v___x_962_ = l_List_reverse___redArg(v_a_961_);
return v___x_962_;
}
else
{
lean_object* v_head_963_; lean_object* v_tail_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_983_; 
v_head_963_ = lean_ctor_get(v_a_960_, 0);
v_tail_964_ = lean_ctor_get(v_a_960_, 1);
v_isSharedCheck_983_ = !lean_is_exclusive(v_a_960_);
if (v_isSharedCheck_983_ == 0)
{
v___x_966_ = v_a_960_;
v_isShared_967_ = v_isSharedCheck_983_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_tail_964_);
lean_inc(v_head_963_);
lean_dec(v_a_960_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_983_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___y_969_; uint8_t v___x_974_; 
v___x_974_ = l_Lean_Name_hasMacroScopes(v_head_963_);
if (v___x_974_ == 0)
{
uint8_t v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_975_ = 1;
v___x_976_ = l_Lean_Name_toString(v_head_963_, v___x_975_);
v___x_977_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(v___x_976_);
lean_dec_ref(v___x_976_);
v___y_969_ = v___x_977_;
goto v___jp_968_;
}
else
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_978_ = l_Lean_Name_eraseMacroScopes(v_head_963_);
lean_dec(v_head_963_);
v___x_979_ = l_Lean_Name_toString(v___x_978_, v___x_974_);
v___x_980_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___closed__0));
v___x_981_ = lean_string_append(v___x_979_, v___x_980_);
v___x_982_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(v___x_981_);
lean_dec_ref(v___x_981_);
v___y_969_ = v___x_982_;
goto v___jp_968_;
}
v___jp_968_:
{
lean_object* v___x_971_; 
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 1, v_a_961_);
lean_ctor_set(v___x_966_, 0, v___y_969_);
v___x_971_ = v___x_966_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v___y_969_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v_a_961_);
v___x_971_ = v_reuseFailAlloc_973_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
v_a_960_ = v_tail_964_;
v_a_961_ = v___x_971_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString(lean_object* v_ns_985_){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_986_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString___closed__0));
v___x_987_ = lean_box(0);
v___x_988_ = l_List_mapTR_loop___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString_spec__0(v_ns_985_, v___x_987_);
v___x_989_ = l_String_intercalate(v___x_986_, v___x_988_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Internal_ErrorUtils_Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(lean_object* v_count_990_, lean_object* v_singular_991_, lean_object* v_plural_992_){
_start:
{
lean_object* v___x_993_; uint8_t v___x_994_; 
v___x_993_ = lean_unsigned_to_nat(1u);
v___x_994_ = lean_nat_dec_eq(v_count_990_, v___x_993_);
if (v___x_994_ == 0)
{
lean_inc_ref(v_plural_992_);
return v_plural_992_;
}
else
{
lean_inc_ref(v_singular_991_);
return v_singular_991_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Internal_ErrorUtils_Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1___boxed(lean_object* v_count_995_, lean_object* v_singular_996_, lean_object* v_plural_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lean_Internal_ErrorUtils_Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(v_count_995_, v_singular_996_, v_plural_997_);
lean_dec_ref(v_plural_997_);
lean_dec_ref(v_singular_996_);
lean_dec(v_count_995_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3(lean_object* v___x_999_, lean_object* v_as_1000_, size_t v_i_1001_, size_t v_stop_1002_, lean_object* v_b_1003_){
_start:
{
uint8_t v___x_1004_; 
v___x_1004_ = lean_usize_dec_eq(v_i_1001_, v_stop_1002_);
if (v___x_1004_ == 0)
{
size_t v___x_1005_; size_t v___x_1006_; lean_object* v___x_1007_; 
v___x_1005_ = ((size_t)1ULL);
v___x_1006_ = lean_usize_sub(v_i_1001_, v___x_1005_);
v___x_1007_ = lean_array_uget_borrowed(v_as_1000_, v___x_1006_);
if (lean_obj_tag(v___x_1007_) == 0)
{
v_i_1001_ = v___x_1006_;
goto _start;
}
else
{
lean_object* v_val_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; 
v_val_1009_ = lean_ctor_get(v___x_1007_, 0);
v___x_1010_ = l_Lean_LocalDecl_fvarId(v_val_1009_);
v___x_1011_ = l_Lean_LocalContext_contains(v___x_999_, v___x_1010_);
lean_dec(v___x_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1012_ = l_Lean_LocalDecl_userName(v_val_1009_);
v___x_1013_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1012_);
lean_ctor_set(v___x_1013_, 1, v_b_1003_);
v_i_1001_ = v___x_1006_;
v_b_1003_ = v___x_1013_;
goto _start;
}
else
{
v_i_1001_ = v___x_1006_;
goto _start;
}
}
}
else
{
return v_b_1003_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3___boxed(lean_object* v___x_1016_, lean_object* v_as_1017_, lean_object* v_i_1018_, lean_object* v_stop_1019_, lean_object* v_b_1020_){
_start:
{
size_t v_i_boxed_1021_; size_t v_stop_boxed_1022_; lean_object* v_res_1023_; 
v_i_boxed_1021_ = lean_unbox_usize(v_i_1018_);
lean_dec(v_i_1018_);
v_stop_boxed_1022_ = lean_unbox_usize(v_stop_1019_);
lean_dec(v_stop_1019_);
v_res_1023_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3(v___x_1016_, v_as_1017_, v_i_boxed_1021_, v_stop_boxed_1022_, v_b_1020_);
lean_dec_ref(v_as_1017_);
lean_dec_ref(v___x_1016_);
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(lean_object* v___x_1024_, lean_object* v_x_1025_, lean_object* v_x_1026_){
_start:
{
if (lean_obj_tag(v_x_1025_) == 0)
{
lean_object* v_cs_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; uint8_t v___x_1030_; 
v_cs_1027_ = lean_ctor_get(v_x_1025_, 0);
v___x_1028_ = lean_array_get_size(v_cs_1027_);
v___x_1029_ = lean_unsigned_to_nat(0u);
v___x_1030_ = lean_nat_dec_lt(v___x_1029_, v___x_1028_);
if (v___x_1030_ == 0)
{
return v_x_1026_;
}
else
{
size_t v___x_1031_; size_t v___x_1032_; lean_object* v___x_1033_; 
v___x_1031_ = lean_usize_of_nat(v___x_1028_);
v___x_1032_ = ((size_t)0ULL);
v___x_1033_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3(v___x_1024_, v_cs_1027_, v___x_1031_, v___x_1032_, v_x_1026_);
return v___x_1033_;
}
}
else
{
lean_object* v_vs_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; uint8_t v___x_1037_; 
v_vs_1034_ = lean_ctor_get(v_x_1025_, 0);
v___x_1035_ = lean_array_get_size(v_vs_1034_);
v___x_1036_ = lean_unsigned_to_nat(0u);
v___x_1037_ = lean_nat_dec_lt(v___x_1036_, v___x_1035_);
if (v___x_1037_ == 0)
{
return v_x_1026_;
}
else
{
size_t v___x_1038_; size_t v___x_1039_; lean_object* v___x_1040_; 
v___x_1038_ = lean_usize_of_nat(v___x_1035_);
v___x_1039_ = ((size_t)0ULL);
v___x_1040_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3(v___x_1024_, v_vs_1034_, v___x_1038_, v___x_1039_, v_x_1026_);
return v___x_1040_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3(lean_object* v___x_1041_, lean_object* v_as_1042_, size_t v_i_1043_, size_t v_stop_1044_, lean_object* v_b_1045_){
_start:
{
uint8_t v___x_1046_; 
v___x_1046_ = lean_usize_dec_eq(v_i_1043_, v_stop_1044_);
if (v___x_1046_ == 0)
{
size_t v___x_1047_; size_t v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1047_ = ((size_t)1ULL);
v___x_1048_ = lean_usize_sub(v_i_1043_, v___x_1047_);
v___x_1049_ = lean_array_uget_borrowed(v_as_1042_, v___x_1048_);
v___x_1050_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(v___x_1041_, v___x_1049_, v_b_1045_);
v_i_1043_ = v___x_1048_;
v_b_1045_ = v___x_1050_;
goto _start;
}
else
{
return v_b_1045_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v___x_1052_, lean_object* v_as_1053_, lean_object* v_i_1054_, lean_object* v_stop_1055_, lean_object* v_b_1056_){
_start:
{
size_t v_i_boxed_1057_; size_t v_stop_boxed_1058_; lean_object* v_res_1059_; 
v_i_boxed_1057_ = lean_unbox_usize(v_i_1054_);
lean_dec(v_i_1054_);
v_stop_boxed_1058_ = lean_unbox_usize(v_stop_1055_);
lean_dec(v_stop_1055_);
v_res_1059_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3(v___x_1052_, v_as_1053_, v_i_boxed_1057_, v_stop_boxed_1058_, v_b_1056_);
lean_dec_ref(v_as_1053_);
lean_dec_ref(v___x_1052_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2___boxed(lean_object* v___x_1060_, lean_object* v_x_1061_, lean_object* v_x_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(v___x_1060_, v_x_1061_, v_x_1062_);
lean_dec_ref(v_x_1061_);
lean_dec_ref(v___x_1060_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0(lean_object* v___x_1064_, lean_object* v_t_1065_, lean_object* v_init_1066_){
_start:
{
lean_object* v_root_1067_; lean_object* v_tail_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; uint8_t v___x_1071_; 
v_root_1067_ = lean_ctor_get(v_t_1065_, 0);
v_tail_1068_ = lean_ctor_get(v_t_1065_, 1);
v___x_1069_ = lean_array_get_size(v_tail_1068_);
v___x_1070_ = lean_unsigned_to_nat(0u);
v___x_1071_ = lean_nat_dec_lt(v___x_1070_, v___x_1069_);
if (v___x_1071_ == 0)
{
lean_object* v___x_1072_; 
v___x_1072_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(v___x_1064_, v_root_1067_, v_init_1066_);
return v___x_1072_;
}
else
{
size_t v___x_1073_; size_t v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1073_ = lean_usize_of_nat(v___x_1069_);
v___x_1074_ = ((size_t)0ULL);
v___x_1075_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3(v___x_1064_, v_tail_1068_, v___x_1073_, v___x_1074_, v_init_1066_);
v___x_1076_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(v___x_1064_, v_root_1067_, v___x_1075_);
return v___x_1076_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0___boxed(lean_object* v___x_1077_, lean_object* v_t_1078_, lean_object* v_init_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0(v___x_1077_, v_t_1078_, v_init_1079_);
lean_dec_ref(v_t_1078_);
lean_dec_ref(v___x_1077_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0(lean_object* v___x_1081_, lean_object* v_lctx_1082_, lean_object* v_init_1083_){
_start:
{
lean_object* v_decls_1084_; lean_object* v___x_1085_; 
v_decls_1084_ = lean_ctor_get(v_lctx_1082_, 1);
v___x_1085_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0(v___x_1081_, v_decls_1084_, v_init_1083_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0___boxed(lean_object* v___x_1086_, lean_object* v_lctx_1087_, lean_object* v_init_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0(v___x_1086_, v_lctx_1087_, v_init_1088_);
lean_dec_ref(v_lctx_1087_);
lean_dec_ref(v___x_1086_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(lean_object* v_mdecl_1095_, lean_object* v_a_1096_){
_start:
{
lean_object* v_lctx_1098_; lean_object* v_lctx_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; uint8_t v___x_1102_; 
v_lctx_1098_ = lean_ctor_get(v_a_1096_, 2);
v_lctx_1099_ = lean_ctor_get(v_mdecl_1095_, 1);
v___x_1100_ = lean_box(0);
v___x_1101_ = l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0(v_lctx_1098_, v_lctx_1099_, v___x_1100_);
v___x_1102_ = l_List_isEmpty___redArg(v___x_1101_);
if (v___x_1102_ == 0)
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1103_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__0));
v___x_1104_ = l_List_lengthTR___redArg(v___x_1101_);
v___x_1105_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__1));
v___x_1106_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__2));
v___x_1107_ = l_Lean_Internal_ErrorUtils_Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(v___x_1104_, v___x_1105_, v___x_1106_);
lean_dec(v___x_1104_);
v___x_1108_ = lean_string_append(v___x_1103_, v___x_1107_);
lean_dec_ref(v___x_1107_);
v___x_1109_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__3));
v___x_1110_ = lean_string_append(v___x_1108_, v___x_1109_);
v___x_1111_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString(v___x_1101_);
v___x_1112_ = lean_string_append(v___x_1110_, v___x_1111_);
lean_dec_ref(v___x_1111_);
v___x_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
return v___x_1113_;
}
else
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
lean_dec(v___x_1101_);
v___x_1114_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4));
v___x_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1114_);
return v___x_1115_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___boxed(lean_object* v_mdecl_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(v_mdecl_1116_, v_a_1117_);
lean_dec_ref(v_a_1117_);
lean_dec_ref(v_mdecl_1116_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars(lean_object* v_mdecl_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_){
_start:
{
lean_object* v___x_1126_; 
v___x_1126_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(v_mdecl_1120_, v_a_1121_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___boxed(lean_object* v_mdecl_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars(v_mdecl_1127_, v_a_1128_, v_a_1129_, v_a_1130_, v_a_1131_);
lean_dec(v_a_1131_);
lean_dec_ref(v_a_1130_);
lean_dec(v_a_1129_);
lean_dec_ref(v_a_1128_);
lean_dec_ref(v_mdecl_1127_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2(lean_object* v_lctxInitIndices_1134_, lean_object* v_mdecl_1135_, lean_object* v_as_1136_, size_t v_i_1137_, size_t v_stop_1138_, lean_object* v_b_1139_){
_start:
{
uint8_t v___x_1140_; 
v___x_1140_ = lean_usize_dec_eq(v_i_1137_, v_stop_1138_);
if (v___x_1140_ == 0)
{
size_t v___x_1141_; size_t v___x_1142_; lean_object* v___x_1143_; 
v___x_1141_ = ((size_t)1ULL);
v___x_1142_ = lean_usize_sub(v_i_1137_, v___x_1141_);
v___x_1143_ = lean_array_uget_borrowed(v_as_1136_, v___x_1142_);
if (lean_obj_tag(v___x_1143_) == 0)
{
v_i_1137_ = v___x_1142_;
goto _start;
}
else
{
lean_object* v_val_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; 
v_val_1145_ = lean_ctor_get(v___x_1143_, 0);
v___x_1146_ = l_Lean_LocalDecl_index(v_val_1145_);
v___x_1147_ = lean_nat_dec_le(v_lctxInitIndices_1134_, v___x_1146_);
lean_dec(v___x_1146_);
if (v___x_1147_ == 0)
{
lean_object* v_lctx_1148_; lean_object* v___x_1149_; uint8_t v___x_1150_; 
v_lctx_1148_ = lean_ctor_get(v_mdecl_1135_, 1);
v___x_1149_ = l_Lean_LocalDecl_fvarId(v_val_1145_);
v___x_1150_ = l_Lean_LocalContext_contains(v_lctx_1148_, v___x_1149_);
lean_dec(v___x_1149_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1151_ = l_Lean_LocalDecl_userName(v_val_1145_);
v___x_1152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1151_);
lean_ctor_set(v___x_1152_, 1, v_b_1139_);
v_i_1137_ = v___x_1142_;
v_b_1139_ = v___x_1152_;
goto _start;
}
else
{
v_i_1137_ = v___x_1142_;
goto _start;
}
}
else
{
v_i_1137_ = v___x_1142_;
goto _start;
}
}
}
else
{
return v_b_1139_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2___boxed(lean_object* v_lctxInitIndices_1156_, lean_object* v_mdecl_1157_, lean_object* v_as_1158_, lean_object* v_i_1159_, lean_object* v_stop_1160_, lean_object* v_b_1161_){
_start:
{
size_t v_i_boxed_1162_; size_t v_stop_boxed_1163_; lean_object* v_res_1164_; 
v_i_boxed_1162_ = lean_unbox_usize(v_i_1159_);
lean_dec(v_i_1159_);
v_stop_boxed_1163_ = lean_unbox_usize(v_stop_1160_);
lean_dec(v_stop_1160_);
v_res_1164_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2(v_lctxInitIndices_1156_, v_mdecl_1157_, v_as_1158_, v_i_boxed_1162_, v_stop_boxed_1163_, v_b_1161_);
lean_dec_ref(v_as_1158_);
lean_dec_ref(v_mdecl_1157_);
lean_dec(v_lctxInitIndices_1156_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(lean_object* v_lctxInitIndices_1165_, lean_object* v_mdecl_1166_, lean_object* v_x_1167_, lean_object* v_x_1168_){
_start:
{
if (lean_obj_tag(v_x_1167_) == 0)
{
lean_object* v_cs_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; uint8_t v___x_1172_; 
v_cs_1169_ = lean_ctor_get(v_x_1167_, 0);
v___x_1170_ = lean_array_get_size(v_cs_1169_);
v___x_1171_ = lean_unsigned_to_nat(0u);
v___x_1172_ = lean_nat_dec_lt(v___x_1171_, v___x_1170_);
if (v___x_1172_ == 0)
{
return v_x_1168_;
}
else
{
size_t v___x_1173_; size_t v___x_1174_; lean_object* v___x_1175_; 
v___x_1173_ = lean_usize_of_nat(v___x_1170_);
v___x_1174_ = ((size_t)0ULL);
v___x_1175_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2(v_lctxInitIndices_1165_, v_mdecl_1166_, v_cs_1169_, v___x_1173_, v___x_1174_, v_x_1168_);
return v___x_1175_;
}
}
else
{
lean_object* v_vs_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; 
v_vs_1176_ = lean_ctor_get(v_x_1167_, 0);
v___x_1177_ = lean_array_get_size(v_vs_1176_);
v___x_1178_ = lean_unsigned_to_nat(0u);
v___x_1179_ = lean_nat_dec_lt(v___x_1178_, v___x_1177_);
if (v___x_1179_ == 0)
{
return v_x_1168_;
}
else
{
size_t v___x_1180_; size_t v___x_1181_; lean_object* v___x_1182_; 
v___x_1180_ = lean_usize_of_nat(v___x_1177_);
v___x_1181_ = ((size_t)0ULL);
v___x_1182_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2(v_lctxInitIndices_1165_, v_mdecl_1166_, v_vs_1176_, v___x_1180_, v___x_1181_, v_x_1168_);
return v___x_1182_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2(lean_object* v_lctxInitIndices_1183_, lean_object* v_mdecl_1184_, lean_object* v_as_1185_, size_t v_i_1186_, size_t v_stop_1187_, lean_object* v_b_1188_){
_start:
{
uint8_t v___x_1189_; 
v___x_1189_ = lean_usize_dec_eq(v_i_1186_, v_stop_1187_);
if (v___x_1189_ == 0)
{
size_t v___x_1190_; size_t v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1190_ = ((size_t)1ULL);
v___x_1191_ = lean_usize_sub(v_i_1186_, v___x_1190_);
v___x_1192_ = lean_array_uget_borrowed(v_as_1185_, v___x_1191_);
v___x_1193_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(v_lctxInitIndices_1183_, v_mdecl_1184_, v___x_1192_, v_b_1188_);
v_i_1186_ = v___x_1191_;
v_b_1188_ = v___x_1193_;
goto _start;
}
else
{
return v_b_1188_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_lctxInitIndices_1195_, lean_object* v_mdecl_1196_, lean_object* v_as_1197_, lean_object* v_i_1198_, lean_object* v_stop_1199_, lean_object* v_b_1200_){
_start:
{
size_t v_i_boxed_1201_; size_t v_stop_boxed_1202_; lean_object* v_res_1203_; 
v_i_boxed_1201_ = lean_unbox_usize(v_i_1198_);
lean_dec(v_i_1198_);
v_stop_boxed_1202_ = lean_unbox_usize(v_stop_1199_);
lean_dec(v_stop_1199_);
v_res_1203_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2(v_lctxInitIndices_1195_, v_mdecl_1196_, v_as_1197_, v_i_boxed_1201_, v_stop_boxed_1202_, v_b_1200_);
lean_dec_ref(v_as_1197_);
lean_dec_ref(v_mdecl_1196_);
lean_dec(v_lctxInitIndices_1195_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1___boxed(lean_object* v_lctxInitIndices_1204_, lean_object* v_mdecl_1205_, lean_object* v_x_1206_, lean_object* v_x_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(v_lctxInitIndices_1204_, v_mdecl_1205_, v_x_1206_, v_x_1207_);
lean_dec_ref(v_x_1206_);
lean_dec_ref(v_mdecl_1205_);
lean_dec(v_lctxInitIndices_1204_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0(lean_object* v_lctxInitIndices_1209_, lean_object* v_mdecl_1210_, lean_object* v_t_1211_, lean_object* v_init_1212_){
_start:
{
lean_object* v_root_1213_; lean_object* v_tail_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; uint8_t v___x_1217_; 
v_root_1213_ = lean_ctor_get(v_t_1211_, 0);
v_tail_1214_ = lean_ctor_get(v_t_1211_, 1);
v___x_1215_ = lean_array_get_size(v_tail_1214_);
v___x_1216_ = lean_unsigned_to_nat(0u);
v___x_1217_ = lean_nat_dec_lt(v___x_1216_, v___x_1215_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; 
v___x_1218_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(v_lctxInitIndices_1209_, v_mdecl_1210_, v_root_1213_, v_init_1212_);
return v___x_1218_;
}
else
{
size_t v___x_1219_; size_t v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1219_ = lean_usize_of_nat(v___x_1215_);
v___x_1220_ = ((size_t)0ULL);
v___x_1221_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2(v_lctxInitIndices_1209_, v_mdecl_1210_, v_tail_1214_, v___x_1219_, v___x_1220_, v_init_1212_);
v___x_1222_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(v_lctxInitIndices_1209_, v_mdecl_1210_, v_root_1213_, v___x_1221_);
return v___x_1222_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0___boxed(lean_object* v_lctxInitIndices_1223_, lean_object* v_mdecl_1224_, lean_object* v_t_1225_, lean_object* v_init_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0(v_lctxInitIndices_1223_, v_mdecl_1224_, v_t_1225_, v_init_1226_);
lean_dec_ref(v_t_1225_);
lean_dec_ref(v_mdecl_1224_);
lean_dec(v_lctxInitIndices_1223_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0(lean_object* v_lctxInitIndices_1228_, lean_object* v_mdecl_1229_, lean_object* v_lctx_1230_, lean_object* v_init_1231_){
_start:
{
lean_object* v_decls_1232_; lean_object* v___x_1233_; 
v_decls_1232_ = lean_ctor_get(v_lctx_1230_, 1);
v___x_1233_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0(v_lctxInitIndices_1228_, v_mdecl_1229_, v_decls_1232_, v_init_1231_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0___boxed(lean_object* v_lctxInitIndices_1234_, lean_object* v_mdecl_1235_, lean_object* v_lctx_1236_, lean_object* v_init_1237_){
_start:
{
lean_object* v_res_1238_; 
v_res_1238_ = l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0(v_lctxInitIndices_1234_, v_mdecl_1235_, v_lctx_1236_, v_init_1237_);
lean_dec_ref(v_lctx_1236_);
lean_dec_ref(v_mdecl_1235_);
lean_dec(v_lctxInitIndices_1234_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg(lean_object* v_lctxInitIndices_1243_, lean_object* v_mdecl_1244_, lean_object* v_a_1245_){
_start:
{
lean_object* v_lctx_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; uint8_t v___x_1250_; 
v_lctx_1247_ = lean_ctor_get(v_a_1245_, 2);
v___x_1248_ = lean_box(0);
v___x_1249_ = l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0(v_lctxInitIndices_1243_, v_mdecl_1244_, v_lctx_1247_, v___x_1248_);
v___x_1250_ = l_List_isEmpty___redArg(v___x_1249_);
if (v___x_1250_ == 0)
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1251_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__0));
v___x_1252_ = l_List_lengthTR___redArg(v___x_1249_);
v___x_1253_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__1));
v___x_1254_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__2));
v___x_1255_ = l_Lean_Internal_ErrorUtils_Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(v___x_1252_, v___x_1253_, v___x_1254_);
lean_dec(v___x_1252_);
v___x_1256_ = lean_string_append(v___x_1251_, v___x_1255_);
lean_dec_ref(v___x_1255_);
v___x_1257_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__3));
v___x_1258_ = lean_string_append(v___x_1256_, v___x_1257_);
v___x_1259_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString(v___x_1249_);
v___x_1260_ = lean_string_append(v___x_1258_, v___x_1259_);
lean_dec_ref(v___x_1259_);
v___x_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
return v___x_1261_;
}
else
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_dec(v___x_1249_);
v___x_1262_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4));
v___x_1263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
return v___x_1263_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___boxed(lean_object* v_lctxInitIndices_1264_, lean_object* v_mdecl_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg(v_lctxInitIndices_1264_, v_mdecl_1265_, v_a_1266_);
lean_dec_ref(v_a_1266_);
lean_dec_ref(v_mdecl_1265_);
lean_dec(v_lctxInitIndices_1264_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars(lean_object* v_lctxInitIndices_1269_, lean_object* v_mdecl_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg(v_lctxInitIndices_1269_, v_mdecl_1270_, v_a_1271_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___boxed(lean_object* v_lctxInitIndices_1277_, lean_object* v_mdecl_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars(v_lctxInitIndices_1277_, v_mdecl_1278_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_);
lean_dec(v_a_1282_);
lean_dec_ref(v_a_1281_);
lean_dec(v_a_1280_);
lean_dec_ref(v_a_1279_);
lean_dec_ref(v_mdecl_1278_);
lean_dec(v_lctxInitIndices_1277_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0(size_t v_sz_1285_, size_t v_i_1286_, lean_object* v_bs_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
uint8_t v___x_1293_; 
v___x_1293_ = lean_usize_dec_lt(v_i_1286_, v_sz_1285_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; 
v___x_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1294_, 0, v_bs_1287_);
return v___x_1294_;
}
else
{
lean_object* v_v_1295_; lean_object* v___x_1296_; lean_object* v_bs_x27_1297_; lean_object* v___x_1298_; 
v_v_1295_ = lean_array_uget(v_bs_1287_, v_i_1286_);
v___x_1296_ = lean_unsigned_to_nat(0u);
v_bs_x27_1297_ = lean_array_uset(v_bs_1287_, v_i_1286_, v___x_1296_);
v___x_1298_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr(v_v_1295_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v___x_1300_; size_t v___x_1301_; size_t v___x_1302_; lean_object* v___x_1303_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1299_);
lean_dec_ref_known(v___x_1298_, 1);
v___x_1300_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(v_a_1299_);
lean_dec(v_a_1299_);
v___x_1301_ = ((size_t)1ULL);
v___x_1302_ = lean_usize_add(v_i_1286_, v___x_1301_);
v___x_1303_ = lean_array_uset(v_bs_x27_1297_, v_i_1286_, v___x_1300_);
v_i_1286_ = v___x_1302_;
v_bs_1287_ = v___x_1303_;
goto _start;
}
else
{
lean_object* v_a_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1312_; 
lean_dec_ref(v_bs_x27_1297_);
v_a_1305_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1307_ = v___x_1298_;
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_a_1305_);
lean_dec(v___x_1298_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1310_; 
if (v_isShared_1308_ == 0)
{
v___x_1310_ = v___x_1307_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v_a_1305_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0___boxed(lean_object* v_sz_1313_, lean_object* v_i_1314_, lean_object* v_bs_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_){
_start:
{
size_t v_sz_boxed_1321_; size_t v_i_boxed_1322_; lean_object* v_res_1323_; 
v_sz_boxed_1321_ = lean_unbox_usize(v_sz_1313_);
lean_dec(v_sz_1313_);
v_i_boxed_1322_ = lean_unbox_usize(v_i_1314_);
lean_dec(v_i_1314_);
v_res_1323_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0(v_sz_boxed_1321_, v_i_boxed_1322_, v_bs_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1(lean_object* v___x_1326_, lean_object* v_as_1327_, size_t v_i_1328_, size_t v_stop_1329_, lean_object* v_b_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v_a_1337_; uint8_t v___x_1341_; 
v___x_1341_ = lean_usize_dec_eq(v_i_1328_, v_stop_1329_);
if (v___x_1341_ == 0)
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_array_uget_borrowed(v_as_1327_, v_i_1328_);
lean_inc(v___x_1342_);
v___x_1343_ = l_Lean_MVarId_getDecl(v___x_1342_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
if (lean_obj_tag(v___x_1343_) == 0)
{
lean_object* v_a_1344_; lean_object* v_lctx_1345_; lean_object* v___x_1346_; uint8_t v___x_1347_; 
v_a_1344_ = lean_ctor_get(v___x_1343_, 0);
lean_inc(v_a_1344_);
lean_dec_ref_known(v___x_1343_, 1);
v_lctx_1345_ = lean_ctor_get(v_a_1344_, 1);
lean_inc_ref(v_lctx_1345_);
lean_dec(v_a_1344_);
v___x_1346_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___closed__0));
v___x_1347_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_1345_, v___x_1326_, v___x_1346_);
lean_dec_ref(v_lctx_1345_);
if (v___x_1347_ == 0)
{
lean_object* v___x_1348_; 
lean_inc(v___x_1342_);
v___x_1348_ = lean_array_push(v_b_1330_, v___x_1342_);
v_a_1337_ = v___x_1348_;
goto v___jp_1336_;
}
else
{
v_a_1337_ = v_b_1330_;
goto v___jp_1336_;
}
}
else
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1356_; 
lean_dec_ref(v_b_1330_);
v_a_1349_ = lean_ctor_get(v___x_1343_, 0);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1351_ = v___x_1343_;
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1343_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1354_; 
if (v_isShared_1352_ == 0)
{
v___x_1354_ = v___x_1351_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_a_1349_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
}
}
else
{
lean_object* v___x_1357_; 
v___x_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1357_, 0, v_b_1330_);
return v___x_1357_;
}
v___jp_1336_:
{
size_t v___x_1338_; size_t v___x_1339_; 
v___x_1338_ = ((size_t)1ULL);
v___x_1339_ = lean_usize_add(v_i_1328_, v___x_1338_);
v_i_1328_ = v___x_1339_;
v_b_1330_ = v_a_1337_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___boxed(lean_object* v___x_1358_, lean_object* v_as_1359_, lean_object* v_i_1360_, lean_object* v_stop_1361_, lean_object* v_b_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
size_t v_i_boxed_1368_; size_t v_stop_boxed_1369_; lean_object* v_res_1370_; 
v_i_boxed_1368_ = lean_unbox_usize(v_i_1360_);
lean_dec(v_i_1360_);
v_stop_boxed_1369_ = lean_unbox_usize(v_stop_1361_);
lean_dec(v_stop_1361_);
v_res_1370_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1(v___x_1358_, v_as_1359_, v_i_boxed_1368_, v_stop_boxed_1369_, v_b_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
lean_dec_ref(v_as_1359_);
lean_dec_ref(v___x_1358_);
return v_res_1370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting(lean_object* v_e_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_){
_start:
{
lean_object* v_awaitingMVars_1384_; lean_object* v___y_1385_; lean_object* v___y_1386_; lean_object* v___y_1387_; lean_object* v___y_1388_; lean_object* v___x_1425_; 
v___x_1425_ = l_Lean_Meta_getMVarsNoDelayed(v_e_1377_, v_a_1378_, v_a_1379_, v_a_1380_, v_a_1381_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v_a_1428_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_a_1426_);
lean_dec_ref_known(v___x_1425_, 1);
v___x_1432_ = lean_unsigned_to_nat(0u);
v___x_1433_ = lean_array_get_size(v_a_1426_);
v___x_1434_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__4));
v___x_1435_ = lean_nat_dec_lt(v___x_1432_, v___x_1433_);
if (v___x_1435_ == 0)
{
v_a_1428_ = v___x_1434_;
goto v___jp_1427_;
}
else
{
lean_object* v_lctx_1436_; size_t v___x_1437_; size_t v___x_1438_; lean_object* v___x_1439_; 
v_lctx_1436_ = lean_ctor_get(v_a_1378_, 2);
v___x_1437_ = ((size_t)0ULL);
v___x_1438_ = lean_usize_of_nat(v___x_1433_);
v___x_1439_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1(v_lctx_1436_, v_a_1426_, v___x_1437_, v___x_1438_, v___x_1434_, v_a_1378_, v_a_1379_, v_a_1380_, v_a_1381_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; 
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1439_, 1);
v_a_1428_ = v_a_1440_;
goto v___jp_1427_;
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
lean_dec(v_a_1426_);
v_a_1441_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1439_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1439_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
v___jp_1427_:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1429_ = lean_array_get_size(v_a_1428_);
v___x_1430_ = lean_unsigned_to_nat(0u);
v___x_1431_ = lean_nat_dec_eq(v___x_1429_, v___x_1430_);
if (v___x_1431_ == 0)
{
lean_dec(v_a_1426_);
v_awaitingMVars_1384_ = v_a_1428_;
v___y_1385_ = v_a_1378_;
v___y_1386_ = v_a_1379_;
v___y_1387_ = v_a_1380_;
v___y_1388_ = v_a_1381_;
goto v___jp_1383_;
}
else
{
lean_dec_ref(v_a_1428_);
v_awaitingMVars_1384_ = v_a_1426_;
v___y_1385_ = v_a_1378_;
v___y_1386_ = v_a_1379_;
v___y_1387_ = v_a_1380_;
v___y_1388_ = v_a_1381_;
goto v___jp_1383_;
}
}
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1456_; 
v_a_1449_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1451_ = v___x_1425_;
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1425_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1454_; 
if (v_isShared_1452_ == 0)
{
v___x_1454_ = v___x_1451_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_a_1449_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
v___jp_1383_:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; uint8_t v___x_1391_; 
v___x_1389_ = lean_array_get_size(v_awaitingMVars_1384_);
v___x_1390_ = lean_unsigned_to_nat(0u);
v___x_1391_ = lean_nat_dec_eq(v___x_1389_, v___x_1390_);
if (v___x_1391_ == 0)
{
size_t v_sz_1392_; size_t v___x_1393_; lean_object* v___x_1394_; 
v_sz_1392_ = lean_array_size(v_awaitingMVars_1384_);
v___x_1393_ = ((size_t)0ULL);
v___x_1394_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0(v_sz_1392_, v___x_1393_, v_awaitingMVars_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1414_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1397_ = v___x_1394_;
v_isShared_1398_ = v_isSharedCheck_1414_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_a_1395_);
lean_dec(v___x_1394_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1414_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1412_; 
v___x_1399_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__0));
v___x_1400_ = lean_array_get_size(v_a_1395_);
v___x_1401_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__1));
v___x_1402_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__2));
v___x_1403_ = l_Lean_Internal_ErrorUtils_Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(v___x_1400_, v___x_1401_, v___x_1402_);
v___x_1404_ = lean_string_append(v___x_1399_, v___x_1403_);
lean_dec_ref(v___x_1403_);
v___x_1405_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__3));
v___x_1406_ = lean_string_append(v___x_1404_, v___x_1405_);
v___x_1407_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString___closed__0));
v___x_1408_ = lean_array_to_list(v_a_1395_);
v___x_1409_ = l_String_intercalate(v___x_1407_, v___x_1408_);
v___x_1410_ = lean_string_append(v___x_1406_, v___x_1409_);
lean_dec_ref(v___x_1409_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 0, v___x_1410_);
v___x_1412_ = v___x_1397_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
v_a_1415_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1394_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1394_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
else
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
lean_dec_ref(v_awaitingMVars_1384_);
v___x_1423_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4));
v___x_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
return v___x_1424_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___boxed(lean_object* v_e_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting(v_e_1457_, v_a_1458_, v_a_1459_, v_a_1460_, v_a_1461_);
lean_dec(v_a_1461_);
lean_dec_ref(v_a_1460_);
lean_dec(v_a_1459_);
lean_dec_ref(v_a_1458_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg(lean_object* v_mvarId_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v___x_1467_; lean_object* v_mctx_1468_; lean_object* v_decl_1469_; lean_object* v_depth_1470_; lean_object* v_depth_1471_; uint8_t v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1467_ = lean_st_ref_get(v___y_1465_);
v_mctx_1468_ = lean_ctor_get(v___x_1467_, 0);
lean_inc_ref(v_mctx_1468_);
lean_dec(v___x_1467_);
v_decl_1469_ = l_Lean_MetavarContext_getDecl(v_mctx_1468_, v_mvarId_1464_);
v_depth_1470_ = lean_ctor_get(v_decl_1469_, 3);
lean_inc(v_depth_1470_);
lean_dec_ref(v_decl_1469_);
v_depth_1471_ = lean_ctor_get(v_mctx_1468_, 0);
lean_inc(v_depth_1471_);
lean_dec_ref(v_mctx_1468_);
v___x_1472_ = lean_nat_dec_eq(v_depth_1470_, v_depth_1471_);
lean_dec(v_depth_1471_);
lean_dec(v_depth_1470_);
v___x_1473_ = lean_box(v___x_1472_);
v___x_1474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1473_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg___boxed(lean_object* v_mvarId_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg(v_mvarId_1475_, v___y_1476_);
lean_dec(v___y_1476_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0(lean_object* v_mvarId_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg(v_mvarId_1479_, v___y_1481_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___boxed(lean_object* v_mvarId_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0(v_mvarId_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar(lean_object* v_mvarId_1506_, lean_object* v_lctxInitIndices_1507_, uint8_t v_fromDelayed_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_){
_start:
{
lean_object* v_delayedExpl_1514_; lean_object* v___x_1515_; 
v_delayedExpl_1514_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__0));
v___x_1515_ = l_Lean_MVarId_findDecl_x3f___redArg(v_mvarId_1506_, v_a_1510_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1665_; 
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1518_ = v___x_1515_;
v_isShared_1519_ = v_isSharedCheck_1665_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1515_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1665_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
if (lean_obj_tag(v_a_1516_) == 1)
{
lean_object* v_val_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1660_; 
lean_del_object(v___x_1518_);
v_val_1520_ = lean_ctor_get(v_a_1516_, 0);
v_isSharedCheck_1660_ = !lean_is_exclusive(v_a_1516_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1522_ = v_a_1516_;
v_isShared_1523_ = v_isSharedCheck_1660_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_val_1520_);
lean_dec(v_a_1516_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1660_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___y_1525_; lean_object* v___y_1526_; lean_object* v_msg_1538_; lean_object* v___y_1539_; lean_object* v_msg_1555_; lean_object* v___y_1556_; lean_object* v___y_1557_; lean_object* v___y_1558_; lean_object* v___y_1559_; lean_object* v_msg_1580_; lean_object* v___y_1581_; lean_object* v___y_1582_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___x_1596_; lean_object* v_a_1597_; 
v___x_1596_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(v_mvarId_1506_, v_a_1510_);
v_a_1597_ = lean_ctor_get(v___x_1596_, 0);
lean_inc(v_a_1597_);
lean_dec_ref(v___x_1596_);
if (lean_obj_tag(v_a_1597_) == 1)
{
lean_object* v_val_1598_; lean_object* v_mvarIdPending_1599_; lean_object* v___x_1600_; 
lean_del_object(v___x_1522_);
lean_dec(v_val_1520_);
lean_dec(v_mvarId_1506_);
v_val_1598_ = lean_ctor_get(v_a_1597_, 0);
lean_inc(v_val_1598_);
lean_dec_ref_known(v_a_1597_, 1);
v_mvarIdPending_1599_ = lean_ctor_get(v_val_1598_, 1);
lean_inc(v_mvarIdPending_1599_);
lean_dec(v_val_1598_);
v___x_1600_ = l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending(v_mvarIdPending_1599_, v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_);
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_object* v_a_1601_; lean_object* v___x_1602_; 
v_a_1601_ = lean_ctor_get(v___x_1600_, 0);
lean_inc(v_a_1601_);
lean_dec_ref_known(v___x_1600_, 1);
v___x_1602_ = l_Lean_MVarId_findDecl_x3f___redArg(v_a_1601_, v_a_1510_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1639_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1605_ = v___x_1602_;
v_isShared_1606_ = v_isSharedCheck_1639_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_dec(v___x_1602_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1639_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
if (lean_obj_tag(v_a_1603_) == 1)
{
lean_object* v_val_1607_; lean_object* v_msg_1609_; lean_object* v___y_1610_; lean_object* v___x_1621_; 
lean_del_object(v___x_1605_);
v_val_1607_ = lean_ctor_get(v_a_1603_, 0);
lean_inc(v_val_1607_);
lean_dec_ref_known(v_a_1603_, 1);
lean_inc(v_a_1601_);
v___x_1621_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr(v_a_1601_, v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v_a_1630_; 
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1622_);
lean_dec_ref_known(v___x_1621_, 1);
v___x_1623_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(v_a_1622_);
lean_dec(v_a_1622_);
v___x_1624_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__6));
v___x_1625_ = lean_string_append(v___x_1624_, v___x_1623_);
lean_dec_ref(v___x_1623_);
v___x_1626_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__7));
v___x_1627_ = lean_string_append(v___x_1625_, v___x_1626_);
v___x_1628_ = lean_string_append(v___x_1627_, v_delayedExpl_1514_);
v___x_1629_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(v_a_1601_, v_a_1510_);
lean_dec(v_a_1601_);
v_a_1630_ = lean_ctor_get(v___x_1629_, 0);
lean_inc(v_a_1630_);
lean_dec_ref(v___x_1629_);
if (lean_obj_tag(v_a_1630_) == 1)
{
lean_object* v_val_1631_; lean_object* v___x_1632_; 
v_val_1631_ = lean_ctor_get(v_a_1630_, 0);
lean_inc(v_val_1631_);
lean_dec_ref_known(v_a_1630_, 1);
v___x_1632_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting(v_val_1631_, v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_);
if (lean_obj_tag(v___x_1632_) == 0)
{
lean_object* v_a_1633_; lean_object* v___x_1634_; 
v_a_1633_ = lean_ctor_get(v___x_1632_, 0);
lean_inc(v_a_1633_);
lean_dec_ref_known(v___x_1632_, 1);
v___x_1634_ = lean_string_append(v___x_1628_, v_a_1633_);
lean_dec(v_a_1633_);
v_msg_1609_ = v___x_1634_;
v___y_1610_ = v_a_1509_;
goto v___jp_1608_;
}
else
{
lean_dec_ref(v___x_1628_);
lean_dec(v_val_1607_);
return v___x_1632_;
}
}
else
{
lean_dec(v_a_1630_);
v_msg_1609_ = v___x_1628_;
v___y_1610_ = v_a_1509_;
goto v___jp_1608_;
}
}
else
{
lean_dec(v_val_1607_);
lean_dec(v_a_1601_);
return v___x_1621_;
}
v___jp_1608_:
{
lean_object* v___x_1611_; lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1620_; 
v___x_1611_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(v_val_1607_, v___y_1610_);
lean_dec(v_val_1607_);
v_a_1612_ = lean_ctor_get(v___x_1611_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1611_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1614_ = v___x_1611_;
v_isShared_1615_ = v_isSharedCheck_1620_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1611_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1620_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1616_; lean_object* v___x_1618_; 
v___x_1616_ = lean_string_append(v_msg_1609_, v_a_1612_);
lean_dec(v_a_1612_);
if (v_isShared_1615_ == 0)
{
lean_ctor_set(v___x_1614_, 0, v___x_1616_);
v___x_1618_ = v___x_1614_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v___x_1616_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
}
else
{
lean_object* v___x_1635_; lean_object* v___x_1637_; 
lean_dec(v_a_1603_);
lean_dec(v_a_1601_);
v___x_1635_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__8));
if (v_isShared_1606_ == 0)
{
lean_ctor_set(v___x_1605_, 0, v___x_1635_);
v___x_1637_ = v___x_1605_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v___x_1635_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
lean_dec(v_a_1601_);
v_a_1640_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1602_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1602_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
else
{
lean_object* v_a_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1655_; 
v_a_1648_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1650_ = v___x_1600_;
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_a_1648_);
lean_dec(v___x_1600_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1653_; 
if (v_isShared_1651_ == 0)
{
v___x_1653_ = v___x_1650_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_a_1648_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
}
}
else
{
uint8_t v_kind_1656_; 
lean_dec(v_a_1597_);
v_kind_1656_ = lean_ctor_get_uint8(v_val_1520_, sizeof(void*)*7);
switch(v_kind_1656_)
{
case 0:
{
lean_object* v___x_1657_; 
v___x_1657_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__9));
v_msg_1580_ = v___x_1657_;
v___y_1581_ = v_a_1509_;
v___y_1582_ = v_a_1510_;
v___y_1583_ = v_a_1511_;
v___y_1584_ = v_a_1512_;
goto v___jp_1579_;
}
case 1:
{
lean_object* v___x_1658_; 
v___x_1658_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__10));
v_msg_1580_ = v___x_1658_;
v___y_1581_ = v_a_1509_;
v___y_1582_ = v_a_1510_;
v___y_1583_ = v_a_1511_;
v___y_1584_ = v_a_1512_;
goto v___jp_1579_;
}
default: 
{
lean_object* v___x_1659_; 
v___x_1659_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__11));
v_msg_1580_ = v___x_1659_;
v___y_1581_ = v_a_1509_;
v___y_1582_ = v_a_1510_;
v___y_1583_ = v_a_1511_;
v___y_1584_ = v_a_1512_;
goto v___jp_1579_;
}
}
}
v___jp_1524_:
{
lean_object* v___x_1527_; lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1536_; 
v___x_1527_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg(v_lctxInitIndices_1507_, v_val_1520_, v___y_1526_);
lean_dec(v_val_1520_);
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1530_ = v___x_1527_;
v_isShared_1531_ = v_isSharedCheck_1536_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1527_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1536_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1532_; lean_object* v___x_1534_; 
v___x_1532_ = lean_string_append(v___y_1525_, v_a_1528_);
lean_dec(v_a_1528_);
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v___x_1532_);
v___x_1534_ = v___x_1530_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
v___jp_1537_:
{
if (v_fromDelayed_1508_ == 0)
{
v___y_1525_ = v_msg_1538_;
v___y_1526_ = v___y_1539_;
goto v___jp_1524_;
}
else
{
lean_object* v_lctx_1540_; lean_object* v_lctx_1541_; lean_object* v___x_1542_; uint8_t v___x_1543_; 
v_lctx_1540_ = lean_ctor_get(v___y_1539_, 2);
v_lctx_1541_ = lean_ctor_get(v_val_1520_, 1);
v___x_1542_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___closed__0));
v___x_1543_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_1541_, v_lctx_1540_, v___x_1542_);
if (v___x_1543_ == 0)
{
lean_object* v___x_1544_; lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1553_; 
v___x_1544_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(v_val_1520_, v___y_1539_);
lean_dec(v_val_1520_);
v_a_1545_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1547_ = v___x_1544_;
v_isShared_1548_ = v_isSharedCheck_1553_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1544_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1553_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1549_; lean_object* v___x_1551_; 
v___x_1549_ = lean_string_append(v_msg_1538_, v_a_1545_);
lean_dec(v_a_1545_);
if (v_isShared_1548_ == 0)
{
lean_ctor_set(v___x_1547_, 0, v___x_1549_);
v___x_1551_ = v___x_1547_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v___x_1549_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
else
{
v___y_1525_ = v_msg_1538_;
v___y_1526_ = v___y_1539_;
goto v___jp_1524_;
}
}
}
v___jp_1554_:
{
lean_object* v___x_1560_; lean_object* v_a_1561_; 
v___x_1560_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(v_mvarId_1506_, v___y_1557_);
v_a_1561_ = lean_ctor_get(v___x_1560_, 0);
lean_inc(v_a_1561_);
lean_dec_ref(v___x_1560_);
if (lean_obj_tag(v_a_1561_) == 1)
{
lean_dec(v_mvarId_1506_);
if (v_fromDelayed_1508_ == 0)
{
lean_object* v___x_1562_; lean_object* v___x_1563_; 
lean_dec_ref_known(v_a_1561_, 1);
v___x_1562_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__1));
v___x_1563_ = lean_string_append(v_msg_1555_, v___x_1562_);
v_msg_1538_ = v___x_1563_;
v___y_1539_ = v___y_1556_;
goto v___jp_1537_;
}
else
{
lean_object* v_val_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v_val_1564_ = lean_ctor_get(v_a_1561_, 0);
lean_inc(v_val_1564_);
lean_dec_ref_known(v_a_1561_, 1);
v___x_1565_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__2));
v___x_1566_ = lean_string_append(v_msg_1555_, v___x_1565_);
v___x_1567_ = lean_string_append(v___x_1566_, v_delayedExpl_1514_);
v___x_1568_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting(v_val_1564_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v_a_1569_; lean_object* v___x_1570_; 
v_a_1569_ = lean_ctor_get(v___x_1568_, 0);
lean_inc(v_a_1569_);
lean_dec_ref_known(v___x_1568_, 1);
v___x_1570_ = lean_string_append(v___x_1567_, v_a_1569_);
lean_dec(v_a_1569_);
v_msg_1538_ = v___x_1570_;
v___y_1539_ = v___y_1556_;
goto v___jp_1537_;
}
else
{
lean_dec_ref(v___x_1567_);
lean_dec(v_val_1520_);
return v___x_1568_;
}
}
}
else
{
lean_object* v___x_1571_; lean_object* v_a_1572_; uint8_t v___x_1573_; 
lean_dec(v_a_1561_);
v___x_1571_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg(v_mvarId_1506_, v___y_1557_);
v_a_1572_ = lean_ctor_get(v___x_1571_, 0);
lean_inc(v_a_1572_);
lean_dec_ref(v___x_1571_);
v___x_1573_ = lean_unbox(v_a_1572_);
lean_dec(v_a_1572_);
if (v___x_1573_ == 0)
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__3));
v___x_1575_ = lean_string_append(v_msg_1555_, v___x_1574_);
v_msg_1538_ = v___x_1575_;
v___y_1539_ = v___y_1556_;
goto v___jp_1537_;
}
else
{
if (v_fromDelayed_1508_ == 0)
{
v_msg_1538_ = v_msg_1555_;
v___y_1539_ = v___y_1556_;
goto v___jp_1537_;
}
else
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1576_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__4));
v___x_1577_ = lean_string_append(v_msg_1555_, v___x_1576_);
v___x_1578_ = lean_string_append(v___x_1577_, v_delayedExpl_1514_);
v_msg_1538_ = v___x_1578_;
v___y_1539_ = v___y_1556_;
goto v___jp_1537_;
}
}
}
}
v___jp_1579_:
{
lean_object* v___x_1585_; lean_object* v_userName_1586_; uint8_t v___x_1587_; 
v___x_1585_ = lean_st_ref_get(v___y_1582_);
v_userName_1586_ = lean_ctor_get(v_val_1520_, 0);
v___x_1587_ = l_Lean_Name_isAnonymous(v_userName_1586_);
if (v___x_1587_ == 0)
{
lean_object* v_mctx_1588_; lean_object* v___x_1590_; 
v_mctx_1588_ = lean_ctor_get(v___x_1585_, 0);
lean_inc_ref(v_mctx_1588_);
lean_dec(v___x_1585_);
lean_inc(v_mvarId_1506_);
if (v_isShared_1523_ == 0)
{
lean_ctor_set(v___x_1522_, 0, v_mvarId_1506_);
v___x_1590_ = v___x_1522_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_mvarId_1506_);
v___x_1590_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
lean_object* v___x_1591_; uint8_t v___x_1592_; 
v___x_1591_ = l_Lean_MetavarContext_findUserName_x3f(v_mctx_1588_, v_userName_1586_);
lean_dec_ref(v_mctx_1588_);
v___x_1592_ = l_instBEqOption_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0(v___x_1590_, v___x_1591_);
lean_dec(v___x_1591_);
lean_dec_ref(v___x_1590_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1593_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__5));
lean_inc_ref(v_msg_1580_);
v___x_1594_ = lean_string_append(v_msg_1580_, v___x_1593_);
v_msg_1555_ = v___x_1594_;
v___y_1556_ = v___y_1581_;
v___y_1557_ = v___y_1582_;
v___y_1558_ = v___y_1583_;
v___y_1559_ = v___y_1584_;
goto v___jp_1554_;
}
else
{
lean_inc_ref(v_msg_1580_);
v_msg_1555_ = v_msg_1580_;
v___y_1556_ = v___y_1581_;
v___y_1557_ = v___y_1582_;
v___y_1558_ = v___y_1583_;
v___y_1559_ = v___y_1584_;
goto v___jp_1554_;
}
}
}
else
{
lean_dec(v___x_1585_);
lean_del_object(v___x_1522_);
lean_inc_ref(v_msg_1580_);
v_msg_1555_ = v_msg_1580_;
v___y_1556_ = v___y_1581_;
v___y_1557_ = v___y_1582_;
v___y_1558_ = v___y_1583_;
v___y_1559_ = v___y_1584_;
goto v___jp_1554_;
}
}
}
}
else
{
lean_object* v___x_1661_; lean_object* v___x_1663_; 
lean_dec(v_a_1516_);
lean_dec(v_mvarId_1506_);
v___x_1661_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__12));
if (v_isShared_1519_ == 0)
{
lean_ctor_set(v___x_1518_, 0, v___x_1661_);
v___x_1663_ = v___x_1518_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v___x_1661_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_dec(v_mvarId_1506_);
v_a_1666_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1515_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1515_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___boxed(lean_object* v_mvarId_1674_, lean_object* v_lctxInitIndices_1675_, lean_object* v_fromDelayed_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_){
_start:
{
uint8_t v_fromDelayed_boxed_1682_; lean_object* v_res_1683_; 
v_fromDelayed_boxed_1682_ = lean_unbox(v_fromDelayed_1676_);
v_res_1683_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar(v_mvarId_1674_, v_lctxInitIndices_1675_, v_fromDelayed_boxed_1682_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_);
lean_dec(v_a_1680_);
lean_dec_ref(v_a_1679_);
lean_dec(v_a_1678_);
lean_dec_ref(v_a_1677_);
lean_dec(v_lctxInitIndices_1675_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0(lean_object* v_mvarId_1684_, lean_object* v_lctxInitIndices_1685_, uint8_t v_fromDelayed_1686_, lean_object* v_ppCtx_1687_){
_start:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1689_ = lean_box(v_fromDelayed_1686_);
v___x_1690_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___boxed), 8, 3);
lean_closure_set(v___x_1690_, 0, v_mvarId_1684_);
lean_closure_set(v___x_1690_, 1, v_lctxInitIndices_1685_);
lean_closure_set(v___x_1690_, 2, v___x_1689_);
v___x_1691_ = l_Lean_PPContext_runMetaM___redArg(v_ppCtx_1687_, v___x_1690_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0___boxed(lean_object* v_mvarId_1692_, lean_object* v_lctxInitIndices_1693_, lean_object* v_fromDelayed_1694_, lean_object* v_ppCtx_1695_, lean_object* v___y_1696_){
_start:
{
uint8_t v_fromDelayed_boxed_1697_; lean_object* v_res_1698_; 
v_fromDelayed_boxed_1697_ = lean_unbox(v_fromDelayed_1694_);
v_res_1698_ = l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0(v_mvarId_1692_, v_lctxInitIndices_1693_, v_fromDelayed_boxed_1697_, v_ppCtx_1695_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg(lean_object* v_mvarId_1699_, uint8_t v_fromDelayed_1700_, lean_object* v_a_1701_){
_start:
{
lean_object* v_lctxInitIndices_1703_; lean_object* v___x_1704_; lean_object* v___f_1705_; lean_object* v___x_1706_; 
v_lctxInitIndices_1703_ = lean_ctor_get(v_a_1701_, 5);
v___x_1704_ = lean_box(v_fromDelayed_1700_);
lean_inc(v_lctxInitIndices_1703_);
v___f_1705_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1705_, 0, v_mvarId_1699_);
lean_closure_set(v___f_1705_, 1, v_lctxInitIndices_1703_);
lean_closure_set(v___f_1705_, 2, v___x_1704_);
v___x_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1706_, 0, v___f_1705_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___boxed(lean_object* v_mvarId_1707_, lean_object* v_fromDelayed_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_){
_start:
{
uint8_t v_fromDelayed_boxed_1711_; lean_object* v_res_1712_; 
v_fromDelayed_boxed_1711_ = lean_unbox(v_fromDelayed_1708_);
v_res_1712_ = l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg(v_mvarId_1707_, v_fromDelayed_boxed_1711_, v_a_1709_);
lean_dec_ref(v_a_1709_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar(lean_object* v_mvarId_1713_, uint8_t v_fromDelayed_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_){
_start:
{
lean_object* v___x_1722_; 
v___x_1722_ = l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg(v_mvarId_1713_, v_fromDelayed_1714_, v_a_1715_);
return v___x_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___boxed(lean_object* v_mvarId_1723_, lean_object* v_fromDelayed_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_){
_start:
{
uint8_t v_fromDelayed_boxed_1732_; lean_object* v_res_1733_; 
v_fromDelayed_boxed_1732_ = lean_unbox(v_fromDelayed_1724_);
v_res_1733_ = l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar(v_mvarId_1723_, v_fromDelayed_boxed_1732_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_);
lean_dec(v_a_1730_);
lean_dec_ref(v_a_1729_);
lean_dec(v_a_1728_);
lean_dec_ref(v_a_1727_);
lean_dec(v_a_1726_);
lean_dec_ref(v_a_1725_);
return v_res_1733_;
}
}
lean_object* runtime_initialize_Lean_PrettyPrinter_Delaborator_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ErrorUtils(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_PrettyPrinter_Delaborator_Metavariable(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_PrettyPrinter_Delaborator_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ErrorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_PrettyPrinter_Delaborator_Metavariable(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PrettyPrinter_Delaborator_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_ErrorUtils(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_PrettyPrinter_Delaborator_Metavariable(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter_Delaborator_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ErrorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Delaborator_Metavariable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_PrettyPrinter_Delaborator_Metavariable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_PrettyPrinter_Delaborator_Metavariable(builtin);
}
#ifdef __cplusplus
}
#endif
