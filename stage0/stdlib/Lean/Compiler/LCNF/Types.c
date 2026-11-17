// Lean compiler output
// Module: Lean.Compiler.LCNF.Types
// Imports: public import Lean.Compiler.BorrowedAnnotation public import Lean.Meta.InferType import Init.Omega import Lean.OriginalConstKind
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeFormer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_eta(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedBorrowed(lean_object*);
lean_object* l_Lean_markBorrowed(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_getOriginalConstKind_x3f(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_diagnostics;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_term_u25fe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Compiler_term_u25fe___closed__0 = (const lean_object*)&l_Lean_Compiler_term_u25fe___closed__0_value;
static const lean_string_object l_Lean_Compiler_term_u25fe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_Compiler_term_u25fe___closed__1 = (const lean_object*)&l_Lean_Compiler_term_u25fe___closed__1_value;
static const lean_string_object l_Lean_Compiler_term_u25fe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "term◾"};
static const lean_object* l_Lean_Compiler_term_u25fe___closed__2 = (const lean_object*)&l_Lean_Compiler_term_u25fe___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_term_u25fe___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_term_u25fe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_term_u25fe___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_term_u25fe___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_term_u25fe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_Compiler_term_u25fe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_term_u25fe___closed__3_value_aux_1),((lean_object*)&l_Lean_Compiler_term_u25fe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(84, 129, 89, 34, 159, 17, 200, 73)}};
static const lean_object* l_Lean_Compiler_term_u25fe___closed__3 = (const lean_object*)&l_Lean_Compiler_term_u25fe___closed__3_value;
static const lean_string_object l_Lean_Compiler_term_u25fe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "◾"};
static const lean_object* l_Lean_Compiler_term_u25fe___closed__4 = (const lean_object*)&l_Lean_Compiler_term_u25fe___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_term_u25fe___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Compiler_term_u25fe___closed__4_value)}};
static const lean_object* l_Lean_Compiler_term_u25fe___closed__5 = (const lean_object*)&l_Lean_Compiler_term_u25fe___closed__5_value;
static const lean_ctor_object l_Lean_Compiler_term_u25fe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_term_u25fe___closed__3_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Compiler_term_u25fe___closed__5_value)}};
static const lean_object* l_Lean_Compiler_term_u25fe___closed__6 = (const lean_object*)&l_Lean_Compiler_term_u25fe___closed__6_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_term_u25fe = (const lean_object*)&l_Lean_Compiler_term_u25fe___closed__6_value;
static const lean_string_object l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lcErased"};
static const lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__0 = (const lean_object*)&l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__0_value;
static lean_once_cell_t l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__1;
static const lean_ctor_object l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 218, 234, 194, 194, 57, 75, 5)}};
static const lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__2 = (const lean_object*)&l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__2_value;
static const lean_ctor_object l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__3 = (const lean_object*)&l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__3_value;
static const lean_ctor_object l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__4 = (const lean_object*)&l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1___closed__0 = (const lean_object*)&l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1___closed__0_value;
static const lean_ctor_object l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1___closed__1 = (const lean_object*)&l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_erasedExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_erasedExpr___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_erasedExpr;
static const lean_string_object l_Lean_Compiler_LCNF_anyExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lcAny"};
static const lean_object* l_Lean_Compiler_LCNF_anyExpr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_anyExpr___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_anyExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_anyExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(226, 177, 139, 0, 112, 130, 192, 131)}};
static const lean_object* l_Lean_Compiler_LCNF_anyExpr___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_anyExpr___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_anyExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_anyExpr___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyExpr;
static const lean_string_object l_Lean_Expr_isVoid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lcVoid"};
static const lean_object* l_Lean_Expr_isVoid___closed__0 = (const lean_object*)&l_Lean_Expr_isVoid___closed__0_value;
static const lean_ctor_object l_Lean_Expr_isVoid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_isVoid___closed__0_value),LEAN_SCALAR_PTR_LITERAL(68, 180, 59, 167, 252, 217, 37, 174)}};
static const lean_object* l_Lean_Expr_isVoid___closed__1 = (const lean_object*)&l_Lean_Expr_isVoid___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Expr_isVoid(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isVoid___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isErased(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isErased___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isAny(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isAny___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isPropFormerTypeQuick(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPropFormerTypeQuick___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPropFormerType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPropFormer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPropFormer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_whnfEta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_whnfEta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__0;
static const lean_string_object l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Subtype"};
static const lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ST"};
static const lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Void"};
static const lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nonemptyType"};
static const lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "internal compiler error: private in public"};
static const lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_LCNF_toLCNFType_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_LCNF_toLCNFType_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toLCNFType___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toLCNFType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ↦ "};
static const lean_object* l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___closed__0 = (const lean_object*)&l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___closed__0_value;
static lean_once_cell_t l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___closed__1;
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_toLCNFType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "locally inferred compilation type"};
static const lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_toLCNFType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_toLCNFType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_toLCNFType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "\ndiffers from type"};
static const lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_toLCNFType___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_toLCNFType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__3;
static const lean_string_object l_Lean_Compiler_LCNF_toLCNFType___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 147, .m_capacity = 147, .m_length = 146, .m_data = "\nthat would be inferred in other modules. This usually means that a type `def` involved with the mentioned declarations needs to be `@[expose]`d. "};
static const lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_toLCNFType___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_toLCNFType___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__5;
static const lean_string_object l_Lean_Compiler_LCNF_toLCNFType___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Compilation failed, "};
static const lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_toLCNFType___closed__6_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_toLCNFType___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__7;
static const lean_string_object l_Lean_Compiler_LCNF_toLCNFType___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "This is a current compiler limitation for `module`s that may be lifted in the future."};
static const lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_toLCNFType___closed__8_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_toLCNFType___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__9;
static const lean_array_object l_Lean_Compiler_LCNF_toLCNFType___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_toLCNFType___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_toLCNFType___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 178, .m_capacity = 178, .m_length = 177, .m_data = "locally inferred compilation type differs from type that would be inferred in other modules. Some of the following definitions may need to be `@[expose]`d to fix this mismatch: "};
static const lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_toLCNFType___closed__11_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_toLCNFType___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__12;
static lean_once_cell_t l_Lean_Compiler_LCNF_toLCNFType___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__13;
static const lean_string_object l_Lean_Compiler_LCNF_toLCNFType___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_toLCNFType___closed__14_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_toLCNFType___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toLCNFType___closed__15;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toLCNFType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toLCNFType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_joinTypes_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_joinTypes_x3f___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_joinTypes_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_joinTypes(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isTypeFormerType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isTypeFormerType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid instantiateForall, too many parameters"};
static const lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall_match__9_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall_match__9_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isPredicateType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPredicateType___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_maybeTypeFormerType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_maybeTypeFormerType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isClass_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isClass_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isClass_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isClass_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getArrowArity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_mkBoxedName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_boxed"};
static const lean_object* l_Lean_Compiler_LCNF_mkBoxedName___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkBoxedName___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkBoxedName(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isBoxedName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isBoxedName___boxed(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_ImpureType_float___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_float___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_float___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ImpureType_float___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_ImpureType_float___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_float___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_float___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_float___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_float___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_float;
static const lean_string_object l_Lean_Compiler_LCNF_ImpureType_float32___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Float32"};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_float32___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_float32___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ImpureType_float32___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_ImpureType_float32___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 232, 182, 48, 64, 193, 160, 231)}};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_float32___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_float32___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_float32___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_float32___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_float32;
static const lean_string_object l_Lean_Compiler_LCNF_ImpureType_uint8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_uint8___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint8___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ImpureType_uint8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_uint8___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint8___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_uint8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_uint8___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_uint8;
static const lean_string_object l_Lean_Compiler_LCNF_ImpureType_uint16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_uint16___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint16___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ImpureType_uint16___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint16___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_uint16___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint16___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_uint16___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_uint16___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_uint16;
static const lean_string_object l_Lean_Compiler_LCNF_ImpureType_uint32___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_uint32___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint32___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ImpureType_uint32___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint32___closed__0_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_uint32___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint32___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_uint32___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_uint32___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_uint32;
static const lean_string_object l_Lean_Compiler_LCNF_ImpureType_uint64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_uint64___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint64___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ImpureType_uint64___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint64___closed__0_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_uint64___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_uint64___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_uint64___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_uint64___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_uint64;
static const lean_string_object l_Lean_Compiler_LCNF_ImpureType_usize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "USize"};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_usize___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_usize___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ImpureType_usize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_ImpureType_usize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 217, 26, 131, 232, 198, 207, 245)}};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_usize___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_usize___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_usize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_usize___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_usize;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_erased___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_erased___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_erased;
static const lean_string_object l_Lean_Compiler_LCNF_ImpureType_object___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "obj"};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_object___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_object___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ImpureType_object___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_ImpureType_object___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 235, 44, 74, 242, 121, 239, 90)}};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_object___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_object___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_object___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_object___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_object;
static const lean_string_object l_Lean_Compiler_LCNF_ImpureType_tobject___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tobj"};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_tobject___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_tobject___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ImpureType_tobject___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_ImpureType_tobject___closed__0_value),LEAN_SCALAR_PTR_LITERAL(25, 168, 138, 20, 203, 141, 233, 12)}};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_tobject___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_tobject___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_tobject___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_tobject___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_tobject;
static const lean_string_object l_Lean_Compiler_LCNF_ImpureType_tagged___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tagged"};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_tagged___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_tagged___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ImpureType_tagged___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_ImpureType_tagged___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 57, 252, 162, 142, 133, 51, 193)}};
static const lean_object* l_Lean_Compiler_LCNF_ImpureType_tagged___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ImpureType_tagged___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_tagged___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_tagged___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_tagged;
static lean_once_cell_t l_Lean_Compiler_LCNF_ImpureType_void___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ImpureType_void___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_void;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isObj(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isObj___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed___boxed(lean_object*);
static lean_object* _init_l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__1(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = ((lean_object*)(l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__0));
v___x_18_ = l_String_toRawSubstring_x27(v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1(lean_object* v_x_27_, lean_object* v_a_28_, lean_object* v_a_29_){
_start:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = ((lean_object*)(l_Lean_Compiler_term_u25fe___closed__3));
v___x_31_ = l_Lean_Syntax_isOfKind(v_x_27_, v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_box(1);
v___x_33_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v_a_29_);
return v___x_33_;
}
else
{
lean_object* v_quotContext_34_; lean_object* v_currMacroScope_35_; lean_object* v_ref_36_; uint8_t v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v_quotContext_34_ = lean_ctor_get(v_a_28_, 1);
v_currMacroScope_35_ = lean_ctor_get(v_a_28_, 2);
v_ref_36_ = lean_ctor_get(v_a_28_, 5);
v___x_37_ = 0;
v___x_38_ = l_Lean_SourceInfo_fromRef(v_ref_36_, v___x_37_);
v___x_39_ = lean_obj_once(&l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__1, &l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__1_once, _init_l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__1);
v___x_40_ = ((lean_object*)(l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__2));
lean_inc(v_currMacroScope_35_);
lean_inc(v_quotContext_34_);
v___x_41_ = l_Lean_addMacroScope(v_quotContext_34_, v___x_40_, v_currMacroScope_35_);
v___x_42_ = ((lean_object*)(l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__4));
v___x_43_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_43_, 0, v___x_38_);
lean_ctor_set(v___x_43_, 1, v___x_39_);
lean_ctor_set(v___x_43_, 2, v___x_41_);
lean_ctor_set(v___x_43_, 3, v___x_42_);
v___x_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v_a_29_);
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___boxed(lean_object* v_x_45_, lean_object* v_a_46_, lean_object* v_a_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1(v_x_45_, v_a_46_, v_a_47_);
lean_dec_ref(v_a_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1(lean_object* v_x_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_55_ = ((lean_object*)(l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1___closed__1));
lean_inc(v_x_52_);
v___x_56_ = l_Lean_Syntax_isOfKind(v_x_52_, v___x_55_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; lean_object* v___x_58_; 
lean_dec(v_x_52_);
v___x_57_ = lean_box(0);
v___x_58_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
lean_ctor_set(v___x_58_, 1, v_a_54_);
return v___x_58_;
}
else
{
lean_object* v_ref_59_; uint8_t v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v_ref_59_ = l_Lean_replaceRef(v_x_52_, v_a_53_);
lean_dec(v_x_52_);
v___x_60_ = 0;
v___x_61_ = l_Lean_SourceInfo_fromRef(v_ref_59_, v___x_60_);
lean_dec(v_ref_59_);
v___x_62_ = ((lean_object*)(l_Lean_Compiler_term_u25fe___closed__3));
v___x_63_ = ((lean_object*)(l_Lean_Compiler_term_u25fe___closed__4));
lean_inc(v___x_61_);
v___x_64_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_61_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
v___x_65_ = l_Lean_Syntax_node1(v___x_61_, v___x_62_, v___x_64_);
v___x_66_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v_a_54_);
return v___x_66_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1___boxed(lean_object* v_x_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______unexpand__lcErased__1(v_x_67_, v_a_68_, v_a_69_);
lean_dec(v_a_68_);
return v_res_70_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_erasedExpr___closed__0(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = lean_box(0);
v___x_72_ = ((lean_object*)(l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__2));
v___x_73_ = l_Lean_mkConst(v___x_72_, v___x_71_);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_erasedExpr(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_obj_once(&l_Lean_Compiler_LCNF_erasedExpr___closed__0, &l_Lean_Compiler_LCNF_erasedExpr___closed__0_once, _init_l_Lean_Compiler_LCNF_erasedExpr___closed__0);
return v___x_74_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_anyExpr___closed__2(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = lean_box(0);
v___x_79_ = ((lean_object*)(l_Lean_Compiler_LCNF_anyExpr___closed__1));
v___x_80_ = l_Lean_mkConst(v___x_79_, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_anyExpr(void){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_obj_once(&l_Lean_Compiler_LCNF_anyExpr___closed__2, &l_Lean_Compiler_LCNF_anyExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_anyExpr___closed__2);
return v___x_81_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isVoid(lean_object* v_e_85_){
_start:
{
lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_86_ = ((lean_object*)(l_Lean_Expr_isVoid___closed__1));
v___x_87_ = l_Lean_Expr_isAppOf(v_e_85_, v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isVoid___boxed(lean_object* v_e_88_){
_start:
{
uint8_t v_res_89_; lean_object* v_r_90_; 
v_res_89_ = l_Lean_Expr_isVoid(v_e_88_);
lean_dec_ref(v_e_88_);
v_r_90_ = lean_box(v_res_89_);
return v_r_90_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isErased(lean_object* v_e_91_){
_start:
{
lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_92_ = ((lean_object*)(l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__2));
v___x_93_ = l_Lean_Expr_isAppOf(v_e_91_, v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isErased___boxed(lean_object* v_e_94_){
_start:
{
uint8_t v_res_95_; lean_object* v_r_96_; 
v_res_95_ = l_Lean_Expr_isErased(v_e_94_);
lean_dec_ref(v_e_94_);
v_r_96_ = lean_box(v_res_95_);
return v_r_96_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isAny(lean_object* v_e_97_){
_start:
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = ((lean_object*)(l_Lean_Compiler_LCNF_anyExpr___closed__1));
v___x_99_ = l_Lean_Expr_isAppOf(v_e_97_, v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isAny___boxed(lean_object* v_e_100_){
_start:
{
uint8_t v_res_101_; lean_object* v_r_102_; 
v_res_101_ = l_Lean_Expr_isAny(v_e_100_);
lean_dec_ref(v_e_100_);
v_r_102_ = lean_box(v_res_101_);
return v_r_102_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isPropFormerTypeQuick(lean_object* v_x_103_){
_start:
{
switch(lean_obj_tag(v_x_103_))
{
case 7:
{
lean_object* v_body_104_; 
v_body_104_ = lean_ctor_get(v_x_103_, 2);
v_x_103_ = v_body_104_;
goto _start;
}
case 3:
{
lean_object* v_u_106_; 
v_u_106_ = lean_ctor_get(v_x_103_, 0);
if (lean_obj_tag(v_u_106_) == 0)
{
uint8_t v___x_107_; 
v___x_107_ = 1;
return v___x_107_;
}
else
{
uint8_t v___x_108_; 
v___x_108_ = 0;
return v___x_108_;
}
}
default: 
{
uint8_t v___x_109_; 
v___x_109_ = 0;
return v___x_109_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPropFormerTypeQuick___boxed(lean_object* v_x_110_){
_start:
{
uint8_t v_res_111_; lean_object* v_r_112_; 
v_res_111_ = l_Lean_Compiler_LCNF_isPropFormerTypeQuick(v_x_110_);
lean_dec_ref(v_x_110_);
v_r_112_ = lean_box(v_res_111_);
return v_r_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg___lam__0(lean_object* v_k_113_, lean_object* v_b_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v___x_120_; 
lean_inc(v___y_118_);
lean_inc_ref(v___y_117_);
lean_inc(v___y_116_);
lean_inc_ref(v___y_115_);
v___x_120_ = lean_apply_6(v_k_113_, v_b_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, lean_box(0));
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg___lam__0___boxed(lean_object* v_k_121_, lean_object* v_b_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg___lam__0(v_k_121_, v_b_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_);
lean_dec(v___y_126_);
lean_dec_ref(v___y_125_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg(lean_object* v_name_129_, uint8_t v_bi_130_, lean_object* v_type_131_, lean_object* v_k_132_, uint8_t v_kind_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v___f_139_; lean_object* v___x_140_; 
v___f_139_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_139_, 0, v_k_132_);
v___x_140_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_129_, v_bi_130_, v_type_131_, v___f_139_, v_kind_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_);
if (lean_obj_tag(v___x_140_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_148_; 
v_a_141_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_148_ == 0)
{
v___x_143_ = v___x_140_;
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_140_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_146_; 
if (v_isShared_144_ == 0)
{
v___x_146_ = v___x_143_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_a_141_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
else
{
lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_156_; 
v_a_149_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_156_ == 0)
{
v___x_151_ = v___x_140_;
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v___x_140_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_154_; 
if (v_isShared_152_ == 0)
{
v___x_154_ = v___x_151_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_149_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg___boxed(lean_object* v_name_157_, lean_object* v_bi_158_, lean_object* v_type_159_, lean_object* v_k_160_, lean_object* v_kind_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
uint8_t v_bi_boxed_167_; uint8_t v_kind_boxed_168_; lean_object* v_res_169_; 
v_bi_boxed_167_ = lean_unbox(v_bi_158_);
v_kind_boxed_168_ = lean_unbox(v_kind_161_);
v_res_169_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg(v_name_157_, v_bi_boxed_167_, v_type_159_, v_k_160_, v_kind_boxed_168_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0(lean_object* v_00_u03b1_170_, lean_object* v_name_171_, uint8_t v_bi_172_, lean_object* v_type_173_, lean_object* v_k_174_, uint8_t v_kind_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg(v_name_171_, v_bi_172_, v_type_173_, v_k_174_, v_kind_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___boxed(lean_object* v_00_u03b1_182_, lean_object* v_name_183_, lean_object* v_bi_184_, lean_object* v_type_185_, lean_object* v_k_186_, lean_object* v_kind_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_){
_start:
{
uint8_t v_bi_boxed_193_; uint8_t v_kind_boxed_194_; lean_object* v_res_195_; 
v_bi_boxed_193_ = lean_unbox(v_bi_184_);
v_kind_boxed_194_ = lean_unbox(v_kind_187_);
v_res_195_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0(v_00_u03b1_182_, v_name_183_, v_bi_boxed_193_, v_type_185_, v_k_186_, v_kind_boxed_194_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___lam__0___boxed(lean_object* v_xs_198_, lean_object* v_body_199_, lean_object* v_x_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___lam__0(v_xs_198_, v_body_199_, v_x_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go(lean_object* v_type_207_, lean_object* v_xs_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_){
_start:
{
lean_object* v___y_223_; lean_object* v___y_224_; lean_object* v___y_225_; lean_object* v___y_226_; 
switch(lean_obj_tag(v_type_207_))
{
case 3:
{
lean_object* v_u_241_; 
v_u_241_ = lean_ctor_get(v_type_207_, 0);
if (lean_obj_tag(v_u_241_) == 0)
{
lean_dec_ref_known(v_type_207_, 1);
lean_dec_ref(v_xs_208_);
goto v___jp_214_;
}
else
{
v___y_223_ = v_a_209_;
v___y_224_ = v_a_210_;
v___y_225_ = v_a_211_;
v___y_226_ = v_a_212_;
goto v___jp_222_;
}
}
case 7:
{
lean_object* v_binderName_242_; lean_object* v_binderType_243_; lean_object* v_body_244_; uint8_t v_binderInfo_245_; lean_object* v___f_246_; lean_object* v___x_247_; uint8_t v___x_248_; lean_object* v___x_249_; 
v_binderName_242_ = lean_ctor_get(v_type_207_, 0);
lean_inc(v_binderName_242_);
v_binderType_243_ = lean_ctor_get(v_type_207_, 1);
lean_inc_ref(v_binderType_243_);
v_body_244_ = lean_ctor_get(v_type_207_, 2);
lean_inc_ref(v_body_244_);
v_binderInfo_245_ = lean_ctor_get_uint8(v_type_207_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_207_, 3);
lean_inc_ref(v_xs_208_);
v___f_246_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___lam__0___boxed), 8, 2);
lean_closure_set(v___f_246_, 0, v_xs_208_);
lean_closure_set(v___f_246_, 1, v_body_244_);
v___x_247_ = lean_expr_instantiate_rev(v_binderType_243_, v_xs_208_);
lean_dec_ref(v_xs_208_);
lean_dec_ref(v_binderType_243_);
v___x_248_ = 0;
v___x_249_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg(v_binderName_242_, v_binderInfo_245_, v___x_247_, v___f_246_, v___x_248_, v_a_209_, v_a_210_, v_a_211_, v_a_212_);
return v___x_249_;
}
default: 
{
v___y_223_ = v_a_209_;
v___y_224_ = v_a_210_;
v___y_225_ = v_a_211_;
v___y_226_ = v_a_212_;
goto v___jp_222_;
}
}
v___jp_214_:
{
uint8_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_215_ = 1;
v___x_216_ = lean_box(v___x_215_);
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
v___jp_218_:
{
uint8_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_219_ = 0;
v___x_220_ = lean_box(v___x_219_);
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
v___jp_222_:
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = lean_expr_instantiate_rev(v_type_207_, v_xs_208_);
lean_dec_ref(v_xs_208_);
lean_dec_ref(v_type_207_);
v___x_228_ = l_Lean_Meta_whnfD(v___x_227_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_a_229_);
lean_dec_ref_known(v___x_228_, 1);
switch(lean_obj_tag(v_a_229_))
{
case 3:
{
lean_object* v_u_230_; 
v_u_230_ = lean_ctor_get(v_a_229_, 0);
lean_inc(v_u_230_);
lean_dec_ref_known(v_a_229_, 1);
if (lean_obj_tag(v_u_230_) == 0)
{
goto v___jp_214_;
}
else
{
lean_dec(v_u_230_);
goto v___jp_218_;
}
}
case 7:
{
lean_object* v___x_231_; 
v___x_231_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___closed__0));
v_type_207_ = v_a_229_;
v_xs_208_ = v___x_231_;
v_a_209_ = v___y_223_;
v_a_210_ = v___y_224_;
v_a_211_ = v___y_225_;
v_a_212_ = v___y_226_;
goto _start;
}
default: 
{
lean_dec(v_a_229_);
goto v___jp_218_;
}
}
}
else
{
lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
v_a_233_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v___x_228_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_dec(v___x_228_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_a_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___lam__0(lean_object* v_xs_250_, lean_object* v_body_251_, lean_object* v_x_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_array_push(v_xs_250_, v_x_252_);
v___x_259_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go(v_body_251_, v___x_258_, v___y_253_, v___y_254_, v___y_255_, v___y_256_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___boxed(lean_object* v_type_260_, lean_object* v_xs_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go(v_type_260_, v_xs_261_, v_a_262_, v_a_263_, v_a_264_, v_a_265_);
lean_dec(v_a_265_);
lean_dec_ref(v_a_264_);
lean_dec(v_a_263_);
lean_dec_ref(v_a_262_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPropFormerType(lean_object* v_type_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
uint8_t v___x_274_; 
v___x_274_ = l_Lean_Compiler_LCNF_isPropFormerTypeQuick(v_type_268_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___closed__0));
v___x_276_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go(v_type_268_, v___x_275_, v_a_269_, v_a_270_, v_a_271_, v_a_272_);
return v___x_276_;
}
else
{
lean_object* v___x_277_; lean_object* v___x_278_; 
lean_dec_ref(v_type_268_);
v___x_277_ = lean_box(v___x_274_);
v___x_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
return v___x_278_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPropFormerType___boxed(lean_object* v_type_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Lean_Compiler_LCNF_isPropFormerType(v_type_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_);
lean_dec(v_a_283_);
lean_dec_ref(v_a_282_);
lean_dec(v_a_281_);
lean_dec_ref(v_a_280_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPropFormer(lean_object* v_e_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v___x_292_; 
lean_inc(v_a_290_);
lean_inc_ref(v_a_289_);
lean_inc(v_a_288_);
lean_inc_ref(v_a_287_);
v___x_292_ = lean_infer_type(v_e_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_294_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v___x_294_ = l_Lean_Compiler_LCNF_isPropFormerType(v_a_293_, v_a_287_, v_a_288_, v_a_289_, v_a_290_);
return v___x_294_;
}
else
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_302_; 
v_a_295_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_302_ == 0)
{
v___x_297_ = v___x_292_;
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v___x_292_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_300_; 
if (v_isShared_298_ == 0)
{
v___x_300_ = v___x_297_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_295_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPropFormer___boxed(lean_object* v_e_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_Compiler_LCNF_isPropFormer(v_e_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_);
lean_dec(v_a_307_);
lean_dec_ref(v_a_306_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_whnfEta(lean_object* v_type_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_){
_start:
{
lean_object* v___y_317_; lean_object* v___x_337_; uint8_t v_transparency_338_; uint8_t v___x_339_; uint8_t v___x_340_; 
v___x_337_ = l_Lean_Meta_Context_config(v_a_311_);
v_transparency_338_ = lean_ctor_get_uint8(v___x_337_, 9);
lean_dec_ref(v___x_337_);
v___x_339_ = 0;
v___x_340_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_338_, v___x_339_);
if (v___x_340_ == 0)
{
lean_object* v_keyedConfig_341_; uint8_t v_trackZetaDelta_342_; lean_object* v_zetaDeltaSet_343_; lean_object* v_lctx_344_; lean_object* v_localInstances_345_; lean_object* v_defEqCtx_x3f_346_; lean_object* v_synthPendingDepth_347_; lean_object* v_customCanUnfoldPredicate_x3f_348_; uint8_t v_univApprox_349_; uint8_t v_inTypeClassResolution_350_; uint8_t v_cacheInferType_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v_keyedConfig_341_ = lean_ctor_get(v_a_311_, 0);
v_trackZetaDelta_342_ = lean_ctor_get_uint8(v_a_311_, sizeof(void*)*7);
v_zetaDeltaSet_343_ = lean_ctor_get(v_a_311_, 1);
v_lctx_344_ = lean_ctor_get(v_a_311_, 2);
v_localInstances_345_ = lean_ctor_get(v_a_311_, 3);
v_defEqCtx_x3f_346_ = lean_ctor_get(v_a_311_, 4);
v_synthPendingDepth_347_ = lean_ctor_get(v_a_311_, 5);
v_customCanUnfoldPredicate_x3f_348_ = lean_ctor_get(v_a_311_, 6);
v_univApprox_349_ = lean_ctor_get_uint8(v_a_311_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_350_ = lean_ctor_get_uint8(v_a_311_, sizeof(void*)*7 + 2);
v_cacheInferType_351_ = lean_ctor_get_uint8(v_a_311_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_341_);
v___x_352_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_339_, v_keyedConfig_341_);
lean_inc(v_customCanUnfoldPredicate_x3f_348_);
lean_inc(v_synthPendingDepth_347_);
lean_inc(v_defEqCtx_x3f_346_);
lean_inc_ref(v_localInstances_345_);
lean_inc_ref(v_lctx_344_);
lean_inc(v_zetaDeltaSet_343_);
v___x_353_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_353_, 0, v___x_352_);
lean_ctor_set(v___x_353_, 1, v_zetaDeltaSet_343_);
lean_ctor_set(v___x_353_, 2, v_lctx_344_);
lean_ctor_set(v___x_353_, 3, v_localInstances_345_);
lean_ctor_set(v___x_353_, 4, v_defEqCtx_x3f_346_);
lean_ctor_set(v___x_353_, 5, v_synthPendingDepth_347_);
lean_ctor_set(v___x_353_, 6, v_customCanUnfoldPredicate_x3f_348_);
lean_ctor_set_uint8(v___x_353_, sizeof(void*)*7, v_trackZetaDelta_342_);
lean_ctor_set_uint8(v___x_353_, sizeof(void*)*7 + 1, v_univApprox_349_);
lean_ctor_set_uint8(v___x_353_, sizeof(void*)*7 + 2, v_inTypeClassResolution_350_);
lean_ctor_set_uint8(v___x_353_, sizeof(void*)*7 + 3, v_cacheInferType_351_);
lean_inc(v_a_314_);
lean_inc_ref(v_a_313_);
lean_inc(v_a_312_);
v___x_354_ = lean_whnf(v_type_310_, v___x_353_, v_a_312_, v_a_313_, v_a_314_);
v___y_317_ = v___x_354_;
goto v___jp_316_;
}
else
{
lean_object* v___x_355_; 
lean_inc(v_a_314_);
lean_inc_ref(v_a_313_);
lean_inc(v_a_312_);
lean_inc_ref(v_a_311_);
v___x_355_ = lean_whnf(v_type_310_, v_a_311_, v_a_312_, v_a_313_, v_a_314_);
v___y_317_ = v___x_355_;
goto v___jp_316_;
}
v___jp_316_:
{
if (lean_obj_tag(v___y_317_) == 0)
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_328_; 
v_a_318_ = lean_ctor_get(v___y_317_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___y_317_);
if (v_isSharedCheck_328_ == 0)
{
v___x_320_ = v___y_317_;
v_isShared_321_ = v_isSharedCheck_328_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___y_317_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_328_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
lean_inc(v_a_318_);
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_327_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v___x_324_; uint8_t v___x_325_; 
lean_inc(v_a_318_);
v___x_324_ = l_Lean_Expr_eta(v_a_318_);
v___x_325_ = lean_expr_eqv(v___x_324_, v_a_318_);
lean_dec(v_a_318_);
if (v___x_325_ == 0)
{
lean_dec_ref(v___x_323_);
v_type_310_ = v___x_324_;
goto _start;
}
else
{
lean_dec_ref(v___x_324_);
return v___x_323_;
}
}
}
}
else
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_336_; 
v_a_329_ = lean_ctor_get(v___y_317_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___y_317_);
if (v_isSharedCheck_336_ == 0)
{
v___x_331_ = v___y_317_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___y_317_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_a_329_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_whnfEta___boxed(lean_object* v_type_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_whnfEta(v_type_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
lean_dec(v_a_360_);
lean_dec_ref(v_a_359_);
lean_dec(v_a_358_);
lean_dec_ref(v_a_357_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5_spec__6(lean_object* v_msgData_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
lean_object* v___x_369_; lean_object* v_env_370_; uint8_t v___x_371_; lean_object* v_env_372_; lean_object* v___x_373_; lean_object* v_toCold_374_; lean_object* v_mctx_375_; lean_object* v_lctx_376_; lean_object* v_options_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_369_ = lean_st_ref_get(v___y_367_);
v_env_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc_ref(v_env_370_);
lean_dec(v___x_369_);
v___x_371_ = 0;
v_env_372_ = l_Lean_Environment_setRecordingDeps(v_env_370_, v___x_371_);
v___x_373_ = lean_st_ref_get(v___y_365_);
v_toCold_374_ = lean_ctor_get(v___y_366_, 0);
v_mctx_375_ = lean_ctor_get(v___x_373_, 0);
lean_inc_ref(v_mctx_375_);
lean_dec(v___x_373_);
v_lctx_376_ = lean_ctor_get(v___y_364_, 2);
v_options_377_ = lean_ctor_get(v_toCold_374_, 2);
lean_inc_ref(v_options_377_);
lean_inc_ref(v_lctx_376_);
v___x_378_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_378_, 0, v_env_372_);
lean_ctor_set(v___x_378_, 1, v_mctx_375_);
lean_ctor_set(v___x_378_, 2, v_lctx_376_);
lean_ctor_set(v___x_378_, 3, v_options_377_);
v___x_379_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
lean_ctor_set(v___x_379_, 1, v_msgData_363_);
v___x_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5_spec__6___boxed(lean_object* v_msgData_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5_spec__6(v_msgData_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5___redArg(lean_object* v_msg_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_ref_394_; lean_object* v___x_395_; lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_404_; 
v_ref_394_ = lean_ctor_get(v___y_391_, 2);
v___x_395_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5_spec__6(v_msg_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
v_a_396_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_404_ == 0)
{
v___x_398_ = v___x_395_;
v_isShared_399_ = v_isSharedCheck_404_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_395_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_404_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_400_; lean_object* v___x_402_; 
lean_inc(v_ref_394_);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v_ref_394_);
lean_ctor_set(v___x_400_, 1, v_a_396_);
if (v_isShared_399_ == 0)
{
lean_ctor_set_tag(v___x_398_, 1);
lean_ctor_set(v___x_398_, 0, v___x_400_);
v___x_402_ = v___x_398_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v___x_400_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5___redArg___boxed(lean_object* v_msg_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5___redArg(v_msg_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10___redArg(lean_object* v_ref_412_, lean_object* v_msg_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_toCold_419_; lean_object* v_currRecDepth_420_; lean_object* v_ref_421_; uint16_t v_optionFlags_422_; uint8_t v_suppressElabErrors_423_; uint8_t v_checkDeprecated_424_; uint8_t v_isRecordingDeps_425_; lean_object* v_ref_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v_toCold_419_ = lean_ctor_get(v___y_416_, 0);
v_currRecDepth_420_ = lean_ctor_get(v___y_416_, 1);
v_ref_421_ = lean_ctor_get(v___y_416_, 2);
v_optionFlags_422_ = lean_ctor_get_uint16(v___y_416_, sizeof(void*)*3);
v_suppressElabErrors_423_ = lean_ctor_get_uint8(v___y_416_, sizeof(void*)*3 + 2);
v_checkDeprecated_424_ = lean_ctor_get_uint8(v___y_416_, sizeof(void*)*3 + 3);
v_isRecordingDeps_425_ = lean_ctor_get_uint8(v___y_416_, sizeof(void*)*3 + 4);
v_ref_426_ = l_Lean_replaceRef(v_ref_412_, v_ref_421_);
lean_inc(v_currRecDepth_420_);
lean_inc_ref(v_toCold_419_);
v___x_427_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_427_, 0, v_toCold_419_);
lean_ctor_set(v___x_427_, 1, v_currRecDepth_420_);
lean_ctor_set(v___x_427_, 2, v_ref_426_);
lean_ctor_set_uint16(v___x_427_, sizeof(void*)*3, v_optionFlags_422_);
lean_ctor_set_uint8(v___x_427_, sizeof(void*)*3 + 2, v_suppressElabErrors_423_);
lean_ctor_set_uint8(v___x_427_, sizeof(void*)*3 + 3, v_checkDeprecated_424_);
lean_ctor_set_uint8(v___x_427_, sizeof(void*)*3 + 4, v_isRecordingDeps_425_);
v___x_428_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5___redArg(v_msg_413_, v___y_414_, v___y_415_, v___x_427_, v___y_417_);
lean_dec_ref_known(v___x_427_, 3);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10___redArg___boxed(lean_object* v_ref_429_, lean_object* v_msg_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10___redArg(v_ref_429_, v_msg_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
lean_dec(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v_ref_429_);
return v_res_436_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_437_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0);
v___x_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_439_, 0, v___x_438_);
return v___x_439_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_440_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_441_ = lean_unsigned_to_nat(0u);
v___x_442_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v___x_441_);
lean_ctor_set(v___x_442_, 2, v___x_441_);
lean_ctor_set(v___x_442_, 3, v___x_441_);
lean_ctor_set(v___x_442_, 4, v___x_440_);
lean_ctor_set(v___x_442_, 5, v___x_440_);
lean_ctor_set(v___x_442_, 6, v___x_440_);
lean_ctor_set(v___x_442_, 7, v___x_440_);
lean_ctor_set(v___x_442_, 8, v___x_440_);
lean_ctor_set(v___x_442_, 9, v___x_440_);
lean_ctor_set(v___x_442_, 10, v___x_440_);
return v___x_442_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3(void){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_443_ = lean_unsigned_to_nat(32u);
v___x_444_ = lean_mk_empty_array_with_capacity(v___x_443_);
v___x_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_445_, 0, v___x_444_);
return v___x_445_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4(void){
_start:
{
size_t v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_446_ = ((size_t)5ULL);
v___x_447_ = lean_unsigned_to_nat(0u);
v___x_448_ = lean_unsigned_to_nat(32u);
v___x_449_ = lean_mk_empty_array_with_capacity(v___x_448_);
v___x_450_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3);
v___x_451_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
lean_ctor_set(v___x_451_, 2, v___x_447_);
lean_ctor_set(v___x_451_, 3, v___x_447_);
lean_ctor_set_usize(v___x_451_, 4, v___x_446_);
return v___x_451_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_452_ = lean_box(1);
v___x_453_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4);
v___x_454_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_455_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_453_);
lean_ctor_set(v___x_455_, 2, v___x_452_);
return v___x_455_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__6));
v___x_458_ = l_Lean_stringToMessageData(v___x_457_);
return v___x_458_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__8));
v___x_461_ = l_Lean_stringToMessageData(v___x_460_);
return v___x_461_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__10));
v___x_464_ = l_Lean_stringToMessageData(v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13(void){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__12));
v___x_467_ = l_Lean_stringToMessageData(v___x_466_);
return v___x_467_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__14));
v___x_470_ = l_Lean_stringToMessageData(v___x_469_);
return v___x_470_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__16));
v___x_473_ = l_Lean_stringToMessageData(v___x_472_);
return v___x_473_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__18));
v___x_476_ = l_Lean_stringToMessageData(v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg(lean_object* v_msg_477_, lean_object* v_declHint_478_, lean_object* v___y_479_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v_env_483_; uint8_t v___x_484_; 
v___x_481_ = lean_box(0);
v___x_482_ = lean_st_ref_get(v___y_479_);
v_env_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc_ref(v_env_483_);
lean_dec(v___x_482_);
v___x_484_ = l_Lean_Name_isAnonymous(v_declHint_478_);
if (v___x_484_ == 0)
{
uint8_t v_isExporting_485_; 
v_isExporting_485_ = lean_ctor_get_uint8(v_env_483_, sizeof(void*)*13);
if (v_isExporting_485_ == 0)
{
lean_object* v___x_486_; 
lean_dec_ref(v_env_483_);
lean_dec(v_declHint_478_);
v___x_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_486_, 0, v_msg_477_);
return v___x_486_;
}
else
{
lean_object* v___x_487_; uint8_t v___x_488_; 
lean_inc_ref(v_env_483_);
v___x_487_ = l_Lean_Environment_setExporting(v_env_483_, v___x_484_);
lean_inc(v_declHint_478_);
lean_inc_ref(v___x_487_);
v___x_488_ = l_Lean_Environment_contains(v___x_487_, v_declHint_478_, v_isExporting_485_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; 
lean_dec_ref(v___x_487_);
lean_dec_ref(v_env_483_);
lean_dec(v_declHint_478_);
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v_msg_477_);
return v___x_489_;
}
else
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v_c_495_; lean_object* v___x_496_; 
v___x_490_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_491_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5);
v___x_492_ = l_Lean_Options_empty;
lean_inc_ref(v___x_487_);
v___x_493_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_493_, 0, v___x_487_);
lean_ctor_set(v___x_493_, 1, v___x_490_);
lean_ctor_set(v___x_493_, 2, v___x_491_);
lean_ctor_set(v___x_493_, 3, v___x_492_);
lean_inc(v_declHint_478_);
v___x_494_ = l_Lean_MessageData_ofConstName(v_declHint_478_, v___x_484_);
v_c_495_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_495_, 0, v___x_493_);
lean_ctor_set(v_c_495_, 1, v___x_494_);
v___x_496_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_487_, v_declHint_478_);
lean_dec_ref(v___x_487_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
lean_dec_ref(v_env_483_);
lean_dec(v_declHint_478_);
v___x_497_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7);
v___x_498_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
lean_ctor_set(v___x_498_, 1, v_c_495_);
v___x_499_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9);
v___x_500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
v___x_501_ = l_Lean_MessageData_note(v___x_500_);
v___x_502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_502_, 0, v_msg_477_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v___x_503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
return v___x_503_;
}
else
{
lean_object* v_val_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_538_; 
v_val_504_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_538_ == 0)
{
v___x_506_ = v___x_496_;
v_isShared_507_ = v_isSharedCheck_538_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_val_504_);
lean_dec(v___x_496_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_538_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; lean_object* v_moduleNames_509_; lean_object* v_mod_510_; uint8_t v___x_511_; 
v___x_508_ = l_Lean_Environment_header(v_env_483_);
lean_dec_ref(v_env_483_);
v_moduleNames_509_ = lean_ctor_get(v___x_508_, 4);
lean_inc_ref(v_moduleNames_509_);
lean_dec_ref(v___x_508_);
v_mod_510_ = lean_array_get(v___x_481_, v_moduleNames_509_, v_val_504_);
lean_dec(v_val_504_);
lean_dec_ref(v_moduleNames_509_);
v___x_511_ = l_Lean_isPrivateName(v_declHint_478_);
lean_dec(v_declHint_478_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_512_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11);
v___x_513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
lean_ctor_set(v___x_513_, 1, v_c_495_);
v___x_514_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13);
v___x_515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_513_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = l_Lean_MessageData_ofName(v_mod_510_);
v___x_517_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_515_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
v___x_518_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15);
v___x_519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_517_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = l_Lean_MessageData_note(v___x_519_);
v___x_521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_521_, 0, v_msg_477_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
if (v_isShared_507_ == 0)
{
lean_ctor_set_tag(v___x_506_, 0);
lean_ctor_set(v___x_506_, 0, v___x_521_);
v___x_523_ = v___x_506_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_525_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7);
v___x_526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
lean_ctor_set(v___x_526_, 1, v_c_495_);
v___x_527_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17);
v___x_528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
v___x_529_ = l_Lean_MessageData_ofName(v_mod_510_);
v___x_530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19);
v___x_532_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_530_);
lean_ctor_set(v___x_532_, 1, v___x_531_);
v___x_533_ = l_Lean_MessageData_note(v___x_532_);
v___x_534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_534_, 0, v_msg_477_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
if (v_isShared_507_ == 0)
{
lean_ctor_set_tag(v___x_506_, 0);
lean_ctor_set(v___x_506_, 0, v___x_534_);
v___x_536_ = v___x_506_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_534_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_539_; 
lean_dec_ref(v_env_483_);
lean_dec(v_declHint_478_);
v___x_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_539_, 0, v_msg_477_);
return v___x_539_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___boxed(lean_object* v_msg_540_, lean_object* v_declHint_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg(v_msg_540_, v_declHint_541_, v___y_542_);
lean_dec(v___y_542_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9(lean_object* v_msg_545_, lean_object* v_declHint_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v___x_552_; lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_562_; 
v___x_552_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg(v_msg_545_, v_declHint_546_, v___y_550_);
v_a_553_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_562_ == 0)
{
v___x_555_ = v___x_552_;
v_isShared_556_ = v_isSharedCheck_562_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_552_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_562_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_560_; 
v___x_557_ = l_Lean_unknownIdentifierMessageTag;
v___x_558_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v_a_553_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_558_);
v___x_560_ = v___x_555_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_558_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9___boxed(lean_object* v_msg_563_, lean_object* v_declHint_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9(v_msg_563_, v_declHint_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8___redArg(lean_object* v_ref_571_, lean_object* v_msg_572_, lean_object* v_declHint_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
lean_object* v___x_579_; lean_object* v_a_580_; lean_object* v___x_581_; 
v___x_579_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9(v_msg_572_, v_declHint_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
v_a_580_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_a_580_);
lean_dec_ref(v___x_579_);
v___x_581_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10___redArg(v_ref_571_, v_a_580_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8___redArg___boxed(lean_object* v_ref_582_, lean_object* v_msg_583_, lean_object* v_declHint_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8___redArg(v_ref_582_, v_msg_583_, v_declHint_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec(v_ref_582_);
return v_res_590_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__0));
v___x_593_ = l_Lean_stringToMessageData(v___x_592_);
return v___x_593_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__2));
v___x_596_ = l_Lean_stringToMessageData(v___x_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg(lean_object* v_ref_597_, lean_object* v_constName_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v___x_604_; uint8_t v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_604_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__1);
v___x_605_ = 0;
lean_inc(v_constName_598_);
v___x_606_ = l_Lean_MessageData_ofConstName(v_constName_598_, v___x_605_);
v___x_607_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_604_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___closed__3);
v___x_609_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_609_, 0, v___x_607_);
lean_ctor_set(v___x_609_, 1, v___x_608_);
v___x_610_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8___redArg(v_ref_597_, v___x_609_, v_constName_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg___boxed(lean_object* v_ref_611_, lean_object* v_constName_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg(v_ref_611_, v_constName_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
lean_dec(v___y_614_);
lean_dec_ref(v___y_613_);
lean_dec(v_ref_611_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4___redArg(lean_object* v_constName_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
lean_object* v_ref_625_; lean_object* v___x_626_; 
v_ref_625_ = lean_ctor_get(v___y_622_, 2);
v___x_626_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg(v_ref_625_, v_constName_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4___redArg___boxed(lean_object* v_constName_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4___redArg(v_constName_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec(v___y_629_);
lean_dec_ref(v___y_628_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4(lean_object* v_constName_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v___x_640_; lean_object* v_env_641_; uint8_t v___x_642_; lean_object* v___x_643_; 
v___x_640_ = lean_st_ref_get(v___y_638_);
v_env_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc_ref(v_env_641_);
lean_dec(v___x_640_);
v___x_642_ = 0;
lean_inc(v_constName_634_);
v___x_643_ = l_Lean_Environment_find_x3f(v_env_641_, v_constName_634_, v___x_642_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4___redArg(v_constName_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
return v___x_644_;
}
else
{
lean_object* v_val_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_dec(v_constName_634_);
v_val_645_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_643_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_val_645_);
lean_dec(v___x_643_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
lean_ctor_set_tag(v___x_647_, 0);
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_val_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4___boxed(lean_object* v_constName_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4(v_constName_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___lam__0(lean_object* v_binderType_660_, lean_object* v_body_661_, lean_object* v_binderName_662_, uint8_t v_binderInfo_663_, lean_object* v_x_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go(v_binderType_660_, v___y_665_, v___y_666_, v___y_667_, v___y_668_);
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v_a_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v_a_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_a_671_);
lean_dec_ref_known(v___x_670_, 1);
v___x_672_ = lean_expr_instantiate1(v_body_661_, v_x_664_);
v___x_673_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go(v___x_672_, v___y_665_, v___y_666_, v___y_667_, v___y_668_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; uint8_t v___x_675_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
v___x_675_ = l_Lean_Expr_isErased(v_a_674_);
if (v___x_675_ == 0)
{
lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_687_; 
lean_inc(v_a_674_);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_687_ == 0)
{
lean_object* v_unused_688_; 
v_unused_688_ = lean_ctor_get(v___x_673_, 0);
lean_dec(v_unused_688_);
v___x_677_ = v___x_673_;
v_isShared_678_ = v_isSharedCheck_687_;
goto v_resetjp_676_;
}
else
{
lean_dec(v___x_673_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_687_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_685_; 
v___x_679_ = lean_unsigned_to_nat(1u);
v___x_680_ = lean_mk_empty_array_with_capacity(v___x_679_);
v___x_681_ = lean_array_push(v___x_680_, v_x_664_);
v___x_682_ = lean_expr_abstract(v_a_674_, v___x_681_);
lean_dec_ref(v___x_681_);
lean_dec(v_a_674_);
v___x_683_ = l_Lean_Expr_lam___override(v_binderName_662_, v_a_671_, v___x_682_, v_binderInfo_663_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v___x_683_);
v___x_685_ = v___x_677_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_683_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
else
{
lean_dec(v_a_671_);
lean_dec_ref(v_x_664_);
lean_dec(v_binderName_662_);
return v___x_673_;
}
}
else
{
lean_dec(v_a_671_);
lean_dec_ref(v_x_664_);
lean_dec(v_binderName_662_);
return v___x_673_;
}
}
else
{
lean_dec_ref(v_x_664_);
lean_dec(v_binderName_662_);
return v___x_670_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___lam__0___boxed(lean_object* v_binderType_689_, lean_object* v_body_690_, lean_object* v_binderName_691_, lean_object* v_binderInfo_692_, lean_object* v_x_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
uint8_t v_binderInfo_9950__boxed_699_; lean_object* v_res_700_; 
v_binderInfo_9950__boxed_699_ = lean_unbox(v_binderInfo_692_);
v_res_700_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___lam__0(v_binderType_689_, v_body_690_, v_binderName_691_, v_binderInfo_9950__boxed_699_, v_x_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
lean_dec(v___y_697_);
lean_dec_ref(v___y_696_);
lean_dec(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec_ref(v_body_690_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall___lam__0(lean_object* v_xs_701_, lean_object* v_body_702_, lean_object* v_binderName_703_, uint8_t v_binderInfo_704_, lean_object* v_d_705_, lean_object* v_x_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v_d_713_; uint8_t v_isBorrowed_725_; lean_object* v___x_726_; 
v_isBorrowed_725_ = l_Lean_isMarkedBorrowed(v_d_705_);
v___x_726_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go(v_d_705_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_728_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
v___x_728_ = lean_expr_abstract(v_a_727_, v_xs_701_);
lean_dec(v_a_727_);
if (v_isBorrowed_725_ == 0)
{
v_d_713_ = v___x_728_;
goto v___jp_712_;
}
else
{
lean_object* v___x_729_; 
v___x_729_ = l_Lean_markBorrowed(v___x_728_);
v_d_713_ = v___x_729_;
goto v___jp_712_;
}
}
else
{
lean_dec_ref(v_x_706_);
lean_dec(v_binderName_703_);
lean_dec_ref(v_body_702_);
lean_dec_ref(v_xs_701_);
return v___x_726_;
}
v___jp_712_:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = lean_array_push(v_xs_701_, v_x_706_);
v___x_715_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall(v_body_702_, v___x_714_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_724_; 
v_a_716_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_724_ == 0)
{
v___x_718_ = v___x_715_;
v_isShared_719_ = v_isSharedCheck_724_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_715_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_724_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_720_; lean_object* v___x_722_; 
v___x_720_ = l_Lean_Expr_forallE___override(v_binderName_703_, v_d_713_, v_a_716_, v_binderInfo_704_);
if (v_isShared_719_ == 0)
{
lean_ctor_set(v___x_718_, 0, v___x_720_);
v___x_722_ = v___x_718_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_720_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
else
{
lean_dec_ref(v_d_713_);
lean_dec(v_binderName_703_);
return v___x_715_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall___lam__0___boxed(lean_object* v_xs_730_, lean_object* v_body_731_, lean_object* v_binderName_732_, lean_object* v_binderInfo_733_, lean_object* v_d_734_, lean_object* v_x_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_){
_start:
{
uint8_t v_binderInfo_9972__boxed_741_; lean_object* v_res_742_; 
v_binderInfo_9972__boxed_741_ = lean_unbox(v_binderInfo_733_);
v_res_742_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall___lam__0(v_xs_730_, v_body_731_, v_binderName_732_, v_binderInfo_9972__boxed_741_, v_d_734_, v_x_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall(lean_object* v_e_743_, lean_object* v_xs_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_){
_start:
{
if (lean_obj_tag(v_e_743_) == 7)
{
lean_object* v_binderName_750_; lean_object* v_binderType_751_; lean_object* v_body_752_; uint8_t v_binderInfo_753_; lean_object* v_d_754_; lean_object* v___x_755_; lean_object* v___f_756_; uint8_t v___x_757_; lean_object* v___x_758_; 
v_binderName_750_ = lean_ctor_get(v_e_743_, 0);
lean_inc_n(v_binderName_750_, 2);
v_binderType_751_ = lean_ctor_get(v_e_743_, 1);
lean_inc_ref(v_binderType_751_);
v_body_752_ = lean_ctor_get(v_e_743_, 2);
lean_inc_ref(v_body_752_);
v_binderInfo_753_ = lean_ctor_get_uint8(v_e_743_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_743_, 3);
v_d_754_ = lean_expr_instantiate_rev(v_binderType_751_, v_xs_744_);
lean_dec_ref(v_binderType_751_);
v___x_755_ = lean_box(v_binderInfo_753_);
lean_inc_ref(v_d_754_);
v___f_756_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall___lam__0___boxed), 11, 5);
lean_closure_set(v___f_756_, 0, v_xs_744_);
lean_closure_set(v___f_756_, 1, v_body_752_);
lean_closure_set(v___f_756_, 2, v_binderName_750_);
lean_closure_set(v___f_756_, 3, v___x_755_);
lean_closure_set(v___f_756_, 4, v_d_754_);
v___x_757_ = 0;
v___x_758_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg(v_binderName_750_, v_binderInfo_753_, v_d_754_, v___f_756_, v___x_757_, v_a_745_, v_a_746_, v_a_747_, v_a_748_);
return v___x_758_;
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_expr_instantiate_rev(v_e_743_, v_xs_744_);
lean_dec_ref(v_e_743_);
v___x_760_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go(v___x_759_, v_a_745_, v_a_746_, v_a_747_, v_a_748_);
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_769_; 
v_a_761_ = lean_ctor_get(v___x_760_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_769_ == 0)
{
v___x_763_ = v___x_760_;
v_isShared_764_ = v_isSharedCheck_769_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_760_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_769_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_765_; lean_object* v___x_767_; 
v___x_765_ = lean_expr_abstract(v_a_761_, v_xs_744_);
lean_dec_ref(v_xs_744_);
lean_dec(v_a_761_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 0, v___x_765_);
v___x_767_ = v___x_763_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v___x_765_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
else
{
lean_dec_ref(v_xs_744_);
return v___x_760_;
}
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__0(void){
_start:
{
lean_object* v___x_770_; lean_object* v_dummy_771_; 
v___x_770_ = lean_box(0);
v_dummy_771_ = l_Lean_Expr_sort___override(v___x_770_);
return v_dummy_771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go(lean_object* v_type_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_){
_start:
{
lean_object* v___x_786_; 
lean_inc_ref(v_type_777_);
v___x_786_ = l_Lean_Meta_isProp(v_type_777_, v_a_778_, v_a_779_, v_a_780_, v_a_781_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_856_; 
v_a_787_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_856_ == 0)
{
v___x_789_ = v___x_786_;
v_isShared_790_ = v_isSharedCheck_856_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_786_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_856_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
uint8_t v___x_791_; 
v___x_791_ = lean_unbox(v_a_787_);
lean_dec(v_a_787_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; 
lean_del_object(v___x_789_);
v___x_792_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_whnfEta(v_type_777_, v_a_778_, v_a_779_, v_a_780_, v_a_781_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
switch(lean_obj_tag(v_a_793_))
{
case 3:
{
return v___x_792_;
}
case 4:
{
lean_object* v___x_794_; lean_object* v___x_795_; 
lean_inc_ref(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
v___x_794_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___closed__0));
v___x_795_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp(v_a_793_, v___x_794_, v_a_778_, v_a_779_, v_a_780_, v_a_781_);
return v___x_795_;
}
case 6:
{
lean_object* v_binderName_796_; lean_object* v_binderType_797_; lean_object* v_body_798_; uint8_t v_binderInfo_799_; lean_object* v___x_800_; lean_object* v___f_801_; uint8_t v___x_802_; lean_object* v___x_803_; 
lean_inc_ref(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
v_binderName_796_ = lean_ctor_get(v_a_793_, 0);
lean_inc_n(v_binderName_796_, 2);
v_binderType_797_ = lean_ctor_get(v_a_793_, 1);
lean_inc_ref_n(v_binderType_797_, 2);
v_body_798_ = lean_ctor_get(v_a_793_, 2);
lean_inc_ref(v_body_798_);
v_binderInfo_799_ = lean_ctor_get_uint8(v_a_793_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_793_, 3);
v___x_800_ = lean_box(v_binderInfo_799_);
v___f_801_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___lam__0___boxed), 10, 4);
lean_closure_set(v___f_801_, 0, v_binderType_797_);
lean_closure_set(v___f_801_, 1, v_body_798_);
lean_closure_set(v___f_801_, 2, v_binderName_796_);
lean_closure_set(v___f_801_, 3, v___x_800_);
v___x_802_ = 0;
v___x_803_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go_spec__0___redArg(v_binderName_796_, v_binderInfo_799_, v_binderType_797_, v___f_801_, v___x_802_, v_a_778_, v_a_779_, v_a_780_, v_a_781_);
return v___x_803_;
}
case 7:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
lean_inc_ref(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
v___x_804_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___closed__0));
v___x_805_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall(v_a_793_, v___x_804_, v_a_778_, v_a_779_, v_a_780_, v_a_781_);
return v___x_805_;
}
case 5:
{
lean_object* v_dummy_806_; lean_object* v_nargs_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
lean_inc_ref(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
v_dummy_806_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__0, &l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__0);
v_nargs_807_ = l_Lean_Expr_getAppNumArgs(v_a_793_);
lean_inc(v_nargs_807_);
v___x_808_ = lean_mk_array(v_nargs_807_, v_dummy_806_);
v___x_809_ = lean_unsigned_to_nat(1u);
v___x_810_ = lean_nat_sub(v_nargs_807_, v___x_809_);
lean_dec(v_nargs_807_);
v___x_811_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go_spec__0(v_a_793_, v___x_808_, v___x_810_, v_a_778_, v_a_779_, v_a_780_, v_a_781_);
return v___x_811_;
}
case 1:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
lean_inc_ref(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
v___x_812_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_isPropFormerType_go___closed__0));
v___x_813_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp(v_a_793_, v___x_812_, v_a_778_, v_a_779_, v_a_780_, v_a_781_);
return v___x_813_;
}
case 11:
{
lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_850_; 
lean_inc_ref(v_a_793_);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_850_ == 0)
{
lean_object* v_unused_851_; 
v_unused_851_ = lean_ctor_get(v___x_792_, 0);
lean_dec(v_unused_851_);
v___x_815_ = v___x_792_;
v_isShared_816_ = v_isSharedCheck_850_;
goto v_resetjp_814_;
}
else
{
lean_dec(v___x_792_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_850_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v_typeName_817_; 
v_typeName_817_ = lean_ctor_get(v_a_793_, 0);
lean_inc(v_typeName_817_);
if (lean_obj_tag(v_typeName_817_) == 1)
{
lean_object* v_pre_818_; 
v_pre_818_ = lean_ctor_get(v_typeName_817_, 0);
if (lean_obj_tag(v_pre_818_) == 0)
{
lean_object* v_idx_819_; lean_object* v_struct_820_; lean_object* v_str_821_; lean_object* v___x_822_; uint8_t v___x_823_; 
v_idx_819_ = lean_ctor_get(v_a_793_, 1);
lean_inc(v_idx_819_);
v_struct_820_ = lean_ctor_get(v_a_793_, 2);
lean_inc_ref(v_struct_820_);
lean_dec_ref_known(v_a_793_, 3);
v_str_821_ = lean_ctor_get(v_typeName_817_, 1);
lean_inc_ref(v_str_821_);
lean_dec_ref_known(v_typeName_817_, 2);
v___x_822_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__1));
v___x_823_ = lean_string_dec_eq(v_str_821_, v___x_822_);
lean_dec_ref(v_str_821_);
if (v___x_823_ == 0)
{
lean_dec_ref(v_struct_820_);
lean_dec(v_idx_819_);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
else
{
lean_object* v___x_824_; uint8_t v___x_825_; 
v___x_824_ = lean_unsigned_to_nat(0u);
v___x_825_ = lean_nat_dec_eq(v_idx_819_, v___x_824_);
lean_dec(v_idx_819_);
if (v___x_825_ == 0)
{
lean_dec_ref(v_struct_820_);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
else
{
if (lean_obj_tag(v_struct_820_) == 5)
{
lean_object* v_fn_826_; 
v_fn_826_ = lean_ctor_get(v_struct_820_, 0);
lean_inc_ref(v_fn_826_);
lean_dec_ref_known(v_struct_820_, 2);
if (lean_obj_tag(v_fn_826_) == 4)
{
lean_object* v_declName_827_; 
v_declName_827_ = lean_ctor_get(v_fn_826_, 0);
lean_inc(v_declName_827_);
if (lean_obj_tag(v_declName_827_) == 1)
{
lean_object* v_pre_828_; 
v_pre_828_ = lean_ctor_get(v_declName_827_, 0);
lean_inc(v_pre_828_);
if (lean_obj_tag(v_pre_828_) == 1)
{
lean_object* v_pre_829_; 
v_pre_829_ = lean_ctor_get(v_pre_828_, 0);
lean_inc(v_pre_829_);
if (lean_obj_tag(v_pre_829_) == 1)
{
lean_object* v_pre_830_; 
v_pre_830_ = lean_ctor_get(v_pre_829_, 0);
lean_inc(v_pre_830_);
if (lean_obj_tag(v_pre_830_) == 1)
{
lean_object* v_pre_831_; 
v_pre_831_ = lean_ctor_get(v_pre_830_, 0);
if (lean_obj_tag(v_pre_831_) == 0)
{
lean_object* v_us_832_; lean_object* v_str_833_; lean_object* v_str_834_; lean_object* v_str_835_; lean_object* v_str_836_; lean_object* v___x_837_; uint8_t v___x_838_; 
v_us_832_ = lean_ctor_get(v_fn_826_, 1);
lean_inc(v_us_832_);
lean_dec_ref_known(v_fn_826_, 2);
v_str_833_ = lean_ctor_get(v_declName_827_, 1);
lean_inc_ref(v_str_833_);
lean_dec_ref_known(v_declName_827_, 2);
v_str_834_ = lean_ctor_get(v_pre_828_, 1);
lean_inc_ref(v_str_834_);
lean_dec_ref_known(v_pre_828_, 2);
v_str_835_ = lean_ctor_get(v_pre_829_, 1);
lean_inc_ref(v_str_835_);
lean_dec_ref_known(v_pre_829_, 2);
v_str_836_ = lean_ctor_get(v_pre_830_, 1);
lean_inc_ref(v_str_836_);
lean_dec_ref_known(v_pre_830_, 2);
v___x_837_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__2));
v___x_838_ = lean_string_dec_eq(v_str_836_, v___x_837_);
lean_dec_ref(v_str_836_);
if (v___x_838_ == 0)
{
lean_dec_ref(v_str_835_);
lean_dec_ref(v_str_834_);
lean_dec_ref(v_str_833_);
lean_dec(v_us_832_);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
else
{
lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_839_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__3));
v___x_840_ = lean_string_dec_eq(v_str_835_, v___x_839_);
lean_dec_ref(v_str_835_);
if (v___x_840_ == 0)
{
lean_dec_ref(v_str_834_);
lean_dec_ref(v_str_833_);
lean_dec(v_us_832_);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
else
{
lean_object* v___x_841_; uint8_t v___x_842_; 
v___x_841_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__4));
v___x_842_ = lean_string_dec_eq(v_str_834_, v___x_841_);
lean_dec_ref(v_str_834_);
if (v___x_842_ == 0)
{
lean_dec_ref(v_str_833_);
lean_dec(v_us_832_);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
else
{
lean_object* v___x_843_; uint8_t v___x_844_; 
v___x_843_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___closed__5));
v___x_844_ = lean_string_dec_eq(v_str_833_, v___x_843_);
lean_dec_ref(v_str_833_);
if (v___x_844_ == 0)
{
lean_dec(v_us_832_);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
else
{
if (lean_obj_tag(v_us_832_) == 0)
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_848_; 
v___x_845_ = ((lean_object*)(l_Lean_Expr_isVoid___closed__1));
v___x_846_ = l_Lean_mkConst(v___x_845_, v_us_832_);
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 0, v___x_846_);
v___x_848_ = v___x_815_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_846_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
else
{
lean_dec(v_us_832_);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_830_, 2);
lean_dec_ref_known(v_pre_829_, 2);
lean_dec_ref_known(v_pre_828_, 2);
lean_dec_ref_known(v_declName_827_, 2);
lean_dec_ref_known(v_fn_826_, 2);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
}
else
{
lean_dec_ref_known(v_pre_829_, 2);
lean_dec(v_pre_830_);
lean_dec_ref_known(v_pre_828_, 2);
lean_dec_ref_known(v_declName_827_, 2);
lean_dec_ref_known(v_fn_826_, 2);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
}
else
{
lean_dec_ref_known(v_pre_828_, 2);
lean_dec(v_pre_829_);
lean_dec_ref_known(v_declName_827_, 2);
lean_dec_ref_known(v_fn_826_, 2);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
}
else
{
lean_dec(v_pre_828_);
lean_dec_ref_known(v_declName_827_, 2);
lean_dec_ref_known(v_fn_826_, 2);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
}
else
{
lean_dec_ref_known(v_fn_826_, 2);
lean_dec(v_declName_827_);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
}
else
{
lean_dec_ref(v_fn_826_);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
}
else
{
lean_dec_ref(v_struct_820_);
lean_del_object(v___x_815_);
goto v___jp_783_;
}
}
}
}
else
{
lean_dec_ref_known(v_typeName_817_, 2);
lean_del_object(v___x_815_);
lean_dec_ref_known(v_a_793_, 3);
goto v___jp_783_;
}
}
else
{
lean_dec(v_typeName_817_);
lean_del_object(v___x_815_);
lean_dec_ref_known(v_a_793_, 3);
goto v___jp_783_;
}
}
}
default: 
{
lean_dec_ref_known(v___x_792_, 1);
goto v___jp_783_;
}
}
}
else
{
return v___x_792_;
}
}
else
{
lean_object* v___x_852_; lean_object* v___x_854_; 
lean_dec_ref(v_type_777_);
v___x_852_ = l_Lean_Compiler_LCNF_erasedExpr;
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v___x_852_);
v___x_854_ = v___x_789_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v___x_852_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
}
else
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
lean_dec_ref(v_type_777_);
v_a_857_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_786_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_786_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_857_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
v___jp_783_:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = lean_obj_once(&l_Lean_Compiler_LCNF_anyExpr___closed__2, &l_Lean_Compiler_LCNF_anyExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_anyExpr___closed__2);
v___x_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
return v___x_785_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__3(lean_object* v_as_865_, size_t v_sz_866_, size_t v_i_867_, lean_object* v_b_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v_a_875_; uint8_t v___x_882_; 
v___x_882_ = lean_usize_dec_lt(v_i_867_, v_sz_866_);
if (v___x_882_ == 0)
{
lean_object* v___x_883_; 
v___x_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_883_, 0, v_b_868_);
return v___x_883_;
}
else
{
lean_object* v_a_884_; lean_object* v___x_885_; 
v_a_884_ = lean_array_uget_borrowed(v_as_865_, v_i_867_);
lean_inc(v_a_884_);
v___x_885_ = l_Lean_Meta_isProp(v_a_884_, v___y_869_, v___y_870_, v___y_871_, v___y_872_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; uint8_t v___x_887_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = lean_unbox(v_a_886_);
lean_dec(v_a_886_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; 
lean_inc(v_a_884_);
v___x_888_ = l_Lean_Compiler_LCNF_isPropFormer(v_a_884_, v___y_869_, v___y_870_, v___y_871_, v___y_872_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; uint8_t v___x_890_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_888_, 1);
v___x_890_ = lean_unbox(v_a_889_);
lean_dec(v_a_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; 
lean_inc(v_a_884_);
v___x_891_ = l_Lean_Meta_isTypeFormer(v_a_884_, v___y_869_, v___y_870_, v___y_871_, v___y_872_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v_a_892_; uint8_t v___x_893_; 
v_a_892_ = lean_ctor_get(v___x_891_, 0);
lean_inc(v_a_892_);
lean_dec_ref_known(v___x_891_, 1);
v___x_893_ = lean_unbox(v_a_892_);
lean_dec(v_a_892_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = lean_obj_once(&l_Lean_Compiler_LCNF_anyExpr___closed__2, &l_Lean_Compiler_LCNF_anyExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_anyExpr___closed__2);
v___x_895_ = l_Lean_Expr_app___override(v_b_868_, v___x_894_);
v_a_875_ = v___x_895_;
goto v___jp_874_;
}
else
{
lean_object* v___x_896_; 
lean_inc(v_a_884_);
v___x_896_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go(v_a_884_, v___y_869_, v___y_870_, v___y_871_, v___y_872_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_898_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_896_, 1);
v___x_898_ = l_Lean_Expr_app___override(v_b_868_, v_a_897_);
v_a_875_ = v___x_898_;
goto v___jp_874_;
}
else
{
lean_dec_ref(v_b_868_);
return v___x_896_;
}
}
}
else
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
lean_dec_ref(v_b_868_);
v_a_899_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_891_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_891_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
else
{
goto v___jp_879_;
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec_ref(v_b_868_);
v_a_907_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_888_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_888_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
else
{
goto v___jp_879_;
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec_ref(v_b_868_);
v_a_915_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_885_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_885_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
v___jp_874_:
{
size_t v___x_876_; size_t v___x_877_; 
v___x_876_ = ((size_t)1ULL);
v___x_877_ = lean_usize_add(v_i_867_, v___x_876_);
v_i_867_ = v___x_877_;
v_b_868_ = v_a_875_;
goto _start;
}
v___jp_879_:
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_881_ = l_Lean_Expr_app___override(v_b_868_, v___x_880_);
v_a_875_ = v___x_881_;
goto v___jp_874_;
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___closed__1(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___closed__0));
v___x_925_ = l_Lean_stringToMessageData(v___x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp(lean_object* v_f_926_, lean_object* v_args_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
lean_object* v_fNew_934_; lean_object* v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___y_938_; 
switch(lean_obj_tag(v_f_926_))
{
case 4:
{
lean_object* v_declName_942_; lean_object* v___y_944_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___x_966_; lean_object* v_env_967_; uint8_t v_isExporting_968_; 
v_declName_942_ = lean_ctor_get(v_f_926_, 0);
v___x_966_ = lean_st_ref_get(v_a_931_);
v_env_967_ = lean_ctor_get(v___x_966_, 0);
lean_inc_ref(v_env_967_);
lean_dec(v___x_966_);
v_isExporting_968_ = lean_ctor_get_uint8(v_env_967_, sizeof(void*)*13);
lean_dec_ref(v_env_967_);
if (v_isExporting_968_ == 0)
{
v___y_944_ = v_a_928_;
v___y_945_ = v_a_929_;
v___y_946_ = v_a_930_;
v___y_947_ = v_a_931_;
goto v___jp_943_;
}
else
{
uint8_t v___x_969_; 
v___x_969_ = l_Lean_isPrivateName(v_declName_942_);
if (v___x_969_ == 0)
{
v___y_944_ = v_a_928_;
v___y_945_ = v_a_929_;
v___y_946_ = v_a_930_;
v___y_947_ = v_a_931_;
goto v___jp_943_;
}
else
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___closed__1, &l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___closed__1_once, _init_l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___closed__1);
v___x_971_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5___redArg(v___x_970_, v_a_928_, v_a_929_, v_a_930_, v_a_931_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_dec_ref_known(v___x_971_, 1);
v___y_944_ = v_a_928_;
v___y_945_ = v_a_929_;
v___y_946_ = v_a_930_;
v___y_947_ = v_a_931_;
goto v___jp_943_;
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec_ref_known(v_f_926_, 2);
v_a_972_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_971_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_971_);
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
v___jp_943_:
{
lean_object* v___x_948_; 
lean_inc(v_declName_942_);
v___x_948_ = l_Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4(v_declName_942_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_957_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_957_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
if (lean_obj_tag(v_a_949_) == 5)
{
lean_dec_ref_known(v_a_949_, 1);
lean_del_object(v___x_951_);
v_fNew_934_ = v_f_926_;
v___y_935_ = v___y_944_;
v___y_936_ = v___y_945_;
v___y_937_ = v___y_946_;
v___y_938_ = v___y_947_;
goto v___jp_933_;
}
else
{
lean_object* v___x_953_; lean_object* v___x_955_; 
lean_dec(v_a_949_);
lean_dec_ref_known(v_f_926_, 2);
v___x_953_ = l_Lean_Compiler_LCNF_anyExpr;
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_953_);
v___x_955_ = v___x_951_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
else
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec_ref_known(v_f_926_, 2);
v_a_958_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_948_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_948_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
case 1:
{
v_fNew_934_ = v_f_926_;
v___y_935_ = v_a_928_;
v___y_936_ = v_a_929_;
v___y_937_ = v_a_930_;
v___y_938_ = v_a_931_;
goto v___jp_933_;
}
default: 
{
lean_object* v___x_980_; lean_object* v___x_981_; 
lean_dec_ref(v_f_926_);
v___x_980_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
return v___x_981_;
}
}
v___jp_933_:
{
size_t v_sz_939_; size_t v___x_940_; lean_object* v___x_941_; 
v_sz_939_ = lean_array_size(v_args_927_);
v___x_940_ = ((size_t)0ULL);
v___x_941_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__3(v_args_927_, v_sz_939_, v___x_940_, v_fNew_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_);
return v___x_941_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go_spec__0(lean_object* v_x_982_, lean_object* v_x_983_, lean_object* v_x_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
if (lean_obj_tag(v_x_982_) == 5)
{
lean_object* v_fn_990_; lean_object* v_arg_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v_fn_990_ = lean_ctor_get(v_x_982_, 0);
lean_inc_ref(v_fn_990_);
v_arg_991_ = lean_ctor_get(v_x_982_, 1);
lean_inc_ref(v_arg_991_);
lean_dec_ref_known(v_x_982_, 2);
v___x_992_ = lean_array_set(v_x_983_, v_x_984_, v_arg_991_);
v___x_993_ = lean_unsigned_to_nat(1u);
v___x_994_ = lean_nat_sub(v_x_984_, v___x_993_);
lean_dec(v_x_984_);
v_x_982_ = v_fn_990_;
v_x_983_ = v___x_992_;
v_x_984_ = v___x_994_;
goto _start;
}
else
{
lean_object* v___x_996_; 
lean_dec(v_x_984_);
v___x_996_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp(v_x_982_, v_x_983_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec_ref(v_x_983_);
return v___x_996_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go_spec__0___boxed(lean_object* v_x_997_, lean_object* v_x_998_, lean_object* v_x_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go_spec__0(v_x_997_, v_x_998_, v_x_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall___boxed(lean_object* v_e_1006_, lean_object* v_xs_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall(v_e_1006_, v_xs_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
lean_dec(v_a_1009_);
lean_dec_ref(v_a_1008_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp___boxed(lean_object* v_f_1014_, lean_object* v_args_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp(v_f_1014_, v_args_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_);
lean_dec(v_a_1019_);
lean_dec_ref(v_a_1018_);
lean_dec(v_a_1017_);
lean_dec_ref(v_a_1016_);
lean_dec_ref(v_args_1015_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__3___boxed(lean_object* v_as_1022_, lean_object* v_sz_1023_, lean_object* v_i_1024_, lean_object* v_b_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
size_t v_sz_boxed_1031_; size_t v_i_boxed_1032_; lean_object* v_res_1033_; 
v_sz_boxed_1031_ = lean_unbox_usize(v_sz_1023_);
lean_dec(v_sz_1023_);
v_i_boxed_1032_ = lean_unbox_usize(v_i_1024_);
lean_dec(v_i_1024_);
v_res_1033_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__3(v_as_1022_, v_sz_boxed_1031_, v_i_boxed_1032_, v_b_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec_ref(v_as_1022_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___boxed(lean_object* v_type_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go(v_type_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_);
lean_dec(v_a_1038_);
lean_dec_ref(v_a_1037_);
lean_dec(v_a_1036_);
lean_dec_ref(v_a_1035_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5(lean_object* v_00_u03b1_1041_, lean_object* v_msg_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v___x_1048_; 
v___x_1048_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5___redArg(v_msg_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5___boxed(lean_object* v_00_u03b1_1049_, lean_object* v_msg_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5(v_00_u03b1_1049_, v_msg_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4(lean_object* v_00_u03b1_1057_, lean_object* v_constName_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4___redArg(v_constName_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4___boxed(lean_object* v_00_u03b1_1065_, lean_object* v_constName_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4(v_00_u03b1_1065_, v_constName_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5(lean_object* v_00_u03b1_1073_, lean_object* v_ref_1074_, lean_object* v_constName_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___redArg(v_ref_1074_, v_constName_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5___boxed(lean_object* v_00_u03b1_1082_, lean_object* v_ref_1083_, lean_object* v_constName_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5(v_00_u03b1_1082_, v_ref_1083_, v_constName_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
lean_dec(v_ref_1083_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8(lean_object* v_00_u03b1_1091_, lean_object* v_ref_1092_, lean_object* v_msg_1093_, lean_object* v_declHint_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8___redArg(v_ref_1092_, v_msg_1093_, v_declHint_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1101_, lean_object* v_ref_1102_, lean_object* v_msg_1103_, lean_object* v_declHint_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8(v_00_u03b1_1101_, v_ref_1102_, v_msg_1103_, v_declHint_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec(v___y_1106_);
lean_dec_ref(v___y_1105_);
lean_dec(v_ref_1102_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10(lean_object* v_msg_1111_, lean_object* v_declHint_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg(v_msg_1111_, v_declHint_1112_, v___y_1116_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___boxed(lean_object* v_msg_1119_, lean_object* v_declHint_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10(v_msg_1119_, v_declHint_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10(lean_object* v_00_u03b1_1127_, lean_object* v_ref_1128_, lean_object* v_msg_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v___x_1135_; 
v___x_1135_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10___redArg(v_ref_1128_, v_msg_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10___boxed(lean_object* v_00_u03b1_1136_, lean_object* v_ref_1137_, lean_object* v_msg_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__10(v_00_u03b1_1136_, v_ref_1137_, v_msg_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v_ref_1137_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_LCNF_toLCNFType_spec__4(lean_object* v_opts_1145_, lean_object* v_opt_1146_){
_start:
{
lean_object* v_name_1147_; lean_object* v_defValue_1148_; lean_object* v_map_1149_; lean_object* v___x_1150_; 
v_name_1147_ = lean_ctor_get(v_opt_1146_, 0);
v_defValue_1148_ = lean_ctor_get(v_opt_1146_, 1);
v_map_1149_ = lean_ctor_get(v_opts_1145_, 0);
v___x_1150_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1149_, v_name_1147_);
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_inc(v_defValue_1148_);
return v_defValue_1148_;
}
else
{
lean_object* v_val_1151_; 
v_val_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc(v_val_1151_);
lean_dec_ref_known(v___x_1150_, 1);
if (lean_obj_tag(v_val_1151_) == 3)
{
lean_object* v_v_1152_; 
v_v_1152_ = lean_ctor_get(v_val_1151_, 0);
lean_inc(v_v_1152_);
lean_dec_ref_known(v_val_1151_, 1);
return v_v_1152_;
}
else
{
lean_dec(v_val_1151_);
lean_inc(v_defValue_1148_);
return v_defValue_1148_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_LCNF_toLCNFType_spec__4___boxed(lean_object* v_opts_1153_, lean_object* v_opt_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_toLCNFType_spec__4(v_opts_1153_, v_opt_1154_);
lean_dec_ref(v_opt_1154_);
lean_dec_ref(v_opts_1153_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toLCNFType___lam__0(lean_object* v_a_1156_, lean_object* v_diag_1157_, lean_object* v_a_x3f_1158_){
_start:
{
lean_object* v___x_1160_; lean_object* v_mctx_1161_; lean_object* v_cache_1162_; lean_object* v_zetaDeltaFVarIds_1163_; lean_object* v_postponed_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1174_; 
v___x_1160_ = lean_st_ref_take(v_a_1156_);
v_mctx_1161_ = lean_ctor_get(v___x_1160_, 0);
v_cache_1162_ = lean_ctor_get(v___x_1160_, 1);
v_zetaDeltaFVarIds_1163_ = lean_ctor_get(v___x_1160_, 2);
v_postponed_1164_ = lean_ctor_get(v___x_1160_, 3);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1174_ == 0)
{
lean_object* v_unused_1175_; 
v_unused_1175_ = lean_ctor_get(v___x_1160_, 4);
lean_dec(v_unused_1175_);
v___x_1166_ = v___x_1160_;
v_isShared_1167_ = v_isSharedCheck_1174_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_postponed_1164_);
lean_inc(v_zetaDeltaFVarIds_1163_);
lean_inc(v_cache_1162_);
lean_inc(v_mctx_1161_);
lean_dec(v___x_1160_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1174_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1168_ = lean_box(0);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 4, v_diag_1157_);
v___x_1170_ = v___x_1166_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_mctx_1161_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v_cache_1162_);
lean_ctor_set(v_reuseFailAlloc_1173_, 2, v_zetaDeltaFVarIds_1163_);
lean_ctor_set(v_reuseFailAlloc_1173_, 3, v_postponed_1164_);
lean_ctor_set(v_reuseFailAlloc_1173_, 4, v_diag_1157_);
v___x_1170_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1171_ = lean_st_ref_put(v_a_1156_, v___x_1170_);
v___x_1172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1168_);
return v___x_1172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toLCNFType___lam__0___boxed(lean_object* v_a_1176_, lean_object* v_diag_1177_, lean_object* v_a_x3f_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l_Lean_Compiler_LCNF_toLCNFType___lam__0(v_a_1176_, v_diag_1177_, v_a_x3f_1178_);
lean_dec(v_a_x3f_1178_);
lean_dec(v_a_1176_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14___redArg(lean_object* v_f_1181_, lean_object* v_keys_1182_, lean_object* v_vals_1183_, lean_object* v_i_1184_, lean_object* v_acc_1185_){
_start:
{
lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1186_ = lean_array_get_size(v_keys_1182_);
v___x_1187_ = lean_nat_dec_lt(v_i_1184_, v___x_1186_);
if (v___x_1187_ == 0)
{
lean_dec(v_i_1184_);
lean_dec(v_f_1181_);
return v_acc_1185_;
}
else
{
lean_object* v_k_1188_; lean_object* v_v_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v_k_1188_ = lean_array_fget_borrowed(v_keys_1182_, v_i_1184_);
v_v_1189_ = lean_array_fget_borrowed(v_vals_1183_, v_i_1184_);
lean_inc(v_f_1181_);
lean_inc(v_v_1189_);
lean_inc(v_k_1188_);
v___x_1190_ = lean_apply_3(v_f_1181_, v_acc_1185_, v_k_1188_, v_v_1189_);
v___x_1191_ = lean_unsigned_to_nat(1u);
v___x_1192_ = lean_nat_add(v_i_1184_, v___x_1191_);
lean_dec(v_i_1184_);
v_i_1184_ = v___x_1192_;
v_acc_1185_ = v___x_1190_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14___redArg___boxed(lean_object* v_f_1194_, lean_object* v_keys_1195_, lean_object* v_vals_1196_, lean_object* v_i_1197_, lean_object* v_acc_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14___redArg(v_f_1194_, v_keys_1195_, v_vals_1196_, v_i_1197_, v_acc_1198_);
lean_dec_ref(v_vals_1196_);
lean_dec_ref(v_keys_1195_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13___redArg(lean_object* v_f_1200_, lean_object* v_as_1201_, size_t v_i_1202_, size_t v_stop_1203_, lean_object* v_b_1204_){
_start:
{
lean_object* v___y_1206_; uint8_t v___x_1210_; 
v___x_1210_ = lean_usize_dec_eq(v_i_1202_, v_stop_1203_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; 
v___x_1211_ = lean_array_uget_borrowed(v_as_1201_, v_i_1202_);
switch(lean_obj_tag(v___x_1211_))
{
case 0:
{
lean_object* v_key_1212_; lean_object* v_val_1213_; lean_object* v___x_1214_; 
v_key_1212_ = lean_ctor_get(v___x_1211_, 0);
v_val_1213_ = lean_ctor_get(v___x_1211_, 1);
lean_inc(v_f_1200_);
lean_inc(v_val_1213_);
lean_inc(v_key_1212_);
v___x_1214_ = lean_apply_3(v_f_1200_, v_b_1204_, v_key_1212_, v_val_1213_);
v___y_1206_ = v___x_1214_;
goto v___jp_1205_;
}
case 1:
{
lean_object* v_node_1215_; lean_object* v___x_1216_; 
v_node_1215_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_f_1200_);
v___x_1216_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___redArg(v_f_1200_, v_node_1215_, v_b_1204_);
v___y_1206_ = v___x_1216_;
goto v___jp_1205_;
}
default: 
{
v___y_1206_ = v_b_1204_;
goto v___jp_1205_;
}
}
}
else
{
lean_dec(v_f_1200_);
return v_b_1204_;
}
v___jp_1205_:
{
size_t v___x_1207_; size_t v___x_1208_; 
v___x_1207_ = ((size_t)1ULL);
v___x_1208_ = lean_usize_add(v_i_1202_, v___x_1207_);
v_i_1202_ = v___x_1208_;
v_b_1204_ = v___y_1206_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___redArg(lean_object* v_f_1217_, lean_object* v_x_1218_, lean_object* v_x_1219_){
_start:
{
if (lean_obj_tag(v_x_1218_) == 0)
{
lean_object* v_es_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; uint8_t v___x_1223_; 
v_es_1220_ = lean_ctor_get(v_x_1218_, 0);
v___x_1221_ = lean_unsigned_to_nat(0u);
v___x_1222_ = lean_array_get_size(v_es_1220_);
v___x_1223_ = lean_nat_dec_lt(v___x_1221_, v___x_1222_);
if (v___x_1223_ == 0)
{
lean_dec(v_f_1217_);
return v_x_1219_;
}
else
{
size_t v___x_1224_; size_t v___x_1225_; lean_object* v___x_1226_; 
v___x_1224_ = ((size_t)0ULL);
v___x_1225_ = lean_usize_of_nat(v___x_1222_);
v___x_1226_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13___redArg(v_f_1217_, v_es_1220_, v___x_1224_, v___x_1225_, v_x_1219_);
return v___x_1226_;
}
}
else
{
lean_object* v_ks_1227_; lean_object* v_vs_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v_ks_1227_ = lean_ctor_get(v_x_1218_, 0);
v_vs_1228_ = lean_ctor_get(v_x_1218_, 1);
v___x_1229_ = lean_unsigned_to_nat(0u);
v___x_1230_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14___redArg(v_f_1217_, v_ks_1227_, v_vs_1228_, v___x_1229_, v_x_1219_);
return v___x_1230_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___redArg___boxed(lean_object* v_f_1231_, lean_object* v_x_1232_, lean_object* v_x_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___redArg(v_f_1231_, v_x_1232_, v_x_1233_);
lean_dec_ref(v_x_1232_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13___redArg___boxed(lean_object* v_f_1235_, lean_object* v_as_1236_, lean_object* v_i_1237_, lean_object* v_stop_1238_, lean_object* v_b_1239_){
_start:
{
size_t v_i_boxed_1240_; size_t v_stop_boxed_1241_; lean_object* v_res_1242_; 
v_i_boxed_1240_ = lean_unbox_usize(v_i_1237_);
lean_dec(v_i_1237_);
v_stop_boxed_1241_ = lean_unbox_usize(v_stop_1238_);
lean_dec(v_stop_1238_);
v_res_1242_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13___redArg(v_f_1235_, v_as_1236_, v_i_boxed_1240_, v_stop_boxed_1241_, v_b_1239_);
lean_dec_ref(v_as_1236_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___redArg___lam__0(lean_object* v_f_1243_, lean_object* v_x1_1244_, lean_object* v_x2_1245_, lean_object* v_x3_1246_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = lean_apply_3(v_f_1243_, v_x1_1244_, v_x2_1245_, v_x3_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___redArg(lean_object* v_map_1248_, lean_object* v_f_1249_, lean_object* v_init_1250_){
_start:
{
lean_object* v___f_1251_; lean_object* v___x_1252_; 
v___f_1251_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1251_, 0, v_f_1249_);
v___x_1252_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___redArg(v___f_1251_, v_map_1248_, v_init_1250_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___redArg___boxed(lean_object* v_map_1253_, lean_object* v_f_1254_, lean_object* v_init_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___redArg(v_map_1253_, v_f_1254_, v_init_1255_);
lean_dec_ref(v_map_1253_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg___lam__0(lean_object* v_ps_1257_, lean_object* v_k_1258_, lean_object* v_v_1259_){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1260_, 0, v_k_1258_);
lean_ctor_set(v___x_1260_, 1, v_v_1259_);
v___x_1261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
lean_ctor_set(v___x_1261_, 1, v_ps_1257_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg(lean_object* v_m_1263_){
_start:
{
lean_object* v___f_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___f_1264_ = ((lean_object*)(l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg___closed__0));
v___x_1265_ = lean_box(0);
v___x_1266_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___redArg(v_m_1263_, v___f_1264_, v___x_1265_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg___boxed(lean_object* v_m_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg(v_m_1267_);
lean_dec_ref(v_m_1267_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8(lean_object* v_o_1272_, lean_object* v_k_1273_, uint8_t v_v_1274_){
_start:
{
lean_object* v_map_1275_; uint8_t v_hasTrace_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1290_; 
v_map_1275_ = lean_ctor_get(v_o_1272_, 0);
v_hasTrace_1276_ = lean_ctor_get_uint8(v_o_1272_, sizeof(void*)*1);
v_isSharedCheck_1290_ = !lean_is_exclusive(v_o_1272_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1278_ = v_o_1272_;
v_isShared_1279_ = v_isSharedCheck_1290_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_map_1275_);
lean_dec(v_o_1272_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1290_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1280_, 0, v_v_1274_);
lean_inc(v_k_1273_);
v___x_1281_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1273_, v___x_1280_, v_map_1275_);
if (v_hasTrace_1276_ == 0)
{
lean_object* v___x_1282_; uint8_t v___x_1283_; lean_object* v___x_1285_; 
v___x_1282_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8___closed__1));
v___x_1283_ = l_Lean_Name_isPrefixOf(v___x_1282_, v_k_1273_);
lean_dec(v_k_1273_);
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 0, v___x_1281_);
v___x_1285_ = v___x_1278_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v___x_1281_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
lean_ctor_set_uint8(v___x_1285_, sizeof(void*)*1, v___x_1283_);
return v___x_1285_;
}
}
else
{
lean_object* v___x_1288_; 
lean_dec(v_k_1273_);
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 0, v___x_1281_);
v___x_1288_ = v___x_1278_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1281_);
lean_ctor_set_uint8(v_reuseFailAlloc_1289_, sizeof(void*)*1, v_hasTrace_1276_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8___boxed(lean_object* v_o_1291_, lean_object* v_k_1292_, lean_object* v_v_1293_){
_start:
{
uint8_t v_v_boxed_1294_; lean_object* v_res_1295_; 
v_v_boxed_1294_ = lean_unbox(v_v_1293_);
v_res_1295_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8(v_o_1291_, v_k_1292_, v_v_boxed_1294_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5(lean_object* v_opts_1296_, lean_object* v_opt_1297_, uint8_t v_val_1298_){
_start:
{
lean_object* v_name_1299_; lean_object* v___x_1300_; 
v_name_1299_ = lean_ctor_get(v_opt_1297_, 0);
lean_inc(v_name_1299_);
lean_dec_ref(v_opt_1297_);
v___x_1300_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5_spec__8(v_opts_1296_, v_name_1299_, v_val_1298_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5___boxed(lean_object* v_opts_1301_, lean_object* v_opt_1302_, lean_object* v_val_1303_){
_start:
{
uint8_t v_val_boxed_1304_; lean_object* v_res_1305_; 
v_val_boxed_1304_ = lean_unbox(v_val_1303_);
v_res_1305_ = l_Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5(v_opts_1301_, v_opt_1302_, v_val_boxed_1304_);
return v_res_1305_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0);
v___x_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg(){
_start:
{
lean_object* v___x_1309_; 
v___x_1309_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg___closed__0);
return v___x_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v___dummy_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg();
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___lam__0(lean_object* v___y_1312_, uint8_t v_isExporting_1313_, lean_object* v___x_1314_, lean_object* v___y_1315_, lean_object* v___x_1316_, lean_object* v_a_x3f_1317_){
_start:
{
lean_object* v___x_1319_; lean_object* v_env_1320_; lean_object* v_nextMacroScope_1321_; lean_object* v_ngen_1322_; lean_object* v_auxDeclNGen_1323_; lean_object* v_traceState_1324_; lean_object* v_recordedDeps_1325_; lean_object* v_messages_1326_; lean_object* v_infoState_1327_; lean_object* v_snapshotTasks_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1353_; 
v___x_1319_ = lean_st_ref_take(v___y_1312_);
v_env_1320_ = lean_ctor_get(v___x_1319_, 0);
v_nextMacroScope_1321_ = lean_ctor_get(v___x_1319_, 1);
v_ngen_1322_ = lean_ctor_get(v___x_1319_, 2);
v_auxDeclNGen_1323_ = lean_ctor_get(v___x_1319_, 3);
v_traceState_1324_ = lean_ctor_get(v___x_1319_, 4);
v_recordedDeps_1325_ = lean_ctor_get(v___x_1319_, 6);
v_messages_1326_ = lean_ctor_get(v___x_1319_, 7);
v_infoState_1327_ = lean_ctor_get(v___x_1319_, 8);
v_snapshotTasks_1328_ = lean_ctor_get(v___x_1319_, 9);
v_isSharedCheck_1353_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1353_ == 0)
{
lean_object* v_unused_1354_; 
v_unused_1354_ = lean_ctor_get(v___x_1319_, 5);
lean_dec(v_unused_1354_);
v___x_1330_ = v___x_1319_;
v_isShared_1331_ = v_isSharedCheck_1353_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_snapshotTasks_1328_);
lean_inc(v_infoState_1327_);
lean_inc(v_messages_1326_);
lean_inc(v_recordedDeps_1325_);
lean_inc(v_traceState_1324_);
lean_inc(v_auxDeclNGen_1323_);
lean_inc(v_ngen_1322_);
lean_inc(v_nextMacroScope_1321_);
lean_inc(v_env_1320_);
lean_dec(v___x_1319_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1353_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1332_; lean_object* v___x_1334_; 
v___x_1332_ = l_Lean_Environment_setExporting(v_env_1320_, v_isExporting_1313_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 5, v___x_1314_);
lean_ctor_set(v___x_1330_, 0, v___x_1332_);
v___x_1334_ = v___x_1330_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v___x_1332_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v_nextMacroScope_1321_);
lean_ctor_set(v_reuseFailAlloc_1352_, 2, v_ngen_1322_);
lean_ctor_set(v_reuseFailAlloc_1352_, 3, v_auxDeclNGen_1323_);
lean_ctor_set(v_reuseFailAlloc_1352_, 4, v_traceState_1324_);
lean_ctor_set(v_reuseFailAlloc_1352_, 5, v___x_1314_);
lean_ctor_set(v_reuseFailAlloc_1352_, 6, v_recordedDeps_1325_);
lean_ctor_set(v_reuseFailAlloc_1352_, 7, v_messages_1326_);
lean_ctor_set(v_reuseFailAlloc_1352_, 8, v_infoState_1327_);
lean_ctor_set(v_reuseFailAlloc_1352_, 9, v_snapshotTasks_1328_);
v___x_1334_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v_mctx_1337_; lean_object* v_zetaDeltaFVarIds_1338_; lean_object* v_postponed_1339_; lean_object* v_diag_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1350_; 
v___x_1335_ = lean_st_ref_put(v___y_1312_, v___x_1334_);
v___x_1336_ = lean_st_ref_take(v___y_1315_);
v_mctx_1337_ = lean_ctor_get(v___x_1336_, 0);
v_zetaDeltaFVarIds_1338_ = lean_ctor_get(v___x_1336_, 2);
v_postponed_1339_ = lean_ctor_get(v___x_1336_, 3);
v_diag_1340_ = lean_ctor_get(v___x_1336_, 4);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1350_ == 0)
{
lean_object* v_unused_1351_; 
v_unused_1351_ = lean_ctor_get(v___x_1336_, 1);
lean_dec(v_unused_1351_);
v___x_1342_ = v___x_1336_;
v_isShared_1343_ = v_isSharedCheck_1350_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_diag_1340_);
lean_inc(v_postponed_1339_);
lean_inc(v_zetaDeltaFVarIds_1338_);
lean_inc(v_mctx_1337_);
lean_dec(v___x_1336_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1350_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1344_; lean_object* v___x_1346_; 
v___x_1344_ = lean_box(0);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 1, v___x_1316_);
v___x_1346_ = v___x_1342_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_mctx_1337_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v___x_1316_);
lean_ctor_set(v_reuseFailAlloc_1349_, 2, v_zetaDeltaFVarIds_1338_);
lean_ctor_set(v_reuseFailAlloc_1349_, 3, v_postponed_1339_);
lean_ctor_set(v_reuseFailAlloc_1349_, 4, v_diag_1340_);
v___x_1346_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1347_ = lean_st_ref_put(v___y_1315_, v___x_1346_);
v___x_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1344_);
return v___x_1348_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___lam__0___boxed(lean_object* v___y_1355_, lean_object* v_isExporting_1356_, lean_object* v___x_1357_, lean_object* v___y_1358_, lean_object* v___x_1359_, lean_object* v_a_x3f_1360_, lean_object* v___y_1361_){
_start:
{
uint8_t v_isExporting_boxed_1362_; lean_object* v_res_1363_; 
v_isExporting_boxed_1362_ = lean_unbox(v_isExporting_1356_);
v_res_1363_ = l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___lam__0(v___y_1355_, v_isExporting_boxed_1362_, v___x_1357_, v___y_1358_, v___x_1359_, v_a_x3f_1360_);
lean_dec(v_a_x3f_1360_);
lean_dec(v___y_1358_);
lean_dec(v___y_1355_);
return v_res_1363_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0);
v___x_1365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1364_);
return v___x_1365_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1366_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0);
v___x_1367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1366_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
return v___x_1367_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1368_; 
v___x_1368_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2___redArg();
return v___x_1368_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0);
v___x_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1369_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
return v___x_1370_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1371_ = lean_unsigned_to_nat(0u);
v___x_1372_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0);
v___x_1373_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1372_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
lean_ctor_set(v___x_1373_, 2, v___x_1371_);
return v___x_1373_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1374_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__4, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__4_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__4);
v___x_1375_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__3, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__3);
v___x_1376_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__0);
v___x_1377_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2);
v___x_1378_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1377_);
lean_ctor_set(v___x_1378_, 1, v___x_1376_);
lean_ctor_set(v___x_1378_, 2, v___x_1375_);
lean_ctor_set(v___x_1378_, 3, v___x_1376_);
lean_ctor_set(v___x_1378_, 4, v___x_1376_);
lean_ctor_set(v___x_1378_, 5, v___x_1376_);
lean_ctor_set(v___x_1378_, 6, v___x_1376_);
lean_ctor_set(v___x_1378_, 7, v___x_1374_);
return v___x_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg(lean_object* v_x_1379_, uint8_t v_isExporting_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v___x_1386_; lean_object* v_env_1387_; lean_object* v___x_1388_; uint8_t v_isModule_1389_; 
v___x_1386_ = lean_st_ref_get(v___y_1384_);
v_env_1387_ = lean_ctor_get(v___x_1386_, 0);
lean_inc_ref(v_env_1387_);
lean_dec(v___x_1386_);
v___x_1388_ = l_Lean_Environment_header(v_env_1387_);
v_isModule_1389_ = lean_ctor_get_uint8(v___x_1388_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1388_);
if (v_isModule_1389_ == 0)
{
lean_object* v___x_1390_; 
lean_dec_ref(v_env_1387_);
lean_inc(v___y_1384_);
lean_inc_ref(v___y_1383_);
lean_inc(v___y_1382_);
lean_inc_ref(v___y_1381_);
v___x_1390_ = lean_apply_5(v_x_1379_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, lean_box(0));
return v___x_1390_;
}
else
{
uint8_t v_isExporting_1391_; 
v_isExporting_1391_ = lean_ctor_get_uint8(v_env_1387_, sizeof(void*)*13);
lean_dec_ref(v_env_1387_);
if (v_isExporting_1380_ == 0)
{
if (v_isExporting_1391_ == 0)
{
lean_object* v___x_1458_; 
lean_inc(v___y_1384_);
lean_inc_ref(v___y_1383_);
lean_inc(v___y_1382_);
lean_inc_ref(v___y_1381_);
v___x_1458_ = lean_apply_5(v_x_1379_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, lean_box(0));
return v___x_1458_;
}
else
{
goto v___jp_1392_;
}
}
else
{
if (v_isExporting_1391_ == 0)
{
goto v___jp_1392_;
}
else
{
lean_object* v___x_1459_; 
lean_inc(v___y_1384_);
lean_inc_ref(v___y_1383_);
lean_inc(v___y_1382_);
lean_inc_ref(v___y_1381_);
v___x_1459_ = lean_apply_5(v_x_1379_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, lean_box(0));
return v___x_1459_;
}
}
v___jp_1392_:
{
lean_object* v___x_1393_; lean_object* v_env_1394_; lean_object* v_nextMacroScope_1395_; lean_object* v_ngen_1396_; lean_object* v_auxDeclNGen_1397_; lean_object* v_traceState_1398_; lean_object* v_recordedDeps_1399_; lean_object* v_messages_1400_; lean_object* v_infoState_1401_; lean_object* v_snapshotTasks_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1456_; 
v___x_1393_ = lean_st_ref_take(v___y_1384_);
v_env_1394_ = lean_ctor_get(v___x_1393_, 0);
v_nextMacroScope_1395_ = lean_ctor_get(v___x_1393_, 1);
v_ngen_1396_ = lean_ctor_get(v___x_1393_, 2);
v_auxDeclNGen_1397_ = lean_ctor_get(v___x_1393_, 3);
v_traceState_1398_ = lean_ctor_get(v___x_1393_, 4);
v_recordedDeps_1399_ = lean_ctor_get(v___x_1393_, 6);
v_messages_1400_ = lean_ctor_get(v___x_1393_, 7);
v_infoState_1401_ = lean_ctor_get(v___x_1393_, 8);
v_snapshotTasks_1402_ = lean_ctor_get(v___x_1393_, 9);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1393_);
if (v_isSharedCheck_1456_ == 0)
{
lean_object* v_unused_1457_; 
v_unused_1457_ = lean_ctor_get(v___x_1393_, 5);
lean_dec(v_unused_1457_);
v___x_1404_ = v___x_1393_;
v_isShared_1405_ = v_isSharedCheck_1456_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_snapshotTasks_1402_);
lean_inc(v_infoState_1401_);
lean_inc(v_messages_1400_);
lean_inc(v_recordedDeps_1399_);
lean_inc(v_traceState_1398_);
lean_inc(v_auxDeclNGen_1397_);
lean_inc(v_ngen_1396_);
lean_inc(v_nextMacroScope_1395_);
lean_inc(v_env_1394_);
lean_dec(v___x_1393_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1456_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1406_ = l_Lean_Environment_setExporting(v_env_1394_, v_isExporting_1380_);
v___x_1407_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__1, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__1);
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 5, v___x_1407_);
lean_ctor_set(v___x_1404_, 0, v___x_1406_);
v___x_1409_ = v___x_1404_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1406_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v_nextMacroScope_1395_);
lean_ctor_set(v_reuseFailAlloc_1455_, 2, v_ngen_1396_);
lean_ctor_set(v_reuseFailAlloc_1455_, 3, v_auxDeclNGen_1397_);
lean_ctor_set(v_reuseFailAlloc_1455_, 4, v_traceState_1398_);
lean_ctor_set(v_reuseFailAlloc_1455_, 5, v___x_1407_);
lean_ctor_set(v_reuseFailAlloc_1455_, 6, v_recordedDeps_1399_);
lean_ctor_set(v_reuseFailAlloc_1455_, 7, v_messages_1400_);
lean_ctor_set(v_reuseFailAlloc_1455_, 8, v_infoState_1401_);
lean_ctor_set(v_reuseFailAlloc_1455_, 9, v_snapshotTasks_1402_);
v___x_1409_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v_mctx_1412_; lean_object* v_zetaDeltaFVarIds_1413_; lean_object* v_postponed_1414_; lean_object* v_diag_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1453_; 
v___x_1410_ = lean_st_ref_put(v___y_1384_, v___x_1409_);
v___x_1411_ = lean_st_ref_take(v___y_1382_);
v_mctx_1412_ = lean_ctor_get(v___x_1411_, 0);
v_zetaDeltaFVarIds_1413_ = lean_ctor_get(v___x_1411_, 2);
v_postponed_1414_ = lean_ctor_get(v___x_1411_, 3);
v_diag_1415_ = lean_ctor_get(v___x_1411_, 4);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1453_ == 0)
{
lean_object* v_unused_1454_; 
v_unused_1454_ = lean_ctor_get(v___x_1411_, 1);
lean_dec(v_unused_1454_);
v___x_1417_ = v___x_1411_;
v_isShared_1418_ = v_isSharedCheck_1453_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_diag_1415_);
lean_inc(v_postponed_1414_);
lean_inc(v_zetaDeltaFVarIds_1413_);
lean_inc(v_mctx_1412_);
lean_dec(v___x_1411_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1453_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1419_; lean_object* v___x_1421_; 
v___x_1419_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__5, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__5_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__5);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 1, v___x_1419_);
v___x_1421_ = v___x_1417_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_mctx_1412_);
lean_ctor_set(v_reuseFailAlloc_1452_, 1, v___x_1419_);
lean_ctor_set(v_reuseFailAlloc_1452_, 2, v_zetaDeltaFVarIds_1413_);
lean_ctor_set(v_reuseFailAlloc_1452_, 3, v_postponed_1414_);
lean_ctor_set(v_reuseFailAlloc_1452_, 4, v_diag_1415_);
v___x_1421_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
lean_object* v___x_1422_; lean_object* v_r_1423_; 
v___x_1422_ = lean_st_ref_put(v___y_1382_, v___x_1421_);
lean_inc(v___y_1384_);
lean_inc_ref(v___y_1383_);
lean_inc(v___y_1382_);
lean_inc_ref(v___y_1381_);
v_r_1423_ = lean_apply_5(v_x_1379_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, lean_box(0));
if (lean_obj_tag(v_r_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1440_; 
v_a_1424_ = lean_ctor_get(v_r_1423_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v_r_1423_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1426_ = v_r_1423_;
v_isShared_1427_ = v_isSharedCheck_1440_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v_r_1423_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1440_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1429_; 
lean_inc(v_a_1424_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set_tag(v___x_1426_, 1);
v___x_1429_ = v___x_1426_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1424_);
v___x_1429_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
lean_object* v___x_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
v___x_1430_ = l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___lam__0(v___y_1384_, v_isExporting_1391_, v___x_1407_, v___y_1382_, v___x_1419_, v___x_1429_);
lean_dec_ref(v___x_1429_);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1437_ == 0)
{
lean_object* v_unused_1438_; 
v_unused_1438_ = lean_ctor_get(v___x_1430_, 0);
lean_dec(v_unused_1438_);
v___x_1432_ = v___x_1430_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_dec(v___x_1430_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v_a_1424_);
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1424_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
v_a_1441_ = lean_ctor_get(v_r_1423_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v_r_1423_, 1);
v___x_1442_ = lean_box(0);
v___x_1443_ = l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___lam__0(v___y_1384_, v_isExporting_1391_, v___x_1407_, v___y_1382_, v___x_1419_, v___x_1442_);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; 
v_unused_1451_ = lean_ctor_get(v___x_1443_, 0);
lean_dec(v_unused_1451_);
v___x_1445_ = v___x_1443_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_dec(v___x_1443_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
lean_ctor_set_tag(v___x_1445_, 1);
lean_ctor_set(v___x_1445_, 0, v_a_1441_);
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1441_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___boxed(lean_object* v_x_1460_, lean_object* v_isExporting_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
uint8_t v_isExporting_boxed_1467_; lean_object* v_res_1468_; 
v_isExporting_boxed_1467_ = lean_unbox(v_isExporting_1461_);
v_res_1468_ = l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg(v_x_1460_, v_isExporting_boxed_1467_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5___redArg(lean_object* v_keys_1469_, lean_object* v_vals_1470_, lean_object* v_i_1471_, lean_object* v_k_1472_){
_start:
{
lean_object* v___x_1473_; uint8_t v___x_1474_; 
v___x_1473_ = lean_array_get_size(v_keys_1469_);
v___x_1474_ = lean_nat_dec_lt(v_i_1471_, v___x_1473_);
if (v___x_1474_ == 0)
{
lean_object* v___x_1475_; 
lean_dec(v_i_1471_);
v___x_1475_ = lean_box(0);
return v___x_1475_;
}
else
{
lean_object* v_k_x27_1476_; uint8_t v___x_1477_; 
v_k_x27_1476_ = lean_array_fget_borrowed(v_keys_1469_, v_i_1471_);
v___x_1477_ = lean_name_eq(v_k_1472_, v_k_x27_1476_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1478_ = lean_unsigned_to_nat(1u);
v___x_1479_ = lean_nat_add(v_i_1471_, v___x_1478_);
lean_dec(v_i_1471_);
v_i_1471_ = v___x_1479_;
goto _start;
}
else
{
lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1481_ = lean_array_fget_borrowed(v_vals_1470_, v_i_1471_);
lean_dec(v_i_1471_);
lean_inc(v___x_1481_);
v___x_1482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1481_);
return v___x_1482_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_keys_1483_, lean_object* v_vals_1484_, lean_object* v_i_1485_, lean_object* v_k_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5___redArg(v_keys_1483_, v_vals_1484_, v_i_1485_, v_k_1486_);
lean_dec(v_k_1486_);
lean_dec_ref(v_vals_1484_);
lean_dec_ref(v_keys_1483_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2___redArg(lean_object* v_x_1488_, size_t v_x_1489_, lean_object* v_x_1490_){
_start:
{
if (lean_obj_tag(v_x_1488_) == 0)
{
lean_object* v_es_1491_; lean_object* v___x_1492_; size_t v___x_1493_; size_t v___x_1494_; lean_object* v_j_1495_; lean_object* v___x_1496_; 
v_es_1491_ = lean_ctor_get(v_x_1488_, 0);
v___x_1492_ = lean_box(2);
v___x_1493_ = ((size_t)31ULL);
v___x_1494_ = lean_usize_land(v_x_1489_, v___x_1493_);
v_j_1495_ = lean_usize_to_nat(v___x_1494_);
v___x_1496_ = lean_array_get_borrowed(v___x_1492_, v_es_1491_, v_j_1495_);
lean_dec(v_j_1495_);
switch(lean_obj_tag(v___x_1496_))
{
case 0:
{
lean_object* v_key_1497_; lean_object* v_val_1498_; uint8_t v___x_1499_; 
v_key_1497_ = lean_ctor_get(v___x_1496_, 0);
v_val_1498_ = lean_ctor_get(v___x_1496_, 1);
v___x_1499_ = lean_name_eq(v_x_1490_, v_key_1497_);
if (v___x_1499_ == 0)
{
lean_object* v___x_1500_; 
v___x_1500_ = lean_box(0);
return v___x_1500_;
}
else
{
lean_object* v___x_1501_; 
lean_inc(v_val_1498_);
v___x_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1501_, 0, v_val_1498_);
return v___x_1501_;
}
}
case 1:
{
lean_object* v_node_1502_; size_t v___x_1503_; size_t v___x_1504_; 
v_node_1502_ = lean_ctor_get(v___x_1496_, 0);
v___x_1503_ = ((size_t)5ULL);
v___x_1504_ = lean_usize_shift_right(v_x_1489_, v___x_1503_);
v_x_1488_ = v_node_1502_;
v_x_1489_ = v___x_1504_;
goto _start;
}
default: 
{
lean_object* v___x_1506_; 
v___x_1506_ = lean_box(0);
return v___x_1506_;
}
}
}
else
{
lean_object* v_ks_1507_; lean_object* v_vs_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; 
v_ks_1507_ = lean_ctor_get(v_x_1488_, 0);
v_vs_1508_ = lean_ctor_get(v_x_1488_, 1);
v___x_1509_ = lean_unsigned_to_nat(0u);
v___x_1510_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5___redArg(v_ks_1507_, v_vs_1508_, v___x_1509_, v_x_1490_);
return v___x_1510_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2___redArg___boxed(lean_object* v_x_1511_, lean_object* v_x_1512_, lean_object* v_x_1513_){
_start:
{
size_t v_x_19288__boxed_1514_; lean_object* v_res_1515_; 
v_x_19288__boxed_1514_ = lean_unbox_usize(v_x_1512_);
lean_dec(v_x_1512_);
v_res_1515_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2___redArg(v_x_1511_, v_x_19288__boxed_1514_, v_x_1513_);
lean_dec(v_x_1513_);
lean_dec_ref(v_x_1511_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1___redArg(lean_object* v_x_1516_, lean_object* v_x_1517_){
_start:
{
uint64_t v___y_1519_; 
if (lean_obj_tag(v_x_1517_) == 0)
{
uint64_t v___x_1522_; 
v___x_1522_ = 1723ULL;
v___y_1519_ = v___x_1522_;
goto v___jp_1518_;
}
else
{
uint64_t v_hash_1523_; 
v_hash_1523_ = lean_ctor_get_uint64(v_x_1517_, sizeof(void*)*2);
v___y_1519_ = v_hash_1523_;
goto v___jp_1518_;
}
v___jp_1518_:
{
size_t v___x_1520_; lean_object* v___x_1521_; 
v___x_1520_ = lean_uint64_to_usize(v___y_1519_);
v___x_1521_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2___redArg(v_x_1516_, v___x_1520_, v_x_1517_);
return v___x_1521_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1___redArg___boxed(lean_object* v_x_1524_, lean_object* v_x_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1___redArg(v_x_1524_, v_x_1525_);
lean_dec(v_x_1525_);
lean_dec_ref(v_x_1524_);
return v_res_1526_;
}
}
static lean_object* _init_l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
v___x_1528_ = ((lean_object*)(l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___closed__0));
v___x_1529_ = l_Lean_stringToMessageData(v___x_1528_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3(lean_object* v___x_1530_, lean_object* v___x_1531_, uint8_t v___x_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_){
_start:
{
if (lean_obj_tag(v_a_1533_) == 0)
{
lean_object* v___x_1535_; 
lean_dec_ref(v___x_1531_);
v___x_1535_ = lean_array_to_list(v_a_1534_);
return v___x_1535_;
}
else
{
lean_object* v_head_1536_; lean_object* v_tail_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1580_; 
v_head_1536_ = lean_ctor_get(v_a_1533_, 0);
v_tail_1537_ = lean_ctor_get(v_a_1533_, 1);
v_isSharedCheck_1580_ = !lean_is_exclusive(v_a_1533_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1539_ = v_a_1533_;
v_isShared_1540_ = v_isSharedCheck_1580_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_tail_1537_);
lean_inc(v_head_1536_);
lean_dec(v_a_1533_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1580_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v_fst_1541_; lean_object* v_snd_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1579_; 
v_fst_1541_ = lean_ctor_get(v_head_1536_, 0);
v_snd_1542_ = lean_ctor_get(v_head_1536_, 1);
v_isSharedCheck_1579_ = !lean_is_exclusive(v_head_1536_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1544_ = v_head_1536_;
v_isShared_1545_ = v_isSharedCheck_1579_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_snd_1542_);
lean_inc(v_fst_1541_);
lean_dec(v_head_1536_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1579_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v_unfoldAxiomCounter_1546_; lean_object* v___x_1547_; lean_object* v___y_1549_; lean_object* v___x_1577_; 
v_unfoldAxiomCounter_1546_ = lean_ctor_get(v___x_1530_, 1);
v___x_1547_ = lean_unsigned_to_nat(0u);
v___x_1577_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1___redArg(v_unfoldAxiomCounter_1546_, v_fst_1541_);
if (lean_obj_tag(v___x_1577_) == 0)
{
v___y_1549_ = v___x_1547_;
goto v___jp_1548_;
}
else
{
lean_object* v_val_1578_; 
v_val_1578_ = lean_ctor_get(v___x_1577_, 0);
lean_inc(v_val_1578_);
lean_dec_ref_known(v___x_1577_, 1);
v___y_1549_ = v_val_1578_;
goto v___jp_1548_;
}
v___jp_1548_:
{
lean_object* v___x_1550_; uint8_t v___x_1551_; 
v___x_1550_ = lean_nat_sub(v_snd_1542_, v___y_1549_);
lean_dec(v___y_1549_);
lean_dec(v_snd_1542_);
v___x_1551_ = lean_nat_dec_lt(v___x_1547_, v___x_1550_);
if (v___x_1551_ == 0)
{
lean_dec(v___x_1550_);
lean_del_object(v___x_1544_);
lean_dec(v_fst_1541_);
lean_del_object(v___x_1539_);
v_a_1533_ = v_tail_1537_;
goto _start;
}
else
{
lean_object* v___x_1553_; 
lean_inc(v_fst_1541_);
lean_inc_ref(v___x_1531_);
v___x_1553_ = l_Lean_getOriginalConstKind_x3f(v___x_1531_, v_fst_1541_);
if (lean_obj_tag(v___x_1553_) == 1)
{
lean_object* v_val_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1575_; 
v_val_1554_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1556_ = v___x_1553_;
v_isShared_1557_ = v_isSharedCheck_1575_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_val_1554_);
lean_dec(v___x_1553_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1575_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
uint8_t v___x_1558_; 
v___x_1558_ = lean_unbox(v_val_1554_);
lean_dec(v_val_1554_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1562_; 
v___x_1559_ = l_Lean_MessageData_ofConstName(v_fst_1541_, v___x_1532_);
v___x_1560_ = lean_obj_once(&l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___closed__1, &l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___closed__1_once, _init_l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___closed__1);
if (v_isShared_1545_ == 0)
{
lean_ctor_set_tag(v___x_1544_, 7);
lean_ctor_set(v___x_1544_, 1, v___x_1560_);
lean_ctor_set(v___x_1544_, 0, v___x_1559_);
v___x_1562_ = v___x_1544_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v___x_1559_);
lean_ctor_set(v_reuseFailAlloc_1573_, 1, v___x_1560_);
v___x_1562_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
lean_object* v___x_1563_; lean_object* v___x_1565_; 
v___x_1563_ = l_Nat_reprFast(v___x_1550_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set_tag(v___x_1556_, 3);
lean_ctor_set(v___x_1556_, 0, v___x_1563_);
v___x_1565_ = v___x_1556_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v___x_1563_);
v___x_1565_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
lean_object* v___x_1566_; lean_object* v___x_1568_; 
v___x_1566_ = l_Lean_MessageData_ofFormat(v___x_1565_);
if (v_isShared_1540_ == 0)
{
lean_ctor_set_tag(v___x_1539_, 7);
lean_ctor_set(v___x_1539_, 1, v___x_1566_);
lean_ctor_set(v___x_1539_, 0, v___x_1562_);
v___x_1568_ = v___x_1539_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v___x_1562_);
lean_ctor_set(v_reuseFailAlloc_1571_, 1, v___x_1566_);
v___x_1568_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
lean_object* v___x_1569_; 
v___x_1569_ = lean_array_push(v_a_1534_, v___x_1568_);
v_a_1533_ = v_tail_1537_;
v_a_1534_ = v___x_1569_;
goto _start;
}
}
}
}
else
{
lean_del_object(v___x_1556_);
lean_dec(v___x_1550_);
lean_del_object(v___x_1544_);
lean_dec(v_fst_1541_);
lean_del_object(v___x_1539_);
v_a_1533_ = v_tail_1537_;
goto _start;
}
}
}
else
{
lean_dec(v___x_1553_);
lean_dec(v___x_1550_);
lean_del_object(v___x_1544_);
lean_dec(v_fst_1541_);
lean_del_object(v___x_1539_);
v_a_1533_ = v_tail_1537_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3___boxed(lean_object* v___x_1581_, lean_object* v___x_1582_, lean_object* v___x_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_){
_start:
{
uint8_t v___x_19358__boxed_1586_; lean_object* v_res_1587_; 
v___x_19358__boxed_1586_ = lean_unbox(v___x_1583_);
v_res_1587_ = l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3(v___x_1581_, v___x_1582_, v___x_19358__boxed_1586_, v_a_1584_, v_a_1585_);
lean_dec_ref(v___x_1581_);
return v_res_1587_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toLCNFType___closed__1(void){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = ((lean_object*)(l_Lean_Compiler_LCNF_toLCNFType___closed__0));
v___x_1590_ = l_Lean_stringToMessageData(v___x_1589_);
return v___x_1590_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toLCNFType___closed__3(void){
_start:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1592_ = ((lean_object*)(l_Lean_Compiler_LCNF_toLCNFType___closed__2));
v___x_1593_ = l_Lean_stringToMessageData(v___x_1592_);
return v___x_1593_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toLCNFType___closed__5(void){
_start:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1595_ = ((lean_object*)(l_Lean_Compiler_LCNF_toLCNFType___closed__4));
v___x_1596_ = l_Lean_stringToMessageData(v___x_1595_);
return v___x_1596_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toLCNFType___closed__7(void){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = ((lean_object*)(l_Lean_Compiler_LCNF_toLCNFType___closed__6));
v___x_1599_ = l_Lean_stringToMessageData(v___x_1598_);
return v___x_1599_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toLCNFType___closed__9(void){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1601_ = ((lean_object*)(l_Lean_Compiler_LCNF_toLCNFType___closed__8));
v___x_1602_ = l_Lean_stringToMessageData(v___x_1601_);
return v___x_1602_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toLCNFType___closed__12(void){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = ((lean_object*)(l_Lean_Compiler_LCNF_toLCNFType___closed__11));
v___x_1607_ = l_Lean_stringToMessageData(v___x_1606_);
return v___x_1607_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toLCNFType___closed__13(void){
_start:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = lean_box(1);
v___x_1609_ = l_Lean_MessageData_ofFormat(v___x_1608_);
return v___x_1609_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toLCNFType___closed__15(void){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = ((lean_object*)(l_Lean_Compiler_LCNF_toLCNFType___closed__14));
v___x_1612_ = l_Lean_stringToMessageData(v___x_1611_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toLCNFType(lean_object* v_type_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_){
_start:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; 
lean_inc_ref(v_type_1613_);
v___x_1619_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go___boxed), 6, 1);
lean_closure_set(v___x_1619_, 0, v_type_1613_);
v___x_1620_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_go(v_type_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_a_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1831_; 
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1623_ = v___x_1620_;
v_isShared_1624_ = v_isSharedCheck_1831_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_a_1621_);
lean_dec(v___x_1620_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1831_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1625_; lean_object* v_env_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1821_; 
v___x_1625_ = lean_st_ref_get(v_a_1617_);
v_env_1626_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1821_ == 0)
{
lean_object* v_unused_1822_; lean_object* v_unused_1823_; lean_object* v_unused_1824_; lean_object* v_unused_1825_; lean_object* v_unused_1826_; lean_object* v_unused_1827_; lean_object* v_unused_1828_; lean_object* v_unused_1829_; lean_object* v_unused_1830_; 
v_unused_1822_ = lean_ctor_get(v___x_1625_, 9);
lean_dec(v_unused_1822_);
v_unused_1823_ = lean_ctor_get(v___x_1625_, 8);
lean_dec(v_unused_1823_);
v_unused_1824_ = lean_ctor_get(v___x_1625_, 7);
lean_dec(v_unused_1824_);
v_unused_1825_ = lean_ctor_get(v___x_1625_, 6);
lean_dec(v_unused_1825_);
v_unused_1826_ = lean_ctor_get(v___x_1625_, 5);
lean_dec(v_unused_1826_);
v_unused_1827_ = lean_ctor_get(v___x_1625_, 4);
lean_dec(v_unused_1827_);
v_unused_1828_ = lean_ctor_get(v___x_1625_, 3);
lean_dec(v_unused_1828_);
v_unused_1829_ = lean_ctor_get(v___x_1625_, 2);
lean_dec(v_unused_1829_);
v_unused_1830_ = lean_ctor_get(v___x_1625_, 1);
lean_dec(v_unused_1830_);
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1821_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_env_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1821_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1630_; uint8_t v_isModule_1631_; 
v___x_1630_ = l_Lean_Environment_header(v_env_1626_);
lean_dec_ref(v_env_1626_);
v_isModule_1631_ = lean_ctor_get_uint8(v___x_1630_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1630_);
if (v_isModule_1631_ == 0)
{
lean_object* v___x_1633_; 
lean_del_object(v___x_1628_);
lean_dec_ref(v___x_1619_);
if (v_isShared_1624_ == 0)
{
v___x_1633_ = v___x_1623_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1621_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
else
{
lean_object* v___x_1635_; 
lean_del_object(v___x_1623_);
lean_inc_ref(v___x_1619_);
v___x_1635_ = l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg(v___x_1619_, v_isModule_1631_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_);
if (lean_obj_tag(v___x_1635_) == 0)
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1809_; 
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1638_ = v___x_1635_;
v_isShared_1639_ = v_isSharedCheck_1809_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1635_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1809_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
uint8_t v___x_1640_; 
v___x_1640_ = lean_expr_eqv(v_a_1621_, v_a_1636_);
if (v___x_1640_ == 0)
{
lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v_toCold_1653_; lean_object* v_diag_1654_; lean_object* v_currRecDepth_1655_; lean_object* v_ref_1656_; uint8_t v_suppressElabErrors_1657_; uint8_t v_checkDeprecated_1658_; uint8_t v_isRecordingDeps_1659_; lean_object* v_fileName_1660_; lean_object* v_fileMap_1661_; lean_object* v_options_1662_; lean_object* v_currNamespace_1663_; lean_object* v_openDecls_1664_; lean_object* v_initHeartbeats_1665_; lean_object* v_maxHeartbeats_1666_; lean_object* v_quotContext_1667_; lean_object* v_currMacroScope_1668_; lean_object* v_cancelTk_x3f_1669_; lean_object* v_inheritedTraceOptions_1670_; lean_object* v_a_1672_; lean_object* v_a_1718_; lean_object* v___y_1730_; uint16_t v___y_1731_; lean_object* v_fileName_1732_; lean_object* v_fileMap_1733_; lean_object* v_currNamespace_1734_; lean_object* v_openDecls_1735_; lean_object* v_initHeartbeats_1736_; lean_object* v_maxHeartbeats_1737_; lean_object* v_quotContext_1738_; lean_object* v_currMacroScope_1739_; lean_object* v_cancelTk_x3f_1740_; lean_object* v_inheritedTraceOptions_1741_; lean_object* v_currRecDepth_1742_; lean_object* v_ref_1743_; uint8_t v_suppressElabErrors_1744_; uint8_t v_checkDeprecated_1745_; uint8_t v_isRecordingDeps_1746_; lean_object* v___y_1747_; lean_object* v_nextMacroScope_1757_; lean_object* v_ngen_1758_; lean_object* v_auxDeclNGen_1759_; lean_object* v_traceState_1760_; lean_object* v_recordedDeps_1761_; lean_object* v_messages_1762_; lean_object* v_infoState_1763_; lean_object* v_snapshotTasks_1764_; lean_object* v___y_1765_; uint16_t v___y_1766_; lean_object* v___y_1767_; lean_object* v___y_1774_; uint16_t v___y_1775_; uint8_t v___y_1776_; lean_object* v___y_1794_; 
lean_del_object(v___x_1638_);
v___x_1641_ = lean_obj_once(&l_Lean_Compiler_LCNF_toLCNFType___closed__1, &l_Lean_Compiler_LCNF_toLCNFType___closed__1_once, _init_l_Lean_Compiler_LCNF_toLCNFType___closed__1);
v___x_1642_ = l_Lean_MessageData_ofExpr(v_a_1621_);
v___x_1643_ = l_Lean_indentD(v___x_1642_);
v___x_1644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1641_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
v___x_1645_ = lean_obj_once(&l_Lean_Compiler_LCNF_toLCNFType___closed__3, &l_Lean_Compiler_LCNF_toLCNFType___closed__3_once, _init_l_Lean_Compiler_LCNF_toLCNFType___closed__3);
v___x_1646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1644_);
lean_ctor_set(v___x_1646_, 1, v___x_1645_);
v___x_1647_ = l_Lean_MessageData_ofExpr(v_a_1636_);
v___x_1648_ = l_Lean_indentD(v___x_1647_);
v___x_1649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1646_);
lean_ctor_set(v___x_1649_, 1, v___x_1648_);
v___x_1650_ = lean_obj_once(&l_Lean_Compiler_LCNF_toLCNFType___closed__5, &l_Lean_Compiler_LCNF_toLCNFType___closed__5_once, _init_l_Lean_Compiler_LCNF_toLCNFType___closed__5);
v___x_1651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1649_);
lean_ctor_set(v___x_1651_, 1, v___x_1650_);
v___x_1652_ = lean_st_ref_get(v_a_1615_);
v_toCold_1653_ = lean_ctor_get(v_a_1616_, 0);
v_diag_1654_ = lean_ctor_get(v___x_1652_, 4);
lean_inc_ref(v_diag_1654_);
lean_dec(v___x_1652_);
v_currRecDepth_1655_ = lean_ctor_get(v_a_1616_, 1);
v_ref_1656_ = lean_ctor_get(v_a_1616_, 2);
v_suppressElabErrors_1657_ = lean_ctor_get_uint8(v_a_1616_, sizeof(void*)*3 + 2);
v_checkDeprecated_1658_ = lean_ctor_get_uint8(v_a_1616_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1659_ = lean_ctor_get_uint8(v_a_1616_, sizeof(void*)*3 + 4);
v_fileName_1660_ = lean_ctor_get(v_toCold_1653_, 0);
v_fileMap_1661_ = lean_ctor_get(v_toCold_1653_, 1);
v_options_1662_ = lean_ctor_get(v_toCold_1653_, 2);
v_currNamespace_1663_ = lean_ctor_get(v_toCold_1653_, 4);
v_openDecls_1664_ = lean_ctor_get(v_toCold_1653_, 5);
v_initHeartbeats_1665_ = lean_ctor_get(v_toCold_1653_, 6);
v_maxHeartbeats_1666_ = lean_ctor_get(v_toCold_1653_, 7);
v_quotContext_1667_ = lean_ctor_get(v_toCold_1653_, 8);
v_currMacroScope_1668_ = lean_ctor_get(v_toCold_1653_, 9);
v_cancelTk_x3f_1669_ = lean_ctor_get(v_toCold_1653_, 10);
v_inheritedTraceOptions_1670_ = lean_ctor_get(v_toCold_1653_, 11);
if (v_isRecordingDeps_1659_ == 0)
{
lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1803_ = l_Lean_diagnostics;
lean_inc_ref(v_options_1662_);
v___x_1804_ = l_Lean_Option_set___at___00Lean_Compiler_LCNF_toLCNFType_spec__5(v_options_1662_, v___x_1803_, v_isModule_1631_);
v___y_1794_ = v___x_1804_;
goto v___jp_1793_;
}
else
{
lean_object* v___x_1805_; 
lean_inc_ref(v_options_1662_);
v___x_1805_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_1662_);
v___y_1794_ = v___x_1805_;
goto v___jp_1793_;
}
v___jp_1671_:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v_snd_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1694_; 
lean_inc_ref(v_a_1672_);
v___x_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1673_, 0, v_a_1672_);
v___x_1674_ = l_Lean_Compiler_LCNF_toLCNFType___lam__0(v_a_1615_, v_diag_1654_, v___x_1673_);
lean_dec_ref_known(v___x_1673_, 1);
lean_dec_ref(v___x_1674_);
v_snd_1675_ = lean_ctor_get(v_a_1672_, 1);
v_isSharedCheck_1694_ = !lean_is_exclusive(v_a_1672_);
if (v_isSharedCheck_1694_ == 0)
{
lean_object* v_unused_1695_; 
v_unused_1695_ = lean_ctor_get(v_a_1672_, 0);
lean_dec(v_unused_1695_);
v___x_1677_ = v_a_1672_;
v_isShared_1678_ = v_isSharedCheck_1694_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_snd_1675_);
lean_dec(v_a_1672_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1694_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1679_ = lean_obj_once(&l_Lean_Compiler_LCNF_toLCNFType___closed__7, &l_Lean_Compiler_LCNF_toLCNFType___closed__7_once, _init_l_Lean_Compiler_LCNF_toLCNFType___closed__7);
if (v_isShared_1678_ == 0)
{
lean_ctor_set_tag(v___x_1677_, 7);
lean_ctor_set(v___x_1677_, 0, v___x_1679_);
v___x_1681_ = v___x_1677_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v___x_1679_);
lean_ctor_set(v_reuseFailAlloc_1693_, 1, v_snd_1675_);
v___x_1681_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
v___x_1682_ = lean_obj_once(&l_Lean_Compiler_LCNF_toLCNFType___closed__9, &l_Lean_Compiler_LCNF_toLCNFType___closed__9_once, _init_l_Lean_Compiler_LCNF_toLCNFType___closed__9);
v___x_1683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__5___redArg(v___x_1683_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_);
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1687_ = v___x_1684_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1684_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1685_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
}
}
v___jp_1696_:
{
lean_object* v___x_1697_; lean_object* v_env_1698_; lean_object* v___x_1699_; lean_object* v_diag_1700_; lean_object* v_unfoldAxiomCounter_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; uint8_t v___x_1705_; 
v___x_1697_ = lean_st_ref_get(v_a_1617_);
v_env_1698_ = lean_ctor_get(v___x_1697_, 0);
lean_inc_ref(v_env_1698_);
lean_dec(v___x_1697_);
v___x_1699_ = lean_st_ref_get(v_a_1615_);
v_diag_1700_ = lean_ctor_get(v___x_1699_, 4);
lean_inc_ref(v_diag_1700_);
lean_dec(v___x_1699_);
v_unfoldAxiomCounter_1701_ = lean_ctor_get(v_diag_1700_, 1);
lean_inc_ref(v_unfoldAxiomCounter_1701_);
lean_dec_ref(v_diag_1700_);
v___x_1702_ = l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg(v_unfoldAxiomCounter_1701_);
lean_dec_ref(v_unfoldAxiomCounter_1701_);
v___x_1703_ = ((lean_object*)(l_Lean_Compiler_LCNF_toLCNFType___closed__10));
v___x_1704_ = l_List_filterMapTR_go___at___00Lean_Compiler_LCNF_toLCNFType_spec__3(v_diag_1654_, v_env_1698_, v___x_1640_, v___x_1702_, v___x_1703_);
v___x_1705_ = l_List_isEmpty___redArg(v___x_1704_);
if (v___x_1705_ == 0)
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
lean_dec_ref_known(v___x_1651_, 2);
v___x_1706_ = lean_obj_once(&l_Lean_Compiler_LCNF_toLCNFType___closed__12, &l_Lean_Compiler_LCNF_toLCNFType___closed__12_once, _init_l_Lean_Compiler_LCNF_toLCNFType___closed__12);
v___x_1707_ = lean_obj_once(&l_Lean_Compiler_LCNF_toLCNFType___closed__13, &l_Lean_Compiler_LCNF_toLCNFType___closed__13_once, _init_l_Lean_Compiler_LCNF_toLCNFType___closed__13);
v___x_1708_ = l_Lean_MessageData_joinSep(v___x_1704_, v___x_1707_);
v___x_1709_ = l_Lean_indentD(v___x_1708_);
v___x_1710_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1706_);
lean_ctor_set(v___x_1710_, 1, v___x_1709_);
v___x_1711_ = lean_obj_once(&l_Lean_Compiler_LCNF_toLCNFType___closed__15, &l_Lean_Compiler_LCNF_toLCNFType___closed__15_once, _init_l_Lean_Compiler_LCNF_toLCNFType___closed__15);
v___x_1712_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1710_);
lean_ctor_set(v___x_1712_, 1, v___x_1711_);
v___x_1713_ = lean_box(0);
v___x_1714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
lean_ctor_set(v___x_1714_, 1, v___x_1712_);
v_a_1672_ = v___x_1714_;
goto v___jp_1671_;
}
else
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
lean_dec(v___x_1704_);
v___x_1715_ = lean_box(0);
v___x_1716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1716_, 0, v___x_1715_);
lean_ctor_set(v___x_1716_, 1, v___x_1651_);
v_a_1672_ = v___x_1716_;
goto v___jp_1671_;
}
}
v___jp_1717_:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1727_; 
v___x_1719_ = lean_box(0);
v___x_1720_ = l_Lean_Compiler_LCNF_toLCNFType___lam__0(v_a_1615_, v_diag_1654_, v___x_1719_);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1727_ == 0)
{
lean_object* v_unused_1728_; 
v_unused_1728_ = lean_ctor_get(v___x_1720_, 0);
lean_dec(v_unused_1728_);
v___x_1722_ = v___x_1720_;
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
else
{
lean_dec(v___x_1720_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
lean_ctor_set_tag(v___x_1722_, 1);
lean_ctor_set(v___x_1722_, 0, v_a_1718_);
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_a_1718_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
v___jp_1729_:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1748_ = l_Lean_maxRecDepth;
v___x_1749_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_toLCNFType_spec__4(v___y_1730_, v___x_1748_);
v___x_1750_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1750_, 0, v_fileName_1732_);
lean_ctor_set(v___x_1750_, 1, v_fileMap_1733_);
lean_ctor_set(v___x_1750_, 2, v___y_1730_);
lean_ctor_set(v___x_1750_, 3, v___x_1749_);
lean_ctor_set(v___x_1750_, 4, v_currNamespace_1734_);
lean_ctor_set(v___x_1750_, 5, v_openDecls_1735_);
lean_ctor_set(v___x_1750_, 6, v_initHeartbeats_1736_);
lean_ctor_set(v___x_1750_, 7, v_maxHeartbeats_1737_);
lean_ctor_set(v___x_1750_, 8, v_quotContext_1738_);
lean_ctor_set(v___x_1750_, 9, v_currMacroScope_1739_);
lean_ctor_set(v___x_1750_, 10, v_cancelTk_x3f_1740_);
lean_ctor_set(v___x_1750_, 11, v_inheritedTraceOptions_1741_);
lean_inc(v_ref_1743_);
lean_inc(v_currRecDepth_1742_);
v___x_1751_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1751_, 0, v___x_1750_);
lean_ctor_set(v___x_1751_, 1, v_currRecDepth_1742_);
lean_ctor_set(v___x_1751_, 2, v_ref_1743_);
lean_ctor_set_uint16(v___x_1751_, sizeof(void*)*3, v___y_1731_);
lean_ctor_set_uint8(v___x_1751_, sizeof(void*)*3 + 2, v_suppressElabErrors_1744_);
lean_ctor_set_uint8(v___x_1751_, sizeof(void*)*3 + 3, v_checkDeprecated_1745_);
lean_ctor_set_uint8(v___x_1751_, sizeof(void*)*3 + 4, v_isRecordingDeps_1746_);
v___x_1752_ = l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg(v___x_1619_, v_isModule_1631_, v_a_1614_, v_a_1615_, v___x_1751_, v___y_1747_);
lean_dec_ref_known(v___x_1751_, 3);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_dec_ref_known(v___x_1752_, 1);
goto v___jp_1696_;
}
else
{
lean_object* v_a_1753_; uint8_t v___x_1754_; 
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc(v_a_1753_);
lean_dec_ref_known(v___x_1752_, 1);
v___x_1754_ = l_Lean_Exception_isInterrupt(v_a_1753_);
if (v___x_1754_ == 0)
{
uint8_t v___x_1755_; 
lean_inc(v_a_1753_);
v___x_1755_ = l_Lean_Exception_isRuntime(v_a_1753_);
if (v___x_1755_ == 0)
{
lean_dec(v_a_1753_);
goto v___jp_1696_;
}
else
{
lean_dec_ref_known(v___x_1651_, 2);
v_a_1718_ = v_a_1753_;
goto v___jp_1717_;
}
}
else
{
lean_dec_ref_known(v___x_1651_, 2);
v_a_1718_ = v_a_1753_;
goto v___jp_1717_;
}
}
}
v___jp_1756_:
{
lean_object* v___x_1768_; lean_object* v___x_1770_; 
v___x_1768_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__1, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__1);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 9, v_snapshotTasks_1764_);
lean_ctor_set(v___x_1628_, 8, v_infoState_1763_);
lean_ctor_set(v___x_1628_, 7, v_messages_1762_);
lean_ctor_set(v___x_1628_, 6, v_recordedDeps_1761_);
lean_ctor_set(v___x_1628_, 5, v___x_1768_);
lean_ctor_set(v___x_1628_, 4, v_traceState_1760_);
lean_ctor_set(v___x_1628_, 3, v_auxDeclNGen_1759_);
lean_ctor_set(v___x_1628_, 2, v_ngen_1758_);
lean_ctor_set(v___x_1628_, 1, v_nextMacroScope_1757_);
lean_ctor_set(v___x_1628_, 0, v___y_1767_);
v___x_1770_ = v___x_1628_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___y_1767_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v_nextMacroScope_1757_);
lean_ctor_set(v_reuseFailAlloc_1772_, 2, v_ngen_1758_);
lean_ctor_set(v_reuseFailAlloc_1772_, 3, v_auxDeclNGen_1759_);
lean_ctor_set(v_reuseFailAlloc_1772_, 4, v_traceState_1760_);
lean_ctor_set(v_reuseFailAlloc_1772_, 5, v___x_1768_);
lean_ctor_set(v_reuseFailAlloc_1772_, 6, v_recordedDeps_1761_);
lean_ctor_set(v_reuseFailAlloc_1772_, 7, v_messages_1762_);
lean_ctor_set(v_reuseFailAlloc_1772_, 8, v_infoState_1763_);
lean_ctor_set(v_reuseFailAlloc_1772_, 9, v_snapshotTasks_1764_);
v___x_1770_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
lean_object* v___x_1771_; 
v___x_1771_ = lean_st_ref_put(v_a_1617_, v___x_1770_);
lean_inc_ref(v_inheritedTraceOptions_1670_);
lean_inc(v_cancelTk_x3f_1669_);
lean_inc(v_currMacroScope_1668_);
lean_inc(v_quotContext_1667_);
lean_inc(v_maxHeartbeats_1666_);
lean_inc(v_initHeartbeats_1665_);
lean_inc(v_openDecls_1664_);
lean_inc(v_currNamespace_1663_);
lean_inc_ref(v_fileMap_1661_);
lean_inc_ref(v_fileName_1660_);
v___y_1730_ = v___y_1765_;
v___y_1731_ = v___y_1766_;
v_fileName_1732_ = v_fileName_1660_;
v_fileMap_1733_ = v_fileMap_1661_;
v_currNamespace_1734_ = v_currNamespace_1663_;
v_openDecls_1735_ = v_openDecls_1664_;
v_initHeartbeats_1736_ = v_initHeartbeats_1665_;
v_maxHeartbeats_1737_ = v_maxHeartbeats_1666_;
v_quotContext_1738_ = v_quotContext_1667_;
v_currMacroScope_1739_ = v_currMacroScope_1668_;
v_cancelTk_x3f_1740_ = v_cancelTk_x3f_1669_;
v_inheritedTraceOptions_1741_ = v_inheritedTraceOptions_1670_;
v_currRecDepth_1742_ = v_currRecDepth_1655_;
v_ref_1743_ = v_ref_1656_;
v_suppressElabErrors_1744_ = v_suppressElabErrors_1657_;
v_checkDeprecated_1745_ = v_checkDeprecated_1658_;
v_isRecordingDeps_1746_ = v_isRecordingDeps_1659_;
v___y_1747_ = v_a_1617_;
goto v___jp_1729_;
}
}
v___jp_1773_:
{
lean_object* v___x_1777_; lean_object* v_env_1778_; lean_object* v_nextMacroScope_1779_; lean_object* v_ngen_1780_; lean_object* v_auxDeclNGen_1781_; lean_object* v_traceState_1782_; lean_object* v_recordedDeps_1783_; lean_object* v_messages_1784_; lean_object* v_infoState_1785_; lean_object* v_snapshotTasks_1786_; uint16_t v___x_1787_; uint16_t v___x_1788_; uint16_t v___x_1789_; uint8_t v___x_1790_; 
v___x_1777_ = lean_st_ref_take(v_a_1617_);
v_env_1778_ = lean_ctor_get(v___x_1777_, 0);
lean_inc_ref(v_env_1778_);
v_nextMacroScope_1779_ = lean_ctor_get(v___x_1777_, 1);
lean_inc(v_nextMacroScope_1779_);
v_ngen_1780_ = lean_ctor_get(v___x_1777_, 2);
lean_inc_ref(v_ngen_1780_);
v_auxDeclNGen_1781_ = lean_ctor_get(v___x_1777_, 3);
lean_inc_ref(v_auxDeclNGen_1781_);
v_traceState_1782_ = lean_ctor_get(v___x_1777_, 4);
lean_inc_ref(v_traceState_1782_);
v_recordedDeps_1783_ = lean_ctor_get(v___x_1777_, 6);
lean_inc_ref(v_recordedDeps_1783_);
v_messages_1784_ = lean_ctor_get(v___x_1777_, 7);
lean_inc_ref(v_messages_1784_);
v_infoState_1785_ = lean_ctor_get(v___x_1777_, 8);
lean_inc_ref(v_infoState_1785_);
v_snapshotTasks_1786_ = lean_ctor_get(v___x_1777_, 9);
lean_inc_ref(v_snapshotTasks_1786_);
lean_dec(v___x_1777_);
v___x_1787_ = 512;
v___x_1788_ = lean_uint16_land(v___y_1775_, v___x_1787_);
v___x_1789_ = 0;
v___x_1790_ = lean_uint16_dec_eq(v___x_1788_, v___x_1789_);
if (v___x_1790_ == 0)
{
lean_object* v___x_1791_; 
v___x_1791_ = l_Lean_Kernel_enableDiag(v_env_1778_, v_isModule_1631_);
v_nextMacroScope_1757_ = v_nextMacroScope_1779_;
v_ngen_1758_ = v_ngen_1780_;
v_auxDeclNGen_1759_ = v_auxDeclNGen_1781_;
v_traceState_1760_ = v_traceState_1782_;
v_recordedDeps_1761_ = v_recordedDeps_1783_;
v_messages_1762_ = v_messages_1784_;
v_infoState_1763_ = v_infoState_1785_;
v_snapshotTasks_1764_ = v_snapshotTasks_1786_;
v___y_1765_ = v___y_1774_;
v___y_1766_ = v___y_1775_;
v___y_1767_ = v___x_1791_;
goto v___jp_1756_;
}
else
{
lean_object* v___x_1792_; 
v___x_1792_ = l_Lean_Kernel_enableDiag(v_env_1778_, v___y_1776_);
v_nextMacroScope_1757_ = v_nextMacroScope_1779_;
v_ngen_1758_ = v_ngen_1780_;
v_auxDeclNGen_1759_ = v_auxDeclNGen_1781_;
v_traceState_1760_ = v_traceState_1782_;
v_recordedDeps_1761_ = v_recordedDeps_1783_;
v_messages_1762_ = v_messages_1784_;
v_infoState_1763_ = v_infoState_1785_;
v_snapshotTasks_1764_ = v_snapshotTasks_1786_;
v___y_1765_ = v___y_1774_;
v___y_1766_ = v___y_1775_;
v___y_1767_ = v___x_1792_;
goto v___jp_1756_;
}
}
v___jp_1793_:
{
uint16_t v___x_1795_; lean_object* v___x_1796_; lean_object* v_env_1797_; uint8_t v___x_1798_; uint16_t v___x_1799_; uint16_t v___x_1800_; uint16_t v___x_1801_; uint8_t v___x_1802_; 
v___x_1795_ = l_Lean_OptionFlags_ofOptions(v___y_1794_);
v___x_1796_ = lean_st_ref_get(v_a_1617_);
v_env_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc_ref(v_env_1797_);
lean_dec(v___x_1796_);
v___x_1798_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1797_);
lean_dec_ref(v_env_1797_);
v___x_1799_ = 512;
v___x_1800_ = lean_uint16_land(v___x_1795_, v___x_1799_);
v___x_1801_ = 0;
v___x_1802_ = lean_uint16_dec_eq(v___x_1800_, v___x_1801_);
if (v___x_1802_ == 0)
{
if (v___x_1798_ == 0)
{
v___y_1774_ = v___y_1794_;
v___y_1775_ = v___x_1795_;
v___y_1776_ = v___x_1798_;
goto v___jp_1773_;
}
else
{
lean_del_object(v___x_1628_);
lean_inc_ref(v_inheritedTraceOptions_1670_);
lean_inc(v_cancelTk_x3f_1669_);
lean_inc(v_currMacroScope_1668_);
lean_inc(v_quotContext_1667_);
lean_inc(v_maxHeartbeats_1666_);
lean_inc(v_initHeartbeats_1665_);
lean_inc(v_openDecls_1664_);
lean_inc(v_currNamespace_1663_);
lean_inc_ref(v_fileMap_1661_);
lean_inc_ref(v_fileName_1660_);
v___y_1730_ = v___y_1794_;
v___y_1731_ = v___x_1795_;
v_fileName_1732_ = v_fileName_1660_;
v_fileMap_1733_ = v_fileMap_1661_;
v_currNamespace_1734_ = v_currNamespace_1663_;
v_openDecls_1735_ = v_openDecls_1664_;
v_initHeartbeats_1736_ = v_initHeartbeats_1665_;
v_maxHeartbeats_1737_ = v_maxHeartbeats_1666_;
v_quotContext_1738_ = v_quotContext_1667_;
v_currMacroScope_1739_ = v_currMacroScope_1668_;
v_cancelTk_x3f_1740_ = v_cancelTk_x3f_1669_;
v_inheritedTraceOptions_1741_ = v_inheritedTraceOptions_1670_;
v_currRecDepth_1742_ = v_currRecDepth_1655_;
v_ref_1743_ = v_ref_1656_;
v_suppressElabErrors_1744_ = v_suppressElabErrors_1657_;
v_checkDeprecated_1745_ = v_checkDeprecated_1658_;
v_isRecordingDeps_1746_ = v_isRecordingDeps_1659_;
v___y_1747_ = v_a_1617_;
goto v___jp_1729_;
}
}
else
{
if (v___x_1798_ == 0)
{
lean_del_object(v___x_1628_);
lean_inc_ref(v_inheritedTraceOptions_1670_);
lean_inc(v_cancelTk_x3f_1669_);
lean_inc(v_currMacroScope_1668_);
lean_inc(v_quotContext_1667_);
lean_inc(v_maxHeartbeats_1666_);
lean_inc(v_initHeartbeats_1665_);
lean_inc(v_openDecls_1664_);
lean_inc(v_currNamespace_1663_);
lean_inc_ref(v_fileMap_1661_);
lean_inc_ref(v_fileName_1660_);
v___y_1730_ = v___y_1794_;
v___y_1731_ = v___x_1795_;
v_fileName_1732_ = v_fileName_1660_;
v_fileMap_1733_ = v_fileMap_1661_;
v_currNamespace_1734_ = v_currNamespace_1663_;
v_openDecls_1735_ = v_openDecls_1664_;
v_initHeartbeats_1736_ = v_initHeartbeats_1665_;
v_maxHeartbeats_1737_ = v_maxHeartbeats_1666_;
v_quotContext_1738_ = v_quotContext_1667_;
v_currMacroScope_1739_ = v_currMacroScope_1668_;
v_cancelTk_x3f_1740_ = v_cancelTk_x3f_1669_;
v_inheritedTraceOptions_1741_ = v_inheritedTraceOptions_1670_;
v_currRecDepth_1742_ = v_currRecDepth_1655_;
v_ref_1743_ = v_ref_1656_;
v_suppressElabErrors_1744_ = v_suppressElabErrors_1657_;
v_checkDeprecated_1745_ = v_checkDeprecated_1658_;
v_isRecordingDeps_1746_ = v_isRecordingDeps_1659_;
v___y_1747_ = v_a_1617_;
goto v___jp_1729_;
}
else
{
v___y_1774_ = v___y_1794_;
v___y_1775_ = v___x_1795_;
v___y_1776_ = v___x_1640_;
goto v___jp_1773_;
}
}
}
}
else
{
lean_object* v___x_1807_; 
lean_dec(v_a_1636_);
lean_del_object(v___x_1628_);
lean_dec_ref(v___x_1619_);
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v_a_1621_);
v___x_1807_ = v___x_1638_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1621_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
else
{
lean_object* v_a_1810_; uint8_t v___x_1811_; 
lean_del_object(v___x_1628_);
lean_dec_ref(v___x_1619_);
v_a_1810_ = lean_ctor_get(v___x_1635_, 0);
v___x_1811_ = l_Lean_Exception_isInterrupt(v_a_1810_);
if (v___x_1811_ == 0)
{
uint8_t v___x_1812_; 
lean_inc(v_a_1810_);
v___x_1812_ = l_Lean_Exception_isRuntime(v_a_1810_);
if (v___x_1812_ == 0)
{
lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1819_ == 0)
{
lean_object* v_unused_1820_; 
v_unused_1820_ = lean_ctor_get(v___x_1635_, 0);
lean_dec(v_unused_1820_);
v___x_1814_ = v___x_1635_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_dec(v___x_1635_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
lean_ctor_set_tag(v___x_1814_, 0);
lean_ctor_set(v___x_1814_, 0, v_a_1621_);
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1621_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
else
{
lean_dec(v_a_1621_);
return v___x_1635_;
}
}
else
{
lean_dec(v_a_1621_);
return v___x_1635_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_1619_);
return v___x_1620_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toLCNFType___boxed(lean_object* v_type_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_Lean_Compiler_LCNF_toLCNFType(v_type_1832_, v_a_1833_, v_a_1834_, v_a_1835_, v_a_1836_);
lean_dec(v_a_1836_);
lean_dec_ref(v_a_1835_);
lean_dec(v_a_1834_);
lean_dec_ref(v_a_1833_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0(lean_object* v_00_u03b1_1839_, lean_object* v_x_1840_, uint8_t v_isExporting_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_){
_start:
{
lean_object* v___x_1847_; 
v___x_1847_ = l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg(v_x_1840_, v_isExporting_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___boxed(lean_object* v_00_u03b1_1848_, lean_object* v_x_1849_, lean_object* v_isExporting_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
uint8_t v_isExporting_boxed_1856_; lean_object* v_res_1857_; 
v_isExporting_boxed_1856_ = lean_unbox(v_isExporting_1850_);
v_res_1857_ = l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0(v_00_u03b1_1848_, v_x_1849_, v_isExporting_boxed_1856_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1(lean_object* v_00_u03b2_1858_, lean_object* v_x_1859_, lean_object* v_x_1860_){
_start:
{
lean_object* v___x_1861_; 
v___x_1861_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1___redArg(v_x_1859_, v_x_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1___boxed(lean_object* v_00_u03b2_1862_, lean_object* v_x_1863_, lean_object* v_x_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1(v_00_u03b2_1862_, v_x_1863_, v_x_1864_);
lean_dec(v_x_1864_);
lean_dec_ref(v_x_1863_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2(lean_object* v_00_u03b2_1866_, lean_object* v_m_1867_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___redArg(v_m_1867_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2___boxed(lean_object* v_00_u03b2_1869_, lean_object* v_m_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2(v_00_u03b2_1869_, v_m_1870_);
lean_dec_ref(v_m_1870_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1872_){
_start:
{
lean_object* v___x_1873_; 
v___x_1873_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_1875_; 
v___x_1875_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2);
return v___x_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0___redArg___boxed(lean_object* v___dummy_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0___redArg();
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0_spec__0(lean_object* v_00_u03b2_1878_){
_start:
{
lean_object* v___x_1879_; 
v___x_1879_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2, &l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_Compiler_LCNF_toLCNFType_spec__0___redArg___closed__2);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2(lean_object* v_00_u03b2_1880_, lean_object* v_x_1881_, size_t v_x_1882_, lean_object* v_x_1883_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2___redArg(v_x_1881_, v_x_1882_, v_x_1883_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1885_, lean_object* v_x_1886_, lean_object* v_x_1887_, lean_object* v_x_1888_){
_start:
{
size_t v_x_19903__boxed_1889_; lean_object* v_res_1890_; 
v_x_19903__boxed_1889_ = lean_unbox_usize(v_x_1887_);
lean_dec(v_x_1887_);
v_res_1890_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2(v_00_u03b2_1885_, v_x_1886_, v_x_19903__boxed_1889_, v_x_1888_);
lean_dec(v_x_1888_);
lean_dec_ref(v_x_1886_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4(lean_object* v_00_u03c3_1891_, lean_object* v_00_u03b2_1892_, lean_object* v_map_1893_, lean_object* v_f_1894_, lean_object* v_init_1895_){
_start:
{
lean_object* v___x_1896_; 
v___x_1896_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___redArg(v_map_1893_, v_f_1894_, v_init_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4___boxed(lean_object* v_00_u03c3_1897_, lean_object* v_00_u03b2_1898_, lean_object* v_map_1899_, lean_object* v_f_1900_, lean_object* v_init_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4(v_00_u03c3_1897_, v_00_u03b2_1898_, v_map_1899_, v_f_1900_, v_init_1901_);
lean_dec_ref(v_map_1899_);
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_1903_, lean_object* v_keys_1904_, lean_object* v_vals_1905_, lean_object* v_heq_1906_, lean_object* v_i_1907_, lean_object* v_k_1908_){
_start:
{
lean_object* v___x_1909_; 
v___x_1909_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5___redArg(v_keys_1904_, v_vals_1905_, v_i_1907_, v_k_1908_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1910_, lean_object* v_keys_1911_, lean_object* v_vals_1912_, lean_object* v_heq_1913_, lean_object* v_i_1914_, lean_object* v_k_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_toLCNFType_spec__1_spec__2_spec__5(v_00_u03b2_1910_, v_keys_1911_, v_vals_1912_, v_heq_1913_, v_i_1914_, v_k_1915_);
lean_dec(v_k_1915_);
lean_dec_ref(v_vals_1912_);
lean_dec_ref(v_keys_1911_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8___redArg(lean_object* v_map_1917_, lean_object* v_f_1918_, lean_object* v_init_1919_){
_start:
{
lean_object* v___x_1920_; 
v___x_1920_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___redArg(v_f_1918_, v_map_1917_, v_init_1919_);
return v___x_1920_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_map_1921_, lean_object* v_f_1922_, lean_object* v_init_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8___redArg(v_map_1921_, v_f_1922_, v_init_1923_);
lean_dec_ref(v_map_1921_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8(lean_object* v_00_u03c3_1925_, lean_object* v_00_u03b2_1926_, lean_object* v_map_1927_, lean_object* v_f_1928_, lean_object* v_init_1929_){
_start:
{
lean_object* v___x_1930_; 
v___x_1930_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___redArg(v_f_1928_, v_map_1927_, v_init_1929_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03c3_1931_, lean_object* v_00_u03b2_1932_, lean_object* v_map_1933_, lean_object* v_f_1934_, lean_object* v_init_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8(v_00_u03c3_1931_, v_00_u03b2_1932_, v_map_1933_, v_f_1934_, v_init_1935_);
lean_dec_ref(v_map_1933_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12(lean_object* v_00_u03c3_1937_, lean_object* v_00_u03b1_1938_, lean_object* v_00_u03b2_1939_, lean_object* v_f_1940_, lean_object* v_x_1941_, lean_object* v_x_1942_){
_start:
{
lean_object* v___x_1943_; 
v___x_1943_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___redArg(v_f_1940_, v_x_1941_, v_x_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12___boxed(lean_object* v_00_u03c3_1944_, lean_object* v_00_u03b1_1945_, lean_object* v_00_u03b2_1946_, lean_object* v_f_1947_, lean_object* v_x_1948_, lean_object* v_x_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12(v_00_u03c3_1944_, v_00_u03b1_1945_, v_00_u03b2_1946_, v_f_1947_, v_x_1948_, v_x_1949_);
lean_dec_ref(v_x_1948_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13(lean_object* v_00_u03b1_1951_, lean_object* v_00_u03b2_1952_, lean_object* v_00_u03c3_1953_, lean_object* v_f_1954_, lean_object* v_as_1955_, size_t v_i_1956_, size_t v_stop_1957_, lean_object* v_b_1958_){
_start:
{
lean_object* v___x_1959_; 
v___x_1959_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13___redArg(v_f_1954_, v_as_1955_, v_i_1956_, v_stop_1957_, v_b_1958_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13___boxed(lean_object* v_00_u03b1_1960_, lean_object* v_00_u03b2_1961_, lean_object* v_00_u03c3_1962_, lean_object* v_f_1963_, lean_object* v_as_1964_, lean_object* v_i_1965_, lean_object* v_stop_1966_, lean_object* v_b_1967_){
_start:
{
size_t v_i_boxed_1968_; size_t v_stop_boxed_1969_; lean_object* v_res_1970_; 
v_i_boxed_1968_ = lean_unbox_usize(v_i_1965_);
lean_dec(v_i_1965_);
v_stop_boxed_1969_ = lean_unbox_usize(v_stop_1966_);
lean_dec(v_stop_1966_);
v_res_1970_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__13(v_00_u03b1_1960_, v_00_u03b2_1961_, v_00_u03c3_1962_, v_f_1963_, v_as_1964_, v_i_boxed_1968_, v_stop_boxed_1969_, v_b_1967_);
lean_dec_ref(v_as_1964_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14(lean_object* v_00_u03c3_1971_, lean_object* v_00_u03b1_1972_, lean_object* v_00_u03b2_1973_, lean_object* v_f_1974_, lean_object* v_keys_1975_, lean_object* v_vals_1976_, lean_object* v_heq_1977_, lean_object* v_i_1978_, lean_object* v_acc_1979_){
_start:
{
lean_object* v___x_1980_; 
v___x_1980_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14___redArg(v_f_1974_, v_keys_1975_, v_vals_1976_, v_i_1978_, v_acc_1979_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14___boxed(lean_object* v_00_u03c3_1981_, lean_object* v_00_u03b1_1982_, lean_object* v_00_u03b2_1983_, lean_object* v_f_1984_, lean_object* v_keys_1985_, lean_object* v_vals_1986_, lean_object* v_heq_1987_, lean_object* v_i_1988_, lean_object* v_acc_1989_){
_start:
{
lean_object* v_res_1990_; 
v_res_1990_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_Compiler_LCNF_toLCNFType_spec__2_spec__4_spec__8_spec__12_spec__14(v_00_u03c3_1981_, v_00_u03b1_1982_, v_00_u03b2_1983_, v_f_1984_, v_keys_1985_, v_vals_1986_, v_heq_1987_, v_i_1988_, v_acc_1989_);
lean_dec_ref(v_vals_1986_);
lean_dec_ref(v_keys_1985_);
return v_res_1990_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_joinTypes_x3f___closed__0(void){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1991_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1991_);
return v___x_1992_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1(void){
_start:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1993_ = lean_obj_once(&l_Lean_Compiler_LCNF_anyExpr___closed__2, &l_Lean_Compiler_LCNF_anyExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_anyExpr___closed__2);
v___x_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_joinTypes_x3f(lean_object* v_a_1995_, lean_object* v_b_1996_){
_start:
{
uint8_t v___x_2003_; 
v___x_2003_ = l_Lean_Expr_isErased(v_a_1995_);
if (v___x_2003_ == 0)
{
uint8_t v___x_2004_; 
v___x_2004_ = l_Lean_Expr_isErased(v_b_1996_);
if (v___x_2004_ == 0)
{
uint8_t v___x_2005_; 
v___x_2005_ = lean_expr_eqv(v_a_1995_, v_b_1996_);
if (v___x_2005_ == 0)
{
lean_object* v_a_x27_2006_; lean_object* v_b_x27_2007_; uint8_t v___x_2008_; 
lean_inc_ref(v_a_1995_);
v_a_x27_2006_ = l_Lean_Expr_headBeta(v_a_1995_);
lean_inc_ref(v_b_1996_);
v_b_x27_2007_ = l_Lean_Expr_headBeta(v_b_1996_);
v___x_2008_ = lean_expr_eqv(v_a_1995_, v_a_x27_2006_);
if (v___x_2008_ == 0)
{
lean_dec_ref(v_b_1996_);
lean_dec_ref(v_a_1995_);
v_a_1995_ = v_a_x27_2006_;
v_b_1996_ = v_b_x27_2007_;
goto _start;
}
else
{
uint8_t v___x_2010_; 
v___x_2010_ = lean_expr_eqv(v_b_1996_, v_b_x27_2007_);
if (v___x_2010_ == 0)
{
lean_dec_ref(v_b_1996_);
lean_dec_ref(v_a_1995_);
v_a_1995_ = v_a_x27_2006_;
v_b_1996_ = v_b_x27_2007_;
goto _start;
}
else
{
lean_dec_ref(v_b_x27_2007_);
lean_dec_ref(v_a_x27_2006_);
switch(lean_obj_tag(v_a_1995_))
{
case 10:
{
lean_object* v_expr_2012_; 
v_expr_2012_ = lean_ctor_get(v_a_1995_, 1);
lean_inc_ref(v_expr_2012_);
lean_dec_ref_known(v_a_1995_, 2);
v_a_1995_ = v_expr_2012_;
goto _start;
}
case 5:
{
switch(lean_obj_tag(v_b_1996_))
{
case 10:
{
lean_object* v_expr_2014_; 
v_expr_2014_ = lean_ctor_get(v_b_1996_, 1);
lean_inc_ref(v_expr_2014_);
lean_dec_ref_known(v_b_1996_, 2);
v_b_1996_ = v_expr_2014_;
goto _start;
}
case 5:
{
lean_object* v_fn_2016_; lean_object* v_arg_2017_; lean_object* v_fn_2018_; lean_object* v_arg_2019_; lean_object* v___x_2020_; 
v_fn_2016_ = lean_ctor_get(v_a_1995_, 0);
lean_inc_ref(v_fn_2016_);
v_arg_2017_ = lean_ctor_get(v_a_1995_, 1);
lean_inc_ref(v_arg_2017_);
lean_dec_ref_known(v_a_1995_, 2);
v_fn_2018_ = lean_ctor_get(v_b_1996_, 0);
lean_inc_ref(v_fn_2018_);
v_arg_2019_ = lean_ctor_get(v_b_1996_, 1);
lean_inc_ref(v_arg_2019_);
lean_dec_ref_known(v_b_1996_, 2);
v___x_2020_ = l_Lean_Compiler_LCNF_joinTypes_x3f(v_fn_2016_, v_fn_2018_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_dec_ref(v_arg_2019_);
lean_dec_ref(v_arg_2017_);
goto v___jp_2001_;
}
else
{
lean_object* v_val_2021_; lean_object* v___x_2022_; 
v_val_2021_ = lean_ctor_get(v___x_2020_, 0);
lean_inc(v_val_2021_);
lean_dec_ref_known(v___x_2020_, 1);
v___x_2022_ = l_Lean_Compiler_LCNF_joinTypes_x3f(v_arg_2017_, v_arg_2019_);
if (lean_obj_tag(v___x_2022_) == 0)
{
lean_dec(v_val_2021_);
goto v___jp_2001_;
}
else
{
lean_object* v_val_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2031_; 
v_val_2023_ = lean_ctor_get(v___x_2022_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_2022_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2025_ = v___x_2022_;
v_isShared_2026_ = v_isSharedCheck_2031_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_val_2023_);
lean_dec(v___x_2022_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2031_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2027_; lean_object* v___x_2029_; 
v___x_2027_ = l_Lean_Expr_app___override(v_val_2021_, v_val_2023_);
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 0, v___x_2027_);
v___x_2029_ = v___x_2025_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v___x_2027_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
}
}
default: 
{
lean_dec_ref_known(v_a_1995_, 2);
lean_dec_ref(v_b_1996_);
goto v___jp_1999_;
}
}
}
case 7:
{
switch(lean_obj_tag(v_b_1996_))
{
case 10:
{
lean_object* v_expr_2032_; 
v_expr_2032_ = lean_ctor_get(v_b_1996_, 1);
lean_inc_ref(v_expr_2032_);
lean_dec_ref_known(v_b_1996_, 2);
v_b_1996_ = v_expr_2032_;
goto _start;
}
case 7:
{
lean_object* v_binderName_2034_; lean_object* v_binderType_2035_; lean_object* v_body_2036_; lean_object* v_binderType_2037_; lean_object* v_body_2038_; lean_object* v___x_2039_; 
v_binderName_2034_ = lean_ctor_get(v_a_1995_, 0);
lean_inc(v_binderName_2034_);
v_binderType_2035_ = lean_ctor_get(v_a_1995_, 1);
lean_inc_ref(v_binderType_2035_);
v_body_2036_ = lean_ctor_get(v_a_1995_, 2);
lean_inc_ref(v_body_2036_);
lean_dec_ref_known(v_a_1995_, 3);
v_binderType_2037_ = lean_ctor_get(v_b_1996_, 1);
lean_inc_ref(v_binderType_2037_);
v_body_2038_ = lean_ctor_get(v_b_1996_, 2);
lean_inc_ref(v_body_2038_);
lean_dec_ref_known(v_b_1996_, 3);
v___x_2039_ = l_Lean_Compiler_LCNF_joinTypes_x3f(v_binderType_2035_, v_binderType_2037_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v___x_2040_; 
lean_dec_ref(v_body_2038_);
lean_dec_ref(v_body_2036_);
lean_dec(v_binderName_2034_);
v___x_2040_ = lean_obj_once(&l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1, &l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1);
return v___x_2040_;
}
else
{
lean_object* v_val_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2051_; 
v_val_2041_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2043_ = v___x_2039_;
v_isShared_2044_ = v_isSharedCheck_2051_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_val_2041_);
lean_dec(v___x_2039_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2051_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2045_; uint8_t v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2049_; 
v___x_2045_ = l_Lean_Compiler_LCNF_joinTypes(v_body_2036_, v_body_2038_);
v___x_2046_ = 0;
v___x_2047_ = l_Lean_Expr_forallE___override(v_binderName_2034_, v_val_2041_, v___x_2045_, v___x_2046_);
if (v_isShared_2044_ == 0)
{
lean_ctor_set(v___x_2043_, 0, v___x_2047_);
v___x_2049_ = v___x_2043_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v___x_2047_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
return v___x_2049_;
}
}
}
}
default: 
{
lean_dec_ref_known(v_a_1995_, 3);
lean_dec_ref(v_b_1996_);
goto v___jp_1999_;
}
}
}
case 6:
{
switch(lean_obj_tag(v_b_1996_))
{
case 10:
{
lean_object* v_expr_2052_; 
v_expr_2052_ = lean_ctor_get(v_b_1996_, 1);
lean_inc_ref(v_expr_2052_);
lean_dec_ref_known(v_b_1996_, 2);
v_b_1996_ = v_expr_2052_;
goto _start;
}
case 6:
{
lean_object* v_binderName_2054_; lean_object* v_binderType_2055_; lean_object* v_body_2056_; lean_object* v_binderType_2057_; lean_object* v_body_2058_; lean_object* v___x_2059_; 
v_binderName_2054_ = lean_ctor_get(v_a_1995_, 0);
lean_inc(v_binderName_2054_);
v_binderType_2055_ = lean_ctor_get(v_a_1995_, 1);
lean_inc_ref(v_binderType_2055_);
v_body_2056_ = lean_ctor_get(v_a_1995_, 2);
lean_inc_ref(v_body_2056_);
lean_dec_ref_known(v_a_1995_, 3);
v_binderType_2057_ = lean_ctor_get(v_b_1996_, 1);
lean_inc_ref(v_binderType_2057_);
v_body_2058_ = lean_ctor_get(v_b_1996_, 2);
lean_inc_ref(v_body_2058_);
lean_dec_ref_known(v_b_1996_, 3);
v___x_2059_ = l_Lean_Compiler_LCNF_joinTypes_x3f(v_binderType_2055_, v_binderType_2057_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v___x_2060_; 
lean_dec_ref(v_body_2058_);
lean_dec_ref(v_body_2056_);
lean_dec(v_binderName_2054_);
v___x_2060_ = lean_obj_once(&l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1, &l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1);
return v___x_2060_;
}
else
{
lean_object* v_val_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2071_; 
v_val_2061_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2063_ = v___x_2059_;
v_isShared_2064_ = v_isSharedCheck_2071_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_val_2061_);
lean_dec(v___x_2059_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2071_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2065_; uint8_t v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2069_; 
v___x_2065_ = l_Lean_Compiler_LCNF_joinTypes(v_body_2056_, v_body_2058_);
v___x_2066_ = 0;
v___x_2067_ = l_Lean_Expr_lam___override(v_binderName_2054_, v_val_2061_, v___x_2065_, v___x_2066_);
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v___x_2067_);
v___x_2069_ = v___x_2063_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2067_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
default: 
{
lean_dec_ref_known(v_a_1995_, 3);
lean_dec_ref(v_b_1996_);
goto v___jp_1999_;
}
}
}
default: 
{
if (lean_obj_tag(v_b_1996_) == 10)
{
lean_object* v_expr_2072_; 
v_expr_2072_ = lean_ctor_get(v_b_1996_, 1);
lean_inc_ref(v_expr_2072_);
lean_dec_ref_known(v_b_1996_, 2);
v_b_1996_ = v_expr_2072_;
goto _start;
}
else
{
lean_dec_ref(v_b_1996_);
lean_dec_ref(v_a_1995_);
goto v___jp_1999_;
}
}
}
}
}
}
else
{
lean_object* v___x_2074_; 
lean_dec_ref(v_b_1996_);
v___x_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2074_, 0, v_a_1995_);
return v___x_2074_;
}
}
else
{
lean_dec_ref(v_b_1996_);
lean_dec_ref(v_a_1995_);
goto v___jp_1997_;
}
}
else
{
lean_dec_ref(v_b_1996_);
lean_dec_ref(v_a_1995_);
goto v___jp_1997_;
}
v___jp_1997_:
{
lean_object* v___x_1998_; 
v___x_1998_ = lean_obj_once(&l_Lean_Compiler_LCNF_joinTypes_x3f___closed__0, &l_Lean_Compiler_LCNF_joinTypes_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_joinTypes_x3f___closed__0);
return v___x_1998_;
}
v___jp_1999_:
{
lean_object* v___x_2000_; 
v___x_2000_ = lean_obj_once(&l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1, &l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1);
return v___x_2000_;
}
v___jp_2001_:
{
lean_object* v___x_2002_; 
v___x_2002_ = lean_obj_once(&l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1, &l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_joinTypes_x3f___closed__1);
return v___x_2002_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_joinTypes(lean_object* v_a_2075_, lean_object* v_b_2076_){
_start:
{
lean_object* v___x_2077_; 
v___x_2077_ = l_Lean_Compiler_LCNF_joinTypes_x3f(v_a_2075_, v_b_2076_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v___x_2078_; 
v___x_2078_ = lean_obj_once(&l_Lean_Compiler_LCNF_anyExpr___closed__2, &l_Lean_Compiler_LCNF_anyExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_anyExpr___closed__2);
return v___x_2078_;
}
else
{
lean_object* v_val_2079_; 
v_val_2079_ = lean_ctor_get(v___x_2077_, 0);
lean_inc(v_val_2079_);
lean_dec_ref_known(v___x_2077_, 1);
return v_val_2079_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isTypeFormerType(lean_object* v_type_2080_){
_start:
{
lean_object* v___x_2081_; 
v___x_2081_ = l_Lean_Expr_headBeta(v_type_2080_);
switch(lean_obj_tag(v___x_2081_))
{
case 3:
{
uint8_t v___x_2082_; 
lean_dec_ref_known(v___x_2081_, 1);
v___x_2082_ = 1;
return v___x_2082_;
}
case 7:
{
lean_object* v_body_2083_; 
v_body_2083_ = lean_ctor_get(v___x_2081_, 2);
lean_inc_ref(v_body_2083_);
lean_dec_ref_known(v___x_2081_, 3);
v_type_2080_ = v_body_2083_;
goto _start;
}
default: 
{
uint8_t v___x_2085_; 
lean_dec_ref(v___x_2081_);
v___x_2085_ = 0;
return v___x_2085_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isTypeFormerType___boxed(lean_object* v_type_2086_){
_start:
{
uint8_t v_res_2087_; lean_object* v_r_2088_; 
v_res_2087_ = l_Lean_Compiler_LCNF_isTypeFormerType(v_type_2086_);
v_r_2088_ = lean_box(v_res_2087_);
return v_r_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0_spec__0(lean_object* v_msgData_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_){
_start:
{
lean_object* v___x_2093_; lean_object* v_toCold_2094_; lean_object* v_env_2095_; lean_object* v_options_2096_; uint8_t v___x_2097_; lean_object* v_env_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2093_ = lean_st_ref_get(v___y_2091_);
v_toCold_2094_ = lean_ctor_get(v___y_2090_, 0);
v_env_2095_ = lean_ctor_get(v___x_2093_, 0);
lean_inc_ref(v_env_2095_);
lean_dec(v___x_2093_);
v_options_2096_ = lean_ctor_get(v_toCold_2094_, 2);
v___x_2097_ = 0;
v_env_2098_ = l_Lean_Environment_setRecordingDeps(v_env_2095_, v___x_2097_);
v___x_2099_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_2100_ = lean_unsigned_to_nat(32u);
v___x_2101_ = lean_mk_empty_array_with_capacity(v___x_2100_);
lean_dec_ref(v___x_2101_);
v___x_2102_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitApp_spec__4_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5);
lean_inc_ref(v_options_2096_);
v___x_2103_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2103_, 0, v_env_2098_);
lean_ctor_set(v___x_2103_, 1, v___x_2099_);
lean_ctor_set(v___x_2103_, 2, v___x_2102_);
lean_ctor_set(v___x_2103_, 3, v_options_2096_);
v___x_2104_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2103_);
lean_ctor_set(v___x_2104_, 1, v_msgData_2089_);
v___x_2105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2104_);
return v___x_2105_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0_spec__0___boxed(lean_object* v_msgData_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_){
_start:
{
lean_object* v_res_2110_; 
v_res_2110_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0_spec__0(v_msgData_2106_, v___y_2107_, v___y_2108_);
lean_dec(v___y_2108_);
lean_dec_ref(v___y_2107_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0___redArg(lean_object* v_msg_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v_ref_2115_; lean_object* v___x_2116_; lean_object* v_a_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2125_; 
v_ref_2115_ = lean_ctor_get(v___y_2112_, 2);
v___x_2116_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0_spec__0(v_msg_2111_, v___y_2112_, v___y_2113_);
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2119_ = v___x_2116_;
v_isShared_2120_ = v_isSharedCheck_2125_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_a_2117_);
lean_dec(v___x_2116_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2125_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2121_; lean_object* v___x_2123_; 
lean_inc(v_ref_2115_);
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v_ref_2115_);
lean_ctor_set(v___x_2121_, 1, v_a_2117_);
if (v_isShared_2120_ == 0)
{
lean_ctor_set_tag(v___x_2119_, 1);
lean_ctor_set(v___x_2119_, 0, v___x_2121_);
v___x_2123_ = v___x_2119_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v___x_2121_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0___redArg___boxed(lean_object* v_msg_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
lean_object* v_res_2130_; 
v_res_2130_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0___redArg(v_msg_2126_, v___y_2127_, v___y_2128_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
return v_res_2130_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___closed__1(void){
_start:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2132_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___closed__0));
v___x_2133_ = l_Lean_stringToMessageData(v___x_2132_);
return v___x_2133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go(lean_object* v_ps_2134_, lean_object* v_i_2135_, lean_object* v_type_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_){
_start:
{
lean_object* v___x_2140_; uint8_t v___x_2141_; 
v___x_2140_ = lean_array_get_size(v_ps_2134_);
v___x_2141_ = lean_nat_dec_lt(v_i_2135_, v___x_2140_);
if (v___x_2141_ == 0)
{
lean_object* v___x_2142_; 
lean_dec(v_i_2135_);
v___x_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2142_, 0, v_type_2136_);
return v___x_2142_;
}
else
{
lean_object* v___x_2143_; 
v___x_2143_ = l_Lean_Expr_headBeta(v_type_2136_);
if (lean_obj_tag(v___x_2143_) == 7)
{
lean_object* v_body_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v_body_2144_ = lean_ctor_get(v___x_2143_, 2);
lean_inc_ref(v_body_2144_);
lean_dec_ref_known(v___x_2143_, 3);
v___x_2145_ = lean_unsigned_to_nat(1u);
v___x_2146_ = lean_nat_add(v_i_2135_, v___x_2145_);
v___x_2147_ = lean_array_fget_borrowed(v_ps_2134_, v_i_2135_);
lean_dec(v_i_2135_);
v___x_2148_ = lean_expr_instantiate1(v_body_2144_, v___x_2147_);
lean_dec_ref(v_body_2144_);
v_i_2135_ = v___x_2146_;
v_type_2136_ = v___x_2148_;
goto _start;
}
else
{
lean_object* v___x_2150_; lean_object* v___x_2151_; 
lean_dec_ref(v___x_2143_);
lean_dec(v_i_2135_);
v___x_2150_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___closed__1, &l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___closed__1);
v___x_2151_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0___redArg(v___x_2150_, v_a_2137_, v_a_2138_);
return v___x_2151_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go___boxed(lean_object* v_ps_2152_, lean_object* v_i_2153_, lean_object* v_type_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_){
_start:
{
lean_object* v_res_2158_; 
v_res_2158_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go(v_ps_2152_, v_i_2153_, v_type_2154_, v_a_2155_, v_a_2156_);
lean_dec(v_a_2156_);
lean_dec_ref(v_a_2155_);
lean_dec_ref(v_ps_2152_);
return v_res_2158_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0(lean_object* v_00_u03b1_2159_, lean_object* v_msg_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_){
_start:
{
lean_object* v___x_2164_; 
v___x_2164_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0___redArg(v_msg_2160_, v___y_2161_, v___y_2162_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0___boxed(lean_object* v_00_u03b1_2165_, lean_object* v_msg_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_){
_start:
{
lean_object* v_res_2170_; 
v_res_2170_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go_spec__0(v_00_u03b1_2165_, v_msg_2166_, v___y_2167_, v___y_2168_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
return v_res_2170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall_match__9_splitter___redArg(lean_object* v_e_2171_, lean_object* v_h__1_2172_, lean_object* v_h__2_2173_){
_start:
{
if (lean_obj_tag(v_e_2171_) == 7)
{
lean_object* v_binderName_2174_; lean_object* v_binderType_2175_; lean_object* v_body_2176_; uint8_t v_binderInfo_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
lean_dec(v_h__2_2173_);
v_binderName_2174_ = lean_ctor_get(v_e_2171_, 0);
lean_inc(v_binderName_2174_);
v_binderType_2175_ = lean_ctor_get(v_e_2171_, 1);
lean_inc_ref(v_binderType_2175_);
v_body_2176_ = lean_ctor_get(v_e_2171_, 2);
lean_inc_ref(v_body_2176_);
v_binderInfo_2177_ = lean_ctor_get_uint8(v_e_2171_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2171_, 3);
v___x_2178_ = lean_box(v_binderInfo_2177_);
v___x_2179_ = lean_apply_4(v_h__1_2172_, v_binderName_2174_, v_binderType_2175_, v_body_2176_, v___x_2178_);
return v___x_2179_;
}
else
{
lean_object* v___x_2180_; 
lean_dec(v_h__1_2172_);
v___x_2180_ = lean_apply_2(v_h__2_2173_, v_e_2171_, lean_box(0));
return v___x_2180_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_toLCNFType_visitForall_match__9_splitter(lean_object* v_motive_2181_, lean_object* v_e_2182_, lean_object* v_h__1_2183_, lean_object* v_h__2_2184_){
_start:
{
if (lean_obj_tag(v_e_2182_) == 7)
{
lean_object* v_binderName_2185_; lean_object* v_binderType_2186_; lean_object* v_body_2187_; uint8_t v_binderInfo_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
lean_dec(v_h__2_2184_);
v_binderName_2185_ = lean_ctor_get(v_e_2182_, 0);
lean_inc(v_binderName_2185_);
v_binderType_2186_ = lean_ctor_get(v_e_2182_, 1);
lean_inc_ref(v_binderType_2186_);
v_body_2187_ = lean_ctor_get(v_e_2182_, 2);
lean_inc_ref(v_body_2187_);
v_binderInfo_2188_ = lean_ctor_get_uint8(v_e_2182_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2182_, 3);
v___x_2189_ = lean_box(v_binderInfo_2188_);
v___x_2190_ = lean_apply_4(v_h__1_2183_, v_binderName_2185_, v_binderType_2186_, v_body_2187_, v___x_2189_);
return v___x_2190_;
}
else
{
lean_object* v___x_2191_; 
lean_dec(v_h__1_2183_);
v___x_2191_ = lean_apply_2(v_h__2_2184_, v_e_2182_, lean_box(0));
return v___x_2191_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instantiateForall(lean_object* v_type_2192_, lean_object* v_ps_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2197_ = lean_unsigned_to_nat(0u);
v___x_2198_ = l___private_Lean_Compiler_LCNF_Types_0__Lean_Compiler_LCNF_instantiateForall_go(v_ps_2193_, v___x_2197_, v_type_2192_, v_a_2194_, v_a_2195_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instantiateForall___boxed(lean_object* v_type_2199_, lean_object* v_ps_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Lean_Compiler_LCNF_instantiateForall(v_type_2199_, v_ps_2200_, v_a_2201_, v_a_2202_);
lean_dec(v_a_2202_);
lean_dec_ref(v_a_2201_);
lean_dec_ref(v_ps_2200_);
return v_res_2204_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isPredicateType(lean_object* v_type_2205_){
_start:
{
lean_object* v___x_2206_; 
v___x_2206_ = l_Lean_Expr_headBeta(v_type_2205_);
switch(lean_obj_tag(v___x_2206_))
{
case 3:
{
lean_object* v_u_2207_; 
v_u_2207_ = lean_ctor_get(v___x_2206_, 0);
lean_inc(v_u_2207_);
lean_dec_ref_known(v___x_2206_, 1);
if (lean_obj_tag(v_u_2207_) == 0)
{
uint8_t v___x_2208_; 
v___x_2208_ = 1;
return v___x_2208_;
}
else
{
uint8_t v___x_2209_; 
lean_dec(v_u_2207_);
v___x_2209_ = 0;
return v___x_2209_;
}
}
case 7:
{
lean_object* v_body_2210_; 
v_body_2210_ = lean_ctor_get(v___x_2206_, 2);
lean_inc_ref(v_body_2210_);
lean_dec_ref_known(v___x_2206_, 3);
v_type_2205_ = v_body_2210_;
goto _start;
}
default: 
{
uint8_t v___x_2212_; 
lean_dec_ref(v___x_2206_);
v___x_2212_ = 0;
return v___x_2212_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isPredicateType___boxed(lean_object* v_type_2213_){
_start:
{
uint8_t v_res_2214_; lean_object* v_r_2215_; 
v_res_2214_ = l_Lean_Compiler_LCNF_isPredicateType(v_type_2213_);
v_r_2215_ = lean_box(v_res_2214_);
return v_r_2215_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_maybeTypeFormerType(lean_object* v_type_2216_){
_start:
{
lean_object* v___x_2217_; 
lean_inc_ref(v_type_2216_);
v___x_2217_ = l_Lean_Expr_headBeta(v_type_2216_);
switch(lean_obj_tag(v___x_2217_))
{
case 3:
{
uint8_t v___x_2218_; 
lean_dec_ref_known(v___x_2217_, 1);
lean_dec_ref(v_type_2216_);
v___x_2218_ = 1;
return v___x_2218_;
}
case 7:
{
lean_object* v_body_2219_; 
lean_dec_ref(v_type_2216_);
v_body_2219_ = lean_ctor_get(v___x_2217_, 2);
lean_inc_ref(v_body_2219_);
lean_dec_ref_known(v___x_2217_, 3);
v_type_2216_ = v_body_2219_;
goto _start;
}
default: 
{
uint8_t v___x_2221_; 
lean_dec_ref(v___x_2217_);
v___x_2221_ = l_Lean_Expr_isErased(v_type_2216_);
lean_dec_ref(v_type_2216_);
return v___x_2221_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_maybeTypeFormerType___boxed(lean_object* v_type_2222_){
_start:
{
uint8_t v_res_2223_; lean_object* v_r_2224_; 
v_res_2223_ = l_Lean_Compiler_LCNF_maybeTypeFormerType(v_type_2222_);
v_r_2224_ = lean_box(v_res_2223_);
return v_r_2224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isClass_x3f___redArg(lean_object* v_type_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v___x_2228_; 
v___x_2228_ = l_Lean_Expr_getAppFn(v_type_2225_);
if (lean_obj_tag(v___x_2228_) == 4)
{
lean_object* v_declName_2229_; lean_object* v___x_2230_; lean_object* v_env_2231_; uint8_t v___x_2232_; 
v_declName_2229_ = lean_ctor_get(v___x_2228_, 0);
lean_inc(v_declName_2229_);
lean_dec_ref_known(v___x_2228_, 2);
v___x_2230_ = lean_st_ref_get(v_a_2226_);
v_env_2231_ = lean_ctor_get(v___x_2230_, 0);
lean_inc_ref(v_env_2231_);
lean_dec(v___x_2230_);
v___x_2232_ = l_Lean_isClass(v_env_2231_, v_declName_2229_);
if (v___x_2232_ == 0)
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
lean_dec(v_declName_2229_);
v___x_2233_ = lean_box(0);
v___x_2234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2233_);
return v___x_2234_;
}
else
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v_declName_2229_);
v___x_2236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
return v___x_2236_;
}
}
else
{
lean_object* v___x_2237_; lean_object* v___x_2238_; 
lean_dec_ref(v___x_2228_);
v___x_2237_ = lean_box(0);
v___x_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2238_, 0, v___x_2237_);
return v___x_2238_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isClass_x3f___redArg___boxed(lean_object* v_type_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l_Lean_Compiler_LCNF_isClass_x3f___redArg(v_type_2239_, v_a_2240_);
lean_dec(v_a_2240_);
lean_dec_ref(v_type_2239_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isClass_x3f(lean_object* v_type_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_){
_start:
{
lean_object* v___x_2247_; 
v___x_2247_ = l_Lean_Compiler_LCNF_isClass_x3f___redArg(v_type_2243_, v_a_2245_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isClass_x3f___boxed(lean_object* v_type_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l_Lean_Compiler_LCNF_isClass_x3f(v_type_2248_, v_a_2249_, v_a_2250_);
lean_dec(v_a_2250_);
lean_dec_ref(v_a_2249_);
lean_dec_ref(v_type_2248_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(lean_object* v_type_2253_, lean_object* v_a_2254_){
_start:
{
lean_object* v___x_2256_; 
lean_inc_ref(v_type_2253_);
v___x_2256_ = l_Lean_Expr_headBeta(v_type_2253_);
if (lean_obj_tag(v___x_2256_) == 7)
{
lean_object* v_body_2257_; 
lean_dec_ref(v_type_2253_);
v_body_2257_ = lean_ctor_get(v___x_2256_, 2);
lean_inc_ref(v_body_2257_);
lean_dec_ref_known(v___x_2256_, 3);
v_type_2253_ = v_body_2257_;
goto _start;
}
else
{
lean_object* v___x_2259_; 
lean_dec_ref(v___x_2256_);
v___x_2259_ = l_Lean_Compiler_LCNF_isClass_x3f___redArg(v_type_2253_, v_a_2254_);
lean_dec_ref(v_type_2253_);
return v___x_2259_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg___boxed(lean_object* v_type_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(v_type_2260_, v_a_2261_);
lean_dec(v_a_2261_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f(lean_object* v_type_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_){
_start:
{
lean_object* v___x_2268_; 
v___x_2268_ = l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(v_type_2264_, v_a_2266_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f___boxed(lean_object* v_type_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_){
_start:
{
lean_object* v_res_2273_; 
v_res_2273_ = l_Lean_Compiler_LCNF_isArrowClass_x3f(v_type_2269_, v_a_2270_, v_a_2271_);
lean_dec(v_a_2271_);
lean_dec_ref(v_a_2270_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getArrowArity(lean_object* v_e_2274_){
_start:
{
lean_object* v___x_2275_; 
v___x_2275_ = l_Lean_Expr_headBeta(v_e_2274_);
if (lean_obj_tag(v___x_2275_) == 7)
{
lean_object* v_body_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v_body_2276_ = lean_ctor_get(v___x_2275_, 2);
lean_inc_ref(v_body_2276_);
lean_dec_ref_known(v___x_2275_, 3);
v___x_2277_ = l_Lean_Compiler_LCNF_getArrowArity(v_body_2276_);
v___x_2278_ = lean_unsigned_to_nat(1u);
v___x_2279_ = lean_nat_add(v___x_2277_, v___x_2278_);
lean_dec(v___x_2277_);
return v___x_2279_;
}
else
{
lean_object* v___x_2280_; 
lean_dec_ref(v___x_2275_);
v___x_2280_ = lean_unsigned_to_nat(0u);
return v___x_2280_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(lean_object* v_type_2281_, lean_object* v_a_2282_){
_start:
{
lean_object* v___x_2288_; 
v___x_2288_ = l_Lean_Expr_getAppFn(v_type_2281_);
if (lean_obj_tag(v___x_2288_) == 4)
{
lean_object* v_declName_2289_; lean_object* v___x_2290_; lean_object* v_env_2291_; uint8_t v___x_2292_; lean_object* v___x_2293_; 
v_declName_2289_ = lean_ctor_get(v___x_2288_, 0);
lean_inc(v_declName_2289_);
lean_dec_ref_known(v___x_2288_, 2);
v___x_2290_ = lean_st_ref_get(v_a_2282_);
v_env_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc_ref(v_env_2291_);
lean_dec(v___x_2290_);
v___x_2292_ = 0;
v___x_2293_ = l_Lean_Environment_find_x3f(v_env_2291_, v_declName_2289_, v___x_2292_);
if (lean_obj_tag(v___x_2293_) == 1)
{
lean_object* v_val_2294_; 
v_val_2294_ = lean_ctor_get(v___x_2293_, 0);
lean_inc(v_val_2294_);
lean_dec_ref_known(v___x_2293_, 1);
if (lean_obj_tag(v_val_2294_) == 5)
{
lean_object* v_val_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2306_; 
v_val_2295_ = lean_ctor_get(v_val_2294_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v_val_2294_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2297_ = v_val_2294_;
v_isShared_2298_ = v_isSharedCheck_2306_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_val_2295_);
lean_dec(v_val_2294_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2306_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; uint8_t v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2304_; 
v___x_2299_ = l_Lean_InductiveVal_numCtors(v_val_2295_);
lean_dec_ref(v_val_2295_);
v___x_2300_ = lean_unsigned_to_nat(0u);
v___x_2301_ = lean_nat_dec_eq(v___x_2299_, v___x_2300_);
lean_dec(v___x_2299_);
v___x_2302_ = lean_box(v___x_2301_);
if (v_isShared_2298_ == 0)
{
lean_ctor_set_tag(v___x_2297_, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2302_);
v___x_2304_ = v___x_2297_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v___x_2302_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
else
{
lean_dec(v_val_2294_);
goto v___jp_2284_;
}
}
else
{
lean_dec(v___x_2293_);
goto v___jp_2284_;
}
}
else
{
uint8_t v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
lean_dec_ref(v___x_2288_);
v___x_2307_ = 0;
v___x_2308_ = lean_box(v___x_2307_);
v___x_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2308_);
return v___x_2309_;
}
v___jp_2284_:
{
uint8_t v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2285_ = 0;
v___x_2286_ = lean_box(v___x_2285_);
v___x_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2286_);
return v___x_2287_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg___boxed(lean_object* v_type_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_){
_start:
{
lean_object* v_res_2313_; 
v_res_2313_ = l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(v_type_2310_, v_a_2311_);
lean_dec(v_a_2311_);
lean_dec_ref(v_type_2310_);
return v_res_2313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors(lean_object* v_type_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_){
_start:
{
lean_object* v___x_2318_; 
v___x_2318_ = l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(v_type_2314_, v_a_2316_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors___boxed(lean_object* v_type_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lean_Compiler_LCNF_isInductiveWithNoCtors(v_type_2319_, v_a_2320_, v_a_2321_);
lean_dec(v_a_2321_);
lean_dec_ref(v_a_2320_);
lean_dec_ref(v_type_2319_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkBoxedName(lean_object* v_n_2325_){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2326_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkBoxedName___closed__0));
v___x_2327_ = l_Lean_Name_str___override(v_n_2325_, v___x_2326_);
return v___x_2327_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isBoxedName(lean_object* v_name_2328_){
_start:
{
if (lean_obj_tag(v_name_2328_) == 1)
{
lean_object* v_str_2329_; lean_object* v___x_2330_; uint8_t v___x_2331_; 
v_str_2329_ = lean_ctor_get(v_name_2328_, 1);
v___x_2330_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkBoxedName___closed__0));
v___x_2331_ = lean_string_dec_eq(v_str_2329_, v___x_2330_);
return v___x_2331_;
}
else
{
uint8_t v___x_2332_; 
v___x_2332_ = 0;
return v___x_2332_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isBoxedName___boxed(lean_object* v_name_2333_){
_start:
{
uint8_t v_res_2334_; lean_object* v_r_2335_; 
v_res_2334_ = l_Lean_Compiler_LCNF_isBoxedName(v_name_2333_);
lean_dec(v_name_2333_);
v_r_2335_ = lean_box(v_res_2334_);
return v_r_2335_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_float___closed__2(void){
_start:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2339_ = lean_box(0);
v___x_2340_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_float___closed__1));
v___x_2341_ = l_Lean_Expr_const___override(v___x_2340_, v___x_2339_);
return v___x_2341_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_float(void){
_start:
{
lean_object* v___x_2342_; 
v___x_2342_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_float___closed__2, &l_Lean_Compiler_LCNF_ImpureType_float___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_float___closed__2);
return v___x_2342_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_float32___closed__2(void){
_start:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2346_ = lean_box(0);
v___x_2347_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_float32___closed__1));
v___x_2348_ = l_Lean_Expr_const___override(v___x_2347_, v___x_2346_);
return v___x_2348_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_float32(void){
_start:
{
lean_object* v___x_2349_; 
v___x_2349_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_float32___closed__2, &l_Lean_Compiler_LCNF_ImpureType_float32___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_float32___closed__2);
return v___x_2349_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_uint8___closed__2(void){
_start:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2353_ = lean_box(0);
v___x_2354_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_uint8___closed__1));
v___x_2355_ = l_Lean_Expr_const___override(v___x_2354_, v___x_2353_);
return v___x_2355_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_uint8(void){
_start:
{
lean_object* v___x_2356_; 
v___x_2356_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_uint8___closed__2, &l_Lean_Compiler_LCNF_ImpureType_uint8___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_uint8___closed__2);
return v___x_2356_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_uint16___closed__2(void){
_start:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2360_ = lean_box(0);
v___x_2361_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_uint16___closed__1));
v___x_2362_ = l_Lean_Expr_const___override(v___x_2361_, v___x_2360_);
return v___x_2362_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_uint16(void){
_start:
{
lean_object* v___x_2363_; 
v___x_2363_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_uint16___closed__2, &l_Lean_Compiler_LCNF_ImpureType_uint16___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_uint16___closed__2);
return v___x_2363_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_uint32___closed__2(void){
_start:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2367_ = lean_box(0);
v___x_2368_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_uint32___closed__1));
v___x_2369_ = l_Lean_Expr_const___override(v___x_2368_, v___x_2367_);
return v___x_2369_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_uint32(void){
_start:
{
lean_object* v___x_2370_; 
v___x_2370_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_uint32___closed__2, &l_Lean_Compiler_LCNF_ImpureType_uint32___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_uint32___closed__2);
return v___x_2370_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_uint64___closed__2(void){
_start:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2374_ = lean_box(0);
v___x_2375_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_uint64___closed__1));
v___x_2376_ = l_Lean_Expr_const___override(v___x_2375_, v___x_2374_);
return v___x_2376_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_uint64(void){
_start:
{
lean_object* v___x_2377_; 
v___x_2377_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_uint64___closed__2, &l_Lean_Compiler_LCNF_ImpureType_uint64___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_uint64___closed__2);
return v___x_2377_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_usize___closed__2(void){
_start:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; 
v___x_2381_ = lean_box(0);
v___x_2382_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_usize___closed__1));
v___x_2383_ = l_Lean_Expr_const___override(v___x_2382_, v___x_2381_);
return v___x_2383_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_usize(void){
_start:
{
lean_object* v___x_2384_; 
v___x_2384_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_usize___closed__2, &l_Lean_Compiler_LCNF_ImpureType_usize___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_usize___closed__2);
return v___x_2384_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_erased___closed__0(void){
_start:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2385_ = lean_box(0);
v___x_2386_ = ((lean_object*)(l_Lean_Compiler___aux__Lean__Compiler__LCNF__Types______macroRules__Lean__Compiler__term_u25fe__1___closed__2));
v___x_2387_ = l_Lean_Expr_const___override(v___x_2386_, v___x_2385_);
return v___x_2387_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_erased(void){
_start:
{
lean_object* v___x_2388_; 
v___x_2388_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_erased___closed__0, &l_Lean_Compiler_LCNF_ImpureType_erased___closed__0_once, _init_l_Lean_Compiler_LCNF_ImpureType_erased___closed__0);
return v___x_2388_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_object___closed__2(void){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2392_ = lean_box(0);
v___x_2393_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_object___closed__1));
v___x_2394_ = l_Lean_Expr_const___override(v___x_2393_, v___x_2392_);
return v___x_2394_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_object(void){
_start:
{
lean_object* v___x_2395_; 
v___x_2395_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_object___closed__2, &l_Lean_Compiler_LCNF_ImpureType_object___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_object___closed__2);
return v___x_2395_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_tobject___closed__2(void){
_start:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2399_ = lean_box(0);
v___x_2400_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_tobject___closed__1));
v___x_2401_ = l_Lean_Expr_const___override(v___x_2400_, v___x_2399_);
return v___x_2401_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_tobject(void){
_start:
{
lean_object* v___x_2402_; 
v___x_2402_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_tobject___closed__2, &l_Lean_Compiler_LCNF_ImpureType_tobject___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_tobject___closed__2);
return v___x_2402_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_tagged___closed__2(void){
_start:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2406_ = lean_box(0);
v___x_2407_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_tagged___closed__1));
v___x_2408_ = l_Lean_Expr_const___override(v___x_2407_, v___x_2406_);
return v___x_2408_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_tagged(void){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_tagged___closed__2, &l_Lean_Compiler_LCNF_ImpureType_tagged___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_tagged___closed__2);
return v___x_2409_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_void___closed__0(void){
_start:
{
lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2410_ = lean_box(0);
v___x_2411_ = ((lean_object*)(l_Lean_Expr_isVoid___closed__1));
v___x_2412_ = l_Lean_Expr_const___override(v___x_2411_, v___x_2410_);
return v___x_2412_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ImpureType_void(void){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_void___closed__0, &l_Lean_Compiler_LCNF_ImpureType_void___closed__0_once, _init_l_Lean_Compiler_LCNF_ImpureType_void___closed__0);
return v___x_2413_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(lean_object* v_x_2414_){
_start:
{
if (lean_obj_tag(v_x_2414_) == 4)
{
lean_object* v_declName_2415_; 
v_declName_2415_ = lean_ctor_get(v_x_2414_, 0);
if (lean_obj_tag(v_declName_2415_) == 1)
{
lean_object* v_pre_2416_; 
v_pre_2416_ = lean_ctor_get(v_declName_2415_, 0);
if (lean_obj_tag(v_pre_2416_) == 0)
{
lean_object* v_us_2417_; lean_object* v_str_2418_; lean_object* v___x_2419_; uint8_t v___x_2420_; 
v_us_2417_ = lean_ctor_get(v_x_2414_, 1);
v_str_2418_ = lean_ctor_get(v_declName_2415_, 1);
v___x_2419_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_float___closed__0));
v___x_2420_ = lean_string_dec_eq(v_str_2418_, v___x_2419_);
if (v___x_2420_ == 0)
{
lean_object* v___x_2421_; uint8_t v___x_2422_; 
v___x_2421_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_float32___closed__0));
v___x_2422_ = lean_string_dec_eq(v_str_2418_, v___x_2421_);
if (v___x_2422_ == 0)
{
lean_object* v___x_2423_; uint8_t v___x_2424_; 
v___x_2423_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_uint8___closed__0));
v___x_2424_ = lean_string_dec_eq(v_str_2418_, v___x_2423_);
if (v___x_2424_ == 0)
{
lean_object* v___x_2425_; uint8_t v___x_2426_; 
v___x_2425_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_uint16___closed__0));
v___x_2426_ = lean_string_dec_eq(v_str_2418_, v___x_2425_);
if (v___x_2426_ == 0)
{
lean_object* v___x_2427_; uint8_t v___x_2428_; 
v___x_2427_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_uint32___closed__0));
v___x_2428_ = lean_string_dec_eq(v_str_2418_, v___x_2427_);
if (v___x_2428_ == 0)
{
lean_object* v___x_2429_; uint8_t v___x_2430_; 
v___x_2429_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_uint64___closed__0));
v___x_2430_ = lean_string_dec_eq(v_str_2418_, v___x_2429_);
if (v___x_2430_ == 0)
{
lean_object* v___x_2431_; uint8_t v___x_2432_; 
v___x_2431_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_usize___closed__0));
v___x_2432_ = lean_string_dec_eq(v_str_2418_, v___x_2431_);
if (v___x_2432_ == 0)
{
return v___x_2432_;
}
else
{
if (lean_obj_tag(v_us_2417_) == 0)
{
return v___x_2432_;
}
else
{
return v___x_2430_;
}
}
}
else
{
if (lean_obj_tag(v_us_2417_) == 0)
{
return v___x_2430_;
}
else
{
return v___x_2428_;
}
}
}
else
{
if (lean_obj_tag(v_us_2417_) == 0)
{
return v___x_2428_;
}
else
{
return v___x_2426_;
}
}
}
else
{
if (lean_obj_tag(v_us_2417_) == 0)
{
return v___x_2426_;
}
else
{
return v___x_2424_;
}
}
}
else
{
if (lean_obj_tag(v_us_2417_) == 0)
{
return v___x_2424_;
}
else
{
return v___x_2422_;
}
}
}
else
{
if (lean_obj_tag(v_us_2417_) == 0)
{
return v___x_2422_;
}
else
{
return v___x_2420_;
}
}
}
else
{
if (lean_obj_tag(v_us_2417_) == 0)
{
return v___x_2420_;
}
else
{
uint8_t v___x_2433_; 
v___x_2433_ = 0;
return v___x_2433_;
}
}
}
else
{
uint8_t v___x_2434_; 
v___x_2434_ = 0;
return v___x_2434_;
}
}
else
{
uint8_t v___x_2435_; 
v___x_2435_ = 0;
return v___x_2435_;
}
}
else
{
uint8_t v___x_2436_; 
v___x_2436_ = 0;
return v___x_2436_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar___boxed(lean_object* v_x_2437_){
_start:
{
uint8_t v_res_2438_; lean_object* v_r_2439_; 
v_res_2438_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_x_2437_);
lean_dec_ref(v_x_2437_);
v_r_2439_ = lean_box(v_res_2438_);
return v_r_2439_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isObj(lean_object* v_x_2440_){
_start:
{
if (lean_obj_tag(v_x_2440_) == 4)
{
lean_object* v_declName_2441_; 
v_declName_2441_ = lean_ctor_get(v_x_2440_, 0);
if (lean_obj_tag(v_declName_2441_) == 1)
{
lean_object* v_pre_2442_; 
v_pre_2442_ = lean_ctor_get(v_declName_2441_, 0);
if (lean_obj_tag(v_pre_2442_) == 0)
{
lean_object* v_us_2443_; lean_object* v_str_2444_; lean_object* v___x_2445_; uint8_t v___x_2446_; 
v_us_2443_ = lean_ctor_get(v_x_2440_, 1);
v_str_2444_ = lean_ctor_get(v_declName_2441_, 1);
v___x_2445_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_object___closed__0));
v___x_2446_ = lean_string_dec_eq(v_str_2444_, v___x_2445_);
if (v___x_2446_ == 0)
{
lean_object* v___x_2447_; uint8_t v___x_2448_; 
v___x_2447_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_tagged___closed__0));
v___x_2448_ = lean_string_dec_eq(v_str_2444_, v___x_2447_);
if (v___x_2448_ == 0)
{
lean_object* v___x_2449_; uint8_t v___x_2450_; 
v___x_2449_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_tobject___closed__0));
v___x_2450_ = lean_string_dec_eq(v_str_2444_, v___x_2449_);
if (v___x_2450_ == 0)
{
lean_object* v___x_2451_; uint8_t v___x_2452_; 
v___x_2451_ = ((lean_object*)(l_Lean_Expr_isVoid___closed__0));
v___x_2452_ = lean_string_dec_eq(v_str_2444_, v___x_2451_);
if (v___x_2452_ == 0)
{
return v___x_2452_;
}
else
{
if (lean_obj_tag(v_us_2443_) == 0)
{
return v___x_2452_;
}
else
{
return v___x_2450_;
}
}
}
else
{
if (lean_obj_tag(v_us_2443_) == 0)
{
return v___x_2450_;
}
else
{
return v___x_2448_;
}
}
}
else
{
if (lean_obj_tag(v_us_2443_) == 0)
{
return v___x_2448_;
}
else
{
return v___x_2446_;
}
}
}
else
{
if (lean_obj_tag(v_us_2443_) == 0)
{
return v___x_2446_;
}
else
{
uint8_t v___x_2453_; 
v___x_2453_ = 0;
return v___x_2453_;
}
}
}
else
{
uint8_t v___x_2454_; 
v___x_2454_ = 0;
return v___x_2454_;
}
}
else
{
uint8_t v___x_2455_; 
v___x_2455_ = 0;
return v___x_2455_;
}
}
else
{
uint8_t v___x_2456_; 
v___x_2456_ = 0;
return v___x_2456_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isObj___boxed(lean_object* v_x_2457_){
_start:
{
uint8_t v_res_2458_; lean_object* v_r_2459_; 
v_res_2458_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isObj(v_x_2457_);
lean_dec_ref(v_x_2457_);
v_r_2459_ = lean_box(v_res_2458_);
return v_r_2459_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(lean_object* v_x_2460_){
_start:
{
if (lean_obj_tag(v_x_2460_) == 4)
{
lean_object* v_declName_2461_; 
v_declName_2461_ = lean_ctor_get(v_x_2460_, 0);
if (lean_obj_tag(v_declName_2461_) == 1)
{
lean_object* v_pre_2462_; 
v_pre_2462_ = lean_ctor_get(v_declName_2461_, 0);
if (lean_obj_tag(v_pre_2462_) == 0)
{
lean_object* v_us_2463_; lean_object* v_str_2464_; lean_object* v___x_2465_; uint8_t v___x_2466_; 
v_us_2463_ = lean_ctor_get(v_x_2460_, 1);
v_str_2464_ = lean_ctor_get(v_declName_2461_, 1);
v___x_2465_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_object___closed__0));
v___x_2466_ = lean_string_dec_eq(v_str_2464_, v___x_2465_);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; uint8_t v___x_2468_; 
v___x_2467_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_tobject___closed__0));
v___x_2468_ = lean_string_dec_eq(v_str_2464_, v___x_2467_);
if (v___x_2468_ == 0)
{
return v___x_2468_;
}
else
{
if (lean_obj_tag(v_us_2463_) == 0)
{
return v___x_2468_;
}
else
{
return v___x_2466_;
}
}
}
else
{
if (lean_obj_tag(v_us_2463_) == 0)
{
return v___x_2466_;
}
else
{
uint8_t v___x_2469_; 
v___x_2469_ = 0;
return v___x_2469_;
}
}
}
else
{
uint8_t v___x_2470_; 
v___x_2470_ = 0;
return v___x_2470_;
}
}
else
{
uint8_t v___x_2471_; 
v___x_2471_ = 0;
return v___x_2471_;
}
}
else
{
uint8_t v___x_2472_; 
v___x_2472_ = 0;
return v___x_2472_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef___boxed(lean_object* v_x_2473_){
_start:
{
uint8_t v_res_2474_; lean_object* v_r_2475_; 
v_res_2474_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_x_2473_);
lean_dec_ref(v_x_2473_);
v_r_2475_ = lean_box(v_res_2474_);
return v_r_2475_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(lean_object* v_x_2476_){
_start:
{
if (lean_obj_tag(v_x_2476_) == 4)
{
lean_object* v_declName_2477_; 
v_declName_2477_ = lean_ctor_get(v_x_2476_, 0);
if (lean_obj_tag(v_declName_2477_) == 1)
{
lean_object* v_pre_2478_; 
v_pre_2478_ = lean_ctor_get(v_declName_2477_, 0);
if (lean_obj_tag(v_pre_2478_) == 0)
{
lean_object* v_us_2479_; lean_object* v_str_2480_; lean_object* v___x_2481_; uint8_t v___x_2482_; 
v_us_2479_ = lean_ctor_get(v_x_2476_, 1);
v_str_2480_ = lean_ctor_get(v_declName_2477_, 1);
v___x_2481_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_object___closed__0));
v___x_2482_ = lean_string_dec_eq(v_str_2480_, v___x_2481_);
if (v___x_2482_ == 0)
{
return v___x_2482_;
}
else
{
if (lean_obj_tag(v_us_2479_) == 0)
{
return v___x_2482_;
}
else
{
uint8_t v___x_2483_; 
v___x_2483_ = 0;
return v___x_2483_;
}
}
}
else
{
uint8_t v___x_2484_; 
v___x_2484_ = 0;
return v___x_2484_;
}
}
else
{
uint8_t v___x_2485_; 
v___x_2485_ = 0;
return v___x_2485_;
}
}
else
{
uint8_t v___x_2486_; 
v___x_2486_ = 0;
return v___x_2486_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef___boxed(lean_object* v_x_2487_){
_start:
{
uint8_t v_res_2488_; lean_object* v_r_2489_; 
v_res_2488_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_x_2487_);
lean_dec_ref(v_x_2487_);
v_r_2489_ = lean_box(v_res_2488_);
return v_r_2489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed(lean_object* v_x_2490_){
_start:
{
if (lean_obj_tag(v_x_2490_) == 4)
{
lean_object* v_declName_2497_; 
v_declName_2497_ = lean_ctor_get(v_x_2490_, 0);
if (lean_obj_tag(v_declName_2497_) == 1)
{
lean_object* v_pre_2498_; 
v_pre_2498_ = lean_ctor_get(v_declName_2497_, 0);
if (lean_obj_tag(v_pre_2498_) == 0)
{
lean_object* v_us_2499_; lean_object* v_str_2500_; lean_object* v___x_2501_; uint8_t v___x_2502_; 
v_us_2499_ = lean_ctor_get(v_x_2490_, 1);
v_str_2500_ = lean_ctor_get(v_declName_2497_, 1);
v___x_2501_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_object___closed__0));
v___x_2502_ = lean_string_dec_eq(v_str_2500_, v___x_2501_);
if (v___x_2502_ == 0)
{
lean_object* v___x_2503_; uint8_t v___x_2504_; 
v___x_2503_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_float___closed__0));
v___x_2504_ = lean_string_dec_eq(v_str_2500_, v___x_2503_);
if (v___x_2504_ == 0)
{
lean_object* v___x_2505_; uint8_t v___x_2506_; 
v___x_2505_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_float32___closed__0));
v___x_2506_ = lean_string_dec_eq(v_str_2500_, v___x_2505_);
if (v___x_2506_ == 0)
{
lean_object* v___x_2507_; uint8_t v___x_2508_; 
v___x_2507_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_uint64___closed__0));
v___x_2508_ = lean_string_dec_eq(v_str_2500_, v___x_2507_);
if (v___x_2508_ == 0)
{
lean_object* v___x_2509_; uint8_t v___x_2510_; 
v___x_2509_ = ((lean_object*)(l_Lean_Expr_isVoid___closed__0));
v___x_2510_ = lean_string_dec_eq(v_str_2500_, v___x_2509_);
if (v___x_2510_ == 0)
{
lean_object* v___x_2511_; uint8_t v___x_2512_; 
v___x_2511_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_tagged___closed__0));
v___x_2512_ = lean_string_dec_eq(v_str_2500_, v___x_2511_);
if (v___x_2512_ == 0)
{
lean_object* v___x_2513_; uint8_t v___x_2514_; 
v___x_2513_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_uint8___closed__0));
v___x_2514_ = lean_string_dec_eq(v_str_2500_, v___x_2513_);
if (v___x_2514_ == 0)
{
lean_object* v___x_2515_; uint8_t v___x_2516_; 
v___x_2515_ = ((lean_object*)(l_Lean_Compiler_LCNF_ImpureType_uint16___closed__0));
v___x_2516_ = lean_string_dec_eq(v_str_2500_, v___x_2515_);
if (v___x_2516_ == 0)
{
goto v___jp_2491_;
}
else
{
if (lean_obj_tag(v_us_2499_) == 0)
{
goto v___jp_2495_;
}
else
{
goto v___jp_2491_;
}
}
}
else
{
if (lean_obj_tag(v_us_2499_) == 0)
{
goto v___jp_2495_;
}
else
{
goto v___jp_2491_;
}
}
}
else
{
if (lean_obj_tag(v_us_2499_) == 0)
{
goto v___jp_2495_;
}
else
{
goto v___jp_2491_;
}
}
}
else
{
if (lean_obj_tag(v_us_2499_) == 0)
{
goto v___jp_2495_;
}
else
{
goto v___jp_2491_;
}
}
}
else
{
if (lean_obj_tag(v_us_2499_) == 0)
{
goto v___jp_2493_;
}
else
{
goto v___jp_2491_;
}
}
}
else
{
if (lean_obj_tag(v_us_2499_) == 0)
{
goto v___jp_2493_;
}
else
{
goto v___jp_2491_;
}
}
}
else
{
if (lean_obj_tag(v_us_2499_) == 0)
{
goto v___jp_2493_;
}
else
{
goto v___jp_2491_;
}
}
}
else
{
if (lean_obj_tag(v_us_2499_) == 0)
{
goto v___jp_2493_;
}
else
{
goto v___jp_2491_;
}
}
}
else
{
goto v___jp_2491_;
}
}
else
{
goto v___jp_2491_;
}
}
else
{
goto v___jp_2491_;
}
v___jp_2491_:
{
lean_object* v___x_2492_; 
v___x_2492_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_tobject___closed__2, &l_Lean_Compiler_LCNF_ImpureType_tobject___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_tobject___closed__2);
return v___x_2492_;
}
v___jp_2493_:
{
lean_object* v___x_2494_; 
v___x_2494_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_object___closed__2, &l_Lean_Compiler_LCNF_ImpureType_object___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_object___closed__2);
return v___x_2494_;
}
v___jp_2495_:
{
lean_object* v___x_2496_; 
v___x_2496_ = lean_obj_once(&l_Lean_Compiler_LCNF_ImpureType_tagged___closed__2, &l_Lean_Compiler_LCNF_ImpureType_tagged___closed__2_once, _init_l_Lean_Compiler_LCNF_ImpureType_tagged___closed__2);
return v___x_2496_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed___boxed(lean_object* v_x_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed(v_x_2517_);
lean_dec_ref(v_x_2517_);
return v_res_2518_;
}
}
lean_object* runtime_initialize_Lean_Compiler_BorrowedAnnotation(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Types(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_BorrowedAnnotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_erasedExpr = _init_l_Lean_Compiler_LCNF_erasedExpr();
lean_mark_persistent(l_Lean_Compiler_LCNF_erasedExpr);
l_Lean_Compiler_LCNF_anyExpr = _init_l_Lean_Compiler_LCNF_anyExpr();
lean_mark_persistent(l_Lean_Compiler_LCNF_anyExpr);
l_Lean_Compiler_LCNF_ImpureType_float = _init_l_Lean_Compiler_LCNF_ImpureType_float();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_float);
l_Lean_Compiler_LCNF_ImpureType_float32 = _init_l_Lean_Compiler_LCNF_ImpureType_float32();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_float32);
l_Lean_Compiler_LCNF_ImpureType_uint8 = _init_l_Lean_Compiler_LCNF_ImpureType_uint8();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_uint8);
l_Lean_Compiler_LCNF_ImpureType_uint16 = _init_l_Lean_Compiler_LCNF_ImpureType_uint16();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_uint16);
l_Lean_Compiler_LCNF_ImpureType_uint32 = _init_l_Lean_Compiler_LCNF_ImpureType_uint32();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_uint32);
l_Lean_Compiler_LCNF_ImpureType_uint64 = _init_l_Lean_Compiler_LCNF_ImpureType_uint64();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_uint64);
l_Lean_Compiler_LCNF_ImpureType_usize = _init_l_Lean_Compiler_LCNF_ImpureType_usize();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_usize);
l_Lean_Compiler_LCNF_ImpureType_erased = _init_l_Lean_Compiler_LCNF_ImpureType_erased();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_erased);
l_Lean_Compiler_LCNF_ImpureType_object = _init_l_Lean_Compiler_LCNF_ImpureType_object();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_object);
l_Lean_Compiler_LCNF_ImpureType_tobject = _init_l_Lean_Compiler_LCNF_ImpureType_tobject();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_tobject);
l_Lean_Compiler_LCNF_ImpureType_tagged = _init_l_Lean_Compiler_LCNF_ImpureType_tagged();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_tagged);
l_Lean_Compiler_LCNF_ImpureType_void = _init_l_Lean_Compiler_LCNF_ImpureType_void();
lean_mark_persistent(l_Lean_Compiler_LCNF_ImpureType_void);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Types(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_BorrowedAnnotation(uint8_t builtin);
lean_object* initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Types(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_BorrowedAnnotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Types(builtin);
}
#ifdef __cplusplus
}
#endif
