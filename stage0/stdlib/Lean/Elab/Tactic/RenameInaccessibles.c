// Lean compiler output
// Module: Lean.Elab.Tactic.RenameInaccessibles
// Imports: public import Lean.Elab.Term import Lean.Elab.Binders
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getAt_x3f(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
uint8_t l_Lean_MacroScopesView_equalScope(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Elab_InfoTree_substitute(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___lam__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__1_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__3_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_renameInaccessibles___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_renameInaccessibles___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_renameInaccessibles___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_renameInaccessibles___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_renameInaccessibles___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_renameInaccessibles___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "too many variable names provided"};
static const lean_object* l_Lean_Elab_Tactic_renameInaccessibles___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_renameInaccessibles___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_renameInaccessibles___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_renameInaccessibles___closed__3;
static const lean_ctor_object l_Lean_Elab_Tactic_renameInaccessibles___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_renameInaccessibles___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Tactic_renameInaccessibles___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_9_ = lean_apply_7(v_x_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0___boxed(lean_object* v_x_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0(v_x_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_12_);
lean_dec_ref(v___y_11_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg(lean_object* v_mvarId_19_, lean_object* v_x_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___f_28_; lean_object* v___x_29_; 
lean_inc(v___y_22_);
lean_inc_ref(v___y_21_);
v___f_28_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_28_, 0, v_x_20_);
lean_closure_set(v___f_28_, 1, v___y_21_);
lean_closure_set(v___f_28_, 2, v___y_22_);
v___x_29_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_19_, v___f_28_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
if (lean_obj_tag(v___x_29_) == 0)
{
return v___x_29_;
}
else
{
lean_object* v_a_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_37_; 
v_a_30_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_37_ == 0)
{
v___x_32_ = v___x_29_;
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_a_30_);
lean_dec(v___x_29_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_35_; 
if (v_isShared_33_ == 0)
{
v___x_35_ = v___x_32_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_a_30_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___boxed(lean_object* v_mvarId_38_, lean_object* v_x_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg(v_mvarId_38_, v_x_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1(lean_object* v_00_u03b1_48_, lean_object* v_mvarId_49_, lean_object* v_x_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg(v_mvarId_49_, v_x_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___boxed(lean_object* v_00_u03b1_59_, lean_object* v_mvarId_60_, lean_object* v_x_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1(v_00_u03b1_59_, v_mvarId_60_, v_x_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0(lean_object* v_as_70_, size_t v_sz_71_, size_t v_i_72_, lean_object* v_b_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
uint8_t v___x_81_; 
v___x_81_ = lean_usize_dec_lt(v_i_72_, v_sz_71_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; 
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v_b_73_);
return v___x_82_;
}
else
{
lean_object* v_a_83_; lean_object* v_fst_84_; lean_object* v_snd_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_a_83_ = lean_array_uget_borrowed(v_as_70_, v_i_72_);
v_fst_84_ = lean_ctor_get(v_a_83_, 0);
v_snd_85_ = lean_ctor_get(v_a_83_, 1);
v___x_86_ = lean_box(0);
lean_inc(v_fst_84_);
v___x_87_ = l_Lean_mkFVar(v_fst_84_);
lean_inc(v_snd_85_);
v___x_88_ = l_Lean_Elab_Term_addLocalVarInfo(v_snd_85_, v___x_87_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
if (lean_obj_tag(v___x_88_) == 0)
{
size_t v___x_89_; size_t v___x_90_; 
lean_dec_ref_known(v___x_88_, 1);
v___x_89_ = ((size_t)1ULL);
v___x_90_ = lean_usize_add(v_i_72_, v___x_89_);
v_i_72_ = v___x_90_;
v_b_73_ = v___x_86_;
goto _start;
}
else
{
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0___boxed(lean_object* v_as_92_, lean_object* v_sz_93_, lean_object* v_i_94_, lean_object* v_b_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
size_t v_sz_boxed_103_; size_t v_i_boxed_104_; lean_object* v_res_105_; 
v_sz_boxed_103_ = lean_unbox_usize(v_sz_93_);
lean_dec(v_sz_93_);
v_i_boxed_104_ = lean_unbox_usize(v_i_94_);
lean_dec(v_i_94_);
v_res_105_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0(v_as_92_, v_sz_boxed_103_, v_i_boxed_104_, v_b_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec_ref(v_as_92_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___lam__0(lean_object* v_fst_106_, size_t v_sz_107_, size_t v___x_108_, lean_object* v___x_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0(v_fst_106_, v_sz_107_, v___x_108_, v___x_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_124_; 
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_124_ == 0)
{
lean_object* v_unused_125_; 
v_unused_125_ = lean_ctor_get(v___x_117_, 0);
lean_dec(v_unused_125_);
v___x_119_ = v___x_117_;
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
else
{
lean_dec(v___x_117_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v___x_109_);
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v___x_109_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
else
{
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___lam__0___boxed(lean_object* v_fst_126_, lean_object* v_sz_127_, lean_object* v___x_128_, lean_object* v___x_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
size_t v_sz_boxed_137_; size_t v___x_21041__boxed_138_; lean_object* v_res_139_; 
v_sz_boxed_137_ = lean_unbox_usize(v_sz_127_);
lean_dec(v_sz_127_);
v___x_21041__boxed_138_ = lean_unbox_usize(v___x_128_);
lean_dec(v___x_128_);
v_res_139_ = l_Lean_Elab_Tactic_renameInaccessibles___lam__0(v_fst_126_, v_sz_boxed_137_, v___x_21041__boxed_138_, v___x_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
lean_dec(v___y_131_);
lean_dec_ref(v___y_130_);
lean_dec(v_fst_126_);
return v_res_139_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = lean_unsigned_to_nat(32u);
v___x_141_ = lean_mk_empty_array_with_capacity(v___x_140_);
v___x_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1(void){
_start:
{
size_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_143_ = ((size_t)5ULL);
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = lean_unsigned_to_nat(32u);
v___x_146_ = lean_mk_empty_array_with_capacity(v___x_145_);
v___x_147_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0);
v___x_148_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set(v___x_148_, 1, v___x_146_);
lean_ctor_set(v___x_148_, 2, v___x_144_);
lean_ctor_set(v___x_148_, 3, v___x_144_);
lean_ctor_set_usize(v___x_148_, 4, v___x_143_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg(lean_object* v___y_149_){
_start:
{
lean_object* v___x_151_; lean_object* v_infoState_152_; lean_object* v_trees_153_; lean_object* v___x_154_; lean_object* v_infoState_155_; lean_object* v_env_156_; lean_object* v_nextMacroScope_157_; lean_object* v_ngen_158_; lean_object* v_auxDeclNGen_159_; lean_object* v_traceState_160_; lean_object* v_cache_161_; lean_object* v_recordedDeps_162_; lean_object* v_messages_163_; lean_object* v_snapshotTasks_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_185_; 
v___x_151_ = lean_st_ref_get(v___y_149_);
v_infoState_152_ = lean_ctor_get(v___x_151_, 8);
lean_inc_ref(v_infoState_152_);
lean_dec(v___x_151_);
v_trees_153_ = lean_ctor_get(v_infoState_152_, 2);
lean_inc_ref(v_trees_153_);
lean_dec_ref(v_infoState_152_);
v___x_154_ = lean_st_ref_take(v___y_149_);
v_infoState_155_ = lean_ctor_get(v___x_154_, 8);
v_env_156_ = lean_ctor_get(v___x_154_, 0);
v_nextMacroScope_157_ = lean_ctor_get(v___x_154_, 1);
v_ngen_158_ = lean_ctor_get(v___x_154_, 2);
v_auxDeclNGen_159_ = lean_ctor_get(v___x_154_, 3);
v_traceState_160_ = lean_ctor_get(v___x_154_, 4);
v_cache_161_ = lean_ctor_get(v___x_154_, 5);
v_recordedDeps_162_ = lean_ctor_get(v___x_154_, 6);
v_messages_163_ = lean_ctor_get(v___x_154_, 7);
v_snapshotTasks_164_ = lean_ctor_get(v___x_154_, 9);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_185_ == 0)
{
v___x_166_ = v___x_154_;
v_isShared_167_ = v_isSharedCheck_185_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_snapshotTasks_164_);
lean_inc(v_infoState_155_);
lean_inc(v_messages_163_);
lean_inc(v_recordedDeps_162_);
lean_inc(v_cache_161_);
lean_inc(v_traceState_160_);
lean_inc(v_auxDeclNGen_159_);
lean_inc(v_ngen_158_);
lean_inc(v_nextMacroScope_157_);
lean_inc(v_env_156_);
lean_dec(v___x_154_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_185_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
uint8_t v_enabled_168_; lean_object* v_assignment_169_; lean_object* v_lazyAssignment_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_183_; 
v_enabled_168_ = lean_ctor_get_uint8(v_infoState_155_, sizeof(void*)*3);
v_assignment_169_ = lean_ctor_get(v_infoState_155_, 0);
v_lazyAssignment_170_ = lean_ctor_get(v_infoState_155_, 1);
v_isSharedCheck_183_ = !lean_is_exclusive(v_infoState_155_);
if (v_isSharedCheck_183_ == 0)
{
lean_object* v_unused_184_; 
v_unused_184_ = lean_ctor_get(v_infoState_155_, 2);
lean_dec(v_unused_184_);
v___x_172_ = v_infoState_155_;
v_isShared_173_ = v_isSharedCheck_183_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_lazyAssignment_170_);
lean_inc(v_assignment_169_);
lean_dec(v_infoState_155_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_183_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_174_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 2, v___x_174_);
v___x_176_ = v___x_172_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_assignment_169_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v_lazyAssignment_170_);
lean_ctor_set(v_reuseFailAlloc_182_, 2, v___x_174_);
lean_ctor_set_uint8(v_reuseFailAlloc_182_, sizeof(void*)*3, v_enabled_168_);
v___x_176_ = v_reuseFailAlloc_182_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
lean_object* v___x_178_; 
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 8, v___x_176_);
v___x_178_ = v___x_166_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_env_156_);
lean_ctor_set(v_reuseFailAlloc_181_, 1, v_nextMacroScope_157_);
lean_ctor_set(v_reuseFailAlloc_181_, 2, v_ngen_158_);
lean_ctor_set(v_reuseFailAlloc_181_, 3, v_auxDeclNGen_159_);
lean_ctor_set(v_reuseFailAlloc_181_, 4, v_traceState_160_);
lean_ctor_set(v_reuseFailAlloc_181_, 5, v_cache_161_);
lean_ctor_set(v_reuseFailAlloc_181_, 6, v_recordedDeps_162_);
lean_ctor_set(v_reuseFailAlloc_181_, 7, v_messages_163_);
lean_ctor_set(v_reuseFailAlloc_181_, 8, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_181_, 9, v_snapshotTasks_164_);
v___x_178_ = v_reuseFailAlloc_181_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_st_ref_put(v___y_149_, v___x_178_);
v___x_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_180_, 0, v_trees_153_);
return v___x_180_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg(v___y_186_);
lean_dec(v___y_186_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12(lean_object* v___x_189_, lean_object* v_ctx_x3f_190_, size_t v_sz_191_, size_t v_i_192_, lean_object* v_bs_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
uint8_t v___x_201_; 
v___x_201_ = lean_usize_dec_lt(v_i_192_, v_sz_191_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; 
lean_dec_ref(v_ctx_x3f_190_);
v___x_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_202_, 0, v_bs_193_);
return v___x_202_;
}
else
{
lean_object* v_assignment_203_; lean_object* v_v_204_; lean_object* v___x_205_; lean_object* v_bs_x27_206_; lean_object* v_a_208_; lean_object* v_tree_213_; lean_object* v___x_214_; 
v_assignment_203_ = lean_ctor_get(v___x_189_, 0);
v_v_204_ = lean_array_uget(v_bs_193_, v_i_192_);
v___x_205_ = lean_unsigned_to_nat(0u);
v_bs_x27_206_ = lean_array_uset(v_bs_193_, v_i_192_, v___x_205_);
v_tree_213_ = l_Lean_Elab_InfoTree_substitute(v_v_204_, v_assignment_203_);
lean_inc_ref(v_ctx_x3f_190_);
lean_inc(v___y_199_);
lean_inc_ref(v___y_198_);
lean_inc(v___y_197_);
lean_inc_ref(v___y_196_);
lean_inc(v___y_195_);
lean_inc_ref(v___y_194_);
v___x_214_ = lean_apply_7(v_ctx_x3f_190_, v___y_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, lean_box(0));
if (lean_obj_tag(v___x_214_) == 0)
{
lean_object* v_a_215_; 
v_a_215_ = lean_ctor_get(v___x_214_, 0);
lean_inc(v_a_215_);
lean_dec_ref_known(v___x_214_, 1);
if (lean_obj_tag(v_a_215_) == 0)
{
v_a_208_ = v_tree_213_;
goto v___jp_207_;
}
else
{
lean_object* v_val_216_; lean_object* v___x_217_; 
v_val_216_ = lean_ctor_get(v_a_215_, 0);
lean_inc(v_val_216_);
lean_dec_ref_known(v_a_215_, 1);
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v_val_216_);
lean_ctor_set(v___x_217_, 1, v_tree_213_);
v_a_208_ = v___x_217_;
goto v___jp_207_;
}
}
else
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
lean_dec_ref(v_tree_213_);
lean_dec_ref(v_bs_x27_206_);
lean_dec_ref(v_ctx_x3f_190_);
v_a_218_ = lean_ctor_get(v___x_214_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v___x_214_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_214_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_218_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
v___jp_207_:
{
size_t v___x_209_; size_t v___x_210_; lean_object* v___x_211_; 
v___x_209_ = ((size_t)1ULL);
v___x_210_ = lean_usize_add(v_i_192_, v___x_209_);
v___x_211_ = lean_array_uset(v_bs_x27_206_, v_i_192_, v_a_208_);
v_i_192_ = v___x_210_;
v_bs_193_ = v___x_211_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12___boxed(lean_object* v___x_226_, lean_object* v_ctx_x3f_227_, lean_object* v_sz_228_, lean_object* v_i_229_, lean_object* v_bs_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_){
_start:
{
size_t v_sz_boxed_238_; size_t v_i_boxed_239_; lean_object* v_res_240_; 
v_sz_boxed_238_ = lean_unbox_usize(v_sz_228_);
lean_dec(v_sz_228_);
v_i_boxed_239_ = lean_unbox_usize(v_i_229_);
lean_dec(v_i_229_);
v_res_240_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12(v___x_226_, v_ctx_x3f_227_, v_sz_boxed_238_, v_i_boxed_239_, v_bs_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_);
lean_dec(v___y_236_);
lean_dec_ref(v___y_235_);
lean_dec(v___y_234_);
lean_dec_ref(v___y_233_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec_ref(v___x_226_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11(lean_object* v___x_241_, lean_object* v_ctx_x3f_242_, lean_object* v_x_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_){
_start:
{
if (lean_obj_tag(v_x_243_) == 0)
{
lean_object* v_cs_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_277_; 
v_cs_251_ = lean_ctor_get(v_x_243_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v_x_243_);
if (v_isSharedCheck_277_ == 0)
{
v___x_253_ = v_x_243_;
v_isShared_254_ = v_isSharedCheck_277_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_cs_251_);
lean_dec(v_x_243_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_277_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
size_t v_sz_255_; size_t v___x_256_; lean_object* v___x_257_; 
v_sz_255_ = lean_array_size(v_cs_251_);
v___x_256_ = ((size_t)0ULL);
v___x_257_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14(v___x_241_, v_ctx_x3f_242_, v_sz_255_, v___x_256_, v_cs_251_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_268_; 
v_a_258_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_268_ == 0)
{
v___x_260_ = v___x_257_;
v_isShared_261_ = v_isSharedCheck_268_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_257_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_268_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 0, v_a_258_);
v___x_263_ = v___x_253_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_267_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
lean_object* v___x_265_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_263_);
v___x_265_ = v___x_260_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
}
else
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
lean_del_object(v___x_253_);
v_a_269_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_257_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_257_);
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
}
else
{
lean_object* v_vs_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_304_; 
v_vs_278_ = lean_ctor_get(v_x_243_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v_x_243_);
if (v_isSharedCheck_304_ == 0)
{
v___x_280_ = v_x_243_;
v_isShared_281_ = v_isSharedCheck_304_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_vs_278_);
lean_dec(v_x_243_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_304_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
size_t v_sz_282_; size_t v___x_283_; lean_object* v___x_284_; 
v_sz_282_ = lean_array_size(v_vs_278_);
v___x_283_ = ((size_t)0ULL);
v___x_284_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12(v___x_241_, v_ctx_x3f_242_, v_sz_282_, v___x_283_, v_vs_278_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_295_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_295_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_295_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_295_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 0, v_a_285_);
v___x_290_ = v___x_280_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_285_);
v___x_290_ = v_reuseFailAlloc_294_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
lean_object* v___x_292_; 
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v___x_290_);
v___x_292_ = v___x_287_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_290_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
lean_del_object(v___x_280_);
v_a_296_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_284_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_284_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14(lean_object* v___x_305_, lean_object* v_ctx_x3f_306_, size_t v_sz_307_, size_t v_i_308_, lean_object* v_bs_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
uint8_t v___x_317_; 
v___x_317_ = lean_usize_dec_lt(v_i_308_, v_sz_307_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; 
lean_dec_ref(v_ctx_x3f_306_);
v___x_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_318_, 0, v_bs_309_);
return v___x_318_;
}
else
{
lean_object* v_v_319_; lean_object* v___x_320_; lean_object* v_bs_x27_321_; lean_object* v___x_322_; 
v_v_319_ = lean_array_uget(v_bs_309_, v_i_308_);
v___x_320_ = lean_unsigned_to_nat(0u);
v_bs_x27_321_ = lean_array_uset(v_bs_309_, v_i_308_, v___x_320_);
lean_inc_ref(v_ctx_x3f_306_);
v___x_322_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11(v___x_305_, v_ctx_x3f_306_, v_v_319_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v_a_323_; size_t v___x_324_; size_t v___x_325_; lean_object* v___x_326_; 
v_a_323_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v___x_322_, 1);
v___x_324_ = ((size_t)1ULL);
v___x_325_ = lean_usize_add(v_i_308_, v___x_324_);
v___x_326_ = lean_array_uset(v_bs_x27_321_, v_i_308_, v_a_323_);
v_i_308_ = v___x_325_;
v_bs_309_ = v___x_326_;
goto _start;
}
else
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_dec_ref(v_bs_x27_321_);
lean_dec_ref(v_ctx_x3f_306_);
v_a_328_ = lean_ctor_get(v___x_322_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_322_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_322_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_322_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14___boxed(lean_object* v___x_336_, lean_object* v_ctx_x3f_337_, lean_object* v_sz_338_, lean_object* v_i_339_, lean_object* v_bs_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
size_t v_sz_boxed_348_; size_t v_i_boxed_349_; lean_object* v_res_350_; 
v_sz_boxed_348_ = lean_unbox_usize(v_sz_338_);
lean_dec(v_sz_338_);
v_i_boxed_349_ = lean_unbox_usize(v_i_339_);
lean_dec(v_i_339_);
v_res_350_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14(v___x_336_, v_ctx_x3f_337_, v_sz_boxed_348_, v_i_boxed_349_, v_bs_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_);
lean_dec(v___y_346_);
lean_dec_ref(v___y_345_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
lean_dec_ref(v___x_336_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11___boxed(lean_object* v___x_351_, lean_object* v_ctx_x3f_352_, lean_object* v_x_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11(v___x_351_, v_ctx_x3f_352_, v_x_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
lean_dec_ref(v___x_351_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6(lean_object* v___x_362_, lean_object* v_ctx_x3f_363_, lean_object* v_t_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v_root_372_; lean_object* v_tail_373_; lean_object* v_size_374_; size_t v_shift_375_; lean_object* v_tailOff_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_412_; 
v_root_372_ = lean_ctor_get(v_t_364_, 0);
v_tail_373_ = lean_ctor_get(v_t_364_, 1);
v_size_374_ = lean_ctor_get(v_t_364_, 2);
v_shift_375_ = lean_ctor_get_usize(v_t_364_, 4);
v_tailOff_376_ = lean_ctor_get(v_t_364_, 3);
v_isSharedCheck_412_ = !lean_is_exclusive(v_t_364_);
if (v_isSharedCheck_412_ == 0)
{
v___x_378_ = v_t_364_;
v_isShared_379_ = v_isSharedCheck_412_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_tailOff_376_);
lean_inc(v_size_374_);
lean_inc(v_tail_373_);
lean_inc(v_root_372_);
lean_dec(v_t_364_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_412_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_380_; 
lean_inc_ref(v_ctx_x3f_363_);
v___x_380_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11(v___x_362_, v_ctx_x3f_363_, v_root_372_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
if (lean_obj_tag(v___x_380_) == 0)
{
lean_object* v_a_381_; size_t v_sz_382_; size_t v___x_383_; lean_object* v___x_384_; 
v_a_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_a_381_);
lean_dec_ref_known(v___x_380_, 1);
v_sz_382_ = lean_array_size(v_tail_373_);
v___x_383_ = ((size_t)0ULL);
v___x_384_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12(v___x_362_, v_ctx_x3f_363_, v_sz_382_, v___x_383_, v_tail_373_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
if (lean_obj_tag(v___x_384_) == 0)
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_395_; 
v_a_385_ = lean_ctor_get(v___x_384_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_395_ == 0)
{
v___x_387_ = v___x_384_;
v_isShared_388_ = v_isSharedCheck_395_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_384_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_395_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 1, v_a_385_);
lean_ctor_set(v___x_378_, 0, v_a_381_);
v___x_390_ = v___x_378_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_381_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_a_385_);
lean_ctor_set(v_reuseFailAlloc_394_, 2, v_size_374_);
lean_ctor_set(v_reuseFailAlloc_394_, 3, v_tailOff_376_);
lean_ctor_set_usize(v_reuseFailAlloc_394_, 4, v_shift_375_);
v___x_390_ = v_reuseFailAlloc_394_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
lean_object* v___x_392_; 
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 0, v___x_390_);
v___x_392_ = v___x_387_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v___x_390_);
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
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
lean_dec(v_a_381_);
lean_del_object(v___x_378_);
lean_dec(v_tailOff_376_);
lean_dec(v_size_374_);
v_a_396_ = lean_ctor_get(v___x_384_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_384_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_384_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
else
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
lean_del_object(v___x_378_);
lean_dec(v_tailOff_376_);
lean_dec(v_size_374_);
lean_dec_ref(v_tail_373_);
lean_dec_ref(v_ctx_x3f_363_);
v_a_404_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_411_ == 0)
{
v___x_406_ = v___x_380_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_380_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_404_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6___boxed(lean_object* v___x_413_, lean_object* v_ctx_x3f_414_, lean_object* v_t_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6(v___x_413_, v_ctx_x3f_414_, v_t_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
lean_dec_ref(v___x_413_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0(lean_object* v___y_424_, lean_object* v_ctx_x3f_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v_a_431_, lean_object* v_a_x3f_432_){
_start:
{
lean_object* v___x_434_; lean_object* v_infoState_435_; lean_object* v_trees_436_; lean_object* v___x_437_; 
v___x_434_ = lean_st_ref_get(v___y_424_);
v_infoState_435_ = lean_ctor_get(v___x_434_, 8);
lean_inc_ref(v_infoState_435_);
lean_dec(v___x_434_);
v_trees_436_ = lean_ctor_get(v_infoState_435_, 2);
lean_inc_ref(v_trees_436_);
v___x_437_ = l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6(v_infoState_435_, v_ctx_x3f_425_, v_trees_436_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_424_);
lean_dec_ref(v_infoState_435_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_477_; 
v_a_438_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_477_ == 0)
{
v___x_440_ = v___x_437_;
v_isShared_441_ = v_isSharedCheck_477_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_437_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_477_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; lean_object* v_infoState_443_; lean_object* v_env_444_; lean_object* v_nextMacroScope_445_; lean_object* v_ngen_446_; lean_object* v_auxDeclNGen_447_; lean_object* v_traceState_448_; lean_object* v_cache_449_; lean_object* v_recordedDeps_450_; lean_object* v_messages_451_; lean_object* v_snapshotTasks_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_476_; 
v___x_442_ = lean_st_ref_take(v___y_424_);
v_infoState_443_ = lean_ctor_get(v___x_442_, 8);
v_env_444_ = lean_ctor_get(v___x_442_, 0);
v_nextMacroScope_445_ = lean_ctor_get(v___x_442_, 1);
v_ngen_446_ = lean_ctor_get(v___x_442_, 2);
v_auxDeclNGen_447_ = lean_ctor_get(v___x_442_, 3);
v_traceState_448_ = lean_ctor_get(v___x_442_, 4);
v_cache_449_ = lean_ctor_get(v___x_442_, 5);
v_recordedDeps_450_ = lean_ctor_get(v___x_442_, 6);
v_messages_451_ = lean_ctor_get(v___x_442_, 7);
v_snapshotTasks_452_ = lean_ctor_get(v___x_442_, 9);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_476_ == 0)
{
v___x_454_ = v___x_442_;
v_isShared_455_ = v_isSharedCheck_476_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_snapshotTasks_452_);
lean_inc(v_infoState_443_);
lean_inc(v_messages_451_);
lean_inc(v_recordedDeps_450_);
lean_inc(v_cache_449_);
lean_inc(v_traceState_448_);
lean_inc(v_auxDeclNGen_447_);
lean_inc(v_ngen_446_);
lean_inc(v_nextMacroScope_445_);
lean_inc(v_env_444_);
lean_dec(v___x_442_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_476_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
uint8_t v_enabled_456_; lean_object* v_assignment_457_; lean_object* v_lazyAssignment_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_474_; 
v_enabled_456_ = lean_ctor_get_uint8(v_infoState_443_, sizeof(void*)*3);
v_assignment_457_ = lean_ctor_get(v_infoState_443_, 0);
v_lazyAssignment_458_ = lean_ctor_get(v_infoState_443_, 1);
v_isSharedCheck_474_ = !lean_is_exclusive(v_infoState_443_);
if (v_isSharedCheck_474_ == 0)
{
lean_object* v_unused_475_; 
v_unused_475_ = lean_ctor_get(v_infoState_443_, 2);
lean_dec(v_unused_475_);
v___x_460_ = v_infoState_443_;
v_isShared_461_ = v_isSharedCheck_474_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_lazyAssignment_458_);
lean_inc(v_assignment_457_);
lean_dec(v_infoState_443_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_474_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_462_ = lean_box(0);
v___x_463_ = l_Lean_PersistentArray_append___redArg(v_a_431_, v_a_438_);
lean_dec(v_a_438_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 2, v___x_463_);
v___x_465_ = v___x_460_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_assignment_457_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v_lazyAssignment_458_);
lean_ctor_set(v_reuseFailAlloc_473_, 2, v___x_463_);
lean_ctor_set_uint8(v_reuseFailAlloc_473_, sizeof(void*)*3, v_enabled_456_);
v___x_465_ = v_reuseFailAlloc_473_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_467_; 
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 8, v___x_465_);
v___x_467_ = v___x_454_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_env_444_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_nextMacroScope_445_);
lean_ctor_set(v_reuseFailAlloc_472_, 2, v_ngen_446_);
lean_ctor_set(v_reuseFailAlloc_472_, 3, v_auxDeclNGen_447_);
lean_ctor_set(v_reuseFailAlloc_472_, 4, v_traceState_448_);
lean_ctor_set(v_reuseFailAlloc_472_, 5, v_cache_449_);
lean_ctor_set(v_reuseFailAlloc_472_, 6, v_recordedDeps_450_);
lean_ctor_set(v_reuseFailAlloc_472_, 7, v_messages_451_);
lean_ctor_set(v_reuseFailAlloc_472_, 8, v___x_465_);
lean_ctor_set(v_reuseFailAlloc_472_, 9, v_snapshotTasks_452_);
v___x_467_ = v_reuseFailAlloc_472_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_468_ = lean_st_ref_put(v___y_424_, v___x_467_);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v___x_462_);
v___x_470_ = v___x_440_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_462_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_485_; 
lean_dec_ref(v_a_431_);
v_a_478_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_485_ == 0)
{
v___x_480_ = v___x_437_;
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_437_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_483_; 
if (v_isShared_481_ == 0)
{
v___x_483_ = v___x_480_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_a_478_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v___y_486_, lean_object* v_ctx_x3f_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v_a_493_, lean_object* v_a_x3f_494_, lean_object* v___y_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0(v___y_486_, v_ctx_x3f_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v_a_493_, v_a_x3f_494_);
lean_dec(v_a_x3f_494_);
lean_dec_ref(v___y_492_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_486_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg(lean_object* v_x_497_, lean_object* v_ctx_x3f_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v___x_506_; lean_object* v_infoState_507_; uint8_t v_enabled_508_; 
v___x_506_ = lean_st_ref_get(v___y_504_);
v_infoState_507_ = lean_ctor_get(v___x_506_, 8);
lean_inc_ref(v_infoState_507_);
lean_dec(v___x_506_);
v_enabled_508_ = lean_ctor_get_uint8(v_infoState_507_, sizeof(void*)*3);
lean_dec_ref(v_infoState_507_);
if (v_enabled_508_ == 0)
{
lean_object* v___x_509_; 
lean_dec_ref(v_ctx_x3f_498_);
lean_inc(v___y_504_);
lean_inc_ref(v___y_503_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v___y_499_);
v___x_509_ = lean_apply_7(v_x_497_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, lean_box(0));
return v___x_509_;
}
else
{
lean_object* v___x_510_; lean_object* v_a_511_; lean_object* v_r_512_; 
v___x_510_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg(v___y_504_);
v_a_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc(v_a_511_);
lean_dec_ref(v___x_510_);
lean_inc(v___y_504_);
lean_inc_ref(v___y_503_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v___y_499_);
v_r_512_ = lean_apply_7(v_x_497_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, lean_box(0));
if (lean_obj_tag(v_r_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_537_; 
v_a_513_ = lean_ctor_get(v_r_512_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v_r_512_);
if (v_isSharedCheck_537_ == 0)
{
v___x_515_ = v_r_512_;
v_isShared_516_ = v_isSharedCheck_537_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v_r_512_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_537_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_518_; 
lean_inc(v_a_513_);
if (v_isShared_516_ == 0)
{
lean_ctor_set_tag(v___x_515_, 1);
v___x_518_ = v___x_515_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_513_);
v___x_518_ = v_reuseFailAlloc_536_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
lean_object* v___x_519_; 
v___x_519_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0(v___y_504_, v_ctx_x3f_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v_a_511_, v___x_518_);
lean_dec_ref(v___x_518_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_526_ == 0)
{
lean_object* v_unused_527_; 
v_unused_527_ = lean_ctor_get(v___x_519_, 0);
lean_dec(v_unused_527_);
v___x_521_ = v___x_519_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_dec(v___x_519_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v_a_513_);
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_513_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
else
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
lean_dec(v_a_513_);
v_a_528_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_535_ == 0)
{
v___x_530_ = v___x_519_;
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_519_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_528_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
}
}
else
{
lean_object* v_a_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v_a_538_ = lean_ctor_get(v_r_512_, 0);
lean_inc(v_a_538_);
lean_dec_ref_known(v_r_512_, 1);
v___x_539_ = lean_box(0);
v___x_540_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0(v___y_504_, v_ctx_x3f_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v_a_511_, v___x_539_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_547_ == 0)
{
lean_object* v_unused_548_; 
v_unused_548_ = lean_ctor_get(v___x_540_, 0);
lean_dec(v_unused_548_);
v___x_542_ = v___x_540_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_dec(v___x_540_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
lean_ctor_set_tag(v___x_542_, 1);
lean_ctor_set(v___x_542_, 0, v_a_538_);
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_538_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec(v_a_538_);
v_a_549_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_540_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_540_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___boxed(lean_object* v_x_557_, lean_object* v_ctx_x3f_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg(v_x_557_, v_ctx_x3f_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg(lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v___x_571_; lean_object* v_env_572_; lean_object* v___x_573_; lean_object* v_toCold_574_; lean_object* v_mctx_575_; lean_object* v_currNamespace_576_; lean_object* v_openDecls_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v_ngen_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_571_ = lean_st_ref_get(v___y_569_);
v_env_572_ = lean_ctor_get(v___x_571_, 0);
lean_inc_ref(v_env_572_);
lean_dec(v___x_571_);
v___x_573_ = lean_st_ref_get(v___y_567_);
v_toCold_574_ = lean_ctor_get(v___y_568_, 0);
v_mctx_575_ = lean_ctor_get(v___x_573_, 0);
lean_inc_ref(v_mctx_575_);
lean_dec(v___x_573_);
v_currNamespace_576_ = lean_ctor_get(v_toCold_574_, 4);
v_openDecls_577_ = lean_ctor_get(v_toCold_574_, 5);
v___x_578_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_568_);
v___x_579_ = lean_st_ref_get(v___y_569_);
v_ngen_580_ = lean_ctor_get(v___x_579_, 2);
lean_inc_ref(v_ngen_580_);
lean_dec(v___x_579_);
v___x_581_ = lean_box(0);
v___x_582_ = l_Lean_instInhabitedFileMap_default;
lean_inc(v_openDecls_577_);
lean_inc(v_currNamespace_576_);
v___x_583_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_583_, 0, v_env_572_);
lean_ctor_set(v___x_583_, 1, v___x_581_);
lean_ctor_set(v___x_583_, 2, v___x_582_);
lean_ctor_set(v___x_583_, 3, v_mctx_575_);
lean_ctor_set(v___x_583_, 4, v___x_578_);
lean_ctor_set(v___x_583_, 5, v_currNamespace_576_);
lean_ctor_set(v___x_583_, 6, v_openDecls_577_);
lean_ctor_set(v___x_583_, 7, v_ngen_580_);
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg(v___y_585_, v___y_586_, v___y_587_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2(lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v___x_597_; lean_object* v_toCold_598_; lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_623_; 
v___x_597_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg(v___y_593_, v___y_594_, v___y_595_);
v_toCold_598_ = lean_ctor_get(v___y_594_, 0);
v_a_599_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_623_ == 0)
{
v___x_601_ = v___x_597_;
v_isShared_602_ = v_isSharedCheck_623_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___x_597_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_623_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v_fileMap_603_; lean_object* v_env_604_; lean_object* v_mctx_605_; lean_object* v_options_606_; lean_object* v_currNamespace_607_; lean_object* v_openDecls_608_; lean_object* v_ngen_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_620_; 
v_fileMap_603_ = lean_ctor_get(v_toCold_598_, 1);
v_env_604_ = lean_ctor_get(v_a_599_, 0);
v_mctx_605_ = lean_ctor_get(v_a_599_, 3);
v_options_606_ = lean_ctor_get(v_a_599_, 4);
v_currNamespace_607_ = lean_ctor_get(v_a_599_, 5);
v_openDecls_608_ = lean_ctor_get(v_a_599_, 6);
v_ngen_609_ = lean_ctor_get(v_a_599_, 7);
v_isSharedCheck_620_ = !lean_is_exclusive(v_a_599_);
if (v_isSharedCheck_620_ == 0)
{
lean_object* v_unused_621_; lean_object* v_unused_622_; 
v_unused_621_ = lean_ctor_get(v_a_599_, 2);
lean_dec(v_unused_621_);
v_unused_622_ = lean_ctor_get(v_a_599_, 1);
lean_dec(v_unused_622_);
v___x_611_ = v_a_599_;
v_isShared_612_ = v_isSharedCheck_620_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_ngen_609_);
lean_inc(v_openDecls_608_);
lean_inc(v_currNamespace_607_);
lean_inc(v_options_606_);
lean_inc(v_mctx_605_);
lean_inc(v_env_604_);
lean_dec(v_a_599_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_620_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_613_; lean_object* v___x_615_; 
v___x_613_ = lean_box(0);
lean_inc_ref(v_fileMap_603_);
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 2, v_fileMap_603_);
lean_ctor_set(v___x_611_, 1, v___x_613_);
v___x_615_ = v___x_611_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_env_604_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v___x_613_);
lean_ctor_set(v_reuseFailAlloc_619_, 2, v_fileMap_603_);
lean_ctor_set(v_reuseFailAlloc_619_, 3, v_mctx_605_);
lean_ctor_set(v_reuseFailAlloc_619_, 4, v_options_606_);
lean_ctor_set(v_reuseFailAlloc_619_, 5, v_currNamespace_607_);
lean_ctor_set(v_reuseFailAlloc_619_, 6, v_openDecls_608_);
lean_ctor_set(v_reuseFailAlloc_619_, 7, v_ngen_609_);
v___x_615_ = v_reuseFailAlloc_619_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
lean_object* v___x_617_; 
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 0, v___x_615_);
v___x_617_ = v___x_601_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_615_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2___boxed(lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2(v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_);
lean_dec(v___y_629_);
lean_dec_ref(v___y_628_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0(lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
lean_object* v___x_639_; lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_649_; 
v___x_639_ = l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2(v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
v_a_640_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_649_ == 0)
{
v___x_642_ = v___x_639_;
v_isShared_643_ = v_isSharedCheck_649_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_639_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_649_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_647_; 
v___x_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_644_, 0, v_a_640_);
v___x_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v___x_645_);
v___x_647_ = v___x_642_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_645_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0___boxed(lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0(v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg(lean_object* v_x_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v___f_667_; lean_object* v___x_668_; 
v___f_667_ = ((lean_object*)(l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___closed__0));
v___x_668_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg(v_x_659_, v___f_667_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___boxed(lean_object* v_x_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg(v_x_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0(lean_object* v_fst_678_, lean_object* v_snd_679_, lean_object* v_fst_680_, lean_object* v_fst_681_, lean_object* v_00___682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_690_, 0, v_fst_678_);
lean_ctor_set(v___x_690_, 1, v_snd_679_);
v___x_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_691_, 0, v_fst_680_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v_fst_681_);
lean_ctor_set(v___x_692_, 1, v___x_691_);
v___x_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
v___x_694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0___boxed(lean_object* v_fst_695_, lean_object* v_snd_696_, lean_object* v_fst_697_, lean_object* v_fst_698_, lean_object* v_00___699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0(v_fst_695_, v_snd_696_, v_fst_697_, v_fst_698_, v_00___699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_);
lean_dec(v___y_705_);
lean_dec_ref(v___y_704_);
lean_dec(v___y_703_);
lean_dec_ref(v___y_702_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__2(lean_object* v_fst_708_, lean_object* v___f_709_, lean_object* v_snd_710_, lean_object* v_____r_711_, lean_object* v_lctx_712_, lean_object* v_info_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_721_ = lean_array_pop(v_fst_708_);
v___x_722_ = lean_array_get_size(v___x_721_);
v___x_723_ = lean_unsigned_to_nat(0u);
v___x_724_ = lean_nat_dec_eq(v___x_722_, v___x_723_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; lean_object* v___x_726_; 
lean_dec(v_snd_710_);
v___x_725_ = lean_box(0);
lean_inc(v___y_719_);
lean_inc_ref(v___y_718_);
lean_inc(v___y_717_);
lean_inc_ref(v___y_716_);
lean_inc(v___y_715_);
lean_inc_ref(v___y_714_);
v___x_726_ = lean_apply_11(v___f_709_, v___x_725_, v_lctx_712_, v___x_721_, v_info_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_, lean_box(0));
return v___x_726_;
}
else
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
lean_dec_ref(v___f_709_);
v___x_727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_727_, 0, v_info_713_);
lean_ctor_set(v___x_727_, 1, v_snd_710_);
v___x_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_728_, 0, v___x_721_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
v___x_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_729_, 0, v_lctx_712_);
lean_ctor_set(v___x_729_, 1, v___x_728_);
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
return v___x_731_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__2___boxed(lean_object* v_fst_732_, lean_object* v___f_733_, lean_object* v_snd_734_, lean_object* v_____r_735_, lean_object* v_lctx_736_, lean_object* v_info_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__2(v_fst_732_, v___f_733_, v_snd_734_, v_____r_735_, v_lctx_736_, v_info_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1(lean_object* v_snd_746_, lean_object* v___x_747_, lean_object* v_____r_748_, lean_object* v_lctx_749_, lean_object* v_hs_750_, lean_object* v_info_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_759_ = l_Lean_NameSet_insert(v_snd_746_, v___x_747_);
v___x_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_760_, 0, v_info_751_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
v___x_761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_761_, 0, v_hs_750_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
v___x_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_762_, 0, v_lctx_749_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_763_, 0, v___x_762_);
v___x_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1___boxed(lean_object* v_snd_765_, lean_object* v___x_766_, lean_object* v_____r_767_, lean_object* v_lctx_768_, lean_object* v_hs_769_, lean_object* v_info_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1(v_snd_765_, v___x_766_, v_____r_767_, v_lctx_768_, v_hs_769_, v_info_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg(lean_object* v_upperBound_787_, lean_object* v___x_788_, lean_object* v_val_789_, lean_object* v_a_790_, lean_object* v_b_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v___y_800_; uint8_t v___x_822_; 
v___x_822_ = lean_nat_dec_lt(v_a_790_, v_upperBound_787_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; 
lean_dec(v_a_790_);
v___x_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_823_, 0, v_b_791_);
return v___x_823_;
}
else
{
lean_object* v_snd_824_; lean_object* v_snd_825_; lean_object* v_fst_826_; lean_object* v_fst_827_; lean_object* v_fst_828_; lean_object* v_snd_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_874_; 
v_snd_824_ = lean_ctor_get(v_b_791_, 1);
lean_inc(v_snd_824_);
v_snd_825_ = lean_ctor_get(v_snd_824_, 1);
lean_inc(v_snd_825_);
v_fst_826_ = lean_ctor_get(v_b_791_, 0);
lean_inc(v_fst_826_);
lean_dec_ref(v_b_791_);
v_fst_827_ = lean_ctor_get(v_snd_824_, 0);
lean_inc(v_fst_827_);
lean_dec(v_snd_824_);
v_fst_828_ = lean_ctor_get(v_snd_825_, 0);
v_snd_829_ = lean_ctor_get(v_snd_825_, 1);
v_isSharedCheck_874_ = !lean_is_exclusive(v_snd_825_);
if (v_isSharedCheck_874_ == 0)
{
v___x_831_ = v_snd_825_;
v_isShared_832_ = v_isSharedCheck_874_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_snd_829_);
lean_inc(v_fst_828_);
lean_dec(v_snd_825_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_874_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_833_ = lean_nat_sub(v___x_788_, v_a_790_);
v___x_834_ = lean_unsigned_to_nat(1u);
v___x_835_ = lean_nat_sub(v___x_833_, v___x_834_);
lean_dec(v___x_833_);
v___x_836_ = l_Lean_LocalContext_getAt_x3f(v_fst_826_, v___x_835_);
lean_dec(v___x_835_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v___x_837_; lean_object* v___x_838_; 
lean_del_object(v___x_831_);
v___x_837_ = lean_box(0);
v___x_838_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0(v_fst_828_, v_snd_829_, v_fst_827_, v_fst_826_, v___x_837_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
v___y_800_ = v___x_838_;
goto v___jp_799_;
}
else
{
lean_object* v_val_839_; uint8_t v___x_840_; 
v_val_839_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_val_839_);
lean_dec_ref_known(v___x_836_, 1);
v___x_840_ = l_Lean_LocalDecl_isImplementationDetail(v_val_839_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; lean_object* v___f_842_; lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_841_ = l_Lean_LocalDecl_userName(v_val_839_);
lean_inc_n(v___x_841_, 2);
lean_inc(v_snd_829_);
v___f_842_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1___boxed), 13, 2);
lean_closure_set(v___f_842_, 0, v_snd_829_);
lean_closure_set(v___f_842_, 1, v___x_841_);
v___x_867_ = l_Lean_extractMacroScopes(v___x_841_);
v___x_868_ = l_Lean_MacroScopesView_equalScope(v___x_867_, v_val_789_);
lean_dec_ref(v___x_867_);
if (v___x_868_ == 0)
{
lean_dec(v___x_841_);
goto v___jp_843_;
}
else
{
uint8_t v___x_869_; 
v___x_869_ = l_Lean_NameSet_contains(v_snd_829_, v___x_841_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; lean_object* v___x_871_; 
lean_dec_ref(v___f_842_);
lean_dec(v_val_839_);
lean_del_object(v___x_831_);
v___x_870_ = lean_box(0);
v___x_871_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1(v_snd_829_, v___x_841_, v___x_870_, v_fst_826_, v_fst_827_, v_fst_828_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
v___y_800_ = v___x_871_;
goto v___jp_799_;
}
else
{
lean_dec(v___x_841_);
goto v___jp_843_;
}
}
v___jp_843_:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_844_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2));
v___x_845_ = lean_box(0);
v___x_846_ = lean_array_get_size(v_fst_827_);
v___x_847_ = lean_nat_sub(v___x_846_, v___x_834_);
v___x_848_ = lean_array_get_borrowed(v___x_845_, v_fst_827_, v___x_847_);
lean_dec(v___x_847_);
lean_inc(v___x_848_);
v___x_849_ = l_Lean_Syntax_isOfKind(v___x_848_, v___x_844_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; lean_object* v___x_851_; 
lean_dec(v_val_839_);
lean_del_object(v___x_831_);
v___x_850_ = lean_box(0);
v___x_851_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__2(v_fst_827_, v___f_842_, v_snd_829_, v___x_850_, v_fst_826_, v_fst_828_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
v___y_800_ = v___x_851_;
goto v___jp_799_;
}
else
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; uint8_t v___x_855_; 
v___x_852_ = lean_unsigned_to_nat(0u);
v___x_853_ = l_Lean_Syntax_getArg(v___x_848_, v___x_852_);
v___x_854_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__4));
lean_inc(v___x_853_);
v___x_855_ = l_Lean_Syntax_isOfKind(v___x_853_, v___x_854_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; lean_object* v___x_857_; 
lean_dec(v___x_853_);
lean_dec(v_val_839_);
lean_del_object(v___x_831_);
v___x_856_ = lean_box(0);
v___x_857_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__2(v_fst_827_, v___f_842_, v_snd_829_, v___x_856_, v_fst_826_, v_fst_828_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
v___y_800_ = v___x_857_;
goto v___jp_799_;
}
else
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_862_; 
v___x_858_ = l_Lean_TSyntax_getId(v___x_853_);
v___x_859_ = l_Lean_LocalDecl_fvarId(v_val_839_);
lean_dec(v_val_839_);
lean_inc(v___x_859_);
v___x_860_ = l_Lean_LocalContext_setUserName(v_fst_826_, v___x_859_, v___x_858_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 1, v___x_853_);
lean_ctor_set(v___x_831_, 0, v___x_859_);
v___x_862_ = v___x_831_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___x_859_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v___x_853_);
v___x_862_ = v_reuseFailAlloc_866_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = lean_array_push(v_fst_828_, v___x_862_);
v___x_864_ = lean_box(0);
v___x_865_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__2(v_fst_827_, v___f_842_, v_snd_829_, v___x_864_, v___x_860_, v___x_863_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
v___y_800_ = v___x_865_;
goto v___jp_799_;
}
}
}
}
}
else
{
lean_object* v___x_872_; lean_object* v___x_873_; 
lean_dec(v_val_839_);
lean_del_object(v___x_831_);
v___x_872_ = lean_box(0);
v___x_873_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0(v_fst_828_, v_snd_829_, v_fst_827_, v_fst_826_, v___x_872_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
v___y_800_ = v___x_873_;
goto v___jp_799_;
}
}
}
}
v___jp_799_:
{
if (lean_obj_tag(v___y_800_) == 0)
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_813_; 
v_a_801_ = lean_ctor_get(v___y_800_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___y_800_);
if (v_isSharedCheck_813_ == 0)
{
v___x_803_ = v___y_800_;
v_isShared_804_ = v_isSharedCheck_813_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___y_800_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_813_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
if (lean_obj_tag(v_a_801_) == 0)
{
lean_object* v_a_805_; lean_object* v___x_807_; 
lean_dec(v_a_790_);
v_a_805_ = lean_ctor_get(v_a_801_, 0);
lean_inc(v_a_805_);
lean_dec_ref_known(v_a_801_, 1);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 0, v_a_805_);
v___x_807_ = v___x_803_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_805_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
else
{
lean_object* v_a_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
lean_del_object(v___x_803_);
v_a_809_ = lean_ctor_get(v_a_801_, 0);
lean_inc(v_a_809_);
lean_dec_ref_known(v_a_801_, 1);
v___x_810_ = lean_unsigned_to_nat(1u);
v___x_811_ = lean_nat_add(v_a_790_, v___x_810_);
lean_dec(v_a_790_);
v_a_790_ = v___x_811_;
v_b_791_ = v_a_809_;
goto _start;
}
}
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_dec(v_a_790_);
v_a_814_ = lean_ctor_get(v___y_800_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___y_800_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___y_800_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___y_800_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___boxed(lean_object* v_upperBound_875_, lean_object* v___x_876_, lean_object* v_val_877_, lean_object* v_a_878_, lean_object* v_b_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg(v_upperBound_875_, v___x_876_, v_val_877_, v_a_878_, v_b_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec_ref(v_val_877_);
lean_dec(v___x_876_);
lean_dec(v_upperBound_875_);
return v_res_887_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0(uint8_t v___x_896_, lean_object* v_x_897_){
_start:
{
if (lean_obj_tag(v_x_897_) == 1)
{
lean_object* v_pre_898_; 
v_pre_898_ = lean_ctor_get(v_x_897_, 0);
switch(lean_obj_tag(v_pre_898_))
{
case 1:
{
lean_object* v_pre_899_; 
v_pre_899_ = lean_ctor_get(v_pre_898_, 0);
switch(lean_obj_tag(v_pre_899_))
{
case 0:
{
lean_object* v_str_900_; lean_object* v_str_901_; lean_object* v___x_902_; uint8_t v___x_903_; 
v_str_900_ = lean_ctor_get(v_x_897_, 1);
v_str_901_ = lean_ctor_get(v_pre_898_, 1);
v___x_902_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__0));
v___x_903_ = lean_string_dec_eq(v_str_901_, v___x_902_);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; uint8_t v___x_905_; 
v___x_904_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__1));
v___x_905_ = lean_string_dec_eq(v_str_901_, v___x_904_);
if (v___x_905_ == 0)
{
return v___x_905_;
}
else
{
lean_object* v___x_906_; uint8_t v___x_907_; 
v___x_906_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__2));
v___x_907_ = lean_string_dec_eq(v_str_900_, v___x_906_);
return v___x_907_;
}
}
else
{
lean_object* v___x_908_; uint8_t v___x_909_; 
v___x_908_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__3));
v___x_909_ = lean_string_dec_eq(v_str_900_, v___x_908_);
return v___x_909_;
}
}
case 1:
{
lean_object* v_pre_910_; 
v_pre_910_ = lean_ctor_get(v_pre_899_, 0);
if (lean_obj_tag(v_pre_910_) == 0)
{
lean_object* v_str_911_; lean_object* v_str_912_; lean_object* v_str_913_; lean_object* v___x_914_; uint8_t v___x_915_; 
v_str_911_ = lean_ctor_get(v_x_897_, 1);
v_str_912_ = lean_ctor_get(v_pre_898_, 1);
v_str_913_ = lean_ctor_get(v_pre_899_, 1);
v___x_914_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__4));
v___x_915_ = lean_string_dec_eq(v_str_913_, v___x_914_);
if (v___x_915_ == 0)
{
return v___x_915_;
}
else
{
lean_object* v___x_916_; uint8_t v___x_917_; 
v___x_916_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__5));
v___x_917_ = lean_string_dec_eq(v_str_912_, v___x_916_);
if (v___x_917_ == 0)
{
return v___x_917_;
}
else
{
lean_object* v___x_918_; uint8_t v___x_919_; 
v___x_918_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__6));
v___x_919_ = lean_string_dec_eq(v_str_911_, v___x_918_);
return v___x_919_;
}
}
}
else
{
return v___x_896_;
}
}
default: 
{
return v___x_896_;
}
}
}
case 0:
{
lean_object* v_str_920_; lean_object* v___x_921_; uint8_t v___x_922_; 
v_str_920_ = lean_ctor_get(v_x_897_, 1);
v___x_921_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__7));
v___x_922_ = lean_string_dec_eq(v_str_920_, v___x_921_);
return v___x_922_;
}
default: 
{
return v___x_896_;
}
}
}
else
{
return v___x_896_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___boxed(lean_object* v___x_923_, lean_object* v_x_924_){
_start:
{
uint8_t v___x_22220__boxed_925_; uint8_t v_res_926_; lean_object* v_r_927_; 
v___x_22220__boxed_925_ = lean_unbox(v___x_923_);
v_res_926_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0(v___x_22220__boxed_925_, v_x_924_);
lean_dec(v_x_924_);
v_r_927_ = lean_box(v_res_926_);
return v_r_927_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20(lean_object* v_opts_928_, lean_object* v_opt_929_){
_start:
{
lean_object* v_name_930_; lean_object* v_defValue_931_; lean_object* v_map_932_; lean_object* v___x_933_; 
v_name_930_ = lean_ctor_get(v_opt_929_, 0);
v_defValue_931_ = lean_ctor_get(v_opt_929_, 1);
v_map_932_ = lean_ctor_get(v_opts_928_, 0);
v___x_933_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_932_, v_name_930_);
if (lean_obj_tag(v___x_933_) == 0)
{
uint8_t v___x_934_; 
v___x_934_ = lean_unbox(v_defValue_931_);
return v___x_934_;
}
else
{
lean_object* v_val_935_; 
v_val_935_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_val_935_);
lean_dec_ref_known(v___x_933_, 1);
if (lean_obj_tag(v_val_935_) == 1)
{
uint8_t v_v_936_; 
v_v_936_ = lean_ctor_get_uint8(v_val_935_, 0);
lean_dec_ref_known(v_val_935_, 0);
return v_v_936_;
}
else
{
uint8_t v___x_937_; 
lean_dec(v_val_935_);
v___x_937_ = lean_unbox(v_defValue_931_);
return v___x_937_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20___boxed(lean_object* v_opts_938_, lean_object* v_opt_939_){
_start:
{
uint8_t v_res_940_; lean_object* v_r_941_; 
v_res_940_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20(v_opts_938_, v_opt_939_);
lean_dec_ref(v_opt_939_);
lean_dec_ref(v_opts_938_);
v_r_941_ = lean_box(v_res_940_);
return v_r_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19(lean_object* v_msgData_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v___x_948_; lean_object* v_env_949_; uint8_t v___x_950_; lean_object* v_env_951_; lean_object* v___x_952_; lean_object* v_toCold_953_; lean_object* v_mctx_954_; lean_object* v_lctx_955_; lean_object* v_options_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_948_ = lean_st_ref_get(v___y_946_);
v_env_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc_ref(v_env_949_);
lean_dec(v___x_948_);
v___x_950_ = 0;
v_env_951_ = l_Lean_Environment_setRecordingDeps(v_env_949_, v___x_950_);
v___x_952_ = lean_st_ref_get(v___y_944_);
v_toCold_953_ = lean_ctor_get(v___y_945_, 0);
v_mctx_954_ = lean_ctor_get(v___x_952_, 0);
lean_inc_ref(v_mctx_954_);
lean_dec(v___x_952_);
v_lctx_955_ = lean_ctor_get(v___y_943_, 2);
v_options_956_ = lean_ctor_get(v_toCold_953_, 2);
lean_inc_ref(v_options_956_);
lean_inc_ref(v_lctx_955_);
v___x_957_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_957_, 0, v_env_951_);
lean_ctor_set(v___x_957_, 1, v_mctx_954_);
lean_ctor_set(v___x_957_, 2, v_lctx_955_);
lean_ctor_set(v___x_957_, 3, v_options_956_);
v___x_958_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_957_);
lean_ctor_set(v___x_958_, 1, v_msgData_942_);
v___x_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19___boxed(lean_object* v_msgData_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19(v_msgData_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg(lean_object* v_ref_971_, lean_object* v_msgData_972_, uint8_t v_severity_973_, uint8_t v_isSilent_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_){
_start:
{
uint8_t v___y_981_; lean_object* v___y_982_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_985_; lean_object* v___y_986_; uint8_t v___y_987_; lean_object* v_toCold_988_; lean_object* v___y_989_; lean_object* v___y_1018_; lean_object* v___y_1019_; uint8_t v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; uint8_t v___y_1023_; uint8_t v___y_1024_; lean_object* v___y_1025_; uint8_t v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; uint8_t v___y_1049_; uint8_t v___y_1050_; lean_object* v___y_1051_; uint8_t v___y_1055_; uint8_t v___x_1072_; uint8_t v___x_1073_; 
v___x_1072_ = 2;
v___x_1073_ = l_Lean_instBEqMessageSeverity_beq(v_severity_973_, v___x_1072_);
if (v___x_1073_ == 0)
{
goto v___jp_1065_;
}
else
{
uint8_t v___x_1074_; 
lean_inc_ref(v_msgData_972_);
v___x_1074_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_972_);
if (v___x_1074_ == 0)
{
goto v___jp_1065_;
}
else
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
lean_dec_ref(v_msgData_972_);
v___x_1075_ = lean_box(0);
v___x_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
return v___x_1076_;
}
}
v___jp_980_:
{
lean_object* v_currNamespace_990_; lean_object* v_openDecls_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v_env_996_; lean_object* v_nextMacroScope_997_; lean_object* v_ngen_998_; lean_object* v_auxDeclNGen_999_; lean_object* v_traceState_1000_; lean_object* v_cache_1001_; lean_object* v_recordedDeps_1002_; lean_object* v_messages_1003_; lean_object* v_infoState_1004_; lean_object* v_snapshotTasks_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1016_; 
v_currNamespace_990_ = lean_ctor_get(v_toCold_988_, 4);
v_openDecls_991_ = lean_ctor_get(v_toCold_988_, 5);
lean_inc(v_openDecls_991_);
lean_inc(v_currNamespace_990_);
v___x_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_992_, 0, v_currNamespace_990_);
lean_ctor_set(v___x_992_, 1, v_openDecls_991_);
v___x_993_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
lean_ctor_set(v___x_993_, 1, v___y_982_);
lean_inc_ref(v___y_983_);
lean_inc_ref(v___y_984_);
v___x_994_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_994_, 0, v___y_984_);
lean_ctor_set(v___x_994_, 1, v___y_986_);
lean_ctor_set(v___x_994_, 2, v___y_985_);
lean_ctor_set(v___x_994_, 3, v___y_983_);
lean_ctor_set(v___x_994_, 4, v___x_993_);
lean_ctor_set_uint8(v___x_994_, sizeof(void*)*5, v___y_981_);
lean_ctor_set_uint8(v___x_994_, sizeof(void*)*5 + 1, v___y_987_);
lean_ctor_set_uint8(v___x_994_, sizeof(void*)*5 + 2, v_isSilent_974_);
v___x_995_ = lean_st_ref_take(v___y_989_);
v_env_996_ = lean_ctor_get(v___x_995_, 0);
v_nextMacroScope_997_ = lean_ctor_get(v___x_995_, 1);
v_ngen_998_ = lean_ctor_get(v___x_995_, 2);
v_auxDeclNGen_999_ = lean_ctor_get(v___x_995_, 3);
v_traceState_1000_ = lean_ctor_get(v___x_995_, 4);
v_cache_1001_ = lean_ctor_get(v___x_995_, 5);
v_recordedDeps_1002_ = lean_ctor_get(v___x_995_, 6);
v_messages_1003_ = lean_ctor_get(v___x_995_, 7);
v_infoState_1004_ = lean_ctor_get(v___x_995_, 8);
v_snapshotTasks_1005_ = lean_ctor_get(v___x_995_, 9);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1007_ = v___x_995_;
v_isShared_1008_ = v_isSharedCheck_1016_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_snapshotTasks_1005_);
lean_inc(v_infoState_1004_);
lean_inc(v_messages_1003_);
lean_inc(v_recordedDeps_1002_);
lean_inc(v_cache_1001_);
lean_inc(v_traceState_1000_);
lean_inc(v_auxDeclNGen_999_);
lean_inc(v_ngen_998_);
lean_inc(v_nextMacroScope_997_);
lean_inc(v_env_996_);
lean_dec(v___x_995_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1016_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1012_; 
v___x_1009_ = lean_box(0);
v___x_1010_ = l_Lean_MessageLog_add(v___x_994_, v_messages_1003_);
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 7, v___x_1010_);
v___x_1012_ = v___x_1007_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_env_996_);
lean_ctor_set(v_reuseFailAlloc_1015_, 1, v_nextMacroScope_997_);
lean_ctor_set(v_reuseFailAlloc_1015_, 2, v_ngen_998_);
lean_ctor_set(v_reuseFailAlloc_1015_, 3, v_auxDeclNGen_999_);
lean_ctor_set(v_reuseFailAlloc_1015_, 4, v_traceState_1000_);
lean_ctor_set(v_reuseFailAlloc_1015_, 5, v_cache_1001_);
lean_ctor_set(v_reuseFailAlloc_1015_, 6, v_recordedDeps_1002_);
lean_ctor_set(v_reuseFailAlloc_1015_, 7, v___x_1010_);
lean_ctor_set(v_reuseFailAlloc_1015_, 8, v_infoState_1004_);
lean_ctor_set(v_reuseFailAlloc_1015_, 9, v_snapshotTasks_1005_);
v___x_1012_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_st_ref_put(v___y_989_, v___x_1012_);
v___x_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1009_);
return v___x_1014_;
}
}
}
v___jp_1017_:
{
lean_object* v_fileName_1026_; lean_object* v_fileMap_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1043_; 
v_fileName_1026_ = lean_ctor_get(v___y_1022_, 0);
v_fileMap_1027_ = lean_ctor_get(v___y_1022_, 1);
v___x_1028_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_972_);
v___x_1029_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19(v___x_1028_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1032_ = v___x_1029_;
v_isShared_1033_ = v_isSharedCheck_1043_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_1029_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1043_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
lean_inc_ref_n(v_fileMap_1027_, 2);
v___x_1034_ = l_Lean_FileMap_toPosition(v_fileMap_1027_, v___y_1021_);
lean_dec(v___y_1021_);
v___x_1035_ = l_Lean_FileMap_toPosition(v_fileMap_1027_, v___y_1025_);
lean_dec(v___y_1025_);
v___x_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
v___x_1037_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__0));
if (v___y_1023_ == 0)
{
lean_del_object(v___x_1032_);
v___y_981_ = v___y_1020_;
v___y_982_ = v_a_1030_;
v___y_983_ = v___x_1037_;
v___y_984_ = v_fileName_1026_;
v___y_985_ = v___x_1036_;
v___y_986_ = v___x_1034_;
v___y_987_ = v___y_1024_;
v_toCold_988_ = v___y_1018_;
v___y_989_ = v___y_978_;
goto v___jp_980_;
}
else
{
uint8_t v___x_1038_; 
lean_inc(v_a_1030_);
lean_inc_ref(v___y_1019_);
v___x_1038_ = l_Lean_MessageData_hasTag(v___y_1019_, v_a_1030_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; lean_object* v___x_1041_; 
lean_dec_ref_known(v___x_1036_, 1);
lean_dec_ref(v___x_1034_);
lean_dec(v_a_1030_);
v___x_1039_ = lean_box(0);
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 0, v___x_1039_);
v___x_1041_ = v___x_1032_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_1039_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
else
{
lean_del_object(v___x_1032_);
v___y_981_ = v___y_1020_;
v___y_982_ = v_a_1030_;
v___y_983_ = v___x_1037_;
v___y_984_ = v_fileName_1026_;
v___y_985_ = v___x_1036_;
v___y_986_ = v___x_1034_;
v___y_987_ = v___y_1024_;
v_toCold_988_ = v___y_1018_;
v___y_989_ = v___y_978_;
goto v___jp_980_;
}
}
}
}
v___jp_1044_:
{
lean_object* v___x_1052_; 
v___x_1052_ = l_Lean_Syntax_getTailPos_x3f(v___y_1046_, v___y_1045_);
lean_dec(v___y_1046_);
if (lean_obj_tag(v___x_1052_) == 0)
{
lean_inc(v___y_1051_);
v___y_1018_ = v___y_1047_;
v___y_1019_ = v___y_1048_;
v___y_1020_ = v___y_1045_;
v___y_1021_ = v___y_1051_;
v___y_1022_ = v___y_1047_;
v___y_1023_ = v___y_1049_;
v___y_1024_ = v___y_1050_;
v___y_1025_ = v___y_1051_;
goto v___jp_1017_;
}
else
{
lean_object* v_val_1053_; 
v_val_1053_ = lean_ctor_get(v___x_1052_, 0);
lean_inc(v_val_1053_);
lean_dec_ref_known(v___x_1052_, 1);
v___y_1018_ = v___y_1047_;
v___y_1019_ = v___y_1048_;
v___y_1020_ = v___y_1045_;
v___y_1021_ = v___y_1051_;
v___y_1022_ = v___y_1047_;
v___y_1023_ = v___y_1049_;
v___y_1024_ = v___y_1050_;
v___y_1025_ = v_val_1053_;
goto v___jp_1017_;
}
}
v___jp_1054_:
{
lean_object* v_toCold_1056_; lean_object* v_ref_1057_; uint8_t v_suppressElabErrors_1058_; lean_object* v_ref_1059_; uint8_t v___x_1060_; lean_object* v___f_1061_; lean_object* v___x_1062_; 
v_toCold_1056_ = lean_ctor_get(v___y_977_, 0);
v_ref_1057_ = lean_ctor_get(v___y_977_, 2);
v_suppressElabErrors_1058_ = lean_ctor_get_uint8(v___y_977_, sizeof(void*)*3 + 2);
v_ref_1059_ = l_Lean_replaceRef(v_ref_971_, v_ref_1057_);
v___x_1060_ = 0;
v___f_1061_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__1));
v___x_1062_ = l_Lean_Syntax_getPos_x3f(v_ref_1059_, v___x_1060_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v___x_1063_; 
v___x_1063_ = lean_unsigned_to_nat(0u);
v___y_1045_ = v___x_1060_;
v___y_1046_ = v_ref_1059_;
v___y_1047_ = v_toCold_1056_;
v___y_1048_ = v___f_1061_;
v___y_1049_ = v_suppressElabErrors_1058_;
v___y_1050_ = v___y_1055_;
v___y_1051_ = v___x_1063_;
goto v___jp_1044_;
}
else
{
lean_object* v_val_1064_; 
v_val_1064_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_val_1064_);
lean_dec_ref_known(v___x_1062_, 1);
v___y_1045_ = v___x_1060_;
v___y_1046_ = v_ref_1059_;
v___y_1047_ = v_toCold_1056_;
v___y_1048_ = v___f_1061_;
v___y_1049_ = v_suppressElabErrors_1058_;
v___y_1050_ = v___y_1055_;
v___y_1051_ = v_val_1064_;
goto v___jp_1044_;
}
}
v___jp_1065_:
{
uint8_t v___x_1066_; uint8_t v___x_1067_; 
v___x_1066_ = 1;
v___x_1067_ = l_Lean_instBEqMessageSeverity_beq(v_severity_973_, v___x_1066_);
if (v___x_1067_ == 0)
{
v___y_1055_ = v_severity_973_;
goto v___jp_1054_;
}
else
{
lean_object* v___x_1068_; lean_object* v___x_1069_; uint8_t v___x_1070_; 
v___x_1068_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_977_);
v___x_1069_ = l_Lean_warningAsError;
v___x_1070_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20(v___x_1068_, v___x_1069_);
lean_dec_ref(v___x_1068_);
if (v___x_1070_ == 0)
{
v___y_1055_ = v_severity_973_;
goto v___jp_1054_;
}
else
{
uint8_t v___x_1071_; 
v___x_1071_ = 2;
v___y_1055_ = v___x_1071_;
goto v___jp_1054_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___boxed(lean_object* v_ref_1077_, lean_object* v_msgData_1078_, lean_object* v_severity_1079_, lean_object* v_isSilent_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
uint8_t v_severity_boxed_1086_; uint8_t v_isSilent_boxed_1087_; lean_object* v_res_1088_; 
v_severity_boxed_1086_ = lean_unbox(v_severity_1079_);
v_isSilent_boxed_1087_ = lean_unbox(v_isSilent_1080_);
v_res_1088_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg(v_ref_1077_, v_msgData_1078_, v_severity_boxed_1086_, v_isSilent_boxed_1087_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec(v_ref_1077_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7(lean_object* v_msgData_1089_, uint8_t v_severity_1090_, uint8_t v_isSilent_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
lean_object* v_ref_1099_; lean_object* v___x_1100_; 
v_ref_1099_ = lean_ctor_get(v___y_1096_, 2);
v___x_1100_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg(v_ref_1099_, v_msgData_1089_, v_severity_1090_, v_isSilent_1091_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7___boxed(lean_object* v_msgData_1101_, lean_object* v_severity_1102_, lean_object* v_isSilent_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
uint8_t v_severity_boxed_1111_; uint8_t v_isSilent_boxed_1112_; lean_object* v_res_1113_; 
v_severity_boxed_1111_ = lean_unbox(v_severity_1102_);
v_isSilent_boxed_1112_ = lean_unbox(v_isSilent_1103_);
v_res_1113_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7(v_msgData_1101_, v_severity_boxed_1111_, v_isSilent_boxed_1112_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4(lean_object* v_msgData_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
uint8_t v___x_1122_; uint8_t v___x_1123_; lean_object* v___x_1124_; 
v___x_1122_ = 2;
v___x_1123_ = 0;
v___x_1124_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7(v_msgData_1114_, v___x_1122_, v___x_1123_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4___boxed(lean_object* v_msgData_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4(v_msgData_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5(lean_object* v_as_1137_, size_t v_sz_1138_, size_t v_i_1139_, lean_object* v_b_1140_){
_start:
{
lean_object* v_a_1142_; uint8_t v___x_1146_; 
v___x_1146_ = lean_usize_dec_lt(v_i_1139_, v_sz_1138_);
if (v___x_1146_ == 0)
{
lean_inc_ref(v_b_1140_);
return v_b_1140_;
}
else
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v_a_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; 
v___x_1147_ = lean_box(0);
v___x_1148_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___closed__0));
v_a_1149_ = lean_array_uget_borrowed(v_as_1137_, v_i_1139_);
v___x_1150_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2));
lean_inc(v_a_1149_);
v___x_1151_ = l_Lean_Syntax_isOfKind(v_a_1149_, v___x_1150_);
if (v___x_1151_ == 0)
{
v_a_1142_ = v___x_1148_;
goto v___jp_1141_;
}
else
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; uint8_t v___x_1155_; 
v___x_1152_ = lean_unsigned_to_nat(0u);
v___x_1153_ = l_Lean_Syntax_getArg(v_a_1149_, v___x_1152_);
v___x_1154_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__4));
lean_inc(v___x_1153_);
v___x_1155_ = l_Lean_Syntax_isOfKind(v___x_1153_, v___x_1154_);
if (v___x_1155_ == 0)
{
lean_dec(v___x_1153_);
v_a_1142_ = v___x_1148_;
goto v___jp_1141_;
}
else
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1156_ = l_Lean_TSyntax_getId(v___x_1153_);
lean_dec(v___x_1153_);
v___x_1157_ = l_Lean_extractMacroScopes(v___x_1156_);
v___x_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
v___x_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
v___x_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
lean_ctor_set(v___x_1160_, 1, v___x_1147_);
return v___x_1160_;
}
}
}
v___jp_1141_:
{
size_t v___x_1143_; size_t v___x_1144_; 
v___x_1143_ = ((size_t)1ULL);
v___x_1144_ = lean_usize_add(v_i_1139_, v___x_1143_);
v_i_1139_ = v___x_1144_;
v_b_1140_ = v_a_1142_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___boxed(lean_object* v_as_1161_, lean_object* v_sz_1162_, lean_object* v_i_1163_, lean_object* v_b_1164_){
_start:
{
size_t v_sz_boxed_1165_; size_t v_i_boxed_1166_; lean_object* v_res_1167_; 
v_sz_boxed_1165_ = lean_unbox_usize(v_sz_1162_);
lean_dec(v_sz_1162_);
v_i_boxed_1166_ = lean_unbox_usize(v_i_1163_);
lean_dec(v_i_1163_);
v_res_1167_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5(v_as_1161_, v_sz_boxed_1165_, v_i_boxed_1166_, v_b_1164_);
lean_dec_ref(v_b_1164_);
lean_dec_ref(v_as_1161_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18___redArg(lean_object* v_x_1168_, lean_object* v_x_1169_, lean_object* v_x_1170_, lean_object* v_x_1171_){
_start:
{
lean_object* v_ks_1172_; lean_object* v_vs_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1197_; 
v_ks_1172_ = lean_ctor_get(v_x_1168_, 0);
v_vs_1173_ = lean_ctor_get(v_x_1168_, 1);
v_isSharedCheck_1197_ = !lean_is_exclusive(v_x_1168_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1175_ = v_x_1168_;
v_isShared_1176_ = v_isSharedCheck_1197_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_vs_1173_);
lean_inc(v_ks_1172_);
lean_dec(v_x_1168_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1197_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1177_; uint8_t v___x_1178_; 
v___x_1177_ = lean_array_get_size(v_ks_1172_);
v___x_1178_ = lean_nat_dec_lt(v_x_1169_, v___x_1177_);
if (v___x_1178_ == 0)
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1182_; 
lean_dec(v_x_1169_);
v___x_1179_ = lean_array_push(v_ks_1172_, v_x_1170_);
v___x_1180_ = lean_array_push(v_vs_1173_, v_x_1171_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 1, v___x_1180_);
lean_ctor_set(v___x_1175_, 0, v___x_1179_);
v___x_1182_ = v___x_1175_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1179_);
lean_ctor_set(v_reuseFailAlloc_1183_, 1, v___x_1180_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
else
{
lean_object* v_k_x27_1184_; uint8_t v___x_1185_; 
v_k_x27_1184_ = lean_array_fget_borrowed(v_ks_1172_, v_x_1169_);
v___x_1185_ = l_Lean_instBEqMVarId_beq(v_x_1170_, v_k_x27_1184_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1187_; 
if (v_isShared_1176_ == 0)
{
v___x_1187_ = v___x_1175_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_ks_1172_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v_vs_1173_);
v___x_1187_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = lean_unsigned_to_nat(1u);
v___x_1189_ = lean_nat_add(v_x_1169_, v___x_1188_);
lean_dec(v_x_1169_);
v_x_1168_ = v___x_1187_;
v_x_1169_ = v___x_1189_;
goto _start;
}
}
else
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1195_; 
v___x_1192_ = lean_array_fset(v_ks_1172_, v_x_1169_, v_x_1170_);
v___x_1193_ = lean_array_fset(v_vs_1173_, v_x_1169_, v_x_1171_);
lean_dec(v_x_1169_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 1, v___x_1193_);
lean_ctor_set(v___x_1175_, 0, v___x_1192_);
v___x_1195_ = v___x_1175_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v___x_1192_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v___x_1193_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15___redArg(lean_object* v_n_1198_, lean_object* v_k_1199_, lean_object* v_v_1200_){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = lean_unsigned_to_nat(0u);
v___x_1202_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18___redArg(v_n_1198_, v___x_1201_, v_k_1199_, v_v_1200_);
return v___x_1202_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(lean_object* v_x_1204_, size_t v_x_1205_, size_t v_x_1206_, lean_object* v_x_1207_, lean_object* v_x_1208_){
_start:
{
if (lean_obj_tag(v_x_1204_) == 0)
{
lean_object* v_es_1209_; size_t v___x_1210_; size_t v___x_1211_; lean_object* v_j_1212_; lean_object* v___x_1213_; uint8_t v___x_1214_; 
v_es_1209_ = lean_ctor_get(v_x_1204_, 0);
v___x_1210_ = ((size_t)31ULL);
v___x_1211_ = lean_usize_land(v_x_1205_, v___x_1210_);
v_j_1212_ = lean_usize_to_nat(v___x_1211_);
v___x_1213_ = lean_array_get_size(v_es_1209_);
v___x_1214_ = lean_nat_dec_lt(v_j_1212_, v___x_1213_);
if (v___x_1214_ == 0)
{
lean_dec(v_j_1212_);
lean_dec(v_x_1208_);
lean_dec(v_x_1207_);
return v_x_1204_;
}
else
{
lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1253_; 
lean_inc_ref(v_es_1209_);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_x_1204_);
if (v_isSharedCheck_1253_ == 0)
{
lean_object* v_unused_1254_; 
v_unused_1254_ = lean_ctor_get(v_x_1204_, 0);
lean_dec(v_unused_1254_);
v___x_1216_ = v_x_1204_;
v_isShared_1217_ = v_isSharedCheck_1253_;
goto v_resetjp_1215_;
}
else
{
lean_dec(v_x_1204_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1253_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v_v_1218_; lean_object* v___x_1219_; lean_object* v_xs_x27_1220_; lean_object* v___y_1222_; 
v_v_1218_ = lean_array_fget(v_es_1209_, v_j_1212_);
v___x_1219_ = lean_box(0);
v_xs_x27_1220_ = lean_array_fset(v_es_1209_, v_j_1212_, v___x_1219_);
switch(lean_obj_tag(v_v_1218_))
{
case 0:
{
lean_object* v_key_1227_; lean_object* v_val_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1238_; 
v_key_1227_ = lean_ctor_get(v_v_1218_, 0);
v_val_1228_ = lean_ctor_get(v_v_1218_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_v_1218_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1230_ = v_v_1218_;
v_isShared_1231_ = v_isSharedCheck_1238_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_val_1228_);
lean_inc(v_key_1227_);
lean_dec(v_v_1218_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1238_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
uint8_t v___x_1232_; 
v___x_1232_ = l_Lean_instBEqMVarId_beq(v_x_1207_, v_key_1227_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
lean_del_object(v___x_1230_);
v___x_1233_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1227_, v_val_1228_, v_x_1207_, v_x_1208_);
v___x_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
v___y_1222_ = v___x_1234_;
goto v___jp_1221_;
}
else
{
lean_object* v___x_1236_; 
lean_dec(v_val_1228_);
lean_dec(v_key_1227_);
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 1, v_x_1208_);
lean_ctor_set(v___x_1230_, 0, v_x_1207_);
v___x_1236_ = v___x_1230_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_x_1207_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_x_1208_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
v___y_1222_ = v___x_1236_;
goto v___jp_1221_;
}
}
}
}
case 1:
{
lean_object* v_node_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1251_; 
v_node_1239_ = lean_ctor_get(v_v_1218_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v_v_1218_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1241_ = v_v_1218_;
v_isShared_1242_ = v_isSharedCheck_1251_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_node_1239_);
lean_dec(v_v_1218_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1251_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
size_t v___x_1243_; size_t v___x_1244_; size_t v___x_1245_; size_t v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
v___x_1243_ = ((size_t)5ULL);
v___x_1244_ = lean_usize_shift_right(v_x_1205_, v___x_1243_);
v___x_1245_ = ((size_t)1ULL);
v___x_1246_ = lean_usize_add(v_x_1206_, v___x_1245_);
v___x_1247_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(v_node_1239_, v___x_1244_, v___x_1246_, v_x_1207_, v_x_1208_);
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
v___y_1222_ = v___x_1249_;
goto v___jp_1221_;
}
}
}
default: 
{
lean_object* v___x_1252_; 
v___x_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1252_, 0, v_x_1207_);
lean_ctor_set(v___x_1252_, 1, v_x_1208_);
v___y_1222_ = v___x_1252_;
goto v___jp_1221_;
}
}
v___jp_1221_:
{
lean_object* v___x_1223_; lean_object* v___x_1225_; 
v___x_1223_ = lean_array_fset(v_xs_x27_1220_, v_j_1212_, v___y_1222_);
lean_dec(v_j_1212_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v___x_1223_);
v___x_1225_ = v___x_1216_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v___x_1223_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
}
else
{
lean_object* v_ks_1255_; lean_object* v_vs_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1274_; 
v_ks_1255_ = lean_ctor_get(v_x_1204_, 0);
v_vs_1256_ = lean_ctor_get(v_x_1204_, 1);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_x_1204_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1258_ = v_x_1204_;
v_isShared_1259_ = v_isSharedCheck_1274_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_vs_1256_);
lean_inc(v_ks_1255_);
lean_dec(v_x_1204_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1274_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_ks_1255_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v_vs_1256_);
v___x_1261_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v_newNode_1262_; size_t v___x_1263_; uint8_t v___x_1264_; 
v_newNode_1262_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15___redArg(v___x_1261_, v_x_1207_, v_x_1208_);
v___x_1263_ = ((size_t)7ULL);
v___x_1264_ = lean_usize_dec_le(v___x_1263_, v_x_1206_);
if (v___x_1264_ == 0)
{
lean_object* v___x_1265_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1265_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1262_);
v___x_1266_ = lean_unsigned_to_nat(4u);
v___x_1267_ = lean_nat_dec_lt(v___x_1265_, v___x_1266_);
lean_dec(v___x_1265_);
if (v___x_1267_ == 0)
{
lean_object* v_ks_1268_; lean_object* v_vs_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v_ks_1268_ = lean_ctor_get(v_newNode_1262_, 0);
lean_inc_ref(v_ks_1268_);
v_vs_1269_ = lean_ctor_get(v_newNode_1262_, 1);
lean_inc_ref(v_vs_1269_);
lean_dec_ref(v_newNode_1262_);
v___x_1270_ = lean_unsigned_to_nat(0u);
v___x_1271_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0);
v___x_1272_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg(v_x_1206_, v_ks_1268_, v_vs_1269_, v___x_1270_, v___x_1271_);
lean_dec_ref(v_vs_1269_);
lean_dec_ref(v_ks_1268_);
return v___x_1272_;
}
else
{
return v_newNode_1262_;
}
}
else
{
return v_newNode_1262_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg(size_t v_depth_1275_, lean_object* v_keys_1276_, lean_object* v_vals_1277_, lean_object* v_i_1278_, lean_object* v_entries_1279_){
_start:
{
lean_object* v___x_1280_; uint8_t v___x_1281_; 
v___x_1280_ = lean_array_get_size(v_keys_1276_);
v___x_1281_ = lean_nat_dec_lt(v_i_1278_, v___x_1280_);
if (v___x_1281_ == 0)
{
lean_dec(v_i_1278_);
return v_entries_1279_;
}
else
{
lean_object* v_k_1282_; lean_object* v_v_1283_; uint64_t v___x_1284_; size_t v_h_1285_; size_t v___x_1286_; lean_object* v___x_1287_; size_t v___x_1288_; size_t v___x_1289_; size_t v___x_1290_; size_t v_h_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v_k_1282_ = lean_array_fget_borrowed(v_keys_1276_, v_i_1278_);
v_v_1283_ = lean_array_fget_borrowed(v_vals_1277_, v_i_1278_);
v___x_1284_ = l_Lean_instHashableMVarId_hash(v_k_1282_);
v_h_1285_ = lean_uint64_to_usize(v___x_1284_);
v___x_1286_ = ((size_t)5ULL);
v___x_1287_ = lean_unsigned_to_nat(1u);
v___x_1288_ = ((size_t)1ULL);
v___x_1289_ = lean_usize_sub(v_depth_1275_, v___x_1288_);
v___x_1290_ = lean_usize_mul(v___x_1286_, v___x_1289_);
v_h_1291_ = lean_usize_shift_right(v_h_1285_, v___x_1290_);
v___x_1292_ = lean_nat_add(v_i_1278_, v___x_1287_);
lean_dec(v_i_1278_);
lean_inc(v_v_1283_);
lean_inc(v_k_1282_);
v___x_1293_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(v_entries_1279_, v_h_1291_, v_depth_1275_, v_k_1282_, v_v_1283_);
v_i_1278_ = v___x_1292_;
v_entries_1279_ = v___x_1293_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg___boxed(lean_object* v_depth_1295_, lean_object* v_keys_1296_, lean_object* v_vals_1297_, lean_object* v_i_1298_, lean_object* v_entries_1299_){
_start:
{
size_t v_depth_boxed_1300_; lean_object* v_res_1301_; 
v_depth_boxed_1300_ = lean_unbox_usize(v_depth_1295_);
lean_dec(v_depth_1295_);
v_res_1301_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg(v_depth_boxed_1300_, v_keys_1296_, v_vals_1297_, v_i_1298_, v_entries_1299_);
lean_dec_ref(v_vals_1297_);
lean_dec_ref(v_keys_1296_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_x_1302_, lean_object* v_x_1303_, lean_object* v_x_1304_, lean_object* v_x_1305_, lean_object* v_x_1306_){
_start:
{
size_t v_x_22693__boxed_1307_; size_t v_x_22694__boxed_1308_; lean_object* v_res_1309_; 
v_x_22693__boxed_1307_ = lean_unbox_usize(v_x_1303_);
lean_dec(v_x_1303_);
v_x_22694__boxed_1308_ = lean_unbox_usize(v_x_1304_);
lean_dec(v_x_1304_);
v_res_1309_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(v_x_1302_, v_x_22693__boxed_1307_, v_x_22694__boxed_1308_, v_x_1305_, v_x_1306_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5___redArg(lean_object* v_x_1310_, lean_object* v_x_1311_, lean_object* v_x_1312_){
_start:
{
uint64_t v___x_1313_; size_t v___x_1314_; size_t v___x_1315_; lean_object* v___x_1316_; 
v___x_1313_ = l_Lean_instHashableMVarId_hash(v_x_1311_);
v___x_1314_ = lean_uint64_to_usize(v___x_1313_);
v___x_1315_ = ((size_t)1ULL);
v___x_1316_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(v_x_1310_, v___x_1314_, v___x_1315_, v_x_1311_, v_x_1312_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg(lean_object* v_mvarId_1317_, lean_object* v_val_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v___x_1321_; lean_object* v_mctx_1322_; lean_object* v_cache_1323_; lean_object* v_zetaDeltaFVarIds_1324_; lean_object* v_postponed_1325_; lean_object* v_diag_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1355_; 
v___x_1321_ = lean_st_ref_take(v___y_1319_);
v_mctx_1322_ = lean_ctor_get(v___x_1321_, 0);
v_cache_1323_ = lean_ctor_get(v___x_1321_, 1);
v_zetaDeltaFVarIds_1324_ = lean_ctor_get(v___x_1321_, 2);
v_postponed_1325_ = lean_ctor_get(v___x_1321_, 3);
v_diag_1326_ = lean_ctor_get(v___x_1321_, 4);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1328_ = v___x_1321_;
v_isShared_1329_ = v_isSharedCheck_1355_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_diag_1326_);
lean_inc(v_postponed_1325_);
lean_inc(v_zetaDeltaFVarIds_1324_);
lean_inc(v_cache_1323_);
lean_inc(v_mctx_1322_);
lean_dec(v___x_1321_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1355_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v_depth_1330_; lean_object* v_levelAssignDepth_1331_; lean_object* v_lmvarCounter_1332_; lean_object* v_mvarCounter_1333_; lean_object* v_lDecls_1334_; lean_object* v_decls_1335_; lean_object* v_userNames_1336_; lean_object* v_lAssignment_1337_; lean_object* v_eAssignment_1338_; lean_object* v_dAssignment_1339_; lean_object* v_instanceTypedMVars_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1354_; 
v_depth_1330_ = lean_ctor_get(v_mctx_1322_, 0);
v_levelAssignDepth_1331_ = lean_ctor_get(v_mctx_1322_, 1);
v_lmvarCounter_1332_ = lean_ctor_get(v_mctx_1322_, 2);
v_mvarCounter_1333_ = lean_ctor_get(v_mctx_1322_, 3);
v_lDecls_1334_ = lean_ctor_get(v_mctx_1322_, 4);
v_decls_1335_ = lean_ctor_get(v_mctx_1322_, 5);
v_userNames_1336_ = lean_ctor_get(v_mctx_1322_, 6);
v_lAssignment_1337_ = lean_ctor_get(v_mctx_1322_, 7);
v_eAssignment_1338_ = lean_ctor_get(v_mctx_1322_, 8);
v_dAssignment_1339_ = lean_ctor_get(v_mctx_1322_, 9);
v_instanceTypedMVars_1340_ = lean_ctor_get(v_mctx_1322_, 10);
v_isSharedCheck_1354_ = !lean_is_exclusive(v_mctx_1322_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1342_ = v_mctx_1322_;
v_isShared_1343_ = v_isSharedCheck_1354_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_instanceTypedMVars_1340_);
lean_inc(v_dAssignment_1339_);
lean_inc(v_eAssignment_1338_);
lean_inc(v_lAssignment_1337_);
lean_inc(v_userNames_1336_);
lean_inc(v_decls_1335_);
lean_inc(v_lDecls_1334_);
lean_inc(v_mvarCounter_1333_);
lean_inc(v_lmvarCounter_1332_);
lean_inc(v_levelAssignDepth_1331_);
lean_inc(v_depth_1330_);
lean_dec(v_mctx_1322_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1354_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1347_; 
v___x_1344_ = lean_box(0);
v___x_1345_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5___redArg(v_eAssignment_1338_, v_mvarId_1317_, v_val_1318_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 8, v___x_1345_);
v___x_1347_ = v___x_1342_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_depth_1330_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v_levelAssignDepth_1331_);
lean_ctor_set(v_reuseFailAlloc_1353_, 2, v_lmvarCounter_1332_);
lean_ctor_set(v_reuseFailAlloc_1353_, 3, v_mvarCounter_1333_);
lean_ctor_set(v_reuseFailAlloc_1353_, 4, v_lDecls_1334_);
lean_ctor_set(v_reuseFailAlloc_1353_, 5, v_decls_1335_);
lean_ctor_set(v_reuseFailAlloc_1353_, 6, v_userNames_1336_);
lean_ctor_set(v_reuseFailAlloc_1353_, 7, v_lAssignment_1337_);
lean_ctor_set(v_reuseFailAlloc_1353_, 8, v___x_1345_);
lean_ctor_set(v_reuseFailAlloc_1353_, 9, v_dAssignment_1339_);
lean_ctor_set(v_reuseFailAlloc_1353_, 10, v_instanceTypedMVars_1340_);
v___x_1347_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
lean_object* v___x_1349_; 
if (v_isShared_1329_ == 0)
{
lean_ctor_set(v___x_1328_, 0, v___x_1347_);
v___x_1349_ = v___x_1328_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v___x_1347_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v_cache_1323_);
lean_ctor_set(v_reuseFailAlloc_1352_, 2, v_zetaDeltaFVarIds_1324_);
lean_ctor_set(v_reuseFailAlloc_1352_, 3, v_postponed_1325_);
lean_ctor_set(v_reuseFailAlloc_1352_, 4, v_diag_1326_);
v___x_1349_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1350_ = lean_st_ref_put(v___y_1319_, v___x_1349_);
v___x_1351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1344_);
return v___x_1351_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg___boxed(lean_object* v_mvarId_1356_, lean_object* v_val_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg(v_mvarId_1356_, v_val_1357_, v___y_1358_);
lean_dec(v___y_1358_);
return v_res_1360_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_renameInaccessibles___closed__1(void){
_start:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1363_ = l_Lean_NameSet_empty;
v___x_1364_ = ((lean_object*)(l_Lean_Elab_Tactic_renameInaccessibles___closed__0));
v___x_1365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1364_);
lean_ctor_set(v___x_1365_, 1, v___x_1363_);
return v___x_1365_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_renameInaccessibles___closed__3(void){
_start:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = ((lean_object*)(l_Lean_Elab_Tactic_renameInaccessibles___closed__2));
v___x_1368_ = l_Lean_stringToMessageData(v___x_1367_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles(lean_object* v_mvarId_1371_, lean_object* v_hs_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_){
_start:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; uint8_t v___x_1382_; 
v___x_1380_ = lean_array_get_size(v_hs_1372_);
v___x_1381_ = lean_unsigned_to_nat(0u);
v___x_1382_ = lean_nat_dec_eq(v___x_1380_, v___x_1381_);
if (v___x_1382_ == 0)
{
lean_object* v___x_1383_; 
lean_inc(v_mvarId_1371_);
v___x_1383_ = l_Lean_MVarId_getDecl(v_mvarId_1371_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_);
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1486_; 
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1386_ = v___x_1383_;
v_isShared_1387_ = v_isSharedCheck_1486_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1383_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1486_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; size_t v_sz_1390_; size_t v___x_1391_; lean_object* v___x_1392_; lean_object* v_fst_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1484_; 
v___x_1388_ = lean_box(0);
v___x_1389_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___closed__0));
v_sz_1390_ = lean_array_size(v_hs_1372_);
v___x_1391_ = ((size_t)0ULL);
v___x_1392_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5(v_hs_1372_, v_sz_1390_, v___x_1391_, v___x_1389_);
v_fst_1393_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1484_ == 0)
{
lean_object* v_unused_1485_; 
v_unused_1485_ = lean_ctor_get(v___x_1392_, 1);
lean_dec(v_unused_1485_);
v___x_1395_ = v___x_1392_;
v_isShared_1396_ = v_isSharedCheck_1484_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_fst_1393_);
lean_dec(v___x_1392_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1484_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
if (lean_obj_tag(v_fst_1393_) == 0)
{
lean_object* v___x_1398_; 
lean_del_object(v___x_1395_);
lean_dec(v_a_1384_);
lean_dec_ref(v_hs_1372_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 0, v_mvarId_1371_);
v___x_1398_ = v___x_1386_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_mvarId_1371_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
else
{
lean_object* v_val_1400_; 
v_val_1400_ = lean_ctor_get(v_fst_1393_, 0);
lean_inc(v_val_1400_);
lean_dec_ref_known(v_fst_1393_, 1);
if (lean_obj_tag(v_val_1400_) == 1)
{
lean_object* v_val_1401_; lean_object* v_userName_1402_; lean_object* v_lctx_1403_; lean_object* v_type_1404_; lean_object* v_localInstances_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1409_; 
lean_del_object(v___x_1386_);
v_val_1401_ = lean_ctor_get(v_val_1400_, 0);
lean_inc(v_val_1401_);
lean_dec_ref_known(v_val_1400_, 1);
v_userName_1402_ = lean_ctor_get(v_a_1384_, 0);
lean_inc(v_userName_1402_);
v_lctx_1403_ = lean_ctor_get(v_a_1384_, 1);
lean_inc_ref_n(v_lctx_1403_, 2);
v_type_1404_ = lean_ctor_get(v_a_1384_, 2);
lean_inc_ref(v_type_1404_);
v_localInstances_1405_ = lean_ctor_get(v_a_1384_, 4);
lean_inc_ref(v_localInstances_1405_);
lean_dec(v_a_1384_);
v___x_1406_ = lean_local_ctx_num_indices(v_lctx_1403_);
v___x_1407_ = lean_obj_once(&l_Lean_Elab_Tactic_renameInaccessibles___closed__1, &l_Lean_Elab_Tactic_renameInaccessibles___closed__1_once, _init_l_Lean_Elab_Tactic_renameInaccessibles___closed__1);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 1, v___x_1407_);
lean_ctor_set(v___x_1395_, 0, v_hs_1372_);
v___x_1409_ = v___x_1395_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_hs_1372_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1410_, 0, v_lctx_1403_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
v___x_1411_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg(v___x_1406_, v___x_1406_, v_val_1401_, v___x_1381_, v___x_1410_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_);
lean_dec(v_val_1401_);
lean_dec(v___x_1406_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; lean_object* v_snd_1413_; lean_object* v_snd_1414_; lean_object* v_fst_1415_; lean_object* v_fst_1416_; lean_object* v_fst_1417_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1423_; lean_object* v___y_1424_; lean_object* v___x_1460_; uint8_t v___x_1461_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_a_1412_);
lean_dec_ref_known(v___x_1411_, 1);
v_snd_1413_ = lean_ctor_get(v_a_1412_, 1);
lean_inc(v_snd_1413_);
v_snd_1414_ = lean_ctor_get(v_snd_1413_, 1);
lean_inc(v_snd_1414_);
v_fst_1415_ = lean_ctor_get(v_a_1412_, 0);
lean_inc(v_fst_1415_);
lean_dec(v_a_1412_);
v_fst_1416_ = lean_ctor_get(v_snd_1413_, 0);
lean_inc(v_fst_1416_);
lean_dec(v_snd_1413_);
v_fst_1417_ = lean_ctor_get(v_snd_1414_, 0);
lean_inc(v_fst_1417_);
lean_dec(v_snd_1414_);
v___x_1460_ = lean_array_get_size(v_fst_1416_);
lean_dec(v_fst_1416_);
v___x_1461_ = lean_nat_dec_eq(v___x_1460_, v___x_1381_);
if (v___x_1461_ == 0)
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = lean_obj_once(&l_Lean_Elab_Tactic_renameInaccessibles___closed__3, &l_Lean_Elab_Tactic_renameInaccessibles___closed__3_once, _init_l_Lean_Elab_Tactic_renameInaccessibles___closed__3);
v___x_1463_ = l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4(v___x_1462_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_dec_ref_known(v___x_1463_, 1);
v___y_1419_ = v_a_1373_;
v___y_1420_ = v_a_1374_;
v___y_1421_ = v_a_1375_;
v___y_1422_ = v_a_1376_;
v___y_1423_ = v_a_1377_;
v___y_1424_ = v_a_1378_;
goto v___jp_1418_;
}
else
{
lean_object* v_a_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1471_; 
lean_dec(v_fst_1417_);
lean_dec(v_fst_1415_);
lean_dec_ref(v_localInstances_1405_);
lean_dec_ref(v_type_1404_);
lean_dec(v_userName_1402_);
lean_dec(v_mvarId_1371_);
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1466_ = v___x_1463_;
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_a_1464_);
lean_dec(v___x_1463_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1469_; 
if (v_isShared_1467_ == 0)
{
v___x_1469_ = v___x_1466_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_a_1464_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
else
{
v___y_1419_ = v_a_1373_;
v___y_1420_ = v_a_1374_;
v___y_1421_ = v_a_1375_;
v___y_1422_ = v_a_1376_;
v___y_1423_ = v_a_1377_;
v___y_1424_ = v_a_1378_;
goto v___jp_1418_;
}
v___jp_1418_:
{
uint8_t v___x_1425_; lean_object* v___x_1426_; 
v___x_1425_ = 2;
v___x_1426_ = l_Lean_Meta_mkFreshExprMVarAt(v_fst_1415_, v_localInstances_1405_, v_type_1404_, v___x_1425_, v_userName_1402_, v___x_1381_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v_a_1427_; lean_object* v___x_1428_; size_t v_sz_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___f_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
lean_inc(v_a_1427_);
lean_dec_ref_known(v___x_1426_, 1);
v___x_1428_ = l_Lean_Expr_mvarId_x21(v_a_1427_);
v_sz_1429_ = lean_array_size(v_fst_1417_);
v___x_1430_ = lean_box_usize(v_sz_1429_);
v___x_1431_ = ((lean_object*)(l_Lean_Elab_Tactic_renameInaccessibles___boxed__const__1));
v___f_1432_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_renameInaccessibles___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1432_, 0, v_fst_1417_);
lean_closure_set(v___f_1432_, 1, v___x_1430_);
lean_closure_set(v___f_1432_, 2, v___x_1431_);
lean_closure_set(v___f_1432_, 3, v___x_1388_);
lean_inc(v___x_1428_);
v___x_1433_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___boxed), 10, 3);
lean_closure_set(v___x_1433_, 0, lean_box(0));
lean_closure_set(v___x_1433_, 1, v___x_1428_);
lean_closure_set(v___x_1433_, 2, v___f_1432_);
v___x_1434_ = l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg(v___x_1433_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v___x_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
lean_dec_ref_known(v___x_1434_, 1);
v___x_1435_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg(v_mvarId_1371_, v_a_1427_, v___y_1422_);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1442_ == 0)
{
lean_object* v_unused_1443_; 
v_unused_1443_ = lean_ctor_get(v___x_1435_, 0);
lean_dec(v_unused_1443_);
v___x_1437_ = v___x_1435_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_dec(v___x_1435_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1428_);
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1428_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
lean_dec(v___x_1428_);
lean_dec(v_a_1427_);
lean_dec(v_mvarId_1371_);
v_a_1444_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1446_ = v___x_1434_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1434_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_a_1444_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
else
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1459_; 
lean_dec(v_fst_1417_);
lean_dec(v_mvarId_1371_);
v_a_1452_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1454_ = v___x_1426_;
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v___x_1426_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1452_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_dec_ref(v_localInstances_1405_);
lean_dec_ref(v_type_1404_);
lean_dec(v_userName_1402_);
lean_dec(v_mvarId_1371_);
v_a_1472_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1411_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1411_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
}
else
{
lean_object* v___x_1482_; 
lean_dec(v_val_1400_);
lean_del_object(v___x_1395_);
lean_dec(v_a_1384_);
lean_dec_ref(v_hs_1372_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 0, v_mvarId_1371_);
v___x_1482_ = v___x_1386_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_mvarId_1371_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
}
}
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec_ref(v_hs_1372_);
lean_dec(v_mvarId_1371_);
v_a_1487_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1383_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1383_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
else
{
lean_object* v___x_1495_; 
lean_dec_ref(v_hs_1372_);
v___x_1495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1495_, 0, v_mvarId_1371_);
return v___x_1495_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___boxed(lean_object* v_mvarId_1496_, lean_object* v_hs_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lean_Elab_Tactic_renameInaccessibles(v_mvarId_1496_, v_hs_1497_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_);
lean_dec(v_a_1503_);
lean_dec_ref(v_a_1502_);
lean_dec(v_a_1501_);
lean_dec_ref(v_a_1500_);
lean_dec(v_a_1499_);
lean_dec_ref(v_a_1498_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2(lean_object* v_00_u03b1_1506_, lean_object* v_x_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg(v_x_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___boxed(lean_object* v_00_u03b1_1516_, lean_object* v_x_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2(v_00_u03b1_1516_, v_x_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3(lean_object* v_mvarId_1526_, lean_object* v_val_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg(v_mvarId_1526_, v_val_1527_, v___y_1531_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___boxed(lean_object* v_mvarId_1536_, lean_object* v_val_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3(v_mvarId_1536_, v_val_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6(lean_object* v_upperBound_1546_, lean_object* v___x_1547_, lean_object* v_val_1548_, lean_object* v_inst_1549_, lean_object* v_R_1550_, lean_object* v_a_1551_, lean_object* v_b_1552_, lean_object* v_c_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_){
_start:
{
lean_object* v___x_1561_; 
v___x_1561_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg(v_upperBound_1546_, v___x_1547_, v_val_1548_, v_a_1551_, v_b_1552_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___boxed(lean_object* v_upperBound_1562_, lean_object* v___x_1563_, lean_object* v_val_1564_, lean_object* v_inst_1565_, lean_object* v_R_1566_, lean_object* v_a_1567_, lean_object* v_b_1568_, lean_object* v_c_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6(v_upperBound_1562_, v___x_1563_, v_val_1564_, v_inst_1565_, v_R_1566_, v_a_1567_, v_b_1568_, v_c_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
lean_dec(v___y_1573_);
lean_dec_ref(v___y_1572_);
lean_dec(v___y_1571_);
lean_dec_ref(v___y_1570_);
lean_dec_ref(v_val_1564_);
lean_dec(v___x_1563_);
lean_dec(v_upperBound_1562_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3(lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v___x_1585_; 
v___x_1585_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg(v___y_1581_, v___y_1582_, v___y_1583_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___boxed(lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3(v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5(lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg(v___y_1599_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___boxed(lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5(v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3(lean_object* v_00_u03b1_1610_, lean_object* v_x_1611_, lean_object* v_ctx_x3f_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg(v_x_1611_, v_ctx_x3f_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1621_, lean_object* v_x_1622_, lean_object* v_ctx_x3f_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3(v_00_u03b1_1621_, v_x_1622_, v_ctx_x3f_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5(lean_object* v_00_u03b2_1632_, lean_object* v_x_1633_, lean_object* v_x_1634_, lean_object* v_x_1635_){
_start:
{
lean_object* v___x_1636_; 
v___x_1636_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5___redArg(v_x_1633_, v_x_1634_, v_x_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_1637_, lean_object* v_x_1638_, size_t v_x_1639_, size_t v_x_1640_, lean_object* v_x_1641_, lean_object* v_x_1642_){
_start:
{
lean_object* v___x_1643_; 
v___x_1643_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(v_x_1638_, v_x_1639_, v_x_1640_, v_x_1641_, v_x_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03b2_1644_, lean_object* v_x_1645_, lean_object* v_x_1646_, lean_object* v_x_1647_, lean_object* v_x_1648_, lean_object* v_x_1649_){
_start:
{
size_t v_x_23307__boxed_1650_; size_t v_x_23308__boxed_1651_; lean_object* v_res_1652_; 
v_x_23307__boxed_1650_ = lean_unbox_usize(v_x_1646_);
lean_dec(v_x_1646_);
v_x_23308__boxed_1651_ = lean_unbox_usize(v_x_1647_);
lean_dec(v_x_1647_);
v_res_1652_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9(v_00_u03b2_1644_, v_x_1645_, v_x_23307__boxed_1650_, v_x_23308__boxed_1651_, v_x_1648_, v_x_1649_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12(lean_object* v_ref_1653_, lean_object* v_msgData_1654_, uint8_t v_severity_1655_, uint8_t v_isSilent_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg(v_ref_1653_, v_msgData_1654_, v_severity_1655_, v_isSilent_1656_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___boxed(lean_object* v_ref_1665_, lean_object* v_msgData_1666_, lean_object* v_severity_1667_, lean_object* v_isSilent_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_){
_start:
{
uint8_t v_severity_boxed_1676_; uint8_t v_isSilent_boxed_1677_; lean_object* v_res_1678_; 
v_severity_boxed_1676_ = lean_unbox(v_severity_1667_);
v_isSilent_boxed_1677_ = lean_unbox(v_isSilent_1668_);
v_res_1678_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12(v_ref_1665_, v_msgData_1666_, v_severity_boxed_1676_, v_isSilent_boxed_1677_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_);
lean_dec(v___y_1674_);
lean_dec_ref(v___y_1673_);
lean_dec(v___y_1672_);
lean_dec_ref(v___y_1671_);
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1669_);
lean_dec(v_ref_1665_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15(lean_object* v_00_u03b2_1679_, lean_object* v_n_1680_, lean_object* v_k_1681_, lean_object* v_v_1682_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15___redArg(v_n_1680_, v_k_1681_, v_v_1682_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16(lean_object* v_00_u03b2_1684_, size_t v_depth_1685_, lean_object* v_keys_1686_, lean_object* v_vals_1687_, lean_object* v_heq_1688_, lean_object* v_i_1689_, lean_object* v_entries_1690_){
_start:
{
lean_object* v___x_1691_; 
v___x_1691_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg(v_depth_1685_, v_keys_1686_, v_vals_1687_, v_i_1689_, v_entries_1690_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___boxed(lean_object* v_00_u03b2_1692_, lean_object* v_depth_1693_, lean_object* v_keys_1694_, lean_object* v_vals_1695_, lean_object* v_heq_1696_, lean_object* v_i_1697_, lean_object* v_entries_1698_){
_start:
{
size_t v_depth_boxed_1699_; lean_object* v_res_1700_; 
v_depth_boxed_1699_ = lean_unbox_usize(v_depth_1693_);
lean_dec(v_depth_1693_);
v_res_1700_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16(v_00_u03b2_1692_, v_depth_boxed_1699_, v_keys_1694_, v_vals_1695_, v_heq_1696_, v_i_1697_, v_entries_1698_);
lean_dec_ref(v_vals_1695_);
lean_dec_ref(v_keys_1694_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18(lean_object* v_00_u03b2_1701_, lean_object* v_x_1702_, lean_object* v_x_1703_, lean_object* v_x_1704_, lean_object* v_x_1705_){
_start:
{
lean_object* v___x_1706_; 
v___x_1706_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18___redArg(v_x_1702_, v_x_1703_, v_x_1704_, v_x_1705_);
return v___x_1706_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Binders(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_RenameInaccessibles(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Binders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_RenameInaccessibles(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* initialize_Lean_Elab_Binders(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_RenameInaccessibles(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Binders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_RenameInaccessibles(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_RenameInaccessibles(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_RenameInaccessibles(builtin);
}
#ifdef __cplusplus
}
#endif
