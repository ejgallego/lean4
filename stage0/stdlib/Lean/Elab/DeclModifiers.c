// Lean compiler output
// Module: Lean.Elab.DeclModifiers
// Imports: public import Lean.DocString.Add public import Lean.Linter.Init meta import Lean.Parser.Command
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
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Elab_pushInfoLeaf___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConstWithLevelParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t lean_is_reserved_name(lean_object*, lean_object*);
lean_object* l_Lean_withEnv___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_addProtected(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_instToFormatFormat___lam__0___boxed(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_joinSep___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Linter_logLintIf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "redundantVisibility"};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(202, 183, 142, 94, 198, 206, 172, 100)}};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "warn on redundant `private`/`public` visibility modifiers"};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(219, 182, 224, 198, 198, 122, 225, 30)}};
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(255, 159, 36, 111, 164, 106, 106, 218)}};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_linter_redundantVisibility;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "a non-private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1;
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "a private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1;
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "` is a reserved name"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedVisibility_default;
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedVisibility;
static const lean_string_object l_Lean_Elab_instToStringVisibility___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l_Lean_Elab_instToStringVisibility___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l_Lean_Elab_instToStringVisibility___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l_Lean_Elab_instToStringVisibility___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Elab_instToStringVisibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToStringVisibility___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToStringVisibility___closed__0 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToStringVisibility = (const lean_object*)&l_Lean_Elab_instToStringVisibility___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPrivate(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPrivate___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPublic(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPublic___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isInferredPublic(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isInferredPublic___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "; the modifier has no effect"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "`public` is the default visibility"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__4_value;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = " inside a `public section`"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__5_value;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value;
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(213, 248, 16, 228, 25, 227, 72, 143)}};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value;
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(99, 134, 241, 204, 211, 206, 124, 144)}};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected visibility modifier"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__10 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__10_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 115, .m_capacity = 115, .m_length = 114, .m_data = "`private` has no effect in a `module` file outside `public section`; declarations are already `private` by default"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__12 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__12_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13;
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedRecKind_default;
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedRecKind;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedComputeKind_default;
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedComputeKind;
LEAN_EXPORT uint8_t l_Lean_Elab_instBEqComputeKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_instBEqComputeKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instBEqComputeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instBEqComputeKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instBEqComputeKind___closed__0 = (const lean_object*)&l_Lean_Elab_instBEqComputeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instBEqComputeKind = (const lean_object*)&l_Lean_Elab_instBEqComputeKind___closed__0_value;
static const lean_string_object l_Lean_Elab_instReprComputeKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Elab.ComputeKind.regular"};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__0 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instReprComputeKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__0_value)}};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__1 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__1_value;
static const lean_string_object l_Lean_Elab_instReprComputeKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Elab.ComputeKind.meta"};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__2 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instReprComputeKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__2_value)}};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__3 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__3_value;
static const lean_string_object l_Lean_Elab_instReprComputeKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.ComputeKind.noncomputable"};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__4 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instReprComputeKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__4_value)}};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__5 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__5_value;
static lean_once_cell_t l_Lean_Elab_instReprComputeKind_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__6;
static lean_once_cell_t l_Lean_Elab_instReprComputeKind_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instReprComputeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instReprComputeKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instReprComputeKind___closed__0 = (const lean_object*)&l_Lean_Elab_instReprComputeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instReprComputeKind = (const lean_object*)&l_Lean_Elab_instReprComputeKind___closed__0_value;
static const lean_array_object l_Lean_Elab_instInhabitedModifiers_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_instInhabitedModifiers_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedModifiers_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 2, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_instInhabitedModifiers_default___closed__1 = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedModifiers_default = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedModifiers = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPrivate___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPublic(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPublic___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isInferredPublic(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isInferredPublic___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPartial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPartial___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNonrec(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNonrec___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isMeta(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isMeta___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNoncomputable(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNoncomputable___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addFirstAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_filterAttrs(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_anyAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_anyAttr___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__3;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "local "};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__6_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scoped "};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__0(lean_object*);
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__3_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__5;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__6;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__0_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__4_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__8_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__9_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__10_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__11_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__13_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__14 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__14_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nonrec"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__15 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__15_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__15_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__16 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__16_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__17 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__17_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__18 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__19 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__19_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__20 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__20_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "noncomputable"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__21 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__21_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__21_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__22 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__22_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__23 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__23_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "protected"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__24 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__24_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__24_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__25 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__25_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__25_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__26 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__26_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__27 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__27_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__28 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__28_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__29 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__29_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__30 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__30_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "/--"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__31 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__31_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__31_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__32 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__32_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-/"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__33 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__33_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__33_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__34 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__34_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instToFormatModifiers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToFormatModifiers___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToFormatModifiers___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__0_value;
static const lean_closure_object l_Lean_Elab_instToFormatModifiers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instToFormatFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToFormatModifiers___closed__1 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__1_value;
static const lean_closure_object l_Lean_Elab_instToFormatModifiers___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToFormatModifiers___lam__1, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__0_value),((lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__1_value)} };
static const lean_object* l_Lean_Elab_instToFormatModifiers___closed__2 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToFormatModifiers = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringModifiers___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_instToStringModifiers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToStringModifiers___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToStringModifiers___closed__0 = (const lean_object*)&l_Lean_Elab_instToStringModifiers___closed__0_value;
static const lean_closure_object l_Lean_Elab_instToStringModifiers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instToStringModifiers___closed__0_value),((lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__2_value)} };
static const lean_object* l_Lean_Elab_instToStringModifiers___closed__1 = (const lean_object*)&l_Lean_Elab_instToStringModifiers___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToStringModifiers = (const lean_object*)&l_Lean_Elab_instToStringModifiers___closed__1_value;
static const lean_string_object l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1;
static const lean_string_object l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "commentBody"};
static const lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3___boxed(lean_object**);
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(103, 175, 198, 167, 172, 79, 14, 207)}};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(124, 247, 59, 43, 44, 177, 111, 66)}};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid declaration name `"};
static const lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1;
static const lean_string_object l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "`, structure `"};
static const lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3;
static const lean_string_object l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "` has field `"};
static const lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4 = (const lean_object*)&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4_value;
static lean_once_cell_t l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "protected declarations must be in a namespace"};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_mkDeclName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_root_"};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_mkDeclName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(184, 175, 53, 50, 212, 152, 178, 8)}};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_mkDeclName___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "invalid declaration name `_root_`, `_root_` is a prefix used to refer to the 'root' namespace"};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_mkDeclName___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkDeclName___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_expandDeclIdCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__0 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__0_value;
static const lean_string_object l_Lean_Elab_expandDeclIdCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__1 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__1_value;
static const lean_ctor_object l_Lean_Elab_expandDeclIdCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__2 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__2_value;
static const lean_ctor_object l_Lean_Elab_expandDeclIdCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__2_value),((lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__0_value)}};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__3 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__15(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__2;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__3 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__3_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__16;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__4;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0___boxed, .m_arity = 9, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_expandDeclId_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "a universe level named `"};
static const lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "deprecated"};
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 182, 79, 155, 204, 118, 39, 140)}};
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__1(lean_object*);
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__5_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__0_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__7_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__2_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__4_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__8_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__6_value)}};
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__9_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__10_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_));
v___x_52_ = ((lean_object*)(l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_));
v___x_53_ = ((lean_object*)(l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_));
v___x_54_ = l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0(v___x_51_, v___x_52_, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4____boxed(lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_();
return v_res_56_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_57_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_unsigned_to_nat(32u);
v___x_61_ = lean_mk_empty_array_with_capacity(v___x_60_);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3(void){
_start:
{
size_t v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_63_ = ((size_t)5ULL);
v___x_64_ = lean_unsigned_to_nat(0u);
v___x_65_ = lean_unsigned_to_nat(32u);
v___x_66_ = lean_mk_empty_array_with_capacity(v___x_65_);
v___x_67_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2);
v___x_68_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_68_, 0, v___x_67_);
lean_ctor_set(v___x_68_, 1, v___x_66_);
lean_ctor_set(v___x_68_, 2, v___x_64_);
lean_ctor_set(v___x_68_, 3, v___x_64_);
lean_ctor_set_usize(v___x_68_, 4, v___x_63_);
return v___x_68_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_69_ = lean_box(1);
v___x_70_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3);
v___x_71_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1);
v___x_72_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v___x_70_);
lean_ctor_set(v___x_72_, 2, v___x_69_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0(lean_object* v_____do__lift_73_, uint8_t v___x_74_, lean_object* v_inst_75_, lean_object* v_inst_76_, lean_object* v_____do__lift_77_){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_78_ = lean_box(0);
v___x_79_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v_____do__lift_73_);
v___x_80_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4);
v___x_81_ = lean_box(0);
v___x_82_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_82_, 0, v___x_79_);
lean_ctor_set(v___x_82_, 1, v___x_80_);
lean_ctor_set(v___x_82_, 2, v___x_81_);
lean_ctor_set(v___x_82_, 3, v_____do__lift_77_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*4, v___x_74_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*4 + 1, v___x_74_);
v___x_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
v___x_84_ = l_Lean_Elab_pushInfoLeaf___redArg(v_inst_75_, v_inst_76_, v___x_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___boxed(lean_object* v_____do__lift_85_, lean_object* v___x_86_, lean_object* v_inst_87_, lean_object* v_inst_88_, lean_object* v_____do__lift_89_){
_start:
{
uint8_t v___x_829__boxed_90_; lean_object* v_res_91_; 
v___x_829__boxed_90_ = lean_unbox(v___x_86_);
v_res_91_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0(v_____do__lift_85_, v___x_829__boxed_90_, v_inst_87_, v_inst_88_, v_____do__lift_89_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1(uint8_t v___x_92_, lean_object* v_inst_93_, lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v_inst_96_, lean_object* v_declName_97_, lean_object* v_toBind_98_, lean_object* v_____do__lift_99_){
_start:
{
lean_object* v___x_100_; lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_100_ = lean_box(v___x_92_);
lean_inc_ref(v_inst_93_);
v___f_101_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_101_, 0, v_____do__lift_99_);
lean_closure_set(v___f_101_, 1, v___x_100_);
lean_closure_set(v___f_101_, 2, v_inst_93_);
lean_closure_set(v___f_101_, 3, v_inst_94_);
v___x_102_ = l_Lean_mkConstWithLevelParams___redArg(v_inst_93_, v_inst_95_, v_inst_96_, v_declName_97_);
v___x_103_ = lean_apply_4(v_toBind_98_, lean_box(0), lean_box(0), v___x_102_, v___f_101_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1___boxed(lean_object* v___x_104_, lean_object* v_inst_105_, lean_object* v_inst_106_, lean_object* v_inst_107_, lean_object* v_inst_108_, lean_object* v_declName_109_, lean_object* v_toBind_110_, lean_object* v_____do__lift_111_){
_start:
{
uint8_t v___x_873__boxed_112_; lean_object* v_res_113_; 
v___x_873__boxed_112_ = lean_unbox(v___x_104_);
v_res_113_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1(v___x_873__boxed_112_, v_inst_105_, v_inst_106_, v_inst_107_, v_inst_108_, v_declName_109_, v_toBind_110_, v_____do__lift_111_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(lean_object* v_toMonadRef_114_, uint8_t v___x_115_, lean_object* v_inst_116_, lean_object* v_inst_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_toBind_120_, lean_object* v_declName_121_){
_start:
{
lean_object* v_getRef_122_; lean_object* v___x_123_; lean_object* v___f_124_; lean_object* v___x_125_; 
v_getRef_122_ = lean_ctor_get(v_toMonadRef_114_, 0);
lean_inc(v_getRef_122_);
lean_dec_ref(v_toMonadRef_114_);
v___x_123_ = lean_box(v___x_115_);
lean_inc(v_toBind_120_);
v___f_124_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_124_, 0, v___x_123_);
lean_closure_set(v___f_124_, 1, v_inst_116_);
lean_closure_set(v___f_124_, 2, v_inst_117_);
lean_closure_set(v___f_124_, 3, v_inst_118_);
lean_closure_set(v___f_124_, 4, v_inst_119_);
lean_closure_set(v___f_124_, 5, v_declName_121_);
lean_closure_set(v___f_124_, 6, v_toBind_120_);
v___x_125_ = lean_apply_4(v_toBind_120_, lean_box(0), lean_box(0), v_getRef_122_, v___f_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2___boxed(lean_object* v_toMonadRef_126_, lean_object* v___x_127_, lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_inst_130_, lean_object* v_inst_131_, lean_object* v_toBind_132_, lean_object* v_declName_133_){
_start:
{
uint8_t v___x_899__boxed_134_; lean_object* v_res_135_; 
v___x_899__boxed_134_ = lean_unbox(v___x_127_);
v_res_135_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(v_toMonadRef_126_, v___x_899__boxed_134_, v_inst_128_, v_inst_129_, v_inst_130_, v_inst_131_, v_toBind_132_, v_declName_133_);
return v_res_135_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0));
v___x_138_ = l_Lean_stringToMessageData(v___x_137_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2));
v___x_141_ = l_Lean_stringToMessageData(v___x_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3(lean_object* v_val_142_, uint8_t v___x_143_, lean_object* v_inst_144_, lean_object* v_inst_145_, lean_object* v_____r_146_){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_147_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1);
v___x_148_ = l_Lean_MessageData_ofConstName(v_val_142_, v___x_143_);
v___x_149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_147_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_151_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_149_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
v___x_152_ = l_Lean_throwError___redArg(v_inst_144_, v_inst_145_, v___x_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___boxed(lean_object* v_val_153_, lean_object* v___x_154_, lean_object* v_inst_155_, lean_object* v_inst_156_, lean_object* v_____r_157_){
_start:
{
uint8_t v___x_933__boxed_158_; lean_object* v_res_159_; 
v___x_933__boxed_158_ = lean_unbox(v___x_154_);
v_res_159_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3(v_val_153_, v___x_933__boxed_158_, v_inst_155_, v_inst_156_, v_____r_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__4(lean_object* v_toPure_160_, lean_object* v_declName_161_, lean_object* v_env_162_, lean_object* v_inst_163_, lean_object* v_inst_164_, lean_object* v_addInfo_165_, lean_object* v_toBind_166_, lean_object* v_____r_167_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Lean_privateToUserName_x3f(v_declName_161_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_dec(v_toBind_166_);
lean_dec(v_addInfo_165_);
lean_dec_ref(v_inst_164_);
lean_dec_ref(v_inst_163_);
lean_dec_ref(v_env_162_);
goto v___jp_168_;
}
else
{
lean_object* v_val_172_; uint8_t v___x_173_; uint8_t v___x_174_; 
v_val_172_ = lean_ctor_get(v___x_171_, 0);
lean_inc_n(v_val_172_, 2);
lean_dec_ref_known(v___x_171_, 1);
v___x_173_ = 1;
v___x_174_ = l_Lean_Environment_contains(v_env_162_, v_val_172_, v___x_173_);
if (v___x_174_ == 0)
{
lean_dec(v_val_172_);
lean_dec(v_toBind_166_);
lean_dec(v_addInfo_165_);
lean_dec_ref(v_inst_164_);
lean_dec_ref(v_inst_163_);
goto v___jp_168_;
}
else
{
lean_object* v___x_175_; lean_object* v___f_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
lean_dec(v_toPure_160_);
v___x_175_ = lean_box(v___x_174_);
lean_inc(v_val_172_);
v___f_176_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_176_, 0, v_val_172_);
lean_closure_set(v___f_176_, 1, v___x_175_);
lean_closure_set(v___f_176_, 2, v_inst_163_);
lean_closure_set(v___f_176_, 3, v_inst_164_);
v___x_177_ = lean_apply_1(v_addInfo_165_, v_val_172_);
v___x_178_ = lean_apply_4(v_toBind_166_, lean_box(0), lean_box(0), v___x_177_, v___f_176_);
return v___x_178_;
}
}
v___jp_168_:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_box(0);
v___x_170_ = lean_apply_2(v_toPure_160_, lean_box(0), v___x_169_);
return v___x_170_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5(lean_object* v___f_179_, lean_object* v_____r_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lean_apply_1(v___f_179_, v_____r_180_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0));
v___x_184_ = l_Lean_stringToMessageData(v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6(lean_object* v_declName_185_, uint8_t v___x_186_, lean_object* v_inst_187_, lean_object* v_inst_188_, lean_object* v_toBind_189_, lean_object* v___f_190_, lean_object* v_____r_191_){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_192_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1);
v___x_193_ = l_Lean_MessageData_ofConstName(v_declName_185_, v___x_186_);
v___x_194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_192_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = l_Lean_throwError___redArg(v_inst_187_, v_inst_188_, v___x_196_);
v___x_198_ = lean_apply_4(v_toBind_189_, lean_box(0), lean_box(0), v___x_197_, v___f_190_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___boxed(lean_object* v_declName_199_, lean_object* v___x_200_, lean_object* v_inst_201_, lean_object* v_inst_202_, lean_object* v_toBind_203_, lean_object* v___f_204_, lean_object* v_____r_205_){
_start:
{
uint8_t v___x_1008__boxed_206_; lean_object* v_res_207_; 
v___x_1008__boxed_206_ = lean_unbox(v___x_200_);
v_res_207_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6(v_declName_199_, v___x_1008__boxed_206_, v_inst_201_, v_inst_202_, v_toBind_203_, v___f_204_, v_____r_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__7(lean_object* v_env_208_, lean_object* v_declName_209_, lean_object* v___f_210_, lean_object* v_inst_211_, lean_object* v_inst_212_, lean_object* v_toBind_213_, lean_object* v___f_214_, lean_object* v_addInfo_215_, lean_object* v_____r_216_){
_start:
{
lean_object* v___x_217_; uint8_t v___x_218_; uint8_t v___x_219_; 
lean_inc(v_declName_209_);
v___x_217_ = l_Lean_mkPrivateName(v_env_208_, v_declName_209_);
v___x_218_ = 1;
lean_inc(v___x_217_);
v___x_219_ = l_Lean_Environment_contains(v_env_208_, v___x_217_, v___x_218_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec(v___x_217_);
lean_dec(v_addInfo_215_);
lean_dec(v___f_214_);
lean_dec(v_toBind_213_);
lean_dec_ref(v_inst_212_);
lean_dec_ref(v_inst_211_);
lean_dec(v_declName_209_);
v___x_220_ = lean_box(0);
v___x_221_ = lean_apply_1(v___f_210_, v___x_220_);
return v___x_221_;
}
else
{
lean_object* v___x_222_; lean_object* v___f_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
lean_dec(v___f_210_);
v___x_222_ = lean_box(v___x_219_);
lean_inc(v_toBind_213_);
v___f_223_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___boxed), 7, 6);
lean_closure_set(v___f_223_, 0, v_declName_209_);
lean_closure_set(v___f_223_, 1, v___x_222_);
lean_closure_set(v___f_223_, 2, v_inst_211_);
lean_closure_set(v___f_223_, 3, v_inst_212_);
lean_closure_set(v___f_223_, 4, v_toBind_213_);
lean_closure_set(v___f_223_, 5, v___f_214_);
v___x_224_ = lean_apply_1(v_addInfo_215_, v___x_217_);
v___x_225_ = lean_apply_4(v_toBind_213_, lean_box(0), lean_box(0), v___x_224_, v___f_223_);
return v___x_225_;
}
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1(void){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0));
v___x_228_ = l_Lean_stringToMessageData(v___x_227_);
return v___x_228_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2));
v___x_231_ = l_Lean_stringToMessageData(v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9(lean_object* v_declName_232_, uint8_t v___x_233_, lean_object* v_inst_234_, lean_object* v_inst_235_, lean_object* v_toBind_236_, lean_object* v___f_237_, lean_object* v_env_238_, lean_object* v___f_239_, lean_object* v_____do__lift_240_){
_start:
{
lean_object* v___x_249_; uint8_t v___x_250_; 
lean_inc(v_declName_232_);
v___x_249_ = l_Lean_privateToUserName(v_declName_232_);
lean_inc_ref(v_env_238_);
v___x_250_ = lean_is_reserved_name(v_env_238_, v___x_249_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; uint8_t v___x_252_; 
lean_inc(v_declName_232_);
v___x_251_ = l_Lean_mkPrivateName(v_____do__lift_240_, v_declName_232_);
v___x_252_ = lean_is_reserved_name(v_env_238_, v___x_251_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; 
lean_dec(v___f_237_);
lean_dec(v_toBind_236_);
lean_dec_ref(v_inst_235_);
lean_dec_ref(v_inst_234_);
lean_dec(v_declName_232_);
v___x_253_ = lean_box(0);
v___x_254_ = lean_apply_1(v___f_239_, v___x_253_);
return v___x_254_;
}
else
{
lean_dec(v___f_239_);
goto v___jp_241_;
}
}
else
{
lean_dec(v___f_239_);
lean_dec_ref(v_env_238_);
goto v___jp_241_;
}
v___jp_241_:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_242_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_243_ = l_Lean_MessageData_ofConstName(v_declName_232_, v___x_233_);
v___x_244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3);
v___x_246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_244_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = l_Lean_throwError___redArg(v_inst_234_, v_inst_235_, v___x_246_);
v___x_248_ = lean_apply_4(v_toBind_236_, lean_box(0), lean_box(0), v___x_247_, v___f_237_);
return v___x_248_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___boxed(lean_object* v_declName_255_, lean_object* v___x_256_, lean_object* v_inst_257_, lean_object* v_inst_258_, lean_object* v_toBind_259_, lean_object* v___f_260_, lean_object* v_env_261_, lean_object* v___f_262_, lean_object* v_____do__lift_263_){
_start:
{
uint8_t v___x_1080__boxed_264_; lean_object* v_res_265_; 
v___x_1080__boxed_264_ = lean_unbox(v___x_256_);
v_res_265_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9(v_declName_255_, v___x_1080__boxed_264_, v_inst_257_, v_inst_258_, v_toBind_259_, v___f_260_, v_env_261_, v___f_262_, v_____do__lift_263_);
lean_dec_ref(v_____do__lift_263_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__8(lean_object* v_toBind_266_, lean_object* v_getEnv_267_, lean_object* v___f_268_, lean_object* v_____r_269_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = lean_apply_4(v_toBind_266_, lean_box(0), lean_box(0), v_getEnv_267_, v___f_268_);
return v___x_270_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0));
v___x_273_ = l_Lean_stringToMessageData(v___x_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11(lean_object* v_declName_274_, uint8_t v___x_275_, lean_object* v_inst_276_, lean_object* v_inst_277_, lean_object* v_toBind_278_, lean_object* v___f_279_, lean_object* v___f_280_, lean_object* v_____r_281_){
_start:
{
lean_object* v___x_282_; 
lean_inc(v_declName_274_);
v___x_282_ = l_Lean_privateToUserName_x3f(v_declName_274_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
lean_dec(v___f_280_);
v___x_283_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_284_ = l_Lean_MessageData_ofConstName(v_declName_274_, v___x_275_);
v___x_285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_285_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = l_Lean_throwError___redArg(v_inst_276_, v_inst_277_, v___x_287_);
v___x_289_ = lean_apply_4(v_toBind_278_, lean_box(0), lean_box(0), v___x_288_, v___f_279_);
return v___x_289_;
}
else
{
lean_object* v_val_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
lean_dec(v___f_279_);
lean_dec(v_declName_274_);
v_val_290_ = lean_ctor_get(v___x_282_, 0);
lean_inc(v_val_290_);
lean_dec_ref_known(v___x_282_, 1);
v___x_291_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1);
v___x_292_ = l_Lean_MessageData_ofConstName(v_val_290_, v___x_275_);
v___x_293_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_291_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_293_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
v___x_296_ = l_Lean_throwError___redArg(v_inst_276_, v_inst_277_, v___x_295_);
v___x_297_ = lean_apply_4(v_toBind_278_, lean_box(0), lean_box(0), v___x_296_, v___f_280_);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___boxed(lean_object* v_declName_298_, lean_object* v___x_299_, lean_object* v_inst_300_, lean_object* v_inst_301_, lean_object* v_toBind_302_, lean_object* v___f_303_, lean_object* v___f_304_, lean_object* v_____r_305_){
_start:
{
uint8_t v___x_1153__boxed_306_; lean_object* v_res_307_; 
v___x_1153__boxed_306_ = lean_unbox(v___x_299_);
v_res_307_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11(v_declName_298_, v___x_1153__boxed_306_, v_inst_300_, v_inst_301_, v_toBind_302_, v___f_303_, v___f_304_, v_____r_305_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__10(lean_object* v_toMonadRef_308_, lean_object* v_inst_309_, lean_object* v_inst_310_, lean_object* v_inst_311_, lean_object* v_inst_312_, lean_object* v_toBind_313_, lean_object* v_toPure_314_, lean_object* v_declName_315_, lean_object* v_getEnv_316_, lean_object* v_inst_317_, lean_object* v_env_318_){
_start:
{
uint8_t v___x_319_; lean_object* v___x_320_; lean_object* v_addInfo_321_; lean_object* v_env_322_; lean_object* v___f_323_; lean_object* v___f_324_; lean_object* v___f_325_; lean_object* v___f_326_; lean_object* v___x_327_; lean_object* v___f_328_; uint8_t v___x_329_; uint8_t v___x_330_; 
v___x_319_ = 0;
v___x_320_ = lean_box(v___x_319_);
lean_inc_n(v_toBind_313_, 4);
lean_inc_ref_n(v_inst_312_, 4);
lean_inc_ref(v_inst_311_);
lean_inc_ref(v_inst_310_);
lean_inc_ref_n(v_inst_309_, 4);
lean_inc_ref(v_toMonadRef_308_);
v_addInfo_321_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v_addInfo_321_, 0, v_toMonadRef_308_);
lean_closure_set(v_addInfo_321_, 1, v___x_320_);
lean_closure_set(v_addInfo_321_, 2, v_inst_309_);
lean_closure_set(v_addInfo_321_, 3, v_inst_310_);
lean_closure_set(v_addInfo_321_, 4, v_inst_311_);
lean_closure_set(v_addInfo_321_, 5, v_inst_312_);
lean_closure_set(v_addInfo_321_, 6, v_toBind_313_);
v_env_322_ = l_Lean_Environment_setExporting(v_env_318_, v___x_319_);
lean_inc_ref(v_addInfo_321_);
lean_inc_ref_n(v_env_322_, 4);
lean_inc_n(v_declName_315_, 4);
v___f_323_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__4), 8, 7);
lean_closure_set(v___f_323_, 0, v_toPure_314_);
lean_closure_set(v___f_323_, 1, v_declName_315_);
lean_closure_set(v___f_323_, 2, v_env_322_);
lean_closure_set(v___f_323_, 3, v_inst_309_);
lean_closure_set(v___f_323_, 4, v_inst_312_);
lean_closure_set(v___f_323_, 5, v_addInfo_321_);
lean_closure_set(v___f_323_, 6, v_toBind_313_);
lean_inc_ref(v___f_323_);
v___f_324_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_324_, 0, v___f_323_);
v___f_325_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__7), 9, 8);
lean_closure_set(v___f_325_, 0, v_env_322_);
lean_closure_set(v___f_325_, 1, v_declName_315_);
lean_closure_set(v___f_325_, 2, v___f_323_);
lean_closure_set(v___f_325_, 3, v_inst_309_);
lean_closure_set(v___f_325_, 4, v_inst_312_);
lean_closure_set(v___f_325_, 5, v_toBind_313_);
lean_closure_set(v___f_325_, 6, v___f_324_);
lean_closure_set(v___f_325_, 7, v_addInfo_321_);
lean_inc_ref(v___f_325_);
v___f_326_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_326_, 0, v___f_325_);
v___x_327_ = lean_box(v___x_319_);
v___f_328_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___boxed), 9, 8);
lean_closure_set(v___f_328_, 0, v_declName_315_);
lean_closure_set(v___f_328_, 1, v___x_327_);
lean_closure_set(v___f_328_, 2, v_inst_309_);
lean_closure_set(v___f_328_, 3, v_inst_312_);
lean_closure_set(v___f_328_, 4, v_toBind_313_);
lean_closure_set(v___f_328_, 5, v___f_326_);
lean_closure_set(v___f_328_, 6, v_env_322_);
lean_closure_set(v___f_328_, 7, v___f_325_);
v___x_329_ = 1;
v___x_330_ = l_Lean_Environment_contains(v_env_322_, v_declName_315_, v___x_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; lean_object* v___x_332_; 
lean_dec(v_declName_315_);
lean_dec_ref(v_inst_312_);
lean_dec_ref(v_inst_310_);
lean_dec_ref(v_toMonadRef_308_);
v___x_331_ = lean_apply_4(v_toBind_313_, lean_box(0), lean_box(0), v_getEnv_316_, v___f_328_);
v___x_332_ = l_Lean_withEnv___redArg(v_inst_309_, v_inst_317_, v_inst_311_, v_env_322_, v___x_331_);
return v___x_332_;
}
else
{
lean_object* v___f_333_; lean_object* v___x_334_; lean_object* v___f_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
lean_inc_n(v_toBind_313_, 3);
v___f_333_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__8), 4, 3);
lean_closure_set(v___f_333_, 0, v_toBind_313_);
lean_closure_set(v___f_333_, 1, v_getEnv_316_);
lean_closure_set(v___f_333_, 2, v___f_328_);
v___x_334_ = lean_box(v___x_330_);
lean_inc_ref(v___f_333_);
lean_inc_ref(v_inst_312_);
lean_inc_ref_n(v_inst_309_, 2);
lean_inc(v_declName_315_);
v___f_335_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___boxed), 8, 7);
lean_closure_set(v___f_335_, 0, v_declName_315_);
lean_closure_set(v___f_335_, 1, v___x_334_);
lean_closure_set(v___f_335_, 2, v_inst_309_);
lean_closure_set(v___f_335_, 3, v_inst_312_);
lean_closure_set(v___f_335_, 4, v_toBind_313_);
lean_closure_set(v___f_335_, 5, v___f_333_);
lean_closure_set(v___f_335_, 6, v___f_333_);
lean_inc_ref(v_inst_311_);
v___x_336_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(v_toMonadRef_308_, v___x_319_, v_inst_309_, v_inst_310_, v_inst_311_, v_inst_312_, v_toBind_313_, v_declName_315_);
v___x_337_ = lean_apply_4(v_toBind_313_, lean_box(0), lean_box(0), v___x_336_, v___f_335_);
v___x_338_ = l_Lean_withEnv___redArg(v_inst_309_, v_inst_317_, v_inst_311_, v_env_322_, v___x_337_);
return v___x_338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg(lean_object* v_inst_339_, lean_object* v_inst_340_, lean_object* v_inst_341_, lean_object* v_inst_342_, lean_object* v_inst_343_, lean_object* v_declName_344_){
_start:
{
lean_object* v_toApplicative_345_; lean_object* v_toBind_346_; lean_object* v_getEnv_347_; lean_object* v_toMonadRef_348_; lean_object* v_toPure_349_; lean_object* v___f_350_; lean_object* v___x_351_; 
v_toApplicative_345_ = lean_ctor_get(v_inst_339_, 0);
v_toBind_346_ = lean_ctor_get(v_inst_339_, 1);
lean_inc_n(v_toBind_346_, 2);
v_getEnv_347_ = lean_ctor_get(v_inst_340_, 0);
lean_inc_n(v_getEnv_347_, 2);
v_toMonadRef_348_ = lean_ctor_get(v_inst_341_, 1);
lean_inc_ref(v_toMonadRef_348_);
v_toPure_349_ = lean_ctor_get(v_toApplicative_345_, 1);
lean_inc(v_toPure_349_);
v___f_350_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__10), 11, 10);
lean_closure_set(v___f_350_, 0, v_toMonadRef_348_);
lean_closure_set(v___f_350_, 1, v_inst_339_);
lean_closure_set(v___f_350_, 2, v_inst_343_);
lean_closure_set(v___f_350_, 3, v_inst_340_);
lean_closure_set(v___f_350_, 4, v_inst_341_);
lean_closure_set(v___f_350_, 5, v_toBind_346_);
lean_closure_set(v___f_350_, 6, v_toPure_349_);
lean_closure_set(v___f_350_, 7, v_declName_344_);
lean_closure_set(v___f_350_, 8, v_getEnv_347_);
lean_closure_set(v___f_350_, 9, v_inst_342_);
v___x_351_ = lean_apply_4(v_toBind_346_, lean_box(0), lean_box(0), v_getEnv_347_, v___f_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared(lean_object* v_m_352_, lean_object* v_inst_353_, lean_object* v_inst_354_, lean_object* v_inst_355_, lean_object* v_inst_356_, lean_object* v_inst_357_, lean_object* v_declName_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg(v_inst_353_, v_inst_354_, v_inst_355_, v_inst_356_, v_inst_357_, v_declName_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx___impl(uint8_t v_x_360_){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = lean_box(v_x_360_);
v___x_362_ = lean_obj_tag_nat(v___x_361_);
lean_dec(v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx___impl___boxed(lean_object* v_x_363_){
_start:
{
uint8_t v_x_4__boxed_364_; lean_object* v_res_365_; 
v_x_4__boxed_364_ = lean_unbox(v_x_363_);
v_res_365_ = l_Lean_Elab_Visibility_ctorIdx___impl(v_x_4__boxed_364_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg(lean_object* v_k_366_){
_start:
{
lean_inc(v_k_366_);
return v_k_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg___boxed(lean_object* v_k_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lean_Elab_Visibility_ctorElim___redArg(v_k_367_);
lean_dec(v_k_367_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim(lean_object* v_motive_369_, lean_object* v_ctorIdx_370_, uint8_t v_t_371_, lean_object* v_h_372_, lean_object* v_k_373_){
_start:
{
lean_inc(v_k_373_);
return v_k_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___boxed(lean_object* v_motive_374_, lean_object* v_ctorIdx_375_, lean_object* v_t_376_, lean_object* v_h_377_, lean_object* v_k_378_){
_start:
{
uint8_t v_t_boxed_379_; lean_object* v_res_380_; 
v_t_boxed_379_ = lean_unbox(v_t_376_);
v_res_380_ = l_Lean_Elab_Visibility_ctorElim(v_motive_374_, v_ctorIdx_375_, v_t_boxed_379_, v_h_377_, v_k_378_);
lean_dec(v_k_378_);
lean_dec(v_ctorIdx_375_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg(lean_object* v_regular_381_){
_start:
{
lean_inc(v_regular_381_);
return v_regular_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg___boxed(lean_object* v_regular_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_Elab_Visibility_regular_elim___redArg(v_regular_382_);
lean_dec(v_regular_382_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim(lean_object* v_motive_384_, uint8_t v_t_385_, lean_object* v_h_386_, lean_object* v_regular_387_){
_start:
{
lean_inc(v_regular_387_);
return v_regular_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___boxed(lean_object* v_motive_388_, lean_object* v_t_389_, lean_object* v_h_390_, lean_object* v_regular_391_){
_start:
{
uint8_t v_t_boxed_392_; lean_object* v_res_393_; 
v_t_boxed_392_ = lean_unbox(v_t_389_);
v_res_393_ = l_Lean_Elab_Visibility_regular_elim(v_motive_388_, v_t_boxed_392_, v_h_390_, v_regular_391_);
lean_dec(v_regular_391_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg(lean_object* v_private_394_){
_start:
{
lean_inc(v_private_394_);
return v_private_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg___boxed(lean_object* v_private_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_Elab_Visibility_private_elim___redArg(v_private_395_);
lean_dec(v_private_395_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim(lean_object* v_motive_397_, uint8_t v_t_398_, lean_object* v_h_399_, lean_object* v_private_400_){
_start:
{
lean_inc(v_private_400_);
return v_private_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___boxed(lean_object* v_motive_401_, lean_object* v_t_402_, lean_object* v_h_403_, lean_object* v_private_404_){
_start:
{
uint8_t v_t_boxed_405_; lean_object* v_res_406_; 
v_t_boxed_405_ = lean_unbox(v_t_402_);
v_res_406_ = l_Lean_Elab_Visibility_private_elim(v_motive_401_, v_t_boxed_405_, v_h_403_, v_private_404_);
lean_dec(v_private_404_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg(lean_object* v_public_407_){
_start:
{
lean_inc(v_public_407_);
return v_public_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg___boxed(lean_object* v_public_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_Elab_Visibility_public_elim___redArg(v_public_408_);
lean_dec(v_public_408_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim(lean_object* v_motive_410_, uint8_t v_t_411_, lean_object* v_h_412_, lean_object* v_public_413_){
_start:
{
lean_inc(v_public_413_);
return v_public_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___boxed(lean_object* v_motive_414_, lean_object* v_t_415_, lean_object* v_h_416_, lean_object* v_public_417_){
_start:
{
uint8_t v_t_boxed_418_; lean_object* v_res_419_; 
v_t_boxed_418_ = lean_unbox(v_t_415_);
v_res_419_ = l_Lean_Elab_Visibility_public_elim(v_motive_414_, v_t_boxed_418_, v_h_416_, v_public_417_);
lean_dec(v_public_417_);
return v_res_419_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedVisibility_default(void){
_start:
{
uint8_t v___x_420_; 
v___x_420_ = 0;
return v___x_420_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedVisibility(void){
_start:
{
uint8_t v___x_421_; 
v___x_421_ = 0;
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0(uint8_t v_x_425_){
_start:
{
switch(v_x_425_)
{
case 0:
{
lean_object* v___x_426_; 
v___x_426_ = ((lean_object*)(l_Lean_Elab_instToStringVisibility___lam__0___closed__0));
return v___x_426_;
}
case 1:
{
lean_object* v___x_427_; 
v___x_427_ = ((lean_object*)(l_Lean_Elab_instToStringVisibility___lam__0___closed__1));
return v___x_427_;
}
default: 
{
lean_object* v___x_428_; 
v___x_428_ = ((lean_object*)(l_Lean_Elab_instToStringVisibility___lam__0___closed__2));
return v___x_428_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0___boxed(lean_object* v_x_429_){
_start:
{
uint8_t v_x_36__boxed_430_; lean_object* v_res_431_; 
v_x_36__boxed_430_ = lean_unbox(v_x_429_);
v_res_431_ = l_Lean_Elab_instToStringVisibility___lam__0(v_x_36__boxed_430_);
return v_res_431_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPrivate(uint8_t v_x_434_){
_start:
{
if (v_x_434_ == 1)
{
uint8_t v___x_435_; 
v___x_435_ = 1;
return v___x_435_;
}
else
{
uint8_t v___x_436_; 
v___x_436_ = 0;
return v___x_436_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPrivate___boxed(lean_object* v_x_437_){
_start:
{
uint8_t v_x_17__boxed_438_; uint8_t v_res_439_; lean_object* v_r_440_; 
v_x_17__boxed_438_ = lean_unbox(v_x_437_);
v_res_439_ = l_Lean_Elab_Visibility_isPrivate(v_x_17__boxed_438_);
v_r_440_ = lean_box(v_res_439_);
return v_r_440_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPublic(uint8_t v_x_441_){
_start:
{
if (v_x_441_ == 2)
{
uint8_t v___x_442_; 
v___x_442_ = 1;
return v___x_442_;
}
else
{
uint8_t v___x_443_; 
v___x_443_ = 0;
return v___x_443_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPublic___boxed(lean_object* v_x_444_){
_start:
{
uint8_t v_x_17__boxed_445_; uint8_t v_res_446_; lean_object* v_r_447_; 
v_x_17__boxed_445_ = lean_unbox(v_x_444_);
v_res_446_ = l_Lean_Elab_Visibility_isPublic(v_x_17__boxed_445_);
v_r_447_ = lean_box(v_res_446_);
return v_r_447_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isInferredPublic(lean_object* v_env_448_, uint8_t v_v_449_){
_start:
{
uint8_t v_isExporting_454_; 
v_isExporting_454_ = lean_ctor_get_uint8(v_env_448_, sizeof(void*)*13);
if (v_isExporting_454_ == 0)
{
lean_object* v___x_455_; uint8_t v_isModule_456_; 
v___x_455_ = l_Lean_Environment_header(v_env_448_);
v_isModule_456_ = lean_ctor_get_uint8(v___x_455_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_455_);
if (v_isModule_456_ == 0)
{
goto v___jp_450_;
}
else
{
uint8_t v___x_457_; 
v___x_457_ = l_Lean_Elab_Visibility_isPublic(v_v_449_);
return v___x_457_;
}
}
else
{
goto v___jp_450_;
}
v___jp_450_:
{
uint8_t v___x_451_; 
v___x_451_ = l_Lean_Elab_Visibility_isPrivate(v_v_449_);
if (v___x_451_ == 0)
{
uint8_t v___x_452_; 
v___x_452_ = 1;
return v___x_452_;
}
else
{
uint8_t v___x_453_; 
v___x_453_ = 0;
return v___x_453_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isInferredPublic___boxed(lean_object* v_env_458_, lean_object* v_v_459_){
_start:
{
uint8_t v_v_boxed_460_; uint8_t v_res_461_; lean_object* v_r_462_; 
v_v_boxed_460_ = lean_unbox(v_v_459_);
v_res_461_ = l_Lean_Elab_Visibility_isInferredPublic(v_env_458_, v_v_boxed_460_);
lean_dec_ref(v_env_458_);
v_r_462_ = lean_box(v_res_461_);
return v_r_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__0(lean_object* v_toPure_463_, lean_object* v_____r_464_){
_start:
{
uint8_t v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = 2;
v___x_466_ = lean_box(v___x_465_);
v___x_467_ = lean_apply_2(v_toPure_463_, lean_box(0), v___x_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__2(lean_object* v_toPure_468_, lean_object* v_____r_469_){
_start:
{
uint8_t v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_470_ = 1;
v___x_471_ = lean_box(v___x_470_);
v___x_472_ = lean_apply_2(v_toPure_468_, lean_box(0), v___x_471_);
return v___x_472_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__0));
v___x_475_ = l_Lean_stringToMessageData(v___x_474_);
return v___x_475_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__2));
v___x_478_ = l_Lean_stringToMessageData(v___x_477_);
return v___x_478_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__10));
v___x_495_ = l_Lean_stringToMessageData(v___x_494_);
return v___x_495_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__12));
v___x_498_ = l_Lean_stringToMessageData(v___x_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3(lean_object* v_vis_x3f_499_, lean_object* v_toPure_500_, lean_object* v_inst_501_, lean_object* v_inst_502_, lean_object* v_inst_503_, lean_object* v_inst_504_, lean_object* v_inst_505_, lean_object* v_inst_506_, lean_object* v_toBind_507_, lean_object* v___f_508_, lean_object* v___f_509_, uint8_t v_isExample_510_, lean_object* v___f_511_, lean_object* v___f_512_, lean_object* v_env_513_){
_start:
{
if (lean_obj_tag(v_vis_x3f_499_) == 0)
{
uint8_t v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
lean_dec(v___f_512_);
lean_dec(v___f_511_);
lean_dec(v___f_509_);
lean_dec(v___f_508_);
lean_dec(v_toBind_507_);
lean_dec_ref(v_inst_506_);
lean_dec_ref(v_inst_505_);
lean_dec(v_inst_504_);
lean_dec_ref(v_inst_503_);
lean_dec_ref(v_inst_502_);
lean_dec_ref(v_inst_501_);
v___x_517_ = 0;
v___x_518_ = lean_box(v___x_517_);
v___x_519_ = lean_apply_2(v_toPure_500_, lean_box(0), v___x_518_);
return v___x_519_;
}
else
{
lean_object* v_val_520_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___x_543_; uint8_t v___x_544_; 
lean_dec(v_toPure_500_);
v_val_520_ = lean_ctor_get(v_vis_x3f_499_, 0);
lean_inc_n(v_val_520_, 2);
lean_dec_ref_known(v_vis_x3f_499_, 1);
v___x_543_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8));
v___x_544_ = l_Lean_Syntax_isOfKind(v_val_520_, v___x_543_);
if (v___x_544_ == 0)
{
lean_object* v___x_545_; uint8_t v___x_546_; 
lean_dec(v___f_512_);
lean_dec(v___f_511_);
v___x_545_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9));
lean_inc(v_val_520_);
v___x_546_ = l_Lean_Syntax_isOfKind(v_val_520_, v___x_545_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; lean_object* v___x_548_; 
lean_dec(v___f_509_);
lean_dec(v___f_508_);
lean_dec(v_toBind_507_);
lean_dec_ref(v_inst_506_);
lean_dec_ref(v_inst_505_);
lean_dec(v_inst_504_);
lean_dec_ref(v_inst_503_);
v___x_547_ = lean_obj_once(&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11, &l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11_once, _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11);
v___x_548_ = l_Lean_throwErrorAt___redArg(v_inst_501_, v_inst_502_, v_val_520_, v___x_547_);
return v___x_548_;
}
else
{
lean_object* v___x_549_; 
lean_dec_ref(v_inst_502_);
v___x_549_ = l_Lean_Syntax_getHeadInfo(v_val_520_);
if (lean_obj_tag(v___x_549_) == 0)
{
uint8_t v_isExporting_550_; 
lean_dec_ref_known(v___x_549_, 4);
v_isExporting_550_ = lean_ctor_get_uint8(v_env_513_, sizeof(void*)*13);
if (v_isExporting_550_ == 0)
{
goto v___jp_538_;
}
else
{
if (v_isExample_510_ == 0)
{
lean_dec(v___f_509_);
goto v___jp_531_;
}
else
{
goto v___jp_538_;
}
}
}
else
{
lean_object* v___x_551_; lean_object* v___x_552_; 
lean_dec(v___x_549_);
lean_dec(v_val_520_);
lean_dec(v___f_508_);
lean_dec(v_toBind_507_);
lean_dec_ref(v_inst_506_);
lean_dec_ref(v_inst_505_);
lean_dec(v_inst_504_);
lean_dec_ref(v_inst_503_);
lean_dec_ref(v_inst_501_);
v___x_551_ = lean_box(0);
v___x_552_ = lean_apply_1(v___f_509_, v___x_551_);
return v___x_552_;
}
}
}
else
{
lean_object* v___x_553_; 
lean_dec(v___f_509_);
lean_dec(v___f_508_);
lean_dec_ref(v_inst_502_);
v___x_553_ = l_Lean_Syntax_getHeadInfo(v_val_520_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v___x_554_; uint8_t v_isModule_555_; 
lean_dec_ref_known(v___x_553_, 4);
v___x_554_ = l_Lean_Environment_header(v_env_513_);
v_isModule_555_ = lean_ctor_get_uint8(v___x_554_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_554_);
if (v_isModule_555_ == 0)
{
lean_dec(v_val_520_);
lean_dec(v___f_512_);
lean_dec(v_toBind_507_);
lean_dec_ref(v_inst_506_);
lean_dec_ref(v_inst_505_);
lean_dec(v_inst_504_);
lean_dec_ref(v_inst_503_);
lean_dec_ref(v_inst_501_);
goto v___jp_514_;
}
else
{
uint8_t v_isExporting_556_; 
v_isExporting_556_ = lean_ctor_get_uint8(v_env_513_, sizeof(void*)*13);
if (v_isExporting_556_ == 0)
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
lean_dec(v___f_511_);
v___x_557_ = l_Lean_linter_redundantVisibility;
v___x_558_ = lean_obj_once(&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13, &l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13_once, _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13);
v___x_559_ = l_Lean_Linter_logLintIf___redArg(v_inst_501_, v_inst_503_, v_inst_504_, v_inst_505_, v_inst_506_, v___x_557_, v_val_520_, v___x_558_);
v___x_560_ = lean_apply_4(v_toBind_507_, lean_box(0), lean_box(0), v___x_559_, v___f_512_);
return v___x_560_;
}
else
{
lean_dec(v_val_520_);
lean_dec(v___f_512_);
lean_dec(v_toBind_507_);
lean_dec_ref(v_inst_506_);
lean_dec_ref(v_inst_505_);
lean_dec(v_inst_504_);
lean_dec_ref(v_inst_503_);
lean_dec_ref(v_inst_501_);
goto v___jp_514_;
}
}
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec(v___x_553_);
lean_dec(v_val_520_);
lean_dec(v___f_512_);
lean_dec(v_toBind_507_);
lean_dec_ref(v_inst_506_);
lean_dec_ref(v_inst_505_);
lean_dec(v_inst_504_);
lean_dec_ref(v_inst_503_);
lean_dec_ref(v_inst_501_);
v___x_561_ = lean_box(0);
v___x_562_ = lean_apply_1(v___f_511_, v___x_561_);
return v___x_562_;
}
}
v___jp_521_:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
lean_inc_ref(v___y_524_);
v___x_525_ = l_Lean_stringToMessageData(v___y_524_);
lean_inc_ref(v___y_523_);
v___x_526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_526_, 0, v___y_523_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = lean_obj_once(&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1, &l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1_once, _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1);
v___x_528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
lean_inc_ref(v___y_522_);
v___x_529_ = l_Lean_Linter_logLintIf___redArg(v_inst_501_, v_inst_503_, v_inst_504_, v_inst_505_, v_inst_506_, v___y_522_, v_val_520_, v___x_528_);
v___x_530_ = lean_apply_4(v_toBind_507_, lean_box(0), lean_box(0), v___x_529_, v___f_508_);
return v___x_530_;
}
v___jp_531_:
{
lean_object* v___x_532_; uint8_t v_isModule_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_532_ = l_Lean_Environment_header(v_env_513_);
v_isModule_533_ = lean_ctor_get_uint8(v___x_532_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_532_);
v___x_534_ = l_Lean_linter_redundantVisibility;
v___x_535_ = lean_obj_once(&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3, &l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3);
if (v_isModule_533_ == 0)
{
lean_object* v___x_536_; 
v___x_536_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__4));
v___y_522_ = v___x_534_;
v___y_523_ = v___x_535_;
v___y_524_ = v___x_536_;
goto v___jp_521_;
}
else
{
lean_object* v___x_537_; 
v___x_537_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__5));
v___y_522_ = v___x_534_;
v___y_523_ = v___x_535_;
v___y_524_ = v___x_537_;
goto v___jp_521_;
}
}
v___jp_538_:
{
lean_object* v___x_539_; uint8_t v_isModule_540_; 
v___x_539_ = l_Lean_Environment_header(v_env_513_);
v_isModule_540_ = lean_ctor_get_uint8(v___x_539_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_539_);
if (v_isModule_540_ == 0)
{
lean_dec(v___f_509_);
goto v___jp_531_;
}
else
{
lean_object* v___x_541_; lean_object* v___x_542_; 
lean_dec(v_val_520_);
lean_dec(v___f_508_);
lean_dec(v_toBind_507_);
lean_dec_ref(v_inst_506_);
lean_dec_ref(v_inst_505_);
lean_dec(v_inst_504_);
lean_dec_ref(v_inst_503_);
lean_dec_ref(v_inst_501_);
v___x_541_ = lean_box(0);
v___x_542_ = lean_apply_1(v___f_509_, v___x_541_);
return v___x_542_;
}
}
}
v___jp_514_:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_box(0);
v___x_516_ = lean_apply_1(v___f_511_, v___x_515_);
return v___x_516_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___boxed(lean_object* v_vis_x3f_563_, lean_object* v_toPure_564_, lean_object* v_inst_565_, lean_object* v_inst_566_, lean_object* v_inst_567_, lean_object* v_inst_568_, lean_object* v_inst_569_, lean_object* v_inst_570_, lean_object* v_toBind_571_, lean_object* v___f_572_, lean_object* v___f_573_, lean_object* v_isExample_574_, lean_object* v___f_575_, lean_object* v___f_576_, lean_object* v_env_577_){
_start:
{
uint8_t v_isExample_boxed_578_; lean_object* v_res_579_; 
v_isExample_boxed_578_ = lean_unbox(v_isExample_574_);
v_res_579_ = l_Lean_Elab_elabVisibility___redArg___lam__3(v_vis_x3f_563_, v_toPure_564_, v_inst_565_, v_inst_566_, v_inst_567_, v_inst_568_, v_inst_569_, v_inst_570_, v_toBind_571_, v___f_572_, v___f_573_, v_isExample_boxed_578_, v___f_575_, v___f_576_, v_env_577_);
lean_dec_ref(v_env_577_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg(lean_object* v_inst_580_, lean_object* v_inst_581_, lean_object* v_inst_582_, lean_object* v_inst_583_, lean_object* v_inst_584_, lean_object* v_inst_585_, lean_object* v_vis_x3f_586_, uint8_t v_isExample_587_){
_start:
{
lean_object* v_toApplicative_588_; lean_object* v_toBind_589_; lean_object* v_getEnv_590_; lean_object* v_toPure_591_; lean_object* v___f_592_; lean_object* v___f_593_; lean_object* v___f_594_; lean_object* v___f_595_; lean_object* v___x_596_; lean_object* v___f_597_; lean_object* v___x_598_; 
v_toApplicative_588_ = lean_ctor_get(v_inst_580_, 0);
v_toBind_589_ = lean_ctor_get(v_inst_580_, 1);
lean_inc_n(v_toBind_589_, 2);
v_getEnv_590_ = lean_ctor_get(v_inst_582_, 0);
lean_inc(v_getEnv_590_);
v_toPure_591_ = lean_ctor_get(v_toApplicative_588_, 1);
lean_inc_n(v_toPure_591_, 3);
v___f_592_ = lean_alloc_closure((void*)(l_Lean_Elab_elabVisibility___redArg___lam__0), 2, 1);
lean_closure_set(v___f_592_, 0, v_toPure_591_);
lean_inc_ref(v___f_592_);
v___f_593_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_593_, 0, v___f_592_);
v___f_594_ = lean_alloc_closure((void*)(l_Lean_Elab_elabVisibility___redArg___lam__2), 2, 1);
lean_closure_set(v___f_594_, 0, v_toPure_591_);
lean_inc_ref(v___f_594_);
v___f_595_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_595_, 0, v___f_594_);
v___x_596_ = lean_box(v_isExample_587_);
v___f_597_ = lean_alloc_closure((void*)(l_Lean_Elab_elabVisibility___redArg___lam__3___boxed), 15, 14);
lean_closure_set(v___f_597_, 0, v_vis_x3f_586_);
lean_closure_set(v___f_597_, 1, v_toPure_591_);
lean_closure_set(v___f_597_, 2, v_inst_580_);
lean_closure_set(v___f_597_, 3, v_inst_581_);
lean_closure_set(v___f_597_, 4, v_inst_584_);
lean_closure_set(v___f_597_, 5, v_inst_585_);
lean_closure_set(v___f_597_, 6, v_inst_583_);
lean_closure_set(v___f_597_, 7, v_inst_582_);
lean_closure_set(v___f_597_, 8, v_toBind_589_);
lean_closure_set(v___f_597_, 9, v___f_593_);
lean_closure_set(v___f_597_, 10, v___f_592_);
lean_closure_set(v___f_597_, 11, v___x_596_);
lean_closure_set(v___f_597_, 12, v___f_594_);
lean_closure_set(v___f_597_, 13, v___f_595_);
v___x_598_ = lean_apply_4(v_toBind_589_, lean_box(0), lean_box(0), v_getEnv_590_, v___f_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___boxed(lean_object* v_inst_599_, lean_object* v_inst_600_, lean_object* v_inst_601_, lean_object* v_inst_602_, lean_object* v_inst_603_, lean_object* v_inst_604_, lean_object* v_vis_x3f_605_, lean_object* v_isExample_606_){
_start:
{
uint8_t v_isExample_boxed_607_; lean_object* v_res_608_; 
v_isExample_boxed_607_ = lean_unbox(v_isExample_606_);
v_res_608_ = l_Lean_Elab_elabVisibility___redArg(v_inst_599_, v_inst_600_, v_inst_601_, v_inst_602_, v_inst_603_, v_inst_604_, v_vis_x3f_605_, v_isExample_boxed_607_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility(lean_object* v_m_609_, lean_object* v_inst_610_, lean_object* v_inst_611_, lean_object* v_inst_612_, lean_object* v_inst_613_, lean_object* v_inst_614_, lean_object* v_inst_615_, lean_object* v_vis_x3f_616_, uint8_t v_isExample_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l_Lean_Elab_elabVisibility___redArg(v_inst_610_, v_inst_611_, v_inst_612_, v_inst_613_, v_inst_614_, v_inst_615_, v_vis_x3f_616_, v_isExample_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___boxed(lean_object* v_m_619_, lean_object* v_inst_620_, lean_object* v_inst_621_, lean_object* v_inst_622_, lean_object* v_inst_623_, lean_object* v_inst_624_, lean_object* v_inst_625_, lean_object* v_vis_x3f_626_, lean_object* v_isExample_627_){
_start:
{
uint8_t v_isExample_boxed_628_; lean_object* v_res_629_; 
v_isExample_boxed_628_ = lean_unbox(v_isExample_627_);
v_res_629_ = l_Lean_Elab_elabVisibility(v_m_619_, v_inst_620_, v_inst_621_, v_inst_622_, v_inst_623_, v_inst_624_, v_inst_625_, v_vis_x3f_626_, v_isExample_boxed_628_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx___impl(uint8_t v_x_630_){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = lean_box(v_x_630_);
v___x_632_ = lean_obj_tag_nat(v___x_631_);
lean_dec(v___x_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx___impl___boxed(lean_object* v_x_633_){
_start:
{
uint8_t v_x_4__boxed_634_; lean_object* v_res_635_; 
v_x_4__boxed_634_ = lean_unbox(v_x_633_);
v_res_635_ = l_Lean_Elab_RecKind_ctorIdx___impl(v_x_4__boxed_634_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg(lean_object* v_k_636_){
_start:
{
lean_inc(v_k_636_);
return v_k_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg___boxed(lean_object* v_k_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lean_Elab_RecKind_ctorElim___redArg(v_k_637_);
lean_dec(v_k_637_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim(lean_object* v_motive_639_, lean_object* v_ctorIdx_640_, uint8_t v_t_641_, lean_object* v_h_642_, lean_object* v_k_643_){
_start:
{
lean_inc(v_k_643_);
return v_k_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___boxed(lean_object* v_motive_644_, lean_object* v_ctorIdx_645_, lean_object* v_t_646_, lean_object* v_h_647_, lean_object* v_k_648_){
_start:
{
uint8_t v_t_boxed_649_; lean_object* v_res_650_; 
v_t_boxed_649_ = lean_unbox(v_t_646_);
v_res_650_ = l_Lean_Elab_RecKind_ctorElim(v_motive_644_, v_ctorIdx_645_, v_t_boxed_649_, v_h_647_, v_k_648_);
lean_dec(v_k_648_);
lean_dec(v_ctorIdx_645_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg(lean_object* v_partial_651_){
_start:
{
lean_inc(v_partial_651_);
return v_partial_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg___boxed(lean_object* v_partial_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lean_Elab_RecKind_partial_elim___redArg(v_partial_652_);
lean_dec(v_partial_652_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim(lean_object* v_motive_654_, uint8_t v_t_655_, lean_object* v_h_656_, lean_object* v_partial_657_){
_start:
{
lean_inc(v_partial_657_);
return v_partial_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___boxed(lean_object* v_motive_658_, lean_object* v_t_659_, lean_object* v_h_660_, lean_object* v_partial_661_){
_start:
{
uint8_t v_t_boxed_662_; lean_object* v_res_663_; 
v_t_boxed_662_ = lean_unbox(v_t_659_);
v_res_663_ = l_Lean_Elab_RecKind_partial_elim(v_motive_658_, v_t_boxed_662_, v_h_660_, v_partial_661_);
lean_dec(v_partial_661_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg(lean_object* v_nonrec_664_){
_start:
{
lean_inc(v_nonrec_664_);
return v_nonrec_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg___boxed(lean_object* v_nonrec_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lean_Elab_RecKind_nonrec_elim___redArg(v_nonrec_665_);
lean_dec(v_nonrec_665_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim(lean_object* v_motive_667_, uint8_t v_t_668_, lean_object* v_h_669_, lean_object* v_nonrec_670_){
_start:
{
lean_inc(v_nonrec_670_);
return v_nonrec_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___boxed(lean_object* v_motive_671_, lean_object* v_t_672_, lean_object* v_h_673_, lean_object* v_nonrec_674_){
_start:
{
uint8_t v_t_boxed_675_; lean_object* v_res_676_; 
v_t_boxed_675_ = lean_unbox(v_t_672_);
v_res_676_ = l_Lean_Elab_RecKind_nonrec_elim(v_motive_671_, v_t_boxed_675_, v_h_673_, v_nonrec_674_);
lean_dec(v_nonrec_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg(lean_object* v_default_677_){
_start:
{
lean_inc(v_default_677_);
return v_default_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg___boxed(lean_object* v_default_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lean_Elab_RecKind_default_elim___redArg(v_default_678_);
lean_dec(v_default_678_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim(lean_object* v_motive_680_, uint8_t v_t_681_, lean_object* v_h_682_, lean_object* v_default_683_){
_start:
{
lean_inc(v_default_683_);
return v_default_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___boxed(lean_object* v_motive_684_, lean_object* v_t_685_, lean_object* v_h_686_, lean_object* v_default_687_){
_start:
{
uint8_t v_t_boxed_688_; lean_object* v_res_689_; 
v_t_boxed_688_ = lean_unbox(v_t_685_);
v_res_689_ = l_Lean_Elab_RecKind_default_elim(v_motive_684_, v_t_boxed_688_, v_h_686_, v_default_687_);
lean_dec(v_default_687_);
return v_res_689_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedRecKind_default(void){
_start:
{
uint8_t v___x_690_; 
v___x_690_ = 0;
return v___x_690_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedRecKind(void){
_start:
{
uint8_t v___x_691_; 
v___x_691_ = 0;
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx___impl(uint8_t v_x_692_){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = lean_box(v_x_692_);
v___x_694_ = lean_obj_tag_nat(v___x_693_);
lean_dec(v___x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx___impl___boxed(lean_object* v_x_695_){
_start:
{
uint8_t v_x_4__boxed_696_; lean_object* v_res_697_; 
v_x_4__boxed_696_ = lean_unbox(v_x_695_);
v_res_697_ = l_Lean_Elab_ComputeKind_ctorIdx___impl(v_x_4__boxed_696_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg(lean_object* v_k_698_){
_start:
{
lean_inc(v_k_698_);
return v_k_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg___boxed(lean_object* v_k_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lean_Elab_ComputeKind_ctorElim___redArg(v_k_699_);
lean_dec(v_k_699_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim(lean_object* v_motive_701_, lean_object* v_ctorIdx_702_, uint8_t v_t_703_, lean_object* v_h_704_, lean_object* v_k_705_){
_start:
{
lean_inc(v_k_705_);
return v_k_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___boxed(lean_object* v_motive_706_, lean_object* v_ctorIdx_707_, lean_object* v_t_708_, lean_object* v_h_709_, lean_object* v_k_710_){
_start:
{
uint8_t v_t_boxed_711_; lean_object* v_res_712_; 
v_t_boxed_711_ = lean_unbox(v_t_708_);
v_res_712_ = l_Lean_Elab_ComputeKind_ctorElim(v_motive_706_, v_ctorIdx_707_, v_t_boxed_711_, v_h_709_, v_k_710_);
lean_dec(v_k_710_);
lean_dec(v_ctorIdx_707_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg(lean_object* v_regular_713_){
_start:
{
lean_inc(v_regular_713_);
return v_regular_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg___boxed(lean_object* v_regular_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l_Lean_Elab_ComputeKind_regular_elim___redArg(v_regular_714_);
lean_dec(v_regular_714_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim(lean_object* v_motive_716_, uint8_t v_t_717_, lean_object* v_h_718_, lean_object* v_regular_719_){
_start:
{
lean_inc(v_regular_719_);
return v_regular_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___boxed(lean_object* v_motive_720_, lean_object* v_t_721_, lean_object* v_h_722_, lean_object* v_regular_723_){
_start:
{
uint8_t v_t_boxed_724_; lean_object* v_res_725_; 
v_t_boxed_724_ = lean_unbox(v_t_721_);
v_res_725_ = l_Lean_Elab_ComputeKind_regular_elim(v_motive_720_, v_t_boxed_724_, v_h_722_, v_regular_723_);
lean_dec(v_regular_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg(lean_object* v_meta_726_){
_start:
{
lean_inc(v_meta_726_);
return v_meta_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg___boxed(lean_object* v_meta_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_Lean_Elab_ComputeKind_meta_elim___redArg(v_meta_727_);
lean_dec(v_meta_727_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim(lean_object* v_motive_729_, uint8_t v_t_730_, lean_object* v_h_731_, lean_object* v_meta_732_){
_start:
{
lean_inc(v_meta_732_);
return v_meta_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___boxed(lean_object* v_motive_733_, lean_object* v_t_734_, lean_object* v_h_735_, lean_object* v_meta_736_){
_start:
{
uint8_t v_t_boxed_737_; lean_object* v_res_738_; 
v_t_boxed_737_ = lean_unbox(v_t_734_);
v_res_738_ = l_Lean_Elab_ComputeKind_meta_elim(v_motive_733_, v_t_boxed_737_, v_h_735_, v_meta_736_);
lean_dec(v_meta_736_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg(lean_object* v_noncomputable_739_){
_start:
{
lean_inc(v_noncomputable_739_);
return v_noncomputable_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg___boxed(lean_object* v_noncomputable_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lean_Elab_ComputeKind_noncomputable_elim___redArg(v_noncomputable_740_);
lean_dec(v_noncomputable_740_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim(lean_object* v_motive_742_, uint8_t v_t_743_, lean_object* v_h_744_, lean_object* v_noncomputable_745_){
_start:
{
lean_inc(v_noncomputable_745_);
return v_noncomputable_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___boxed(lean_object* v_motive_746_, lean_object* v_t_747_, lean_object* v_h_748_, lean_object* v_noncomputable_749_){
_start:
{
uint8_t v_t_boxed_750_; lean_object* v_res_751_; 
v_t_boxed_750_ = lean_unbox(v_t_747_);
v_res_751_ = l_Lean_Elab_ComputeKind_noncomputable_elim(v_motive_746_, v_t_boxed_750_, v_h_748_, v_noncomputable_749_);
lean_dec(v_noncomputable_749_);
return v_res_751_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedComputeKind_default(void){
_start:
{
uint8_t v___x_752_; 
v___x_752_ = 0;
return v___x_752_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedComputeKind(void){
_start:
{
uint8_t v___x_753_; 
v___x_753_ = 0;
return v___x_753_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_instBEqComputeKind_beq(uint8_t v_x_754_, uint8_t v_y_755_){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; uint8_t v___x_760_; 
v___x_756_ = lean_box(v_x_754_);
v___x_757_ = lean_obj_tag_nat(v___x_756_);
lean_dec(v___x_756_);
v___x_758_ = lean_box(v_y_755_);
v___x_759_ = lean_obj_tag_nat(v___x_758_);
lean_dec(v___x_758_);
v___x_760_ = lean_nat_dec_eq(v___x_757_, v___x_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instBEqComputeKind_beq___boxed(lean_object* v_x_761_, lean_object* v_y_762_){
_start:
{
uint8_t v_x_24__boxed_763_; uint8_t v_y_25__boxed_764_; uint8_t v_res_765_; lean_object* v_r_766_; 
v_x_24__boxed_763_ = lean_unbox(v_x_761_);
v_y_25__boxed_764_ = lean_unbox(v_y_762_);
v_res_765_ = l_Lean_Elab_instBEqComputeKind_beq(v_x_24__boxed_763_, v_y_25__boxed_764_);
v_r_766_ = lean_box(v_res_765_);
return v_r_766_;
}
}
static lean_object* _init_l_Lean_Elab_instReprComputeKind_repr___closed__6(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = lean_unsigned_to_nat(2u);
v___x_779_ = lean_nat_to_int(v___x_778_);
return v___x_779_;
}
}
static lean_object* _init_l_Lean_Elab_instReprComputeKind_repr___closed__7(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = lean_unsigned_to_nat(1u);
v___x_781_ = lean_nat_to_int(v___x_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr(uint8_t v_x_782_, lean_object* v_prec_783_){
_start:
{
lean_object* v___y_785_; lean_object* v___y_792_; lean_object* v___y_799_; 
switch(v_x_782_)
{
case 0:
{
lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_805_ = lean_unsigned_to_nat(1024u);
v___x_806_ = lean_nat_dec_le(v___x_805_, v_prec_783_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; 
v___x_807_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__6, &l_Lean_Elab_instReprComputeKind_repr___closed__6_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__6);
v___y_785_ = v___x_807_;
goto v___jp_784_;
}
else
{
lean_object* v___x_808_; 
v___x_808_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__7, &l_Lean_Elab_instReprComputeKind_repr___closed__7_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__7);
v___y_785_ = v___x_808_;
goto v___jp_784_;
}
}
case 1:
{
lean_object* v___x_809_; uint8_t v___x_810_; 
v___x_809_ = lean_unsigned_to_nat(1024u);
v___x_810_ = lean_nat_dec_le(v___x_809_, v_prec_783_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; 
v___x_811_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__6, &l_Lean_Elab_instReprComputeKind_repr___closed__6_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__6);
v___y_792_ = v___x_811_;
goto v___jp_791_;
}
else
{
lean_object* v___x_812_; 
v___x_812_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__7, &l_Lean_Elab_instReprComputeKind_repr___closed__7_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__7);
v___y_792_ = v___x_812_;
goto v___jp_791_;
}
}
default: 
{
lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_813_ = lean_unsigned_to_nat(1024u);
v___x_814_ = lean_nat_dec_le(v___x_813_, v_prec_783_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; 
v___x_815_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__6, &l_Lean_Elab_instReprComputeKind_repr___closed__6_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__6);
v___y_799_ = v___x_815_;
goto v___jp_798_;
}
else
{
lean_object* v___x_816_; 
v___x_816_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__7, &l_Lean_Elab_instReprComputeKind_repr___closed__7_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__7);
v___y_799_ = v___x_816_;
goto v___jp_798_;
}
}
}
v___jp_784_:
{
lean_object* v___x_786_; lean_object* v___x_787_; uint8_t v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_786_ = ((lean_object*)(l_Lean_Elab_instReprComputeKind_repr___closed__1));
lean_inc(v___y_785_);
v___x_787_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_787_, 0, v___y_785_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v___x_788_ = 0;
v___x_789_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_789_, 0, v___x_787_);
lean_ctor_set_uint8(v___x_789_, sizeof(void*)*1, v___x_788_);
v___x_790_ = l_Repr_addAppParen(v___x_789_, v_prec_783_);
return v___x_790_;
}
v___jp_791_:
{
lean_object* v___x_793_; lean_object* v___x_794_; uint8_t v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_793_ = ((lean_object*)(l_Lean_Elab_instReprComputeKind_repr___closed__3));
lean_inc(v___y_792_);
v___x_794_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_794_, 0, v___y_792_);
lean_ctor_set(v___x_794_, 1, v___x_793_);
v___x_795_ = 0;
v___x_796_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_796_, 0, v___x_794_);
lean_ctor_set_uint8(v___x_796_, sizeof(void*)*1, v___x_795_);
v___x_797_ = l_Repr_addAppParen(v___x_796_, v_prec_783_);
return v___x_797_;
}
v___jp_798_:
{
lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_800_ = ((lean_object*)(l_Lean_Elab_instReprComputeKind_repr___closed__5));
lean_inc(v___y_799_);
v___x_801_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_801_, 0, v___y_799_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
v___x_802_ = 0;
v___x_803_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_803_, 0, v___x_801_);
lean_ctor_set_uint8(v___x_803_, sizeof(void*)*1, v___x_802_);
v___x_804_ = l_Repr_addAppParen(v___x_803_, v_prec_783_);
return v___x_804_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr___boxed(lean_object* v_x_817_, lean_object* v_prec_818_){
_start:
{
uint8_t v_x_255__boxed_819_; lean_object* v_res_820_; 
v_x_255__boxed_819_ = lean_unbox(v_x_817_);
v_res_820_ = l_Lean_Elab_instReprComputeKind_repr(v_x_255__boxed_819_, v_prec_818_);
lean_dec(v_prec_818_);
return v_res_820_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object* v_m_835_){
_start:
{
uint8_t v_visibility_836_; uint8_t v___x_837_; 
v_visibility_836_ = lean_ctor_get_uint8(v_m_835_, sizeof(void*)*3);
v___x_837_ = l_Lean_Elab_Visibility_isPrivate(v_visibility_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPrivate___boxed(lean_object* v_m_838_){
_start:
{
uint8_t v_res_839_; lean_object* v_r_840_; 
v_res_839_ = l_Lean_Elab_Modifiers_isPrivate(v_m_838_);
lean_dec_ref(v_m_838_);
v_r_840_ = lean_box(v_res_839_);
return v_r_840_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPublic(lean_object* v_m_841_){
_start:
{
uint8_t v_visibility_842_; uint8_t v___x_843_; 
v_visibility_842_ = lean_ctor_get_uint8(v_m_841_, sizeof(void*)*3);
v___x_843_ = l_Lean_Elab_Visibility_isPublic(v_visibility_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPublic___boxed(lean_object* v_m_844_){
_start:
{
uint8_t v_res_845_; lean_object* v_r_846_; 
v_res_845_ = l_Lean_Elab_Modifiers_isPublic(v_m_844_);
lean_dec_ref(v_m_844_);
v_r_846_ = lean_box(v_res_845_);
return v_r_846_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isInferredPublic(lean_object* v_env_847_, lean_object* v_m_848_){
_start:
{
uint8_t v_visibility_849_; uint8_t v___x_850_; 
v_visibility_849_ = lean_ctor_get_uint8(v_m_848_, sizeof(void*)*3);
v___x_850_ = l_Lean_Elab_Visibility_isInferredPublic(v_env_847_, v_visibility_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isInferredPublic___boxed(lean_object* v_env_851_, lean_object* v_m_852_){
_start:
{
uint8_t v_res_853_; lean_object* v_r_854_; 
v_res_853_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_851_, v_m_852_);
lean_dec_ref(v_m_852_);
lean_dec_ref(v_env_851_);
v_r_854_ = lean_box(v_res_853_);
return v_r_854_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPartial(lean_object* v_x_855_){
_start:
{
uint8_t v_recKind_856_; 
v_recKind_856_ = lean_ctor_get_uint8(v_x_855_, sizeof(void*)*3 + 3);
if (v_recKind_856_ == 0)
{
uint8_t v___x_857_; 
v___x_857_ = 1;
return v___x_857_;
}
else
{
uint8_t v___x_858_; 
v___x_858_ = 0;
return v___x_858_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPartial___boxed(lean_object* v_x_859_){
_start:
{
uint8_t v_res_860_; lean_object* v_r_861_; 
v_res_860_ = l_Lean_Elab_Modifiers_isPartial(v_x_859_);
lean_dec_ref(v_x_859_);
v_r_861_ = lean_box(v_res_860_);
return v_r_861_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNonrec(lean_object* v_x_862_){
_start:
{
uint8_t v_recKind_863_; 
v_recKind_863_ = lean_ctor_get_uint8(v_x_862_, sizeof(void*)*3 + 3);
if (v_recKind_863_ == 1)
{
uint8_t v___x_864_; 
v___x_864_ = 1;
return v___x_864_;
}
else
{
uint8_t v___x_865_; 
v___x_865_ = 0;
return v___x_865_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNonrec___boxed(lean_object* v_x_866_){
_start:
{
uint8_t v_res_867_; lean_object* v_r_868_; 
v_res_867_ = l_Lean_Elab_Modifiers_isNonrec(v_x_866_);
lean_dec_ref(v_x_866_);
v_r_868_ = lean_box(v_res_867_);
return v_r_868_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isMeta(lean_object* v_m_869_){
_start:
{
uint8_t v_computeKind_870_; 
v_computeKind_870_ = lean_ctor_get_uint8(v_m_869_, sizeof(void*)*3 + 2);
if (v_computeKind_870_ == 1)
{
uint8_t v___x_871_; 
v___x_871_ = 1;
return v___x_871_;
}
else
{
uint8_t v___x_872_; 
v___x_872_ = 0;
return v___x_872_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isMeta___boxed(lean_object* v_m_873_){
_start:
{
uint8_t v_res_874_; lean_object* v_r_875_; 
v_res_874_ = l_Lean_Elab_Modifiers_isMeta(v_m_873_);
lean_dec_ref(v_m_873_);
v_r_875_ = lean_box(v_res_874_);
return v_r_875_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNoncomputable(lean_object* v_m_876_){
_start:
{
uint8_t v_computeKind_877_; 
v_computeKind_877_ = lean_ctor_get_uint8(v_m_876_, sizeof(void*)*3 + 2);
if (v_computeKind_877_ == 2)
{
uint8_t v___x_878_; 
v___x_878_ = 1;
return v___x_878_;
}
else
{
uint8_t v___x_879_; 
v___x_879_ = 0;
return v___x_879_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNoncomputable___boxed(lean_object* v_m_880_){
_start:
{
uint8_t v_res_881_; lean_object* v_r_882_; 
v_res_881_ = l_Lean_Elab_Modifiers_isNoncomputable(v_m_880_);
lean_dec_ref(v_m_880_);
v_r_882_ = lean_box(v_res_881_);
return v_r_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addAttr(lean_object* v_modifiers_883_, lean_object* v_attr_884_){
_start:
{
lean_object* v_stx_885_; lean_object* v_docString_x3f_886_; uint8_t v_visibility_887_; uint8_t v_isProtected_888_; uint8_t v_computeKind_889_; uint8_t v_recKind_890_; uint8_t v_isUnsafe_891_; lean_object* v_attrs_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_900_; 
v_stx_885_ = lean_ctor_get(v_modifiers_883_, 0);
v_docString_x3f_886_ = lean_ctor_get(v_modifiers_883_, 1);
v_visibility_887_ = lean_ctor_get_uint8(v_modifiers_883_, sizeof(void*)*3);
v_isProtected_888_ = lean_ctor_get_uint8(v_modifiers_883_, sizeof(void*)*3 + 1);
v_computeKind_889_ = lean_ctor_get_uint8(v_modifiers_883_, sizeof(void*)*3 + 2);
v_recKind_890_ = lean_ctor_get_uint8(v_modifiers_883_, sizeof(void*)*3 + 3);
v_isUnsafe_891_ = lean_ctor_get_uint8(v_modifiers_883_, sizeof(void*)*3 + 4);
v_attrs_892_ = lean_ctor_get(v_modifiers_883_, 2);
v_isSharedCheck_900_ = !lean_is_exclusive(v_modifiers_883_);
if (v_isSharedCheck_900_ == 0)
{
v___x_894_ = v_modifiers_883_;
v_isShared_895_ = v_isSharedCheck_900_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_attrs_892_);
lean_inc(v_docString_x3f_886_);
lean_inc(v_stx_885_);
lean_dec(v_modifiers_883_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_900_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_896_; lean_object* v___x_898_; 
v___x_896_ = lean_array_push(v_attrs_892_, v_attr_884_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 2, v___x_896_);
v___x_898_ = v___x_894_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_stx_885_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v_docString_x3f_886_);
lean_ctor_set(v_reuseFailAlloc_899_, 2, v___x_896_);
lean_ctor_set_uint8(v_reuseFailAlloc_899_, sizeof(void*)*3, v_visibility_887_);
lean_ctor_set_uint8(v_reuseFailAlloc_899_, sizeof(void*)*3 + 1, v_isProtected_888_);
lean_ctor_set_uint8(v_reuseFailAlloc_899_, sizeof(void*)*3 + 2, v_computeKind_889_);
lean_ctor_set_uint8(v_reuseFailAlloc_899_, sizeof(void*)*3 + 3, v_recKind_890_);
lean_ctor_set_uint8(v_reuseFailAlloc_899_, sizeof(void*)*3 + 4, v_isUnsafe_891_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addFirstAttr(lean_object* v_modifiers_901_, lean_object* v_attr_902_){
_start:
{
lean_object* v_stx_903_; lean_object* v_docString_x3f_904_; uint8_t v_visibility_905_; uint8_t v_isProtected_906_; uint8_t v_computeKind_907_; uint8_t v_recKind_908_; uint8_t v_isUnsafe_909_; lean_object* v_attrs_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_921_; 
v_stx_903_ = lean_ctor_get(v_modifiers_901_, 0);
v_docString_x3f_904_ = lean_ctor_get(v_modifiers_901_, 1);
v_visibility_905_ = lean_ctor_get_uint8(v_modifiers_901_, sizeof(void*)*3);
v_isProtected_906_ = lean_ctor_get_uint8(v_modifiers_901_, sizeof(void*)*3 + 1);
v_computeKind_907_ = lean_ctor_get_uint8(v_modifiers_901_, sizeof(void*)*3 + 2);
v_recKind_908_ = lean_ctor_get_uint8(v_modifiers_901_, sizeof(void*)*3 + 3);
v_isUnsafe_909_ = lean_ctor_get_uint8(v_modifiers_901_, sizeof(void*)*3 + 4);
v_attrs_910_ = lean_ctor_get(v_modifiers_901_, 2);
v_isSharedCheck_921_ = !lean_is_exclusive(v_modifiers_901_);
if (v_isSharedCheck_921_ == 0)
{
v___x_912_ = v_modifiers_901_;
v_isShared_913_ = v_isSharedCheck_921_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_attrs_910_);
lean_inc(v_docString_x3f_904_);
lean_inc(v_stx_903_);
lean_dec(v_modifiers_901_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_921_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_919_; 
v___x_914_ = lean_unsigned_to_nat(1u);
v___x_915_ = lean_mk_empty_array_with_capacity(v___x_914_);
v___x_916_ = lean_array_push(v___x_915_, v_attr_902_);
v___x_917_ = l_Array_append___redArg(v___x_916_, v_attrs_910_);
lean_dec_ref(v_attrs_910_);
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 2, v___x_917_);
v___x_919_ = v___x_912_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_stx_903_);
lean_ctor_set(v_reuseFailAlloc_920_, 1, v_docString_x3f_904_);
lean_ctor_set(v_reuseFailAlloc_920_, 2, v___x_917_);
lean_ctor_set_uint8(v_reuseFailAlloc_920_, sizeof(void*)*3, v_visibility_905_);
lean_ctor_set_uint8(v_reuseFailAlloc_920_, sizeof(void*)*3 + 1, v_isProtected_906_);
lean_ctor_set_uint8(v_reuseFailAlloc_920_, sizeof(void*)*3 + 2, v_computeKind_907_);
lean_ctor_set_uint8(v_reuseFailAlloc_920_, sizeof(void*)*3 + 3, v_recKind_908_);
lean_ctor_set_uint8(v_reuseFailAlloc_920_, sizeof(void*)*3 + 4, v_isUnsafe_909_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(lean_object* v_p_922_, lean_object* v_as_923_, size_t v_i_924_, size_t v_stop_925_, lean_object* v_b_926_){
_start:
{
lean_object* v___y_928_; uint8_t v___x_932_; 
v___x_932_ = lean_usize_dec_eq(v_i_924_, v_stop_925_);
if (v___x_932_ == 0)
{
lean_object* v___x_933_; lean_object* v___x_934_; uint8_t v___x_935_; 
v___x_933_ = lean_array_uget_borrowed(v_as_923_, v_i_924_);
lean_inc_ref(v_p_922_);
lean_inc(v___x_933_);
v___x_934_ = lean_apply_1(v_p_922_, v___x_933_);
v___x_935_ = lean_unbox(v___x_934_);
if (v___x_935_ == 0)
{
v___y_928_ = v_b_926_;
goto v___jp_927_;
}
else
{
lean_object* v___x_936_; 
lean_inc(v___x_933_);
v___x_936_ = lean_array_push(v_b_926_, v___x_933_);
v___y_928_ = v___x_936_;
goto v___jp_927_;
}
}
else
{
lean_dec_ref(v_p_922_);
return v_b_926_;
}
v___jp_927_:
{
size_t v___x_929_; size_t v___x_930_; 
v___x_929_ = ((size_t)1ULL);
v___x_930_ = lean_usize_add(v_i_924_, v___x_929_);
v_i_924_ = v___x_930_;
v_b_926_ = v___y_928_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0___boxed(lean_object* v_p_937_, lean_object* v_as_938_, lean_object* v_i_939_, lean_object* v_stop_940_, lean_object* v_b_941_){
_start:
{
size_t v_i_boxed_942_; size_t v_stop_boxed_943_; lean_object* v_res_944_; 
v_i_boxed_942_ = lean_unbox_usize(v_i_939_);
lean_dec(v_i_939_);
v_stop_boxed_943_ = lean_unbox_usize(v_stop_940_);
lean_dec(v_stop_940_);
v_res_944_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(v_p_937_, v_as_938_, v_i_boxed_942_, v_stop_boxed_943_, v_b_941_);
lean_dec_ref(v_as_938_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_filterAttrs(lean_object* v_modifiers_945_, lean_object* v_p_946_){
_start:
{
lean_object* v_stx_947_; lean_object* v_docString_x3f_948_; uint8_t v_visibility_949_; uint8_t v_isProtected_950_; uint8_t v_computeKind_951_; uint8_t v_recKind_952_; uint8_t v_isUnsafe_953_; lean_object* v_attrs_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_971_; 
v_stx_947_ = lean_ctor_get(v_modifiers_945_, 0);
v_docString_x3f_948_ = lean_ctor_get(v_modifiers_945_, 1);
v_visibility_949_ = lean_ctor_get_uint8(v_modifiers_945_, sizeof(void*)*3);
v_isProtected_950_ = lean_ctor_get_uint8(v_modifiers_945_, sizeof(void*)*3 + 1);
v_computeKind_951_ = lean_ctor_get_uint8(v_modifiers_945_, sizeof(void*)*3 + 2);
v_recKind_952_ = lean_ctor_get_uint8(v_modifiers_945_, sizeof(void*)*3 + 3);
v_isUnsafe_953_ = lean_ctor_get_uint8(v_modifiers_945_, sizeof(void*)*3 + 4);
v_attrs_954_ = lean_ctor_get(v_modifiers_945_, 2);
v_isSharedCheck_971_ = !lean_is_exclusive(v_modifiers_945_);
if (v_isSharedCheck_971_ == 0)
{
v___x_956_ = v_modifiers_945_;
v_isShared_957_ = v_isSharedCheck_971_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_attrs_954_);
lean_inc(v_docString_x3f_948_);
lean_inc(v_stx_947_);
lean_dec(v_modifiers_945_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_971_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; uint8_t v___x_961_; 
v___x_958_ = lean_unsigned_to_nat(0u);
v___x_959_ = lean_array_get_size(v_attrs_954_);
v___x_960_ = ((lean_object*)(l_Lean_Elab_instInhabitedModifiers_default___closed__0));
v___x_961_ = lean_nat_dec_lt(v___x_958_, v___x_959_);
if (v___x_961_ == 0)
{
lean_object* v___x_963_; 
lean_dec_ref(v_attrs_954_);
lean_dec_ref(v_p_946_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 2, v___x_960_);
v___x_963_ = v___x_956_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_stx_947_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_docString_x3f_948_);
lean_ctor_set(v_reuseFailAlloc_964_, 2, v___x_960_);
lean_ctor_set_uint8(v_reuseFailAlloc_964_, sizeof(void*)*3, v_visibility_949_);
lean_ctor_set_uint8(v_reuseFailAlloc_964_, sizeof(void*)*3 + 1, v_isProtected_950_);
lean_ctor_set_uint8(v_reuseFailAlloc_964_, sizeof(void*)*3 + 2, v_computeKind_951_);
lean_ctor_set_uint8(v_reuseFailAlloc_964_, sizeof(void*)*3 + 3, v_recKind_952_);
lean_ctor_set_uint8(v_reuseFailAlloc_964_, sizeof(void*)*3 + 4, v_isUnsafe_953_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
else
{
size_t v___x_965_; size_t v___x_966_; lean_object* v___x_967_; lean_object* v___x_969_; 
v___x_965_ = ((size_t)0ULL);
v___x_966_ = lean_usize_of_nat(v___x_959_);
v___x_967_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(v_p_946_, v_attrs_954_, v___x_965_, v___x_966_, v___x_960_);
lean_dec_ref(v_attrs_954_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 2, v___x_967_);
v___x_969_ = v___x_956_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_stx_947_);
lean_ctor_set(v_reuseFailAlloc_970_, 1, v_docString_x3f_948_);
lean_ctor_set(v_reuseFailAlloc_970_, 2, v___x_967_);
lean_ctor_set_uint8(v_reuseFailAlloc_970_, sizeof(void*)*3, v_visibility_949_);
lean_ctor_set_uint8(v_reuseFailAlloc_970_, sizeof(void*)*3 + 1, v_isProtected_950_);
lean_ctor_set_uint8(v_reuseFailAlloc_970_, sizeof(void*)*3 + 2, v_computeKind_951_);
lean_ctor_set_uint8(v_reuseFailAlloc_970_, sizeof(void*)*3 + 3, v_recKind_952_);
lean_ctor_set_uint8(v_reuseFailAlloc_970_, sizeof(void*)*3 + 4, v_isUnsafe_953_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(lean_object* v_p_972_, lean_object* v_as_973_, size_t v_i_974_, size_t v_stop_975_){
_start:
{
uint8_t v___x_976_; 
v___x_976_ = lean_usize_dec_eq(v_i_974_, v_stop_975_);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_977_ = lean_array_uget_borrowed(v_as_973_, v_i_974_);
lean_inc_ref(v_p_972_);
lean_inc(v___x_977_);
v___x_978_ = lean_apply_1(v_p_972_, v___x_977_);
v___x_979_ = lean_unbox(v___x_978_);
if (v___x_979_ == 0)
{
size_t v___x_980_; size_t v___x_981_; 
v___x_980_ = ((size_t)1ULL);
v___x_981_ = lean_usize_add(v_i_974_, v___x_980_);
v_i_974_ = v___x_981_;
goto _start;
}
else
{
uint8_t v___x_983_; 
lean_dec_ref(v_p_972_);
v___x_983_ = lean_unbox(v___x_978_);
return v___x_983_;
}
}
else
{
uint8_t v___x_984_; 
lean_dec_ref(v_p_972_);
v___x_984_ = 0;
return v___x_984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0___boxed(lean_object* v_p_985_, lean_object* v_as_986_, lean_object* v_i_987_, lean_object* v_stop_988_){
_start:
{
size_t v_i_boxed_989_; size_t v_stop_boxed_990_; uint8_t v_res_991_; lean_object* v_r_992_; 
v_i_boxed_989_ = lean_unbox_usize(v_i_987_);
lean_dec(v_i_987_);
v_stop_boxed_990_ = lean_unbox_usize(v_stop_988_);
lean_dec(v_stop_988_);
v_res_991_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(v_p_985_, v_as_986_, v_i_boxed_989_, v_stop_boxed_990_);
lean_dec_ref(v_as_986_);
v_r_992_ = lean_box(v_res_991_);
return v_r_992_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_anyAttr(lean_object* v_modifiers_993_, lean_object* v_p_994_){
_start:
{
lean_object* v_attrs_995_; lean_object* v___x_996_; lean_object* v___x_997_; uint8_t v___x_998_; 
v_attrs_995_ = lean_ctor_get(v_modifiers_993_, 2);
v___x_996_ = lean_unsigned_to_nat(0u);
v___x_997_ = lean_array_get_size(v_attrs_995_);
v___x_998_ = lean_nat_dec_lt(v___x_996_, v___x_997_);
if (v___x_998_ == 0)
{
lean_dec_ref(v_p_994_);
return v___x_998_;
}
else
{
if (v___x_998_ == 0)
{
lean_dec_ref(v_p_994_);
return v___x_998_;
}
else
{
size_t v___x_999_; size_t v___x_1000_; uint8_t v___x_1001_; 
v___x_999_ = ((size_t)0ULL);
v___x_1000_ = lean_usize_of_nat(v___x_997_);
v___x_1001_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(v_p_994_, v_attrs_995_, v___x_999_, v___x_1000_);
return v___x_1001_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_anyAttr___boxed(lean_object* v_modifiers_1002_, lean_object* v_p_1003_){
_start:
{
uint8_t v_res_1004_; lean_object* v_r_1005_; 
v_res_1004_ = l_Lean_Elab_Modifiers_anyAttr(v_modifiers_1002_, v_p_1003_);
lean_dec_ref(v_modifiers_1002_);
v_r_1005_ = lean_box(v_res_1004_);
return v_r_1005_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__0));
v___x_1009_ = lean_string_length(v___x_1008_);
return v___x_1009_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__0___closed__2, &l_Lean_Elab_instToFormatModifiers___lam__0___closed__2_once, _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__2);
v___x_1011_ = lean_nat_to_int(v___x_1010_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__0(lean_object* v_attr_1018_){
_start:
{
uint8_t v_kind_1019_; lean_object* v_name_1020_; lean_object* v_stx_1021_; lean_object* v___y_1023_; 
v_kind_1019_ = lean_ctor_get_uint8(v_attr_1018_, sizeof(void*)*2);
v_name_1020_ = lean_ctor_get(v_attr_1018_, 0);
lean_inc(v_name_1020_);
v_stx_1021_ = lean_ctor_get(v_attr_1018_, 1);
lean_inc(v_stx_1021_);
lean_dec_ref(v_attr_1018_);
switch(v_kind_1019_)
{
case 0:
{
lean_object* v___x_1045_; 
v___x_1045_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__4));
v___y_1023_ = v___x_1045_;
goto v___jp_1022_;
}
case 1:
{
lean_object* v___x_1046_; 
v___x_1046_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__6));
v___y_1023_ = v___x_1046_;
goto v___jp_1022_;
}
default: 
{
lean_object* v___x_1047_; 
v___x_1047_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__7));
v___y_1023_ = v___x_1047_;
goto v___jp_1022_;
}
}
v___jp_1022_:
{
lean_object* v___x_1024_; uint8_t v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; uint8_t v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; lean_object* v___x_1044_; 
lean_inc_ref(v___y_1023_);
v___x_1024_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1024_, 0, v___y_1023_);
v___x_1025_ = 1;
v___x_1026_ = l_Lean_Name_toString(v_name_1020_, v___x_1025_);
v___x_1027_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
v___x_1028_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1024_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = lean_box(0);
v___x_1030_ = 0;
v___x_1031_ = l_Lean_Syntax_formatStx(v_stx_1021_, v___x_1029_, v___x_1030_);
v___x_1032_ = l_Std_Format_defWidth;
v___x_1033_ = lean_unsigned_to_nat(0u);
v___x_1034_ = l_Std_Format_pretty(v___x_1031_, v___x_1032_, v___x_1033_, v___x_1033_);
v___x_1035_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
v___x_1036_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1028_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1037_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__0___closed__3, &l_Lean_Elab_instToFormatModifiers___lam__0___closed__3_once, _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__3);
v___x_1038_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__4));
v___x_1039_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1038_);
lean_ctor_set(v___x_1039_, 1, v___x_1036_);
v___x_1040_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__5));
v___x_1041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1039_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1037_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = 0;
v___x_1044_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1044_, 0, v___x_1042_);
lean_ctor_set_uint8(v___x_1044_, sizeof(void*)*1, v___x_1043_);
return v___x_1044_;
}
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__0));
v___x_1057_ = lean_string_length(v___x_1056_);
return v___x_1057_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__6(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1058_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__1___closed__5, &l_Lean_Elab_instToFormatModifiers___lam__1___closed__5_once, _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__5);
v___x_1059_ = lean_nat_to_int(v___x_1058_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__1(lean_object* v___f_1116_, lean_object* v___f_1117_, lean_object* v_m_1118_){
_start:
{
lean_object* v_docString_x3f_1119_; uint8_t v_visibility_1120_; uint8_t v_isProtected_1121_; uint8_t v_computeKind_1122_; uint8_t v_recKind_1123_; uint8_t v_isUnsafe_1124_; lean_object* v_attrs_1125_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1171_; 
v_docString_x3f_1119_ = lean_ctor_get(v_m_1118_, 1);
lean_inc(v_docString_x3f_1119_);
v_visibility_1120_ = lean_ctor_get_uint8(v_m_1118_, sizeof(void*)*3);
v_isProtected_1121_ = lean_ctor_get_uint8(v_m_1118_, sizeof(void*)*3 + 1);
v_computeKind_1122_ = lean_ctor_get_uint8(v_m_1118_, sizeof(void*)*3 + 2);
v_recKind_1123_ = lean_ctor_get_uint8(v_m_1118_, sizeof(void*)*3 + 3);
v_isUnsafe_1124_ = lean_ctor_get_uint8(v_m_1118_, sizeof(void*)*3 + 4);
v_attrs_1125_ = lean_ctor_get(v_m_1118_, 2);
lean_inc_ref(v_attrs_1125_);
lean_dec_ref(v_m_1118_);
if (lean_obj_tag(v_docString_x3f_1119_) == 0)
{
lean_object* v___x_1175_; 
v___x_1175_ = lean_box(0);
v___y_1171_ = v___x_1175_;
goto v___jp_1170_;
}
else
{
lean_object* v_val_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v_val_1176_ = lean_ctor_get(v_docString_x3f_1119_, 0);
lean_inc(v_val_1176_);
lean_dec_ref_known(v_docString_x3f_1119_, 1);
v___x_1177_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__32));
v___x_1178_ = lean_box(0);
v___x_1179_ = 0;
v___x_1180_ = l_Lean_Syntax_formatStx(v_val_1176_, v___x_1178_, v___x_1179_);
v___x_1181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1177_);
lean_ctor_set(v___x_1181_, 1, v___x_1180_);
v___x_1182_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__34));
v___x_1183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1181_);
lean_ctor_set(v___x_1183_, 1, v___x_1182_);
v___x_1184_ = lean_box(0);
v___x_1185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1183_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
v___y_1171_ = v___x_1185_;
goto v___jp_1170_;
}
v___jp_1126_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v_components_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; uint8_t v___x_1142_; lean_object* v___x_1143_; 
lean_inc(v___y_1128_);
v___x_1129_ = l_List_appendTR___redArg(v___y_1127_, v___y_1128_);
v___x_1130_ = lean_array_to_list(v_attrs_1125_);
v___x_1131_ = lean_box(0);
v___x_1132_ = l_List_mapTR_loop___redArg(v___f_1116_, v___x_1130_, v___x_1131_);
v_components_1133_ = l_List_appendTR___redArg(v___x_1129_, v___x_1132_);
v___x_1134_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__3));
v___x_1135_ = l_Std_Format_joinSep___redArg(v___f_1117_, v_components_1133_, v___x_1134_);
v___x_1136_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__1___closed__6, &l_Lean_Elab_instToFormatModifiers___lam__1___closed__6_once, _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__6);
v___x_1137_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__7));
v___x_1138_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
lean_ctor_set(v___x_1138_, 1, v___x_1135_);
v___x_1139_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__8));
v___x_1140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1138_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
v___x_1141_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1136_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v___x_1142_ = 0;
v___x_1143_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1143_, 0, v___x_1141_);
lean_ctor_set_uint8(v___x_1143_, sizeof(void*)*1, v___x_1142_);
return v___x_1143_;
}
v___jp_1144_:
{
lean_object* v___x_1147_; 
lean_inc(v___y_1146_);
v___x_1147_ = l_List_appendTR___redArg(v___y_1145_, v___y_1146_);
if (v_isUnsafe_1124_ == 0)
{
lean_object* v___x_1148_; 
v___x_1148_ = lean_box(0);
v___y_1127_ = v___x_1147_;
v___y_1128_ = v___x_1148_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1149_; 
v___x_1149_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__11));
v___y_1127_ = v___x_1147_;
v___y_1128_ = v___x_1149_;
goto v___jp_1126_;
}
}
v___jp_1150_:
{
lean_object* v___x_1153_; 
lean_inc(v___y_1152_);
v___x_1153_ = l_List_appendTR___redArg(v___y_1151_, v___y_1152_);
switch(v_recKind_1123_)
{
case 0:
{
lean_object* v___x_1154_; 
v___x_1154_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__14));
v___y_1145_ = v___x_1153_;
v___y_1146_ = v___x_1154_;
goto v___jp_1144_;
}
case 1:
{
lean_object* v___x_1155_; 
v___x_1155_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__17));
v___y_1145_ = v___x_1153_;
v___y_1146_ = v___x_1155_;
goto v___jp_1144_;
}
default: 
{
lean_object* v___x_1156_; 
v___x_1156_ = lean_box(0);
v___y_1145_ = v___x_1153_;
v___y_1146_ = v___x_1156_;
goto v___jp_1144_;
}
}
}
v___jp_1157_:
{
lean_object* v___x_1160_; 
lean_inc(v___y_1159_);
v___x_1160_ = l_List_appendTR___redArg(v___y_1158_, v___y_1159_);
switch(v_computeKind_1122_)
{
case 0:
{
lean_object* v___x_1161_; 
v___x_1161_ = lean_box(0);
v___y_1151_ = v___x_1160_;
v___y_1152_ = v___x_1161_;
goto v___jp_1150_;
}
case 1:
{
lean_object* v___x_1162_; 
v___x_1162_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__20));
v___y_1151_ = v___x_1160_;
v___y_1152_ = v___x_1162_;
goto v___jp_1150_;
}
default: 
{
lean_object* v___x_1163_; 
v___x_1163_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__23));
v___y_1151_ = v___x_1160_;
v___y_1152_ = v___x_1163_;
goto v___jp_1150_;
}
}
}
v___jp_1164_:
{
lean_object* v___x_1167_; 
lean_inc(v___y_1166_);
v___x_1167_ = l_List_appendTR___redArg(v___y_1165_, v___y_1166_);
if (v_isProtected_1121_ == 0)
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_box(0);
v___y_1158_ = v___x_1167_;
v___y_1159_ = v___x_1168_;
goto v___jp_1157_;
}
else
{
lean_object* v___x_1169_; 
v___x_1169_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__26));
v___y_1158_ = v___x_1167_;
v___y_1159_ = v___x_1169_;
goto v___jp_1157_;
}
}
v___jp_1170_:
{
switch(v_visibility_1120_)
{
case 0:
{
lean_object* v___x_1172_; 
v___x_1172_ = lean_box(0);
v___y_1165_ = v___y_1171_;
v___y_1166_ = v___x_1172_;
goto v___jp_1164_;
}
case 1:
{
lean_object* v___x_1173_; 
v___x_1173_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__28));
v___y_1165_ = v___y_1171_;
v___y_1166_ = v___x_1173_;
goto v___jp_1164_;
}
default: 
{
lean_object* v___x_1174_; 
v___x_1174_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__30));
v___y_1165_ = v___y_1171_;
v___y_1166_ = v___x_1174_;
goto v___jp_1164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringModifiers___lam__0(lean_object* v_f_1192_){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1193_ = l_Std_Format_defWidth;
v___x_1194_ = lean_unsigned_to_nat(0u);
v___x_1195_ = l_Std_Format_pretty(v_f_1192_, v___x_1193_, v___x_1194_, v___x_1194_);
return v___x_1195_;
}
}
static lean_object* _init_l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = ((lean_object*)(l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0));
v___x_1203_ = l_Lean_stringToMessageData(v___x_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg(lean_object* v_inst_1205_, lean_object* v_inst_1206_, lean_object* v_optDocComment_1207_){
_start:
{
lean_object* v_toApplicative_1208_; lean_object* v_toPure_1209_; lean_object* v___x_1210_; 
v_toApplicative_1208_ = lean_ctor_get(v_inst_1205_, 0);
v_toPure_1209_ = lean_ctor_get(v_toApplicative_1208_, 1);
v___x_1210_ = l_Lean_Syntax_getOptional_x3f(v_optDocComment_1207_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
lean_inc(v_toPure_1209_);
lean_dec_ref(v_inst_1206_);
lean_dec_ref(v_inst_1205_);
v___x_1211_ = lean_box(0);
v___x_1212_ = lean_apply_2(v_toPure_1209_, lean_box(0), v___x_1211_);
return v___x_1212_;
}
else
{
lean_object* v_val_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1255_; 
v_val_1213_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1215_ = v___x_1210_;
v_isShared_1216_ = v_isSharedCheck_1255_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_val_1213_);
lean_dec(v___x_1210_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1255_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_unsigned_to_nat(1u);
v___x_1226_ = l_Lean_Syntax_getArg(v_val_1213_, v___x_1225_);
if (lean_obj_tag(v___x_1226_) == 1)
{
lean_object* v_kind_1227_; 
v_kind_1227_ = lean_ctor_get(v___x_1226_, 1);
lean_inc(v_kind_1227_);
if (lean_obj_tag(v_kind_1227_) == 1)
{
lean_object* v_pre_1228_; 
v_pre_1228_ = lean_ctor_get(v_kind_1227_, 0);
lean_inc(v_pre_1228_);
if (lean_obj_tag(v_pre_1228_) == 1)
{
lean_object* v_pre_1229_; 
v_pre_1229_ = lean_ctor_get(v_pre_1228_, 0);
lean_inc(v_pre_1229_);
if (lean_obj_tag(v_pre_1229_) == 1)
{
lean_object* v_pre_1230_; 
v_pre_1230_ = lean_ctor_get(v_pre_1229_, 0);
lean_inc(v_pre_1230_);
if (lean_obj_tag(v_pre_1230_) == 1)
{
lean_object* v_pre_1231_; 
v_pre_1231_ = lean_ctor_get(v_pre_1230_, 0);
if (lean_obj_tag(v_pre_1231_) == 0)
{
lean_object* v_args_1232_; lean_object* v_str_1233_; lean_object* v_str_1234_; lean_object* v_str_1235_; lean_object* v_str_1236_; lean_object* v___x_1237_; uint8_t v___x_1238_; 
v_args_1232_ = lean_ctor_get(v___x_1226_, 2);
lean_inc_ref(v_args_1232_);
lean_dec_ref_known(v___x_1226_, 3);
v_str_1233_ = lean_ctor_get(v_kind_1227_, 1);
lean_inc_ref(v_str_1233_);
lean_dec_ref_known(v_kind_1227_, 2);
v_str_1234_ = lean_ctor_get(v_pre_1228_, 1);
lean_inc_ref(v_str_1234_);
lean_dec_ref_known(v_pre_1228_, 2);
v_str_1235_ = lean_ctor_get(v_pre_1229_, 1);
lean_inc_ref(v_str_1235_);
lean_dec_ref_known(v_pre_1229_, 2);
v_str_1236_ = lean_ctor_get(v_pre_1230_, 1);
lean_inc_ref(v_str_1236_);
lean_dec_ref_known(v_pre_1230_, 2);
v___x_1237_ = ((lean_object*)(l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_));
v___x_1238_ = lean_string_dec_eq(v_str_1236_, v___x_1237_);
lean_dec_ref(v_str_1236_);
if (v___x_1238_ == 0)
{
lean_dec_ref(v_str_1235_);
lean_dec_ref(v_str_1234_);
lean_dec_ref(v_str_1233_);
lean_dec_ref(v_args_1232_);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
else
{
lean_object* v___x_1239_; uint8_t v___x_1240_; 
v___x_1239_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6));
v___x_1240_ = lean_string_dec_eq(v_str_1235_, v___x_1239_);
lean_dec_ref(v_str_1235_);
if (v___x_1240_ == 0)
{
lean_dec_ref(v_str_1234_);
lean_dec_ref(v_str_1233_);
lean_dec_ref(v_args_1232_);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
else
{
lean_object* v___x_1241_; uint8_t v___x_1242_; 
v___x_1241_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7));
v___x_1242_ = lean_string_dec_eq(v_str_1234_, v___x_1241_);
lean_dec_ref(v_str_1234_);
if (v___x_1242_ == 0)
{
lean_dec_ref(v_str_1233_);
lean_dec_ref(v_args_1232_);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
else
{
lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1243_ = ((lean_object*)(l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__2));
v___x_1244_ = lean_string_dec_eq(v_str_1233_, v___x_1243_);
lean_dec_ref(v_str_1233_);
if (v___x_1244_ == 0)
{
lean_dec_ref(v_args_1232_);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
else
{
lean_object* v___x_1245_; lean_object* v___x_1246_; uint8_t v___x_1247_; 
v___x_1245_ = lean_array_get_size(v_args_1232_);
v___x_1246_ = lean_unsigned_to_nat(2u);
v___x_1247_ = lean_nat_dec_eq(v___x_1245_, v___x_1246_);
if (v___x_1247_ == 0)
{
lean_dec_ref(v_args_1232_);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
else
{
lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1248_ = lean_unsigned_to_nat(0u);
v___x_1249_ = lean_array_fget(v_args_1232_, v___x_1248_);
lean_dec_ref(v_args_1232_);
if (lean_obj_tag(v___x_1249_) == 2)
{
lean_object* v_val_1250_; lean_object* v___x_1252_; 
lean_inc(v_toPure_1209_);
lean_dec(v_val_1213_);
lean_dec_ref(v_inst_1206_);
lean_dec_ref(v_inst_1205_);
v_val_1250_ = lean_ctor_get(v___x_1249_, 1);
lean_inc_ref(v_val_1250_);
lean_dec_ref_known(v___x_1249_, 2);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 0, v_val_1250_);
v___x_1252_ = v___x_1215_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_val_1250_);
v___x_1252_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
lean_object* v___x_1253_; 
v___x_1253_ = lean_apply_2(v_toPure_1209_, lean_box(0), v___x_1252_);
return v___x_1253_;
}
}
else
{
lean_dec(v___x_1249_);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1230_, 2);
lean_dec_ref_known(v_pre_1229_, 2);
lean_dec_ref_known(v_pre_1228_, 2);
lean_dec_ref_known(v_kind_1227_, 2);
lean_dec_ref_known(v___x_1226_, 3);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
}
else
{
lean_dec(v_pre_1230_);
lean_dec_ref_known(v_pre_1229_, 2);
lean_dec_ref_known(v_pre_1228_, 2);
lean_dec_ref_known(v_kind_1227_, 2);
lean_dec_ref_known(v___x_1226_, 3);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
}
else
{
lean_dec_ref_known(v_pre_1228_, 2);
lean_dec(v_pre_1229_);
lean_dec_ref_known(v_kind_1227_, 2);
lean_dec_ref_known(v___x_1226_, 3);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
}
else
{
lean_dec_ref_known(v_kind_1227_, 2);
lean_dec(v_pre_1228_);
lean_dec_ref_known(v___x_1226_, 3);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
}
else
{
lean_dec(v_kind_1227_);
lean_dec_ref_known(v___x_1226_, 3);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
}
else
{
lean_dec(v___x_1226_);
lean_del_object(v___x_1215_);
goto v___jp_1217_;
}
v___jp_1217_:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1218_ = lean_obj_once(&l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1, &l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1_once, _init_l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1);
v___x_1219_ = lean_unsigned_to_nat(1u);
v___x_1220_ = l_Lean_Syntax_getArg(v_val_1213_, v___x_1219_);
v___x_1221_ = l_Lean_MessageData_ofSyntax(v___x_1220_);
v___x_1222_ = l_Lean_indentD(v___x_1221_);
v___x_1223_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1218_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
v___x_1224_ = l_Lean_throwErrorAt___redArg(v_inst_1205_, v_inst_1206_, v_val_1213_, v___x_1223_);
return v___x_1224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___boxed(lean_object* v_inst_1256_, lean_object* v_inst_1257_, lean_object* v_optDocComment_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l_Lean_Elab_expandOptDocComment_x3f___redArg(v_inst_1256_, v_inst_1257_, v_optDocComment_1258_);
lean_dec(v_optDocComment_1258_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f(lean_object* v_m_1260_, lean_object* v_inst_1261_, lean_object* v_inst_1262_, lean_object* v_optDocComment_1263_){
_start:
{
lean_object* v___x_1264_; 
v___x_1264_ = l_Lean_Elab_expandOptDocComment_x3f___redArg(v_inst_1261_, v_inst_1262_, v_optDocComment_1263_);
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___boxed(lean_object* v_m_1265_, lean_object* v_inst_1266_, lean_object* v_inst_1267_, lean_object* v_optDocComment_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lean_Elab_expandOptDocComment_x3f(v_m_1265_, v_inst_1266_, v_inst_1267_, v_optDocComment_1268_);
lean_dec(v_optDocComment_1268_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0(lean_object* v_stx_1270_, lean_object* v___y_1271_, uint8_t v_visibility_1272_, uint8_t v___y_1273_, uint8_t v___y_1274_, uint8_t v___y_1275_, lean_object* v_toPure_1276_, lean_object* v_unsafeStx_1277_, lean_object* v_attrs_1278_){
_start:
{
uint8_t v___y_1280_; uint8_t v___x_1283_; 
v___x_1283_ = l_Lean_Syntax_isNone(v_unsafeStx_1277_);
if (v___x_1283_ == 0)
{
uint8_t v___x_1284_; 
v___x_1284_ = 1;
v___y_1280_ = v___x_1284_;
goto v___jp_1279_;
}
else
{
uint8_t v___x_1285_; 
v___x_1285_ = 0;
v___y_1280_ = v___x_1285_;
goto v___jp_1279_;
}
v___jp_1279_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1281_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1281_, 0, v_stx_1270_);
lean_ctor_set(v___x_1281_, 1, v___y_1271_);
lean_ctor_set(v___x_1281_, 2, v_attrs_1278_);
lean_ctor_set_uint8(v___x_1281_, sizeof(void*)*3, v_visibility_1272_);
lean_ctor_set_uint8(v___x_1281_, sizeof(void*)*3 + 1, v___y_1273_);
lean_ctor_set_uint8(v___x_1281_, sizeof(void*)*3 + 2, v___y_1274_);
lean_ctor_set_uint8(v___x_1281_, sizeof(void*)*3 + 3, v___y_1275_);
lean_ctor_set_uint8(v___x_1281_, sizeof(void*)*3 + 4, v___y_1280_);
v___x_1282_ = lean_apply_2(v_toPure_1276_, lean_box(0), v___x_1281_);
return v___x_1282_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0___boxed(lean_object* v_stx_1286_, lean_object* v___y_1287_, lean_object* v_visibility_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v_toPure_1292_, lean_object* v_unsafeStx_1293_, lean_object* v_attrs_1294_){
_start:
{
uint8_t v_visibility_boxed_1295_; uint8_t v___y_414__boxed_1296_; uint8_t v___y_415__boxed_1297_; uint8_t v___y_416__boxed_1298_; lean_object* v_res_1299_; 
v_visibility_boxed_1295_ = lean_unbox(v_visibility_1288_);
v___y_414__boxed_1296_ = lean_unbox(v___y_1289_);
v___y_415__boxed_1297_ = lean_unbox(v___y_1290_);
v___y_416__boxed_1298_ = lean_unbox(v___y_1291_);
v_res_1299_ = l_Lean_Elab_elabModifiers___redArg___lam__0(v_stx_1286_, v___y_1287_, v_visibility_boxed_1295_, v___y_414__boxed_1296_, v___y_415__boxed_1297_, v___y_416__boxed_1298_, v_toPure_1292_, v_unsafeStx_1293_, v_attrs_1294_);
lean_dec(v_unsafeStx_1293_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__1(lean_object* v___f_1300_, lean_object* v_attrs_1301_){
_start:
{
lean_object* v___x_1302_; 
v___x_1302_ = lean_apply_1(v___f_1300_, v_attrs_1301_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3(lean_object* v_stx_1303_, lean_object* v___y_1304_, uint8_t v___y_1305_, uint8_t v___y_1306_, lean_object* v_toPure_1307_, lean_object* v_unsafeStx_1308_, lean_object* v_attrsStx_1309_, lean_object* v___x_1310_, lean_object* v_toBind_1311_, lean_object* v_inst_1312_, lean_object* v_inst_1313_, lean_object* v_inst_1314_, lean_object* v_inst_1315_, lean_object* v_inst_1316_, lean_object* v_inst_1317_, lean_object* v_inst_1318_, lean_object* v_inst_1319_, lean_object* v_inst_1320_, lean_object* v_inst_1321_, lean_object* v_inst_1322_, lean_object* v_inst_1323_, lean_object* v_protectedStx_1324_, uint8_t v_visibility_1325_){
_start:
{
uint8_t v___y_1327_; uint8_t v___x_1342_; 
v___x_1342_ = l_Lean_Syntax_isNone(v_protectedStx_1324_);
if (v___x_1342_ == 0)
{
uint8_t v___x_1343_; 
v___x_1343_ = 1;
v___y_1327_ = v___x_1343_;
goto v___jp_1326_;
}
else
{
uint8_t v___x_1344_; 
v___x_1344_ = 0;
v___y_1327_ = v___x_1344_;
goto v___jp_1326_;
}
v___jp_1326_:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___f_1332_; lean_object* v___x_1333_; 
v___x_1328_ = lean_box(v_visibility_1325_);
v___x_1329_ = lean_box(v___y_1327_);
v___x_1330_ = lean_box(v___y_1305_);
v___x_1331_ = lean_box(v___y_1306_);
lean_inc(v_toPure_1307_);
v___f_1332_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_1332_, 0, v_stx_1303_);
lean_closure_set(v___f_1332_, 1, v___y_1304_);
lean_closure_set(v___f_1332_, 2, v___x_1328_);
lean_closure_set(v___f_1332_, 3, v___x_1329_);
lean_closure_set(v___f_1332_, 4, v___x_1330_);
lean_closure_set(v___f_1332_, 5, v___x_1331_);
lean_closure_set(v___f_1332_, 6, v_toPure_1307_);
lean_closure_set(v___f_1332_, 7, v_unsafeStx_1308_);
v___x_1333_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_1309_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v___f_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
lean_dec(v_inst_1323_);
lean_dec(v_inst_1322_);
lean_dec_ref(v_inst_1321_);
lean_dec(v_inst_1320_);
lean_dec_ref(v_inst_1319_);
lean_dec_ref(v_inst_1318_);
lean_dec_ref(v_inst_1317_);
lean_dec_ref(v_inst_1316_);
lean_dec_ref(v_inst_1315_);
lean_dec_ref(v_inst_1314_);
lean_dec_ref(v_inst_1313_);
lean_dec_ref(v_inst_1312_);
v___f_1334_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1334_, 0, v___f_1332_);
v___x_1335_ = lean_mk_empty_array_with_capacity(v___x_1310_);
v___x_1336_ = lean_apply_2(v_toPure_1307_, lean_box(0), v___x_1335_);
v___x_1337_ = lean_apply_4(v_toBind_1311_, lean_box(0), lean_box(0), v___x_1336_, v___f_1334_);
return v___x_1337_;
}
else
{
lean_object* v_val_1338_; lean_object* v___f_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
lean_dec(v_toPure_1307_);
v_val_1338_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_val_1338_);
lean_dec_ref_known(v___x_1333_, 1);
v___f_1339_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1339_, 0, v___f_1332_);
v___x_1340_ = l_Lean_Elab_elabDeclAttrs___redArg(v_inst_1312_, v_inst_1313_, v_inst_1314_, v_inst_1315_, v_inst_1316_, v_inst_1317_, v_inst_1318_, v_inst_1319_, v_inst_1320_, v_inst_1321_, v_inst_1322_, v_inst_1323_, v_val_1338_);
lean_dec(v_val_1338_);
v___x_1341_ = lean_apply_4(v_toBind_1311_, lean_box(0), lean_box(0), v___x_1340_, v___f_1339_);
return v___x_1341_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_stx_1345_ = _args[0];
lean_object* v___y_1346_ = _args[1];
lean_object* v___y_1347_ = _args[2];
lean_object* v___y_1348_ = _args[3];
lean_object* v_toPure_1349_ = _args[4];
lean_object* v_unsafeStx_1350_ = _args[5];
lean_object* v_attrsStx_1351_ = _args[6];
lean_object* v___x_1352_ = _args[7];
lean_object* v_toBind_1353_ = _args[8];
lean_object* v_inst_1354_ = _args[9];
lean_object* v_inst_1355_ = _args[10];
lean_object* v_inst_1356_ = _args[11];
lean_object* v_inst_1357_ = _args[12];
lean_object* v_inst_1358_ = _args[13];
lean_object* v_inst_1359_ = _args[14];
lean_object* v_inst_1360_ = _args[15];
lean_object* v_inst_1361_ = _args[16];
lean_object* v_inst_1362_ = _args[17];
lean_object* v_inst_1363_ = _args[18];
lean_object* v_inst_1364_ = _args[19];
lean_object* v_inst_1365_ = _args[20];
lean_object* v_protectedStx_1366_ = _args[21];
lean_object* v_visibility_1367_ = _args[22];
_start:
{
uint8_t v___y_444__boxed_1368_; uint8_t v___y_445__boxed_1369_; uint8_t v_visibility_boxed_1370_; lean_object* v_res_1371_; 
v___y_444__boxed_1368_ = lean_unbox(v___y_1347_);
v___y_445__boxed_1369_ = lean_unbox(v___y_1348_);
v_visibility_boxed_1370_ = lean_unbox(v_visibility_1367_);
v_res_1371_ = l_Lean_Elab_elabModifiers___redArg___lam__3(v_stx_1345_, v___y_1346_, v___y_444__boxed_1368_, v___y_445__boxed_1369_, v_toPure_1349_, v_unsafeStx_1350_, v_attrsStx_1351_, v___x_1352_, v_toBind_1353_, v_inst_1354_, v_inst_1355_, v_inst_1356_, v_inst_1357_, v_inst_1358_, v_inst_1359_, v_inst_1360_, v_inst_1361_, v_inst_1362_, v_inst_1363_, v_inst_1364_, v_inst_1365_, v_protectedStx_1366_, v_visibility_boxed_1370_);
lean_dec(v_protectedStx_1366_);
lean_dec(v___x_1352_);
lean_dec(v_attrsStx_1351_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg(lean_object* v_inst_1382_, lean_object* v_inst_1383_, lean_object* v_inst_1384_, lean_object* v_inst_1385_, lean_object* v_inst_1386_, lean_object* v_inst_1387_, lean_object* v_inst_1388_, lean_object* v_inst_1389_, lean_object* v_inst_1390_, lean_object* v_inst_1391_, lean_object* v_inst_1392_, lean_object* v_inst_1393_, lean_object* v_stx_1394_, uint8_t v_isExample_1395_){
_start:
{
lean_object* v_toApplicative_1396_; lean_object* v_toBind_1397_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v_toPure_1403_; lean_object* v___x_1404_; lean_object* v_docCommentStx_1405_; lean_object* v___x_1406_; lean_object* v_attrsStx_1407_; lean_object* v___x_1408_; lean_object* v_visibilityStx_1409_; lean_object* v___x_1410_; lean_object* v_protectedStx_1411_; uint8_t v___y_1413_; uint8_t v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1416_; uint8_t v___y_1431_; lean_object* v___y_1432_; uint8_t v___y_1433_; uint8_t v___y_1445_; lean_object* v___x_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; 
v_toApplicative_1396_ = lean_ctor_get(v_inst_1382_, 0);
v_toBind_1397_ = lean_ctor_get(v_inst_1382_, 1);
lean_inc(v_toBind_1397_);
v_toPure_1403_ = lean_ctor_get(v_toApplicative_1396_, 1);
v___x_1404_ = lean_unsigned_to_nat(0u);
v_docCommentStx_1405_ = l_Lean_Syntax_getArg(v_stx_1394_, v___x_1404_);
v___x_1406_ = lean_unsigned_to_nat(1u);
v_attrsStx_1407_ = l_Lean_Syntax_getArg(v_stx_1394_, v___x_1406_);
v___x_1408_ = lean_unsigned_to_nat(2u);
v_visibilityStx_1409_ = l_Lean_Syntax_getArg(v_stx_1394_, v___x_1408_);
v___x_1410_ = lean_unsigned_to_nat(3u);
v_protectedStx_1411_ = l_Lean_Syntax_getArg(v_stx_1394_, v___x_1410_);
v___x_1458_ = lean_unsigned_to_nat(4u);
v___x_1459_ = l_Lean_Syntax_getArg(v_stx_1394_, v___x_1458_);
v___x_1460_ = l_Lean_Syntax_isNone(v___x_1459_);
if (v___x_1460_ == 0)
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; uint8_t v___x_1464_; 
v___x_1461_ = l_Lean_Syntax_getArg(v___x_1459_, v___x_1404_);
lean_dec(v___x_1459_);
v___x_1462_ = l_Lean_Syntax_getKind(v___x_1461_);
v___x_1463_ = ((lean_object*)(l_Lean_Elab_elabModifiers___redArg___closed__1));
v___x_1464_ = lean_name_eq(v___x_1462_, v___x_1463_);
lean_dec(v___x_1462_);
if (v___x_1464_ == 0)
{
uint8_t v___x_1465_; 
v___x_1465_ = 2;
v___y_1445_ = v___x_1465_;
goto v___jp_1444_;
}
else
{
uint8_t v___x_1466_; 
v___x_1466_ = 1;
v___y_1445_ = v___x_1466_;
goto v___jp_1444_;
}
}
else
{
uint8_t v___x_1467_; 
lean_dec(v___x_1459_);
v___x_1467_ = 0;
v___y_1445_ = v___x_1467_;
goto v___jp_1444_;
}
v___jp_1398_:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1401_ = l_Lean_Elab_elabVisibility___redArg(v_inst_1382_, v_inst_1385_, v_inst_1383_, v_inst_1390_, v_inst_1392_, v_inst_1391_, v___y_1400_, v_isExample_1395_);
v___x_1402_ = lean_apply_4(v_toBind_1397_, lean_box(0), lean_box(0), v___x_1401_, v___y_1399_);
return v___x_1402_;
}
v___jp_1412_:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___f_1419_; lean_object* v___x_1420_; 
v___x_1417_ = lean_box(v___y_1414_);
v___x_1418_ = lean_box(v___y_1413_);
lean_inc_ref(v_inst_1392_);
lean_inc(v_inst_1391_);
lean_inc_ref(v_inst_1390_);
lean_inc_ref(v_inst_1385_);
lean_inc_ref(v_inst_1383_);
lean_inc_ref(v_inst_1382_);
lean_inc(v_toBind_1397_);
lean_inc(v_toPure_1403_);
v___f_1419_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__3___boxed), 23, 22);
lean_closure_set(v___f_1419_, 0, v_stx_1394_);
lean_closure_set(v___f_1419_, 1, v___y_1416_);
lean_closure_set(v___f_1419_, 2, v___x_1417_);
lean_closure_set(v___f_1419_, 3, v___x_1418_);
lean_closure_set(v___f_1419_, 4, v_toPure_1403_);
lean_closure_set(v___f_1419_, 5, v___y_1415_);
lean_closure_set(v___f_1419_, 6, v_attrsStx_1407_);
lean_closure_set(v___f_1419_, 7, v___x_1404_);
lean_closure_set(v___f_1419_, 8, v_toBind_1397_);
lean_closure_set(v___f_1419_, 9, v_inst_1382_);
lean_closure_set(v___f_1419_, 10, v_inst_1383_);
lean_closure_set(v___f_1419_, 11, v_inst_1384_);
lean_closure_set(v___f_1419_, 12, v_inst_1385_);
lean_closure_set(v___f_1419_, 13, v_inst_1387_);
lean_closure_set(v___f_1419_, 14, v_inst_1388_);
lean_closure_set(v___f_1419_, 15, v_inst_1389_);
lean_closure_set(v___f_1419_, 16, v_inst_1390_);
lean_closure_set(v___f_1419_, 17, v_inst_1391_);
lean_closure_set(v___f_1419_, 18, v_inst_1392_);
lean_closure_set(v___f_1419_, 19, v_inst_1393_);
lean_closure_set(v___f_1419_, 20, v_inst_1386_);
lean_closure_set(v___f_1419_, 21, v_protectedStx_1411_);
v___x_1420_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_1409_);
lean_dec(v_visibilityStx_1409_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v___x_1421_; 
v___x_1421_ = lean_box(0);
v___y_1399_ = v___f_1419_;
v___y_1400_ = v___x_1421_;
goto v___jp_1398_;
}
else
{
lean_object* v_val_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
v_val_1422_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1420_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_val_1422_);
lean_dec(v___x_1420_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_val_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
v___y_1399_ = v___f_1419_;
v___y_1400_ = v___x_1427_;
goto v___jp_1398_;
}
}
}
}
v___jp_1430_:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_1405_);
lean_dec(v_docCommentStx_1405_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v___x_1435_; 
v___x_1435_ = lean_box(0);
v___y_1413_ = v___y_1433_;
v___y_1414_ = v___y_1431_;
v___y_1415_ = v___y_1432_;
v___y_1416_ = v___x_1435_;
goto v___jp_1412_;
}
else
{
lean_object* v_val_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
v_val_1436_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1438_ = v___x_1434_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_val_1436_);
lean_dec(v___x_1434_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_val_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
v___y_1413_ = v___y_1433_;
v___y_1414_ = v___y_1431_;
v___y_1415_ = v___y_1432_;
v___y_1416_ = v___x_1441_;
goto v___jp_1412_;
}
}
}
}
v___jp_1444_:
{
lean_object* v___x_1446_; lean_object* v_unsafeStx_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; uint8_t v___x_1450_; 
v___x_1446_ = lean_unsigned_to_nat(5u);
v_unsafeStx_1447_ = l_Lean_Syntax_getArg(v_stx_1394_, v___x_1446_);
v___x_1448_ = lean_unsigned_to_nat(6u);
v___x_1449_ = l_Lean_Syntax_getArg(v_stx_1394_, v___x_1448_);
v___x_1450_ = l_Lean_Syntax_isNone(v___x_1449_);
if (v___x_1450_ == 0)
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; uint8_t v___x_1454_; 
v___x_1451_ = l_Lean_Syntax_getArg(v___x_1449_, v___x_1404_);
lean_dec(v___x_1449_);
v___x_1452_ = l_Lean_Syntax_getKind(v___x_1451_);
v___x_1453_ = ((lean_object*)(l_Lean_Elab_elabModifiers___redArg___closed__0));
v___x_1454_ = lean_name_eq(v___x_1452_, v___x_1453_);
lean_dec(v___x_1452_);
if (v___x_1454_ == 0)
{
uint8_t v___x_1455_; 
v___x_1455_ = 1;
v___y_1431_ = v___y_1445_;
v___y_1432_ = v_unsafeStx_1447_;
v___y_1433_ = v___x_1455_;
goto v___jp_1430_;
}
else
{
uint8_t v___x_1456_; 
v___x_1456_ = 0;
v___y_1431_ = v___y_1445_;
v___y_1432_ = v_unsafeStx_1447_;
v___y_1433_ = v___x_1456_;
goto v___jp_1430_;
}
}
else
{
uint8_t v___x_1457_; 
lean_dec(v___x_1449_);
v___x_1457_ = 2;
v___y_1431_ = v___y_1445_;
v___y_1432_ = v_unsafeStx_1447_;
v___y_1433_ = v___x_1457_;
goto v___jp_1430_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___boxed(lean_object* v_inst_1468_, lean_object* v_inst_1469_, lean_object* v_inst_1470_, lean_object* v_inst_1471_, lean_object* v_inst_1472_, lean_object* v_inst_1473_, lean_object* v_inst_1474_, lean_object* v_inst_1475_, lean_object* v_inst_1476_, lean_object* v_inst_1477_, lean_object* v_inst_1478_, lean_object* v_inst_1479_, lean_object* v_stx_1480_, lean_object* v_isExample_1481_){
_start:
{
uint8_t v_isExample_boxed_1482_; lean_object* v_res_1483_; 
v_isExample_boxed_1482_ = lean_unbox(v_isExample_1481_);
v_res_1483_ = l_Lean_Elab_elabModifiers___redArg(v_inst_1468_, v_inst_1469_, v_inst_1470_, v_inst_1471_, v_inst_1472_, v_inst_1473_, v_inst_1474_, v_inst_1475_, v_inst_1476_, v_inst_1477_, v_inst_1478_, v_inst_1479_, v_stx_1480_, v_isExample_boxed_1482_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers(lean_object* v_m_1484_, lean_object* v_inst_1485_, lean_object* v_inst_1486_, lean_object* v_inst_1487_, lean_object* v_inst_1488_, lean_object* v_inst_1489_, lean_object* v_inst_1490_, lean_object* v_inst_1491_, lean_object* v_inst_1492_, lean_object* v_inst_1493_, lean_object* v_inst_1494_, lean_object* v_inst_1495_, lean_object* v_inst_1496_, lean_object* v_stx_1497_, uint8_t v_isExample_1498_){
_start:
{
lean_object* v___x_1499_; 
v___x_1499_ = l_Lean_Elab_elabModifiers___redArg(v_inst_1485_, v_inst_1486_, v_inst_1487_, v_inst_1488_, v_inst_1489_, v_inst_1490_, v_inst_1491_, v_inst_1492_, v_inst_1493_, v_inst_1494_, v_inst_1495_, v_inst_1496_, v_stx_1497_, v_isExample_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___boxed(lean_object* v_m_1500_, lean_object* v_inst_1501_, lean_object* v_inst_1502_, lean_object* v_inst_1503_, lean_object* v_inst_1504_, lean_object* v_inst_1505_, lean_object* v_inst_1506_, lean_object* v_inst_1507_, lean_object* v_inst_1508_, lean_object* v_inst_1509_, lean_object* v_inst_1510_, lean_object* v_inst_1511_, lean_object* v_inst_1512_, lean_object* v_stx_1513_, lean_object* v_isExample_1514_){
_start:
{
uint8_t v_isExample_boxed_1515_; lean_object* v_res_1516_; 
v_isExample_boxed_1515_ = lean_unbox(v_isExample_1514_);
v_res_1516_ = l_Lean_Elab_elabModifiers(v_m_1500_, v_inst_1501_, v_inst_1502_, v_inst_1503_, v_inst_1504_, v_inst_1505_, v_inst_1506_, v_inst_1507_, v_inst_1508_, v_inst_1509_, v_inst_1510_, v_inst_1511_, v_inst_1512_, v_stx_1513_, v_isExample_boxed_1515_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__0(lean_object* v_toPure_1517_, lean_object* v_declName_1518_, lean_object* v_____r_1519_){
_start:
{
lean_object* v___x_1520_; 
v___x_1520_ = lean_apply_2(v_toPure_1517_, lean_box(0), v_declName_1518_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__1(lean_object* v_declName_1521_, lean_object* v_env_1522_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l_Lean_addProtected(v_env_1522_, v_declName_1521_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2(lean_object* v_modifiers_1524_, lean_object* v_toPure_1525_, lean_object* v_declName_1526_, lean_object* v_modifyEnv_1527_, lean_object* v___f_1528_, lean_object* v_toBind_1529_, lean_object* v___f_1530_, lean_object* v_____r_1531_){
_start:
{
uint8_t v_isProtected_1532_; 
v_isProtected_1532_ = lean_ctor_get_uint8(v_modifiers_1524_, sizeof(void*)*3 + 1);
if (v_isProtected_1532_ == 0)
{
lean_object* v___x_1533_; 
lean_dec(v___f_1530_);
lean_dec(v_toBind_1529_);
lean_dec_ref(v___f_1528_);
lean_dec(v_modifyEnv_1527_);
v___x_1533_ = lean_apply_2(v_toPure_1525_, lean_box(0), v_declName_1526_);
return v___x_1533_;
}
else
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
lean_dec(v_declName_1526_);
lean_dec(v_toPure_1525_);
v___x_1534_ = lean_apply_1(v_modifyEnv_1527_, v___f_1528_);
v___x_1535_ = lean_apply_4(v_toBind_1529_, lean_box(0), lean_box(0), v___x_1534_, v___f_1530_);
return v___x_1535_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2___boxed(lean_object* v_modifiers_1536_, lean_object* v_toPure_1537_, lean_object* v_declName_1538_, lean_object* v_modifyEnv_1539_, lean_object* v___f_1540_, lean_object* v_toBind_1541_, lean_object* v___f_1542_, lean_object* v_____r_1543_){
_start:
{
lean_object* v_res_1544_; 
v_res_1544_ = l_Lean_Elab_applyVisibility___redArg___lam__2(v_modifiers_1536_, v_toPure_1537_, v_declName_1538_, v_modifyEnv_1539_, v___f_1540_, v_toBind_1541_, v___f_1542_, v_____r_1543_);
lean_dec_ref(v_modifiers_1536_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__3(lean_object* v_toPure_1545_, lean_object* v_modifiers_1546_, lean_object* v_modifyEnv_1547_, lean_object* v_toBind_1548_, lean_object* v_inst_1549_, lean_object* v_inst_1550_, lean_object* v_inst_1551_, lean_object* v_inst_1552_, lean_object* v_inst_1553_, lean_object* v_____r_1554_, lean_object* v_declName_1555_){
_start:
{
lean_object* v___f_1556_; lean_object* v___f_1557_; lean_object* v___f_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
lean_inc_n(v_declName_1555_, 3);
lean_inc(v_toPure_1545_);
v___f_1556_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1556_, 0, v_toPure_1545_);
lean_closure_set(v___f_1556_, 1, v_declName_1555_);
v___f_1557_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1557_, 0, v_declName_1555_);
lean_inc(v_toBind_1548_);
v___f_1558_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_1558_, 0, v_modifiers_1546_);
lean_closure_set(v___f_1558_, 1, v_toPure_1545_);
lean_closure_set(v___f_1558_, 2, v_declName_1555_);
lean_closure_set(v___f_1558_, 3, v_modifyEnv_1547_);
lean_closure_set(v___f_1558_, 4, v___f_1557_);
lean_closure_set(v___f_1558_, 5, v_toBind_1548_);
lean_closure_set(v___f_1558_, 6, v___f_1556_);
v___x_1559_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg(v_inst_1549_, v_inst_1550_, v_inst_1551_, v_inst_1552_, v_inst_1553_, v_declName_1555_);
v___x_1560_ = lean_apply_4(v_toBind_1548_, lean_box(0), lean_box(0), v___x_1559_, v___f_1558_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4(lean_object* v_declName_1561_, lean_object* v___f_1562_, lean_object* v_____do__lift_1563_){
_start:
{
lean_object* v_declName_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v_declName_1564_ = l_Lean_mkPrivateName(v_____do__lift_1563_, v_declName_1561_);
v___x_1565_ = lean_box(0);
v___x_1566_ = lean_apply_2(v___f_1562_, v___x_1565_, v_declName_1564_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4___boxed(lean_object* v_declName_1567_, lean_object* v___f_1568_, lean_object* v_____do__lift_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l_Lean_Elab_applyVisibility___redArg___lam__4(v_declName_1567_, v___f_1568_, v_____do__lift_1569_);
lean_dec_ref(v_____do__lift_1569_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5(lean_object* v_modifiers_1571_, lean_object* v_toBind_1572_, lean_object* v_getEnv_1573_, lean_object* v___f_1574_, lean_object* v___f_1575_, lean_object* v_declName_1576_, lean_object* v_____do__lift_1577_){
_start:
{
uint8_t v_visibility_1578_; uint8_t v___x_1579_; 
v_visibility_1578_ = lean_ctor_get_uint8(v_modifiers_1571_, sizeof(void*)*3);
v___x_1579_ = l_Lean_Elab_Visibility_isInferredPublic(v_____do__lift_1577_, v_visibility_1578_);
if (v___x_1579_ == 0)
{
lean_object* v___x_1580_; 
lean_dec(v_declName_1576_);
lean_dec(v___f_1575_);
v___x_1580_ = lean_apply_4(v_toBind_1572_, lean_box(0), lean_box(0), v_getEnv_1573_, v___f_1574_);
return v___x_1580_;
}
else
{
lean_object* v___x_1581_; lean_object* v___x_1582_; 
lean_dec(v___f_1574_);
lean_dec(v_getEnv_1573_);
lean_dec(v_toBind_1572_);
v___x_1581_ = lean_box(0);
v___x_1582_ = lean_apply_2(v___f_1575_, v___x_1581_, v_declName_1576_);
return v___x_1582_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5___boxed(lean_object* v_modifiers_1583_, lean_object* v_toBind_1584_, lean_object* v_getEnv_1585_, lean_object* v___f_1586_, lean_object* v___f_1587_, lean_object* v_declName_1588_, lean_object* v_____do__lift_1589_){
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = l_Lean_Elab_applyVisibility___redArg___lam__5(v_modifiers_1583_, v_toBind_1584_, v_getEnv_1585_, v___f_1586_, v___f_1587_, v_declName_1588_, v_____do__lift_1589_);
lean_dec_ref(v_____do__lift_1589_);
lean_dec_ref(v_modifiers_1583_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg(lean_object* v_inst_1591_, lean_object* v_inst_1592_, lean_object* v_inst_1593_, lean_object* v_inst_1594_, lean_object* v_inst_1595_, lean_object* v_modifiers_1596_, lean_object* v_declName_1597_){
_start:
{
lean_object* v_toApplicative_1598_; lean_object* v_toBind_1599_; lean_object* v_getEnv_1600_; lean_object* v_modifyEnv_1601_; lean_object* v_toPure_1602_; lean_object* v___f_1603_; lean_object* v___f_1604_; lean_object* v___f_1605_; lean_object* v___x_1606_; 
v_toApplicative_1598_ = lean_ctor_get(v_inst_1591_, 0);
v_toBind_1599_ = lean_ctor_get(v_inst_1591_, 1);
lean_inc_n(v_toBind_1599_, 3);
v_getEnv_1600_ = lean_ctor_get(v_inst_1592_, 0);
lean_inc_n(v_getEnv_1600_, 2);
v_modifyEnv_1601_ = lean_ctor_get(v_inst_1592_, 1);
lean_inc(v_modifyEnv_1601_);
v_toPure_1602_ = lean_ctor_get(v_toApplicative_1598_, 1);
lean_inc(v_toPure_1602_);
lean_inc_ref(v_modifiers_1596_);
v___f_1603_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__3), 11, 9);
lean_closure_set(v___f_1603_, 0, v_toPure_1602_);
lean_closure_set(v___f_1603_, 1, v_modifiers_1596_);
lean_closure_set(v___f_1603_, 2, v_modifyEnv_1601_);
lean_closure_set(v___f_1603_, 3, v_toBind_1599_);
lean_closure_set(v___f_1603_, 4, v_inst_1591_);
lean_closure_set(v___f_1603_, 5, v_inst_1592_);
lean_closure_set(v___f_1603_, 6, v_inst_1593_);
lean_closure_set(v___f_1603_, 7, v_inst_1594_);
lean_closure_set(v___f_1603_, 8, v_inst_1595_);
lean_inc_ref(v___f_1603_);
lean_inc(v_declName_1597_);
v___f_1604_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__4___boxed), 3, 2);
lean_closure_set(v___f_1604_, 0, v_declName_1597_);
lean_closure_set(v___f_1604_, 1, v___f_1603_);
v___f_1605_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1605_, 0, v_modifiers_1596_);
lean_closure_set(v___f_1605_, 1, v_toBind_1599_);
lean_closure_set(v___f_1605_, 2, v_getEnv_1600_);
lean_closure_set(v___f_1605_, 3, v___f_1604_);
lean_closure_set(v___f_1605_, 4, v___f_1603_);
lean_closure_set(v___f_1605_, 5, v_declName_1597_);
v___x_1606_ = lean_apply_4(v_toBind_1599_, lean_box(0), lean_box(0), v_getEnv_1600_, v___f_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility(lean_object* v_m_1607_, lean_object* v_inst_1608_, lean_object* v_inst_1609_, lean_object* v_inst_1610_, lean_object* v_inst_1611_, lean_object* v_inst_1612_, lean_object* v_modifiers_1613_, lean_object* v_declName_1614_){
_start:
{
lean_object* v___x_1615_; 
v___x_1615_ = l_Lean_Elab_applyVisibility___redArg(v_inst_1608_, v_inst_1609_, v_inst_1610_, v_inst_1611_, v_inst_1612_, v_modifiers_1613_, v_declName_1614_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__0(lean_object* v_toPure_1616_, lean_object* v_____s_1617_){
_start:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1618_ = lean_box(0);
v___x_1619_ = lean_apply_2(v_toPure_1616_, lean_box(0), v___x_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__1(lean_object* v___x_1620_, lean_object* v_toPure_1621_, lean_object* v_r_1622_){
_start:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1620_);
v___x_1624_ = lean_apply_2(v_toPure_1621_, lean_box(0), v___x_1623_);
return v___x_1624_;
}
}
static lean_object* _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1626_ = ((lean_object*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0));
v___x_1627_ = l_Lean_stringToMessageData(v___x_1626_);
return v___x_1627_;
}
}
static lean_object* _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1629_ = ((lean_object*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2));
v___x_1630_ = l_Lean_stringToMessageData(v___x_1629_);
return v___x_1630_;
}
}
static lean_object* _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5(void){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1632_ = ((lean_object*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4));
v___x_1633_ = l_Lean_stringToMessageData(v___x_1632_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2(lean_object* v_pre_1634_, lean_object* v_declName_1635_, lean_object* v___x_1636_, lean_object* v_toPure_1637_, lean_object* v_inst_1638_, lean_object* v_inst_1639_, lean_object* v_toBind_1640_, lean_object* v___f_1641_, lean_object* v_a_1642_, lean_object* v_x_1643_, lean_object* v___y_1644_){
_start:
{
lean_object* v___x_1645_; uint8_t v___x_1646_; 
lean_inc(v_a_1642_);
lean_inc(v_pre_1634_);
v___x_1645_ = l_Lean_Name_append(v_pre_1634_, v_a_1642_);
v___x_1646_ = lean_name_eq(v___x_1645_, v_declName_1635_);
lean_dec(v___x_1645_);
if (v___x_1646_ == 0)
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
lean_dec(v_a_1642_);
lean_dec(v___f_1641_);
lean_dec(v_toBind_1640_);
lean_dec_ref(v_inst_1639_);
lean_dec_ref(v_inst_1638_);
lean_dec(v_declName_1635_);
lean_dec(v_pre_1634_);
v___x_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1636_);
v___x_1648_ = lean_apply_2(v_toPure_1637_, lean_box(0), v___x_1647_);
return v___x_1648_;
}
else
{
lean_object* v___x_1649_; uint8_t v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
lean_dec(v_toPure_1637_);
v___x_1649_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_1650_ = 0;
v___x_1651_ = l_Lean_MessageData_ofConstName(v_declName_1635_, v___x_1650_);
v___x_1652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1649_);
lean_ctor_set(v___x_1652_, 1, v___x_1651_);
v___x_1653_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3);
v___x_1654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1652_);
lean_ctor_set(v___x_1654_, 1, v___x_1653_);
v___x_1655_ = l_Lean_MessageData_ofName(v_pre_1634_);
v___x_1656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
v___x_1657_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5);
v___x_1658_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1656_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
v___x_1659_ = l_Lean_MessageData_ofName(v_a_1642_);
v___x_1660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1658_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
v___x_1661_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_1662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1660_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = l_Lean_throwError___redArg(v_inst_1638_, v_inst_1639_, v___x_1662_);
v___x_1664_ = lean_apply_4(v_toBind_1640_, lean_box(0), lean_box(0), v___x_1663_, v___f_1641_);
return v___x_1664_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3(lean_object* v_pre_1665_, uint8_t v___x_1666_, lean_object* v_toPure_1667_, lean_object* v_declName_1668_, lean_object* v_inst_1669_, lean_object* v_inst_1670_, lean_object* v_toBind_1671_, lean_object* v___f_1672_, lean_object* v_____do__lift_1673_){
_start:
{
lean_object* v_fieldNames_1674_; lean_object* v___x_1675_; lean_object* v___f_1676_; lean_object* v___f_1677_; size_t v_sz_1678_; size_t v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
lean_inc(v_pre_1665_);
v_fieldNames_1674_ = l_Lean_getStructureFieldsFlattened(v_____do__lift_1673_, v_pre_1665_, v___x_1666_);
v___x_1675_ = lean_box(0);
lean_inc(v_toPure_1667_);
v___f_1676_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1676_, 0, v___x_1675_);
lean_closure_set(v___f_1676_, 1, v_toPure_1667_);
lean_inc(v_toBind_1671_);
lean_inc_ref(v_inst_1669_);
v___f_1677_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2), 11, 8);
lean_closure_set(v___f_1677_, 0, v_pre_1665_);
lean_closure_set(v___f_1677_, 1, v_declName_1668_);
lean_closure_set(v___f_1677_, 2, v___x_1675_);
lean_closure_set(v___f_1677_, 3, v_toPure_1667_);
lean_closure_set(v___f_1677_, 4, v_inst_1669_);
lean_closure_set(v___f_1677_, 5, v_inst_1670_);
lean_closure_set(v___f_1677_, 6, v_toBind_1671_);
lean_closure_set(v___f_1677_, 7, v___f_1676_);
v_sz_1678_ = lean_array_size(v_fieldNames_1674_);
v___x_1679_ = ((size_t)0ULL);
v___x_1680_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1669_, v_fieldNames_1674_, v___f_1677_, v_sz_1678_, v___x_1679_, v___x_1675_);
v___x_1681_ = lean_apply_4(v_toBind_1671_, lean_box(0), lean_box(0), v___x_1680_, v___f_1672_);
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3___boxed(lean_object* v_pre_1682_, lean_object* v___x_1683_, lean_object* v_toPure_1684_, lean_object* v_declName_1685_, lean_object* v_inst_1686_, lean_object* v_inst_1687_, lean_object* v_toBind_1688_, lean_object* v___f_1689_, lean_object* v_____do__lift_1690_){
_start:
{
uint8_t v___x_579__boxed_1691_; lean_object* v_res_1692_; 
v___x_579__boxed_1691_ = lean_unbox(v___x_1683_);
v_res_1692_ = l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3(v_pre_1682_, v___x_579__boxed_1691_, v_toPure_1684_, v_declName_1685_, v_inst_1686_, v_inst_1687_, v_toBind_1688_, v___f_1689_, v_____do__lift_1690_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__4(lean_object* v_pre_1693_, lean_object* v_toPure_1694_, lean_object* v_declName_1695_, lean_object* v_inst_1696_, lean_object* v_inst_1697_, lean_object* v_toBind_1698_, lean_object* v___f_1699_, lean_object* v_getEnv_1700_, lean_object* v_____do__lift_1701_){
_start:
{
uint8_t v___x_1702_; 
lean_inc(v_pre_1693_);
v___x_1702_ = l_Lean_isStructure(v_____do__lift_1701_, v_pre_1693_);
if (v___x_1702_ == 0)
{
lean_object* v___x_1703_; lean_object* v___x_1704_; 
lean_dec(v_getEnv_1700_);
lean_dec(v___f_1699_);
lean_dec(v_toBind_1698_);
lean_dec_ref(v_inst_1697_);
lean_dec_ref(v_inst_1696_);
lean_dec(v_declName_1695_);
lean_dec(v_pre_1693_);
v___x_1703_ = lean_box(0);
v___x_1704_ = lean_apply_2(v_toPure_1694_, lean_box(0), v___x_1703_);
return v___x_1704_;
}
else
{
lean_object* v___x_1705_; lean_object* v___f_1706_; lean_object* v___x_1707_; 
v___x_1705_ = lean_box(v___x_1702_);
lean_inc(v_toBind_1698_);
v___f_1706_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_1706_, 0, v_pre_1693_);
lean_closure_set(v___f_1706_, 1, v___x_1705_);
lean_closure_set(v___f_1706_, 2, v_toPure_1694_);
lean_closure_set(v___f_1706_, 3, v_declName_1695_);
lean_closure_set(v___f_1706_, 4, v_inst_1696_);
lean_closure_set(v___f_1706_, 5, v_inst_1697_);
lean_closure_set(v___f_1706_, 6, v_toBind_1698_);
lean_closure_set(v___f_1706_, 7, v___f_1699_);
v___x_1707_ = lean_apply_4(v_toBind_1698_, lean_box(0), lean_box(0), v_getEnv_1700_, v___f_1706_);
return v___x_1707_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg(lean_object* v_inst_1708_, lean_object* v_inst_1709_, lean_object* v_inst_1710_, lean_object* v_declName_1711_){
_start:
{
if (lean_obj_tag(v_declName_1711_) == 1)
{
lean_object* v_toApplicative_1712_; lean_object* v_toBind_1713_; lean_object* v_toPure_1714_; lean_object* v_pre_1715_; lean_object* v_getEnv_1716_; lean_object* v___f_1717_; lean_object* v___f_1718_; lean_object* v___x_1719_; 
v_toApplicative_1712_ = lean_ctor_get(v_inst_1708_, 0);
v_toBind_1713_ = lean_ctor_get(v_inst_1708_, 1);
lean_inc_n(v_toBind_1713_, 2);
v_toPure_1714_ = lean_ctor_get(v_toApplicative_1712_, 1);
lean_inc_n(v_toPure_1714_, 2);
v_pre_1715_ = lean_ctor_get(v_declName_1711_, 0);
lean_inc(v_pre_1715_);
v_getEnv_1716_ = lean_ctor_get(v_inst_1709_, 0);
lean_inc_n(v_getEnv_1716_, 2);
lean_dec_ref(v_inst_1709_);
v___f_1717_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1717_, 0, v_toPure_1714_);
v___f_1718_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__4), 9, 8);
lean_closure_set(v___f_1718_, 0, v_pre_1715_);
lean_closure_set(v___f_1718_, 1, v_toPure_1714_);
lean_closure_set(v___f_1718_, 2, v_declName_1711_);
lean_closure_set(v___f_1718_, 3, v_inst_1708_);
lean_closure_set(v___f_1718_, 4, v_inst_1710_);
lean_closure_set(v___f_1718_, 5, v_toBind_1713_);
lean_closure_set(v___f_1718_, 6, v___f_1717_);
lean_closure_set(v___f_1718_, 7, v_getEnv_1716_);
v___x_1719_ = lean_apply_4(v_toBind_1713_, lean_box(0), lean_box(0), v_getEnv_1716_, v___f_1718_);
return v___x_1719_;
}
else
{
lean_object* v_toApplicative_1720_; lean_object* v_toPure_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v_toApplicative_1720_ = lean_ctor_get(v_inst_1708_, 0);
lean_inc_ref(v_toApplicative_1720_);
lean_dec(v_declName_1711_);
lean_dec_ref(v_inst_1710_);
lean_dec_ref(v_inst_1709_);
lean_dec_ref(v_inst_1708_);
v_toPure_1721_ = lean_ctor_get(v_toApplicative_1720_, 1);
lean_inc(v_toPure_1721_);
lean_dec_ref(v_toApplicative_1720_);
v___x_1722_ = lean_box(0);
v___x_1723_ = lean_apply_2(v_toPure_1721_, lean_box(0), v___x_1722_);
return v___x_1723_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField(lean_object* v_m_1724_, lean_object* v_inst_1725_, lean_object* v_inst_1726_, lean_object* v_inst_1727_, lean_object* v_declName_1728_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = l_Lean_Elab_checkIfShadowingStructureField___redArg(v_inst_1725_, v_inst_1726_, v_inst_1727_, v_declName_1728_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__0(lean_object* v_declName_1730_, lean_object* v_shortName_1731_, lean_object* v_toPure_1732_, lean_object* v_____r_1733_){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1734_, 0, v_declName_1730_);
lean_ctor_set(v___x_1734_, 1, v_shortName_1731_);
v___x_1735_ = lean_apply_2(v_toPure_1732_, lean_box(0), v___x_1734_);
return v___x_1735_;
}
}
static lean_object* _init_l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1737_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0));
v___x_1738_ = l_Lean_stringToMessageData(v___x_1737_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2(lean_object* v_modifiers_1739_, lean_object* v_shortName_1740_, lean_object* v_toPure_1741_, lean_object* v_currNamespace_1742_, lean_object* v_inst_1743_, lean_object* v_inst_1744_, lean_object* v_toBind_1745_, lean_object* v_declName_1746_){
_start:
{
uint8_t v_isProtected_1747_; 
v_isProtected_1747_ = lean_ctor_get_uint8(v_modifiers_1739_, sizeof(void*)*3 + 1);
if (v_isProtected_1747_ == 0)
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
lean_dec(v_toBind_1745_);
lean_dec_ref(v_inst_1744_);
lean_dec_ref(v_inst_1743_);
lean_dec(v_currNamespace_1742_);
v___x_1748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1748_, 0, v_declName_1746_);
lean_ctor_set(v___x_1748_, 1, v_shortName_1740_);
v___x_1749_ = lean_apply_2(v_toPure_1741_, lean_box(0), v___x_1748_);
return v___x_1749_;
}
else
{
if (lean_obj_tag(v_currNamespace_1742_) == 1)
{
lean_object* v_str_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
lean_dec(v_toBind_1745_);
lean_dec_ref(v_inst_1744_);
lean_dec_ref(v_inst_1743_);
v_str_1750_ = lean_ctor_get(v_currNamespace_1742_, 1);
lean_inc_ref(v_str_1750_);
lean_dec_ref_known(v_currNamespace_1742_, 2);
v___x_1751_ = lean_box(0);
v___x_1752_ = l_Lean_Name_str___override(v___x_1751_, v_str_1750_);
v___x_1753_ = l_Lean_Name_append(v___x_1752_, v_shortName_1740_);
v___x_1754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1754_, 0, v_declName_1746_);
lean_ctor_set(v___x_1754_, 1, v___x_1753_);
v___x_1755_ = lean_apply_2(v_toPure_1741_, lean_box(0), v___x_1754_);
return v___x_1755_;
}
else
{
lean_object* v___f_1756_; uint8_t v___x_1757_; 
lean_dec(v_currNamespace_1742_);
lean_inc(v_toPure_1741_);
lean_inc(v_shortName_1740_);
lean_inc(v_declName_1746_);
v___f_1756_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1756_, 0, v_declName_1746_);
lean_closure_set(v___f_1756_, 1, v_shortName_1740_);
lean_closure_set(v___f_1756_, 2, v_toPure_1741_);
v___x_1757_ = l_Lean_Name_isAtomic(v_shortName_1740_);
if (v___x_1757_ == 0)
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
lean_dec_ref(v___f_1756_);
lean_dec(v_toBind_1745_);
lean_dec_ref(v_inst_1744_);
lean_dec_ref(v_inst_1743_);
v___x_1758_ = lean_box(0);
v___x_1759_ = l_Lean_Elab_mkDeclName___redArg___lam__0(v_declName_1746_, v_shortName_1740_, v_toPure_1741_, v___x_1758_);
return v___x_1759_;
}
else
{
lean_object* v___f_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_dec(v_declName_1746_);
lean_dec(v_toPure_1741_);
lean_dec(v_shortName_1740_);
v___f_1760_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1760_, 0, v___f_1756_);
v___x_1761_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1, &l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1);
v___x_1762_ = l_Lean_throwError___redArg(v_inst_1743_, v_inst_1744_, v___x_1761_);
v___x_1763_ = lean_apply_4(v_toBind_1745_, lean_box(0), lean_box(0), v___x_1762_, v___f_1760_);
return v___x_1763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___boxed(lean_object* v_modifiers_1764_, lean_object* v_shortName_1765_, lean_object* v_toPure_1766_, lean_object* v_currNamespace_1767_, lean_object* v_inst_1768_, lean_object* v_inst_1769_, lean_object* v_toBind_1770_, lean_object* v_declName_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = l_Lean_Elab_mkDeclName___redArg___lam__2(v_modifiers_1764_, v_shortName_1765_, v_toPure_1766_, v_currNamespace_1767_, v_inst_1768_, v_inst_1769_, v_toBind_1770_, v_declName_1771_);
lean_dec_ref(v_modifiers_1764_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__1(lean_object* v_inst_1773_, lean_object* v_inst_1774_, lean_object* v_inst_1775_, lean_object* v_inst_1776_, lean_object* v_inst_1777_, lean_object* v_modifiers_1778_, lean_object* v___y_1779_, lean_object* v_toBind_1780_, lean_object* v___f_1781_, lean_object* v_____r_1782_){
_start:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1783_ = l_Lean_Elab_applyVisibility___redArg(v_inst_1773_, v_inst_1774_, v_inst_1775_, v_inst_1776_, v_inst_1777_, v_modifiers_1778_, v___y_1779_);
v___x_1784_ = lean_apply_4(v_toBind_1780_, lean_box(0), lean_box(0), v___x_1783_, v___f_1781_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__3(lean_object* v_modifiers_1785_, lean_object* v_toPure_1786_, lean_object* v_inst_1787_, lean_object* v_inst_1788_, lean_object* v_toBind_1789_, lean_object* v_inst_1790_, lean_object* v_inst_1791_, lean_object* v_inst_1792_, lean_object* v___y_1793_, lean_object* v_____r_1794_, lean_object* v_shortName_1795_, lean_object* v_currNamespace_1796_){
_start:
{
lean_object* v___f_1797_; lean_object* v___f_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
lean_inc_n(v_toBind_1789_, 2);
lean_inc_ref_n(v_inst_1788_, 2);
lean_inc_ref_n(v_inst_1787_, 2);
lean_inc_ref(v_modifiers_1785_);
v___f_1797_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_1797_, 0, v_modifiers_1785_);
lean_closure_set(v___f_1797_, 1, v_shortName_1795_);
lean_closure_set(v___f_1797_, 2, v_toPure_1786_);
lean_closure_set(v___f_1797_, 3, v_currNamespace_1796_);
lean_closure_set(v___f_1797_, 4, v_inst_1787_);
lean_closure_set(v___f_1797_, 5, v_inst_1788_);
lean_closure_set(v___f_1797_, 6, v_toBind_1789_);
lean_inc(v___y_1793_);
lean_inc_ref(v_inst_1790_);
v___f_1798_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__1), 10, 9);
lean_closure_set(v___f_1798_, 0, v_inst_1787_);
lean_closure_set(v___f_1798_, 1, v_inst_1790_);
lean_closure_set(v___f_1798_, 2, v_inst_1788_);
lean_closure_set(v___f_1798_, 3, v_inst_1791_);
lean_closure_set(v___f_1798_, 4, v_inst_1792_);
lean_closure_set(v___f_1798_, 5, v_modifiers_1785_);
lean_closure_set(v___f_1798_, 6, v___y_1793_);
lean_closure_set(v___f_1798_, 7, v_toBind_1789_);
lean_closure_set(v___f_1798_, 8, v___f_1797_);
v___x_1799_ = l_Lean_Elab_checkIfShadowingStructureField___redArg(v_inst_1787_, v_inst_1790_, v_inst_1788_, v___y_1793_);
v___x_1800_ = lean_apply_4(v_toBind_1789_, lean_box(0), lean_box(0), v___x_1799_, v___f_1798_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__4(lean_object* v___f_1801_, lean_object* v_shortName_1802_, lean_object* v_currNamespace_1803_, lean_object* v_____r_1804_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = lean_apply_3(v___f_1801_, v_____r_1804_, v_shortName_1802_, v_currNamespace_1803_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5(lean_object* v_modifiers_1806_, lean_object* v_toPure_1807_, lean_object* v_inst_1808_, lean_object* v_inst_1809_, lean_object* v_toBind_1810_, lean_object* v_inst_1811_, lean_object* v_inst_1812_, lean_object* v_inst_1813_, uint8_t v_isRootName_1814_, lean_object* v_shortName_1815_, lean_object* v_currNamespace_1816_, lean_object* v_name_1817_, lean_object* v___x_1818_, lean_object* v_imported_1819_, lean_object* v_ctx_1820_, lean_object* v_scopes_1821_, lean_object* v_____r_1822_){
_start:
{
lean_object* v___y_1824_; 
if (v_isRootName_1814_ == 0)
{
lean_object* v___x_1843_; 
lean_dec(v_scopes_1821_);
lean_dec(v_ctx_1820_);
lean_dec(v_imported_1819_);
lean_inc(v_shortName_1815_);
lean_inc(v_currNamespace_1816_);
v___x_1843_ = l_Lean_Name_append(v_currNamespace_1816_, v_shortName_1815_);
v___y_1824_ = v___x_1843_;
goto v___jp_1823_;
}
else
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1844_ = lean_box(0);
lean_inc(v_name_1817_);
v___x_1845_ = l_Lean_Name_replacePrefix(v_name_1817_, v___x_1818_, v___x_1844_);
v___x_1846_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1845_);
lean_ctor_set(v___x_1846_, 1, v_imported_1819_);
lean_ctor_set(v___x_1846_, 2, v_ctx_1820_);
lean_ctor_set(v___x_1846_, 3, v_scopes_1821_);
v___x_1847_ = l_Lean_MacroScopesView_review(v___x_1846_);
v___y_1824_ = v___x_1847_;
goto v___jp_1823_;
}
v___jp_1823_:
{
lean_object* v___f_1825_; 
lean_inc(v___y_1824_);
lean_inc_ref(v_inst_1813_);
lean_inc(v_inst_1812_);
lean_inc_ref(v_inst_1811_);
lean_inc(v_toBind_1810_);
lean_inc_ref(v_inst_1809_);
lean_inc_ref(v_inst_1808_);
lean_inc(v_toPure_1807_);
lean_inc_ref(v_modifiers_1806_);
v___f_1825_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__3), 12, 9);
lean_closure_set(v___f_1825_, 0, v_modifiers_1806_);
lean_closure_set(v___f_1825_, 1, v_toPure_1807_);
lean_closure_set(v___f_1825_, 2, v_inst_1808_);
lean_closure_set(v___f_1825_, 3, v_inst_1809_);
lean_closure_set(v___f_1825_, 4, v_toBind_1810_);
lean_closure_set(v___f_1825_, 5, v_inst_1811_);
lean_closure_set(v___f_1825_, 6, v_inst_1812_);
lean_closure_set(v___f_1825_, 7, v_inst_1813_);
lean_closure_set(v___f_1825_, 8, v___y_1824_);
if (v_isRootName_1814_ == 0)
{
lean_object* v___x_1826_; lean_object* v___x_1827_; 
lean_dec_ref(v___f_1825_);
lean_dec(v_name_1817_);
v___x_1826_ = lean_box(0);
v___x_1827_ = l_Lean_Elab_mkDeclName___redArg___lam__3(v_modifiers_1806_, v_toPure_1807_, v_inst_1808_, v_inst_1809_, v_toBind_1810_, v_inst_1811_, v_inst_1812_, v_inst_1813_, v___y_1824_, v___x_1826_, v_shortName_1815_, v_currNamespace_1816_);
return v___x_1827_;
}
else
{
if (lean_obj_tag(v_name_1817_) == 1)
{
lean_object* v_pre_1828_; lean_object* v_str_1829_; lean_object* v___x_1830_; lean_object* v_shortName_1831_; lean_object* v_currNamespace_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
lean_dec_ref(v___f_1825_);
lean_dec(v_currNamespace_1816_);
lean_dec(v_shortName_1815_);
v_pre_1828_ = lean_ctor_get(v_name_1817_, 0);
lean_inc(v_pre_1828_);
v_str_1829_ = lean_ctor_get(v_name_1817_, 1);
lean_inc_ref(v_str_1829_);
lean_dec_ref_known(v_name_1817_, 2);
v___x_1830_ = lean_box(0);
v_shortName_1831_ = l_Lean_Name_str___override(v___x_1830_, v_str_1829_);
v_currNamespace_1832_ = l_Lean_Name_replacePrefix(v_pre_1828_, v___x_1818_, v___x_1830_);
v___x_1833_ = lean_box(0);
v___x_1834_ = l_Lean_Elab_mkDeclName___redArg___lam__3(v_modifiers_1806_, v_toPure_1807_, v_inst_1808_, v_inst_1809_, v_toBind_1810_, v_inst_1811_, v_inst_1812_, v_inst_1813_, v___y_1824_, v___x_1833_, v_shortName_1831_, v_currNamespace_1832_);
return v___x_1834_;
}
else
{
lean_object* v___f_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
lean_dec(v___y_1824_);
lean_dec_ref(v_inst_1813_);
lean_dec(v_inst_1812_);
lean_dec_ref(v_inst_1811_);
lean_dec(v_toPure_1807_);
lean_dec_ref(v_modifiers_1806_);
v___f_1835_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__4), 4, 3);
lean_closure_set(v___f_1835_, 0, v___f_1825_);
lean_closure_set(v___f_1835_, 1, v_shortName_1815_);
lean_closure_set(v___f_1835_, 2, v_currNamespace_1816_);
v___x_1836_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_1837_ = l_Lean_MessageData_ofName(v_name_1817_);
v___x_1838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1836_);
lean_ctor_set(v___x_1838_, 1, v___x_1837_);
v___x_1839_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_1840_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1838_);
lean_ctor_set(v___x_1840_, 1, v___x_1839_);
v___x_1841_ = l_Lean_throwError___redArg(v_inst_1808_, v_inst_1809_, v___x_1840_);
v___x_1842_ = lean_apply_4(v_toBind_1810_, lean_box(0), lean_box(0), v___x_1841_, v___f_1835_);
return v___x_1842_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_modifiers_1848_ = _args[0];
lean_object* v_toPure_1849_ = _args[1];
lean_object* v_inst_1850_ = _args[2];
lean_object* v_inst_1851_ = _args[3];
lean_object* v_toBind_1852_ = _args[4];
lean_object* v_inst_1853_ = _args[5];
lean_object* v_inst_1854_ = _args[6];
lean_object* v_inst_1855_ = _args[7];
lean_object* v_isRootName_1856_ = _args[8];
lean_object* v_shortName_1857_ = _args[9];
lean_object* v_currNamespace_1858_ = _args[10];
lean_object* v_name_1859_ = _args[11];
lean_object* v___x_1860_ = _args[12];
lean_object* v_imported_1861_ = _args[13];
lean_object* v_ctx_1862_ = _args[14];
lean_object* v_scopes_1863_ = _args[15];
lean_object* v_____r_1864_ = _args[16];
_start:
{
uint8_t v_isRootName_boxed_1865_; lean_object* v_res_1866_; 
v_isRootName_boxed_1865_ = lean_unbox(v_isRootName_1856_);
v_res_1866_ = l_Lean_Elab_mkDeclName___redArg___lam__5(v_modifiers_1848_, v_toPure_1849_, v_inst_1850_, v_inst_1851_, v_toBind_1852_, v_inst_1853_, v_inst_1854_, v_inst_1855_, v_isRootName_boxed_1865_, v_shortName_1857_, v_currNamespace_1858_, v_name_1859_, v___x_1860_, v_imported_1861_, v_ctx_1862_, v_scopes_1863_, v_____r_1864_);
lean_dec(v___x_1860_);
return v_res_1866_;
}
}
static lean_object* _init_l_Lean_Elab_mkDeclName___redArg___closed__3(void){
_start:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1871_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___closed__2));
v___x_1872_ = l_Lean_stringToMessageData(v___x_1871_);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg(lean_object* v_inst_1873_, lean_object* v_inst_1874_, lean_object* v_inst_1875_, lean_object* v_inst_1876_, lean_object* v_inst_1877_, lean_object* v_currNamespace_1878_, lean_object* v_modifiers_1879_, lean_object* v_shortName_1880_){
_start:
{
lean_object* v_view_1881_; lean_object* v_toApplicative_1882_; lean_object* v_name_1883_; lean_object* v_imported_1884_; lean_object* v_ctx_1885_; lean_object* v_scopes_1886_; lean_object* v_toBind_1887_; lean_object* v_toPure_1888_; lean_object* v___x_1889_; uint8_t v_isRootName_1890_; lean_object* v___x_1891_; lean_object* v___f_1892_; uint8_t v___x_1893_; 
lean_inc_n(v_shortName_1880_, 2);
v_view_1881_ = l_Lean_extractMacroScopes(v_shortName_1880_);
v_toApplicative_1882_ = lean_ctor_get(v_inst_1873_, 0);
v_name_1883_ = lean_ctor_get(v_view_1881_, 0);
lean_inc_n(v_name_1883_, 2);
v_imported_1884_ = lean_ctor_get(v_view_1881_, 1);
lean_inc_n(v_imported_1884_, 2);
v_ctx_1885_ = lean_ctor_get(v_view_1881_, 2);
lean_inc_n(v_ctx_1885_, 2);
v_scopes_1886_ = lean_ctor_get(v_view_1881_, 3);
lean_inc_n(v_scopes_1886_, 2);
lean_dec_ref(v_view_1881_);
v_toBind_1887_ = lean_ctor_get(v_inst_1873_, 1);
lean_inc_n(v_toBind_1887_, 2);
v_toPure_1888_ = lean_ctor_get(v_toApplicative_1882_, 1);
v___x_1889_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___closed__1));
v_isRootName_1890_ = l_Lean_Name_isPrefixOf(v___x_1889_, v_name_1883_);
v___x_1891_ = lean_box(v_isRootName_1890_);
lean_inc(v_currNamespace_1878_);
lean_inc_ref(v_inst_1877_);
lean_inc(v_inst_1876_);
lean_inc_ref(v_inst_1874_);
lean_inc_ref(v_inst_1875_);
lean_inc_ref(v_inst_1873_);
lean_inc(v_toPure_1888_);
lean_inc_ref(v_modifiers_1879_);
v___f_1892_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__5___boxed), 17, 16);
lean_closure_set(v___f_1892_, 0, v_modifiers_1879_);
lean_closure_set(v___f_1892_, 1, v_toPure_1888_);
lean_closure_set(v___f_1892_, 2, v_inst_1873_);
lean_closure_set(v___f_1892_, 3, v_inst_1875_);
lean_closure_set(v___f_1892_, 4, v_toBind_1887_);
lean_closure_set(v___f_1892_, 5, v_inst_1874_);
lean_closure_set(v___f_1892_, 6, v_inst_1876_);
lean_closure_set(v___f_1892_, 7, v_inst_1877_);
lean_closure_set(v___f_1892_, 8, v___x_1891_);
lean_closure_set(v___f_1892_, 9, v_shortName_1880_);
lean_closure_set(v___f_1892_, 10, v_currNamespace_1878_);
lean_closure_set(v___f_1892_, 11, v_name_1883_);
lean_closure_set(v___f_1892_, 12, v___x_1889_);
lean_closure_set(v___f_1892_, 13, v_imported_1884_);
lean_closure_set(v___f_1892_, 14, v_ctx_1885_);
lean_closure_set(v___f_1892_, 15, v_scopes_1886_);
v___x_1893_ = lean_name_eq(v_name_1883_, v___x_1889_);
if (v___x_1893_ == 0)
{
lean_object* v___x_1894_; lean_object* v___x_1895_; 
lean_inc(v_toPure_1888_);
lean_dec_ref(v___f_1892_);
v___x_1894_ = lean_box(0);
v___x_1895_ = l_Lean_Elab_mkDeclName___redArg___lam__5(v_modifiers_1879_, v_toPure_1888_, v_inst_1873_, v_inst_1875_, v_toBind_1887_, v_inst_1874_, v_inst_1876_, v_inst_1877_, v_isRootName_1890_, v_shortName_1880_, v_currNamespace_1878_, v_name_1883_, v___x_1889_, v_imported_1884_, v_ctx_1885_, v_scopes_1886_, v___x_1894_);
return v___x_1895_;
}
else
{
lean_object* v___f_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
lean_dec(v_scopes_1886_);
lean_dec(v_ctx_1885_);
lean_dec(v_imported_1884_);
lean_dec(v_name_1883_);
lean_dec(v_shortName_1880_);
lean_dec_ref(v_modifiers_1879_);
lean_dec(v_currNamespace_1878_);
lean_dec_ref(v_inst_1877_);
lean_dec(v_inst_1876_);
lean_dec_ref(v_inst_1874_);
v___f_1896_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1896_, 0, v___f_1892_);
v___x_1897_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___closed__3, &l_Lean_Elab_mkDeclName___redArg___closed__3_once, _init_l_Lean_Elab_mkDeclName___redArg___closed__3);
v___x_1898_ = l_Lean_throwError___redArg(v_inst_1873_, v_inst_1875_, v___x_1897_);
v___x_1899_ = lean_apply_4(v_toBind_1887_, lean_box(0), lean_box(0), v___x_1898_, v___f_1896_);
return v___x_1899_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName(lean_object* v_m_1900_, lean_object* v_inst_1901_, lean_object* v_inst_1902_, lean_object* v_inst_1903_, lean_object* v_inst_1904_, lean_object* v_inst_1905_, lean_object* v_currNamespace_1906_, lean_object* v_modifiers_1907_, lean_object* v_shortName_1908_){
_start:
{
lean_object* v___x_1909_; 
v___x_1909_ = l_Lean_Elab_mkDeclName___redArg(v_inst_1901_, v_inst_1902_, v_inst_1903_, v_inst_1904_, v_inst_1905_, v_currNamespace_1906_, v_modifiers_1907_, v_shortName_1908_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore(lean_object* v_declId_1919_){
_start:
{
uint8_t v___x_1920_; 
v___x_1920_ = l_Lean_Syntax_isIdent(v_declId_1919_);
if (v___x_1920_ == 0)
{
lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v_id_1923_; lean_object* v___x_1924_; lean_object* v_optUnivDeclStx_1925_; lean_object* v___x_1926_; 
v___x_1921_ = lean_unsigned_to_nat(0u);
v___x_1922_ = l_Lean_Syntax_getArg(v_declId_1919_, v___x_1921_);
v_id_1923_ = l_Lean_Syntax_getId(v___x_1922_);
lean_dec(v___x_1922_);
v___x_1924_ = lean_unsigned_to_nat(1u);
v_optUnivDeclStx_1925_ = l_Lean_Syntax_getArg(v_declId_1919_, v___x_1924_);
v___x_1926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1926_, 0, v_id_1923_);
lean_ctor_set(v___x_1926_, 1, v_optUnivDeclStx_1925_);
return v___x_1926_;
}
else
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1927_ = l_Lean_Syntax_getId(v_declId_1919_);
v___x_1928_ = ((lean_object*)(l_Lean_Elab_expandDeclIdCore___closed__3));
v___x_1929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1927_);
lean_ctor_set(v___x_1929_, 1, v___x_1928_);
return v___x_1929_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore___boxed(lean_object* v_declId_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Lean_Elab_expandDeclIdCore(v_declId_1930_);
lean_dec(v_declId_1930_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(lean_object* v_msgData_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_){
_start:
{
lean_object* v___x_1938_; lean_object* v_env_1939_; uint8_t v___x_1940_; lean_object* v_env_1941_; lean_object* v___x_1942_; lean_object* v_toCold_1943_; lean_object* v_mctx_1944_; lean_object* v_lctx_1945_; lean_object* v_options_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1938_ = lean_st_ref_get(v___y_1936_);
v_env_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc_ref(v_env_1939_);
lean_dec(v___x_1938_);
v___x_1940_ = 0;
v_env_1941_ = l_Lean_Environment_setRecordingDeps(v_env_1939_, v___x_1940_);
v___x_1942_ = lean_st_ref_get(v___y_1934_);
v_toCold_1943_ = lean_ctor_get(v___y_1935_, 0);
v_mctx_1944_ = lean_ctor_get(v___x_1942_, 0);
lean_inc_ref(v_mctx_1944_);
lean_dec(v___x_1942_);
v_lctx_1945_ = lean_ctor_get(v___y_1933_, 2);
v_options_1946_ = lean_ctor_get(v_toCold_1943_, 2);
lean_inc_ref(v_options_1946_);
lean_inc_ref(v_lctx_1945_);
v___x_1947_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1947_, 0, v_env_1941_);
lean_ctor_set(v___x_1947_, 1, v_mctx_1944_);
lean_ctor_set(v___x_1947_, 2, v_lctx_1945_);
lean_ctor_set(v___x_1947_, 3, v_options_1946_);
v___x_1948_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1947_);
lean_ctor_set(v___x_1948_, 1, v_msgData_1932_);
v___x_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2___boxed(lean_object* v_msgData_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(v_msgData_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
return v_res_1956_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(lean_object* v_opts_1957_, lean_object* v_opt_1958_){
_start:
{
lean_object* v_name_1959_; lean_object* v_defValue_1960_; lean_object* v_map_1961_; lean_object* v___x_1962_; 
v_name_1959_ = lean_ctor_get(v_opt_1958_, 0);
v_defValue_1960_ = lean_ctor_get(v_opt_1958_, 1);
v_map_1961_ = lean_ctor_get(v_opts_1957_, 0);
v___x_1962_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1961_, v_name_1959_);
if (lean_obj_tag(v___x_1962_) == 0)
{
uint8_t v___x_1963_; 
v___x_1963_ = lean_unbox(v_defValue_1960_);
return v___x_1963_;
}
else
{
lean_object* v_val_1964_; 
v_val_1964_ = lean_ctor_get(v___x_1962_, 0);
lean_inc(v_val_1964_);
lean_dec_ref_known(v___x_1962_, 1);
if (lean_obj_tag(v_val_1964_) == 1)
{
uint8_t v_v_1965_; 
v_v_1965_ = lean_ctor_get_uint8(v_val_1964_, 0);
lean_dec_ref_known(v_val_1964_, 0);
return v_v_1965_;
}
else
{
uint8_t v___x_1966_; 
lean_dec(v_val_1964_);
v___x_1966_ = lean_unbox(v_defValue_1960_);
return v___x_1966_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7___boxed(lean_object* v_opts_1967_, lean_object* v_opt_1968_){
_start:
{
uint8_t v_res_1969_; lean_object* v_r_1970_; 
v_res_1969_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(v_opts_1967_, v_opt_1968_);
lean_dec_ref(v_opt_1968_);
lean_dec_ref(v_opts_1967_);
v_r_1970_ = lean_box(v_res_1969_);
return v_r_1970_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0(void){
_start:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1971_ = lean_box(1);
v___x_1972_ = l_Lean_MessageData_ofFormat(v___x_1971_);
return v___x_1972_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3(void){
_start:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1976_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2));
v___x_1977_ = l_Lean_MessageData_ofFormat(v___x_1976_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8(lean_object* v_x_1978_, lean_object* v_x_1979_){
_start:
{
if (lean_obj_tag(v_x_1979_) == 0)
{
return v_x_1978_;
}
else
{
lean_object* v_head_1980_; lean_object* v_tail_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_2003_; 
v_head_1980_ = lean_ctor_get(v_x_1979_, 0);
v_tail_1981_ = lean_ctor_get(v_x_1979_, 1);
v_isSharedCheck_2003_ = !lean_is_exclusive(v_x_1979_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1983_ = v_x_1979_;
v_isShared_1984_ = v_isSharedCheck_2003_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_tail_1981_);
lean_inc(v_head_1980_);
lean_dec(v_x_1979_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_2003_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v_before_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2001_; 
v_before_1985_ = lean_ctor_get(v_head_1980_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v_head_1980_);
if (v_isSharedCheck_2001_ == 0)
{
lean_object* v_unused_2002_; 
v_unused_2002_ = lean_ctor_get(v_head_1980_, 1);
lean_dec(v_unused_2002_);
v___x_1987_ = v_head_1980_;
v_isShared_1988_ = v_isSharedCheck_2001_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_before_1985_);
lean_dec(v_head_1980_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2001_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1989_; lean_object* v___x_1991_; 
v___x_1989_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0);
if (v_isShared_1988_ == 0)
{
lean_ctor_set_tag(v___x_1987_, 7);
lean_ctor_set(v___x_1987_, 1, v___x_1989_);
lean_ctor_set(v___x_1987_, 0, v_x_1978_);
v___x_1991_ = v___x_1987_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_x_1978_);
lean_ctor_set(v_reuseFailAlloc_2000_, 1, v___x_1989_);
v___x_1991_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
lean_object* v___x_1992_; lean_object* v___x_1994_; 
v___x_1992_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3);
if (v_isShared_1984_ == 0)
{
lean_ctor_set_tag(v___x_1983_, 7);
lean_ctor_set(v___x_1983_, 1, v___x_1992_);
lean_ctor_set(v___x_1983_, 0, v___x_1991_);
v___x_1994_ = v___x_1983_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v___x_1991_);
lean_ctor_set(v_reuseFailAlloc_1999_, 1, v___x_1992_);
v___x_1994_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1995_ = l_Lean_MessageData_ofSyntax(v_before_1985_);
v___x_1996_ = l_Lean_indentD(v___x_1995_);
v___x_1997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1997_, 0, v___x_1994_);
lean_ctor_set(v___x_1997_, 1, v___x_1996_);
v_x_1978_ = v___x_1997_;
v_x_1979_ = v_tail_1981_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2007_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1));
v___x_2008_ = l_Lean_MessageData_ofFormat(v___x_2007_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(lean_object* v_msgData_2009_, lean_object* v_macroStack_2010_, lean_object* v___y_2011_){
_start:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; 
v___x_2013_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2011_);
v___x_2014_ = l_Lean_Elab_pp_macroStack;
v___x_2015_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(v___x_2013_, v___x_2014_);
lean_dec_ref(v___x_2013_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; 
lean_dec(v_macroStack_2010_);
v___x_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2016_, 0, v_msgData_2009_);
return v___x_2016_;
}
else
{
if (lean_obj_tag(v_macroStack_2010_) == 0)
{
lean_object* v___x_2017_; 
v___x_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2017_, 0, v_msgData_2009_);
return v___x_2017_;
}
else
{
lean_object* v_head_2018_; lean_object* v_after_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2034_; 
v_head_2018_ = lean_ctor_get(v_macroStack_2010_, 0);
lean_inc(v_head_2018_);
v_after_2019_ = lean_ctor_get(v_head_2018_, 1);
v_isSharedCheck_2034_ = !lean_is_exclusive(v_head_2018_);
if (v_isSharedCheck_2034_ == 0)
{
lean_object* v_unused_2035_; 
v_unused_2035_ = lean_ctor_get(v_head_2018_, 0);
lean_dec(v_unused_2035_);
v___x_2021_ = v_head_2018_;
v_isShared_2022_ = v_isSharedCheck_2034_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_after_2019_);
lean_dec(v_head_2018_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2034_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2023_; lean_object* v___x_2025_; 
v___x_2023_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0);
if (v_isShared_2022_ == 0)
{
lean_ctor_set_tag(v___x_2021_, 7);
lean_ctor_set(v___x_2021_, 1, v___x_2023_);
lean_ctor_set(v___x_2021_, 0, v_msgData_2009_);
v___x_2025_ = v___x_2021_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_msgData_2009_);
lean_ctor_set(v_reuseFailAlloc_2033_, 1, v___x_2023_);
v___x_2025_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v_msgData_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2026_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_2027_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2025_);
lean_ctor_set(v___x_2027_, 1, v___x_2026_);
v___x_2028_ = l_Lean_MessageData_ofSyntax(v_after_2019_);
v___x_2029_ = l_Lean_indentD(v___x_2028_);
v_msgData_2030_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2030_, 0, v___x_2027_);
lean_ctor_set(v_msgData_2030_, 1, v___x_2029_);
v___x_2031_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8(v_msgData_2030_, v_macroStack_2010_);
v___x_2032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2032_, 0, v___x_2031_);
return v___x_2032_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_msgData_2036_, lean_object* v_macroStack_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_){
_start:
{
lean_object* v_res_2040_; 
v_res_2040_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(v_msgData_2036_, v_macroStack_2037_, v___y_2038_);
lean_dec_ref(v___y_2038_);
return v_res_2040_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(lean_object* v_msg_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
lean_object* v_ref_2049_; lean_object* v_macroStack_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v_a_2053_; lean_object* v___x_2054_; lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2063_; 
v_ref_2049_ = lean_ctor_get(v___y_2046_, 2);
v_macroStack_2050_ = lean_ctor_get(v___y_2042_, 1);
v___x_2051_ = l_Lean_Elab_getBetterRef(v_ref_2049_, v_macroStack_2050_);
v___x_2052_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(v_msg_2041_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
v_a_2053_ = lean_ctor_get(v___x_2052_, 0);
lean_inc(v_a_2053_);
lean_dec_ref(v___x_2052_);
lean_inc(v_macroStack_2050_);
v___x_2054_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(v_a_2053_, v_macroStack_2050_, v___y_2046_);
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2057_ = v___x_2054_;
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2054_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2059_; lean_object* v___x_2061_; 
v___x_2059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2051_);
lean_ctor_set(v___x_2059_, 1, v_a_2055_);
if (v_isShared_2058_ == 0)
{
lean_ctor_set_tag(v___x_2057_, 1);
lean_ctor_set(v___x_2057_, 0, v___x_2059_);
v___x_2061_ = v___x_2057_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg___boxed(lean_object* v_msg_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v_res_2072_; 
v_res_2072_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v_msg_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
return v_res_2072_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg___closed__0(void){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2073_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
v___x_2074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2074_, 0, v___x_2073_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg(){
_start:
{
lean_object* v___x_2076_; 
v___x_2076_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg___closed__0);
return v___x_2076_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg___boxed(lean_object* v___dummy_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg();
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2(lean_object* v_env_2079_, lean_object* v_declName_2080_, lean_object* v___f_2081_, lean_object* v_addInfo_2082_, lean_object* v_____r_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
lean_object* v___x_2091_; uint8_t v___x_2092_; uint8_t v___x_2093_; 
lean_inc(v_declName_2080_);
v___x_2091_ = l_Lean_mkPrivateName(v_env_2079_, v_declName_2080_);
v___x_2092_ = 1;
lean_inc(v___x_2091_);
v___x_2093_ = l_Lean_Environment_contains(v_env_2079_, v___x_2091_, v___x_2092_);
if (v___x_2093_ == 0)
{
lean_object* v___x_2094_; lean_object* v___x_2095_; 
lean_dec(v___x_2091_);
lean_dec_ref(v_addInfo_2082_);
lean_dec(v_declName_2080_);
v___x_2094_ = lean_box(0);
lean_inc(v___y_2089_);
lean_inc_ref(v___y_2088_);
lean_inc(v___y_2087_);
lean_inc_ref(v___y_2086_);
lean_inc(v___y_2085_);
lean_inc_ref(v___y_2084_);
v___x_2095_ = lean_apply_8(v___f_2081_, v___x_2094_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, lean_box(0));
return v___x_2095_;
}
else
{
lean_object* v___x_2096_; 
lean_dec_ref(v___f_2081_);
lean_inc(v___y_2089_);
lean_inc_ref(v___y_2088_);
lean_inc(v___y_2087_);
lean_inc_ref(v___y_2086_);
lean_inc(v___y_2085_);
lean_inc_ref(v___y_2084_);
v___x_2096_ = lean_apply_8(v_addInfo_2082_, v___x_2091_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, lean_box(0));
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
lean_dec_ref_known(v___x_2096_, 1);
v___x_2097_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1);
v___x_2098_ = l_Lean_MessageData_ofConstName(v_declName_2080_, v___x_2093_);
v___x_2099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2097_);
lean_ctor_set(v___x_2099_, 1, v___x_2098_);
v___x_2100_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_2101_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2099_);
lean_ctor_set(v___x_2101_, 1, v___x_2100_);
v___x_2102_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2101_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_);
return v___x_2102_;
}
else
{
lean_dec(v_declName_2080_);
return v___x_2096_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2___boxed(lean_object* v_env_2103_, lean_object* v_declName_2104_, lean_object* v___f_2105_, lean_object* v_addInfo_2106_, lean_object* v_____r_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v_res_2115_; 
v_res_2115_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2(v_env_2103_, v_declName_2104_, v___f_2105_, v_addInfo_2106_, v_____r_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
return v_res_2115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3(lean_object* v_declName_2116_, uint8_t v___x_2117_, lean_object* v___f_2118_, lean_object* v_env_2119_, lean_object* v_____do__lift_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v___x_2135_; uint8_t v___x_2136_; 
lean_inc(v_declName_2116_);
v___x_2135_ = l_Lean_privateToUserName(v_declName_2116_);
lean_inc_ref(v_env_2119_);
v___x_2136_ = lean_is_reserved_name(v_env_2119_, v___x_2135_);
if (v___x_2136_ == 0)
{
lean_object* v___x_2137_; uint8_t v___x_2138_; 
lean_inc(v_declName_2116_);
v___x_2137_ = l_Lean_mkPrivateName(v_____do__lift_2120_, v_declName_2116_);
v___x_2138_ = lean_is_reserved_name(v_env_2119_, v___x_2137_);
if (v___x_2138_ == 0)
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
lean_dec(v_declName_2116_);
v___x_2139_ = lean_box(0);
lean_inc(v___y_2126_);
lean_inc_ref(v___y_2125_);
lean_inc(v___y_2124_);
lean_inc_ref(v___y_2123_);
lean_inc(v___y_2122_);
lean_inc_ref(v___y_2121_);
v___x_2140_ = lean_apply_8(v___f_2118_, v___x_2139_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_, lean_box(0));
return v___x_2140_;
}
else
{
lean_dec_ref(v___f_2118_);
goto v___jp_2128_;
}
}
else
{
lean_dec_ref(v_env_2119_);
lean_dec_ref(v___f_2118_);
goto v___jp_2128_;
}
v___jp_2128_:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2129_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2130_ = l_Lean_MessageData_ofConstName(v_declName_2116_, v___x_2117_);
v___x_2131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2129_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3);
v___x_2133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2131_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2133_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_);
return v___x_2134_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3___boxed(lean_object* v_declName_2141_, lean_object* v___x_2142_, lean_object* v___f_2143_, lean_object* v_env_2144_, lean_object* v_____do__lift_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_){
_start:
{
uint8_t v___x_16849__boxed_2153_; lean_object* v_res_2154_; 
v___x_16849__boxed_2153_ = lean_unbox(v___x_2142_);
v_res_2154_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3(v_declName_2141_, v___x_16849__boxed_2153_, v___f_2143_, v_env_2144_, v_____do__lift_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_);
lean_dec(v___y_2151_);
lean_dec_ref(v___y_2150_);
lean_dec(v___y_2149_);
lean_dec_ref(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec_ref(v_____do__lift_2145_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(lean_object* v_t_2155_, lean_object* v___y_2156_){
_start:
{
lean_object* v___x_2158_; lean_object* v_infoState_2159_; uint8_t v_enabled_2160_; 
v___x_2158_ = lean_st_ref_get(v___y_2156_);
v_infoState_2159_ = lean_ctor_get(v___x_2158_, 8);
lean_inc_ref(v_infoState_2159_);
lean_dec(v___x_2158_);
v_enabled_2160_ = lean_ctor_get_uint8(v_infoState_2159_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2159_);
if (v_enabled_2160_ == 0)
{
lean_object* v___x_2161_; lean_object* v___x_2162_; 
lean_dec_ref(v_t_2155_);
v___x_2161_ = lean_box(0);
v___x_2162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2162_, 0, v___x_2161_);
return v___x_2162_;
}
else
{
lean_object* v___x_2163_; lean_object* v_infoState_2164_; lean_object* v_env_2165_; lean_object* v_nextMacroScope_2166_; lean_object* v_ngen_2167_; lean_object* v_auxDeclNGen_2168_; lean_object* v_traceState_2169_; lean_object* v_cache_2170_; lean_object* v_recordedDeps_2171_; lean_object* v_messages_2172_; lean_object* v_snapshotTasks_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2195_; 
v___x_2163_ = lean_st_ref_take(v___y_2156_);
v_infoState_2164_ = lean_ctor_get(v___x_2163_, 8);
v_env_2165_ = lean_ctor_get(v___x_2163_, 0);
v_nextMacroScope_2166_ = lean_ctor_get(v___x_2163_, 1);
v_ngen_2167_ = lean_ctor_get(v___x_2163_, 2);
v_auxDeclNGen_2168_ = lean_ctor_get(v___x_2163_, 3);
v_traceState_2169_ = lean_ctor_get(v___x_2163_, 4);
v_cache_2170_ = lean_ctor_get(v___x_2163_, 5);
v_recordedDeps_2171_ = lean_ctor_get(v___x_2163_, 6);
v_messages_2172_ = lean_ctor_get(v___x_2163_, 7);
v_snapshotTasks_2173_ = lean_ctor_get(v___x_2163_, 9);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2175_ = v___x_2163_;
v_isShared_2176_ = v_isSharedCheck_2195_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_snapshotTasks_2173_);
lean_inc(v_infoState_2164_);
lean_inc(v_messages_2172_);
lean_inc(v_recordedDeps_2171_);
lean_inc(v_cache_2170_);
lean_inc(v_traceState_2169_);
lean_inc(v_auxDeclNGen_2168_);
lean_inc(v_ngen_2167_);
lean_inc(v_nextMacroScope_2166_);
lean_inc(v_env_2165_);
lean_dec(v___x_2163_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2195_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
uint8_t v_enabled_2177_; lean_object* v_assignment_2178_; lean_object* v_lazyAssignment_2179_; lean_object* v_trees_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2194_; 
v_enabled_2177_ = lean_ctor_get_uint8(v_infoState_2164_, sizeof(void*)*3);
v_assignment_2178_ = lean_ctor_get(v_infoState_2164_, 0);
v_lazyAssignment_2179_ = lean_ctor_get(v_infoState_2164_, 1);
v_trees_2180_ = lean_ctor_get(v_infoState_2164_, 2);
v_isSharedCheck_2194_ = !lean_is_exclusive(v_infoState_2164_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2182_ = v_infoState_2164_;
v_isShared_2183_ = v_isSharedCheck_2194_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_trees_2180_);
lean_inc(v_lazyAssignment_2179_);
lean_inc(v_assignment_2178_);
lean_dec(v_infoState_2164_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2194_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2187_; 
v___x_2184_ = lean_box(0);
v___x_2185_ = l_Lean_PersistentArray_push___redArg(v_trees_2180_, v_t_2155_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 2, v___x_2185_);
v___x_2187_ = v___x_2182_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_assignment_2178_);
lean_ctor_set(v_reuseFailAlloc_2193_, 1, v_lazyAssignment_2179_);
lean_ctor_set(v_reuseFailAlloc_2193_, 2, v___x_2185_);
lean_ctor_set_uint8(v_reuseFailAlloc_2193_, sizeof(void*)*3, v_enabled_2177_);
v___x_2187_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
lean_object* v___x_2189_; 
if (v_isShared_2176_ == 0)
{
lean_ctor_set(v___x_2175_, 8, v___x_2187_);
v___x_2189_ = v___x_2175_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_env_2165_);
lean_ctor_set(v_reuseFailAlloc_2192_, 1, v_nextMacroScope_2166_);
lean_ctor_set(v_reuseFailAlloc_2192_, 2, v_ngen_2167_);
lean_ctor_set(v_reuseFailAlloc_2192_, 3, v_auxDeclNGen_2168_);
lean_ctor_set(v_reuseFailAlloc_2192_, 4, v_traceState_2169_);
lean_ctor_set(v_reuseFailAlloc_2192_, 5, v_cache_2170_);
lean_ctor_set(v_reuseFailAlloc_2192_, 6, v_recordedDeps_2171_);
lean_ctor_set(v_reuseFailAlloc_2192_, 7, v_messages_2172_);
lean_ctor_set(v_reuseFailAlloc_2192_, 8, v___x_2187_);
lean_ctor_set(v_reuseFailAlloc_2192_, 9, v_snapshotTasks_2173_);
v___x_2189_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___x_2190_ = lean_st_ref_put(v___y_2156_, v___x_2189_);
v___x_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2184_);
return v___x_2191_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg___boxed(lean_object* v_t_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(v_t_2196_, v___y_2197_);
lean_dec(v___y_2197_);
return v_res_2199_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0(void){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2200_ = lean_unsigned_to_nat(32u);
v___x_2201_ = lean_mk_empty_array_with_capacity(v___x_2200_);
v___x_2202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2201_);
return v___x_2202_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1(void){
_start:
{
size_t v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2203_ = ((size_t)5ULL);
v___x_2204_ = lean_unsigned_to_nat(0u);
v___x_2205_ = lean_unsigned_to_nat(32u);
v___x_2206_ = lean_mk_empty_array_with_capacity(v___x_2205_);
v___x_2207_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0);
v___x_2208_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2208_, 0, v___x_2207_);
lean_ctor_set(v___x_2208_, 1, v___x_2206_);
lean_ctor_set(v___x_2208_, 2, v___x_2204_);
lean_ctor_set(v___x_2208_, 3, v___x_2204_);
lean_ctor_set_usize(v___x_2208_, 4, v___x_2203_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(lean_object* v_t_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v___x_2217_; lean_object* v_infoState_2218_; uint8_t v_enabled_2219_; 
v___x_2217_ = lean_st_ref_get(v___y_2215_);
v_infoState_2218_ = lean_ctor_get(v___x_2217_, 8);
lean_inc_ref(v_infoState_2218_);
lean_dec(v___x_2217_);
v_enabled_2219_ = lean_ctor_get_uint8(v_infoState_2218_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2218_);
if (v_enabled_2219_ == 0)
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
lean_dec_ref(v_t_2209_);
v___x_2220_ = lean_box(0);
v___x_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
return v___x_2221_;
}
else
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2222_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1);
v___x_2223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2223_, 0, v_t_2209_);
lean_ctor_set(v___x_2223_, 1, v___x_2222_);
v___x_2224_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(v___x_2223_, v___y_2215_);
return v___x_2224_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___boxed(lean_object* v_t_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_){
_start:
{
lean_object* v_res_2233_; 
v_res_2233_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(v_t_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_);
lean_dec(v___y_2231_);
lean_dec_ref(v___y_2230_);
lean_dec(v___y_2229_);
lean_dec_ref(v___y_2228_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
return v_res_2233_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__15(lean_object* v_a_2234_, lean_object* v_a_2235_){
_start:
{
if (lean_obj_tag(v_a_2234_) == 0)
{
lean_object* v___x_2236_; 
v___x_2236_ = l_List_reverse___redArg(v_a_2235_);
return v___x_2236_;
}
else
{
lean_object* v_head_2237_; lean_object* v_tail_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2247_; 
v_head_2237_ = lean_ctor_get(v_a_2234_, 0);
v_tail_2238_ = lean_ctor_get(v_a_2234_, 1);
v_isSharedCheck_2247_ = !lean_is_exclusive(v_a_2234_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2240_ = v_a_2234_;
v_isShared_2241_ = v_isSharedCheck_2247_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_tail_2238_);
lean_inc(v_head_2237_);
lean_dec(v_a_2234_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2247_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v___x_2242_; lean_object* v___x_2244_; 
v___x_2242_ = l_Lean_mkLevelParam(v_head_2237_);
if (v_isShared_2241_ == 0)
{
lean_ctor_set(v___x_2240_, 1, v_a_2235_);
lean_ctor_set(v___x_2240_, 0, v___x_2242_);
v___x_2244_ = v___x_2240_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v___x_2242_);
lean_ctor_set(v_reuseFailAlloc_2246_, 1, v_a_2235_);
v___x_2244_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
v_a_2234_ = v_tail_2238_;
v_a_2235_ = v___x_2244_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__0(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2248_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
v___x_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2248_);
return v___x_2249_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__1(void){
_start:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2250_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__0);
v___x_2251_ = lean_unsigned_to_nat(0u);
v___x_2252_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2251_);
lean_ctor_set(v___x_2252_, 1, v___x_2251_);
lean_ctor_set(v___x_2252_, 2, v___x_2251_);
lean_ctor_set(v___x_2252_, 3, v___x_2251_);
lean_ctor_set(v___x_2252_, 4, v___x_2250_);
lean_ctor_set(v___x_2252_, 5, v___x_2250_);
lean_ctor_set(v___x_2252_, 6, v___x_2250_);
lean_ctor_set(v___x_2252_, 7, v___x_2250_);
lean_ctor_set(v___x_2252_, 8, v___x_2250_);
lean_ctor_set(v___x_2252_, 9, v___x_2250_);
lean_ctor_set(v___x_2252_, 10, v___x_2250_);
return v___x_2252_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__2(void){
_start:
{
lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2253_ = lean_box(1);
v___x_2254_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3);
v___x_2255_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__0);
v___x_2256_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
lean_ctor_set(v___x_2256_, 1, v___x_2254_);
lean_ctor_set(v___x_2256_, 2, v___x_2253_);
return v___x_2256_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__4(void){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2258_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__3));
v___x_2259_ = l_Lean_stringToMessageData(v___x_2258_);
return v___x_2259_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__6(void){
_start:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2261_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__5));
v___x_2262_ = l_Lean_stringToMessageData(v___x_2261_);
return v___x_2262_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__8(void){
_start:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2264_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__7));
v___x_2265_ = l_Lean_stringToMessageData(v___x_2264_);
return v___x_2265_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__10(void){
_start:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__9));
v___x_2268_ = l_Lean_stringToMessageData(v___x_2267_);
return v___x_2268_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__12(void){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__11));
v___x_2271_ = l_Lean_stringToMessageData(v___x_2270_);
return v___x_2271_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__14(void){
_start:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2273_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__13));
v___x_2274_ = l_Lean_stringToMessageData(v___x_2273_);
return v___x_2274_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__16(void){
_start:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2276_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__15));
v___x_2277_ = l_Lean_stringToMessageData(v___x_2276_);
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg(lean_object* v_msg_2278_, lean_object* v_declHint_2279_, lean_object* v___y_2280_){
_start:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v_env_2284_; uint8_t v___x_2285_; 
v___x_2282_ = lean_box(0);
v___x_2283_ = lean_st_ref_get(v___y_2280_);
v_env_2284_ = lean_ctor_get(v___x_2283_, 0);
lean_inc_ref(v_env_2284_);
lean_dec(v___x_2283_);
v___x_2285_ = l_Lean_Name_isAnonymous(v_declHint_2279_);
if (v___x_2285_ == 0)
{
uint8_t v_isExporting_2286_; 
v_isExporting_2286_ = lean_ctor_get_uint8(v_env_2284_, sizeof(void*)*13);
if (v_isExporting_2286_ == 0)
{
lean_object* v___x_2287_; 
lean_dec_ref(v_env_2284_);
lean_dec(v_declHint_2279_);
v___x_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2287_, 0, v_msg_2278_);
return v___x_2287_;
}
else
{
lean_object* v___x_2288_; uint8_t v___x_2289_; 
lean_inc_ref(v_env_2284_);
v___x_2288_ = l_Lean_Environment_setExporting(v_env_2284_, v___x_2285_);
lean_inc(v_declHint_2279_);
lean_inc_ref(v___x_2288_);
v___x_2289_ = l_Lean_Environment_contains(v___x_2288_, v_declHint_2279_, v_isExporting_2286_);
if (v___x_2289_ == 0)
{
lean_object* v___x_2290_; 
lean_dec_ref(v___x_2288_);
lean_dec_ref(v_env_2284_);
lean_dec(v_declHint_2279_);
v___x_2290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2290_, 0, v_msg_2278_);
return v___x_2290_;
}
else
{
lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v_c_2296_; lean_object* v___x_2297_; 
v___x_2291_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__1);
v___x_2292_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__2);
v___x_2293_ = l_Lean_Options_empty;
lean_inc_ref(v___x_2288_);
v___x_2294_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2288_);
lean_ctor_set(v___x_2294_, 1, v___x_2291_);
lean_ctor_set(v___x_2294_, 2, v___x_2292_);
lean_ctor_set(v___x_2294_, 3, v___x_2293_);
lean_inc(v_declHint_2279_);
v___x_2295_ = l_Lean_MessageData_ofConstName(v_declHint_2279_, v___x_2285_);
v_c_2296_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2296_, 0, v___x_2294_);
lean_ctor_set(v_c_2296_, 1, v___x_2295_);
v___x_2297_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_2288_, v_declHint_2279_);
lean_dec_ref(v___x_2288_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; 
lean_dec_ref(v_env_2284_);
lean_dec(v_declHint_2279_);
v___x_2298_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__4);
v___x_2299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
lean_ctor_set(v___x_2299_, 1, v_c_2296_);
v___x_2300_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__6);
v___x_2301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2299_);
lean_ctor_set(v___x_2301_, 1, v___x_2300_);
v___x_2302_ = l_Lean_MessageData_note(v___x_2301_);
v___x_2303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2303_, 0, v_msg_2278_);
lean_ctor_set(v___x_2303_, 1, v___x_2302_);
v___x_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
return v___x_2304_;
}
else
{
lean_object* v_val_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2339_; 
v_val_2305_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2307_ = v___x_2297_;
v_isShared_2308_ = v_isSharedCheck_2339_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_val_2305_);
lean_dec(v___x_2297_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2339_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2309_; lean_object* v_moduleNames_2310_; lean_object* v_mod_2311_; uint8_t v___x_2312_; 
v___x_2309_ = l_Lean_Environment_header(v_env_2284_);
lean_dec_ref(v_env_2284_);
v_moduleNames_2310_ = lean_ctor_get(v___x_2309_, 4);
lean_inc_ref(v_moduleNames_2310_);
lean_dec_ref(v___x_2309_);
v_mod_2311_ = lean_array_get(v___x_2282_, v_moduleNames_2310_, v_val_2305_);
lean_dec(v_val_2305_);
lean_dec_ref(v_moduleNames_2310_);
v___x_2312_ = l_Lean_isPrivateName(v_declHint_2279_);
lean_dec(v_declHint_2279_);
if (v___x_2312_ == 0)
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2324_; 
v___x_2313_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__8);
v___x_2314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2313_);
lean_ctor_set(v___x_2314_, 1, v_c_2296_);
v___x_2315_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__10);
v___x_2316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2314_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
v___x_2317_ = l_Lean_MessageData_ofName(v_mod_2311_);
v___x_2318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2316_);
lean_ctor_set(v___x_2318_, 1, v___x_2317_);
v___x_2319_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__12);
v___x_2320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2318_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
v___x_2321_ = l_Lean_MessageData_note(v___x_2320_);
v___x_2322_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2322_, 0, v_msg_2278_);
lean_ctor_set(v___x_2322_, 1, v___x_2321_);
if (v_isShared_2308_ == 0)
{
lean_ctor_set_tag(v___x_2307_, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2322_);
v___x_2324_ = v___x_2307_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2322_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
else
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2337_; 
v___x_2326_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__4);
v___x_2327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2326_);
lean_ctor_set(v___x_2327_, 1, v_c_2296_);
v___x_2328_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__14);
v___x_2329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2327_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
v___x_2330_ = l_Lean_MessageData_ofName(v_mod_2311_);
v___x_2331_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2331_, 0, v___x_2329_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
v___x_2332_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___closed__16);
v___x_2333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2331_);
lean_ctor_set(v___x_2333_, 1, v___x_2332_);
v___x_2334_ = l_Lean_MessageData_note(v___x_2333_);
v___x_2335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2335_, 0, v_msg_2278_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
if (v_isShared_2308_ == 0)
{
lean_ctor_set_tag(v___x_2307_, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2335_);
v___x_2337_ = v___x_2307_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v___x_2335_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2340_; 
lean_dec_ref(v_env_2284_);
lean_dec(v_declHint_2279_);
v___x_2340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2340_, 0, v_msg_2278_);
return v___x_2340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg___boxed(lean_object* v_msg_2341_, lean_object* v_declHint_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg(v_msg_2341_, v_declHint_2342_, v___y_2343_);
lean_dec(v___y_2343_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25(lean_object* v_msg_2346_, lean_object* v_declHint_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_){
_start:
{
lean_object* v___x_2355_; lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2365_; 
v___x_2355_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg(v_msg_2346_, v_declHint_2347_, v___y_2353_);
v_a_2356_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2358_ = v___x_2355_;
v_isShared_2359_ = v_isSharedCheck_2365_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v___x_2355_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2365_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2363_; 
v___x_2360_ = l_Lean_unknownIdentifierMessageTag;
v___x_2361_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2361_, 0, v___x_2360_);
lean_ctor_set(v___x_2361_, 1, v_a_2356_);
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 0, v___x_2361_);
v___x_2363_ = v___x_2358_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v___x_2361_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25___boxed(lean_object* v_msg_2366_, lean_object* v_declHint_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_){
_start:
{
lean_object* v_res_2375_; 
v_res_2375_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25(v_msg_2366_, v_declHint_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_);
lean_dec(v___y_2373_);
lean_dec_ref(v___y_2372_);
lean_dec(v___y_2371_);
lean_dec_ref(v___y_2370_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26___redArg(lean_object* v_ref_2376_, lean_object* v_msg_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_){
_start:
{
lean_object* v_toCold_2385_; lean_object* v_currRecDepth_2386_; lean_object* v_ref_2387_; uint16_t v_optionFlags_2388_; uint8_t v_suppressElabErrors_2389_; uint8_t v_checkDeprecated_2390_; uint8_t v_isRecordingDeps_2391_; lean_object* v_ref_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; 
v_toCold_2385_ = lean_ctor_get(v___y_2382_, 0);
v_currRecDepth_2386_ = lean_ctor_get(v___y_2382_, 1);
v_ref_2387_ = lean_ctor_get(v___y_2382_, 2);
v_optionFlags_2388_ = lean_ctor_get_uint16(v___y_2382_, sizeof(void*)*3);
v_suppressElabErrors_2389_ = lean_ctor_get_uint8(v___y_2382_, sizeof(void*)*3 + 2);
v_checkDeprecated_2390_ = lean_ctor_get_uint8(v___y_2382_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2391_ = lean_ctor_get_uint8(v___y_2382_, sizeof(void*)*3 + 4);
v_ref_2392_ = l_Lean_replaceRef(v_ref_2376_, v_ref_2387_);
lean_inc(v_currRecDepth_2386_);
lean_inc_ref(v_toCold_2385_);
v___x_2393_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2393_, 0, v_toCold_2385_);
lean_ctor_set(v___x_2393_, 1, v_currRecDepth_2386_);
lean_ctor_set(v___x_2393_, 2, v_ref_2392_);
lean_ctor_set_uint16(v___x_2393_, sizeof(void*)*3, v_optionFlags_2388_);
lean_ctor_set_uint8(v___x_2393_, sizeof(void*)*3 + 2, v_suppressElabErrors_2389_);
lean_ctor_set_uint8(v___x_2393_, sizeof(void*)*3 + 3, v_checkDeprecated_2390_);
lean_ctor_set_uint8(v___x_2393_, sizeof(void*)*3 + 4, v_isRecordingDeps_2391_);
v___x_2394_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v_msg_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___x_2393_, v___y_2383_);
lean_dec_ref_known(v___x_2393_, 3);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26___redArg___boxed(lean_object* v_ref_2395_, lean_object* v_msg_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26___redArg(v_ref_2395_, v_msg_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v_ref_2395_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24___redArg(lean_object* v_ref_2405_, lean_object* v_msg_2406_, lean_object* v_declHint_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_){
_start:
{
lean_object* v___x_2415_; lean_object* v_a_2416_; lean_object* v___x_2417_; 
v___x_2415_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25(v_msg_2406_, v_declHint_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
v_a_2416_ = lean_ctor_get(v___x_2415_, 0);
lean_inc(v_a_2416_);
lean_dec_ref(v___x_2415_);
v___x_2417_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26___redArg(v_ref_2405_, v_a_2416_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24___redArg___boxed(lean_object* v_ref_2418_, lean_object* v_msg_2419_, lean_object* v_declHint_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24___redArg(v_ref_2418_, v_msg_2419_, v_declHint_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v_ref_2418_);
return v_res_2428_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___closed__1(void){
_start:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2430_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___closed__0));
v___x_2431_ = l_Lean_stringToMessageData(v___x_2430_);
return v___x_2431_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg(lean_object* v_ref_2432_, lean_object* v_constName_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_){
_start:
{
lean_object* v___x_2441_; uint8_t v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v___x_2441_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___closed__1);
v___x_2442_ = 0;
lean_inc(v_constName_2433_);
v___x_2443_ = l_Lean_MessageData_ofConstName(v_constName_2433_, v___x_2442_);
v___x_2444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2441_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2444_);
lean_ctor_set(v___x_2446_, 1, v___x_2445_);
v___x_2447_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24___redArg(v_ref_2432_, v___x_2446_, v_constName_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg___boxed(lean_object* v_ref_2448_, lean_object* v_constName_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg(v_ref_2448_, v_constName_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_dec(v_ref_2448_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17___redArg(lean_object* v_constName_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v_ref_2466_; lean_object* v___x_2467_; 
v_ref_2466_ = lean_ctor_get(v___y_2463_, 2);
v___x_2467_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg(v_ref_2466_, v_constName_2458_, v___y_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17___redArg___boxed(lean_object* v_constName_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17___redArg(v_constName_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_);
lean_dec(v___y_2474_);
lean_dec_ref(v___y_2473_);
lean_dec(v___y_2472_);
lean_dec_ref(v___y_2471_);
lean_dec(v___y_2470_);
lean_dec_ref(v___y_2469_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(lean_object* v_constName_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v___x_2485_; lean_object* v_env_2486_; uint8_t v___x_2487_; lean_object* v___x_2488_; 
v___x_2485_ = lean_st_ref_get(v___y_2483_);
v_env_2486_ = lean_ctor_get(v___x_2485_, 0);
lean_inc_ref(v_env_2486_);
lean_dec(v___x_2485_);
v___x_2487_ = 0;
lean_inc(v_constName_2477_);
v___x_2488_ = l_Lean_Environment_findConstVal_x3f(v_env_2486_, v_constName_2477_, v___x_2487_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_object* v___x_2489_; 
v___x_2489_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17___redArg(v_constName_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_);
return v___x_2489_;
}
else
{
lean_object* v_val_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2497_; 
lean_dec(v_constName_2477_);
v_val_2490_ = lean_ctor_get(v___x_2488_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2492_ = v___x_2488_;
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_val_2490_);
lean_dec(v___x_2488_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2495_; 
if (v_isShared_2493_ == 0)
{
lean_ctor_set_tag(v___x_2492_, 0);
v___x_2495_ = v___x_2492_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_val_2490_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14___boxed(lean_object* v_constName_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_){
_start:
{
lean_object* v_res_2506_; 
v_res_2506_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(v_constName_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
lean_dec(v___y_2502_);
lean_dec_ref(v___y_2501_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
return v_res_2506_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(lean_object* v_constName_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v___x_2515_; 
lean_inc(v_constName_2507_);
v___x_2515_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(v_constName_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2527_; 
v_a_2516_ = lean_ctor_get(v___x_2515_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2518_ = v___x_2515_;
v_isShared_2519_ = v_isSharedCheck_2527_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v___x_2515_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2527_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v_levelParams_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2525_; 
v_levelParams_2520_ = lean_ctor_get(v_a_2516_, 1);
lean_inc(v_levelParams_2520_);
lean_dec(v_a_2516_);
v___x_2521_ = lean_box(0);
v___x_2522_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__15(v_levelParams_2520_, v___x_2521_);
v___x_2523_ = l_Lean_mkConst(v_constName_2507_, v___x_2522_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 0, v___x_2523_);
v___x_2525_ = v___x_2518_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v___x_2523_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
else
{
lean_object* v_a_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
lean_dec(v_constName_2507_);
v_a_2528_ = lean_ctor_get(v___x_2515_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2530_ = v___x_2515_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_a_2528_);
lean_dec(v___x_2515_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2533_; 
if (v_isShared_2531_ == 0)
{
v___x_2533_ = v___x_2530_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2528_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13___boxed(lean_object* v_constName_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_){
_start:
{
lean_object* v_res_2544_; 
v_res_2544_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(v_constName_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_);
lean_dec(v___y_2542_);
lean_dec_ref(v___y_2541_);
lean_dec(v___y_2540_);
lean_dec_ref(v___y_2539_);
lean_dec(v___y_2538_);
lean_dec_ref(v___y_2537_);
return v_res_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0(uint8_t v___x_2545_, lean_object* v_declName_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_){
_start:
{
lean_object* v_ref_2554_; lean_object* v___x_2555_; 
v_ref_2554_ = lean_ctor_get(v___y_2551_, 2);
v___x_2555_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(v_declName_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; 
v_a_2556_ = lean_ctor_get(v___x_2555_, 0);
lean_inc(v_a_2556_);
lean_dec_ref_known(v___x_2555_, 1);
v___x_2557_ = lean_box(0);
lean_inc(v_ref_2554_);
v___x_2558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2557_);
lean_ctor_set(v___x_2558_, 1, v_ref_2554_);
v___x_2559_ = lean_unsigned_to_nat(32u);
v___x_2560_ = lean_mk_empty_array_with_capacity(v___x_2559_);
lean_dec_ref(v___x_2560_);
v___x_2561_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4);
v___x_2562_ = lean_box(0);
v___x_2563_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2563_, 0, v___x_2558_);
lean_ctor_set(v___x_2563_, 1, v___x_2561_);
lean_ctor_set(v___x_2563_, 2, v___x_2562_);
lean_ctor_set(v___x_2563_, 3, v_a_2556_);
lean_ctor_set_uint8(v___x_2563_, sizeof(void*)*4, v___x_2545_);
lean_ctor_set_uint8(v___x_2563_, sizeof(void*)*4 + 1, v___x_2545_);
v___x_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2563_);
v___x_2565_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(v___x_2564_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_);
return v___x_2565_;
}
else
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2573_; 
v_a_2566_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2568_ = v___x_2555_;
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___x_2555_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_a_2566_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0___boxed(lean_object* v___x_2574_, lean_object* v_declName_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
uint8_t v___x_17575__boxed_2583_; lean_object* v_res_2584_; 
v___x_17575__boxed_2583_ = lean_unbox(v___x_2574_);
v_res_2584_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0(v___x_17575__boxed_2583_, v_declName_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
lean_dec(v___y_2579_);
lean_dec_ref(v___y_2578_);
lean_dec(v___y_2577_);
lean_dec_ref(v___y_2576_);
return v_res_2584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4(lean_object* v___f_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_){
_start:
{
lean_object* v___x_2593_; lean_object* v_env_2594_; lean_object* v___x_2595_; 
v___x_2593_ = lean_st_ref_get(v___y_2591_);
v_env_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc_ref(v_env_2594_);
lean_dec(v___x_2593_);
v___x_2595_ = lean_apply_8(v___f_2585_, v_env_2594_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, lean_box(0));
return v___x_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4___boxed(lean_object* v___f_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v_res_2604_; 
v_res_2604_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4(v___f_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_);
return v_res_2604_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0(void){
_start:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; 
v___x_2605_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
v___x_2606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2606_, 0, v___x_2605_);
return v___x_2606_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1(void){
_start:
{
lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2607_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0);
v___x_2608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2607_);
lean_ctor_set(v___x_2608_, 1, v___x_2607_);
return v___x_2608_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2(void){
_start:
{
lean_object* v___x_2609_; 
v___x_2609_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17___redArg();
return v___x_2609_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3(void){
_start:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2610_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0);
v___x_2611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2610_);
lean_ctor_set(v___x_2611_, 1, v___x_2610_);
return v___x_2611_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__4(void){
_start:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2612_ = lean_unsigned_to_nat(0u);
v___x_2613_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0);
v___x_2614_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2613_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
lean_ctor_set(v___x_2614_, 2, v___x_2612_);
return v___x_2614_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__5(void){
_start:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2615_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__4, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__4_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__4);
v___x_2616_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3);
v___x_2617_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0);
v___x_2618_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2);
v___x_2619_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
lean_ctor_set(v___x_2619_, 1, v___x_2617_);
lean_ctor_set(v___x_2619_, 2, v___x_2616_);
lean_ctor_set(v___x_2619_, 3, v___x_2617_);
lean_ctor_set(v___x_2619_, 4, v___x_2617_);
lean_ctor_set(v___x_2619_, 5, v___x_2617_);
lean_ctor_set(v___x_2619_, 6, v___x_2617_);
lean_ctor_set(v___x_2619_, 7, v___x_2615_);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(lean_object* v_env_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_){
_start:
{
lean_object* v___x_2624_; lean_object* v_nextMacroScope_2625_; lean_object* v_ngen_2626_; lean_object* v_auxDeclNGen_2627_; lean_object* v_traceState_2628_; lean_object* v_recordedDeps_2629_; lean_object* v_messages_2630_; lean_object* v_infoState_2631_; lean_object* v_snapshotTasks_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2658_; 
v___x_2624_ = lean_st_ref_take(v___y_2622_);
v_nextMacroScope_2625_ = lean_ctor_get(v___x_2624_, 1);
v_ngen_2626_ = lean_ctor_get(v___x_2624_, 2);
v_auxDeclNGen_2627_ = lean_ctor_get(v___x_2624_, 3);
v_traceState_2628_ = lean_ctor_get(v___x_2624_, 4);
v_recordedDeps_2629_ = lean_ctor_get(v___x_2624_, 6);
v_messages_2630_ = lean_ctor_get(v___x_2624_, 7);
v_infoState_2631_ = lean_ctor_get(v___x_2624_, 8);
v_snapshotTasks_2632_ = lean_ctor_get(v___x_2624_, 9);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2658_ == 0)
{
lean_object* v_unused_2659_; lean_object* v_unused_2660_; 
v_unused_2659_ = lean_ctor_get(v___x_2624_, 5);
lean_dec(v_unused_2659_);
v_unused_2660_ = lean_ctor_get(v___x_2624_, 0);
lean_dec(v_unused_2660_);
v___x_2634_ = v___x_2624_;
v_isShared_2635_ = v_isSharedCheck_2658_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_snapshotTasks_2632_);
lean_inc(v_infoState_2631_);
lean_inc(v_messages_2630_);
lean_inc(v_recordedDeps_2629_);
lean_inc(v_traceState_2628_);
lean_inc(v_auxDeclNGen_2627_);
lean_inc(v_ngen_2626_);
lean_inc(v_nextMacroScope_2625_);
lean_dec(v___x_2624_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2658_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2636_; lean_object* v___x_2638_; 
v___x_2636_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1);
if (v_isShared_2635_ == 0)
{
lean_ctor_set(v___x_2634_, 5, v___x_2636_);
lean_ctor_set(v___x_2634_, 0, v_env_2620_);
v___x_2638_ = v___x_2634_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_env_2620_);
lean_ctor_set(v_reuseFailAlloc_2657_, 1, v_nextMacroScope_2625_);
lean_ctor_set(v_reuseFailAlloc_2657_, 2, v_ngen_2626_);
lean_ctor_set(v_reuseFailAlloc_2657_, 3, v_auxDeclNGen_2627_);
lean_ctor_set(v_reuseFailAlloc_2657_, 4, v_traceState_2628_);
lean_ctor_set(v_reuseFailAlloc_2657_, 5, v___x_2636_);
lean_ctor_set(v_reuseFailAlloc_2657_, 6, v_recordedDeps_2629_);
lean_ctor_set(v_reuseFailAlloc_2657_, 7, v_messages_2630_);
lean_ctor_set(v_reuseFailAlloc_2657_, 8, v_infoState_2631_);
lean_ctor_set(v_reuseFailAlloc_2657_, 9, v_snapshotTasks_2632_);
v___x_2638_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v_mctx_2641_; lean_object* v_zetaDeltaFVarIds_2642_; lean_object* v_postponed_2643_; lean_object* v_diag_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2655_; 
v___x_2639_ = lean_st_ref_put(v___y_2622_, v___x_2638_);
v___x_2640_ = lean_st_ref_take(v___y_2621_);
v_mctx_2641_ = lean_ctor_get(v___x_2640_, 0);
v_zetaDeltaFVarIds_2642_ = lean_ctor_get(v___x_2640_, 2);
v_postponed_2643_ = lean_ctor_get(v___x_2640_, 3);
v_diag_2644_ = lean_ctor_get(v___x_2640_, 4);
v_isSharedCheck_2655_ = !lean_is_exclusive(v___x_2640_);
if (v_isSharedCheck_2655_ == 0)
{
lean_object* v_unused_2656_; 
v_unused_2656_ = lean_ctor_get(v___x_2640_, 1);
lean_dec(v_unused_2656_);
v___x_2646_ = v___x_2640_;
v_isShared_2647_ = v_isSharedCheck_2655_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_diag_2644_);
lean_inc(v_postponed_2643_);
lean_inc(v_zetaDeltaFVarIds_2642_);
lean_inc(v_mctx_2641_);
lean_dec(v___x_2640_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2655_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2651_; 
v___x_2648_ = lean_box(0);
v___x_2649_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__5, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__5_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__5);
if (v_isShared_2647_ == 0)
{
lean_ctor_set(v___x_2646_, 1, v___x_2649_);
v___x_2651_ = v___x_2646_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_mctx_2641_);
lean_ctor_set(v_reuseFailAlloc_2654_, 1, v___x_2649_);
lean_ctor_set(v_reuseFailAlloc_2654_, 2, v_zetaDeltaFVarIds_2642_);
lean_ctor_set(v_reuseFailAlloc_2654_, 3, v_postponed_2643_);
lean_ctor_set(v_reuseFailAlloc_2654_, 4, v_diag_2644_);
v___x_2651_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2652_ = lean_st_ref_put(v___y_2621_, v___x_2651_);
v___x_2653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2648_);
return v___x_2653_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___boxed(lean_object* v_env_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2661_, v___y_2662_, v___y_2663_);
lean_dec(v___y_2663_);
lean_dec(v___y_2662_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(lean_object* v_env_2666_, lean_object* v_x_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
lean_object* v___x_2675_; lean_object* v_env_2676_; lean_object* v_a_2678_; lean_object* v___x_2688_; lean_object* v___x_2689_; 
v___x_2675_ = lean_st_ref_get(v___y_2673_);
v_env_2676_ = lean_ctor_get(v___x_2675_, 0);
lean_inc_ref(v_env_2676_);
lean_dec(v___x_2675_);
v___x_2688_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2666_, v___y_2671_, v___y_2673_);
lean_dec_ref(v___x_2688_);
lean_inc(v___y_2673_);
lean_inc_ref(v___y_2672_);
lean_inc(v___y_2671_);
lean_inc_ref(v___y_2670_);
lean_inc(v___y_2669_);
lean_inc_ref(v___y_2668_);
v___x_2689_ = lean_apply_7(v_x_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, lean_box(0));
if (lean_obj_tag(v___x_2689_) == 0)
{
lean_object* v_a_2690_; lean_object* v___x_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
v_a_2690_ = lean_ctor_get(v___x_2689_, 0);
lean_inc(v_a_2690_);
lean_dec_ref_known(v___x_2689_, 1);
v___x_2691_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2676_, v___y_2671_, v___y_2673_);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2698_ == 0)
{
lean_object* v_unused_2699_; 
v_unused_2699_ = lean_ctor_get(v___x_2691_, 0);
lean_dec(v_unused_2699_);
v___x_2693_ = v___x_2691_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_dec(v___x_2691_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 0, v_a_2690_);
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2690_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
else
{
lean_object* v_a_2700_; 
v_a_2700_ = lean_ctor_get(v___x_2689_, 0);
lean_inc(v_a_2700_);
lean_dec_ref_known(v___x_2689_, 1);
v_a_2678_ = v_a_2700_;
goto v___jp_2677_;
}
v___jp_2677_:
{
lean_object* v___x_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2686_; 
v___x_2679_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2676_, v___y_2671_, v___y_2673_);
v_isSharedCheck_2686_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2686_ == 0)
{
lean_object* v_unused_2687_; 
v_unused_2687_ = lean_ctor_get(v___x_2679_, 0);
lean_dec(v_unused_2687_);
v___x_2681_ = v___x_2679_;
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
else
{
lean_dec(v___x_2679_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2684_; 
if (v_isShared_2682_ == 0)
{
lean_ctor_set_tag(v___x_2681_, 1);
lean_ctor_set(v___x_2681_, 0, v_a_2678_);
v___x_2684_ = v___x_2681_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v_a_2678_);
v___x_2684_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
return v___x_2684_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg___boxed(lean_object* v_env_2701_, lean_object* v_x_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_2701_, v_x_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_);
lean_dec(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2706_);
lean_dec_ref(v___y_2705_);
lean_dec(v___y_2704_);
lean_dec_ref(v___y_2703_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1(lean_object* v_declName_2711_, lean_object* v_env_2712_, lean_object* v_addInfo_2713_, lean_object* v_____r_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_){
_start:
{
lean_object* v___x_2725_; 
v___x_2725_ = l_Lean_privateToUserName_x3f(v_declName_2711_);
if (lean_obj_tag(v___x_2725_) == 0)
{
lean_dec_ref(v_addInfo_2713_);
lean_dec_ref(v_env_2712_);
goto v___jp_2722_;
}
else
{
lean_object* v_val_2726_; uint8_t v___x_2727_; uint8_t v___x_2728_; 
v_val_2726_ = lean_ctor_get(v___x_2725_, 0);
lean_inc_n(v_val_2726_, 2);
lean_dec_ref_known(v___x_2725_, 1);
v___x_2727_ = 1;
v___x_2728_ = l_Lean_Environment_contains(v_env_2712_, v_val_2726_, v___x_2727_);
if (v___x_2728_ == 0)
{
lean_dec(v_val_2726_);
lean_dec_ref(v_addInfo_2713_);
goto v___jp_2722_;
}
else
{
lean_object* v___x_2729_; 
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
lean_inc(v___y_2716_);
lean_inc_ref(v___y_2715_);
lean_inc(v_val_2726_);
v___x_2729_ = lean_apply_8(v_addInfo_2713_, v_val_2726_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, lean_box(0));
if (lean_obj_tag(v___x_2729_) == 0)
{
lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
lean_dec_ref_known(v___x_2729_, 1);
v___x_2730_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1);
v___x_2731_ = l_Lean_MessageData_ofConstName(v_val_2726_, v___x_2728_);
v___x_2732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2732_, 0, v___x_2730_);
lean_ctor_set(v___x_2732_, 1, v___x_2731_);
v___x_2733_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_2734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2732_);
lean_ctor_set(v___x_2734_, 1, v___x_2733_);
v___x_2735_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2734_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
return v___x_2735_;
}
else
{
lean_dec(v_val_2726_);
return v___x_2729_;
}
}
}
v___jp_2722_:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2723_ = lean_box(0);
v___x_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2723_);
return v___x_2724_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1___boxed(lean_object* v_declName_2736_, lean_object* v_env_2737_, lean_object* v_addInfo_2738_, lean_object* v_____r_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v_res_2747_; 
v_res_2747_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1(v_declName_2736_, v_env_2737_, v_addInfo_2738_, v_____r_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5(lean_object* v_addInfo_2748_, lean_object* v_declName_2749_, uint8_t v___x_2750_, uint8_t v___x_2751_, lean_object* v___f_2752_, lean_object* v_env_2753_, lean_object* v___f_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_){
_start:
{
lean_object* v___x_2762_; 
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc_ref(v___y_2755_);
lean_inc(v_declName_2749_);
v___x_2762_ = lean_apply_8(v_addInfo_2748_, v_declName_2749_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2762_) == 0)
{
lean_object* v___x_2763_; 
lean_dec_ref_known(v___x_2762_, 1);
lean_inc(v_declName_2749_);
v___x_2763_ = l_Lean_privateToUserName_x3f(v_declName_2749_);
if (lean_obj_tag(v___x_2763_) == 0)
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2764_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2765_ = l_Lean_MessageData_ofConstName(v_declName_2749_, v___x_2750_);
v___x_2766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2766_, 0, v___x_2764_);
lean_ctor_set(v___x_2766_, 1, v___x_2765_);
v___x_2767_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_2768_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2768_, 0, v___x_2766_);
lean_ctor_set(v___x_2768_, 1, v___x_2767_);
v___x_2769_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2768_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
lean_dec(v___y_2758_);
lean_dec_ref(v___y_2757_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
return v___x_2769_;
}
else
{
lean_object* v_val_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
lean_dec(v_declName_2749_);
v_val_2770_ = lean_ctor_get(v___x_2763_, 0);
lean_inc(v_val_2770_);
lean_dec_ref_known(v___x_2763_, 1);
v___x_2771_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1);
v___x_2772_ = l_Lean_MessageData_ofConstName(v_val_2770_, v___x_2750_);
v___x_2773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2771_);
lean_ctor_set(v___x_2773_, 1, v___x_2772_);
v___x_2774_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_2775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2773_);
lean_ctor_set(v___x_2775_, 1, v___x_2774_);
v___x_2776_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2775_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
lean_dec(v___y_2758_);
lean_dec_ref(v___y_2757_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
return v___x_2776_;
}
}
else
{
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
lean_dec(v___y_2758_);
lean_dec_ref(v___y_2757_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v_declName_2749_);
return v___x_2762_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5___boxed(lean_object* v_addInfo_2777_, lean_object* v_declName_2778_, lean_object* v___x_2779_, lean_object* v___x_2780_, lean_object* v___f_2781_, lean_object* v_env_2782_, lean_object* v___f_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_){
_start:
{
uint8_t v___x_17942__boxed_2791_; uint8_t v___x_17943__boxed_2792_; lean_object* v_res_2793_; 
v___x_17942__boxed_2791_ = lean_unbox(v___x_2779_);
v___x_17943__boxed_2792_ = lean_unbox(v___x_2780_);
v_res_2793_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5(v_addInfo_2777_, v_declName_2778_, v___x_17942__boxed_2791_, v___x_17943__boxed_2792_, v___f_2781_, v_env_2782_, v___f_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
lean_dec_ref(v___f_2783_);
lean_dec_ref(v_env_2782_);
lean_dec_ref(v___f_2781_);
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(lean_object* v_declName_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_){
_start:
{
lean_object* v___x_2805_; lean_object* v_env_2806_; uint8_t v___x_2807_; lean_object* v_addInfo_2808_; lean_object* v_env_2809_; lean_object* v___f_2810_; lean_object* v___f_2811_; lean_object* v___x_2812_; lean_object* v___f_2813_; uint8_t v___x_2814_; uint8_t v___x_2815_; 
v___x_2805_ = lean_st_ref_get(v___y_2803_);
v_env_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc_ref(v_env_2806_);
lean_dec(v___x_2805_);
v___x_2807_ = 0;
v_addInfo_2808_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0));
v_env_2809_ = l_Lean_Environment_setExporting(v_env_2806_, v___x_2807_);
lean_inc_ref_n(v_env_2809_, 4);
lean_inc_n(v_declName_2797_, 4);
v___f_2810_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1___boxed), 11, 3);
lean_closure_set(v___f_2810_, 0, v_declName_2797_);
lean_closure_set(v___f_2810_, 1, v_env_2809_);
lean_closure_set(v___f_2810_, 2, v_addInfo_2808_);
v___f_2811_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2___boxed), 12, 4);
lean_closure_set(v___f_2811_, 0, v_env_2809_);
lean_closure_set(v___f_2811_, 1, v_declName_2797_);
lean_closure_set(v___f_2811_, 2, v___f_2810_);
lean_closure_set(v___f_2811_, 3, v_addInfo_2808_);
v___x_2812_ = lean_box(v___x_2807_);
lean_inc_ref(v___f_2811_);
v___f_2813_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3___boxed), 12, 4);
lean_closure_set(v___f_2813_, 0, v_declName_2797_);
lean_closure_set(v___f_2813_, 1, v___x_2812_);
lean_closure_set(v___f_2813_, 2, v___f_2811_);
lean_closure_set(v___f_2813_, 3, v_env_2809_);
v___x_2814_ = 1;
v___x_2815_ = l_Lean_Environment_contains(v_env_2809_, v_declName_2797_, v___x_2814_);
if (v___x_2815_ == 0)
{
lean_object* v___f_2816_; lean_object* v___x_2817_; 
lean_dec_ref(v___f_2811_);
lean_dec(v_declName_2797_);
v___f_2816_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4___boxed), 8, 1);
lean_closure_set(v___f_2816_, 0, v___f_2813_);
v___x_2817_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_2809_, v___f_2816_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_);
return v___x_2817_;
}
else
{
lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___f_2820_; lean_object* v___x_2821_; 
v___x_2818_ = lean_box(v___x_2815_);
v___x_2819_ = lean_box(v___x_2807_);
lean_inc_ref(v_env_2809_);
v___f_2820_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5___boxed), 14, 7);
lean_closure_set(v___f_2820_, 0, v_addInfo_2808_);
lean_closure_set(v___f_2820_, 1, v_declName_2797_);
lean_closure_set(v___f_2820_, 2, v___x_2818_);
lean_closure_set(v___f_2820_, 3, v___x_2819_);
lean_closure_set(v___f_2820_, 4, v___f_2811_);
lean_closure_set(v___f_2820_, 5, v_env_2809_);
lean_closure_set(v___f_2820_, 6, v___f_2813_);
v___x_2821_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_2809_, v___f_2820_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_);
return v___x_2821_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___boxed(lean_object* v_declName_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_){
_start:
{
lean_object* v_res_2830_; 
v_res_2830_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(v_declName_2822_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2827_);
lean_dec(v___y_2826_);
lean_dec_ref(v___y_2825_);
lean_dec(v___y_2824_);
lean_dec_ref(v___y_2823_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(lean_object* v_modifiers_2831_, lean_object* v_declName_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_){
_start:
{
lean_object* v_declName_2841_; lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v___y_2845_; lean_object* v___y_2846_; lean_object* v___y_2847_; lean_object* v___x_2905_; lean_object* v_env_2906_; uint8_t v_visibility_2907_; uint8_t v___x_2908_; 
v___x_2905_ = lean_st_ref_get(v___y_2838_);
v_env_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc_ref(v_env_2906_);
lean_dec(v___x_2905_);
v_visibility_2907_ = lean_ctor_get_uint8(v_modifiers_2831_, sizeof(void*)*3);
v___x_2908_ = l_Lean_Elab_Visibility_isInferredPublic(v_env_2906_, v_visibility_2907_);
lean_dec_ref(v_env_2906_);
if (v___x_2908_ == 0)
{
lean_object* v___x_2909_; lean_object* v_env_2910_; lean_object* v_declName_2911_; 
v___x_2909_ = lean_st_ref_get(v___y_2838_);
v_env_2910_ = lean_ctor_get(v___x_2909_, 0);
lean_inc_ref(v_env_2910_);
lean_dec(v___x_2909_);
v_declName_2911_ = l_Lean_mkPrivateName(v_env_2910_, v_declName_2832_);
lean_dec_ref(v_env_2910_);
v_declName_2841_ = v_declName_2911_;
v___y_2842_ = v___y_2833_;
v___y_2843_ = v___y_2834_;
v___y_2844_ = v___y_2835_;
v___y_2845_ = v___y_2836_;
v___y_2846_ = v___y_2837_;
v___y_2847_ = v___y_2838_;
goto v___jp_2840_;
}
else
{
v_declName_2841_ = v_declName_2832_;
v___y_2842_ = v___y_2833_;
v___y_2843_ = v___y_2834_;
v___y_2844_ = v___y_2835_;
v___y_2845_ = v___y_2836_;
v___y_2846_ = v___y_2837_;
v___y_2847_ = v___y_2838_;
goto v___jp_2840_;
}
v___jp_2840_:
{
lean_object* v___x_2848_; 
lean_inc(v_declName_2841_);
v___x_2848_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(v_declName_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2895_; 
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2895_ == 0)
{
lean_object* v_unused_2896_; 
v_unused_2896_ = lean_ctor_get(v___x_2848_, 0);
lean_dec(v_unused_2896_);
v___x_2850_ = v___x_2848_;
v_isShared_2851_ = v_isSharedCheck_2895_;
goto v_resetjp_2849_;
}
else
{
lean_dec(v___x_2848_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2895_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
uint8_t v_isProtected_2852_; 
v_isProtected_2852_ = lean_ctor_get_uint8(v_modifiers_2831_, sizeof(void*)*3 + 1);
if (v_isProtected_2852_ == 0)
{
lean_object* v___x_2854_; 
if (v_isShared_2851_ == 0)
{
lean_ctor_set(v___x_2850_, 0, v_declName_2841_);
v___x_2854_ = v___x_2850_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_declName_2841_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
else
{
lean_object* v___x_2856_; lean_object* v_env_2857_; lean_object* v_nextMacroScope_2858_; lean_object* v_ngen_2859_; lean_object* v_auxDeclNGen_2860_; lean_object* v_traceState_2861_; lean_object* v_recordedDeps_2862_; lean_object* v_messages_2863_; lean_object* v_infoState_2864_; lean_object* v_snapshotTasks_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2893_; 
v___x_2856_ = lean_st_ref_take(v___y_2847_);
v_env_2857_ = lean_ctor_get(v___x_2856_, 0);
v_nextMacroScope_2858_ = lean_ctor_get(v___x_2856_, 1);
v_ngen_2859_ = lean_ctor_get(v___x_2856_, 2);
v_auxDeclNGen_2860_ = lean_ctor_get(v___x_2856_, 3);
v_traceState_2861_ = lean_ctor_get(v___x_2856_, 4);
v_recordedDeps_2862_ = lean_ctor_get(v___x_2856_, 6);
v_messages_2863_ = lean_ctor_get(v___x_2856_, 7);
v_infoState_2864_ = lean_ctor_get(v___x_2856_, 8);
v_snapshotTasks_2865_ = lean_ctor_get(v___x_2856_, 9);
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2856_);
if (v_isSharedCheck_2893_ == 0)
{
lean_object* v_unused_2894_; 
v_unused_2894_ = lean_ctor_get(v___x_2856_, 5);
lean_dec(v_unused_2894_);
v___x_2867_ = v___x_2856_;
v_isShared_2868_ = v_isSharedCheck_2893_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_snapshotTasks_2865_);
lean_inc(v_infoState_2864_);
lean_inc(v_messages_2863_);
lean_inc(v_recordedDeps_2862_);
lean_inc(v_traceState_2861_);
lean_inc(v_auxDeclNGen_2860_);
lean_inc(v_ngen_2859_);
lean_inc(v_nextMacroScope_2858_);
lean_inc(v_env_2857_);
lean_dec(v___x_2856_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2893_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2872_; 
lean_inc(v_declName_2841_);
v___x_2869_ = l_Lean_addProtected(v_env_2857_, v_declName_2841_);
v___x_2870_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1);
if (v_isShared_2868_ == 0)
{
lean_ctor_set(v___x_2867_, 5, v___x_2870_);
lean_ctor_set(v___x_2867_, 0, v___x_2869_);
v___x_2872_ = v___x_2867_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v___x_2869_);
lean_ctor_set(v_reuseFailAlloc_2892_, 1, v_nextMacroScope_2858_);
lean_ctor_set(v_reuseFailAlloc_2892_, 2, v_ngen_2859_);
lean_ctor_set(v_reuseFailAlloc_2892_, 3, v_auxDeclNGen_2860_);
lean_ctor_set(v_reuseFailAlloc_2892_, 4, v_traceState_2861_);
lean_ctor_set(v_reuseFailAlloc_2892_, 5, v___x_2870_);
lean_ctor_set(v_reuseFailAlloc_2892_, 6, v_recordedDeps_2862_);
lean_ctor_set(v_reuseFailAlloc_2892_, 7, v_messages_2863_);
lean_ctor_set(v_reuseFailAlloc_2892_, 8, v_infoState_2864_);
lean_ctor_set(v_reuseFailAlloc_2892_, 9, v_snapshotTasks_2865_);
v___x_2872_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v_mctx_2875_; lean_object* v_zetaDeltaFVarIds_2876_; lean_object* v_postponed_2877_; lean_object* v_diag_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2890_; 
v___x_2873_ = lean_st_ref_put(v___y_2847_, v___x_2872_);
v___x_2874_ = lean_st_ref_take(v___y_2845_);
v_mctx_2875_ = lean_ctor_get(v___x_2874_, 0);
v_zetaDeltaFVarIds_2876_ = lean_ctor_get(v___x_2874_, 2);
v_postponed_2877_ = lean_ctor_get(v___x_2874_, 3);
v_diag_2878_ = lean_ctor_get(v___x_2874_, 4);
v_isSharedCheck_2890_ = !lean_is_exclusive(v___x_2874_);
if (v_isSharedCheck_2890_ == 0)
{
lean_object* v_unused_2891_; 
v_unused_2891_ = lean_ctor_get(v___x_2874_, 1);
lean_dec(v_unused_2891_);
v___x_2880_ = v___x_2874_;
v_isShared_2881_ = v_isSharedCheck_2890_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_diag_2878_);
lean_inc(v_postponed_2877_);
lean_inc(v_zetaDeltaFVarIds_2876_);
lean_inc(v_mctx_2875_);
lean_dec(v___x_2874_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2890_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2882_; lean_object* v___x_2884_; 
v___x_2882_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__5, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__5_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__5);
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 1, v___x_2882_);
v___x_2884_ = v___x_2880_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_mctx_2875_);
lean_ctor_set(v_reuseFailAlloc_2889_, 1, v___x_2882_);
lean_ctor_set(v_reuseFailAlloc_2889_, 2, v_zetaDeltaFVarIds_2876_);
lean_ctor_set(v_reuseFailAlloc_2889_, 3, v_postponed_2877_);
lean_ctor_set(v_reuseFailAlloc_2889_, 4, v_diag_2878_);
v___x_2884_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
lean_object* v___x_2885_; lean_object* v___x_2887_; 
v___x_2885_ = lean_st_ref_put(v___y_2845_, v___x_2884_);
if (v_isShared_2851_ == 0)
{
lean_ctor_set(v___x_2850_, 0, v_declName_2841_);
v___x_2887_ = v___x_2850_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v_declName_2841_);
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
}
}
}
}
else
{
lean_object* v_a_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2904_; 
lean_dec(v_declName_2841_);
v_a_2897_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2899_ = v___x_2848_;
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_a_2897_);
lean_dec(v___x_2848_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2902_; 
if (v_isShared_2900_ == 0)
{
v___x_2902_ = v___x_2899_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2897_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4___boxed(lean_object* v_modifiers_2912_, lean_object* v_declName_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_){
_start:
{
lean_object* v_res_2921_; 
v_res_2921_ = l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(v_modifiers_2912_, v_declName_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
lean_dec(v___y_2917_);
lean_dec_ref(v___y_2916_);
lean_dec(v___y_2915_);
lean_dec_ref(v___y_2914_);
lean_dec_ref(v_modifiers_2912_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(lean_object* v_pre_2922_, lean_object* v_declName_2923_, lean_object* v_as_2924_, size_t v_sz_2925_, size_t v_i_2926_, lean_object* v_b_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_){
_start:
{
lean_object* v_a_2936_; uint8_t v___x_2940_; 
v___x_2940_ = lean_usize_dec_lt(v_i_2926_, v_sz_2925_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2941_; 
lean_dec(v_declName_2923_);
lean_dec(v_pre_2922_);
v___x_2941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2941_, 0, v_b_2927_);
return v___x_2941_;
}
else
{
lean_object* v___x_2942_; lean_object* v_a_2943_; lean_object* v___x_2944_; uint8_t v___x_2945_; 
v___x_2942_ = lean_box(0);
v_a_2943_ = lean_array_uget_borrowed(v_as_2924_, v_i_2926_);
lean_inc(v_a_2943_);
lean_inc(v_pre_2922_);
v___x_2944_ = l_Lean_Name_append(v_pre_2922_, v_a_2943_);
v___x_2945_ = lean_name_eq(v___x_2944_, v_declName_2923_);
lean_dec(v___x_2944_);
if (v___x_2945_ == 0)
{
v_a_2936_ = v___x_2942_;
goto v___jp_2935_;
}
else
{
lean_object* v___x_2946_; uint8_t v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2946_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_2947_ = 0;
lean_inc(v_declName_2923_);
v___x_2948_ = l_Lean_MessageData_ofConstName(v_declName_2923_, v___x_2947_);
v___x_2949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2946_);
lean_ctor_set(v___x_2949_, 1, v___x_2948_);
v___x_2950_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3);
v___x_2951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2949_);
lean_ctor_set(v___x_2951_, 1, v___x_2950_);
lean_inc(v_pre_2922_);
v___x_2952_ = l_Lean_MessageData_ofName(v_pre_2922_);
v___x_2953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2951_);
lean_ctor_set(v___x_2953_, 1, v___x_2952_);
v___x_2954_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5);
v___x_2955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2953_);
lean_ctor_set(v___x_2955_, 1, v___x_2954_);
lean_inc(v_a_2943_);
v___x_2956_ = l_Lean_MessageData_ofName(v_a_2943_);
v___x_2957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2955_);
lean_ctor_set(v___x_2957_, 1, v___x_2956_);
v___x_2958_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2957_);
lean_ctor_set(v___x_2959_, 1, v___x_2958_);
v___x_2960_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2959_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
if (lean_obj_tag(v___x_2960_) == 0)
{
lean_dec_ref_known(v___x_2960_, 1);
v_a_2936_ = v___x_2942_;
goto v___jp_2935_;
}
else
{
lean_dec(v_declName_2923_);
lean_dec(v_pre_2922_);
return v___x_2960_;
}
}
}
v___jp_2935_:
{
size_t v___x_2937_; size_t v___x_2938_; 
v___x_2937_ = ((size_t)1ULL);
v___x_2938_ = lean_usize_add(v_i_2926_, v___x_2937_);
v_i_2926_ = v___x_2938_;
v_b_2927_ = v_a_2936_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6___boxed(lean_object* v_pre_2961_, lean_object* v_declName_2962_, lean_object* v_as_2963_, lean_object* v_sz_2964_, lean_object* v_i_2965_, lean_object* v_b_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_){
_start:
{
size_t v_sz_boxed_2974_; size_t v_i_boxed_2975_; lean_object* v_res_2976_; 
v_sz_boxed_2974_ = lean_unbox_usize(v_sz_2964_);
lean_dec(v_sz_2964_);
v_i_boxed_2975_ = lean_unbox_usize(v_i_2965_);
lean_dec(v_i_2965_);
v_res_2976_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(v_pre_2961_, v_declName_2962_, v_as_2963_, v_sz_boxed_2974_, v_i_boxed_2975_, v_b_2966_, v___y_2967_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
lean_dec_ref(v_as_2963_);
return v_res_2976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(lean_object* v_declName_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_){
_start:
{
if (lean_obj_tag(v_declName_2977_) == 1)
{
lean_object* v_pre_2985_; lean_object* v___x_2986_; lean_object* v_env_2987_; uint8_t v___x_2988_; 
v_pre_2985_ = lean_ctor_get(v_declName_2977_, 0);
lean_inc_n(v_pre_2985_, 2);
v___x_2986_ = lean_st_ref_get(v___y_2983_);
v_env_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc_ref(v_env_2987_);
lean_dec(v___x_2986_);
v___x_2988_ = l_Lean_isStructure(v_env_2987_, v_pre_2985_);
if (v___x_2988_ == 0)
{
lean_object* v___x_2989_; lean_object* v___x_2990_; 
lean_dec_ref_known(v_declName_2977_, 2);
lean_dec(v_pre_2985_);
v___x_2989_ = lean_box(0);
v___x_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2989_);
return v___x_2990_;
}
else
{
lean_object* v___x_2991_; lean_object* v_env_2992_; lean_object* v_fieldNames_2993_; lean_object* v___x_2994_; size_t v_sz_2995_; size_t v___x_2996_; lean_object* v___x_2997_; 
v___x_2991_ = lean_st_ref_get(v___y_2983_);
v_env_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc_ref(v_env_2992_);
lean_dec(v___x_2991_);
lean_inc(v_pre_2985_);
v_fieldNames_2993_ = l_Lean_getStructureFieldsFlattened(v_env_2992_, v_pre_2985_, v___x_2988_);
v___x_2994_ = lean_box(0);
v_sz_2995_ = lean_array_size(v_fieldNames_2993_);
v___x_2996_ = ((size_t)0ULL);
v___x_2997_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(v_pre_2985_, v_declName_2977_, v_fieldNames_2993_, v_sz_2995_, v___x_2996_, v___x_2994_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_);
lean_dec_ref(v_fieldNames_2993_);
if (lean_obj_tag(v___x_2997_) == 0)
{
lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3004_; 
v_isSharedCheck_3004_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3004_ == 0)
{
lean_object* v_unused_3005_; 
v_unused_3005_ = lean_ctor_get(v___x_2997_, 0);
lean_dec(v_unused_3005_);
v___x_2999_ = v___x_2997_;
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
else
{
lean_dec(v___x_2997_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3002_; 
if (v_isShared_3000_ == 0)
{
lean_ctor_set(v___x_2999_, 0, v___x_2994_);
v___x_3002_ = v___x_2999_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v___x_2994_);
v___x_3002_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
return v___x_3002_;
}
}
}
else
{
return v___x_2997_;
}
}
}
else
{
lean_object* v___x_3006_; lean_object* v___x_3007_; 
lean_dec(v_declName_2977_);
v___x_3006_ = lean_box(0);
v___x_3007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3006_);
return v___x_3007_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3___boxed(lean_object* v_declName_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(v_declName_3008_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_);
lean_dec(v___y_3014_);
lean_dec_ref(v___y_3013_);
lean_dec(v___y_3012_);
lean_dec_ref(v___y_3011_);
lean_dec(v___y_3010_);
lean_dec_ref(v___y_3009_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(lean_object* v_currNamespace_3017_, lean_object* v_modifiers_3018_, lean_object* v_shortName_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_){
_start:
{
lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3033_; lean_object* v_shortName_3034_; lean_object* v_currNamespace_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v_view_3095_; lean_object* v_name_3096_; lean_object* v_imported_3097_; lean_object* v_ctx_3098_; lean_object* v_scopes_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3157_; 
lean_inc(v_shortName_3019_);
v_view_3095_ = l_Lean_extractMacroScopes(v_shortName_3019_);
v_name_3096_ = lean_ctor_get(v_view_3095_, 0);
v_imported_3097_ = lean_ctor_get(v_view_3095_, 1);
v_ctx_3098_ = lean_ctor_get(v_view_3095_, 2);
v_scopes_3099_ = lean_ctor_get(v_view_3095_, 3);
v_isSharedCheck_3157_ = !lean_is_exclusive(v_view_3095_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3101_ = v_view_3095_;
v_isShared_3102_ = v_isSharedCheck_3157_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_scopes_3099_);
lean_inc(v_ctx_3098_);
lean_inc(v_imported_3097_);
lean_inc(v_name_3096_);
lean_dec(v_view_3095_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3157_;
goto v_resetjp_3100_;
}
v___jp_3027_:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3030_, 0, v___y_3029_);
lean_ctor_set(v___x_3030_, 1, v___y_3028_);
v___x_3031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3031_, 0, v___x_3030_);
return v___x_3031_;
}
v___jp_3032_:
{
lean_object* v___x_3042_; 
lean_inc(v___y_3033_);
v___x_3042_ = l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(v___y_3033_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_, v___y_3041_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v___x_3043_; 
lean_dec_ref_known(v___x_3042_, 1);
v___x_3043_ = l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(v_modifiers_3018_, v___y_3033_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_, v___y_3041_);
if (lean_obj_tag(v___x_3043_) == 0)
{
uint8_t v_isProtected_3044_; 
v_isProtected_3044_ = lean_ctor_get_uint8(v_modifiers_3018_, sizeof(void*)*3 + 1);
if (v_isProtected_3044_ == 0)
{
lean_object* v_a_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3053_; 
lean_dec(v_currNamespace_3035_);
v_a_3045_ = lean_ctor_get(v___x_3043_, 0);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3043_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3047_ = v___x_3043_;
v_isShared_3048_ = v_isSharedCheck_3053_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_a_3045_);
lean_dec(v___x_3043_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3053_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3049_; lean_object* v___x_3051_; 
v___x_3049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3049_, 0, v_a_3045_);
lean_ctor_set(v___x_3049_, 1, v_shortName_3034_);
if (v_isShared_3048_ == 0)
{
lean_ctor_set(v___x_3047_, 0, v___x_3049_);
v___x_3051_ = v___x_3047_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v___x_3049_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
else
{
if (lean_obj_tag(v_currNamespace_3035_) == 1)
{
lean_object* v_a_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3066_; 
v_a_3054_ = lean_ctor_get(v___x_3043_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3043_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3056_ = v___x_3043_;
v_isShared_3057_ = v_isSharedCheck_3066_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_a_3054_);
lean_dec(v___x_3043_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3066_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v_str_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3064_; 
v_str_3058_ = lean_ctor_get(v_currNamespace_3035_, 1);
lean_inc_ref(v_str_3058_);
lean_dec_ref_known(v_currNamespace_3035_, 2);
v___x_3059_ = lean_box(0);
v___x_3060_ = l_Lean_Name_str___override(v___x_3059_, v_str_3058_);
v___x_3061_ = l_Lean_Name_append(v___x_3060_, v_shortName_3034_);
v___x_3062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3062_, 0, v_a_3054_);
lean_ctor_set(v___x_3062_, 1, v___x_3061_);
if (v_isShared_3057_ == 0)
{
lean_ctor_set(v___x_3056_, 0, v___x_3062_);
v___x_3064_ = v___x_3056_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v___x_3062_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
else
{
lean_object* v_a_3067_; uint8_t v___x_3068_; 
lean_dec(v_currNamespace_3035_);
v_a_3067_ = lean_ctor_get(v___x_3043_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3043_, 1);
v___x_3068_ = l_Lean_Name_isAtomic(v_shortName_3034_);
if (v___x_3068_ == 0)
{
v___y_3028_ = v_shortName_3034_;
v___y_3029_ = v_a_3067_;
goto v___jp_3027_;
}
else
{
lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v_a_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3078_; 
lean_dec(v_a_3067_);
lean_dec(v_shortName_3034_);
v___x_3069_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1, &l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1);
v___x_3070_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_3069_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_, v___y_3041_);
v_a_3071_ = lean_ctor_get(v___x_3070_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3070_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3073_ = v___x_3070_;
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_a_3071_);
lean_dec(v___x_3070_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3076_; 
if (v_isShared_3074_ == 0)
{
v___x_3076_ = v___x_3073_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_a_3071_);
v___x_3076_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
return v___x_3076_;
}
}
}
}
}
}
else
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3086_; 
lean_dec(v_currNamespace_3035_);
lean_dec(v_shortName_3034_);
v_a_3079_ = lean_ctor_get(v___x_3043_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___x_3043_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3081_ = v___x_3043_;
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___x_3043_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___x_3084_; 
if (v_isShared_3082_ == 0)
{
v___x_3084_ = v___x_3081_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_a_3079_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
}
else
{
lean_object* v_a_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3094_; 
lean_dec(v_currNamespace_3035_);
lean_dec(v_shortName_3034_);
lean_dec(v___y_3033_);
v_a_3087_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3094_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3089_ = v___x_3042_;
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_a_3087_);
lean_dec(v___x_3042_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3092_; 
if (v_isShared_3090_ == 0)
{
v___x_3092_ = v___x_3089_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_a_3087_);
v___x_3092_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
return v___x_3092_;
}
}
}
}
v_resetjp_3100_:
{
lean_object* v___x_3103_; uint8_t v_isRootName_3104_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3109_; lean_object* v___y_3110_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3133_; lean_object* v___y_3134_; lean_object* v___y_3135_; lean_object* v___y_3136_; lean_object* v___y_3137_; lean_object* v___y_3138_; uint8_t v___x_3146_; 
v___x_3103_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___closed__1));
v_isRootName_3104_ = l_Lean_Name_isPrefixOf(v___x_3103_, v_name_3096_);
v___x_3146_ = lean_name_eq(v_name_3096_, v___x_3103_);
if (v___x_3146_ == 0)
{
v___y_3133_ = v___y_3020_;
v___y_3134_ = v___y_3021_;
v___y_3135_ = v___y_3022_;
v___y_3136_ = v___y_3023_;
v___y_3137_ = v___y_3024_;
v___y_3138_ = v___y_3025_;
goto v___jp_3132_;
}
else
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_del_object(v___x_3101_);
lean_dec(v_scopes_3099_);
lean_dec(v_ctx_3098_);
lean_dec(v_imported_3097_);
lean_dec(v_name_3096_);
lean_dec(v_shortName_3019_);
lean_dec(v_currNamespace_3017_);
v___x_3147_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___closed__3, &l_Lean_Elab_mkDeclName___redArg___closed__3_once, _init_l_Lean_Elab_mkDeclName___redArg___closed__3);
v___x_3148_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_3147_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3148_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3148_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
v___jp_3105_:
{
if (v_isRootName_3104_ == 0)
{
lean_dec(v_name_3096_);
v___y_3033_ = v___y_3112_;
v_shortName_3034_ = v_shortName_3019_;
v_currNamespace_3035_ = v_currNamespace_3017_;
v___y_3036_ = v___y_3108_;
v___y_3037_ = v___y_3110_;
v___y_3038_ = v___y_3107_;
v___y_3039_ = v___y_3106_;
v___y_3040_ = v___y_3111_;
v___y_3041_ = v___y_3109_;
goto v___jp_3032_;
}
else
{
lean_dec(v_shortName_3019_);
lean_dec(v_currNamespace_3017_);
if (lean_obj_tag(v_name_3096_) == 1)
{
lean_object* v_pre_3113_; lean_object* v_str_3114_; lean_object* v___x_3115_; lean_object* v_shortName_3116_; lean_object* v_currNamespace_3117_; 
v_pre_3113_ = lean_ctor_get(v_name_3096_, 0);
lean_inc(v_pre_3113_);
v_str_3114_ = lean_ctor_get(v_name_3096_, 1);
lean_inc_ref(v_str_3114_);
lean_dec_ref_known(v_name_3096_, 2);
v___x_3115_ = lean_box(0);
v_shortName_3116_ = l_Lean_Name_str___override(v___x_3115_, v_str_3114_);
v_currNamespace_3117_ = l_Lean_Name_replacePrefix(v_pre_3113_, v___x_3103_, v___x_3115_);
v___y_3033_ = v___y_3112_;
v_shortName_3034_ = v_shortName_3116_;
v_currNamespace_3035_ = v_currNamespace_3117_;
v___y_3036_ = v___y_3108_;
v___y_3037_ = v___y_3110_;
v___y_3038_ = v___y_3107_;
v___y_3039_ = v___y_3106_;
v___y_3040_ = v___y_3111_;
v___y_3041_ = v___y_3109_;
goto v___jp_3032_;
}
else
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v_a_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3131_; 
lean_dec(v___y_3112_);
v___x_3118_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_3119_ = l_Lean_MessageData_ofName(v_name_3096_);
v___x_3120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3120_, 0, v___x_3118_);
lean_ctor_set(v___x_3120_, 1, v___x_3119_);
v___x_3121_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_3122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3120_);
lean_ctor_set(v___x_3122_, 1, v___x_3121_);
v___x_3123_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_3122_, v___y_3108_, v___y_3110_, v___y_3107_, v___y_3106_, v___y_3111_, v___y_3109_);
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3126_ = v___x_3123_;
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_a_3124_);
lean_dec(v___x_3123_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v___x_3129_; 
if (v_isShared_3127_ == 0)
{
v___x_3129_ = v___x_3126_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_a_3124_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
}
}
v___jp_3132_:
{
if (v_isRootName_3104_ == 0)
{
lean_object* v___x_3139_; 
lean_del_object(v___x_3101_);
lean_dec(v_scopes_3099_);
lean_dec(v_ctx_3098_);
lean_dec(v_imported_3097_);
lean_inc(v_shortName_3019_);
lean_inc(v_currNamespace_3017_);
v___x_3139_ = l_Lean_Name_append(v_currNamespace_3017_, v_shortName_3019_);
v___y_3106_ = v___y_3136_;
v___y_3107_ = v___y_3135_;
v___y_3108_ = v___y_3133_;
v___y_3109_ = v___y_3138_;
v___y_3110_ = v___y_3134_;
v___y_3111_ = v___y_3137_;
v___y_3112_ = v___x_3139_;
goto v___jp_3105_;
}
else
{
lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3143_; 
v___x_3140_ = lean_box(0);
lean_inc(v_name_3096_);
v___x_3141_ = l_Lean_Name_replacePrefix(v_name_3096_, v___x_3103_, v___x_3140_);
if (v_isShared_3102_ == 0)
{
lean_ctor_set(v___x_3101_, 0, v___x_3141_);
v___x_3143_ = v___x_3101_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v___x_3141_);
lean_ctor_set(v_reuseFailAlloc_3145_, 1, v_imported_3097_);
lean_ctor_set(v_reuseFailAlloc_3145_, 2, v_ctx_3098_);
lean_ctor_set(v_reuseFailAlloc_3145_, 3, v_scopes_3099_);
v___x_3143_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
lean_object* v___x_3144_; 
v___x_3144_ = l_Lean_MacroScopesView_review(v___x_3143_);
v___y_3106_ = v___y_3136_;
v___y_3107_ = v___y_3135_;
v___y_3108_ = v___y_3133_;
v___y_3109_ = v___y_3138_;
v___y_3110_ = v___y_3134_;
v___y_3111_ = v___y_3137_;
v___y_3112_ = v___x_3144_;
goto v___jp_3105_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2___boxed(lean_object* v_currNamespace_3158_, lean_object* v_modifiers_3159_, lean_object* v_shortName_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_){
_start:
{
lean_object* v_res_3168_; 
v_res_3168_ = l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(v_currNamespace_3158_, v_modifiers_3159_, v_shortName_3160_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_);
lean_dec(v___y_3166_);
lean_dec_ref(v___y_3165_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec_ref(v_modifiers_3159_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(uint8_t v___x_3169_, lean_object* v_as_3170_, size_t v_i_3171_, size_t v_stop_3172_, lean_object* v_b_3173_){
_start:
{
lean_object* v___y_3175_; uint8_t v___x_3179_; 
v___x_3179_ = lean_usize_dec_eq(v_i_3171_, v_stop_3172_);
if (v___x_3179_ == 0)
{
lean_object* v_fst_3180_; uint8_t v___x_3181_; 
v_fst_3180_ = lean_ctor_get(v_b_3173_, 0);
v___x_3181_ = lean_unbox(v_fst_3180_);
if (v___x_3181_ == 0)
{
lean_object* v_snd_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3191_; 
v_snd_3182_ = lean_ctor_get(v_b_3173_, 1);
v_isSharedCheck_3191_ = !lean_is_exclusive(v_b_3173_);
if (v_isSharedCheck_3191_ == 0)
{
lean_object* v_unused_3192_; 
v_unused_3192_ = lean_ctor_get(v_b_3173_, 0);
lean_dec(v_unused_3192_);
v___x_3184_ = v_b_3173_;
v_isShared_3185_ = v_isSharedCheck_3191_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_snd_3182_);
lean_dec(v_b_3173_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3191_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
uint8_t v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3189_; 
v___x_3186_ = 1;
v___x_3187_ = lean_box(v___x_3186_);
if (v_isShared_3185_ == 0)
{
lean_ctor_set(v___x_3184_, 0, v___x_3187_);
v___x_3189_ = v___x_3184_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v___x_3187_);
lean_ctor_set(v_reuseFailAlloc_3190_, 1, v_snd_3182_);
v___x_3189_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
v___y_3175_ = v___x_3189_;
goto v___jp_3174_;
}
}
}
else
{
lean_object* v_snd_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3203_; 
v_snd_3193_ = lean_ctor_get(v_b_3173_, 1);
v_isSharedCheck_3203_ = !lean_is_exclusive(v_b_3173_);
if (v_isSharedCheck_3203_ == 0)
{
lean_object* v_unused_3204_; 
v_unused_3204_ = lean_ctor_get(v_b_3173_, 0);
lean_dec(v_unused_3204_);
v___x_3195_ = v_b_3173_;
v_isShared_3196_ = v_isSharedCheck_3203_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_snd_3193_);
lean_dec(v_b_3173_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3203_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3201_; 
v___x_3197_ = lean_array_uget_borrowed(v_as_3170_, v_i_3171_);
lean_inc(v___x_3197_);
v___x_3198_ = lean_array_push(v_snd_3193_, v___x_3197_);
v___x_3199_ = lean_box(v___x_3169_);
if (v_isShared_3196_ == 0)
{
lean_ctor_set(v___x_3195_, 1, v___x_3198_);
lean_ctor_set(v___x_3195_, 0, v___x_3199_);
v___x_3201_ = v___x_3195_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v___x_3199_);
lean_ctor_set(v_reuseFailAlloc_3202_, 1, v___x_3198_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
v___y_3175_ = v___x_3201_;
goto v___jp_3174_;
}
}
}
}
else
{
return v_b_3173_;
}
v___jp_3174_:
{
size_t v___x_3176_; size_t v___x_3177_; 
v___x_3176_ = ((size_t)1ULL);
v___x_3177_ = lean_usize_add(v_i_3171_, v___x_3176_);
v_i_3171_ = v___x_3177_;
v_b_3173_ = v___y_3175_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4___boxed(lean_object* v___x_3205_, lean_object* v_as_3206_, lean_object* v_i_3207_, lean_object* v_stop_3208_, lean_object* v_b_3209_){
_start:
{
uint8_t v___x_18665__boxed_3210_; size_t v_i_boxed_3211_; size_t v_stop_boxed_3212_; lean_object* v_res_3213_; 
v___x_18665__boxed_3210_ = lean_unbox(v___x_3205_);
v_i_boxed_3211_ = lean_unbox_usize(v_i_3207_);
lean_dec(v_i_3207_);
v_stop_boxed_3212_ = lean_unbox_usize(v_stop_3208_);
lean_dec(v_stop_3208_);
v_res_3213_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(v___x_18665__boxed_3210_, v_as_3206_, v_i_boxed_3211_, v_stop_boxed_3212_, v_b_3209_);
lean_dec_ref(v_as_3206_);
return v_res_3213_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(lean_object* v_a_3214_, lean_object* v_x_3215_){
_start:
{
if (lean_obj_tag(v_x_3215_) == 0)
{
uint8_t v___x_3216_; 
v___x_3216_ = 0;
return v___x_3216_;
}
else
{
lean_object* v_head_3217_; lean_object* v_tail_3218_; uint8_t v___x_3219_; 
v_head_3217_ = lean_ctor_get(v_x_3215_, 0);
v_tail_3218_ = lean_ctor_get(v_x_3215_, 1);
v___x_3219_ = lean_name_eq(v_a_3214_, v_head_3217_);
if (v___x_3219_ == 0)
{
v_x_3215_ = v_tail_3218_;
goto _start;
}
else
{
return v___x_3219_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_expandDeclId_spec__0___boxed(lean_object* v_a_3221_, lean_object* v_x_3222_){
_start:
{
uint8_t v_res_3223_; lean_object* v_r_3224_; 
v_res_3223_ = l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(v_a_3221_, v_x_3222_);
lean_dec(v_x_3222_);
lean_dec(v_a_3221_);
v_r_3224_ = lean_box(v_res_3223_);
return v_r_3224_;
}
}
static lean_object* _init_l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3226_; lean_object* v___x_3227_; 
v___x_3226_ = ((lean_object*)(l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0));
v___x_3227_ = l_Lean_stringToMessageData(v___x_3226_);
return v___x_3227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(lean_object* v_u_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_){
_start:
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3236_ = lean_obj_once(&l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1, &l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1);
v___x_3237_ = l_Lean_MessageData_ofName(v_u_3228_);
v___x_3238_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3238_, 0, v___x_3236_);
lean_ctor_set(v___x_3238_, 1, v___x_3237_);
v___x_3239_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_3240_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3238_);
lean_ctor_set(v___x_3240_, 1, v___x_3239_);
v___x_3241_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_3240_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_);
return v___x_3241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___boxed(lean_object* v_u_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(v_u_3242_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_);
lean_dec(v___y_3248_);
lean_dec_ref(v___y_3247_);
lean_dec(v___y_3246_);
lean_dec_ref(v___y_3245_);
lean_dec(v___y_3244_);
lean_dec_ref(v___y_3243_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(lean_object* v_as_3251_, size_t v_i_3252_, size_t v_stop_3253_, lean_object* v_b_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_){
_start:
{
lean_object* v_a_3263_; uint8_t v___x_3267_; 
v___x_3267_ = lean_usize_dec_eq(v_i_3252_, v_stop_3253_);
if (v___x_3267_ == 0)
{
lean_object* v___x_3268_; lean_object* v_id_3269_; uint8_t v___x_3270_; 
v___x_3268_ = lean_array_uget_borrowed(v_as_3251_, v_i_3252_);
v_id_3269_ = l_Lean_Syntax_getId(v___x_3268_);
v___x_3270_ = l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(v_id_3269_, v_b_3254_);
if (v___x_3270_ == 0)
{
lean_object* v___x_3271_; 
v___x_3271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3271_, 0, v_id_3269_);
lean_ctor_set(v___x_3271_, 1, v_b_3254_);
v_a_3263_ = v___x_3271_;
goto v___jp_3262_;
}
else
{
lean_object* v_toCold_3272_; lean_object* v_currRecDepth_3273_; lean_object* v_ref_3274_; uint16_t v_optionFlags_3275_; uint8_t v_suppressElabErrors_3276_; uint8_t v_checkDeprecated_3277_; uint8_t v_isRecordingDeps_3278_; lean_object* v_ref_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; 
lean_dec(v_b_3254_);
v_toCold_3272_ = lean_ctor_get(v___y_3259_, 0);
v_currRecDepth_3273_ = lean_ctor_get(v___y_3259_, 1);
v_ref_3274_ = lean_ctor_get(v___y_3259_, 2);
v_optionFlags_3275_ = lean_ctor_get_uint16(v___y_3259_, sizeof(void*)*3);
v_suppressElabErrors_3276_ = lean_ctor_get_uint8(v___y_3259_, sizeof(void*)*3 + 2);
v_checkDeprecated_3277_ = lean_ctor_get_uint8(v___y_3259_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3278_ = lean_ctor_get_uint8(v___y_3259_, sizeof(void*)*3 + 4);
v_ref_3279_ = l_Lean_replaceRef(v___x_3268_, v_ref_3274_);
lean_inc(v_currRecDepth_3273_);
lean_inc_ref(v_toCold_3272_);
v___x_3280_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3280_, 0, v_toCold_3272_);
lean_ctor_set(v___x_3280_, 1, v_currRecDepth_3273_);
lean_ctor_set(v___x_3280_, 2, v_ref_3279_);
lean_ctor_set_uint16(v___x_3280_, sizeof(void*)*3, v_optionFlags_3275_);
lean_ctor_set_uint8(v___x_3280_, sizeof(void*)*3 + 2, v_suppressElabErrors_3276_);
lean_ctor_set_uint8(v___x_3280_, sizeof(void*)*3 + 3, v_checkDeprecated_3277_);
lean_ctor_set_uint8(v___x_3280_, sizeof(void*)*3 + 4, v_isRecordingDeps_3278_);
v___x_3281_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(v_id_3269_, v___y_3255_, v___y_3256_, v___y_3257_, v___y_3258_, v___x_3280_, v___y_3260_);
lean_dec_ref_known(v___x_3280_, 3);
if (lean_obj_tag(v___x_3281_) == 0)
{
lean_object* v_a_3282_; 
v_a_3282_ = lean_ctor_get(v___x_3281_, 0);
lean_inc(v_a_3282_);
lean_dec_ref_known(v___x_3281_, 1);
v_a_3263_ = v_a_3282_;
goto v___jp_3262_;
}
else
{
return v___x_3281_;
}
}
}
else
{
lean_object* v___x_3283_; 
v___x_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3283_, 0, v_b_3254_);
return v___x_3283_;
}
v___jp_3262_:
{
size_t v___x_3264_; size_t v___x_3265_; 
v___x_3264_ = ((size_t)1ULL);
v___x_3265_ = lean_usize_add(v_i_3252_, v___x_3264_);
v_i_3252_ = v___x_3265_;
v_b_3254_ = v_a_3263_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3___boxed(lean_object* v_as_3284_, lean_object* v_i_3285_, lean_object* v_stop_3286_, lean_object* v_b_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_){
_start:
{
size_t v_i_boxed_3295_; size_t v_stop_boxed_3296_; lean_object* v_res_3297_; 
v_i_boxed_3295_ = lean_unbox_usize(v_i_3285_);
lean_dec(v_i_3285_);
v_stop_boxed_3296_ = lean_unbox_usize(v_stop_3286_);
lean_dec(v_stop_3286_);
v_res_3297_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(v_as_3284_, v_i_boxed_3295_, v_stop_boxed_3296_, v_b_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
lean_dec(v___y_3291_);
lean_dec_ref(v___y_3290_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
lean_dec_ref(v_as_3284_);
return v_res_3297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId(lean_object* v_currNamespace_3298_, lean_object* v_currLevelNames_3299_, lean_object* v_declId_3300_, lean_object* v_modifiers_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_, lean_object* v_a_3307_){
_start:
{
lean_object* v___x_3309_; lean_object* v_fst_3310_; lean_object* v_snd_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3386_; 
v___x_3309_ = l_Lean_Elab_expandDeclIdCore(v_declId_3300_);
v_fst_3310_ = lean_ctor_get(v___x_3309_, 0);
v_snd_3311_ = lean_ctor_get(v___x_3309_, 1);
v_isSharedCheck_3386_ = !lean_is_exclusive(v___x_3309_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3313_ = v___x_3309_;
v_isShared_3314_ = v_isSharedCheck_3386_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_snd_3311_);
lean_inc(v_fst_3310_);
lean_dec(v___x_3309_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3386_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v_levelNames_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; lean_object* v___y_3354_; uint8_t v___x_3370_; 
v___x_3370_ = l_Lean_Syntax_isNone(v_snd_3311_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; uint8_t v___x_3377_; 
v___x_3371_ = lean_unsigned_to_nat(1u);
v___x_3372_ = l_Lean_Syntax_getArg(v_snd_3311_, v___x_3371_);
lean_dec(v_snd_3311_);
v___x_3373_ = l_Lean_Syntax_getArgs(v___x_3372_);
lean_dec(v___x_3372_);
v___x_3374_ = lean_unsigned_to_nat(0u);
v___x_3375_ = ((lean_object*)(l_Lean_Elab_expandDeclIdCore___closed__0));
v___x_3376_ = lean_array_get_size(v___x_3373_);
v___x_3377_ = lean_nat_dec_lt(v___x_3374_, v___x_3376_);
if (v___x_3377_ == 0)
{
lean_dec_ref(v___x_3373_);
lean_del_object(v___x_3313_);
v___y_3354_ = v___x_3375_;
goto v___jp_3353_;
}
else
{
lean_object* v___x_3378_; lean_object* v___x_3380_; 
v___x_3378_ = lean_box(v___x_3377_);
if (v_isShared_3314_ == 0)
{
lean_ctor_set(v___x_3313_, 1, v___x_3375_);
lean_ctor_set(v___x_3313_, 0, v___x_3378_);
v___x_3380_ = v___x_3313_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v___x_3378_);
lean_ctor_set(v_reuseFailAlloc_3385_, 1, v___x_3375_);
v___x_3380_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
size_t v___x_3381_; size_t v___x_3382_; lean_object* v___x_3383_; lean_object* v_snd_3384_; 
v___x_3381_ = ((size_t)0ULL);
v___x_3382_ = lean_usize_of_nat(v___x_3376_);
v___x_3383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(v___x_3370_, v___x_3373_, v___x_3381_, v___x_3382_, v___x_3380_);
lean_dec_ref(v___x_3373_);
v_snd_3384_ = lean_ctor_get(v___x_3383_, 1);
lean_inc(v_snd_3384_);
lean_dec_ref(v___x_3383_);
v___y_3354_ = v_snd_3384_;
goto v___jp_3353_;
}
}
}
else
{
lean_del_object(v___x_3313_);
lean_dec(v_snd_3311_);
v_levelNames_3316_ = v_currLevelNames_3299_;
v___y_3317_ = v_a_3302_;
v___y_3318_ = v_a_3303_;
v___y_3319_ = v_a_3304_;
v___y_3320_ = v_a_3305_;
v___y_3321_ = v_a_3306_;
v___y_3322_ = v_a_3307_;
goto v___jp_3315_;
}
v___jp_3315_:
{
lean_object* v_toCold_3323_; lean_object* v_currRecDepth_3324_; lean_object* v_ref_3325_; uint16_t v_optionFlags_3326_; uint8_t v_suppressElabErrors_3327_; uint8_t v_checkDeprecated_3328_; uint8_t v_isRecordingDeps_3329_; lean_object* v_ref_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v_toCold_3323_ = lean_ctor_get(v___y_3321_, 0);
v_currRecDepth_3324_ = lean_ctor_get(v___y_3321_, 1);
v_ref_3325_ = lean_ctor_get(v___y_3321_, 2);
v_optionFlags_3326_ = lean_ctor_get_uint16(v___y_3321_, sizeof(void*)*3);
v_suppressElabErrors_3327_ = lean_ctor_get_uint8(v___y_3321_, sizeof(void*)*3 + 2);
v_checkDeprecated_3328_ = lean_ctor_get_uint8(v___y_3321_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3329_ = lean_ctor_get_uint8(v___y_3321_, sizeof(void*)*3 + 4);
v_ref_3330_ = l_Lean_replaceRef(v_declId_3300_, v_ref_3325_);
lean_inc(v_currRecDepth_3324_);
lean_inc_ref(v_toCold_3323_);
v___x_3331_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3331_, 0, v_toCold_3323_);
lean_ctor_set(v___x_3331_, 1, v_currRecDepth_3324_);
lean_ctor_set(v___x_3331_, 2, v_ref_3330_);
lean_ctor_set_uint16(v___x_3331_, sizeof(void*)*3, v_optionFlags_3326_);
lean_ctor_set_uint8(v___x_3331_, sizeof(void*)*3 + 2, v_suppressElabErrors_3327_);
lean_ctor_set_uint8(v___x_3331_, sizeof(void*)*3 + 3, v_checkDeprecated_3328_);
lean_ctor_set_uint8(v___x_3331_, sizeof(void*)*3 + 4, v_isRecordingDeps_3329_);
v___x_3332_ = l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(v_currNamespace_3298_, v_modifiers_3301_, v_fst_3310_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_, v___x_3331_, v___y_3322_);
lean_dec_ref_known(v___x_3331_, 3);
if (lean_obj_tag(v___x_3332_) == 0)
{
lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3344_; 
v_a_3333_ = lean_ctor_get(v___x_3332_, 0);
v_isSharedCheck_3344_ = !lean_is_exclusive(v___x_3332_);
if (v_isSharedCheck_3344_ == 0)
{
v___x_3335_ = v___x_3332_;
v_isShared_3336_ = v_isSharedCheck_3344_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v___x_3332_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3344_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v_fst_3337_; lean_object* v_snd_3338_; lean_object* v_docString_x3f_3339_; lean_object* v___x_3340_; lean_object* v___x_3342_; 
v_fst_3337_ = lean_ctor_get(v_a_3333_, 0);
lean_inc(v_fst_3337_);
v_snd_3338_ = lean_ctor_get(v_a_3333_, 1);
lean_inc(v_snd_3338_);
lean_dec(v_a_3333_);
v_docString_x3f_3339_ = lean_ctor_get(v_modifiers_3301_, 1);
lean_inc(v_docString_x3f_3339_);
v___x_3340_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3340_, 0, v_snd_3338_);
lean_ctor_set(v___x_3340_, 1, v_fst_3337_);
lean_ctor_set(v___x_3340_, 2, v_levelNames_3316_);
lean_ctor_set(v___x_3340_, 3, v_docString_x3f_3339_);
if (v_isShared_3336_ == 0)
{
lean_ctor_set(v___x_3335_, 0, v___x_3340_);
v___x_3342_ = v___x_3335_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v___x_3340_);
v___x_3342_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
return v___x_3342_;
}
}
}
else
{
lean_object* v_a_3345_; lean_object* v___x_3347_; uint8_t v_isShared_3348_; uint8_t v_isSharedCheck_3352_; 
lean_dec(v_levelNames_3316_);
v_a_3345_ = lean_ctor_get(v___x_3332_, 0);
v_isSharedCheck_3352_ = !lean_is_exclusive(v___x_3332_);
if (v_isSharedCheck_3352_ == 0)
{
v___x_3347_ = v___x_3332_;
v_isShared_3348_ = v_isSharedCheck_3352_;
goto v_resetjp_3346_;
}
else
{
lean_inc(v_a_3345_);
lean_dec(v___x_3332_);
v___x_3347_ = lean_box(0);
v_isShared_3348_ = v_isSharedCheck_3352_;
goto v_resetjp_3346_;
}
v_resetjp_3346_:
{
lean_object* v___x_3350_; 
if (v_isShared_3348_ == 0)
{
v___x_3350_ = v___x_3347_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v_a_3345_);
v___x_3350_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
return v___x_3350_;
}
}
}
}
v___jp_3353_:
{
lean_object* v___x_3355_; lean_object* v___x_3356_; uint8_t v___x_3357_; 
v___x_3355_ = lean_unsigned_to_nat(0u);
v___x_3356_ = lean_array_get_size(v___y_3354_);
v___x_3357_ = lean_nat_dec_lt(v___x_3355_, v___x_3356_);
if (v___x_3357_ == 0)
{
lean_dec_ref(v___y_3354_);
v_levelNames_3316_ = v_currLevelNames_3299_;
v___y_3317_ = v_a_3302_;
v___y_3318_ = v_a_3303_;
v___y_3319_ = v_a_3304_;
v___y_3320_ = v_a_3305_;
v___y_3321_ = v_a_3306_;
v___y_3322_ = v_a_3307_;
goto v___jp_3315_;
}
else
{
size_t v___x_3358_; size_t v___x_3359_; lean_object* v___x_3360_; 
v___x_3358_ = ((size_t)0ULL);
v___x_3359_ = lean_usize_of_nat(v___x_3356_);
v___x_3360_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(v___y_3354_, v___x_3358_, v___x_3359_, v_currLevelNames_3299_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_);
lean_dec_ref(v___y_3354_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_object* v_a_3361_; 
v_a_3361_ = lean_ctor_get(v___x_3360_, 0);
lean_inc(v_a_3361_);
lean_dec_ref_known(v___x_3360_, 1);
v_levelNames_3316_ = v_a_3361_;
v___y_3317_ = v_a_3302_;
v___y_3318_ = v_a_3303_;
v___y_3319_ = v_a_3304_;
v___y_3320_ = v_a_3305_;
v___y_3321_ = v_a_3306_;
v___y_3322_ = v_a_3307_;
goto v___jp_3315_;
}
else
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
lean_dec(v_fst_3310_);
lean_dec(v_currNamespace_3298_);
v_a_3362_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3360_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3360_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_a_3362_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId___boxed(lean_object* v_currNamespace_3387_, lean_object* v_currLevelNames_3388_, lean_object* v_declId_3389_, lean_object* v_modifiers_3390_, lean_object* v_a_3391_, lean_object* v_a_3392_, lean_object* v_a_3393_, lean_object* v_a_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_){
_start:
{
lean_object* v_res_3398_; 
v_res_3398_ = l_Lean_Elab_expandDeclId(v_currNamespace_3387_, v_currLevelNames_3388_, v_declId_3389_, v_modifiers_3390_, v_a_3391_, v_a_3392_, v_a_3393_, v_a_3394_, v_a_3395_, v_a_3396_);
lean_dec(v_a_3396_);
lean_dec_ref(v_a_3395_);
lean_dec(v_a_3394_);
lean_dec_ref(v_a_3393_);
lean_dec(v_a_3392_);
lean_dec_ref(v_a_3391_);
lean_dec_ref(v_modifiers_3390_);
lean_dec(v_declId_3389_);
return v_res_3398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1(lean_object* v_00_u03b1_3399_, lean_object* v_u_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_){
_start:
{
lean_object* v___x_3408_; 
v___x_3408_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(v_u_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_);
return v___x_3408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___boxed(lean_object* v_00_u03b1_3409_, lean_object* v_u_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_){
_start:
{
lean_object* v_res_3418_; 
v_res_3418_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1(v_00_u03b1_3409_, v_u_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
lean_dec(v___y_3416_);
lean_dec_ref(v___y_3415_);
lean_dec(v___y_3414_);
lean_dec_ref(v___y_3413_);
lean_dec(v___y_3412_);
lean_dec_ref(v___y_3411_);
return v_res_3418_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1(lean_object* v_00_u03b1_3419_, lean_object* v_msg_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_){
_start:
{
lean_object* v___x_3428_; 
v___x_3428_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v_msg_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_);
return v___x_3428_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___boxed(lean_object* v_00_u03b1_3429_, lean_object* v_msg_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_){
_start:
{
lean_object* v_res_3438_; 
v_res_3438_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1(v_00_u03b1_3429_, v_msg_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
lean_dec(v___y_3432_);
lean_dec_ref(v___y_3431_);
return v_res_3438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3(lean_object* v_msgData_3439_, lean_object* v_macroStack_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_){
_start:
{
lean_object* v___x_3448_; 
v___x_3448_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(v_msgData_3439_, v_macroStack_3440_, v___y_3445_);
return v___x_3448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___boxed(lean_object* v_msgData_3449_, lean_object* v_macroStack_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_){
_start:
{
lean_object* v_res_3458_; 
v_res_3458_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3(v_msgData_3449_, v_macroStack_3450_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
lean_dec(v___y_3456_);
lean_dec_ref(v___y_3455_);
lean_dec(v___y_3454_);
lean_dec_ref(v___y_3453_);
lean_dec(v___y_3452_);
lean_dec_ref(v___y_3451_);
return v_res_3458_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9_spec__17(lean_object* v_00_u03b2_3459_){
_start:
{
lean_object* v___x_3460_; 
v___x_3460_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2);
return v___x_3460_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9___redArg(){
_start:
{
lean_object* v___x_3462_; 
v___x_3462_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2);
return v___x_3462_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9___redArg___boxed(lean_object* v___dummy_3463_){
_start:
{
lean_object* v_res_3464_; 
v_res_3464_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9___redArg();
return v_res_3464_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__9(lean_object* v_00_u03b2_3465_){
_start:
{
lean_object* v___x_3466_; 
v___x_3466_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2);
return v___x_3466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17(lean_object* v_t_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_){
_start:
{
lean_object* v___x_3475_; 
v___x_3475_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(v_t_3467_, v___y_3473_);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___boxed(lean_object* v_t_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_){
_start:
{
lean_object* v_res_3484_; 
v_res_3484_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17(v_t_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_);
lean_dec(v___y_3482_);
lean_dec_ref(v___y_3481_);
lean_dec(v___y_3480_);
lean_dec_ref(v___y_3479_);
lean_dec(v___y_3478_);
lean_dec_ref(v___y_3477_);
return v_res_3484_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15(lean_object* v_00_u03b1_3485_, lean_object* v_env_3486_, lean_object* v_x_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_){
_start:
{
lean_object* v___x_3495_; 
v___x_3495_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_3486_, v_x_3487_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_, v___y_3492_, v___y_3493_);
return v___x_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___boxed(lean_object* v_00_u03b1_3496_, lean_object* v_env_3497_, lean_object* v_x_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_){
_start:
{
lean_object* v_res_3506_; 
v_res_3506_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15(v_00_u03b1_3496_, v_env_3497_, v_x_3498_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_);
lean_dec(v___y_3504_);
lean_dec_ref(v___y_3503_);
lean_dec(v___y_3502_);
lean_dec_ref(v___y_3501_);
lean_dec(v___y_3500_);
lean_dec_ref(v___y_3499_);
return v_res_3506_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19(lean_object* v_env_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_){
_start:
{
lean_object* v___x_3515_; 
v___x_3515_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_3507_, v___y_3511_, v___y_3513_);
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___boxed(lean_object* v_env_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_){
_start:
{
lean_object* v_res_3524_; 
v_res_3524_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19(v_env_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_);
lean_dec(v___y_3522_);
lean_dec_ref(v___y_3521_);
lean_dec(v___y_3520_);
lean_dec_ref(v___y_3519_);
lean_dec(v___y_3518_);
lean_dec_ref(v___y_3517_);
return v_res_3524_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17(lean_object* v_00_u03b1_3525_, lean_object* v_constName_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_){
_start:
{
lean_object* v___x_3534_; 
v___x_3534_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17___redArg(v_constName_3526_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_);
return v___x_3534_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17___boxed(lean_object* v_00_u03b1_3535_, lean_object* v_constName_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17(v_00_u03b1_3535_, v_constName_3536_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_, v___y_3542_);
lean_dec(v___y_3542_);
lean_dec_ref(v___y_3541_);
lean_dec(v___y_3540_);
lean_dec_ref(v___y_3539_);
lean_dec(v___y_3538_);
lean_dec_ref(v___y_3537_);
return v_res_3544_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21(lean_object* v_00_u03b1_3545_, lean_object* v_ref_3546_, lean_object* v_constName_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_){
_start:
{
lean_object* v___x_3555_; 
v___x_3555_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___redArg(v_ref_3546_, v_constName_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_, v___y_3552_, v___y_3553_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21___boxed(lean_object* v_00_u03b1_3556_, lean_object* v_ref_3557_, lean_object* v_constName_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_){
_start:
{
lean_object* v_res_3566_; 
v_res_3566_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21(v_00_u03b1_3556_, v_ref_3557_, v_constName_3558_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_);
lean_dec(v___y_3564_);
lean_dec_ref(v___y_3563_);
lean_dec(v___y_3562_);
lean_dec_ref(v___y_3561_);
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3559_);
lean_dec(v_ref_3557_);
return v_res_3566_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24(lean_object* v_00_u03b1_3567_, lean_object* v_ref_3568_, lean_object* v_msg_3569_, lean_object* v_declHint_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_){
_start:
{
lean_object* v___x_3578_; 
v___x_3578_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24___redArg(v_ref_3568_, v_msg_3569_, v_declHint_3570_, v___y_3571_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_, v___y_3576_);
return v___x_3578_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24___boxed(lean_object* v_00_u03b1_3579_, lean_object* v_ref_3580_, lean_object* v_msg_3581_, lean_object* v_declHint_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_){
_start:
{
lean_object* v_res_3590_; 
v_res_3590_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24(v_00_u03b1_3579_, v_ref_3580_, v_msg_3581_, v_declHint_3582_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_, v___y_3588_);
lean_dec(v___y_3588_);
lean_dec_ref(v___y_3587_);
lean_dec(v___y_3586_);
lean_dec_ref(v___y_3585_);
lean_dec(v___y_3584_);
lean_dec_ref(v___y_3583_);
lean_dec(v_ref_3580_);
return v_res_3590_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26(lean_object* v_msg_3591_, lean_object* v_declHint_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_){
_start:
{
lean_object* v___x_3600_; 
v___x_3600_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___redArg(v_msg_3591_, v_declHint_3592_, v___y_3598_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26___boxed(lean_object* v_msg_3601_, lean_object* v_declHint_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_){
_start:
{
lean_object* v_res_3610_; 
v_res_3610_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__25_spec__26(v_msg_3601_, v_declHint_3602_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_);
lean_dec(v___y_3608_);
lean_dec_ref(v___y_3607_);
lean_dec(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec(v___y_3604_);
lean_dec_ref(v___y_3603_);
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26(lean_object* v_00_u03b1_3611_, lean_object* v_ref_3612_, lean_object* v_msg_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_){
_start:
{
lean_object* v___x_3621_; 
v___x_3621_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26___redArg(v_ref_3612_, v_msg_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_);
return v___x_3621_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26___boxed(lean_object* v_00_u03b1_3622_, lean_object* v_ref_3623_, lean_object* v_msg_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_){
_start:
{
lean_object* v_res_3632_; 
v_res_3632_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__17_spec__21_spec__24_spec__26(v_00_u03b1_3622_, v_ref_3623_, v_msg_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_);
lean_dec(v___y_3630_);
lean_dec_ref(v___y_3629_);
lean_dec(v___y_3628_);
lean_dec_ref(v___y_3627_);
lean_dec(v___y_3626_);
lean_dec_ref(v___y_3625_);
lean_dec(v_ref_3623_);
return v_res_3632_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0(lean_object* v_x_3636_){
_start:
{
lean_object* v_name_3637_; lean_object* v___x_3638_; uint8_t v___x_3639_; 
v_name_3637_ = lean_ctor_get(v_x_3636_, 0);
v___x_3638_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__1));
v___x_3639_ = lean_name_eq(v_name_3637_, v___x_3638_);
return v___x_3639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___boxed(lean_object* v_x_3640_){
_start:
{
uint8_t v_res_3641_; lean_object* v_r_3642_; 
v_res_3641_ = l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0(v_x_3640_);
lean_dec_ref(v_x_3640_);
v_r_3642_ = lean_box(v_res_3641_);
return v_r_3642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__1(lean_object* v_ctx_3643_){
_start:
{
lean_object* v_toCold_3644_; lean_object* v_currRecDepth_3645_; lean_object* v_ref_3646_; uint16_t v_optionFlags_3647_; uint8_t v_suppressElabErrors_3648_; uint8_t v_isRecordingDeps_3649_; lean_object* v___x_3651_; uint8_t v_isShared_3652_; uint8_t v_isSharedCheck_3657_; 
v_toCold_3644_ = lean_ctor_get(v_ctx_3643_, 0);
v_currRecDepth_3645_ = lean_ctor_get(v_ctx_3643_, 1);
v_ref_3646_ = lean_ctor_get(v_ctx_3643_, 2);
v_optionFlags_3647_ = lean_ctor_get_uint16(v_ctx_3643_, sizeof(void*)*3);
v_suppressElabErrors_3648_ = lean_ctor_get_uint8(v_ctx_3643_, sizeof(void*)*3 + 2);
v_isRecordingDeps_3649_ = lean_ctor_get_uint8(v_ctx_3643_, sizeof(void*)*3 + 4);
v_isSharedCheck_3657_ = !lean_is_exclusive(v_ctx_3643_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3651_ = v_ctx_3643_;
v_isShared_3652_ = v_isSharedCheck_3657_;
goto v_resetjp_3650_;
}
else
{
lean_inc(v_ref_3646_);
lean_inc(v_currRecDepth_3645_);
lean_inc(v_toCold_3644_);
lean_dec(v_ctx_3643_);
v___x_3651_ = lean_box(0);
v_isShared_3652_ = v_isSharedCheck_3657_;
goto v_resetjp_3650_;
}
v_resetjp_3650_:
{
uint8_t v___x_3653_; lean_object* v___x_3655_; 
v___x_3653_ = 2;
if (v_isShared_3652_ == 0)
{
v___x_3655_ = v___x_3651_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v_toCold_3644_);
lean_ctor_set(v_reuseFailAlloc_3656_, 1, v_currRecDepth_3645_);
lean_ctor_set(v_reuseFailAlloc_3656_, 2, v_ref_3646_);
lean_ctor_set_uint16(v_reuseFailAlloc_3656_, sizeof(void*)*3, v_optionFlags_3647_);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, sizeof(void*)*3 + 2, v_suppressElabErrors_3648_);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, sizeof(void*)*3 + 4, v_isRecordingDeps_3649_);
v___x_3655_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
lean_ctor_set_uint8(v___x_3655_, sizeof(void*)*3 + 3, v___x_3653_);
return v___x_3655_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg(lean_object* v_inst_3679_, lean_object* v_attrs_3680_, lean_object* v_a_3681_){
_start:
{
lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; uint8_t v___x_3685_; 
v___x_3682_ = lean_unsigned_to_nat(0u);
v___x_3683_ = lean_array_get_size(v_attrs_3680_);
v___x_3684_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__9));
v___x_3685_ = lean_nat_dec_lt(v___x_3682_, v___x_3683_);
if (v___x_3685_ == 0)
{
lean_dec_ref(v_attrs_3680_);
lean_dec(v_inst_3679_);
return v_a_3681_;
}
else
{
if (v___x_3685_ == 0)
{
lean_dec_ref(v_attrs_3680_);
lean_dec(v_inst_3679_);
return v_a_3681_;
}
else
{
lean_object* v___f_3686_; size_t v___x_3687_; size_t v___x_3688_; lean_object* v___x_3689_; uint8_t v___x_3690_; 
v___f_3686_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__10));
v___x_3687_ = ((size_t)0ULL);
v___x_3688_ = lean_usize_of_nat(v___x_3683_);
v___x_3689_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_3684_, v___f_3686_, v_attrs_3680_, v___x_3687_, v___x_3688_);
v___x_3690_ = lean_unbox(v___x_3689_);
lean_dec(v___x_3689_);
if (v___x_3690_ == 0)
{
lean_dec(v_inst_3679_);
return v_a_3681_;
}
else
{
lean_object* v___f_3691_; lean_object* v___x_3692_; 
v___f_3691_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__11));
v___x_3692_ = lean_apply_3(v_inst_3679_, lean_box(0), v___f_3691_, v_a_3681_);
return v___x_3692_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs(lean_object* v_m_3693_, lean_object* v_00_u03b1_3694_, lean_object* v_inst_3695_, lean_object* v_attrs_3696_, lean_object* v_a_3697_){
_start:
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; uint8_t v___x_3701_; 
v___x_3698_ = lean_unsigned_to_nat(0u);
v___x_3699_ = lean_array_get_size(v_attrs_3696_);
v___x_3700_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__9));
v___x_3701_ = lean_nat_dec_lt(v___x_3698_, v___x_3699_);
if (v___x_3701_ == 0)
{
lean_dec_ref(v_attrs_3696_);
lean_dec(v_inst_3695_);
return v_a_3697_;
}
else
{
if (v___x_3701_ == 0)
{
lean_dec_ref(v_attrs_3696_);
lean_dec(v_inst_3695_);
return v_a_3697_;
}
else
{
lean_object* v___f_3702_; size_t v___x_3703_; size_t v___x_3704_; lean_object* v___x_3705_; uint8_t v___x_3706_; 
v___f_3702_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__10));
v___x_3703_ = ((size_t)0ULL);
v___x_3704_ = lean_usize_of_nat(v___x_3699_);
v___x_3705_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_3700_, v___f_3702_, v_attrs_3696_, v___x_3703_, v___x_3704_);
v___x_3706_ = lean_unbox(v___x_3705_);
lean_dec(v___x_3705_);
if (v___x_3706_ == 0)
{
lean_dec(v_inst_3695_);
return v_a_3697_;
}
else
{
lean_object* v___f_3707_; lean_object* v___x_3708_; 
v___f_3707_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__11));
v___x_3708_ = lean_apply_3(v_inst_3695_, lean_box(0), v___f_3707_, v_a_3697_);
return v___x_3708_;
}
}
}
}
}
lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DeclModifiers(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_linter_redundantVisibility = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_linter_redundantVisibility);
lean_dec_ref(res);
l_Lean_Elab_instInhabitedVisibility_default = _init_l_Lean_Elab_instInhabitedVisibility_default();
l_Lean_Elab_instInhabitedVisibility = _init_l_Lean_Elab_instInhabitedVisibility();
l_Lean_Elab_instInhabitedRecKind_default = _init_l_Lean_Elab_instInhabitedRecKind_default();
l_Lean_Elab_instInhabitedRecKind = _init_l_Lean_Elab_instInhabitedRecKind();
l_Lean_Elab_instInhabitedComputeKind_default = _init_l_Lean_Elab_instInhabitedComputeKind_default();
l_Lean_Elab_instInhabitedComputeKind = _init_l_Lean_Elab_instInhabitedComputeKind();
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Command(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DeclModifiers(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_DocString_Add(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Parser_Command(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DeclModifiers(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclModifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DeclModifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DeclModifiers(builtin);
}
#ifdef __cplusplus
}
#endif
