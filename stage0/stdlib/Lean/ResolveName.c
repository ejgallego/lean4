// Lean compiler output
// Module: Lean.ResolveName
// Imports: public import Lean.Modifiers public import Lean.Exception public import Lean.Namespace public import Lean.Log
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_filterTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownConstantAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_dbgToString___boxed(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MacroScopesView_isSuffixOf(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_SMap_instInhabited___redArg();
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_isProtected(lean_object*, lean_object*);
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Array_instInhabited___redArg();
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_mkPrivateNameCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_rootNamespace;
lean_object* l_List_find_x3f___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_logWarning___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_getM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t l_Lean_Environment_isNamespace(lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_pure(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Name_componentsRev(lean_object*);
lean_object* l_Lean_Name_appendCore(lean_object*, lean_object*);
lean_object* l_OptionT_lift(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadEnvOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_lift___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_Lean_instMonadOptionsOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instMonadLogOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_instToString___lam__0(lean_object*);
lean_object* l_List_filterMapTR_go___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instAlternative___redArg(lean_object*);
lean_object* l_Option_isNone___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwReservedNameNotAvailable___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "failed to declare `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__0 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__1;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` because `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__2 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__3;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__4 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_reservedNamePredicatesRef;
static const lean_string_object l_Lean_registerReservedNamePredicate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 110, .m_capacity = 110, .m_length = 109, .m_data = "failed to register reserved name suffix predicate, this operation can only be performed during initialization"};
static const lean_object* l_Lean_registerReservedNamePredicate___closed__0 = (const lean_object*)&l_Lean_registerReservedNamePredicate___closed__0_value;
static lean_once_cell_t l_Lean_registerReservedNamePredicate___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerReservedNamePredicate___closed__1;
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "reservedNamePredicatesExt"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(233, 132, 75, 91, 63, 63, 128, 135)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_reservedNamePredicatesExt;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_isReservedName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isReservedName___closed__0;
LEAN_EXPORT uint8_t lean_is_reserved_name(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReservedName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_addAliasEntry_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_addAliasEntry_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addAliasEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "aliasExtension"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 78, 120, 122, 20, 252, 110, 252)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_addAliasEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_aliasExtension;
LEAN_EXPORT lean_object* l_Lean_addAlias___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addAlias(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getAliasState___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getAliasState___closed__0;
LEAN_EXPORT lean_object* l_Lean_getAliasState(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAliases(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_getAliases___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRevAliases(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "privateInPublic"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 137, 140, 74, 72, 128, 49, 11)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 227, .m_capacity = 227, .m_length = 226, .m_data = "(module system) Export `private` declarations, allowing for arbitrary access to them while code is being ported to the module system. Such accesses will generate warnings\n    unless `backward.privateInPublic.warn` is disabled."};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ResolveName"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(213, 127, 67, 6, 186, 49, 191, 64)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(131, 161, 136, 183, 131, 203, 158, 84)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(94, 154, 217, 244, 61, 155, 3, 144)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_backward_privateInPublic;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 137, 140, 74, 72, 128, 49, 11)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(44, 52, 68, 203, 224, 27, 156, 169)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "(module system) Warn on accesses to `private` declarations that are allowed only by `backward.privateInPublic` being enabled."};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(213, 127, 67, 6, 186, 49, 191, 64)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(131, 161, 136, 183, 131, 203, 158, 84)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(94, 154, 217, 244, 61, 155, 3, 144)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(50, 1, 203, 3, 164, 240, 100, 244)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0 = (const lean_object*)&l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(lean_object*);
static const lean_string_object l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.ResolveName"};
static const lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0 = (const lean_object*)&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0_value;
static const lean_string_object l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lean.ResolveName.resolveNamespaceUsingScope\?"};
static const lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1 = (const lean_object*)&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1_value;
static const lean_string_object l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2 = (const lean_object*)&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2_value;
static lean_once_cell_t l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_resolveGlobalName___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveGlobalName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_resolveGlobalName___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveGlobalName___redArg___closed__0 = (const lean_object*)&l_Lean_resolveGlobalName___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unknown namespace `"};
static const lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0_value;
static const lean_string_object l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveNamespace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_resolveNamespace___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveNamespace___redArg___closed__0 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__0_value;
static const lean_array_object l_Lean_resolveNamespace___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_resolveNamespace___redArg___closed__1 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__1_value;
static const lean_string_object l_Lean_resolveNamespace___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected identifier"};
static const lean_object* l_Lean_resolveNamespace___redArg___closed__2 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__2_value;
static const lean_ctor_object l_Lean_resolveNamespace___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_resolveNamespace___redArg___closed__2_value)}};
static const lean_object* l_Lean_resolveNamespace___redArg___closed__3 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__3_value;
static lean_once_cell_t l_Lean_resolveNamespace___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_resolveNamespace___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ambiguous namespace `"};
static const lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "`, possible interpretations: `"};
static const lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveUniqueNamespace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveUniqueNamespace___redArg___closed__0 = (const lean_object*)&l_Lean_resolveUniqueNamespace___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_filterFieldList___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_filterFieldList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_filterFieldList___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_filterFieldList___redArg___closed__0 = (const lean_object*)&l_Lean_filterFieldList___redArg___closed__0_value;
static const lean_closure_object l_Lean_filterFieldList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_filterFieldList___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_filterFieldList___redArg___closed__1 = (const lean_object*)&l_Lean_filterFieldList___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_ensureNoOverload___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ensureNoOverload___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__0 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__0_value;
static const lean_string_object l_Lean_ensureNoOverload___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Ambiguous identifier `"};
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__1 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__1_value;
static lean_once_cell_t l_Lean_ensureNoOverload___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureNoOverload___redArg___closed__2;
static const lean_string_object l_Lean_ensureNoOverload___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`; possible interpretations: "};
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__3 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__3_value;
static lean_once_cell_t l_Lean_ensureNoOverload___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureNoOverload___redArg___closed__4;
static const lean_closure_object l_Lean_ensureNoOverload___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__5 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_preprocessSyntaxAndResolve___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___closed__0 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ensureNonAmbiguous___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.ensureNonAmbiguous"};
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__0 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__0_value;
static lean_once_cell_t l_Lean_ensureNonAmbiguous___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__1;
static const lean_closure_object l_Lean_ensureNonAmbiguous___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_dbgToString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__2 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__2_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ambiguous identifier `"};
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__3 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__3_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`, possible interpretations: "};
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__4 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__0_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__1_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__2_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__3_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__4_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__5_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_resolveLocalName___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__0_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__1_value)}};
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__7_value;
static const lean_ctor_object l_Lean_resolveLocalName___redArg___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__7_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__2_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__3_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__4_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__5_value)}};
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__8 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__8_value;
static const lean_ctor_object l_Lean_resolveLocalName___redArg___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__8_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__6_value)}};
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__9 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveLocalName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___closed__0 = (const lean_object*)&l_Lean_resolveLocalName___redArg___closed__0_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_resolveLocalName___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___closed__1 = (const lean_object*)&l_Lean_resolveLocalName___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed(lean_object**);
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_isNone___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___redArg___closed__0));
v___x_3_ = l_Lean_stringToMessageData(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___redArg___closed__2));
v___x_6_ = l_Lean_stringToMessageData(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__5(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___redArg___closed__4));
v___x_9_ = l_Lean_stringToMessageData(v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___redArg(lean_object* v_inst_10_, lean_object* v_inst_11_, lean_object* v_declName_12_, lean_object* v_reservedName_13_){
_start:
{
lean_object* v___x_14_; uint8_t v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; uint8_t v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_14_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___redArg___closed__1, &l_Lean_throwReservedNameNotAvailable___redArg___closed__1_once, _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__1);
v___x_15_ = 0;
v___x_16_ = l_Lean_MessageData_ofConstName(v_declName_12_, v___x_15_);
v___x_17_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_14_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
v___x_18_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___redArg___closed__3, &l_Lean_throwReservedNameNotAvailable___redArg___closed__3_once, _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__3);
v___x_19_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_17_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
v___x_20_ = 1;
v___x_21_ = l_Lean_MessageData_ofConstName(v_reservedName_13_, v___x_20_);
v___x_22_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_22_, 0, v___x_19_);
lean_ctor_set(v___x_22_, 1, v___x_21_);
v___x_23_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___redArg___closed__5, &l_Lean_throwReservedNameNotAvailable___redArg___closed__5_once, _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__5);
v___x_24_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_24_, 0, v___x_22_);
lean_ctor_set(v___x_24_, 1, v___x_23_);
v___x_25_ = l_Lean_throwError___redArg(v_inst_10_, v_inst_11_, v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable(lean_object* v_m_26_, lean_object* v_inst_27_, lean_object* v_inst_28_, lean_object* v_declName_29_, lean_object* v_reservedName_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_throwReservedNameNotAvailable___redArg(v_inst_27_, v_inst_28_, v_declName_29_, v_reservedName_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg___lam__0(lean_object* v_reservedName_32_, lean_object* v_toPure_33_, lean_object* v_inst_34_, lean_object* v_inst_35_, lean_object* v_declName_36_, lean_object* v_____do__lift_37_){
_start:
{
uint8_t v___x_38_; uint8_t v___x_39_; 
v___x_38_ = 1;
lean_inc(v_reservedName_32_);
v___x_39_ = l_Lean_Environment_contains(v_____do__lift_37_, v_reservedName_32_, v___x_38_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; lean_object* v___x_41_; 
lean_dec(v_declName_36_);
lean_dec_ref(v_inst_35_);
lean_dec_ref(v_inst_34_);
lean_dec(v_reservedName_32_);
v___x_40_ = lean_box(0);
v___x_41_ = lean_apply_2(v_toPure_33_, lean_box(0), v___x_40_);
return v___x_41_;
}
else
{
lean_object* v___x_42_; 
lean_dec(v_toPure_33_);
v___x_42_ = l_Lean_throwReservedNameNotAvailable___redArg(v_inst_34_, v_inst_35_, v_declName_36_, v_reservedName_32_);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg(lean_object* v_inst_43_, lean_object* v_inst_44_, lean_object* v_inst_45_, lean_object* v_declName_46_, lean_object* v_suffix_47_){
_start:
{
lean_object* v_toApplicative_48_; lean_object* v_toBind_49_; lean_object* v_getEnv_50_; lean_object* v_toPure_51_; lean_object* v_reservedName_52_; lean_object* v___f_53_; lean_object* v___x_54_; 
v_toApplicative_48_ = lean_ctor_get(v_inst_43_, 0);
v_toBind_49_ = lean_ctor_get(v_inst_43_, 1);
lean_inc(v_toBind_49_);
v_getEnv_50_ = lean_ctor_get(v_inst_44_, 0);
lean_inc(v_getEnv_50_);
lean_dec_ref(v_inst_44_);
v_toPure_51_ = lean_ctor_get(v_toApplicative_48_, 1);
lean_inc(v_toPure_51_);
lean_inc(v_declName_46_);
v_reservedName_52_ = l_Lean_Name_str___override(v_declName_46_, v_suffix_47_);
v___f_53_ = lean_alloc_closure((void*)(l_Lean_ensureReservedNameAvailable___redArg___lam__0), 6, 5);
lean_closure_set(v___f_53_, 0, v_reservedName_52_);
lean_closure_set(v___f_53_, 1, v_toPure_51_);
lean_closure_set(v___f_53_, 2, v_inst_43_);
lean_closure_set(v___f_53_, 3, v_inst_45_);
lean_closure_set(v___f_53_, 4, v_declName_46_);
v___x_54_ = lean_apply_4(v_toBind_49_, lean_box(0), lean_box(0), v_getEnv_50_, v___f_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable(lean_object* v_m_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_declName_59_, lean_object* v_suffix_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lean_ensureReservedNameAvailable___redArg(v_inst_56_, v_inst_57_, v_inst_58_, v_declName_59_, v_suffix_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_));
v___x_66_ = lean_st_mk_ref(v___x_65_);
v___x_67_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2____boxed(lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_();
return v_res_69_;
}
}
static lean_object* _init_l_Lean_registerReservedNamePredicate___closed__1(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = ((lean_object*)(l_Lean_registerReservedNamePredicate___closed__0));
v___x_72_ = lean_mk_io_user_error(v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate(lean_object* v_p_73_){
_start:
{
uint8_t v___x_75_; 
v___x_75_ = l_Lean_initializing();
if (v___x_75_ == 0)
{
lean_object* v___x_76_; lean_object* v___x_77_; 
lean_dec_ref(v_p_73_);
v___x_76_ = lean_obj_once(&l_Lean_registerReservedNamePredicate___closed__1, &l_Lean_registerReservedNamePredicate___closed__1_once, _init_l_Lean_registerReservedNamePredicate___closed__1);
v___x_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
else
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_78_ = l_Lean_reservedNamePredicatesRef;
v___x_79_ = lean_st_ref_take(v___x_78_);
v___x_80_ = lean_array_push(v___x_79_, v_p_73_);
v___x_81_ = lean_st_ref_put(v___x_78_, v___x_80_);
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate___boxed(lean_object* v_p_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_registerReservedNamePredicate(v_p_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(lean_object* v___x_86_){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_st_ref_get(v___x_86_);
v___x_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed(lean_object* v___x_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(v___x_90_);
lean_dec(v___x_90_);
return v_res_92_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_93_; lean_object* v___f_94_; 
v___x_93_ = l_Lean_reservedNamePredicatesRef;
v___f_94_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_94_, 0, v___x_93_);
return v___f_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; uint8_t v___x_106_; lean_object* v___x_107_; 
v___f_101_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_);
v___x_102_ = lean_box(0);
v___x_103_ = lean_box(2);
v___x_104_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_));
v___x_105_ = 0;
v___x_106_ = 1;
v___x_107_ = l_Lean_registerEnvExtension___redArg(v___f_101_, v___x_102_, v___x_103_, v___x_104_, v___x_105_, v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed(lean_object* v_a_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_();
return v_res_109_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(lean_object* v_env_110_, lean_object* v_name_111_, lean_object* v_as_112_, size_t v_i_113_, size_t v_stop_114_){
_start:
{
uint8_t v___x_115_; 
v___x_115_ = lean_usize_dec_eq(v_i_113_, v_stop_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_152__overap_116_; lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_152__overap_116_ = lean_array_uget_borrowed(v_as_112_, v_i_113_);
lean_inc(v___x_152__overap_116_);
lean_inc(v_name_111_);
lean_inc_ref(v_env_110_);
v___x_117_ = lean_apply_2(v___x_152__overap_116_, v_env_110_, v_name_111_);
v___x_118_ = lean_unbox(v___x_117_);
if (v___x_118_ == 0)
{
size_t v___x_119_; size_t v___x_120_; 
v___x_119_ = ((size_t)1ULL);
v___x_120_ = lean_usize_add(v_i_113_, v___x_119_);
v_i_113_ = v___x_120_;
goto _start;
}
else
{
uint8_t v___x_122_; 
lean_dec(v_name_111_);
lean_dec_ref(v_env_110_);
v___x_122_ = lean_unbox(v___x_117_);
return v___x_122_;
}
}
else
{
uint8_t v___x_123_; 
lean_dec(v_name_111_);
lean_dec_ref(v_env_110_);
v___x_123_ = 0;
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0___boxed(lean_object* v_env_124_, lean_object* v_name_125_, lean_object* v_as_126_, lean_object* v_i_127_, lean_object* v_stop_128_){
_start:
{
size_t v_i_boxed_129_; size_t v_stop_boxed_130_; uint8_t v_res_131_; lean_object* v_r_132_; 
v_i_boxed_129_ = lean_unbox_usize(v_i_127_);
lean_dec(v_i_127_);
v_stop_boxed_130_ = lean_unbox_usize(v_stop_128_);
lean_dec(v_stop_128_);
v_res_131_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(v_env_124_, v_name_125_, v_as_126_, v_i_boxed_129_, v_stop_boxed_130_);
lean_dec_ref(v_as_126_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
static lean_object* _init_l_Lean_isReservedName___closed__0(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Array_instInhabited___redArg();
return v___x_133_;
}
}
LEAN_EXPORT uint8_t lean_is_reserved_name(lean_object* v_env_134_, lean_object* v_name_135_){
_start:
{
lean_object* v___x_136_; lean_object* v_asyncMode_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_136_ = l_Lean_reservedNamePredicatesExt;
v_asyncMode_137_ = lean_ctor_get(v___x_136_, 2);
v___x_138_ = lean_obj_once(&l_Lean_isReservedName___closed__0, &l_Lean_isReservedName___closed__0_once, _init_l_Lean_isReservedName___closed__0);
v___x_139_ = lean_box(0);
v___x_140_ = 0;
lean_inc_ref(v_env_134_);
v___x_141_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_138_, v___x_136_, v_env_134_, v_asyncMode_137_, v___x_139_, v___x_140_);
v___x_142_ = lean_unsigned_to_nat(0u);
v___x_143_ = lean_array_get_size(v___x_141_);
v___x_144_ = lean_nat_dec_lt(v___x_142_, v___x_143_);
if (v___x_144_ == 0)
{
lean_dec(v___x_141_);
lean_dec(v_name_135_);
lean_dec_ref(v_env_134_);
return v___x_144_;
}
else
{
if (v___x_144_ == 0)
{
lean_dec(v___x_141_);
lean_dec(v_name_135_);
lean_dec_ref(v_env_134_);
return v___x_144_;
}
else
{
size_t v___x_145_; size_t v___x_146_; uint8_t v___x_147_; 
v___x_145_ = ((size_t)0ULL);
v___x_146_ = lean_usize_of_nat(v___x_143_);
v___x_147_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(v_env_134_, v_name_135_, v___x_141_, v___x_145_, v___x_146_);
lean_dec(v___x_141_);
return v___x_147_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReservedName___boxed(lean_object* v_env_148_, lean_object* v_name_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = lean_is_reserved_name(v_env_148_, v_name_149_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(lean_object* v_x_152_, lean_object* v_x_153_, lean_object* v_x_154_, lean_object* v_x_155_){
_start:
{
lean_object* v_ks_156_; lean_object* v_vs_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_181_; 
v_ks_156_ = lean_ctor_get(v_x_152_, 0);
v_vs_157_ = lean_ctor_get(v_x_152_, 1);
v_isSharedCheck_181_ = !lean_is_exclusive(v_x_152_);
if (v_isSharedCheck_181_ == 0)
{
v___x_159_ = v_x_152_;
v_isShared_160_ = v_isSharedCheck_181_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_vs_157_);
lean_inc(v_ks_156_);
lean_dec(v_x_152_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_181_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_array_get_size(v_ks_156_);
v___x_162_ = lean_nat_dec_lt(v_x_153_, v___x_161_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_166_; 
lean_dec(v_x_153_);
v___x_163_ = lean_array_push(v_ks_156_, v_x_154_);
v___x_164_ = lean_array_push(v_vs_157_, v_x_155_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 1, v___x_164_);
lean_ctor_set(v___x_159_, 0, v___x_163_);
v___x_166_ = v___x_159_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_163_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
else
{
lean_object* v_k_x27_168_; uint8_t v___x_169_; 
v_k_x27_168_ = lean_array_fget_borrowed(v_ks_156_, v_x_153_);
v___x_169_ = lean_name_eq(v_x_154_, v_k_x27_168_);
if (v___x_169_ == 0)
{
lean_object* v___x_171_; 
if (v_isShared_160_ == 0)
{
v___x_171_ = v___x_159_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_ks_156_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_vs_157_);
v___x_171_ = v_reuseFailAlloc_175_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = lean_nat_add(v_x_153_, v___x_172_);
lean_dec(v_x_153_);
v_x_152_ = v___x_171_;
v_x_153_ = v___x_173_;
goto _start;
}
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
v___x_176_ = lean_array_fset(v_ks_156_, v_x_153_, v_x_154_);
v___x_177_ = lean_array_fset(v_vs_157_, v_x_153_, v_x_155_);
lean_dec(v_x_153_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 1, v___x_177_);
lean_ctor_set(v___x_159_, 0, v___x_176_);
v___x_179_ = v___x_159_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_180_, 1, v___x_177_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(lean_object* v_n_182_, lean_object* v_k_183_, lean_object* v_v_184_){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_unsigned_to_nat(0u);
v___x_186_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(v_n_182_, v___x_185_, v_k_183_, v_v_184_);
return v___x_186_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(lean_object* v_x_188_, size_t v_x_189_, size_t v_x_190_, lean_object* v_x_191_, lean_object* v_x_192_){
_start:
{
if (lean_obj_tag(v_x_188_) == 0)
{
lean_object* v_es_193_; size_t v___x_194_; size_t v___x_195_; lean_object* v_j_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v_es_193_ = lean_ctor_get(v_x_188_, 0);
v___x_194_ = ((size_t)31ULL);
v___x_195_ = lean_usize_land(v_x_189_, v___x_194_);
v_j_196_ = lean_usize_to_nat(v___x_195_);
v___x_197_ = lean_array_get_size(v_es_193_);
v___x_198_ = lean_nat_dec_lt(v_j_196_, v___x_197_);
if (v___x_198_ == 0)
{
lean_dec(v_j_196_);
lean_dec(v_x_192_);
lean_dec(v_x_191_);
return v_x_188_;
}
else
{
lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_237_; 
lean_inc_ref(v_es_193_);
v_isSharedCheck_237_ = !lean_is_exclusive(v_x_188_);
if (v_isSharedCheck_237_ == 0)
{
lean_object* v_unused_238_; 
v_unused_238_ = lean_ctor_get(v_x_188_, 0);
lean_dec(v_unused_238_);
v___x_200_ = v_x_188_;
v_isShared_201_ = v_isSharedCheck_237_;
goto v_resetjp_199_;
}
else
{
lean_dec(v_x_188_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_237_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v_v_202_; lean_object* v___x_203_; lean_object* v_xs_x27_204_; lean_object* v___y_206_; 
v_v_202_ = lean_array_fget(v_es_193_, v_j_196_);
v___x_203_ = lean_box(0);
v_xs_x27_204_ = lean_array_fset(v_es_193_, v_j_196_, v___x_203_);
switch(lean_obj_tag(v_v_202_))
{
case 0:
{
lean_object* v_key_211_; lean_object* v_val_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_222_; 
v_key_211_ = lean_ctor_get(v_v_202_, 0);
v_val_212_ = lean_ctor_get(v_v_202_, 1);
v_isSharedCheck_222_ = !lean_is_exclusive(v_v_202_);
if (v_isSharedCheck_222_ == 0)
{
v___x_214_ = v_v_202_;
v_isShared_215_ = v_isSharedCheck_222_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_val_212_);
lean_inc(v_key_211_);
lean_dec(v_v_202_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_222_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
uint8_t v___x_216_; 
v___x_216_ = lean_name_eq(v_x_191_, v_key_211_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; lean_object* v___x_218_; 
lean_del_object(v___x_214_);
v___x_217_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_211_, v_val_212_, v_x_191_, v_x_192_);
v___x_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
v___y_206_ = v___x_218_;
goto v___jp_205_;
}
else
{
lean_object* v___x_220_; 
lean_dec(v_val_212_);
lean_dec(v_key_211_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 1, v_x_192_);
lean_ctor_set(v___x_214_, 0, v_x_191_);
v___x_220_ = v___x_214_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_x_191_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v_x_192_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
v___y_206_ = v___x_220_;
goto v___jp_205_;
}
}
}
}
case 1:
{
lean_object* v_node_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_235_; 
v_node_223_ = lean_ctor_get(v_v_202_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v_v_202_);
if (v_isSharedCheck_235_ == 0)
{
v___x_225_ = v_v_202_;
v_isShared_226_ = v_isSharedCheck_235_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_node_223_);
lean_dec(v_v_202_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_235_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
size_t v___x_227_; size_t v___x_228_; size_t v___x_229_; size_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_227_ = ((size_t)5ULL);
v___x_228_ = lean_usize_shift_right(v_x_189_, v___x_227_);
v___x_229_ = ((size_t)1ULL);
v___x_230_ = lean_usize_add(v_x_190_, v___x_229_);
v___x_231_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_node_223_, v___x_228_, v___x_230_, v_x_191_, v_x_192_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 0, v___x_231_);
v___x_233_ = v___x_225_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_231_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
v___y_206_ = v___x_233_;
goto v___jp_205_;
}
}
}
default: 
{
lean_object* v___x_236_; 
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v_x_191_);
lean_ctor_set(v___x_236_, 1, v_x_192_);
v___y_206_ = v___x_236_;
goto v___jp_205_;
}
}
v___jp_205_:
{
lean_object* v___x_207_; lean_object* v___x_209_; 
v___x_207_ = lean_array_fset(v_xs_x27_204_, v_j_196_, v___y_206_);
lean_dec(v_j_196_);
if (v_isShared_201_ == 0)
{
lean_ctor_set(v___x_200_, 0, v___x_207_);
v___x_209_ = v___x_200_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_207_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
}
}
else
{
lean_object* v_ks_239_; lean_object* v_vs_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_258_; 
v_ks_239_ = lean_ctor_get(v_x_188_, 0);
v_vs_240_ = lean_ctor_get(v_x_188_, 1);
v_isSharedCheck_258_ = !lean_is_exclusive(v_x_188_);
if (v_isSharedCheck_258_ == 0)
{
v___x_242_ = v_x_188_;
v_isShared_243_ = v_isSharedCheck_258_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_vs_240_);
lean_inc(v_ks_239_);
lean_dec(v_x_188_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_258_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
if (v_isShared_243_ == 0)
{
v___x_245_ = v___x_242_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_ks_239_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v_vs_240_);
v___x_245_ = v_reuseFailAlloc_257_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v_newNode_246_; size_t v___x_247_; uint8_t v___x_248_; 
v_newNode_246_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(v___x_245_, v_x_191_, v_x_192_);
v___x_247_ = ((size_t)7ULL);
v___x_248_ = lean_usize_dec_le(v___x_247_, v_x_190_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_249_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_246_);
v___x_250_ = lean_unsigned_to_nat(4u);
v___x_251_ = lean_nat_dec_lt(v___x_249_, v___x_250_);
lean_dec(v___x_249_);
if (v___x_251_ == 0)
{
lean_object* v_ks_252_; lean_object* v_vs_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v_ks_252_ = lean_ctor_get(v_newNode_246_, 0);
lean_inc_ref(v_ks_252_);
v_vs_253_ = lean_ctor_get(v_newNode_246_, 1);
lean_inc_ref(v_vs_253_);
lean_dec_ref(v_newNode_246_);
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_255_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0);
v___x_256_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_x_190_, v_ks_252_, v_vs_253_, v___x_254_, v___x_255_);
lean_dec_ref(v_vs_253_);
lean_dec_ref(v_ks_252_);
return v___x_256_;
}
else
{
return v_newNode_246_;
}
}
else
{
return v_newNode_246_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(size_t v_depth_259_, lean_object* v_keys_260_, lean_object* v_vals_261_, lean_object* v_i_262_, lean_object* v_entries_263_){
_start:
{
lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_264_ = lean_array_get_size(v_keys_260_);
v___x_265_ = lean_nat_dec_lt(v_i_262_, v___x_264_);
if (v___x_265_ == 0)
{
lean_dec(v_i_262_);
return v_entries_263_;
}
else
{
lean_object* v_k_266_; lean_object* v_v_267_; uint64_t v___y_269_; 
v_k_266_ = lean_array_fget_borrowed(v_keys_260_, v_i_262_);
v_v_267_ = lean_array_fget_borrowed(v_vals_261_, v_i_262_);
if (lean_obj_tag(v_k_266_) == 0)
{
uint64_t v___x_280_; 
v___x_280_ = 1723ULL;
v___y_269_ = v___x_280_;
goto v___jp_268_;
}
else
{
uint64_t v_hash_281_; 
v_hash_281_ = lean_ctor_get_uint64(v_k_266_, sizeof(void*)*2);
v___y_269_ = v_hash_281_;
goto v___jp_268_;
}
v___jp_268_:
{
size_t v_h_270_; size_t v___x_271_; lean_object* v___x_272_; size_t v___x_273_; size_t v___x_274_; size_t v___x_275_; size_t v_h_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_h_270_ = lean_uint64_to_usize(v___y_269_);
v___x_271_ = ((size_t)5ULL);
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = ((size_t)1ULL);
v___x_274_ = lean_usize_sub(v_depth_259_, v___x_273_);
v___x_275_ = lean_usize_mul(v___x_271_, v___x_274_);
v_h_276_ = lean_usize_shift_right(v_h_270_, v___x_275_);
v___x_277_ = lean_nat_add(v_i_262_, v___x_272_);
lean_dec(v_i_262_);
lean_inc(v_v_267_);
lean_inc(v_k_266_);
v___x_278_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_entries_263_, v_h_276_, v_depth_259_, v_k_266_, v_v_267_);
v_i_262_ = v___x_277_;
v_entries_263_ = v___x_278_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg___boxed(lean_object* v_depth_282_, lean_object* v_keys_283_, lean_object* v_vals_284_, lean_object* v_i_285_, lean_object* v_entries_286_){
_start:
{
size_t v_depth_boxed_287_; lean_object* v_res_288_; 
v_depth_boxed_287_ = lean_unbox_usize(v_depth_282_);
lean_dec(v_depth_282_);
v_res_288_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_depth_boxed_287_, v_keys_283_, v_vals_284_, v_i_285_, v_entries_286_);
lean_dec_ref(v_vals_284_);
lean_dec_ref(v_keys_283_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_x_289_, lean_object* v_x_290_, lean_object* v_x_291_, lean_object* v_x_292_, lean_object* v_x_293_){
_start:
{
size_t v_x_1088__boxed_294_; size_t v_x_1089__boxed_295_; lean_object* v_res_296_; 
v_x_1088__boxed_294_ = lean_unbox_usize(v_x_290_);
lean_dec(v_x_290_);
v_x_1089__boxed_295_ = lean_unbox_usize(v_x_291_);
lean_dec(v_x_291_);
v_res_296_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_289_, v_x_1088__boxed_294_, v_x_1089__boxed_295_, v_x_292_, v_x_293_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(lean_object* v_x_297_, lean_object* v_x_298_, lean_object* v_x_299_){
_start:
{
uint64_t v___y_301_; 
if (lean_obj_tag(v_x_298_) == 0)
{
uint64_t v___x_305_; 
v___x_305_ = 1723ULL;
v___y_301_ = v___x_305_;
goto v___jp_300_;
}
else
{
uint64_t v_hash_306_; 
v_hash_306_ = lean_ctor_get_uint64(v_x_298_, sizeof(void*)*2);
v___y_301_ = v_hash_306_;
goto v___jp_300_;
}
v___jp_300_:
{
size_t v___x_302_; size_t v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_uint64_to_usize(v___y_301_);
v___x_303_ = ((size_t)1ULL);
v___x_304_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_297_, v___x_302_, v___x_303_, v_x_298_, v_x_299_);
return v___x_304_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(lean_object* v_x_307_, lean_object* v_x_308_){
_start:
{
if (lean_obj_tag(v_x_308_) == 0)
{
return v_x_307_;
}
else
{
lean_object* v_key_309_; lean_object* v_value_310_; lean_object* v_tail_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_337_; 
v_key_309_ = lean_ctor_get(v_x_308_, 0);
v_value_310_ = lean_ctor_get(v_x_308_, 1);
v_tail_311_ = lean_ctor_get(v_x_308_, 2);
v_isSharedCheck_337_ = !lean_is_exclusive(v_x_308_);
if (v_isSharedCheck_337_ == 0)
{
v___x_313_ = v_x_308_;
v_isShared_314_ = v_isSharedCheck_337_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_tail_311_);
lean_inc(v_value_310_);
lean_inc(v_key_309_);
lean_dec(v_x_308_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_337_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_315_; uint64_t v___y_317_; 
v___x_315_ = lean_array_get_size(v_x_307_);
if (lean_obj_tag(v_key_309_) == 0)
{
uint64_t v___x_335_; 
v___x_335_ = 1723ULL;
v___y_317_ = v___x_335_;
goto v___jp_316_;
}
else
{
uint64_t v_hash_336_; 
v_hash_336_ = lean_ctor_get_uint64(v_key_309_, sizeof(void*)*2);
v___y_317_ = v_hash_336_;
goto v___jp_316_;
}
v___jp_316_:
{
uint64_t v___x_318_; uint64_t v___x_319_; uint64_t v_fold_320_; uint64_t v___x_321_; uint64_t v___x_322_; uint64_t v___x_323_; size_t v___x_324_; size_t v___x_325_; size_t v___x_326_; size_t v___x_327_; size_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_331_; 
v___x_318_ = 32ULL;
v___x_319_ = lean_uint64_shift_right(v___y_317_, v___x_318_);
v_fold_320_ = lean_uint64_xor(v___y_317_, v___x_319_);
v___x_321_ = 16ULL;
v___x_322_ = lean_uint64_shift_right(v_fold_320_, v___x_321_);
v___x_323_ = lean_uint64_xor(v_fold_320_, v___x_322_);
v___x_324_ = lean_uint64_to_usize(v___x_323_);
v___x_325_ = lean_usize_of_nat(v___x_315_);
v___x_326_ = ((size_t)1ULL);
v___x_327_ = lean_usize_sub(v___x_325_, v___x_326_);
v___x_328_ = lean_usize_land(v___x_324_, v___x_327_);
v___x_329_ = lean_array_uget_borrowed(v_x_307_, v___x_328_);
lean_inc(v___x_329_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 2, v___x_329_);
v___x_331_ = v___x_313_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_key_309_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v_value_310_);
lean_ctor_set(v_reuseFailAlloc_334_, 2, v___x_329_);
v___x_331_ = v_reuseFailAlloc_334_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
lean_object* v___x_332_; 
v___x_332_ = lean_array_uset(v_x_307_, v___x_328_, v___x_331_);
v_x_307_ = v___x_332_;
v_x_308_ = v_tail_311_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(lean_object* v_i_338_, lean_object* v_source_339_, lean_object* v_target_340_){
_start:
{
lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_341_ = lean_array_get_size(v_source_339_);
v___x_342_ = lean_nat_dec_lt(v_i_338_, v___x_341_);
if (v___x_342_ == 0)
{
lean_dec_ref(v_source_339_);
lean_dec(v_i_338_);
return v_target_340_;
}
else
{
lean_object* v_es_343_; lean_object* v___x_344_; lean_object* v_source_345_; lean_object* v_target_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v_es_343_ = lean_array_fget(v_source_339_, v_i_338_);
v___x_344_ = lean_box(0);
v_source_345_ = lean_array_fset(v_source_339_, v_i_338_, v___x_344_);
v_target_346_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(v_target_340_, v_es_343_);
v___x_347_ = lean_unsigned_to_nat(1u);
v___x_348_ = lean_nat_add(v_i_338_, v___x_347_);
lean_dec(v_i_338_);
v_i_338_ = v___x_348_;
v_source_339_ = v_source_345_;
v_target_340_ = v_target_346_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(lean_object* v_data_350_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v_nbuckets_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_351_ = lean_array_get_size(v_data_350_);
v___x_352_ = lean_unsigned_to_nat(2u);
v_nbuckets_353_ = lean_nat_mul(v___x_351_, v___x_352_);
v___x_354_ = lean_unsigned_to_nat(0u);
v___x_355_ = lean_box(0);
v___x_356_ = lean_mk_array(v_nbuckets_353_, v___x_355_);
v___x_357_ = lean_array_propagate_mark(v_data_350_, v___x_356_);
v___x_358_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(v___x_354_, v_data_350_, v___x_357_);
return v___x_358_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(lean_object* v_a_359_, lean_object* v_x_360_){
_start:
{
if (lean_obj_tag(v_x_360_) == 0)
{
uint8_t v___x_361_; 
v___x_361_ = 0;
return v___x_361_;
}
else
{
lean_object* v_key_362_; lean_object* v_tail_363_; uint8_t v___x_364_; 
v_key_362_ = lean_ctor_get(v_x_360_, 0);
v_tail_363_ = lean_ctor_get(v_x_360_, 2);
v___x_364_ = lean_name_eq(v_key_362_, v_a_359_);
if (v___x_364_ == 0)
{
v_x_360_ = v_tail_363_;
goto _start;
}
else
{
return v___x_364_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg___boxed(lean_object* v_a_366_, lean_object* v_x_367_){
_start:
{
uint8_t v_res_368_; lean_object* v_r_369_; 
v_res_368_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_366_, v_x_367_);
lean_dec(v_x_367_);
lean_dec(v_a_366_);
v_r_369_ = lean_box(v_res_368_);
return v_r_369_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(lean_object* v_a_370_, lean_object* v_b_371_, lean_object* v_x_372_){
_start:
{
if (lean_obj_tag(v_x_372_) == 0)
{
lean_dec(v_b_371_);
lean_dec(v_a_370_);
return v_x_372_;
}
else
{
lean_object* v_key_373_; lean_object* v_value_374_; lean_object* v_tail_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_387_; 
v_key_373_ = lean_ctor_get(v_x_372_, 0);
v_value_374_ = lean_ctor_get(v_x_372_, 1);
v_tail_375_ = lean_ctor_get(v_x_372_, 2);
v_isSharedCheck_387_ = !lean_is_exclusive(v_x_372_);
if (v_isSharedCheck_387_ == 0)
{
v___x_377_ = v_x_372_;
v_isShared_378_ = v_isSharedCheck_387_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_tail_375_);
lean_inc(v_value_374_);
lean_inc(v_key_373_);
lean_dec(v_x_372_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_387_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
uint8_t v___x_379_; 
v___x_379_ = lean_name_eq(v_key_373_, v_a_370_);
if (v___x_379_ == 0)
{
lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_380_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_370_, v_b_371_, v_tail_375_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 2, v___x_380_);
v___x_382_ = v___x_377_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_key_373_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v_value_374_);
lean_ctor_set(v_reuseFailAlloc_383_, 2, v___x_380_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
else
{
lean_object* v___x_385_; 
lean_dec(v_value_374_);
lean_dec(v_key_373_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 1, v_b_371_);
lean_ctor_set(v___x_377_, 0, v_a_370_);
v___x_385_ = v___x_377_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_370_);
lean_ctor_set(v_reuseFailAlloc_386_, 1, v_b_371_);
lean_ctor_set(v_reuseFailAlloc_386_, 2, v_tail_375_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(lean_object* v_m_388_, lean_object* v_a_389_, lean_object* v_b_390_){
_start:
{
lean_object* v_size_391_; lean_object* v_buckets_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_438_; 
v_size_391_ = lean_ctor_get(v_m_388_, 0);
v_buckets_392_ = lean_ctor_get(v_m_388_, 1);
v_isSharedCheck_438_ = !lean_is_exclusive(v_m_388_);
if (v_isSharedCheck_438_ == 0)
{
v___x_394_ = v_m_388_;
v_isShared_395_ = v_isSharedCheck_438_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_buckets_392_);
lean_inc(v_size_391_);
lean_dec(v_m_388_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_438_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_396_; uint64_t v___y_398_; 
v___x_396_ = lean_array_get_size(v_buckets_392_);
if (lean_obj_tag(v_a_389_) == 0)
{
uint64_t v___x_436_; 
v___x_436_ = 1723ULL;
v___y_398_ = v___x_436_;
goto v___jp_397_;
}
else
{
uint64_t v_hash_437_; 
v_hash_437_ = lean_ctor_get_uint64(v_a_389_, sizeof(void*)*2);
v___y_398_ = v_hash_437_;
goto v___jp_397_;
}
v___jp_397_:
{
uint64_t v___x_399_; uint64_t v___x_400_; uint64_t v_fold_401_; uint64_t v___x_402_; uint64_t v___x_403_; uint64_t v___x_404_; size_t v___x_405_; size_t v___x_406_; size_t v___x_407_; size_t v___x_408_; size_t v___x_409_; lean_object* v_bkt_410_; uint8_t v___x_411_; 
v___x_399_ = 32ULL;
v___x_400_ = lean_uint64_shift_right(v___y_398_, v___x_399_);
v_fold_401_ = lean_uint64_xor(v___y_398_, v___x_400_);
v___x_402_ = 16ULL;
v___x_403_ = lean_uint64_shift_right(v_fold_401_, v___x_402_);
v___x_404_ = lean_uint64_xor(v_fold_401_, v___x_403_);
v___x_405_ = lean_uint64_to_usize(v___x_404_);
v___x_406_ = lean_usize_of_nat(v___x_396_);
v___x_407_ = ((size_t)1ULL);
v___x_408_ = lean_usize_sub(v___x_406_, v___x_407_);
v___x_409_ = lean_usize_land(v___x_405_, v___x_408_);
v_bkt_410_ = lean_array_uget_borrowed(v_buckets_392_, v___x_409_);
v___x_411_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_389_, v_bkt_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v_size_x27_413_; lean_object* v___x_414_; lean_object* v_buckets_x27_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_412_ = lean_unsigned_to_nat(1u);
v_size_x27_413_ = lean_nat_add(v_size_391_, v___x_412_);
lean_dec(v_size_391_);
lean_inc(v_bkt_410_);
v___x_414_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_414_, 0, v_a_389_);
lean_ctor_set(v___x_414_, 1, v_b_390_);
lean_ctor_set(v___x_414_, 2, v_bkt_410_);
v_buckets_x27_415_ = lean_array_uset(v_buckets_392_, v___x_409_, v___x_414_);
v___x_416_ = lean_unsigned_to_nat(4u);
v___x_417_ = lean_nat_mul(v_size_x27_413_, v___x_416_);
v___x_418_ = lean_unsigned_to_nat(3u);
v___x_419_ = lean_nat_div(v___x_417_, v___x_418_);
lean_dec(v___x_417_);
v___x_420_ = lean_array_get_size(v_buckets_x27_415_);
v___x_421_ = lean_nat_dec_le(v___x_419_, v___x_420_);
lean_dec(v___x_419_);
if (v___x_421_ == 0)
{
lean_object* v_val_422_; lean_object* v___x_424_; 
v_val_422_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(v_buckets_x27_415_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 1, v_val_422_);
lean_ctor_set(v___x_394_, 0, v_size_x27_413_);
v___x_424_ = v___x_394_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_size_x27_413_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_val_422_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
else
{
lean_object* v___x_427_; 
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 1, v_buckets_x27_415_);
lean_ctor_set(v___x_394_, 0, v_size_x27_413_);
v___x_427_ = v___x_394_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_size_x27_413_);
lean_ctor_set(v_reuseFailAlloc_428_, 1, v_buckets_x27_415_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
else
{
lean_object* v___x_429_; lean_object* v_buckets_x27_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_434_; 
lean_inc(v_bkt_410_);
v___x_429_ = lean_box(0);
v_buckets_x27_430_ = lean_array_uset(v_buckets_392_, v___x_409_, v___x_429_);
v___x_431_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_389_, v_b_390_, v_bkt_410_);
v___x_432_ = lean_array_uset(v_buckets_x27_430_, v___x_409_, v___x_431_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 1, v___x_432_);
v___x_434_ = v___x_394_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_size_391_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v___x_432_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(lean_object* v_x_439_, lean_object* v_x_440_, lean_object* v_x_441_){
_start:
{
uint8_t v_stage_u2081_442_; 
v_stage_u2081_442_ = lean_ctor_get_uint8(v_x_439_, sizeof(void*)*2);
if (v_stage_u2081_442_ == 0)
{
lean_object* v_map_u2081_443_; lean_object* v_map_u2082_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_452_; 
v_map_u2081_443_ = lean_ctor_get(v_x_439_, 0);
v_map_u2082_444_ = lean_ctor_get(v_x_439_, 1);
v_isSharedCheck_452_ = !lean_is_exclusive(v_x_439_);
if (v_isSharedCheck_452_ == 0)
{
v___x_446_ = v_x_439_;
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_map_u2082_444_);
lean_inc(v_map_u2081_443_);
lean_dec(v_x_439_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_448_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(v_map_u2082_444_, v_x_440_, v_x_441_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 1, v___x_448_);
v___x_450_ = v___x_446_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_map_u2081_443_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v___x_448_);
lean_ctor_set_uint8(v_reuseFailAlloc_451_, sizeof(void*)*2, v_stage_u2081_442_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
else
{
lean_object* v_map_u2081_453_; lean_object* v_map_u2082_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_462_; 
v_map_u2081_453_ = lean_ctor_get(v_x_439_, 0);
v_map_u2082_454_ = lean_ctor_get(v_x_439_, 1);
v_isSharedCheck_462_ = !lean_is_exclusive(v_x_439_);
if (v_isSharedCheck_462_ == 0)
{
v___x_456_ = v_x_439_;
v_isShared_457_ = v_isSharedCheck_462_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_map_u2082_454_);
lean_inc(v_map_u2081_453_);
lean_dec(v_x_439_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_462_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_458_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(v_map_u2081_453_, v_x_440_, v_x_441_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_458_);
v___x_460_ = v___x_456_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_map_u2082_454_);
lean_ctor_set_uint8(v_reuseFailAlloc_461_, sizeof(void*)*2, v_stage_u2081_442_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(lean_object* v_a_463_, lean_object* v_x_464_){
_start:
{
if (lean_obj_tag(v_x_464_) == 0)
{
lean_object* v___x_465_; 
v___x_465_ = lean_box(0);
return v___x_465_;
}
else
{
lean_object* v_key_466_; lean_object* v_value_467_; lean_object* v_tail_468_; uint8_t v___x_469_; 
v_key_466_ = lean_ctor_get(v_x_464_, 0);
v_value_467_ = lean_ctor_get(v_x_464_, 1);
v_tail_468_ = lean_ctor_get(v_x_464_, 2);
v___x_469_ = lean_name_eq(v_key_466_, v_a_463_);
if (v___x_469_ == 0)
{
v_x_464_ = v_tail_468_;
goto _start;
}
else
{
lean_object* v___x_471_; 
lean_inc(v_value_467_);
v___x_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_471_, 0, v_value_467_);
return v___x_471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_472_, lean_object* v_x_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_472_, v_x_473_);
lean_dec(v_x_473_);
lean_dec(v_a_472_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(lean_object* v_m_475_, lean_object* v_a_476_){
_start:
{
lean_object* v_buckets_477_; lean_object* v___x_478_; uint64_t v___y_480_; 
v_buckets_477_ = lean_ctor_get(v_m_475_, 1);
v___x_478_ = lean_array_get_size(v_buckets_477_);
if (lean_obj_tag(v_a_476_) == 0)
{
uint64_t v___x_494_; 
v___x_494_ = 1723ULL;
v___y_480_ = v___x_494_;
goto v___jp_479_;
}
else
{
uint64_t v_hash_495_; 
v_hash_495_ = lean_ctor_get_uint64(v_a_476_, sizeof(void*)*2);
v___y_480_ = v_hash_495_;
goto v___jp_479_;
}
v___jp_479_:
{
uint64_t v___x_481_; uint64_t v___x_482_; uint64_t v_fold_483_; uint64_t v___x_484_; uint64_t v___x_485_; uint64_t v___x_486_; size_t v___x_487_; size_t v___x_488_; size_t v___x_489_; size_t v___x_490_; size_t v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_481_ = 32ULL;
v___x_482_ = lean_uint64_shift_right(v___y_480_, v___x_481_);
v_fold_483_ = lean_uint64_xor(v___y_480_, v___x_482_);
v___x_484_ = 16ULL;
v___x_485_ = lean_uint64_shift_right(v_fold_483_, v___x_484_);
v___x_486_ = lean_uint64_xor(v_fold_483_, v___x_485_);
v___x_487_ = lean_uint64_to_usize(v___x_486_);
v___x_488_ = lean_usize_of_nat(v___x_478_);
v___x_489_ = ((size_t)1ULL);
v___x_490_ = lean_usize_sub(v___x_488_, v___x_489_);
v___x_491_ = lean_usize_land(v___x_487_, v___x_490_);
v___x_492_ = lean_array_uget_borrowed(v_buckets_477_, v___x_491_);
v___x_493_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_476_, v___x_492_);
return v___x_493_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg___boxed(lean_object* v_m_496_, lean_object* v_a_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_m_496_, v_a_497_);
lean_dec(v_a_497_);
lean_dec_ref(v_m_496_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_keys_499_, lean_object* v_vals_500_, lean_object* v_i_501_, lean_object* v_k_502_){
_start:
{
lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_503_ = lean_array_get_size(v_keys_499_);
v___x_504_ = lean_nat_dec_lt(v_i_501_, v___x_503_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
lean_dec(v_i_501_);
v___x_505_ = lean_box(0);
return v___x_505_;
}
else
{
lean_object* v_k_x27_506_; uint8_t v___x_507_; 
v_k_x27_506_ = lean_array_fget_borrowed(v_keys_499_, v_i_501_);
v___x_507_ = lean_name_eq(v_k_502_, v_k_x27_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_unsigned_to_nat(1u);
v___x_509_ = lean_nat_add(v_i_501_, v___x_508_);
lean_dec(v_i_501_);
v_i_501_ = v___x_509_;
goto _start;
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_array_fget_borrowed(v_vals_500_, v_i_501_);
lean_dec(v_i_501_);
lean_inc(v___x_511_);
v___x_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_keys_513_, lean_object* v_vals_514_, lean_object* v_i_515_, lean_object* v_k_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_513_, v_vals_514_, v_i_515_, v_k_516_);
lean_dec(v_k_516_);
lean_dec_ref(v_vals_514_);
lean_dec_ref(v_keys_513_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(lean_object* v_x_518_, size_t v_x_519_, lean_object* v_x_520_){
_start:
{
if (lean_obj_tag(v_x_518_) == 0)
{
lean_object* v_es_521_; lean_object* v___x_522_; size_t v___x_523_; size_t v___x_524_; lean_object* v_j_525_; lean_object* v___x_526_; 
v_es_521_ = lean_ctor_get(v_x_518_, 0);
v___x_522_ = lean_box(2);
v___x_523_ = ((size_t)31ULL);
v___x_524_ = lean_usize_land(v_x_519_, v___x_523_);
v_j_525_ = lean_usize_to_nat(v___x_524_);
v___x_526_ = lean_array_get_borrowed(v___x_522_, v_es_521_, v_j_525_);
lean_dec(v_j_525_);
switch(lean_obj_tag(v___x_526_))
{
case 0:
{
lean_object* v_key_527_; lean_object* v_val_528_; uint8_t v___x_529_; 
v_key_527_ = lean_ctor_get(v___x_526_, 0);
v_val_528_ = lean_ctor_get(v___x_526_, 1);
v___x_529_ = lean_name_eq(v_x_520_, v_key_527_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; 
v___x_530_ = lean_box(0);
return v___x_530_;
}
else
{
lean_object* v___x_531_; 
lean_inc(v_val_528_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v_val_528_);
return v___x_531_;
}
}
case 1:
{
lean_object* v_node_532_; size_t v___x_533_; size_t v___x_534_; 
v_node_532_ = lean_ctor_get(v___x_526_, 0);
v___x_533_ = ((size_t)5ULL);
v___x_534_ = lean_usize_shift_right(v_x_519_, v___x_533_);
v_x_518_ = v_node_532_;
v_x_519_ = v___x_534_;
goto _start;
}
default: 
{
lean_object* v___x_536_; 
v___x_536_ = lean_box(0);
return v___x_536_;
}
}
}
else
{
lean_object* v_ks_537_; lean_object* v_vs_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v_ks_537_ = lean_ctor_get(v_x_518_, 0);
v_vs_538_ = lean_ctor_get(v_x_518_, 1);
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_ks_537_, v_vs_538_, v___x_539_, v_x_520_);
return v___x_540_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_541_, lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
size_t v_x_1592__boxed_544_; lean_object* v_res_545_; 
v_x_1592__boxed_544_ = lean_unbox_usize(v_x_542_);
lean_dec(v_x_542_);
v_res_545_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_541_, v_x_1592__boxed_544_, v_x_543_);
lean_dec(v_x_543_);
lean_dec_ref(v_x_541_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(lean_object* v_x_546_, lean_object* v_x_547_){
_start:
{
uint64_t v___y_549_; 
if (lean_obj_tag(v_x_547_) == 0)
{
uint64_t v___x_552_; 
v___x_552_ = 1723ULL;
v___y_549_ = v___x_552_;
goto v___jp_548_;
}
else
{
uint64_t v_hash_553_; 
v_hash_553_ = lean_ctor_get_uint64(v_x_547_, sizeof(void*)*2);
v___y_549_ = v_hash_553_;
goto v___jp_548_;
}
v___jp_548_:
{
size_t v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_uint64_to_usize(v___y_549_);
v___x_551_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_546_, v___x_550_, v_x_547_);
return v___x_551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg___boxed(lean_object* v_x_554_, lean_object* v_x_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_x_554_, v_x_555_);
lean_dec(v_x_555_);
lean_dec_ref(v_x_554_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(lean_object* v_x_557_, lean_object* v_x_558_){
_start:
{
uint8_t v_stage_u2081_559_; 
v_stage_u2081_559_ = lean_ctor_get_uint8(v_x_557_, sizeof(void*)*2);
if (v_stage_u2081_559_ == 0)
{
lean_object* v_map_u2081_560_; lean_object* v_map_u2082_561_; lean_object* v___x_562_; 
v_map_u2081_560_ = lean_ctor_get(v_x_557_, 0);
v_map_u2082_561_ = lean_ctor_get(v_x_557_, 1);
v___x_562_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_map_u2082_561_, v_x_558_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v___x_563_; 
v___x_563_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_map_u2081_560_, v_x_558_);
return v___x_563_;
}
else
{
return v___x_562_;
}
}
else
{
lean_object* v_map_u2081_564_; lean_object* v___x_565_; 
v_map_u2081_564_ = lean_ctor_get(v_x_557_, 0);
v___x_565_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_map_u2081_564_, v_x_558_);
return v___x_565_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg___boxed(lean_object* v_x_566_, lean_object* v_x_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_x_566_, v_x_567_);
lean_dec(v_x_567_);
lean_dec_ref(v_x_566_);
return v_res_568_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_addAliasEntry_spec__2(lean_object* v_a_569_, lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
uint8_t v___x_571_; 
v___x_571_ = 0;
return v___x_571_;
}
else
{
lean_object* v_head_572_; lean_object* v_tail_573_; uint8_t v___x_574_; 
v_head_572_ = lean_ctor_get(v_x_570_, 0);
v_tail_573_ = lean_ctor_get(v_x_570_, 1);
v___x_574_ = lean_name_eq(v_a_569_, v_head_572_);
if (v___x_574_ == 0)
{
v_x_570_ = v_tail_573_;
goto _start;
}
else
{
return v___x_574_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_addAliasEntry_spec__2___boxed(lean_object* v_a_576_, lean_object* v_x_577_){
_start:
{
uint8_t v_res_578_; lean_object* v_r_579_; 
v_res_578_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_a_576_, v_x_577_);
lean_dec(v_x_577_);
lean_dec(v_a_576_);
v_r_579_ = lean_box(v_res_578_);
return v_r_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAliasEntry(lean_object* v_s_580_, lean_object* v_e_581_){
_start:
{
lean_object* v_fst_582_; lean_object* v_snd_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_599_; 
v_fst_582_ = lean_ctor_get(v_e_581_, 0);
v_snd_583_ = lean_ctor_get(v_e_581_, 1);
v_isSharedCheck_599_ = !lean_is_exclusive(v_e_581_);
if (v_isSharedCheck_599_ == 0)
{
v___x_585_ = v_e_581_;
v_isShared_586_ = v_isSharedCheck_599_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_snd_583_);
lean_inc(v_fst_582_);
lean_dec(v_e_581_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_599_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_s_580_, v_fst_582_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_588_ = lean_box(0);
if (v_isShared_586_ == 0)
{
lean_ctor_set_tag(v___x_585_, 1);
lean_ctor_set(v___x_585_, 1, v___x_588_);
lean_ctor_set(v___x_585_, 0, v_snd_583_);
v___x_590_ = v___x_585_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_snd_583_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v___x_588_);
v___x_590_ = v_reuseFailAlloc_592_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_s_580_, v_fst_582_, v___x_590_);
return v___x_591_;
}
}
else
{
lean_object* v_val_593_; uint8_t v___x_594_; 
v_val_593_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_val_593_);
lean_dec_ref_known(v___x_587_, 1);
v___x_594_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_snd_583_, v_val_593_);
if (v___x_594_ == 0)
{
lean_object* v___x_596_; 
if (v_isShared_586_ == 0)
{
lean_ctor_set_tag(v___x_585_, 1);
lean_ctor_set(v___x_585_, 1, v_val_593_);
lean_ctor_set(v___x_585_, 0, v_snd_583_);
v___x_596_ = v___x_585_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_snd_583_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_val_593_);
v___x_596_ = v_reuseFailAlloc_598_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_s_580_, v_fst_582_, v___x_596_);
return v___x_597_;
}
}
else
{
lean_dec(v_val_593_);
lean_del_object(v___x_585_);
lean_dec(v_snd_583_);
lean_dec(v_fst_582_);
return v_s_580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(lean_object* v_00_u03b2_600_, lean_object* v_x_601_, lean_object* v_x_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_x_601_, v_x_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___boxed(lean_object* v_00_u03b2_604_, lean_object* v_x_605_, lean_object* v_x_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(v_00_u03b2_604_, v_x_605_, v_x_606_);
lean_dec(v_x_606_);
lean_dec_ref(v_x_605_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1(lean_object* v_00_u03b2_608_, lean_object* v_x_609_, lean_object* v_x_610_, lean_object* v_x_611_){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_x_609_, v_x_610_, v_x_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(lean_object* v_00_u03b2_613_, lean_object* v_x_614_, lean_object* v_x_615_){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_x_614_, v_x_615_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___boxed(lean_object* v_00_u03b2_617_, lean_object* v_x_618_, lean_object* v_x_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(v_00_u03b2_617_, v_x_618_, v_x_619_);
lean_dec(v_x_619_);
lean_dec_ref(v_x_618_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(lean_object* v_00_u03b2_621_, lean_object* v_m_622_, lean_object* v_a_623_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_m_622_, v_a_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___boxed(lean_object* v_00_u03b2_625_, lean_object* v_m_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(v_00_u03b2_625_, v_m_626_, v_a_627_);
lean_dec(v_a_627_);
lean_dec_ref(v_m_626_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3(lean_object* v_00_u03b2_629_, lean_object* v_x_630_, lean_object* v_x_631_, lean_object* v_x_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(v_x_630_, v_x_631_, v_x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4(lean_object* v_00_u03b2_634_, lean_object* v_m_635_, lean_object* v_a_636_, lean_object* v_b_637_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(v_m_635_, v_a_636_, v_b_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_639_, lean_object* v_x_640_, size_t v_x_641_, lean_object* v_x_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_640_, v_x_641_, v_x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_644_, lean_object* v_x_645_, lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
size_t v_x_1757__boxed_648_; lean_object* v_res_649_; 
v_x_1757__boxed_648_ = lean_unbox_usize(v_x_646_);
lean_dec(v_x_646_);
v_res_649_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(v_00_u03b2_644_, v_x_645_, v_x_1757__boxed_648_, v_x_647_);
lean_dec(v_x_647_);
lean_dec_ref(v_x_645_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_650_, lean_object* v_a_651_, lean_object* v_x_652_){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_651_, v_x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_654_, lean_object* v_a_655_, lean_object* v_x_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(v_00_u03b2_654_, v_a_655_, v_x_656_);
lean_dec(v_x_656_);
lean_dec(v_a_655_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_658_, lean_object* v_x_659_, size_t v_x_660_, size_t v_x_661_, lean_object* v_x_662_, lean_object* v_x_663_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_659_, v_x_660_, v_x_661_, v_x_662_, v_x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b2_665_, lean_object* v_x_666_, lean_object* v_x_667_, lean_object* v_x_668_, lean_object* v_x_669_, lean_object* v_x_670_){
_start:
{
size_t v_x_1773__boxed_671_; size_t v_x_1774__boxed_672_; lean_object* v_res_673_; 
v_x_1773__boxed_671_ = lean_unbox_usize(v_x_667_);
lean_dec(v_x_667_);
v_x_1774__boxed_672_ = lean_unbox_usize(v_x_668_);
lean_dec(v_x_668_);
v_res_673_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(v_00_u03b2_665_, v_x_666_, v_x_1773__boxed_671_, v_x_1774__boxed_672_, v_x_669_, v_x_670_);
return v_res_673_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(lean_object* v_00_u03b2_674_, lean_object* v_a_675_, lean_object* v_x_676_){
_start:
{
uint8_t v___x_677_; 
v___x_677_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_675_, v_x_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___boxed(lean_object* v_00_u03b2_678_, lean_object* v_a_679_, lean_object* v_x_680_){
_start:
{
uint8_t v_res_681_; lean_object* v_r_682_; 
v_res_681_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(v_00_u03b2_678_, v_a_679_, v_x_680_);
lean_dec(v_x_680_);
lean_dec(v_a_679_);
v_r_682_ = lean_box(v_res_681_);
return v_r_682_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9(lean_object* v_00_u03b2_683_, lean_object* v_data_684_){
_start:
{
lean_object* v___x_685_; 
v___x_685_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(v_data_684_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10(lean_object* v_00_u03b2_686_, lean_object* v_a_687_, lean_object* v_b_688_, lean_object* v_x_689_){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_687_, v_b_688_, v_x_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_691_, lean_object* v_keys_692_, lean_object* v_vals_693_, lean_object* v_heq_694_, lean_object* v_i_695_, lean_object* v_k_696_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_692_, v_vals_693_, v_i_695_, v_k_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_698_, lean_object* v_keys_699_, lean_object* v_vals_700_, lean_object* v_heq_701_, lean_object* v_i_702_, lean_object* v_k_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_698_, v_keys_699_, v_vals_700_, v_heq_701_, v_i_702_, v_k_703_);
lean_dec(v_k_703_);
lean_dec_ref(v_vals_700_);
lean_dec_ref(v_keys_699_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_705_, lean_object* v_n_706_, lean_object* v_k_707_, lean_object* v_v_708_){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(v_n_706_, v_k_707_, v_v_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(lean_object* v_00_u03b2_710_, size_t v_depth_711_, lean_object* v_keys_712_, lean_object* v_vals_713_, lean_object* v_heq_714_, lean_object* v_i_715_, lean_object* v_entries_716_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_depth_711_, v_keys_712_, v_vals_713_, v_i_715_, v_entries_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___boxed(lean_object* v_00_u03b2_718_, lean_object* v_depth_719_, lean_object* v_keys_720_, lean_object* v_vals_721_, lean_object* v_heq_722_, lean_object* v_i_723_, lean_object* v_entries_724_){
_start:
{
size_t v_depth_boxed_725_; lean_object* v_res_726_; 
v_depth_boxed_725_ = lean_unbox_usize(v_depth_719_);
lean_dec(v_depth_719_);
v_res_726_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(v_00_u03b2_718_, v_depth_boxed_725_, v_keys_720_, v_vals_721_, v_heq_722_, v_i_723_, v_entries_724_);
lean_dec_ref(v_vals_721_);
lean_dec_ref(v_keys_720_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14(lean_object* v_00_u03b2_727_, lean_object* v_i_728_, lean_object* v_source_729_, lean_object* v_target_730_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(v_i_728_, v_source_729_, v_target_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11(lean_object* v_00_u03b2_732_, lean_object* v_x_733_, lean_object* v_x_734_, lean_object* v_x_735_, lean_object* v_x_736_){
_start:
{
lean_object* v___x_737_; 
v___x_737_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(v_x_733_, v_x_734_, v_x_735_, v_x_736_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16(lean_object* v_00_u03b2_738_, lean_object* v_x_739_, lean_object* v_x_740_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(v_x_739_, v_x_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(lean_object* v_m_742_){
_start:
{
uint8_t v_stage_u2081_743_; 
v_stage_u2081_743_ = lean_ctor_get_uint8(v_m_742_, sizeof(void*)*2);
if (v_stage_u2081_743_ == 0)
{
return v_m_742_;
}
else
{
lean_object* v_map_u2081_744_; lean_object* v_map_u2082_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_753_; 
v_map_u2081_744_ = lean_ctor_get(v_m_742_, 0);
v_map_u2082_745_ = lean_ctor_get(v_m_742_, 1);
v_isSharedCheck_753_ = !lean_is_exclusive(v_m_742_);
if (v_isSharedCheck_753_ == 0)
{
v___x_747_ = v_m_742_;
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_map_u2082_745_);
lean_inc(v_map_u2081_744_);
lean_dec(v_m_742_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
uint8_t v___x_749_; lean_object* v___x_751_; 
v___x_749_ = 0;
if (v_isShared_748_ == 0)
{
v___x_751_ = v___x_747_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_map_u2081_744_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v_map_u2082_745_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
lean_ctor_set_uint8(v___x_751_, sizeof(void*)*2, v___x_749_);
return v___x_751_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_754_, lean_object* v_m_755_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(v_m_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object* v_es_757_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = lean_array_mk(v_es_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_759_, size_t v_i_760_, size_t v_stop_761_, lean_object* v_b_762_){
_start:
{
uint8_t v___x_763_; 
v___x_763_ = lean_usize_dec_eq(v_i_760_, v_stop_761_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; lean_object* v___x_765_; size_t v___x_766_; size_t v___x_767_; 
v___x_764_ = lean_array_uget_borrowed(v_as_759_, v_i_760_);
lean_inc(v___x_764_);
v___x_765_ = l_Lean_addAliasEntry(v_b_762_, v___x_764_);
v___x_766_ = ((size_t)1ULL);
v___x_767_ = lean_usize_add(v_i_760_, v___x_766_);
v_i_760_ = v___x_767_;
v_b_762_ = v___x_765_;
goto _start;
}
else
{
return v_b_762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_769_, lean_object* v_i_770_, lean_object* v_stop_771_, lean_object* v_b_772_){
_start:
{
size_t v_i_boxed_773_; size_t v_stop_boxed_774_; lean_object* v_res_775_; 
v_i_boxed_773_ = lean_unbox_usize(v_i_770_);
lean_dec(v_i_770_);
v_stop_boxed_774_ = lean_unbox_usize(v_stop_771_);
lean_dec(v_stop_771_);
v_res_775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(v_as_769_, v_i_boxed_773_, v_stop_boxed_774_, v_b_772_);
lean_dec_ref(v_as_769_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_as_776_, size_t v_i_777_, size_t v_stop_778_, lean_object* v_b_779_){
_start:
{
lean_object* v___y_781_; uint8_t v___x_785_; 
v___x_785_ = lean_usize_dec_eq(v_i_777_, v_stop_778_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_786_ = lean_array_uget_borrowed(v_as_776_, v_i_777_);
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = lean_array_get_size(v___x_786_);
v___x_789_ = lean_nat_dec_lt(v___x_787_, v___x_788_);
if (v___x_789_ == 0)
{
v___y_781_ = v_b_779_;
goto v___jp_780_;
}
else
{
size_t v___x_790_; size_t v___x_791_; lean_object* v___x_792_; 
v___x_790_ = ((size_t)0ULL);
v___x_791_ = lean_usize_of_nat(v___x_788_);
v___x_792_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(v___x_786_, v___x_790_, v___x_791_, v_b_779_);
v___y_781_ = v___x_792_;
goto v___jp_780_;
}
}
else
{
return v_b_779_;
}
v___jp_780_:
{
size_t v___x_782_; size_t v___x_783_; 
v___x_782_ = ((size_t)1ULL);
v___x_783_ = lean_usize_add(v_i_777_, v___x_782_);
v_i_777_ = v___x_783_;
v_b_779_ = v___y_781_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_as_793_, lean_object* v_i_794_, lean_object* v_stop_795_, lean_object* v_b_796_){
_start:
{
size_t v_i_boxed_797_; size_t v_stop_boxed_798_; lean_object* v_res_799_; 
v_i_boxed_797_ = lean_unbox_usize(v_i_794_);
lean_dec(v_i_794_);
v_stop_boxed_798_ = lean_unbox_usize(v_stop_795_);
lean_dec(v_stop_795_);
v_res_799_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(v_as_793_, v_i_boxed_797_, v_stop_boxed_798_, v_b_796_);
lean_dec_ref(v_as_793_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(lean_object* v_initState_800_, lean_object* v_as_801_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_array_get_size(v_as_801_);
v___x_804_ = lean_nat_dec_lt(v___x_802_, v___x_803_);
if (v___x_804_ == 0)
{
return v_initState_800_;
}
else
{
size_t v___x_805_; size_t v___x_806_; lean_object* v___x_807_; 
v___x_805_ = ((size_t)0ULL);
v___x_806_ = lean_usize_of_nat(v___x_803_);
v___x_807_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(v_as_801_, v___x_805_, v___x_806_, v_initState_800_);
return v___x_807_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0___boxed(lean_object* v_initState_808_, lean_object* v_as_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(v_initState_808_, v_as_809_);
lean_dec_ref(v_as_809_);
return v_res_810_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_811_ = lean_box(0);
v___x_812_ = lean_unsigned_to_nat(16u);
v___x_813_ = lean_mk_array(v___x_812_, v___x_811_);
return v___x_813_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_814_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_815_ = lean_unsigned_to_nat(0u);
v___x_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v___x_814_);
return v___x_816_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_817_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_818_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_819_, 0, v___x_818_);
return v___x_819_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; uint8_t v___x_822_; lean_object* v___x_823_; 
v___x_820_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_821_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_822_ = 1;
v___x_823_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_823_, 0, v___x_821_);
lean_ctor_set(v___x_823_, 1, v___x_820_);
lean_ctor_set_uint8(v___x_823_, sizeof(void*)*2, v___x_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object* v_es_824_){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_825_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_826_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(v___x_825_, v_es_824_);
v___x_827_ = l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(v___x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object* v_es_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(v_es_828_);
lean_dec_ref(v_es_828_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_));
v___x_847_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object* v_a_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_();
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAlias___lam__0(lean_object* v_addEntryFn_850_, lean_object* v___x_851_, lean_object* v_s_852_){
_start:
{
lean_object* v_importedEntries_853_; lean_object* v_state_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_862_; 
v_importedEntries_853_ = lean_ctor_get(v_s_852_, 0);
v_state_854_ = lean_ctor_get(v_s_852_, 1);
v_isSharedCheck_862_ = !lean_is_exclusive(v_s_852_);
if (v_isSharedCheck_862_ == 0)
{
v___x_856_ = v_s_852_;
v_isShared_857_ = v_isSharedCheck_862_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_state_854_);
lean_inc(v_importedEntries_853_);
lean_dec(v_s_852_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_862_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v_state_858_; lean_object* v___x_860_; 
v_state_858_ = lean_apply_2(v_addEntryFn_850_, v_state_854_, v___x_851_);
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 1, v_state_858_);
v___x_860_ = v___x_856_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_importedEntries_853_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v_state_858_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addAlias(lean_object* v_env_863_, lean_object* v_a_864_, lean_object* v_e_865_){
_start:
{
lean_object* v___x_866_; lean_object* v_toEnvExtension_867_; lean_object* v_addEntryFn_868_; lean_object* v_asyncMode_869_; uint8_t v_logWrites_870_; lean_object* v___x_871_; lean_object* v___f_872_; lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_866_ = l_Lean_aliasExtension;
v_toEnvExtension_867_ = lean_ctor_get(v___x_866_, 0);
v_addEntryFn_868_ = lean_ctor_get(v___x_866_, 3);
v_asyncMode_869_ = lean_ctor_get(v_toEnvExtension_867_, 2);
v_logWrites_870_ = lean_ctor_get_uint8(v_toEnvExtension_867_, sizeof(void*)*6);
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v_a_864_);
lean_ctor_set(v___x_871_, 1, v_e_865_);
lean_inc(v_addEntryFn_868_);
v___f_872_ = lean_alloc_closure((void*)(l_Lean_addAlias___lam__0), 3, 2);
lean_closure_set(v___f_872_, 0, v_addEntryFn_868_);
lean_closure_set(v___f_872_, 1, v___x_871_);
v___x_873_ = lean_box(0);
v___x_874_ = 1;
if (v_logWrites_870_ == 0)
{
lean_object* v___x_875_; 
lean_inc_ref(v_toEnvExtension_867_);
v___x_875_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_867_, v_env_863_, v___f_872_, v_asyncMode_869_, v___x_873_, v___x_874_);
return v___x_875_;
}
else
{
lean_object* v___x_876_; lean_object* v___x_877_; 
lean_inc_ref_n(v_toEnvExtension_867_, 2);
v___x_876_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_867_, v_env_863_);
lean_dec_ref(v_env_863_);
v___x_877_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_867_, v___x_876_, v___f_872_, v_asyncMode_869_, v___x_873_, v___x_874_);
return v___x_877_;
}
}
}
static lean_object* _init_l_Lean_getAliasState___closed__0(void){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_SMap_instInhabited___redArg();
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAliasState(lean_object* v_env_879_){
_start:
{
lean_object* v___x_880_; lean_object* v_toEnvExtension_881_; lean_object* v_asyncMode_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_880_ = l_Lean_aliasExtension;
v_toEnvExtension_881_ = lean_ctor_get(v___x_880_, 0);
v_asyncMode_882_ = lean_ctor_get(v_toEnvExtension_881_, 2);
v___x_883_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_884_ = lean_box(0);
v___x_885_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_883_, v___x_880_, v_env_879_, v_asyncMode_882_, v___x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0(lean_object* v_env_886_, uint8_t v_skipProtected_887_, lean_object* v_a_888_, lean_object* v_a_889_){
_start:
{
if (lean_obj_tag(v_a_888_) == 0)
{
lean_object* v___x_890_; 
lean_dec_ref(v_env_886_);
v___x_890_ = l_List_reverse___redArg(v_a_889_);
return v___x_890_;
}
else
{
lean_object* v_head_891_; lean_object* v_tail_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_903_; 
v_head_891_ = lean_ctor_get(v_a_888_, 0);
v_tail_892_ = lean_ctor_get(v_a_888_, 1);
v_isSharedCheck_903_ = !lean_is_exclusive(v_a_888_);
if (v_isSharedCheck_903_ == 0)
{
v___x_894_ = v_a_888_;
v_isShared_895_ = v_isSharedCheck_903_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_tail_892_);
lean_inc(v_head_891_);
lean_dec(v_a_888_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_903_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
uint8_t v___x_896_; 
lean_inc(v_head_891_);
lean_inc_ref(v_env_886_);
v___x_896_ = l_Lean_isProtected(v_env_886_, v_head_891_);
if (v___x_896_ == 0)
{
if (v_skipProtected_887_ == 0)
{
lean_del_object(v___x_894_);
lean_dec(v_head_891_);
v_a_888_ = v_tail_892_;
goto _start;
}
else
{
lean_object* v___x_899_; 
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 1, v_a_889_);
v___x_899_ = v___x_894_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_head_891_);
lean_ctor_set(v_reuseFailAlloc_901_, 1, v_a_889_);
v___x_899_ = v_reuseFailAlloc_901_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
v_a_888_ = v_tail_892_;
v_a_889_ = v___x_899_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_894_);
lean_dec(v_head_891_);
v_a_888_ = v_tail_892_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0___boxed(lean_object* v_env_904_, lean_object* v_skipProtected_905_, lean_object* v_a_906_, lean_object* v_a_907_){
_start:
{
uint8_t v_skipProtected_boxed_908_; lean_object* v_res_909_; 
v_skipProtected_boxed_908_ = lean_unbox(v_skipProtected_905_);
v_res_909_ = l_List_filterTR_loop___at___00Lean_getAliases_spec__0(v_env_904_, v_skipProtected_boxed_908_, v_a_906_, v_a_907_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAliases(lean_object* v_env_910_, lean_object* v_a_911_, uint8_t v_skipProtected_912_){
_start:
{
lean_object* v___x_913_; lean_object* v_toEnvExtension_914_; lean_object* v_asyncMode_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_913_ = l_Lean_aliasExtension;
v_toEnvExtension_914_ = lean_ctor_get(v___x_913_, 0);
v_asyncMode_915_ = lean_ctor_get(v_toEnvExtension_914_, 2);
v___x_916_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_917_ = lean_box(0);
lean_inc_ref(v_env_910_);
v___x_918_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_916_, v___x_913_, v_env_910_, v_asyncMode_915_, v___x_917_);
v___x_919_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v___x_918_, v_a_911_);
lean_dec(v___x_918_);
if (lean_obj_tag(v___x_919_) == 0)
{
lean_object* v___x_920_; 
lean_dec_ref(v_env_910_);
v___x_920_ = lean_box(0);
return v___x_920_;
}
else
{
if (v_skipProtected_912_ == 0)
{
lean_object* v_val_921_; 
lean_dec_ref(v_env_910_);
v_val_921_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_val_921_);
lean_dec_ref_known(v___x_919_, 1);
return v_val_921_;
}
else
{
lean_object* v_val_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_val_922_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_val_922_);
lean_dec_ref_known(v___x_919_, 1);
v___x_923_ = lean_box(0);
v___x_924_ = l_List_filterTR_loop___at___00Lean_getAliases_spec__0(v_env_910_, v_skipProtected_912_, v_val_922_, v___x_923_);
return v___x_924_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAliases___boxed(lean_object* v_env_925_, lean_object* v_a_926_, lean_object* v_skipProtected_927_){
_start:
{
uint8_t v_skipProtected_boxed_928_; lean_object* v_res_929_; 
v_skipProtected_boxed_928_ = lean_unbox(v_skipProtected_927_);
v_res_929_ = l_Lean_getAliases(v_env_925_, v_a_926_, v_skipProtected_boxed_928_);
lean_dec(v_a_926_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0(lean_object* v_e_930_, lean_object* v_as_931_, lean_object* v_a_932_, lean_object* v_es_933_){
_start:
{
uint8_t v___x_934_; 
v___x_934_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_e_930_, v_es_933_);
if (v___x_934_ == 0)
{
lean_dec(v_a_932_);
return v_as_931_;
}
else
{
lean_object* v___x_935_; 
v___x_935_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_935_, 0, v_a_932_);
lean_ctor_set(v___x_935_, 1, v_as_931_);
return v___x_935_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0___boxed(lean_object* v_e_936_, lean_object* v_as_937_, lean_object* v_a_938_, lean_object* v_es_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Lean_getRevAliases___lam__0(v_e_936_, v_as_937_, v_a_938_, v_es_939_);
lean_dec(v_es_939_);
lean_dec(v_e_936_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(lean_object* v_f_941_, lean_object* v_keys_942_, lean_object* v_vals_943_, lean_object* v_i_944_, lean_object* v_acc_945_){
_start:
{
lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_946_ = lean_array_get_size(v_keys_942_);
v___x_947_ = lean_nat_dec_lt(v_i_944_, v___x_946_);
if (v___x_947_ == 0)
{
lean_dec(v_i_944_);
lean_dec(v_f_941_);
return v_acc_945_;
}
else
{
lean_object* v_k_948_; lean_object* v_v_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v_k_948_ = lean_array_fget_borrowed(v_keys_942_, v_i_944_);
v_v_949_ = lean_array_fget_borrowed(v_vals_943_, v_i_944_);
lean_inc(v_f_941_);
lean_inc(v_v_949_);
lean_inc(v_k_948_);
v___x_950_ = lean_apply_3(v_f_941_, v_acc_945_, v_k_948_, v_v_949_);
v___x_951_ = lean_unsigned_to_nat(1u);
v___x_952_ = lean_nat_add(v_i_944_, v___x_951_);
lean_dec(v_i_944_);
v_i_944_ = v___x_952_;
v_acc_945_ = v___x_950_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_f_954_, lean_object* v_keys_955_, lean_object* v_vals_956_, lean_object* v_i_957_, lean_object* v_acc_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_954_, v_keys_955_, v_vals_956_, v_i_957_, v_acc_958_);
lean_dec_ref(v_vals_956_);
lean_dec_ref(v_keys_955_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_f_960_, lean_object* v_as_961_, size_t v_i_962_, size_t v_stop_963_, lean_object* v_b_964_){
_start:
{
lean_object* v___y_966_; uint8_t v___x_970_; 
v___x_970_ = lean_usize_dec_eq(v_i_962_, v_stop_963_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; 
v___x_971_ = lean_array_uget_borrowed(v_as_961_, v_i_962_);
switch(lean_obj_tag(v___x_971_))
{
case 0:
{
lean_object* v_key_972_; lean_object* v_val_973_; lean_object* v___x_974_; 
v_key_972_ = lean_ctor_get(v___x_971_, 0);
v_val_973_ = lean_ctor_get(v___x_971_, 1);
lean_inc(v_f_960_);
lean_inc(v_val_973_);
lean_inc(v_key_972_);
v___x_974_ = lean_apply_3(v_f_960_, v_b_964_, v_key_972_, v_val_973_);
v___y_966_ = v___x_974_;
goto v___jp_965_;
}
case 1:
{
lean_object* v_node_975_; lean_object* v___x_976_; 
v_node_975_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_f_960_);
v___x_976_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_960_, v_node_975_, v_b_964_);
v___y_966_ = v___x_976_;
goto v___jp_965_;
}
default: 
{
v___y_966_ = v_b_964_;
goto v___jp_965_;
}
}
}
else
{
lean_dec(v_f_960_);
return v_b_964_;
}
v___jp_965_:
{
size_t v___x_967_; size_t v___x_968_; 
v___x_967_ = ((size_t)1ULL);
v___x_968_ = lean_usize_add(v_i_962_, v___x_967_);
v_i_962_ = v___x_968_;
v_b_964_ = v___y_966_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_f_977_, lean_object* v_x_978_, lean_object* v_x_979_){
_start:
{
if (lean_obj_tag(v_x_978_) == 0)
{
lean_object* v_es_980_; lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v_es_980_ = lean_ctor_get(v_x_978_, 0);
v___x_981_ = lean_unsigned_to_nat(0u);
v___x_982_ = lean_array_get_size(v_es_980_);
v___x_983_ = lean_nat_dec_lt(v___x_981_, v___x_982_);
if (v___x_983_ == 0)
{
lean_dec(v_f_977_);
return v_x_979_;
}
else
{
size_t v___x_984_; size_t v___x_985_; lean_object* v___x_986_; 
v___x_984_ = ((size_t)0ULL);
v___x_985_ = lean_usize_of_nat(v___x_982_);
v___x_986_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_977_, v_es_980_, v___x_984_, v___x_985_, v_x_979_);
return v___x_986_;
}
}
else
{
lean_object* v_ks_987_; lean_object* v_vs_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v_ks_987_ = lean_ctor_get(v_x_978_, 0);
v_vs_988_ = lean_ctor_get(v_x_978_, 1);
v___x_989_ = lean_unsigned_to_nat(0u);
v___x_990_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_977_, v_ks_987_, v_vs_988_, v___x_989_, v_x_979_);
return v___x_990_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_f_991_, lean_object* v_x_992_, lean_object* v_x_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_991_, v_x_992_, v_x_993_);
lean_dec_ref(v_x_992_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_f_995_, lean_object* v_as_996_, lean_object* v_i_997_, lean_object* v_stop_998_, lean_object* v_b_999_){
_start:
{
size_t v_i_boxed_1000_; size_t v_stop_boxed_1001_; lean_object* v_res_1002_; 
v_i_boxed_1000_ = lean_unbox_usize(v_i_997_);
lean_dec(v_i_997_);
v_stop_boxed_1001_ = lean_unbox_usize(v_stop_998_);
lean_dec(v_stop_998_);
v_res_1002_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_995_, v_as_996_, v_i_boxed_1000_, v_stop_boxed_1001_, v_b_999_);
lean_dec_ref(v_as_996_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0(lean_object* v_f_1003_, lean_object* v_x1_1004_, lean_object* v_x2_1005_, lean_object* v_x3_1006_){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_apply_3(v_f_1003_, v_x1_1004_, v_x2_1005_, v_x3_1006_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(lean_object* v_map_1008_, lean_object* v_f_1009_, lean_object* v_init_1010_){
_start:
{
lean_object* v___f_1011_; lean_object* v___x_1012_; 
v___f_1011_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1011_, 0, v_f_1009_);
v___x_1012_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v___f_1011_, v_map_1008_, v_init_1010_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___boxed(lean_object* v_map_1013_, lean_object* v_f_1014_, lean_object* v_init_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_1013_, v_f_1014_, v_init_1015_);
lean_dec_ref(v_map_1013_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(lean_object* v_f_1017_, lean_object* v_x_1018_, lean_object* v_x_1019_){
_start:
{
if (lean_obj_tag(v_x_1019_) == 0)
{
lean_dec(v_f_1017_);
return v_x_1018_;
}
else
{
lean_object* v_key_1020_; lean_object* v_value_1021_; lean_object* v_tail_1022_; lean_object* v___x_1023_; 
v_key_1020_ = lean_ctor_get(v_x_1019_, 0);
lean_inc(v_key_1020_);
v_value_1021_ = lean_ctor_get(v_x_1019_, 1);
lean_inc(v_value_1021_);
v_tail_1022_ = lean_ctor_get(v_x_1019_, 2);
lean_inc(v_tail_1022_);
lean_dec_ref_known(v_x_1019_, 3);
lean_inc(v_f_1017_);
v___x_1023_ = lean_apply_3(v_f_1017_, v_x_1018_, v_key_1020_, v_value_1021_);
v_x_1018_ = v___x_1023_;
v_x_1019_ = v_tail_1022_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(lean_object* v_f_1025_, lean_object* v_as_1026_, size_t v_i_1027_, size_t v_stop_1028_, lean_object* v_b_1029_){
_start:
{
uint8_t v___x_1030_; 
v___x_1030_ = lean_usize_dec_eq(v_i_1027_, v_stop_1028_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1031_; lean_object* v___x_1032_; size_t v___x_1033_; size_t v___x_1034_; 
v___x_1031_ = lean_array_uget_borrowed(v_as_1026_, v_i_1027_);
lean_inc(v___x_1031_);
lean_inc(v_f_1025_);
v___x_1032_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(v_f_1025_, v_b_1029_, v___x_1031_);
v___x_1033_ = ((size_t)1ULL);
v___x_1034_ = lean_usize_add(v_i_1027_, v___x_1033_);
v_i_1027_ = v___x_1034_;
v_b_1029_ = v___x_1032_;
goto _start;
}
else
{
lean_dec(v_f_1025_);
return v_b_1029_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg___boxed(lean_object* v_f_1036_, lean_object* v_as_1037_, lean_object* v_i_1038_, lean_object* v_stop_1039_, lean_object* v_b_1040_){
_start:
{
size_t v_i_boxed_1041_; size_t v_stop_boxed_1042_; lean_object* v_res_1043_; 
v_i_boxed_1041_ = lean_unbox_usize(v_i_1038_);
lean_dec(v_i_1038_);
v_stop_boxed_1042_ = lean_unbox_usize(v_stop_1039_);
lean_dec(v_stop_1039_);
v_res_1043_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1036_, v_as_1037_, v_i_boxed_1041_, v_stop_boxed_1042_, v_b_1040_);
lean_dec_ref(v_as_1037_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(lean_object* v_f_1044_, lean_object* v_init_1045_, lean_object* v_m_1046_){
_start:
{
lean_object* v_map_u2081_1047_; lean_object* v_map_u2082_1048_; lean_object* v_buckets_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; 
v_map_u2081_1047_ = lean_ctor_get(v_m_1046_, 0);
v_map_u2082_1048_ = lean_ctor_get(v_m_1046_, 1);
v_buckets_1049_ = lean_ctor_get(v_map_u2081_1047_, 1);
v___x_1050_ = lean_unsigned_to_nat(0u);
v___x_1051_ = lean_array_get_size(v_buckets_1049_);
v___x_1052_ = lean_nat_dec_lt(v___x_1050_, v___x_1051_);
if (v___x_1052_ == 0)
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1048_, v_f_1044_, v_init_1045_);
return v___x_1053_;
}
else
{
size_t v___x_1054_; size_t v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1054_ = ((size_t)0ULL);
v___x_1055_ = lean_usize_of_nat(v___x_1051_);
lean_inc(v_f_1044_);
v___x_1056_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1044_, v_buckets_1049_, v___x_1054_, v___x_1055_, v_init_1045_);
v___x_1057_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1048_, v_f_1044_, v___x_1056_);
return v___x_1057_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg___boxed(lean_object* v_f_1058_, lean_object* v_init_1059_, lean_object* v_m_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v_f_1058_, v_init_1059_, v_m_1060_);
lean_dec_ref(v_m_1060_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases(lean_object* v_env_1062_, lean_object* v_e_1063_){
_start:
{
lean_object* v___x_1064_; lean_object* v_toEnvExtension_1065_; lean_object* v_asyncMode_1066_; lean_object* v___f_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1064_ = l_Lean_aliasExtension;
v_toEnvExtension_1065_ = lean_ctor_get(v___x_1064_, 0);
v_asyncMode_1066_ = lean_ctor_get(v_toEnvExtension_1065_, 2);
v___f_1067_ = lean_alloc_closure((void*)(l_Lean_getRevAliases___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1067_, 0, v_e_1063_);
v___x_1068_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_1069_ = lean_box(0);
v___x_1070_ = lean_box(0);
v___x_1071_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1068_, v___x_1064_, v_env_1062_, v_asyncMode_1066_, v___x_1070_);
v___x_1072_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v___f_1067_, v___x_1069_, v___x_1071_);
lean_dec(v___x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(lean_object* v_00_u03b2_1073_, lean_object* v_00_u03c3_1074_, lean_object* v_f_1075_, lean_object* v_init_1076_, lean_object* v_m_1077_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v_f_1075_, v_init_1076_, v_m_1077_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___boxed(lean_object* v_00_u03b2_1079_, lean_object* v_00_u03c3_1080_, lean_object* v_f_1081_, lean_object* v_init_1082_, lean_object* v_m_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(v_00_u03b2_1079_, v_00_u03c3_1080_, v_f_1081_, v_init_1082_, v_m_1083_);
lean_dec_ref(v_m_1083_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0(lean_object* v_00_u03b2_1085_, lean_object* v_00_u03c3_1086_, lean_object* v_f_1087_, lean_object* v_x_1088_, lean_object* v_x_1089_){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(v_f_1087_, v_x_1088_, v_x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(lean_object* v_00_u03c3_1091_, lean_object* v_00_u03b2_1092_, lean_object* v_map_1093_, lean_object* v_f_1094_, lean_object* v_init_1095_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_1093_, v_f_1094_, v_init_1095_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___boxed(lean_object* v_00_u03c3_1097_, lean_object* v_00_u03b2_1098_, lean_object* v_map_1099_, lean_object* v_f_1100_, lean_object* v_init_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(v_00_u03c3_1097_, v_00_u03b2_1098_, v_map_1099_, v_f_1100_, v_init_1101_);
lean_dec_ref(v_map_1099_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(lean_object* v_00_u03b2_1103_, lean_object* v_00_u03c3_1104_, lean_object* v_f_1105_, lean_object* v_as_1106_, size_t v_i_1107_, size_t v_stop_1108_, lean_object* v_b_1109_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1105_, v_as_1106_, v_i_1107_, v_stop_1108_, v_b_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1111_, lean_object* v_00_u03c3_1112_, lean_object* v_f_1113_, lean_object* v_as_1114_, lean_object* v_i_1115_, lean_object* v_stop_1116_, lean_object* v_b_1117_){
_start:
{
size_t v_i_boxed_1118_; size_t v_stop_boxed_1119_; lean_object* v_res_1120_; 
v_i_boxed_1118_ = lean_unbox_usize(v_i_1115_);
lean_dec(v_i_1115_);
v_stop_boxed_1119_ = lean_unbox_usize(v_stop_1116_);
lean_dec(v_stop_1116_);
v_res_1120_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(v_00_u03b2_1111_, v_00_u03c3_1112_, v_f_1113_, v_as_1114_, v_i_boxed_1118_, v_stop_boxed_1119_, v_b_1117_);
lean_dec_ref(v_as_1114_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(lean_object* v_map_1121_, lean_object* v_f_1122_, lean_object* v_init_1123_){
_start:
{
lean_object* v___x_1124_; 
v___x_1124_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1122_, v_map_1121_, v_init_1123_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_map_1125_, lean_object* v_f_1126_, lean_object* v_init_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(v_map_1125_, v_f_1126_, v_init_1127_);
lean_dec_ref(v_map_1125_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(lean_object* v_00_u03c3_1129_, lean_object* v_00_u03b2_1130_, lean_object* v_map_1131_, lean_object* v_f_1132_, lean_object* v_init_1133_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1132_, v_map_1131_, v_init_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03c3_1135_, lean_object* v_00_u03b2_1136_, lean_object* v_map_1137_, lean_object* v_f_1138_, lean_object* v_init_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(v_00_u03c3_1135_, v_00_u03b2_1136_, v_map_1137_, v_f_1138_, v_init_1139_);
lean_dec_ref(v_map_1137_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03c3_1141_, lean_object* v_00_u03b1_1142_, lean_object* v_00_u03b2_1143_, lean_object* v_f_1144_, lean_object* v_x_1145_, lean_object* v_x_1146_){
_start:
{
lean_object* v___x_1147_; 
v___x_1147_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1144_, v_x_1145_, v_x_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03c3_1148_, lean_object* v_00_u03b1_1149_, lean_object* v_00_u03b2_1150_, lean_object* v_f_1151_, lean_object* v_x_1152_, lean_object* v_x_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(v_00_u03c3_1148_, v_00_u03b1_1149_, v_00_u03b2_1150_, v_f_1151_, v_x_1152_, v_x_1153_);
lean_dec_ref(v_x_1152_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1155_, lean_object* v_00_u03b2_1156_, lean_object* v_00_u03c3_1157_, lean_object* v_f_1158_, lean_object* v_as_1159_, size_t v_i_1160_, size_t v_stop_1161_, lean_object* v_b_1162_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_1158_, v_as_1159_, v_i_1160_, v_stop_1161_, v_b_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1164_, lean_object* v_00_u03b2_1165_, lean_object* v_00_u03c3_1166_, lean_object* v_f_1167_, lean_object* v_as_1168_, lean_object* v_i_1169_, lean_object* v_stop_1170_, lean_object* v_b_1171_){
_start:
{
size_t v_i_boxed_1172_; size_t v_stop_boxed_1173_; lean_object* v_res_1174_; 
v_i_boxed_1172_ = lean_unbox_usize(v_i_1169_);
lean_dec(v_i_1169_);
v_stop_boxed_1173_ = lean_unbox_usize(v_stop_1170_);
lean_dec(v_stop_1170_);
v_res_1174_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(v_00_u03b1_1164_, v_00_u03b2_1165_, v_00_u03c3_1166_, v_f_1167_, v_as_1168_, v_i_boxed_1172_, v_stop_boxed_1173_, v_b_1171_);
lean_dec_ref(v_as_1168_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(lean_object* v_00_u03c3_1175_, lean_object* v_00_u03b1_1176_, lean_object* v_00_u03b2_1177_, lean_object* v_f_1178_, lean_object* v_keys_1179_, lean_object* v_vals_1180_, lean_object* v_heq_1181_, lean_object* v_i_1182_, lean_object* v_acc_1183_){
_start:
{
lean_object* v___x_1184_; 
v___x_1184_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_1178_, v_keys_1179_, v_vals_1180_, v_i_1182_, v_acc_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03c3_1185_, lean_object* v_00_u03b1_1186_, lean_object* v_00_u03b2_1187_, lean_object* v_f_1188_, lean_object* v_keys_1189_, lean_object* v_vals_1190_, lean_object* v_heq_1191_, lean_object* v_i_1192_, lean_object* v_acc_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(v_00_u03c3_1185_, v_00_u03b1_1186_, v_00_u03b2_1187_, v_f_1188_, v_keys_1189_, v_vals_1190_, v_heq_1191_, v_i_1192_, v_acc_1193_);
lean_dec_ref(v_vals_1190_);
lean_dec_ref(v_keys_1189_);
return v_res_1194_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(lean_object* v_env_1195_, lean_object* v_declName_1196_){
_start:
{
uint8_t v___x_1197_; 
v___x_1197_ = l_Lean_Environment_containsOnBranch(v_env_1195_, v_declName_1196_);
if (v___x_1197_ == 0)
{
uint8_t v___x_1198_; 
lean_inc(v_declName_1196_);
lean_inc_ref(v_env_1195_);
v___x_1198_ = lean_is_reserved_name(v_env_1195_, v_declName_1196_);
if (v___x_1198_ == 0)
{
uint8_t v___x_1199_; uint8_t v___x_1200_; 
v___x_1199_ = 1;
v___x_1200_ = l_Lean_Environment_contains(v_env_1195_, v_declName_1196_, v___x_1199_);
return v___x_1200_;
}
else
{
lean_dec(v_declName_1196_);
lean_dec_ref(v_env_1195_);
return v___x_1198_;
}
}
else
{
lean_dec(v_declName_1196_);
lean_dec_ref(v_env_1195_);
return v___x_1197_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved___boxed(lean_object* v_env_1201_, lean_object* v_declName_1202_){
_start:
{
uint8_t v_res_1203_; lean_object* v_r_1204_; 
v_res_1203_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1201_, v_declName_1202_);
v_r_1204_ = lean_box(v_res_1203_);
return v_r_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(lean_object* v_name_1205_, lean_object* v_decl_1206_, lean_object* v_ref_1207_){
_start:
{
lean_object* v_defValue_1209_; lean_object* v_descr_1210_; lean_object* v_deprecation_x3f_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v_defValue_1209_ = lean_ctor_get(v_decl_1206_, 0);
v_descr_1210_ = lean_ctor_get(v_decl_1206_, 1);
v_deprecation_x3f_1211_ = lean_ctor_get(v_decl_1206_, 2);
v___x_1212_ = lean_alloc_ctor(1, 0, 1);
v___x_1213_ = lean_unbox(v_defValue_1209_);
lean_ctor_set_uint8(v___x_1212_, 0, v___x_1213_);
lean_inc(v_deprecation_x3f_1211_);
lean_inc_ref(v_descr_1210_);
lean_inc_n(v_name_1205_, 2);
v___x_1214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1214_, 0, v_name_1205_);
lean_ctor_set(v___x_1214_, 1, v_ref_1207_);
lean_ctor_set(v___x_1214_, 2, v___x_1212_);
lean_ctor_set(v___x_1214_, 3, v_descr_1210_);
lean_ctor_set(v___x_1214_, 4, v_deprecation_x3f_1211_);
v___x_1215_ = lean_register_option(v_name_1205_, v___x_1214_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1223_; 
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1223_ == 0)
{
lean_object* v_unused_1224_; 
v_unused_1224_ = lean_ctor_get(v___x_1215_, 0);
lean_dec(v_unused_1224_);
v___x_1217_ = v___x_1215_;
v_isShared_1218_ = v_isSharedCheck_1223_;
goto v_resetjp_1216_;
}
else
{
lean_dec(v___x_1215_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1223_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; lean_object* v___x_1221_; 
lean_inc(v_defValue_1209_);
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v_name_1205_);
lean_ctor_set(v___x_1219_, 1, v_defValue_1209_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 0, v___x_1219_);
v___x_1221_ = v___x_1217_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v___x_1219_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
return v___x_1221_;
}
}
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec(v_name_1205_);
v_a_1225_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1215_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1215_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1225_);
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
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1233_, lean_object* v_decl_1234_, lean_object* v_ref_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v_name_1233_, v_decl_1234_, v_ref_1235_);
lean_dec_ref(v_decl_1234_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1256_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1257_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1258_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1259_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1256_, v___x_1257_, v___x_1258_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4____boxed(lean_object* v_a_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1280_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1281_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1282_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1283_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1280_, v___x_1281_, v___x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4____boxed(lean_object* v_a_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
return v_res_1285_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(lean_object* v_opts_1286_, lean_object* v_opt_1287_){
_start:
{
lean_object* v_name_1288_; lean_object* v_defValue_1289_; lean_object* v_map_1290_; lean_object* v___x_1291_; 
v_name_1288_ = lean_ctor_get(v_opt_1287_, 0);
v_defValue_1289_ = lean_ctor_get(v_opt_1287_, 1);
v_map_1290_ = lean_ctor_get(v_opts_1286_, 0);
v___x_1291_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1290_, v_name_1288_);
if (lean_obj_tag(v___x_1291_) == 0)
{
uint8_t v___x_1292_; 
v___x_1292_ = lean_unbox(v_defValue_1289_);
return v___x_1292_;
}
else
{
lean_object* v_val_1293_; 
v_val_1293_ = lean_ctor_get(v___x_1291_, 0);
lean_inc(v_val_1293_);
lean_dec_ref_known(v___x_1291_, 1);
if (lean_obj_tag(v_val_1293_) == 1)
{
uint8_t v_v_1294_; 
v_v_1294_ = lean_ctor_get_uint8(v_val_1293_, 0);
lean_dec_ref_known(v_val_1293_, 0);
return v_v_1294_;
}
else
{
uint8_t v___x_1295_; 
lean_dec(v_val_1293_);
v___x_1295_ = lean_unbox(v_defValue_1289_);
return v___x_1295_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1___boxed(lean_object* v_opts_1296_, lean_object* v_opt_1297_){
_start:
{
uint8_t v_res_1298_; lean_object* v_r_1299_; 
v_res_1298_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1296_, v_opt_1297_);
lean_dec_ref(v_opt_1297_);
lean_dec_ref(v_opts_1296_);
v_r_1299_ = lean_box(v_res_1298_);
return v_r_1299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(lean_object* v_declName_1303_, lean_object* v_env_1304_, lean_object* v_as_1305_, size_t v_sz_1306_, size_t v_i_1307_, lean_object* v_b_1308_){
_start:
{
uint8_t v___x_1309_; 
v___x_1309_ = lean_usize_dec_lt(v_i_1307_, v_sz_1306_);
if (v___x_1309_ == 0)
{
lean_dec_ref(v_env_1304_);
lean_dec(v_declName_1303_);
lean_inc_ref(v_b_1308_);
return v_b_1308_;
}
else
{
lean_object* v_a_1310_; lean_object* v_toImport_1311_; lean_object* v_module_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; uint8_t v___x_1315_; 
v_a_1310_ = lean_array_uget_borrowed(v_as_1305_, v_i_1307_);
v_toImport_1311_ = lean_ctor_get(v_a_1310_, 0);
v_module_1312_ = lean_ctor_get(v_toImport_1311_, 0);
v___x_1313_ = lean_box(0);
lean_inc(v_declName_1303_);
lean_inc(v_module_1312_);
v___x_1314_ = l_Lean_mkPrivateNameCore(v_module_1312_, v_declName_1303_);
lean_inc(v___x_1314_);
lean_inc_ref(v_env_1304_);
v___x_1315_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1304_, v___x_1314_);
if (v___x_1315_ == 0)
{
lean_object* v___x_1316_; size_t v___x_1317_; size_t v___x_1318_; 
lean_dec(v___x_1314_);
v___x_1316_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
v___x_1317_ = ((size_t)1ULL);
v___x_1318_ = lean_usize_add(v_i_1307_, v___x_1317_);
v_i_1307_ = v___x_1318_;
v_b_1308_ = v___x_1316_;
goto _start;
}
else
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
lean_dec_ref(v_env_1304_);
lean_dec(v_declName_1303_);
v___x_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1314_);
v___x_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
v___x_1322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1321_);
lean_ctor_set(v___x_1322_, 1, v___x_1313_);
return v___x_1322_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___boxed(lean_object* v_declName_1323_, lean_object* v_env_1324_, lean_object* v_as_1325_, lean_object* v_sz_1326_, lean_object* v_i_1327_, lean_object* v_b_1328_){
_start:
{
size_t v_sz_boxed_1329_; size_t v_i_boxed_1330_; lean_object* v_res_1331_; 
v_sz_boxed_1329_ = lean_unbox_usize(v_sz_1326_);
lean_dec(v_sz_1326_);
v_i_boxed_1330_ = lean_unbox_usize(v_i_1327_);
lean_dec(v_i_1327_);
v_res_1331_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(v_declName_1323_, v_env_1324_, v_as_1325_, v_sz_boxed_1329_, v_i_boxed_1330_, v_b_1328_);
lean_dec_ref(v_b_1328_);
lean_dec_ref(v_as_1325_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(lean_object* v_env_1332_, lean_object* v_opts_1333_, lean_object* v_declName_1334_){
_start:
{
uint8_t v_isExporting_1350_; 
v_isExporting_1350_ = lean_ctor_get_uint8(v_env_1332_, sizeof(void*)*13);
if (v_isExporting_1350_ == 0)
{
goto v___jp_1335_;
}
else
{
lean_object* v___x_1351_; uint8_t v___x_1352_; 
v___x_1351_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1352_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1333_, v___x_1351_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; 
lean_dec(v_declName_1334_);
lean_dec_ref(v_env_1332_);
v___x_1353_ = lean_box(0);
return v___x_1353_;
}
else
{
goto v___jp_1335_;
}
}
v___jp_1335_:
{
lean_object* v___x_1336_; uint8_t v___x_1337_; 
lean_inc(v_declName_1334_);
v___x_1336_ = l_Lean_mkPrivateName(v_env_1332_, v_declName_1334_);
lean_inc(v___x_1336_);
lean_inc_ref(v_env_1332_);
v___x_1337_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1332_, v___x_1336_);
if (v___x_1337_ == 0)
{
lean_object* v___x_1338_; uint8_t v_isModule_1339_; 
lean_dec(v___x_1336_);
v___x_1338_ = l_Lean_Environment_header(v_env_1332_);
v_isModule_1339_ = lean_ctor_get_uint8(v___x_1338_, sizeof(void*)*8 + 4);
if (v_isModule_1339_ == 0)
{
lean_object* v___x_1340_; 
lean_dec_ref(v___x_1338_);
lean_dec(v_declName_1334_);
lean_dec_ref(v_env_1332_);
v___x_1340_ = lean_box(0);
return v___x_1340_;
}
else
{
lean_object* v_importAllModules_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; size_t v_sz_1344_; size_t v___x_1345_; lean_object* v___x_1346_; lean_object* v_fst_1347_; 
v_importAllModules_1341_ = lean_ctor_get(v___x_1338_, 6);
lean_inc_ref(v_importAllModules_1341_);
lean_dec_ref(v___x_1338_);
v___x_1342_ = lean_box(0);
v___x_1343_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
v_sz_1344_ = lean_array_size(v_importAllModules_1341_);
v___x_1345_ = ((size_t)0ULL);
v___x_1346_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(v_declName_1334_, v_env_1332_, v_importAllModules_1341_, v_sz_1344_, v___x_1345_, v___x_1343_);
lean_dec_ref(v_importAllModules_1341_);
v_fst_1347_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_fst_1347_);
lean_dec_ref(v___x_1346_);
if (lean_obj_tag(v_fst_1347_) == 0)
{
return v___x_1342_;
}
else
{
lean_object* v_val_1348_; 
v_val_1348_ = lean_ctor_get(v_fst_1347_, 0);
lean_inc(v_val_1348_);
lean_dec_ref_known(v_fst_1347_, 1);
return v_val_1348_;
}
}
}
else
{
lean_object* v___x_1349_; 
lean_dec(v_declName_1334_);
lean_dec_ref(v_env_1332_);
v___x_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1336_);
return v___x_1349_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName___boxed(lean_object* v_env_1354_, lean_object* v_opts_1355_, lean_object* v_declName_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1354_, v_opts_1355_, v_declName_1356_);
lean_dec_ref(v_opts_1355_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(lean_object* v_env_1358_, lean_object* v_opts_1359_, lean_object* v_ns_1360_, lean_object* v_id_1361_){
_start:
{
lean_object* v_resolvedId_1362_; uint8_t v___x_1363_; lean_object* v_resolvedIds_1364_; 
lean_inc(v_id_1361_);
v_resolvedId_1362_ = l_Lean_Name_append(v_ns_1360_, v_id_1361_);
v___x_1363_ = l_Lean_Name_isAtomic(v_id_1361_);
lean_dec(v_id_1361_);
lean_inc_ref(v_env_1358_);
v_resolvedIds_1364_ = l_Lean_getAliases(v_env_1358_, v_resolvedId_1362_, v___x_1363_);
if (v___x_1363_ == 0)
{
goto v___jp_1365_;
}
else
{
uint8_t v___x_1371_; 
lean_inc(v_resolvedId_1362_);
lean_inc_ref(v_env_1358_);
v___x_1371_ = l_Lean_isProtected(v_env_1358_, v_resolvedId_1362_);
if (v___x_1371_ == 0)
{
goto v___jp_1365_;
}
else
{
lean_dec(v_resolvedId_1362_);
lean_dec_ref(v_env_1358_);
return v_resolvedIds_1364_;
}
}
v___jp_1365_:
{
uint8_t v___x_1366_; 
lean_inc(v_resolvedId_1362_);
lean_inc_ref(v_env_1358_);
v___x_1366_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1358_, v_resolvedId_1362_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; 
v___x_1367_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1358_, v_opts_1359_, v_resolvedId_1362_);
if (lean_obj_tag(v___x_1367_) == 1)
{
lean_object* v_val_1368_; lean_object* v___x_1369_; 
v_val_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_val_1368_);
lean_dec_ref_known(v___x_1367_, 1);
v___x_1369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1369_, 0, v_val_1368_);
lean_ctor_set(v___x_1369_, 1, v_resolvedIds_1364_);
return v___x_1369_;
}
else
{
lean_dec(v___x_1367_);
return v_resolvedIds_1364_;
}
}
else
{
lean_object* v___x_1370_; 
lean_dec_ref(v_env_1358_);
v___x_1370_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1370_, 0, v_resolvedId_1362_);
lean_ctor_set(v___x_1370_, 1, v_resolvedIds_1364_);
return v___x_1370_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName___boxed(lean_object* v_env_1372_, lean_object* v_opts_1373_, lean_object* v_ns_1374_, lean_object* v_id_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1372_, v_opts_1373_, v_ns_1374_, v_id_1375_);
lean_dec_ref(v_opts_1373_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(lean_object* v_env_1377_, lean_object* v_opts_1378_, lean_object* v_id_1379_, lean_object* v_x_1380_){
_start:
{
if (lean_obj_tag(v_x_1380_) == 1)
{
lean_object* v_pre_1381_; lean_object* v___x_1382_; 
v_pre_1381_ = lean_ctor_get(v_x_1380_, 0);
lean_inc(v_pre_1381_);
lean_inc(v_id_1379_);
lean_inc_ref(v_env_1377_);
v___x_1382_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1377_, v_opts_1378_, v_x_1380_, v_id_1379_);
if (lean_obj_tag(v___x_1382_) == 0)
{
v_x_1380_ = v_pre_1381_;
goto _start;
}
else
{
lean_dec(v_pre_1381_);
lean_dec(v_id_1379_);
lean_dec_ref(v_env_1377_);
return v___x_1382_;
}
}
else
{
lean_object* v___x_1384_; 
lean_dec(v_x_1380_);
lean_dec(v_id_1379_);
lean_dec_ref(v_env_1377_);
v___x_1384_ = lean_box(0);
return v___x_1384_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace___boxed(lean_object* v_env_1385_, lean_object* v_opts_1386_, lean_object* v_id_1387_, lean_object* v_x_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1385_, v_opts_1386_, v_id_1387_, v_x_1388_);
lean_dec_ref(v_opts_1386_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(lean_object* v_env_1390_, lean_object* v_opts_1391_, lean_object* v_id_1392_){
_start:
{
uint8_t v___x_1393_; 
v___x_1393_ = l_Lean_Name_isAtomic(v_id_1392_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v_resolvedId_1396_; uint8_t v___x_1397_; 
v___x_1394_ = l_Lean_rootNamespace;
v___x_1395_ = lean_box(0);
v_resolvedId_1396_ = l_Lean_Name_replacePrefix(v_id_1392_, v___x_1394_, v___x_1395_);
lean_inc(v_resolvedId_1396_);
lean_inc_ref(v_env_1390_);
v___x_1397_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1390_, v_resolvedId_1396_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; 
v___x_1398_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1390_, v_opts_1391_, v_resolvedId_1396_);
return v___x_1398_;
}
else
{
lean_object* v___x_1399_; 
lean_dec_ref(v_env_1390_);
v___x_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1399_, 0, v_resolvedId_1396_);
return v___x_1399_;
}
}
else
{
lean_object* v___x_1400_; 
lean_dec(v_id_1392_);
lean_dec_ref(v_env_1390_);
v___x_1400_ = lean_box(0);
return v___x_1400_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact___boxed(lean_object* v_env_1401_, lean_object* v_opts_1402_, lean_object* v_id_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1401_, v_opts_1402_, v_id_1403_);
lean_dec_ref(v_opts_1402_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(lean_object* v_env_1405_, lean_object* v_opts_1406_, lean_object* v_id_1407_, lean_object* v_x_1408_, lean_object* v_x_1409_){
_start:
{
if (lean_obj_tag(v_x_1408_) == 0)
{
lean_dec(v_id_1407_);
lean_dec_ref(v_env_1405_);
return v_x_1409_;
}
else
{
lean_object* v_head_1410_; 
v_head_1410_ = lean_ctor_get(v_x_1408_, 0);
lean_inc(v_head_1410_);
if (lean_obj_tag(v_head_1410_) == 0)
{
lean_object* v_tail_1411_; lean_object* v_ns_1412_; lean_object* v_except_1413_; uint8_t v___x_1414_; 
v_tail_1411_ = lean_ctor_get(v_x_1408_, 1);
lean_inc(v_tail_1411_);
lean_dec_ref_known(v_x_1408_, 2);
v_ns_1412_ = lean_ctor_get(v_head_1410_, 0);
lean_inc(v_ns_1412_);
v_except_1413_ = lean_ctor_get(v_head_1410_, 1);
lean_inc(v_except_1413_);
lean_dec_ref_known(v_head_1410_, 2);
v___x_1414_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_id_1407_, v_except_1413_);
lean_dec(v_except_1413_);
if (v___x_1414_ == 0)
{
lean_object* v_newResolvedIds_1415_; lean_object* v___x_1416_; 
lean_inc(v_id_1407_);
lean_inc_ref(v_env_1405_);
v_newResolvedIds_1415_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1405_, v_opts_1406_, v_ns_1412_, v_id_1407_);
v___x_1416_ = l_List_appendTR___redArg(v_newResolvedIds_1415_, v_x_1409_);
v_x_1408_ = v_tail_1411_;
v_x_1409_ = v___x_1416_;
goto _start;
}
else
{
lean_dec(v_ns_1412_);
v_x_1408_ = v_tail_1411_;
goto _start;
}
}
else
{
lean_object* v_tail_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1439_; 
v_tail_1419_ = lean_ctor_get(v_x_1408_, 1);
v_isSharedCheck_1439_ = !lean_is_exclusive(v_x_1408_);
if (v_isSharedCheck_1439_ == 0)
{
lean_object* v_unused_1440_; 
v_unused_1440_ = lean_ctor_get(v_x_1408_, 0);
lean_dec(v_unused_1440_);
v___x_1421_ = v_x_1408_;
v_isShared_1422_ = v_isSharedCheck_1439_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_tail_1419_);
lean_dec(v_x_1408_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1439_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v_id_1423_; lean_object* v_declName_1424_; uint8_t v___x_1425_; 
v_id_1423_ = lean_ctor_get(v_head_1410_, 0);
lean_inc(v_id_1423_);
v_declName_1424_ = lean_ctor_get(v_head_1410_, 1);
lean_inc(v_declName_1424_);
lean_dec_ref_known(v_head_1410_, 2);
v___x_1425_ = lean_name_eq(v_id_1423_, v_id_1407_);
if (v___x_1425_ == 0)
{
uint8_t v___x_1426_; 
v___x_1426_ = l_Lean_Name_isPrefixOf(v_id_1423_, v_id_1407_);
if (v___x_1426_ == 0)
{
lean_dec(v_declName_1424_);
lean_dec(v_id_1423_);
lean_del_object(v___x_1421_);
v_x_1408_ = v_tail_1419_;
goto _start;
}
else
{
lean_object* v_candidate_1428_; uint8_t v___x_1429_; 
lean_inc(v_id_1407_);
v_candidate_1428_ = l_Lean_Name_replacePrefix(v_id_1407_, v_id_1423_, v_declName_1424_);
lean_dec(v_declName_1424_);
lean_dec(v_id_1423_);
lean_inc(v_candidate_1428_);
lean_inc_ref(v_env_1405_);
v___x_1429_ = l_Lean_Environment_contains(v_env_1405_, v_candidate_1428_, v___x_1426_);
if (v___x_1429_ == 0)
{
lean_dec(v_candidate_1428_);
lean_del_object(v___x_1421_);
v_x_1408_ = v_tail_1419_;
goto _start;
}
else
{
lean_object* v___x_1432_; 
if (v_isShared_1422_ == 0)
{
lean_ctor_set(v___x_1421_, 1, v_x_1409_);
lean_ctor_set(v___x_1421_, 0, v_candidate_1428_);
v___x_1432_ = v___x_1421_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_candidate_1428_);
lean_ctor_set(v_reuseFailAlloc_1434_, 1, v_x_1409_);
v___x_1432_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
v_x_1408_ = v_tail_1419_;
v_x_1409_ = v___x_1432_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1436_; 
lean_dec(v_id_1423_);
if (v_isShared_1422_ == 0)
{
lean_ctor_set(v___x_1421_, 1, v_x_1409_);
lean_ctor_set(v___x_1421_, 0, v_declName_1424_);
v___x_1436_ = v___x_1421_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_declName_1424_);
lean_ctor_set(v_reuseFailAlloc_1438_, 1, v_x_1409_);
v___x_1436_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
v_x_1408_ = v_tail_1419_;
v_x_1409_ = v___x_1436_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls___boxed(lean_object* v_env_1441_, lean_object* v_opts_1442_, lean_object* v_id_1443_, lean_object* v_x_1444_, lean_object* v_x_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1441_, v_opts_1442_, v_id_1443_, v_x_1444_, v_x_1445_);
lean_dec_ref(v_opts_1442_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(lean_object* v_as_1448_){
_start:
{
lean_object* v___f_1449_; lean_object* v___x_1450_; 
v___f_1449_ = ((lean_object*)(l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0));
v___x_1450_ = l_List_eraseDupsBy___redArg(v___f_1449_, v_as_1448_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(lean_object* v_projs_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_){
_start:
{
if (lean_obj_tag(v_a_1452_) == 0)
{
lean_object* v___x_1454_; 
lean_dec(v_projs_1451_);
v___x_1454_ = l_List_reverse___redArg(v_a_1453_);
return v___x_1454_;
}
else
{
lean_object* v_head_1455_; lean_object* v_tail_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1465_; 
v_head_1455_ = lean_ctor_get(v_a_1452_, 0);
v_tail_1456_ = lean_ctor_get(v_a_1452_, 1);
v_isSharedCheck_1465_ = !lean_is_exclusive(v_a_1452_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1458_ = v_a_1452_;
v_isShared_1459_ = v_isSharedCheck_1465_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_tail_1456_);
lean_inc(v_head_1455_);
lean_dec(v_a_1452_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1465_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1460_; lean_object* v___x_1462_; 
lean_inc(v_projs_1451_);
v___x_1460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1460_, 0, v_head_1455_);
lean_ctor_set(v___x_1460_, 1, v_projs_1451_);
if (v_isShared_1459_ == 0)
{
lean_ctor_set(v___x_1458_, 1, v_a_1453_);
lean_ctor_set(v___x_1458_, 0, v___x_1460_);
v___x_1462_ = v___x_1458_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1460_);
lean_ctor_set(v_reuseFailAlloc_1464_, 1, v_a_1453_);
v___x_1462_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
v_a_1452_ = v_tail_1456_;
v_a_1453_ = v___x_1462_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(lean_object* v_env_1466_, lean_object* v_opts_1467_, lean_object* v_ns_1468_, lean_object* v_openDecls_1469_, lean_object* v_extractionResult_1470_, lean_object* v_id_1471_, lean_object* v_projs_1472_){
_start:
{
if (lean_obj_tag(v_id_1471_) == 1)
{
lean_object* v_pre_1473_; lean_object* v_str_1474_; lean_object* v_imported_1475_; lean_object* v_ctx_1476_; lean_object* v_scopes_1477_; lean_object* v___x_1478_; lean_object* v_id_1479_; lean_object* v___y_1481_; lean_object* v___x_1491_; lean_object* v___y_1493_; 
v_pre_1473_ = lean_ctor_get(v_id_1471_, 0);
lean_inc(v_pre_1473_);
v_str_1474_ = lean_ctor_get(v_id_1471_, 1);
lean_inc_ref(v_str_1474_);
v_imported_1475_ = lean_ctor_get(v_extractionResult_1470_, 1);
v_ctx_1476_ = lean_ctor_get(v_extractionResult_1470_, 2);
v_scopes_1477_ = lean_ctor_get(v_extractionResult_1470_, 3);
lean_inc(v_scopes_1477_);
lean_inc(v_ctx_1476_);
lean_inc(v_imported_1475_);
v___x_1478_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1478_, 0, v_id_1471_);
lean_ctor_set(v___x_1478_, 1, v_imported_1475_);
lean_ctor_set(v___x_1478_, 2, v_ctx_1476_);
lean_ctor_set(v___x_1478_, 3, v_scopes_1477_);
v_id_1479_ = l_Lean_MacroScopesView_review(v___x_1478_);
lean_inc(v_ns_1468_);
lean_inc(v_id_1479_);
lean_inc_ref(v_env_1466_);
v___x_1491_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1466_, v_opts_1467_, v_id_1479_, v_ns_1468_);
if (lean_obj_tag(v___x_1491_) == 0)
{
lean_object* v___x_1498_; 
lean_inc(v_id_1479_);
lean_inc_ref(v_env_1466_);
v___x_1498_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1466_, v_opts_1467_, v_id_1479_);
if (lean_obj_tag(v___x_1498_) == 0)
{
uint8_t v___x_1499_; 
lean_inc(v_id_1479_);
lean_inc_ref(v_env_1466_);
v___x_1499_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1466_, v_id_1479_);
if (v___x_1499_ == 0)
{
v___y_1493_ = v___x_1491_;
goto v___jp_1492_;
}
else
{
lean_object* v___x_1500_; 
lean_inc(v_id_1479_);
v___x_1500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1500_, 0, v_id_1479_);
lean_ctor_set(v___x_1500_, 1, v___x_1491_);
v___y_1493_ = v___x_1500_;
goto v___jp_1492_;
}
}
else
{
lean_object* v_val_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
lean_dec(v_id_1479_);
lean_dec_ref(v_str_1474_);
lean_dec(v_pre_1473_);
lean_dec(v_openDecls_1469_);
lean_dec(v_ns_1468_);
lean_dec_ref(v_env_1466_);
v_val_1501_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_val_1501_);
lean_dec_ref_known(v___x_1498_, 1);
v___x_1502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1502_, 0, v_val_1501_);
lean_ctor_set(v___x_1502_, 1, v_projs_1472_);
v___x_1503_ = lean_box(0);
v___x_1504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1502_);
lean_ctor_set(v___x_1504_, 1, v___x_1503_);
return v___x_1504_;
}
}
else
{
lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
lean_dec(v_id_1479_);
lean_dec_ref(v_str_1474_);
lean_dec(v_pre_1473_);
lean_dec(v_openDecls_1469_);
lean_dec(v_ns_1468_);
lean_dec_ref(v_env_1466_);
v___x_1505_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v___x_1491_);
v___x_1506_ = lean_box(0);
v___x_1507_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1472_, v___x_1505_, v___x_1506_);
return v___x_1507_;
}
v___jp_1480_:
{
lean_object* v_resolvedIds_1482_; uint8_t v___x_1483_; lean_object* v___x_1484_; lean_object* v_resolvedIds_1485_; 
lean_inc(v_openDecls_1469_);
lean_inc(v_id_1479_);
lean_inc_ref_n(v_env_1466_, 2);
v_resolvedIds_1482_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1466_, v_opts_1467_, v_id_1479_, v_openDecls_1469_, v___y_1481_);
v___x_1483_ = l_Lean_Name_isAtomic(v_id_1479_);
v___x_1484_ = l_Lean_getAliases(v_env_1466_, v_id_1479_, v___x_1483_);
lean_dec(v_id_1479_);
v_resolvedIds_1485_ = l_List_appendTR___redArg(v___x_1484_, v_resolvedIds_1482_);
if (lean_obj_tag(v_resolvedIds_1485_) == 0)
{
lean_object* v___x_1486_; 
v___x_1486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1486_, 0, v_str_1474_);
lean_ctor_set(v___x_1486_, 1, v_projs_1472_);
v_id_1471_ = v_pre_1473_;
v_projs_1472_ = v___x_1486_;
goto _start;
}
else
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
lean_dec_ref(v_str_1474_);
lean_dec(v_pre_1473_);
lean_dec(v_openDecls_1469_);
lean_dec(v_ns_1468_);
lean_dec_ref(v_env_1466_);
v___x_1488_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v_resolvedIds_1485_);
v___x_1489_ = lean_box(0);
v___x_1490_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1472_, v___x_1488_, v___x_1489_);
return v___x_1490_;
}
}
v___jp_1492_:
{
lean_object* v___x_1494_; 
lean_inc(v_id_1479_);
lean_inc_ref(v_env_1466_);
v___x_1494_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1466_, v_opts_1467_, v_id_1479_);
if (lean_obj_tag(v___x_1494_) == 1)
{
lean_object* v_val_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v_val_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_val_1495_);
lean_dec_ref_known(v___x_1494_, 1);
v___x_1496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1496_, 0, v_val_1495_);
lean_ctor_set(v___x_1496_, 1, v___x_1491_);
v___x_1497_ = l_List_appendTR___redArg(v___x_1496_, v___y_1493_);
v___y_1481_ = v___x_1497_;
goto v___jp_1480_;
}
else
{
lean_dec(v___x_1494_);
lean_dec(v___x_1491_);
v___y_1481_ = v___y_1493_;
goto v___jp_1480_;
}
}
}
else
{
lean_object* v___x_1508_; 
lean_dec(v_projs_1472_);
lean_dec(v_id_1471_);
lean_dec(v_openDecls_1469_);
lean_dec(v_ns_1468_);
lean_dec_ref(v_env_1466_);
v___x_1508_ = lean_box(0);
return v___x_1508_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop___boxed(lean_object* v_env_1509_, lean_object* v_opts_1510_, lean_object* v_ns_1511_, lean_object* v_openDecls_1512_, lean_object* v_extractionResult_1513_, lean_object* v_id_1514_, lean_object* v_projs_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1509_, v_opts_1510_, v_ns_1511_, v_openDecls_1512_, v_extractionResult_1513_, v_id_1514_, v_projs_1515_);
lean_dec_ref(v_extractionResult_1513_);
lean_dec_ref(v_opts_1510_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object* v_env_1517_, lean_object* v_opts_1518_, lean_object* v_ns_1519_, lean_object* v_openDecls_1520_, lean_object* v_id_1521_){
_start:
{
lean_object* v_extractionResult_1522_; lean_object* v_name_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v_extractionResult_1522_ = l_Lean_extractMacroScopes(v_id_1521_);
v_name_1523_ = lean_ctor_get(v_extractionResult_1522_, 0);
lean_inc(v_name_1523_);
v___x_1524_ = lean_box(0);
v___x_1525_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1517_, v_opts_1518_, v_ns_1519_, v_openDecls_1520_, v_extractionResult_1522_, v_name_1523_, v___x_1524_);
lean_dec_ref(v_extractionResult_1522_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName___boxed(lean_object* v_env_1526_, lean_object* v_opts_1527_, lean_object* v_ns_1528_, lean_object* v_openDecls_1529_, lean_object* v_id_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lean_ResolveName_resolveGlobalName(v_env_1526_, v_opts_1527_, v_ns_1528_, v_openDecls_1529_, v_id_1530_);
lean_dec_ref(v_opts_1527_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(lean_object* v_msg_1532_){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1533_ = lean_box(0);
v___x_1534_ = lean_panic_fn_borrowed(v___x_1533_, v_msg_1532_);
return v___x_1534_;
}
}
static lean_object* _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3(void){
_start:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1538_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_1539_ = lean_unsigned_to_nat(9u);
v___x_1540_ = lean_unsigned_to_nat(230u);
v___x_1541_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1));
v___x_1542_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_1543_ = l_mkPanicMessageWithDecl(v___x_1542_, v___x_1541_, v___x_1540_, v___x_1539_, v___x_1538_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(lean_object* v_env_1544_, lean_object* v_n_1545_, lean_object* v_ns_1546_){
_start:
{
switch(lean_obj_tag(v_ns_1546_))
{
case 1:
{
lean_object* v_pre_1547_; lean_object* v___x_1548_; uint8_t v___x_1549_; 
v_pre_1547_ = lean_ctor_get(v_ns_1546_, 0);
lean_inc(v_pre_1547_);
lean_inc(v_n_1545_);
v___x_1548_ = l_Lean_Name_append(v_ns_1546_, v_n_1545_);
lean_inc_ref(v_env_1544_);
v___x_1549_ = l_Lean_Environment_isNamespace(v_env_1544_, v___x_1548_);
if (v___x_1549_ == 0)
{
lean_dec(v___x_1548_);
v_ns_1546_ = v_pre_1547_;
goto _start;
}
else
{
lean_object* v___x_1551_; 
lean_dec(v_pre_1547_);
lean_dec(v_n_1545_);
lean_dec_ref(v_env_1544_);
v___x_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1548_);
return v___x_1551_;
}
}
case 0:
{
lean_object* v___x_1552_; lean_object* v_n_1553_; uint8_t v___x_1554_; 
v___x_1552_ = l_Lean_rootNamespace;
v_n_1553_ = l_Lean_Name_replacePrefix(v_n_1545_, v___x_1552_, v_ns_1546_);
v___x_1554_ = l_Lean_Environment_isNamespace(v_env_1544_, v_n_1553_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; 
lean_dec(v_n_1553_);
v___x_1555_ = lean_box(0);
return v___x_1555_;
}
else
{
lean_object* v___x_1556_; 
v___x_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1556_, 0, v_n_1553_);
return v___x_1556_;
}
}
default: 
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_dec(v_ns_1546_);
lean_dec(v_n_1545_);
lean_dec_ref(v_env_1544_);
v___x_1557_ = lean_obj_once(&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3, &l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3_once, _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3);
v___x_1558_ = l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(v___x_1557_);
return v___x_1558_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(lean_object* v_env_1559_, lean_object* v_n_1560_, lean_object* v_x_1561_){
_start:
{
if (lean_obj_tag(v_x_1561_) == 0)
{
lean_object* v___x_1562_; 
lean_dec(v_n_1560_);
lean_dec_ref(v_env_1559_);
v___x_1562_ = lean_box(0);
return v___x_1562_;
}
else
{
lean_object* v_head_1563_; 
v_head_1563_ = lean_ctor_get(v_x_1561_, 0);
if (lean_obj_tag(v_head_1563_) == 0)
{
lean_object* v_tail_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1579_; 
lean_inc_ref(v_head_1563_);
v_tail_1564_ = lean_ctor_get(v_x_1561_, 1);
v_isSharedCheck_1579_ = !lean_is_exclusive(v_x_1561_);
if (v_isSharedCheck_1579_ == 0)
{
lean_object* v_unused_1580_; 
v_unused_1580_ = lean_ctor_get(v_x_1561_, 0);
lean_dec(v_unused_1580_);
v___x_1566_ = v_x_1561_;
v_isShared_1567_ = v_isSharedCheck_1579_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_tail_1564_);
lean_dec(v_x_1561_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1579_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v_ns_1568_; lean_object* v_except_1569_; lean_object* v___x_1570_; uint8_t v___x_1571_; 
v_ns_1568_ = lean_ctor_get(v_head_1563_, 0);
lean_inc(v_ns_1568_);
v_except_1569_ = lean_ctor_get(v_head_1563_, 1);
lean_inc(v_except_1569_);
lean_dec_ref_known(v_head_1563_, 2);
lean_inc(v_n_1560_);
v___x_1570_ = l_Lean_Name_append(v_ns_1568_, v_n_1560_);
lean_inc_ref(v_env_1559_);
v___x_1571_ = l_Lean_Environment_isNamespace(v_env_1559_, v___x_1570_);
if (v___x_1571_ == 0)
{
lean_dec(v___x_1570_);
lean_dec(v_except_1569_);
lean_del_object(v___x_1566_);
v_x_1561_ = v_tail_1564_;
goto _start;
}
else
{
uint8_t v___x_1573_; 
v___x_1573_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_n_1560_, v_except_1569_);
lean_dec(v_except_1569_);
if (v___x_1573_ == 0)
{
lean_object* v___x_1574_; lean_object* v___x_1576_; 
v___x_1574_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1559_, v_n_1560_, v_tail_1564_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 1, v___x_1574_);
lean_ctor_set(v___x_1566_, 0, v___x_1570_);
v___x_1576_ = v___x_1566_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v___x_1570_);
lean_ctor_set(v_reuseFailAlloc_1577_, 1, v___x_1574_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
else
{
lean_dec(v___x_1570_);
lean_del_object(v___x_1566_);
v_x_1561_ = v_tail_1564_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_1581_; 
v_tail_1581_ = lean_ctor_get(v_x_1561_, 1);
lean_inc(v_tail_1581_);
lean_dec_ref_known(v_x_1561_, 2);
v_x_1561_ = v_tail_1581_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespace(lean_object* v_env_1583_, lean_object* v_ns_1584_, lean_object* v_openDecls_1585_, lean_object* v_id_1586_){
_start:
{
lean_object* v___x_1587_; 
lean_inc(v_id_1586_);
lean_inc_ref(v_env_1583_);
v___x_1587_ = l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(v_env_1583_, v_id_1586_, v_ns_1584_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v___x_1588_; 
v___x_1588_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1583_, v_id_1586_, v_openDecls_1585_);
return v___x_1588_;
}
else
{
lean_object* v_val_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v_val_1589_ = lean_ctor_get(v___x_1587_, 0);
lean_inc(v_val_1589_);
lean_dec_ref_known(v___x_1587_, 1);
v___x_1590_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1583_, v_id_1586_, v_openDecls_1585_);
v___x_1591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1591_, 0, v_val_1589_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
return v___x_1591_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift___redArg(lean_object* v_inst_1592_, lean_object* v_inst_1593_){
_start:
{
lean_object* v_getCurrNamespace_1594_; lean_object* v_getOpenDecls_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1604_; 
v_getCurrNamespace_1594_ = lean_ctor_get(v_inst_1593_, 0);
v_getOpenDecls_1595_ = lean_ctor_get(v_inst_1593_, 1);
v_isSharedCheck_1604_ = !lean_is_exclusive(v_inst_1593_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1597_ = v_inst_1593_;
v_isShared_1598_ = v_isSharedCheck_1604_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_getOpenDecls_1595_);
lean_inc(v_getCurrNamespace_1594_);
lean_dec(v_inst_1593_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1604_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1602_; 
lean_inc(v_inst_1592_);
v___x_1599_ = lean_apply_2(v_inst_1592_, lean_box(0), v_getCurrNamespace_1594_);
v___x_1600_ = lean_apply_2(v_inst_1592_, lean_box(0), v_getOpenDecls_1595_);
if (v_isShared_1598_ == 0)
{
lean_ctor_set(v___x_1597_, 1, v___x_1600_);
lean_ctor_set(v___x_1597_, 0, v___x_1599_);
v___x_1602_ = v___x_1597_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1599_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v___x_1600_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
return v___x_1602_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift(lean_object* v_m_1605_, lean_object* v_n_1606_, lean_object* v_inst_1607_, lean_object* v_inst_1608_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Lean_instMonadResolveNameOfMonadLift___redArg(v_inst_1607_, v_inst_1608_);
return v___x_1609_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = ((lean_object*)(l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0));
v___x_1612_ = l_Lean_stringToMessageData(v___x_1611_);
return v___x_1612_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = ((lean_object*)(l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2));
v___x_1615_ = l_Lean_stringToMessageData(v___x_1614_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0(lean_object* v_____do__lift_1616_, lean_object* v_toPure_1617_, lean_object* v_id_1618_, lean_object* v_inst_1619_, lean_object* v_inst_1620_, lean_object* v_inst_1621_, lean_object* v_inst_1622_, uint8_t v_____do__lift_1623_){
_start:
{
uint8_t v_isExporting_1627_; 
v_isExporting_1627_ = lean_ctor_get_uint8(v_____do__lift_1616_, sizeof(void*)*13);
if (v_isExporting_1627_ == 0)
{
lean_dec_ref(v_inst_1622_);
lean_dec(v_inst_1621_);
lean_dec_ref(v_inst_1620_);
lean_dec_ref(v_inst_1619_);
lean_dec(v_id_1618_);
goto v___jp_1624_;
}
else
{
uint8_t v___x_1628_; 
v___x_1628_ = l_Lean_isPrivateName(v_id_1618_);
if (v___x_1628_ == 0)
{
lean_dec_ref(v_inst_1622_);
lean_dec(v_inst_1621_);
lean_dec_ref(v_inst_1620_);
lean_dec_ref(v_inst_1619_);
lean_dec(v_id_1618_);
goto v___jp_1624_;
}
else
{
if (v_____do__lift_1623_ == 0)
{
lean_dec_ref(v_inst_1622_);
lean_dec(v_inst_1621_);
lean_dec_ref(v_inst_1620_);
lean_dec_ref(v_inst_1619_);
lean_dec(v_id_1618_);
goto v___jp_1624_;
}
else
{
lean_object* v___x_1629_; uint8_t v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
lean_dec(v_toPure_1617_);
v___x_1629_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1);
v___x_1630_ = 0;
v___x_1631_ = l_Lean_MessageData_ofConstName(v_id_1618_, v___x_1630_);
v___x_1632_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1629_);
lean_ctor_set(v___x_1632_, 1, v___x_1631_);
v___x_1633_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3);
v___x_1634_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1632_);
lean_ctor_set(v___x_1634_, 1, v___x_1633_);
v___x_1635_ = l_Lean_logWarning___redArg(v_inst_1619_, v_inst_1620_, v_inst_1621_, v_inst_1622_, v___x_1634_);
return v___x_1635_;
}
}
}
v___jp_1624_:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = lean_box(0);
v___x_1626_ = lean_apply_2(v_toPure_1617_, lean_box(0), v___x_1625_);
return v___x_1626_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___boxed(lean_object* v_____do__lift_1636_, lean_object* v_toPure_1637_, lean_object* v_id_1638_, lean_object* v_inst_1639_, lean_object* v_inst_1640_, lean_object* v_inst_1641_, lean_object* v_inst_1642_, lean_object* v_____do__lift_1643_){
_start:
{
uint8_t v_____do__lift_203__boxed_1644_; lean_object* v_res_1645_; 
v_____do__lift_203__boxed_1644_ = lean_unbox(v_____do__lift_1643_);
v_res_1645_ = l_Lean_checkPrivateInPublic___redArg___lam__0(v_____do__lift_1636_, v_toPure_1637_, v_id_1638_, v_inst_1639_, v_inst_1640_, v_inst_1641_, v_inst_1642_, v_____do__lift_203__boxed_1644_);
lean_dec_ref(v_____do__lift_1636_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__1(lean_object* v_toPure_1646_, lean_object* v_id_1647_, lean_object* v_inst_1648_, lean_object* v_inst_1649_, lean_object* v_inst_1650_, lean_object* v_inst_1651_, lean_object* v___x_1652_, lean_object* v_toBind_1653_, lean_object* v_____do__lift_1654_){
_start:
{
lean_object* v___f_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
lean_inc_ref(v_inst_1651_);
lean_inc_ref(v_inst_1648_);
v___f_1655_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_1655_, 0, v_____do__lift_1654_);
lean_closure_set(v___f_1655_, 1, v_toPure_1646_);
lean_closure_set(v___f_1655_, 2, v_id_1647_);
lean_closure_set(v___f_1655_, 3, v_inst_1648_);
lean_closure_set(v___f_1655_, 4, v_inst_1649_);
lean_closure_set(v___f_1655_, 5, v_inst_1650_);
lean_closure_set(v___f_1655_, 6, v_inst_1651_);
v___x_1656_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1657_ = l_Lean_Option_getM___redArg(v_inst_1648_, v_inst_1651_, v___x_1652_, v___x_1656_);
v___x_1658_ = lean_apply_4(v_toBind_1653_, lean_box(0), lean_box(0), v___x_1657_, v___f_1655_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg(lean_object* v_inst_1659_, lean_object* v_inst_1660_, lean_object* v_inst_1661_, lean_object* v_inst_1662_, lean_object* v_inst_1663_, lean_object* v_id_1664_){
_start:
{
lean_object* v___x_1665_; lean_object* v_toApplicative_1666_; lean_object* v_toBind_1667_; lean_object* v_getEnv_1668_; lean_object* v_toPure_1669_; lean_object* v___f_1670_; lean_object* v___x_1671_; 
v___x_1665_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1666_ = lean_ctor_get(v_inst_1659_, 0);
v_toBind_1667_ = lean_ctor_get(v_inst_1659_, 1);
lean_inc_n(v_toBind_1667_, 2);
v_getEnv_1668_ = lean_ctor_get(v_inst_1660_, 0);
lean_inc(v_getEnv_1668_);
lean_dec_ref(v_inst_1660_);
v_toPure_1669_ = lean_ctor_get(v_toApplicative_1666_, 1);
lean_inc(v_toPure_1669_);
v___f_1670_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__1), 9, 8);
lean_closure_set(v___f_1670_, 0, v_toPure_1669_);
lean_closure_set(v___f_1670_, 1, v_id_1664_);
lean_closure_set(v___f_1670_, 2, v_inst_1659_);
lean_closure_set(v___f_1670_, 3, v_inst_1662_);
lean_closure_set(v___f_1670_, 4, v_inst_1663_);
lean_closure_set(v___f_1670_, 5, v_inst_1661_);
lean_closure_set(v___f_1670_, 6, v___x_1665_);
lean_closure_set(v___f_1670_, 7, v_toBind_1667_);
v___x_1671_ = lean_apply_4(v_toBind_1667_, lean_box(0), lean_box(0), v_getEnv_1668_, v___f_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic(lean_object* v_m_1672_, lean_object* v_inst_1673_, lean_object* v_inst_1674_, lean_object* v_inst_1675_, lean_object* v_inst_1676_, lean_object* v_inst_1677_, lean_object* v_id_1678_){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1673_, v_inst_1674_, v_inst_1675_, v_inst_1676_, v_inst_1677_, v_id_1678_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0(lean_object* v_toPure_1680_, lean_object* v_00___1681_){
_start:
{
uint8_t v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1682_ = 0;
v___x_1683_ = lean_box(v___x_1682_);
v___x_1684_ = lean_apply_2(v_toPure_1680_, lean_box(0), v___x_1683_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1(lean_object* v_env_1685_, lean_object* v_n_1686_, lean_object* v___f_1687_, lean_object* v_toPure_1688_, uint8_t v___x_1689_, lean_object* v_____r_1690_){
_start:
{
lean_object* v___x_1691_; 
v___x_1691_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1685_, v_n_1686_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v___x_1692_; lean_object* v___x_1693_; 
lean_dec(v_toPure_1688_);
v___x_1692_ = lean_box(0);
v___x_1693_ = lean_apply_1(v___f_1687_, v___x_1692_);
return v___x_1693_;
}
else
{
lean_object* v_val_1694_; lean_object* v___x_1695_; uint8_t v_isModule_1696_; 
lean_dec(v___f_1687_);
v_val_1694_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_val_1694_);
lean_dec_ref_known(v___x_1691_, 1);
v___x_1695_ = l_Lean_Environment_header(v_env_1685_);
v_isModule_1696_ = lean_ctor_get_uint8(v___x_1695_, sizeof(void*)*8 + 4);
if (v_isModule_1696_ == 0)
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
lean_dec_ref(v___x_1695_);
lean_dec(v_val_1694_);
v___x_1697_ = lean_box(v___x_1689_);
v___x_1698_ = lean_apply_2(v_toPure_1688_, lean_box(0), v___x_1697_);
return v___x_1698_;
}
else
{
lean_object* v_modules_1699_; lean_object* v___x_1700_; uint8_t v___x_1701_; 
v_modules_1699_ = lean_ctor_get(v___x_1695_, 3);
lean_inc_ref(v_modules_1699_);
lean_dec_ref(v___x_1695_);
v___x_1700_ = lean_array_get_size(v_modules_1699_);
v___x_1701_ = lean_nat_dec_lt(v_val_1694_, v___x_1700_);
if (v___x_1701_ == 0)
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
lean_dec_ref(v_modules_1699_);
lean_dec(v_val_1694_);
v___x_1702_ = lean_box(v_isModule_1696_);
v___x_1703_ = lean_apply_2(v_toPure_1688_, lean_box(0), v___x_1702_);
return v___x_1703_;
}
else
{
lean_object* v___x_1704_; lean_object* v_toImport_1705_; uint8_t v_importAll_1706_; 
v___x_1704_ = lean_array_fget(v_modules_1699_, v_val_1694_);
lean_dec(v_val_1694_);
lean_dec_ref(v_modules_1699_);
v_toImport_1705_ = lean_ctor_get(v___x_1704_, 0);
lean_inc_ref(v_toImport_1705_);
lean_dec(v___x_1704_);
v_importAll_1706_ = lean_ctor_get_uint8(v_toImport_1705_, sizeof(void*)*1);
lean_dec_ref(v_toImport_1705_);
if (v_importAll_1706_ == 0)
{
lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1707_ = lean_box(v_isModule_1696_);
v___x_1708_ = lean_apply_2(v_toPure_1688_, lean_box(0), v___x_1707_);
return v___x_1708_;
}
else
{
uint8_t v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v___x_1709_ = 0;
v___x_1710_ = lean_box(v___x_1709_);
v___x_1711_ = lean_apply_2(v_toPure_1688_, lean_box(0), v___x_1710_);
return v___x_1711_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed(lean_object* v_env_1712_, lean_object* v_n_1713_, lean_object* v___f_1714_, lean_object* v_toPure_1715_, lean_object* v___x_1716_, lean_object* v_____r_1717_){
_start:
{
uint8_t v___x_553__boxed_1718_; lean_object* v_res_1719_; 
v___x_553__boxed_1718_ = lean_unbox(v___x_1716_);
v_res_1719_ = l_Lean_isInaccessiblePrivateName___redArg___lam__1(v_env_1712_, v_n_1713_, v___f_1714_, v_toPure_1715_, v___x_553__boxed_1718_, v_____r_1717_);
lean_dec(v_n_1713_);
lean_dec_ref(v_env_1712_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2(lean_object* v_env_1720_, lean_object* v_inst_1721_, lean_object* v_inst_1722_, lean_object* v_inst_1723_, lean_object* v_inst_1724_, lean_object* v_inst_1725_, lean_object* v_n_1726_, lean_object* v_toBind_1727_, lean_object* v___f_1728_, lean_object* v_toPure_1729_, uint8_t v_____do__lift_1730_){
_start:
{
uint8_t v_isExporting_1734_; 
v_isExporting_1734_ = lean_ctor_get_uint8(v_env_1720_, sizeof(void*)*13);
if (v_isExporting_1734_ == 0)
{
lean_dec(v_toPure_1729_);
goto v___jp_1731_;
}
else
{
if (v_____do__lift_1730_ == 0)
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
lean_dec(v___f_1728_);
lean_dec(v_toBind_1727_);
lean_dec(v_n_1726_);
lean_dec(v_inst_1725_);
lean_dec_ref(v_inst_1724_);
lean_dec_ref(v_inst_1723_);
lean_dec_ref(v_inst_1722_);
lean_dec_ref(v_inst_1721_);
v___x_1735_ = lean_box(v_isExporting_1734_);
v___x_1736_ = lean_apply_2(v_toPure_1729_, lean_box(0), v___x_1735_);
return v___x_1736_;
}
else
{
lean_dec(v_toPure_1729_);
goto v___jp_1731_;
}
}
v___jp_1731_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1721_, v_inst_1722_, v_inst_1723_, v_inst_1724_, v_inst_1725_, v_n_1726_);
v___x_1733_ = lean_apply_4(v_toBind_1727_, lean_box(0), lean_box(0), v___x_1732_, v___f_1728_);
return v___x_1733_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed(lean_object* v_env_1737_, lean_object* v_inst_1738_, lean_object* v_inst_1739_, lean_object* v_inst_1740_, lean_object* v_inst_1741_, lean_object* v_inst_1742_, lean_object* v_n_1743_, lean_object* v_toBind_1744_, lean_object* v___f_1745_, lean_object* v_toPure_1746_, lean_object* v_____do__lift_1747_){
_start:
{
uint8_t v_____do__lift_601__boxed_1748_; lean_object* v_res_1749_; 
v_____do__lift_601__boxed_1748_ = lean_unbox(v_____do__lift_1747_);
v_res_1749_ = l_Lean_isInaccessiblePrivateName___redArg___lam__2(v_env_1737_, v_inst_1738_, v_inst_1739_, v_inst_1740_, v_inst_1741_, v_inst_1742_, v_n_1743_, v_toBind_1744_, v___f_1745_, v_toPure_1746_, v_____do__lift_601__boxed_1748_);
lean_dec_ref(v_env_1737_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__3(lean_object* v_n_1750_, lean_object* v___f_1751_, lean_object* v_toPure_1752_, uint8_t v___x_1753_, lean_object* v_inst_1754_, lean_object* v_inst_1755_, lean_object* v_inst_1756_, lean_object* v_inst_1757_, lean_object* v_inst_1758_, lean_object* v_toBind_1759_, lean_object* v___x_1760_, lean_object* v_env_1761_){
_start:
{
lean_object* v___x_1762_; lean_object* v___f_1763_; lean_object* v___f_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1762_ = lean_box(v___x_1753_);
lean_inc(v_toPure_1752_);
lean_inc(v_n_1750_);
lean_inc_ref(v_env_1761_);
v___f_1763_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1763_, 0, v_env_1761_);
lean_closure_set(v___f_1763_, 1, v_n_1750_);
lean_closure_set(v___f_1763_, 2, v___f_1751_);
lean_closure_set(v___f_1763_, 3, v_toPure_1752_);
lean_closure_set(v___f_1763_, 4, v___x_1762_);
lean_inc(v_toBind_1759_);
lean_inc_ref(v_inst_1756_);
lean_inc_ref(v_inst_1754_);
v___f_1764_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed), 11, 10);
lean_closure_set(v___f_1764_, 0, v_env_1761_);
lean_closure_set(v___f_1764_, 1, v_inst_1754_);
lean_closure_set(v___f_1764_, 2, v_inst_1755_);
lean_closure_set(v___f_1764_, 3, v_inst_1756_);
lean_closure_set(v___f_1764_, 4, v_inst_1757_);
lean_closure_set(v___f_1764_, 5, v_inst_1758_);
lean_closure_set(v___f_1764_, 6, v_n_1750_);
lean_closure_set(v___f_1764_, 7, v_toBind_1759_);
lean_closure_set(v___f_1764_, 8, v___f_1763_);
lean_closure_set(v___f_1764_, 9, v_toPure_1752_);
v___x_1765_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1766_ = l_Lean_Option_getM___redArg(v_inst_1754_, v_inst_1756_, v___x_1760_, v___x_1765_);
v___x_1767_ = lean_apply_4(v_toBind_1759_, lean_box(0), lean_box(0), v___x_1766_, v___f_1764_);
return v___x_1767_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__3___boxed(lean_object* v_n_1768_, lean_object* v___f_1769_, lean_object* v_toPure_1770_, lean_object* v___x_1771_, lean_object* v_inst_1772_, lean_object* v_inst_1773_, lean_object* v_inst_1774_, lean_object* v_inst_1775_, lean_object* v_inst_1776_, lean_object* v_toBind_1777_, lean_object* v___x_1778_, lean_object* v_env_1779_){
_start:
{
uint8_t v___x_627__boxed_1780_; lean_object* v_res_1781_; 
v___x_627__boxed_1780_ = lean_unbox(v___x_1771_);
v_res_1781_ = l_Lean_isInaccessiblePrivateName___redArg___lam__3(v_n_1768_, v___f_1769_, v_toPure_1770_, v___x_627__boxed_1780_, v_inst_1772_, v_inst_1773_, v_inst_1774_, v_inst_1775_, v_inst_1776_, v_toBind_1777_, v___x_1778_, v_env_1779_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg(lean_object* v_inst_1782_, lean_object* v_inst_1783_, lean_object* v_inst_1784_, lean_object* v_inst_1785_, lean_object* v_inst_1786_, lean_object* v_n_1787_){
_start:
{
lean_object* v___x_1788_; lean_object* v_toApplicative_1789_; lean_object* v_toBind_1790_; lean_object* v_toPure_1791_; lean_object* v___f_1792_; uint8_t v___x_1793_; 
v___x_1788_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1789_ = lean_ctor_get(v_inst_1784_, 0);
v_toBind_1790_ = lean_ctor_get(v_inst_1784_, 1);
lean_inc(v_toBind_1790_);
v_toPure_1791_ = lean_ctor_get(v_toApplicative_1789_, 1);
lean_inc_n(v_toPure_1791_, 2);
v___f_1792_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1792_, 0, v_toPure_1791_);
v___x_1793_ = l_Lean_isPrivateName(v_n_1787_);
if (v___x_1793_ == 0)
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_dec_ref(v___f_1792_);
lean_dec(v_toBind_1790_);
lean_dec(v_n_1787_);
lean_dec_ref(v_inst_1786_);
lean_dec_ref(v_inst_1785_);
lean_dec_ref(v_inst_1784_);
lean_dec(v_inst_1783_);
lean_dec_ref(v_inst_1782_);
v___x_1794_ = lean_box(0);
v___x_1795_ = l_Lean_isInaccessiblePrivateName___redArg___lam__0(v_toPure_1791_, v___x_1794_);
return v___x_1795_;
}
else
{
lean_object* v_getEnv_1796_; lean_object* v___x_1797_; lean_object* v___f_1798_; lean_object* v___x_1799_; 
v_getEnv_1796_ = lean_ctor_get(v_inst_1785_, 0);
lean_inc(v_getEnv_1796_);
v___x_1797_ = lean_box(v___x_1793_);
lean_inc(v_toBind_1790_);
v___f_1798_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_1798_, 0, v_n_1787_);
lean_closure_set(v___f_1798_, 1, v___f_1792_);
lean_closure_set(v___f_1798_, 2, v_toPure_1791_);
lean_closure_set(v___f_1798_, 3, v___x_1797_);
lean_closure_set(v___f_1798_, 4, v_inst_1784_);
lean_closure_set(v___f_1798_, 5, v_inst_1785_);
lean_closure_set(v___f_1798_, 6, v_inst_1786_);
lean_closure_set(v___f_1798_, 7, v_inst_1782_);
lean_closure_set(v___f_1798_, 8, v_inst_1783_);
lean_closure_set(v___f_1798_, 9, v_toBind_1790_);
lean_closure_set(v___f_1798_, 10, v___x_1788_);
v___x_1799_ = lean_apply_4(v_toBind_1790_, lean_box(0), lean_box(0), v_getEnv_1796_, v___f_1798_);
return v___x_1799_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName(lean_object* v_m_1800_, lean_object* v_inst_1801_, lean_object* v_inst_1802_, lean_object* v_inst_1803_, lean_object* v_inst_1804_, lean_object* v_inst_1805_, lean_object* v_n_1806_){
_start:
{
lean_object* v___x_1807_; 
v___x_1807_ = l_Lean_isInaccessiblePrivateName___redArg(v_inst_1801_, v_inst_1802_, v_inst_1803_, v_inst_1804_, v_inst_1805_, v_n_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT uint8_t l_Lean_resolveGlobalName___redArg___lam__0(lean_object* v_x_1808_){
_start:
{
lean_object* v_fst_1809_; uint8_t v___x_1810_; 
v_fst_1809_ = lean_ctor_get(v_x_1808_, 0);
v___x_1810_ = l_Lean_isPrivateName(v_fst_1809_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__0___boxed(lean_object* v_x_1811_){
_start:
{
uint8_t v_res_1812_; lean_object* v_r_1813_; 
v_res_1812_ = l_Lean_resolveGlobalName___redArg___lam__0(v_x_1811_);
lean_dec_ref(v_x_1811_);
v_r_1813_ = lean_box(v_res_1812_);
return v_r_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__1(lean_object* v_toPure_1814_, lean_object* v_res_1815_, lean_object* v_____r_1816_){
_start:
{
lean_object* v___x_1817_; 
v___x_1817_ = lean_apply_2(v_toPure_1814_, lean_box(0), v_res_1815_);
return v___x_1817_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2(uint8_t v_enableLog_1818_, lean_object* v_toPure_1819_, lean_object* v_res_1820_, lean_object* v___f_1821_, lean_object* v_inst_1822_, lean_object* v_inst_1823_, lean_object* v_inst_1824_, lean_object* v_inst_1825_, lean_object* v_inst_1826_, lean_object* v_toBind_1827_, lean_object* v___f_1828_, lean_object* v_____do__lift_1829_){
_start:
{
if (v_enableLog_1818_ == 0)
{
lean_object* v___x_1830_; 
lean_dec(v___f_1828_);
lean_dec(v_toBind_1827_);
lean_dec(v_inst_1826_);
lean_dec_ref(v_inst_1825_);
lean_dec_ref(v_inst_1824_);
lean_dec_ref(v_inst_1823_);
lean_dec_ref(v_inst_1822_);
lean_dec_ref(v___f_1821_);
v___x_1830_ = lean_apply_2(v_toPure_1819_, lean_box(0), v_res_1820_);
return v___x_1830_;
}
else
{
uint8_t v_isExporting_1831_; 
v_isExporting_1831_ = lean_ctor_get_uint8(v_____do__lift_1829_, sizeof(void*)*13);
if (v_isExporting_1831_ == 0)
{
lean_object* v___x_1832_; 
lean_dec(v___f_1828_);
lean_dec(v_toBind_1827_);
lean_dec(v_inst_1826_);
lean_dec_ref(v_inst_1825_);
lean_dec_ref(v_inst_1824_);
lean_dec_ref(v_inst_1823_);
lean_dec_ref(v_inst_1822_);
lean_dec_ref(v___f_1821_);
v___x_1832_ = lean_apply_2(v_toPure_1819_, lean_box(0), v_res_1820_);
return v___x_1832_;
}
else
{
lean_object* v___x_1833_; 
lean_inc(v_res_1820_);
v___x_1833_ = l_List_find_x3f___redArg(v___f_1821_, v_res_1820_);
if (lean_obj_tag(v___x_1833_) == 1)
{
lean_object* v_val_1834_; lean_object* v_fst_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
lean_dec(v_res_1820_);
lean_dec(v_toPure_1819_);
v_val_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_val_1834_);
lean_dec_ref_known(v___x_1833_, 1);
v_fst_1835_ = lean_ctor_get(v_val_1834_, 0);
lean_inc(v_fst_1835_);
lean_dec(v_val_1834_);
v___x_1836_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1822_, v_inst_1823_, v_inst_1824_, v_inst_1825_, v_inst_1826_, v_fst_1835_);
v___x_1837_ = lean_apply_4(v_toBind_1827_, lean_box(0), lean_box(0), v___x_1836_, v___f_1828_);
return v___x_1837_;
}
else
{
lean_object* v___x_1838_; 
lean_dec(v___x_1833_);
lean_dec(v___f_1828_);
lean_dec(v_toBind_1827_);
lean_dec(v_inst_1826_);
lean_dec_ref(v_inst_1825_);
lean_dec_ref(v_inst_1824_);
lean_dec_ref(v_inst_1823_);
lean_dec_ref(v_inst_1822_);
v___x_1838_ = lean_apply_2(v_toPure_1819_, lean_box(0), v_res_1820_);
return v___x_1838_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2___boxed(lean_object* v_enableLog_1839_, lean_object* v_toPure_1840_, lean_object* v_res_1841_, lean_object* v___f_1842_, lean_object* v_inst_1843_, lean_object* v_inst_1844_, lean_object* v_inst_1845_, lean_object* v_inst_1846_, lean_object* v_inst_1847_, lean_object* v_toBind_1848_, lean_object* v___f_1849_, lean_object* v_____do__lift_1850_){
_start:
{
uint8_t v_enableLog_boxed_1851_; lean_object* v_res_1852_; 
v_enableLog_boxed_1851_ = lean_unbox(v_enableLog_1839_);
v_res_1852_ = l_Lean_resolveGlobalName___redArg___lam__2(v_enableLog_boxed_1851_, v_toPure_1840_, v_res_1841_, v___f_1842_, v_inst_1843_, v_inst_1844_, v_inst_1845_, v_inst_1846_, v_inst_1847_, v_toBind_1848_, v___f_1849_, v_____do__lift_1850_);
lean_dec_ref(v_____do__lift_1850_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3(lean_object* v_____do__lift_1853_, lean_object* v_____do__lift_1854_, lean_object* v_____do__lift_1855_, lean_object* v_id_1856_, lean_object* v_toPure_1857_, uint8_t v_enableLog_1858_, lean_object* v___f_1859_, lean_object* v_inst_1860_, lean_object* v_inst_1861_, lean_object* v_inst_1862_, lean_object* v_inst_1863_, lean_object* v_inst_1864_, lean_object* v_toBind_1865_, lean_object* v_getEnv_1866_, lean_object* v_____do__lift_1867_){
_start:
{
lean_object* v_res_1868_; lean_object* v___f_1869_; lean_object* v___x_1870_; lean_object* v___f_1871_; lean_object* v___x_1872_; 
v_res_1868_ = l_Lean_ResolveName_resolveGlobalName(v_____do__lift_1853_, v_____do__lift_1854_, v_____do__lift_1855_, v_____do__lift_1867_, v_id_1856_);
lean_inc(v_res_1868_);
lean_inc(v_toPure_1857_);
v___f_1869_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1869_, 0, v_toPure_1857_);
lean_closure_set(v___f_1869_, 1, v_res_1868_);
v___x_1870_ = lean_box(v_enableLog_1858_);
lean_inc(v_toBind_1865_);
v___f_1871_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_1871_, 0, v___x_1870_);
lean_closure_set(v___f_1871_, 1, v_toPure_1857_);
lean_closure_set(v___f_1871_, 2, v_res_1868_);
lean_closure_set(v___f_1871_, 3, v___f_1859_);
lean_closure_set(v___f_1871_, 4, v_inst_1860_);
lean_closure_set(v___f_1871_, 5, v_inst_1861_);
lean_closure_set(v___f_1871_, 6, v_inst_1862_);
lean_closure_set(v___f_1871_, 7, v_inst_1863_);
lean_closure_set(v___f_1871_, 8, v_inst_1864_);
lean_closure_set(v___f_1871_, 9, v_toBind_1865_);
lean_closure_set(v___f_1871_, 10, v___f_1869_);
v___x_1872_ = lean_apply_4(v_toBind_1865_, lean_box(0), lean_box(0), v_getEnv_1866_, v___f_1871_);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3___boxed(lean_object* v_____do__lift_1873_, lean_object* v_____do__lift_1874_, lean_object* v_____do__lift_1875_, lean_object* v_id_1876_, lean_object* v_toPure_1877_, lean_object* v_enableLog_1878_, lean_object* v___f_1879_, lean_object* v_inst_1880_, lean_object* v_inst_1881_, lean_object* v_inst_1882_, lean_object* v_inst_1883_, lean_object* v_inst_1884_, lean_object* v_toBind_1885_, lean_object* v_getEnv_1886_, lean_object* v_____do__lift_1887_){
_start:
{
uint8_t v_enableLog_boxed_1888_; lean_object* v_res_1889_; 
v_enableLog_boxed_1888_ = lean_unbox(v_enableLog_1878_);
v_res_1889_ = l_Lean_resolveGlobalName___redArg___lam__3(v_____do__lift_1873_, v_____do__lift_1874_, v_____do__lift_1875_, v_id_1876_, v_toPure_1877_, v_enableLog_boxed_1888_, v___f_1879_, v_inst_1880_, v_inst_1881_, v_inst_1882_, v_inst_1883_, v_inst_1884_, v_toBind_1885_, v_getEnv_1886_, v_____do__lift_1887_);
lean_dec_ref(v_____do__lift_1874_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4(lean_object* v_____do__lift_1890_, lean_object* v_____do__lift_1891_, lean_object* v_id_1892_, lean_object* v_toPure_1893_, uint8_t v_enableLog_1894_, lean_object* v___f_1895_, lean_object* v_inst_1896_, lean_object* v_inst_1897_, lean_object* v_inst_1898_, lean_object* v_inst_1899_, lean_object* v_inst_1900_, lean_object* v_toBind_1901_, lean_object* v_getEnv_1902_, lean_object* v_getOpenDecls_1903_, lean_object* v_____do__lift_1904_){
_start:
{
lean_object* v___x_1905_; lean_object* v___f_1906_; lean_object* v___x_1907_; 
v___x_1905_ = lean_box(v_enableLog_1894_);
lean_inc(v_toBind_1901_);
v___f_1906_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__3___boxed), 15, 14);
lean_closure_set(v___f_1906_, 0, v_____do__lift_1890_);
lean_closure_set(v___f_1906_, 1, v_____do__lift_1891_);
lean_closure_set(v___f_1906_, 2, v_____do__lift_1904_);
lean_closure_set(v___f_1906_, 3, v_id_1892_);
lean_closure_set(v___f_1906_, 4, v_toPure_1893_);
lean_closure_set(v___f_1906_, 5, v___x_1905_);
lean_closure_set(v___f_1906_, 6, v___f_1895_);
lean_closure_set(v___f_1906_, 7, v_inst_1896_);
lean_closure_set(v___f_1906_, 8, v_inst_1897_);
lean_closure_set(v___f_1906_, 9, v_inst_1898_);
lean_closure_set(v___f_1906_, 10, v_inst_1899_);
lean_closure_set(v___f_1906_, 11, v_inst_1900_);
lean_closure_set(v___f_1906_, 12, v_toBind_1901_);
lean_closure_set(v___f_1906_, 13, v_getEnv_1902_);
v___x_1907_ = lean_apply_4(v_toBind_1901_, lean_box(0), lean_box(0), v_getOpenDecls_1903_, v___f_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4___boxed(lean_object* v_____do__lift_1908_, lean_object* v_____do__lift_1909_, lean_object* v_id_1910_, lean_object* v_toPure_1911_, lean_object* v_enableLog_1912_, lean_object* v___f_1913_, lean_object* v_inst_1914_, lean_object* v_inst_1915_, lean_object* v_inst_1916_, lean_object* v_inst_1917_, lean_object* v_inst_1918_, lean_object* v_toBind_1919_, lean_object* v_getEnv_1920_, lean_object* v_getOpenDecls_1921_, lean_object* v_____do__lift_1922_){
_start:
{
uint8_t v_enableLog_boxed_1923_; lean_object* v_res_1924_; 
v_enableLog_boxed_1923_ = lean_unbox(v_enableLog_1912_);
v_res_1924_ = l_Lean_resolveGlobalName___redArg___lam__4(v_____do__lift_1908_, v_____do__lift_1909_, v_id_1910_, v_toPure_1911_, v_enableLog_boxed_1923_, v___f_1913_, v_inst_1914_, v_inst_1915_, v_inst_1916_, v_inst_1917_, v_inst_1918_, v_toBind_1919_, v_getEnv_1920_, v_getOpenDecls_1921_, v_____do__lift_1922_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5(lean_object* v_inst_1925_, lean_object* v_____do__lift_1926_, lean_object* v_id_1927_, lean_object* v_toPure_1928_, uint8_t v_enableLog_1929_, lean_object* v___f_1930_, lean_object* v_inst_1931_, lean_object* v_inst_1932_, lean_object* v_inst_1933_, lean_object* v_inst_1934_, lean_object* v_inst_1935_, lean_object* v_toBind_1936_, lean_object* v_getEnv_1937_, lean_object* v_____do__lift_1938_){
_start:
{
lean_object* v_getCurrNamespace_1939_; lean_object* v_getOpenDecls_1940_; lean_object* v___x_1941_; lean_object* v___f_1942_; lean_object* v___x_1943_; 
v_getCurrNamespace_1939_ = lean_ctor_get(v_inst_1925_, 0);
lean_inc(v_getCurrNamespace_1939_);
v_getOpenDecls_1940_ = lean_ctor_get(v_inst_1925_, 1);
lean_inc(v_getOpenDecls_1940_);
lean_dec_ref(v_inst_1925_);
v___x_1941_ = lean_box(v_enableLog_1929_);
lean_inc(v_toBind_1936_);
v___f_1942_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__4___boxed), 15, 14);
lean_closure_set(v___f_1942_, 0, v_____do__lift_1926_);
lean_closure_set(v___f_1942_, 1, v_____do__lift_1938_);
lean_closure_set(v___f_1942_, 2, v_id_1927_);
lean_closure_set(v___f_1942_, 3, v_toPure_1928_);
lean_closure_set(v___f_1942_, 4, v___x_1941_);
lean_closure_set(v___f_1942_, 5, v___f_1930_);
lean_closure_set(v___f_1942_, 6, v_inst_1931_);
lean_closure_set(v___f_1942_, 7, v_inst_1932_);
lean_closure_set(v___f_1942_, 8, v_inst_1933_);
lean_closure_set(v___f_1942_, 9, v_inst_1934_);
lean_closure_set(v___f_1942_, 10, v_inst_1935_);
lean_closure_set(v___f_1942_, 11, v_toBind_1936_);
lean_closure_set(v___f_1942_, 12, v_getEnv_1937_);
lean_closure_set(v___f_1942_, 13, v_getOpenDecls_1940_);
v___x_1943_ = lean_apply_4(v_toBind_1936_, lean_box(0), lean_box(0), v_getCurrNamespace_1939_, v___f_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5___boxed(lean_object* v_inst_1944_, lean_object* v_____do__lift_1945_, lean_object* v_id_1946_, lean_object* v_toPure_1947_, lean_object* v_enableLog_1948_, lean_object* v___f_1949_, lean_object* v_inst_1950_, lean_object* v_inst_1951_, lean_object* v_inst_1952_, lean_object* v_inst_1953_, lean_object* v_inst_1954_, lean_object* v_toBind_1955_, lean_object* v_getEnv_1956_, lean_object* v_____do__lift_1957_){
_start:
{
uint8_t v_enableLog_boxed_1958_; lean_object* v_res_1959_; 
v_enableLog_boxed_1958_ = lean_unbox(v_enableLog_1948_);
v_res_1959_ = l_Lean_resolveGlobalName___redArg___lam__5(v_inst_1944_, v_____do__lift_1945_, v_id_1946_, v_toPure_1947_, v_enableLog_boxed_1958_, v___f_1949_, v_inst_1950_, v_inst_1951_, v_inst_1952_, v_inst_1953_, v_inst_1954_, v_toBind_1955_, v_getEnv_1956_, v_____do__lift_1957_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6(lean_object* v_inst_1960_, lean_object* v_inst_1961_, lean_object* v_id_1962_, lean_object* v_toPure_1963_, uint8_t v_enableLog_1964_, lean_object* v___f_1965_, lean_object* v_inst_1966_, lean_object* v_inst_1967_, lean_object* v_inst_1968_, lean_object* v_inst_1969_, lean_object* v_toBind_1970_, lean_object* v_getEnv_1971_, lean_object* v_____do__lift_1972_){
_start:
{
lean_object* v_getOptions_1973_; lean_object* v___x_1974_; lean_object* v___f_1975_; lean_object* v___x_1976_; 
v_getOptions_1973_ = lean_ctor_get(v_inst_1960_, 0);
lean_inc(v_getOptions_1973_);
v___x_1974_ = lean_box(v_enableLog_1964_);
lean_inc(v_toBind_1970_);
v___f_1975_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_1975_, 0, v_inst_1961_);
lean_closure_set(v___f_1975_, 1, v_____do__lift_1972_);
lean_closure_set(v___f_1975_, 2, v_id_1962_);
lean_closure_set(v___f_1975_, 3, v_toPure_1963_);
lean_closure_set(v___f_1975_, 4, v___x_1974_);
lean_closure_set(v___f_1975_, 5, v___f_1965_);
lean_closure_set(v___f_1975_, 6, v_inst_1966_);
lean_closure_set(v___f_1975_, 7, v_inst_1967_);
lean_closure_set(v___f_1975_, 8, v_inst_1960_);
lean_closure_set(v___f_1975_, 9, v_inst_1968_);
lean_closure_set(v___f_1975_, 10, v_inst_1969_);
lean_closure_set(v___f_1975_, 11, v_toBind_1970_);
lean_closure_set(v___f_1975_, 12, v_getEnv_1971_);
v___x_1976_ = lean_apply_4(v_toBind_1970_, lean_box(0), lean_box(0), v_getOptions_1973_, v___f_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6___boxed(lean_object* v_inst_1977_, lean_object* v_inst_1978_, lean_object* v_id_1979_, lean_object* v_toPure_1980_, lean_object* v_enableLog_1981_, lean_object* v___f_1982_, lean_object* v_inst_1983_, lean_object* v_inst_1984_, lean_object* v_inst_1985_, lean_object* v_inst_1986_, lean_object* v_toBind_1987_, lean_object* v_getEnv_1988_, lean_object* v_____do__lift_1989_){
_start:
{
uint8_t v_enableLog_boxed_1990_; lean_object* v_res_1991_; 
v_enableLog_boxed_1990_ = lean_unbox(v_enableLog_1981_);
v_res_1991_ = l_Lean_resolveGlobalName___redArg___lam__6(v_inst_1977_, v_inst_1978_, v_id_1979_, v_toPure_1980_, v_enableLog_boxed_1990_, v___f_1982_, v_inst_1983_, v_inst_1984_, v_inst_1985_, v_inst_1986_, v_toBind_1987_, v_getEnv_1988_, v_____do__lift_1989_);
return v_res_1991_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg(lean_object* v_inst_1993_, lean_object* v_inst_1994_, lean_object* v_inst_1995_, lean_object* v_inst_1996_, lean_object* v_inst_1997_, lean_object* v_inst_1998_, lean_object* v_id_1999_, uint8_t v_enableLog_2000_){
_start:
{
lean_object* v_toApplicative_2001_; lean_object* v_toBind_2002_; lean_object* v_getEnv_2003_; lean_object* v_toPure_2004_; lean_object* v___f_2005_; lean_object* v___x_2006_; lean_object* v___f_2007_; lean_object* v___x_2008_; 
v_toApplicative_2001_ = lean_ctor_get(v_inst_1993_, 0);
v_toBind_2002_ = lean_ctor_get(v_inst_1993_, 1);
lean_inc_n(v_toBind_2002_, 2);
v_getEnv_2003_ = lean_ctor_get(v_inst_1995_, 0);
lean_inc_n(v_getEnv_2003_, 2);
v_toPure_2004_ = lean_ctor_get(v_toApplicative_2001_, 1);
lean_inc(v_toPure_2004_);
v___f_2005_ = ((lean_object*)(l_Lean_resolveGlobalName___redArg___closed__0));
v___x_2006_ = lean_box(v_enableLog_2000_);
v___f_2007_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_2007_, 0, v_inst_1996_);
lean_closure_set(v___f_2007_, 1, v_inst_1994_);
lean_closure_set(v___f_2007_, 2, v_id_1999_);
lean_closure_set(v___f_2007_, 3, v_toPure_2004_);
lean_closure_set(v___f_2007_, 4, v___x_2006_);
lean_closure_set(v___f_2007_, 5, v___f_2005_);
lean_closure_set(v___f_2007_, 6, v_inst_1993_);
lean_closure_set(v___f_2007_, 7, v_inst_1995_);
lean_closure_set(v___f_2007_, 8, v_inst_1997_);
lean_closure_set(v___f_2007_, 9, v_inst_1998_);
lean_closure_set(v___f_2007_, 10, v_toBind_2002_);
lean_closure_set(v___f_2007_, 11, v_getEnv_2003_);
v___x_2008_ = lean_apply_4(v_toBind_2002_, lean_box(0), lean_box(0), v_getEnv_2003_, v___f_2007_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___boxed(lean_object* v_inst_2009_, lean_object* v_inst_2010_, lean_object* v_inst_2011_, lean_object* v_inst_2012_, lean_object* v_inst_2013_, lean_object* v_inst_2014_, lean_object* v_id_2015_, lean_object* v_enableLog_2016_){
_start:
{
uint8_t v_enableLog_boxed_2017_; lean_object* v_res_2018_; 
v_enableLog_boxed_2017_ = lean_unbox(v_enableLog_2016_);
v_res_2018_ = l_Lean_resolveGlobalName___redArg(v_inst_2009_, v_inst_2010_, v_inst_2011_, v_inst_2012_, v_inst_2013_, v_inst_2014_, v_id_2015_, v_enableLog_boxed_2017_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName(lean_object* v_m_2019_, lean_object* v_inst_2020_, lean_object* v_inst_2021_, lean_object* v_inst_2022_, lean_object* v_inst_2023_, lean_object* v_inst_2024_, lean_object* v_inst_2025_, lean_object* v_id_2026_, uint8_t v_enableLog_2027_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = l_Lean_resolveGlobalName___redArg(v_inst_2020_, v_inst_2021_, v_inst_2022_, v_inst_2023_, v_inst_2024_, v_inst_2025_, v_id_2026_, v_enableLog_2027_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___boxed(lean_object* v_m_2029_, lean_object* v_inst_2030_, lean_object* v_inst_2031_, lean_object* v_inst_2032_, lean_object* v_inst_2033_, lean_object* v_inst_2034_, lean_object* v_inst_2035_, lean_object* v_id_2036_, lean_object* v_enableLog_2037_){
_start:
{
uint8_t v_enableLog_boxed_2038_; lean_object* v_res_2039_; 
v_enableLog_boxed_2038_ = lean_unbox(v_enableLog_2037_);
v_res_2039_ = l_Lean_resolveGlobalName(v_m_2029_, v_inst_2030_, v_inst_2031_, v_inst_2032_, v_inst_2033_, v_inst_2034_, v_inst_2035_, v_id_2036_, v_enableLog_boxed_2038_);
return v_res_2039_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__0(lean_object* v_toPure_2040_, lean_object* v_nss_2041_, lean_object* v_____r_2042_){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = lean_apply_2(v_toPure_2040_, lean_box(0), v_nss_2041_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1(lean_object* v_____do__lift_2046_, lean_object* v_____do__lift_2047_, lean_object* v_id_2048_, uint8_t v_allowEmpty_2049_, lean_object* v_toPure_2050_, lean_object* v_inst_2051_, lean_object* v_inst_2052_, lean_object* v_toBind_2053_, lean_object* v_____do__lift_2054_){
_start:
{
lean_object* v_nss_2055_; 
lean_inc(v_id_2048_);
v_nss_2055_ = l_Lean_ResolveName_resolveNamespace(v_____do__lift_2046_, v_____do__lift_2047_, v_____do__lift_2054_, v_id_2048_);
if (v_allowEmpty_2049_ == 0)
{
uint8_t v___x_2056_; 
v___x_2056_ = l_List_isEmpty___redArg(v_nss_2055_);
if (v___x_2056_ == 0)
{
lean_object* v___x_2057_; 
lean_dec(v_toBind_2053_);
lean_dec_ref(v_inst_2052_);
lean_dec_ref(v_inst_2051_);
lean_dec(v_id_2048_);
v___x_2057_ = lean_apply_2(v_toPure_2050_, lean_box(0), v_nss_2055_);
return v___x_2057_;
}
else
{
lean_object* v___f_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___f_2058_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2058_, 0, v_toPure_2050_);
lean_closure_set(v___f_2058_, 1, v_nss_2055_);
v___x_2059_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0));
v___x_2060_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_id_2048_, v___x_2056_);
v___x_2061_ = lean_string_append(v___x_2059_, v___x_2060_);
lean_dec_ref(v___x_2060_);
v___x_2062_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2063_ = lean_string_append(v___x_2061_, v___x_2062_);
v___x_2064_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2063_);
v___x_2065_ = l_Lean_MessageData_ofFormat(v___x_2064_);
v___x_2066_ = l_Lean_throwError___redArg(v_inst_2051_, v_inst_2052_, v___x_2065_);
v___x_2067_ = lean_apply_4(v_toBind_2053_, lean_box(0), lean_box(0), v___x_2066_, v___f_2058_);
return v___x_2067_;
}
}
else
{
lean_object* v___x_2068_; 
lean_dec(v_toBind_2053_);
lean_dec_ref(v_inst_2052_);
lean_dec_ref(v_inst_2051_);
lean_dec(v_id_2048_);
v___x_2068_ = lean_apply_2(v_toPure_2050_, lean_box(0), v_nss_2055_);
return v___x_2068_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___boxed(lean_object* v_____do__lift_2069_, lean_object* v_____do__lift_2070_, lean_object* v_id_2071_, lean_object* v_allowEmpty_2072_, lean_object* v_toPure_2073_, lean_object* v_inst_2074_, lean_object* v_inst_2075_, lean_object* v_toBind_2076_, lean_object* v_____do__lift_2077_){
_start:
{
uint8_t v_allowEmpty_boxed_2078_; lean_object* v_res_2079_; 
v_allowEmpty_boxed_2078_ = lean_unbox(v_allowEmpty_2072_);
v_res_2079_ = l_Lean_resolveNamespaceCore___redArg___lam__1(v_____do__lift_2069_, v_____do__lift_2070_, v_id_2071_, v_allowEmpty_boxed_2078_, v_toPure_2073_, v_inst_2074_, v_inst_2075_, v_toBind_2076_, v_____do__lift_2077_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2(lean_object* v_____do__lift_2080_, lean_object* v_id_2081_, uint8_t v_allowEmpty_2082_, lean_object* v_toPure_2083_, lean_object* v_inst_2084_, lean_object* v_inst_2085_, lean_object* v_toBind_2086_, lean_object* v_getOpenDecls_2087_, lean_object* v_____do__lift_2088_){
_start:
{
lean_object* v___x_2089_; lean_object* v___f_2090_; lean_object* v___x_2091_; 
v___x_2089_ = lean_box(v_allowEmpty_2082_);
lean_inc(v_toBind_2086_);
v___f_2090_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_2090_, 0, v_____do__lift_2080_);
lean_closure_set(v___f_2090_, 1, v_____do__lift_2088_);
lean_closure_set(v___f_2090_, 2, v_id_2081_);
lean_closure_set(v___f_2090_, 3, v___x_2089_);
lean_closure_set(v___f_2090_, 4, v_toPure_2083_);
lean_closure_set(v___f_2090_, 5, v_inst_2084_);
lean_closure_set(v___f_2090_, 6, v_inst_2085_);
lean_closure_set(v___f_2090_, 7, v_toBind_2086_);
v___x_2091_ = lean_apply_4(v_toBind_2086_, lean_box(0), lean_box(0), v_getOpenDecls_2087_, v___f_2090_);
return v___x_2091_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2___boxed(lean_object* v_____do__lift_2092_, lean_object* v_id_2093_, lean_object* v_allowEmpty_2094_, lean_object* v_toPure_2095_, lean_object* v_inst_2096_, lean_object* v_inst_2097_, lean_object* v_toBind_2098_, lean_object* v_getOpenDecls_2099_, lean_object* v_____do__lift_2100_){
_start:
{
uint8_t v_allowEmpty_boxed_2101_; lean_object* v_res_2102_; 
v_allowEmpty_boxed_2101_ = lean_unbox(v_allowEmpty_2094_);
v_res_2102_ = l_Lean_resolveNamespaceCore___redArg___lam__2(v_____do__lift_2092_, v_id_2093_, v_allowEmpty_boxed_2101_, v_toPure_2095_, v_inst_2096_, v_inst_2097_, v_toBind_2098_, v_getOpenDecls_2099_, v_____do__lift_2100_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3(lean_object* v_inst_2103_, lean_object* v_id_2104_, uint8_t v_allowEmpty_2105_, lean_object* v_toPure_2106_, lean_object* v_inst_2107_, lean_object* v_inst_2108_, lean_object* v_toBind_2109_, lean_object* v_____do__lift_2110_){
_start:
{
lean_object* v_getCurrNamespace_2111_; lean_object* v_getOpenDecls_2112_; lean_object* v___x_2113_; lean_object* v___f_2114_; lean_object* v___x_2115_; 
v_getCurrNamespace_2111_ = lean_ctor_get(v_inst_2103_, 0);
lean_inc(v_getCurrNamespace_2111_);
v_getOpenDecls_2112_ = lean_ctor_get(v_inst_2103_, 1);
lean_inc(v_getOpenDecls_2112_);
lean_dec_ref(v_inst_2103_);
v___x_2113_ = lean_box(v_allowEmpty_2105_);
lean_inc(v_toBind_2109_);
v___f_2114_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2114_, 0, v_____do__lift_2110_);
lean_closure_set(v___f_2114_, 1, v_id_2104_);
lean_closure_set(v___f_2114_, 2, v___x_2113_);
lean_closure_set(v___f_2114_, 3, v_toPure_2106_);
lean_closure_set(v___f_2114_, 4, v_inst_2107_);
lean_closure_set(v___f_2114_, 5, v_inst_2108_);
lean_closure_set(v___f_2114_, 6, v_toBind_2109_);
lean_closure_set(v___f_2114_, 7, v_getOpenDecls_2112_);
v___x_2115_ = lean_apply_4(v_toBind_2109_, lean_box(0), lean_box(0), v_getCurrNamespace_2111_, v___f_2114_);
return v___x_2115_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3___boxed(lean_object* v_inst_2116_, lean_object* v_id_2117_, lean_object* v_allowEmpty_2118_, lean_object* v_toPure_2119_, lean_object* v_inst_2120_, lean_object* v_inst_2121_, lean_object* v_toBind_2122_, lean_object* v_____do__lift_2123_){
_start:
{
uint8_t v_allowEmpty_boxed_2124_; lean_object* v_res_2125_; 
v_allowEmpty_boxed_2124_ = lean_unbox(v_allowEmpty_2118_);
v_res_2125_ = l_Lean_resolveNamespaceCore___redArg___lam__3(v_inst_2116_, v_id_2117_, v_allowEmpty_boxed_2124_, v_toPure_2119_, v_inst_2120_, v_inst_2121_, v_toBind_2122_, v_____do__lift_2123_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg(lean_object* v_inst_2126_, lean_object* v_inst_2127_, lean_object* v_inst_2128_, lean_object* v_inst_2129_, lean_object* v_id_2130_, uint8_t v_allowEmpty_2131_){
_start:
{
lean_object* v_toApplicative_2132_; lean_object* v_toBind_2133_; lean_object* v_getEnv_2134_; lean_object* v_toPure_2135_; lean_object* v___x_2136_; lean_object* v___f_2137_; lean_object* v___x_2138_; 
v_toApplicative_2132_ = lean_ctor_get(v_inst_2126_, 0);
v_toBind_2133_ = lean_ctor_get(v_inst_2126_, 1);
lean_inc_n(v_toBind_2133_, 2);
v_getEnv_2134_ = lean_ctor_get(v_inst_2128_, 0);
lean_inc(v_getEnv_2134_);
lean_dec_ref(v_inst_2128_);
v_toPure_2135_ = lean_ctor_get(v_toApplicative_2132_, 1);
lean_inc(v_toPure_2135_);
v___x_2136_ = lean_box(v_allowEmpty_2131_);
v___f_2137_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_2137_, 0, v_inst_2127_);
lean_closure_set(v___f_2137_, 1, v_id_2130_);
lean_closure_set(v___f_2137_, 2, v___x_2136_);
lean_closure_set(v___f_2137_, 3, v_toPure_2135_);
lean_closure_set(v___f_2137_, 4, v_inst_2126_);
lean_closure_set(v___f_2137_, 5, v_inst_2129_);
lean_closure_set(v___f_2137_, 6, v_toBind_2133_);
v___x_2138_ = lean_apply_4(v_toBind_2133_, lean_box(0), lean_box(0), v_getEnv_2134_, v___f_2137_);
return v___x_2138_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___boxed(lean_object* v_inst_2139_, lean_object* v_inst_2140_, lean_object* v_inst_2141_, lean_object* v_inst_2142_, lean_object* v_id_2143_, lean_object* v_allowEmpty_2144_){
_start:
{
uint8_t v_allowEmpty_boxed_2145_; lean_object* v_res_2146_; 
v_allowEmpty_boxed_2145_ = lean_unbox(v_allowEmpty_2144_);
v_res_2146_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2139_, v_inst_2140_, v_inst_2141_, v_inst_2142_, v_id_2143_, v_allowEmpty_boxed_2145_);
return v_res_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore(lean_object* v_m_2147_, lean_object* v_inst_2148_, lean_object* v_inst_2149_, lean_object* v_inst_2150_, lean_object* v_inst_2151_, lean_object* v_id_2152_, uint8_t v_allowEmpty_2153_){
_start:
{
lean_object* v___x_2154_; 
v___x_2154_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2148_, v_inst_2149_, v_inst_2150_, v_inst_2151_, v_id_2152_, v_allowEmpty_2153_);
return v___x_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___boxed(lean_object* v_m_2155_, lean_object* v_inst_2156_, lean_object* v_inst_2157_, lean_object* v_inst_2158_, lean_object* v_inst_2159_, lean_object* v_id_2160_, lean_object* v_allowEmpty_2161_){
_start:
{
uint8_t v_allowEmpty_boxed_2162_; lean_object* v_res_2163_; 
v_allowEmpty_boxed_2162_ = lean_unbox(v_allowEmpty_2161_);
v_res_2163_ = l_Lean_resolveNamespaceCore(v_m_2155_, v_inst_2156_, v_inst_2157_, v_inst_2158_, v_inst_2159_, v_id_2160_, v_allowEmpty_boxed_2162_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__0(lean_object* v_x_2164_){
_start:
{
if (lean_obj_tag(v_x_2164_) == 0)
{
lean_object* v_ns_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
v_ns_2165_ = lean_ctor_get(v_x_2164_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v_x_2164_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v_x_2164_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_ns_2165_);
lean_dec(v_x_2164_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
lean_ctor_set_tag(v___x_2167_, 1);
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_ns_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
else
{
lean_object* v___x_2173_; 
lean_dec_ref(v_x_2164_);
v___x_2173_ = lean_box(0);
return v___x_2173_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1(lean_object* v_x_2174_, lean_object* v_withRef_2175_, lean_object* v___x_2176_, lean_object* v_oldRef_2177_){
_start:
{
lean_object* v_ref_2178_; lean_object* v___x_2179_; 
v_ref_2178_ = l_Lean_replaceRef(v_x_2174_, v_oldRef_2177_);
v___x_2179_ = lean_apply_3(v_withRef_2175_, lean_box(0), v_ref_2178_, v___x_2176_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1___boxed(lean_object* v_x_2180_, lean_object* v_withRef_2181_, lean_object* v___x_2182_, lean_object* v_oldRef_2183_){
_start:
{
lean_object* v_res_2184_; 
v_res_2184_ = l_Lean_resolveNamespace___redArg___lam__1(v_x_2180_, v_withRef_2181_, v___x_2182_, v_oldRef_2183_);
lean_dec(v_oldRef_2183_);
lean_dec(v_x_2180_);
return v_res_2184_;
}
}
static lean_object* _init_l_Lean_resolveNamespace___redArg___closed__4(void){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2191_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__3));
v___x_2192_ = l_Lean_MessageData_ofFormat(v___x_2191_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg(lean_object* v_inst_2193_, lean_object* v_inst_2194_, lean_object* v_inst_2195_, lean_object* v_inst_2196_, lean_object* v_x_2197_){
_start:
{
if (lean_obj_tag(v_x_2197_) == 3)
{
lean_object* v_toApplicative_2198_; lean_object* v_toMonadRef_2199_; lean_object* v_toBind_2200_; lean_object* v_toPure_2201_; lean_object* v_val_2202_; lean_object* v_preresolved_2203_; lean_object* v___f_2204_; lean_object* v___x_2205_; lean_object* v_pre_2206_; uint8_t v___x_2207_; 
v_toApplicative_2198_ = lean_ctor_get(v_inst_2193_, 0);
v_toMonadRef_2199_ = lean_ctor_get(v_inst_2196_, 1);
v_toBind_2200_ = lean_ctor_get(v_inst_2193_, 1);
lean_inc(v_toBind_2200_);
v_toPure_2201_ = lean_ctor_get(v_toApplicative_2198_, 1);
v_val_2202_ = lean_ctor_get(v_x_2197_, 2);
v_preresolved_2203_ = lean_ctor_get(v_x_2197_, 3);
v___f_2204_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__0));
v___x_2205_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2203_);
v_pre_2206_ = l_List_filterMapTR_go___redArg(v___f_2204_, v_preresolved_2203_, v___x_2205_);
v___x_2207_ = l_List_isEmpty___redArg(v_pre_2206_);
if (v___x_2207_ == 0)
{
lean_object* v___x_2208_; 
lean_inc(v_toPure_2201_);
lean_dec(v_toBind_2200_);
lean_dec_ref_known(v_x_2197_, 4);
lean_dec_ref(v_inst_2196_);
lean_dec_ref(v_inst_2195_);
lean_dec_ref(v_inst_2194_);
lean_dec_ref(v_inst_2193_);
v___x_2208_ = lean_apply_2(v_toPure_2201_, lean_box(0), v_pre_2206_);
return v___x_2208_;
}
else
{
lean_object* v_getRef_2209_; lean_object* v_withRef_2210_; uint8_t v___x_2211_; lean_object* v___x_2212_; lean_object* v___f_2213_; lean_object* v___x_2214_; 
lean_dec(v_pre_2206_);
v_getRef_2209_ = lean_ctor_get(v_toMonadRef_2199_, 0);
lean_inc(v_getRef_2209_);
v_withRef_2210_ = lean_ctor_get(v_toMonadRef_2199_, 1);
lean_inc(v_withRef_2210_);
v___x_2211_ = 0;
lean_inc(v_val_2202_);
v___x_2212_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2193_, v_inst_2194_, v_inst_2195_, v_inst_2196_, v_val_2202_, v___x_2211_);
v___f_2213_ = lean_alloc_closure((void*)(l_Lean_resolveNamespace___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2213_, 0, v_x_2197_);
lean_closure_set(v___f_2213_, 1, v_withRef_2210_);
lean_closure_set(v___f_2213_, 2, v___x_2212_);
v___x_2214_ = lean_apply_4(v_toBind_2200_, lean_box(0), lean_box(0), v_getRef_2209_, v___f_2213_);
return v___x_2214_;
}
}
else
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
lean_dec_ref(v_inst_2195_);
lean_dec_ref(v_inst_2194_);
v___x_2215_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2216_ = l_Lean_throwErrorAt___redArg(v_inst_2193_, v_inst_2196_, v_x_2197_, v___x_2215_);
return v___x_2216_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace(lean_object* v_m_2217_, lean_object* v_inst_2218_, lean_object* v_inst_2219_, lean_object* v_inst_2220_, lean_object* v_inst_2221_, lean_object* v_x_2222_){
_start:
{
lean_object* v___x_2223_; 
v___x_2223_ = l_Lean_resolveNamespace___redArg(v_inst_2218_, v_inst_2219_, v_inst_2220_, v_inst_2221_, v_x_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0(lean_object* v_id_2226_, lean_object* v___f_2227_, lean_object* v_inst_2228_, lean_object* v_inst_2229_, lean_object* v_toPure_2230_, lean_object* v_____do__lift_2231_){
_start:
{
if (lean_obj_tag(v_____do__lift_2231_) == 1)
{
lean_object* v_tail_2247_; 
v_tail_2247_ = lean_ctor_get(v_____do__lift_2231_, 1);
if (lean_obj_tag(v_tail_2247_) == 0)
{
lean_object* v_head_2248_; lean_object* v___x_2249_; 
lean_dec_ref(v_inst_2229_);
lean_dec_ref(v_inst_2228_);
lean_dec_ref(v___f_2227_);
v_head_2248_ = lean_ctor_get(v_____do__lift_2231_, 0);
lean_inc(v_head_2248_);
lean_dec_ref_known(v_____do__lift_2231_, 2);
v___x_2249_ = lean_apply_2(v_toPure_2230_, lean_box(0), v_head_2248_);
return v___x_2249_;
}
else
{
lean_dec(v_toPure_2230_);
goto v___jp_2232_;
}
}
else
{
lean_dec(v_toPure_2230_);
goto v___jp_2232_;
}
v___jp_2232_:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; uint8_t v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2233_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0));
v___x_2234_ = l_Lean_TSyntax_getId(v_id_2226_);
v___x_2235_ = 1;
v___x_2236_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2234_, v___x_2235_);
v___x_2237_ = lean_string_append(v___x_2233_, v___x_2236_);
lean_dec_ref(v___x_2236_);
v___x_2238_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1));
v___x_2239_ = lean_string_append(v___x_2237_, v___x_2238_);
v___x_2240_ = l_List_toString___redArg(v___f_2227_, v_____do__lift_2231_);
v___x_2241_ = lean_string_append(v___x_2239_, v___x_2240_);
lean_dec_ref(v___x_2240_);
v___x_2242_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2243_ = lean_string_append(v___x_2241_, v___x_2242_);
v___x_2244_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
v___x_2245_ = l_Lean_MessageData_ofFormat(v___x_2244_);
v___x_2246_ = l_Lean_throwError___redArg(v_inst_2228_, v_inst_2229_, v___x_2245_);
return v___x_2246_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed(lean_object* v_id_2250_, lean_object* v___f_2251_, lean_object* v_inst_2252_, lean_object* v_inst_2253_, lean_object* v_toPure_2254_, lean_object* v_____do__lift_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Lean_resolveUniqueNamespace___redArg___lam__0(v_id_2250_, v___f_2251_, v_inst_2252_, v_inst_2253_, v_toPure_2254_, v_____do__lift_2255_);
lean_dec(v_id_2250_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg(lean_object* v_inst_2258_, lean_object* v_inst_2259_, lean_object* v_inst_2260_, lean_object* v_inst_2261_, lean_object* v_id_2262_){
_start:
{
lean_object* v_toApplicative_2263_; lean_object* v_toBind_2264_; lean_object* v_toPure_2265_; lean_object* v___f_2266_; lean_object* v___x_2267_; lean_object* v___f_2268_; lean_object* v___x_2269_; 
v_toApplicative_2263_ = lean_ctor_get(v_inst_2258_, 0);
v_toBind_2264_ = lean_ctor_get(v_inst_2258_, 1);
lean_inc(v_toBind_2264_);
v_toPure_2265_ = lean_ctor_get(v_toApplicative_2263_, 1);
lean_inc(v_toPure_2265_);
v___f_2266_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___closed__0));
lean_inc(v_id_2262_);
lean_inc_ref(v_inst_2261_);
lean_inc_ref(v_inst_2258_);
v___x_2267_ = l_Lean_resolveNamespace___redArg(v_inst_2258_, v_inst_2259_, v_inst_2260_, v_inst_2261_, v_id_2262_);
v___f_2268_ = lean_alloc_closure((void*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2268_, 0, v_id_2262_);
lean_closure_set(v___f_2268_, 1, v___f_2266_);
lean_closure_set(v___f_2268_, 2, v_inst_2258_);
lean_closure_set(v___f_2268_, 3, v_inst_2261_);
lean_closure_set(v___f_2268_, 4, v_toPure_2265_);
v___x_2269_ = lean_apply_4(v_toBind_2264_, lean_box(0), lean_box(0), v___x_2267_, v___f_2268_);
return v___x_2269_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace(lean_object* v_m_2270_, lean_object* v_inst_2271_, lean_object* v_inst_2272_, lean_object* v_inst_2273_, lean_object* v_inst_2274_, lean_object* v_id_2275_){
_start:
{
lean_object* v___x_2276_; 
v___x_2276_ = l_Lean_resolveUniqueNamespace___redArg(v_inst_2271_, v_inst_2272_, v_inst_2273_, v_inst_2274_, v_id_2275_);
return v___x_2276_;
}
}
LEAN_EXPORT uint8_t l_Lean_filterFieldList___redArg___lam__0(lean_object* v_x_2277_){
_start:
{
lean_object* v_snd_2278_; uint8_t v___x_2279_; 
v_snd_2278_ = lean_ctor_get(v_x_2277_, 1);
v___x_2279_ = l_List_isEmpty___redArg(v_snd_2278_);
return v___x_2279_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__0___boxed(lean_object* v_x_2280_){
_start:
{
uint8_t v_res_2281_; lean_object* v_r_2282_; 
v_res_2281_ = l_Lean_filterFieldList___redArg___lam__0(v_x_2280_);
lean_dec_ref(v_x_2280_);
v_r_2282_ = lean_box(v_res_2281_);
return v_r_2282_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1(lean_object* v_x_2283_){
_start:
{
lean_object* v_fst_2284_; 
v_fst_2284_ = lean_ctor_get(v_x_2283_, 0);
lean_inc(v_fst_2284_);
return v_fst_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1___boxed(lean_object* v_x_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l_Lean_filterFieldList___redArg___lam__1(v_x_2285_);
lean_dec_ref(v_x_2285_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__2(lean_object* v___f_2287_, lean_object* v_cs_2288_, lean_object* v_toPure_2289_, lean_object* v_____r_2290_){
_start:
{
lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2291_ = lean_box(0);
v___x_2292_ = l_List_mapTR_loop___redArg(v___f_2287_, v_cs_2288_, v___x_2291_);
v___x_2293_ = lean_apply_2(v_toPure_2289_, lean_box(0), v___x_2292_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__3(lean_object* v___f_2294_, lean_object* v_____r_2295_){
_start:
{
lean_object* v___x_2296_; 
v___x_2296_ = lean_apply_1(v___f_2294_, v_____r_2295_);
return v___x_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__4(lean_object* v_inst_2297_, lean_object* v_inst_2298_, lean_object* v_inst_2299_, lean_object* v_n_2300_, lean_object* v_toBind_2301_, lean_object* v___f_2302_, lean_object* v_____do__lift_2303_){
_start:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2304_ = l_Lean_throwUnknownConstantAt___redArg(v_inst_2297_, v_inst_2298_, v_inst_2299_, v_____do__lift_2303_, v_n_2300_);
v___x_2305_ = lean_apply_4(v_toBind_2301_, lean_box(0), lean_box(0), v___x_2304_, v___f_2302_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg(lean_object* v_inst_2308_, lean_object* v_inst_2309_, lean_object* v_inst_2310_, lean_object* v_n_2311_, lean_object* v_cs_2312_){
_start:
{
lean_object* v_toApplicative_2313_; lean_object* v_toBind_2314_; lean_object* v_toPure_2315_; lean_object* v_toMonadRef_2316_; lean_object* v___f_2317_; lean_object* v___f_2318_; lean_object* v___x_2319_; lean_object* v_cs_2320_; lean_object* v___f_2321_; uint8_t v___x_2322_; 
v_toApplicative_2313_ = lean_ctor_get(v_inst_2308_, 0);
v_toBind_2314_ = lean_ctor_get(v_inst_2308_, 1);
lean_inc(v_toBind_2314_);
v_toPure_2315_ = lean_ctor_get(v_toApplicative_2313_, 1);
v_toMonadRef_2316_ = lean_ctor_get(v_inst_2310_, 1);
v___f_2317_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__0));
v___f_2318_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__1));
v___x_2319_ = lean_box(0);
v_cs_2320_ = l_List_filterTR_loop___redArg(v___f_2317_, v_cs_2312_, v___x_2319_);
lean_inc(v_toPure_2315_);
lean_inc(v_cs_2320_);
v___f_2321_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2321_, 0, v___f_2318_);
lean_closure_set(v___f_2321_, 1, v_cs_2320_);
lean_closure_set(v___f_2321_, 2, v_toPure_2315_);
v___x_2322_ = l_List_isEmpty___redArg(v_cs_2320_);
if (v___x_2322_ == 0)
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
lean_inc(v_toPure_2315_);
lean_dec_ref(v___f_2321_);
lean_dec(v_toBind_2314_);
lean_dec(v_n_2311_);
lean_dec_ref(v_inst_2310_);
lean_dec_ref(v_inst_2309_);
lean_dec_ref(v_inst_2308_);
v___x_2323_ = lean_box(0);
v___x_2324_ = l_Lean_filterFieldList___redArg___lam__2(v___f_2318_, v_cs_2320_, v_toPure_2315_, v___x_2323_);
return v___x_2324_;
}
else
{
lean_object* v_getRef_2325_; lean_object* v___f_2326_; lean_object* v___f_2327_; lean_object* v___x_2328_; 
lean_dec(v_cs_2320_);
v_getRef_2325_ = lean_ctor_get(v_toMonadRef_2316_, 0);
lean_inc(v_getRef_2325_);
v___f_2326_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2326_, 0, v___f_2321_);
lean_inc(v_toBind_2314_);
v___f_2327_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__4), 7, 6);
lean_closure_set(v___f_2327_, 0, v_inst_2308_);
lean_closure_set(v___f_2327_, 1, v_inst_2309_);
lean_closure_set(v___f_2327_, 2, v_inst_2310_);
lean_closure_set(v___f_2327_, 3, v_n_2311_);
lean_closure_set(v___f_2327_, 4, v_toBind_2314_);
lean_closure_set(v___f_2327_, 5, v___f_2326_);
v___x_2328_ = lean_apply_4(v_toBind_2314_, lean_box(0), lean_box(0), v_getRef_2325_, v___f_2327_);
return v___x_2328_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList(lean_object* v_m_2329_, lean_object* v_inst_2330_, lean_object* v_inst_2331_, lean_object* v_inst_2332_, lean_object* v_n_2333_, lean_object* v_cs_2334_){
_start:
{
lean_object* v___x_2335_; 
v___x_2335_ = l_Lean_filterFieldList___redArg(v_inst_2330_, v_inst_2331_, v_inst_2332_, v_n_2333_, v_cs_2334_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0(lean_object* v_inst_2336_, lean_object* v_inst_2337_, lean_object* v_inst_2338_, lean_object* v_n_2339_, lean_object* v_cs_2340_){
_start:
{
lean_object* v___x_2341_; 
v___x_2341_ = l_Lean_filterFieldList___redArg(v_inst_2336_, v_inst_2337_, v_inst_2338_, v_n_2339_, v_cs_2340_);
return v___x_2341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(lean_object* v_inst_2342_, lean_object* v_inst_2343_, lean_object* v_inst_2344_, lean_object* v_inst_2345_, lean_object* v_inst_2346_, lean_object* v_inst_2347_, lean_object* v_inst_2348_, lean_object* v_n_2349_){
_start:
{
lean_object* v_toBind_2350_; lean_object* v___f_2351_; uint8_t v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v_toBind_2350_ = lean_ctor_get(v_inst_2342_, 1);
lean_inc(v_toBind_2350_);
lean_inc(v_n_2349_);
lean_inc_ref(v_inst_2344_);
lean_inc_ref(v_inst_2342_);
v___f_2351_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2351_, 0, v_inst_2342_);
lean_closure_set(v___f_2351_, 1, v_inst_2344_);
lean_closure_set(v___f_2351_, 2, v_inst_2348_);
lean_closure_set(v___f_2351_, 3, v_n_2349_);
v___x_2352_ = 1;
v___x_2353_ = l_Lean_resolveGlobalName___redArg(v_inst_2342_, v_inst_2343_, v_inst_2344_, v_inst_2345_, v_inst_2346_, v_inst_2347_, v_n_2349_, v___x_2352_);
v___x_2354_ = lean_apply_4(v_toBind_2350_, lean_box(0), lean_box(0), v___x_2353_, v___f_2351_);
return v___x_2354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore(lean_object* v_m_2355_, lean_object* v_inst_2356_, lean_object* v_inst_2357_, lean_object* v_inst_2358_, lean_object* v_inst_2359_, lean_object* v_inst_2360_, lean_object* v_inst_2361_, lean_object* v_inst_2362_, lean_object* v_n_2363_){
_start:
{
lean_object* v___x_2364_; 
v___x_2364_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2356_, v_inst_2357_, v_inst_2358_, v_inst_2359_, v_inst_2360_, v_inst_2361_, v_inst_2362_, v_n_2363_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg___lam__0(lean_object* v_declName_2365_){
_start:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; 
v___x_2366_ = lean_box(0);
v___x_2367_ = l_Lean_mkConst(v_declName_2365_, v___x_2366_);
return v___x_2367_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__2(void){
_start:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2370_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__1));
v___x_2371_ = l_Lean_stringToMessageData(v___x_2370_);
return v___x_2371_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__4(void){
_start:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2373_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__3));
v___x_2374_ = l_Lean_stringToMessageData(v___x_2373_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg(lean_object* v_inst_2376_, lean_object* v_inst_2377_, lean_object* v_n_2378_, lean_object* v_cs_2379_){
_start:
{
lean_object* v_toApplicative_2380_; lean_object* v_toPure_2381_; lean_object* v___f_2382_; 
v_toApplicative_2380_ = lean_ctor_get(v_inst_2376_, 0);
v_toPure_2381_ = lean_ctor_get(v_toApplicative_2380_, 1);
v___f_2382_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
if (lean_obj_tag(v_cs_2379_) == 1)
{
lean_object* v_tail_2396_; 
v_tail_2396_ = lean_ctor_get(v_cs_2379_, 1);
if (lean_obj_tag(v_tail_2396_) == 0)
{
lean_object* v_head_2397_; lean_object* v___x_2398_; 
lean_inc(v_toPure_2381_);
lean_dec(v_n_2378_);
lean_dec_ref(v_inst_2377_);
lean_dec_ref(v_inst_2376_);
v_head_2397_ = lean_ctor_get(v_cs_2379_, 0);
lean_inc(v_head_2397_);
lean_dec_ref_known(v_cs_2379_, 2);
v___x_2398_ = lean_apply_2(v_toPure_2381_, lean_box(0), v_head_2397_);
return v___x_2398_;
}
else
{
goto v___jp_2383_;
}
}
else
{
goto v___jp_2383_;
}
v___jp_2383_:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2384_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__2, &l_Lean_ensureNoOverload___redArg___closed__2_once, _init_l_Lean_ensureNoOverload___redArg___closed__2);
v___x_2385_ = l_Lean_MessageData_ofName(v_n_2378_);
v___x_2386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2384_);
lean_ctor_set(v___x_2386_, 1, v___x_2385_);
v___x_2387_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__4, &l_Lean_ensureNoOverload___redArg___closed__4_once, _init_l_Lean_ensureNoOverload___redArg___closed__4);
v___x_2388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2388_, 0, v___x_2386_);
lean_ctor_set(v___x_2388_, 1, v___x_2387_);
v___x_2389_ = lean_box(0);
v___x_2390_ = l_List_mapTR_loop___redArg(v___f_2382_, v_cs_2379_, v___x_2389_);
v___x_2391_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__5));
v___x_2392_ = l_List_mapTR_loop___redArg(v___x_2391_, v___x_2390_, v___x_2389_);
v___x_2393_ = l_Lean_MessageData_ofList(v___x_2392_);
v___x_2394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2388_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
v___x_2395_ = l_Lean_throwError___redArg(v_inst_2376_, v_inst_2377_, v___x_2394_);
return v___x_2395_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload(lean_object* v_m_2399_, lean_object* v_inst_2400_, lean_object* v_inst_2401_, lean_object* v_n_2402_, lean_object* v_cs_2403_){
_start:
{
lean_object* v___x_2404_; 
v___x_2404_ = l_Lean_ensureNoOverload___redArg(v_inst_2400_, v_inst_2401_, v_n_2402_, v_cs_2403_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0(lean_object* v_inst_2405_, lean_object* v_inst_2406_, lean_object* v_n_2407_, lean_object* v_____do__lift_2408_){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = l_Lean_ensureNoOverload___redArg(v_inst_2405_, v_inst_2406_, v_n_2407_, v_____do__lift_2408_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg(lean_object* v_inst_2410_, lean_object* v_inst_2411_, lean_object* v_inst_2412_, lean_object* v_inst_2413_, lean_object* v_inst_2414_, lean_object* v_inst_2415_, lean_object* v_inst_2416_, lean_object* v_n_2417_){
_start:
{
lean_object* v_toBind_2418_; lean_object* v___f_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v_toBind_2418_ = lean_ctor_get(v_inst_2410_, 1);
lean_inc(v_toBind_2418_);
lean_inc(v_n_2417_);
lean_inc_ref(v_inst_2416_);
lean_inc_ref(v_inst_2410_);
v___f_2419_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2419_, 0, v_inst_2410_);
lean_closure_set(v___f_2419_, 1, v_inst_2416_);
lean_closure_set(v___f_2419_, 2, v_n_2417_);
v___x_2420_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2410_, v_inst_2411_, v_inst_2412_, v_inst_2413_, v_inst_2414_, v_inst_2415_, v_inst_2416_, v_n_2417_);
v___x_2421_ = lean_apply_4(v_toBind_2418_, lean_box(0), lean_box(0), v___x_2420_, v___f_2419_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore(lean_object* v_m_2422_, lean_object* v_inst_2423_, lean_object* v_inst_2424_, lean_object* v_inst_2425_, lean_object* v_inst_2426_, lean_object* v_inst_2427_, lean_object* v_inst_2428_, lean_object* v_inst_2429_, lean_object* v_n_2430_){
_start:
{
lean_object* v___x_2431_; 
v___x_2431_ = l_Lean_resolveGlobalConstNoOverloadCore___redArg(v_inst_2423_, v_inst_2424_, v_inst_2425_, v_inst_2426_, v_inst_2427_, v_inst_2428_, v_inst_2429_, v_n_2430_);
return v___x_2431_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(lean_object* v_x_2432_){
_start:
{
if (lean_obj_tag(v_x_2432_) == 1)
{
lean_object* v_fields_2433_; 
v_fields_2433_ = lean_ctor_get(v_x_2432_, 1);
if (lean_obj_tag(v_fields_2433_) == 0)
{
lean_object* v_n_2434_; lean_object* v___x_2435_; 
v_n_2434_ = lean_ctor_get(v_x_2432_, 0);
lean_inc(v_n_2434_);
v___x_2435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2435_, 0, v_n_2434_);
return v___x_2435_;
}
else
{
lean_object* v___x_2436_; 
v___x_2436_ = lean_box(0);
return v___x_2436_;
}
}
else
{
lean_object* v___x_2437_; 
v___x_2437_ = lean_box(0);
return v___x_2437_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed(lean_object* v_x_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(v_x_2438_);
lean_dec_ref(v_x_2438_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(lean_object* v_stx_2440_, lean_object* v_withRef_2441_, lean_object* v___x_2442_, lean_object* v_oldRef_2443_){
_start:
{
lean_object* v_ref_2444_; lean_object* v___x_2445_; 
v_ref_2444_ = l_Lean_replaceRef(v_stx_2440_, v_oldRef_2443_);
v___x_2445_ = lean_apply_3(v_withRef_2441_, lean_box(0), v_ref_2444_, v___x_2442_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed(lean_object* v_stx_2446_, lean_object* v_withRef_2447_, lean_object* v___x_2448_, lean_object* v_oldRef_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(v_stx_2446_, v_withRef_2447_, v___x_2448_, v_oldRef_2449_);
lean_dec(v_oldRef_2449_);
lean_dec(v_stx_2446_);
return v_res_2450_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg(lean_object* v_inst_2452_, lean_object* v_inst_2453_, lean_object* v_stx_2454_, lean_object* v_k_2455_){
_start:
{
if (lean_obj_tag(v_stx_2454_) == 3)
{
lean_object* v_toApplicative_2456_; lean_object* v_toMonadRef_2457_; lean_object* v_toBind_2458_; lean_object* v_toPure_2459_; lean_object* v_val_2460_; lean_object* v_preresolved_2461_; lean_object* v___f_2462_; lean_object* v___x_2463_; lean_object* v_pre_2464_; uint8_t v___x_2465_; 
v_toApplicative_2456_ = lean_ctor_get(v_inst_2452_, 0);
lean_inc_ref(v_toApplicative_2456_);
v_toMonadRef_2457_ = lean_ctor_get(v_inst_2453_, 1);
lean_inc_ref(v_toMonadRef_2457_);
lean_dec_ref(v_inst_2453_);
v_toBind_2458_ = lean_ctor_get(v_inst_2452_, 1);
lean_inc(v_toBind_2458_);
lean_dec_ref(v_inst_2452_);
v_toPure_2459_ = lean_ctor_get(v_toApplicative_2456_, 1);
lean_inc(v_toPure_2459_);
lean_dec_ref(v_toApplicative_2456_);
v_val_2460_ = lean_ctor_get(v_stx_2454_, 2);
v_preresolved_2461_ = lean_ctor_get(v_stx_2454_, 3);
v___f_2462_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___redArg___closed__0));
v___x_2463_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2461_);
v_pre_2464_ = l_List_filterMapTR_go___redArg(v___f_2462_, v_preresolved_2461_, v___x_2463_);
v___x_2465_ = l_List_isEmpty___redArg(v_pre_2464_);
if (v___x_2465_ == 0)
{
lean_object* v___x_2466_; 
lean_dec(v_toBind_2458_);
lean_dec_ref(v_toMonadRef_2457_);
lean_dec_ref_known(v_stx_2454_, 4);
lean_dec(v_k_2455_);
v___x_2466_ = lean_apply_2(v_toPure_2459_, lean_box(0), v_pre_2464_);
return v___x_2466_;
}
else
{
lean_object* v_getRef_2467_; lean_object* v_withRef_2468_; lean_object* v___x_2469_; lean_object* v___f_2470_; lean_object* v___x_2471_; 
lean_dec(v_pre_2464_);
lean_dec(v_toPure_2459_);
v_getRef_2467_ = lean_ctor_get(v_toMonadRef_2457_, 0);
lean_inc(v_getRef_2467_);
v_withRef_2468_ = lean_ctor_get(v_toMonadRef_2457_, 1);
lean_inc(v_withRef_2468_);
lean_dec_ref(v_toMonadRef_2457_);
lean_inc(v_val_2460_);
v___x_2469_ = lean_apply_1(v_k_2455_, v_val_2460_);
v___f_2470_ = lean_alloc_closure((void*)(l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2470_, 0, v_stx_2454_);
lean_closure_set(v___f_2470_, 1, v_withRef_2468_);
lean_closure_set(v___f_2470_, 2, v___x_2469_);
v___x_2471_ = lean_apply_4(v_toBind_2458_, lean_box(0), lean_box(0), v_getRef_2467_, v___f_2470_);
return v___x_2471_;
}
}
else
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
lean_dec(v_k_2455_);
v___x_2472_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2473_ = l_Lean_throwErrorAt___redArg(v_inst_2452_, v_inst_2453_, v_stx_2454_, v___x_2472_);
return v___x_2473_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve(lean_object* v_m_2474_, lean_object* v_inst_2475_, lean_object* v_inst_2476_, lean_object* v_stx_2477_, lean_object* v_k_2478_){
_start:
{
lean_object* v___x_2479_; 
v___x_2479_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2475_, v_inst_2476_, v_stx_2477_, v_k_2478_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___redArg(lean_object* v_inst_2480_, lean_object* v_inst_2481_, lean_object* v_inst_2482_, lean_object* v_inst_2483_, lean_object* v_inst_2484_, lean_object* v_inst_2485_, lean_object* v_inst_2486_, lean_object* v_stx_2487_){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; 
lean_inc_ref(v_inst_2486_);
lean_inc_ref(v_inst_2480_);
v___x_2488_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore), 9, 8);
lean_closure_set(v___x_2488_, 0, lean_box(0));
lean_closure_set(v___x_2488_, 1, v_inst_2480_);
lean_closure_set(v___x_2488_, 2, v_inst_2481_);
lean_closure_set(v___x_2488_, 3, v_inst_2482_);
lean_closure_set(v___x_2488_, 4, v_inst_2483_);
lean_closure_set(v___x_2488_, 5, v_inst_2484_);
lean_closure_set(v___x_2488_, 6, v_inst_2485_);
lean_closure_set(v___x_2488_, 7, v_inst_2486_);
v___x_2489_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2480_, v_inst_2486_, v_stx_2487_, v___x_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst(lean_object* v_m_2490_, lean_object* v_inst_2491_, lean_object* v_inst_2492_, lean_object* v_inst_2493_, lean_object* v_inst_2494_, lean_object* v_inst_2495_, lean_object* v_inst_2496_, lean_object* v_inst_2497_, lean_object* v_stx_2498_){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = l_Lean_resolveGlobalConst___redArg(v_inst_2491_, v_inst_2492_, v_inst_2493_, v_inst_2494_, v_inst_2495_, v_inst_2496_, v_inst_2497_, v_stx_2498_);
return v___x_2499_;
}
}
static lean_object* _init_l_Lean_ensureNonAmbiguous___redArg___closed__1(void){
_start:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2501_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_2502_ = lean_unsigned_to_nat(11u);
v___x_2503_ = lean_unsigned_to_nat(429u);
v___x_2504_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__0));
v___x_2505_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_2506_ = l_mkPanicMessageWithDecl(v___x_2505_, v___x_2504_, v___x_2503_, v___x_2502_, v___x_2501_);
return v___x_2506_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___redArg(lean_object* v_inst_2510_, lean_object* v_inst_2511_, lean_object* v_id_2512_, lean_object* v_cs_2513_){
_start:
{
if (lean_obj_tag(v_cs_2513_) == 0)
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; 
lean_dec(v_id_2512_);
lean_dec_ref(v_inst_2511_);
v___x_2514_ = lean_box(0);
v___x_2515_ = l_instInhabitedOfMonad___redArg(v_inst_2510_, v___x_2514_);
v___x_2516_ = lean_obj_once(&l_Lean_ensureNonAmbiguous___redArg___closed__1, &l_Lean_ensureNonAmbiguous___redArg___closed__1_once, _init_l_Lean_ensureNonAmbiguous___redArg___closed__1);
v___x_2517_ = l_panic___redArg(v___x_2515_, v___x_2516_);
lean_dec(v___x_2515_);
return v___x_2517_;
}
else
{
lean_object* v_tail_2518_; 
v_tail_2518_ = lean_ctor_get(v_cs_2513_, 1);
if (lean_obj_tag(v_tail_2518_) == 0)
{
lean_object* v_toApplicative_2519_; lean_object* v_toPure_2520_; lean_object* v_head_2521_; lean_object* v___x_2522_; 
v_toApplicative_2519_ = lean_ctor_get(v_inst_2510_, 0);
lean_inc_ref(v_toApplicative_2519_);
lean_dec(v_id_2512_);
lean_dec_ref(v_inst_2511_);
lean_dec_ref(v_inst_2510_);
v_toPure_2520_ = lean_ctor_get(v_toApplicative_2519_, 1);
lean_inc(v_toPure_2520_);
lean_dec_ref(v_toApplicative_2519_);
v_head_2521_ = lean_ctor_get(v_cs_2513_, 0);
lean_inc(v_head_2521_);
lean_dec_ref_known(v_cs_2513_, 2);
v___x_2522_ = lean_apply_2(v_toPure_2520_, lean_box(0), v_head_2521_);
return v___x_2522_;
}
else
{
lean_object* v___f_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; uint8_t v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___f_2523_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
v___x_2524_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__2));
v___x_2525_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__3));
v___x_2526_ = lean_box(0);
v___x_2527_ = 0;
lean_inc(v_id_2512_);
v___x_2528_ = l_Lean_Syntax_formatStx(v_id_2512_, v___x_2526_, v___x_2527_);
v___x_2529_ = l_Std_Format_defWidth;
v___x_2530_ = lean_unsigned_to_nat(0u);
v___x_2531_ = l_Std_Format_pretty(v___x_2528_, v___x_2529_, v___x_2530_, v___x_2530_);
v___x_2532_ = lean_string_append(v___x_2525_, v___x_2531_);
lean_dec_ref(v___x_2531_);
v___x_2533_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__4));
v___x_2534_ = lean_string_append(v___x_2532_, v___x_2533_);
v___x_2535_ = lean_box(0);
v___x_2536_ = l_List_mapTR_loop___redArg(v___f_2523_, v_cs_2513_, v___x_2535_);
v___x_2537_ = l_List_toString___redArg(v___x_2524_, v___x_2536_);
v___x_2538_ = lean_string_append(v___x_2534_, v___x_2537_);
lean_dec_ref(v___x_2537_);
v___x_2539_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2538_);
v___x_2540_ = l_Lean_MessageData_ofFormat(v___x_2539_);
v___x_2541_ = l_Lean_throwErrorAt___redArg(v_inst_2510_, v_inst_2511_, v_id_2512_, v___x_2540_);
return v___x_2541_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous(lean_object* v_m_2542_, lean_object* v_inst_2543_, lean_object* v_inst_2544_, lean_object* v_id_2545_, lean_object* v_cs_2546_){
_start:
{
lean_object* v___x_2547_; 
v___x_2547_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2543_, v_inst_2544_, v_id_2545_, v_cs_2546_);
return v___x_2547_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg___lam__0(lean_object* v_inst_2548_, lean_object* v_inst_2549_, lean_object* v_id_2550_, lean_object* v_____do__lift_2551_){
_start:
{
lean_object* v___x_2552_; 
v___x_2552_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2548_, v_inst_2549_, v_id_2550_, v_____do__lift_2551_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg(lean_object* v_inst_2553_, lean_object* v_inst_2554_, lean_object* v_inst_2555_, lean_object* v_inst_2556_, lean_object* v_inst_2557_, lean_object* v_inst_2558_, lean_object* v_inst_2559_, lean_object* v_id_2560_){
_start:
{
lean_object* v_toBind_2561_; lean_object* v___f_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v_toBind_2561_ = lean_ctor_get(v_inst_2553_, 1);
lean_inc(v_toBind_2561_);
lean_inc(v_id_2560_);
lean_inc_ref(v_inst_2559_);
lean_inc_ref(v_inst_2553_);
v___f_2562_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverload___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2562_, 0, v_inst_2553_);
lean_closure_set(v___f_2562_, 1, v_inst_2559_);
lean_closure_set(v___f_2562_, 2, v_id_2560_);
v___x_2563_ = l_Lean_resolveGlobalConst___redArg(v_inst_2553_, v_inst_2554_, v_inst_2555_, v_inst_2556_, v_inst_2557_, v_inst_2558_, v_inst_2559_, v_id_2560_);
v___x_2564_ = lean_apply_4(v_toBind_2561_, lean_box(0), lean_box(0), v___x_2563_, v___f_2562_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload(lean_object* v_m_2565_, lean_object* v_inst_2566_, lean_object* v_inst_2567_, lean_object* v_inst_2568_, lean_object* v_inst_2569_, lean_object* v_inst_2570_, lean_object* v_inst_2571_, lean_object* v_inst_2572_, lean_object* v_id_2573_){
_start:
{
lean_object* v___x_2574_; 
v___x_2574_ = l_Lean_resolveGlobalConstNoOverload___redArg(v_inst_2566_, v_inst_2567_, v_inst_2568_, v_inst_2569_, v_inst_2570_, v_inst_2571_, v_inst_2572_, v_id_2573_);
return v___x_2574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(lean_object* v_fst_2575_, lean_object* v_snd_2576_, lean_object* v_toPure_2577_, lean_object* v_____r_2578_){
_start:
{
lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2579_ = l_Lean_LocalDecl_toExpr(v_fst_2575_);
v___x_2580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2579_);
lean_ctor_set(v___x_2580_, 1, v_snd_2576_);
v___x_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2580_);
v___x_2582_ = lean_apply_2(v_toPure_2577_, lean_box(0), v___x_2581_);
return v___x_2582_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(lean_object* v_snd_2583_, lean_object* v_x_2584_){
_start:
{
lean_object* v_snd_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; uint8_t v___x_2588_; 
v_snd_2585_ = lean_ctor_get(v_x_2584_, 1);
v___x_2586_ = l_List_lengthTR___redArg(v_snd_2585_);
v___x_2587_ = l_List_lengthTR___redArg(v_snd_2583_);
v___x_2588_ = lean_nat_dec_lt(v___x_2586_, v___x_2587_);
lean_dec(v___x_2587_);
lean_dec(v___x_2586_);
return v___x_2588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed(lean_object* v_snd_2589_, lean_object* v_x_2590_){
_start:
{
uint8_t v_res_2591_; lean_object* v_r_2592_; 
v_res_2591_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(v_snd_2589_, v_x_2590_);
lean_dec_ref(v_x_2590_);
lean_dec(v_snd_2589_);
v_r_2592_ = lean_box(v_res_2591_);
return v_r_2592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__2(lean_object* v___f_2593_, lean_object* v___f_2594_, lean_object* v_toPure_2595_, lean_object* v_r_2596_){
_start:
{
uint8_t v___x_2597_; 
v___x_2597_ = l_List_any___redArg(v_r_2596_, v___f_2593_);
if (v___x_2597_ == 0)
{
lean_object* v___x_2598_; lean_object* v___x_2599_; 
lean_dec(v_toPure_2595_);
v___x_2598_ = lean_box(0);
v___x_2599_ = lean_apply_1(v___f_2594_, v___x_2598_);
return v___x_2599_;
}
else
{
lean_object* v___x_2600_; lean_object* v___x_2601_; 
lean_dec(v___f_2594_);
v___x_2600_ = lean_box(0);
v___x_2601_ = lean_apply_2(v_toPure_2595_, lean_box(0), v___x_2600_);
return v___x_2601_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(lean_object* v_inst_2602_, lean_object* v_inst_2603_, lean_object* v_inst_2604_, lean_object* v_inst_2605_, lean_object* v_inst_2606_, lean_object* v_inst_2607_, lean_object* v_view_2608_, lean_object* v_findLocalDecl_x3f_2609_, lean_object* v_n_2610_, lean_object* v_projs_2611_, lean_object* v_auxDecl_x3f_2612_){
_start:
{
lean_object* v_toApplicative_2613_; lean_object* v_toBind_2614_; lean_object* v_toPure_2615_; lean_object* v_auxDecl_x3f_2617_; lean_object* v_imported_2636_; lean_object* v_ctx_2637_; lean_object* v_scopes_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v_toApplicative_2613_ = lean_ctor_get(v_inst_2602_, 0);
v_toBind_2614_ = lean_ctor_get(v_inst_2602_, 1);
v_toPure_2615_ = lean_ctor_get(v_toApplicative_2613_, 1);
v_imported_2636_ = lean_ctor_get(v_view_2608_, 1);
v_ctx_2637_ = lean_ctor_get(v_view_2608_, 2);
v_scopes_2638_ = lean_ctor_get(v_view_2608_, 3);
lean_inc(v_scopes_2638_);
lean_inc(v_ctx_2637_);
lean_inc(v_imported_2636_);
lean_inc(v_n_2610_);
v___x_2639_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2639_, 0, v_n_2610_);
lean_ctor_set(v___x_2639_, 1, v_imported_2636_);
lean_ctor_set(v___x_2639_, 2, v_ctx_2637_);
lean_ctor_set(v___x_2639_, 3, v_scopes_2638_);
lean_inc_ref(v_findLocalDecl_x3f_2609_);
v___x_2640_ = lean_apply_1(v_findLocalDecl_x3f_2609_, v___x_2639_);
if (lean_obj_tag(v___x_2640_) == 1)
{
lean_object* v_val_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2664_; 
v_val_2641_ = lean_ctor_get(v___x_2640_, 0);
v_isSharedCheck_2664_ = !lean_is_exclusive(v___x_2640_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2643_ = v___x_2640_;
v_isShared_2644_ = v_isSharedCheck_2664_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_val_2641_);
lean_dec(v___x_2640_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2664_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
uint8_t v___x_2645_; 
v___x_2645_ = l_Lean_LocalDecl_isAuxDecl(v_val_2641_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2657_; 
lean_inc(v_toPure_2615_);
lean_dec(v_auxDecl_x3f_2612_);
lean_dec(v_n_2610_);
lean_dec_ref(v_findLocalDecl_x3f_2609_);
lean_dec_ref(v_view_2608_);
lean_dec(v_inst_2607_);
lean_dec_ref(v_inst_2606_);
lean_dec_ref(v_inst_2605_);
lean_dec_ref(v_inst_2604_);
lean_dec_ref(v_inst_2603_);
v_isSharedCheck_2657_ = !lean_is_exclusive(v_inst_2602_);
if (v_isSharedCheck_2657_ == 0)
{
lean_object* v_unused_2658_; lean_object* v_unused_2659_; 
v_unused_2658_ = lean_ctor_get(v_inst_2602_, 1);
lean_dec(v_unused_2658_);
v_unused_2659_ = lean_ctor_get(v_inst_2602_, 0);
lean_dec(v_unused_2659_);
v___x_2647_ = v_inst_2602_;
v_isShared_2648_ = v_isSharedCheck_2657_;
goto v_resetjp_2646_;
}
else
{
lean_dec(v_inst_2602_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2657_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2649_; lean_object* v___x_2651_; 
v___x_2649_ = l_Lean_LocalDecl_toExpr(v_val_2641_);
if (v_isShared_2648_ == 0)
{
lean_ctor_set(v___x_2647_, 1, v_projs_2611_);
lean_ctor_set(v___x_2647_, 0, v___x_2649_);
v___x_2651_ = v___x_2647_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v___x_2649_);
lean_ctor_set(v_reuseFailAlloc_2656_, 1, v_projs_2611_);
v___x_2651_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
lean_object* v___x_2653_; 
if (v_isShared_2644_ == 0)
{
lean_ctor_set(v___x_2643_, 0, v___x_2651_);
v___x_2653_ = v___x_2643_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v___x_2651_);
v___x_2653_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
lean_object* v___x_2654_; 
v___x_2654_ = lean_apply_2(v_toPure_2615_, lean_box(0), v___x_2653_);
return v___x_2654_;
}
}
}
}
else
{
if (lean_obj_tag(v_auxDecl_x3f_2612_) == 0)
{
lean_object* v___x_2660_; lean_object* v___x_2662_; 
lean_inc(v_projs_2611_);
v___x_2660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2660_, 0, v_val_2641_);
lean_ctor_set(v___x_2660_, 1, v_projs_2611_);
if (v_isShared_2644_ == 0)
{
lean_ctor_set(v___x_2643_, 0, v___x_2660_);
v___x_2662_ = v___x_2643_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v___x_2660_);
v___x_2662_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
v_auxDecl_x3f_2617_ = v___x_2662_;
goto v___jp_2616_;
}
}
else
{
lean_del_object(v___x_2643_);
lean_dec(v_val_2641_);
v_auxDecl_x3f_2617_ = v_auxDecl_x3f_2612_;
goto v___jp_2616_;
}
}
}
}
else
{
lean_dec(v___x_2640_);
v_auxDecl_x3f_2617_ = v_auxDecl_x3f_2612_;
goto v___jp_2616_;
}
v___jp_2616_:
{
if (lean_obj_tag(v_n_2610_) == 1)
{
lean_object* v_pre_2618_; lean_object* v_str_2619_; lean_object* v___x_2620_; 
v_pre_2618_ = lean_ctor_get(v_n_2610_, 0);
lean_inc(v_pre_2618_);
v_str_2619_ = lean_ctor_get(v_n_2610_, 1);
lean_inc_ref(v_str_2619_);
lean_dec_ref_known(v_n_2610_, 2);
v___x_2620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2620_, 0, v_str_2619_);
lean_ctor_set(v___x_2620_, 1, v_projs_2611_);
v_n_2610_ = v_pre_2618_;
v_projs_2611_ = v___x_2620_;
v_auxDecl_x3f_2612_ = v_auxDecl_x3f_2617_;
goto _start;
}
else
{
lean_inc(v_toBind_2614_);
lean_dec(v_projs_2611_);
lean_dec(v_n_2610_);
lean_dec_ref(v_findLocalDecl_x3f_2609_);
if (lean_obj_tag(v_auxDecl_x3f_2617_) == 1)
{
lean_object* v_val_2622_; lean_object* v_fst_2623_; lean_object* v_snd_2624_; lean_object* v___f_2625_; uint8_t v___x_2626_; 
v_val_2622_ = lean_ctor_get(v_auxDecl_x3f_2617_, 0);
lean_inc(v_val_2622_);
lean_dec_ref_known(v_auxDecl_x3f_2617_, 1);
v_fst_2623_ = lean_ctor_get(v_val_2622_, 0);
lean_inc_n(v_fst_2623_, 2);
v_snd_2624_ = lean_ctor_get(v_val_2622_, 1);
lean_inc_n(v_snd_2624_, 2);
lean_dec(v_val_2622_);
lean_inc(v_toPure_2615_);
v___f_2625_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2625_, 0, v_fst_2623_);
lean_closure_set(v___f_2625_, 1, v_snd_2624_);
lean_closure_set(v___f_2625_, 2, v_toPure_2615_);
v___x_2626_ = l_List_isEmpty___redArg(v_snd_2624_);
if (v___x_2626_ == 0)
{
lean_object* v___f_2627_; lean_object* v___f_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
lean_dec(v_fst_2623_);
v___f_2627_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2627_, 0, v_snd_2624_);
lean_inc(v_toPure_2615_);
v___f_2628_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2628_, 0, v___f_2627_);
lean_closure_set(v___f_2628_, 1, v___f_2625_);
lean_closure_set(v___f_2628_, 2, v_toPure_2615_);
v___x_2629_ = l_Lean_MacroScopesView_review(v_view_2608_);
v___x_2630_ = l_Lean_resolveGlobalName___redArg(v_inst_2602_, v_inst_2603_, v_inst_2604_, v_inst_2605_, v_inst_2606_, v_inst_2607_, v___x_2629_, v___x_2626_);
v___x_2631_ = lean_apply_4(v_toBind_2614_, lean_box(0), lean_box(0), v___x_2630_, v___f_2628_);
return v___x_2631_;
}
else
{
lean_object* v___x_2632_; lean_object* v___x_2633_; 
lean_inc(v_toPure_2615_);
lean_dec_ref(v___f_2625_);
lean_dec(v_toBind_2614_);
lean_dec_ref(v_view_2608_);
lean_dec(v_inst_2607_);
lean_dec_ref(v_inst_2606_);
lean_dec_ref(v_inst_2605_);
lean_dec_ref(v_inst_2604_);
lean_dec_ref(v_inst_2603_);
lean_dec_ref(v_inst_2602_);
v___x_2632_ = lean_box(0);
v___x_2633_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(v_fst_2623_, v_snd_2624_, v_toPure_2615_, v___x_2632_);
return v___x_2633_;
}
}
else
{
lean_object* v___x_2634_; lean_object* v___x_2635_; 
lean_inc(v_toPure_2615_);
lean_dec(v_auxDecl_x3f_2617_);
lean_dec(v_toBind_2614_);
lean_dec_ref(v_view_2608_);
lean_dec(v_inst_2607_);
lean_dec_ref(v_inst_2606_);
lean_dec_ref(v_inst_2605_);
lean_dec_ref(v_inst_2604_);
lean_dec_ref(v_inst_2603_);
lean_dec_ref(v_inst_2602_);
v___x_2634_ = lean_box(0);
v___x_2635_ = lean_apply_2(v_toPure_2615_, lean_box(0), v___x_2634_);
return v___x_2635_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(lean_object* v_m_2665_, lean_object* v_inst_2666_, lean_object* v_inst_2667_, lean_object* v_inst_2668_, lean_object* v_inst_2669_, lean_object* v_inst_2670_, lean_object* v_inst_2671_, lean_object* v_view_2672_, lean_object* v_findLocalDecl_x3f_2673_, lean_object* v_n_2674_, lean_object* v_projs_2675_, lean_object* v_auxDecl_x3f_2676_){
_start:
{
lean_object* v___x_2677_; 
v___x_2677_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2666_, v_inst_2667_, v_inst_2668_, v_inst_2669_, v_inst_2670_, v_inst_2671_, v_view_2672_, v_findLocalDecl_x3f_2673_, v_n_2674_, v_projs_2675_, v_auxDecl_x3f_2676_);
return v___x_2677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object* v_localDecl_2678_, lean_object* v_givenNameView_2679_, lean_object* v_fullDeclName_2680_, lean_object* v_ns_2681_){
_start:
{
lean_object* v_name_2682_; lean_object* v_imported_2683_; lean_object* v_ctx_2684_; lean_object* v_scopes_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; uint8_t v___x_2689_; 
v_name_2682_ = lean_ctor_get(v_givenNameView_2679_, 0);
v_imported_2683_ = lean_ctor_get(v_givenNameView_2679_, 1);
v_ctx_2684_ = lean_ctor_get(v_givenNameView_2679_, 2);
v_scopes_2685_ = lean_ctor_get(v_givenNameView_2679_, 3);
lean_inc(v_name_2682_);
lean_inc(v_ns_2681_);
v___x_2686_ = l_Lean_Name_append(v_ns_2681_, v_name_2682_);
lean_inc(v_scopes_2685_);
lean_inc(v_ctx_2684_);
lean_inc(v_imported_2683_);
v___x_2687_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2686_);
lean_ctor_set(v___x_2687_, 1, v_imported_2683_);
lean_ctor_set(v___x_2687_, 2, v_ctx_2684_);
lean_ctor_set(v___x_2687_, 3, v_scopes_2685_);
v___x_2688_ = l_Lean_MacroScopesView_review(v___x_2687_);
v___x_2689_ = lean_name_eq(v___x_2688_, v_fullDeclName_2680_);
lean_dec(v___x_2688_);
if (v___x_2689_ == 0)
{
if (lean_obj_tag(v_ns_2681_) == 1)
{
lean_object* v_pre_2690_; 
v_pre_2690_ = lean_ctor_get(v_ns_2681_, 0);
lean_inc(v_pre_2690_);
lean_dec_ref_known(v_ns_2681_, 2);
v_ns_2681_ = v_pre_2690_;
goto _start;
}
else
{
lean_object* v___x_2692_; 
lean_dec(v_ns_2681_);
lean_dec_ref(v_givenNameView_2679_);
lean_dec_ref(v_localDecl_2678_);
v___x_2692_ = lean_box(0);
return v___x_2692_;
}
}
else
{
lean_object* v___x_2693_; 
lean_dec(v_ns_2681_);
lean_dec_ref(v_givenNameView_2679_);
v___x_2693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2693_, 0, v_localDecl_2678_);
return v___x_2693_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go___boxed(lean_object* v_localDecl_2694_, lean_object* v_givenNameView_2695_, lean_object* v_fullDeclName_2696_, lean_object* v_ns_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_localDecl_2694_, v_givenNameView_2695_, v_fullDeclName_2696_, v_ns_2697_);
lean_dec(v_fullDeclName_2696_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0(lean_object* v_localDecl_2699_, lean_object* v_givenName_2700_){
_start:
{
lean_object* v___x_2701_; uint8_t v___x_2702_; 
v___x_2701_ = l_Lean_LocalDecl_userName(v_localDecl_2699_);
v___x_2702_ = lean_name_eq(v___x_2701_, v_givenName_2700_);
lean_dec(v___x_2701_);
if (v___x_2702_ == 0)
{
lean_object* v___x_2703_; 
lean_dec_ref(v_localDecl_2699_);
v___x_2703_ = lean_box(0);
return v___x_2703_;
}
else
{
lean_object* v___x_2704_; 
v___x_2704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2704_, 0, v_localDecl_2699_);
return v___x_2704_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0___boxed(lean_object* v_localDecl_2705_, lean_object* v_givenName_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l_Lean_resolveLocalName___redArg___lam__0(v_localDecl_2705_, v_givenName_2706_);
lean_dec(v_givenName_2706_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1(lean_object* v_matchLocalDecl_x3f_2708_, lean_object* v_givenName_2709_, lean_object* v___f_2710_, lean_object* v_auxDeclToFullName_2711_, lean_object* v_currNamespace_2712_, lean_object* v_givenNameView_2713_, lean_object* v_x_2714_){
_start:
{
if (lean_obj_tag(v_x_2714_) == 0)
{
lean_dec_ref(v_givenNameView_2713_);
lean_dec(v_currNamespace_2712_);
lean_dec(v_auxDeclToFullName_2711_);
lean_dec_ref(v___f_2710_);
lean_dec(v_givenName_2709_);
lean_dec_ref(v_matchLocalDecl_x3f_2708_);
return v_x_2714_;
}
else
{
lean_object* v_val_2715_; uint8_t v___x_2716_; 
v_val_2715_ = lean_ctor_get(v_x_2714_, 0);
v___x_2716_ = l_Lean_LocalDecl_isAuxDecl(v_val_2715_);
if (v___x_2716_ == 0)
{
lean_object* v___x_2717_; 
lean_inc(v_val_2715_);
lean_dec_ref_known(v_x_2714_, 1);
lean_dec_ref(v_givenNameView_2713_);
lean_dec(v_currNamespace_2712_);
lean_dec(v_auxDeclToFullName_2711_);
lean_dec_ref(v___f_2710_);
v___x_2717_ = lean_apply_2(v_matchLocalDecl_x3f_2708_, v_val_2715_, v_givenName_2709_);
return v___x_2717_;
}
else
{
lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2718_ = l_Lean_LocalDecl_fvarId(v_val_2715_);
v___x_2719_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_2710_, v_auxDeclToFullName_2711_, v___x_2718_);
if (lean_obj_tag(v___x_2719_) == 1)
{
lean_object* v_val_2720_; lean_object* v_fullDeclView_2721_; lean_object* v_name_2722_; lean_object* v_imported_2723_; lean_object* v_ctx_2724_; lean_object* v_scopes_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2745_; 
lean_dec(v_givenName_2709_);
lean_dec_ref(v_matchLocalDecl_x3f_2708_);
v_val_2720_ = lean_ctor_get(v___x_2719_, 0);
lean_inc(v_val_2720_);
lean_dec_ref_known(v___x_2719_, 1);
v_fullDeclView_2721_ = l_Lean_extractMacroScopes(v_val_2720_);
v_name_2722_ = lean_ctor_get(v_fullDeclView_2721_, 0);
v_imported_2723_ = lean_ctor_get(v_fullDeclView_2721_, 1);
v_ctx_2724_ = lean_ctor_get(v_fullDeclView_2721_, 2);
v_scopes_2725_ = lean_ctor_get(v_fullDeclView_2721_, 3);
v_isSharedCheck_2745_ = !lean_is_exclusive(v_fullDeclView_2721_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2727_ = v_fullDeclView_2721_;
v_isShared_2728_ = v_isSharedCheck_2745_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_scopes_2725_);
lean_inc(v_ctx_2724_);
lean_inc(v_imported_2723_);
lean_inc(v_name_2722_);
lean_dec(v_fullDeclView_2721_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2745_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___y_2730_; lean_object* v___x_2743_; 
lean_inc(v_name_2722_);
v___x_2743_ = l_Lean_privateToUserName_x3f(v_name_2722_);
if (lean_obj_tag(v___x_2743_) == 0)
{
v___y_2730_ = v_name_2722_;
goto v___jp_2729_;
}
else
{
lean_object* v_val_2744_; 
lean_dec(v_name_2722_);
v_val_2744_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_val_2744_);
lean_dec_ref_known(v___x_2743_, 1);
v___y_2730_ = v_val_2744_;
goto v___jp_2729_;
}
v___jp_2729_:
{
lean_object* v_fullDeclView_2732_; 
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 0, v___y_2730_);
v_fullDeclView_2732_ = v___x_2727_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v___y_2730_);
lean_ctor_set(v_reuseFailAlloc_2742_, 1, v_imported_2723_);
lean_ctor_set(v_reuseFailAlloc_2742_, 2, v_ctx_2724_);
lean_ctor_set(v_reuseFailAlloc_2742_, 3, v_scopes_2725_);
v_fullDeclView_2732_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
lean_object* v_fullDeclName_2733_; uint8_t v___x_2734_; 
lean_inc_ref(v_fullDeclView_2732_);
v_fullDeclName_2733_ = l_Lean_MacroScopesView_review(v_fullDeclView_2732_);
v___x_2734_ = l_Lean_Name_isPrefixOf(v_currNamespace_2712_, v_fullDeclName_2733_);
if (v___x_2734_ == 0)
{
lean_object* v___x_2735_; 
lean_inc(v_val_2715_);
lean_dec_ref(v_fullDeclView_2732_);
lean_dec_ref_known(v_x_2714_, 1);
v___x_2735_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_2715_, v_givenNameView_2713_, v_fullDeclName_2733_, v_currNamespace_2712_);
lean_dec(v_fullDeclName_2733_);
return v___x_2735_;
}
else
{
lean_object* v___x_2736_; lean_object* v_localDeclNameView_2737_; uint8_t v___x_2738_; 
lean_dec(v_fullDeclName_2733_);
lean_dec(v_currNamespace_2712_);
v___x_2736_ = l_Lean_LocalDecl_userName(v_val_2715_);
v_localDeclNameView_2737_ = l_Lean_extractMacroScopes(v___x_2736_);
v___x_2738_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_2737_, v_givenNameView_2713_);
lean_dec_ref(v_localDeclNameView_2737_);
if (v___x_2738_ == 0)
{
lean_object* v___x_2739_; 
lean_dec_ref(v_fullDeclView_2732_);
lean_dec_ref_known(v_x_2714_, 1);
lean_dec_ref(v_givenNameView_2713_);
v___x_2739_ = lean_box(0);
return v___x_2739_;
}
else
{
uint8_t v___x_2740_; 
v___x_2740_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_2713_, v_fullDeclView_2732_);
lean_dec_ref(v_fullDeclView_2732_);
lean_dec_ref(v_givenNameView_2713_);
if (v___x_2740_ == 0)
{
lean_object* v___x_2741_; 
lean_dec_ref_known(v_x_2714_, 1);
v___x_2741_ = lean_box(0);
return v___x_2741_;
}
else
{
return v_x_2714_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2746_; 
lean_inc(v_val_2715_);
lean_dec(v___x_2719_);
lean_dec_ref_known(v_x_2714_, 1);
lean_dec_ref(v_givenNameView_2713_);
lean_dec(v_currNamespace_2712_);
v___x_2746_ = lean_apply_2(v_matchLocalDecl_x3f_2708_, v_val_2715_, v_givenName_2709_);
return v___x_2746_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2(lean_object* v_localDecl_x3f_2747_, lean_object* v_matchLocalDecl_x3f_2748_, lean_object* v_givenName_2749_, lean_object* v_x_2750_){
_start:
{
if (lean_obj_tag(v_x_2750_) == 0)
{
lean_dec(v_givenName_2749_);
lean_dec_ref(v_matchLocalDecl_x3f_2748_);
return v_x_2750_;
}
else
{
lean_object* v_val_2751_; uint8_t v___x_2752_; 
v_val_2751_ = lean_ctor_get(v_x_2750_, 0);
lean_inc(v_val_2751_);
lean_dec_ref_known(v_x_2750_, 1);
v___x_2752_ = l_Lean_LocalDecl_isAuxDecl(v_val_2751_);
if (v___x_2752_ == 0)
{
lean_dec(v_val_2751_);
lean_dec(v_givenName_2749_);
lean_dec_ref(v_matchLocalDecl_x3f_2748_);
lean_inc(v_localDecl_x3f_2747_);
return v_localDecl_x3f_2747_;
}
else
{
lean_object* v___x_2753_; 
v___x_2753_ = lean_apply_2(v_matchLocalDecl_x3f_2748_, v_val_2751_, v_givenName_2749_);
return v___x_2753_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2___boxed(lean_object* v_localDecl_x3f_2754_, lean_object* v_matchLocalDecl_x3f_2755_, lean_object* v_givenName_2756_, lean_object* v_x_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l_Lean_resolveLocalName___redArg___lam__2(v_localDecl_x3f_2754_, v_matchLocalDecl_x3f_2755_, v_givenName_2756_, v_x_2757_);
lean_dec(v_localDecl_x3f_2754_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3(lean_object* v_lctx_2778_, lean_object* v_matchLocalDecl_x3f_2779_, lean_object* v___f_2780_, lean_object* v_auxDeclToFullName_2781_, lean_object* v_currNamespace_2782_, lean_object* v_givenNameView_2783_){
_start:
{
lean_object* v_decls_2784_; lean_object* v_givenName_2785_; lean_object* v___f_2786_; lean_object* v___x_2787_; lean_object* v_localDecl_x3f_2788_; 
v_decls_2784_ = lean_ctor_get(v_lctx_2778_, 1);
lean_inc_ref_n(v_decls_2784_, 2);
lean_dec_ref(v_lctx_2778_);
lean_inc_ref(v_givenNameView_2783_);
v_givenName_2785_ = l_Lean_MacroScopesView_review(v_givenNameView_2783_);
lean_inc(v_givenName_2785_);
lean_inc_ref(v_matchLocalDecl_x3f_2779_);
v___f_2786_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__1), 7, 6);
lean_closure_set(v___f_2786_, 0, v_matchLocalDecl_x3f_2779_);
lean_closure_set(v___f_2786_, 1, v_givenName_2785_);
lean_closure_set(v___f_2786_, 2, v___f_2780_);
lean_closure_set(v___f_2786_, 3, v_auxDeclToFullName_2781_);
lean_closure_set(v___f_2786_, 4, v_currNamespace_2782_);
lean_closure_set(v___f_2786_, 5, v_givenNameView_2783_);
v___x_2787_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v_localDecl_x3f_2788_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2787_, v_decls_2784_, v___f_2786_);
if (lean_obj_tag(v_localDecl_x3f_2788_) == 0)
{
lean_object* v___f_2789_; lean_object* v___x_2790_; 
v___f_2789_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2789_, 0, v_localDecl_x3f_2788_);
lean_closure_set(v___f_2789_, 1, v_matchLocalDecl_x3f_2779_);
lean_closure_set(v___f_2789_, 2, v_givenName_2785_);
v___x_2790_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2787_, v_decls_2784_, v___f_2789_);
return v___x_2790_;
}
else
{
lean_dec(v_givenName_2785_);
lean_dec_ref(v_decls_2784_);
lean_dec_ref(v_matchLocalDecl_x3f_2779_);
return v_localDecl_x3f_2788_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__4(lean_object* v_n_2791_, lean_object* v_lctx_2792_, lean_object* v_matchLocalDecl_x3f_2793_, lean_object* v___f_2794_, lean_object* v_auxDeclToFullName_2795_, lean_object* v_inst_2796_, lean_object* v_inst_2797_, lean_object* v_inst_2798_, lean_object* v_inst_2799_, lean_object* v_inst_2800_, lean_object* v_inst_2801_, lean_object* v_currNamespace_2802_){
_start:
{
lean_object* v_view_2803_; lean_object* v_name_2804_; lean_object* v_findLocalDecl_x3f_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; 
v_view_2803_ = l_Lean_extractMacroScopes(v_n_2791_);
v_name_2804_ = lean_ctor_get(v_view_2803_, 0);
lean_inc(v_name_2804_);
v_findLocalDecl_x3f_2805_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__3), 6, 5);
lean_closure_set(v_findLocalDecl_x3f_2805_, 0, v_lctx_2792_);
lean_closure_set(v_findLocalDecl_x3f_2805_, 1, v_matchLocalDecl_x3f_2793_);
lean_closure_set(v_findLocalDecl_x3f_2805_, 2, v___f_2794_);
lean_closure_set(v_findLocalDecl_x3f_2805_, 3, v_auxDeclToFullName_2795_);
lean_closure_set(v_findLocalDecl_x3f_2805_, 4, v_currNamespace_2802_);
v___x_2806_ = lean_box(0);
v___x_2807_ = lean_box(0);
v___x_2808_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2796_, v_inst_2797_, v_inst_2798_, v_inst_2799_, v_inst_2800_, v_inst_2801_, v_view_2803_, v_findLocalDecl_x3f_2805_, v_name_2804_, v___x_2806_, v___x_2807_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__5(lean_object* v_inst_2809_, lean_object* v_n_2810_, lean_object* v_lctx_2811_, lean_object* v_matchLocalDecl_x3f_2812_, lean_object* v___f_2813_, lean_object* v_inst_2814_, lean_object* v_inst_2815_, lean_object* v_inst_2816_, lean_object* v_inst_2817_, lean_object* v_inst_2818_, lean_object* v_toBind_2819_, lean_object* v_____do__lift_2820_){
_start:
{
lean_object* v_auxDeclToFullName_2821_; lean_object* v_getCurrNamespace_2822_; lean_object* v___f_2823_; lean_object* v___x_2824_; 
v_auxDeclToFullName_2821_ = lean_ctor_get(v_____do__lift_2820_, 2);
lean_inc(v_auxDeclToFullName_2821_);
lean_dec_ref(v_____do__lift_2820_);
v_getCurrNamespace_2822_ = lean_ctor_get(v_inst_2809_, 0);
lean_inc(v_getCurrNamespace_2822_);
v___f_2823_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__4), 12, 11);
lean_closure_set(v___f_2823_, 0, v_n_2810_);
lean_closure_set(v___f_2823_, 1, v_lctx_2811_);
lean_closure_set(v___f_2823_, 2, v_matchLocalDecl_x3f_2812_);
lean_closure_set(v___f_2823_, 3, v___f_2813_);
lean_closure_set(v___f_2823_, 4, v_auxDeclToFullName_2821_);
lean_closure_set(v___f_2823_, 5, v_inst_2814_);
lean_closure_set(v___f_2823_, 6, v_inst_2809_);
lean_closure_set(v___f_2823_, 7, v_inst_2815_);
lean_closure_set(v___f_2823_, 8, v_inst_2816_);
lean_closure_set(v___f_2823_, 9, v_inst_2817_);
lean_closure_set(v___f_2823_, 10, v_inst_2818_);
v___x_2824_ = lean_apply_4(v_toBind_2819_, lean_box(0), lean_box(0), v_getCurrNamespace_2822_, v___f_2823_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__6(lean_object* v_inst_2825_, lean_object* v_n_2826_, lean_object* v_matchLocalDecl_x3f_2827_, lean_object* v___f_2828_, lean_object* v_inst_2829_, lean_object* v_inst_2830_, lean_object* v_inst_2831_, lean_object* v_inst_2832_, lean_object* v_inst_2833_, lean_object* v_toBind_2834_, lean_object* v_inst_2835_, lean_object* v_lctx_2836_){
_start:
{
lean_object* v___f_2837_; lean_object* v___x_2838_; 
lean_inc(v_toBind_2834_);
v___f_2837_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__5), 12, 11);
lean_closure_set(v___f_2837_, 0, v_inst_2825_);
lean_closure_set(v___f_2837_, 1, v_n_2826_);
lean_closure_set(v___f_2837_, 2, v_lctx_2836_);
lean_closure_set(v___f_2837_, 3, v_matchLocalDecl_x3f_2827_);
lean_closure_set(v___f_2837_, 4, v___f_2828_);
lean_closure_set(v___f_2837_, 5, v_inst_2829_);
lean_closure_set(v___f_2837_, 6, v_inst_2830_);
lean_closure_set(v___f_2837_, 7, v_inst_2831_);
lean_closure_set(v___f_2837_, 8, v_inst_2832_);
lean_closure_set(v___f_2837_, 9, v_inst_2833_);
lean_closure_set(v___f_2837_, 10, v_toBind_2834_);
v___x_2838_ = lean_apply_4(v_toBind_2834_, lean_box(0), lean_box(0), v_inst_2835_, v___f_2837_);
return v___x_2838_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg(lean_object* v_inst_2841_, lean_object* v_inst_2842_, lean_object* v_inst_2843_, lean_object* v_inst_2844_, lean_object* v_inst_2845_, lean_object* v_inst_2846_, lean_object* v_inst_2847_, lean_object* v_n_2848_){
_start:
{
lean_object* v_toBind_2849_; lean_object* v___f_2850_; lean_object* v_matchLocalDecl_x3f_2851_; lean_object* v___f_2852_; lean_object* v___x_2853_; 
v_toBind_2849_ = lean_ctor_get(v_inst_2841_, 1);
lean_inc_n(v_toBind_2849_, 2);
v___f_2850_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__0));
v_matchLocalDecl_x3f_2851_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__1));
lean_inc(v_inst_2847_);
v___f_2852_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__6), 12, 11);
lean_closure_set(v___f_2852_, 0, v_inst_2842_);
lean_closure_set(v___f_2852_, 1, v_n_2848_);
lean_closure_set(v___f_2852_, 2, v_matchLocalDecl_x3f_2851_);
lean_closure_set(v___f_2852_, 3, v___f_2850_);
lean_closure_set(v___f_2852_, 4, v_inst_2841_);
lean_closure_set(v___f_2852_, 5, v_inst_2843_);
lean_closure_set(v___f_2852_, 6, v_inst_2844_);
lean_closure_set(v___f_2852_, 7, v_inst_2845_);
lean_closure_set(v___f_2852_, 8, v_inst_2846_);
lean_closure_set(v___f_2852_, 9, v_toBind_2849_);
lean_closure_set(v___f_2852_, 10, v_inst_2847_);
v___x_2853_ = lean_apply_4(v_toBind_2849_, lean_box(0), lean_box(0), v_inst_2847_, v___f_2852_);
return v___x_2853_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName(lean_object* v_m_2854_, lean_object* v_inst_2855_, lean_object* v_inst_2856_, lean_object* v_inst_2857_, lean_object* v_inst_2858_, lean_object* v_inst_2859_, lean_object* v_inst_2860_, lean_object* v_inst_2861_, lean_object* v_n_2862_){
_start:
{
lean_object* v___x_2863_; 
v___x_2863_ = l_Lean_resolveLocalName___redArg(v_inst_2855_, v_inst_2856_, v_inst_2857_, v_inst_2858_, v_inst_2859_, v_inst_2860_, v_inst_2861_, v_n_2862_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(lean_object* v_toPure_2864_, uint8_t v_____do__lift_2865_){
_start:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2866_ = lean_box(v_____do__lift_2865_);
v___x_2867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2866_);
v___x_2868_ = lean_apply_2(v_toPure_2864_, lean_box(0), v___x_2867_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed(lean_object* v_toPure_2869_, lean_object* v_____do__lift_2870_){
_start:
{
uint8_t v_____do__lift_1060__boxed_2871_; lean_object* v_res_2872_; 
v_____do__lift_1060__boxed_2871_ = lean_unbox(v_____do__lift_2870_);
v_res_2872_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(v_toPure_2869_, v_____do__lift_1060__boxed_2871_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1(lean_object* v_toPure_2873_, lean_object* v___y_2874_, lean_object* v_____do__lift_2875_){
_start:
{
if (lean_obj_tag(v_____do__lift_2875_) == 0)
{
lean_object* v___x_2876_; lean_object* v___x_2877_; 
lean_dec(v___y_2874_);
v___x_2876_ = lean_box(0);
v___x_2877_ = lean_apply_2(v_toPure_2873_, lean_box(0), v___x_2876_);
return v___x_2877_;
}
else
{
lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2885_; 
v_isSharedCheck_2885_ = !lean_is_exclusive(v_____do__lift_2875_);
if (v_isSharedCheck_2885_ == 0)
{
lean_object* v_unused_2886_; 
v_unused_2886_ = lean_ctor_get(v_____do__lift_2875_, 0);
lean_dec(v_unused_2886_);
v___x_2879_ = v_____do__lift_2875_;
v_isShared_2880_ = v_isSharedCheck_2885_;
goto v_resetjp_2878_;
}
else
{
lean_dec(v_____do__lift_2875_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2885_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 0, v___y_2874_);
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v___y_2874_);
v___x_2882_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
lean_object* v___x_2883_; 
v___x_2883_ = lean_apply_2(v_toPure_2873_, lean_box(0), v___x_2882_);
return v___x_2883_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(lean_object* v_toPure_2889_, lean_object* v_toBind_2890_, lean_object* v___f_2891_, lean_object* v_____do__lift_2892_){
_start:
{
if (lean_obj_tag(v_____do__lift_2892_) == 0)
{
lean_object* v___x_2893_; lean_object* v___x_2894_; 
lean_dec(v___f_2891_);
lean_dec(v_toBind_2890_);
v___x_2893_ = lean_box(0);
v___x_2894_ = lean_apply_2(v_toPure_2889_, lean_box(0), v___x_2893_);
return v___x_2894_;
}
else
{
lean_object* v_val_2895_; uint8_t v___x_2896_; 
v_val_2895_ = lean_ctor_get(v_____do__lift_2892_, 0);
v___x_2896_ = lean_unbox(v_val_2895_);
if (v___x_2896_ == 0)
{
lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; 
v___x_2897_ = lean_box(0);
v___x_2898_ = lean_apply_2(v_toPure_2889_, lean_box(0), v___x_2897_);
v___x_2899_ = lean_apply_4(v_toBind_2890_, lean_box(0), lean_box(0), v___x_2898_, v___f_2891_);
return v___x_2899_;
}
else
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
v___x_2900_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_2901_ = lean_apply_2(v_toPure_2889_, lean_box(0), v___x_2900_);
v___x_2902_ = lean_apply_4(v_toBind_2890_, lean_box(0), lean_box(0), v___x_2901_, v___f_2891_);
return v___x_2902_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed(lean_object* v_toPure_2903_, lean_object* v_toBind_2904_, lean_object* v___f_2905_, lean_object* v_____do__lift_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(v_toPure_2903_, v_toBind_2904_, v___f_2905_, v_____do__lift_2906_);
lean_dec(v_____do__lift_2906_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(lean_object* v_toPure_2908_, lean_object* v_filter_2909_, lean_object* v___y_2910_, lean_object* v_toBind_2911_, lean_object* v___f_2912_, lean_object* v___f_2913_, lean_object* v_____do__lift_2914_){
_start:
{
if (lean_obj_tag(v_____do__lift_2914_) == 0)
{
lean_object* v___x_2915_; lean_object* v___x_2916_; 
lean_dec(v___f_2913_);
lean_dec(v___f_2912_);
lean_dec(v_toBind_2911_);
lean_dec(v___y_2910_);
lean_dec(v_filter_2909_);
v___x_2915_ = lean_box(0);
v___x_2916_ = lean_apply_2(v_toPure_2908_, lean_box(0), v___x_2915_);
return v___x_2916_;
}
else
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
lean_dec(v_toPure_2908_);
v___x_2917_ = lean_apply_1(v_filter_2909_, v___y_2910_);
lean_inc(v_toBind_2911_);
v___x_2918_ = lean_apply_4(v_toBind_2911_, lean_box(0), lean_box(0), v___x_2917_, v___f_2912_);
v___x_2919_ = lean_apply_4(v_toBind_2911_, lean_box(0), lean_box(0), v___x_2918_, v___f_2913_);
return v___x_2919_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed(lean_object* v_toPure_2920_, lean_object* v_filter_2921_, lean_object* v___y_2922_, lean_object* v_toBind_2923_, lean_object* v___f_2924_, lean_object* v___f_2925_, lean_object* v_____do__lift_2926_){
_start:
{
lean_object* v_res_2927_; 
v_res_2927_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(v_toPure_2920_, v_filter_2921_, v___y_2922_, v_toBind_2923_, v___f_2924_, v___f_2925_, v_____do__lift_2926_);
lean_dec(v_____do__lift_2926_);
return v_res_2927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(lean_object* v_toPure_2928_, lean_object* v_n_u2080_2929_, lean_object* v_toBind_2930_, lean_object* v___f_2931_, lean_object* v_____do__lift_2932_){
_start:
{
if (lean_obj_tag(v_____do__lift_2932_) == 0)
{
lean_object* v___x_2936_; lean_object* v___x_2937_; 
lean_dec(v___f_2931_);
lean_dec(v_toBind_2930_);
v___x_2936_ = lean_box(0);
v___x_2937_ = lean_apply_2(v_toPure_2928_, lean_box(0), v___x_2936_);
return v___x_2937_;
}
else
{
lean_object* v_val_2938_; 
v_val_2938_ = lean_ctor_get(v_____do__lift_2932_, 0);
if (lean_obj_tag(v_val_2938_) == 1)
{
lean_object* v_tail_2939_; 
v_tail_2939_ = lean_ctor_get(v_val_2938_, 1);
if (lean_obj_tag(v_tail_2939_) == 0)
{
lean_object* v_head_2940_; lean_object* v_fst_2941_; uint8_t v___x_2942_; 
v_head_2940_ = lean_ctor_get(v_val_2938_, 0);
v_fst_2941_ = lean_ctor_get(v_head_2940_, 0);
v___x_2942_ = lean_name_eq(v_fst_2941_, v_n_u2080_2929_);
if (v___x_2942_ == 0)
{
lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
v___x_2943_ = lean_box(0);
v___x_2944_ = lean_apply_2(v_toPure_2928_, lean_box(0), v___x_2943_);
v___x_2945_ = lean_apply_4(v_toBind_2930_, lean_box(0), lean_box(0), v___x_2944_, v___f_2931_);
return v___x_2945_;
}
else
{
lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v___x_2946_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_2947_ = lean_apply_2(v_toPure_2928_, lean_box(0), v___x_2946_);
v___x_2948_ = lean_apply_4(v_toBind_2930_, lean_box(0), lean_box(0), v___x_2947_, v___f_2931_);
return v___x_2948_;
}
}
else
{
lean_dec(v___f_2931_);
lean_dec(v_toBind_2930_);
goto v___jp_2933_;
}
}
else
{
lean_dec(v___f_2931_);
lean_dec(v_toBind_2930_);
goto v___jp_2933_;
}
}
v___jp_2933_:
{
lean_object* v___x_2934_; lean_object* v___x_2935_; 
v___x_2934_ = lean_box(0);
v___x_2935_ = lean_apply_2(v_toPure_2928_, lean_box(0), v___x_2934_);
return v___x_2935_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed(lean_object* v_toPure_2949_, lean_object* v_n_u2080_2950_, lean_object* v_toBind_2951_, lean_object* v___f_2952_, lean_object* v_____do__lift_2953_){
_start:
{
lean_object* v_res_2954_; 
v_res_2954_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(v_toPure_2949_, v_n_u2080_2950_, v_toBind_2951_, v___f_2952_, v_____do__lift_2953_);
lean_dec(v_____do__lift_2953_);
lean_dec(v_n_u2080_2950_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(lean_object* v_inst_2955_, lean_object* v_inst_2956_, lean_object* v_inst_2957_, lean_object* v_inst_2958_, lean_object* v_inst_2959_, lean_object* v_inst_2960_, lean_object* v_n_u2080_2961_, lean_object* v_filter_2962_, lean_object* v_view_x3f_2963_, lean_object* v_n_2964_){
_start:
{
lean_object* v___f_2965_; lean_object* v___f_2966_; lean_object* v___f_2967_; lean_object* v___f_2968_; lean_object* v___f_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v_toApplicative_2977_; lean_object* v_getEnv_2978_; lean_object* v_modifyEnv_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_3017_; 
lean_inc_ref_n(v_inst_2955_, 8);
v___f_2965_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_2965_, 0, v_inst_2955_);
v___f_2966_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_2966_, 0, v_inst_2955_);
v___f_2967_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_2967_, 0, v_inst_2955_);
v___f_2968_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_2968_, 0, v_inst_2955_);
v___f_2969_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_2969_, 0, v_inst_2955_);
v___x_2970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2970_, 0, v___f_2965_);
lean_ctor_set(v___x_2970_, 1, v___f_2966_);
v___x_2971_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_2971_, 0, lean_box(0));
lean_closure_set(v___x_2971_, 1, v_inst_2955_);
v___x_2972_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2970_);
lean_ctor_set(v___x_2972_, 1, v___x_2971_);
lean_ctor_set(v___x_2972_, 2, v___f_2967_);
lean_ctor_set(v___x_2972_, 3, v___f_2968_);
lean_ctor_set(v___x_2972_, 4, v___f_2969_);
v___x_2973_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_2973_, 0, lean_box(0));
lean_closure_set(v___x_2973_, 1, v_inst_2955_);
v___x_2974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2972_);
lean_ctor_set(v___x_2974_, 1, v___x_2973_);
v___x_2975_ = lean_alloc_closure((void*)(l_OptionT_lift), 4, 2);
lean_closure_set(v___x_2975_, 0, lean_box(0));
lean_closure_set(v___x_2975_, 1, v_inst_2955_);
lean_inc_ref(v___x_2975_);
v___x_2976_ = l_Lean_instMonadResolveNameOfMonadLift___redArg(v___x_2975_, v_inst_2956_);
v_toApplicative_2977_ = lean_ctor_get(v_inst_2955_, 0);
lean_inc_ref(v_toApplicative_2977_);
v_getEnv_2978_ = lean_ctor_get(v_inst_2957_, 0);
v_modifyEnv_2979_ = lean_ctor_get(v_inst_2957_, 1);
v_isSharedCheck_3017_ = !lean_is_exclusive(v_inst_2957_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_2981_ = v_inst_2957_;
v_isShared_2982_ = v_isSharedCheck_3017_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_modifyEnv_2979_);
lean_inc(v_getEnv_2978_);
lean_dec(v_inst_2957_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_3017_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v_toBind_2983_; lean_object* v_toPure_2984_; lean_object* v___f_2985_; lean_object* v___f_2986_; lean_object* v___f_2987_; lean_object* v___x_2988_; lean_object* v___x_2990_; 
v_toBind_2983_ = lean_ctor_get(v_inst_2955_, 1);
lean_inc_n(v_toBind_2983_, 2);
lean_dec_ref(v_inst_2955_);
v_toPure_2984_ = lean_ctor_get(v_toApplicative_2977_, 1);
lean_inc_n(v_toPure_2984_, 3);
lean_dec_ref(v_toApplicative_2977_);
lean_inc_ref(v___x_2975_);
v___f_2985_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2985_, 0, v_modifyEnv_2979_);
lean_closure_set(v___f_2985_, 1, v___x_2975_);
v___f_2986_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2986_, 0, v_toPure_2984_);
v___f_2987_ = lean_alloc_closure((void*)(l_OptionT_lift___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2987_, 0, v_toPure_2984_);
v___x_2988_ = lean_apply_4(v_toBind_2983_, lean_box(0), lean_box(0), v_getEnv_2978_, v___f_2987_);
if (v_isShared_2982_ == 0)
{
lean_ctor_set(v___x_2981_, 1, v___f_2985_);
lean_ctor_set(v___x_2981_, 0, v___x_2988_);
v___x_2990_ = v___x_2981_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v___x_2988_);
lean_ctor_set(v_reuseFailAlloc_3016_, 1, v___f_2985_);
v___x_2990_ = v_reuseFailAlloc_3016_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___f_2993_; lean_object* v___y_2995_; 
lean_inc_ref_n(v___x_2975_, 2);
v___x_2991_ = l_Lean_instMonadOptionsOfMonadLift___redArg(v___x_2975_, v_inst_2958_);
v___x_2992_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_2975_, v_inst_2959_);
v___f_2993_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2993_, 0, v_inst_2960_);
lean_closure_set(v___f_2993_, 1, v___x_2975_);
if (lean_obj_tag(v_view_x3f_2963_) == 1)
{
lean_object* v_val_3003_; lean_object* v_imported_3004_; lean_object* v_ctx_3005_; lean_object* v_scopes_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3014_; 
v_val_3003_ = lean_ctor_get(v_view_x3f_2963_, 0);
lean_inc(v_val_3003_);
lean_dec_ref_known(v_view_x3f_2963_, 1);
v_imported_3004_ = lean_ctor_get(v_val_3003_, 1);
v_ctx_3005_ = lean_ctor_get(v_val_3003_, 2);
v_scopes_3006_ = lean_ctor_get(v_val_3003_, 3);
v_isSharedCheck_3014_ = !lean_is_exclusive(v_val_3003_);
if (v_isSharedCheck_3014_ == 0)
{
lean_object* v_unused_3015_; 
v_unused_3015_ = lean_ctor_get(v_val_3003_, 0);
lean_dec(v_unused_3015_);
v___x_3008_ = v_val_3003_;
v_isShared_3009_ = v_isSharedCheck_3014_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_scopes_3006_);
lean_inc(v_ctx_3005_);
lean_inc(v_imported_3004_);
lean_dec(v_val_3003_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3014_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3011_; 
if (v_isShared_3009_ == 0)
{
lean_ctor_set(v___x_3008_, 0, v_n_2964_);
v___x_3011_ = v___x_3008_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_n_2964_);
lean_ctor_set(v_reuseFailAlloc_3013_, 1, v_imported_3004_);
lean_ctor_set(v_reuseFailAlloc_3013_, 2, v_ctx_3005_);
lean_ctor_set(v_reuseFailAlloc_3013_, 3, v_scopes_3006_);
v___x_3011_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
lean_object* v___x_3012_; 
v___x_3012_ = l_Lean_MacroScopesView_review(v___x_3011_);
v___y_2995_ = v___x_3012_;
goto v___jp_2994_;
}
}
}
else
{
lean_dec(v_view_x3f_2963_);
v___y_2995_ = v_n_2964_;
goto v___jp_2994_;
}
v___jp_2994_:
{
lean_object* v___f_2996_; lean_object* v___f_2997_; lean_object* v___f_2998_; lean_object* v___f_2999_; uint8_t v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
lean_inc_n(v___y_2995_, 2);
lean_inc_n(v_toPure_2984_, 3);
v___f_2996_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2996_, 0, v_toPure_2984_);
lean_closure_set(v___f_2996_, 1, v___y_2995_);
lean_inc_n(v_toBind_2983_, 3);
v___f_2997_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2997_, 0, v_toPure_2984_);
lean_closure_set(v___f_2997_, 1, v_toBind_2983_);
lean_closure_set(v___f_2997_, 2, v___f_2996_);
v___f_2998_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_2998_, 0, v_toPure_2984_);
lean_closure_set(v___f_2998_, 1, v_filter_2962_);
lean_closure_set(v___f_2998_, 2, v___y_2995_);
lean_closure_set(v___f_2998_, 3, v_toBind_2983_);
lean_closure_set(v___f_2998_, 4, v___f_2986_);
lean_closure_set(v___f_2998_, 5, v___f_2997_);
v___f_2999_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed), 5, 4);
lean_closure_set(v___f_2999_, 0, v_toPure_2984_);
lean_closure_set(v___f_2999_, 1, v_n_u2080_2961_);
lean_closure_set(v___f_2999_, 2, v_toBind_2983_);
lean_closure_set(v___f_2999_, 3, v___f_2998_);
v___x_3000_ = 0;
v___x_3001_ = l_Lean_resolveGlobalName___redArg(v___x_2974_, v___x_2976_, v___x_2990_, v___x_2991_, v___x_2992_, v___f_2993_, v___y_2995_, v___x_3000_);
v___x_3002_ = lean_apply_4(v_toBind_2983_, lean_box(0), lean_box(0), v___x_3001_, v___f_2999_);
return v___x_3002_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve(lean_object* v_m_3018_, lean_object* v_inst_3019_, lean_object* v_inst_3020_, lean_object* v_inst_3021_, lean_object* v_inst_3022_, lean_object* v_inst_3023_, lean_object* v_inst_3024_, lean_object* v_n_u2080_3025_, lean_object* v_filter_3026_, lean_object* v_view_x3f_3027_, lean_object* v_n_3028_){
_start:
{
lean_object* v___x_3029_; 
v___x_3029_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3019_, v_inst_3020_, v_inst_3021_, v_inst_3022_, v_inst_3023_, v_inst_3024_, v_n_u2080_3025_, v_filter_3026_, v_view_x3f_3027_, v_n_3028_);
return v___x_3029_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0(lean_object* v_toPure_3034_, lean_object* v_____x_3035_){
_start:
{
if (lean_obj_tag(v_____x_3035_) == 0)
{
lean_object* v___x_3036_; lean_object* v___x_3037_; 
v___x_3036_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1));
v___x_3037_ = lean_apply_2(v_toPure_3034_, lean_box(0), v___x_3036_);
return v___x_3037_;
}
else
{
lean_object* v___x_3038_; 
v___x_3038_ = lean_apply_2(v_toPure_3034_, lean_box(0), v_____x_3035_);
return v___x_3038_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1(lean_object* v_toPure_3039_, lean_object* v_____do__lift_3040_){
_start:
{
if (lean_obj_tag(v_____do__lift_3040_) == 0)
{
lean_object* v___x_3041_; lean_object* v___x_3042_; 
v___x_3041_ = lean_box(0);
v___x_3042_ = lean_apply_2(v_toPure_3039_, lean_box(0), v___x_3041_);
return v___x_3042_;
}
else
{
lean_object* v_val_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3052_; 
v_val_3043_ = lean_ctor_get(v_____do__lift_3040_, 0);
v_isSharedCheck_3052_ = !lean_is_exclusive(v_____do__lift_3040_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3045_ = v_____do__lift_3040_;
v_isShared_3046_ = v_isSharedCheck_3052_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_val_3043_);
lean_dec(v_____do__lift_3040_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3052_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___x_3047_; lean_object* v___x_3049_; 
v___x_3047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3047_, 0, v_val_3043_);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v___x_3047_);
v___x_3049_ = v___x_3045_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v___x_3047_);
v___x_3049_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
lean_object* v___x_3050_; 
v___x_3050_ = lean_apply_2(v_toPure_3039_, lean_box(0), v___x_3049_);
return v___x_3050_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2(lean_object* v_toPure_3053_, lean_object* v___x_3054_, lean_object* v_____do__lift_3055_){
_start:
{
if (lean_obj_tag(v_____do__lift_3055_) == 0)
{
lean_object* v___x_3056_; 
v___x_3056_ = lean_apply_2(v_toPure_3053_, lean_box(0), v___x_3054_);
return v___x_3056_;
}
else
{
lean_object* v_val_3057_; lean_object* v_fst_3058_; lean_object* v___x_3059_; 
lean_dec(v___x_3054_);
v_val_3057_ = lean_ctor_get(v_____do__lift_3055_, 0);
lean_inc(v_val_3057_);
lean_dec_ref_known(v_____do__lift_3055_, 1);
v_fst_3058_ = lean_ctor_get(v_val_3057_, 0);
lean_inc(v_fst_3058_);
lean_dec(v_val_3057_);
v___x_3059_ = lean_apply_2(v_toPure_3053_, lean_box(0), v_fst_3058_);
return v___x_3059_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3(lean_object* v_toPure_3060_, lean_object* v___x_3061_, lean_object* v___x_3062_, lean_object* v_____do__lift_3063_){
_start:
{
if (lean_obj_tag(v_____do__lift_3063_) == 0)
{
lean_object* v___x_3064_; lean_object* v___x_3065_; 
lean_dec(v___x_3062_);
lean_dec(v___x_3061_);
v___x_3064_ = lean_box(0);
v___x_3065_ = lean_apply_2(v_toPure_3060_, lean_box(0), v___x_3064_);
return v___x_3065_;
}
else
{
lean_object* v_val_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3097_; 
v_val_3066_ = lean_ctor_get(v_____do__lift_3063_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v_____do__lift_3063_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3068_ = v_____do__lift_3063_;
v_isShared_3069_ = v_isSharedCheck_3097_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_val_3066_);
lean_dec(v_____do__lift_3063_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3097_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
if (lean_obj_tag(v_val_3066_) == 0)
{
lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3083_; 
lean_dec(v___x_3062_);
v_a_3070_ = lean_ctor_get(v_val_3066_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v_val_3066_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3072_ = v_val_3066_;
v_isShared_3073_ = v_isSharedCheck_3083_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v_val_3066_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3083_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3075_; 
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 0, v_a_3070_);
v___x_3075_ = v___x_3068_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3070_);
v___x_3075_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
lean_object* v___x_3076_; lean_object* v___x_3078_; 
v___x_3076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3075_);
lean_ctor_set(v___x_3076_, 1, v___x_3061_);
if (v_isShared_3073_ == 0)
{
lean_ctor_set(v___x_3072_, 0, v___x_3076_);
v___x_3078_ = v___x_3072_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_3076_);
v___x_3078_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
lean_object* v___x_3079_; lean_object* v___x_3080_; 
v___x_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3079_, 0, v___x_3078_);
v___x_3080_ = lean_apply_2(v_toPure_3060_, lean_box(0), v___x_3079_);
return v___x_3080_;
}
}
}
}
else
{
lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3095_; 
v_isSharedCheck_3095_ = !lean_is_exclusive(v_val_3066_);
if (v_isSharedCheck_3095_ == 0)
{
lean_object* v_unused_3096_; 
v_unused_3096_ = lean_ctor_get(v_val_3066_, 0);
lean_dec(v_unused_3096_);
v___x_3085_ = v_val_3066_;
v_isShared_3086_ = v_isSharedCheck_3095_;
goto v_resetjp_3084_;
}
else
{
lean_dec(v_val_3066_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3095_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3087_; lean_object* v___x_3089_; 
v___x_3087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3062_);
lean_ctor_set(v___x_3087_, 1, v___x_3061_);
if (v_isShared_3086_ == 0)
{
lean_ctor_set(v___x_3085_, 0, v___x_3087_);
v___x_3089_ = v___x_3085_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v___x_3087_);
v___x_3089_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
lean_object* v___x_3091_; 
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 0, v___x_3089_);
v___x_3091_ = v___x_3068_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v___x_3089_);
v___x_3091_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
lean_object* v___x_3092_; 
v___x_3092_ = lean_apply_2(v_toPure_3060_, lean_box(0), v___x_3091_);
return v___x_3092_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(lean_object* v_toPure_3098_, lean_object* v___x_3099_, lean_object* v_inst_3100_, lean_object* v_inst_3101_, lean_object* v_inst_3102_, lean_object* v_inst_3103_, lean_object* v_inst_3104_, lean_object* v_inst_3105_, lean_object* v_n_u2080_3106_, lean_object* v_filter_3107_, lean_object* v_view_x3f_3108_, lean_object* v_toBind_3109_, lean_object* v___f_3110_, lean_object* v___f_3111_, lean_object* v_a_3112_, lean_object* v_x_3113_, lean_object* v___y_3114_){
_start:
{
lean_object* v_snd_3115_; lean_object* v___x_3116_; lean_object* v___f_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; 
v_snd_3115_ = lean_ctor_get(v___y_3114_, 1);
lean_inc(v_snd_3115_);
lean_dec_ref(v___y_3114_);
v___x_3116_ = l_Lean_Name_appendCore(v_a_3112_, v_snd_3115_);
lean_inc(v___x_3116_);
v___f_3117_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3), 4, 3);
lean_closure_set(v___f_3117_, 0, v_toPure_3098_);
lean_closure_set(v___f_3117_, 1, v___x_3116_);
lean_closure_set(v___f_3117_, 2, v___x_3099_);
v___x_3118_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3100_, v_inst_3101_, v_inst_3102_, v_inst_3103_, v_inst_3104_, v_inst_3105_, v_n_u2080_3106_, v_filter_3107_, v_view_x3f_3108_, v___x_3116_);
lean_inc_n(v_toBind_3109_, 2);
v___x_3119_ = lean_apply_4(v_toBind_3109_, lean_box(0), lean_box(0), v___x_3118_, v___f_3110_);
v___x_3120_ = lean_apply_4(v_toBind_3109_, lean_box(0), lean_box(0), v___x_3119_, v___f_3111_);
v___x_3121_ = lean_apply_4(v_toBind_3109_, lean_box(0), lean_box(0), v___x_3120_, v___f_3117_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_toPure_3122_ = _args[0];
lean_object* v___x_3123_ = _args[1];
lean_object* v_inst_3124_ = _args[2];
lean_object* v_inst_3125_ = _args[3];
lean_object* v_inst_3126_ = _args[4];
lean_object* v_inst_3127_ = _args[5];
lean_object* v_inst_3128_ = _args[6];
lean_object* v_inst_3129_ = _args[7];
lean_object* v_n_u2080_3130_ = _args[8];
lean_object* v_filter_3131_ = _args[9];
lean_object* v_view_x3f_3132_ = _args[10];
lean_object* v_toBind_3133_ = _args[11];
lean_object* v___f_3134_ = _args[12];
lean_object* v___f_3135_ = _args[13];
lean_object* v_a_3136_ = _args[14];
lean_object* v_x_3137_ = _args[15];
lean_object* v___y_3138_ = _args[16];
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(v_toPure_3122_, v___x_3123_, v_inst_3124_, v_inst_3125_, v_inst_3126_, v_inst_3127_, v_inst_3128_, v_inst_3129_, v_n_u2080_3130_, v_filter_3131_, v_view_x3f_3132_, v_toBind_3133_, v___f_3134_, v___f_3135_, v_a_3136_, v_x_3137_, v___y_3138_);
lean_dec(v_a_3136_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(lean_object* v_toPure_3143_, lean_object* v_n_3144_, lean_object* v_inst_3145_, lean_object* v_inst_3146_, lean_object* v_inst_3147_, lean_object* v_inst_3148_, lean_object* v_inst_3149_, lean_object* v_inst_3150_, lean_object* v_n_u2080_3151_, lean_object* v_filter_3152_, lean_object* v_view_x3f_3153_, lean_object* v_toBind_3154_, lean_object* v___f_3155_, lean_object* v___f_3156_, lean_object* v___x_3157_, lean_object* v_____do__lift_3158_){
_start:
{
if (lean_obj_tag(v_____do__lift_3158_) == 0)
{
lean_object* v___x_3159_; lean_object* v___x_3160_; 
lean_dec_ref(v___x_3157_);
lean_dec(v___f_3156_);
lean_dec(v___f_3155_);
lean_dec(v_toBind_3154_);
lean_dec(v_view_x3f_3153_);
lean_dec(v_filter_3152_);
lean_dec(v_n_u2080_3151_);
lean_dec(v_inst_3150_);
lean_dec_ref(v_inst_3149_);
lean_dec_ref(v_inst_3148_);
lean_dec_ref(v_inst_3147_);
lean_dec_ref(v_inst_3146_);
lean_dec_ref(v_inst_3145_);
lean_dec(v_n_3144_);
v___x_3159_ = lean_box(0);
v___x_3160_ = lean_apply_2(v_toPure_3143_, lean_box(0), v___x_3159_);
return v___x_3160_;
}
else
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___f_3164_; lean_object* v___f_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3161_ = l_Lean_privateToUserName(v_n_3144_);
v___x_3162_ = l_Lean_Name_componentsRev(v___x_3161_);
v___x_3163_ = lean_box(0);
lean_inc(v_toPure_3143_);
v___f_3164_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2), 3, 2);
lean_closure_set(v___f_3164_, 0, v_toPure_3143_);
lean_closure_set(v___f_3164_, 1, v___x_3163_);
lean_inc(v_toBind_3154_);
v___f_3165_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed), 17, 14);
lean_closure_set(v___f_3165_, 0, v_toPure_3143_);
lean_closure_set(v___f_3165_, 1, v___x_3163_);
lean_closure_set(v___f_3165_, 2, v_inst_3145_);
lean_closure_set(v___f_3165_, 3, v_inst_3146_);
lean_closure_set(v___f_3165_, 4, v_inst_3147_);
lean_closure_set(v___f_3165_, 5, v_inst_3148_);
lean_closure_set(v___f_3165_, 6, v_inst_3149_);
lean_closure_set(v___f_3165_, 7, v_inst_3150_);
lean_closure_set(v___f_3165_, 8, v_n_u2080_3151_);
lean_closure_set(v___f_3165_, 9, v_filter_3152_);
lean_closure_set(v___f_3165_, 10, v_view_x3f_3153_);
lean_closure_set(v___f_3165_, 11, v_toBind_3154_);
lean_closure_set(v___f_3165_, 12, v___f_3155_);
lean_closure_set(v___f_3165_, 13, v___f_3156_);
v___x_3166_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0));
v___x_3167_ = l_List_forIn_x27_loop___redArg(v___x_3157_, v___f_3165_, v___x_3162_, v___x_3166_);
lean_dec(v___x_3162_);
v___x_3168_ = lean_apply_4(v_toBind_3154_, lean_box(0), lean_box(0), v___x_3167_, v___f_3164_);
return v___x_3168_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed(lean_object* v_toPure_3169_, lean_object* v_n_3170_, lean_object* v_inst_3171_, lean_object* v_inst_3172_, lean_object* v_inst_3173_, lean_object* v_inst_3174_, lean_object* v_inst_3175_, lean_object* v_inst_3176_, lean_object* v_n_u2080_3177_, lean_object* v_filter_3178_, lean_object* v_view_x3f_3179_, lean_object* v_toBind_3180_, lean_object* v___f_3181_, lean_object* v___f_3182_, lean_object* v___x_3183_, lean_object* v_____do__lift_3184_){
_start:
{
lean_object* v_res_3185_; 
v_res_3185_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(v_toPure_3169_, v_n_3170_, v_inst_3171_, v_inst_3172_, v_inst_3173_, v_inst_3174_, v_inst_3175_, v_inst_3176_, v_n_u2080_3177_, v_filter_3178_, v_view_x3f_3179_, v_toBind_3180_, v___f_3181_, v___f_3182_, v___x_3183_, v_____do__lift_3184_);
lean_dec(v_____do__lift_3184_);
return v_res_3185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(lean_object* v_inst_3186_, lean_object* v_inst_3187_, lean_object* v_inst_3188_, lean_object* v_inst_3189_, lean_object* v_inst_3190_, lean_object* v_inst_3191_, lean_object* v_n_u2080_3192_, lean_object* v_filter_3193_, lean_object* v_view_x3f_3194_, lean_object* v_n_3195_){
_start:
{
lean_object* v___f_3196_; lean_object* v___f_3197_; lean_object* v___f_3198_; lean_object* v___f_3199_; lean_object* v___f_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___y_3207_; uint8_t v___x_3215_; 
lean_inc_ref_n(v_inst_3186_, 7);
v___f_3196_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3196_, 0, v_inst_3186_);
v___f_3197_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3197_, 0, v_inst_3186_);
v___f_3198_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3198_, 0, v_inst_3186_);
v___f_3199_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3199_, 0, v_inst_3186_);
v___f_3200_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3200_, 0, v_inst_3186_);
v___x_3201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3201_, 0, v___f_3196_);
lean_ctor_set(v___x_3201_, 1, v___f_3197_);
v___x_3202_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3202_, 0, lean_box(0));
lean_closure_set(v___x_3202_, 1, v_inst_3186_);
v___x_3203_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3201_);
lean_ctor_set(v___x_3203_, 1, v___x_3202_);
lean_ctor_set(v___x_3203_, 2, v___f_3198_);
lean_ctor_set(v___x_3203_, 3, v___f_3199_);
lean_ctor_set(v___x_3203_, 4, v___f_3200_);
v___x_3204_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3204_, 0, lean_box(0));
lean_closure_set(v___x_3204_, 1, v_inst_3186_);
v___x_3205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3203_);
lean_ctor_set(v___x_3205_, 1, v___x_3204_);
v___x_3215_ = l_Lean_Name_hasMacroScopes(v_n_3195_);
if (v___x_3215_ == 0)
{
lean_object* v_toApplicative_3216_; lean_object* v_toPure_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v_toApplicative_3216_ = lean_ctor_get(v_inst_3186_, 0);
v_toPure_3217_ = lean_ctor_get(v_toApplicative_3216_, 1);
v___x_3218_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
lean_inc(v_toPure_3217_);
v___x_3219_ = lean_apply_2(v_toPure_3217_, lean_box(0), v___x_3218_);
v___y_3207_ = v___x_3219_;
goto v___jp_3206_;
}
else
{
lean_object* v_toApplicative_3220_; lean_object* v_toPure_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v_toApplicative_3220_ = lean_ctor_get(v_inst_3186_, 0);
v_toPure_3221_ = lean_ctor_get(v_toApplicative_3220_, 1);
v___x_3222_ = lean_box(0);
lean_inc(v_toPure_3221_);
v___x_3223_ = lean_apply_2(v_toPure_3221_, lean_box(0), v___x_3222_);
v___y_3207_ = v___x_3223_;
goto v___jp_3206_;
}
v___jp_3206_:
{
lean_object* v_toApplicative_3208_; lean_object* v_toBind_3209_; lean_object* v_toPure_3210_; lean_object* v___f_3211_; lean_object* v___f_3212_; lean_object* v___f_3213_; lean_object* v___x_3214_; 
v_toApplicative_3208_ = lean_ctor_get(v_inst_3186_, 0);
v_toBind_3209_ = lean_ctor_get(v_inst_3186_, 1);
lean_inc_n(v_toBind_3209_, 2);
v_toPure_3210_ = lean_ctor_get(v_toApplicative_3208_, 1);
lean_inc_n(v_toPure_3210_, 3);
v___f_3211_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3211_, 0, v_toPure_3210_);
v___f_3212_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3212_, 0, v_toPure_3210_);
v___f_3213_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed), 16, 15);
lean_closure_set(v___f_3213_, 0, v_toPure_3210_);
lean_closure_set(v___f_3213_, 1, v_n_3195_);
lean_closure_set(v___f_3213_, 2, v_inst_3186_);
lean_closure_set(v___f_3213_, 3, v_inst_3187_);
lean_closure_set(v___f_3213_, 4, v_inst_3188_);
lean_closure_set(v___f_3213_, 5, v_inst_3189_);
lean_closure_set(v___f_3213_, 6, v_inst_3190_);
lean_closure_set(v___f_3213_, 7, v_inst_3191_);
lean_closure_set(v___f_3213_, 8, v_n_u2080_3192_);
lean_closure_set(v___f_3213_, 9, v_filter_3193_);
lean_closure_set(v___f_3213_, 10, v_view_x3f_3194_);
lean_closure_set(v___f_3213_, 11, v_toBind_3209_);
lean_closure_set(v___f_3213_, 12, v___f_3212_);
lean_closure_set(v___f_3213_, 13, v___f_3211_);
lean_closure_set(v___f_3213_, 14, v___x_3205_);
v___x_3214_ = lean_apply_4(v_toBind_3209_, lean_box(0), lean_box(0), v___y_3207_, v___f_3213_);
return v___x_3214_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore(lean_object* v_m_3224_, lean_object* v_inst_3225_, lean_object* v_inst_3226_, lean_object* v_inst_3227_, lean_object* v_inst_3228_, lean_object* v_inst_3229_, lean_object* v_inst_3230_, lean_object* v_n_u2080_3231_, lean_object* v_filter_3232_, lean_object* v_view_x3f_3233_, lean_object* v_n_3234_){
_start:
{
lean_object* v___x_3235_; 
v___x_3235_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3225_, v_inst_3226_, v_inst_3227_, v_inst_3228_, v_inst_3229_, v_inst_3230_, v_n_u2080_3231_, v_filter_3232_, v_view_x3f_3233_, v_n_3234_);
return v___x_3235_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(lean_object* v_n_u2081_3236_, lean_object* v_x1_3237_, lean_object* v_x2_3238_){
_start:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; uint8_t v___x_3241_; 
v___x_3239_ = l_Lean_Name_getPrefix(v_x2_3238_);
v___x_3240_ = l_Lean_Name_getPrefix(v_n_u2081_3236_);
v___x_3241_ = l_Lean_Name_isPrefixOf(v___x_3239_, v___x_3240_);
lean_dec(v___x_3240_);
lean_dec(v___x_3239_);
if (v___x_3241_ == 0)
{
lean_dec(v_x2_3238_);
return v_x1_3237_;
}
else
{
lean_object* v___x_3242_; 
v___x_3242_ = lean_array_push(v_x1_3237_, v_x2_3238_);
return v___x_3242_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed(lean_object* v_n_u2081_3243_, lean_object* v_x1_3244_, lean_object* v_x2_3245_){
_start:
{
lean_object* v_res_3246_; 
v_res_3246_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(v_n_u2081_3243_, v_x1_3244_, v_x2_3245_);
lean_dec(v_n_u2081_3243_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__1(lean_object* v_view_3247_, lean_object* v_n_u2081_3248_, lean_object* v_inst_3249_, lean_object* v_inst_3250_, lean_object* v_inst_3251_, lean_object* v_inst_3252_, lean_object* v_inst_3253_, lean_object* v_inst_3254_, lean_object* v_n_u2080_3255_, lean_object* v_filter_3256_, lean_object* v_toPure_3257_, lean_object* v_____do__lift_3258_){
_start:
{
if (lean_obj_tag(v_____do__lift_3258_) == 0)
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; 
lean_dec(v_toPure_3257_);
v___x_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3259_, 0, v_view_3247_);
v___x_3260_ = l_Lean_rootNamespace;
v___x_3261_ = l_Lean_Name_append(v___x_3260_, v_n_u2081_3248_);
v___x_3262_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3249_, v_inst_3250_, v_inst_3251_, v_inst_3252_, v_inst_3253_, v_inst_3254_, v_n_u2080_3255_, v_filter_3256_, v___x_3259_, v___x_3261_);
return v___x_3262_;
}
else
{
lean_object* v___x_3263_; 
lean_dec(v_filter_3256_);
lean_dec(v_n_u2080_3255_);
lean_dec(v_inst_3254_);
lean_dec_ref(v_inst_3253_);
lean_dec_ref(v_inst_3252_);
lean_dec_ref(v_inst_3251_);
lean_dec_ref(v_inst_3250_);
lean_dec_ref(v_inst_3249_);
lean_dec(v_n_u2081_3248_);
lean_dec_ref(v_view_3247_);
v___x_3263_ = lean_apply_2(v_toPure_3257_, lean_box(0), v_____do__lift_3258_);
return v___x_3263_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(lean_object* v_toPure_3264_, lean_object* v_inst_3265_, lean_object* v_inst_3266_, lean_object* v_inst_3267_, lean_object* v_inst_3268_, lean_object* v_inst_3269_, lean_object* v_inst_3270_, lean_object* v_n_u2080_3271_, lean_object* v_filter_3272_, lean_object* v___x_3273_, lean_object* v_toBind_3274_, lean_object* v___f_3275_, uint8_t v_allowHorizAliases_3276_, lean_object* v___f_3277_, lean_object* v_____do__lift_3278_){
_start:
{
lean_object* v_aliases_3280_; 
if (lean_obj_tag(v_____do__lift_3278_) == 0)
{
lean_object* v___x_3286_; lean_object* v___x_3287_; 
lean_dec_ref(v___f_3277_);
lean_dec(v___f_3275_);
lean_dec(v_toBind_3274_);
lean_dec_ref(v___x_3273_);
lean_dec(v_filter_3272_);
lean_dec(v_n_u2080_3271_);
lean_dec(v_inst_3270_);
lean_dec_ref(v_inst_3269_);
lean_dec_ref(v_inst_3268_);
lean_dec_ref(v_inst_3267_);
lean_dec_ref(v_inst_3266_);
lean_dec_ref(v_inst_3265_);
v___x_3286_ = lean_box(0);
v___x_3287_ = lean_apply_2(v_toPure_3264_, lean_box(0), v___x_3286_);
return v___x_3287_;
}
else
{
lean_object* v_val_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; 
lean_dec(v_toPure_3264_);
v_val_3288_ = lean_ctor_get(v_____do__lift_3278_, 0);
lean_inc(v_val_3288_);
lean_dec_ref_known(v_____do__lift_3278_, 1);
lean_inc(v_n_u2080_3271_);
v___x_3289_ = l_Lean_getRevAliases(v_val_3288_, v_n_u2080_3271_);
v___x_3290_ = lean_array_mk(v___x_3289_);
if (v_allowHorizAliases_3276_ == 0)
{
lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; uint8_t v___x_3295_; 
v___x_3291_ = lean_unsigned_to_nat(0u);
v___x_3292_ = lean_array_get_size(v___x_3290_);
v___x_3293_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
v___x_3294_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v___x_3295_ = lean_nat_dec_lt(v___x_3291_, v___x_3292_);
if (v___x_3295_ == 0)
{
lean_dec_ref(v___x_3290_);
lean_dec_ref(v___f_3277_);
v_aliases_3280_ = v___x_3293_;
goto v___jp_3279_;
}
else
{
size_t v___x_3296_; size_t v___x_3297_; lean_object* v___x_3298_; 
v___x_3296_ = ((size_t)0ULL);
v___x_3297_ = lean_usize_of_nat(v___x_3292_);
v___x_3298_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3294_, v___f_3277_, v___x_3290_, v___x_3296_, v___x_3297_, v___x_3293_);
v_aliases_3280_ = v___x_3298_;
goto v___jp_3279_;
}
}
else
{
lean_dec_ref(v___f_3277_);
v_aliases_3280_ = v___x_3290_;
goto v___jp_3279_;
}
}
v___jp_3279_:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; 
v___x_3281_ = lean_box(0);
v___x_3282_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore), 11, 10);
lean_closure_set(v___x_3282_, 0, lean_box(0));
lean_closure_set(v___x_3282_, 1, v_inst_3265_);
lean_closure_set(v___x_3282_, 2, v_inst_3266_);
lean_closure_set(v___x_3282_, 3, v_inst_3267_);
lean_closure_set(v___x_3282_, 4, v_inst_3268_);
lean_closure_set(v___x_3282_, 5, v_inst_3269_);
lean_closure_set(v___x_3282_, 6, v_inst_3270_);
lean_closure_set(v___x_3282_, 7, v_n_u2080_3271_);
lean_closure_set(v___x_3282_, 8, v_filter_3272_);
lean_closure_set(v___x_3282_, 9, v___x_3281_);
v___x_3283_ = lean_unsigned_to_nat(0u);
v___x_3284_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_box(0), lean_box(0), lean_box(0), v___x_3273_, v___x_3282_, v_aliases_3280_, v___x_3283_);
v___x_3285_ = lean_apply_4(v_toBind_3274_, lean_box(0), lean_box(0), v___x_3284_, v___f_3275_);
return v___x_3285_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed(lean_object* v_toPure_3299_, lean_object* v_inst_3300_, lean_object* v_inst_3301_, lean_object* v_inst_3302_, lean_object* v_inst_3303_, lean_object* v_inst_3304_, lean_object* v_inst_3305_, lean_object* v_n_u2080_3306_, lean_object* v_filter_3307_, lean_object* v___x_3308_, lean_object* v_toBind_3309_, lean_object* v___f_3310_, lean_object* v_allowHorizAliases_3311_, lean_object* v___f_3312_, lean_object* v_____do__lift_3313_){
_start:
{
uint8_t v_allowHorizAliases_boxed_3314_; lean_object* v_res_3315_; 
v_allowHorizAliases_boxed_3314_ = lean_unbox(v_allowHorizAliases_3311_);
v_res_3315_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(v_toPure_3299_, v_inst_3300_, v_inst_3301_, v_inst_3302_, v_inst_3303_, v_inst_3304_, v_inst_3305_, v_n_u2080_3306_, v_filter_3307_, v___x_3308_, v_toBind_3309_, v___f_3310_, v_allowHorizAliases_boxed_3314_, v___f_3312_, v_____do__lift_3313_);
return v_res_3315_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__3(lean_object* v_toPure_3316_, lean_object* v_____do__lift_3317_){
_start:
{
lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3318_, 0, v_____do__lift_3317_);
v___x_3319_ = lean_apply_2(v_toPure_3316_, lean_box(0), v___x_3318_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__4(lean_object* v_n_u2081_3320_, lean_object* v_inst_3321_, lean_object* v_inst_3322_, lean_object* v_inst_3323_, lean_object* v_inst_3324_, lean_object* v_inst_3325_, lean_object* v_inst_3326_, lean_object* v_n_u2080_3327_, lean_object* v_filter_3328_, lean_object* v___x_3329_, lean_object* v_toPure_3330_, lean_object* v_____do__lift_3331_){
_start:
{
if (lean_obj_tag(v_____do__lift_3331_) == 0)
{
lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; 
lean_dec(v_toPure_3330_);
v___x_3332_ = l_Lean_rootNamespace;
v___x_3333_ = l_Lean_Name_append(v___x_3332_, v_n_u2081_3320_);
v___x_3334_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3321_, v_inst_3322_, v_inst_3323_, v_inst_3324_, v_inst_3325_, v_inst_3326_, v_n_u2080_3327_, v_filter_3328_, v___x_3329_, v___x_3333_);
return v___x_3334_;
}
else
{
lean_object* v___x_3335_; 
lean_dec(v___x_3329_);
lean_dec(v_filter_3328_);
lean_dec(v_n_u2080_3327_);
lean_dec(v_inst_3326_);
lean_dec_ref(v_inst_3325_);
lean_dec_ref(v_inst_3324_);
lean_dec_ref(v_inst_3323_);
lean_dec_ref(v_inst_3322_);
lean_dec_ref(v_inst_3321_);
lean_dec(v_n_u2081_3320_);
v___x_3335_ = lean_apply_2(v_toPure_3330_, lean_box(0), v_____do__lift_3331_);
return v___x_3335_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg(lean_object* v_inst_3336_, lean_object* v_inst_3337_, lean_object* v_inst_3338_, lean_object* v_inst_3339_, lean_object* v_inst_3340_, lean_object* v_inst_3341_, lean_object* v_n_u2080_3342_, uint8_t v_fullNames_3343_, uint8_t v_allowHorizAliases_3344_, lean_object* v_filter_3345_){
_start:
{
lean_object* v_view_3346_; lean_object* v_name_3347_; lean_object* v_n_u2081_3348_; lean_object* v___x_3349_; 
lean_inc(v_n_u2080_3342_);
v_view_3346_ = l_Lean_extractMacroScopes(v_n_u2080_3342_);
v_name_3347_ = lean_ctor_get(v_view_3346_, 0);
lean_inc(v_name_3347_);
v_n_u2081_3348_ = l_Lean_privateToUserName(v_name_3347_);
lean_inc_ref(v_inst_3336_);
v___x_3349_ = l_OptionT_instAlternative___redArg(v_inst_3336_);
if (v_fullNames_3343_ == 0)
{
lean_object* v_toApplicative_3350_; lean_object* v_getEnv_3351_; lean_object* v_toBind_3352_; lean_object* v_toPure_3353_; lean_object* v___f_3354_; lean_object* v___f_3355_; lean_object* v___x_3356_; lean_object* v___f_3357_; lean_object* v___f_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v_toApplicative_3350_ = lean_ctor_get(v_inst_3336_, 0);
v_getEnv_3351_ = lean_ctor_get(v_inst_3338_, 0);
lean_inc(v_getEnv_3351_);
v_toBind_3352_ = lean_ctor_get(v_inst_3336_, 1);
lean_inc_n(v_toBind_3352_, 3);
v_toPure_3353_ = lean_ctor_get(v_toApplicative_3350_, 1);
lean_inc_n(v_toPure_3353_, 3);
lean_inc(v_n_u2081_3348_);
v___f_3354_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3354_, 0, v_n_u2081_3348_);
lean_inc(v_filter_3345_);
lean_inc(v_n_u2080_3342_);
lean_inc(v_inst_3341_);
lean_inc_ref(v_inst_3340_);
lean_inc_ref(v_inst_3339_);
lean_inc_ref(v_inst_3338_);
lean_inc_ref(v_inst_3337_);
lean_inc_ref(v_inst_3336_);
v___f_3355_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3355_, 0, v_view_3346_);
lean_closure_set(v___f_3355_, 1, v_n_u2081_3348_);
lean_closure_set(v___f_3355_, 2, v_inst_3336_);
lean_closure_set(v___f_3355_, 3, v_inst_3337_);
lean_closure_set(v___f_3355_, 4, v_inst_3338_);
lean_closure_set(v___f_3355_, 5, v_inst_3339_);
lean_closure_set(v___f_3355_, 6, v_inst_3340_);
lean_closure_set(v___f_3355_, 7, v_inst_3341_);
lean_closure_set(v___f_3355_, 8, v_n_u2080_3342_);
lean_closure_set(v___f_3355_, 9, v_filter_3345_);
lean_closure_set(v___f_3355_, 10, v_toPure_3353_);
v___x_3356_ = lean_box(v_allowHorizAliases_3344_);
v___f_3357_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed), 15, 14);
lean_closure_set(v___f_3357_, 0, v_toPure_3353_);
lean_closure_set(v___f_3357_, 1, v_inst_3336_);
lean_closure_set(v___f_3357_, 2, v_inst_3337_);
lean_closure_set(v___f_3357_, 3, v_inst_3338_);
lean_closure_set(v___f_3357_, 4, v_inst_3339_);
lean_closure_set(v___f_3357_, 5, v_inst_3340_);
lean_closure_set(v___f_3357_, 6, v_inst_3341_);
lean_closure_set(v___f_3357_, 7, v_n_u2080_3342_);
lean_closure_set(v___f_3357_, 8, v_filter_3345_);
lean_closure_set(v___f_3357_, 9, v___x_3349_);
lean_closure_set(v___f_3357_, 10, v_toBind_3352_);
lean_closure_set(v___f_3357_, 11, v___f_3355_);
lean_closure_set(v___f_3357_, 12, v___x_3356_);
lean_closure_set(v___f_3357_, 13, v___f_3354_);
v___f_3358_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3358_, 0, v_toPure_3353_);
v___x_3359_ = lean_apply_4(v_toBind_3352_, lean_box(0), lean_box(0), v_getEnv_3351_, v___f_3358_);
v___x_3360_ = lean_apply_4(v_toBind_3352_, lean_box(0), lean_box(0), v___x_3359_, v___f_3357_);
return v___x_3360_;
}
else
{
lean_object* v_toApplicative_3361_; lean_object* v_toBind_3362_; lean_object* v_toPure_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___f_3366_; lean_object* v___x_3367_; 
lean_dec_ref(v___x_3349_);
v_toApplicative_3361_ = lean_ctor_get(v_inst_3336_, 0);
v_toBind_3362_ = lean_ctor_get(v_inst_3336_, 1);
lean_inc(v_toBind_3362_);
v_toPure_3363_ = lean_ctor_get(v_toApplicative_3361_, 1);
lean_inc(v_toPure_3363_);
v___x_3364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3364_, 0, v_view_3346_);
lean_inc(v_n_u2081_3348_);
lean_inc_ref(v___x_3364_);
lean_inc(v_filter_3345_);
lean_inc(v_n_u2080_3342_);
lean_inc(v_inst_3341_);
lean_inc_ref(v_inst_3340_);
lean_inc_ref(v_inst_3339_);
lean_inc_ref(v_inst_3338_);
lean_inc_ref(v_inst_3337_);
lean_inc_ref(v_inst_3336_);
v___x_3365_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3336_, v_inst_3337_, v_inst_3338_, v_inst_3339_, v_inst_3340_, v_inst_3341_, v_n_u2080_3342_, v_filter_3345_, v___x_3364_, v_n_u2081_3348_);
v___f_3366_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__4), 12, 11);
lean_closure_set(v___f_3366_, 0, v_n_u2081_3348_);
lean_closure_set(v___f_3366_, 1, v_inst_3336_);
lean_closure_set(v___f_3366_, 2, v_inst_3337_);
lean_closure_set(v___f_3366_, 3, v_inst_3338_);
lean_closure_set(v___f_3366_, 4, v_inst_3339_);
lean_closure_set(v___f_3366_, 5, v_inst_3340_);
lean_closure_set(v___f_3366_, 6, v_inst_3341_);
lean_closure_set(v___f_3366_, 7, v_n_u2080_3342_);
lean_closure_set(v___f_3366_, 8, v_filter_3345_);
lean_closure_set(v___f_3366_, 9, v___x_3364_);
lean_closure_set(v___f_3366_, 10, v_toPure_3363_);
v___x_3367_ = lean_apply_4(v_toBind_3362_, lean_box(0), lean_box(0), v___x_3365_, v___f_3366_);
return v___x_3367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___boxed(lean_object* v_inst_3368_, lean_object* v_inst_3369_, lean_object* v_inst_3370_, lean_object* v_inst_3371_, lean_object* v_inst_3372_, lean_object* v_inst_3373_, lean_object* v_n_u2080_3374_, lean_object* v_fullNames_3375_, lean_object* v_allowHorizAliases_3376_, lean_object* v_filter_3377_){
_start:
{
uint8_t v_fullNames_boxed_3378_; uint8_t v_allowHorizAliases_boxed_3379_; lean_object* v_res_3380_; 
v_fullNames_boxed_3378_ = lean_unbox(v_fullNames_3375_);
v_allowHorizAliases_boxed_3379_ = lean_unbox(v_allowHorizAliases_3376_);
v_res_3380_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3368_, v_inst_3369_, v_inst_3370_, v_inst_3371_, v_inst_3372_, v_inst_3373_, v_n_u2080_3374_, v_fullNames_boxed_3378_, v_allowHorizAliases_boxed_3379_, v_filter_3377_);
return v_res_3380_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f(lean_object* v_m_3381_, lean_object* v_inst_3382_, lean_object* v_inst_3383_, lean_object* v_inst_3384_, lean_object* v_inst_3385_, lean_object* v_inst_3386_, lean_object* v_inst_3387_, lean_object* v_n_u2080_3388_, uint8_t v_fullNames_3389_, uint8_t v_allowHorizAliases_3390_, lean_object* v_filter_3391_){
_start:
{
lean_object* v___x_3392_; 
v___x_3392_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3382_, v_inst_3383_, v_inst_3384_, v_inst_3385_, v_inst_3386_, v_inst_3387_, v_n_u2080_3388_, v_fullNames_3389_, v_allowHorizAliases_3390_, v_filter_3391_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___boxed(lean_object* v_m_3393_, lean_object* v_inst_3394_, lean_object* v_inst_3395_, lean_object* v_inst_3396_, lean_object* v_inst_3397_, lean_object* v_inst_3398_, lean_object* v_inst_3399_, lean_object* v_n_u2080_3400_, lean_object* v_fullNames_3401_, lean_object* v_allowHorizAliases_3402_, lean_object* v_filter_3403_){
_start:
{
uint8_t v_fullNames_boxed_3404_; uint8_t v_allowHorizAliases_boxed_3405_; lean_object* v_res_3406_; 
v_fullNames_boxed_3404_ = lean_unbox(v_fullNames_3401_);
v_allowHorizAliases_boxed_3405_ = lean_unbox(v_allowHorizAliases_3402_);
v_res_3406_ = l_Lean_unresolveNameGlobal_x3f(v_m_3393_, v_inst_3394_, v_inst_3395_, v_inst_3396_, v_inst_3397_, v_inst_3398_, v_inst_3399_, v_n_u2080_3400_, v_fullNames_boxed_3404_, v_allowHorizAliases_boxed_3405_, v_filter_3403_);
return v_res_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___lam__0(lean_object* v_toPure_3407_, lean_object* v_n_u2080_3408_, lean_object* v_n_x3f_3409_){
_start:
{
if (lean_obj_tag(v_n_x3f_3409_) == 0)
{
lean_object* v___x_3410_; 
v___x_3410_ = lean_apply_2(v_toPure_3407_, lean_box(0), v_n_u2080_3408_);
return v___x_3410_;
}
else
{
lean_object* v_val_3411_; lean_object* v___x_3412_; 
lean_dec(v_n_u2080_3408_);
v_val_3411_ = lean_ctor_get(v_n_x3f_3409_, 0);
lean_inc(v_val_3411_);
lean_dec_ref_known(v_n_x3f_3409_, 1);
v___x_3412_ = lean_apply_2(v_toPure_3407_, lean_box(0), v_val_3411_);
return v___x_3412_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg(lean_object* v_inst_3413_, lean_object* v_inst_3414_, lean_object* v_inst_3415_, lean_object* v_inst_3416_, lean_object* v_inst_3417_, lean_object* v_inst_3418_, lean_object* v_n_u2080_3419_, uint8_t v_fullNames_3420_, uint8_t v_allowHorizAliases_3421_, lean_object* v_filter_3422_){
_start:
{
lean_object* v_toApplicative_3423_; lean_object* v_toBind_3424_; lean_object* v_toPure_3425_; lean_object* v___x_3426_; lean_object* v___f_3427_; lean_object* v___x_3428_; 
v_toApplicative_3423_ = lean_ctor_get(v_inst_3413_, 0);
v_toBind_3424_ = lean_ctor_get(v_inst_3413_, 1);
lean_inc(v_toBind_3424_);
v_toPure_3425_ = lean_ctor_get(v_toApplicative_3423_, 1);
lean_inc(v_toPure_3425_);
lean_inc(v_n_u2080_3419_);
v___x_3426_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3413_, v_inst_3414_, v_inst_3415_, v_inst_3416_, v_inst_3417_, v_inst_3418_, v_n_u2080_3419_, v_fullNames_3420_, v_allowHorizAliases_3421_, v_filter_3422_);
v___f_3427_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3427_, 0, v_toPure_3425_);
lean_closure_set(v___f_3427_, 1, v_n_u2080_3419_);
v___x_3428_ = lean_apply_4(v_toBind_3424_, lean_box(0), lean_box(0), v___x_3426_, v___f_3427_);
return v___x_3428_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___boxed(lean_object* v_inst_3429_, lean_object* v_inst_3430_, lean_object* v_inst_3431_, lean_object* v_inst_3432_, lean_object* v_inst_3433_, lean_object* v_inst_3434_, lean_object* v_n_u2080_3435_, lean_object* v_fullNames_3436_, lean_object* v_allowHorizAliases_3437_, lean_object* v_filter_3438_){
_start:
{
uint8_t v_fullNames_boxed_3439_; uint8_t v_allowHorizAliases_boxed_3440_; lean_object* v_res_3441_; 
v_fullNames_boxed_3439_ = lean_unbox(v_fullNames_3436_);
v_allowHorizAliases_boxed_3440_ = lean_unbox(v_allowHorizAliases_3437_);
v_res_3441_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3429_, v_inst_3430_, v_inst_3431_, v_inst_3432_, v_inst_3433_, v_inst_3434_, v_n_u2080_3435_, v_fullNames_boxed_3439_, v_allowHorizAliases_boxed_3440_, v_filter_3438_);
return v_res_3441_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal(lean_object* v_m_3442_, lean_object* v_inst_3443_, lean_object* v_inst_3444_, lean_object* v_inst_3445_, lean_object* v_inst_3446_, lean_object* v_inst_3447_, lean_object* v_inst_3448_, lean_object* v_n_u2080_3449_, uint8_t v_fullNames_3450_, uint8_t v_allowHorizAliases_3451_, lean_object* v_filter_3452_){
_start:
{
lean_object* v___x_3453_; 
v___x_3453_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3443_, v_inst_3444_, v_inst_3445_, v_inst_3446_, v_inst_3447_, v_inst_3448_, v_n_u2080_3449_, v_fullNames_3450_, v_allowHorizAliases_3451_, v_filter_3452_);
return v___x_3453_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___boxed(lean_object* v_m_3454_, lean_object* v_inst_3455_, lean_object* v_inst_3456_, lean_object* v_inst_3457_, lean_object* v_inst_3458_, lean_object* v_inst_3459_, lean_object* v_inst_3460_, lean_object* v_n_u2080_3461_, lean_object* v_fullNames_3462_, lean_object* v_allowHorizAliases_3463_, lean_object* v_filter_3464_){
_start:
{
uint8_t v_fullNames_boxed_3465_; uint8_t v_allowHorizAliases_boxed_3466_; lean_object* v_res_3467_; 
v_fullNames_boxed_3465_ = lean_unbox(v_fullNames_3462_);
v_allowHorizAliases_boxed_3466_ = lean_unbox(v_allowHorizAliases_3463_);
v_res_3467_ = l_Lean_unresolveNameGlobal(v_m_3454_, v_inst_3455_, v_inst_3456_, v_inst_3457_, v_inst_3458_, v_inst_3459_, v_inst_3460_, v_n_u2080_3461_, v_fullNames_boxed_3465_, v_allowHorizAliases_boxed_3466_, v_filter_3464_);
return v_res_3467_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0(lean_object* v_toFunctor_3469_, lean_object* v_inst_3470_, lean_object* v_inst_3471_, lean_object* v_inst_3472_, lean_object* v_inst_3473_, lean_object* v_inst_3474_, lean_object* v_inst_3475_, lean_object* v_inst_3476_, lean_object* v_n_3477_){
_start:
{
lean_object* v_map_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; 
v_map_3478_ = lean_ctor_get(v_toFunctor_3469_, 0);
lean_inc(v_map_3478_);
lean_dec_ref(v_toFunctor_3469_);
v___x_3479_ = ((lean_object*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0));
v___x_3480_ = l_Lean_resolveLocalName___redArg(v_inst_3470_, v_inst_3471_, v_inst_3472_, v_inst_3473_, v_inst_3474_, v_inst_3475_, v_inst_3476_, v_n_3477_);
v___x_3481_ = lean_apply_4(v_map_3478_, lean_box(0), lean_box(0), v___x_3479_, v___x_3480_);
return v___x_3481_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(lean_object* v_inst_3482_, lean_object* v_inst_3483_, lean_object* v_inst_3484_, lean_object* v_inst_3485_, lean_object* v_inst_3486_, lean_object* v_inst_3487_, lean_object* v_inst_3488_, lean_object* v_n_u2080_3489_, uint8_t v_fullNames_3490_){
_start:
{
lean_object* v_toApplicative_3491_; lean_object* v_toFunctor_3492_; uint8_t v___x_3493_; lean_object* v___f_3494_; lean_object* v___x_3495_; 
v_toApplicative_3491_ = lean_ctor_get(v_inst_3482_, 0);
v_toFunctor_3492_ = lean_ctor_get(v_toApplicative_3491_, 0);
v___x_3493_ = 0;
lean_inc(v_inst_3487_);
lean_inc_ref(v_inst_3486_);
lean_inc_ref(v_inst_3485_);
lean_inc_ref(v_inst_3484_);
lean_inc_ref(v_inst_3483_);
lean_inc_ref(v_inst_3482_);
lean_inc_ref(v_toFunctor_3492_);
v___f_3494_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0), 9, 8);
lean_closure_set(v___f_3494_, 0, v_toFunctor_3492_);
lean_closure_set(v___f_3494_, 1, v_inst_3482_);
lean_closure_set(v___f_3494_, 2, v_inst_3483_);
lean_closure_set(v___f_3494_, 3, v_inst_3484_);
lean_closure_set(v___f_3494_, 4, v_inst_3485_);
lean_closure_set(v___f_3494_, 5, v_inst_3486_);
lean_closure_set(v___f_3494_, 6, v_inst_3487_);
lean_closure_set(v___f_3494_, 7, v_inst_3488_);
v___x_3495_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3482_, v_inst_3483_, v_inst_3484_, v_inst_3485_, v_inst_3486_, v_inst_3487_, v_n_u2080_3489_, v_fullNames_3490_, v___x_3493_, v___f_3494_);
return v___x_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___boxed(lean_object* v_inst_3496_, lean_object* v_inst_3497_, lean_object* v_inst_3498_, lean_object* v_inst_3499_, lean_object* v_inst_3500_, lean_object* v_inst_3501_, lean_object* v_inst_3502_, lean_object* v_n_u2080_3503_, lean_object* v_fullNames_3504_){
_start:
{
uint8_t v_fullNames_boxed_3505_; lean_object* v_res_3506_; 
v_fullNames_boxed_3505_ = lean_unbox(v_fullNames_3504_);
v_res_3506_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3496_, v_inst_3497_, v_inst_3498_, v_inst_3499_, v_inst_3500_, v_inst_3501_, v_inst_3502_, v_n_u2080_3503_, v_fullNames_boxed_3505_);
return v_res_3506_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f(lean_object* v_m_3507_, lean_object* v_inst_3508_, lean_object* v_inst_3509_, lean_object* v_inst_3510_, lean_object* v_inst_3511_, lean_object* v_inst_3512_, lean_object* v_inst_3513_, lean_object* v_inst_3514_, lean_object* v_n_u2080_3515_, uint8_t v_fullNames_3516_){
_start:
{
lean_object* v___x_3517_; 
v___x_3517_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3508_, v_inst_3509_, v_inst_3510_, v_inst_3511_, v_inst_3512_, v_inst_3513_, v_inst_3514_, v_n_u2080_3515_, v_fullNames_3516_);
return v___x_3517_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___boxed(lean_object* v_m_3518_, lean_object* v_inst_3519_, lean_object* v_inst_3520_, lean_object* v_inst_3521_, lean_object* v_inst_3522_, lean_object* v_inst_3523_, lean_object* v_inst_3524_, lean_object* v_inst_3525_, lean_object* v_n_u2080_3526_, lean_object* v_fullNames_3527_){
_start:
{
uint8_t v_fullNames_boxed_3528_; lean_object* v_res_3529_; 
v_fullNames_boxed_3528_ = lean_unbox(v_fullNames_3527_);
v_res_3529_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f(v_m_3518_, v_inst_3519_, v_inst_3520_, v_inst_3521_, v_inst_3522_, v_inst_3523_, v_inst_3524_, v_inst_3525_, v_n_u2080_3526_, v_fullNames_boxed_3528_);
return v_res_3529_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg(lean_object* v_inst_3530_, lean_object* v_inst_3531_, lean_object* v_inst_3532_, lean_object* v_inst_3533_, lean_object* v_inst_3534_, lean_object* v_inst_3535_, lean_object* v_inst_3536_, lean_object* v_n_u2080_3537_, uint8_t v_fullNames_3538_){
_start:
{
lean_object* v_toApplicative_3539_; lean_object* v_toBind_3540_; lean_object* v_toPure_3541_; lean_object* v___x_3542_; lean_object* v___f_3543_; lean_object* v___x_3544_; 
v_toApplicative_3539_ = lean_ctor_get(v_inst_3530_, 0);
v_toBind_3540_ = lean_ctor_get(v_inst_3530_, 1);
lean_inc(v_toBind_3540_);
v_toPure_3541_ = lean_ctor_get(v_toApplicative_3539_, 1);
lean_inc(v_toPure_3541_);
lean_inc(v_n_u2080_3537_);
v___x_3542_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3530_, v_inst_3531_, v_inst_3532_, v_inst_3533_, v_inst_3534_, v_inst_3535_, v_inst_3536_, v_n_u2080_3537_, v_fullNames_3538_);
v___f_3543_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3543_, 0, v_toPure_3541_);
lean_closure_set(v___f_3543_, 1, v_n_u2080_3537_);
v___x_3544_ = lean_apply_4(v_toBind_3540_, lean_box(0), lean_box(0), v___x_3542_, v___f_3543_);
return v___x_3544_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg___boxed(lean_object* v_inst_3545_, lean_object* v_inst_3546_, lean_object* v_inst_3547_, lean_object* v_inst_3548_, lean_object* v_inst_3549_, lean_object* v_inst_3550_, lean_object* v_inst_3551_, lean_object* v_n_u2080_3552_, lean_object* v_fullNames_3553_){
_start:
{
uint8_t v_fullNames_boxed_3554_; lean_object* v_res_3555_; 
v_fullNames_boxed_3554_ = lean_unbox(v_fullNames_3553_);
v_res_3555_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3545_, v_inst_3546_, v_inst_3547_, v_inst_3548_, v_inst_3549_, v_inst_3550_, v_inst_3551_, v_n_u2080_3552_, v_fullNames_boxed_3554_);
return v_res_3555_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals(lean_object* v_m_3556_, lean_object* v_inst_3557_, lean_object* v_inst_3558_, lean_object* v_inst_3559_, lean_object* v_inst_3560_, lean_object* v_inst_3561_, lean_object* v_inst_3562_, lean_object* v_inst_3563_, lean_object* v_n_u2080_3564_, uint8_t v_fullNames_3565_){
_start:
{
lean_object* v___x_3566_; 
v___x_3566_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3557_, v_inst_3558_, v_inst_3559_, v_inst_3560_, v_inst_3561_, v_inst_3562_, v_inst_3563_, v_n_u2080_3564_, v_fullNames_3565_);
return v___x_3566_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___boxed(lean_object* v_m_3567_, lean_object* v_inst_3568_, lean_object* v_inst_3569_, lean_object* v_inst_3570_, lean_object* v_inst_3571_, lean_object* v_inst_3572_, lean_object* v_inst_3573_, lean_object* v_inst_3574_, lean_object* v_n_u2080_3575_, lean_object* v_fullNames_3576_){
_start:
{
uint8_t v_fullNames_boxed_3577_; lean_object* v_res_3578_; 
v_fullNames_boxed_3577_ = lean_unbox(v_fullNames_3576_);
v_res_3578_ = l_Lean_unresolveNameGlobalAvoidingLocals(v_m_3567_, v_inst_3568_, v_inst_3569_, v_inst_3570_, v_inst_3571_, v_inst_3572_, v_inst_3573_, v_inst_3574_, v_n_u2080_3575_, v_fullNames_boxed_3577_);
return v_res_3578_;
}
}
lean_object* runtime_initialize_Lean_Modifiers(uint8_t builtin);
lean_object* runtime_initialize_Lean_Exception(uint8_t builtin);
lean_object* runtime_initialize_Lean_Namespace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Log(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ResolveName(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Modifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Namespace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_reservedNamePredicatesRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_reservedNamePredicatesRef);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_reservedNamePredicatesExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_reservedNamePredicatesExt);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_aliasExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_aliasExtension);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_ResolveName_backward_privateInPublic = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_ResolveName_backward_privateInPublic);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_ResolveName_backward_privateInPublic_warn = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_ResolveName_backward_privateInPublic_warn);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ResolveName(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Modifiers(uint8_t builtin);
lean_object* initialize_Lean_Exception(uint8_t builtin);
lean_object* initialize_Lean_Namespace(uint8_t builtin);
lean_object* initialize_Lean_Log(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ResolveName(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Modifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Namespace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ResolveName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ResolveName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ResolveName(builtin);
}
#ifdef __cplusplus
}
#endif
