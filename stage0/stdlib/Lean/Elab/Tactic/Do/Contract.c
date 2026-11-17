// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Contract
// Imports: public import Std.Tactic.Do.Syntax public import Std.WP public import Lean.Elab.Util public import Lean.Elab.Command public import Lean.Elab.Do.Basic import Lean.DocString.Extension import Lean.Meta.Tactic.Simp.Main meta import Lean.Parser.Command meta import Lean.Parser.Term meta import Lean.Parser.Do import Init.Syntax import Init.Grind.Interactive
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
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_SimpTheorems_addConst(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_Do_experimental_intrinsic;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldProjInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_ensureUnitAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkPUnit___redArg(lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l_Lean_Elab_Term_tryPostpone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Macro_hasDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__3_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_contractBinderIdents(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "whereStructInst"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(164, 171, 248, 18, 201, 160, 43, 108)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declValEqns"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(185, 66, 113, 88, 174, 230, 155, 36)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__7_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__8_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__7_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__11_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_getPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_getPath___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_setPath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_setPath___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "spec"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 105, 220, 149, 84, 64, 243, 129)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0___closed__0_value),((lean_object*)&l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "duplicate `spec` section"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "contractDeclVal"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__0_value),LEAN_SCALAR_PTR_LITERAL(192, 214, 40, 194, 192, 243, 241, 169)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__2_value),((lean_object*)&l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "throwsClause"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 245, 79, 142, 188, 231, 201, 155)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WP"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "EPostSlot"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "set"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__10_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(111, 147, 31, 83, 253, 106, 140, 151)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__10_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__9_value),LEAN_SCALAR_PTR_LITERAL(55, 180, 133, 168, 66, 6, 92, 213)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__11;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__13_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__12_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__15_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__14_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__17_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__19_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__20;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__21_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__23_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__24_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__21_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__24_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__24_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__23_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__24_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__24_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__25_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__26_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__27_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__26_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__27_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__27_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__28_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__29_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__29_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__29_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__30_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__31_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__31_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__31_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__32_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__33 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__33_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__33_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__34_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__34_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__35 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__35_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__32_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__35_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__36_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__30_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__36_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__37 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__37_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__28_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__37_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__38 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__38_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__25_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__38_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__39 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__39_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__40 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__40_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__40_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__42 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__42_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "open"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "openScoped"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Std.WP"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_expandDefContract___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Lean.Order"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_expandDefContract___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__13_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__15_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "theorem"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__16_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__17_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__18_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__19_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__21_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__22_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__23_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__24_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__25_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "vcgen"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__26_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__27 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__27_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__28_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__29 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__29_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__30 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__30_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "vcgenDischargeGrind"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__31 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__31_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__32 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__32_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSeq"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__33 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__33_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "grindSeq1Indented"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__34 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__34_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "grindStep"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__35 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__35_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "grindTry_"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__36 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__36_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "try"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__37 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__37_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "finish"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__38 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__38_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "first"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__39 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__39_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__40 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__40_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__40_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__41 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__41_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__42 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__42_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "done"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__43 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__43_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fail"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__44 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__44_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__45 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__45_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__46 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__46_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "contractEPosts"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__47 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__47_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "contract_eposts%"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__48 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__48_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_expandDefContract___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__49;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "tripleExceptPost"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__50 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__50_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦃"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__51 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__51_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦄"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__52 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__52_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_expandDefContract___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__53;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__54 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__54_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "unproved verification conditions for the contract of `"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__55 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__55_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "`; discharge them in a `where finally | spec => ...` section of the definition"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__56 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__56_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "skip"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__57 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__57_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "`; the `where finally | spec => ...` section does not discharge them"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__58 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__58_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "term⊥"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__59 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__59_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__60_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__26_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__60_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__59_value),LEAN_SCALAR_PTR_LITERAL(232, 78, 68, 112, 65, 121, 100, 195)}};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__60 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__60_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⊥"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__61 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__61_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ensuresClause"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__62 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__62_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__63_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__63_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__63_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__63_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__63_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__63_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__62_value),LEAN_SCALAR_PTR_LITERAL(80, 249, 216, 241, 199, 195, 198, 237)}};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__63 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__63_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__64 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__64_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__65_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__65_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__65_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__65_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__65_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__65_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__64_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__65 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__65_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__66 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__66_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__67 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__67_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "term⊤"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__68 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__68_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__69_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__69_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__69_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__26_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__69_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__68_value),LEAN_SCALAR_PTR_LITERAL(137, 158, 127, 165, 41, 148, 243, 67)}};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__69 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__69_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⊤"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__70 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__70_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "requiresClause"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__71 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__71_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__72_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__72_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__72_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__72_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__72_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__71_value),LEAN_SCALAR_PTR_LITERAL(132, 130, 91, 181, 57, 218, 183, 96)}};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__72 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__72_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 134, .m_capacity = 134, .m_length = 133, .m_data = "`given`/`requires`/`ensures`/`throws` contracts elaborate to a `vcgen`-proved specification theorem; add `import Std.WP` to use them."};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__73 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__73_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Triple"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__74 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__74_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__75_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__75_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__75_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__75_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__74_value),LEAN_SCALAR_PTR_LITERAL(202, 119, 227, 254, 29, 206, 25, 24)}};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__75 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__75_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__76 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__76_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__77_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__77_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__77_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__77_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__77_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_expandDefContract___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__77_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__76_value),LEAN_SCALAR_PTR_LITERAL(248, 187, 217, 228, 39, 184, 218, 135)}};
static const lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___closed__77 = (const lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__77_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_expandDefContract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__8_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "expandDefContract"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__21_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__23_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(57, 222, 255, 251, 159, 111, 208, 249)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 324, .m_capacity = 324, .m_length = 313, .m_data = "Expand a `def` carrying `given`/`requires`/`ensures`/`throws` clauses into the plain `def`\nplus a spec theorem `@[spec] theorem f.spec : ∀ xs, ⦃P⦄ f args ⦃fun b => Q; E⦄` proved by\n`vcgen`. A `where finally | spec => steps` section supplies `grind`-mode steps for the\nverification conditions `finish` leaves open."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract_docString__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__2;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 32, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 1, 1, 0, 1),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 1, 1, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 1, 1, 1, 1, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__3_value;
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__6;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__7;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__8;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__9(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__1___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "fst_bot"};
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__26_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__2_value),LEAN_SCALAR_PTR_LITERAL(85, 207, 85, 101, 141, 28, 12, 60)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__3_value),LEAN_SCALAR_PTR_LITERAL(186, 58, 243, 31, 167, 194, 180, 25)}};
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "snd_bot"};
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__26_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__2_value),LEAN_SCALAR_PTR_LITERAL(85, 207, 85, 101, 141, 28, 12, 60)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__5_value),LEAN_SCALAR_PTR_LITERAL(57, 77, 34, 250, 153, 237, 26, 225)}};
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "EStackEnd"};
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "bot_eq"};
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__7_value),LEAN_SCALAR_PTR_LITERAL(223, 8, 81, 115, 57, 234, 19, 38)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__8_value),LEAN_SCALAR_PTR_LITERAL(41, 7, 115, 177, 201, 198, 36, 123)}};
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__9_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__6_value),((lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__9_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__47_value),LEAN_SCALAR_PTR_LITERAL(112, 108, 40, 168, 196, 170, 99, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "elabContractEPosts"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__21_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__23_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(245, 40, 68, 173, 208, 104, 41, 180)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 199, .m_capacity = 199, .m_length = 192, .m_data = "Elaborating `contract_eposts% e` unfolds the `EPostSlot.set` applications and `⊥` in `e`, e.g.\nto an `estack⟨...⟩` expression. Used in the expansion of `throws` clauses to yield simpler specs."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts_docString__3___boxed(lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "The "};
static const lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__1;
static const lean_string_object l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 165, .m_capacity = 165, .m_length = 164, .m_data = " is part of the experimental intrinsic verification syntax; `set_option experimental.intrinsic true` acknowledges its experimental status and silences this warning."};
static const lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__2 = (const lean_object*)&l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "` clause"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractNotice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractNotice___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "elabContractNotice"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__21_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__23_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 64, 145, 33, 235, 196, 87, 155)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 170, .m_capacity = 170, .m_length = 169, .m_data = "Report the experimental status of each contract clause the notice carries, in a slight\ncommand-level misuse of a `contractDeclVal` node. Does not change the environment."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice_docString__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__4_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "`assert` element"};
static const lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__1;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 46, 79, 112, 232, 100, 17, 35)}};
static const lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_expandDefContract___closed__2_value),LEAN_SCALAR_PTR_LITERAL(55, 166, 237, 23, 37, 47, 5, 133)}};
static const lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Gadget"};
static const lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "assertGadget"};
static const lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__6_value),LEAN_SCALAR_PTR_LITERAL(193, 119, 194, 233, 172, 109, 107, 25)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__7_value),LEAN_SCALAR_PTR_LITERAL(223, 124, 11, 88, 114, 168, 194, 251)}};
static const lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "the `assert` element elaborates to a `vcgen` gadget; add `import Std.WP` to use it."};
static const lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__11;
static const lean_string_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doAssertion"};
static const lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__12_value),LEAN_SCALAR_PTR_LITERAL(144, 179, 243, 245, 156, 230, 227, 142)}};
static const lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "elabDoAssertion"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__21_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__23_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 130, 201, 151, 146, 48, 207, 207)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0_spec__0(lean_object* v_as_1_, size_t v_i_2_, size_t v_stop_3_, lean_object* v_b_4_){
_start:
{
lean_object* v___y_6_; uint8_t v___x_10_; 
v___x_10_ = lean_usize_dec_eq(v_i_2_, v_stop_3_);
if (v___x_10_ == 0)
{
lean_object* v___x_11_; uint8_t v___x_12_; 
v___x_11_ = lean_array_uget_borrowed(v_as_1_, v_i_2_);
v___x_12_ = l_Lean_Syntax_isIdent(v___x_11_);
if (v___x_12_ == 0)
{
v___y_6_ = v_b_4_;
goto v___jp_5_;
}
else
{
lean_object* v___x_13_; 
lean_inc(v___x_11_);
v___x_13_ = lean_array_push(v_b_4_, v___x_11_);
v___y_6_ = v___x_13_;
goto v___jp_5_;
}
}
else
{
return v_b_4_;
}
v___jp_5_:
{
size_t v___x_7_; size_t v___x_8_; 
v___x_7_ = ((size_t)1ULL);
v___x_8_ = lean_usize_add(v_i_2_, v___x_7_);
v_i_2_ = v___x_8_;
v_b_4_ = v___y_6_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0_spec__0___boxed(lean_object* v_as_14_, lean_object* v_i_15_, lean_object* v_stop_16_, lean_object* v_b_17_){
_start:
{
size_t v_i_boxed_18_; size_t v_stop_boxed_19_; lean_object* v_res_20_; 
v_i_boxed_18_ = lean_unbox_usize(v_i_15_);
lean_dec(v_i_15_);
v_stop_boxed_19_ = lean_unbox_usize(v_stop_16_);
lean_dec(v_stop_16_);
v_res_20_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0_spec__0(v_as_14_, v_i_boxed_18_, v_stop_boxed_19_, v_b_17_);
lean_dec_ref(v_as_14_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0(lean_object* v_as_23_, lean_object* v_start_24_, lean_object* v_stop_25_){
_start:
{
lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_26_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0___closed__0));
v___x_27_ = lean_nat_dec_lt(v_start_24_, v_stop_25_);
if (v___x_27_ == 0)
{
return v___x_26_;
}
else
{
lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_28_ = lean_array_get_size(v_as_23_);
v___x_29_ = lean_nat_dec_le(v_stop_25_, v___x_28_);
if (v___x_29_ == 0)
{
uint8_t v___x_30_; 
v___x_30_ = lean_nat_dec_lt(v_start_24_, v___x_28_);
if (v___x_30_ == 0)
{
return v___x_26_;
}
else
{
size_t v___x_31_; size_t v___x_32_; lean_object* v___x_33_; 
v___x_31_ = lean_usize_of_nat(v_start_24_);
v___x_32_ = lean_usize_of_nat(v___x_28_);
v___x_33_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0_spec__0(v_as_23_, v___x_31_, v___x_32_, v___x_26_);
return v___x_33_;
}
}
else
{
size_t v___x_34_; size_t v___x_35_; lean_object* v___x_36_; 
v___x_34_ = lean_usize_of_nat(v_start_24_);
v___x_35_ = lean_usize_of_nat(v_stop_25_);
v___x_36_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0_spec__0(v_as_23_, v___x_34_, v___x_35_, v___x_26_);
return v___x_36_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0___boxed(lean_object* v_as_37_, lean_object* v_start_38_, lean_object* v_stop_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0(v_as_37_, v_start_38_, v_stop_39_);
lean_dec(v_stop_39_);
lean_dec(v_start_38_);
lean_dec_ref(v_as_37_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_contractBinderIdents(lean_object* v_binder_50_){
_start:
{
lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_51_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__4));
lean_inc(v_binder_50_);
v___x_52_ = l_Lean_Syntax_isOfKind(v_binder_50_, v___x_51_);
if (v___x_52_ == 0)
{
uint8_t v___x_53_; 
v___x_53_ = l_Lean_Syntax_isIdent(v_binder_50_);
if (v___x_53_ == 0)
{
lean_object* v___x_54_; 
lean_dec(v_binder_50_);
v___x_54_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0___closed__0));
return v___x_54_;
}
else
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_55_ = lean_unsigned_to_nat(1u);
v___x_56_ = lean_mk_empty_array_with_capacity(v___x_55_);
v___x_57_ = lean_array_push(v___x_56_, v_binder_50_);
return v___x_57_;
}
}
else
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_58_ = lean_unsigned_to_nat(0u);
v___x_59_ = lean_unsigned_to_nat(1u);
v___x_60_ = l_Lean_Syntax_getArg(v_binder_50_, v___x_59_);
v___x_65_ = lean_unsigned_to_nat(2u);
v___x_66_ = l_Lean_Syntax_getArg(v_binder_50_, v___x_65_);
v___x_67_ = l_Lean_Syntax_isNone(v___x_66_);
if (v___x_67_ == 0)
{
uint8_t v___x_68_; 
v___x_68_ = l_Lean_Syntax_matchesNull(v___x_66_, v___x_65_);
if (v___x_68_ == 0)
{
uint8_t v___x_69_; 
lean_dec(v___x_60_);
v___x_69_ = l_Lean_Syntax_isIdent(v_binder_50_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; 
lean_dec(v_binder_50_);
v___x_70_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0___closed__0));
return v___x_70_;
}
else
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_mk_empty_array_with_capacity(v___x_59_);
v___x_72_ = lean_array_push(v___x_71_, v_binder_50_);
return v___x_72_;
}
}
else
{
lean_dec(v_binder_50_);
goto v___jp_61_;
}
}
else
{
lean_dec(v___x_66_);
lean_dec(v_binder_50_);
goto v___jp_61_;
}
v___jp_61_:
{
lean_object* v_ids_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v_ids_62_ = l_Lean_Syntax_getArgs(v___x_60_);
lean_dec(v___x_60_);
v___x_63_ = lean_array_get_size(v_ids_62_);
v___x_64_ = l_Array_filterMapM___at___00Lean_Elab_Tactic_Do_contractBinderIdents_spec__0(v_ids_62_, v___x_58_, v___x_63_);
lean_dec_ref(v_ids_62_);
return v___x_64_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f(lean_object* v_v_107_){
_start:
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__2));
lean_inc(v_v_107_);
v___x_109_ = l_Lean_Syntax_isOfKind(v_v_107_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_110_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__4));
lean_inc(v_v_107_);
v___x_111_ = l_Lean_Syntax_isOfKind(v_v_107_, v___x_110_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_112_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__6));
v___x_113_ = l_Lean_Syntax_isOfKind(v_v_107_, v___x_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_box(0);
return v___x_114_;
}
else
{
lean_object* v___x_115_; 
v___x_115_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__9));
return v___x_115_;
}
}
else
{
lean_object* v___x_116_; 
lean_dec(v_v_107_);
v___x_116_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__10));
return v___x_116_;
}
}
else
{
lean_object* v___x_117_; 
lean_dec(v_v_107_);
v___x_117_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__12));
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_getPath(lean_object* v_s_118_, lean_object* v_x_119_){
_start:
{
if (lean_obj_tag(v_x_119_) == 0)
{
return v_s_118_;
}
else
{
lean_object* v_head_120_; lean_object* v_tail_121_; lean_object* v___x_122_; 
v_head_120_ = lean_ctor_get(v_x_119_, 0);
v_tail_121_ = lean_ctor_get(v_x_119_, 1);
v___x_122_ = l_Lean_Syntax_getArg(v_s_118_, v_head_120_);
lean_dec(v_s_118_);
v_s_118_ = v___x_122_;
v_x_119_ = v_tail_121_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_getPath___boxed(lean_object* v_s_124_, lean_object* v_x_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_getPath(v_s_124_, v_x_125_);
lean_dec(v_x_125_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_setPath(lean_object* v_s_127_, lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
if (lean_obj_tag(v_x_128_) == 0)
{
lean_dec(v_s_127_);
lean_inc(v_x_129_);
return v_x_129_;
}
else
{
lean_object* v_head_130_; lean_object* v_tail_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v_head_130_ = lean_ctor_get(v_x_128_, 0);
v_tail_131_ = lean_ctor_get(v_x_128_, 1);
v___x_132_ = l_Lean_Syntax_getArg(v_s_127_, v_head_130_);
v___x_133_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_setPath(v___x_132_, v_tail_131_, v_x_129_);
v___x_134_ = l_Lean_Syntax_setArg(v_s_127_, v_head_130_, v___x_133_);
return v___x_134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_setPath___boxed(lean_object* v_s_135_, lean_object* v_x_136_, lean_object* v_x_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_setPath(v_s_135_, v_x_136_, v_x_137_);
lean_dec(v_x_137_);
lean_dec(v_x_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0(lean_object* v_as_142_, size_t v_sz_143_, size_t v_i_144_, lean_object* v_b_145_){
_start:
{
lean_object* v_a_147_; uint8_t v___x_151_; 
v___x_151_ = lean_usize_dec_lt(v_i_144_, v_sz_143_);
if (v___x_151_ == 0)
{
return v_b_145_;
}
else
{
lean_object* v_fst_152_; lean_object* v_snd_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_172_; 
v_fst_152_ = lean_ctor_get(v_b_145_, 0);
v_snd_153_ = lean_ctor_get(v_b_145_, 1);
v_isSharedCheck_172_ = !lean_is_exclusive(v_b_145_);
if (v_isSharedCheck_172_ == 0)
{
v___x_155_ = v_b_145_;
v_isShared_156_ = v_isSharedCheck_172_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_snd_153_);
lean_inc(v_fst_152_);
lean_dec(v_b_145_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_172_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v_a_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
v_a_157_ = lean_array_uget_borrowed(v_as_142_, v_i_144_);
v___x_158_ = lean_unsigned_to_nat(1u);
v___x_159_ = l_Lean_Syntax_getArg(v_a_157_, v___x_158_);
v___x_160_ = l_Lean_Syntax_getId(v___x_159_);
lean_dec(v___x_159_);
v___x_161_ = l_Lean_Name_eraseMacroScopes(v___x_160_);
lean_dec(v___x_160_);
v___x_162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___closed__1));
v___x_163_ = lean_name_eq(v___x_161_, v___x_162_);
lean_dec(v___x_161_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; lean_object* v___x_166_; 
lean_inc(v_a_157_);
v___x_164_ = lean_array_push(v_snd_153_, v_a_157_);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 1, v___x_164_);
v___x_166_ = v___x_155_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_fst_152_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
v_a_147_ = v___x_166_;
goto v___jp_146_;
}
}
else
{
lean_object* v___x_168_; lean_object* v___x_170_; 
lean_inc(v_a_157_);
v___x_168_ = lean_array_push(v_fst_152_, v_a_157_);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 0, v___x_168_);
v___x_170_ = v___x_155_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v___x_168_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v_snd_153_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
v_a_147_ = v___x_170_;
goto v___jp_146_;
}
}
}
}
v___jp_146_:
{
size_t v___x_148_; size_t v___x_149_; 
v___x_148_ = ((size_t)1ULL);
v___x_149_ = lean_usize_add(v_i_144_, v___x_148_);
v_i_144_ = v___x_149_;
v_b_145_ = v_a_147_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___boxed(lean_object* v_as_173_, lean_object* v_sz_174_, lean_object* v_i_175_, lean_object* v_b_176_){
_start:
{
size_t v_sz_boxed_177_; size_t v_i_boxed_178_; lean_object* v_res_179_; 
v_sz_boxed_177_ = lean_unbox_usize(v_sz_174_);
lean_dec(v_sz_174_);
v_i_boxed_178_ = lean_unbox_usize(v_i_175_);
lean_dec(v_i_175_);
v_res_179_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0(v_as_173_, v_sz_boxed_177_, v_i_boxed_178_, v_b_176_);
lean_dec_ref(v_as_173_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection(lean_object* v_v_186_, lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
lean_object* v___y_190_; lean_object* v___x_194_; 
lean_inc(v_v_186_);
v___x_194_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f(v_v_186_);
if (lean_obj_tag(v___x_194_) == 1)
{
lean_object* v_val_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_261_; 
v_val_195_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_261_ == 0)
{
v___x_197_ = v___x_194_;
v_isShared_198_ = v_isSharedCheck_261_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_val_195_);
lean_dec(v___x_194_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_261_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v_optWd_199_; uint8_t v___x_200_; 
lean_inc(v_v_186_);
v_optWd_199_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_getPath(v_v_186_, v_val_195_);
v___x_200_ = l_Lean_Syntax_isNone(v_optWd_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; lean_object* v_wd_202_; lean_object* v___x_203_; lean_object* v_optWf_204_; uint8_t v___x_205_; 
v___x_201_ = lean_unsigned_to_nat(0u);
v_wd_202_ = l_Lean_Syntax_getArg(v_optWd_199_, v___x_201_);
lean_dec(v_optWd_199_);
v___x_203_ = lean_unsigned_to_nat(2u);
v_optWf_204_ = l_Lean_Syntax_getArg(v_wd_202_, v___x_203_);
v___x_205_ = l_Lean_Syntax_isNone(v_optWf_204_);
if (v___x_205_ == 0)
{
lean_object* v_wf_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; size_t v_sz_210_; size_t v___x_211_; lean_object* v___x_212_; lean_object* v_fst_213_; lean_object* v_snd_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_260_; 
v_wf_206_ = l_Lean_Syntax_getArg(v_optWf_204_, v___x_201_);
lean_dec(v_optWf_204_);
v___x_207_ = l_Lean_Syntax_getArg(v_wf_206_, v___x_203_);
v___x_208_ = l_Lean_Syntax_getArgs(v___x_207_);
lean_dec(v___x_207_);
v___x_209_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__0));
v_sz_210_ = lean_array_size(v___x_208_);
v___x_211_ = ((size_t)0ULL);
v___x_212_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0(v___x_208_, v_sz_210_, v___x_211_, v___x_209_);
lean_dec_ref(v___x_208_);
v_fst_213_ = lean_ctor_get(v___x_212_, 0);
v_snd_214_ = lean_ctor_get(v___x_212_, 1);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_260_ == 0)
{
v___x_216_ = v___x_212_;
v_isShared_217_ = v_isSharedCheck_260_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_snd_214_);
lean_inc(v_fst_213_);
lean_dec(v___x_212_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_260_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_218_ = lean_array_get_size(v_fst_213_);
v___x_219_ = lean_nat_dec_eq(v___x_218_, v___x_201_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___y_222_; lean_object* v___x_245_; uint8_t v___x_246_; 
v___x_220_ = lean_box(0);
v___x_245_ = lean_unsigned_to_nat(1u);
v___x_246_ = lean_nat_dec_lt(v___x_245_, v___x_218_);
if (v___x_246_ == 0)
{
v___y_222_ = v_a_188_;
goto v___jp_221_;
}
else
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_247_ = lean_array_fget_borrowed(v_fst_213_, v___x_245_);
v___x_248_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__3));
v___x_249_ = l_Lean_Macro_throwErrorAt___redArg(v___x_247_, v___x_248_, v_a_187_, v_a_188_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; 
v_a_250_ = lean_ctor_get(v___x_249_, 1);
lean_inc(v_a_250_);
lean_dec_ref_known(v___x_249_, 2);
v___y_222_ = v_a_250_;
goto v___jp_221_;
}
else
{
lean_object* v_a_251_; lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_259_; 
lean_del_object(v___x_216_);
lean_dec(v_snd_214_);
lean_dec(v_fst_213_);
lean_dec(v_wf_206_);
lean_dec(v_wd_202_);
lean_del_object(v___x_197_);
lean_dec(v_val_195_);
lean_dec(v_v_186_);
v_a_251_ = lean_ctor_get(v___x_249_, 0);
v_a_252_ = lean_ctor_get(v___x_249_, 1);
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_259_ == 0)
{
v___x_254_ = v___x_249_;
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_inc(v_a_251_);
lean_dec(v___x_249_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_a_251_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_a_252_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
v___jp_221_:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v_wf_x27_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_231_; 
v___x_223_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__2));
v___x_224_ = lean_box(2);
v___x_225_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
lean_ctor_set(v___x_225_, 1, v___x_223_);
lean_ctor_set(v___x_225_, 2, v_snd_214_);
v_wf_x27_226_ = l_Lean_Syntax_setArg(v_wf_206_, v___x_203_, v___x_225_);
v___x_227_ = lean_array_get(v___x_220_, v_fst_213_, v___x_201_);
lean_dec(v_fst_213_);
v___x_228_ = lean_unsigned_to_nat(3u);
v___x_229_ = l_Lean_Syntax_getArg(v___x_227_, v___x_228_);
lean_dec(v___x_227_);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v___x_229_);
v___x_231_ = v___x_197_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_229_);
v___x_231_ = v_reuseFailAlloc_244_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_241_; 
v___x_232_ = lean_unsigned_to_nat(1u);
v___x_233_ = lean_mk_empty_array_with_capacity(v___x_232_);
lean_inc_ref(v___x_233_);
v___x_234_ = lean_array_push(v___x_233_, v_wf_x27_226_);
v___x_235_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_235_, 0, v___x_224_);
lean_ctor_set(v___x_235_, 1, v___x_223_);
lean_ctor_set(v___x_235_, 2, v___x_234_);
v___x_236_ = l_Lean_Syntax_setArg(v_wd_202_, v___x_203_, v___x_235_);
v___x_237_ = lean_array_push(v___x_233_, v___x_236_);
v___x_238_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_238_, 0, v___x_224_);
lean_ctor_set(v___x_238_, 1, v___x_223_);
lean_ctor_set(v___x_238_, 2, v___x_237_);
v___x_239_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_setPath(v_v_186_, v_val_195_, v___x_238_);
lean_dec_ref_known(v___x_238_, 3);
lean_dec(v_val_195_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 1, v___x_239_);
lean_ctor_set(v___x_216_, 0, v___x_231_);
v___x_241_ = v___x_216_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_231_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v___x_239_);
v___x_241_ = v_reuseFailAlloc_243_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
lean_object* v___x_242_; 
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v___y_222_);
return v___x_242_;
}
}
}
}
else
{
lean_del_object(v___x_216_);
lean_dec(v_snd_214_);
lean_dec(v_fst_213_);
lean_dec(v_wf_206_);
lean_dec(v_wd_202_);
lean_del_object(v___x_197_);
lean_dec(v_val_195_);
v___y_190_ = v_a_188_;
goto v___jp_189_;
}
}
}
else
{
lean_dec(v_optWf_204_);
lean_dec(v_wd_202_);
lean_del_object(v___x_197_);
lean_dec(v_val_195_);
v___y_190_ = v_a_188_;
goto v___jp_189_;
}
}
else
{
lean_dec(v_optWd_199_);
lean_del_object(v___x_197_);
lean_dec(v_val_195_);
v___y_190_ = v_a_188_;
goto v___jp_189_;
}
}
}
else
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v___x_194_);
v___x_262_ = lean_box(0);
v___x_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v_v_186_);
v___x_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set(v___x_264_, 1, v_a_188_);
return v___x_264_;
}
v___jp_189_:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_191_ = lean_box(0);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
lean_ctor_set(v___x_192_, 1, v_v_186_);
v___x_193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v___y_190_);
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___boxed(lean_object* v_v_265_, lean_object* v_a_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection(v_v_265_, v_a_266_, v_a_267_);
lean_dec_ref(v_a_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice(lean_object* v_val_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_280_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1));
v___x_281_ = l_Lean_Syntax_getArgs(v_val_279_);
v___x_282_ = lean_array_pop(v___x_281_);
v___x_283_ = lean_box(2);
v___x_284_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__2));
v___x_285_ = lean_array_push(v___x_282_, v___x_284_);
v___x_286_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_286_, 0, v___x_283_);
lean_ctor_set(v___x_286_, 1, v___x_280_);
lean_ctor_set(v___x_286_, 2, v___x_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___boxed(lean_object* v_val_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice(v_val_287_);
lean_dec(v_val_287_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___lam__0(lean_object* v_____do__lift_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
uint8_t v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_292_ = 0;
v___x_293_ = l_Lean_SourceInfo_fromRef(v_____do__lift_289_, v___x_292_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v___y_291_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___lam__0___boxed(lean_object* v_____do__lift_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_Elab_Tactic_Do_expandDefContract___lam__0(v_____do__lift_295_, v___y_296_, v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v_____do__lift_295_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__3(lean_object* v_as_299_, size_t v_i_300_, size_t v_stop_301_, lean_object* v_b_302_){
_start:
{
uint8_t v___x_303_; 
v___x_303_ = lean_usize_dec_eq(v_i_300_, v_stop_301_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; size_t v___x_307_; size_t v___x_308_; 
v___x_304_ = lean_array_uget_borrowed(v_as_299_, v_i_300_);
lean_inc(v___x_304_);
v___x_305_ = l_Lean_Elab_Tactic_Do_contractBinderIdents(v___x_304_);
v___x_306_ = l_Array_append___redArg(v_b_302_, v___x_305_);
lean_dec_ref(v___x_305_);
v___x_307_ = ((size_t)1ULL);
v___x_308_ = lean_usize_add(v_i_300_, v___x_307_);
v_i_300_ = v___x_308_;
v_b_302_ = v___x_306_;
goto _start;
}
else
{
return v_b_302_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__3___boxed(lean_object* v_as_310_, lean_object* v_i_311_, lean_object* v_stop_312_, lean_object* v_b_313_){
_start:
{
size_t v_i_boxed_314_; size_t v_stop_boxed_315_; lean_object* v_res_316_; 
v_i_boxed_314_ = lean_unbox_usize(v_i_311_);
lean_dec(v_i_311_);
v_stop_boxed_315_ = lean_unbox_usize(v_stop_312_);
lean_dec(v_stop_312_);
v_res_316_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__3(v_as_310_, v_i_boxed_314_, v_stop_boxed_315_, v_b_313_);
lean_dec_ref(v_as_310_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__0(size_t v_sz_317_, size_t v_i_318_, lean_object* v_bs_319_){
_start:
{
uint8_t v___x_320_; 
v___x_320_ = lean_usize_dec_lt(v_i_318_, v_sz_317_);
if (v___x_320_ == 0)
{
return v_bs_319_;
}
else
{
lean_object* v_v_321_; lean_object* v___x_322_; lean_object* v_bs_x27_323_; size_t v___x_324_; size_t v___x_325_; lean_object* v___x_326_; 
v_v_321_ = lean_array_uget(v_bs_319_, v_i_318_);
v___x_322_ = lean_unsigned_to_nat(0u);
v_bs_x27_323_ = lean_array_uset(v_bs_319_, v_i_318_, v___x_322_);
v___x_324_ = ((size_t)1ULL);
v___x_325_ = lean_usize_add(v_i_318_, v___x_324_);
v___x_326_ = lean_array_uset(v_bs_x27_323_, v_i_318_, v_v_321_);
v_i_318_ = v___x_325_;
v_bs_319_ = v___x_326_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__0___boxed(lean_object* v_sz_328_, lean_object* v_i_329_, lean_object* v_bs_330_){
_start:
{
size_t v_sz_boxed_331_; size_t v_i_boxed_332_; lean_object* v_res_333_; 
v_sz_boxed_331_ = lean_unbox_usize(v_sz_328_);
lean_dec(v_sz_328_);
v_i_boxed_332_ = lean_unbox_usize(v_i_329_);
lean_dec(v_i_329_);
v_res_333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__0(v_sz_boxed_331_, v_i_boxed_332_, v_bs_330_);
return v_res_333_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__11(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__10));
v___x_362_ = l_Lean_mkCIdent(v___x_361_);
return v___x_362_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__20(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__19));
v___x_381_ = l_String_toRawSubstring_x27(v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2(lean_object* v_as_435_, size_t v_i_436_, size_t v_stop_437_, lean_object* v_b_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
uint8_t v___x_441_; 
v___x_441_ = lean_usize_dec_eq(v_i_436_, v_stop_437_);
if (v___x_441_ == 0)
{
lean_object* v_quotContext_442_; lean_object* v_currMacroScope_443_; lean_object* v_ref_444_; size_t v___x_445_; size_t v___x_446_; lean_object* v___y_448_; lean_object* v___x_452_; lean_object* v___x_453_; uint8_t v___x_454_; 
v_quotContext_442_ = lean_ctor_get(v___y_439_, 1);
v_currMacroScope_443_ = lean_ctor_get(v___y_439_, 2);
v_ref_444_ = lean_ctor_get(v___y_439_, 5);
v___x_445_ = ((size_t)1ULL);
v___x_446_ = lean_usize_sub(v_i_436_, v___x_445_);
v___x_452_ = lean_array_uget_borrowed(v_as_435_, v___x_446_);
v___x_453_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__1));
lean_inc(v___x_452_);
v___x_454_ = l_Lean_Syntax_isOfKind(v___x_452_, v___x_453_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; 
lean_dec(v_b_438_);
v___x_455_ = l_Lean_Macro_throwUnsupported___redArg(v___y_440_);
v___y_448_ = v___x_455_;
goto v___jp_447_;
}
else
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_456_ = lean_unsigned_to_nat(1u);
v___x_457_ = l_Lean_Syntax_getArg(v___x_452_, v___x_456_);
v___x_458_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3));
lean_inc(v___x_457_);
v___x_459_ = l_Lean_Syntax_isOfKind(v___x_457_, v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; 
lean_dec(v___x_457_);
lean_dec(v_b_438_);
v___x_460_ = l_Lean_Macro_throwUnsupported___redArg(v___y_440_);
v___y_448_ = v___x_460_;
goto v___jp_447_;
}
else
{
lean_object* v_ref_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v_ref_461_ = l_Lean_replaceRef(v___x_452_, v_ref_444_);
v___x_462_ = l_Lean_SourceInfo_fromRef(v_ref_461_, v___x_441_);
lean_dec(v_ref_461_);
v___x_463_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__7));
v___x_464_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__11, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__11);
v___x_465_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__2));
v___x_466_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__13));
v___x_467_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__15));
v___x_468_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__16));
lean_inc_n(v___x_462_, 9);
v___x_469_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_462_);
lean_ctor_set(v___x_469_, 1, v___x_468_);
v___x_470_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__18));
v___x_471_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__20, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__20_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__20);
v___x_472_ = lean_box(0);
lean_inc(v_currMacroScope_443_);
lean_inc(v_quotContext_442_);
v___x_473_ = l_Lean_addMacroScope(v_quotContext_442_, v___x_472_, v_currMacroScope_443_);
v___x_474_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__39));
v___x_475_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_475_, 0, v___x_462_);
lean_ctor_set(v___x_475_, 1, v___x_471_);
lean_ctor_set(v___x_475_, 2, v___x_473_);
lean_ctor_set(v___x_475_, 3, v___x_474_);
v___x_476_ = l_Lean_Syntax_node1(v___x_462_, v___x_470_, v___x_475_);
v___x_477_ = l_Lean_Syntax_node2(v___x_462_, v___x_467_, v___x_469_, v___x_476_);
v___x_478_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__40));
v___x_479_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41));
v___x_480_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_462_);
lean_ctor_set(v___x_480_, 1, v___x_478_);
v___x_481_ = l_Lean_Syntax_node2(v___x_462_, v___x_479_, v___x_480_, v___x_457_);
v___x_482_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__42));
v___x_483_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_462_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
v___x_484_ = l_Lean_Syntax_node3(v___x_462_, v___x_466_, v___x_477_, v___x_481_, v___x_483_);
v___x_485_ = l_Lean_Syntax_node2(v___x_462_, v___x_465_, v___x_484_, v_b_438_);
v___x_486_ = l_Lean_Syntax_node2(v___x_462_, v___x_463_, v___x_464_, v___x_485_);
v_i_436_ = v___x_446_;
v_b_438_ = v___x_486_;
goto _start;
}
}
v___jp_447_:
{
if (lean_obj_tag(v___y_448_) == 0)
{
lean_object* v_a_449_; lean_object* v_a_450_; 
v_a_449_ = lean_ctor_get(v___y_448_, 0);
lean_inc(v_a_449_);
v_a_450_ = lean_ctor_get(v___y_448_, 1);
lean_inc(v_a_450_);
lean_dec_ref_known(v___y_448_, 2);
v_i_436_ = v___x_446_;
v_b_438_ = v_a_449_;
v___y_440_ = v_a_450_;
goto _start;
}
else
{
return v___y_448_;
}
}
}
else
{
lean_object* v___x_488_; 
v___x_488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_488_, 0, v_b_438_);
lean_ctor_set(v___x_488_, 1, v___y_440_);
return v___x_488_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___boxed(lean_object* v_as_489_, lean_object* v_i_490_, lean_object* v_stop_491_, lean_object* v_b_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
size_t v_i_boxed_495_; size_t v_stop_boxed_496_; lean_object* v_res_497_; 
v_i_boxed_495_ = lean_unbox_usize(v_i_490_);
lean_dec(v_i_490_);
v_stop_boxed_496_ = lean_unbox_usize(v_stop_491_);
lean_dec(v_stop_491_);
v_res_497_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2(v_as_489_, v_i_boxed_495_, v_stop_boxed_496_, v_b_492_, v___y_493_, v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec_ref(v_as_489_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__1(size_t v_sz_498_, size_t v_i_499_, lean_object* v_bs_500_){
_start:
{
uint8_t v___x_501_; 
v___x_501_ = lean_usize_dec_lt(v_i_499_, v_sz_498_);
if (v___x_501_ == 0)
{
return v_bs_500_;
}
else
{
lean_object* v_v_502_; lean_object* v___x_503_; lean_object* v_bs_x27_504_; size_t v___x_505_; size_t v___x_506_; lean_object* v___x_507_; 
v_v_502_ = lean_array_uget(v_bs_500_, v_i_499_);
v___x_503_ = lean_unsigned_to_nat(0u);
v_bs_x27_504_ = lean_array_uset(v_bs_500_, v_i_499_, v___x_503_);
v___x_505_ = ((size_t)1ULL);
v___x_506_ = lean_usize_add(v_i_499_, v___x_505_);
v___x_507_ = lean_array_uset(v_bs_x27_504_, v_i_499_, v_v_502_);
v_i_499_ = v___x_506_;
v_bs_500_ = v___x_507_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__1___boxed(lean_object* v_sz_509_, lean_object* v_i_510_, lean_object* v_bs_511_){
_start:
{
size_t v_sz_boxed_512_; size_t v_i_boxed_513_; lean_object* v_res_514_; 
v_sz_boxed_512_ = lean_unbox_usize(v_sz_509_);
lean_dec(v_sz_509_);
v_i_boxed_513_ = lean_unbox_usize(v_i_510_);
lean_dec(v_i_510_);
v_res_514_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__1(v_sz_boxed_512_, v_i_boxed_513_, v_bs_511_);
return v_res_514_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_expandDefContract___closed__5(void){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__4));
v___x_521_ = l_String_toRawSubstring_x27(v___x_520_);
return v___x_521_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_expandDefContract___closed__7(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__6));
v___x_524_ = l_String_toRawSubstring_x27(v___x_523_);
return v___x_524_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_expandDefContract___closed__49(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_567_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__48));
v___x_568_ = l_Lean_mkAtom(v___x_567_);
return v___x_568_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_expandDefContract___closed__53(void){
_start:
{
lean_object* v___x_572_; 
v___x_572_ = l_Array_mkArray0___redArg();
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_expandDefContract(lean_object* v_stx_622_, lean_object* v_a_623_, lean_object* v_a_624_){
_start:
{
lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___y_634_; lean_object* v___y_635_; lean_object* v___y_636_; lean_object* v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; lean_object* v___y_641_; lean_object* v___y_642_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___y_645_; lean_object* v_specTac_646_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___y_848_; lean_object* v___y_849_; lean_object* v___y_850_; size_t v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v_a_863_; lean_object* v_a_864_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; lean_object* v___y_968_; size_t v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v_post_979_; lean_object* v___y_980_; lean_object* v_ref_981_; lean_object* v___y_982_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; size_t v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v_post_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___x_1036_; lean_object* v___y_1038_; lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; size_t v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; uint8_t v___y_1052_; lean_object* v___y_1053_; lean_object* v___y_1054_; lean_object* v___y_1055_; lean_object* v_pre_1056_; lean_object* v___y_1057_; lean_object* v___y_1058_; lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; size_t v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; uint8_t v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1175_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; lean_object* v___y_1182_; lean_object* v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; uint8_t v___y_1186_; lean_object* v___y_1187_; lean_object* v___y_1188_; lean_object* v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; lean_object* v_decl_1201_; lean_object* v___y_1203_; lean_object* v___y_1204_; lean_object* v___y_1205_; lean_object* v___y_1206_; lean_object* v___y_1207_; lean_object* v___y_1208_; lean_object* v___y_1209_; lean_object* v___y_1210_; lean_object* v___y_1211_; lean_object* v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1215_; lean_object* v___y_1216_; lean_object* v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; lean_object* v___y_1243_; lean_object* v___y_1244_; lean_object* v___y_1245_; lean_object* v___y_1246_; lean_object* v___y_1247_; lean_object* v___y_1248_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1265_; lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1310_; lean_object* v___y_1311_; lean_object* v___y_1312_; lean_object* v___y_1313_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___x_1354_; uint8_t v___x_1355_; 
v___x_1036_ = lean_unsigned_to_nat(1u);
v_decl_1201_ = l_Lean_Syntax_getArg(v_stx_622_, v___x_1036_);
v___x_1354_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__77));
lean_inc(v_decl_1201_);
v___x_1355_ = l_Lean_Syntax_isOfKind(v_decl_1201_, v___x_1354_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
v___x_1356_ = l_Lean_Macro_throwUnsupported___redArg(v_a_624_);
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_object* v_a_1357_; 
v_a_1357_ = lean_ctor_get(v___x_1356_, 1);
lean_inc(v_a_1357_);
lean_dec_ref_known(v___x_1356_, 2);
v___y_1337_ = v_a_623_;
v___y_1338_ = v_a_1357_;
goto v___jp_1336_;
}
else
{
lean_object* v_a_1358_; lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_dec(v_decl_1201_);
lean_dec(v_stx_622_);
v_a_1358_ = lean_ctor_get(v___x_1356_, 0);
v_a_1359_ = lean_ctor_get(v___x_1356_, 1);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1356_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_inc(v_a_1358_);
lean_dec(v___x_1356_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1358_);
lean_ctor_set(v_reuseFailAlloc_1365_, 1, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
else
{
v___y_1337_ = v_a_623_;
v___y_1338_ = v_a_624_;
goto v___jp_1336_;
}
v___jp_625_:
{
lean_object* v_quotContext_649_; lean_object* v_currMacroScope_650_; lean_object* v_ref_651_; lean_object* v___x_652_; lean_object* v_a_653_; lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_840_; 
v_quotContext_649_ = lean_ctor_get(v___y_647_, 1);
v_currMacroScope_650_ = lean_ctor_get(v___y_647_, 2);
v_ref_651_ = lean_ctor_get(v___y_647_, 5);
v___x_652_ = l_Lean_Elab_Tactic_Do_expandDefContract___lam__0(v_ref_651_, v___y_647_, v___y_648_);
v_a_653_ = lean_ctor_get(v___x_652_, 0);
v_a_654_ = lean_ctor_get(v___x_652_, 1);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_840_ == 0)
{
v___x_656_ = v___x_652_;
v_isShared_657_ = v_isSharedCheck_840_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_inc(v_a_653_);
lean_dec(v___x_652_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_840_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_838_; 
v___x_658_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__0));
v___x_659_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__0));
lean_inc_ref_n(v___y_644_, 30);
lean_inc_ref_n(v___y_643_, 32);
v___x_660_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_658_, v___x_659_);
v___x_661_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__1));
v___x_662_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_658_, v___x_661_);
lean_inc_n(v_a_653_, 76);
v___x_663_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_663_, 0, v_a_653_);
lean_ctor_set(v___x_663_, 1, v___x_661_);
v___x_664_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__2));
v___x_665_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_658_, v___x_664_);
v___x_666_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__3));
v___x_667_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_667_, 0, v_a_653_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_expandDefContract___closed__5, &l_Lean_Elab_Tactic_Do_expandDefContract___closed__5_once, _init_l_Lean_Elab_Tactic_Do_expandDefContract___closed__5);
lean_inc_ref(v___y_635_);
lean_inc_ref(v___y_628_);
v___x_669_ = l_Lean_Name_mkStr2(v___y_628_, v___y_635_);
lean_inc_n(v_currMacroScope_650_, 2);
lean_inc(v___x_669_);
lean_inc_n(v_quotContext_649_, 2);
v___x_670_ = l_Lean_addMacroScope(v_quotContext_649_, v___x_669_, v_currMacroScope_650_);
v___x_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_669_);
v___x_672_ = lean_box(0);
v___x_673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_674_, 0, v_a_653_);
lean_ctor_set(v___x_674_, 1, v___x_668_);
lean_ctor_set(v___x_674_, 2, v___x_670_);
lean_ctor_set(v___x_674_, 3, v___x_673_);
v___x_675_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_expandDefContract___closed__7, &l_Lean_Elab_Tactic_Do_expandDefContract___closed__7_once, _init_l_Lean_Elab_Tactic_Do_expandDefContract___closed__7);
lean_inc_ref(v___y_631_);
v___x_676_ = l_Lean_Name_mkStr2(v___y_643_, v___y_631_);
lean_inc(v___x_676_);
v___x_677_ = l_Lean_addMacroScope(v_quotContext_649_, v___x_676_, v_currMacroScope_650_);
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v___x_676_);
v___x_679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v___x_672_);
v___x_680_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_680_, 0, v_a_653_);
lean_ctor_set(v___x_680_, 1, v___x_675_);
lean_ctor_set(v___x_680_, 2, v___x_677_);
lean_ctor_set(v___x_680_, 3, v___x_679_);
lean_inc_n(v___y_637_, 17);
v___x_681_ = l_Lean_Syntax_node2(v_a_653_, v___y_637_, v___x_674_, v___x_680_);
v___x_682_ = l_Lean_Syntax_node2(v_a_653_, v___x_665_, v___x_667_, v___x_681_);
v___x_683_ = l_Lean_Syntax_node2(v_a_653_, v___x_662_, v___x_663_, v___x_682_);
v___x_684_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_684_, 0, v_a_653_);
lean_ctor_set(v___x_684_, 1, v___x_659_);
v___x_685_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__8));
v___x_686_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_658_, v___x_685_);
v___x_687_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__9));
v___x_688_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_658_, v___x_687_);
lean_inc_ref(v___y_630_);
v___x_689_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_689_, 0, v_a_653_);
lean_ctor_set(v___x_689_, 1, v___y_637_);
lean_ctor_set(v___x_689_, 2, v___y_630_);
v___x_690_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__10));
lean_inc_ref_n(v___y_640_, 4);
v___x_691_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___y_640_, v___x_690_);
v___x_692_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__11));
v___x_693_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_693_, 0, v_a_653_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__12));
v___x_695_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___y_640_, v___x_694_);
v___x_696_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__13));
v___x_697_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___y_640_, v___x_696_);
lean_inc_ref_n(v___x_689_, 24);
v___x_698_ = l_Lean_Syntax_node1(v_a_653_, v___x_697_, v___x_689_);
v___x_699_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__14));
lean_inc_ref_n(v___y_632_, 2);
v___x_700_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_699_, v___y_632_);
v___x_701_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_701_, 0, v_a_653_);
lean_ctor_set(v___x_701_, 1, v___y_632_);
v___x_702_ = l_Lean_Syntax_node2(v_a_653_, v___x_700_, v___x_701_, v___x_689_);
v___x_703_ = l_Lean_Syntax_node2(v_a_653_, v___x_695_, v___x_698_, v___x_702_);
v___x_704_ = l_Lean_Syntax_node1(v_a_653_, v___y_637_, v___x_703_);
v___x_705_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__15));
v___x_706_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_706_, 0, v_a_653_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
lean_inc_ref(v___x_706_);
v___x_707_ = l_Lean_Syntax_node3(v_a_653_, v___x_691_, v___x_693_, v___x_704_, v___x_706_);
v___x_708_ = l_Lean_Syntax_node1(v_a_653_, v___y_637_, v___x_707_);
v___x_709_ = l_Lean_Syntax_node7(v_a_653_, v___x_688_, v___x_689_, v___x_708_, v___x_689_, v___x_689_, v___x_689_, v___x_689_, v___x_689_);
v___x_710_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__16));
v___x_711_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_658_, v___x_710_);
v___x_712_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_712_, 0, v_a_653_);
lean_ctor_set(v___x_712_, 1, v___x_710_);
v___x_713_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__17));
v___x_714_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_658_, v___x_713_);
v___x_715_ = lean_mk_empty_array_with_capacity(v___y_627_);
lean_inc_n(v___y_645_, 2);
v___x_716_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_716_, 0, v___y_645_);
lean_ctor_set(v___x_716_, 1, v___y_637_);
lean_ctor_set(v___x_716_, 2, v___x_715_);
v___x_717_ = lean_array_push(v___y_629_, v___y_642_);
v___x_718_ = lean_array_push(v___x_717_, v___x_716_);
v___x_719_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_719_, 0, v___y_645_);
lean_ctor_set(v___x_719_, 1, v___x_714_);
lean_ctor_set(v___x_719_, 2, v___x_718_);
v___x_720_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__18));
v___x_721_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_658_, v___x_720_);
v___x_722_ = l_Array_append___redArg(v___y_630_, v___y_634_);
lean_dec_ref(v___y_634_);
v___x_723_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_723_, 0, v_a_653_);
lean_ctor_set(v___x_723_, 1, v___y_637_);
lean_ctor_set(v___x_723_, 2, v___x_722_);
v___x_724_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__19));
v___x_725_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___y_640_, v___x_724_);
v___x_726_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__20));
v___x_727_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_727_, 0, v_a_653_);
lean_ctor_set(v___x_727_, 1, v___x_726_);
v___x_728_ = l_Lean_Syntax_node2(v_a_653_, v___x_725_, v___x_727_, v___y_636_);
v___x_729_ = l_Lean_Syntax_node2(v_a_653_, v___x_721_, v___x_723_, v___x_728_);
v___x_730_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_whereDeclsPath_x3f___closed__1));
v___x_731_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_658_, v___x_730_);
v___x_732_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__21));
v___x_733_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_733_, 0, v_a_653_);
lean_ctor_set(v___x_733_, 1, v___x_732_);
v___x_734_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__22));
v___x_735_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___y_640_, v___x_734_);
v___x_736_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__23));
v___x_737_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_737_, 0, v_a_653_);
lean_ctor_set(v___x_737_, 1, v___x_736_);
v___x_738_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22));
v___x_739_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__24));
v___x_740_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_738_, v___x_739_);
v___x_741_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__25));
v___x_742_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_738_, v___x_741_);
v___x_743_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__26));
v___x_744_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_738_, v___x_743_);
v___x_745_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_745_, 0, v_a_653_);
lean_ctor_set(v___x_745_, 1, v___x_743_);
v___x_746_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__27));
v___x_747_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_738_, v___x_746_);
v___x_748_ = l_Lean_Syntax_node1(v_a_653_, v___x_747_, v___x_689_);
v___x_749_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__28));
v___x_750_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_750_, 0, v_a_653_);
lean_ctor_set(v___x_750_, 1, v___x_749_);
v___x_751_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__29));
v___x_752_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_738_, v___x_751_);
v___x_753_ = l_Lean_Syntax_node3(v_a_653_, v___x_752_, v___x_689_, v___x_689_, v___y_638_);
v___x_754_ = l_Lean_Syntax_node1(v_a_653_, v___y_637_, v___x_753_);
v___x_755_ = l_Lean_Syntax_node3(v_a_653_, v___y_637_, v___x_750_, v___x_754_, v___x_706_);
v___x_756_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__30));
v___x_757_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_757_, 0, v_a_653_);
lean_ctor_set(v___x_757_, 1, v___x_756_);
v___x_758_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__31));
v___x_759_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_738_, v___x_758_);
v___x_760_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__32));
v___x_761_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__12));
v___x_762_ = l_Lean_Name_mkStr5(v___y_643_, v___y_644_, v___x_738_, v___x_760_, v___x_761_);
v___x_763_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__16));
v___x_764_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_764_, 0, v_a_653_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
v___x_765_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__33));
v___x_766_ = l_Lean_Name_mkStr5(v___y_643_, v___y_644_, v___x_738_, v___x_760_, v___x_765_);
v___x_767_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__34));
v___x_768_ = l_Lean_Name_mkStr5(v___y_643_, v___y_644_, v___x_738_, v___x_760_, v___x_767_);
v___x_769_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__35));
v___x_770_ = l_Lean_Name_mkStr5(v___y_643_, v___y_644_, v___x_738_, v___x_760_, v___x_769_);
v___x_771_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__36));
v___x_772_ = l_Lean_Name_mkStr5(v___y_643_, v___y_644_, v___x_738_, v___x_760_, v___x_771_);
v___x_773_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__37));
v___x_774_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_774_, 0, v_a_653_);
lean_ctor_set(v___x_774_, 1, v___x_773_);
v___x_775_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__38));
v___x_776_ = l_Lean_Name_mkStr5(v___y_643_, v___y_644_, v___x_738_, v___x_760_, v___x_775_);
v___x_777_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_777_, 0, v_a_653_);
lean_ctor_set(v___x_777_, 1, v___x_775_);
v___x_778_ = l_Lean_Syntax_node4(v_a_653_, v___x_776_, v___x_777_, v___x_689_, v___x_689_, v___x_689_);
lean_inc(v___x_770_);
v___x_779_ = l_Lean_Syntax_node2(v_a_653_, v___x_770_, v___x_778_, v___x_689_);
v___x_780_ = l_Lean_Syntax_node1(v_a_653_, v___y_637_, v___x_779_);
lean_inc(v___x_768_);
v___x_781_ = l_Lean_Syntax_node1(v_a_653_, v___x_768_, v___x_780_);
lean_inc(v___x_766_);
v___x_782_ = l_Lean_Syntax_node1(v_a_653_, v___x_766_, v___x_781_);
v___x_783_ = l_Lean_Syntax_node2(v_a_653_, v___x_772_, v___x_774_, v___x_782_);
v___x_784_ = l_Lean_Syntax_node2(v_a_653_, v___x_770_, v___x_783_, v___x_689_);
v___x_785_ = l_Lean_Syntax_node1(v_a_653_, v___y_637_, v___x_784_);
v___x_786_ = l_Lean_Syntax_node1(v_a_653_, v___x_768_, v___x_785_);
v___x_787_ = l_Lean_Syntax_node1(v_a_653_, v___x_766_, v___x_786_);
v___x_788_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__42));
v___x_789_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_789_, 0, v_a_653_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
v___x_790_ = l_Lean_Syntax_node3(v_a_653_, v___x_762_, v___x_764_, v___x_787_, v___x_789_);
v___x_791_ = l_Lean_Syntax_node1(v_a_653_, v___x_759_, v___x_790_);
v___x_792_ = l_Lean_Syntax_node2(v_a_653_, v___y_637_, v___x_757_, v___x_791_);
v___x_793_ = l_Lean_Syntax_node8(v_a_653_, v___x_744_, v___x_745_, v___x_748_, v___x_755_, v___x_689_, v___x_689_, v___x_689_, v___x_689_, v___x_792_);
v___x_794_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__39));
v___x_795_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_738_, v___x_794_);
v___x_796_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_796_, 0, v_a_653_);
lean_ctor_set(v___x_796_, 1, v___x_794_);
v___x_797_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__41));
v___x_798_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__42));
v___x_799_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_799_, 0, v_a_653_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v___x_800_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__43));
v___x_801_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_738_, v___x_800_);
v___x_802_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_802_, 0, v_a_653_);
lean_ctor_set(v___x_802_, 1, v___x_800_);
v___x_803_ = l_Lean_Syntax_node1(v_a_653_, v___x_801_, v___x_802_);
v___x_804_ = l_Lean_Syntax_node1(v_a_653_, v___y_637_, v___x_803_);
lean_inc_n(v___x_742_, 2);
v___x_805_ = l_Lean_Syntax_node1(v_a_653_, v___x_742_, v___x_804_);
lean_inc_n(v___x_740_, 2);
v___x_806_ = l_Lean_Syntax_node1(v_a_653_, v___x_740_, v___x_805_);
lean_inc_ref(v___x_799_);
v___x_807_ = l_Lean_Syntax_node2(v_a_653_, v___x_797_, v___x_799_, v___x_806_);
v___x_808_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__44));
v___x_809_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_738_, v___x_808_);
v___x_810_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_810_, 0, v_a_653_);
lean_ctor_set(v___x_810_, 1, v___x_808_);
v___x_811_ = l_Lean_Syntax_node1(v_a_653_, v___y_637_, v___y_626_);
v___x_812_ = l_Lean_Syntax_node2(v_a_653_, v___x_809_, v___x_810_, v___x_811_);
v___x_813_ = l_Lean_Syntax_node1(v_a_653_, v___y_637_, v___x_812_);
v___x_814_ = l_Lean_Syntax_node1(v_a_653_, v___x_742_, v___x_813_);
v___x_815_ = l_Lean_Syntax_node1(v_a_653_, v___x_740_, v___x_814_);
v___x_816_ = l_Lean_Syntax_node2(v_a_653_, v___x_797_, v___x_799_, v___x_815_);
v___x_817_ = l_Lean_Syntax_node2(v_a_653_, v___y_637_, v___x_807_, v___x_816_);
v___x_818_ = l_Lean_Syntax_node2(v_a_653_, v___x_795_, v___x_796_, v___x_817_);
v___x_819_ = l_Lean_Syntax_node5(v_a_653_, v___y_637_, v___x_793_, v___x_689_, v_specTac_646_, v___x_689_, v___x_818_);
v___x_820_ = l_Lean_Syntax_node1(v_a_653_, v___x_742_, v___x_819_);
v___x_821_ = l_Lean_Syntax_node1(v_a_653_, v___x_740_, v___x_820_);
v___x_822_ = l_Lean_Syntax_node2(v_a_653_, v___x_735_, v___x_737_, v___x_821_);
v___x_823_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__45));
v___x_824_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__46));
v___x_825_ = l_Lean_Name_mkStr4(v___y_643_, v___y_644_, v___x_823_, v___x_824_);
v___x_826_ = l_Lean_Syntax_node2(v_a_653_, v___x_825_, v___x_689_, v___x_689_);
v___x_827_ = l_Lean_Syntax_node4(v_a_653_, v___x_731_, v___x_733_, v___x_822_, v___x_826_, v___x_689_);
v___x_828_ = l_Lean_Syntax_node4(v_a_653_, v___x_711_, v___x_712_, v___x_719_, v___x_729_, v___x_827_);
v___x_829_ = l_Lean_Syntax_node2(v_a_653_, v___x_686_, v___x_709_, v___x_828_);
v___x_830_ = l_Lean_Syntax_node3(v_a_653_, v___x_660_, v___x_683_, v___x_684_, v___x_829_);
v___x_831_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice(v___y_639_);
lean_dec(v___y_639_);
v___x_832_ = lean_mk_empty_array_with_capacity(v___y_641_);
v___x_833_ = lean_array_push(v___x_832_, v___x_831_);
v___x_834_ = lean_array_push(v___x_833_, v___y_633_);
v___x_835_ = lean_array_push(v___x_834_, v___x_830_);
v___x_836_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_836_, 0, v___y_645_);
lean_ctor_set(v___x_836_, 1, v___y_637_);
lean_ctor_set(v___x_836_, 2, v___x_835_);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 0, v___x_836_);
v___x_838_ = v___x_656_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_836_);
lean_ctor_set(v_reuseFailAlloc_839_, 1, v_a_654_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
v___jp_841_:
{
lean_object* v___x_865_; lean_object* v_a_866_; lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_960_; 
v___x_865_ = l_Lean_Elab_Tactic_Do_expandDefContract___lam__0(v___y_846_, v___y_861_, v_a_864_);
v_a_866_ = lean_ctor_get(v___x_865_, 0);
v_a_867_ = lean_ctor_get(v___x_865_, 1);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_960_ == 0)
{
v___x_869_ = v___x_865_;
v_isShared_870_ = v_isSharedCheck_960_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_inc(v_a_866_);
lean_dec(v___x_865_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_960_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_871_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__1));
v___x_872_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__2));
v___x_873_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__47));
lean_inc_ref(v___y_862_);
v___x_874_ = l_Lean_Name_mkStr4(v___y_862_, v___x_871_, v___x_872_, v___x_873_);
v___x_875_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_expandDefContract___closed__49, &l_Lean_Elab_Tactic_Do_expandDefContract___closed__49_once, _init_l_Lean_Elab_Tactic_Do_expandDefContract___closed__49);
v___x_876_ = lean_mk_empty_array_with_capacity(v___y_842_);
lean_inc_ref(v___x_876_);
v___x_877_ = lean_array_push(v___x_876_, v___x_875_);
v___x_878_ = lean_array_push(v___x_877_, v_a_863_);
v___x_879_ = lean_box(2);
v___x_880_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_880_, 0, v___x_879_);
lean_ctor_set(v___x_880_, 1, v___x_874_);
lean_ctor_set(v___x_880_, 2, v___x_878_);
v___x_881_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__50));
lean_inc_ref(v___y_854_);
lean_inc_ref(v___y_845_);
v___x_882_ = l_Lean_Name_mkStr3(v___y_845_, v___y_854_, v___x_881_);
v___x_883_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__51));
lean_inc(v_a_866_);
if (v_isShared_870_ == 0)
{
lean_ctor_set_tag(v___x_869_, 2);
lean_ctor_set(v___x_869_, 1, v___x_883_);
v___x_885_ = v___x_869_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_866_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v___x_883_);
v___x_885_ = v_reuseFailAlloc_959_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; size_t v_sz_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_886_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__52));
lean_inc_n(v_a_866_, 5);
v___x_887_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_887_, 0, v_a_866_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v___x_888_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__2));
v___x_889_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_expandDefContract___closed__53, &l_Lean_Elab_Tactic_Do_expandDefContract___closed__53_once, _init_l_Lean_Elab_Tactic_Do_expandDefContract___closed__53);
v___x_890_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_890_, 0, v_a_866_);
lean_ctor_set(v___x_890_, 1, v___x_888_);
lean_ctor_set(v___x_890_, 2, v___x_889_);
v___x_891_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__6));
lean_inc_ref(v___y_862_);
v___x_892_ = l_Lean_Name_mkStr4(v___y_862_, v___x_871_, v___x_872_, v___x_891_);
v_sz_893_ = lean_array_size(v___y_850_);
v___x_894_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__1(v_sz_893_, v___y_851_, v___y_850_);
v___x_895_ = l_Array_append___redArg(v___x_889_, v___x_894_);
lean_dec_ref(v___x_894_);
v___x_896_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_896_, 0, v_a_866_);
lean_ctor_set(v___x_896_, 1, v___x_888_);
lean_ctor_set(v___x_896_, 2, v___x_895_);
lean_inc(v___y_856_);
v___x_897_ = l_Lean_Syntax_node2(v_a_866_, v___x_892_, v___y_856_, v___x_896_);
v___x_898_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__54));
v___x_899_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_899_, 0, v_a_866_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = lean_unsigned_to_nat(10u);
v___x_901_ = lean_mk_empty_array_with_capacity(v___x_900_);
lean_inc_ref(v___x_885_);
v___x_902_ = lean_array_push(v___x_901_, v___x_885_);
v___x_903_ = lean_array_push(v___x_902_, v___y_843_);
lean_inc_ref(v___x_887_);
v___x_904_ = lean_array_push(v___x_903_, v___x_887_);
v___x_905_ = lean_array_push(v___x_904_, v___x_890_);
v___x_906_ = lean_array_push(v___x_905_, v___x_897_);
v___x_907_ = lean_array_push(v___x_906_, v___x_885_);
v___x_908_ = lean_array_push(v___x_907_, v___y_855_);
v___x_909_ = lean_array_push(v___x_908_, v___x_899_);
v___x_910_ = lean_array_push(v___x_909_, v___x_880_);
v___x_911_ = lean_array_push(v___x_910_, v___x_887_);
v___x_912_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_912_, 0, v_a_866_);
lean_ctor_set(v___x_912_, 1, v___x_882_);
lean_ctor_set(v___x_912_, 2, v___x_911_);
if (lean_obj_tag(v___y_858_) == 0)
{
lean_object* v___x_913_; lean_object* v_a_914_; lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_933_; 
v___x_913_ = l_Lean_Elab_Tactic_Do_expandDefContract___lam__0(v___y_846_, v___y_861_, v_a_867_);
v_a_914_ = lean_ctor_get(v___x_913_, 0);
v_a_915_ = lean_ctor_get(v___x_913_, 1);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_933_ == 0)
{
v___x_917_ = v___x_913_;
v_isShared_918_ = v_isSharedCheck_933_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_inc(v_a_914_);
lean_dec(v___x_913_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_933_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_919_; uint8_t v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_930_; 
v___x_919_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__55));
v___x_920_ = 1;
v___x_921_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_847_, v___x_920_);
v___x_922_ = lean_string_append(v___x_919_, v___x_921_);
lean_dec_ref(v___x_921_);
v___x_923_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__56));
v___x_924_ = lean_string_append(v___x_922_, v___x_923_);
v___x_925_ = l_Lean_Syntax_mkStrLit(v___x_924_, v___x_879_);
v___x_926_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22));
v___x_927_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__57));
lean_inc_ref(v___y_862_);
v___x_928_ = l_Lean_Name_mkStr4(v___y_862_, v___x_871_, v___x_926_, v___x_927_);
lean_inc(v_a_914_);
if (v_isShared_918_ == 0)
{
lean_ctor_set_tag(v___x_917_, 2);
lean_ctor_set(v___x_917_, 1, v___x_927_);
v___x_930_ = v___x_917_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_914_);
lean_ctor_set(v_reuseFailAlloc_932_, 1, v___x_927_);
v___x_930_ = v_reuseFailAlloc_932_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_object* v___x_931_; 
v___x_931_ = l_Lean_Syntax_node1(v_a_914_, v___x_928_, v___x_930_);
v___y_626_ = v___x_925_;
v___y_627_ = v___y_844_;
v___y_628_ = v___y_845_;
v___y_629_ = v___x_876_;
v___y_630_ = v___x_889_;
v___y_631_ = v___y_848_;
v___y_632_ = v___y_849_;
v___y_633_ = v___y_853_;
v___y_634_ = v___y_852_;
v___y_635_ = v___y_854_;
v___y_636_ = v___x_912_;
v___y_637_ = v___x_888_;
v___y_638_ = v___y_856_;
v___y_639_ = v___y_857_;
v___y_640_ = v___x_872_;
v___y_641_ = v___y_859_;
v___y_642_ = v___y_860_;
v___y_643_ = v___y_862_;
v___y_644_ = v___x_871_;
v___y_645_ = v___x_879_;
v_specTac_646_ = v___x_931_;
v___y_647_ = v___y_861_;
v___y_648_ = v_a_915_;
goto v___jp_625_;
}
}
}
else
{
lean_object* v_val_934_; lean_object* v___x_935_; lean_object* v_a_936_; lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_958_; 
v_val_934_ = lean_ctor_get(v___y_858_, 0);
lean_inc(v_val_934_);
lean_dec_ref_known(v___y_858_, 1);
v___x_935_ = l_Lean_Elab_Tactic_Do_expandDefContract___lam__0(v___y_846_, v___y_861_, v_a_867_);
v_a_936_ = lean_ctor_get(v___x_935_, 0);
v_a_937_ = lean_ctor_get(v___x_935_, 1);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_958_ == 0)
{
v___x_939_ = v___x_935_;
v_isShared_940_ = v_isSharedCheck_958_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_inc(v_a_936_);
lean_dec(v___x_935_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_958_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
uint8_t v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_953_; 
v___x_941_ = 1;
v___x_942_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__55));
v___x_943_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_847_, v___x_941_);
v___x_944_ = lean_string_append(v___x_942_, v___x_943_);
lean_dec_ref(v___x_943_);
v___x_945_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__58));
v___x_946_ = lean_string_append(v___x_944_, v___x_945_);
v___x_947_ = l_Lean_Syntax_mkStrLit(v___x_946_, v___x_879_);
v___x_948_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22));
v___x_949_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__12));
lean_inc_ref(v___y_862_);
v___x_950_ = l_Lean_Name_mkStr4(v___y_862_, v___x_871_, v___x_948_, v___x_949_);
v___x_951_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__16));
lean_inc(v_a_936_);
if (v_isShared_940_ == 0)
{
lean_ctor_set_tag(v___x_939_, 2);
lean_ctor_set(v___x_939_, 1, v___x_951_);
v___x_953_ = v___x_939_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_936_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v___x_951_);
v___x_953_ = v_reuseFailAlloc_957_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_954_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__42));
lean_inc(v_a_936_);
v___x_955_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_955_, 0, v_a_936_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = l_Lean_Syntax_node3(v_a_936_, v___x_950_, v___x_953_, v_val_934_, v___x_955_);
v___y_626_ = v___x_947_;
v___y_627_ = v___y_844_;
v___y_628_ = v___y_845_;
v___y_629_ = v___x_876_;
v___y_630_ = v___x_889_;
v___y_631_ = v___y_848_;
v___y_632_ = v___y_849_;
v___y_633_ = v___y_853_;
v___y_634_ = v___y_852_;
v___y_635_ = v___y_854_;
v___y_636_ = v___x_912_;
v___y_637_ = v___x_888_;
v___y_638_ = v___y_856_;
v___y_639_ = v___y_857_;
v___y_640_ = v___x_872_;
v___y_641_ = v___y_859_;
v___y_642_ = v___y_860_;
v___y_643_ = v___y_862_;
v___y_644_ = v___x_871_;
v___y_645_ = v___x_879_;
v_specTac_646_ = v___x_956_;
v___y_647_ = v___y_861_;
v___y_648_ = v_a_937_;
goto v___jp_625_;
}
}
}
}
}
}
v___jp_961_:
{
lean_object* v___x_983_; lean_object* v_a_984_; lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_1013_; 
v___x_983_ = l_Lean_Elab_Tactic_Do_expandDefContract___lam__0(v_ref_981_, v___y_980_, v___y_982_);
v_a_984_ = lean_ctor_get(v___x_983_, 0);
v_a_985_ = lean_ctor_get(v___x_983_, 1);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_987_ = v___x_983_;
v_isShared_988_ = v_isSharedCheck_1013_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_inc(v_a_984_);
lean_dec(v___x_983_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_1013_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_994_; 
v___x_989_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_contractBinderIdents___closed__0));
v___x_990_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__26));
v___x_991_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__60));
v___x_992_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__61));
lean_inc(v_a_984_);
if (v_isShared_988_ == 0)
{
lean_ctor_set_tag(v___x_987_, 2);
lean_ctor_set(v___x_987_, 1, v___x_992_);
v___x_994_ = v___x_987_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_984_);
lean_ctor_set(v_reuseFailAlloc_1012_, 1, v___x_992_);
v___x_994_ = v_reuseFailAlloc_1012_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; uint8_t v___x_998_; 
v___x_995_ = l_Lean_Syntax_node1(v_a_984_, v___x_991_, v___x_994_);
v___x_996_ = l_Lean_Syntax_getArgs(v___y_973_);
lean_dec(v___y_973_);
v___x_997_ = lean_array_get_size(v___x_996_);
v___x_998_ = lean_nat_dec_lt(v___y_964_, v___x_997_);
if (v___x_998_ == 0)
{
lean_dec_ref(v___x_996_);
v___y_842_ = v___y_962_;
v___y_843_ = v___y_963_;
v___y_844_ = v___y_964_;
v___y_845_ = v___y_965_;
v___y_846_ = v_ref_981_;
v___y_847_ = v___y_966_;
v___y_848_ = v___x_990_;
v___y_849_ = v___y_967_;
v___y_850_ = v___y_968_;
v___y_851_ = v___y_969_;
v___y_852_ = v___y_970_;
v___y_853_ = v___y_971_;
v___y_854_ = v___y_972_;
v___y_855_ = v_post_979_;
v___y_856_ = v___y_974_;
v___y_857_ = v___y_975_;
v___y_858_ = v___y_976_;
v___y_859_ = v___y_978_;
v___y_860_ = v___y_977_;
v___y_861_ = v___y_980_;
v___y_862_ = v___x_989_;
v_a_863_ = v___x_995_;
v_a_864_ = v_a_985_;
goto v___jp_841_;
}
else
{
size_t v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = lean_usize_of_nat(v___x_997_);
v___x_1000_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2(v___x_996_, v___x_999_, v___y_969_, v___x_995_, v___y_980_, v_a_985_);
lean_dec_ref(v___x_996_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v_a_1001_; lean_object* v_a_1002_; 
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
lean_inc(v_a_1001_);
v_a_1002_ = lean_ctor_get(v___x_1000_, 1);
lean_inc(v_a_1002_);
lean_dec_ref_known(v___x_1000_, 2);
v___y_842_ = v___y_962_;
v___y_843_ = v___y_963_;
v___y_844_ = v___y_964_;
v___y_845_ = v___y_965_;
v___y_846_ = v_ref_981_;
v___y_847_ = v___y_966_;
v___y_848_ = v___x_990_;
v___y_849_ = v___y_967_;
v___y_850_ = v___y_968_;
v___y_851_ = v___y_969_;
v___y_852_ = v___y_970_;
v___y_853_ = v___y_971_;
v___y_854_ = v___y_972_;
v___y_855_ = v_post_979_;
v___y_856_ = v___y_974_;
v___y_857_ = v___y_975_;
v___y_858_ = v___y_976_;
v___y_859_ = v___y_978_;
v___y_860_ = v___y_977_;
v___y_861_ = v___y_980_;
v___y_862_ = v___x_989_;
v_a_863_ = v_a_1001_;
v_a_864_ = v_a_1002_;
goto v___jp_841_;
}
else
{
lean_object* v_a_1003_; lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec(v_post_979_);
lean_dec(v___y_977_);
lean_dec(v___y_976_);
lean_dec(v___y_975_);
lean_dec(v___y_974_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
lean_dec_ref(v___y_968_);
lean_dec(v___y_966_);
lean_dec(v___y_963_);
v_a_1003_ = lean_ctor_get(v___x_1000_, 0);
v_a_1004_ = lean_ctor_get(v___x_1000_, 1);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_1000_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_inc(v_a_1003_);
lean_dec(v___x_1000_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1003_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
}
}
}
v___jp_1014_:
{
lean_object* v_ref_1035_; 
v_ref_1035_ = lean_ctor_get(v___y_1033_, 5);
v___y_962_ = v___y_1015_;
v___y_963_ = v___y_1016_;
v___y_964_ = v___y_1017_;
v___y_965_ = v___y_1018_;
v___y_966_ = v___y_1019_;
v___y_967_ = v___y_1020_;
v___y_968_ = v___y_1021_;
v___y_969_ = v___y_1022_;
v___y_970_ = v___y_1023_;
v___y_971_ = v___y_1024_;
v___y_972_ = v___y_1025_;
v___y_973_ = v___y_1026_;
v___y_974_ = v___y_1027_;
v___y_975_ = v___y_1028_;
v___y_976_ = v___y_1029_;
v___y_977_ = v___y_1030_;
v___y_978_ = v___y_1031_;
v_post_979_ = v_post_1032_;
v___y_980_ = v___y_1033_;
v_ref_981_ = v_ref_1035_;
v___y_982_ = v___y_1034_;
goto v___jp_961_;
}
v___jp_1037_:
{
uint8_t v___x_1059_; 
v___x_1059_ = l_Lean_Syntax_isNone(v___y_1048_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; lean_object* v___x_1061_; uint8_t v___x_1062_; 
v___x_1060_ = l_Lean_Syntax_getArg(v___y_1048_, v___y_1039_);
lean_dec(v___y_1048_);
v___x_1061_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__63));
lean_inc(v___x_1060_);
v___x_1062_ = l_Lean_Syntax_isOfKind(v___x_1060_, v___x_1061_);
if (v___x_1062_ == 0)
{
lean_object* v___x_1063_; 
lean_dec(v___x_1060_);
v___x_1063_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1058_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v_a_1064_; lean_object* v_a_1065_; 
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1064_);
v_a_1065_ = lean_ctor_get(v___x_1063_, 1);
lean_inc(v_a_1065_);
lean_dec_ref_known(v___x_1063_, 2);
v___y_1015_ = v___y_1038_;
v___y_1016_ = v_pre_1056_;
v___y_1017_ = v___y_1039_;
v___y_1018_ = v___y_1040_;
v___y_1019_ = v___y_1041_;
v___y_1020_ = v___y_1042_;
v___y_1021_ = v___y_1043_;
v___y_1022_ = v___y_1044_;
v___y_1023_ = v___y_1045_;
v___y_1024_ = v___y_1046_;
v___y_1025_ = v___y_1047_;
v___y_1026_ = v___y_1049_;
v___y_1027_ = v___y_1050_;
v___y_1028_ = v___y_1051_;
v___y_1029_ = v___y_1053_;
v___y_1030_ = v___y_1055_;
v___y_1031_ = v___y_1054_;
v_post_1032_ = v_a_1064_;
v___y_1033_ = v___y_1057_;
v___y_1034_ = v_a_1065_;
goto v___jp_1014_;
}
else
{
lean_object* v_a_1066_; lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
lean_dec(v_pre_1056_);
lean_dec(v___y_1055_);
lean_dec(v___y_1053_);
lean_dec(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1041_);
v_a_1066_ = lean_ctor_get(v___x_1063_, 0);
v_a_1067_ = lean_ctor_get(v___x_1063_, 1);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1063_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_inc(v_a_1066_);
lean_dec(v___x_1063_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1066_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
else
{
lean_object* v___x_1075_; lean_object* v___x_1076_; uint8_t v___x_1077_; 
v___x_1075_ = l_Lean_Syntax_getArg(v___x_1060_, v___x_1036_);
lean_dec(v___x_1060_);
v___x_1076_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3));
lean_inc(v___x_1075_);
v___x_1077_ = l_Lean_Syntax_isOfKind(v___x_1075_, v___x_1076_);
if (v___x_1077_ == 0)
{
lean_object* v___x_1078_; 
lean_dec(v___x_1075_);
v___x_1078_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1058_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v_a_1080_; 
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
lean_inc(v_a_1079_);
v_a_1080_ = lean_ctor_get(v___x_1078_, 1);
lean_inc(v_a_1080_);
lean_dec_ref_known(v___x_1078_, 2);
v___y_1015_ = v___y_1038_;
v___y_1016_ = v_pre_1056_;
v___y_1017_ = v___y_1039_;
v___y_1018_ = v___y_1040_;
v___y_1019_ = v___y_1041_;
v___y_1020_ = v___y_1042_;
v___y_1021_ = v___y_1043_;
v___y_1022_ = v___y_1044_;
v___y_1023_ = v___y_1045_;
v___y_1024_ = v___y_1046_;
v___y_1025_ = v___y_1047_;
v___y_1026_ = v___y_1049_;
v___y_1027_ = v___y_1050_;
v___y_1028_ = v___y_1051_;
v___y_1029_ = v___y_1053_;
v___y_1030_ = v___y_1055_;
v___y_1031_ = v___y_1054_;
v_post_1032_ = v_a_1079_;
v___y_1033_ = v___y_1057_;
v___y_1034_ = v_a_1080_;
goto v___jp_1014_;
}
else
{
lean_object* v_a_1081_; lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1089_; 
lean_dec(v_pre_1056_);
lean_dec(v___y_1055_);
lean_dec(v___y_1053_);
lean_dec(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1041_);
v_a_1081_ = lean_ctor_get(v___x_1078_, 0);
v_a_1082_ = lean_ctor_get(v___x_1078_, 1);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1084_ = v___x_1078_;
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_inc(v_a_1081_);
lean_dec(v___x_1078_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1081_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
else
{
lean_object* v_ref_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_ref_1090_ = lean_ctor_get(v___y_1057_, 5);
v___x_1091_ = l_Lean_SourceInfo_fromRef(v_ref_1090_, v___x_1059_);
v___x_1092_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__40));
v___x_1093_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41));
lean_inc(v___x_1091_);
v___x_1094_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1091_);
lean_ctor_set(v___x_1094_, 1, v___x_1092_);
v___x_1095_ = l_Lean_Syntax_node2(v___x_1091_, v___x_1093_, v___x_1094_, v___x_1075_);
v___y_962_ = v___y_1038_;
v___y_963_ = v_pre_1056_;
v___y_964_ = v___y_1039_;
v___y_965_ = v___y_1040_;
v___y_966_ = v___y_1041_;
v___y_967_ = v___y_1042_;
v___y_968_ = v___y_1043_;
v___y_969_ = v___y_1044_;
v___y_970_ = v___y_1045_;
v___y_971_ = v___y_1046_;
v___y_972_ = v___y_1047_;
v___y_973_ = v___y_1049_;
v___y_974_ = v___y_1050_;
v___y_975_ = v___y_1051_;
v___y_976_ = v___y_1053_;
v___y_977_ = v___y_1055_;
v___y_978_ = v___y_1054_;
v_post_979_ = v___x_1095_;
v___y_980_ = v___y_1057_;
v_ref_981_ = v_ref_1090_;
v___y_982_ = v___y_1058_;
goto v___jp_961_;
}
}
}
else
{
lean_object* v_ref_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
lean_dec(v___y_1048_);
v_ref_1096_ = lean_ctor_get(v___y_1057_, 5);
v___x_1097_ = l_Lean_SourceInfo_fromRef(v_ref_1096_, v___y_1052_);
v___x_1098_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__40));
v___x_1099_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41));
lean_inc_n(v___x_1097_, 9);
v___x_1100_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1097_);
lean_ctor_set(v___x_1100_, 1, v___x_1098_);
v___x_1101_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3));
v___x_1102_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__2));
v___x_1103_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__65));
v___x_1104_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__66));
v___x_1105_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1097_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
v___x_1106_ = l_Lean_Syntax_node1(v___x_1097_, v___x_1103_, v___x_1105_);
v___x_1107_ = l_Lean_Syntax_node1(v___x_1097_, v___x_1102_, v___x_1106_);
v___x_1108_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_expandDefContract___closed__53, &l_Lean_Elab_Tactic_Do_expandDefContract___closed__53_once, _init_l_Lean_Elab_Tactic_Do_expandDefContract___closed__53);
v___x_1109_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1097_);
lean_ctor_set(v___x_1109_, 1, v___x_1102_);
lean_ctor_set(v___x_1109_, 2, v___x_1108_);
v___x_1110_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__67));
v___x_1111_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1097_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__69));
v___x_1113_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__70));
v___x_1114_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1097_);
lean_ctor_set(v___x_1114_, 1, v___x_1113_);
v___x_1115_ = l_Lean_Syntax_node1(v___x_1097_, v___x_1112_, v___x_1114_);
v___x_1116_ = l_Lean_Syntax_node4(v___x_1097_, v___x_1101_, v___x_1107_, v___x_1109_, v___x_1111_, v___x_1115_);
v___x_1117_ = l_Lean_Syntax_node2(v___x_1097_, v___x_1099_, v___x_1100_, v___x_1116_);
v___y_962_ = v___y_1038_;
v___y_963_ = v_pre_1056_;
v___y_964_ = v___y_1039_;
v___y_965_ = v___y_1040_;
v___y_966_ = v___y_1041_;
v___y_967_ = v___y_1042_;
v___y_968_ = v___y_1043_;
v___y_969_ = v___y_1044_;
v___y_970_ = v___y_1045_;
v___y_971_ = v___y_1046_;
v___y_972_ = v___y_1047_;
v___y_973_ = v___y_1049_;
v___y_974_ = v___y_1050_;
v___y_975_ = v___y_1051_;
v___y_976_ = v___y_1053_;
v___y_977_ = v___y_1055_;
v___y_978_ = v___y_1054_;
v_post_979_ = v___x_1117_;
v___y_980_ = v___y_1057_;
v_ref_981_ = v_ref_1096_;
v___y_982_ = v___y_1058_;
goto v___jp_961_;
}
}
v___jp_1118_:
{
uint8_t v___x_1140_; 
v___x_1140_ = l_Lean_Syntax_isNone(v___y_1120_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1141_; lean_object* v___x_1142_; uint8_t v___x_1143_; 
v___x_1141_ = l_Lean_Syntax_getArg(v___y_1120_, v___y_1121_);
lean_dec(v___y_1120_);
v___x_1142_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__72));
lean_inc(v___x_1141_);
v___x_1143_ = l_Lean_Syntax_isOfKind(v___x_1141_, v___x_1142_);
if (v___x_1143_ == 0)
{
lean_object* v___x_1144_; 
lean_dec(v___x_1141_);
v___x_1144_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1123_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v_a_1146_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
v_a_1146_ = lean_ctor_get(v___x_1144_, 1);
lean_inc(v_a_1146_);
lean_dec_ref_known(v___x_1144_, 2);
v___y_1038_ = v___y_1119_;
v___y_1039_ = v___y_1121_;
v___y_1040_ = v___y_1122_;
v___y_1041_ = v___y_1124_;
v___y_1042_ = v___y_1125_;
v___y_1043_ = v___y_1139_;
v___y_1044_ = v___y_1126_;
v___y_1045_ = v___y_1127_;
v___y_1046_ = v___y_1128_;
v___y_1047_ = v___y_1129_;
v___y_1048_ = v___y_1130_;
v___y_1049_ = v___y_1131_;
v___y_1050_ = v___y_1132_;
v___y_1051_ = v___y_1133_;
v___y_1052_ = v___y_1135_;
v___y_1053_ = v___y_1134_;
v___y_1054_ = v___y_1137_;
v___y_1055_ = v___y_1136_;
v_pre_1056_ = v_a_1145_;
v___y_1057_ = v___y_1138_;
v___y_1058_ = v_a_1146_;
goto v___jp_1037_;
}
else
{
lean_object* v_a_1147_; lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1136_);
lean_dec(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec(v___y_1130_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
lean_dec(v___y_1124_);
v_a_1147_ = lean_ctor_get(v___x_1144_, 0);
v_a_1148_ = lean_ctor_get(v___x_1144_, 1);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1150_ = v___x_1144_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_inc(v_a_1147_);
lean_dec(v___x_1144_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_a_1147_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v_a_1148_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
else
{
lean_object* v___x_1156_; lean_object* v___x_1157_; uint8_t v___x_1158_; 
v___x_1156_ = l_Lean_Syntax_getArg(v___x_1141_, v___x_1036_);
lean_dec(v___x_1141_);
v___x_1157_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3));
lean_inc(v___x_1156_);
v___x_1158_ = l_Lean_Syntax_isOfKind(v___x_1156_, v___x_1157_);
if (v___x_1158_ == 0)
{
v___y_1038_ = v___y_1119_;
v___y_1039_ = v___y_1121_;
v___y_1040_ = v___y_1122_;
v___y_1041_ = v___y_1124_;
v___y_1042_ = v___y_1125_;
v___y_1043_ = v___y_1139_;
v___y_1044_ = v___y_1126_;
v___y_1045_ = v___y_1127_;
v___y_1046_ = v___y_1128_;
v___y_1047_ = v___y_1129_;
v___y_1048_ = v___y_1130_;
v___y_1049_ = v___y_1131_;
v___y_1050_ = v___y_1132_;
v___y_1051_ = v___y_1133_;
v___y_1052_ = v___y_1135_;
v___y_1053_ = v___y_1134_;
v___y_1054_ = v___y_1137_;
v___y_1055_ = v___y_1136_;
v_pre_1056_ = v___x_1156_;
v___y_1057_ = v___y_1138_;
v___y_1058_ = v___y_1123_;
goto v___jp_1037_;
}
else
{
lean_object* v_ref_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v_ref_1159_ = lean_ctor_get(v___y_1138_, 5);
v___x_1160_ = l_Lean_SourceInfo_fromRef(v_ref_1159_, v___x_1140_);
v___x_1161_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__40));
v___x_1162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41));
lean_inc(v___x_1160_);
v___x_1163_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1160_);
lean_ctor_set(v___x_1163_, 1, v___x_1161_);
v___x_1164_ = l_Lean_Syntax_node2(v___x_1160_, v___x_1162_, v___x_1163_, v___x_1156_);
v___y_1038_ = v___y_1119_;
v___y_1039_ = v___y_1121_;
v___y_1040_ = v___y_1122_;
v___y_1041_ = v___y_1124_;
v___y_1042_ = v___y_1125_;
v___y_1043_ = v___y_1139_;
v___y_1044_ = v___y_1126_;
v___y_1045_ = v___y_1127_;
v___y_1046_ = v___y_1128_;
v___y_1047_ = v___y_1129_;
v___y_1048_ = v___y_1130_;
v___y_1049_ = v___y_1131_;
v___y_1050_ = v___y_1132_;
v___y_1051_ = v___y_1133_;
v___y_1052_ = v___y_1135_;
v___y_1053_ = v___y_1134_;
v___y_1054_ = v___y_1137_;
v___y_1055_ = v___y_1136_;
v_pre_1056_ = v___x_1164_;
v___y_1057_ = v___y_1138_;
v___y_1058_ = v___y_1123_;
goto v___jp_1037_;
}
}
}
else
{
lean_object* v_ref_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
lean_dec(v___y_1120_);
v_ref_1165_ = lean_ctor_get(v___y_1138_, 5);
v___x_1166_ = l_Lean_SourceInfo_fromRef(v_ref_1165_, v___y_1135_);
v___x_1167_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__69));
v___x_1168_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__70));
lean_inc(v___x_1166_);
v___x_1169_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1166_);
lean_ctor_set(v___x_1169_, 1, v___x_1168_);
v___x_1170_ = l_Lean_Syntax_node1(v___x_1166_, v___x_1167_, v___x_1169_);
v___y_1038_ = v___y_1119_;
v___y_1039_ = v___y_1121_;
v___y_1040_ = v___y_1122_;
v___y_1041_ = v___y_1124_;
v___y_1042_ = v___y_1125_;
v___y_1043_ = v___y_1139_;
v___y_1044_ = v___y_1126_;
v___y_1045_ = v___y_1127_;
v___y_1046_ = v___y_1128_;
v___y_1047_ = v___y_1129_;
v___y_1048_ = v___y_1130_;
v___y_1049_ = v___y_1131_;
v___y_1050_ = v___y_1132_;
v___y_1051_ = v___y_1133_;
v___y_1052_ = v___y_1135_;
v___y_1053_ = v___y_1134_;
v___y_1054_ = v___y_1137_;
v___y_1055_ = v___y_1136_;
v_pre_1056_ = v___x_1170_;
v___y_1057_ = v___y_1138_;
v___y_1058_ = v___y_1123_;
goto v___jp_1037_;
}
}
v___jp_1171_:
{
lean_object* v___x_1192_; size_t v_sz_1193_; size_t v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; uint8_t v___x_1198_; 
lean_inc_ref(v___y_1181_);
v___x_1192_ = l_Array_append___redArg(v___y_1181_, v___y_1191_);
lean_dec_ref(v___y_1191_);
v_sz_1193_ = lean_array_size(v___x_1192_);
v___x_1194_ = ((size_t)0ULL);
v___x_1195_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__0(v_sz_1193_, v___x_1194_, v___x_1192_);
v___x_1196_ = lean_mk_empty_array_with_capacity(v___y_1174_);
v___x_1197_ = lean_array_get_size(v___y_1181_);
v___x_1198_ = lean_nat_dec_lt(v___y_1174_, v___x_1197_);
if (v___x_1198_ == 0)
{
lean_dec_ref(v___y_1181_);
v___y_1119_ = v___y_1172_;
v___y_1120_ = v___y_1173_;
v___y_1121_ = v___y_1174_;
v___y_1122_ = v___y_1175_;
v___y_1123_ = v___y_1176_;
v___y_1124_ = v___y_1177_;
v___y_1125_ = v___y_1178_;
v___y_1126_ = v___x_1194_;
v___y_1127_ = v___x_1195_;
v___y_1128_ = v___y_1179_;
v___y_1129_ = v___y_1180_;
v___y_1130_ = v___y_1182_;
v___y_1131_ = v___y_1183_;
v___y_1132_ = v___y_1184_;
v___y_1133_ = v___y_1185_;
v___y_1134_ = v___y_1187_;
v___y_1135_ = v___y_1186_;
v___y_1136_ = v___y_1189_;
v___y_1137_ = v___y_1188_;
v___y_1138_ = v___y_1190_;
v___y_1139_ = v___x_1196_;
goto v___jp_1118_;
}
else
{
size_t v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = lean_usize_of_nat(v___x_1197_);
v___x_1200_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__3(v___y_1181_, v___x_1194_, v___x_1199_, v___x_1196_);
lean_dec_ref(v___y_1181_);
v___y_1119_ = v___y_1172_;
v___y_1120_ = v___y_1173_;
v___y_1121_ = v___y_1174_;
v___y_1122_ = v___y_1175_;
v___y_1123_ = v___y_1176_;
v___y_1124_ = v___y_1177_;
v___y_1125_ = v___y_1178_;
v___y_1126_ = v___x_1194_;
v___y_1127_ = v___x_1195_;
v___y_1128_ = v___y_1179_;
v___y_1129_ = v___y_1180_;
v___y_1130_ = v___y_1182_;
v___y_1131_ = v___y_1183_;
v___y_1132_ = v___y_1184_;
v___y_1133_ = v___y_1185_;
v___y_1134_ = v___y_1187_;
v___y_1135_ = v___y_1186_;
v___y_1136_ = v___y_1189_;
v___y_1137_ = v___y_1188_;
v___y_1138_ = v___y_1190_;
v___y_1139_ = v___x_1200_;
goto v___jp_1118_;
}
}
v___jp_1202_:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; uint8_t v___x_1228_; 
v___x_1217_ = l_Lean_Syntax_getArg(v_decl_1201_, v___y_1203_);
v___x_1218_ = l_Lean_Syntax_getArg(v_decl_1201_, v___x_1036_);
lean_dec(v_decl_1201_);
v___x_1219_ = l_Lean_Syntax_getArg(v___x_1218_, v___y_1208_);
lean_dec(v___x_1218_);
v___x_1220_ = l_Lean_TSyntax_getId(v___x_1219_);
v___x_1221_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___closed__0));
v___x_1222_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection_spec__0___closed__1));
lean_inc(v___x_1220_);
v___x_1223_ = l_Lean_Name_append(v___x_1220_, v___x_1222_);
v___x_1224_ = 0;
v___x_1225_ = l_Lean_mkIdentFrom(v___x_1219_, v___x_1223_, v___x_1224_);
v___x_1226_ = l_Lean_Syntax_getArg(v___x_1217_, v___y_1208_);
lean_dec(v___x_1217_);
v___x_1227_ = l_Lean_Syntax_getArgs(v___x_1226_);
lean_dec(v___x_1226_);
v___x_1228_ = l_Lean_Syntax_isNone(v___y_1213_);
if (v___x_1228_ == 0)
{
lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1229_ = l_Lean_Syntax_getArg(v___y_1213_, v___y_1208_);
lean_dec(v___y_1213_);
v___x_1230_ = l_Lean_Syntax_getArg(v___x_1229_, v___x_1036_);
lean_dec(v___x_1229_);
v___x_1231_ = l_Lean_Syntax_getArgs(v___x_1230_);
lean_dec(v___x_1230_);
v___y_1172_ = v___y_1203_;
v___y_1173_ = v___y_1206_;
v___y_1174_ = v___y_1208_;
v___y_1175_ = v___y_1211_;
v___y_1176_ = v___y_1216_;
v___y_1177_ = v___x_1220_;
v___y_1178_ = v___x_1221_;
v___y_1179_ = v___y_1205_;
v___y_1180_ = v___y_1204_;
v___y_1181_ = v___x_1227_;
v___y_1182_ = v___y_1207_;
v___y_1183_ = v___y_1209_;
v___y_1184_ = v___x_1219_;
v___y_1185_ = v___y_1210_;
v___y_1186_ = v___x_1224_;
v___y_1187_ = v___y_1212_;
v___y_1188_ = v___y_1214_;
v___y_1189_ = v___x_1225_;
v___y_1190_ = v___y_1215_;
v___y_1191_ = v___x_1231_;
goto v___jp_1171_;
}
else
{
lean_object* v___x_1232_; 
lean_dec(v___y_1213_);
v___x_1232_ = lean_mk_empty_array_with_capacity(v___y_1208_);
v___y_1172_ = v___y_1203_;
v___y_1173_ = v___y_1206_;
v___y_1174_ = v___y_1208_;
v___y_1175_ = v___y_1211_;
v___y_1176_ = v___y_1216_;
v___y_1177_ = v___x_1220_;
v___y_1178_ = v___x_1221_;
v___y_1179_ = v___y_1205_;
v___y_1180_ = v___y_1204_;
v___y_1181_ = v___x_1227_;
v___y_1182_ = v___y_1207_;
v___y_1183_ = v___y_1209_;
v___y_1184_ = v___x_1219_;
v___y_1185_ = v___y_1210_;
v___y_1186_ = v___x_1224_;
v___y_1187_ = v___y_1212_;
v___y_1188_ = v___y_1214_;
v___y_1189_ = v___x_1225_;
v___y_1190_ = v___y_1215_;
v___y_1191_ = v___x_1232_;
goto v___jp_1171_;
}
}
v___jp_1233_:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1249_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__73));
v___x_1250_ = l_Lean_Macro_throwErrorAt___redArg(v___y_1248_, v___x_1249_, v___y_1247_, v___y_1238_);
lean_dec(v___y_1248_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 1);
lean_inc(v_a_1251_);
lean_dec_ref_known(v___x_1250_, 2);
v___y_1203_ = v___y_1234_;
v___y_1204_ = v___y_1240_;
v___y_1205_ = v___y_1241_;
v___y_1206_ = v___y_1235_;
v___y_1207_ = v___y_1242_;
v___y_1208_ = v___y_1236_;
v___y_1209_ = v___y_1243_;
v___y_1210_ = v___y_1244_;
v___y_1211_ = v___y_1237_;
v___y_1212_ = v___y_1245_;
v___y_1213_ = v___y_1239_;
v___y_1214_ = v___y_1246_;
v___y_1215_ = v___y_1247_;
v___y_1216_ = v_a_1251_;
goto v___jp_1202_;
}
else
{
lean_object* v_a_1252_; lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
lean_dec(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec(v___y_1239_);
lean_dec(v___y_1235_);
lean_dec(v_decl_1201_);
v_a_1252_ = lean_ctor_get(v___x_1250_, 0);
v_a_1253_ = lean_ctor_get(v___x_1250_, 1);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1250_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_inc(v_a_1252_);
lean_dec(v___x_1250_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1252_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
v___jp_1261_:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1272_ = lean_unsigned_to_nat(4u);
v___x_1273_ = l_Lean_Syntax_getArg(v___y_1267_, v___x_1272_);
v___x_1274_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection(v___x_1273_, v___y_1270_, v___y_1271_);
if (lean_obj_tag(v___x_1274_) == 0)
{
lean_object* v_a_1275_; lean_object* v_a_1276_; lean_object* v_fst_1277_; lean_object* v_snd_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v_a_1275_ = lean_ctor_get(v___x_1274_, 0);
lean_inc(v_a_1275_);
v_a_1276_ = lean_ctor_get(v___x_1274_, 1);
lean_inc(v_a_1276_);
lean_dec_ref_known(v___x_1274_, 2);
v_fst_1277_ = lean_ctor_get(v_a_1275_, 0);
lean_inc(v_fst_1277_);
v_snd_1278_ = lean_ctor_get(v_a_1275_, 1);
lean_inc(v_snd_1278_);
lean_dec(v_a_1275_);
v___x_1279_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__4));
v___x_1280_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__5));
v___x_1281_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__75));
v___x_1282_ = l_Lean_Macro_hasDecl(v___x_1281_, v___y_1270_, v_a_1276_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v_a_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; uint8_t v___x_1287_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_a_1283_);
v_a_1284_ = lean_ctor_get(v___x_1282_, 1);
lean_inc(v_a_1284_);
lean_dec_ref_known(v___x_1282_, 2);
lean_inc(v_decl_1201_);
v___x_1285_ = l_Lean_Syntax_setArg(v_decl_1201_, v___y_1269_, v_snd_1278_);
v___x_1286_ = l_Lean_Syntax_setArg(v_stx_622_, v___x_1036_, v___x_1285_);
v___x_1287_ = lean_unbox(v_a_1283_);
lean_dec(v_a_1283_);
if (v___x_1287_ == 0)
{
uint8_t v___x_1288_; 
v___x_1288_ = l_Lean_Syntax_isNone(v___y_1268_);
if (v___x_1288_ == 0)
{
lean_inc(v___y_1268_);
v___y_1234_ = v___y_1262_;
v___y_1235_ = v___y_1263_;
v___y_1236_ = v___y_1264_;
v___y_1237_ = v___x_1279_;
v___y_1238_ = v_a_1284_;
v___y_1239_ = v___y_1268_;
v___y_1240_ = v___x_1280_;
v___y_1241_ = v___x_1286_;
v___y_1242_ = v___y_1265_;
v___y_1243_ = v___y_1266_;
v___y_1244_ = v___y_1267_;
v___y_1245_ = v_fst_1277_;
v___y_1246_ = v___y_1269_;
v___y_1247_ = v___y_1270_;
v___y_1248_ = v___y_1268_;
goto v___jp_1233_;
}
else
{
uint8_t v___x_1289_; 
v___x_1289_ = l_Lean_Syntax_isNone(v___y_1263_);
if (v___x_1289_ == 0)
{
lean_inc(v___y_1263_);
v___y_1234_ = v___y_1262_;
v___y_1235_ = v___y_1263_;
v___y_1236_ = v___y_1264_;
v___y_1237_ = v___x_1279_;
v___y_1238_ = v_a_1284_;
v___y_1239_ = v___y_1268_;
v___y_1240_ = v___x_1280_;
v___y_1241_ = v___x_1286_;
v___y_1242_ = v___y_1265_;
v___y_1243_ = v___y_1266_;
v___y_1244_ = v___y_1267_;
v___y_1245_ = v_fst_1277_;
v___y_1246_ = v___y_1269_;
v___y_1247_ = v___y_1270_;
v___y_1248_ = v___y_1263_;
goto v___jp_1233_;
}
else
{
uint8_t v___x_1290_; 
v___x_1290_ = l_Lean_Syntax_isNone(v___y_1265_);
if (v___x_1290_ == 0)
{
lean_inc(v___y_1265_);
v___y_1234_ = v___y_1262_;
v___y_1235_ = v___y_1263_;
v___y_1236_ = v___y_1264_;
v___y_1237_ = v___x_1279_;
v___y_1238_ = v_a_1284_;
v___y_1239_ = v___y_1268_;
v___y_1240_ = v___x_1280_;
v___y_1241_ = v___x_1286_;
v___y_1242_ = v___y_1265_;
v___y_1243_ = v___y_1266_;
v___y_1244_ = v___y_1267_;
v___y_1245_ = v_fst_1277_;
v___y_1246_ = v___y_1269_;
v___y_1247_ = v___y_1270_;
v___y_1248_ = v___y_1265_;
goto v___jp_1233_;
}
else
{
lean_inc(v___y_1266_);
v___y_1234_ = v___y_1262_;
v___y_1235_ = v___y_1263_;
v___y_1236_ = v___y_1264_;
v___y_1237_ = v___x_1279_;
v___y_1238_ = v_a_1284_;
v___y_1239_ = v___y_1268_;
v___y_1240_ = v___x_1280_;
v___y_1241_ = v___x_1286_;
v___y_1242_ = v___y_1265_;
v___y_1243_ = v___y_1266_;
v___y_1244_ = v___y_1267_;
v___y_1245_ = v_fst_1277_;
v___y_1246_ = v___y_1269_;
v___y_1247_ = v___y_1270_;
v___y_1248_ = v___y_1266_;
goto v___jp_1233_;
}
}
}
}
else
{
v___y_1203_ = v___y_1262_;
v___y_1204_ = v___x_1280_;
v___y_1205_ = v___x_1286_;
v___y_1206_ = v___y_1263_;
v___y_1207_ = v___y_1265_;
v___y_1208_ = v___y_1264_;
v___y_1209_ = v___y_1266_;
v___y_1210_ = v___y_1267_;
v___y_1211_ = v___x_1279_;
v___y_1212_ = v_fst_1277_;
v___y_1213_ = v___y_1268_;
v___y_1214_ = v___y_1269_;
v___y_1215_ = v___y_1270_;
v___y_1216_ = v_a_1284_;
goto v___jp_1202_;
}
}
else
{
lean_object* v_a_1291_; lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1299_; 
lean_dec(v_snd_1278_);
lean_dec(v_fst_1277_);
lean_dec(v___y_1268_);
lean_dec(v___y_1267_);
lean_dec(v___y_1266_);
lean_dec(v___y_1265_);
lean_dec(v___y_1263_);
lean_dec(v_decl_1201_);
lean_dec(v_stx_622_);
v_a_1291_ = lean_ctor_get(v___x_1282_, 0);
v_a_1292_ = lean_ctor_get(v___x_1282_, 1);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1294_ = v___x_1282_;
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_inc(v_a_1291_);
lean_dec(v___x_1282_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v_a_1291_);
lean_ctor_set(v_reuseFailAlloc_1298_, 1, v_a_1292_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
else
{
lean_object* v_a_1300_; lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_dec(v___y_1268_);
lean_dec(v___y_1267_);
lean_dec(v___y_1266_);
lean_dec(v___y_1265_);
lean_dec(v___y_1263_);
lean_dec(v_decl_1201_);
lean_dec(v_stx_622_);
v_a_1300_ = lean_ctor_get(v___x_1274_, 0);
v_a_1301_ = lean_ctor_get(v___x_1274_, 1);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1274_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_inc(v_a_1300_);
lean_dec(v___x_1274_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1300_);
lean_ctor_set(v_reuseFailAlloc_1307_, 1, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
v___jp_1309_:
{
lean_object* v___x_1314_; lean_object* v_givenStx_1315_; lean_object* v_requiresStx_1316_; lean_object* v___x_1317_; lean_object* v_ensuresStx_1318_; lean_object* v_throwsStx_1319_; uint8_t v___x_1320_; 
v___x_1314_ = lean_unsigned_to_nat(0u);
v_givenStx_1315_ = l_Lean_Syntax_getArg(v___y_1310_, v___x_1314_);
v_requiresStx_1316_ = l_Lean_Syntax_getArg(v___y_1310_, v___x_1036_);
v___x_1317_ = lean_unsigned_to_nat(2u);
v_ensuresStx_1318_ = l_Lean_Syntax_getArg(v___y_1310_, v___x_1317_);
v_throwsStx_1319_ = l_Lean_Syntax_getArg(v___y_1310_, v___y_1311_);
v___x_1320_ = l_Lean_Syntax_isNone(v_givenStx_1315_);
if (v___x_1320_ == 0)
{
v___y_1262_ = v___x_1317_;
v___y_1263_ = v_requiresStx_1316_;
v___y_1264_ = v___x_1314_;
v___y_1265_ = v_ensuresStx_1318_;
v___y_1266_ = v_throwsStx_1319_;
v___y_1267_ = v___y_1310_;
v___y_1268_ = v_givenStx_1315_;
v___y_1269_ = v___y_1311_;
v___y_1270_ = v___y_1312_;
v___y_1271_ = v___y_1313_;
goto v___jp_1261_;
}
else
{
uint8_t v___x_1321_; 
v___x_1321_ = l_Lean_Syntax_isNone(v_requiresStx_1316_);
if (v___x_1321_ == 0)
{
v___y_1262_ = v___x_1317_;
v___y_1263_ = v_requiresStx_1316_;
v___y_1264_ = v___x_1314_;
v___y_1265_ = v_ensuresStx_1318_;
v___y_1266_ = v_throwsStx_1319_;
v___y_1267_ = v___y_1310_;
v___y_1268_ = v_givenStx_1315_;
v___y_1269_ = v___y_1311_;
v___y_1270_ = v___y_1312_;
v___y_1271_ = v___y_1313_;
goto v___jp_1261_;
}
else
{
uint8_t v___x_1322_; 
v___x_1322_ = l_Lean_Syntax_isNone(v_ensuresStx_1318_);
if (v___x_1322_ == 0)
{
v___y_1262_ = v___x_1317_;
v___y_1263_ = v_requiresStx_1316_;
v___y_1264_ = v___x_1314_;
v___y_1265_ = v_ensuresStx_1318_;
v___y_1266_ = v_throwsStx_1319_;
v___y_1267_ = v___y_1310_;
v___y_1268_ = v_givenStx_1315_;
v___y_1269_ = v___y_1311_;
v___y_1270_ = v___y_1312_;
v___y_1271_ = v___y_1313_;
goto v___jp_1261_;
}
else
{
lean_object* v___x_1323_; uint8_t v___x_1324_; 
v___x_1323_ = l_Lean_Syntax_getNumArgs(v_throwsStx_1319_);
v___x_1324_ = lean_nat_dec_eq(v___x_1323_, v___x_1314_);
lean_dec(v___x_1323_);
if (v___x_1324_ == 0)
{
v___y_1262_ = v___x_1317_;
v___y_1263_ = v_requiresStx_1316_;
v___y_1264_ = v___x_1314_;
v___y_1265_ = v_ensuresStx_1318_;
v___y_1266_ = v_throwsStx_1319_;
v___y_1267_ = v___y_1310_;
v___y_1268_ = v_givenStx_1315_;
v___y_1269_ = v___y_1311_;
v___y_1270_ = v___y_1312_;
v___y_1271_ = v___y_1313_;
goto v___jp_1261_;
}
else
{
lean_object* v___x_1325_; 
v___x_1325_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1313_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 1);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1325_, 2);
v___y_1262_ = v___x_1317_;
v___y_1263_ = v_requiresStx_1316_;
v___y_1264_ = v___x_1314_;
v___y_1265_ = v_ensuresStx_1318_;
v___y_1266_ = v_throwsStx_1319_;
v___y_1267_ = v___y_1310_;
v___y_1268_ = v_givenStx_1315_;
v___y_1269_ = v___y_1311_;
v___y_1270_ = v___y_1312_;
v___y_1271_ = v_a_1326_;
goto v___jp_1261_;
}
else
{
lean_object* v_a_1327_; lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
lean_dec(v_throwsStx_1319_);
lean_dec(v_ensuresStx_1318_);
lean_dec(v_requiresStx_1316_);
lean_dec(v_givenStx_1315_);
lean_dec(v___y_1310_);
lean_dec(v_decl_1201_);
lean_dec(v_stx_622_);
v_a_1327_ = lean_ctor_get(v___x_1325_, 0);
v_a_1328_ = lean_ctor_get(v___x_1325_, 1);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1330_ = v___x_1325_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_inc(v_a_1327_);
lean_dec(v___x_1325_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1327_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v_a_1328_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
}
}
}
}
}
v___jp_1336_:
{
lean_object* v___x_1339_; lean_object* v_val_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v___x_1339_ = lean_unsigned_to_nat(3u);
v_val_1340_ = l_Lean_Syntax_getArg(v_decl_1201_, v___x_1339_);
v___x_1341_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1));
lean_inc(v_val_1340_);
v___x_1342_ = l_Lean_Syntax_isOfKind(v_val_1340_, v___x_1341_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; 
v___x_1343_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1338_);
if (lean_obj_tag(v___x_1343_) == 0)
{
lean_object* v_a_1344_; 
v_a_1344_ = lean_ctor_get(v___x_1343_, 1);
lean_inc(v_a_1344_);
lean_dec_ref_known(v___x_1343_, 2);
v___y_1310_ = v_val_1340_;
v___y_1311_ = v___x_1339_;
v___y_1312_ = v___y_1337_;
v___y_1313_ = v_a_1344_;
goto v___jp_1309_;
}
else
{
lean_object* v_a_1345_; lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1353_; 
lean_dec(v_val_1340_);
lean_dec(v_decl_1201_);
lean_dec(v_stx_622_);
v_a_1345_ = lean_ctor_get(v___x_1343_, 0);
v_a_1346_ = lean_ctor_get(v___x_1343_, 1);
v_isSharedCheck_1353_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1348_ = v___x_1343_;
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_inc(v_a_1345_);
lean_dec(v___x_1343_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1351_; 
if (v_isShared_1349_ == 0)
{
v___x_1351_ = v___x_1348_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_a_1345_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v_a_1346_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
}
else
{
v___y_1310_ = v_val_1340_;
v___y_1311_ = v___x_1339_;
v___y_1312_ = v___y_1337_;
v___y_1313_ = v___y_1338_;
goto v___jp_1309_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_expandDefContract___boxed(lean_object* v_stx_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_){
_start:
{
lean_object* v_res_1370_; 
v_res_1370_ = l_Lean_Elab_Tactic_Do_expandDefContract(v_stx_1367_, v_a_1368_, v_a_1369_);
lean_dec_ref(v_a_1368_);
return v_res_1370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1(){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1384_ = l_Lean_Elab_macroAttribute;
v___x_1385_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__0));
v___x_1386_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2));
v___x_1387_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_expandDefContract___boxed), 3, 0);
v___x_1388_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1384_, v___x_1385_, v___x_1386_, v___x_1387_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___boxed(lean_object* v_a_1389_){
_start:
{
lean_object* v_res_1390_; 
v_res_1390_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1();
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract_docString__3(){
_start:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1393_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1___closed__2));
v___x_1394_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract_docString__3___closed__0));
v___x_1395_ = l_Lean_addBuiltinDocString(v___x_1393_, v___x_1394_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract_docString__3___boxed(lean_object* v_a_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract_docString__3();
return v_res_1397_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1398_; 
v___x_1398_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1398_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0);
v___x_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg(){
_start:
{
lean_object* v___x_1402_; 
v___x_1402_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__1);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___boxed(lean_object* v___dummy_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg();
return v_res_1404_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1405_; 
v___x_1405_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg();
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0(lean_object* v_00_u03b2_1406_){
_start:
{
lean_object* v___x_1407_; 
v___x_1407_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___closed__0);
return v___x_1407_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1408_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0);
v___x_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1408_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg(){
_start:
{
lean_object* v___x_1411_; 
v___x_1411_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg___closed__0);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg___boxed(lean_object* v___dummy_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg();
return v_res_1413_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1414_; 
v___x_1414_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___redArg();
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1(lean_object* v_00_u03b2_1415_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___closed__0);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2___redArg(lean_object* v_as_1417_, size_t v_sz_1418_, size_t v_i_1419_, lean_object* v_b_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_){
_start:
{
uint8_t v___x_1426_; 
v___x_1426_ = lean_usize_dec_lt(v_i_1419_, v_sz_1418_);
if (v___x_1426_ == 0)
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1427_, 0, v_b_1420_);
return v___x_1427_;
}
else
{
lean_object* v_a_1428_; uint8_t v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v_a_1428_ = lean_array_uget_borrowed(v_as_1417_, v_i_1419_);
v___x_1429_ = 0;
v___x_1430_ = lean_unsigned_to_nat(1000u);
lean_inc(v_a_1428_);
v___x_1431_ = l_Lean_Meta_SimpTheorems_addConst(v_b_1420_, v_a_1428_, v___x_1426_, v___x_1429_, v___x_1430_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v_a_1432_; size_t v___x_1433_; size_t v___x_1434_; 
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_a_1432_);
lean_dec_ref_known(v___x_1431_, 1);
v___x_1433_ = ((size_t)1ULL);
v___x_1434_ = lean_usize_add(v_i_1419_, v___x_1433_);
v_i_1419_ = v___x_1434_;
v_b_1420_ = v_a_1432_;
goto _start;
}
else
{
return v___x_1431_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2___redArg___boxed(lean_object* v_as_1436_, lean_object* v_sz_1437_, lean_object* v_i_1438_, lean_object* v_b_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
size_t v_sz_boxed_1445_; size_t v_i_boxed_1446_; lean_object* v_res_1447_; 
v_sz_boxed_1445_ = lean_unbox_usize(v_sz_1437_);
lean_dec(v_sz_1437_);
v_i_boxed_1446_ = lean_unbox_usize(v_i_1438_);
lean_dec(v_i_1438_);
v_res_1447_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2___redArg(v_as_1436_, v_sz_boxed_1445_, v_i_boxed_1446_, v_b_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec_ref(v_as_1436_);
return v_res_1447_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__0(void){
_start:
{
lean_object* v___x_1448_; 
v___x_1448_ = l_Lean_Meta_DiscrTree_empty___redArg();
return v___x_1448_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1(void){
_start:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1449_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0);
v___x_1450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1449_);
return v___x_1450_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__2(void){
_start:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v_thms_1455_; 
v___x_1451_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1, &l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1);
v___x_1452_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__1___closed__0);
v___x_1453_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___closed__0);
v___x_1454_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__0, &l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__0);
v_thms_1455_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_thms_1455_, 0, v___x_1454_);
lean_ctor_set(v_thms_1455_, 1, v___x_1454_);
lean_ctor_set(v_thms_1455_, 2, v___x_1453_);
lean_ctor_set(v_thms_1455_, 3, v___x_1452_);
lean_ctor_set(v_thms_1455_, 4, v___x_1453_);
lean_ctor_set(v_thms_1455_, 5, v___x_1451_);
return v_thms_1455_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__5(void){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = lean_unsigned_to_nat(0u);
v___x_1466_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1, &l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1);
v___x_1467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1466_);
lean_ctor_set(v___x_1467_, 1, v___x_1465_);
return v___x_1467_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__6(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1468_ = lean_unsigned_to_nat(32u);
v___x_1469_ = lean_mk_empty_array_with_capacity(v___x_1468_);
v___x_1470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1470_, 0, v___x_1469_);
return v___x_1470_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__7(void){
_start:
{
size_t v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1471_ = ((size_t)5ULL);
v___x_1472_ = lean_unsigned_to_nat(0u);
v___x_1473_ = lean_unsigned_to_nat(32u);
v___x_1474_ = lean_mk_empty_array_with_capacity(v___x_1473_);
v___x_1475_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__6, &l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__6);
v___x_1476_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1476_, 0, v___x_1475_);
lean_ctor_set(v___x_1476_, 1, v___x_1474_);
lean_ctor_set(v___x_1476_, 2, v___x_1472_);
lean_ctor_set(v___x_1476_, 3, v___x_1472_);
lean_ctor_set_usize(v___x_1476_, 4, v___x_1471_);
return v___x_1476_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__8(void){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1477_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__7, &l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__7_once, _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__7);
v___x_1478_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1, &l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__1);
v___x_1479_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1478_);
lean_ctor_set(v___x_1479_, 1, v___x_1478_);
lean_ctor_set(v___x_1479_, 2, v___x_1478_);
lean_ctor_set(v___x_1479_, 3, v___x_1477_);
return v___x_1479_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__9(void){
_start:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1480_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__8, &l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__8_once, _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__8);
v___x_1481_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__5, &l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__5_once, _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__5);
v___x_1482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1481_);
lean_ctor_set(v___x_1482_, 1, v___x_1480_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith(lean_object* v_names_1483_, lean_object* v_e_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_){
_start:
{
lean_object* v_thms_1492_; size_t v_sz_1493_; size_t v___x_1494_; lean_object* v___x_1495_; 
v_thms_1492_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__2, &l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__2);
v_sz_1493_ = lean_array_size(v_names_1483_);
v___x_1494_ = ((size_t)0ULL);
v___x_1495_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2___redArg(v_names_1483_, v_sz_1493_, v___x_1494_, v_thms_1492_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1497_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1496_);
lean_dec_ref_known(v___x_1495_, 1);
v___x_1497_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_1490_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1498_);
lean_dec_ref_known(v___x_1497_, 1);
v___x_1499_ = lean_box(0);
v___x_1500_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__3));
v___x_1501_ = lean_unsigned_to_nat(1u);
v___x_1502_ = lean_mk_empty_array_with_capacity(v___x_1501_);
v___x_1503_ = lean_array_push(v___x_1502_, v_a_1496_);
v___x_1504_ = l_Lean_Options_empty;
v___x_1505_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1500_, v___x_1503_, v_a_1498_, v___x_1504_, v_a_1487_, v_a_1489_, v_a_1490_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
lean_dec_ref_known(v___x_1505_, 1);
v___x_1507_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__4));
v___x_1508_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__9, &l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__9_once, _init_l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___closed__9);
v___x_1509_ = l_Lean_Meta_simp(v_e_1484_, v_a_1506_, v___x_1507_, v___x_1499_, v___x_1508_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1519_; 
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1512_ = v___x_1509_;
v_isShared_1513_ = v_isSharedCheck_1519_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v___x_1509_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1519_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v_fst_1514_; lean_object* v_expr_1515_; lean_object* v___x_1517_; 
v_fst_1514_ = lean_ctor_get(v_a_1510_, 0);
lean_inc(v_fst_1514_);
lean_dec(v_a_1510_);
v_expr_1515_ = lean_ctor_get(v_fst_1514_, 0);
lean_inc_ref(v_expr_1515_);
lean_dec(v_fst_1514_);
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 0, v_expr_1515_);
v___x_1517_ = v___x_1512_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_expr_1515_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
v_a_1520_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1509_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1509_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1535_; 
lean_dec_ref(v_e_1484_);
v_a_1528_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1530_ = v___x_1505_;
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1505_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1531_ == 0)
{
v___x_1533_ = v___x_1530_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_a_1528_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
else
{
lean_object* v_a_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1543_; 
lean_dec(v_a_1496_);
lean_dec_ref(v_e_1484_);
v_a_1536_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1543_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1538_ = v___x_1497_;
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_a_1536_);
lean_dec(v___x_1497_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1541_; 
if (v_isShared_1539_ == 0)
{
v___x_1541_ = v___x_1538_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_a_1536_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
else
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1551_; 
lean_dec_ref(v_e_1484_);
v_a_1544_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1546_ = v___x_1495_;
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1495_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1544_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith___boxed(lean_object* v_names_1552_, lean_object* v_e_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith(v_names_1552_, v_e_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
lean_dec(v_a_1559_);
lean_dec_ref(v_a_1558_);
lean_dec(v_a_1557_);
lean_dec_ref(v_a_1556_);
lean_dec(v_a_1555_);
lean_dec_ref(v_a_1554_);
lean_dec_ref(v_names_1552_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2(lean_object* v_as_1562_, size_t v_sz_1563_, size_t v_i_1564_, lean_object* v_b_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_){
_start:
{
lean_object* v___x_1573_; 
v___x_1573_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2___redArg(v_as_1562_, v_sz_1563_, v_i_1564_, v_b_1565_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2___boxed(lean_object* v_as_1574_, lean_object* v_sz_1575_, lean_object* v_i_1576_, lean_object* v_b_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
size_t v_sz_boxed_1585_; size_t v_i_boxed_1586_; lean_object* v_res_1587_; 
v_sz_boxed_1585_ = lean_unbox_usize(v_sz_1575_);
lean_dec(v_sz_1575_);
v_i_boxed_1586_ = lean_unbox_usize(v_i_1576_);
lean_dec(v_i_1576_);
v_res_1587_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__2(v_as_1574_, v_sz_boxed_1585_, v_i_boxed_1586_, v_b_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_);
lean_dec(v___y_1583_);
lean_dec_ref(v___y_1582_);
lean_dec(v___y_1581_);
lean_dec_ref(v___y_1580_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec_ref(v_as_1574_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0___redArg(lean_object* v_e_1588_, lean_object* v___y_1589_){
_start:
{
uint8_t v___x_1591_; 
v___x_1591_ = l_Lean_Expr_hasMVar(v_e_1588_);
if (v___x_1591_ == 0)
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1592_, 0, v_e_1588_);
return v___x_1592_;
}
else
{
lean_object* v___x_1593_; lean_object* v_mctx_1594_; lean_object* v___x_1595_; lean_object* v_fst_1596_; lean_object* v_snd_1597_; lean_object* v___x_1598_; lean_object* v_cache_1599_; lean_object* v_zetaDeltaFVarIds_1600_; lean_object* v_postponed_1601_; lean_object* v_diag_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1611_; 
v___x_1593_ = lean_st_ref_get(v___y_1589_);
v_mctx_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc_ref(v_mctx_1594_);
lean_dec(v___x_1593_);
v___x_1595_ = l_Lean_instantiateMVarsCore(v_mctx_1594_, v_e_1588_);
v_fst_1596_ = lean_ctor_get(v___x_1595_, 0);
lean_inc(v_fst_1596_);
v_snd_1597_ = lean_ctor_get(v___x_1595_, 1);
lean_inc(v_snd_1597_);
lean_dec_ref(v___x_1595_);
v___x_1598_ = lean_st_ref_take(v___y_1589_);
v_cache_1599_ = lean_ctor_get(v___x_1598_, 1);
v_zetaDeltaFVarIds_1600_ = lean_ctor_get(v___x_1598_, 2);
v_postponed_1601_ = lean_ctor_get(v___x_1598_, 3);
v_diag_1602_ = lean_ctor_get(v___x_1598_, 4);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1611_ == 0)
{
lean_object* v_unused_1612_; 
v_unused_1612_ = lean_ctor_get(v___x_1598_, 0);
lean_dec(v_unused_1612_);
v___x_1604_ = v___x_1598_;
v_isShared_1605_ = v_isSharedCheck_1611_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_diag_1602_);
lean_inc(v_postponed_1601_);
lean_inc(v_zetaDeltaFVarIds_1600_);
lean_inc(v_cache_1599_);
lean_dec(v___x_1598_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1611_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 0, v_snd_1597_);
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_snd_1597_);
lean_ctor_set(v_reuseFailAlloc_1610_, 1, v_cache_1599_);
lean_ctor_set(v_reuseFailAlloc_1610_, 2, v_zetaDeltaFVarIds_1600_);
lean_ctor_set(v_reuseFailAlloc_1610_, 3, v_postponed_1601_);
lean_ctor_set(v_reuseFailAlloc_1610_, 4, v_diag_1602_);
v___x_1607_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = lean_st_ref_put(v___y_1589_, v___x_1607_);
v___x_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1609_, 0, v_fst_1596_);
return v___x_1609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0___redArg___boxed(lean_object* v_e_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0___redArg(v_e_1613_, v___y_1614_);
lean_dec(v___y_1614_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0(lean_object* v_e_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_){
_start:
{
lean_object* v___x_1625_; 
v___x_1625_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0___redArg(v_e_1617_, v___y_1621_);
return v___x_1625_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0___boxed(lean_object* v_e_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0(v_e_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__0(lean_object* v_e_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v___x_1648_; uint8_t v___x_1649_; 
v___x_1648_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__10));
v___x_1649_ = l_Lean_Expr_isAppOf(v_e_1637_, v___x_1648_);
if (v___x_1649_ == 0)
{
lean_dec_ref(v_e_1637_);
goto v___jp_1645_;
}
else
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lean_Meta_unfoldProjInst_x3f(v_e_1637_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1666_; 
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1653_ = v___x_1650_;
v_isShared_1654_ = v_isSharedCheck_1666_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1650_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1666_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
if (lean_obj_tag(v_a_1651_) == 1)
{
lean_object* v_val_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1665_; 
v_val_1655_ = lean_ctor_get(v_a_1651_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v_a_1651_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1657_ = v_a_1651_;
v_isShared_1658_ = v_isSharedCheck_1665_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_val_1655_);
lean_dec(v_a_1651_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1665_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1660_; 
if (v_isShared_1658_ == 0)
{
v___x_1660_ = v___x_1657_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_val_1655_);
v___x_1660_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1662_; 
if (v_isShared_1654_ == 0)
{
lean_ctor_set(v___x_1653_, 0, v___x_1660_);
v___x_1662_ = v___x_1653_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1660_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
}
else
{
lean_del_object(v___x_1653_);
lean_dec(v_a_1651_);
goto v___jp_1645_;
}
}
}
else
{
lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1674_; 
v_a_1667_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1669_ = v___x_1650_;
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_dec(v___x_1650_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1672_; 
if (v_isShared_1670_ == 0)
{
v___x_1672_ = v___x_1669_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_a_1667_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
v___jp_1645_:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1646_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__0___closed__0));
v___x_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
return v___x_1647_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__0___boxed(lean_object* v_e_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__0(v_e_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
lean_dec(v___y_1679_);
lean_dec_ref(v___y_1678_);
lean_dec(v___y_1677_);
lean_dec_ref(v___y_1676_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__1(lean_object* v_x_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_){
_start:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1692_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__0___closed__0));
v___x_1693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1692_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__1___boxed(lean_object* v_x_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Lean_Elab_Tactic_Do_elabContractEPosts___lam__1(v_x_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec_ref(v_x_1694_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___lam__0(lean_object* v_00_u03b1_1703_, lean_object* v_x_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_){
_start:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1712_ = lean_apply_1(v_x_1704_, lean_box(0));
v___x_1713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1712_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___lam__0___boxed(lean_object* v_00_u03b1_1714_, lean_object* v_x_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_){
_start:
{
lean_object* v_res_1723_; 
v_res_1723_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___lam__0(v_00_u03b1_1714_, v_x_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_);
lean_dec(v___y_1721_);
lean_dec_ref(v___y_1720_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
return v_res_1723_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__3(void){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = l_Lean_maxRecDepthErrorMessage;
v___x_1730_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1729_);
return v___x_1730_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__4(void){
_start:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1731_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__3);
v___x_1732_ = l_Lean_MessageData_ofFormat(v___x_1731_);
return v___x_1732_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__5(void){
_start:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1733_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__4);
v___x_1734_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__2));
v___x_1735_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1734_);
lean_ctor_set(v___x_1735_, 1, v___x_1733_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg(lean_object* v_ref_1736_){
_start:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1738_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___closed__5);
v___x_1739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1739_, 0, v_ref_1736_);
lean_ctor_set(v___x_1739_, 1, v___x_1738_);
v___x_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1739_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object* v_ref_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v_res_1743_; 
v_res_1743_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_1741_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10___redArg(lean_object* v_x_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
lean_object* v___y_1754_; lean_object* v_toCold_1763_; lean_object* v_currRecDepth_1764_; lean_object* v_ref_1765_; uint16_t v_optionFlags_1766_; uint8_t v_suppressElabErrors_1767_; uint8_t v_checkDeprecated_1768_; uint8_t v_isRecordingDeps_1769_; lean_object* v_maxRecDepth_1775_; lean_object* v___x_1776_; uint8_t v___x_1777_; 
v_toCold_1763_ = lean_ctor_get(v___y_1750_, 0);
v_currRecDepth_1764_ = lean_ctor_get(v___y_1750_, 1);
v_ref_1765_ = lean_ctor_get(v___y_1750_, 2);
v_optionFlags_1766_ = lean_ctor_get_uint16(v___y_1750_, sizeof(void*)*3);
v_suppressElabErrors_1767_ = lean_ctor_get_uint8(v___y_1750_, sizeof(void*)*3 + 2);
v_checkDeprecated_1768_ = lean_ctor_get_uint8(v___y_1750_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1769_ = lean_ctor_get_uint8(v___y_1750_, sizeof(void*)*3 + 4);
v_maxRecDepth_1775_ = lean_ctor_get(v_toCold_1763_, 3);
v___x_1776_ = lean_unsigned_to_nat(0u);
v___x_1777_ = lean_nat_dec_eq(v_maxRecDepth_1775_, v___x_1776_);
if (v___x_1777_ == 0)
{
uint8_t v___x_1778_; 
v___x_1778_ = lean_nat_dec_eq(v_currRecDepth_1764_, v_maxRecDepth_1775_);
if (v___x_1778_ == 0)
{
goto v___jp_1770_;
}
else
{
lean_object* v___x_1779_; 
lean_dec_ref(v_x_1744_);
lean_inc(v_ref_1765_);
v___x_1779_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_1765_);
v___y_1754_ = v___x_1779_;
goto v___jp_1753_;
}
}
else
{
goto v___jp_1770_;
}
v___jp_1753_:
{
if (lean_obj_tag(v___y_1754_) == 0)
{
return v___y_1754_;
}
else
{
lean_object* v_a_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1762_; 
v_a_1755_ = lean_ctor_get(v___y_1754_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___y_1754_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1757_ = v___y_1754_;
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_a_1755_);
lean_dec(v___y_1754_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1760_; 
if (v_isShared_1758_ == 0)
{
v___x_1760_ = v___x_1757_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v_a_1755_);
v___x_1760_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
return v___x_1760_;
}
}
}
}
v___jp_1770_:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1771_ = lean_unsigned_to_nat(1u);
v___x_1772_ = lean_nat_add(v_currRecDepth_1764_, v___x_1771_);
lean_inc(v_ref_1765_);
lean_inc_ref(v_toCold_1763_);
v___x_1773_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1773_, 0, v_toCold_1763_);
lean_ctor_set(v___x_1773_, 1, v___x_1772_);
lean_ctor_set(v___x_1773_, 2, v_ref_1765_);
lean_ctor_set_uint16(v___x_1773_, sizeof(void*)*3, v_optionFlags_1766_);
lean_ctor_set_uint8(v___x_1773_, sizeof(void*)*3 + 2, v_suppressElabErrors_1767_);
lean_ctor_set_uint8(v___x_1773_, sizeof(void*)*3 + 3, v_checkDeprecated_1768_);
lean_ctor_set_uint8(v___x_1773_, sizeof(void*)*3 + 4, v_isRecordingDeps_1769_);
lean_inc(v___y_1751_);
lean_inc(v___y_1749_);
lean_inc_ref(v___y_1748_);
lean_inc(v___y_1747_);
lean_inc_ref(v___y_1746_);
lean_inc(v___y_1745_);
v___x_1774_ = lean_apply_8(v_x_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___x_1773_, v___y_1751_, lean_box(0));
v___y_1754_ = v___x_1774_;
goto v___jp_1753_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10___redArg___boxed(lean_object* v_x_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_){
_start:
{
lean_object* v_res_1789_; 
v_res_1789_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10___redArg(v_x_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_);
lean_dec(v___y_1787_);
lean_dec_ref(v___y_1786_);
lean_dec(v___y_1785_);
lean_dec_ref(v___y_1784_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
lean_dec(v___y_1781_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__2(lean_object* v___x_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v___x_1798_; 
v___x_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1790_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object* v___x_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__2(v___x_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_);
lean_dec(v___y_1805_);
lean_dec_ref(v___y_1804_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object* v_k_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v_b_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v___x_1818_; 
lean_inc(v___y_1816_);
lean_inc_ref(v___y_1815_);
lean_inc(v___y_1814_);
lean_inc_ref(v___y_1813_);
lean_inc(v___y_1811_);
lean_inc_ref(v___y_1810_);
lean_inc(v___y_1809_);
v___x_1818_ = lean_apply_9(v_k_1808_, v_b_1812_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, lean_box(0));
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object* v_k_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v_b_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(v_k_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v_b_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
lean_dec(v___y_1827_);
lean_dec_ref(v___y_1826_);
lean_dec(v___y_1825_);
lean_dec_ref(v___y_1824_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec(v___y_1820_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg(lean_object* v_name_1830_, uint8_t v_bi_1831_, lean_object* v_type_1832_, lean_object* v_k_1833_, uint8_t v_kind_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v___f_1843_; lean_object* v___x_1844_; 
lean_inc(v___y_1837_);
lean_inc_ref(v___y_1836_);
lean_inc(v___y_1835_);
v___f_1843_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1843_, 0, v_k_1833_);
lean_closure_set(v___f_1843_, 1, v___y_1835_);
lean_closure_set(v___f_1843_, 2, v___y_1836_);
lean_closure_set(v___f_1843_, 3, v___y_1837_);
v___x_1844_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1830_, v_bi_1831_, v_type_1832_, v___f_1843_, v_kind_1834_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
if (lean_obj_tag(v___x_1844_) == 0)
{
return v___x_1844_;
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
v_a_1845_ = lean_ctor_get(v___x_1844_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1844_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1847_ = v___x_1844_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1844_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1845_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object* v_name_1853_, lean_object* v_bi_1854_, lean_object* v_type_1855_, lean_object* v_k_1856_, lean_object* v_kind_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_){
_start:
{
uint8_t v_bi_boxed_1866_; uint8_t v_kind_boxed_1867_; lean_object* v_res_1868_; 
v_bi_boxed_1866_ = lean_unbox(v_bi_1854_);
v_kind_boxed_1867_ = lean_unbox(v_kind_1857_);
v_res_1868_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg(v_name_1853_, v_bi_boxed_1866_, v_type_1855_, v_k_1856_, v_kind_boxed_1867_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_);
lean_dec(v___y_1864_);
lean_dec_ref(v___y_1863_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec(v___y_1858_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11___redArg(lean_object* v_name_1869_, lean_object* v_type_1870_, lean_object* v_val_1871_, lean_object* v_k_1872_, uint8_t v_nondep_1873_, uint8_t v_kind_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_){
_start:
{
lean_object* v___f_1883_; lean_object* v___x_1884_; 
lean_inc(v___y_1877_);
lean_inc_ref(v___y_1876_);
lean_inc(v___y_1875_);
v___f_1883_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1883_, 0, v_k_1872_);
lean_closure_set(v___f_1883_, 1, v___y_1875_);
lean_closure_set(v___f_1883_, 2, v___y_1876_);
lean_closure_set(v___f_1883_, 3, v___y_1877_);
v___x_1884_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1869_, v_type_1870_, v_val_1871_, v___f_1883_, v_nondep_1873_, v_kind_1874_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_);
if (lean_obj_tag(v___x_1884_) == 0)
{
return v___x_1884_;
}
else
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1884_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1884_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1890_; 
if (v_isShared_1888_ == 0)
{
v___x_1890_ = v___x_1887_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1885_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object* v_name_1893_, lean_object* v_type_1894_, lean_object* v_val_1895_, lean_object* v_k_1896_, lean_object* v_nondep_1897_, lean_object* v_kind_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_){
_start:
{
uint8_t v_nondep_boxed_1907_; uint8_t v_kind_boxed_1908_; lean_object* v_res_1909_; 
v_nondep_boxed_1907_ = lean_unbox(v_nondep_1897_);
v_kind_boxed_1908_ = lean_unbox(v_kind_1898_);
v_res_1909_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11___redArg(v_name_1893_, v_type_1894_, v_val_1895_, v_k_1896_, v_nondep_boxed_1907_, v_kind_boxed_1908_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_);
lean_dec(v___y_1905_);
lean_dec_ref(v___y_1904_);
lean_dec(v___y_1903_);
lean_dec_ref(v___y_1902_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
lean_dec(v___y_1899_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6___redArg(lean_object* v_a_1910_, lean_object* v_x_1911_){
_start:
{
if (lean_obj_tag(v_x_1911_) == 0)
{
lean_object* v___x_1912_; 
v___x_1912_ = lean_box(0);
return v___x_1912_;
}
else
{
lean_object* v_key_1913_; lean_object* v_value_1914_; lean_object* v_tail_1915_; uint8_t v___x_1916_; 
v_key_1913_ = lean_ctor_get(v_x_1911_, 0);
v_value_1914_ = lean_ctor_get(v_x_1911_, 1);
v_tail_1915_ = lean_ctor_get(v_x_1911_, 2);
v___x_1916_ = l_Lean_ExprStructEq_beq(v_key_1913_, v_a_1910_);
if (v___x_1916_ == 0)
{
v_x_1911_ = v_tail_1915_;
goto _start;
}
else
{
lean_object* v___x_1918_; 
lean_inc(v_value_1914_);
v___x_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1918_, 0, v_value_1914_);
return v___x_1918_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v_a_1919_, lean_object* v_x_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6___redArg(v_a_1919_, v_x_1920_);
lean_dec(v_x_1920_);
lean_dec_ref(v_a_1919_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5___redArg(lean_object* v_m_1922_, lean_object* v_a_1923_){
_start:
{
lean_object* v_buckets_1924_; lean_object* v___x_1925_; uint64_t v___x_1926_; uint64_t v___x_1927_; uint64_t v___x_1928_; uint64_t v_fold_1929_; uint64_t v___x_1930_; uint64_t v___x_1931_; uint64_t v___x_1932_; size_t v___x_1933_; size_t v___x_1934_; size_t v___x_1935_; size_t v___x_1936_; size_t v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v_buckets_1924_ = lean_ctor_get(v_m_1922_, 1);
v___x_1925_ = lean_array_get_size(v_buckets_1924_);
v___x_1926_ = l_Lean_ExprStructEq_hash(v_a_1923_);
v___x_1927_ = 32ULL;
v___x_1928_ = lean_uint64_shift_right(v___x_1926_, v___x_1927_);
v_fold_1929_ = lean_uint64_xor(v___x_1926_, v___x_1928_);
v___x_1930_ = 16ULL;
v___x_1931_ = lean_uint64_shift_right(v_fold_1929_, v___x_1930_);
v___x_1932_ = lean_uint64_xor(v_fold_1929_, v___x_1931_);
v___x_1933_ = lean_uint64_to_usize(v___x_1932_);
v___x_1934_ = lean_usize_of_nat(v___x_1925_);
v___x_1935_ = ((size_t)1ULL);
v___x_1936_ = lean_usize_sub(v___x_1934_, v___x_1935_);
v___x_1937_ = lean_usize_land(v___x_1933_, v___x_1936_);
v___x_1938_ = lean_array_uget_borrowed(v_buckets_1924_, v___x_1937_);
v___x_1939_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6___redArg(v_a_1923_, v___x_1938_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5___redArg___boxed(lean_object* v_m_1940_, lean_object* v_a_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5___redArg(v_m_1940_, v_a_1941_);
lean_dec_ref(v_a_1941_);
lean_dec_ref(v_m_1940_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_1943_, lean_object* v_x_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_){
_start:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1952_ = lean_apply_1(v_x_1944_, lean_box(0));
v___x_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1953_, 0, v___x_1952_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_1954_, lean_object* v_x_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__0(v_00_u03b1_1954_, v_x_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__18___redArg(lean_object* v_a_1964_, lean_object* v_b_1965_, lean_object* v_x_1966_){
_start:
{
if (lean_obj_tag(v_x_1966_) == 0)
{
lean_dec(v_b_1965_);
lean_dec_ref(v_a_1964_);
return v_x_1966_;
}
else
{
lean_object* v_key_1967_; lean_object* v_value_1968_; lean_object* v_tail_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1981_; 
v_key_1967_ = lean_ctor_get(v_x_1966_, 0);
v_value_1968_ = lean_ctor_get(v_x_1966_, 1);
v_tail_1969_ = lean_ctor_get(v_x_1966_, 2);
v_isSharedCheck_1981_ = !lean_is_exclusive(v_x_1966_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1971_ = v_x_1966_;
v_isShared_1972_ = v_isSharedCheck_1981_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_tail_1969_);
lean_inc(v_value_1968_);
lean_inc(v_key_1967_);
lean_dec(v_x_1966_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1981_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
uint8_t v___x_1973_; 
v___x_1973_ = l_Lean_ExprStructEq_beq(v_key_1967_, v_a_1964_);
if (v___x_1973_ == 0)
{
lean_object* v___x_1974_; lean_object* v___x_1976_; 
v___x_1974_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__18___redArg(v_a_1964_, v_b_1965_, v_tail_1969_);
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 2, v___x_1974_);
v___x_1976_ = v___x_1971_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_key_1967_);
lean_ctor_set(v_reuseFailAlloc_1977_, 1, v_value_1968_);
lean_ctor_set(v_reuseFailAlloc_1977_, 2, v___x_1974_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
else
{
lean_object* v___x_1979_; 
lean_dec(v_value_1968_);
lean_dec(v_key_1967_);
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 1, v_b_1965_);
lean_ctor_set(v___x_1971_, 0, v_a_1964_);
v___x_1979_ = v___x_1971_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v_a_1964_);
lean_ctor_set(v_reuseFailAlloc_1980_, 1, v_b_1965_);
lean_ctor_set(v_reuseFailAlloc_1980_, 2, v_tail_1969_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16___redArg(lean_object* v_a_1982_, lean_object* v_x_1983_){
_start:
{
if (lean_obj_tag(v_x_1983_) == 0)
{
uint8_t v___x_1984_; 
v___x_1984_ = 0;
return v___x_1984_;
}
else
{
lean_object* v_key_1985_; lean_object* v_tail_1986_; uint8_t v___x_1987_; 
v_key_1985_ = lean_ctor_get(v_x_1983_, 0);
v_tail_1986_ = lean_ctor_get(v_x_1983_, 2);
v___x_1987_ = l_Lean_ExprStructEq_beq(v_key_1985_, v_a_1982_);
if (v___x_1987_ == 0)
{
v_x_1983_ = v_tail_1986_;
goto _start;
}
else
{
return v___x_1987_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object* v_a_1989_, lean_object* v_x_1990_){
_start:
{
uint8_t v_res_1991_; lean_object* v_r_1992_; 
v_res_1991_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16___redArg(v_a_1989_, v_x_1990_);
lean_dec(v_x_1990_);
lean_dec_ref(v_a_1989_);
v_r_1992_ = lean_box(v_res_1991_);
return v_r_1992_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object* v_x_1993_, lean_object* v_x_1994_){
_start:
{
if (lean_obj_tag(v_x_1994_) == 0)
{
return v_x_1993_;
}
else
{
lean_object* v_key_1995_; lean_object* v_value_1996_; lean_object* v_tail_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2020_; 
v_key_1995_ = lean_ctor_get(v_x_1994_, 0);
v_value_1996_ = lean_ctor_get(v_x_1994_, 1);
v_tail_1997_ = lean_ctor_get(v_x_1994_, 2);
v_isSharedCheck_2020_ = !lean_is_exclusive(v_x_1994_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_1999_ = v_x_1994_;
v_isShared_2000_ = v_isSharedCheck_2020_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_tail_1997_);
lean_inc(v_value_1996_);
lean_inc(v_key_1995_);
lean_dec(v_x_1994_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2020_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2001_; uint64_t v___x_2002_; uint64_t v___x_2003_; uint64_t v___x_2004_; uint64_t v_fold_2005_; uint64_t v___x_2006_; uint64_t v___x_2007_; uint64_t v___x_2008_; size_t v___x_2009_; size_t v___x_2010_; size_t v___x_2011_; size_t v___x_2012_; size_t v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2016_; 
v___x_2001_ = lean_array_get_size(v_x_1993_);
v___x_2002_ = l_Lean_ExprStructEq_hash(v_key_1995_);
v___x_2003_ = 32ULL;
v___x_2004_ = lean_uint64_shift_right(v___x_2002_, v___x_2003_);
v_fold_2005_ = lean_uint64_xor(v___x_2002_, v___x_2004_);
v___x_2006_ = 16ULL;
v___x_2007_ = lean_uint64_shift_right(v_fold_2005_, v___x_2006_);
v___x_2008_ = lean_uint64_xor(v_fold_2005_, v___x_2007_);
v___x_2009_ = lean_uint64_to_usize(v___x_2008_);
v___x_2010_ = lean_usize_of_nat(v___x_2001_);
v___x_2011_ = ((size_t)1ULL);
v___x_2012_ = lean_usize_sub(v___x_2010_, v___x_2011_);
v___x_2013_ = lean_usize_land(v___x_2009_, v___x_2012_);
v___x_2014_ = lean_array_uget_borrowed(v_x_1993_, v___x_2013_);
lean_inc(v___x_2014_);
if (v_isShared_2000_ == 0)
{
lean_ctor_set(v___x_1999_, 2, v___x_2014_);
v___x_2016_ = v___x_1999_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_key_1995_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v_value_1996_);
lean_ctor_set(v_reuseFailAlloc_2019_, 2, v___x_2014_);
v___x_2016_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
lean_object* v___x_2017_; 
v___x_2017_ = lean_array_uset(v_x_1993_, v___x_2013_, v___x_2016_);
v_x_1993_ = v___x_2017_;
v_x_1994_ = v_tail_1997_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object* v_i_2021_, lean_object* v_source_2022_, lean_object* v_target_2023_){
_start:
{
lean_object* v___x_2024_; uint8_t v___x_2025_; 
v___x_2024_ = lean_array_get_size(v_source_2022_);
v___x_2025_ = lean_nat_dec_lt(v_i_2021_, v___x_2024_);
if (v___x_2025_ == 0)
{
lean_dec_ref(v_source_2022_);
lean_dec(v_i_2021_);
return v_target_2023_;
}
else
{
lean_object* v_es_2026_; lean_object* v___x_2027_; lean_object* v_source_2028_; lean_object* v_target_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v_es_2026_ = lean_array_fget(v_source_2022_, v_i_2021_);
v___x_2027_ = lean_box(0);
v_source_2028_ = lean_array_fset(v_source_2022_, v_i_2021_, v___x_2027_);
v_target_2029_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_target_2023_, v_es_2026_);
v___x_2030_ = lean_unsigned_to_nat(1u);
v___x_2031_ = lean_nat_add(v_i_2021_, v___x_2030_);
lean_dec(v_i_2021_);
v_i_2021_ = v___x_2031_;
v_source_2022_ = v_source_2028_;
v_target_2023_ = v_target_2029_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17___redArg(lean_object* v_data_2033_){
_start:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v_nbuckets_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2034_ = lean_array_get_size(v_data_2033_);
v___x_2035_ = lean_unsigned_to_nat(2u);
v_nbuckets_2036_ = lean_nat_mul(v___x_2034_, v___x_2035_);
v___x_2037_ = lean_unsigned_to_nat(0u);
v___x_2038_ = lean_box(0);
v___x_2039_ = lean_mk_array(v_nbuckets_2036_, v___x_2038_);
v___x_2040_ = lean_array_propagate_mark(v_data_2033_, v___x_2039_);
v___x_2041_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v___x_2037_, v_data_2033_, v___x_2040_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11___redArg(lean_object* v_m_2042_, lean_object* v_a_2043_, lean_object* v_b_2044_){
_start:
{
lean_object* v_size_2045_; lean_object* v_buckets_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2089_; 
v_size_2045_ = lean_ctor_get(v_m_2042_, 0);
v_buckets_2046_ = lean_ctor_get(v_m_2042_, 1);
v_isSharedCheck_2089_ = !lean_is_exclusive(v_m_2042_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2048_ = v_m_2042_;
v_isShared_2049_ = v_isSharedCheck_2089_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_buckets_2046_);
lean_inc(v_size_2045_);
lean_dec(v_m_2042_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2089_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2050_; uint64_t v___x_2051_; uint64_t v___x_2052_; uint64_t v___x_2053_; uint64_t v_fold_2054_; uint64_t v___x_2055_; uint64_t v___x_2056_; uint64_t v___x_2057_; size_t v___x_2058_; size_t v___x_2059_; size_t v___x_2060_; size_t v___x_2061_; size_t v___x_2062_; lean_object* v_bkt_2063_; uint8_t v___x_2064_; 
v___x_2050_ = lean_array_get_size(v_buckets_2046_);
v___x_2051_ = l_Lean_ExprStructEq_hash(v_a_2043_);
v___x_2052_ = 32ULL;
v___x_2053_ = lean_uint64_shift_right(v___x_2051_, v___x_2052_);
v_fold_2054_ = lean_uint64_xor(v___x_2051_, v___x_2053_);
v___x_2055_ = 16ULL;
v___x_2056_ = lean_uint64_shift_right(v_fold_2054_, v___x_2055_);
v___x_2057_ = lean_uint64_xor(v_fold_2054_, v___x_2056_);
v___x_2058_ = lean_uint64_to_usize(v___x_2057_);
v___x_2059_ = lean_usize_of_nat(v___x_2050_);
v___x_2060_ = ((size_t)1ULL);
v___x_2061_ = lean_usize_sub(v___x_2059_, v___x_2060_);
v___x_2062_ = lean_usize_land(v___x_2058_, v___x_2061_);
v_bkt_2063_ = lean_array_uget_borrowed(v_buckets_2046_, v___x_2062_);
v___x_2064_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16___redArg(v_a_2043_, v_bkt_2063_);
if (v___x_2064_ == 0)
{
lean_object* v___x_2065_; lean_object* v_size_x27_2066_; lean_object* v___x_2067_; lean_object* v_buckets_x27_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; uint8_t v___x_2074_; 
v___x_2065_ = lean_unsigned_to_nat(1u);
v_size_x27_2066_ = lean_nat_add(v_size_2045_, v___x_2065_);
lean_dec(v_size_2045_);
lean_inc(v_bkt_2063_);
v___x_2067_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2067_, 0, v_a_2043_);
lean_ctor_set(v___x_2067_, 1, v_b_2044_);
lean_ctor_set(v___x_2067_, 2, v_bkt_2063_);
v_buckets_x27_2068_ = lean_array_uset(v_buckets_2046_, v___x_2062_, v___x_2067_);
v___x_2069_ = lean_unsigned_to_nat(4u);
v___x_2070_ = lean_nat_mul(v_size_x27_2066_, v___x_2069_);
v___x_2071_ = lean_unsigned_to_nat(3u);
v___x_2072_ = lean_nat_div(v___x_2070_, v___x_2071_);
lean_dec(v___x_2070_);
v___x_2073_ = lean_array_get_size(v_buckets_x27_2068_);
v___x_2074_ = lean_nat_dec_le(v___x_2072_, v___x_2073_);
lean_dec(v___x_2072_);
if (v___x_2074_ == 0)
{
lean_object* v_val_2075_; lean_object* v___x_2077_; 
v_val_2075_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17___redArg(v_buckets_x27_2068_);
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 1, v_val_2075_);
lean_ctor_set(v___x_2048_, 0, v_size_x27_2066_);
v___x_2077_ = v___x_2048_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_size_x27_2066_);
lean_ctor_set(v_reuseFailAlloc_2078_, 1, v_val_2075_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
else
{
lean_object* v___x_2080_; 
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 1, v_buckets_x27_2068_);
lean_ctor_set(v___x_2048_, 0, v_size_x27_2066_);
v___x_2080_ = v___x_2048_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_size_x27_2066_);
lean_ctor_set(v_reuseFailAlloc_2081_, 1, v_buckets_x27_2068_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
else
{
lean_object* v___x_2082_; lean_object* v_buckets_x27_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2087_; 
lean_inc(v_bkt_2063_);
v___x_2082_ = lean_box(0);
v_buckets_x27_2083_ = lean_array_uset(v_buckets_2046_, v___x_2062_, v___x_2082_);
v___x_2084_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__18___redArg(v_a_2043_, v_b_2044_, v_bkt_2063_);
v___x_2085_ = lean_array_uset(v_buckets_x27_2083_, v___x_2062_, v___x_2084_);
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 1, v___x_2085_);
v___x_2087_ = v___x_2048_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v_size_2045_);
lean_ctor_set(v_reuseFailAlloc_2088_, 1, v___x_2085_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
return v___x_2087_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__2(lean_object* v_a_2090_, lean_object* v_e_2091_, lean_object* v_a_2092_){
_start:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2094_ = lean_st_ref_take(v_a_2090_);
v___x_2095_ = lean_box(0);
v___x_2096_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11___redArg(v___x_2094_, v_e_2091_, v_a_2092_);
v___x_2097_ = lean_st_ref_put(v_a_2090_, v___x_2096_);
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__2___boxed(lean_object* v_a_2098_, lean_object* v_e_2099_, lean_object* v_a_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__2(v_a_2098_, v_e_2099_, v_a_2100_);
lean_dec(v_a_2098_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6___lam__0___boxed(lean_object* v_fvars_2103_, lean_object* v_pre_2104_, lean_object* v_post_2105_, lean_object* v_usedLetOnly_2106_, lean_object* v_skipConstInApp_2107_, lean_object* v_skipInstances_2108_, lean_object* v_body_2109_, lean_object* v_x_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
uint8_t v_usedLetOnly_boxed_2119_; uint8_t v_skipConstInApp_boxed_2120_; uint8_t v_skipInstances_boxed_2121_; lean_object* v_res_2122_; 
v_usedLetOnly_boxed_2119_ = lean_unbox(v_usedLetOnly_2106_);
v_skipConstInApp_boxed_2120_ = lean_unbox(v_skipConstInApp_2107_);
v_skipInstances_boxed_2121_ = lean_unbox(v_skipInstances_2108_);
v_res_2122_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6___lam__0(v_fvars_2103_, v_pre_2104_, v_post_2105_, v_usedLetOnly_boxed_2119_, v_skipConstInApp_boxed_2120_, v_skipInstances_boxed_2121_, v_body_2109_, v_x_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7___lam__0(lean_object* v_fvars_2126_, lean_object* v_pre_2127_, lean_object* v_post_2128_, uint8_t v_usedLetOnly_2129_, uint8_t v_skipConstInApp_2130_, uint8_t v_skipInstances_2131_, lean_object* v_body_2132_, lean_object* v_x_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_){
_start:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2142_ = lean_array_push(v_fvars_2126_, v_x_2133_);
v___x_2143_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7(v_pre_2127_, v_post_2128_, v_usedLetOnly_2129_, v_skipConstInApp_2130_, v_skipInstances_2131_, v___x_2142_, v_body_2132_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7___lam__0___boxed(lean_object* v_fvars_2144_, lean_object* v_pre_2145_, lean_object* v_post_2146_, lean_object* v_usedLetOnly_2147_, lean_object* v_skipConstInApp_2148_, lean_object* v_skipInstances_2149_, lean_object* v_body_2150_, lean_object* v_x_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_){
_start:
{
uint8_t v_usedLetOnly_boxed_2160_; uint8_t v_skipConstInApp_boxed_2161_; uint8_t v_skipInstances_boxed_2162_; lean_object* v_res_2163_; 
v_usedLetOnly_boxed_2160_ = lean_unbox(v_usedLetOnly_2147_);
v_skipConstInApp_boxed_2161_ = lean_unbox(v_skipConstInApp_2148_);
v_skipInstances_boxed_2162_ = lean_unbox(v_skipInstances_2149_);
v_res_2163_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7___lam__0(v_fvars_2144_, v_pre_2145_, v_post_2146_, v_usedLetOnly_boxed_2160_, v_skipConstInApp_boxed_2161_, v_skipInstances_boxed_2162_, v_body_2150_, v_x_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
lean_dec(v___y_2156_);
lean_dec_ref(v___y_2155_);
lean_dec(v___y_2154_);
lean_dec_ref(v___y_2153_);
lean_dec(v___y_2152_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(lean_object* v_pre_2164_, lean_object* v_post_2165_, uint8_t v_usedLetOnly_2166_, uint8_t v_skipConstInApp_2167_, uint8_t v_skipInstances_2168_, lean_object* v_e_2169_, lean_object* v_a_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_){
_start:
{
lean_object* v___x_2178_; 
lean_inc_ref(v_post_2165_);
lean_inc(v___y_2176_);
lean_inc_ref(v___y_2175_);
lean_inc(v___y_2174_);
lean_inc_ref(v___y_2173_);
lean_inc(v___y_2172_);
lean_inc_ref(v___y_2171_);
lean_inc_ref(v_e_2169_);
v___x_2178_ = lean_apply_8(v_post_2165_, v_e_2169_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, lean_box(0));
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2197_; 
v_a_2179_ = lean_ctor_get(v___x_2178_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2181_ = v___x_2178_;
v_isShared_2182_ = v_isSharedCheck_2197_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v___x_2178_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2197_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
switch(lean_obj_tag(v_a_2179_))
{
case 0:
{
lean_object* v_e_2183_; lean_object* v___x_2185_; 
lean_dec_ref(v_e_2169_);
lean_dec_ref(v_post_2165_);
lean_dec_ref(v_pre_2164_);
v_e_2183_ = lean_ctor_get(v_a_2179_, 0);
lean_inc_ref(v_e_2183_);
lean_dec_ref_known(v_a_2179_, 1);
if (v_isShared_2182_ == 0)
{
lean_ctor_set(v___x_2181_, 0, v_e_2183_);
v___x_2185_ = v___x_2181_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_e_2183_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
case 1:
{
lean_object* v_e_2187_; lean_object* v___x_2188_; 
lean_del_object(v___x_2181_);
lean_dec_ref(v_e_2169_);
v_e_2187_ = lean_ctor_get(v_a_2179_, 0);
lean_inc_ref(v_e_2187_);
lean_dec_ref_known(v_a_2179_, 1);
v___x_2188_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2164_, v_post_2165_, v_usedLetOnly_2166_, v_skipConstInApp_2167_, v_skipInstances_2168_, v_e_2187_, v_a_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_);
return v___x_2188_;
}
default: 
{
lean_object* v_e_x3f_2189_; 
lean_dec_ref(v_post_2165_);
lean_dec_ref(v_pre_2164_);
v_e_x3f_2189_ = lean_ctor_get(v_a_2179_, 0);
lean_inc(v_e_x3f_2189_);
lean_dec_ref_known(v_a_2179_, 1);
if (lean_obj_tag(v_e_x3f_2189_) == 0)
{
lean_object* v___x_2191_; 
if (v_isShared_2182_ == 0)
{
lean_ctor_set(v___x_2181_, 0, v_e_2169_);
v___x_2191_ = v___x_2181_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_e_2169_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
else
{
lean_object* v_val_2193_; lean_object* v___x_2195_; 
lean_dec_ref(v_e_2169_);
v_val_2193_ = lean_ctor_get(v_e_x3f_2189_, 0);
lean_inc(v_val_2193_);
lean_dec_ref_known(v_e_x3f_2189_, 1);
if (v_isShared_2182_ == 0)
{
lean_ctor_set(v___x_2181_, 0, v_val_2193_);
v___x_2195_ = v___x_2181_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_val_2193_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
}
}
else
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
lean_dec_ref(v_e_2169_);
lean_dec_ref(v_post_2165_);
lean_dec_ref(v_pre_2164_);
v_a_2198_ = lean_ctor_get(v___x_2178_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2200_ = v___x_2178_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2178_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2198_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7(lean_object* v_pre_2206_, lean_object* v_post_2207_, uint8_t v_usedLetOnly_2208_, uint8_t v_skipConstInApp_2209_, uint8_t v_skipInstances_2210_, lean_object* v_fvars_2211_, lean_object* v_e_2212_, lean_object* v_a_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_){
_start:
{
if (lean_obj_tag(v_e_2212_) == 6)
{
lean_object* v_binderName_2221_; lean_object* v_binderType_2222_; lean_object* v_body_2223_; uint8_t v_binderInfo_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___f_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v_binderName_2221_ = lean_ctor_get(v_e_2212_, 0);
lean_inc(v_binderName_2221_);
v_binderType_2222_ = lean_ctor_get(v_e_2212_, 1);
lean_inc_ref(v_binderType_2222_);
v_body_2223_ = lean_ctor_get(v_e_2212_, 2);
lean_inc_ref(v_body_2223_);
v_binderInfo_2224_ = lean_ctor_get_uint8(v_e_2212_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2212_, 3);
v___x_2225_ = lean_box(v_usedLetOnly_2208_);
v___x_2226_ = lean_box(v_skipConstInApp_2209_);
v___x_2227_ = lean_box(v_skipInstances_2210_);
lean_inc_ref(v_post_2207_);
lean_inc_ref(v_pre_2206_);
lean_inc_ref(v_fvars_2211_);
v___f_2228_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7___lam__0___boxed), 16, 7);
lean_closure_set(v___f_2228_, 0, v_fvars_2211_);
lean_closure_set(v___f_2228_, 1, v_pre_2206_);
lean_closure_set(v___f_2228_, 2, v_post_2207_);
lean_closure_set(v___f_2228_, 3, v___x_2225_);
lean_closure_set(v___f_2228_, 4, v___x_2226_);
lean_closure_set(v___f_2228_, 5, v___x_2227_);
lean_closure_set(v___f_2228_, 6, v_body_2223_);
v___x_2229_ = lean_expr_instantiate_rev(v_binderType_2222_, v_fvars_2211_);
lean_dec_ref(v_fvars_2211_);
lean_dec_ref(v_binderType_2222_);
v___x_2230_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2206_, v_post_2207_, v_usedLetOnly_2208_, v_skipConstInApp_2209_, v_skipInstances_2210_, v___x_2229_, v_a_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
if (lean_obj_tag(v___x_2230_) == 0)
{
lean_object* v_a_2231_; uint8_t v___x_2232_; lean_object* v___x_2233_; 
v_a_2231_ = lean_ctor_get(v___x_2230_, 0);
lean_inc(v_a_2231_);
lean_dec_ref_known(v___x_2230_, 1);
v___x_2232_ = 0;
v___x_2233_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_2221_, v_binderInfo_2224_, v_a_2231_, v___f_2228_, v___x_2232_, v_a_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
return v___x_2233_;
}
else
{
lean_dec_ref(v___f_2228_);
lean_dec(v_binderName_2221_);
return v___x_2230_;
}
}
else
{
lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___x_2234_ = lean_expr_instantiate_rev(v_e_2212_, v_fvars_2211_);
lean_dec_ref(v_e_2212_);
lean_inc_ref(v_post_2207_);
lean_inc_ref(v_pre_2206_);
v___x_2235_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2206_, v_post_2207_, v_usedLetOnly_2208_, v_skipConstInApp_2209_, v_skipInstances_2210_, v___x_2234_, v_a_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
if (lean_obj_tag(v___x_2235_) == 0)
{
lean_object* v_a_2236_; uint8_t v___x_2237_; uint8_t v___x_2238_; uint8_t v___x_2239_; lean_object* v___x_2240_; 
v_a_2236_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_a_2236_);
lean_dec_ref_known(v___x_2235_, 1);
v___x_2237_ = 0;
v___x_2238_ = 1;
v___x_2239_ = 1;
v___x_2240_ = l_Lean_Meta_mkLambdaFVars(v_fvars_2211_, v_a_2236_, v___x_2237_, v_usedLetOnly_2208_, v___x_2237_, v___x_2238_, v___x_2239_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
lean_dec_ref(v_fvars_2211_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_object* v_a_2241_; lean_object* v___x_2242_; 
v_a_2241_ = lean_ctor_get(v___x_2240_, 0);
lean_inc(v_a_2241_);
lean_dec_ref_known(v___x_2240_, 1);
v___x_2242_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(v_pre_2206_, v_post_2207_, v_usedLetOnly_2208_, v_skipConstInApp_2209_, v_skipInstances_2210_, v_a_2241_, v_a_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
return v___x_2242_;
}
else
{
lean_dec_ref(v_post_2207_);
lean_dec_ref(v_pre_2206_);
return v___x_2240_;
}
}
else
{
lean_dec_ref(v_fvars_2211_);
lean_dec_ref(v_post_2207_);
lean_dec_ref(v_pre_2206_);
return v___x_2235_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8___lam__0(lean_object* v_fvars_2243_, lean_object* v_pre_2244_, lean_object* v_post_2245_, uint8_t v_usedLetOnly_2246_, uint8_t v_skipConstInApp_2247_, uint8_t v_skipInstances_2248_, lean_object* v_body_2249_, lean_object* v_x_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_){
_start:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2259_ = lean_array_push(v_fvars_2243_, v_x_2250_);
v___x_2260_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8(v_pre_2244_, v_post_2245_, v_usedLetOnly_2246_, v_skipConstInApp_2247_, v_skipInstances_2248_, v___x_2259_, v_body_2249_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8___lam__0___boxed(lean_object* v_fvars_2261_, lean_object* v_pre_2262_, lean_object* v_post_2263_, lean_object* v_usedLetOnly_2264_, lean_object* v_skipConstInApp_2265_, lean_object* v_skipInstances_2266_, lean_object* v_body_2267_, lean_object* v_x_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
uint8_t v_usedLetOnly_boxed_2277_; uint8_t v_skipConstInApp_boxed_2278_; uint8_t v_skipInstances_boxed_2279_; lean_object* v_res_2280_; 
v_usedLetOnly_boxed_2277_ = lean_unbox(v_usedLetOnly_2264_);
v_skipConstInApp_boxed_2278_ = lean_unbox(v_skipConstInApp_2265_);
v_skipInstances_boxed_2279_ = lean_unbox(v_skipInstances_2266_);
v_res_2280_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8___lam__0(v_fvars_2261_, v_pre_2262_, v_post_2263_, v_usedLetOnly_boxed_2277_, v_skipConstInApp_boxed_2278_, v_skipInstances_boxed_2279_, v_body_2267_, v_x_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec(v___y_2273_);
lean_dec_ref(v___y_2272_);
lean_dec(v___y_2271_);
lean_dec_ref(v___y_2270_);
lean_dec(v___y_2269_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8(lean_object* v_pre_2281_, lean_object* v_post_2282_, uint8_t v_usedLetOnly_2283_, uint8_t v_skipConstInApp_2284_, uint8_t v_skipInstances_2285_, lean_object* v_fvars_2286_, lean_object* v_e_2287_, lean_object* v_a_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
if (lean_obj_tag(v_e_2287_) == 8)
{
lean_object* v_declName_2296_; lean_object* v_type_2297_; lean_object* v_value_2298_; lean_object* v_body_2299_; uint8_t v_nondep_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___f_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
v_declName_2296_ = lean_ctor_get(v_e_2287_, 0);
lean_inc(v_declName_2296_);
v_type_2297_ = lean_ctor_get(v_e_2287_, 1);
lean_inc_ref(v_type_2297_);
v_value_2298_ = lean_ctor_get(v_e_2287_, 2);
lean_inc_ref(v_value_2298_);
v_body_2299_ = lean_ctor_get(v_e_2287_, 3);
lean_inc_ref(v_body_2299_);
v_nondep_2300_ = lean_ctor_get_uint8(v_e_2287_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2287_, 4);
v___x_2301_ = lean_box(v_usedLetOnly_2283_);
v___x_2302_ = lean_box(v_skipConstInApp_2284_);
v___x_2303_ = lean_box(v_skipInstances_2285_);
lean_inc_ref_n(v_post_2282_, 2);
lean_inc_ref_n(v_pre_2281_, 2);
lean_inc_ref(v_fvars_2286_);
v___f_2304_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8___lam__0___boxed), 16, 7);
lean_closure_set(v___f_2304_, 0, v_fvars_2286_);
lean_closure_set(v___f_2304_, 1, v_pre_2281_);
lean_closure_set(v___f_2304_, 2, v_post_2282_);
lean_closure_set(v___f_2304_, 3, v___x_2301_);
lean_closure_set(v___f_2304_, 4, v___x_2302_);
lean_closure_set(v___f_2304_, 5, v___x_2303_);
lean_closure_set(v___f_2304_, 6, v_body_2299_);
v___x_2305_ = lean_expr_instantiate_rev(v_type_2297_, v_fvars_2286_);
lean_dec_ref(v_type_2297_);
v___x_2306_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2281_, v_post_2282_, v_usedLetOnly_2283_, v_skipConstInApp_2284_, v_skipInstances_2285_, v___x_2305_, v_a_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
if (lean_obj_tag(v___x_2306_) == 0)
{
lean_object* v_a_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v_a_2307_ = lean_ctor_get(v___x_2306_, 0);
lean_inc(v_a_2307_);
lean_dec_ref_known(v___x_2306_, 1);
v___x_2308_ = lean_expr_instantiate_rev(v_value_2298_, v_fvars_2286_);
lean_dec_ref(v_fvars_2286_);
lean_dec_ref(v_value_2298_);
v___x_2309_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2281_, v_post_2282_, v_usedLetOnly_2283_, v_skipConstInApp_2284_, v_skipInstances_2285_, v___x_2308_, v_a_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; uint8_t v___x_2311_; lean_object* v___x_2312_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_a_2310_);
lean_dec_ref_known(v___x_2309_, 1);
v___x_2311_ = 0;
v___x_2312_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11___redArg(v_declName_2296_, v_a_2307_, v_a_2310_, v___f_2304_, v_nondep_2300_, v___x_2311_, v_a_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
return v___x_2312_;
}
else
{
lean_dec(v_a_2307_);
lean_dec_ref(v___f_2304_);
lean_dec(v_declName_2296_);
return v___x_2309_;
}
}
else
{
lean_dec_ref(v___f_2304_);
lean_dec_ref(v_value_2298_);
lean_dec(v_declName_2296_);
lean_dec_ref(v_fvars_2286_);
lean_dec_ref(v_post_2282_);
lean_dec_ref(v_pre_2281_);
return v___x_2306_;
}
}
else
{
lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2313_ = lean_expr_instantiate_rev(v_e_2287_, v_fvars_2286_);
lean_dec_ref(v_e_2287_);
lean_inc_ref(v_post_2282_);
lean_inc_ref(v_pre_2281_);
v___x_2314_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2281_, v_post_2282_, v_usedLetOnly_2283_, v_skipConstInApp_2284_, v_skipInstances_2285_, v___x_2313_, v_a_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v_a_2315_; uint8_t v___x_2316_; uint8_t v___x_2317_; lean_object* v___x_2318_; 
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_a_2315_);
lean_dec_ref_known(v___x_2314_, 1);
v___x_2316_ = 0;
v___x_2317_ = 1;
v___x_2318_ = l_Lean_Meta_mkLetFVars(v_fvars_2286_, v_a_2315_, v_usedLetOnly_2283_, v___x_2316_, v___x_2317_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
lean_dec_ref(v_fvars_2286_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2320_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
lean_inc(v_a_2319_);
lean_dec_ref_known(v___x_2318_, 1);
v___x_2320_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(v_pre_2281_, v_post_2282_, v_usedLetOnly_2283_, v_skipConstInApp_2284_, v_skipInstances_2285_, v_a_2319_, v_a_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
return v___x_2320_;
}
else
{
lean_dec_ref(v_post_2282_);
lean_dec_ref(v_pre_2281_);
return v___x_2318_;
}
}
else
{
lean_dec_ref(v_fvars_2286_);
lean_dec_ref(v_post_2282_);
lean_dec_ref(v_pre_2281_);
return v___x_2314_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2321_; lean_object* v_dummy_2322_; 
v___x_2321_ = lean_box(0);
v_dummy_2322_ = l_Lean_Expr_sort___override(v___x_2321_);
return v_dummy_2322_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__2(lean_object* v_pre_2323_, lean_object* v_post_2324_, uint8_t v_usedLetOnly_2325_, uint8_t v_skipConstInApp_2326_, uint8_t v_skipInstances_2327_, size_t v_sz_2328_, size_t v_i_2329_, lean_object* v_bs_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
uint8_t v___x_2339_; 
v___x_2339_ = lean_usize_dec_lt(v_i_2329_, v_sz_2328_);
if (v___x_2339_ == 0)
{
lean_object* v___x_2340_; 
lean_dec_ref(v_post_2324_);
lean_dec_ref(v_pre_2323_);
v___x_2340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2340_, 0, v_bs_2330_);
return v___x_2340_;
}
else
{
lean_object* v_v_2341_; lean_object* v___x_2342_; lean_object* v_bs_x27_2343_; lean_object* v___x_2344_; 
v_v_2341_ = lean_array_uget(v_bs_2330_, v_i_2329_);
v___x_2342_ = lean_unsigned_to_nat(0u);
v_bs_x27_2343_ = lean_array_uset(v_bs_2330_, v_i_2329_, v___x_2342_);
lean_inc_ref(v_post_2324_);
lean_inc_ref(v_pre_2323_);
v___x_2344_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2323_, v_post_2324_, v_usedLetOnly_2325_, v_skipConstInApp_2326_, v_skipInstances_2327_, v_v_2341_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_);
if (lean_obj_tag(v___x_2344_) == 0)
{
lean_object* v_a_2345_; size_t v___x_2346_; size_t v___x_2347_; lean_object* v___x_2348_; 
v_a_2345_ = lean_ctor_get(v___x_2344_, 0);
lean_inc(v_a_2345_);
lean_dec_ref_known(v___x_2344_, 1);
v___x_2346_ = ((size_t)1ULL);
v___x_2347_ = lean_usize_add(v_i_2329_, v___x_2346_);
v___x_2348_ = lean_array_uset(v_bs_x27_2343_, v_i_2329_, v_a_2345_);
v_i_2329_ = v___x_2347_;
v_bs_2330_ = v___x_2348_;
goto _start;
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
lean_dec_ref(v_bs_x27_2343_);
lean_dec_ref(v_post_2324_);
lean_dec_ref(v_pre_2323_);
v_a_2350_ = lean_ctor_get(v___x_2344_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2344_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2344_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__0(lean_object* v_pre_2358_, lean_object* v_post_2359_, uint8_t v_usedLetOnly_2360_, uint8_t v_skipConstInApp_2361_, uint8_t v_skipInstances_2362_, lean_object* v___x_2363_, lean_object* v___y_2364_, lean_object* v_b_2365_, lean_object* v_a_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
lean_object* v___x_2374_; 
v___x_2374_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2358_, v_post_2359_, v_usedLetOnly_2360_, v_skipConstInApp_2361_, v_skipInstances_2362_, v___x_2363_, v___y_2364_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2384_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2377_ = v___x_2374_;
v_isShared_2378_ = v_isSharedCheck_2384_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_a_2375_);
lean_dec(v___x_2374_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2384_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2382_; 
v___x_2379_ = lean_array_fset(v_b_2365_, v_a_2366_, v_a_2375_);
v___x_2380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2379_);
if (v_isShared_2378_ == 0)
{
lean_ctor_set(v___x_2377_, 0, v___x_2380_);
v___x_2382_ = v___x_2377_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v___x_2380_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
}
else
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2392_; 
lean_dec_ref(v_b_2365_);
v_a_2385_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2387_ = v___x_2374_;
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2374_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
if (v_isShared_2388_ == 0)
{
v___x_2390_ = v___x_2387_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_a_2385_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v_pre_2393_, lean_object* v_post_2394_, lean_object* v_usedLetOnly_2395_, lean_object* v_skipConstInApp_2396_, lean_object* v_skipInstances_2397_, lean_object* v___x_2398_, lean_object* v___y_2399_, lean_object* v_b_2400_, lean_object* v_a_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
uint8_t v_usedLetOnly_boxed_2409_; uint8_t v_skipConstInApp_boxed_2410_; uint8_t v_skipInstances_boxed_2411_; lean_object* v_res_2412_; 
v_usedLetOnly_boxed_2409_ = lean_unbox(v_usedLetOnly_2395_);
v_skipConstInApp_boxed_2410_ = lean_unbox(v_skipConstInApp_2396_);
v_skipInstances_boxed_2411_ = lean_unbox(v_skipInstances_2397_);
v_res_2412_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__0(v_pre_2393_, v_post_2394_, v_usedLetOnly_boxed_2409_, v_skipConstInApp_boxed_2410_, v_skipInstances_boxed_2411_, v___x_2398_, v___y_2399_, v_b_2400_, v_a_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v___y_2405_);
lean_dec_ref(v___y_2404_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec(v_a_2401_);
lean_dec(v___y_2399_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg(lean_object* v_upperBound_2413_, lean_object* v___x_2414_, lean_object* v_pre_2415_, lean_object* v_post_2416_, uint8_t v_usedLetOnly_2417_, uint8_t v_skipConstInApp_2418_, uint8_t v_skipInstances_2419_, lean_object* v_a_2420_, lean_object* v_b_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v___y_2431_; uint8_t v___x_2454_; 
v___x_2454_ = lean_nat_dec_lt(v_a_2420_, v_upperBound_2413_);
if (v___x_2454_ == 0)
{
lean_object* v___x_2455_; 
lean_dec(v_a_2420_);
lean_dec_ref(v_post_2416_);
lean_dec_ref(v_pre_2415_);
v___x_2455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2455_, 0, v_b_2421_);
return v___x_2455_;
}
else
{
lean_object* v___x_2456_; lean_object* v___x_2457_; uint8_t v___x_2458_; 
v___x_2456_ = lean_array_fget_borrowed(v_b_2421_, v_a_2420_);
v___x_2457_ = lean_array_get_size(v___x_2414_);
v___x_2458_ = lean_nat_dec_lt(v_a_2420_, v___x_2457_);
if (v___x_2458_ == 0)
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___f_2462_; 
lean_inc(v___x_2456_);
v___x_2459_ = lean_box(v_usedLetOnly_2417_);
v___x_2460_ = lean_box(v_skipConstInApp_2418_);
v___x_2461_ = lean_box(v_skipInstances_2419_);
lean_inc(v_a_2420_);
lean_inc(v___y_2422_);
lean_inc_ref(v_post_2416_);
lean_inc_ref(v_pre_2415_);
v___f_2462_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_2462_, 0, v_pre_2415_);
lean_closure_set(v___f_2462_, 1, v_post_2416_);
lean_closure_set(v___f_2462_, 2, v___x_2459_);
lean_closure_set(v___f_2462_, 3, v___x_2460_);
lean_closure_set(v___f_2462_, 4, v___x_2461_);
lean_closure_set(v___f_2462_, 5, v___x_2456_);
lean_closure_set(v___f_2462_, 6, v___y_2422_);
lean_closure_set(v___f_2462_, 7, v_b_2421_);
lean_closure_set(v___f_2462_, 8, v_a_2420_);
v___y_2431_ = v___f_2462_;
goto v___jp_2430_;
}
else
{
lean_object* v___x_2463_; uint8_t v_isInstance_2464_; 
v___x_2463_ = lean_array_fget_borrowed(v___x_2414_, v_a_2420_);
v_isInstance_2464_ = lean_ctor_get_uint8(v___x_2463_, sizeof(void*)*1 + 4);
if (v_isInstance_2464_ == 0)
{
lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___f_2468_; 
lean_inc(v___x_2456_);
v___x_2465_ = lean_box(v_usedLetOnly_2417_);
v___x_2466_ = lean_box(v_skipConstInApp_2418_);
v___x_2467_ = lean_box(v_skipInstances_2419_);
lean_inc(v_a_2420_);
lean_inc(v___y_2422_);
lean_inc_ref(v_post_2416_);
lean_inc_ref(v_pre_2415_);
v___f_2468_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_2468_, 0, v_pre_2415_);
lean_closure_set(v___f_2468_, 1, v_post_2416_);
lean_closure_set(v___f_2468_, 2, v___x_2465_);
lean_closure_set(v___f_2468_, 3, v___x_2466_);
lean_closure_set(v___f_2468_, 4, v___x_2467_);
lean_closure_set(v___f_2468_, 5, v___x_2456_);
lean_closure_set(v___f_2468_, 6, v___y_2422_);
lean_closure_set(v___f_2468_, 7, v_b_2421_);
lean_closure_set(v___f_2468_, 8, v_a_2420_);
v___y_2431_ = v___f_2468_;
goto v___jp_2430_;
}
else
{
lean_object* v___x_2469_; lean_object* v___f_2470_; 
v___x_2469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2469_, 0, v_b_2421_);
v___f_2470_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___lam__2___boxed), 8, 1);
lean_closure_set(v___f_2470_, 0, v___x_2469_);
v___y_2431_ = v___f_2470_;
goto v___jp_2430_;
}
}
}
v___jp_2430_:
{
lean_object* v___x_2432_; 
lean_inc(v___y_2428_);
lean_inc_ref(v___y_2427_);
lean_inc(v___y_2426_);
lean_inc_ref(v___y_2425_);
lean_inc(v___y_2424_);
lean_inc_ref(v___y_2423_);
v___x_2432_ = lean_apply_7(v___y_2431_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, lean_box(0));
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v_a_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2445_; 
v_a_2433_ = lean_ctor_get(v___x_2432_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2435_ = v___x_2432_;
v_isShared_2436_ = v_isSharedCheck_2445_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_a_2433_);
lean_dec(v___x_2432_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2445_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
if (lean_obj_tag(v_a_2433_) == 0)
{
lean_object* v_a_2437_; lean_object* v___x_2439_; 
lean_dec(v_a_2420_);
lean_dec_ref(v_post_2416_);
lean_dec_ref(v_pre_2415_);
v_a_2437_ = lean_ctor_get(v_a_2433_, 0);
lean_inc(v_a_2437_);
lean_dec_ref_known(v_a_2433_, 1);
if (v_isShared_2436_ == 0)
{
lean_ctor_set(v___x_2435_, 0, v_a_2437_);
v___x_2439_ = v___x_2435_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_a_2437_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
lean_del_object(v___x_2435_);
v_a_2441_ = lean_ctor_get(v_a_2433_, 0);
lean_inc(v_a_2441_);
lean_dec_ref_known(v_a_2433_, 1);
v___x_2442_ = lean_unsigned_to_nat(1u);
v___x_2443_ = lean_nat_add(v_a_2420_, v___x_2442_);
lean_dec(v_a_2420_);
v_a_2420_ = v___x_2443_;
v_b_2421_ = v_a_2441_;
goto _start;
}
}
}
else
{
lean_object* v_a_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2453_; 
lean_dec(v_a_2420_);
lean_dec_ref(v_post_2416_);
lean_dec_ref(v_pre_2415_);
v_a_2446_ = lean_ctor_get(v___x_2432_, 0);
v_isSharedCheck_2453_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2448_ = v___x_2432_;
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_a_2446_);
lean_dec(v___x_2432_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
lean_object* v___x_2451_; 
if (v_isShared_2449_ == 0)
{
v___x_2451_ = v___x_2448_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v_a_2446_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__9(uint8_t v_skipInstances_2471_, lean_object* v_pre_2472_, lean_object* v_post_2473_, uint8_t v_usedLetOnly_2474_, uint8_t v_skipConstInApp_2475_, lean_object* v_x_2476_, lean_object* v_x_2477_, lean_object* v_x_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_){
_start:
{
lean_object* v_f_2488_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___y_2495_; 
if (lean_obj_tag(v_x_2476_) == 5)
{
lean_object* v_fn_2538_; lean_object* v_arg_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v_fn_2538_ = lean_ctor_get(v_x_2476_, 0);
lean_inc_ref(v_fn_2538_);
v_arg_2539_ = lean_ctor_get(v_x_2476_, 1);
lean_inc_ref(v_arg_2539_);
lean_dec_ref_known(v_x_2476_, 2);
v___x_2540_ = lean_array_set(v_x_2477_, v_x_2478_, v_arg_2539_);
v___x_2541_ = lean_unsigned_to_nat(1u);
v___x_2542_ = lean_nat_sub(v_x_2478_, v___x_2541_);
lean_dec(v_x_2478_);
v_x_2476_ = v_fn_2538_;
v_x_2477_ = v___x_2540_;
v_x_2478_ = v___x_2542_;
goto _start;
}
else
{
lean_dec(v_x_2478_);
if (v_skipConstInApp_2475_ == 0)
{
goto v___jp_2535_;
}
else
{
uint8_t v___x_2544_; 
v___x_2544_ = l_Lean_Expr_isConst(v_x_2476_);
if (v___x_2544_ == 0)
{
goto v___jp_2535_;
}
else
{
v_f_2488_ = v_x_2476_;
v___y_2489_ = v___y_2479_;
v___y_2490_ = v___y_2480_;
v___y_2491_ = v___y_2481_;
v___y_2492_ = v___y_2482_;
v___y_2493_ = v___y_2483_;
v___y_2494_ = v___y_2484_;
v___y_2495_ = v___y_2485_;
goto v___jp_2487_;
}
}
}
v___jp_2487_:
{
if (v_skipInstances_2471_ == 0)
{
size_t v_sz_2496_; size_t v___x_2497_; lean_object* v___x_2498_; 
v_sz_2496_ = lean_array_size(v_x_2477_);
v___x_2497_ = ((size_t)0ULL);
lean_inc_ref(v_post_2473_);
lean_inc_ref(v_pre_2472_);
v___x_2498_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__2(v_pre_2472_, v_post_2473_, v_usedLetOnly_2474_, v_skipConstInApp_2475_, v_skipInstances_2471_, v_sz_2496_, v___x_2497_, v_x_2477_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
if (lean_obj_tag(v___x_2498_) == 0)
{
lean_object* v_a_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v_a_2499_ = lean_ctor_get(v___x_2498_, 0);
lean_inc(v_a_2499_);
lean_dec_ref_known(v___x_2498_, 1);
v___x_2500_ = l_Lean_mkAppN(v_f_2488_, v_a_2499_);
lean_dec(v_a_2499_);
v___x_2501_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(v_pre_2472_, v_post_2473_, v_usedLetOnly_2474_, v_skipConstInApp_2475_, v_skipInstances_2471_, v___x_2500_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
return v___x_2501_;
}
else
{
lean_object* v_a_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2509_; 
lean_dec_ref(v_f_2488_);
lean_dec_ref(v_post_2473_);
lean_dec_ref(v_pre_2472_);
v_a_2502_ = lean_ctor_get(v___x_2498_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2498_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2504_ = v___x_2498_;
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_a_2502_);
lean_dec(v___x_2498_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2507_; 
if (v_isShared_2505_ == 0)
{
v___x_2507_ = v___x_2504_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v_a_2502_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
}
}
}
}
else
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2510_ = lean_array_get_size(v_x_2477_);
lean_inc_ref(v_f_2488_);
v___x_2511_ = l_Lean_Meta_getFunInfoNArgs(v_f_2488_, v___x_2510_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; lean_object* v_paramInfo_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2512_);
lean_dec_ref_known(v___x_2511_, 1);
v_paramInfo_2513_ = lean_ctor_get(v_a_2512_, 0);
lean_inc_ref(v_paramInfo_2513_);
lean_dec(v_a_2512_);
v___x_2514_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_2473_);
lean_inc_ref(v_pre_2472_);
v___x_2515_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg(v___x_2510_, v_paramInfo_2513_, v_pre_2472_, v_post_2473_, v_usedLetOnly_2474_, v_skipConstInApp_2475_, v_skipInstances_2471_, v___x_2514_, v_x_2477_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
lean_dec_ref(v_paramInfo_2513_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v_a_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
v_a_2516_ = lean_ctor_get(v___x_2515_, 0);
lean_inc(v_a_2516_);
lean_dec_ref_known(v___x_2515_, 1);
v___x_2517_ = l_Lean_mkAppN(v_f_2488_, v_a_2516_);
lean_dec(v_a_2516_);
v___x_2518_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(v_pre_2472_, v_post_2473_, v_usedLetOnly_2474_, v_skipConstInApp_2475_, v_skipInstances_2471_, v___x_2517_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
return v___x_2518_;
}
else
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2526_; 
lean_dec_ref(v_f_2488_);
lean_dec_ref(v_post_2473_);
lean_dec_ref(v_pre_2472_);
v_a_2519_ = lean_ctor_get(v___x_2515_, 0);
v_isSharedCheck_2526_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2521_ = v___x_2515_;
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2515_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2524_; 
if (v_isShared_2522_ == 0)
{
v___x_2524_ = v___x_2521_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v_a_2519_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
}
else
{
lean_object* v_a_2527_; lean_object* v___x_2529_; uint8_t v_isShared_2530_; uint8_t v_isSharedCheck_2534_; 
lean_dec_ref(v_f_2488_);
lean_dec_ref(v_x_2477_);
lean_dec_ref(v_post_2473_);
lean_dec_ref(v_pre_2472_);
v_a_2527_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2529_ = v___x_2511_;
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
else
{
lean_inc(v_a_2527_);
lean_dec(v___x_2511_);
v___x_2529_ = lean_box(0);
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
v_resetjp_2528_:
{
lean_object* v___x_2532_; 
if (v_isShared_2530_ == 0)
{
v___x_2532_ = v___x_2529_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_a_2527_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
return v___x_2532_;
}
}
}
}
}
v___jp_2535_:
{
lean_object* v___x_2536_; 
lean_inc_ref(v_post_2473_);
lean_inc_ref(v_pre_2472_);
v___x_2536_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2472_, v_post_2473_, v_usedLetOnly_2474_, v_skipConstInApp_2475_, v_skipInstances_2471_, v_x_2476_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_a_2537_; 
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
lean_dec_ref_known(v___x_2536_, 1);
v_f_2488_ = v_a_2537_;
v___y_2489_ = v___y_2479_;
v___y_2490_ = v___y_2480_;
v___y_2491_ = v___y_2481_;
v___y_2492_ = v___y_2482_;
v___y_2493_ = v___y_2483_;
v___y_2494_ = v___y_2484_;
v___y_2495_ = v___y_2485_;
goto v___jp_2487_;
}
else
{
lean_dec_ref(v_x_2477_);
lean_dec_ref(v_post_2473_);
lean_dec_ref(v_pre_2472_);
return v___x_2536_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1(lean_object* v___x_2545_, lean_object* v_pre_2546_, lean_object* v_e_2547_, lean_object* v_post_2548_, uint8_t v_usedLetOnly_2549_, uint8_t v_skipConstInApp_2550_, uint8_t v_skipInstances_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
lean_object* v___x_2560_; 
v___x_2560_ = l_Lean_Core_checkSystem(v___x_2545_, v___y_2557_, v___y_2558_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v___x_2561_; 
lean_dec_ref_known(v___x_2560_, 1);
lean_inc_ref(v_pre_2546_);
lean_inc(v___y_2558_);
lean_inc_ref(v___y_2557_);
lean_inc(v___y_2556_);
lean_inc_ref(v___y_2555_);
lean_inc(v___y_2554_);
lean_inc_ref(v___y_2553_);
lean_inc_ref(v_e_2547_);
v___x_2561_ = lean_apply_8(v_pre_2546_, v_e_2547_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, lean_box(0));
if (lean_obj_tag(v___x_2561_) == 0)
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2610_; 
v_a_2562_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2564_ = v___x_2561_;
v_isShared_2565_ = v_isSharedCheck_2610_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2561_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2610_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___y_2567_; 
switch(lean_obj_tag(v_a_2562_))
{
case 0:
{
lean_object* v_e_2602_; lean_object* v___x_2604_; 
lean_dec_ref(v_post_2548_);
lean_dec_ref(v_e_2547_);
lean_dec_ref(v_pre_2546_);
v_e_2602_ = lean_ctor_get(v_a_2562_, 0);
lean_inc_ref(v_e_2602_);
lean_dec_ref_known(v_a_2562_, 1);
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 0, v_e_2602_);
v___x_2604_ = v___x_2564_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_e_2602_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
case 1:
{
lean_object* v_e_2606_; lean_object* v___x_2607_; 
lean_del_object(v___x_2564_);
lean_dec_ref(v_e_2547_);
v_e_2606_ = lean_ctor_get(v_a_2562_, 0);
lean_inc_ref(v_e_2606_);
lean_dec_ref_known(v_a_2562_, 1);
v___x_2607_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v_skipInstances_2551_, v_e_2606_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2607_;
}
default: 
{
lean_object* v_e_x3f_2608_; 
lean_del_object(v___x_2564_);
v_e_x3f_2608_ = lean_ctor_get(v_a_2562_, 0);
lean_inc(v_e_x3f_2608_);
lean_dec_ref_known(v_a_2562_, 1);
if (lean_obj_tag(v_e_x3f_2608_) == 0)
{
v___y_2567_ = v_e_2547_;
goto v___jp_2566_;
}
else
{
lean_object* v_val_2609_; 
lean_dec_ref(v_e_2547_);
v_val_2609_ = lean_ctor_get(v_e_x3f_2608_, 0);
lean_inc(v_val_2609_);
lean_dec_ref_known(v_e_x3f_2608_, 1);
v___y_2567_ = v_val_2609_;
goto v___jp_2566_;
}
}
}
v___jp_2566_:
{
switch(lean_obj_tag(v___y_2567_))
{
case 7:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2568_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__0));
v___x_2569_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6(v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v_skipInstances_2551_, v___x_2568_, v___y_2567_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2569_;
}
case 6:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2570_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__0));
v___x_2571_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7(v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v_skipInstances_2551_, v___x_2570_, v___y_2567_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2571_;
}
case 8:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2572_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__0));
v___x_2573_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8(v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v_skipInstances_2551_, v___x_2572_, v___y_2567_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2573_;
}
case 5:
{
lean_object* v_dummy_2574_; lean_object* v_nargs_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v_dummy_2574_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___closed__1);
v_nargs_2575_ = l_Lean_Expr_getAppNumArgs(v___y_2567_);
lean_inc(v_nargs_2575_);
v___x_2576_ = lean_mk_array(v_nargs_2575_, v_dummy_2574_);
v___x_2577_ = lean_unsigned_to_nat(1u);
v___x_2578_ = lean_nat_sub(v_nargs_2575_, v___x_2577_);
lean_dec(v_nargs_2575_);
v___x_2579_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__9(v_skipInstances_2551_, v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v___y_2567_, v___x_2576_, v___x_2578_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2579_;
}
case 10:
{
lean_object* v_data_2580_; lean_object* v_expr_2581_; lean_object* v___x_2582_; 
v_data_2580_ = lean_ctor_get(v___y_2567_, 0);
v_expr_2581_ = lean_ctor_get(v___y_2567_, 1);
lean_inc_ref(v_expr_2581_);
lean_inc_ref(v_post_2548_);
lean_inc_ref(v_pre_2546_);
v___x_2582_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v_skipInstances_2551_, v_expr_2581_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; size_t v___x_2584_; size_t v___x_2585_; uint8_t v___x_2586_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2583_);
lean_dec_ref_known(v___x_2582_, 1);
v___x_2584_ = lean_ptr_addr(v_expr_2581_);
v___x_2585_ = lean_ptr_addr(v_a_2583_);
v___x_2586_ = lean_usize_dec_eq(v___x_2584_, v___x_2585_);
if (v___x_2586_ == 0)
{
lean_object* v___x_2587_; lean_object* v___x_2588_; 
lean_inc(v_data_2580_);
lean_dec_ref_known(v___y_2567_, 2);
v___x_2587_ = l_Lean_Expr_mdata___override(v_data_2580_, v_a_2583_);
v___x_2588_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v_skipInstances_2551_, v___x_2587_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2588_;
}
else
{
lean_object* v___x_2589_; 
lean_dec(v_a_2583_);
v___x_2589_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v_skipInstances_2551_, v___y_2567_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2589_;
}
}
else
{
lean_dec_ref_known(v___y_2567_, 2);
lean_dec_ref(v_post_2548_);
lean_dec_ref(v_pre_2546_);
return v___x_2582_;
}
}
case 11:
{
lean_object* v_typeName_2590_; lean_object* v_idx_2591_; lean_object* v_struct_2592_; lean_object* v___x_2593_; 
v_typeName_2590_ = lean_ctor_get(v___y_2567_, 0);
v_idx_2591_ = lean_ctor_get(v___y_2567_, 1);
v_struct_2592_ = lean_ctor_get(v___y_2567_, 2);
lean_inc_ref(v_struct_2592_);
lean_inc_ref(v_post_2548_);
lean_inc_ref(v_pre_2546_);
v___x_2593_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v_skipInstances_2551_, v_struct_2592_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; size_t v___x_2595_; size_t v___x_2596_; uint8_t v___x_2597_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2593_, 1);
v___x_2595_ = lean_ptr_addr(v_struct_2592_);
v___x_2596_ = lean_ptr_addr(v_a_2594_);
v___x_2597_ = lean_usize_dec_eq(v___x_2595_, v___x_2596_);
if (v___x_2597_ == 0)
{
lean_object* v___x_2598_; lean_object* v___x_2599_; 
lean_inc(v_idx_2591_);
lean_inc(v_typeName_2590_);
lean_dec_ref_known(v___y_2567_, 3);
v___x_2598_ = l_Lean_Expr_proj___override(v_typeName_2590_, v_idx_2591_, v_a_2594_);
v___x_2599_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v_skipInstances_2551_, v___x_2598_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2599_;
}
else
{
lean_object* v___x_2600_; 
lean_dec(v_a_2594_);
v___x_2600_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v_skipInstances_2551_, v___y_2567_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2600_;
}
}
else
{
lean_dec_ref_known(v___y_2567_, 3);
lean_dec_ref(v_post_2548_);
lean_dec_ref(v_pre_2546_);
return v___x_2593_;
}
}
default: 
{
lean_object* v___x_2601_; 
v___x_2601_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(v_pre_2546_, v_post_2548_, v_usedLetOnly_2549_, v_skipConstInApp_2550_, v_skipInstances_2551_, v___y_2567_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2601_;
}
}
}
}
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec_ref(v_post_2548_);
lean_dec_ref(v_e_2547_);
lean_dec_ref(v_pre_2546_);
v_a_2611_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2561_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2561_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
lean_dec_ref(v_post_2548_);
lean_dec_ref(v_e_2547_);
lean_dec_ref(v_pre_2546_);
v_a_2619_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2560_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2560_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___boxed(lean_object* v___x_2627_, lean_object* v_pre_2628_, lean_object* v_e_2629_, lean_object* v_post_2630_, lean_object* v_usedLetOnly_2631_, lean_object* v_skipConstInApp_2632_, lean_object* v_skipInstances_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
uint8_t v_usedLetOnly_boxed_2642_; uint8_t v_skipConstInApp_boxed_2643_; uint8_t v_skipInstances_boxed_2644_; lean_object* v_res_2645_; 
v_usedLetOnly_boxed_2642_ = lean_unbox(v_usedLetOnly_2631_);
v_skipConstInApp_boxed_2643_ = lean_unbox(v_skipConstInApp_2632_);
v_skipInstances_boxed_2644_ = lean_unbox(v_skipInstances_2633_);
v_res_2645_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1(v___x_2627_, v_pre_2628_, v_e_2629_, v_post_2630_, v_usedLetOnly_boxed_2642_, v_skipConstInApp_boxed_2643_, v_skipInstances_boxed_2644_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
lean_dec(v___y_2638_);
lean_dec_ref(v___y_2637_);
lean_dec(v___y_2636_);
lean_dec_ref(v___y_2635_);
lean_dec(v___y_2634_);
return v_res_2645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(lean_object* v_pre_2646_, lean_object* v_post_2647_, uint8_t v_usedLetOnly_2648_, uint8_t v_skipConstInApp_2649_, uint8_t v_skipInstances_2650_, lean_object* v_e_2651_, lean_object* v_a_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; 
lean_inc(v_a_2652_);
v___x_2660_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2660_, 0, lean_box(0));
lean_closure_set(v___x_2660_, 1, lean_box(0));
lean_closure_set(v___x_2660_, 2, v_a_2652_);
v___x_2661_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__0(lean_box(0), v___x_2660_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_);
if (lean_obj_tag(v___x_2661_) == 0)
{
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2696_; 
v_a_2662_ = lean_ctor_get(v___x_2661_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2664_ = v___x_2661_;
v_isShared_2665_ = v_isSharedCheck_2696_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v___x_2661_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2696_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2666_; 
v___x_2666_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5___redArg(v_a_2662_, v_e_2651_);
lean_dec(v_a_2662_);
if (lean_obj_tag(v___x_2666_) == 0)
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___f_2671_; lean_object* v___x_2672_; 
lean_del_object(v___x_2664_);
v___x_2667_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___closed__0));
v___x_2668_ = lean_box(v_usedLetOnly_2648_);
v___x_2669_ = lean_box(v_skipConstInApp_2649_);
v___x_2670_ = lean_box(v_skipInstances_2650_);
lean_inc_ref(v_e_2651_);
v___f_2671_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__1___boxed), 15, 7);
lean_closure_set(v___f_2671_, 0, v___x_2667_);
lean_closure_set(v___f_2671_, 1, v_pre_2646_);
lean_closure_set(v___f_2671_, 2, v_e_2651_);
lean_closure_set(v___f_2671_, 3, v_post_2647_);
lean_closure_set(v___f_2671_, 4, v___x_2668_);
lean_closure_set(v___f_2671_, 5, v___x_2669_);
lean_closure_set(v___f_2671_, 6, v___x_2670_);
v___x_2672_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10___redArg(v___f_2671_, v_a_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_);
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v_a_2673_; lean_object* v___f_2674_; lean_object* v___x_2675_; 
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
lean_inc_n(v_a_2673_, 2);
lean_dec_ref_known(v___x_2672_, 1);
lean_inc(v_a_2652_);
v___f_2674_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2674_, 0, v_a_2652_);
lean_closure_set(v___f_2674_, 1, v_e_2651_);
lean_closure_set(v___f_2674_, 2, v_a_2673_);
v___x_2675_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___lam__0(lean_box(0), v___f_2674_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_);
if (lean_obj_tag(v___x_2675_) == 0)
{
lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2682_; 
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2682_ == 0)
{
lean_object* v_unused_2683_; 
v_unused_2683_ = lean_ctor_get(v___x_2675_, 0);
lean_dec(v_unused_2683_);
v___x_2677_ = v___x_2675_;
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
else
{
lean_dec(v___x_2675_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2680_; 
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v_a_2673_);
v___x_2680_ = v___x_2677_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_a_2673_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
return v___x_2680_;
}
}
}
else
{
lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2691_; 
lean_dec(v_a_2673_);
v_a_2684_ = lean_ctor_get(v___x_2675_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2686_ = v___x_2675_;
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v___x_2675_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2689_; 
if (v_isShared_2687_ == 0)
{
v___x_2689_ = v___x_2686_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v_a_2684_);
v___x_2689_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
return v___x_2689_;
}
}
}
}
else
{
lean_dec_ref(v_e_2651_);
return v___x_2672_;
}
}
else
{
lean_object* v_val_2692_; lean_object* v___x_2694_; 
lean_dec_ref(v_e_2651_);
lean_dec_ref(v_post_2647_);
lean_dec_ref(v_pre_2646_);
v_val_2692_ = lean_ctor_get(v___x_2666_, 0);
lean_inc(v_val_2692_);
lean_dec_ref_known(v___x_2666_, 1);
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 0, v_val_2692_);
v___x_2694_ = v___x_2664_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_val_2692_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
else
{
lean_object* v_a_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2704_; 
lean_dec_ref(v_e_2651_);
lean_dec_ref(v_post_2647_);
lean_dec_ref(v_pre_2646_);
v_a_2697_ = lean_ctor_get(v___x_2661_, 0);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2699_ = v___x_2661_;
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_a_2697_);
lean_dec(v___x_2661_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2702_; 
if (v_isShared_2700_ == 0)
{
v___x_2702_ = v___x_2699_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v_a_2697_);
v___x_2702_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
return v___x_2702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6(lean_object* v_pre_2705_, lean_object* v_post_2706_, uint8_t v_usedLetOnly_2707_, uint8_t v_skipConstInApp_2708_, uint8_t v_skipInstances_2709_, lean_object* v_fvars_2710_, lean_object* v_e_2711_, lean_object* v_a_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_){
_start:
{
if (lean_obj_tag(v_e_2711_) == 7)
{
lean_object* v_binderName_2720_; lean_object* v_binderType_2721_; lean_object* v_body_2722_; uint8_t v_binderInfo_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___f_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v_binderName_2720_ = lean_ctor_get(v_e_2711_, 0);
lean_inc(v_binderName_2720_);
v_binderType_2721_ = lean_ctor_get(v_e_2711_, 1);
lean_inc_ref(v_binderType_2721_);
v_body_2722_ = lean_ctor_get(v_e_2711_, 2);
lean_inc_ref(v_body_2722_);
v_binderInfo_2723_ = lean_ctor_get_uint8(v_e_2711_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2711_, 3);
v___x_2724_ = lean_box(v_usedLetOnly_2707_);
v___x_2725_ = lean_box(v_skipConstInApp_2708_);
v___x_2726_ = lean_box(v_skipInstances_2709_);
lean_inc_ref(v_post_2706_);
lean_inc_ref(v_pre_2705_);
lean_inc_ref(v_fvars_2710_);
v___f_2727_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6___lam__0___boxed), 16, 7);
lean_closure_set(v___f_2727_, 0, v_fvars_2710_);
lean_closure_set(v___f_2727_, 1, v_pre_2705_);
lean_closure_set(v___f_2727_, 2, v_post_2706_);
lean_closure_set(v___f_2727_, 3, v___x_2724_);
lean_closure_set(v___f_2727_, 4, v___x_2725_);
lean_closure_set(v___f_2727_, 5, v___x_2726_);
lean_closure_set(v___f_2727_, 6, v_body_2722_);
v___x_2728_ = lean_expr_instantiate_rev(v_binderType_2721_, v_fvars_2710_);
lean_dec_ref(v_fvars_2710_);
lean_dec_ref(v_binderType_2721_);
v___x_2729_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2705_, v_post_2706_, v_usedLetOnly_2707_, v_skipConstInApp_2708_, v_skipInstances_2709_, v___x_2728_, v_a_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2729_) == 0)
{
lean_object* v_a_2730_; uint8_t v___x_2731_; lean_object* v___x_2732_; 
v_a_2730_ = lean_ctor_get(v___x_2729_, 0);
lean_inc(v_a_2730_);
lean_dec_ref_known(v___x_2729_, 1);
v___x_2731_ = 0;
v___x_2732_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_2720_, v_binderInfo_2723_, v_a_2730_, v___f_2727_, v___x_2731_, v_a_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
return v___x_2732_;
}
else
{
lean_dec_ref(v___f_2727_);
lean_dec(v_binderName_2720_);
return v___x_2729_;
}
}
else
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2733_ = lean_expr_instantiate_rev(v_e_2711_, v_fvars_2710_);
lean_dec_ref(v_e_2711_);
lean_inc_ref(v_post_2706_);
lean_inc_ref(v_pre_2705_);
v___x_2734_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2705_, v_post_2706_, v_usedLetOnly_2707_, v_skipConstInApp_2708_, v_skipInstances_2709_, v___x_2733_, v_a_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; uint8_t v___x_2736_; uint8_t v___x_2737_; uint8_t v___x_2738_; lean_object* v___x_2739_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref_known(v___x_2734_, 1);
v___x_2736_ = 0;
v___x_2737_ = 1;
v___x_2738_ = 1;
v___x_2739_ = l_Lean_Meta_mkForallFVars(v_fvars_2710_, v_a_2735_, v___x_2736_, v_usedLetOnly_2707_, v___x_2737_, v___x_2738_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
lean_dec_ref(v_fvars_2710_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; lean_object* v___x_2741_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref_known(v___x_2739_, 1);
v___x_2741_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(v_pre_2705_, v_post_2706_, v_usedLetOnly_2707_, v_skipConstInApp_2708_, v_skipInstances_2709_, v_a_2740_, v_a_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
return v___x_2741_;
}
else
{
lean_dec_ref(v_post_2706_);
lean_dec_ref(v_pre_2705_);
return v___x_2739_;
}
}
else
{
lean_dec_ref(v_fvars_2710_);
lean_dec_ref(v_post_2706_);
lean_dec_ref(v_pre_2705_);
return v___x_2734_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6___lam__0(lean_object* v_fvars_2742_, lean_object* v_pre_2743_, lean_object* v_post_2744_, uint8_t v_usedLetOnly_2745_, uint8_t v_skipConstInApp_2746_, uint8_t v_skipInstances_2747_, lean_object* v_body_2748_, lean_object* v_x_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_){
_start:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2758_ = lean_array_push(v_fvars_2742_, v_x_2749_);
v___x_2759_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6(v_pre_2743_, v_post_2744_, v_usedLetOnly_2745_, v_skipConstInApp_2746_, v_skipInstances_2747_, v___x_2758_, v_body_2748_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_2760_, lean_object* v_post_2761_, lean_object* v_usedLetOnly_2762_, lean_object* v_skipConstInApp_2763_, lean_object* v_skipInstances_2764_, lean_object* v_e_2765_, lean_object* v_a_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_){
_start:
{
uint8_t v_usedLetOnly_boxed_2774_; uint8_t v_skipConstInApp_boxed_2775_; uint8_t v_skipInstances_boxed_2776_; lean_object* v_res_2777_; 
v_usedLetOnly_boxed_2774_ = lean_unbox(v_usedLetOnly_2762_);
v_skipConstInApp_boxed_2775_ = lean_unbox(v_skipConstInApp_2763_);
v_skipInstances_boxed_2776_ = lean_unbox(v_skipInstances_2764_);
v_res_2777_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__3(v_pre_2760_, v_post_2761_, v_usedLetOnly_boxed_2774_, v_skipConstInApp_boxed_2775_, v_skipInstances_boxed_2776_, v_e_2765_, v_a_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2771_);
lean_dec(v___y_2770_);
lean_dec_ref(v___y_2769_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v_a_2766_);
return v_res_2777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_2778_, lean_object* v_post_2779_, lean_object* v_usedLetOnly_2780_, lean_object* v_skipConstInApp_2781_, lean_object* v_skipInstances_2782_, lean_object* v_sz_2783_, lean_object* v_i_2784_, lean_object* v_bs_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_){
_start:
{
uint8_t v_usedLetOnly_boxed_2794_; uint8_t v_skipConstInApp_boxed_2795_; uint8_t v_skipInstances_boxed_2796_; size_t v_sz_boxed_2797_; size_t v_i_boxed_2798_; lean_object* v_res_2799_; 
v_usedLetOnly_boxed_2794_ = lean_unbox(v_usedLetOnly_2780_);
v_skipConstInApp_boxed_2795_ = lean_unbox(v_skipConstInApp_2781_);
v_skipInstances_boxed_2796_ = lean_unbox(v_skipInstances_2782_);
v_sz_boxed_2797_ = lean_unbox_usize(v_sz_2783_);
lean_dec(v_sz_2783_);
v_i_boxed_2798_ = lean_unbox_usize(v_i_2784_);
lean_dec(v_i_2784_);
v_res_2799_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__2(v_pre_2778_, v_post_2779_, v_usedLetOnly_boxed_2794_, v_skipConstInApp_boxed_2795_, v_skipInstances_boxed_2796_, v_sz_boxed_2797_, v_i_boxed_2798_, v_bs_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_);
lean_dec(v___y_2792_);
lean_dec_ref(v___y_2791_);
lean_dec(v___y_2790_);
lean_dec_ref(v___y_2789_);
lean_dec(v___y_2788_);
lean_dec_ref(v___y_2787_);
lean_dec(v___y_2786_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1___boxed(lean_object* v_pre_2800_, lean_object* v_post_2801_, lean_object* v_usedLetOnly_2802_, lean_object* v_skipConstInApp_2803_, lean_object* v_skipInstances_2804_, lean_object* v_e_2805_, lean_object* v_a_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
uint8_t v_usedLetOnly_boxed_2814_; uint8_t v_skipConstInApp_boxed_2815_; uint8_t v_skipInstances_boxed_2816_; lean_object* v_res_2817_; 
v_usedLetOnly_boxed_2814_ = lean_unbox(v_usedLetOnly_2802_);
v_skipConstInApp_boxed_2815_ = lean_unbox(v_skipConstInApp_2803_);
v_skipInstances_boxed_2816_ = lean_unbox(v_skipInstances_2804_);
v_res_2817_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2800_, v_post_2801_, v_usedLetOnly_boxed_2814_, v_skipConstInApp_boxed_2815_, v_skipInstances_boxed_2816_, v_e_2805_, v_a_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_);
lean_dec(v___y_2812_);
lean_dec_ref(v___y_2811_);
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec(v_a_2806_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6___boxed(lean_object* v_pre_2818_, lean_object* v_post_2819_, lean_object* v_usedLetOnly_2820_, lean_object* v_skipConstInApp_2821_, lean_object* v_skipInstances_2822_, lean_object* v_fvars_2823_, lean_object* v_e_2824_, lean_object* v_a_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
uint8_t v_usedLetOnly_boxed_2833_; uint8_t v_skipConstInApp_boxed_2834_; uint8_t v_skipInstances_boxed_2835_; lean_object* v_res_2836_; 
v_usedLetOnly_boxed_2833_ = lean_unbox(v_usedLetOnly_2820_);
v_skipConstInApp_boxed_2834_ = lean_unbox(v_skipConstInApp_2821_);
v_skipInstances_boxed_2835_ = lean_unbox(v_skipInstances_2822_);
v_res_2836_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6(v_pre_2818_, v_post_2819_, v_usedLetOnly_boxed_2833_, v_skipConstInApp_boxed_2834_, v_skipInstances_boxed_2835_, v_fvars_2823_, v_e_2824_, v_a_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_);
lean_dec(v___y_2831_);
lean_dec_ref(v___y_2830_);
lean_dec(v___y_2829_);
lean_dec_ref(v___y_2828_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
lean_dec(v_a_2825_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7___boxed(lean_object* v_pre_2837_, lean_object* v_post_2838_, lean_object* v_usedLetOnly_2839_, lean_object* v_skipConstInApp_2840_, lean_object* v_skipInstances_2841_, lean_object* v_fvars_2842_, lean_object* v_e_2843_, lean_object* v_a_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_){
_start:
{
uint8_t v_usedLetOnly_boxed_2852_; uint8_t v_skipConstInApp_boxed_2853_; uint8_t v_skipInstances_boxed_2854_; lean_object* v_res_2855_; 
v_usedLetOnly_boxed_2852_ = lean_unbox(v_usedLetOnly_2839_);
v_skipConstInApp_boxed_2853_ = lean_unbox(v_skipConstInApp_2840_);
v_skipInstances_boxed_2854_ = lean_unbox(v_skipInstances_2841_);
v_res_2855_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__7(v_pre_2837_, v_post_2838_, v_usedLetOnly_boxed_2852_, v_skipConstInApp_boxed_2853_, v_skipInstances_boxed_2854_, v_fvars_2842_, v_e_2843_, v_a_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_);
lean_dec(v___y_2850_);
lean_dec_ref(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec_ref(v___y_2847_);
lean_dec(v___y_2846_);
lean_dec_ref(v___y_2845_);
lean_dec(v_a_2844_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8___boxed(lean_object* v_pre_2856_, lean_object* v_post_2857_, lean_object* v_usedLetOnly_2858_, lean_object* v_skipConstInApp_2859_, lean_object* v_skipInstances_2860_, lean_object* v_fvars_2861_, lean_object* v_e_2862_, lean_object* v_a_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_){
_start:
{
uint8_t v_usedLetOnly_boxed_2871_; uint8_t v_skipConstInApp_boxed_2872_; uint8_t v_skipInstances_boxed_2873_; lean_object* v_res_2874_; 
v_usedLetOnly_boxed_2871_ = lean_unbox(v_usedLetOnly_2858_);
v_skipConstInApp_boxed_2872_ = lean_unbox(v_skipConstInApp_2859_);
v_skipInstances_boxed_2873_ = lean_unbox(v_skipInstances_2860_);
v_res_2874_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8(v_pre_2856_, v_post_2857_, v_usedLetOnly_boxed_2871_, v_skipConstInApp_boxed_2872_, v_skipInstances_boxed_2873_, v_fvars_2861_, v_e_2862_, v_a_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec(v_a_2863_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_2875_ = _args[0];
lean_object* v___x_2876_ = _args[1];
lean_object* v_pre_2877_ = _args[2];
lean_object* v_post_2878_ = _args[3];
lean_object* v_usedLetOnly_2879_ = _args[4];
lean_object* v_skipConstInApp_2880_ = _args[5];
lean_object* v_skipInstances_2881_ = _args[6];
lean_object* v_a_2882_ = _args[7];
lean_object* v_b_2883_ = _args[8];
lean_object* v___y_2884_ = _args[9];
lean_object* v___y_2885_ = _args[10];
lean_object* v___y_2886_ = _args[11];
lean_object* v___y_2887_ = _args[12];
lean_object* v___y_2888_ = _args[13];
lean_object* v___y_2889_ = _args[14];
lean_object* v___y_2890_ = _args[15];
lean_object* v___y_2891_ = _args[16];
_start:
{
uint8_t v_usedLetOnly_boxed_2892_; uint8_t v_skipConstInApp_boxed_2893_; uint8_t v_skipInstances_boxed_2894_; lean_object* v_res_2895_; 
v_usedLetOnly_boxed_2892_ = lean_unbox(v_usedLetOnly_2879_);
v_skipConstInApp_boxed_2893_ = lean_unbox(v_skipConstInApp_2880_);
v_skipInstances_boxed_2894_ = lean_unbox(v_skipInstances_2881_);
v_res_2895_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg(v_upperBound_2875_, v___x_2876_, v_pre_2877_, v_post_2878_, v_usedLetOnly_boxed_2892_, v_skipConstInApp_boxed_2893_, v_skipInstances_boxed_2894_, v_a_2882_, v_b_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
lean_dec(v___y_2888_);
lean_dec_ref(v___y_2887_);
lean_dec(v___y_2886_);
lean_dec_ref(v___y_2885_);
lean_dec(v___y_2884_);
lean_dec_ref(v___x_2876_);
lean_dec(v_upperBound_2875_);
return v_res_2895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__9___boxed(lean_object* v_skipInstances_2896_, lean_object* v_pre_2897_, lean_object* v_post_2898_, lean_object* v_usedLetOnly_2899_, lean_object* v_skipConstInApp_2900_, lean_object* v_x_2901_, lean_object* v_x_2902_, lean_object* v_x_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
uint8_t v_skipInstances_boxed_2912_; uint8_t v_usedLetOnly_boxed_2913_; uint8_t v_skipConstInApp_boxed_2914_; lean_object* v_res_2915_; 
v_skipInstances_boxed_2912_ = lean_unbox(v_skipInstances_2896_);
v_usedLetOnly_boxed_2913_ = lean_unbox(v_usedLetOnly_2899_);
v_skipConstInApp_boxed_2914_ = lean_unbox(v_skipConstInApp_2900_);
v_res_2915_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__9(v_skipInstances_boxed_2912_, v_pre_2897_, v_post_2898_, v_usedLetOnly_boxed_2913_, v_skipConstInApp_boxed_2914_, v_x_2901_, v_x_2902_, v_x_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2907_);
lean_dec(v___y_2906_);
lean_dec_ref(v___y_2905_);
lean_dec(v___y_2904_);
return v_res_2915_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2916_ = lean_box(0);
v___x_2917_ = lean_unsigned_to_nat(16u);
v___x_2918_ = lean_mk_array(v___x_2917_, v___x_2916_);
return v___x_2918_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2919_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__0, &l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__0);
v___x_2920_ = lean_unsigned_to_nat(0u);
v___x_2921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
lean_ctor_set(v___x_2921_, 1, v___x_2919_);
return v___x_2921_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__2(void){
_start:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2922_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__1, &l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__1);
v___x_2923_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2923_, 0, lean_box(0));
lean_closure_set(v___x_2923_, 1, lean_box(0));
lean_closure_set(v___x_2923_, 2, v___x_2922_);
return v___x_2923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1(lean_object* v_input_2924_, lean_object* v_pre_2925_, lean_object* v_post_2926_, uint8_t v_usedLetOnly_2927_, uint8_t v_skipConstInApp_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_){
_start:
{
uint8_t v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v_a_2939_; lean_object* v___x_2940_; 
v___x_2936_ = 0;
v___x_2937_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__2, &l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___closed__2);
v___x_2938_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___lam__0(lean_box(0), v___x_2937_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_);
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
lean_inc(v_a_2939_);
lean_dec_ref(v___x_2938_);
v___x_2940_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1(v_pre_2925_, v_post_2926_, v_usedLetOnly_2927_, v_skipConstInApp_2928_, v___x_2936_, v_input_2924_, v_a_2939_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_);
if (lean_obj_tag(v___x_2940_) == 0)
{
lean_object* v_a_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2950_; 
v_a_2941_ = lean_ctor_get(v___x_2940_, 0);
lean_inc(v_a_2941_);
lean_dec_ref_known(v___x_2940_, 1);
v___x_2942_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2942_, 0, lean_box(0));
lean_closure_set(v___x_2942_, 1, lean_box(0));
lean_closure_set(v___x_2942_, 2, v_a_2939_);
v___x_2943_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___lam__0(lean_box(0), v___x_2942_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2950_ == 0)
{
lean_object* v_unused_2951_; 
v_unused_2951_ = lean_ctor_get(v___x_2943_, 0);
lean_dec(v_unused_2951_);
v___x_2945_ = v___x_2943_;
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
else
{
lean_dec(v___x_2943_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 0, v_a_2941_);
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_a_2941_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
else
{
lean_dec(v_a_2939_);
return v___x_2940_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1___boxed(lean_object* v_input_2952_, lean_object* v_pre_2953_, lean_object* v_post_2954_, lean_object* v_usedLetOnly_2955_, lean_object* v_skipConstInApp_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
uint8_t v_usedLetOnly_boxed_2964_; uint8_t v_skipConstInApp_boxed_2965_; lean_object* v_res_2966_; 
v_usedLetOnly_boxed_2964_ = lean_unbox(v_usedLetOnly_2955_);
v_skipConstInApp_boxed_2965_ = lean_unbox(v_skipConstInApp_2956_);
v_res_2966_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1(v_input_2952_, v_pre_2953_, v_post_2954_, v_usedLetOnly_boxed_2964_, v_skipConstInApp_boxed_2965_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_);
lean_dec(v___y_2962_);
lean_dec_ref(v___y_2961_);
lean_dec(v___y_2960_);
lean_dec_ref(v___y_2959_);
lean_dec(v___y_2958_);
lean_dec_ref(v___y_2957_);
return v_res_2966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts(lean_object* v_stx_2997_, lean_object* v_expectedType_x3f_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_){
_start:
{
lean_object* v___f_3006_; lean_object* v___f_3007_; lean_object* v___y_3009_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v___x_3039_; 
v___f_3006_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__0));
v___f_3007_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__1));
lean_inc(v_expectedType_x3f_2998_);
v___x_3039_ = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(v_expectedType_x3f_2998_, v_a_2999_, v_a_3000_, v_a_3001_, v_a_3002_, v_a_3003_, v_a_3004_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_dec_ref_known(v___x_3039_, 1);
if (lean_obj_tag(v_expectedType_x3f_2998_) == 1)
{
lean_object* v_val_3040_; lean_object* v___x_3041_; lean_object* v_a_3042_; uint8_t v___x_3043_; 
v_val_3040_ = lean_ctor_get(v_expectedType_x3f_2998_, 0);
lean_inc(v_val_3040_);
v___x_3041_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0___redArg(v_val_3040_, v_a_3002_);
v_a_3042_ = lean_ctor_get(v___x_3041_, 0);
lean_inc(v_a_3042_);
lean_dec_ref(v___x_3041_);
v___x_3043_ = l_Lean_Expr_hasExprMVar(v_a_3042_);
lean_dec(v_a_3042_);
if (v___x_3043_ == 0)
{
v___y_3009_ = v_a_2999_;
v___y_3010_ = v_a_3000_;
v___y_3011_ = v_a_3001_;
v___y_3012_ = v_a_3002_;
v___y_3013_ = v_a_3003_;
v___y_3014_ = v_a_3004_;
goto v___jp_3008_;
}
else
{
lean_object* v___x_3044_; 
v___x_3044_ = l_Lean_Elab_Term_tryPostpone(v_a_2999_, v_a_3000_, v_a_3001_, v_a_3002_, v_a_3003_, v_a_3004_);
if (lean_obj_tag(v___x_3044_) == 0)
{
lean_dec_ref_known(v___x_3044_, 1);
v___y_3009_ = v_a_2999_;
v___y_3010_ = v_a_3000_;
v___y_3011_ = v_a_3001_;
v___y_3012_ = v_a_3002_;
v___y_3013_ = v_a_3003_;
v___y_3014_ = v_a_3004_;
goto v___jp_3008_;
}
else
{
lean_object* v_a_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3052_; 
lean_dec_ref_known(v_expectedType_x3f_2998_, 1);
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
v_isSharedCheck_3052_ = !lean_is_exclusive(v___x_3044_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3047_ = v___x_3044_;
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_a_3045_);
lean_dec(v___x_3044_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3050_; 
if (v_isShared_3048_ == 0)
{
v___x_3050_ = v___x_3047_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v_a_3045_);
v___x_3050_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
return v___x_3050_;
}
}
}
}
}
else
{
v___y_3009_ = v_a_2999_;
v___y_3010_ = v_a_3000_;
v___y_3011_ = v_a_3001_;
v___y_3012_ = v_a_3002_;
v___y_3013_ = v_a_3003_;
v___y_3014_ = v_a_3004_;
goto v___jp_3008_;
}
}
else
{
lean_object* v_a_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3060_; 
lean_dec(v_expectedType_x3f_2998_);
v_a_3053_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3055_ = v___x_3039_;
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_a_3053_);
lean_dec(v___x_3039_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___x_3058_; 
if (v_isShared_3056_ == 0)
{
v___x_3058_ = v___x_3055_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_a_3053_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
}
v___jp_3008_:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; uint8_t v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; uint8_t v___x_3021_; lean_object* v___x_3022_; 
v___x_3015_ = lean_unsigned_to_nat(1u);
v___x_3016_ = l_Lean_Syntax_getArg(v_stx_2997_, v___x_3015_);
v___x_3017_ = 1;
v___x_3018_ = lean_box(v___x_3017_);
v___x_3019_ = lean_box(v___x_3017_);
v___x_3020_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_3020_, 0, v___x_3016_);
lean_closure_set(v___x_3020_, 1, v_expectedType_x3f_2998_);
lean_closure_set(v___x_3020_, 2, v___x_3018_);
lean_closure_set(v___x_3020_, 3, v___x_3019_);
v___x_3021_ = 1;
v___x_3022_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_3020_, v___x_3021_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_);
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; lean_object* v___x_3024_; lean_object* v_a_3025_; uint8_t v___x_3026_; lean_object* v___x_3027_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3023_);
lean_dec_ref_known(v___x_3022_, 1);
v___x_3024_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__0___redArg(v_a_3023_, v___y_3012_);
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc_n(v_a_3025_, 2);
lean_dec_ref(v___x_3024_);
v___x_3026_ = 0;
v___x_3027_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1(v_a_3025_, v___f_3007_, v___f_3006_, v___x_3026_, v___x_3026_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_);
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3038_; 
v_a_3028_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3030_ = v___x_3027_;
v_isShared_3031_ = v_isSharedCheck_3038_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_3027_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3038_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
uint8_t v___x_3032_; 
v___x_3032_ = lean_expr_eqv(v_a_3028_, v_a_3025_);
if (v___x_3032_ == 0)
{
lean_object* v___x_3033_; lean_object* v___x_3034_; 
lean_del_object(v___x_3030_);
lean_dec(v_a_3025_);
v___x_3033_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabContractEPosts___closed__10));
v___x_3034_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith(v___x_3033_, v_a_3028_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_);
return v___x_3034_;
}
else
{
lean_object* v___x_3036_; 
lean_dec(v_a_3028_);
if (v_isShared_3031_ == 0)
{
lean_ctor_set(v___x_3030_, 0, v_a_3025_);
v___x_3036_ = v___x_3030_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_a_3025_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
}
else
{
lean_dec(v_a_3025_);
return v___x_3027_;
}
}
else
{
return v___x_3022_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractEPosts___boxed(lean_object* v_stx_3061_, lean_object* v_expectedType_x3f_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_){
_start:
{
lean_object* v_res_3070_; 
v_res_3070_ = l_Lean_Elab_Tactic_Do_elabContractEPosts(v_stx_3061_, v_expectedType_x3f_3062_, v_a_3063_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_);
lean_dec(v_a_3068_);
lean_dec_ref(v_a_3067_);
lean_dec(v_a_3066_);
lean_dec_ref(v_a_3065_);
lean_dec(v_a_3064_);
lean_dec_ref(v_a_3063_);
lean_dec(v_stx_3061_);
return v_res_3070_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4(lean_object* v_upperBound_3071_, lean_object* v___x_3072_, lean_object* v_pre_3073_, lean_object* v_post_3074_, uint8_t v_usedLetOnly_3075_, uint8_t v_skipConstInApp_3076_, uint8_t v_skipInstances_3077_, lean_object* v___x_3078_, lean_object* v_inst_3079_, lean_object* v_R_3080_, lean_object* v_a_3081_, lean_object* v_b_3082_, lean_object* v_c_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_){
_start:
{
lean_object* v___x_3092_; 
v___x_3092_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___redArg(v_upperBound_3071_, v___x_3072_, v_pre_3073_, v_post_3074_, v_usedLetOnly_3075_, v_skipConstInApp_3076_, v_skipInstances_3077_, v_a_3081_, v_b_3082_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_);
return v___x_3092_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_3093_ = _args[0];
lean_object* v___x_3094_ = _args[1];
lean_object* v_pre_3095_ = _args[2];
lean_object* v_post_3096_ = _args[3];
lean_object* v_usedLetOnly_3097_ = _args[4];
lean_object* v_skipConstInApp_3098_ = _args[5];
lean_object* v_skipInstances_3099_ = _args[6];
lean_object* v___x_3100_ = _args[7];
lean_object* v_inst_3101_ = _args[8];
lean_object* v_R_3102_ = _args[9];
lean_object* v_a_3103_ = _args[10];
lean_object* v_b_3104_ = _args[11];
lean_object* v_c_3105_ = _args[12];
lean_object* v___y_3106_ = _args[13];
lean_object* v___y_3107_ = _args[14];
lean_object* v___y_3108_ = _args[15];
lean_object* v___y_3109_ = _args[16];
lean_object* v___y_3110_ = _args[17];
lean_object* v___y_3111_ = _args[18];
lean_object* v___y_3112_ = _args[19];
lean_object* v___y_3113_ = _args[20];
_start:
{
uint8_t v_usedLetOnly_boxed_3114_; uint8_t v_skipConstInApp_boxed_3115_; uint8_t v_skipInstances_boxed_3116_; lean_object* v_res_3117_; 
v_usedLetOnly_boxed_3114_ = lean_unbox(v_usedLetOnly_3097_);
v_skipConstInApp_boxed_3115_ = lean_unbox(v_skipConstInApp_3098_);
v_skipInstances_boxed_3116_ = lean_unbox(v_skipInstances_3099_);
v_res_3117_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__4(v_upperBound_3093_, v___x_3094_, v_pre_3095_, v_post_3096_, v_usedLetOnly_boxed_3114_, v_skipConstInApp_boxed_3115_, v_skipInstances_boxed_3116_, v___x_3100_, v_inst_3101_, v_R_3102_, v_a_3103_, v_b_3104_, v_c_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_);
lean_dec(v___y_3112_);
lean_dec_ref(v___y_3111_);
lean_dec(v___y_3110_);
lean_dec_ref(v___y_3109_);
lean_dec(v___y_3108_);
lean_dec_ref(v___y_3107_);
lean_dec(v___y_3106_);
lean_dec(v___x_3100_);
lean_dec_ref(v___x_3094_);
lean_dec(v_upperBound_3093_);
return v_res_3117_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5(lean_object* v_00_u03b2_3118_, lean_object* v_m_3119_, lean_object* v_a_3120_){
_start:
{
lean_object* v___x_3121_; 
v___x_3121_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5___redArg(v_m_3119_, v_a_3120_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5___boxed(lean_object* v_00_u03b2_3122_, lean_object* v_m_3123_, lean_object* v_a_3124_){
_start:
{
lean_object* v_res_3125_; 
v_res_3125_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5(v_00_u03b2_3122_, v_m_3123_, v_a_3124_);
lean_dec_ref(v_a_3124_);
lean_dec_ref(v_m_3123_);
return v_res_3125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8(lean_object* v_00_u03b1_3126_, lean_object* v_name_3127_, uint8_t v_bi_3128_, lean_object* v_type_3129_, lean_object* v_k_3130_, uint8_t v_kind_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v___x_3140_; 
v___x_3140_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___redArg(v_name_3127_, v_bi_3128_, v_type_3129_, v_k_3130_, v_kind_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_, v___y_3138_);
return v___x_3140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8___boxed(lean_object* v_00_u03b1_3141_, lean_object* v_name_3142_, lean_object* v_bi_3143_, lean_object* v_type_3144_, lean_object* v_k_3145_, lean_object* v_kind_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_){
_start:
{
uint8_t v_bi_boxed_3155_; uint8_t v_kind_boxed_3156_; lean_object* v_res_3157_; 
v_bi_boxed_3155_ = lean_unbox(v_bi_3143_);
v_kind_boxed_3156_ = lean_unbox(v_kind_3146_);
v_res_3157_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__6_spec__8(v_00_u03b1_3141_, v_name_3142_, v_bi_boxed_3155_, v_type_3144_, v_k_3145_, v_kind_boxed_3156_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_);
lean_dec(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec(v___y_3151_);
lean_dec_ref(v___y_3150_);
lean_dec(v___y_3149_);
lean_dec_ref(v___y_3148_);
lean_dec(v___y_3147_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11(lean_object* v_00_u03b1_3158_, lean_object* v_name_3159_, lean_object* v_type_3160_, lean_object* v_val_3161_, lean_object* v_k_3162_, uint8_t v_nondep_3163_, uint8_t v_kind_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_){
_start:
{
lean_object* v___x_3173_; 
v___x_3173_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11___redArg(v_name_3159_, v_type_3160_, v_val_3161_, v_k_3162_, v_nondep_3163_, v_kind_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11___boxed(lean_object* v_00_u03b1_3174_, lean_object* v_name_3175_, lean_object* v_type_3176_, lean_object* v_val_3177_, lean_object* v_k_3178_, lean_object* v_nondep_3179_, lean_object* v_kind_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_){
_start:
{
uint8_t v_nondep_boxed_3189_; uint8_t v_kind_boxed_3190_; lean_object* v_res_3191_; 
v_nondep_boxed_3189_ = lean_unbox(v_nondep_3179_);
v_kind_boxed_3190_ = lean_unbox(v_kind_3180_);
v_res_3191_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__8_spec__11(v_00_u03b1_3174_, v_name_3175_, v_type_3176_, v_val_3177_, v_k_3178_, v_nondep_boxed_3189_, v_kind_boxed_3190_, v___y_3181_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec(v___y_3185_);
lean_dec_ref(v___y_3184_);
lean_dec(v___y_3183_);
lean_dec_ref(v___y_3182_);
lean_dec(v___y_3181_);
return v_res_3191_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14(lean_object* v_00_u03b1_3192_, lean_object* v_ref_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_){
_start:
{
lean_object* v___x_3199_; 
v___x_3199_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_3193_);
return v___x_3199_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14___boxed(lean_object* v_00_u03b1_3200_, lean_object* v_ref_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_){
_start:
{
lean_object* v_res_3207_; 
v_res_3207_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10_spec__14(v_00_u03b1_3200_, v_ref_3201_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_);
lean_dec(v___y_3205_);
lean_dec_ref(v___y_3204_);
lean_dec(v___y_3203_);
lean_dec_ref(v___y_3202_);
return v_res_3207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10(lean_object* v_00_u03b1_3208_, lean_object* v_x_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_){
_start:
{
lean_object* v___x_3218_; 
v___x_3218_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10___redArg(v_x_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_);
return v___x_3218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10___boxed(lean_object* v_00_u03b1_3219_, lean_object* v_x_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_){
_start:
{
lean_object* v_res_3229_; 
v_res_3229_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__10(v_00_u03b1_3219_, v_x_3220_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
lean_dec(v___y_3227_);
lean_dec_ref(v___y_3226_);
lean_dec(v___y_3225_);
lean_dec_ref(v___y_3224_);
lean_dec(v___y_3223_);
lean_dec_ref(v___y_3222_);
lean_dec(v___y_3221_);
return v_res_3229_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11(lean_object* v_00_u03b2_3230_, lean_object* v_m_3231_, lean_object* v_a_3232_, lean_object* v_b_3233_){
_start:
{
lean_object* v___x_3234_; 
v___x_3234_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11___redArg(v_m_3231_, v_a_3232_, v_b_3233_);
return v___x_3234_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6(lean_object* v_00_u03b2_3235_, lean_object* v_a_3236_, lean_object* v_x_3237_){
_start:
{
lean_object* v___x_3238_; 
v___x_3238_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6___redArg(v_a_3236_, v_x_3237_);
return v___x_3238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6___boxed(lean_object* v_00_u03b2_3239_, lean_object* v_a_3240_, lean_object* v_x_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__5_spec__6(v_00_u03b2_3239_, v_a_3240_, v_x_3241_);
lean_dec(v_x_3241_);
lean_dec_ref(v_a_3240_);
return v_res_3242_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16(lean_object* v_00_u03b2_3243_, lean_object* v_a_3244_, lean_object* v_x_3245_){
_start:
{
uint8_t v___x_3246_; 
v___x_3246_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16___redArg(v_a_3244_, v_x_3245_);
return v___x_3246_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16___boxed(lean_object* v_00_u03b2_3247_, lean_object* v_a_3248_, lean_object* v_x_3249_){
_start:
{
uint8_t v_res_3250_; lean_object* v_r_3251_; 
v_res_3250_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__16(v_00_u03b2_3247_, v_a_3248_, v_x_3249_);
lean_dec(v_x_3249_);
lean_dec_ref(v_a_3248_);
v_r_3251_ = lean_box(v_res_3250_);
return v_r_3251_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17(lean_object* v_00_u03b2_3252_, lean_object* v_data_3253_){
_start:
{
lean_object* v___x_3254_; 
v___x_3254_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17___redArg(v_data_3253_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__18(lean_object* v_00_u03b2_3255_, lean_object* v_a_3256_, lean_object* v_b_3257_, lean_object* v_x_3258_){
_start:
{
lean_object* v___x_3259_; 
v___x_3259_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__18___redArg(v_a_3256_, v_b_3257_, v_x_3258_);
return v___x_3259_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object* v_00_u03b2_3260_, lean_object* v_i_3261_, lean_object* v_source_3262_, lean_object* v_target_3263_){
_start:
{
lean_object* v___x_3264_; 
v___x_3264_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v_i_3261_, v_source_3262_, v_target_3263_);
return v___x_3264_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object* v_00_u03b2_3265_, lean_object* v_x_3266_, lean_object* v_x_3267_){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elabContractEPosts_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_x_3266_, v_x_3267_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1(){
_start:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
v___x_3282_ = l_Lean_Elab_Term_termElabAttribute;
v___x_3283_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__0));
v___x_3284_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2));
v___x_3285_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_elabContractEPosts___boxed), 9, 0);
v___x_3286_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3282_, v___x_3283_, v___x_3284_, v___x_3285_);
return v___x_3286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___boxed(lean_object* v_a_3287_){
_start:
{
lean_object* v_res_3288_; 
v_res_3288_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1();
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts_docString__3(){
_start:
{
lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3291_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1___closed__2));
v___x_3292_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts_docString__3___closed__0));
v___x_3293_ = l_Lean_addBuiltinDocString(v___x_3291_, v___x_3292_);
return v___x_3293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts_docString__3___boxed(lean_object* v_a_3294_){
_start:
{
lean_object* v_res_3295_; 
v_res_3295_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts_docString__3();
return v_res_3295_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___lam__0(uint8_t v___x_3297_, lean_object* v_x_3298_){
_start:
{
if (lean_obj_tag(v_x_3298_) == 1)
{
lean_object* v_pre_3299_; 
v_pre_3299_ = lean_ctor_get(v_x_3298_, 0);
if (lean_obj_tag(v_pre_3299_) == 0)
{
lean_object* v_str_3300_; lean_object* v___x_3301_; uint8_t v___x_3302_; 
v_str_3300_ = lean_ctor_get(v_x_3298_, 1);
v___x_3301_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___lam__0___closed__0));
v___x_3302_ = lean_string_dec_eq(v_str_3300_, v___x_3301_);
return v___x_3302_;
}
else
{
return v___x_3297_;
}
}
else
{
return v___x_3297_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___lam__0___boxed(lean_object* v___x_3303_, lean_object* v_x_3304_){
_start:
{
uint8_t v___x_3542__boxed_3305_; uint8_t v_res_3306_; lean_object* v_r_3307_; 
v___x_3542__boxed_3305_ = lean_unbox(v___x_3303_);
v_res_3306_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___lam__0(v___x_3542__boxed_3305_, v_x_3304_);
lean_dec(v_x_3304_);
v_r_3307_ = lean_box(v_res_3306_);
return v_r_3307_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__0(lean_object* v_opts_3308_, lean_object* v_opt_3309_){
_start:
{
lean_object* v_name_3310_; lean_object* v_defValue_3311_; lean_object* v_map_3312_; lean_object* v___x_3313_; 
v_name_3310_ = lean_ctor_get(v_opt_3309_, 0);
v_defValue_3311_ = lean_ctor_get(v_opt_3309_, 1);
v_map_3312_ = lean_ctor_get(v_opts_3308_, 0);
v___x_3313_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3312_, v_name_3310_);
if (lean_obj_tag(v___x_3313_) == 0)
{
uint8_t v___x_3314_; 
v___x_3314_ = lean_unbox(v_defValue_3311_);
return v___x_3314_;
}
else
{
lean_object* v_val_3315_; 
v_val_3315_ = lean_ctor_get(v___x_3313_, 0);
lean_inc(v_val_3315_);
lean_dec_ref_known(v___x_3313_, 1);
if (lean_obj_tag(v_val_3315_) == 1)
{
uint8_t v_v_3316_; 
v_v_3316_ = lean_ctor_get_uint8(v_val_3315_, 0);
lean_dec_ref_known(v_val_3315_, 0);
return v_v_3316_;
}
else
{
uint8_t v___x_3317_; 
lean_dec(v_val_3315_);
v___x_3317_ = lean_unbox(v_defValue_3311_);
return v___x_3317_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__0___boxed(lean_object* v_opts_3318_, lean_object* v_opt_3319_){
_start:
{
uint8_t v_res_3320_; lean_object* v_r_3321_; 
v_res_3320_ = l_Lean_Option_get___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__0(v_opts_3318_, v_opt_3319_);
lean_dec_ref(v_opt_3319_);
lean_dec_ref(v_opts_3318_);
v_r_3321_ = lean_box(v_res_3320_);
return v_r_3321_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3322_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_simpOnlyWith_spec__0___redArg___closed__0);
v___x_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3322_);
return v___x_3323_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; 
v___x_3324_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__0);
v___x_3325_ = lean_unsigned_to_nat(0u);
v___x_3326_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3325_);
lean_ctor_set(v___x_3326_, 1, v___x_3325_);
lean_ctor_set(v___x_3326_, 2, v___x_3325_);
lean_ctor_set(v___x_3326_, 3, v___x_3325_);
lean_ctor_set(v___x_3326_, 4, v___x_3324_);
lean_ctor_set(v___x_3326_, 5, v___x_3324_);
lean_ctor_set(v___x_3326_, 6, v___x_3324_);
lean_ctor_set(v___x_3326_, 7, v___x_3324_);
lean_ctor_set(v___x_3326_, 8, v___x_3324_);
lean_ctor_set(v___x_3326_, 9, v___x_3324_);
lean_ctor_set(v___x_3326_, 10, v___x_3324_);
return v___x_3326_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3327_ = lean_unsigned_to_nat(32u);
v___x_3328_ = lean_mk_empty_array_with_capacity(v___x_3327_);
v___x_3329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3329_, 0, v___x_3328_);
return v___x_3329_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__3(void){
_start:
{
size_t v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3330_ = ((size_t)5ULL);
v___x_3331_ = lean_unsigned_to_nat(0u);
v___x_3332_ = lean_unsigned_to_nat(32u);
v___x_3333_ = lean_mk_empty_array_with_capacity(v___x_3332_);
v___x_3334_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__2);
v___x_3335_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3335_, 0, v___x_3334_);
lean_ctor_set(v___x_3335_, 1, v___x_3333_);
lean_ctor_set(v___x_3335_, 2, v___x_3331_);
lean_ctor_set(v___x_3335_, 3, v___x_3331_);
lean_ctor_set_usize(v___x_3335_, 4, v___x_3330_);
return v___x_3335_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__4(void){
_start:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3336_ = lean_box(1);
v___x_3337_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__3);
v___x_3338_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__0);
v___x_3339_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
lean_ctor_set(v___x_3339_, 1, v___x_3337_);
lean_ctor_set(v___x_3339_, 2, v___x_3336_);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_msgData_3340_, lean_object* v___y_3341_){
_start:
{
lean_object* v___x_3343_; lean_object* v_env_3344_; uint8_t v___x_3345_; lean_object* v_env_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v_scopes_3349_; lean_object* v___x_3350_; lean_object* v_opts_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; 
v___x_3343_ = lean_st_ref_get(v___y_3341_);
v_env_3344_ = lean_ctor_get(v___x_3343_, 0);
lean_inc_ref(v_env_3344_);
lean_dec(v___x_3343_);
v___x_3345_ = 0;
v_env_3346_ = l_Lean_Environment_setRecordingDeps(v_env_3344_, v___x_3345_);
v___x_3347_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3348_ = lean_st_ref_get(v___y_3341_);
v_scopes_3349_ = lean_ctor_get(v___x_3348_, 2);
lean_inc(v_scopes_3349_);
lean_dec(v___x_3348_);
v___x_3350_ = l_List_head_x21___redArg(v___x_3347_, v_scopes_3349_);
lean_dec(v_scopes_3349_);
v_opts_3351_ = lean_ctor_get(v___x_3350_, 1);
lean_inc_ref(v_opts_3351_);
lean_dec(v___x_3350_);
v___x_3352_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__1);
v___x_3353_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___closed__4);
v___x_3354_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3354_, 0, v_env_3346_);
lean_ctor_set(v___x_3354_, 1, v___x_3352_);
lean_ctor_set(v___x_3354_, 2, v___x_3353_);
lean_ctor_set(v___x_3354_, 3, v_opts_3351_);
v___x_3355_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3354_);
lean_ctor_set(v___x_3355_, 1, v_msgData_3340_);
v___x_3356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3355_);
return v___x_3356_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_msgData_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_){
_start:
{
lean_object* v_res_3360_; 
v_res_3360_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg(v_msgData_3357_, v___y_3358_);
lean_dec(v___y_3358_);
return v_res_3360_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2(lean_object* v_ref_3364_, lean_object* v_msgData_3365_, uint8_t v_severity_3366_, uint8_t v_isSilent_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_){
_start:
{
lean_object* v___y_3372_; uint8_t v___y_3373_; lean_object* v___y_3374_; lean_object* v___y_3375_; lean_object* v___y_3376_; uint8_t v___y_3377_; lean_object* v___y_3378_; lean_object* v___y_3379_; lean_object* v___y_3437_; lean_object* v___y_3438_; uint8_t v___y_3439_; uint8_t v___y_3440_; lean_object* v___y_3441_; lean_object* v___y_3462_; uint8_t v___y_3463_; lean_object* v___y_3464_; uint8_t v___y_3465_; lean_object* v___y_3466_; uint8_t v___y_3470_; uint8_t v___x_3498_; uint8_t v___x_3499_; 
v___x_3498_ = 2;
v___x_3499_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3366_, v___x_3498_);
if (v___x_3499_ == 0)
{
goto v___jp_3487_;
}
else
{
uint8_t v___x_3500_; 
lean_inc_ref(v_msgData_3365_);
v___x_3500_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3365_);
if (v___x_3500_ == 0)
{
goto v___jp_3487_;
}
else
{
lean_object* v___x_3501_; lean_object* v___x_3502_; 
lean_dec_ref(v_msgData_3365_);
v___x_3501_ = lean_box(0);
v___x_3502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3501_);
return v___x_3502_;
}
}
v___jp_3371_:
{
lean_object* v___x_3380_; 
v___x_3380_ = l_Lean_Elab_Command_getScope___redArg(v___y_3379_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_a_3381_; lean_object* v_currNamespace_3382_; lean_object* v___x_3383_; 
v_a_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_a_3381_);
lean_dec_ref_known(v___x_3380_, 1);
v_currNamespace_3382_ = lean_ctor_get(v_a_3381_, 2);
lean_inc(v_currNamespace_3382_);
lean_dec(v_a_3381_);
v___x_3383_ = l_Lean_Elab_Command_getScope___redArg(v___y_3379_);
if (lean_obj_tag(v___x_3383_) == 0)
{
lean_object* v_a_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3419_; 
v_a_3384_ = lean_ctor_get(v___x_3383_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3383_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3386_ = v___x_3383_;
v_isShared_3387_ = v_isSharedCheck_3419_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_a_3384_);
lean_dec(v___x_3383_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3419_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v_openDecls_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v_env_3393_; lean_object* v_messages_3394_; lean_object* v_scopes_3395_; lean_object* v_usedQuotCtxts_3396_; lean_object* v_nextMacroScope_3397_; lean_object* v_maxRecDepth_3398_; lean_object* v_ngen_3399_; lean_object* v_auxDeclNGen_3400_; lean_object* v_infoState_3401_; lean_object* v_traceState_3402_; lean_object* v_snapshotTasks_3403_; lean_object* v_prevLinterStates_3404_; lean_object* v_codeQualityEntryTasks_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3418_; 
v_openDecls_3388_ = lean_ctor_get(v_a_3384_, 3);
lean_inc(v_openDecls_3388_);
lean_dec(v_a_3384_);
v___x_3389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3389_, 0, v_currNamespace_3382_);
lean_ctor_set(v___x_3389_, 1, v_openDecls_3388_);
v___x_3390_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3389_);
lean_ctor_set(v___x_3390_, 1, v___y_3378_);
lean_inc_ref(v___y_3376_);
lean_inc_ref(v___y_3374_);
v___x_3391_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3391_, 0, v___y_3374_);
lean_ctor_set(v___x_3391_, 1, v___y_3375_);
lean_ctor_set(v___x_3391_, 2, v___y_3372_);
lean_ctor_set(v___x_3391_, 3, v___y_3376_);
lean_ctor_set(v___x_3391_, 4, v___x_3390_);
lean_ctor_set_uint8(v___x_3391_, sizeof(void*)*5, v___y_3373_);
lean_ctor_set_uint8(v___x_3391_, sizeof(void*)*5 + 1, v___y_3377_);
lean_ctor_set_uint8(v___x_3391_, sizeof(void*)*5 + 2, v_isSilent_3367_);
v___x_3392_ = lean_st_ref_take(v___y_3379_);
v_env_3393_ = lean_ctor_get(v___x_3392_, 0);
v_messages_3394_ = lean_ctor_get(v___x_3392_, 1);
v_scopes_3395_ = lean_ctor_get(v___x_3392_, 2);
v_usedQuotCtxts_3396_ = lean_ctor_get(v___x_3392_, 3);
v_nextMacroScope_3397_ = lean_ctor_get(v___x_3392_, 4);
v_maxRecDepth_3398_ = lean_ctor_get(v___x_3392_, 5);
v_ngen_3399_ = lean_ctor_get(v___x_3392_, 6);
v_auxDeclNGen_3400_ = lean_ctor_get(v___x_3392_, 7);
v_infoState_3401_ = lean_ctor_get(v___x_3392_, 8);
v_traceState_3402_ = lean_ctor_get(v___x_3392_, 9);
v_snapshotTasks_3403_ = lean_ctor_get(v___x_3392_, 10);
v_prevLinterStates_3404_ = lean_ctor_get(v___x_3392_, 11);
v_codeQualityEntryTasks_3405_ = lean_ctor_get(v___x_3392_, 12);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3392_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3407_ = v___x_3392_;
v_isShared_3408_ = v_isSharedCheck_3418_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3405_);
lean_inc(v_prevLinterStates_3404_);
lean_inc(v_snapshotTasks_3403_);
lean_inc(v_traceState_3402_);
lean_inc(v_infoState_3401_);
lean_inc(v_auxDeclNGen_3400_);
lean_inc(v_ngen_3399_);
lean_inc(v_maxRecDepth_3398_);
lean_inc(v_nextMacroScope_3397_);
lean_inc(v_usedQuotCtxts_3396_);
lean_inc(v_scopes_3395_);
lean_inc(v_messages_3394_);
lean_inc(v_env_3393_);
lean_dec(v___x_3392_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3418_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3412_; 
v___x_3409_ = lean_box(0);
v___x_3410_ = l_Lean_MessageLog_add(v___x_3391_, v_messages_3394_);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 1, v___x_3410_);
v___x_3412_ = v___x_3407_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_env_3393_);
lean_ctor_set(v_reuseFailAlloc_3417_, 1, v___x_3410_);
lean_ctor_set(v_reuseFailAlloc_3417_, 2, v_scopes_3395_);
lean_ctor_set(v_reuseFailAlloc_3417_, 3, v_usedQuotCtxts_3396_);
lean_ctor_set(v_reuseFailAlloc_3417_, 4, v_nextMacroScope_3397_);
lean_ctor_set(v_reuseFailAlloc_3417_, 5, v_maxRecDepth_3398_);
lean_ctor_set(v_reuseFailAlloc_3417_, 6, v_ngen_3399_);
lean_ctor_set(v_reuseFailAlloc_3417_, 7, v_auxDeclNGen_3400_);
lean_ctor_set(v_reuseFailAlloc_3417_, 8, v_infoState_3401_);
lean_ctor_set(v_reuseFailAlloc_3417_, 9, v_traceState_3402_);
lean_ctor_set(v_reuseFailAlloc_3417_, 10, v_snapshotTasks_3403_);
lean_ctor_set(v_reuseFailAlloc_3417_, 11, v_prevLinterStates_3404_);
lean_ctor_set(v_reuseFailAlloc_3417_, 12, v_codeQualityEntryTasks_3405_);
v___x_3412_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
lean_object* v___x_3413_; lean_object* v___x_3415_; 
v___x_3413_ = lean_st_ref_put(v___y_3379_, v___x_3412_);
if (v_isShared_3387_ == 0)
{
lean_ctor_set(v___x_3386_, 0, v___x_3409_);
v___x_3415_ = v___x_3386_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v___x_3409_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
}
}
}
else
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
lean_dec(v_currNamespace_3382_);
lean_dec_ref(v___y_3378_);
lean_dec_ref(v___y_3375_);
lean_dec(v___y_3372_);
v_a_3420_ = lean_ctor_get(v___x_3383_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3383_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3383_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3383_);
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
else
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3435_; 
lean_dec_ref(v___y_3378_);
lean_dec_ref(v___y_3375_);
lean_dec(v___y_3372_);
v_a_3428_ = lean_ctor_get(v___x_3380_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3380_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3430_ = v___x_3380_;
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v___x_3380_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3433_; 
if (v_isShared_3431_ == 0)
{
v___x_3433_ = v___x_3430_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_a_3428_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
}
}
v___jp_3436_:
{
lean_object* v_fileName_3442_; lean_object* v_fileMap_3443_; uint8_t v_suppressElabErrors_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v_a_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3460_; 
v_fileName_3442_ = lean_ctor_get(v___y_3368_, 0);
v_fileMap_3443_ = lean_ctor_get(v___y_3368_, 1);
v_suppressElabErrors_3444_ = lean_ctor_get_uint8(v___y_3368_, sizeof(void*)*10);
v___x_3445_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3365_);
v___x_3446_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg(v___x_3445_, v___y_3369_);
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3449_ = v___x_3446_;
v_isShared_3450_ = v_isSharedCheck_3460_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_a_3447_);
lean_dec(v___x_3446_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3460_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; 
lean_inc_ref_n(v_fileMap_3443_, 2);
v___x_3451_ = l_Lean_FileMap_toPosition(v_fileMap_3443_, v___y_3438_);
lean_dec(v___y_3438_);
v___x_3452_ = l_Lean_FileMap_toPosition(v_fileMap_3443_, v___y_3441_);
lean_dec(v___y_3441_);
v___x_3453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3452_);
v___x_3454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__19));
if (v_suppressElabErrors_3444_ == 0)
{
lean_del_object(v___x_3449_);
v___y_3372_ = v___x_3453_;
v___y_3373_ = v___y_3439_;
v___y_3374_ = v_fileName_3442_;
v___y_3375_ = v___x_3451_;
v___y_3376_ = v___x_3454_;
v___y_3377_ = v___y_3440_;
v___y_3378_ = v_a_3447_;
v___y_3379_ = v___y_3369_;
goto v___jp_3371_;
}
else
{
uint8_t v___x_3455_; 
lean_inc(v_a_3447_);
lean_inc_ref(v___y_3437_);
v___x_3455_ = l_Lean_MessageData_hasTag(v___y_3437_, v_a_3447_);
if (v___x_3455_ == 0)
{
lean_object* v___x_3456_; lean_object* v___x_3458_; 
lean_dec_ref_known(v___x_3453_, 1);
lean_dec_ref(v___x_3451_);
lean_dec(v_a_3447_);
v___x_3456_ = lean_box(0);
if (v_isShared_3450_ == 0)
{
lean_ctor_set(v___x_3449_, 0, v___x_3456_);
v___x_3458_ = v___x_3449_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v___x_3456_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
else
{
lean_del_object(v___x_3449_);
v___y_3372_ = v___x_3453_;
v___y_3373_ = v___y_3439_;
v___y_3374_ = v_fileName_3442_;
v___y_3375_ = v___x_3451_;
v___y_3376_ = v___x_3454_;
v___y_3377_ = v___y_3440_;
v___y_3378_ = v_a_3447_;
v___y_3379_ = v___y_3369_;
goto v___jp_3371_;
}
}
}
}
v___jp_3461_:
{
lean_object* v___x_3467_; 
v___x_3467_ = l_Lean_Syntax_getTailPos_x3f(v___y_3462_, v___y_3463_);
lean_dec(v___y_3462_);
if (lean_obj_tag(v___x_3467_) == 0)
{
lean_inc(v___y_3466_);
v___y_3437_ = v___y_3464_;
v___y_3438_ = v___y_3466_;
v___y_3439_ = v___y_3463_;
v___y_3440_ = v___y_3465_;
v___y_3441_ = v___y_3466_;
goto v___jp_3436_;
}
else
{
lean_object* v_val_3468_; 
v_val_3468_ = lean_ctor_get(v___x_3467_, 0);
lean_inc(v_val_3468_);
lean_dec_ref_known(v___x_3467_, 1);
v___y_3437_ = v___y_3464_;
v___y_3438_ = v___y_3466_;
v___y_3439_ = v___y_3463_;
v___y_3440_ = v___y_3465_;
v___y_3441_ = v_val_3468_;
goto v___jp_3436_;
}
}
v___jp_3469_:
{
lean_object* v___x_3471_; 
v___x_3471_ = l_Lean_Elab_Command_getRef___redArg(v___y_3368_);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v_a_3472_; lean_object* v_ref_3473_; uint8_t v___x_3474_; lean_object* v___f_3475_; lean_object* v___x_3476_; 
v_a_3472_ = lean_ctor_get(v___x_3471_, 0);
lean_inc(v_a_3472_);
lean_dec_ref_known(v___x_3471_, 1);
v_ref_3473_ = l_Lean_replaceRef(v_ref_3364_, v_a_3472_);
lean_dec(v_a_3472_);
v___x_3474_ = 0;
v___f_3475_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___closed__0));
v___x_3476_ = l_Lean_Syntax_getPos_x3f(v_ref_3473_, v___x_3474_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v___x_3477_; 
v___x_3477_ = lean_unsigned_to_nat(0u);
v___y_3462_ = v_ref_3473_;
v___y_3463_ = v___x_3474_;
v___y_3464_ = v___f_3475_;
v___y_3465_ = v___y_3470_;
v___y_3466_ = v___x_3477_;
goto v___jp_3461_;
}
else
{
lean_object* v_val_3478_; 
v_val_3478_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_val_3478_);
lean_dec_ref_known(v___x_3476_, 1);
v___y_3462_ = v_ref_3473_;
v___y_3463_ = v___x_3474_;
v___y_3464_ = v___f_3475_;
v___y_3465_ = v___y_3470_;
v___y_3466_ = v_val_3478_;
goto v___jp_3461_;
}
}
else
{
lean_object* v_a_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3486_; 
lean_dec_ref(v_msgData_3365_);
v_a_3479_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3486_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3481_ = v___x_3471_;
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_a_3479_);
lean_dec(v___x_3471_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___x_3484_; 
if (v_isShared_3482_ == 0)
{
v___x_3484_ = v___x_3481_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v_a_3479_);
v___x_3484_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
return v___x_3484_;
}
}
}
}
v___jp_3487_:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v_scopes_3490_; lean_object* v___x_3491_; lean_object* v_opts_3492_; uint8_t v___x_3493_; uint8_t v___x_3494_; 
v___x_3488_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3489_ = lean_st_ref_get(v___y_3369_);
v_scopes_3490_ = lean_ctor_get(v___x_3489_, 2);
lean_inc(v_scopes_3490_);
lean_dec(v___x_3489_);
v___x_3491_ = l_List_head_x21___redArg(v___x_3488_, v_scopes_3490_);
lean_dec(v_scopes_3490_);
v_opts_3492_ = lean_ctor_get(v___x_3491_, 1);
lean_inc_ref(v_opts_3492_);
lean_dec(v___x_3491_);
v___x_3493_ = 1;
v___x_3494_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3366_, v___x_3493_);
if (v___x_3494_ == 0)
{
lean_dec_ref(v_opts_3492_);
v___y_3470_ = v_severity_3366_;
goto v___jp_3469_;
}
else
{
lean_object* v___x_3495_; uint8_t v___x_3496_; 
v___x_3495_ = l_Lean_warningAsError;
v___x_3496_ = l_Lean_Option_get___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__0(v_opts_3492_, v___x_3495_);
lean_dec_ref(v_opts_3492_);
if (v___x_3496_ == 0)
{
v___y_3470_ = v_severity_3366_;
goto v___jp_3469_;
}
else
{
uint8_t v___x_3497_; 
v___x_3497_ = 2;
v___y_3470_ = v___x_3497_;
goto v___jp_3469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___boxed(lean_object* v_ref_3503_, lean_object* v_msgData_3504_, lean_object* v_severity_3505_, lean_object* v_isSilent_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_){
_start:
{
uint8_t v_severity_boxed_3510_; uint8_t v_isSilent_boxed_3511_; lean_object* v_res_3512_; 
v_severity_boxed_3510_ = lean_unbox(v_severity_3505_);
v_isSilent_boxed_3511_ = lean_unbox(v_isSilent_3506_);
v_res_3512_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2(v_ref_3503_, v_msgData_3504_, v_severity_boxed_3510_, v_isSilent_boxed_3511_, v___y_3507_, v___y_3508_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3507_);
lean_dec(v_ref_3503_);
return v_res_3512_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1(lean_object* v_ref_3513_, lean_object* v_msgData_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_){
_start:
{
uint8_t v___x_3518_; uint8_t v___x_3519_; lean_object* v___x_3520_; 
v___x_3518_ = 1;
v___x_3519_ = 0;
v___x_3520_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2(v_ref_3513_, v_msgData_3514_, v___x_3518_, v___x_3519_, v___y_3515_, v___y_3516_);
return v___x_3520_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1___boxed(lean_object* v_ref_3521_, lean_object* v_msgData_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_){
_start:
{
lean_object* v_res_3526_; 
v_res_3526_ = l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1(v_ref_3521_, v_msgData_3522_, v___y_3523_, v___y_3524_);
lean_dec(v___y_3524_);
lean_dec_ref(v___y_3523_);
lean_dec(v_ref_3521_);
return v_res_3526_;
}
}
static lean_object* _init_l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3528_ = ((lean_object*)(l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__0));
v___x_3529_ = l_Lean_stringToMessageData(v___x_3528_);
return v___x_3529_;
}
}
static lean_object* _init_l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__3(void){
_start:
{
lean_object* v___x_3531_; lean_object* v___x_3532_; 
v___x_3531_ = ((lean_object*)(l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__2));
v___x_3532_ = l_Lean_stringToMessageData(v___x_3531_);
return v___x_3532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0(lean_object* v_kw_3533_, lean_object* v_what_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v_scopes_3540_; lean_object* v___x_3541_; lean_object* v_opts_3542_; lean_object* v___x_3543_; uint8_t v___x_3544_; 
v___x_3538_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3539_ = lean_st_ref_get(v___y_3536_);
v_scopes_3540_ = lean_ctor_get(v___x_3539_, 2);
lean_inc(v_scopes_3540_);
lean_dec(v___x_3539_);
v___x_3541_ = l_List_head_x21___redArg(v___x_3538_, v_scopes_3540_);
lean_dec(v_scopes_3540_);
v_opts_3542_ = lean_ctor_get(v___x_3541_, 1);
lean_inc_ref(v_opts_3542_);
lean_dec(v___x_3541_);
v___x_3543_ = l_Lean_Elab_Do_experimental_intrinsic;
v___x_3544_ = l_Lean_Option_get___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__0(v_opts_3542_, v___x_3543_);
lean_dec_ref(v_opts_3542_);
if (v___x_3544_ == 0)
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3545_ = lean_obj_once(&l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__1, &l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__1_once, _init_l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__1);
v___x_3546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3545_);
lean_ctor_set(v___x_3546_, 1, v_what_3534_);
v___x_3547_ = lean_obj_once(&l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__3, &l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__3_once, _init_l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__3);
v___x_3548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3546_);
lean_ctor_set(v___x_3548_, 1, v___x_3547_);
v___x_3549_ = l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1(v_kw_3533_, v___x_3548_, v___y_3535_, v___y_3536_);
return v___x_3549_;
}
else
{
lean_object* v___x_3550_; lean_object* v___x_3551_; 
lean_dec_ref(v_what_3534_);
v___x_3550_ = lean_box(0);
v___x_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3550_);
return v___x_3551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___boxed(lean_object* v_kw_3552_, lean_object* v_what_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_){
_start:
{
lean_object* v_res_3557_; 
v_res_3557_ = l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0(v_kw_3552_, v_what_3553_, v___y_3554_, v___y_3555_);
lean_dec(v___y_3555_);
lean_dec_ref(v___y_3554_);
lean_dec(v_kw_3552_);
return v_res_3557_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3559_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__0));
v___x_3560_ = l_Lean_stringToMessageData(v___x_3559_);
return v___x_3560_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__3(void){
_start:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3562_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__2));
v___x_3563_ = l_Lean_stringToMessageData(v___x_3562_);
return v___x_3563_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1(lean_object* v_as_3564_, size_t v_sz_3565_, size_t v_i_3566_, lean_object* v_b_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_){
_start:
{
uint8_t v___x_3571_; 
v___x_3571_ = lean_usize_dec_lt(v_i_3566_, v_sz_3565_);
if (v___x_3571_ == 0)
{
lean_object* v___x_3572_; 
v___x_3572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3572_, 0, v_b_3567_);
return v___x_3572_;
}
else
{
lean_object* v___x_3573_; lean_object* v_a_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3573_ = lean_box(0);
v_a_3574_ = lean_array_uget_borrowed(v_as_3564_, v_i_3566_);
v___x_3575_ = lean_unsigned_to_nat(0u);
v___x_3576_ = l_Lean_Syntax_getArg(v_a_3574_, v___x_3575_);
v___x_3577_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__1);
v___x_3578_ = l_Lean_Syntax_getAtomVal(v___x_3576_);
v___x_3579_ = l_Lean_stringToMessageData(v___x_3578_);
v___x_3580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3577_);
lean_ctor_set(v___x_3580_, 1, v___x_3579_);
v___x_3581_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___closed__3);
v___x_3582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3582_, 0, v___x_3580_);
lean_ctor_set(v___x_3582_, 1, v___x_3581_);
v___x_3583_ = l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0(v___x_3576_, v___x_3582_, v___y_3568_, v___y_3569_);
lean_dec(v___x_3576_);
if (lean_obj_tag(v___x_3583_) == 0)
{
size_t v___x_3584_; size_t v___x_3585_; 
lean_dec_ref_known(v___x_3583_, 1);
v___x_3584_ = ((size_t)1ULL);
v___x_3585_ = lean_usize_add(v_i_3566_, v___x_3584_);
v_i_3566_ = v___x_3585_;
v_b_3567_ = v___x_3573_;
goto _start;
}
else
{
return v___x_3583_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1___boxed(lean_object* v_as_3587_, lean_object* v_sz_3588_, lean_object* v_i_3589_, lean_object* v_b_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_){
_start:
{
size_t v_sz_boxed_3594_; size_t v_i_boxed_3595_; lean_object* v_res_3596_; 
v_sz_boxed_3594_ = lean_unbox_usize(v_sz_3588_);
lean_dec(v_sz_3588_);
v_i_boxed_3595_ = lean_unbox_usize(v_i_3589_);
lean_dec(v_i_3589_);
v_res_3596_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1(v_as_3587_, v_sz_boxed_3594_, v_i_boxed_3595_, v_b_3590_, v___y_3591_, v___y_3592_);
lean_dec(v___y_3592_);
lean_dec_ref(v___y_3591_);
lean_dec_ref(v_as_3587_);
return v_res_3596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__2(lean_object* v_as_3597_, size_t v_sz_3598_, size_t v_i_3599_, lean_object* v_b_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_){
_start:
{
uint8_t v___x_3604_; 
v___x_3604_ = lean_usize_dec_lt(v_i_3599_, v_sz_3598_);
if (v___x_3604_ == 0)
{
lean_object* v___x_3605_; 
v___x_3605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3605_, 0, v_b_3600_);
return v___x_3605_;
}
else
{
lean_object* v___x_3606_; lean_object* v_a_3607_; lean_object* v___x_3608_; size_t v_sz_3609_; size_t v___x_3610_; lean_object* v___x_3611_; 
v___x_3606_ = lean_box(0);
v_a_3607_ = lean_array_uget_borrowed(v_as_3597_, v_i_3599_);
v___x_3608_ = l_Lean_Syntax_getArgs(v_a_3607_);
v_sz_3609_ = lean_array_size(v___x_3608_);
v___x_3610_ = ((size_t)0ULL);
v___x_3611_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__1(v___x_3608_, v_sz_3609_, v___x_3610_, v___x_3606_, v___y_3601_, v___y_3602_);
lean_dec_ref(v___x_3608_);
if (lean_obj_tag(v___x_3611_) == 0)
{
size_t v___x_3612_; size_t v___x_3613_; 
lean_dec_ref_known(v___x_3611_, 1);
v___x_3612_ = ((size_t)1ULL);
v___x_3613_ = lean_usize_add(v_i_3599_, v___x_3612_);
v_i_3599_ = v___x_3613_;
v_b_3600_ = v___x_3606_;
goto _start;
}
else
{
return v___x_3611_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__2___boxed(lean_object* v_as_3615_, lean_object* v_sz_3616_, lean_object* v_i_3617_, lean_object* v_b_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_){
_start:
{
size_t v_sz_boxed_3622_; size_t v_i_boxed_3623_; lean_object* v_res_3624_; 
v_sz_boxed_3622_ = lean_unbox_usize(v_sz_3616_);
lean_dec(v_sz_3616_);
v_i_boxed_3623_ = lean_unbox_usize(v_i_3617_);
lean_dec(v_i_3617_);
v_res_3624_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__2(v_as_3615_, v_sz_boxed_3622_, v_i_boxed_3623_, v_b_3618_, v___y_3619_, v___y_3620_);
lean_dec(v___y_3620_);
lean_dec_ref(v___y_3619_);
lean_dec_ref(v_as_3615_);
return v_res_3624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractNotice(lean_object* v_stx_3625_, lean_object* v_a_3626_, lean_object* v_a_3627_){
_start:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; size_t v_sz_3632_; size_t v___x_3633_; lean_object* v___x_3634_; 
v___x_3629_ = l_Lean_Syntax_getArgs(v_stx_3625_);
v___x_3630_ = lean_array_pop(v___x_3629_);
v___x_3631_ = lean_box(0);
v_sz_3632_ = lean_array_size(v___x_3630_);
v___x_3633_ = ((size_t)0ULL);
v___x_3634_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__2(v___x_3630_, v_sz_3632_, v___x_3633_, v___x_3631_, v_a_3626_, v_a_3627_);
lean_dec_ref(v___x_3630_);
if (lean_obj_tag(v___x_3634_) == 0)
{
lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3641_; 
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3634_);
if (v_isSharedCheck_3641_ == 0)
{
lean_object* v_unused_3642_; 
v_unused_3642_ = lean_ctor_get(v___x_3634_, 0);
lean_dec(v_unused_3642_);
v___x_3636_ = v___x_3634_;
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
else
{
lean_dec(v___x_3634_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
if (v_isShared_3637_ == 0)
{
lean_ctor_set(v___x_3636_, 0, v___x_3631_);
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v___x_3631_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
}
else
{
return v___x_3634_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabContractNotice___boxed(lean_object* v_stx_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_){
_start:
{
lean_object* v_res_3647_; 
v_res_3647_ = l_Lean_Elab_Tactic_Do_elabContractNotice(v_stx_3643_, v_a_3644_, v_a_3645_);
lean_dec(v_a_3645_);
lean_dec_ref(v_a_3644_);
lean_dec(v_stx_3643_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5(lean_object* v_msgData_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_){
_start:
{
lean_object* v___x_3652_; 
v___x_3652_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___redArg(v_msgData_3648_, v___y_3650_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5___boxed(lean_object* v_msgData_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_){
_start:
{
lean_object* v_res_3657_; 
v_res_3657_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2_spec__5(v_msgData_3653_, v___y_3654_, v___y_3655_);
lean_dec(v___y_3655_);
lean_dec_ref(v___y_3654_);
return v_res_3657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1(){
_start:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; 
v___x_3666_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_3667_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_mkContractNotice___closed__1));
v___x_3668_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1));
v___x_3669_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_elabContractNotice___boxed), 4, 0);
v___x_3670_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3666_, v___x_3667_, v___x_3668_, v___x_3669_);
return v___x_3670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___boxed(lean_object* v_a_3671_){
_start:
{
lean_object* v_res_3672_; 
v_res_3672_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1();
return v_res_3672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice_docString__3(){
_start:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; 
v___x_3675_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1___closed__1));
v___x_3676_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice_docString__3___closed__0));
v___x_3677_ = l_Lean_addBuiltinDocString(v___x_3675_, v___x_3676_);
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice_docString__3___boxed(lean_object* v_a_3678_){
_start:
{
lean_object* v_res_3679_; 
v_res_3679_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice_docString__3();
return v_res_3679_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
v___x_3680_ = lean_box(0);
v___x_3681_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3682_, 0, v___x_3681_);
lean_ctor_set(v___x_3682_, 1, v___x_3680_);
return v___x_3682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg(){
_start:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; 
v___x_3684_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg___closed__0);
v___x_3685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3685_, 0, v___x_3684_);
return v___x_3685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg___boxed(lean_object* v___y_3686_){
_start:
{
lean_object* v_res_3687_; 
v_res_3687_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg();
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2(lean_object* v_00_u03b1_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_){
_start:
{
lean_object* v___x_3697_; 
v___x_3697_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg();
return v___x_3697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___boxed(lean_object* v_00_u03b1_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_){
_start:
{
lean_object* v_res_3707_; 
v_res_3707_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2(v_00_u03b1_3698_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
lean_dec(v___y_3705_);
lean_dec_ref(v___y_3704_);
lean_dec(v___y_3703_);
lean_dec_ref(v___y_3702_);
lean_dec(v___y_3701_);
lean_dec_ref(v___y_3700_);
lean_dec_ref(v___y_3699_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2_spec__5(lean_object* v_msgData_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_){
_start:
{
lean_object* v___x_3714_; lean_object* v_env_3715_; uint8_t v___x_3716_; lean_object* v_env_3717_; lean_object* v___x_3718_; lean_object* v_toCold_3719_; lean_object* v_mctx_3720_; lean_object* v_lctx_3721_; lean_object* v_options_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3714_ = lean_st_ref_get(v___y_3712_);
v_env_3715_ = lean_ctor_get(v___x_3714_, 0);
lean_inc_ref(v_env_3715_);
lean_dec(v___x_3714_);
v___x_3716_ = 0;
v_env_3717_ = l_Lean_Environment_setRecordingDeps(v_env_3715_, v___x_3716_);
v___x_3718_ = lean_st_ref_get(v___y_3710_);
v_toCold_3719_ = lean_ctor_get(v___y_3711_, 0);
v_mctx_3720_ = lean_ctor_get(v___x_3718_, 0);
lean_inc_ref(v_mctx_3720_);
lean_dec(v___x_3718_);
v_lctx_3721_ = lean_ctor_get(v___y_3709_, 2);
v_options_3722_ = lean_ctor_get(v_toCold_3719_, 2);
lean_inc_ref(v_options_3722_);
lean_inc_ref(v_lctx_3721_);
v___x_3723_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3723_, 0, v_env_3717_);
lean_ctor_set(v___x_3723_, 1, v_mctx_3720_);
lean_ctor_set(v___x_3723_, 2, v_lctx_3721_);
lean_ctor_set(v___x_3723_, 3, v_options_3722_);
v___x_3724_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3723_);
lean_ctor_set(v___x_3724_, 1, v_msgData_3708_);
v___x_3725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3724_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2_spec__5___boxed(lean_object* v_msgData_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_){
_start:
{
lean_object* v_res_3732_; 
v_res_3732_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2_spec__5(v_msgData_3726_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
lean_dec(v___y_3728_);
lean_dec_ref(v___y_3727_);
return v_res_3732_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0(uint8_t v___x_3738_, lean_object* v_x_3739_){
_start:
{
if (lean_obj_tag(v_x_3739_) == 1)
{
lean_object* v_pre_3740_; 
v_pre_3740_ = lean_ctor_get(v_x_3739_, 0);
switch(lean_obj_tag(v_pre_3740_))
{
case 1:
{
lean_object* v_pre_3741_; 
v_pre_3741_ = lean_ctor_get(v_pre_3740_, 0);
switch(lean_obj_tag(v_pre_3741_))
{
case 0:
{
lean_object* v_str_3742_; lean_object* v_str_3743_; lean_object* v___x_3744_; uint8_t v___x_3745_; 
v_str_3742_ = lean_ctor_get(v_x_3739_, 1);
v_str_3743_ = lean_ctor_get(v_pre_3740_, 1);
v___x_3744_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__21));
v___x_3745_ = lean_string_dec_eq(v_str_3743_, v___x_3744_);
if (v___x_3745_ == 0)
{
lean_object* v___x_3746_; uint8_t v___x_3747_; 
v___x_3746_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__22));
v___x_3747_ = lean_string_dec_eq(v_str_3743_, v___x_3746_);
if (v___x_3747_ == 0)
{
return v___x_3747_;
}
else
{
lean_object* v___x_3748_; uint8_t v___x_3749_; 
v___x_3748_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__0));
v___x_3749_ = lean_string_dec_eq(v_str_3742_, v___x_3748_);
return v___x_3749_;
}
}
else
{
lean_object* v___x_3750_; uint8_t v___x_3751_; 
v___x_3750_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_3751_ = lean_string_dec_eq(v_str_3742_, v___x_3750_);
return v___x_3751_;
}
}
case 1:
{
lean_object* v_pre_3752_; 
v_pre_3752_ = lean_ctor_get(v_pre_3741_, 0);
if (lean_obj_tag(v_pre_3752_) == 0)
{
lean_object* v_str_3753_; lean_object* v_str_3754_; lean_object* v_str_3755_; lean_object* v___x_3756_; uint8_t v___x_3757_; 
v_str_3753_ = lean_ctor_get(v_x_3739_, 1);
v_str_3754_ = lean_ctor_get(v_pre_3740_, 1);
v_str_3755_ = lean_ctor_get(v_pre_3741_, 1);
v___x_3756_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__2));
v___x_3757_ = lean_string_dec_eq(v_str_3755_, v___x_3756_);
if (v___x_3757_ == 0)
{
return v___x_3757_;
}
else
{
lean_object* v___x_3758_; uint8_t v___x_3759_; 
v___x_3758_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__3));
v___x_3759_ = lean_string_dec_eq(v_str_3754_, v___x_3758_);
if (v___x_3759_ == 0)
{
return v___x_3759_;
}
else
{
lean_object* v___x_3760_; uint8_t v___x_3761_; 
v___x_3760_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___closed__4));
v___x_3761_ = lean_string_dec_eq(v_str_3753_, v___x_3760_);
return v___x_3761_;
}
}
}
else
{
return v___x_3738_;
}
}
default: 
{
return v___x_3738_;
}
}
}
case 0:
{
lean_object* v_str_3762_; lean_object* v___x_3763_; uint8_t v___x_3764_; 
v_str_3762_ = lean_ctor_get(v_x_3739_, 1);
v___x_3763_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__1_spec__2___lam__0___closed__0));
v___x_3764_ = lean_string_dec_eq(v_str_3762_, v___x_3763_);
return v___x_3764_;
}
default: 
{
return v___x_3738_;
}
}
}
else
{
return v___x_3738_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0___boxed(lean_object* v___x_3765_, lean_object* v_x_3766_){
_start:
{
uint8_t v___x_16687__boxed_3767_; uint8_t v_res_3768_; lean_object* v_r_3769_; 
v___x_16687__boxed_3767_ = lean_unbox(v___x_3765_);
v_res_3768_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___lam__0(v___x_16687__boxed_3767_, v_x_3766_);
lean_dec(v_x_3766_);
v_r_3769_ = lean_box(v_res_3768_);
return v_r_3769_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg(lean_object* v_ref_3773_, lean_object* v_msgData_3774_, uint8_t v_severity_3775_, uint8_t v_isSilent_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_){
_start:
{
lean_object* v___y_3783_; uint8_t v___y_3784_; lean_object* v___y_3785_; lean_object* v___y_3786_; uint8_t v___y_3787_; lean_object* v___y_3788_; lean_object* v___y_3789_; lean_object* v_toCold_3790_; lean_object* v___y_3791_; lean_object* v___y_3820_; lean_object* v___y_3821_; lean_object* v___y_3822_; uint8_t v___y_3823_; uint8_t v___y_3824_; uint8_t v___y_3825_; lean_object* v___y_3826_; lean_object* v___y_3827_; lean_object* v___y_3847_; uint8_t v___y_3848_; uint8_t v___y_3849_; lean_object* v___y_3850_; lean_object* v___y_3851_; uint8_t v___y_3852_; lean_object* v___y_3853_; uint8_t v___y_3857_; uint8_t v___x_3874_; uint8_t v___x_3875_; 
v___x_3874_ = 2;
v___x_3875_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3775_, v___x_3874_);
if (v___x_3875_ == 0)
{
goto v___jp_3867_;
}
else
{
uint8_t v___x_3876_; 
lean_inc_ref(v_msgData_3774_);
v___x_3876_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3774_);
if (v___x_3876_ == 0)
{
goto v___jp_3867_;
}
else
{
lean_object* v___x_3877_; lean_object* v___x_3878_; 
lean_dec_ref(v_msgData_3774_);
v___x_3877_ = lean_box(0);
v___x_3878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3877_);
return v___x_3878_;
}
}
v___jp_3782_:
{
lean_object* v_currNamespace_3792_; lean_object* v_openDecls_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v_env_3798_; lean_object* v_nextMacroScope_3799_; lean_object* v_ngen_3800_; lean_object* v_auxDeclNGen_3801_; lean_object* v_traceState_3802_; lean_object* v_cache_3803_; lean_object* v_recordedDeps_3804_; lean_object* v_messages_3805_; lean_object* v_infoState_3806_; lean_object* v_snapshotTasks_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3818_; 
v_currNamespace_3792_ = lean_ctor_get(v_toCold_3790_, 4);
v_openDecls_3793_ = lean_ctor_get(v_toCold_3790_, 5);
lean_inc(v_openDecls_3793_);
lean_inc(v_currNamespace_3792_);
v___x_3794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3794_, 0, v_currNamespace_3792_);
lean_ctor_set(v___x_3794_, 1, v_openDecls_3793_);
v___x_3795_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3794_);
lean_ctor_set(v___x_3795_, 1, v___y_3786_);
lean_inc_ref(v___y_3783_);
lean_inc_ref(v___y_3785_);
v___x_3796_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3796_, 0, v___y_3785_);
lean_ctor_set(v___x_3796_, 1, v___y_3789_);
lean_ctor_set(v___x_3796_, 2, v___y_3788_);
lean_ctor_set(v___x_3796_, 3, v___y_3783_);
lean_ctor_set(v___x_3796_, 4, v___x_3795_);
lean_ctor_set_uint8(v___x_3796_, sizeof(void*)*5, v___y_3787_);
lean_ctor_set_uint8(v___x_3796_, sizeof(void*)*5 + 1, v___y_3784_);
lean_ctor_set_uint8(v___x_3796_, sizeof(void*)*5 + 2, v_isSilent_3776_);
v___x_3797_ = lean_st_ref_take(v___y_3791_);
v_env_3798_ = lean_ctor_get(v___x_3797_, 0);
v_nextMacroScope_3799_ = lean_ctor_get(v___x_3797_, 1);
v_ngen_3800_ = lean_ctor_get(v___x_3797_, 2);
v_auxDeclNGen_3801_ = lean_ctor_get(v___x_3797_, 3);
v_traceState_3802_ = lean_ctor_get(v___x_3797_, 4);
v_cache_3803_ = lean_ctor_get(v___x_3797_, 5);
v_recordedDeps_3804_ = lean_ctor_get(v___x_3797_, 6);
v_messages_3805_ = lean_ctor_get(v___x_3797_, 7);
v_infoState_3806_ = lean_ctor_get(v___x_3797_, 8);
v_snapshotTasks_3807_ = lean_ctor_get(v___x_3797_, 9);
v_isSharedCheck_3818_ = !lean_is_exclusive(v___x_3797_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3809_ = v___x_3797_;
v_isShared_3810_ = v_isSharedCheck_3818_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_snapshotTasks_3807_);
lean_inc(v_infoState_3806_);
lean_inc(v_messages_3805_);
lean_inc(v_recordedDeps_3804_);
lean_inc(v_cache_3803_);
lean_inc(v_traceState_3802_);
lean_inc(v_auxDeclNGen_3801_);
lean_inc(v_ngen_3800_);
lean_inc(v_nextMacroScope_3799_);
lean_inc(v_env_3798_);
lean_dec(v___x_3797_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3818_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3814_; 
v___x_3811_ = lean_box(0);
v___x_3812_ = l_Lean_MessageLog_add(v___x_3796_, v_messages_3805_);
if (v_isShared_3810_ == 0)
{
lean_ctor_set(v___x_3809_, 7, v___x_3812_);
v___x_3814_ = v___x_3809_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v_env_3798_);
lean_ctor_set(v_reuseFailAlloc_3817_, 1, v_nextMacroScope_3799_);
lean_ctor_set(v_reuseFailAlloc_3817_, 2, v_ngen_3800_);
lean_ctor_set(v_reuseFailAlloc_3817_, 3, v_auxDeclNGen_3801_);
lean_ctor_set(v_reuseFailAlloc_3817_, 4, v_traceState_3802_);
lean_ctor_set(v_reuseFailAlloc_3817_, 5, v_cache_3803_);
lean_ctor_set(v_reuseFailAlloc_3817_, 6, v_recordedDeps_3804_);
lean_ctor_set(v_reuseFailAlloc_3817_, 7, v___x_3812_);
lean_ctor_set(v_reuseFailAlloc_3817_, 8, v_infoState_3806_);
lean_ctor_set(v_reuseFailAlloc_3817_, 9, v_snapshotTasks_3807_);
v___x_3814_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
lean_object* v___x_3815_; lean_object* v___x_3816_; 
v___x_3815_ = lean_st_ref_put(v___y_3791_, v___x_3814_);
v___x_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3816_, 0, v___x_3811_);
return v___x_3816_;
}
}
}
v___jp_3819_:
{
lean_object* v_fileName_3828_; lean_object* v_fileMap_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3845_; 
v_fileName_3828_ = lean_ctor_get(v___y_3826_, 0);
v_fileMap_3829_ = lean_ctor_get(v___y_3826_, 1);
v___x_3830_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3774_);
v___x_3831_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2_spec__5(v___x_3830_, v___y_3777_, v___y_3778_, v___y_3779_, v___y_3780_);
v_a_3832_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3834_ = v___x_3831_;
v_isShared_3835_ = v_isSharedCheck_3845_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v___x_3831_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3845_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; 
lean_inc_ref_n(v_fileMap_3829_, 2);
v___x_3836_ = l_Lean_FileMap_toPosition(v_fileMap_3829_, v___y_3822_);
lean_dec(v___y_3822_);
v___x_3837_ = l_Lean_FileMap_toPosition(v_fileMap_3829_, v___y_3827_);
lean_dec(v___y_3827_);
v___x_3838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3838_, 0, v___x_3837_);
v___x_3839_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__19));
if (v___y_3824_ == 0)
{
lean_del_object(v___x_3834_);
v___y_3783_ = v___x_3839_;
v___y_3784_ = v___y_3823_;
v___y_3785_ = v_fileName_3828_;
v___y_3786_ = v_a_3832_;
v___y_3787_ = v___y_3825_;
v___y_3788_ = v___x_3838_;
v___y_3789_ = v___x_3836_;
v_toCold_3790_ = v___y_3821_;
v___y_3791_ = v___y_3780_;
goto v___jp_3782_;
}
else
{
uint8_t v___x_3840_; 
lean_inc(v_a_3832_);
lean_inc_ref(v___y_3820_);
v___x_3840_ = l_Lean_MessageData_hasTag(v___y_3820_, v_a_3832_);
if (v___x_3840_ == 0)
{
lean_object* v___x_3841_; lean_object* v___x_3843_; 
lean_dec_ref_known(v___x_3838_, 1);
lean_dec_ref(v___x_3836_);
lean_dec(v_a_3832_);
v___x_3841_ = lean_box(0);
if (v_isShared_3835_ == 0)
{
lean_ctor_set(v___x_3834_, 0, v___x_3841_);
v___x_3843_ = v___x_3834_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v___x_3841_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
else
{
lean_del_object(v___x_3834_);
v___y_3783_ = v___x_3839_;
v___y_3784_ = v___y_3823_;
v___y_3785_ = v_fileName_3828_;
v___y_3786_ = v_a_3832_;
v___y_3787_ = v___y_3825_;
v___y_3788_ = v___x_3838_;
v___y_3789_ = v___x_3836_;
v_toCold_3790_ = v___y_3821_;
v___y_3791_ = v___y_3780_;
goto v___jp_3782_;
}
}
}
}
v___jp_3846_:
{
lean_object* v___x_3854_; 
v___x_3854_ = l_Lean_Syntax_getTailPos_x3f(v___y_3851_, v___y_3849_);
lean_dec(v___y_3851_);
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_inc(v___y_3853_);
v___y_3820_ = v___y_3847_;
v___y_3821_ = v___y_3850_;
v___y_3822_ = v___y_3853_;
v___y_3823_ = v___y_3852_;
v___y_3824_ = v___y_3848_;
v___y_3825_ = v___y_3849_;
v___y_3826_ = v___y_3850_;
v___y_3827_ = v___y_3853_;
goto v___jp_3819_;
}
else
{
lean_object* v_val_3855_; 
v_val_3855_ = lean_ctor_get(v___x_3854_, 0);
lean_inc(v_val_3855_);
lean_dec_ref_known(v___x_3854_, 1);
v___y_3820_ = v___y_3847_;
v___y_3821_ = v___y_3850_;
v___y_3822_ = v___y_3853_;
v___y_3823_ = v___y_3852_;
v___y_3824_ = v___y_3848_;
v___y_3825_ = v___y_3849_;
v___y_3826_ = v___y_3850_;
v___y_3827_ = v_val_3855_;
goto v___jp_3819_;
}
}
v___jp_3856_:
{
lean_object* v_toCold_3858_; lean_object* v_ref_3859_; uint8_t v_suppressElabErrors_3860_; lean_object* v_ref_3861_; uint8_t v___x_3862_; lean_object* v___f_3863_; lean_object* v___x_3864_; 
v_toCold_3858_ = lean_ctor_get(v___y_3779_, 0);
v_ref_3859_ = lean_ctor_get(v___y_3779_, 2);
v_suppressElabErrors_3860_ = lean_ctor_get_uint8(v___y_3779_, sizeof(void*)*3 + 2);
v_ref_3861_ = l_Lean_replaceRef(v_ref_3773_, v_ref_3859_);
v___x_3862_ = 0;
v___f_3863_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_3864_ = l_Lean_Syntax_getPos_x3f(v_ref_3861_, v___x_3862_);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v___x_3865_; 
v___x_3865_ = lean_unsigned_to_nat(0u);
v___y_3847_ = v___f_3863_;
v___y_3848_ = v_suppressElabErrors_3860_;
v___y_3849_ = v___x_3862_;
v___y_3850_ = v_toCold_3858_;
v___y_3851_ = v_ref_3861_;
v___y_3852_ = v___y_3857_;
v___y_3853_ = v___x_3865_;
goto v___jp_3846_;
}
else
{
lean_object* v_val_3866_; 
v_val_3866_ = lean_ctor_get(v___x_3864_, 0);
lean_inc(v_val_3866_);
lean_dec_ref_known(v___x_3864_, 1);
v___y_3847_ = v___f_3863_;
v___y_3848_ = v_suppressElabErrors_3860_;
v___y_3849_ = v___x_3862_;
v___y_3850_ = v_toCold_3858_;
v___y_3851_ = v_ref_3861_;
v___y_3852_ = v___y_3857_;
v___y_3853_ = v_val_3866_;
goto v___jp_3846_;
}
}
v___jp_3867_:
{
uint8_t v___x_3868_; uint8_t v___x_3869_; 
v___x_3868_ = 1;
v___x_3869_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3775_, v___x_3868_);
if (v___x_3869_ == 0)
{
v___y_3857_ = v_severity_3775_;
goto v___jp_3856_;
}
else
{
lean_object* v___x_3870_; lean_object* v___x_3871_; uint8_t v___x_3872_; 
v___x_3870_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3779_);
v___x_3871_ = l_Lean_warningAsError;
v___x_3872_ = l_Lean_Option_get___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__0(v___x_3870_, v___x_3871_);
lean_dec_ref(v___x_3870_);
if (v___x_3872_ == 0)
{
v___y_3857_ = v_severity_3775_;
goto v___jp_3856_;
}
else
{
uint8_t v___x_3873_; 
v___x_3873_ = 2;
v___y_3857_ = v___x_3873_;
goto v___jp_3856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ref_3879_, lean_object* v_msgData_3880_, lean_object* v_severity_3881_, lean_object* v_isSilent_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_){
_start:
{
uint8_t v_severity_boxed_3888_; uint8_t v_isSilent_boxed_3889_; lean_object* v_res_3890_; 
v_severity_boxed_3888_ = lean_unbox(v_severity_3881_);
v_isSilent_boxed_3889_ = lean_unbox(v_isSilent_3882_);
v_res_3890_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg(v_ref_3879_, v_msgData_3880_, v_severity_boxed_3888_, v_isSilent_boxed_3889_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_);
lean_dec(v___y_3886_);
lean_dec_ref(v___y_3885_);
lean_dec(v___y_3884_);
lean_dec_ref(v___y_3883_);
lean_dec(v_ref_3879_);
return v_res_3890_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0(lean_object* v_ref_3891_, lean_object* v_msgData_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_){
_start:
{
uint8_t v___x_3901_; uint8_t v___x_3902_; lean_object* v___x_3903_; 
v___x_3901_ = 1;
v___x_3902_ = 0;
v___x_3903_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg(v_ref_3891_, v_msgData_3892_, v___x_3901_, v___x_3902_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_);
return v___x_3903_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0___boxed(lean_object* v_ref_3904_, lean_object* v_msgData_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_){
_start:
{
lean_object* v_res_3914_; 
v_res_3914_ = l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0(v_ref_3904_, v_msgData_3905_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_);
lean_dec(v___y_3912_);
lean_dec_ref(v___y_3911_);
lean_dec(v___y_3910_);
lean_dec_ref(v___y_3909_);
lean_dec(v___y_3908_);
lean_dec_ref(v___y_3907_);
lean_dec_ref(v___y_3906_);
lean_dec(v_ref_3904_);
return v_res_3914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0(lean_object* v_kw_3915_, lean_object* v_what_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_){
_start:
{
lean_object* v___x_3925_; lean_object* v___x_3926_; uint8_t v___x_3927_; 
v___x_3925_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3922_);
v___x_3926_ = l_Lean_Elab_Do_experimental_intrinsic;
v___x_3927_ = l_Lean_Option_get___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0_spec__0(v___x_3925_, v___x_3926_);
lean_dec_ref(v___x_3925_);
if (v___x_3927_ == 0)
{
lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; 
v___x_3928_ = lean_obj_once(&l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__1, &l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__1_once, _init_l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__1);
v___x_3929_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3928_);
lean_ctor_set(v___x_3929_, 1, v_what_3916_);
v___x_3930_ = lean_obj_once(&l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__3, &l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__3_once, _init_l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabContractNotice_spec__0___closed__3);
v___x_3931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3929_);
lean_ctor_set(v___x_3931_, 1, v___x_3930_);
v___x_3932_ = l_Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0(v_kw_3915_, v___x_3931_, v___y_3917_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_, v___y_3923_);
return v___x_3932_;
}
else
{
lean_object* v___x_3933_; lean_object* v___x_3934_; 
lean_dec_ref(v_what_3916_);
v___x_3933_ = lean_box(0);
v___x_3934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
return v___x_3934_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0___boxed(lean_object* v_kw_3935_, lean_object* v_what_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_){
_start:
{
lean_object* v_res_3945_; 
v_res_3945_ = l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0(v_kw_3935_, v_what_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_);
lean_dec(v___y_3943_);
lean_dec_ref(v___y_3942_);
lean_dec(v___y_3941_);
lean_dec_ref(v___y_3940_);
lean_dec(v___y_3939_);
lean_dec_ref(v___y_3938_);
lean_dec_ref(v___y_3937_);
lean_dec(v_kw_3935_);
return v_res_3945_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2___redArg(lean_object* v_msg_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_){
_start:
{
lean_object* v_ref_3952_; lean_object* v___x_3953_; lean_object* v_a_3954_; lean_object* v___x_3956_; uint8_t v_isShared_3957_; uint8_t v_isSharedCheck_3962_; 
v_ref_3952_ = lean_ctor_get(v___y_3949_, 2);
v___x_3953_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2_spec__5(v_msg_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_);
v_a_3954_ = lean_ctor_get(v___x_3953_, 0);
v_isSharedCheck_3962_ = !lean_is_exclusive(v___x_3953_);
if (v_isSharedCheck_3962_ == 0)
{
v___x_3956_ = v___x_3953_;
v_isShared_3957_ = v_isSharedCheck_3962_;
goto v_resetjp_3955_;
}
else
{
lean_inc(v_a_3954_);
lean_dec(v___x_3953_);
v___x_3956_ = lean_box(0);
v_isShared_3957_ = v_isSharedCheck_3962_;
goto v_resetjp_3955_;
}
v_resetjp_3955_:
{
lean_object* v___x_3958_; lean_object* v___x_3960_; 
lean_inc(v_ref_3952_);
v___x_3958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3958_, 0, v_ref_3952_);
lean_ctor_set(v___x_3958_, 1, v_a_3954_);
if (v_isShared_3957_ == 0)
{
lean_ctor_set_tag(v___x_3956_, 1);
lean_ctor_set(v___x_3956_, 0, v___x_3958_);
v___x_3960_ = v___x_3956_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3961_; 
v_reuseFailAlloc_3961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3961_, 0, v___x_3958_);
v___x_3960_ = v_reuseFailAlloc_3961_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
return v___x_3960_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2___redArg___boxed(lean_object* v_msg_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_){
_start:
{
lean_object* v_res_3969_; 
v_res_3969_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2___redArg(v_msg_3963_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_);
lean_dec(v___y_3967_);
lean_dec_ref(v___y_3966_);
lean_dec(v___y_3965_);
lean_dec_ref(v___y_3964_);
return v_res_3969_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1___redArg(lean_object* v_ref_3970_, lean_object* v_msg_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_){
_start:
{
lean_object* v_toCold_3980_; lean_object* v_currRecDepth_3981_; lean_object* v_ref_3982_; uint16_t v_optionFlags_3983_; uint8_t v_suppressElabErrors_3984_; uint8_t v_checkDeprecated_3985_; uint8_t v_isRecordingDeps_3986_; lean_object* v_ref_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; 
v_toCold_3980_ = lean_ctor_get(v___y_3977_, 0);
v_currRecDepth_3981_ = lean_ctor_get(v___y_3977_, 1);
v_ref_3982_ = lean_ctor_get(v___y_3977_, 2);
v_optionFlags_3983_ = lean_ctor_get_uint16(v___y_3977_, sizeof(void*)*3);
v_suppressElabErrors_3984_ = lean_ctor_get_uint8(v___y_3977_, sizeof(void*)*3 + 2);
v_checkDeprecated_3985_ = lean_ctor_get_uint8(v___y_3977_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3986_ = lean_ctor_get_uint8(v___y_3977_, sizeof(void*)*3 + 4);
v_ref_3987_ = l_Lean_replaceRef(v_ref_3970_, v_ref_3982_);
lean_inc(v_currRecDepth_3981_);
lean_inc_ref(v_toCold_3980_);
v___x_3988_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3988_, 0, v_toCold_3980_);
lean_ctor_set(v___x_3988_, 1, v_currRecDepth_3981_);
lean_ctor_set(v___x_3988_, 2, v_ref_3987_);
lean_ctor_set_uint16(v___x_3988_, sizeof(void*)*3, v_optionFlags_3983_);
lean_ctor_set_uint8(v___x_3988_, sizeof(void*)*3 + 2, v_suppressElabErrors_3984_);
lean_ctor_set_uint8(v___x_3988_, sizeof(void*)*3 + 3, v_checkDeprecated_3985_);
lean_ctor_set_uint8(v___x_3988_, sizeof(void*)*3 + 4, v_isRecordingDeps_3986_);
v___x_3989_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2___redArg(v_msg_3971_, v___y_3975_, v___y_3976_, v___x_3988_, v___y_3978_);
lean_dec_ref_known(v___x_3988_, 3);
return v___x_3989_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1___redArg___boxed(lean_object* v_ref_3990_, lean_object* v_msg_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_){
_start:
{
lean_object* v_res_4000_; 
v_res_4000_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1___redArg(v_ref_3990_, v_msg_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_);
lean_dec(v___y_3998_);
lean_dec_ref(v___y_3997_);
lean_dec(v___y_3996_);
lean_dec_ref(v___y_3995_);
lean_dec(v___y_3994_);
lean_dec_ref(v___y_3993_);
lean_dec_ref(v___y_3992_);
lean_dec(v_ref_3990_);
return v_res_4000_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__1(void){
_start:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; 
v___x_4002_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__0));
v___x_4003_ = l_Lean_stringToMessageData(v___x_4002_);
return v___x_4003_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__9(void){
_start:
{
lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4027_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__8));
v___x_4028_ = l_Lean_mkCIdent(v___x_4027_);
return v___x_4028_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__11(void){
_start:
{
lean_object* v___x_4030_; lean_object* v___x_4031_; 
v___x_4030_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__10));
v___x_4031_ = l_Lean_stringToMessageData(v___x_4030_);
return v___x_4031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion(lean_object* v_stx_4038_, lean_object* v_dec_4039_, lean_object* v_a_4040_, lean_object* v_a_4041_, lean_object* v_a_4042_, lean_object* v_a_4043_, lean_object* v_a_4044_, lean_object* v_a_4045_, lean_object* v_a_4046_){
_start:
{
lean_object* v___x_4048_; lean_object* v_tk_4049_; lean_object* v___y_4051_; lean_object* v___y_4052_; lean_object* v___y_4053_; lean_object* v___y_4054_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___y_4058_; lean_object* v_as_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; lean_object* v___y_4131_; lean_object* v___y_4132_; lean_object* v___y_4133_; lean_object* v___y_4134_; lean_object* v___y_4135_; lean_object* v___x_4151_; uint8_t v___x_4152_; 
v___x_4048_ = lean_unsigned_to_nat(0u);
v_tk_4049_ = l_Lean_Syntax_getArg(v_stx_4038_, v___x_4048_);
v___x_4151_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__13));
lean_inc(v_stx_4038_);
v___x_4152_ = l_Lean_Syntax_isOfKind(v_stx_4038_, v___x_4151_);
if (v___x_4152_ == 0)
{
lean_object* v___x_4153_; lean_object* v_a_4154_; lean_object* v___x_4156_; uint8_t v_isShared_4157_; uint8_t v_isSharedCheck_4161_; 
lean_dec(v_tk_4049_);
lean_dec_ref(v_dec_4039_);
lean_dec(v_stx_4038_);
v___x_4153_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__2___redArg();
v_a_4154_ = lean_ctor_get(v___x_4153_, 0);
v_isSharedCheck_4161_ = !lean_is_exclusive(v___x_4153_);
if (v_isSharedCheck_4161_ == 0)
{
v___x_4156_ = v___x_4153_;
v_isShared_4157_ = v_isSharedCheck_4161_;
goto v_resetjp_4155_;
}
else
{
lean_inc(v_a_4154_);
lean_dec(v___x_4153_);
v___x_4156_ = lean_box(0);
v_isShared_4157_ = v_isSharedCheck_4161_;
goto v_resetjp_4155_;
}
v_resetjp_4155_:
{
lean_object* v___x_4159_; 
if (v_isShared_4157_ == 0)
{
v___x_4159_ = v___x_4156_;
goto v_reusejp_4158_;
}
else
{
lean_object* v_reuseFailAlloc_4160_; 
v_reuseFailAlloc_4160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4160_, 0, v_a_4154_);
v___x_4159_ = v_reuseFailAlloc_4160_;
goto v_reusejp_4158_;
}
v_reusejp_4158_:
{
return v___x_4159_;
}
}
}
else
{
lean_object* v___x_4162_; lean_object* v_p_4163_; lean_object* v___x_4164_; uint8_t v___x_4165_; 
v___x_4162_ = lean_unsigned_to_nat(1u);
v_p_4163_ = l_Lean_Syntax_getArg(v_stx_4038_, v___x_4162_);
lean_dec(v_stx_4038_);
v___x_4164_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__3));
lean_inc(v_p_4163_);
v___x_4165_ = l_Lean_Syntax_isOfKind(v_p_4163_, v___x_4164_);
if (v___x_4165_ == 0)
{
v_as_4128_ = v_p_4163_;
v___y_4129_ = v_a_4040_;
v___y_4130_ = v_a_4041_;
v___y_4131_ = v_a_4042_;
v___y_4132_ = v_a_4043_;
v___y_4133_ = v_a_4044_;
v___y_4134_ = v_a_4045_;
v___y_4135_ = v_a_4046_;
goto v___jp_4127_;
}
else
{
lean_object* v_ref_4166_; uint8_t v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; 
v_ref_4166_ = lean_ctor_get(v_a_4045_, 2);
v___x_4167_ = 0;
v___x_4168_ = l_Lean_SourceInfo_fromRef(v_ref_4166_, v___x_4167_);
v___x_4169_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__40));
v___x_4170_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__41));
lean_inc(v___x_4168_);
v___x_4171_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4171_, 0, v___x_4168_);
lean_ctor_set(v___x_4171_, 1, v___x_4169_);
v___x_4172_ = l_Lean_Syntax_node2(v___x_4168_, v___x_4170_, v___x_4171_, v_p_4163_);
v_as_4128_ = v___x_4172_;
v___y_4129_ = v_a_4040_;
v___y_4130_ = v_a_4041_;
v___y_4131_ = v_a_4042_;
v___y_4132_ = v_a_4043_;
v___y_4133_ = v_a_4044_;
v___y_4134_ = v_a_4045_;
v___y_4135_ = v_a_4046_;
goto v___jp_4127_;
}
}
v___jp_4050_:
{
lean_object* v___x_4059_; lean_object* v___x_4060_; 
v___x_4059_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__1, &l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__1_once, _init_l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__1);
v___x_4060_ = l_Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0(v_tk_4049_, v___x_4059_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
if (lean_obj_tag(v___x_4060_) == 0)
{
lean_object* v___x_4061_; 
lean_dec_ref_known(v___x_4060_, 1);
v___x_4061_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_4039_, v_tk_4049_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
lean_dec(v_tk_4049_);
if (lean_obj_tag(v___x_4061_) == 0)
{
lean_object* v_toCold_4062_; lean_object* v_a_4063_; lean_object* v_ref_4064_; lean_object* v_quotContext_4065_; lean_object* v_currMacroScope_4066_; uint8_t v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; 
v_toCold_4062_ = lean_ctor_get(v___y_4057_, 0);
v_a_4063_ = lean_ctor_get(v___x_4061_, 0);
lean_inc(v_a_4063_);
lean_dec_ref_known(v___x_4061_, 1);
v_ref_4064_ = lean_ctor_get(v___y_4057_, 2);
v_quotContext_4065_ = lean_ctor_get(v_toCold_4062_, 8);
v_currMacroScope_4066_ = lean_ctor_get(v_toCold_4062_, 9);
v___x_4067_ = 0;
v___x_4068_ = l_Lean_SourceInfo_fromRef(v_ref_4064_, v___x_4067_);
v___x_4069_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__1));
v___x_4070_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__2));
lean_inc_n(v___x_4068_, 9);
v___x_4071_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4071_, 0, v___x_4068_);
lean_ctor_set(v___x_4071_, 1, v___x_4069_);
v___x_4072_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__3));
v___x_4073_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__3));
v___x_4074_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4074_, 0, v___x_4068_);
lean_ctor_set(v___x_4074_, 1, v___x_4073_);
v___x_4075_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_extractSpecSection___closed__2));
v___x_4076_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_expandDefContract___closed__5, &l_Lean_Elab_Tactic_Do_expandDefContract___closed__5_once, _init_l_Lean_Elab_Tactic_Do_expandDefContract___closed__5);
v___x_4077_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__29));
lean_inc_n(v_currMacroScope_4066_, 2);
lean_inc_n(v_quotContext_4065_, 2);
v___x_4078_ = l_Lean_addMacroScope(v_quotContext_4065_, v___x_4077_, v_currMacroScope_4066_);
v___x_4079_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__4));
v___x_4080_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4080_, 0, v___x_4068_);
lean_ctor_set(v___x_4080_, 1, v___x_4076_);
lean_ctor_set(v___x_4080_, 2, v___x_4078_);
lean_ctor_set(v___x_4080_, 3, v___x_4079_);
v___x_4081_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_expandDefContract___closed__7, &l_Lean_Elab_Tactic_Do_expandDefContract___closed__7_once, _init_l_Lean_Elab_Tactic_Do_expandDefContract___closed__7);
v___x_4082_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__27));
v___x_4083_ = l_Lean_addMacroScope(v_quotContext_4065_, v___x_4082_, v_currMacroScope_4066_);
v___x_4084_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__5));
v___x_4085_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4085_, 0, v___x_4068_);
lean_ctor_set(v___x_4085_, 1, v___x_4081_);
lean_ctor_set(v___x_4085_, 2, v___x_4083_);
lean_ctor_set(v___x_4085_, 3, v___x_4084_);
v___x_4086_ = l_Lean_Syntax_node2(v___x_4068_, v___x_4075_, v___x_4080_, v___x_4085_);
v___x_4087_ = l_Lean_Syntax_node2(v___x_4068_, v___x_4072_, v___x_4074_, v___x_4086_);
v___x_4088_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_expandDefContract___closed__0));
v___x_4089_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4089_, 0, v___x_4068_);
lean_ctor_set(v___x_4089_, 1, v___x_4088_);
v___x_4090_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_expandDefContract_spec__2___closed__7));
v___x_4091_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__9, &l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__9_once, _init_l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__9);
v___x_4092_ = l_Lean_Syntax_node1(v___x_4068_, v___x_4075_, v___y_4051_);
v___x_4093_ = l_Lean_Syntax_node2(v___x_4068_, v___x_4090_, v___x_4091_, v___x_4092_);
v___x_4094_ = l_Lean_Syntax_node4(v___x_4068_, v___x_4070_, v___x_4071_, v___x_4087_, v___x_4089_, v___x_4093_);
v___x_4095_ = l_Lean_Elab_Do_mkPUnit___redArg(v___y_4052_);
if (lean_obj_tag(v___x_4095_) == 0)
{
lean_object* v_a_4096_; lean_object* v___x_4097_; 
v_a_4096_ = lean_ctor_get(v___x_4095_, 0);
lean_inc(v_a_4096_);
lean_dec_ref_known(v___x_4095_, 1);
v___x_4097_ = l_Lean_Elab_Do_mkMonadApp(v_a_4096_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
if (lean_obj_tag(v___x_4097_) == 0)
{
lean_object* v_a_4098_; lean_object* v___x_4100_; uint8_t v_isShared_4101_; uint8_t v_isSharedCheck_4110_; 
v_a_4098_ = lean_ctor_get(v___x_4097_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v___x_4097_);
if (v_isSharedCheck_4110_ == 0)
{
v___x_4100_ = v___x_4097_;
v_isShared_4101_ = v_isSharedCheck_4110_;
goto v_resetjp_4099_;
}
else
{
lean_inc(v_a_4098_);
lean_dec(v___x_4097_);
v___x_4100_ = lean_box(0);
v_isShared_4101_ = v_isSharedCheck_4110_;
goto v_resetjp_4099_;
}
v_resetjp_4099_:
{
lean_object* v___x_4103_; 
if (v_isShared_4101_ == 0)
{
lean_ctor_set_tag(v___x_4100_, 1);
v___x_4103_ = v___x_4100_;
goto v_reusejp_4102_;
}
else
{
lean_object* v_reuseFailAlloc_4109_; 
v_reuseFailAlloc_4109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4109_, 0, v_a_4098_);
v___x_4103_ = v_reuseFailAlloc_4109_;
goto v_reusejp_4102_;
}
v_reusejp_4102_:
{
uint8_t v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; 
v___x_4104_ = 1;
v___x_4105_ = lean_box(0);
v___x_4106_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_4094_, v___x_4103_, v___x_4104_, v___x_4104_, v___x_4105_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
if (lean_obj_tag(v___x_4106_) == 0)
{
lean_object* v_a_4107_; lean_object* v___x_4108_; 
v_a_4107_ = lean_ctor_get(v___x_4106_, 0);
lean_inc(v_a_4107_);
lean_dec_ref_known(v___x_4106_, 1);
v___x_4108_ = l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(v_a_4063_, v_a_4107_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
return v___x_4108_;
}
else
{
lean_dec(v_a_4063_);
return v___x_4106_;
}
}
}
}
else
{
lean_dec(v___x_4094_);
lean_dec(v_a_4063_);
return v___x_4097_;
}
}
else
{
lean_dec(v___x_4094_);
lean_dec(v_a_4063_);
return v___x_4095_;
}
}
else
{
lean_object* v_a_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4118_; 
lean_dec(v___y_4051_);
v_a_4111_ = lean_ctor_get(v___x_4061_, 0);
v_isSharedCheck_4118_ = !lean_is_exclusive(v___x_4061_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4113_ = v___x_4061_;
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_a_4111_);
lean_dec(v___x_4061_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4116_; 
if (v_isShared_4114_ == 0)
{
v___x_4116_ = v___x_4113_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_a_4111_);
v___x_4116_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
return v___x_4116_;
}
}
}
}
else
{
lean_object* v_a_4119_; lean_object* v___x_4121_; uint8_t v_isShared_4122_; uint8_t v_isSharedCheck_4126_; 
lean_dec(v___y_4051_);
lean_dec(v_tk_4049_);
lean_dec_ref(v_dec_4039_);
v_a_4119_ = lean_ctor_get(v___x_4060_, 0);
v_isSharedCheck_4126_ = !lean_is_exclusive(v___x_4060_);
if (v_isSharedCheck_4126_ == 0)
{
v___x_4121_ = v___x_4060_;
v_isShared_4122_ = v_isSharedCheck_4126_;
goto v_resetjp_4120_;
}
else
{
lean_inc(v_a_4119_);
lean_dec(v___x_4060_);
v___x_4121_ = lean_box(0);
v_isShared_4122_ = v_isSharedCheck_4126_;
goto v_resetjp_4120_;
}
v_resetjp_4120_:
{
lean_object* v___x_4124_; 
if (v_isShared_4122_ == 0)
{
v___x_4124_ = v___x_4121_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4125_; 
v_reuseFailAlloc_4125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4125_, 0, v_a_4119_);
v___x_4124_ = v_reuseFailAlloc_4125_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
return v___x_4124_;
}
}
}
}
v___jp_4127_:
{
lean_object* v___x_4136_; lean_object* v_env_4137_; lean_object* v___x_4138_; uint8_t v___x_4139_; uint8_t v___x_4140_; 
v___x_4136_ = lean_st_ref_get(v___y_4135_);
v_env_4137_ = lean_ctor_get(v___x_4136_, 0);
lean_inc_ref(v_env_4137_);
lean_dec(v___x_4136_);
v___x_4138_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__8));
v___x_4139_ = 1;
v___x_4140_ = l_Lean_Environment_contains(v_env_4137_, v___x_4138_, v___x_4139_);
if (v___x_4140_ == 0)
{
lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v_a_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4150_; 
lean_dec(v_as_4128_);
lean_dec_ref(v_dec_4039_);
v___x_4141_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__11, &l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__11_once, _init_l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__11);
v___x_4142_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1___redArg(v_tk_4049_, v___x_4141_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_);
lean_dec(v_tk_4049_);
v_a_4143_ = lean_ctor_get(v___x_4142_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v___x_4142_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4145_ = v___x_4142_;
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_a_4143_);
lean_dec(v___x_4142_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___x_4148_; 
if (v_isShared_4146_ == 0)
{
v___x_4148_ = v___x_4145_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v_a_4143_);
v___x_4148_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
return v___x_4148_;
}
}
}
else
{
v___y_4051_ = v_as_4128_;
v___y_4052_ = v___y_4129_;
v___y_4053_ = v___y_4130_;
v___y_4054_ = v___y_4131_;
v___y_4055_ = v___y_4132_;
v___y_4056_ = v___y_4133_;
v___y_4057_ = v___y_4134_;
v___y_4058_ = v___y_4135_;
goto v___jp_4050_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabDoAssertion___boxed(lean_object* v_stx_4173_, lean_object* v_dec_4174_, lean_object* v_a_4175_, lean_object* v_a_4176_, lean_object* v_a_4177_, lean_object* v_a_4178_, lean_object* v_a_4179_, lean_object* v_a_4180_, lean_object* v_a_4181_, lean_object* v_a_4182_){
_start:
{
lean_object* v_res_4183_; 
v_res_4183_ = l_Lean_Elab_Tactic_Do_elabDoAssertion(v_stx_4173_, v_dec_4174_, v_a_4175_, v_a_4176_, v_a_4177_, v_a_4178_, v_a_4179_, v_a_4180_, v_a_4181_);
lean_dec(v_a_4181_);
lean_dec_ref(v_a_4180_);
lean_dec(v_a_4179_);
lean_dec_ref(v_a_4178_);
lean_dec(v_a_4177_);
lean_dec_ref(v_a_4176_);
lean_dec_ref(v_a_4175_);
return v_res_4183_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1(lean_object* v_00_u03b1_4184_, lean_object* v_ref_4185_, lean_object* v_msg_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_){
_start:
{
lean_object* v___x_4195_; 
v___x_4195_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1___redArg(v_ref_4185_, v_msg_4186_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1___boxed(lean_object* v_00_u03b1_4196_, lean_object* v_ref_4197_, lean_object* v_msg_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_){
_start:
{
lean_object* v_res_4207_; 
v_res_4207_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1(v_00_u03b1_4196_, v_ref_4197_, v_msg_4198_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_, v___y_4203_, v___y_4204_, v___y_4205_);
lean_dec(v___y_4205_);
lean_dec_ref(v___y_4204_);
lean_dec(v___y_4203_);
lean_dec_ref(v___y_4202_);
lean_dec(v___y_4201_);
lean_dec_ref(v___y_4200_);
lean_dec_ref(v___y_4199_);
lean_dec(v_ref_4197_);
return v_res_4207_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2(lean_object* v_00_u03b1_4208_, lean_object* v_msg_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_){
_start:
{
lean_object* v___x_4218_; 
v___x_4218_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2___redArg(v_msg_4209_, v___y_4213_, v___y_4214_, v___y_4215_, v___y_4216_);
return v___x_4218_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2___boxed(lean_object* v_00_u03b1_4219_, lean_object* v_msg_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_){
_start:
{
lean_object* v_res_4229_; 
v_res_4229_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__1_spec__2(v_00_u03b1_4219_, v_msg_4220_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_, v___y_4226_, v___y_4227_);
lean_dec(v___y_4227_);
lean_dec_ref(v___y_4226_);
lean_dec(v___y_4225_);
lean_dec_ref(v___y_4224_);
lean_dec(v___y_4223_);
lean_dec_ref(v___y_4222_);
lean_dec_ref(v___y_4221_);
return v_res_4229_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2(lean_object* v_ref_4230_, lean_object* v_msgData_4231_, uint8_t v_severity_4232_, uint8_t v_isSilent_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_){
_start:
{
lean_object* v___x_4242_; 
v___x_4242_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___redArg(v_ref_4230_, v_msgData_4231_, v_severity_4232_, v_isSilent_4233_, v___y_4237_, v___y_4238_, v___y_4239_, v___y_4240_);
return v___x_4242_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2___boxed(lean_object* v_ref_4243_, lean_object* v_msgData_4244_, lean_object* v_severity_4245_, lean_object* v_isSilent_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_){
_start:
{
uint8_t v_severity_boxed_4255_; uint8_t v_isSilent_boxed_4256_; lean_object* v_res_4257_; 
v_severity_boxed_4255_ = lean_unbox(v_severity_4245_);
v_isSilent_boxed_4256_ = lean_unbox(v_isSilent_4246_);
v_res_4257_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_Do_warnIntrinsicExperimental___at___00Lean_Elab_Tactic_Do_elabDoAssertion_spec__0_spec__0_spec__2(v_ref_4243_, v_msgData_4244_, v_severity_boxed_4255_, v_isSilent_boxed_4256_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_);
lean_dec(v___y_4253_);
lean_dec_ref(v___y_4252_);
lean_dec(v___y_4251_);
lean_dec_ref(v___y_4250_);
lean_dec(v___y_4249_);
lean_dec_ref(v___y_4248_);
lean_dec_ref(v___y_4247_);
lean_dec(v_ref_4243_);
return v_res_4257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1(){
_start:
{
lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; 
v___x_4266_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4267_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabDoAssertion___closed__13));
v___x_4268_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___closed__1));
v___x_4269_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_elabDoAssertion___boxed), 10, 0);
v___x_4270_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4266_, v___x_4267_, v___x_4268_, v___x_4269_);
return v___x_4270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1___boxed(lean_object* v_a_4271_){
_start:
{
lean_object* v_res_4272_; 
v_res_4272_ = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1();
return v_res_4272_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Std_WP(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Init_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Interactive(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Contract(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_WP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Interactive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_expandDefContract___regBuiltin_Lean_Elab_Tactic_Do_expandDefContract_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractEPosts___regBuiltin_Lean_Elab_Tactic_Do_elabContractEPosts_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabContractNotice___regBuiltin_Lean_Elab_Tactic_Do_elabContractNotice_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Contract_0__Lean_Elab_Tactic_Do_elabDoAssertion___regBuiltin_Lean_Elab_Tactic_Do_elabDoAssertion__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Contract(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Std_WP(uint8_t builtin);
lean_object* initialize_Lean_Elab_Util(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Parser_Command(uint8_t builtin);
lean_object* initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Init_Syntax(uint8_t builtin);
lean_object* initialize_Init_Grind_Interactive(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Contract(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_WP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Interactive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Contract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Contract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Contract(builtin);
}
#ifdef __cplusplus
}
#endif
