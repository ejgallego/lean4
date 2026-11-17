// Lean compiler output
// Module: Lake.Build.Library
// Imports: public import Lake.Config.FacetConfig import Lake.Build.Common import Lake.Build.Targets import Lake.Build.Job.Register import Lake.Build.Target.Fetch import Lake.Build.Infos import Lake.Util.Proc
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
extern lean_object* l_Lake_instDataKindFilePath;
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_modulesFacet;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lake_compileStaticLib(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
extern uint8_t l_System_Platform_isOSX;
extern uint8_t l_System_Platform_isWindows;
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_proc(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lake_buildArtifactUnlessUpToDate(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* l_Lake_Job_mapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_PartialBuildKey_toString(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lake_LeanLib_libName(lean_object*);
lean_object* l_Lake_nameToStaticLib(lean_object*, uint8_t);
lean_object* l_Lake_Job_await___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_ModuleFacet_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_ensureJob___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lake_Job_renew___redArg(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lake_instDataKindDynlib;
lean_object* l_Lake_nameToSharedLib(lean_object*, uint8_t);
uint8_t l_Lake_LeanLib_isPlugin(lean_object*);
lean_object* l_Lake_buildLeanSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_ExternLib_dynlibFacet;
extern lean_object* l_Lake_ExternLib_keyword;
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_sharedFacet;
lean_object* lean_mk_array(lean_object*, lean_object*);
extern lean_object* l_Lake_Module_transImportsFacet;
extern lean_object* l_Lake_Module_keyword;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Lake_Target_fetchIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_instDataKindUnit;
lean_object* l_Lake_Job_mixArray___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_defaultFacet;
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lake_LeanLib_getModuleArray(lean_object*);
extern lean_object* l_Lake_Module_importsFacet;
lean_object* l_Lake_Job_waitUnlessCanceled_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
extern lean_object* l_Lake_Module_elabArtsFacet;
lean_object* l_Lake_Job_mix___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_elabArtsFacet;
extern lean_object* l_Lake_Module_irArtsFacet;
extern lean_object* l_Lake_LeanLib_irArtsFacet;
extern lean_object* l_Lake_LeanLib_leanArtsFacet;
lean_object* l_Lake_mkRelPathString(lean_object*);
extern lean_object* l_Lake_LeanLib_staticFacet;
extern lean_object* l_Lake_LeanLib_staticExportFacet;
extern lean_object* l_Lake_Package_extraDepFacet;
extern lean_object* l_Lake_Package_keyword;
lean_object* l_Lake_Package_fetchTargetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_extraDepFacet;
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lake_EquipT_instMonad___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<nil>"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = ": some modules have bad imports or could not be read"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2_value;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3_value;
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2_value),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__1;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__2;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__3;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_elabArtsFacetConfig___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_elabArtsFacetConfig___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_elabArtsFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_elabArtsFacetConfig___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_elabArtsFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_elabArtsFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_elabArtsFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_elabArtsFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_elabArtsFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_elabArtsFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_elabArtsFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_elabArtsFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_irArtsFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_irArtsFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_irArtsFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_irArtsFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_irArtsFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_irArtsFacetConfig;
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_leanArtsFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_leanArtsFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_leanArtsFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_leanArtsFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_leanArtsFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "filelist"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "libtool"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "-static"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-o"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "-filelist"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7;
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(uint8_t, lean_object*, uint8_t, lean_object*, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "objs"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "export"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1_value;
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed(lean_object**);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ":static"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " (without exports)"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " (with exports)"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "type mismatch in target '"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "': expected '"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1_value;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "', got "};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(uint8_t, lean_object*, uint8_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_staticFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_staticFacetConfig___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_staticFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_staticFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_staticFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_staticFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_staticFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_staticExportFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticExportFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_staticExportFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_staticExportFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_staticExportFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0 = (const lean_object*)&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0_value;
static lean_once_cell_t l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ":shared"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_sharedFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_sharedFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_sharedFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_sharedFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_sharedFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_sharedFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ":extraDep"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_extraDepFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_extraDepFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_extraDepFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_extraDepFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_extraDepFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_extraDepFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "<collection>"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_defaultFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_defaultFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_defaultFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_defaultFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_defaultFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_defaultFacetConfig;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__0;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__1;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__2;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__3;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__4;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__5;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__6;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__7;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__8;
LEAN_EXPORT lean_object* l_Lake_LeanLib_initFacetConfigs;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_initLibraryFacetConfigs;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(lean_object* v_a_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_key_4_; lean_object* v_tail_5_; lean_object* v_name_6_; lean_object* v_name_7_; uint8_t v___x_8_; 
v_key_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v_name_6_ = lean_ctor_get(v_key_4_, 1);
v_name_7_ = lean_ctor_get(v_a_1_, 1);
v___x_8_ = lean_name_eq(v_name_6_, v_name_7_);
if (v___x_8_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_10_, lean_object* v_x_11_){
_start:
{
uint8_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_10_, v_x_11_);
lean_dec(v_x_11_);
lean_dec_ref(v_a_10_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_14_, lean_object* v_x_15_){
_start:
{
if (lean_obj_tag(v_x_15_) == 0)
{
return v_x_14_;
}
else
{
lean_object* v_key_16_; lean_object* v_value_17_; lean_object* v_tail_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_45_; 
v_key_16_ = lean_ctor_get(v_x_15_, 0);
v_value_17_ = lean_ctor_get(v_x_15_, 1);
v_tail_18_ = lean_ctor_get(v_x_15_, 2);
v_isSharedCheck_45_ = !lean_is_exclusive(v_x_15_);
if (v_isSharedCheck_45_ == 0)
{
v___x_20_ = v_x_15_;
v_isShared_21_ = v_isSharedCheck_45_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_tail_18_);
lean_inc(v_value_17_);
lean_inc(v_key_16_);
lean_dec(v_x_15_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_45_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v_name_22_; lean_object* v___x_23_; uint64_t v___y_25_; 
v_name_22_ = lean_ctor_get(v_key_16_, 1);
v___x_23_ = lean_array_get_size(v_x_14_);
if (lean_obj_tag(v_name_22_) == 0)
{
uint64_t v___x_43_; 
v___x_43_ = 1723ULL;
v___y_25_ = v___x_43_;
goto v___jp_24_;
}
else
{
uint64_t v_hash_44_; 
v_hash_44_ = lean_ctor_get_uint64(v_name_22_, sizeof(void*)*2);
v___y_25_ = v_hash_44_;
goto v___jp_24_;
}
v___jp_24_:
{
uint64_t v___x_26_; uint64_t v___x_27_; uint64_t v_fold_28_; uint64_t v___x_29_; uint64_t v___x_30_; uint64_t v___x_31_; size_t v___x_32_; size_t v___x_33_; size_t v___x_34_; size_t v___x_35_; size_t v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_26_ = 32ULL;
v___x_27_ = lean_uint64_shift_right(v___y_25_, v___x_26_);
v_fold_28_ = lean_uint64_xor(v___y_25_, v___x_27_);
v___x_29_ = 16ULL;
v___x_30_ = lean_uint64_shift_right(v_fold_28_, v___x_29_);
v___x_31_ = lean_uint64_xor(v_fold_28_, v___x_30_);
v___x_32_ = lean_uint64_to_usize(v___x_31_);
v___x_33_ = lean_usize_of_nat(v___x_23_);
v___x_34_ = ((size_t)1ULL);
v___x_35_ = lean_usize_sub(v___x_33_, v___x_34_);
v___x_36_ = lean_usize_land(v___x_32_, v___x_35_);
v___x_37_ = lean_array_uget_borrowed(v_x_14_, v___x_36_);
lean_inc(v___x_37_);
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 2, v___x_37_);
v___x_39_ = v___x_20_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v_key_16_);
lean_ctor_set(v_reuseFailAlloc_42_, 1, v_value_17_);
lean_ctor_set(v_reuseFailAlloc_42_, 2, v___x_37_);
v___x_39_ = v_reuseFailAlloc_42_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_40_; 
v___x_40_ = lean_array_uset(v_x_14_, v___x_36_, v___x_39_);
v_x_14_ = v___x_40_;
v_x_15_ = v_tail_18_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(lean_object* v_i_46_, lean_object* v_source_47_, lean_object* v_target_48_){
_start:
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = lean_array_get_size(v_source_47_);
v___x_50_ = lean_nat_dec_lt(v_i_46_, v___x_49_);
if (v___x_50_ == 0)
{
lean_dec_ref(v_source_47_);
lean_dec(v_i_46_);
return v_target_48_;
}
else
{
lean_object* v_es_51_; lean_object* v___x_52_; lean_object* v_source_53_; lean_object* v_target_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v_es_51_ = lean_array_fget(v_source_47_, v_i_46_);
v___x_52_ = lean_box(0);
v_source_53_ = lean_array_fset(v_source_47_, v_i_46_, v___x_52_);
v_target_54_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(v_target_48_, v_es_51_);
v___x_55_ = lean_unsigned_to_nat(1u);
v___x_56_ = lean_nat_add(v_i_46_, v___x_55_);
lean_dec(v_i_46_);
v_i_46_ = v___x_56_;
v_source_47_ = v_source_53_;
v_target_48_ = v_target_54_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(lean_object* v_data_58_){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v_nbuckets_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_59_ = lean_array_get_size(v_data_58_);
v___x_60_ = lean_unsigned_to_nat(2u);
v_nbuckets_61_ = lean_nat_mul(v___x_59_, v___x_60_);
v___x_62_ = lean_unsigned_to_nat(0u);
v___x_63_ = lean_box(0);
v___x_64_ = lean_mk_array(v_nbuckets_61_, v___x_63_);
v___x_65_ = lean_array_propagate_mark(v_data_58_, v___x_64_);
v___x_66_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(v___x_62_, v_data_58_, v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(lean_object* v_m_67_, lean_object* v_a_68_, lean_object* v_b_69_){
_start:
{
lean_object* v_size_70_; lean_object* v_buckets_71_; lean_object* v_name_72_; lean_object* v___x_73_; uint64_t v___y_75_; 
v_size_70_ = lean_ctor_get(v_m_67_, 0);
v_buckets_71_ = lean_ctor_get(v_m_67_, 1);
v_name_72_ = lean_ctor_get(v_a_68_, 1);
v___x_73_ = lean_array_get_size(v_buckets_71_);
if (lean_obj_tag(v_name_72_) == 0)
{
uint64_t v___x_112_; 
v___x_112_ = 1723ULL;
v___y_75_ = v___x_112_;
goto v___jp_74_;
}
else
{
uint64_t v_hash_113_; 
v_hash_113_ = lean_ctor_get_uint64(v_name_72_, sizeof(void*)*2);
v___y_75_ = v_hash_113_;
goto v___jp_74_;
}
v___jp_74_:
{
uint64_t v___x_76_; uint64_t v___x_77_; uint64_t v_fold_78_; uint64_t v___x_79_; uint64_t v___x_80_; uint64_t v___x_81_; size_t v___x_82_; size_t v___x_83_; size_t v___x_84_; size_t v___x_85_; size_t v___x_86_; lean_object* v_bkt_87_; uint8_t v___x_88_; 
v___x_76_ = 32ULL;
v___x_77_ = lean_uint64_shift_right(v___y_75_, v___x_76_);
v_fold_78_ = lean_uint64_xor(v___y_75_, v___x_77_);
v___x_79_ = 16ULL;
v___x_80_ = lean_uint64_shift_right(v_fold_78_, v___x_79_);
v___x_81_ = lean_uint64_xor(v_fold_78_, v___x_80_);
v___x_82_ = lean_uint64_to_usize(v___x_81_);
v___x_83_ = lean_usize_of_nat(v___x_73_);
v___x_84_ = ((size_t)1ULL);
v___x_85_ = lean_usize_sub(v___x_83_, v___x_84_);
v___x_86_ = lean_usize_land(v___x_82_, v___x_85_);
v_bkt_87_ = lean_array_uget_borrowed(v_buckets_71_, v___x_86_);
v___x_88_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_68_, v_bkt_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_109_; 
lean_inc_ref(v_buckets_71_);
lean_inc(v_size_70_);
v_isSharedCheck_109_ = !lean_is_exclusive(v_m_67_);
if (v_isSharedCheck_109_ == 0)
{
lean_object* v_unused_110_; lean_object* v_unused_111_; 
v_unused_110_ = lean_ctor_get(v_m_67_, 1);
lean_dec(v_unused_110_);
v_unused_111_ = lean_ctor_get(v_m_67_, 0);
lean_dec(v_unused_111_);
v___x_90_ = v_m_67_;
v_isShared_91_ = v_isSharedCheck_109_;
goto v_resetjp_89_;
}
else
{
lean_dec(v_m_67_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_109_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_92_; lean_object* v_size_x27_93_; lean_object* v___x_94_; lean_object* v_buckets_x27_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_92_ = lean_unsigned_to_nat(1u);
v_size_x27_93_ = lean_nat_add(v_size_70_, v___x_92_);
lean_dec(v_size_70_);
lean_inc(v_bkt_87_);
v___x_94_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_94_, 0, v_a_68_);
lean_ctor_set(v___x_94_, 1, v_b_69_);
lean_ctor_set(v___x_94_, 2, v_bkt_87_);
v_buckets_x27_95_ = lean_array_uset(v_buckets_71_, v___x_86_, v___x_94_);
v___x_96_ = lean_unsigned_to_nat(4u);
v___x_97_ = lean_nat_mul(v_size_x27_93_, v___x_96_);
v___x_98_ = lean_unsigned_to_nat(3u);
v___x_99_ = lean_nat_div(v___x_97_, v___x_98_);
lean_dec(v___x_97_);
v___x_100_ = lean_array_get_size(v_buckets_x27_95_);
v___x_101_ = lean_nat_dec_le(v___x_99_, v___x_100_);
lean_dec(v___x_99_);
if (v___x_101_ == 0)
{
lean_object* v_val_102_; lean_object* v___x_104_; 
v_val_102_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(v_buckets_x27_95_);
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 1, v_val_102_);
lean_ctor_set(v___x_90_, 0, v_size_x27_93_);
v___x_104_ = v___x_90_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_size_x27_93_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v_val_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
else
{
lean_object* v___x_107_; 
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 1, v_buckets_x27_95_);
lean_ctor_set(v___x_90_, 0, v_size_x27_93_);
v___x_107_ = v___x_90_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_size_x27_93_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_buckets_x27_95_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
else
{
lean_dec(v_b_69_);
lean_dec_ref(v_a_68_);
return v_m_67_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(lean_object* v_m_114_, lean_object* v_a_115_){
_start:
{
lean_object* v_buckets_116_; lean_object* v_name_117_; lean_object* v___x_118_; uint64_t v___y_120_; 
v_buckets_116_ = lean_ctor_get(v_m_114_, 1);
v_name_117_ = lean_ctor_get(v_a_115_, 1);
v___x_118_ = lean_array_get_size(v_buckets_116_);
if (lean_obj_tag(v_name_117_) == 0)
{
uint64_t v___x_134_; 
v___x_134_ = 1723ULL;
v___y_120_ = v___x_134_;
goto v___jp_119_;
}
else
{
uint64_t v_hash_135_; 
v_hash_135_ = lean_ctor_get_uint64(v_name_117_, sizeof(void*)*2);
v___y_120_ = v_hash_135_;
goto v___jp_119_;
}
v___jp_119_:
{
uint64_t v___x_121_; uint64_t v___x_122_; uint64_t v_fold_123_; uint64_t v___x_124_; uint64_t v___x_125_; uint64_t v___x_126_; size_t v___x_127_; size_t v___x_128_; size_t v___x_129_; size_t v___x_130_; size_t v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_121_ = 32ULL;
v___x_122_ = lean_uint64_shift_right(v___y_120_, v___x_121_);
v_fold_123_ = lean_uint64_xor(v___y_120_, v___x_122_);
v___x_124_ = 16ULL;
v___x_125_ = lean_uint64_shift_right(v_fold_123_, v___x_124_);
v___x_126_ = lean_uint64_xor(v_fold_123_, v___x_125_);
v___x_127_ = lean_uint64_to_usize(v___x_126_);
v___x_128_ = lean_usize_of_nat(v___x_118_);
v___x_129_ = ((size_t)1ULL);
v___x_130_ = lean_usize_sub(v___x_128_, v___x_129_);
v___x_131_ = lean_usize_land(v___x_127_, v___x_130_);
v___x_132_ = lean_array_uget_borrowed(v_buckets_116_, v___x_131_);
v___x_133_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_115_, v___x_132_);
return v___x_133_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg___boxed(lean_object* v_m_136_, lean_object* v_a_137_){
_start:
{
uint8_t v_res_138_; lean_object* v_r_139_; 
v_res_138_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_m_136_, v_a_137_);
lean_dec_ref(v_a_137_);
lean_dec_ref(v_m_136_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__0));
v___x_142_ = l_Lake_BuildTrace_nil(v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(lean_object* v_self_143_, lean_object* v_root_144_, lean_object* v_col_145_, uint8_t v_viaImport_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_col_155_; lean_object* v___y_156_; lean_object* v_mods_158_; lean_object* v_modSet_159_; uint8_t v_hasErrors_160_; uint8_t v___x_161_; 
v_mods_158_ = lean_ctor_get(v_col_145_, 0);
v_modSet_159_ = lean_ctor_get(v_col_145_, 1);
v_hasErrors_160_ = lean_ctor_get_uint8(v_col_145_, sizeof(void*)*2);
v___x_161_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_modSet_159_, v_root_144_);
if (v___x_161_ == 0)
{
lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_238_; 
lean_inc_ref(v_modSet_159_);
lean_inc_ref(v_mods_158_);
v_isSharedCheck_238_ = !lean_is_exclusive(v_col_145_);
if (v_isSharedCheck_238_ == 0)
{
lean_object* v_unused_239_; lean_object* v_unused_240_; 
v_unused_239_ = lean_ctor_get(v_col_145_, 1);
lean_dec(v_unused_239_);
v_unused_240_ = lean_ctor_get(v_col_145_, 0);
lean_dec(v_unused_240_);
v___x_163_ = v_col_145_;
v_isShared_164_ = v_isSharedCheck_238_;
goto v_resetjp_162_;
}
else
{
lean_dec(v_col_145_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_238_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v_lib_165_; lean_object* v_pkg_166_; lean_object* v_name_167_; lean_object* v_keyName_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v_col_172_; 
v_lib_165_ = lean_ctor_get(v_root_144_, 0);
v_pkg_166_ = lean_ctor_get(v_lib_165_, 0);
v_name_167_ = lean_ctor_get(v_root_144_, 1);
v_keyName_168_ = lean_ctor_get(v_pkg_166_, 2);
v___x_169_ = lean_box(0);
lean_inc_ref(v_root_144_);
v___x_170_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_modSet_159_, v_root_144_, v___x_169_);
lean_inc_ref(v___x_170_);
lean_inc_ref(v_mods_158_);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 1, v___x_170_);
v_col_172_ = v___x_163_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_mods_158_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v___x_170_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, sizeof(void*)*2, v_hasErrors_160_);
v_col_172_ = v_reuseFailAlloc_237_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_173_ = l_Lake_Module_importsFacet;
lean_inc(v_name_167_);
lean_inc(v_keyName_168_);
v___x_174_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_174_, 0, v_keyName_168_);
lean_ctor_set(v___x_174_, 1, v_name_167_);
v___x_175_ = l_Lake_Module_keyword;
lean_inc_ref(v_root_144_);
v___x_176_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
lean_ctor_set(v___x_176_, 2, v_root_144_);
lean_ctor_set(v___x_176_, 3, v___x_173_);
lean_inc_ref(v_a_147_);
lean_inc_ref(v_a_151_);
lean_inc(v_a_150_);
lean_inc(v_a_149_);
lean_inc(v_a_148_);
v___x_177_ = lean_apply_7(v_a_147_, v___x_176_, v_a_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_, lean_box(0));
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; lean_object* v_a_179_; uint8_t v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v_a_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_a_178_);
v_a_179_ = lean_ctor_get(v___x_177_, 1);
lean_inc(v_a_179_);
lean_dec_ref_known(v___x_177_, 2);
v___x_180_ = 0;
v___x_181_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1);
v___x_182_ = lean_unsigned_to_nat(0u);
v___x_183_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_183_, 0, v_a_179_);
lean_ctor_set(v___x_183_, 1, v___x_181_);
lean_ctor_set(v___x_183_, 2, v___x_182_);
lean_ctor_set_uint8(v___x_183_, sizeof(void*)*3, v___x_180_);
lean_ctor_set_uint8(v___x_183_, sizeof(void*)*3 + 1, v___x_161_);
lean_ctor_set_uint8(v___x_183_, sizeof(void*)*3 + 2, v___x_161_);
v___x_184_ = l_Lake_Job_waitUnlessCanceled_x3f___redArg(v_a_178_, v___x_183_);
if (lean_obj_tag(v___x_184_) == 0)
{
lean_object* v_a_185_; lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_217_; 
v_a_185_ = lean_ctor_get(v___x_184_, 1);
v_a_186_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_217_ == 0)
{
v___x_188_ = v___x_184_;
v_isShared_189_ = v_isSharedCheck_217_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_185_);
lean_inc(v_a_186_);
lean_dec(v___x_184_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_217_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v_log_190_; lean_object* v___y_192_; 
v_log_190_ = lean_ctor_get(v_a_185_, 0);
lean_inc_ref(v_log_190_);
lean_dec(v_a_185_);
if (lean_obj_tag(v_a_186_) == 1)
{
lean_object* v_val_196_; size_t v_sz_197_; size_t v___x_198_; lean_object* v___x_199_; 
lean_del_object(v___x_188_);
lean_dec_ref(v___x_170_);
lean_dec_ref(v_mods_158_);
v_val_196_ = lean_ctor_get(v_a_186_, 0);
lean_inc(v_val_196_);
lean_dec_ref_known(v_a_186_, 1);
v_sz_197_ = lean_array_size(v_val_196_);
v___x_198_ = ((size_t)0ULL);
v___x_199_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(v_self_143_, v_val_196_, v_sz_197_, v___x_198_, v_col_172_, v_a_147_, v_a_148_, v_a_149_, v_a_150_, v_a_151_, v_log_190_);
lean_dec(v_val_196_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v_a_200_; lean_object* v_a_201_; lean_object* v_mods_202_; lean_object* v_modSet_203_; uint8_t v_hasErrors_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_212_; 
v_a_200_ = lean_ctor_get(v___x_199_, 0);
lean_inc(v_a_200_);
v_a_201_ = lean_ctor_get(v___x_199_, 1);
lean_inc(v_a_201_);
lean_dec_ref_known(v___x_199_, 2);
v_mods_202_ = lean_ctor_get(v_a_200_, 0);
v_modSet_203_ = lean_ctor_get(v_a_200_, 1);
v_hasErrors_204_ = lean_ctor_get_uint8(v_a_200_, sizeof(void*)*2);
v_isSharedCheck_212_ = !lean_is_exclusive(v_a_200_);
if (v_isSharedCheck_212_ == 0)
{
v___x_206_ = v_a_200_;
v_isShared_207_ = v_isSharedCheck_212_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_modSet_203_);
lean_inc(v_mods_202_);
lean_dec(v_a_200_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_212_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_208_ = lean_array_push(v_mods_202_, v_root_144_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v___x_208_);
v___x_210_ = v___x_206_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_208_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v_modSet_203_);
lean_ctor_set_uint8(v_reuseFailAlloc_211_, sizeof(void*)*2, v_hasErrors_204_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
v_col_155_ = v___x_210_;
v___y_156_ = v_a_201_;
goto v___jp_154_;
}
}
}
else
{
lean_dec_ref(v_root_144_);
return v___x_199_;
}
}
else
{
uint8_t v___x_213_; 
lean_dec(v_a_186_);
lean_dec_ref(v_col_172_);
lean_dec_ref(v_a_147_);
v___x_213_ = 1;
if (v_viaImport_146_ == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_array_push(v_mods_158_, v_root_144_);
v___x_215_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_215_, 0, v___x_214_);
lean_ctor_set(v___x_215_, 1, v___x_170_);
lean_ctor_set_uint8(v___x_215_, sizeof(void*)*2, v___x_213_);
v___y_192_ = v___x_215_;
goto v___jp_191_;
}
else
{
lean_object* v___x_216_; 
lean_dec_ref(v_root_144_);
v___x_216_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_216_, 0, v_mods_158_);
lean_ctor_set(v___x_216_, 1, v___x_170_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*2, v___x_213_);
v___y_192_ = v___x_216_;
goto v___jp_191_;
}
}
v___jp_191_:
{
lean_object* v___x_194_; 
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 1, v_log_190_);
lean_ctor_set(v___x_188_, 0, v___y_192_);
v___x_194_ = v___x_188_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___y_192_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v_log_190_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
else
{
lean_object* v_a_218_; lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_227_; 
lean_dec_ref(v_col_172_);
lean_dec_ref(v___x_170_);
lean_dec_ref(v_mods_158_);
lean_dec_ref(v_a_147_);
lean_dec_ref(v_root_144_);
v_a_218_ = lean_ctor_get(v___x_184_, 1);
v_a_219_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_227_ == 0)
{
v___x_221_ = v___x_184_;
v_isShared_222_ = v_isSharedCheck_227_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_218_);
lean_inc(v_a_219_);
lean_dec(v___x_184_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_227_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v_log_223_; lean_object* v___x_225_; 
v_log_223_ = lean_ctor_get(v_a_218_, 0);
lean_inc_ref(v_log_223_);
lean_dec(v_a_218_);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 1, v_log_223_);
v___x_225_ = v___x_221_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_a_219_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v_log_223_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
else
{
lean_object* v_a_228_; lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
lean_dec_ref(v_col_172_);
lean_dec_ref(v___x_170_);
lean_dec_ref(v_mods_158_);
lean_dec_ref(v_a_147_);
lean_dec_ref(v_root_144_);
v_a_228_ = lean_ctor_get(v___x_177_, 0);
v_a_229_ = lean_ctor_get(v___x_177_, 1);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_177_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_inc(v_a_228_);
lean_dec(v___x_177_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_228_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_a_147_);
lean_dec_ref(v_root_144_);
v_col_155_ = v_col_145_;
v___y_156_ = v_a_152_;
goto v___jp_154_;
}
v___jp_154_:
{
lean_object* v___x_157_; 
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v_col_155_);
lean_ctor_set(v___x_157_, 1, v___y_156_);
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(lean_object* v_self_241_, lean_object* v_as_242_, size_t v_sz_243_, size_t v_i_244_, lean_object* v_b_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_a_254_; lean_object* v_a_255_; uint8_t v___x_259_; 
v___x_259_ = lean_usize_dec_lt(v_i_244_, v_sz_243_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; 
lean_dec_ref(v___y_246_);
v___x_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_260_, 0, v_b_245_);
lean_ctor_set(v___x_260_, 1, v___y_251_);
return v___x_260_;
}
else
{
lean_object* v_a_261_; lean_object* v_lib_262_; lean_object* v_name_263_; lean_object* v_name_264_; uint8_t v___x_265_; 
v_a_261_ = lean_array_uget_borrowed(v_as_242_, v_i_244_);
v_lib_262_ = lean_ctor_get(v_a_261_, 0);
v_name_263_ = lean_ctor_get(v_lib_262_, 1);
v_name_264_ = lean_ctor_get(v_self_241_, 1);
v___x_265_ = lean_name_eq(v_name_263_, v_name_264_);
if (v___x_265_ == 0)
{
v_a_254_ = v_b_245_;
v_a_255_ = v___y_251_;
goto v___jp_253_;
}
else
{
lean_object* v___x_266_; 
lean_inc_ref(v___y_246_);
lean_inc(v_a_261_);
v___x_266_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_241_, v_a_261_, v_b_245_, v___x_265_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_a_267_; lean_object* v_a_268_; 
v_a_267_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_a_267_);
v_a_268_ = lean_ctor_get(v___x_266_, 1);
lean_inc(v_a_268_);
lean_dec_ref_known(v___x_266_, 2);
v_a_254_ = v_a_267_;
v_a_255_ = v_a_268_;
goto v___jp_253_;
}
else
{
lean_dec_ref(v___y_246_);
return v___x_266_;
}
}
}
v___jp_253_:
{
size_t v___x_256_; size_t v___x_257_; 
v___x_256_ = ((size_t)1ULL);
v___x_257_ = lean_usize_add(v_i_244_, v___x_256_);
v_i_244_ = v___x_257_;
v_b_245_ = v_a_254_;
v___y_251_ = v_a_255_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2___boxed(lean_object* v_self_269_, lean_object* v_as_270_, lean_object* v_sz_271_, lean_object* v_i_272_, lean_object* v_b_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
size_t v_sz_boxed_281_; size_t v_i_boxed_282_; lean_object* v_res_283_; 
v_sz_boxed_281_ = lean_unbox_usize(v_sz_271_);
lean_dec(v_sz_271_);
v_i_boxed_282_ = lean_unbox_usize(v_i_272_);
lean_dec(v_i_272_);
v_res_283_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(v_self_269_, v_as_270_, v_sz_boxed_281_, v_i_boxed_282_, v_b_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec(v___y_277_);
lean_dec(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v_as_270_);
lean_dec_ref(v_self_269_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___boxed(lean_object* v_self_284_, lean_object* v_root_285_, lean_object* v_col_286_, lean_object* v_viaImport_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
uint8_t v_viaImport_boxed_295_; lean_object* v_res_296_; 
v_viaImport_boxed_295_ = lean_unbox(v_viaImport_287_);
v_res_296_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_284_, v_root_285_, v_col_286_, v_viaImport_boxed_295_, v_a_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, v_a_293_);
lean_dec_ref(v_a_292_);
lean_dec(v_a_291_);
lean_dec(v_a_290_);
lean_dec(v_a_289_);
lean_dec_ref(v_self_284_);
return v_res_296_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(lean_object* v_00_u03b2_297_, lean_object* v_m_298_, lean_object* v_a_299_){
_start:
{
uint8_t v___x_300_; 
v___x_300_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_m_298_, v_a_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___boxed(lean_object* v_00_u03b2_301_, lean_object* v_m_302_, lean_object* v_a_303_){
_start:
{
uint8_t v_res_304_; lean_object* v_r_305_; 
v_res_304_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(v_00_u03b2_301_, v_m_302_, v_a_303_);
lean_dec_ref(v_a_303_);
lean_dec_ref(v_m_302_);
v_r_305_ = lean_box(v_res_304_);
return v_r_305_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1(lean_object* v_00_u03b2_306_, lean_object* v_m_307_, lean_object* v_a_308_, lean_object* v_b_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_m_307_, v_a_308_, v_b_309_);
return v___x_310_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(lean_object* v_00_u03b2_311_, lean_object* v_a_312_, lean_object* v_x_313_){
_start:
{
uint8_t v___x_314_; 
v___x_314_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_312_, v_x_313_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_315_, lean_object* v_a_316_, lean_object* v_x_317_){
_start:
{
uint8_t v_res_318_; lean_object* v_r_319_; 
v_res_318_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(v_00_u03b2_315_, v_a_316_, v_x_317_);
lean_dec(v_x_317_);
lean_dec_ref(v_a_316_);
v_r_319_ = lean_box(v_res_318_);
return v_r_319_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2(lean_object* v_00_u03b2_320_, lean_object* v_data_321_){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(v_data_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_323_, lean_object* v_i_324_, lean_object* v_source_325_, lean_object* v_target_326_){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(v_i_324_, v_source_325_, v_target_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_328_, lean_object* v_x_329_, lean_object* v_x_330_){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(v_x_329_, v_x_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(lean_object* v_self_332_, lean_object* v_as_333_, size_t v_sz_334_, size_t v_i_335_, lean_object* v_b_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
uint8_t v___x_344_; 
v___x_344_ = lean_usize_dec_lt(v_i_335_, v_sz_334_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; 
lean_dec_ref(v___y_337_);
v___x_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_345_, 0, v_b_336_);
lean_ctor_set(v___x_345_, 1, v___y_342_);
return v___x_345_;
}
else
{
uint8_t v___x_346_; lean_object* v_a_347_; lean_object* v___x_348_; 
v___x_346_ = 0;
v_a_347_ = lean_array_uget_borrowed(v_as_333_, v_i_335_);
lean_inc_ref(v___y_337_);
lean_inc(v_a_347_);
v___x_348_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_332_, v_a_347_, v_b_336_, v___x_346_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_);
if (lean_obj_tag(v___x_348_) == 0)
{
lean_object* v_a_349_; lean_object* v_a_350_; size_t v___x_351_; size_t v___x_352_; 
v_a_349_ = lean_ctor_get(v___x_348_, 0);
lean_inc(v_a_349_);
v_a_350_ = lean_ctor_get(v___x_348_, 1);
lean_inc(v_a_350_);
lean_dec_ref_known(v___x_348_, 2);
v___x_351_ = ((size_t)1ULL);
v___x_352_ = lean_usize_add(v_i_335_, v___x_351_);
v_i_335_ = v___x_352_;
v_b_336_ = v_a_349_;
v___y_342_ = v_a_350_;
goto _start;
}
else
{
lean_dec_ref(v___y_337_);
return v___x_348_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0___boxed(lean_object* v_self_354_, lean_object* v_as_355_, lean_object* v_sz_356_, lean_object* v_i_357_, lean_object* v_b_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
size_t v_sz_boxed_366_; size_t v_i_boxed_367_; lean_object* v_res_368_; 
v_sz_boxed_366_ = lean_unbox_usize(v_sz_356_);
lean_dec(v_sz_356_);
v_i_boxed_367_ = lean_unbox_usize(v_i_357_);
lean_dec(v_i_357_);
v_res_368_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(v_self_354_, v_as_355_, v_sz_boxed_366_, v_i_boxed_367_, v_b_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
lean_dec(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v_as_355_);
lean_dec_ref(v_self_354_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(lean_object* v_self_371_, lean_object* v_col_372_, lean_object* v___x_373_, uint8_t v___x_374_, lean_object* v___x_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v___x_383_; 
lean_inc_ref(v_self_371_);
v___x_383_ = l_Lake_LeanLib_getModuleArray(v_self_371_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v_a_384_; size_t v_sz_385_; size_t v___x_386_; lean_object* v___x_387_; 
v_a_384_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_a_384_);
lean_dec_ref_known(v___x_383_, 1);
v_sz_385_ = lean_array_size(v_a_384_);
v___x_386_ = ((size_t)0ULL);
v___x_387_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(v_self_371_, v_a_384_, v_sz_385_, v___x_386_, v_col_372_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
lean_dec(v_a_384_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_388_; lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_415_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
v_a_389_ = lean_ctor_get(v___x_387_, 1);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_415_ == 0)
{
v___x_391_ = v___x_387_;
v_isShared_392_ = v_isSharedCheck_415_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_inc(v_a_388_);
lean_dec(v___x_387_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_415_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v_mods_393_; uint8_t v_hasErrors_394_; lean_object* v___y_396_; 
v_mods_393_ = lean_ctor_get(v_a_388_, 0);
lean_inc_ref(v_mods_393_);
v_hasErrors_394_ = lean_ctor_get_uint8(v_a_388_, sizeof(void*)*2);
lean_dec(v_a_388_);
if (v_hasErrors_394_ == 0)
{
lean_dec_ref(v_self_371_);
v___y_396_ = v_a_389_;
goto v___jp_395_;
}
else
{
lean_object* v_name_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v_name_408_ = lean_ctor_get(v_self_371_, 1);
lean_inc(v_name_408_);
lean_dec_ref(v_self_371_);
v___x_409_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_408_, v_hasErrors_394_);
v___x_410_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1));
v___x_411_ = lean_string_append(v___x_409_, v___x_410_);
v___x_412_ = 3;
v___x_413_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_413_, 0, v___x_411_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*1, v___x_412_);
v___x_414_ = lean_array_push(v_a_389_, v___x_413_);
v___y_396_ = v___x_414_;
goto v___jp_395_;
}
v___jp_395_:
{
lean_object* v___x_397_; lean_object* v___x_398_; uint8_t v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; 
v___x_397_ = lean_mk_empty_array_with_capacity(v___x_373_);
v___x_398_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_399_ = 0;
v___x_400_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1);
v___x_401_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_401_, 0, v___x_397_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
lean_ctor_set(v___x_401_, 2, v___x_373_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*3, v___x_399_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*3 + 1, v___x_374_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*3 + 2, v___x_374_);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 1, v___x_401_);
lean_ctor_set(v___x_391_, 0, v_mods_393_);
v___x_403_ = v___x_391_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_mods_393_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v___x_401_);
v___x_403_ = v_reuseFailAlloc_407_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_404_ = lean_task_pure(v___x_403_);
v___x_405_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v___x_375_);
lean_ctor_set(v___x_405_, 2, v___x_398_);
lean_ctor_set_uint8(v___x_405_, sizeof(void*)*3, v___x_374_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___y_396_);
return v___x_406_;
}
}
}
}
else
{
lean_object* v_a_416_; lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_dec(v___x_375_);
lean_dec(v___x_373_);
lean_dec_ref(v_self_371_);
v_a_416_ = lean_ctor_get(v___x_387_, 0);
v_a_417_ = lean_ctor_get(v___x_387_, 1);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_387_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_inc(v_a_416_);
lean_dec(v___x_387_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_416_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
else
{
lean_object* v_a_425_; lean_object* v___x_426_; uint8_t v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
lean_dec_ref(v___y_376_);
lean_dec(v___x_375_);
lean_dec(v___x_373_);
lean_dec_ref(v_col_372_);
lean_dec_ref(v_self_371_);
v_a_425_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_383_, 1);
v___x_426_ = lean_io_error_to_string(v_a_425_);
v___x_427_ = 3;
v___x_428_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_428_, 0, v___x_426_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*1, v___x_427_);
v___x_429_ = lean_array_get_size(v___y_381_);
v___x_430_ = lean_array_push(v___y_381_, v___x_428_);
v___x_431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_431_, 0, v___x_429_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
return v___x_431_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed(lean_object* v_self_432_, lean_object* v_col_433_, lean_object* v___x_434_, lean_object* v___x_435_, lean_object* v___x_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
uint8_t v___x_7490__boxed_444_; lean_object* v_res_445_; 
v___x_7490__boxed_444_ = lean_unbox(v___x_435_);
v_res_445_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(v_self_432_, v_col_433_, v___x_434_, v___x_7490__boxed_444_, v___x_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec(v___y_439_);
lean_dec(v___y_438_);
return v_res_445_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_448_ = lean_box(0);
v___x_449_ = lean_unsigned_to_nat(16u);
v___x_450_ = lean_mk_array(v___x_449_, v___x_448_);
return v___x_450_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2(void){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_451_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1);
v___x_452_ = lean_unsigned_to_nat(0u);
v___x_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
lean_ctor_set(v___x_453_, 1, v___x_451_);
return v___x_453_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3(void){
_start:
{
uint8_t v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v_col_457_; 
v___x_454_ = 0;
v___x_455_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2);
v___x_456_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0));
v_col_457_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_col_457_, 0, v___x_456_);
lean_ctor_set(v_col_457_, 1, v___x_455_);
lean_ctor_set_uint8(v_col_457_, sizeof(void*)*2, v___x_454_);
return v_col_457_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(lean_object* v_self_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; uint8_t v___x_468_; lean_object* v_col_469_; lean_object* v___x_470_; lean_object* v___f_471_; lean_object* v___x_472_; 
v___x_466_ = lean_box(0);
v___x_467_ = lean_unsigned_to_nat(0u);
v___x_468_ = 0;
v_col_469_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3);
v___x_470_ = lean_box(v___x_468_);
v___f_471_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed), 12, 5);
lean_closure_set(v___f_471_, 0, v_self_458_);
lean_closure_set(v___f_471_, 1, v_col_469_);
lean_closure_set(v___f_471_, 2, v___x_467_);
lean_closure_set(v___f_471_, 3, v___x_470_);
lean_closure_set(v___f_471_, 4, v___x_466_);
v___x_472_ = l_Lake_ensureJob___redArg(v___x_466_, v___f_471_, v_a_459_, v_a_460_, v_a_461_, v_a_462_, v_a_463_, v_a_464_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed(lean_object* v_self_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(v_self_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_, v_a_479_);
lean_dec_ref(v_a_478_);
lean_dec(v_a_477_);
lean_dec(v_a_476_);
lean_dec(v_a_475_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(lean_object* v_as_483_, size_t v_i_484_, size_t v_stop_485_, lean_object* v_b_486_){
_start:
{
uint8_t v___x_487_; 
v___x_487_ = lean_usize_dec_eq(v_i_484_, v_stop_485_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; lean_object* v_name_489_; uint8_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; size_t v___x_495_; size_t v___x_496_; 
v___x_488_ = lean_array_uget_borrowed(v_as_483_, v_i_484_);
v_name_489_ = lean_ctor_get(v___x_488_, 1);
v___x_490_ = 1;
lean_inc(v_name_489_);
v___x_491_ = l_Lean_Name_toString(v_name_489_, v___x_490_);
v___x_492_ = lean_string_append(v_b_486_, v___x_491_);
lean_dec_ref(v___x_491_);
v___x_493_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
v___x_494_ = lean_string_append(v___x_492_, v___x_493_);
v___x_495_ = ((size_t)1ULL);
v___x_496_ = lean_usize_add(v_i_484_, v___x_495_);
v_i_484_ = v___x_496_;
v_b_486_ = v___x_494_;
goto _start;
}
else
{
return v_b_486_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___boxed(lean_object* v_as_498_, lean_object* v_i_499_, lean_object* v_stop_500_, lean_object* v_b_501_){
_start:
{
size_t v_i_boxed_502_; size_t v_stop_boxed_503_; lean_object* v_res_504_; 
v_i_boxed_502_ = lean_unbox_usize(v_i_499_);
lean_dec(v_i_499_);
v_stop_boxed_503_ = lean_unbox_usize(v_stop_500_);
lean_dec(v_stop_500_);
v_res_504_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(v_as_498_, v_i_boxed_502_, v_stop_boxed_503_, v_b_501_);
lean_dec_ref(v_as_498_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(size_t v_sz_505_, size_t v_i_506_, lean_object* v_bs_507_){
_start:
{
uint8_t v___x_508_; 
v___x_508_ = lean_usize_dec_lt(v_i_506_, v_sz_505_);
if (v___x_508_ == 0)
{
return v_bs_507_;
}
else
{
lean_object* v_v_509_; lean_object* v_name_510_; lean_object* v___x_511_; lean_object* v_bs_x27_512_; lean_object* v___x_513_; lean_object* v___x_514_; size_t v___x_515_; size_t v___x_516_; lean_object* v___x_517_; 
v_v_509_ = lean_array_uget_borrowed(v_bs_507_, v_i_506_);
v_name_510_ = lean_ctor_get(v_v_509_, 1);
lean_inc(v_name_510_);
v___x_511_ = lean_unsigned_to_nat(0u);
v_bs_x27_512_ = lean_array_uset(v_bs_507_, v_i_506_, v___x_511_);
v___x_513_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_510_, v___x_508_);
v___x_514_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
v___x_515_ = ((size_t)1ULL);
v___x_516_ = lean_usize_add(v_i_506_, v___x_515_);
v___x_517_ = lean_array_uset(v_bs_x27_512_, v_i_506_, v___x_514_);
v_i_506_ = v___x_516_;
v_bs_507_ = v___x_517_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_519_, lean_object* v_i_520_, lean_object* v_bs_521_){
_start:
{
size_t v_sz_boxed_522_; size_t v_i_boxed_523_; lean_object* v_res_524_; 
v_sz_boxed_522_ = lean_unbox_usize(v_sz_519_);
lean_dec(v_sz_519_);
v_i_boxed_523_ = lean_unbox_usize(v_i_520_);
lean_dec(v_i_520_);
v_res_524_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(v_sz_boxed_522_, v_i_boxed_523_, v_bs_521_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(lean_object* v_a_525_){
_start:
{
size_t v_sz_526_; size_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v_sz_526_ = lean_array_size(v_a_525_);
v___x_527_ = ((size_t)0ULL);
v___x_528_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(v_sz_526_, v___x_527_, v_a_525_);
v___x_529_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(uint8_t v_fmt_530_, lean_object* v_a_531_){
_start:
{
lean_object* v___y_533_; 
if (v_fmt_530_ == 0)
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; 
v___x_540_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_541_ = lean_unsigned_to_nat(0u);
v___x_542_ = lean_array_get_size(v_a_531_);
v___x_543_ = lean_nat_dec_lt(v___x_541_, v___x_542_);
if (v___x_543_ == 0)
{
lean_dec_ref(v_a_531_);
v___y_533_ = v___x_540_;
goto v___jp_532_;
}
else
{
size_t v___x_544_; size_t v___x_545_; lean_object* v___x_546_; 
v___x_544_ = ((size_t)0ULL);
v___x_545_ = lean_usize_of_nat(v___x_542_);
v___x_546_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(v_a_531_, v___x_544_, v___x_545_, v___x_540_);
lean_dec_ref(v_a_531_);
v___y_533_ = v___x_546_;
goto v___jp_532_;
}
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(v_a_531_);
v___x_548_ = l_Lean_Json_compress(v___x_547_);
return v___x_548_;
}
v___jp_532_:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_534_ = lean_unsigned_to_nat(1u);
v___x_535_ = lean_unsigned_to_nat(0u);
v___x_536_ = lean_string_utf8_byte_size(v___y_533_);
lean_inc_ref(v___y_533_);
v___x_537_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_537_, 0, v___y_533_);
lean_ctor_set(v___x_537_, 1, v___x_535_);
lean_ctor_set(v___x_537_, 2, v___x_536_);
v___x_538_ = l_String_Slice_Pos_prevn(v___x_537_, v___x_536_, v___x_534_);
lean_dec_ref_known(v___x_537_, 3);
v___x_539_ = lean_string_utf8_extract_fast(v___y_533_, v___x_535_, v___x_538_);
lean_dec(v___x_538_);
lean_dec_ref(v___y_533_);
return v___x_539_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed(lean_object* v_fmt_549_, lean_object* v_a_550_){
_start:
{
uint8_t v_fmt_boxed_551_; lean_object* v_res_552_; 
v_fmt_boxed_551_ = lean_unbox(v_fmt_549_);
v_res_552_ = l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(v_fmt_boxed_551_, v_a_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts_spec__0(lean_object* v_as_566_, size_t v_i_567_, size_t v_stop_568_, lean_object* v_b_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
uint8_t v___x_577_; 
v___x_577_ = lean_usize_dec_eq(v_i_567_, v_stop_568_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; lean_object* v_lib_579_; lean_object* v_pkg_580_; lean_object* v_name_581_; lean_object* v_keyName_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_578_ = lean_array_uget_borrowed(v_as_566_, v_i_567_);
v_lib_579_ = lean_ctor_get(v___x_578_, 0);
v_pkg_580_ = lean_ctor_get(v_lib_579_, 0);
v_name_581_ = lean_ctor_get(v___x_578_, 1);
v_keyName_582_ = lean_ctor_get(v_pkg_580_, 2);
v___x_583_ = l_Lake_Module_elabArtsFacet;
lean_inc(v_name_581_);
lean_inc(v_keyName_582_);
v___x_584_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_584_, 0, v_keyName_582_);
lean_ctor_set(v___x_584_, 1, v_name_581_);
v___x_585_ = l_Lake_Module_keyword;
lean_inc(v___x_578_);
v___x_586_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_586_, 0, v___x_584_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
lean_ctor_set(v___x_586_, 2, v___x_578_);
lean_ctor_set(v___x_586_, 3, v___x_583_);
lean_inc_ref(v___y_570_);
lean_inc_ref(v___y_574_);
lean_inc(v___y_573_);
lean_inc(v___y_572_);
lean_inc(v___y_571_);
v___x_587_ = lean_apply_7(v___y_570_, v___x_586_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, lean_box(0));
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v_a_589_; lean_object* v___x_590_; size_t v___x_591_; size_t v___x_592_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
v_a_589_ = lean_ctor_get(v___x_587_, 1);
lean_inc(v_a_589_);
lean_dec_ref_known(v___x_587_, 2);
v___x_590_ = l_Lake_Job_mix___redArg(v_b_569_, v_a_588_);
v___x_591_ = ((size_t)1ULL);
v___x_592_ = lean_usize_add(v_i_567_, v___x_591_);
v_i_567_ = v___x_592_;
v_b_569_ = v___x_590_;
v___y_575_ = v_a_589_;
goto _start;
}
else
{
lean_object* v_a_594_; lean_object* v_a_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_602_; 
lean_dec_ref(v___y_570_);
lean_dec_ref(v_b_569_);
v_a_594_ = lean_ctor_get(v___x_587_, 0);
v_a_595_ = lean_ctor_get(v___x_587_, 1);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_602_ == 0)
{
v___x_597_ = v___x_587_;
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_inc(v_a_594_);
lean_dec(v___x_587_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_600_; 
if (v_isShared_598_ == 0)
{
v___x_600_ = v___x_597_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_a_594_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v_a_595_);
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
lean_object* v___x_603_; 
lean_dec_ref(v___y_570_);
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v_b_569_);
lean_ctor_set(v___x_603_, 1, v___y_575_);
return v___x_603_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts_spec__0___boxed(lean_object* v_as_604_, lean_object* v_i_605_, lean_object* v_stop_606_, lean_object* v_b_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
size_t v_i_boxed_615_; size_t v_stop_boxed_616_; lean_object* v_res_617_; 
v_i_boxed_615_ = lean_unbox_usize(v_i_605_);
lean_dec(v_i_605_);
v_stop_boxed_616_ = lean_unbox_usize(v_stop_606_);
lean_dec(v_stop_606_);
v_res_617_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts_spec__0(v_as_604_, v_i_boxed_615_, v_stop_boxed_616_, v_b_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec(v___y_610_);
lean_dec(v___y_609_);
lean_dec_ref(v_as_604_);
return v_res_617_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__1(void){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; uint8_t v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_620_ = lean_unsigned_to_nat(0u);
v___x_621_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1);
v___x_622_ = 0;
v___x_623_ = 0;
v___x_624_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__0));
v___x_625_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_625_, 0, v___x_624_);
lean_ctor_set(v___x_625_, 1, v___x_621_);
lean_ctor_set(v___x_625_, 2, v___x_620_);
lean_ctor_set_uint8(v___x_625_, sizeof(void*)*3, v___x_623_);
lean_ctor_set_uint8(v___x_625_, sizeof(void*)*3 + 1, v___x_622_);
lean_ctor_set_uint8(v___x_625_, sizeof(void*)*3 + 2, v___x_622_);
return v___x_625_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__2(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__1);
v___x_627_ = lean_box(0);
v___x_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
lean_ctor_set(v___x_628_, 1, v___x_626_);
return v___x_628_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__3(void){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__2);
v___x_630_ = lean_task_pure(v___x_629_);
return v___x_630_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__4(void){
_start:
{
uint8_t v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_631_ = 0;
v___x_632_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_633_ = lean_box(0);
v___x_634_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__3, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__3_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__3);
v___x_635_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_635_, 0, v___x_634_);
lean_ctor_set(v___x_635_, 1, v___x_633_);
lean_ctor_set(v___x_635_, 2, v___x_632_);
lean_ctor_set_uint8(v___x_635_, sizeof(void*)*3, v___x_631_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts(lean_object* v_self_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_){
_start:
{
lean_object* v_pkg_644_; lean_object* v_name_645_; lean_object* v_keyName_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v_pkg_644_ = lean_ctor_get(v_self_636_, 0);
v_name_645_ = lean_ctor_get(v_self_636_, 1);
v_keyName_646_ = lean_ctor_get(v_pkg_644_, 2);
v___x_647_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_name_645_);
lean_inc(v_keyName_646_);
v___x_648_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_648_, 0, v_keyName_646_);
lean_ctor_set(v___x_648_, 1, v_name_645_);
v___x_649_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_650_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_650_, 0, v___x_648_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
lean_ctor_set(v___x_650_, 2, v_self_636_);
lean_ctor_set(v___x_650_, 3, v___x_647_);
lean_inc_ref(v_a_637_);
lean_inc_ref(v_a_641_);
lean_inc(v_a_640_);
lean_inc(v_a_639_);
lean_inc(v_a_638_);
v___x_651_ = lean_apply_7(v_a_637_, v___x_650_, v_a_638_, v_a_639_, v_a_640_, v_a_641_, v_a_642_, lean_box(0));
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v_a_653_; lean_object* v___x_654_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_a_652_);
v_a_653_ = lean_ctor_get(v___x_651_, 1);
lean_inc(v_a_653_);
lean_dec_ref_known(v___x_651_, 2);
v___x_654_ = l_Lake_Job_await___redArg(v_a_652_, v_a_653_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v_a_655_; lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_670_; 
v_a_655_ = lean_ctor_get(v___x_654_, 0);
v_a_656_ = lean_ctor_get(v___x_654_, 1);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_670_ == 0)
{
v___x_658_ = v___x_654_;
v_isShared_659_ = v_isSharedCheck_670_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_inc(v_a_655_);
lean_dec(v___x_654_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_670_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; 
v___x_660_ = lean_unsigned_to_nat(0u);
v___x_661_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__4, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__4_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__4);
v___x_662_ = lean_array_get_size(v_a_655_);
v___x_663_ = lean_nat_dec_lt(v___x_660_, v___x_662_);
if (v___x_663_ == 0)
{
lean_object* v___x_665_; 
lean_dec(v_a_655_);
lean_dec_ref(v_a_637_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 0, v___x_661_);
v___x_665_ = v___x_658_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_661_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v_a_656_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
else
{
size_t v___x_667_; size_t v___x_668_; lean_object* v___x_669_; 
lean_del_object(v___x_658_);
v___x_667_ = ((size_t)0ULL);
v___x_668_ = lean_usize_of_nat(v___x_662_);
v___x_669_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts_spec__0(v_a_655_, v___x_667_, v___x_668_, v___x_661_, v_a_637_, v_a_638_, v_a_639_, v_a_640_, v_a_641_, v_a_656_);
lean_dec(v_a_655_);
return v___x_669_;
}
}
}
else
{
lean_object* v_a_671_; lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_679_; 
lean_dec_ref(v_a_637_);
v_a_671_ = lean_ctor_get(v___x_654_, 0);
v_a_672_ = lean_ctor_get(v___x_654_, 1);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_679_ == 0)
{
v___x_674_ = v___x_654_;
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_inc(v_a_671_);
lean_dec(v___x_654_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
if (v_isShared_675_ == 0)
{
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_a_671_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v_a_672_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
}
else
{
lean_object* v_a_680_; lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
lean_dec_ref(v_a_637_);
v_a_680_ = lean_ctor_get(v___x_651_, 0);
v_a_681_ = lean_ctor_get(v___x_651_, 1);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_651_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_inc(v_a_680_);
lean_dec(v___x_651_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_680_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v_a_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___boxed(lean_object* v_self_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts(v_self_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_);
lean_dec_ref(v_a_694_);
lean_dec(v_a_693_);
lean_dec(v_a_692_);
lean_dec(v_a_691_);
return v_res_697_;
}
}
static lean_object* _init_l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = lean_box(0);
v___x_699_ = l_Lean_Json_compress(v___x_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg(uint8_t v_fmt_700_){
_start:
{
if (v_fmt_700_ == 0)
{
lean_object* v___x_701_; 
v___x_701_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
return v___x_701_;
}
else
{
lean_object* v___x_702_; 
v___x_702_ = lean_obj_once(&l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg___closed__0, &l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg___closed__0_once, _init_l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg___closed__0);
return v___x_702_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg___boxed(lean_object* v_fmt_703_){
_start:
{
uint8_t v_fmt_boxed_704_; lean_object* v_res_705_; 
v_fmt_boxed_704_ = lean_unbox(v_fmt_703_);
v_res_705_ = l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg(v_fmt_boxed_704_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0(uint8_t v_fmt_706_, lean_object* v_a_707_){
_start:
{
lean_object* v___x_708_; 
v___x_708_ = l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg(v_fmt_706_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___boxed(lean_object* v_fmt_709_, lean_object* v_a_710_){
_start:
{
uint8_t v_fmt_boxed_711_; lean_object* v_res_712_; 
v_fmt_boxed_711_ = lean_unbox(v_fmt_709_);
v_res_712_ = l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0(v_fmt_boxed_711_, v_a_710_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_elabArtsFacetConfig___lam__0(uint8_t v___y_713_, lean_object* v___y_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lake_formatQuery___at___00Lake_LeanLib_elabArtsFacetConfig_spec__0___redArg(v___y_713_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_elabArtsFacetConfig___lam__0___boxed(lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
uint8_t v___y_68__boxed_718_; lean_object* v_res_719_; 
v___y_68__boxed_718_ = lean_unbox(v___y_716_);
v_res_719_ = l_Lake_LeanLib_elabArtsFacetConfig___lam__0(v___y_68__boxed_718_, v___y_717_);
return v_res_719_;
}
}
static lean_object* _init_l_Lake_LeanLib_elabArtsFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_722_; uint8_t v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___f_722_ = ((lean_object*)(l_Lake_LeanLib_elabArtsFacetConfig___closed__0));
v___x_723_ = 1;
v___x_724_ = l_Lake_instDataKindUnit;
v___x_725_ = ((lean_object*)(l_Lake_LeanLib_elabArtsFacetConfig___closed__1));
v___x_726_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_727_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_727_, 0, v___x_726_);
lean_ctor_set(v___x_727_, 1, v___x_725_);
lean_ctor_set(v___x_727_, 2, v___x_724_);
lean_ctor_set(v___x_727_, 3, v___f_722_);
lean_ctor_set_uint8(v___x_727_, sizeof(void*)*4, v___x_723_);
lean_ctor_set_uint8(v___x_727_, sizeof(void*)*4 + 1, v___x_723_);
return v___x_727_;
}
}
static lean_object* _init_l_Lake_LeanLib_elabArtsFacetConfig(void){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = lean_obj_once(&l_Lake_LeanLib_elabArtsFacetConfig___closed__2, &l_Lake_LeanLib_elabArtsFacetConfig___closed__2_once, _init_l_Lake_LeanLib_elabArtsFacetConfig___closed__2);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts_spec__0(lean_object* v_as_729_, size_t v_i_730_, size_t v_stop_731_, lean_object* v_b_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
uint8_t v___x_740_; 
v___x_740_ = lean_usize_dec_eq(v_i_730_, v_stop_731_);
if (v___x_740_ == 0)
{
lean_object* v___x_741_; lean_object* v_lib_742_; lean_object* v_pkg_743_; lean_object* v_name_744_; lean_object* v_keyName_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_741_ = lean_array_uget_borrowed(v_as_729_, v_i_730_);
v_lib_742_ = lean_ctor_get(v___x_741_, 0);
v_pkg_743_ = lean_ctor_get(v_lib_742_, 0);
v_name_744_ = lean_ctor_get(v___x_741_, 1);
v_keyName_745_ = lean_ctor_get(v_pkg_743_, 2);
v___x_746_ = l_Lake_Module_irArtsFacet;
lean_inc(v_name_744_);
lean_inc(v_keyName_745_);
v___x_747_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_747_, 0, v_keyName_745_);
lean_ctor_set(v___x_747_, 1, v_name_744_);
v___x_748_ = l_Lake_Module_keyword;
lean_inc(v___x_741_);
v___x_749_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_749_, 0, v___x_747_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
lean_ctor_set(v___x_749_, 2, v___x_741_);
lean_ctor_set(v___x_749_, 3, v___x_746_);
lean_inc_ref(v___y_733_);
lean_inc_ref(v___y_737_);
lean_inc(v___y_736_);
lean_inc(v___y_735_);
lean_inc(v___y_734_);
v___x_750_ = lean_apply_7(v___y_733_, v___x_749_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, lean_box(0));
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; lean_object* v_a_752_; lean_object* v___x_753_; size_t v___x_754_; size_t v___x_755_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_751_);
v_a_752_ = lean_ctor_get(v___x_750_, 1);
lean_inc(v_a_752_);
lean_dec_ref_known(v___x_750_, 2);
v___x_753_ = l_Lake_Job_mix___redArg(v_b_732_, v_a_751_);
v___x_754_ = ((size_t)1ULL);
v___x_755_ = lean_usize_add(v_i_730_, v___x_754_);
v_i_730_ = v___x_755_;
v_b_732_ = v___x_753_;
v___y_738_ = v_a_752_;
goto _start;
}
else
{
lean_object* v_a_757_; lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_dec_ref(v___y_733_);
lean_dec_ref(v_b_732_);
v_a_757_ = lean_ctor_get(v___x_750_, 0);
v_a_758_ = lean_ctor_get(v___x_750_, 1);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_750_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_inc(v_a_757_);
lean_dec(v___x_750_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_757_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
else
{
lean_object* v___x_766_; 
lean_dec_ref(v___y_733_);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v_b_732_);
lean_ctor_set(v___x_766_, 1, v___y_738_);
return v___x_766_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts_spec__0___boxed(lean_object* v_as_767_, lean_object* v_i_768_, lean_object* v_stop_769_, lean_object* v_b_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
size_t v_i_boxed_778_; size_t v_stop_boxed_779_; lean_object* v_res_780_; 
v_i_boxed_778_ = lean_unbox_usize(v_i_768_);
lean_dec(v_i_768_);
v_stop_boxed_779_ = lean_unbox_usize(v_stop_769_);
lean_dec(v_stop_769_);
v_res_780_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts_spec__0(v_as_767_, v_i_boxed_778_, v_stop_boxed_779_, v_b_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec(v___y_774_);
lean_dec(v___y_773_);
lean_dec(v___y_772_);
lean_dec_ref(v_as_767_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts(lean_object* v_self_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_){
_start:
{
lean_object* v_pkg_789_; lean_object* v_name_790_; lean_object* v_keyName_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v_pkg_789_ = lean_ctor_get(v_self_781_, 0);
v_name_790_ = lean_ctor_get(v_self_781_, 1);
v_keyName_791_ = lean_ctor_get(v_pkg_789_, 2);
v___x_792_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_name_790_);
lean_inc(v_keyName_791_);
v___x_793_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_793_, 0, v_keyName_791_);
lean_ctor_set(v___x_793_, 1, v_name_790_);
v___x_794_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_795_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_795_, 0, v___x_793_);
lean_ctor_set(v___x_795_, 1, v___x_794_);
lean_ctor_set(v___x_795_, 2, v_self_781_);
lean_ctor_set(v___x_795_, 3, v___x_792_);
lean_inc_ref(v_a_782_);
lean_inc_ref(v_a_786_);
lean_inc(v_a_785_);
lean_inc(v_a_784_);
lean_inc(v_a_783_);
v___x_796_ = lean_apply_7(v_a_782_, v___x_795_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, lean_box(0));
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v_a_797_; lean_object* v_a_798_; lean_object* v___x_799_; 
v_a_797_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_a_797_);
v_a_798_ = lean_ctor_get(v___x_796_, 1);
lean_inc(v_a_798_);
lean_dec_ref_known(v___x_796_, 2);
v___x_799_ = l_Lake_Job_await___redArg(v_a_797_, v_a_798_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_815_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
v_a_801_ = lean_ctor_get(v___x_799_, 1);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_815_ == 0)
{
v___x_803_ = v___x_799_;
v_isShared_804_ = v_isSharedCheck_815_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_inc(v_a_800_);
lean_dec(v___x_799_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_815_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; uint8_t v___x_808_; 
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__4, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__4_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__4);
v___x_807_ = lean_array_get_size(v_a_800_);
v___x_808_ = lean_nat_dec_lt(v___x_805_, v___x_807_);
if (v___x_808_ == 0)
{
lean_object* v___x_810_; 
lean_dec(v_a_800_);
lean_dec_ref(v_a_782_);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 0, v___x_806_);
v___x_810_ = v___x_803_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v___x_806_);
lean_ctor_set(v_reuseFailAlloc_811_, 1, v_a_801_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
else
{
size_t v___x_812_; size_t v___x_813_; lean_object* v___x_814_; 
lean_del_object(v___x_803_);
v___x_812_ = ((size_t)0ULL);
v___x_813_ = lean_usize_of_nat(v___x_807_);
v___x_814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts_spec__0(v_a_800_, v___x_812_, v___x_813_, v___x_806_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_801_);
lean_dec(v_a_800_);
return v___x_814_;
}
}
}
else
{
lean_object* v_a_816_; lean_object* v_a_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_824_; 
lean_dec_ref(v_a_782_);
v_a_816_ = lean_ctor_get(v___x_799_, 0);
v_a_817_ = lean_ctor_get(v___x_799_, 1);
v_isSharedCheck_824_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_824_ == 0)
{
v___x_819_ = v___x_799_;
v_isShared_820_ = v_isSharedCheck_824_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_a_817_);
lean_inc(v_a_816_);
lean_dec(v___x_799_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_824_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_822_; 
if (v_isShared_820_ == 0)
{
v___x_822_ = v___x_819_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_a_816_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v_a_817_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
}
}
else
{
lean_object* v_a_825_; lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
lean_dec_ref(v_a_782_);
v_a_825_ = lean_ctor_get(v___x_796_, 0);
v_a_826_ = lean_ctor_get(v___x_796_, 1);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___x_796_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_inc(v_a_825_);
lean_dec(v___x_796_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_825_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v_a_826_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts___boxed(lean_object* v_self_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildIRArts(v_self_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_);
lean_dec_ref(v_a_839_);
lean_dec(v_a_838_);
lean_dec(v_a_837_);
lean_dec(v_a_836_);
return v_res_842_;
}
}
static lean_object* _init_l_Lake_LeanLib_irArtsFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_844_; uint8_t v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___f_844_ = ((lean_object*)(l_Lake_LeanLib_elabArtsFacetConfig___closed__0));
v___x_845_ = 1;
v___x_846_ = l_Lake_instDataKindUnit;
v___x_847_ = ((lean_object*)(l_Lake_LeanLib_irArtsFacetConfig___closed__0));
v___x_848_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_849_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_849_, 0, v___x_848_);
lean_ctor_set(v___x_849_, 1, v___x_847_);
lean_ctor_set(v___x_849_, 2, v___x_846_);
lean_ctor_set(v___x_849_, 3, v___f_844_);
lean_ctor_set_uint8(v___x_849_, sizeof(void*)*4, v___x_845_);
lean_ctor_set_uint8(v___x_849_, sizeof(void*)*4 + 1, v___x_845_);
return v___x_849_;
}
}
static lean_object* _init_l_Lake_LeanLib_irArtsFacetConfig(void){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = lean_obj_once(&l_Lake_LeanLib_irArtsFacetConfig___closed__1, &l_Lake_LeanLib_irArtsFacetConfig___closed__1_once, _init_l_Lake_LeanLib_irArtsFacetConfig___closed__1);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0(lean_object* v_x_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_pkg_859_; lean_object* v_name_860_; lean_object* v_keyName_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_pkg_859_ = lean_ctor_get(v_x_851_, 0);
v_name_860_ = lean_ctor_get(v_x_851_, 1);
v_keyName_861_ = lean_ctor_get(v_pkg_859_, 2);
v___x_862_ = l_Lake_LeanLib_irArtsFacet;
lean_inc(v_name_860_);
lean_inc(v_keyName_861_);
v___x_863_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_863_, 0, v_keyName_861_);
lean_ctor_set(v___x_863_, 1, v_name_860_);
v___x_864_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_865_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_865_, 0, v___x_863_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
lean_ctor_set(v___x_865_, 2, v_x_851_);
lean_ctor_set(v___x_865_, 3, v___x_862_);
lean_inc_ref(v___y_856_);
lean_inc(v___y_855_);
lean_inc(v___y_854_);
lean_inc(v___y_853_);
v___x_866_ = lean_apply_7(v___y_852_, v___x_865_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, lean_box(0));
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed(lean_object* v_x_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Lake_LeanLib_leanArtsFacetConfig___lam__0(v_x_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_);
lean_dec_ref(v___y_872_);
lean_dec(v___y_871_);
lean_dec(v___y_870_);
lean_dec(v___y_869_);
return v_res_875_;
}
}
static lean_object* _init_l_Lake_LeanLib_leanArtsFacetConfig___closed__1(void){
_start:
{
uint8_t v___x_877_; lean_object* v___f_878_; uint8_t v___x_879_; lean_object* v___x_880_; lean_object* v___f_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_877_ = 0;
v___f_878_ = ((lean_object*)(l_Lake_LeanLib_elabArtsFacetConfig___closed__0));
v___x_879_ = 1;
v___x_880_ = l_Lake_instDataKindUnit;
v___f_881_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_882_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_883_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_883_, 0, v___x_882_);
lean_ctor_set(v___x_883_, 1, v___f_881_);
lean_ctor_set(v___x_883_, 2, v___x_880_);
lean_ctor_set(v___x_883_, 3, v___f_878_);
lean_ctor_set_uint8(v___x_883_, sizeof(void*)*4, v___x_879_);
lean_ctor_set_uint8(v___x_883_, sizeof(void*)*4 + 1, v___x_877_);
return v___x_883_;
}
}
static lean_object* _init_l_Lake_LeanLib_leanArtsFacetConfig(void){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = lean_obj_once(&l_Lake_LeanLib_leanArtsFacetConfig___closed__1, &l_Lake_LeanLib_leanArtsFacetConfig___closed__1_once, _init_l_Lake_LeanLib_leanArtsFacetConfig___closed__1);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(lean_object* v_a_885_, lean_object* v_x_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lake_ModuleFacet_fetch___redArg(v_x_886_, v_a_885_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed(lean_object* v_a_895_, lean_object* v_x_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(v_a_895_, v_x_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec(v___y_900_);
lean_dec(v___y_899_);
lean_dec(v___y_898_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(uint8_t v_shouldExport_905_, lean_object* v___x_906_, lean_object* v_bs_907_, lean_object* v_a_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_lib_916_; lean_object* v_config_917_; lean_object* v_nativeFacets_918_; lean_object* v___f_919_; lean_object* v___x_920_; lean_object* v___x_921_; size_t v_sz_922_; size_t v___x_923_; lean_object* v___x_194842__overap_924_; lean_object* v___x_925_; 
v_lib_916_ = lean_ctor_get(v_a_908_, 0);
v_config_917_ = lean_ctor_get(v_lib_916_, 2);
v_nativeFacets_918_ = lean_ctor_get(v_config_917_, 8);
lean_inc_ref(v_nativeFacets_918_);
v___f_919_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed), 9, 1);
lean_closure_set(v___f_919_, 0, v_a_908_);
v___x_920_ = lean_box(v_shouldExport_905_);
v___x_921_ = lean_apply_1(v_nativeFacets_918_, v___x_920_);
v_sz_922_ = lean_array_size(v___x_921_);
v___x_923_ = ((size_t)0ULL);
v___x_194842__overap_924_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_906_, v___f_919_, v_sz_922_, v___x_923_, v___x_921_);
lean_inc_ref(v___y_913_);
lean_inc(v___y_912_);
lean_inc(v___y_911_);
lean_inc(v___y_910_);
v___x_925_ = lean_apply_7(v___x_194842__overap_924_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, lean_box(0));
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_a_926_; lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_935_; 
v_a_926_ = lean_ctor_get(v___x_925_, 0);
v_a_927_ = lean_ctor_get(v___x_925_, 1);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_935_ == 0)
{
v___x_929_ = v___x_925_;
v_isShared_930_ = v_isSharedCheck_935_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_inc(v_a_926_);
lean_dec(v___x_925_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_935_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_931_; lean_object* v___x_933_; 
v___x_931_ = l_Array_append___redArg(v_bs_907_, v_a_926_);
lean_dec(v_a_926_);
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 0, v___x_931_);
v___x_933_ = v___x_929_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_931_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v_a_927_);
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
lean_dec_ref(v_bs_907_);
return v___x_925_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed(lean_object* v_shouldExport_936_, lean_object* v___x_937_, lean_object* v_bs_938_, lean_object* v_a_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
uint8_t v_shouldExport_boxed_947_; lean_object* v_res_948_; 
v_shouldExport_boxed_947_ = lean_unbox(v_shouldExport_936_);
v_res_948_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(v_shouldExport_boxed_947_, v___x_937_, v_bs_938_, v_a_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_943_);
lean_dec(v___y_942_);
lean_dec(v___y_941_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(lean_object* v___x_949_, lean_object* v_pkg_950_, lean_object* v_x_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = l_Lake_Target_fetchIn___redArg(v___x_949_, v_pkg_950_, v_x_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed(lean_object* v___x_960_, lean_object* v_pkg_961_, lean_object* v_x_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(v___x_960_, v_pkg_961_, v_x_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec(v___y_965_);
lean_dec(v___y_964_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(lean_object* v_a_971_, lean_object* v_x_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
lean_object* v_log_981_; uint8_t v_action_982_; uint8_t v_wantsRebuild_983_; uint8_t v_canceled_984_; lean_object* v_trace_985_; lean_object* v_buildTime_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_log_981_ = lean_ctor_get(v___y_979_, 0);
v_action_982_ = lean_ctor_get_uint8(v___y_979_, sizeof(void*)*3);
v_wantsRebuild_983_ = lean_ctor_get_uint8(v___y_979_, sizeof(void*)*3 + 1);
v_canceled_984_ = lean_ctor_get_uint8(v___y_979_, sizeof(void*)*3 + 2);
v_trace_985_ = lean_ctor_get(v___y_979_, 1);
v_buildTime_986_ = lean_ctor_get(v___y_979_, 2);
v___x_987_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
v___x_988_ = lean_string_append(v___y_973_, v___x_987_);
v___x_989_ = lean_io_prim_handle_put_str(v_a_971_, v___x_988_);
lean_dec_ref(v___x_988_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_991_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v___x_989_, 1);
v___x_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_991_, 0, v_a_990_);
lean_ctor_set(v___x_991_, 1, v___y_979_);
return v___x_991_;
}
else
{
lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1005_; 
lean_inc(v_buildTime_986_);
lean_inc_ref(v_trace_985_);
lean_inc_ref(v_log_981_);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___y_979_);
if (v_isSharedCheck_1005_ == 0)
{
lean_object* v_unused_1006_; lean_object* v_unused_1007_; lean_object* v_unused_1008_; 
v_unused_1006_ = lean_ctor_get(v___y_979_, 2);
lean_dec(v_unused_1006_);
v_unused_1007_ = lean_ctor_get(v___y_979_, 1);
lean_dec(v_unused_1007_);
v_unused_1008_ = lean_ctor_get(v___y_979_, 0);
lean_dec(v_unused_1008_);
v___x_993_ = v___y_979_;
v_isShared_994_ = v_isSharedCheck_1005_;
goto v_resetjp_992_;
}
else
{
lean_dec(v___y_979_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1005_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v_a_995_; lean_object* v___x_996_; uint8_t v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1002_; 
v_a_995_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_989_, 1);
v___x_996_ = lean_io_error_to_string(v_a_995_);
v___x_997_ = 3;
v___x_998_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_998_, 0, v___x_996_);
lean_ctor_set_uint8(v___x_998_, sizeof(void*)*1, v___x_997_);
v___x_999_ = lean_array_get_size(v_log_981_);
v___x_1000_ = lean_array_push(v_log_981_, v___x_998_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 0, v___x_1000_);
v___x_1002_ = v___x_993_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_1000_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v_trace_985_);
lean_ctor_set(v_reuseFailAlloc_1004_, 2, v_buildTime_986_);
lean_ctor_set_uint8(v_reuseFailAlloc_1004_, sizeof(void*)*3, v_action_982_);
lean_ctor_set_uint8(v_reuseFailAlloc_1004_, sizeof(void*)*3 + 1, v_wantsRebuild_983_);
lean_ctor_set_uint8(v_reuseFailAlloc_1004_, sizeof(void*)*3 + 2, v_canceled_984_);
v___x_1002_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_999_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
return v___x_1003_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed(lean_object* v_a_1009_, lean_object* v_x_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(v_a_1009_, v_x_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
lean_dec_ref(v___y_1016_);
lean_dec(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec(v_a_1009_);
return v_res_1019_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6(void){
_start:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1027_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3));
v___x_1028_ = lean_unsigned_to_nat(5u);
v___x_1029_ = lean_mk_empty_array_with_capacity(v___x_1028_);
v___x_1030_ = lean_array_push(v___x_1029_, v___x_1027_);
return v___x_1030_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7(void){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1031_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4));
v___x_1032_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6);
v___x_1033_ = lean_array_push(v___x_1032_, v___x_1031_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(uint8_t v_bootstrap_1036_, lean_object* v___y_1037_, lean_object* v_oFiles_1038_, uint8_t v_shouldExport_1039_, lean_object* v___x_1040_, size_t v___x_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
if (v_bootstrap_1036_ == 0)
{
lean_object* v_toContext_1049_; lean_object* v_lakeEnv_1050_; lean_object* v_lean_1051_; lean_object* v_log_1052_; uint8_t v_action_1053_; uint8_t v_wantsRebuild_1054_; uint8_t v_canceled_1055_; lean_object* v_trace_1056_; lean_object* v_buildTime_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1087_; 
lean_dec_ref(v___y_1042_);
lean_dec_ref(v___x_1040_);
v_toContext_1049_ = lean_ctor_get(v___y_1046_, 1);
v_lakeEnv_1050_ = lean_ctor_get(v_toContext_1049_, 0);
v_lean_1051_ = lean_ctor_get(v_lakeEnv_1050_, 1);
v_log_1052_ = lean_ctor_get(v___y_1047_, 0);
v_action_1053_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3);
v_wantsRebuild_1054_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3 + 1);
v_canceled_1055_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3 + 2);
v_trace_1056_ = lean_ctor_get(v___y_1047_, 1);
v_buildTime_1057_ = lean_ctor_get(v___y_1047_, 2);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___y_1047_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1059_ = v___y_1047_;
v_isShared_1060_ = v_isSharedCheck_1087_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_buildTime_1057_);
lean_inc(v_trace_1056_);
lean_inc(v_log_1052_);
lean_dec(v___y_1047_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1087_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v_ar_1061_; lean_object* v___x_1062_; 
v_ar_1061_ = lean_ctor_get(v_lean_1051_, 13);
lean_inc_ref(v_ar_1061_);
v___x_1062_ = l_Lake_compileStaticLib(v___y_1037_, v_oFiles_1038_, v_ar_1061_, v_bootstrap_1036_, v_log_1052_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v_a_1063_; lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1074_; 
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
v_a_1064_ = lean_ctor_get(v___x_1062_, 1);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1066_ = v___x_1062_;
v_isShared_1067_ = v_isSharedCheck_1074_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_inc(v_a_1063_);
lean_dec(v___x_1062_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1074_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v_a_1064_);
v___x_1069_ = v___x_1059_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1064_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v_trace_1056_);
lean_ctor_set(v_reuseFailAlloc_1073_, 2, v_buildTime_1057_);
lean_ctor_set_uint8(v_reuseFailAlloc_1073_, sizeof(void*)*3, v_action_1053_);
lean_ctor_set_uint8(v_reuseFailAlloc_1073_, sizeof(void*)*3 + 1, v_wantsRebuild_1054_);
lean_ctor_set_uint8(v_reuseFailAlloc_1073_, sizeof(void*)*3 + 2, v_canceled_1055_);
v___x_1069_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
lean_object* v___x_1071_; 
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 1, v___x_1069_);
v___x_1071_ = v___x_1066_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1063_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___x_1069_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
}
else
{
lean_object* v_a_1075_; lean_object* v_a_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1086_; 
v_a_1075_ = lean_ctor_get(v___x_1062_, 0);
v_a_1076_ = lean_ctor_get(v___x_1062_, 1);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1078_ = v___x_1062_;
v_isShared_1079_ = v_isSharedCheck_1086_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_a_1076_);
lean_inc(v_a_1075_);
lean_dec(v___x_1062_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1086_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1081_; 
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v_a_1076_);
v___x_1081_ = v___x_1059_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1076_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_trace_1056_);
lean_ctor_set(v_reuseFailAlloc_1085_, 2, v_buildTime_1057_);
lean_ctor_set_uint8(v_reuseFailAlloc_1085_, sizeof(void*)*3, v_action_1053_);
lean_ctor_set_uint8(v_reuseFailAlloc_1085_, sizeof(void*)*3 + 1, v_wantsRebuild_1054_);
lean_ctor_set_uint8(v_reuseFailAlloc_1085_, sizeof(void*)*3 + 2, v_canceled_1055_);
v___x_1081_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
lean_object* v___x_1083_; 
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 1, v___x_1081_);
v___x_1083_ = v___x_1078_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1075_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v___x_1081_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
}
}
}
else
{
uint8_t v___x_1088_; 
v___x_1088_ = l_System_Platform_isOSX;
if (v___x_1088_ == 0)
{
uint8_t v___x_1089_; 
lean_dec_ref(v___y_1042_);
lean_dec_ref(v___x_1040_);
v___x_1089_ = l_System_Platform_isWindows;
if (v___x_1089_ == 0)
{
lean_object* v_toContext_1090_; lean_object* v_lakeEnv_1091_; lean_object* v_lean_1092_; lean_object* v_log_1093_; uint8_t v_action_1094_; uint8_t v_wantsRebuild_1095_; uint8_t v_canceled_1096_; lean_object* v_trace_1097_; lean_object* v_buildTime_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1128_; 
v_toContext_1090_ = lean_ctor_get(v___y_1046_, 1);
v_lakeEnv_1091_ = lean_ctor_get(v_toContext_1090_, 0);
v_lean_1092_ = lean_ctor_get(v_lakeEnv_1091_, 1);
v_log_1093_ = lean_ctor_get(v___y_1047_, 0);
v_action_1094_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3);
v_wantsRebuild_1095_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3 + 1);
v_canceled_1096_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3 + 2);
v_trace_1097_ = lean_ctor_get(v___y_1047_, 1);
v_buildTime_1098_ = lean_ctor_get(v___y_1047_, 2);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___y_1047_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1100_ = v___y_1047_;
v_isShared_1101_ = v_isSharedCheck_1128_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_buildTime_1098_);
lean_inc(v_trace_1097_);
lean_inc(v_log_1093_);
lean_dec(v___y_1047_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1128_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v_ar_1102_; lean_object* v___x_1103_; 
v_ar_1102_ = lean_ctor_get(v_lean_1092_, 13);
lean_inc_ref(v_ar_1102_);
v___x_1103_ = l_Lake_compileStaticLib(v___y_1037_, v_oFiles_1038_, v_ar_1102_, v___x_1089_, v_log_1093_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1115_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
v_a_1105_ = lean_ctor_get(v___x_1103_, 1);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1107_ = v___x_1103_;
v_isShared_1108_ = v_isSharedCheck_1115_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_inc(v_a_1104_);
lean_dec(v___x_1103_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1115_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 0, v_a_1105_);
v___x_1110_ = v___x_1100_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1105_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_trace_1097_);
lean_ctor_set(v_reuseFailAlloc_1114_, 2, v_buildTime_1098_);
lean_ctor_set_uint8(v_reuseFailAlloc_1114_, sizeof(void*)*3, v_action_1094_);
lean_ctor_set_uint8(v_reuseFailAlloc_1114_, sizeof(void*)*3 + 1, v_wantsRebuild_1095_);
lean_ctor_set_uint8(v_reuseFailAlloc_1114_, sizeof(void*)*3 + 2, v_canceled_1096_);
v___x_1110_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
lean_object* v___x_1112_; 
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 1, v___x_1110_);
v___x_1112_ = v___x_1107_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1104_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v___x_1110_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1127_; 
v_a_1116_ = lean_ctor_get(v___x_1103_, 0);
v_a_1117_ = lean_ctor_get(v___x_1103_, 1);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1119_ = v___x_1103_;
v_isShared_1120_ = v_isSharedCheck_1127_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_inc(v_a_1116_);
lean_dec(v___x_1103_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1127_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 0, v_a_1117_);
v___x_1122_ = v___x_1100_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_a_1117_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v_trace_1097_);
lean_ctor_set(v_reuseFailAlloc_1126_, 2, v_buildTime_1098_);
lean_ctor_set_uint8(v_reuseFailAlloc_1126_, sizeof(void*)*3, v_action_1094_);
lean_ctor_set_uint8(v_reuseFailAlloc_1126_, sizeof(void*)*3 + 1, v_wantsRebuild_1095_);
lean_ctor_set_uint8(v_reuseFailAlloc_1126_, sizeof(void*)*3 + 2, v_canceled_1096_);
v___x_1122_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
lean_object* v___x_1124_; 
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v___x_1122_);
v___x_1124_ = v___x_1119_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1116_);
lean_ctor_set(v_reuseFailAlloc_1125_, 1, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
}
else
{
lean_object* v_toContext_1129_; lean_object* v_lakeEnv_1130_; lean_object* v_lean_1131_; lean_object* v_log_1132_; uint8_t v_action_1133_; uint8_t v_wantsRebuild_1134_; uint8_t v_canceled_1135_; lean_object* v_trace_1136_; lean_object* v_buildTime_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1167_; 
v_toContext_1129_ = lean_ctor_get(v___y_1046_, 1);
v_lakeEnv_1130_ = lean_ctor_get(v_toContext_1129_, 0);
v_lean_1131_ = lean_ctor_get(v_lakeEnv_1130_, 1);
v_log_1132_ = lean_ctor_get(v___y_1047_, 0);
v_action_1133_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3);
v_wantsRebuild_1134_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3 + 1);
v_canceled_1135_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3 + 2);
v_trace_1136_ = lean_ctor_get(v___y_1047_, 1);
v_buildTime_1137_ = lean_ctor_get(v___y_1047_, 2);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___y_1047_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1139_ = v___y_1047_;
v_isShared_1140_ = v_isSharedCheck_1167_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_buildTime_1137_);
lean_inc(v_trace_1136_);
lean_inc(v_log_1132_);
lean_dec(v___y_1047_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1167_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v_ar_1141_; lean_object* v___x_1142_; 
v_ar_1141_ = lean_ctor_get(v_lean_1131_, 13);
lean_inc_ref(v_ar_1141_);
v___x_1142_ = l_Lake_compileStaticLib(v___y_1037_, v_oFiles_1038_, v_ar_1141_, v_shouldExport_1039_, v_log_1132_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1154_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
v_a_1144_ = lean_ctor_get(v___x_1142_, 1);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1146_ = v___x_1142_;
v_isShared_1147_ = v_isSharedCheck_1154_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_inc(v_a_1143_);
lean_dec(v___x_1142_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1154_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; 
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 0, v_a_1144_);
v___x_1149_ = v___x_1139_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_a_1144_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_trace_1136_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v_buildTime_1137_);
lean_ctor_set_uint8(v_reuseFailAlloc_1153_, sizeof(void*)*3, v_action_1133_);
lean_ctor_set_uint8(v_reuseFailAlloc_1153_, sizeof(void*)*3 + 1, v_wantsRebuild_1134_);
lean_ctor_set_uint8(v_reuseFailAlloc_1153_, sizeof(void*)*3 + 2, v_canceled_1135_);
v___x_1149_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
lean_object* v___x_1151_; 
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 1, v___x_1149_);
v___x_1151_ = v___x_1146_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1143_);
lean_ctor_set(v_reuseFailAlloc_1152_, 1, v___x_1149_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
else
{
lean_object* v_a_1155_; lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1166_; 
v_a_1155_ = lean_ctor_get(v___x_1142_, 0);
v_a_1156_ = lean_ctor_get(v___x_1142_, 1);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1158_ = v___x_1142_;
v_isShared_1159_ = v_isSharedCheck_1166_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_inc(v_a_1155_);
lean_dec(v___x_1142_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1166_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 0, v_a_1156_);
v___x_1161_ = v___x_1139_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1156_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v_trace_1136_);
lean_ctor_set(v_reuseFailAlloc_1165_, 2, v_buildTime_1137_);
lean_ctor_set_uint8(v_reuseFailAlloc_1165_, sizeof(void*)*3, v_action_1133_);
lean_ctor_set_uint8(v_reuseFailAlloc_1165_, sizeof(void*)*3 + 1, v_wantsRebuild_1134_);
lean_ctor_set_uint8(v_reuseFailAlloc_1165_, sizeof(void*)*3 + 2, v_canceled_1135_);
v___x_1161_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
lean_object* v___x_1163_; 
if (v_isShared_1159_ == 0)
{
lean_ctor_set(v___x_1158_, 1, v___x_1161_);
v___x_1163_ = v___x_1158_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1155_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
}
}
else
{
lean_object* v_log_1168_; uint8_t v_action_1169_; uint8_t v_wantsRebuild_1170_; uint8_t v_canceled_1171_; lean_object* v_trace_1172_; lean_object* v_buildTime_1173_; lean_object* v___x_1174_; 
v_log_1168_ = lean_ctor_get(v___y_1047_, 0);
v_action_1169_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3);
v_wantsRebuild_1170_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3 + 1);
v_canceled_1171_ = lean_ctor_get_uint8(v___y_1047_, sizeof(void*)*3 + 2);
v_trace_1172_ = lean_ctor_get(v___y_1047_, 1);
v_buildTime_1173_ = lean_ctor_get(v___y_1047_, 2);
lean_inc_ref(v___y_1037_);
v___x_1174_ = l_Lake_createParentDirs(v___y_1037_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v_a_1178_; uint8_t v___x_1225_; lean_object* v___x_1226_; 
lean_dec_ref_known(v___x_1174_, 1);
v___x_1175_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0));
lean_inc_ref(v___y_1037_);
v___x_1176_ = l_System_FilePath_addExtension(v___y_1037_, v___x_1175_);
v___x_1225_ = 1;
v___x_1226_ = lean_io_prim_handle_mk(v___x_1176_, v___x_1225_);
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_object* v_a_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; uint8_t v___x_1230_; 
v_a_1227_ = lean_ctor_get(v___x_1226_, 0);
lean_inc(v_a_1227_);
lean_dec_ref_known(v___x_1226_, 1);
v___x_1228_ = lean_unsigned_to_nat(0u);
v___x_1229_ = lean_array_get_size(v_oFiles_1038_);
v___x_1230_ = lean_nat_dec_lt(v___x_1228_, v___x_1229_);
if (v___x_1230_ == 0)
{
lean_dec(v_a_1227_);
lean_dec_ref(v___y_1042_);
lean_dec_ref(v___x_1040_);
lean_dec_ref(v_oFiles_1038_);
v_a_1178_ = v___y_1047_;
goto v___jp_1177_;
}
else
{
lean_object* v___f_1231_; lean_object* v___x_1232_; size_t v___x_1233_; lean_object* v___x_194990__overap_1234_; lean_object* v___x_1235_; 
v___f_1231_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed), 10, 1);
lean_closure_set(v___f_1231_, 0, v_a_1227_);
v___x_1232_ = lean_box(0);
v___x_1233_ = lean_usize_of_nat(v___x_1229_);
v___x_194990__overap_1234_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1040_, v___f_1231_, v_oFiles_1038_, v___x_1041_, v___x_1233_, v___x_1232_);
lean_inc_ref(v___y_1046_);
lean_inc(v___y_1045_);
lean_inc(v___y_1044_);
lean_inc(v___y_1043_);
v___x_1235_ = lean_apply_7(v___x_194990__overap_1234_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, lean_box(0));
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 1);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1235_, 2);
v_a_1178_ = v_a_1236_;
goto v___jp_1177_;
}
else
{
lean_dec_ref(v___x_1176_);
lean_dec_ref(v___y_1037_);
return v___x_1235_;
}
}
}
else
{
lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1250_; 
lean_inc(v_buildTime_1173_);
lean_inc_ref(v_trace_1172_);
lean_inc_ref(v_log_1168_);
lean_dec_ref(v___x_1176_);
lean_dec_ref(v___y_1042_);
lean_dec_ref(v___x_1040_);
lean_dec_ref(v_oFiles_1038_);
lean_dec_ref(v___y_1037_);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___y_1047_);
if (v_isSharedCheck_1250_ == 0)
{
lean_object* v_unused_1251_; lean_object* v_unused_1252_; lean_object* v_unused_1253_; 
v_unused_1251_ = lean_ctor_get(v___y_1047_, 2);
lean_dec(v_unused_1251_);
v_unused_1252_ = lean_ctor_get(v___y_1047_, 1);
lean_dec(v_unused_1252_);
v_unused_1253_ = lean_ctor_get(v___y_1047_, 0);
lean_dec(v_unused_1253_);
v___x_1238_ = v___y_1047_;
v_isShared_1239_ = v_isSharedCheck_1250_;
goto v_resetjp_1237_;
}
else
{
lean_dec(v___y_1047_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1250_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v_a_1240_; lean_object* v___x_1241_; uint8_t v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1247_; 
v_a_1240_ = lean_ctor_get(v___x_1226_, 0);
lean_inc(v_a_1240_);
lean_dec_ref_known(v___x_1226_, 1);
v___x_1241_ = lean_io_error_to_string(v_a_1240_);
v___x_1242_ = 3;
v___x_1243_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1243_, 0, v___x_1241_);
lean_ctor_set_uint8(v___x_1243_, sizeof(void*)*1, v___x_1242_);
v___x_1244_ = lean_array_get_size(v_log_1168_);
v___x_1245_ = lean_array_push(v_log_1168_, v___x_1243_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 0, v___x_1245_);
v___x_1247_ = v___x_1238_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1245_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v_trace_1172_);
lean_ctor_set(v_reuseFailAlloc_1249_, 2, v_buildTime_1173_);
lean_ctor_set_uint8(v_reuseFailAlloc_1249_, sizeof(void*)*3, v_action_1169_);
lean_ctor_set_uint8(v_reuseFailAlloc_1249_, sizeof(void*)*3 + 1, v_wantsRebuild_1170_);
lean_ctor_set_uint8(v_reuseFailAlloc_1249_, sizeof(void*)*3 + 2, v_canceled_1171_);
v___x_1247_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1244_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
return v___x_1248_;
}
}
}
v___jp_1177_:
{
lean_object* v___x_1179_; lean_object* v_log_1180_; uint8_t v_action_1181_; uint8_t v_wantsRebuild_1182_; uint8_t v_canceled_1183_; lean_object* v_trace_1184_; lean_object* v_buildTime_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1224_; 
v___x_1179_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1));
v_log_1180_ = lean_ctor_get(v_a_1178_, 0);
v_action_1181_ = lean_ctor_get_uint8(v_a_1178_, sizeof(void*)*3);
v_wantsRebuild_1182_ = lean_ctor_get_uint8(v_a_1178_, sizeof(void*)*3 + 1);
v_canceled_1183_ = lean_ctor_get_uint8(v_a_1178_, sizeof(void*)*3 + 2);
v_trace_1184_ = lean_ctor_get(v_a_1178_, 1);
v_buildTime_1185_ = lean_ctor_get(v_a_1178_, 2);
v_isSharedCheck_1224_ = !lean_is_exclusive(v_a_1178_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1187_ = v_a_1178_;
v_isShared_1188_ = v_isSharedCheck_1224_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_buildTime_1185_);
lean_inc(v_trace_1184_);
lean_inc(v_log_1180_);
lean_dec(v_a_1178_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1224_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1189_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2));
v___x_1190_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5));
v___x_1191_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7);
v___x_1192_ = lean_array_push(v___x_1191_, v___y_1037_);
v___x_1193_ = lean_array_push(v___x_1192_, v___x_1190_);
v___x_1194_ = lean_array_push(v___x_1193_, v___x_1176_);
v___x_1195_ = lean_box(0);
v___x_1196_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8));
v___x_1197_ = 0;
v___x_1198_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1198_, 0, v___x_1179_);
lean_ctor_set(v___x_1198_, 1, v___x_1189_);
lean_ctor_set(v___x_1198_, 2, v___x_1194_);
lean_ctor_set(v___x_1198_, 3, v___x_1195_);
lean_ctor_set(v___x_1198_, 4, v___x_1196_);
lean_ctor_set_uint8(v___x_1198_, sizeof(void*)*5, v___x_1088_);
lean_ctor_set_uint8(v___x_1198_, sizeof(void*)*5 + 1, v___x_1197_);
v___x_1199_ = l_Lake_proc(v___x_1198_, v___x_1197_, v___x_1195_, v_log_1180_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1211_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
v_a_1201_ = lean_ctor_get(v___x_1199_, 1);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1203_ = v___x_1199_;
v_isShared_1204_ = v_isSharedCheck_1211_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_inc(v_a_1200_);
lean_dec(v___x_1199_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1211_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 0, v_a_1201_);
v___x_1206_ = v___x_1187_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_a_1201_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v_trace_1184_);
lean_ctor_set(v_reuseFailAlloc_1210_, 2, v_buildTime_1185_);
lean_ctor_set_uint8(v_reuseFailAlloc_1210_, sizeof(void*)*3, v_action_1181_);
lean_ctor_set_uint8(v_reuseFailAlloc_1210_, sizeof(void*)*3 + 1, v_wantsRebuild_1182_);
lean_ctor_set_uint8(v_reuseFailAlloc_1210_, sizeof(void*)*3 + 2, v_canceled_1183_);
v___x_1206_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
lean_object* v___x_1208_; 
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 1, v___x_1206_);
v___x_1208_ = v___x_1203_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_a_1200_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v___x_1206_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
}
else
{
lean_object* v_a_1212_; lean_object* v_a_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1223_; 
v_a_1212_ = lean_ctor_get(v___x_1199_, 0);
v_a_1213_ = lean_ctor_get(v___x_1199_, 1);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1215_ = v___x_1199_;
v_isShared_1216_ = v_isSharedCheck_1223_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_a_1213_);
lean_inc(v_a_1212_);
lean_dec(v___x_1199_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1223_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1218_; 
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 0, v_a_1213_);
v___x_1218_ = v___x_1187_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_a_1213_);
lean_ctor_set(v_reuseFailAlloc_1222_, 1, v_trace_1184_);
lean_ctor_set(v_reuseFailAlloc_1222_, 2, v_buildTime_1185_);
lean_ctor_set_uint8(v_reuseFailAlloc_1222_, sizeof(void*)*3, v_action_1181_);
lean_ctor_set_uint8(v_reuseFailAlloc_1222_, sizeof(void*)*3 + 1, v_wantsRebuild_1182_);
lean_ctor_set_uint8(v_reuseFailAlloc_1222_, sizeof(void*)*3 + 2, v_canceled_1183_);
v___x_1218_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
lean_object* v___x_1220_; 
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 1, v___x_1218_);
v___x_1220_ = v___x_1215_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1212_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v___x_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1267_; 
lean_inc(v_buildTime_1173_);
lean_inc_ref(v_trace_1172_);
lean_inc_ref(v_log_1168_);
lean_dec_ref(v___y_1042_);
lean_dec_ref(v___x_1040_);
lean_dec_ref(v_oFiles_1038_);
lean_dec_ref(v___y_1037_);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___y_1047_);
if (v_isSharedCheck_1267_ == 0)
{
lean_object* v_unused_1268_; lean_object* v_unused_1269_; lean_object* v_unused_1270_; 
v_unused_1268_ = lean_ctor_get(v___y_1047_, 2);
lean_dec(v_unused_1268_);
v_unused_1269_ = lean_ctor_get(v___y_1047_, 1);
lean_dec(v_unused_1269_);
v_unused_1270_ = lean_ctor_get(v___y_1047_, 0);
lean_dec(v_unused_1270_);
v___x_1255_ = v___y_1047_;
v_isShared_1256_ = v_isSharedCheck_1267_;
goto v_resetjp_1254_;
}
else
{
lean_dec(v___y_1047_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1267_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v_a_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1264_; 
v_a_1257_ = lean_ctor_get(v___x_1174_, 0);
lean_inc(v_a_1257_);
lean_dec_ref_known(v___x_1174_, 1);
v___x_1258_ = lean_io_error_to_string(v_a_1257_);
v___x_1259_ = 3;
v___x_1260_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1260_, 0, v___x_1258_);
lean_ctor_set_uint8(v___x_1260_, sizeof(void*)*1, v___x_1259_);
v___x_1261_ = lean_array_get_size(v_log_1168_);
v___x_1262_ = lean_array_push(v_log_1168_, v___x_1260_);
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 0, v___x_1262_);
v___x_1264_ = v___x_1255_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v___x_1262_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v_trace_1172_);
lean_ctor_set(v_reuseFailAlloc_1266_, 2, v_buildTime_1173_);
lean_ctor_set_uint8(v_reuseFailAlloc_1266_, sizeof(void*)*3, v_action_1169_);
lean_ctor_set_uint8(v_reuseFailAlloc_1266_, sizeof(void*)*3 + 1, v_wantsRebuild_1170_);
lean_ctor_set_uint8(v_reuseFailAlloc_1266_, sizeof(void*)*3 + 2, v_canceled_1171_);
v___x_1264_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1261_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
return v___x_1265_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed(lean_object* v_bootstrap_1271_, lean_object* v___y_1272_, lean_object* v_oFiles_1273_, lean_object* v_shouldExport_1274_, lean_object* v___x_1275_, lean_object* v___x_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
uint8_t v_bootstrap_boxed_1284_; uint8_t v_shouldExport_boxed_1285_; size_t v___x_195365__boxed_1286_; lean_object* v_res_1287_; 
v_bootstrap_boxed_1284_ = lean_unbox(v_bootstrap_1271_);
v_shouldExport_boxed_1285_ = lean_unbox(v_shouldExport_1274_);
v___x_195365__boxed_1286_ = lean_unbox_usize(v___x_1276_);
lean_dec(v___x_1276_);
v_res_1287_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(v_bootstrap_boxed_1284_, v___y_1272_, v_oFiles_1273_, v_shouldExport_boxed_1285_, v___x_1275_, v___x_195365__boxed_1286_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec(v___y_1278_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(uint8_t v_bootstrap_1289_, lean_object* v___y_1290_, uint8_t v_shouldExport_1291_, lean_object* v___x_1292_, size_t v___x_1293_, uint8_t v___x_1294_, lean_object* v_oFiles_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___y_1306_; uint8_t v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1303_ = lean_box(v_bootstrap_1289_);
v___x_1304_ = lean_box(v_shouldExport_1291_);
v___x_1305_ = lean_box_usize(v___x_1293_);
lean_inc_ref(v___y_1290_);
v___y_1306_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed), 13, 6);
lean_closure_set(v___y_1306_, 0, v___x_1303_);
lean_closure_set(v___y_1306_, 1, v___y_1290_);
lean_closure_set(v___y_1306_, 2, v_oFiles_1295_);
lean_closure_set(v___y_1306_, 3, v___x_1304_);
lean_closure_set(v___y_1306_, 4, v___x_1292_);
lean_closure_set(v___y_1306_, 5, v___x_1305_);
v___x_1307_ = 0;
v___x_1308_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0));
v___x_1309_ = l_Lake_buildArtifactUnlessUpToDate(v___y_1290_, v___y_1306_, v___x_1307_, v___x_1308_, v___x_1294_, v___x_1307_, v___x_1307_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_a_1310_; lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1319_; 
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
v_a_1311_ = lean_ctor_get(v___x_1309_, 1);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1313_ = v___x_1309_;
v_isShared_1314_ = v_isSharedCheck_1319_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_inc(v_a_1310_);
lean_dec(v___x_1309_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1319_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v_path_1315_; lean_object* v___x_1317_; 
v_path_1315_ = lean_ctor_get(v_a_1310_, 1);
lean_inc_ref(v_path_1315_);
lean_dec(v_a_1310_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v_path_1315_);
v___x_1317_ = v___x_1313_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_path_1315_);
lean_ctor_set(v_reuseFailAlloc_1318_, 1, v_a_1311_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
else
{
lean_object* v_a_1320_; lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1328_; 
v_a_1320_ = lean_ctor_get(v___x_1309_, 0);
v_a_1321_ = lean_ctor_get(v___x_1309_, 1);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1323_ = v___x_1309_;
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_inc(v_a_1320_);
lean_dec(v___x_1309_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1326_; 
if (v_isShared_1324_ == 0)
{
v___x_1326_ = v___x_1323_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_a_1320_);
lean_ctor_set(v_reuseFailAlloc_1327_, 1, v_a_1321_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed(lean_object* v_bootstrap_1329_, lean_object* v___y_1330_, lean_object* v_shouldExport_1331_, lean_object* v___x_1332_, lean_object* v___x_1333_, lean_object* v___x_1334_, lean_object* v_oFiles_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
uint8_t v_bootstrap_boxed_1343_; uint8_t v_shouldExport_boxed_1344_; size_t v___x_195775__boxed_1345_; uint8_t v___x_195776__boxed_1346_; lean_object* v_res_1347_; 
v_bootstrap_boxed_1343_ = lean_unbox(v_bootstrap_1329_);
v_shouldExport_boxed_1344_ = lean_unbox(v_shouldExport_1331_);
v___x_195775__boxed_1345_ = lean_unbox_usize(v___x_1333_);
lean_dec(v___x_1333_);
v___x_195776__boxed_1346_ = lean_unbox(v___x_1334_);
v_res_1347_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(v_bootstrap_boxed_1343_, v___y_1330_, v_shouldExport_boxed_1344_, v___x_1332_, v___x_195775__boxed_1345_, v___x_195776__boxed_1346_, v_oFiles_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec(v___y_1338_);
lean_dec(v___y_1337_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(lean_object* v_config_1352_, lean_object* v_config_1353_, uint8_t v_shouldExport_1354_, lean_object* v___x_1355_, uint8_t v___x_1356_, lean_object* v___x_1357_, lean_object* v___x_1358_, lean_object* v___x_1359_, lean_object* v___f_1360_, lean_object* v_dir_1361_, lean_object* v_self_1362_, lean_object* v___x_1363_, lean_object* v___f_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
uint8_t v___y_1373_; size_t v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v_a_1393_; lean_object* v_a_1394_; lean_object* v___x_1437_; 
lean_inc_ref(v___y_1365_);
lean_inc_ref(v___y_1369_);
lean_inc(v___y_1368_);
lean_inc(v___y_1367_);
lean_inc(v___x_1358_);
v___x_1437_ = lean_apply_7(v___y_1365_, v___x_1363_, v___x_1358_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, lean_box(0));
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v_a_1439_; lean_object* v___x_1440_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc(v_a_1438_);
v_a_1439_ = lean_ctor_get(v___x_1437_, 1);
lean_inc(v_a_1439_);
lean_dec_ref_known(v___x_1437_, 2);
v___x_1440_ = l_Lake_Job_await___redArg(v_a_1438_, v_a_1439_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v_a_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; uint8_t v___x_1446_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
v_a_1442_ = lean_ctor_get(v___x_1440_, 1);
lean_inc(v_a_1442_);
lean_dec_ref_known(v___x_1440_, 2);
v___x_1443_ = lean_unsigned_to_nat(0u);
v___x_1444_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_1445_ = lean_array_get_size(v_a_1441_);
v___x_1446_ = lean_nat_dec_lt(v___x_1443_, v___x_1445_);
if (v___x_1446_ == 0)
{
lean_dec(v_a_1441_);
lean_dec_ref(v___f_1364_);
v_a_1393_ = v___x_1444_;
v_a_1394_ = v_a_1442_;
goto v___jp_1392_;
}
else
{
size_t v___x_1447_; size_t v___x_1448_; lean_object* v___x_195124__overap_1449_; lean_object* v___x_1450_; 
v___x_1447_ = ((size_t)0ULL);
v___x_1448_ = lean_usize_of_nat(v___x_1445_);
lean_inc_ref(v___x_1359_);
v___x_195124__overap_1449_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1359_, v___f_1364_, v_a_1441_, v___x_1447_, v___x_1448_, v___x_1444_);
lean_inc_ref(v___y_1369_);
lean_inc(v___y_1368_);
lean_inc(v___y_1367_);
lean_inc(v___x_1358_);
lean_inc_ref(v___y_1365_);
v___x_1450_ = lean_apply_7(v___x_195124__overap_1449_, v___y_1365_, v___x_1358_, v___y_1367_, v___y_1368_, v___y_1369_, v_a_1442_, lean_box(0));
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v_a_1452_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_a_1451_);
v_a_1452_ = lean_ctor_get(v___x_1450_, 1);
lean_inc(v_a_1452_);
lean_dec_ref_known(v___x_1450_, 2);
v_a_1393_ = v_a_1451_;
v_a_1394_ = v_a_1452_;
goto v___jp_1392_;
}
else
{
lean_object* v_a_1453_; lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
lean_dec_ref(v___y_1365_);
lean_dec_ref(v_self_1362_);
lean_dec_ref(v_dir_1361_);
lean_dec_ref(v___f_1360_);
lean_dec_ref(v___x_1359_);
lean_dec(v___x_1358_);
lean_dec(v___x_1357_);
lean_dec_ref(v___x_1355_);
lean_dec_ref(v_config_1352_);
v_a_1453_ = lean_ctor_get(v___x_1450_, 0);
v_a_1454_ = lean_ctor_get(v___x_1450_, 1);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1450_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_inc(v_a_1453_);
lean_dec(v___x_1450_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1459_; 
if (v_isShared_1457_ == 0)
{
v___x_1459_ = v___x_1456_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_a_1453_);
lean_ctor_set(v_reuseFailAlloc_1460_, 1, v_a_1454_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
}
else
{
lean_object* v_a_1462_; lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1470_; 
lean_dec_ref(v___y_1365_);
lean_dec_ref(v___f_1364_);
lean_dec_ref(v_self_1362_);
lean_dec_ref(v_dir_1361_);
lean_dec_ref(v___f_1360_);
lean_dec_ref(v___x_1359_);
lean_dec(v___x_1358_);
lean_dec(v___x_1357_);
lean_dec_ref(v___x_1355_);
lean_dec_ref(v_config_1352_);
v_a_1462_ = lean_ctor_get(v___x_1440_, 0);
v_a_1463_ = lean_ctor_get(v___x_1440_, 1);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1465_ = v___x_1440_;
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_inc(v_a_1462_);
lean_dec(v___x_1440_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___x_1468_; 
if (v_isShared_1466_ == 0)
{
v___x_1468_ = v___x_1465_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v_a_1462_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v_a_1463_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
}
else
{
lean_object* v_a_1471_; lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_dec_ref(v___y_1365_);
lean_dec_ref(v___f_1364_);
lean_dec_ref(v_self_1362_);
lean_dec_ref(v_dir_1361_);
lean_dec_ref(v___f_1360_);
lean_dec_ref(v___x_1359_);
lean_dec(v___x_1358_);
lean_dec(v___x_1357_);
lean_dec_ref(v___x_1355_);
lean_dec_ref(v_config_1352_);
v_a_1471_ = lean_ctor_get(v___x_1437_, 0);
v_a_1472_ = lean_ctor_get(v___x_1437_, 1);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1437_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_inc(v_a_1471_);
lean_dec(v___x_1437_);
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
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1471_);
lean_ctor_set(v_reuseFailAlloc_1478_, 1, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
v___jp_1372_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___f_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; uint8_t v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1379_ = lean_box(v___y_1373_);
v___x_1380_ = lean_box(v_shouldExport_1354_);
v___x_1381_ = lean_box_usize(v___y_1374_);
v___x_1382_ = lean_box(v___x_1356_);
v___f_1383_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed), 14, 6);
lean_closure_set(v___f_1383_, 0, v___x_1379_);
lean_closure_set(v___f_1383_, 1, v___y_1378_);
lean_closure_set(v___f_1383_, 2, v___x_1380_);
lean_closure_set(v___f_1383_, 3, v___x_1355_);
lean_closure_set(v___f_1383_, 4, v___x_1381_);
lean_closure_set(v___f_1383_, 5, v___x_1382_);
v___x_1384_ = l_Array_append___redArg(v___y_1377_, v___y_1375_);
lean_dec_ref(v___y_1375_);
v___x_1385_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0));
v___x_1386_ = l_Lake_Job_collectArray___redArg(v___x_1384_, v___x_1385_);
lean_dec_ref(v___x_1384_);
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = 0;
v___x_1389_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1);
v___x_1390_ = l_Lake_Job_mapM___redArg(v___x_1357_, v___x_1386_, v___f_1383_, v___x_1387_, v___x_1388_, v___y_1365_, v___x_1358_, v___y_1367_, v___y_1368_, v___y_1369_, v___x_1389_);
lean_dec(v___x_1358_);
v___x_1391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
lean_ctor_set(v___x_1391_, 1, v___y_1376_);
return v___x_1391_;
}
v___jp_1392_:
{
lean_object* v_toLeanConfig_1395_; lean_object* v_toLeanConfig_1396_; uint8_t v_bootstrap_1397_; lean_object* v_buildDir_1398_; lean_object* v_nativeLibDir_1399_; lean_object* v_moreLinkObjs_1400_; lean_object* v_moreLinkObjs_1401_; lean_object* v___x_1402_; size_t v_sz_1403_; size_t v___x_1404_; lean_object* v___x_195082__overap_1405_; lean_object* v___x_1406_; 
v_toLeanConfig_1395_ = lean_ctor_get(v_config_1352_, 1);
lean_inc_ref(v_toLeanConfig_1395_);
v_toLeanConfig_1396_ = lean_ctor_get(v_config_1353_, 0);
v_bootstrap_1397_ = lean_ctor_get_uint8(v_config_1352_, sizeof(void*)*28);
v_buildDir_1398_ = lean_ctor_get(v_config_1352_, 5);
lean_inc_ref(v_buildDir_1398_);
v_nativeLibDir_1399_ = lean_ctor_get(v_config_1352_, 7);
lean_inc_ref(v_nativeLibDir_1399_);
lean_dec_ref(v_config_1352_);
v_moreLinkObjs_1400_ = lean_ctor_get(v_toLeanConfig_1395_, 6);
lean_inc_ref(v_moreLinkObjs_1400_);
lean_dec_ref(v_toLeanConfig_1395_);
v_moreLinkObjs_1401_ = lean_ctor_get(v_toLeanConfig_1396_, 6);
v___x_1402_ = l_Array_append___redArg(v_moreLinkObjs_1400_, v_moreLinkObjs_1401_);
v_sz_1403_ = lean_array_size(v___x_1402_);
v___x_1404_ = ((size_t)0ULL);
v___x_195082__overap_1405_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1359_, v___f_1360_, v_sz_1403_, v___x_1404_, v___x_1402_);
lean_inc_ref(v___y_1369_);
lean_inc(v___y_1368_);
lean_inc(v___y_1367_);
lean_inc(v___x_1358_);
lean_inc_ref(v___y_1365_);
v___x_1406_ = lean_apply_7(v___x_195082__overap_1405_, v___y_1365_, v___x_1358_, v___y_1367_, v___y_1368_, v___y_1369_, v_a_1394_, lean_box(0));
if (lean_obj_tag(v___x_1406_) == 0)
{
if (v_shouldExport_1354_ == 0)
{
lean_object* v_a_1407_; lean_object* v_a_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_a_1407_);
v_a_1408_ = lean_ctor_get(v___x_1406_, 1);
lean_inc(v_a_1408_);
lean_dec_ref_known(v___x_1406_, 2);
v___x_1409_ = l_System_FilePath_normalize(v_buildDir_1398_);
v___x_1410_ = l_Lake_joinRelative(v_dir_1361_, v___x_1409_);
v___x_1411_ = l_System_FilePath_normalize(v_nativeLibDir_1399_);
v___x_1412_ = l_Lake_joinRelative(v___x_1410_, v___x_1411_);
v___x_1413_ = l_Lake_LeanLib_libName(v_self_1362_);
v___x_1414_ = l_Lake_nameToStaticLib(v___x_1413_, v_shouldExport_1354_);
v___x_1415_ = l_Lake_joinRelative(v___x_1412_, v___x_1414_);
v___y_1373_ = v_bootstrap_1397_;
v___y_1374_ = v___x_1404_;
v___y_1375_ = v_a_1407_;
v___y_1376_ = v_a_1408_;
v___y_1377_ = v_a_1393_;
v___y_1378_ = v___x_1415_;
goto v___jp_1372_;
}
else
{
lean_object* v_a_1416_; lean_object* v_a_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v_a_1416_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_a_1416_);
v_a_1417_ = lean_ctor_get(v___x_1406_, 1);
lean_inc(v_a_1417_);
lean_dec_ref_known(v___x_1406_, 2);
v___x_1418_ = l_System_FilePath_normalize(v_buildDir_1398_);
v___x_1419_ = l_Lake_joinRelative(v_dir_1361_, v___x_1418_);
v___x_1420_ = l_System_FilePath_normalize(v_nativeLibDir_1399_);
v___x_1421_ = l_Lake_joinRelative(v___x_1419_, v___x_1420_);
v___x_1422_ = l_Lake_LeanLib_libName(v_self_1362_);
v___x_1423_ = 0;
v___x_1424_ = l_Lake_nameToStaticLib(v___x_1422_, v___x_1423_);
v___x_1425_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1));
v___x_1426_ = l_System_FilePath_addExtension(v___x_1424_, v___x_1425_);
v___x_1427_ = l_Lake_joinRelative(v___x_1421_, v___x_1426_);
v___y_1373_ = v_bootstrap_1397_;
v___y_1374_ = v___x_1404_;
v___y_1375_ = v_a_1416_;
v___y_1376_ = v_a_1417_;
v___y_1377_ = v_a_1393_;
v___y_1378_ = v___x_1427_;
goto v___jp_1372_;
}
}
else
{
lean_object* v_a_1428_; lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1436_; 
lean_dec_ref(v_nativeLibDir_1399_);
lean_dec_ref(v_buildDir_1398_);
lean_dec_ref(v_a_1393_);
lean_dec_ref(v___y_1365_);
lean_dec_ref(v_self_1362_);
lean_dec_ref(v_dir_1361_);
lean_dec(v___x_1358_);
lean_dec(v___x_1357_);
lean_dec_ref(v___x_1355_);
v_a_1428_ = lean_ctor_get(v___x_1406_, 0);
v_a_1429_ = lean_ctor_get(v___x_1406_, 1);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1431_ = v___x_1406_;
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_inc(v_a_1428_);
lean_dec(v___x_1406_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1428_);
lean_ctor_set(v_reuseFailAlloc_1435_, 1, v_a_1429_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed(lean_object** _args){
lean_object* v_config_1480_ = _args[0];
lean_object* v_config_1481_ = _args[1];
lean_object* v_shouldExport_1482_ = _args[2];
lean_object* v___x_1483_ = _args[3];
lean_object* v___x_1484_ = _args[4];
lean_object* v___x_1485_ = _args[5];
lean_object* v___x_1486_ = _args[6];
lean_object* v___x_1487_ = _args[7];
lean_object* v___f_1488_ = _args[8];
lean_object* v_dir_1489_ = _args[9];
lean_object* v_self_1490_ = _args[10];
lean_object* v___x_1491_ = _args[11];
lean_object* v___f_1492_ = _args[12];
lean_object* v___y_1493_ = _args[13];
lean_object* v___y_1494_ = _args[14];
lean_object* v___y_1495_ = _args[15];
lean_object* v___y_1496_ = _args[16];
lean_object* v___y_1497_ = _args[17];
lean_object* v___y_1498_ = _args[18];
lean_object* v___y_1499_ = _args[19];
_start:
{
uint8_t v_shouldExport_boxed_1500_; uint8_t v___x_195871__boxed_1501_; lean_object* v_res_1502_; 
v_shouldExport_boxed_1500_ = lean_unbox(v_shouldExport_1482_);
v___x_195871__boxed_1501_ = lean_unbox(v___x_1484_);
v_res_1502_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(v_config_1480_, v_config_1481_, v_shouldExport_boxed_1500_, v___x_1483_, v___x_195871__boxed_1501_, v___x_1485_, v___x_1486_, v___x_1487_, v___f_1488_, v_dir_1489_, v_self_1490_, v___x_1491_, v___f_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec(v_config_1481_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(lean_object* v_self_1506_, uint8_t v_shouldExport_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_){
_start:
{
lean_object* v___x_1515_; lean_object* v_toApplicative_1516_; lean_object* v_toBind_1517_; lean_object* v_toFunctor_1518_; lean_object* v_toPure_1519_; lean_object* v___f_1520_; lean_object* v___f_1521_; lean_object* v___f_1522_; lean_object* v___f_1523_; lean_object* v___x_1524_; lean_object* v___f_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v_toBuildConfig_1533_; lean_object* v_registeredJobs_1534_; uint8_t v_verbosity_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___f_1538_; lean_object* v___y_1540_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1515_ = l_instMonadBaseIO;
v_toApplicative_1516_ = lean_ctor_get(v___x_1515_, 0);
v_toBind_1517_ = lean_ctor_get(v___x_1515_, 1);
v_toFunctor_1518_ = lean_ctor_get(v_toApplicative_1516_, 0);
v_toPure_1519_ = lean_ctor_get(v_toApplicative_1516_, 1);
lean_inc_n(v_toBind_1517_, 3);
lean_inc_n(v_toPure_1519_, 5);
v___f_1520_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_1520_, 0, v_toPure_1519_);
lean_closure_set(v___f_1520_, 1, v_toBind_1517_);
v___f_1521_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_1521_, 0, v_toPure_1519_);
lean_closure_set(v___f_1521_, 1, v_toBind_1517_);
lean_inc_ref(v___f_1520_);
v___f_1522_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_1522_, 0, v_toPure_1519_);
lean_closure_set(v___f_1522_, 1, v___f_1520_);
lean_inc_ref_n(v_toFunctor_1518_, 2);
v___f_1523_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_1523_, 0, v_toFunctor_1518_);
lean_closure_set(v___f_1523_, 1, v_toPure_1519_);
lean_closure_set(v___f_1523_, 2, v_toBind_1517_);
v___x_1524_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_1518_);
v___f_1525_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1525_, 0, v_toPure_1519_);
v___x_1526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1524_);
lean_ctor_set(v___x_1526_, 1, v___f_1525_);
lean_ctor_set(v___x_1526_, 2, v___f_1523_);
lean_ctor_set(v___x_1526_, 3, v___f_1522_);
lean_ctor_set(v___x_1526_, 4, v___f_1521_);
v___x_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1526_);
lean_ctor_set(v___x_1527_, 1, v___f_1520_);
v___x_1528_ = l_ReaderT_instMonad___redArg(v___x_1527_);
v___x_1529_ = l_StateRefT_x27_instMonad___redArg(v___x_1528_);
v___x_1530_ = l_ReaderT_instMonad___redArg(v___x_1529_);
v___x_1531_ = l_ReaderT_instMonad___redArg(v___x_1530_);
v___x_1532_ = l_Lake_EquipT_instMonad___redArg(v___x_1531_);
v_toBuildConfig_1533_ = lean_ctor_get(v_a_1512_, 0);
v_registeredJobs_1534_ = lean_ctor_get(v_a_1512_, 4);
v_verbosity_1535_ = lean_ctor_get_uint8(v_toBuildConfig_1533_, sizeof(void*)*5 + 4);
v___x_1536_ = l_Lake_instDataKindFilePath;
v___x_1537_ = lean_box(v_shouldExport_1507_);
lean_inc_ref(v___x_1532_);
v___f_1538_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed), 11, 2);
lean_closure_set(v___f_1538_, 0, v___x_1537_);
lean_closure_set(v___f_1538_, 1, v___x_1532_);
v___x_1587_ = lean_box(v_verbosity_1535_);
v___x_1588_ = lean_obj_tag_nat(v___x_1587_);
lean_dec(v___x_1587_);
v___x_1589_ = lean_unsigned_to_nat(2u);
v___x_1590_ = lean_nat_dec_eq(v___x_1588_, v___x_1589_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; 
v___x_1591_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___y_1540_ = v___x_1591_;
goto v___jp_1539_;
}
else
{
if (v_shouldExport_1507_ == 0)
{
lean_object* v___x_1592_; 
v___x_1592_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1));
v___y_1540_ = v___x_1592_;
goto v___jp_1539_;
}
else
{
lean_object* v___x_1593_; 
v___x_1593_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2));
v___y_1540_ = v___x_1593_;
goto v___jp_1539_;
}
}
v___jp_1539_:
{
lean_object* v_pkg_1541_; lean_object* v_name_1542_; lean_object* v_config_1543_; lean_object* v_keyName_1544_; lean_object* v_dir_1545_; lean_object* v_config_1546_; lean_object* v___f_1547_; uint8_t v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___f_1560_; uint8_t v___x_1561_; lean_object* v___x_1562_; 
v_pkg_1541_ = lean_ctor_get(v_self_1506_, 0);
v_name_1542_ = lean_ctor_get(v_self_1506_, 1);
v_config_1543_ = lean_ctor_get(v_self_1506_, 2);
lean_inc(v_config_1543_);
v_keyName_1544_ = lean_ctor_get(v_pkg_1541_, 2);
v_dir_1545_ = lean_ctor_get(v_pkg_1541_, 4);
lean_inc_ref(v_dir_1545_);
v_config_1546_ = lean_ctor_get(v_pkg_1541_, 6);
lean_inc_ref(v_config_1546_);
lean_inc_ref_n(v_pkg_1541_, 2);
v___f_1547_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed), 10, 2);
lean_closure_set(v___f_1547_, 0, v___x_1536_);
lean_closure_set(v___f_1547_, 1, v_pkg_1541_);
v___x_1548_ = 1;
lean_inc_n(v_name_1542_, 2);
v___x_1549_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1542_, v___x_1548_);
v___x_1550_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0));
v___x_1551_ = lean_string_append(v___x_1549_, v___x_1550_);
v___x_1552_ = lean_string_append(v___x_1551_, v___y_1540_);
v___x_1553_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_1544_);
v___x_1554_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1554_, 0, v_keyName_1544_);
lean_ctor_set(v___x_1554_, 1, v_name_1542_);
v___x_1555_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_1506_);
v___x_1556_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1554_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
lean_ctor_set(v___x_1556_, 2, v_self_1506_);
lean_ctor_set(v___x_1556_, 3, v___x_1553_);
v___x_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1557_, 0, v_pkg_1541_);
v___x_1558_ = lean_box(v_shouldExport_1507_);
v___x_1559_ = lean_box(v___x_1548_);
lean_inc_ref(v___x_1532_);
v___f_1560_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed), 20, 13);
lean_closure_set(v___f_1560_, 0, v_config_1546_);
lean_closure_set(v___f_1560_, 1, v_config_1543_);
lean_closure_set(v___f_1560_, 2, v___x_1558_);
lean_closure_set(v___f_1560_, 3, v___x_1532_);
lean_closure_set(v___f_1560_, 4, v___x_1559_);
lean_closure_set(v___f_1560_, 5, v___x_1536_);
lean_closure_set(v___f_1560_, 6, v___x_1557_);
lean_closure_set(v___f_1560_, 7, v___x_1532_);
lean_closure_set(v___f_1560_, 8, v___f_1547_);
lean_closure_set(v___f_1560_, 9, v_dir_1545_);
lean_closure_set(v___f_1560_, 10, v_self_1506_);
lean_closure_set(v___f_1560_, 11, v___x_1556_);
lean_closure_set(v___f_1560_, 12, v___f_1538_);
v___x_1561_ = 0;
v___x_1562_ = l_Lake_ensureJob___redArg(v___x_1536_, v___f_1560_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_, v_a_1513_);
if (lean_obj_tag(v___x_1562_) == 0)
{
lean_object* v_a_1563_; lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1586_; 
v_a_1563_ = lean_ctor_get(v___x_1562_, 0);
v_a_1564_ = lean_ctor_get(v___x_1562_, 1);
v_isSharedCheck_1586_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1566_ = v___x_1562_;
v_isShared_1567_ = v_isSharedCheck_1586_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_inc(v_a_1563_);
lean_dec(v___x_1562_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1586_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v_task_1568_; lean_object* v_kind_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1584_; 
v_task_1568_ = lean_ctor_get(v_a_1563_, 0);
v_kind_1569_ = lean_ctor_get(v_a_1563_, 1);
v_isSharedCheck_1584_ = !lean_is_exclusive(v_a_1563_);
if (v_isSharedCheck_1584_ == 0)
{
lean_object* v_unused_1585_; 
v_unused_1585_ = lean_ctor_get(v_a_1563_, 2);
lean_dec(v_unused_1585_);
v___x_1571_ = v_a_1563_;
v_isShared_1572_ = v_isSharedCheck_1584_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_kind_1569_);
lean_inc(v_task_1568_);
lean_dec(v_a_1563_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1584_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v_job_1574_; 
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 2, v___x_1552_);
v_job_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v_task_1568_);
lean_ctor_set(v_reuseFailAlloc_1583_, 1, v_kind_1569_);
lean_ctor_set(v_reuseFailAlloc_1583_, 2, v___x_1552_);
v_job_1574_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1581_; 
lean_ctor_set_uint8(v_job_1574_, sizeof(void*)*3, v___x_1561_);
v___x_1575_ = lean_st_ref_take(v_registeredJobs_1534_);
lean_inc_ref(v_job_1574_);
v___x_1576_ = l_Lake_Job_toOpaque___redArg(v_job_1574_);
v___x_1577_ = lean_array_push(v___x_1575_, v___x_1576_);
v___x_1578_ = lean_st_ref_put(v_registeredJobs_1534_, v___x_1577_);
v___x_1579_ = l_Lake_Job_renew___redArg(v_job_1574_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 0, v___x_1579_);
v___x_1581_ = v___x_1566_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v___x_1579_);
lean_ctor_set(v_reuseFailAlloc_1582_, 1, v_a_1564_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1552_);
return v___x_1562_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___boxed(lean_object* v_self_1594_, lean_object* v_shouldExport_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_){
_start:
{
uint8_t v_shouldExport_boxed_1603_; lean_object* v_res_1604_; 
v_shouldExport_boxed_1603_ = lean_unbox(v_shouldExport_1595_);
v_res_1604_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(v_self_1594_, v_shouldExport_boxed_1603_, v_a_1596_, v_a_1597_, v_a_1598_, v_a_1599_, v_a_1600_, v_a_1601_);
lean_dec_ref(v_a_1600_);
lean_dec(v_a_1599_);
lean_dec(v_a_1598_);
lean_dec(v_a_1597_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(uint8_t v_fmt_1605_, lean_object* v_a_1606_){
_start:
{
if (v_fmt_1605_ == 0)
{
return v_a_1606_;
}
else
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1607_ = l_Lake_mkRelPathString(v_a_1606_);
v___x_1608_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
v___x_1609_ = l_Lean_Json_compress(v___x_1608_);
return v___x_1609_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed(lean_object* v_fmt_1610_, lean_object* v_a_1611_){
_start:
{
uint8_t v_fmt_boxed_1612_; lean_object* v_res_1613_; 
v_fmt_boxed_1612_ = lean_unbox(v_fmt_1610_);
v_res_1613_ = l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(v_fmt_boxed_1612_, v_a_1611_);
return v_res_1613_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2(void){
_start:
{
uint8_t v___x_1616_; lean_object* v_name_1617_; lean_object* v___x_1618_; 
v___x_1616_ = 1;
v_name_1617_ = l_Lake_instDataKindFilePath;
v___x_1618_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1617_, v___x_1616_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(lean_object* v_defaultPkg_1622_, lean_object* v_self_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_){
_start:
{
lean_object* v_name_1631_; uint8_t v___x_1632_; lean_object* v___x_1633_; 
v_name_1631_ = l_Lake_instDataKindFilePath;
v___x_1632_ = 1;
lean_inc_ref_n(v_self_1623_, 2);
v___x_1633_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_1622_, v_self_1623_, v_self_1623_, v___x_1632_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_1629_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; lean_object* v_a_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1675_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
v_a_1635_ = lean_ctor_get(v___x_1633_, 1);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1637_ = v___x_1633_;
v_isShared_1638_ = v_isSharedCheck_1675_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_a_1635_);
lean_inc(v_a_1634_);
lean_dec(v___x_1633_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1675_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___y_1640_; lean_object* v_snd_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1673_; 
v_snd_1658_ = lean_ctor_get(v_a_1634_, 1);
v_isSharedCheck_1673_ = !lean_is_exclusive(v_a_1634_);
if (v_isSharedCheck_1673_ == 0)
{
lean_object* v_unused_1674_; 
v_unused_1674_ = lean_ctor_get(v_a_1634_, 0);
lean_dec(v_unused_1674_);
v___x_1660_ = v_a_1634_;
v_isShared_1661_ = v_isSharedCheck_1673_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_snd_1658_);
lean_dec(v_a_1634_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1673_;
goto v_resetjp_1659_;
}
v___jp_1639_:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; uint8_t v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1656_; 
v___x_1641_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0));
v___x_1642_ = l_Lake_PartialBuildKey_toString(v_self_1623_);
v___x_1643_ = lean_string_append(v___x_1641_, v___x_1642_);
lean_dec_ref(v___x_1642_);
v___x_1644_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1));
v___x_1645_ = lean_string_append(v___x_1643_, v___x_1644_);
v___x_1646_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2);
v___x_1647_ = lean_string_append(v___x_1645_, v___x_1646_);
v___x_1648_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3));
v___x_1649_ = lean_string_append(v___x_1647_, v___x_1648_);
v___x_1650_ = lean_string_append(v___x_1649_, v___y_1640_);
lean_dec_ref(v___y_1640_);
v___x_1651_ = 3;
v___x_1652_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1652_, 0, v___x_1650_);
lean_ctor_set_uint8(v___x_1652_, sizeof(void*)*1, v___x_1651_);
v___x_1653_ = lean_array_get_size(v_a_1635_);
v___x_1654_ = lean_array_push(v_a_1635_, v___x_1652_);
if (v_isShared_1638_ == 0)
{
lean_ctor_set_tag(v___x_1637_, 1);
lean_ctor_set(v___x_1637_, 1, v___x_1654_);
lean_ctor_set(v___x_1637_, 0, v___x_1653_);
v___x_1656_ = v___x_1637_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v___x_1653_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v___x_1654_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
v_resetjp_1659_:
{
lean_object* v_kind_1662_; uint8_t v___x_1663_; 
v_kind_1662_ = lean_ctor_get(v_snd_1658_, 1);
v___x_1663_ = lean_name_eq(v_kind_1662_, v_name_1631_);
if (v___x_1663_ == 0)
{
uint8_t v___x_1664_; 
lean_inc(v_kind_1662_);
lean_del_object(v___x_1660_);
lean_dec(v_snd_1658_);
v___x_1664_ = l_Lean_Name_isAnonymous(v_kind_1662_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1665_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4));
v___x_1666_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_1662_, v___x_1632_);
v___x_1667_ = lean_string_append(v___x_1665_, v___x_1666_);
lean_dec_ref(v___x_1666_);
v___x_1668_ = lean_string_append(v___x_1667_, v___x_1665_);
v___y_1640_ = v___x_1668_;
goto v___jp_1639_;
}
else
{
lean_object* v___x_1669_; 
lean_dec(v_kind_1662_);
v___x_1669_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5));
v___y_1640_ = v___x_1669_;
goto v___jp_1639_;
}
}
else
{
lean_object* v___x_1671_; 
lean_del_object(v___x_1637_);
lean_dec_ref(v_self_1623_);
if (v_isShared_1661_ == 0)
{
lean_ctor_set(v___x_1660_, 1, v_a_1635_);
lean_ctor_set(v___x_1660_, 0, v_snd_1658_);
v___x_1671_ = v___x_1660_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_snd_1658_);
lean_ctor_set(v_reuseFailAlloc_1672_, 1, v_a_1635_);
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
else
{
lean_object* v_a_1676_; lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1684_; 
lean_dec_ref(v_self_1623_);
v_a_1676_ = lean_ctor_get(v___x_1633_, 0);
v_a_1677_ = lean_ctor_get(v___x_1633_, 1);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1679_ = v___x_1633_;
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_inc(v_a_1676_);
lean_dec(v___x_1633_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_a_1676_);
lean_ctor_set(v_reuseFailAlloc_1683_, 1, v_a_1677_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___boxed(lean_object* v_defaultPkg_1685_, lean_object* v_self_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v_defaultPkg_1685_, v_self_1686_, v_a_1687_, v_a_1688_, v_a_1689_, v_a_1690_, v_a_1691_, v_a_1692_);
lean_dec_ref(v_a_1691_);
lean_dec(v_a_1690_);
lean_dec(v_a_1689_);
lean_dec(v_a_1688_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(lean_object* v___x_1695_, size_t v_sz_1696_, size_t v_i_1697_, lean_object* v_bs_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
uint8_t v___x_1706_; 
v___x_1706_ = lean_usize_dec_lt(v_i_1697_, v_sz_1696_);
if (v___x_1706_ == 0)
{
lean_object* v___x_1707_; 
lean_dec_ref(v___y_1699_);
lean_dec_ref(v___x_1695_);
v___x_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1707_, 0, v_bs_1698_);
lean_ctor_set(v___x_1707_, 1, v___y_1704_);
return v___x_1707_;
}
else
{
lean_object* v_v_1708_; lean_object* v___x_1709_; lean_object* v_bs_x27_1710_; lean_object* v___x_1711_; 
v_v_1708_ = lean_array_uget(v_bs_1698_, v_i_1697_);
v___x_1709_ = lean_unsigned_to_nat(0u);
v_bs_x27_1710_ = lean_array_uset(v_bs_1698_, v_i_1697_, v___x_1709_);
lean_inc_ref(v___y_1699_);
lean_inc_ref(v___x_1695_);
v___x_1711_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v___x_1695_, v_v_1708_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; lean_object* v_a_1713_; size_t v___x_1714_; size_t v___x_1715_; lean_object* v___x_1716_; 
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
lean_inc(v_a_1712_);
v_a_1713_ = lean_ctor_get(v___x_1711_, 1);
lean_inc(v_a_1713_);
lean_dec_ref_known(v___x_1711_, 2);
v___x_1714_ = ((size_t)1ULL);
v___x_1715_ = lean_usize_add(v_i_1697_, v___x_1714_);
v___x_1716_ = lean_array_uset(v_bs_x27_1710_, v_i_1697_, v_a_1712_);
v_i_1697_ = v___x_1715_;
v_bs_1698_ = v___x_1716_;
v___y_1704_ = v_a_1713_;
goto _start;
}
else
{
lean_object* v_a_1718_; lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1726_; 
lean_dec_ref(v_bs_x27_1710_);
lean_dec_ref(v___y_1699_);
lean_dec_ref(v___x_1695_);
v_a_1718_ = lean_ctor_get(v___x_1711_, 0);
v_a_1719_ = lean_ctor_get(v___x_1711_, 1);
v_isSharedCheck_1726_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1721_ = v___x_1711_;
v_isShared_1722_ = v_isSharedCheck_1726_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_inc(v_a_1718_);
lean_dec(v___x_1711_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1726_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1724_; 
if (v_isShared_1722_ == 0)
{
v___x_1724_ = v___x_1721_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v_a_1718_);
lean_ctor_set(v_reuseFailAlloc_1725_, 1, v_a_1719_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2___boxed(lean_object* v___x_1727_, lean_object* v_sz_1728_, lean_object* v_i_1729_, lean_object* v_bs_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_){
_start:
{
size_t v_sz_boxed_1738_; size_t v_i_boxed_1739_; lean_object* v_res_1740_; 
v_sz_boxed_1738_ = lean_unbox_usize(v_sz_1728_);
lean_dec(v_sz_1728_);
v_i_boxed_1739_ = lean_unbox_usize(v_i_1729_);
lean_dec(v_i_1729_);
v_res_1740_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(v___x_1727_, v_sz_boxed_1738_, v_i_boxed_1739_, v_bs_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec(v___y_1734_);
lean_dec(v___y_1733_);
lean_dec(v___y_1732_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(lean_object* v_a_1741_, lean_object* v_as_1742_, size_t v_i_1743_, size_t v_stop_1744_, lean_object* v_b_1745_, lean_object* v___y_1746_){
_start:
{
uint8_t v___x_1748_; 
v___x_1748_ = lean_usize_dec_eq(v_i_1743_, v_stop_1744_);
if (v___x_1748_ == 0)
{
lean_object* v_log_1749_; uint8_t v_action_1750_; uint8_t v_wantsRebuild_1751_; uint8_t v_canceled_1752_; lean_object* v_trace_1753_; lean_object* v_buildTime_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v_log_1749_ = lean_ctor_get(v___y_1746_, 0);
v_action_1750_ = lean_ctor_get_uint8(v___y_1746_, sizeof(void*)*3);
v_wantsRebuild_1751_ = lean_ctor_get_uint8(v___y_1746_, sizeof(void*)*3 + 1);
v_canceled_1752_ = lean_ctor_get_uint8(v___y_1746_, sizeof(void*)*3 + 2);
v_trace_1753_ = lean_ctor_get(v___y_1746_, 1);
v_buildTime_1754_ = lean_ctor_get(v___y_1746_, 2);
v___x_1755_ = lean_array_uget_borrowed(v_as_1742_, v_i_1743_);
v___x_1756_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
lean_inc(v___x_1755_);
v___x_1757_ = lean_string_append(v___x_1755_, v___x_1756_);
v___x_1758_ = lean_io_prim_handle_put_str(v_a_1741_, v___x_1757_);
lean_dec_ref(v___x_1757_);
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_object* v_a_1759_; size_t v___x_1760_; size_t v___x_1761_; 
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
lean_inc(v_a_1759_);
lean_dec_ref_known(v___x_1758_, 1);
v___x_1760_ = ((size_t)1ULL);
v___x_1761_ = lean_usize_add(v_i_1743_, v___x_1760_);
v_i_1743_ = v___x_1761_;
v_b_1745_ = v_a_1759_;
goto _start;
}
else
{
lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1776_; 
lean_inc(v_buildTime_1754_);
lean_inc_ref(v_trace_1753_);
lean_inc_ref(v_log_1749_);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___y_1746_);
if (v_isSharedCheck_1776_ == 0)
{
lean_object* v_unused_1777_; lean_object* v_unused_1778_; lean_object* v_unused_1779_; 
v_unused_1777_ = lean_ctor_get(v___y_1746_, 2);
lean_dec(v_unused_1777_);
v_unused_1778_ = lean_ctor_get(v___y_1746_, 1);
lean_dec(v_unused_1778_);
v_unused_1779_ = lean_ctor_get(v___y_1746_, 0);
lean_dec(v_unused_1779_);
v___x_1764_ = v___y_1746_;
v_isShared_1765_ = v_isSharedCheck_1776_;
goto v_resetjp_1763_;
}
else
{
lean_dec(v___y_1746_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1776_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v_a_1766_; lean_object* v___x_1767_; uint8_t v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1773_; 
v_a_1766_ = lean_ctor_get(v___x_1758_, 0);
lean_inc(v_a_1766_);
lean_dec_ref_known(v___x_1758_, 1);
v___x_1767_ = lean_io_error_to_string(v_a_1766_);
v___x_1768_ = 3;
v___x_1769_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1769_, 0, v___x_1767_);
lean_ctor_set_uint8(v___x_1769_, sizeof(void*)*1, v___x_1768_);
v___x_1770_ = lean_array_get_size(v_log_1749_);
v___x_1771_ = lean_array_push(v_log_1749_, v___x_1769_);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 0, v___x_1771_);
v___x_1773_ = v___x_1764_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v___x_1771_);
lean_ctor_set(v_reuseFailAlloc_1775_, 1, v_trace_1753_);
lean_ctor_set(v_reuseFailAlloc_1775_, 2, v_buildTime_1754_);
lean_ctor_set_uint8(v_reuseFailAlloc_1775_, sizeof(void*)*3, v_action_1750_);
lean_ctor_set_uint8(v_reuseFailAlloc_1775_, sizeof(void*)*3 + 1, v_wantsRebuild_1751_);
lean_ctor_set_uint8(v_reuseFailAlloc_1775_, sizeof(void*)*3 + 2, v_canceled_1752_);
v___x_1773_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
lean_object* v___x_1774_; 
v___x_1774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1770_);
lean_ctor_set(v___x_1774_, 1, v___x_1773_);
return v___x_1774_;
}
}
}
}
else
{
lean_object* v___x_1780_; 
v___x_1780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1780_, 0, v_b_1745_);
lean_ctor_set(v___x_1780_, 1, v___y_1746_);
return v___x_1780_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg___boxed(lean_object* v_a_1781_, lean_object* v_as_1782_, lean_object* v_i_1783_, lean_object* v_stop_1784_, lean_object* v_b_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_){
_start:
{
size_t v_i_boxed_1788_; size_t v_stop_boxed_1789_; lean_object* v_res_1790_; 
v_i_boxed_1788_ = lean_unbox_usize(v_i_1783_);
lean_dec(v_i_1783_);
v_stop_boxed_1789_ = lean_unbox_usize(v_stop_1784_);
lean_dec(v_stop_1784_);
v_res_1790_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1781_, v_as_1782_, v_i_boxed_1788_, v_stop_boxed_1789_, v_b_1785_, v___y_1786_);
lean_dec_ref(v_as_1782_);
lean_dec(v_a_1781_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(uint8_t v_bootstrap_1791_, lean_object* v___y_1792_, lean_object* v_oFiles_1793_, uint8_t v_shouldExport_1794_, size_t v___x_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_){
_start:
{
if (v_bootstrap_1791_ == 0)
{
lean_object* v_toContext_1803_; lean_object* v_lakeEnv_1804_; lean_object* v_lean_1805_; lean_object* v_log_1806_; uint8_t v_action_1807_; uint8_t v_wantsRebuild_1808_; uint8_t v_canceled_1809_; lean_object* v_trace_1810_; lean_object* v_buildTime_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1841_; 
v_toContext_1803_ = lean_ctor_get(v___y_1800_, 1);
v_lakeEnv_1804_ = lean_ctor_get(v_toContext_1803_, 0);
v_lean_1805_ = lean_ctor_get(v_lakeEnv_1804_, 1);
v_log_1806_ = lean_ctor_get(v___y_1801_, 0);
v_action_1807_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3);
v_wantsRebuild_1808_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3 + 1);
v_canceled_1809_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3 + 2);
v_trace_1810_ = lean_ctor_get(v___y_1801_, 1);
v_buildTime_1811_ = lean_ctor_get(v___y_1801_, 2);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___y_1801_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1813_ = v___y_1801_;
v_isShared_1814_ = v_isSharedCheck_1841_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_buildTime_1811_);
lean_inc(v_trace_1810_);
lean_inc(v_log_1806_);
lean_dec(v___y_1801_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1841_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v_ar_1815_; lean_object* v___x_1816_; 
v_ar_1815_ = lean_ctor_get(v_lean_1805_, 13);
lean_inc_ref(v_ar_1815_);
v___x_1816_ = l_Lake_compileStaticLib(v___y_1792_, v_oFiles_1793_, v_ar_1815_, v_bootstrap_1791_, v_log_1806_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1828_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
v_a_1818_ = lean_ctor_get(v___x_1816_, 1);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1820_ = v___x_1816_;
v_isShared_1821_ = v_isSharedCheck_1828_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_inc(v_a_1817_);
lean_dec(v___x_1816_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1828_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1823_; 
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v_a_1818_);
v___x_1823_ = v___x_1813_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1818_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v_trace_1810_);
lean_ctor_set(v_reuseFailAlloc_1827_, 2, v_buildTime_1811_);
lean_ctor_set_uint8(v_reuseFailAlloc_1827_, sizeof(void*)*3, v_action_1807_);
lean_ctor_set_uint8(v_reuseFailAlloc_1827_, sizeof(void*)*3 + 1, v_wantsRebuild_1808_);
lean_ctor_set_uint8(v_reuseFailAlloc_1827_, sizeof(void*)*3 + 2, v_canceled_1809_);
v___x_1823_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
lean_object* v___x_1825_; 
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 1, v___x_1823_);
v___x_1825_ = v___x_1820_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1817_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v___x_1823_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1840_; 
v_a_1829_ = lean_ctor_get(v___x_1816_, 0);
v_a_1830_ = lean_ctor_get(v___x_1816_, 1);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1832_ = v___x_1816_;
v_isShared_1833_ = v_isSharedCheck_1840_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_inc(v_a_1829_);
lean_dec(v___x_1816_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1840_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1835_; 
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v_a_1830_);
v___x_1835_ = v___x_1813_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1830_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v_trace_1810_);
lean_ctor_set(v_reuseFailAlloc_1839_, 2, v_buildTime_1811_);
lean_ctor_set_uint8(v_reuseFailAlloc_1839_, sizeof(void*)*3, v_action_1807_);
lean_ctor_set_uint8(v_reuseFailAlloc_1839_, sizeof(void*)*3 + 1, v_wantsRebuild_1808_);
lean_ctor_set_uint8(v_reuseFailAlloc_1839_, sizeof(void*)*3 + 2, v_canceled_1809_);
v___x_1835_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
lean_object* v___x_1837_; 
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 1, v___x_1835_);
v___x_1837_ = v___x_1832_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1829_);
lean_ctor_set(v_reuseFailAlloc_1838_, 1, v___x_1835_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
}
}
else
{
uint8_t v___x_1842_; 
v___x_1842_ = l_System_Platform_isOSX;
if (v___x_1842_ == 0)
{
uint8_t v___x_1843_; 
v___x_1843_ = l_System_Platform_isWindows;
if (v___x_1843_ == 0)
{
lean_object* v_toContext_1844_; lean_object* v_lakeEnv_1845_; lean_object* v_lean_1846_; lean_object* v_log_1847_; uint8_t v_action_1848_; uint8_t v_wantsRebuild_1849_; uint8_t v_canceled_1850_; lean_object* v_trace_1851_; lean_object* v_buildTime_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1882_; 
v_toContext_1844_ = lean_ctor_get(v___y_1800_, 1);
v_lakeEnv_1845_ = lean_ctor_get(v_toContext_1844_, 0);
v_lean_1846_ = lean_ctor_get(v_lakeEnv_1845_, 1);
v_log_1847_ = lean_ctor_get(v___y_1801_, 0);
v_action_1848_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3);
v_wantsRebuild_1849_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3 + 1);
v_canceled_1850_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3 + 2);
v_trace_1851_ = lean_ctor_get(v___y_1801_, 1);
v_buildTime_1852_ = lean_ctor_get(v___y_1801_, 2);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___y_1801_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1854_ = v___y_1801_;
v_isShared_1855_ = v_isSharedCheck_1882_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_buildTime_1852_);
lean_inc(v_trace_1851_);
lean_inc(v_log_1847_);
lean_dec(v___y_1801_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1882_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v_ar_1856_; lean_object* v___x_1857_; 
v_ar_1856_ = lean_ctor_get(v_lean_1846_, 13);
lean_inc_ref(v_ar_1856_);
v___x_1857_ = l_Lake_compileStaticLib(v___y_1792_, v_oFiles_1793_, v_ar_1856_, v___x_1843_, v_log_1847_);
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v_a_1858_; lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1869_; 
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
v_a_1859_ = lean_ctor_get(v___x_1857_, 1);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1861_ = v___x_1857_;
v_isShared_1862_ = v_isSharedCheck_1869_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_inc(v_a_1858_);
lean_dec(v___x_1857_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1869_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 0, v_a_1859_);
v___x_1864_ = v___x_1854_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1859_);
lean_ctor_set(v_reuseFailAlloc_1868_, 1, v_trace_1851_);
lean_ctor_set(v_reuseFailAlloc_1868_, 2, v_buildTime_1852_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*3, v_action_1848_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*3 + 1, v_wantsRebuild_1849_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*3 + 2, v_canceled_1850_);
v___x_1864_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
lean_object* v___x_1866_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 1, v___x_1864_);
v___x_1866_ = v___x_1861_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_a_1858_);
lean_ctor_set(v_reuseFailAlloc_1867_, 1, v___x_1864_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
}
else
{
lean_object* v_a_1870_; lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1881_; 
v_a_1870_ = lean_ctor_get(v___x_1857_, 0);
v_a_1871_ = lean_ctor_get(v___x_1857_, 1);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1873_ = v___x_1857_;
v_isShared_1874_ = v_isSharedCheck_1881_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_inc(v_a_1870_);
lean_dec(v___x_1857_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1881_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 0, v_a_1871_);
v___x_1876_ = v___x_1854_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_a_1871_);
lean_ctor_set(v_reuseFailAlloc_1880_, 1, v_trace_1851_);
lean_ctor_set(v_reuseFailAlloc_1880_, 2, v_buildTime_1852_);
lean_ctor_set_uint8(v_reuseFailAlloc_1880_, sizeof(void*)*3, v_action_1848_);
lean_ctor_set_uint8(v_reuseFailAlloc_1880_, sizeof(void*)*3 + 1, v_wantsRebuild_1849_);
lean_ctor_set_uint8(v_reuseFailAlloc_1880_, sizeof(void*)*3 + 2, v_canceled_1850_);
v___x_1876_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
lean_object* v___x_1878_; 
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 1, v___x_1876_);
v___x_1878_ = v___x_1873_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1870_);
lean_ctor_set(v_reuseFailAlloc_1879_, 1, v___x_1876_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
}
}
}
else
{
lean_object* v_toContext_1883_; lean_object* v_lakeEnv_1884_; lean_object* v_lean_1885_; lean_object* v_log_1886_; uint8_t v_action_1887_; uint8_t v_wantsRebuild_1888_; uint8_t v_canceled_1889_; lean_object* v_trace_1890_; lean_object* v_buildTime_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1921_; 
v_toContext_1883_ = lean_ctor_get(v___y_1800_, 1);
v_lakeEnv_1884_ = lean_ctor_get(v_toContext_1883_, 0);
v_lean_1885_ = lean_ctor_get(v_lakeEnv_1884_, 1);
v_log_1886_ = lean_ctor_get(v___y_1801_, 0);
v_action_1887_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3);
v_wantsRebuild_1888_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3 + 1);
v_canceled_1889_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3 + 2);
v_trace_1890_ = lean_ctor_get(v___y_1801_, 1);
v_buildTime_1891_ = lean_ctor_get(v___y_1801_, 2);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___y_1801_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1893_ = v___y_1801_;
v_isShared_1894_ = v_isSharedCheck_1921_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_buildTime_1891_);
lean_inc(v_trace_1890_);
lean_inc(v_log_1886_);
lean_dec(v___y_1801_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1921_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v_ar_1895_; lean_object* v___x_1896_; 
v_ar_1895_ = lean_ctor_get(v_lean_1885_, 13);
lean_inc_ref(v_ar_1895_);
v___x_1896_ = l_Lake_compileStaticLib(v___y_1792_, v_oFiles_1793_, v_ar_1895_, v_shouldExport_1794_, v_log_1886_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1908_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
v_a_1898_ = lean_ctor_get(v___x_1896_, 1);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1900_ = v___x_1896_;
v_isShared_1901_ = v_isSharedCheck_1908_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_inc(v_a_1897_);
lean_dec(v___x_1896_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1908_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1903_; 
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 0, v_a_1898_);
v___x_1903_ = v___x_1893_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1898_);
lean_ctor_set(v_reuseFailAlloc_1907_, 1, v_trace_1890_);
lean_ctor_set(v_reuseFailAlloc_1907_, 2, v_buildTime_1891_);
lean_ctor_set_uint8(v_reuseFailAlloc_1907_, sizeof(void*)*3, v_action_1887_);
lean_ctor_set_uint8(v_reuseFailAlloc_1907_, sizeof(void*)*3 + 1, v_wantsRebuild_1888_);
lean_ctor_set_uint8(v_reuseFailAlloc_1907_, sizeof(void*)*3 + 2, v_canceled_1889_);
v___x_1903_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
lean_object* v___x_1905_; 
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 1, v___x_1903_);
v___x_1905_ = v___x_1900_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_a_1897_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v___x_1903_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
else
{
lean_object* v_a_1909_; lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1920_; 
v_a_1909_ = lean_ctor_get(v___x_1896_, 0);
v_a_1910_ = lean_ctor_get(v___x_1896_, 1);
v_isSharedCheck_1920_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1912_ = v___x_1896_;
v_isShared_1913_ = v_isSharedCheck_1920_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_inc(v_a_1909_);
lean_dec(v___x_1896_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1920_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 0, v_a_1910_);
v___x_1915_ = v___x_1893_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_a_1910_);
lean_ctor_set(v_reuseFailAlloc_1919_, 1, v_trace_1890_);
lean_ctor_set(v_reuseFailAlloc_1919_, 2, v_buildTime_1891_);
lean_ctor_set_uint8(v_reuseFailAlloc_1919_, sizeof(void*)*3, v_action_1887_);
lean_ctor_set_uint8(v_reuseFailAlloc_1919_, sizeof(void*)*3 + 1, v_wantsRebuild_1888_);
lean_ctor_set_uint8(v_reuseFailAlloc_1919_, sizeof(void*)*3 + 2, v_canceled_1889_);
v___x_1915_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
lean_object* v___x_1917_; 
if (v_isShared_1913_ == 0)
{
lean_ctor_set(v___x_1912_, 1, v___x_1915_);
v___x_1917_ = v___x_1912_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1909_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v___x_1915_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
}
}
}
}
else
{
lean_object* v_log_1922_; uint8_t v_action_1923_; uint8_t v_wantsRebuild_1924_; uint8_t v_canceled_1925_; lean_object* v_trace_1926_; lean_object* v_buildTime_1927_; lean_object* v___x_1928_; 
v_log_1922_ = lean_ctor_get(v___y_1801_, 0);
v_action_1923_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3);
v_wantsRebuild_1924_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3 + 1);
v_canceled_1925_ = lean_ctor_get_uint8(v___y_1801_, sizeof(void*)*3 + 2);
v_trace_1926_ = lean_ctor_get(v___y_1801_, 1);
v_buildTime_1927_ = lean_ctor_get(v___y_1801_, 2);
lean_inc_ref(v___y_1792_);
v___x_1928_ = l_Lake_createParentDirs(v___y_1792_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v_a_1932_; uint8_t v___x_1981_; lean_object* v___x_1982_; 
lean_dec_ref_known(v___x_1928_, 1);
v___x_1929_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0));
lean_inc_ref(v___y_1792_);
v___x_1930_ = l_System_FilePath_addExtension(v___y_1792_, v___x_1929_);
v___x_1981_ = 1;
v___x_1982_ = lean_io_prim_handle_mk(v___x_1930_, v___x_1981_);
if (lean_obj_tag(v___x_1982_) == 0)
{
lean_object* v_a_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; uint8_t v___x_1986_; 
v_a_1983_ = lean_ctor_get(v___x_1982_, 0);
lean_inc(v_a_1983_);
lean_dec_ref_known(v___x_1982_, 1);
v___x_1984_ = lean_unsigned_to_nat(0u);
v___x_1985_ = lean_array_get_size(v_oFiles_1793_);
v___x_1986_ = lean_nat_dec_lt(v___x_1984_, v___x_1985_);
if (v___x_1986_ == 0)
{
lean_dec(v_a_1983_);
lean_dec_ref(v_oFiles_1793_);
v_a_1932_ = v___y_1801_;
goto v___jp_1931_;
}
else
{
lean_object* v___x_1987_; size_t v___x_1988_; lean_object* v___x_1989_; 
v___x_1987_ = lean_box(0);
v___x_1988_ = lean_usize_of_nat(v___x_1985_);
v___x_1989_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1983_, v_oFiles_1793_, v___x_1795_, v___x_1988_, v___x_1987_, v___y_1801_);
lean_dec_ref(v_oFiles_1793_);
lean_dec(v_a_1983_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 1);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 2);
v_a_1932_ = v_a_1990_;
goto v___jp_1931_;
}
else
{
lean_dec_ref(v___x_1930_);
lean_dec_ref(v___y_1792_);
return v___x_1989_;
}
}
}
else
{
lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_2004_; 
lean_inc(v_buildTime_1927_);
lean_inc_ref(v_trace_1926_);
lean_inc_ref(v_log_1922_);
lean_dec_ref(v___x_1930_);
lean_dec_ref(v_oFiles_1793_);
lean_dec_ref(v___y_1792_);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___y_1801_);
if (v_isSharedCheck_2004_ == 0)
{
lean_object* v_unused_2005_; lean_object* v_unused_2006_; lean_object* v_unused_2007_; 
v_unused_2005_ = lean_ctor_get(v___y_1801_, 2);
lean_dec(v_unused_2005_);
v_unused_2006_ = lean_ctor_get(v___y_1801_, 1);
lean_dec(v_unused_2006_);
v_unused_2007_ = lean_ctor_get(v___y_1801_, 0);
lean_dec(v_unused_2007_);
v___x_1992_ = v___y_1801_;
v_isShared_1993_ = v_isSharedCheck_2004_;
goto v_resetjp_1991_;
}
else
{
lean_dec(v___y_1801_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_2004_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v_a_1994_; lean_object* v___x_1995_; uint8_t v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2001_; 
v_a_1994_ = lean_ctor_get(v___x_1982_, 0);
lean_inc(v_a_1994_);
lean_dec_ref_known(v___x_1982_, 1);
v___x_1995_ = lean_io_error_to_string(v_a_1994_);
v___x_1996_ = 3;
v___x_1997_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1997_, 0, v___x_1995_);
lean_ctor_set_uint8(v___x_1997_, sizeof(void*)*1, v___x_1996_);
v___x_1998_ = lean_array_get_size(v_log_1922_);
v___x_1999_ = lean_array_push(v_log_1922_, v___x_1997_);
if (v_isShared_1993_ == 0)
{
lean_ctor_set(v___x_1992_, 0, v___x_1999_);
v___x_2001_ = v___x_1992_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v___x_1999_);
lean_ctor_set(v_reuseFailAlloc_2003_, 1, v_trace_1926_);
lean_ctor_set(v_reuseFailAlloc_2003_, 2, v_buildTime_1927_);
lean_ctor_set_uint8(v_reuseFailAlloc_2003_, sizeof(void*)*3, v_action_1923_);
lean_ctor_set_uint8(v_reuseFailAlloc_2003_, sizeof(void*)*3 + 1, v_wantsRebuild_1924_);
lean_ctor_set_uint8(v_reuseFailAlloc_2003_, sizeof(void*)*3 + 2, v_canceled_1925_);
v___x_2001_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
lean_object* v___x_2002_; 
v___x_2002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2002_, 0, v___x_1998_);
lean_ctor_set(v___x_2002_, 1, v___x_2001_);
return v___x_2002_;
}
}
}
v___jp_1931_:
{
lean_object* v___x_1933_; lean_object* v_log_1934_; uint8_t v_action_1935_; uint8_t v_wantsRebuild_1936_; uint8_t v_canceled_1937_; lean_object* v_trace_1938_; lean_object* v_buildTime_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1980_; 
v___x_1933_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1));
v_log_1934_ = lean_ctor_get(v_a_1932_, 0);
v_action_1935_ = lean_ctor_get_uint8(v_a_1932_, sizeof(void*)*3);
v_wantsRebuild_1936_ = lean_ctor_get_uint8(v_a_1932_, sizeof(void*)*3 + 1);
v_canceled_1937_ = lean_ctor_get_uint8(v_a_1932_, sizeof(void*)*3 + 2);
v_trace_1938_ = lean_ctor_get(v_a_1932_, 1);
v_buildTime_1939_ = lean_ctor_get(v_a_1932_, 2);
v_isSharedCheck_1980_ = !lean_is_exclusive(v_a_1932_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1941_ = v_a_1932_;
v_isShared_1942_ = v_isSharedCheck_1980_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_buildTime_1939_);
lean_inc(v_trace_1938_);
lean_inc(v_log_1934_);
lean_dec(v_a_1932_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1980_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; uint8_t v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1943_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2));
v___x_1944_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5));
v___x_1945_ = lean_unsigned_to_nat(5u);
v___x_1946_ = lean_mk_empty_array_with_capacity(v___x_1945_);
lean_dec_ref(v___x_1946_);
v___x_1947_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7);
v___x_1948_ = lean_array_push(v___x_1947_, v___y_1792_);
v___x_1949_ = lean_array_push(v___x_1948_, v___x_1944_);
v___x_1950_ = lean_array_push(v___x_1949_, v___x_1930_);
v___x_1951_ = lean_box(0);
v___x_1952_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8));
v___x_1953_ = 0;
v___x_1954_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1954_, 0, v___x_1933_);
lean_ctor_set(v___x_1954_, 1, v___x_1943_);
lean_ctor_set(v___x_1954_, 2, v___x_1950_);
lean_ctor_set(v___x_1954_, 3, v___x_1951_);
lean_ctor_set(v___x_1954_, 4, v___x_1952_);
lean_ctor_set_uint8(v___x_1954_, sizeof(void*)*5, v___x_1842_);
lean_ctor_set_uint8(v___x_1954_, sizeof(void*)*5 + 1, v___x_1953_);
v___x_1955_ = l_Lake_proc(v___x_1954_, v___x_1953_, v___x_1951_, v_log_1934_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1967_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
v_a_1957_ = lean_ctor_get(v___x_1955_, 1);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1959_ = v___x_1955_;
v_isShared_1960_ = v_isSharedCheck_1967_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_inc(v_a_1956_);
lean_dec(v___x_1955_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1967_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 0, v_a_1957_);
v___x_1962_ = v___x_1941_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_a_1957_);
lean_ctor_set(v_reuseFailAlloc_1966_, 1, v_trace_1938_);
lean_ctor_set(v_reuseFailAlloc_1966_, 2, v_buildTime_1939_);
lean_ctor_set_uint8(v_reuseFailAlloc_1966_, sizeof(void*)*3, v_action_1935_);
lean_ctor_set_uint8(v_reuseFailAlloc_1966_, sizeof(void*)*3 + 1, v_wantsRebuild_1936_);
lean_ctor_set_uint8(v_reuseFailAlloc_1966_, sizeof(void*)*3 + 2, v_canceled_1937_);
v___x_1962_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
lean_object* v___x_1964_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v___x_1962_);
v___x_1964_ = v___x_1959_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v_a_1956_);
lean_ctor_set(v_reuseFailAlloc_1965_, 1, v___x_1962_);
v___x_1964_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
return v___x_1964_;
}
}
}
}
else
{
lean_object* v_a_1968_; lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1979_; 
v_a_1968_ = lean_ctor_get(v___x_1955_, 0);
v_a_1969_ = lean_ctor_get(v___x_1955_, 1);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1971_ = v___x_1955_;
v_isShared_1972_ = v_isSharedCheck_1979_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_inc(v_a_1968_);
lean_dec(v___x_1955_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1979_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 0, v_a_1969_);
v___x_1974_ = v___x_1941_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_a_1969_);
lean_ctor_set(v_reuseFailAlloc_1978_, 1, v_trace_1938_);
lean_ctor_set(v_reuseFailAlloc_1978_, 2, v_buildTime_1939_);
lean_ctor_set_uint8(v_reuseFailAlloc_1978_, sizeof(void*)*3, v_action_1935_);
lean_ctor_set_uint8(v_reuseFailAlloc_1978_, sizeof(void*)*3 + 1, v_wantsRebuild_1936_);
lean_ctor_set_uint8(v_reuseFailAlloc_1978_, sizeof(void*)*3 + 2, v_canceled_1937_);
v___x_1974_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
lean_object* v___x_1976_; 
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 1, v___x_1974_);
v___x_1976_ = v___x_1971_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_a_1968_);
lean_ctor_set(v_reuseFailAlloc_1977_, 1, v___x_1974_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2021_; 
lean_inc(v_buildTime_1927_);
lean_inc_ref(v_trace_1926_);
lean_inc_ref(v_log_1922_);
lean_dec_ref(v_oFiles_1793_);
lean_dec_ref(v___y_1792_);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___y_1801_);
if (v_isSharedCheck_2021_ == 0)
{
lean_object* v_unused_2022_; lean_object* v_unused_2023_; lean_object* v_unused_2024_; 
v_unused_2022_ = lean_ctor_get(v___y_1801_, 2);
lean_dec(v_unused_2022_);
v_unused_2023_ = lean_ctor_get(v___y_1801_, 1);
lean_dec(v_unused_2023_);
v_unused_2024_ = lean_ctor_get(v___y_1801_, 0);
lean_dec(v_unused_2024_);
v___x_2009_ = v___y_1801_;
v_isShared_2010_ = v_isSharedCheck_2021_;
goto v_resetjp_2008_;
}
else
{
lean_dec(v___y_1801_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2021_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v_a_2011_; lean_object* v___x_2012_; uint8_t v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2018_; 
v_a_2011_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_2011_);
lean_dec_ref_known(v___x_1928_, 1);
v___x_2012_ = lean_io_error_to_string(v_a_2011_);
v___x_2013_ = 3;
v___x_2014_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2014_, 0, v___x_2012_);
lean_ctor_set_uint8(v___x_2014_, sizeof(void*)*1, v___x_2013_);
v___x_2015_ = lean_array_get_size(v_log_1922_);
v___x_2016_ = lean_array_push(v_log_1922_, v___x_2014_);
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 0, v___x_2016_);
v___x_2018_ = v___x_2009_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v___x_2016_);
lean_ctor_set(v_reuseFailAlloc_2020_, 1, v_trace_1926_);
lean_ctor_set(v_reuseFailAlloc_2020_, 2, v_buildTime_1927_);
lean_ctor_set_uint8(v_reuseFailAlloc_2020_, sizeof(void*)*3, v_action_1923_);
lean_ctor_set_uint8(v_reuseFailAlloc_2020_, sizeof(void*)*3 + 1, v_wantsRebuild_1924_);
lean_ctor_set_uint8(v_reuseFailAlloc_2020_, sizeof(void*)*3 + 2, v_canceled_1925_);
v___x_2018_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
lean_object* v___x_2019_; 
v___x_2019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2015_);
lean_ctor_set(v___x_2019_, 1, v___x_2018_);
return v___x_2019_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed(lean_object* v_bootstrap_2025_, lean_object* v___y_2026_, lean_object* v_oFiles_2027_, lean_object* v_shouldExport_2028_, lean_object* v___x_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
uint8_t v_bootstrap_boxed_2037_; uint8_t v_shouldExport_boxed_2038_; size_t v___x_5830__boxed_2039_; lean_object* v_res_2040_; 
v_bootstrap_boxed_2037_ = lean_unbox(v_bootstrap_2025_);
v_shouldExport_boxed_2038_ = lean_unbox(v_shouldExport_2028_);
v___x_5830__boxed_2039_ = lean_unbox_usize(v___x_2029_);
lean_dec(v___x_2029_);
v_res_2040_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(v_bootstrap_boxed_2037_, v___y_2026_, v_oFiles_2027_, v_shouldExport_boxed_2038_, v___x_5830__boxed_2039_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec(v___y_2032_);
lean_dec(v___y_2031_);
lean_dec_ref(v___y_2030_);
return v_res_2040_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(uint8_t v_bootstrap_2041_, lean_object* v___y_2042_, uint8_t v_shouldExport_2043_, size_t v___x_2044_, uint8_t v___x_2045_, lean_object* v_oFiles_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___y_2057_; uint8_t v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2054_ = lean_box(v_bootstrap_2041_);
v___x_2055_ = lean_box(v_shouldExport_2043_);
v___x_2056_ = lean_box_usize(v___x_2044_);
lean_inc_ref(v___y_2042_);
v___y_2057_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed), 12, 5);
lean_closure_set(v___y_2057_, 0, v___x_2054_);
lean_closure_set(v___y_2057_, 1, v___y_2042_);
lean_closure_set(v___y_2057_, 2, v_oFiles_2046_);
lean_closure_set(v___y_2057_, 3, v___x_2055_);
lean_closure_set(v___y_2057_, 4, v___x_2056_);
v___x_2058_ = 0;
v___x_2059_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0));
v___x_2060_ = l_Lake_buildArtifactUnlessUpToDate(v___y_2042_, v___y_2057_, v___x_2058_, v___x_2059_, v___x_2045_, v___x_2058_, v___x_2058_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2070_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
v_a_2062_ = lean_ctor_get(v___x_2060_, 1);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2064_ = v___x_2060_;
v_isShared_2065_ = v_isSharedCheck_2070_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_inc(v_a_2061_);
lean_dec(v___x_2060_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2070_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v_path_2066_; lean_object* v___x_2068_; 
v_path_2066_ = lean_ctor_get(v_a_2061_, 1);
lean_inc_ref(v_path_2066_);
lean_dec(v_a_2061_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 0, v_path_2066_);
v___x_2068_ = v___x_2064_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_path_2066_);
lean_ctor_set(v_reuseFailAlloc_2069_, 1, v_a_2062_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
else
{
lean_object* v_a_2071_; lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
v_a_2071_ = lean_ctor_get(v___x_2060_, 0);
v_a_2072_ = lean_ctor_get(v___x_2060_, 1);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2060_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_inc(v_a_2071_);
lean_dec(v___x_2060_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2071_);
lean_ctor_set(v_reuseFailAlloc_2078_, 1, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed(lean_object* v_bootstrap_2080_, lean_object* v___y_2081_, lean_object* v_shouldExport_2082_, lean_object* v___x_2083_, lean_object* v___x_2084_, lean_object* v_oFiles_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
uint8_t v_bootstrap_boxed_2093_; uint8_t v_shouldExport_boxed_2094_; size_t v___x_6227__boxed_2095_; uint8_t v___x_6228__boxed_2096_; lean_object* v_res_2097_; 
v_bootstrap_boxed_2093_ = lean_unbox(v_bootstrap_2080_);
v_shouldExport_boxed_2094_ = lean_unbox(v_shouldExport_2082_);
v___x_6227__boxed_2095_ = lean_unbox_usize(v___x_2083_);
lean_dec(v___x_2083_);
v___x_6228__boxed_2096_ = lean_unbox(v___x_2084_);
v_res_2097_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(v_bootstrap_boxed_2093_, v___y_2081_, v_shouldExport_boxed_2094_, v___x_6227__boxed_2095_, v___x_6228__boxed_2096_, v_oFiles_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
lean_dec_ref(v___y_2090_);
lean_dec(v___y_2089_);
lean_dec(v___y_2088_);
lean_dec(v___y_2087_);
return v_res_2097_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(lean_object* v_a_2098_, size_t v_sz_2099_, size_t v_i_2100_, lean_object* v_bs_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_){
_start:
{
uint8_t v___x_2109_; 
v___x_2109_ = lean_usize_dec_lt(v_i_2100_, v_sz_2099_);
if (v___x_2109_ == 0)
{
lean_object* v___x_2110_; 
lean_dec_ref(v___y_2102_);
lean_dec_ref(v_a_2098_);
v___x_2110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2110_, 0, v_bs_2101_);
lean_ctor_set(v___x_2110_, 1, v___y_2107_);
return v___x_2110_;
}
else
{
lean_object* v_v_2111_; lean_object* v___x_2112_; lean_object* v_bs_x27_2113_; lean_object* v___x_2114_; 
v_v_2111_ = lean_array_uget(v_bs_2101_, v_i_2100_);
v___x_2112_ = lean_unsigned_to_nat(0u);
v_bs_x27_2113_ = lean_array_uset(v_bs_2101_, v_i_2100_, v___x_2112_);
lean_inc_ref(v___y_2102_);
lean_inc_ref(v_a_2098_);
v___x_2114_ = l_Lake_ModuleFacet_fetch___redArg(v_v_2111_, v_a_2098_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v_a_2115_; lean_object* v_a_2116_; size_t v___x_2117_; size_t v___x_2118_; lean_object* v___x_2119_; 
v_a_2115_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_a_2115_);
v_a_2116_ = lean_ctor_get(v___x_2114_, 1);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2114_, 2);
v___x_2117_ = ((size_t)1ULL);
v___x_2118_ = lean_usize_add(v_i_2100_, v___x_2117_);
v___x_2119_ = lean_array_uset(v_bs_x27_2113_, v_i_2100_, v_a_2115_);
v_i_2100_ = v___x_2118_;
v_bs_2101_ = v___x_2119_;
v___y_2107_ = v_a_2116_;
goto _start;
}
else
{
lean_object* v_a_2121_; lean_object* v_a_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2129_; 
lean_dec_ref(v_bs_x27_2113_);
lean_dec_ref(v___y_2102_);
lean_dec_ref(v_a_2098_);
v_a_2121_ = lean_ctor_get(v___x_2114_, 0);
v_a_2122_ = lean_ctor_get(v___x_2114_, 1);
v_isSharedCheck_2129_ = !lean_is_exclusive(v___x_2114_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2124_ = v___x_2114_;
v_isShared_2125_ = v_isSharedCheck_2129_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_a_2122_);
lean_inc(v_a_2121_);
lean_dec(v___x_2114_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2129_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2127_; 
if (v_isShared_2125_ == 0)
{
v___x_2127_ = v___x_2124_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v_a_2121_);
lean_ctor_set(v_reuseFailAlloc_2128_, 1, v_a_2122_);
v___x_2127_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
return v___x_2127_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0___boxed(lean_object* v_a_2130_, lean_object* v_sz_2131_, lean_object* v_i_2132_, lean_object* v_bs_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_){
_start:
{
size_t v_sz_boxed_2141_; size_t v_i_boxed_2142_; lean_object* v_res_2143_; 
v_sz_boxed_2141_ = lean_unbox_usize(v_sz_2131_);
lean_dec(v_sz_2131_);
v_i_boxed_2142_ = lean_unbox_usize(v_i_2132_);
lean_dec(v_i_2132_);
v_res_2143_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v_a_2130_, v_sz_boxed_2141_, v_i_boxed_2142_, v_bs_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec(v___y_2136_);
lean_dec(v___y_2135_);
return v_res_2143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(uint8_t v_shouldExport_2144_, lean_object* v_as_2145_, size_t v_i_2146_, size_t v_stop_2147_, lean_object* v_b_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_){
_start:
{
uint8_t v___x_2156_; 
v___x_2156_ = lean_usize_dec_eq(v_i_2146_, v_stop_2147_);
if (v___x_2156_ == 0)
{
lean_object* v___x_2157_; lean_object* v_lib_2158_; lean_object* v_config_2159_; lean_object* v_nativeFacets_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; size_t v_sz_2163_; size_t v___x_2164_; lean_object* v___x_2165_; 
v___x_2157_ = lean_array_uget_borrowed(v_as_2145_, v_i_2146_);
v_lib_2158_ = lean_ctor_get(v___x_2157_, 0);
v_config_2159_ = lean_ctor_get(v_lib_2158_, 2);
v_nativeFacets_2160_ = lean_ctor_get(v_config_2159_, 8);
v___x_2161_ = lean_box(v_shouldExport_2144_);
lean_inc_ref(v_nativeFacets_2160_);
v___x_2162_ = lean_apply_1(v_nativeFacets_2160_, v___x_2161_);
v_sz_2163_ = lean_array_size(v___x_2162_);
v___x_2164_ = ((size_t)0ULL);
lean_inc_ref(v___y_2149_);
lean_inc(v___x_2157_);
v___x_2165_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v___x_2157_, v_sz_2163_, v___x_2164_, v___x_2162_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_);
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_object* v_a_2166_; lean_object* v_a_2167_; lean_object* v___x_2168_; size_t v___x_2169_; size_t v___x_2170_; 
v_a_2166_ = lean_ctor_get(v___x_2165_, 0);
lean_inc(v_a_2166_);
v_a_2167_ = lean_ctor_get(v___x_2165_, 1);
lean_inc(v_a_2167_);
lean_dec_ref_known(v___x_2165_, 2);
v___x_2168_ = l_Array_append___redArg(v_b_2148_, v_a_2166_);
lean_dec(v_a_2166_);
v___x_2169_ = ((size_t)1ULL);
v___x_2170_ = lean_usize_add(v_i_2146_, v___x_2169_);
v_i_2146_ = v___x_2170_;
v_b_2148_ = v___x_2168_;
v___y_2154_ = v_a_2167_;
goto _start;
}
else
{
lean_dec_ref(v___y_2149_);
lean_dec_ref(v_b_2148_);
return v___x_2165_;
}
}
else
{
lean_object* v___x_2172_; 
lean_dec_ref(v___y_2149_);
v___x_2172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2172_, 0, v_b_2148_);
lean_ctor_set(v___x_2172_, 1, v___y_2154_);
return v___x_2172_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed(lean_object* v_shouldExport_2173_, lean_object* v_as_2174_, lean_object* v_i_2175_, lean_object* v_stop_2176_, lean_object* v_b_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
uint8_t v_shouldExport_boxed_2185_; size_t v_i_boxed_2186_; size_t v_stop_boxed_2187_; lean_object* v_res_2188_; 
v_shouldExport_boxed_2185_ = lean_unbox(v_shouldExport_2173_);
v_i_boxed_2186_ = lean_unbox_usize(v_i_2175_);
lean_dec(v_i_2175_);
v_stop_boxed_2187_ = lean_unbox_usize(v_stop_2176_);
lean_dec(v_stop_2176_);
v_res_2188_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_boxed_2185_, v_as_2174_, v_i_boxed_2186_, v_stop_boxed_2187_, v_b_2177_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_);
lean_dec_ref(v___y_2182_);
lean_dec(v___y_2181_);
lean_dec(v___y_2180_);
lean_dec(v___y_2179_);
lean_dec_ref(v_as_2174_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(lean_object* v_config_2189_, lean_object* v_config_2190_, uint8_t v_shouldExport_2191_, uint8_t v___x_2192_, lean_object* v___x_2193_, lean_object* v___x_2194_, lean_object* v_pkg_2195_, lean_object* v_dir_2196_, lean_object* v_self_2197_, lean_object* v___x_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_){
_start:
{
size_t v___y_2207_; uint8_t v___y_2208_; lean_object* v___y_2209_; lean_object* v___y_2210_; lean_object* v___y_2211_; lean_object* v___y_2212_; lean_object* v_a_2227_; lean_object* v_a_2228_; lean_object* v___x_2270_; 
lean_inc_ref(v___y_2199_);
lean_inc_ref(v___y_2203_);
lean_inc(v___y_2202_);
lean_inc(v___y_2201_);
lean_inc(v___x_2194_);
v___x_2270_ = lean_apply_7(v___y_2199_, v___x_2198_, v___x_2194_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_, lean_box(0));
if (lean_obj_tag(v___x_2270_) == 0)
{
lean_object* v_a_2271_; lean_object* v_a_2272_; lean_object* v___x_2273_; 
v_a_2271_ = lean_ctor_get(v___x_2270_, 0);
lean_inc(v_a_2271_);
v_a_2272_ = lean_ctor_get(v___x_2270_, 1);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2270_, 2);
v___x_2273_ = l_Lake_Job_await___redArg(v_a_2271_, v_a_2272_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; lean_object* v_a_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; uint8_t v___x_2279_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_a_2274_);
v_a_2275_ = lean_ctor_get(v___x_2273_, 1);
lean_inc(v_a_2275_);
lean_dec_ref_known(v___x_2273_, 2);
v___x_2276_ = lean_unsigned_to_nat(0u);
v___x_2277_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_2278_ = lean_array_get_size(v_a_2274_);
v___x_2279_ = lean_nat_dec_lt(v___x_2276_, v___x_2278_);
if (v___x_2279_ == 0)
{
lean_dec(v_a_2274_);
v_a_2227_ = v___x_2277_;
v_a_2228_ = v_a_2275_;
goto v___jp_2226_;
}
else
{
size_t v___x_2280_; size_t v___x_2281_; lean_object* v___x_2282_; 
v___x_2280_ = ((size_t)0ULL);
v___x_2281_ = lean_usize_of_nat(v___x_2278_);
lean_inc_ref(v___y_2199_);
v___x_2282_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_2191_, v_a_2274_, v___x_2280_, v___x_2281_, v___x_2277_, v___y_2199_, v___x_2194_, v___y_2201_, v___y_2202_, v___y_2203_, v_a_2275_);
lean_dec(v_a_2274_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; lean_object* v_a_2284_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
v_a_2284_ = lean_ctor_get(v___x_2282_, 1);
lean_inc(v_a_2284_);
lean_dec_ref_known(v___x_2282_, 2);
v_a_2227_ = v_a_2283_;
v_a_2228_ = v_a_2284_;
goto v___jp_2226_;
}
else
{
lean_object* v_a_2285_; lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_dec_ref(v___y_2199_);
lean_dec_ref(v_self_2197_);
lean_dec_ref(v_dir_2196_);
lean_dec_ref(v_pkg_2195_);
lean_dec(v___x_2194_);
lean_dec(v___x_2193_);
lean_dec_ref(v_config_2189_);
v_a_2285_ = lean_ctor_get(v___x_2282_, 0);
v_a_2286_ = lean_ctor_get(v___x_2282_, 1);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2282_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_inc(v_a_2285_);
lean_dec(v___x_2282_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2291_; 
if (v_isShared_2289_ == 0)
{
v___x_2291_ = v___x_2288_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2285_);
lean_ctor_set(v_reuseFailAlloc_2292_, 1, v_a_2286_);
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
}
else
{
lean_object* v_a_2294_; lean_object* v_a_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2302_; 
lean_dec_ref(v___y_2199_);
lean_dec_ref(v_self_2197_);
lean_dec_ref(v_dir_2196_);
lean_dec_ref(v_pkg_2195_);
lean_dec(v___x_2194_);
lean_dec(v___x_2193_);
lean_dec_ref(v_config_2189_);
v_a_2294_ = lean_ctor_get(v___x_2273_, 0);
v_a_2295_ = lean_ctor_get(v___x_2273_, 1);
v_isSharedCheck_2302_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2297_ = v___x_2273_;
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_a_2295_);
lean_inc(v_a_2294_);
lean_dec(v___x_2273_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2300_; 
if (v_isShared_2298_ == 0)
{
v___x_2300_ = v___x_2297_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_a_2294_);
lean_ctor_set(v_reuseFailAlloc_2301_, 1, v_a_2295_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
}
else
{
lean_object* v_a_2303_; lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2311_; 
lean_dec_ref(v___y_2199_);
lean_dec_ref(v_self_2197_);
lean_dec_ref(v_dir_2196_);
lean_dec_ref(v_pkg_2195_);
lean_dec(v___x_2194_);
lean_dec(v___x_2193_);
lean_dec_ref(v_config_2189_);
v_a_2303_ = lean_ctor_get(v___x_2270_, 0);
v_a_2304_ = lean_ctor_get(v___x_2270_, 1);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2270_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2306_ = v___x_2270_;
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_inc(v_a_2303_);
lean_dec(v___x_2270_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2309_; 
if (v_isShared_2307_ == 0)
{
v___x_2309_ = v___x_2306_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_a_2303_);
lean_ctor_set(v_reuseFailAlloc_2310_, 1, v_a_2304_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
}
v___jp_2206_:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___f_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; uint8_t v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2213_ = lean_box(v___y_2208_);
v___x_2214_ = lean_box(v_shouldExport_2191_);
v___x_2215_ = lean_box_usize(v___y_2207_);
v___x_2216_ = lean_box(v___x_2192_);
v___f_2217_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed), 13, 5);
lean_closure_set(v___f_2217_, 0, v___x_2213_);
lean_closure_set(v___f_2217_, 1, v___y_2212_);
lean_closure_set(v___f_2217_, 2, v___x_2214_);
lean_closure_set(v___f_2217_, 3, v___x_2215_);
lean_closure_set(v___f_2217_, 4, v___x_2216_);
v___x_2218_ = l_Array_append___redArg(v___y_2209_, v___y_2210_);
lean_dec_ref(v___y_2210_);
v___x_2219_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0));
v___x_2220_ = l_Lake_Job_collectArray___redArg(v___x_2218_, v___x_2219_);
lean_dec_ref(v___x_2218_);
v___x_2221_ = lean_unsigned_to_nat(0u);
v___x_2222_ = 0;
v___x_2223_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1);
v___x_2224_ = l_Lake_Job_mapM___redArg(v___x_2193_, v___x_2220_, v___f_2217_, v___x_2221_, v___x_2222_, v___y_2199_, v___x_2194_, v___y_2201_, v___y_2202_, v___y_2203_, v___x_2223_);
lean_dec(v___x_2194_);
v___x_2225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
lean_ctor_set(v___x_2225_, 1, v___y_2211_);
return v___x_2225_;
}
v___jp_2226_:
{
lean_object* v_toLeanConfig_2229_; lean_object* v_toLeanConfig_2230_; uint8_t v_bootstrap_2231_; lean_object* v_buildDir_2232_; lean_object* v_nativeLibDir_2233_; lean_object* v_moreLinkObjs_2234_; lean_object* v_moreLinkObjs_2235_; lean_object* v___x_2236_; size_t v_sz_2237_; size_t v___x_2238_; lean_object* v___x_2239_; 
v_toLeanConfig_2229_ = lean_ctor_get(v_config_2189_, 1);
lean_inc_ref(v_toLeanConfig_2229_);
v_toLeanConfig_2230_ = lean_ctor_get(v_config_2190_, 0);
v_bootstrap_2231_ = lean_ctor_get_uint8(v_config_2189_, sizeof(void*)*28);
v_buildDir_2232_ = lean_ctor_get(v_config_2189_, 5);
lean_inc_ref(v_buildDir_2232_);
v_nativeLibDir_2233_ = lean_ctor_get(v_config_2189_, 7);
lean_inc_ref(v_nativeLibDir_2233_);
lean_dec_ref(v_config_2189_);
v_moreLinkObjs_2234_ = lean_ctor_get(v_toLeanConfig_2229_, 6);
lean_inc_ref(v_moreLinkObjs_2234_);
lean_dec_ref(v_toLeanConfig_2229_);
v_moreLinkObjs_2235_ = lean_ctor_get(v_toLeanConfig_2230_, 6);
v___x_2236_ = l_Array_append___redArg(v_moreLinkObjs_2234_, v_moreLinkObjs_2235_);
v_sz_2237_ = lean_array_size(v___x_2236_);
v___x_2238_ = ((size_t)0ULL);
lean_inc_ref(v___y_2199_);
v___x_2239_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(v_pkg_2195_, v_sz_2237_, v___x_2238_, v___x_2236_, v___y_2199_, v___x_2194_, v___y_2201_, v___y_2202_, v___y_2203_, v_a_2228_);
if (lean_obj_tag(v___x_2239_) == 0)
{
if (v_shouldExport_2191_ == 0)
{
lean_object* v_a_2240_; lean_object* v_a_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v_a_2240_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_a_2240_);
v_a_2241_ = lean_ctor_get(v___x_2239_, 1);
lean_inc(v_a_2241_);
lean_dec_ref_known(v___x_2239_, 2);
v___x_2242_ = l_System_FilePath_normalize(v_buildDir_2232_);
v___x_2243_ = l_Lake_joinRelative(v_dir_2196_, v___x_2242_);
v___x_2244_ = l_System_FilePath_normalize(v_nativeLibDir_2233_);
v___x_2245_ = l_Lake_joinRelative(v___x_2243_, v___x_2244_);
v___x_2246_ = l_Lake_LeanLib_libName(v_self_2197_);
v___x_2247_ = l_Lake_nameToStaticLib(v___x_2246_, v_shouldExport_2191_);
v___x_2248_ = l_Lake_joinRelative(v___x_2245_, v___x_2247_);
v___y_2207_ = v___x_2238_;
v___y_2208_ = v_bootstrap_2231_;
v___y_2209_ = v_a_2227_;
v___y_2210_ = v_a_2240_;
v___y_2211_ = v_a_2241_;
v___y_2212_ = v___x_2248_;
goto v___jp_2206_;
}
else
{
lean_object* v_a_2249_; lean_object* v_a_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; uint8_t v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
v_a_2249_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_a_2249_);
v_a_2250_ = lean_ctor_get(v___x_2239_, 1);
lean_inc(v_a_2250_);
lean_dec_ref_known(v___x_2239_, 2);
v___x_2251_ = l_System_FilePath_normalize(v_buildDir_2232_);
v___x_2252_ = l_Lake_joinRelative(v_dir_2196_, v___x_2251_);
v___x_2253_ = l_System_FilePath_normalize(v_nativeLibDir_2233_);
v___x_2254_ = l_Lake_joinRelative(v___x_2252_, v___x_2253_);
v___x_2255_ = l_Lake_LeanLib_libName(v_self_2197_);
v___x_2256_ = 0;
v___x_2257_ = l_Lake_nameToStaticLib(v___x_2255_, v___x_2256_);
v___x_2258_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1));
v___x_2259_ = l_System_FilePath_addExtension(v___x_2257_, v___x_2258_);
v___x_2260_ = l_Lake_joinRelative(v___x_2254_, v___x_2259_);
v___y_2207_ = v___x_2238_;
v___y_2208_ = v_bootstrap_2231_;
v___y_2209_ = v_a_2227_;
v___y_2210_ = v_a_2249_;
v___y_2211_ = v_a_2250_;
v___y_2212_ = v___x_2260_;
goto v___jp_2206_;
}
}
else
{
lean_object* v_a_2261_; lean_object* v_a_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2269_; 
lean_dec_ref(v_nativeLibDir_2233_);
lean_dec_ref(v_buildDir_2232_);
lean_dec_ref(v_a_2227_);
lean_dec_ref(v___y_2199_);
lean_dec_ref(v_self_2197_);
lean_dec_ref(v_dir_2196_);
lean_dec(v___x_2194_);
lean_dec(v___x_2193_);
v_a_2261_ = lean_ctor_get(v___x_2239_, 0);
v_a_2262_ = lean_ctor_get(v___x_2239_, 1);
v_isSharedCheck_2269_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2264_ = v___x_2239_;
v_isShared_2265_ = v_isSharedCheck_2269_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_a_2262_);
lean_inc(v_a_2261_);
lean_dec(v___x_2239_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2269_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2267_; 
if (v_isShared_2265_ == 0)
{
v___x_2267_ = v___x_2264_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_a_2261_);
lean_ctor_set(v_reuseFailAlloc_2268_, 1, v_a_2262_);
v___x_2267_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
return v___x_2267_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed(lean_object** _args){
lean_object* v_config_2312_ = _args[0];
lean_object* v_config_2313_ = _args[1];
lean_object* v_shouldExport_2314_ = _args[2];
lean_object* v___x_2315_ = _args[3];
lean_object* v___x_2316_ = _args[4];
lean_object* v___x_2317_ = _args[5];
lean_object* v_pkg_2318_ = _args[6];
lean_object* v_dir_2319_ = _args[7];
lean_object* v_self_2320_ = _args[8];
lean_object* v___x_2321_ = _args[9];
lean_object* v___y_2322_ = _args[10];
lean_object* v___y_2323_ = _args[11];
lean_object* v___y_2324_ = _args[12];
lean_object* v___y_2325_ = _args[13];
lean_object* v___y_2326_ = _args[14];
lean_object* v___y_2327_ = _args[15];
lean_object* v___y_2328_ = _args[16];
_start:
{
uint8_t v_shouldExport_boxed_2329_; uint8_t v___x_6423__boxed_2330_; lean_object* v_res_2331_; 
v_shouldExport_boxed_2329_ = lean_unbox(v_shouldExport_2314_);
v___x_6423__boxed_2330_ = lean_unbox(v___x_2315_);
v_res_2331_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(v_config_2312_, v_config_2313_, v_shouldExport_boxed_2329_, v___x_6423__boxed_2330_, v___x_2316_, v___x_2317_, v_pkg_2318_, v_dir_2319_, v_self_2320_, v___x_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_);
lean_dec_ref(v___y_2326_);
lean_dec(v___y_2325_);
lean_dec(v___y_2324_);
lean_dec(v___y_2323_);
lean_dec(v_config_2313_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(lean_object* v___y_2332_, lean_object* v_self_2333_, uint8_t v_shouldExport_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_){
_start:
{
lean_object* v_toBuildConfig_2341_; lean_object* v_registeredJobs_2342_; uint8_t v_verbosity_2343_; lean_object* v___x_2344_; lean_object* v___y_2346_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; uint8_t v___x_2395_; 
v_toBuildConfig_2341_ = lean_ctor_get(v_a_2338_, 0);
v_registeredJobs_2342_ = lean_ctor_get(v_a_2338_, 4);
v_verbosity_2343_ = lean_ctor_get_uint8(v_toBuildConfig_2341_, sizeof(void*)*5 + 4);
v___x_2344_ = l_Lake_instDataKindFilePath;
v___x_2392_ = lean_box(v_verbosity_2343_);
v___x_2393_ = lean_obj_tag_nat(v___x_2392_);
lean_dec(v___x_2392_);
v___x_2394_ = lean_unsigned_to_nat(2u);
v___x_2395_ = lean_nat_dec_eq(v___x_2393_, v___x_2394_);
if (v___x_2395_ == 0)
{
lean_object* v___x_2396_; 
v___x_2396_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___y_2346_ = v___x_2396_;
goto v___jp_2345_;
}
else
{
if (v_shouldExport_2334_ == 0)
{
lean_object* v___x_2397_; 
v___x_2397_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1));
v___y_2346_ = v___x_2397_;
goto v___jp_2345_;
}
else
{
lean_object* v___x_2398_; 
v___x_2398_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2));
v___y_2346_ = v___x_2398_;
goto v___jp_2345_;
}
}
v___jp_2345_:
{
lean_object* v_pkg_2347_; lean_object* v_name_2348_; lean_object* v_config_2349_; lean_object* v_keyName_2350_; lean_object* v_dir_2351_; lean_object* v_config_2352_; uint8_t v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___f_2365_; uint8_t v___x_2366_; lean_object* v___x_2367_; 
v_pkg_2347_ = lean_ctor_get(v_self_2333_, 0);
lean_inc_ref_n(v_pkg_2347_, 2);
v_name_2348_ = lean_ctor_get(v_self_2333_, 1);
v_config_2349_ = lean_ctor_get(v_self_2333_, 2);
lean_inc(v_config_2349_);
v_keyName_2350_ = lean_ctor_get(v_pkg_2347_, 2);
v_dir_2351_ = lean_ctor_get(v_pkg_2347_, 4);
lean_inc_ref(v_dir_2351_);
v_config_2352_ = lean_ctor_get(v_pkg_2347_, 6);
lean_inc_ref(v_config_2352_);
v___x_2353_ = 1;
lean_inc_n(v_name_2348_, 2);
v___x_2354_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2348_, v___x_2353_);
v___x_2355_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0));
v___x_2356_ = lean_string_append(v___x_2354_, v___x_2355_);
v___x_2357_ = lean_string_append(v___x_2356_, v___y_2346_);
v___x_2358_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_2350_);
v___x_2359_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2359_, 0, v_keyName_2350_);
lean_ctor_set(v___x_2359_, 1, v_name_2348_);
v___x_2360_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_2333_);
v___x_2361_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2361_, 0, v___x_2359_);
lean_ctor_set(v___x_2361_, 1, v___x_2360_);
lean_ctor_set(v___x_2361_, 2, v_self_2333_);
lean_ctor_set(v___x_2361_, 3, v___x_2358_);
v___x_2362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2362_, 0, v_pkg_2347_);
v___x_2363_ = lean_box(v_shouldExport_2334_);
v___x_2364_ = lean_box(v___x_2353_);
v___f_2365_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed), 17, 10);
lean_closure_set(v___f_2365_, 0, v_config_2352_);
lean_closure_set(v___f_2365_, 1, v_config_2349_);
lean_closure_set(v___f_2365_, 2, v___x_2363_);
lean_closure_set(v___f_2365_, 3, v___x_2364_);
lean_closure_set(v___f_2365_, 4, v___x_2344_);
lean_closure_set(v___f_2365_, 5, v___x_2362_);
lean_closure_set(v___f_2365_, 6, v_pkg_2347_);
lean_closure_set(v___f_2365_, 7, v_dir_2351_);
lean_closure_set(v___f_2365_, 8, v_self_2333_);
lean_closure_set(v___f_2365_, 9, v___x_2361_);
v___x_2366_ = 0;
v___x_2367_ = l_Lake_ensureJob___redArg(v___x_2344_, v___f_2365_, v___y_2332_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v_a_2368_; lean_object* v_a_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2391_; 
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
v_a_2369_ = lean_ctor_get(v___x_2367_, 1);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2371_ = v___x_2367_;
v_isShared_2372_ = v_isSharedCheck_2391_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_a_2369_);
lean_inc(v_a_2368_);
lean_dec(v___x_2367_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2391_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v_task_2373_; lean_object* v_kind_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2389_; 
v_task_2373_ = lean_ctor_get(v_a_2368_, 0);
v_kind_2374_ = lean_ctor_get(v_a_2368_, 1);
v_isSharedCheck_2389_ = !lean_is_exclusive(v_a_2368_);
if (v_isSharedCheck_2389_ == 0)
{
lean_object* v_unused_2390_; 
v_unused_2390_ = lean_ctor_get(v_a_2368_, 2);
lean_dec(v_unused_2390_);
v___x_2376_ = v_a_2368_;
v_isShared_2377_ = v_isSharedCheck_2389_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_kind_2374_);
lean_inc(v_task_2373_);
lean_dec(v_a_2368_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2389_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v_job_2379_; 
if (v_isShared_2377_ == 0)
{
lean_ctor_set(v___x_2376_, 2, v___x_2357_);
v_job_2379_ = v___x_2376_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_task_2373_);
lean_ctor_set(v_reuseFailAlloc_2388_, 1, v_kind_2374_);
lean_ctor_set(v_reuseFailAlloc_2388_, 2, v___x_2357_);
v_job_2379_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2386_; 
lean_ctor_set_uint8(v_job_2379_, sizeof(void*)*3, v___x_2366_);
v___x_2380_ = lean_st_ref_take(v_registeredJobs_2342_);
lean_inc_ref(v_job_2379_);
v___x_2381_ = l_Lake_Job_toOpaque___redArg(v_job_2379_);
v___x_2382_ = lean_array_push(v___x_2380_, v___x_2381_);
v___x_2383_ = lean_st_ref_put(v_registeredJobs_2342_, v___x_2382_);
v___x_2384_ = l_Lake_Job_renew___redArg(v_job_2379_);
if (v_isShared_2372_ == 0)
{
lean_ctor_set(v___x_2371_, 0, v___x_2384_);
v___x_2386_ = v___x_2371_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v___x_2384_);
lean_ctor_set(v_reuseFailAlloc_2387_, 1, v_a_2369_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2357_);
return v___x_2367_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___boxed(lean_object* v___y_2399_, lean_object* v_self_2400_, lean_object* v_shouldExport_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_){
_start:
{
uint8_t v_shouldExport_boxed_2408_; lean_object* v_res_2409_; 
v_shouldExport_boxed_2408_ = lean_unbox(v_shouldExport_2401_);
v_res_2409_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2399_, v_self_2400_, v_shouldExport_boxed_2408_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_);
lean_dec_ref(v_a_2405_);
lean_dec(v_a_2404_);
lean_dec(v_a_2403_);
lean_dec(v_a_2402_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0(lean_object* v_x_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_){
_start:
{
uint8_t v___x_2418_; lean_object* v___x_2419_; 
v___x_2418_ = 0;
v___x_2419_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2411_, v_x_2410_, v___x_2418_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_);
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0___boxed(lean_object* v_x_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l_Lake_LeanLib_staticFacetConfig___lam__0(v_x_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
lean_dec_ref(v___y_2425_);
lean_dec(v___y_2424_);
lean_dec(v___y_2423_);
lean_dec(v___y_2422_);
return v_res_2428_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_2431_; uint8_t v___x_2432_; lean_object* v___x_2433_; lean_object* v___f_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___f_2431_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__1));
v___x_2432_ = 1;
v___x_2433_ = l_Lake_instDataKindFilePath;
v___f_2434_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__0));
v___x_2435_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2436_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
lean_ctor_set(v___x_2436_, 1, v___f_2434_);
lean_ctor_set(v___x_2436_, 2, v___x_2433_);
lean_ctor_set(v___x_2436_, 3, v___f_2431_);
lean_ctor_set_uint8(v___x_2436_, sizeof(void*)*4, v___x_2432_);
lean_ctor_set_uint8(v___x_2436_, sizeof(void*)*4 + 1, v___x_2432_);
return v___x_2436_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacetConfig(void){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = lean_obj_once(&l_Lake_LeanLib_staticFacetConfig___closed__2, &l_Lake_LeanLib_staticFacetConfig___closed__2_once, _init_l_Lake_LeanLib_staticFacetConfig___closed__2);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(lean_object* v_a_2438_, lean_object* v_as_2439_, size_t v_i_2440_, size_t v_stop_2441_, lean_object* v_b_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_){
_start:
{
lean_object* v___x_2450_; 
v___x_2450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_2438_, v_as_2439_, v_i_2440_, v_stop_2441_, v_b_2442_, v___y_2448_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___boxed(lean_object* v_a_2451_, lean_object* v_as_2452_, lean_object* v_i_2453_, lean_object* v_stop_2454_, lean_object* v_b_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
size_t v_i_boxed_2463_; size_t v_stop_boxed_2464_; lean_object* v_res_2465_; 
v_i_boxed_2463_ = lean_unbox_usize(v_i_2453_);
lean_dec(v_i_2453_);
v_stop_boxed_2464_ = lean_unbox_usize(v_stop_2454_);
lean_dec(v_stop_2454_);
v_res_2465_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(v_a_2451_, v_as_2452_, v_i_boxed_2463_, v_stop_boxed_2464_, v_b_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec_ref(v_as_2452_);
lean_dec(v_a_2451_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0(lean_object* v_x_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_){
_start:
{
uint8_t v___x_2474_; lean_object* v___x_2475_; 
v___x_2474_ = 1;
v___x_2475_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2467_, v_x_2466_, v___x_2474_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed(lean_object* v_x_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_Lake_LeanLib_staticExportFacetConfig___lam__0(v_x_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec(v___y_2478_);
return v_res_2484_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_2486_; uint8_t v___x_2487_; lean_object* v___x_2488_; lean_object* v___f_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___f_2486_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__1));
v___x_2487_ = 1;
v___x_2488_ = l_Lake_instDataKindFilePath;
v___f_2489_ = ((lean_object*)(l_Lake_LeanLib_staticExportFacetConfig___closed__0));
v___x_2490_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2491_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2491_, 0, v___x_2490_);
lean_ctor_set(v___x_2491_, 1, v___f_2489_);
lean_ctor_set(v___x_2491_, 2, v___x_2488_);
lean_ctor_set(v___x_2491_, 3, v___f_2486_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*4, v___x_2487_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*4 + 1, v___x_2487_);
return v___x_2491_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacetConfig(void){
_start:
{
lean_object* v___x_2492_; 
v___x_2492_ = lean_obj_once(&l_Lake_LeanLib_staticExportFacetConfig___closed__1, &l_Lake_LeanLib_staticExportFacetConfig___closed__1_once, _init_l_Lake_LeanLib_staticExportFacetConfig___closed__1);
return v___x_2492_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0(void){
_start:
{
uint8_t v___x_2493_; lean_object* v_name_2494_; lean_object* v___x_2495_; 
v___x_2493_ = 1;
v_name_2494_ = l_Lake_instDataKindDynlib;
v___x_2495_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2494_, v___x_2493_);
return v___x_2495_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(lean_object* v_defaultPkg_2496_, lean_object* v_self_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_){
_start:
{
lean_object* v_name_2505_; uint8_t v___x_2506_; lean_object* v___x_2507_; 
v_name_2505_ = l_Lake_instDataKindDynlib;
v___x_2506_ = 1;
lean_inc_ref_n(v_self_2497_, 2);
v___x_2507_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_2496_, v_self_2497_, v_self_2497_, v___x_2506_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_2507_) == 0)
{
lean_object* v_a_2508_; lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2549_; 
v_a_2508_ = lean_ctor_get(v___x_2507_, 0);
v_a_2509_ = lean_ctor_get(v___x_2507_, 1);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2507_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2511_ = v___x_2507_;
v_isShared_2512_ = v_isSharedCheck_2549_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_inc(v_a_2508_);
lean_dec(v___x_2507_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2549_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___y_2514_; lean_object* v_snd_2532_; lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2547_; 
v_snd_2532_ = lean_ctor_get(v_a_2508_, 1);
v_isSharedCheck_2547_ = !lean_is_exclusive(v_a_2508_);
if (v_isSharedCheck_2547_ == 0)
{
lean_object* v_unused_2548_; 
v_unused_2548_ = lean_ctor_get(v_a_2508_, 0);
lean_dec(v_unused_2548_);
v___x_2534_ = v_a_2508_;
v_isShared_2535_ = v_isSharedCheck_2547_;
goto v_resetjp_2533_;
}
else
{
lean_inc(v_snd_2532_);
lean_dec(v_a_2508_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2547_;
goto v_resetjp_2533_;
}
v___jp_2513_:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; uint8_t v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2530_; 
v___x_2515_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0));
v___x_2516_ = l_Lake_PartialBuildKey_toString(v_self_2497_);
v___x_2517_ = lean_string_append(v___x_2515_, v___x_2516_);
lean_dec_ref(v___x_2516_);
v___x_2518_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1));
v___x_2519_ = lean_string_append(v___x_2517_, v___x_2518_);
v___x_2520_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0);
v___x_2521_ = lean_string_append(v___x_2519_, v___x_2520_);
v___x_2522_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3));
v___x_2523_ = lean_string_append(v___x_2521_, v___x_2522_);
v___x_2524_ = lean_string_append(v___x_2523_, v___y_2514_);
lean_dec_ref(v___y_2514_);
v___x_2525_ = 3;
v___x_2526_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2526_, 0, v___x_2524_);
lean_ctor_set_uint8(v___x_2526_, sizeof(void*)*1, v___x_2525_);
v___x_2527_ = lean_array_get_size(v_a_2509_);
v___x_2528_ = lean_array_push(v_a_2509_, v___x_2526_);
if (v_isShared_2512_ == 0)
{
lean_ctor_set_tag(v___x_2511_, 1);
lean_ctor_set(v___x_2511_, 1, v___x_2528_);
lean_ctor_set(v___x_2511_, 0, v___x_2527_);
v___x_2530_ = v___x_2511_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2527_);
lean_ctor_set(v_reuseFailAlloc_2531_, 1, v___x_2528_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
v_resetjp_2533_:
{
lean_object* v_kind_2536_; uint8_t v___x_2537_; 
v_kind_2536_ = lean_ctor_get(v_snd_2532_, 1);
v___x_2537_ = lean_name_eq(v_kind_2536_, v_name_2505_);
if (v___x_2537_ == 0)
{
uint8_t v___x_2538_; 
lean_inc(v_kind_2536_);
lean_del_object(v___x_2534_);
lean_dec(v_snd_2532_);
v___x_2538_ = l_Lean_Name_isAnonymous(v_kind_2536_);
if (v___x_2538_ == 0)
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2539_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4));
v___x_2540_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_2536_, v___x_2506_);
v___x_2541_ = lean_string_append(v___x_2539_, v___x_2540_);
lean_dec_ref(v___x_2540_);
v___x_2542_ = lean_string_append(v___x_2541_, v___x_2539_);
v___y_2514_ = v___x_2542_;
goto v___jp_2513_;
}
else
{
lean_object* v___x_2543_; 
lean_dec(v_kind_2536_);
v___x_2543_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5));
v___y_2514_ = v___x_2543_;
goto v___jp_2513_;
}
}
else
{
lean_object* v___x_2545_; 
lean_del_object(v___x_2511_);
lean_dec_ref(v_self_2497_);
if (v_isShared_2535_ == 0)
{
lean_ctor_set(v___x_2534_, 1, v_a_2509_);
lean_ctor_set(v___x_2534_, 0, v_snd_2532_);
v___x_2545_ = v___x_2534_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_snd_2532_);
lean_ctor_set(v_reuseFailAlloc_2546_, 1, v_a_2509_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
}
else
{
lean_object* v_a_2550_; lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2558_; 
lean_dec_ref(v_self_2497_);
v_a_2550_ = lean_ctor_get(v___x_2507_, 0);
v_a_2551_ = lean_ctor_get(v___x_2507_, 1);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2507_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2553_ = v___x_2507_;
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_inc(v_a_2550_);
lean_dec(v___x_2507_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2556_; 
if (v_isShared_2554_ == 0)
{
v___x_2556_ = v___x_2553_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2550_);
lean_ctor_set(v_reuseFailAlloc_2557_, 1, v_a_2551_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___boxed(lean_object* v_defaultPkg_2559_, lean_object* v_self_2560_, lean_object* v_a_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_){
_start:
{
lean_object* v_res_2568_; 
v_res_2568_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(v_defaultPkg_2559_, v_self_2560_, v_a_2561_, v_a_2562_, v_a_2563_, v_a_2564_, v_a_2565_, v_a_2566_);
lean_dec_ref(v_a_2565_);
lean_dec(v_a_2564_);
lean_dec(v_a_2563_);
lean_dec(v_a_2562_);
return v_res_2568_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2571_ = ((lean_object*)(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0));
v___x_2572_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2);
v___x_2573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2573_, 0, v___x_2572_);
lean_ctor_set(v___x_2573_, 1, v___x_2571_);
return v___x_2573_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5(void){
_start:
{
lean_object* v___x_2574_; 
v___x_2574_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1);
return v___x_2574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(lean_object* v___x_2575_, lean_object* v_as_2576_, size_t v_i_2577_, size_t v_stop_2578_, lean_object* v_b_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_){
_start:
{
uint8_t v___x_2587_; 
v___x_2587_ = lean_usize_dec_eq(v_i_2577_, v_stop_2578_);
if (v___x_2587_ == 0)
{
lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = lean_array_uget_borrowed(v_as_2576_, v_i_2577_);
lean_inc_ref(v___y_2580_);
lean_inc(v___x_2588_);
lean_inc_ref(v___x_2575_);
v___x_2589_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v___x_2575_, v___x_2588_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2589_) == 0)
{
lean_object* v_a_2590_; lean_object* v_a_2591_; lean_object* v___x_2592_; size_t v___x_2593_; size_t v___x_2594_; 
v_a_2590_ = lean_ctor_get(v___x_2589_, 0);
lean_inc(v_a_2590_);
v_a_2591_ = lean_ctor_get(v___x_2589_, 1);
lean_inc(v_a_2591_);
lean_dec_ref_known(v___x_2589_, 2);
v___x_2592_ = lean_array_push(v_b_2579_, v_a_2590_);
v___x_2593_ = ((size_t)1ULL);
v___x_2594_ = lean_usize_add(v_i_2577_, v___x_2593_);
v_i_2577_ = v___x_2594_;
v_b_2579_ = v___x_2592_;
v___y_2585_ = v_a_2591_;
goto _start;
}
else
{
lean_object* v_a_2596_; lean_object* v_a_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2604_; 
lean_dec_ref(v___y_2580_);
lean_dec_ref(v_b_2579_);
lean_dec_ref(v___x_2575_);
v_a_2596_ = lean_ctor_get(v___x_2589_, 0);
v_a_2597_ = lean_ctor_get(v___x_2589_, 1);
v_isSharedCheck_2604_ = !lean_is_exclusive(v___x_2589_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2599_ = v___x_2589_;
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_a_2597_);
lean_inc(v_a_2596_);
lean_dec(v___x_2589_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2602_; 
if (v_isShared_2600_ == 0)
{
v___x_2602_ = v___x_2599_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_a_2596_);
lean_ctor_set(v_reuseFailAlloc_2603_, 1, v_a_2597_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
}
}
else
{
lean_object* v___x_2605_; 
lean_dec_ref(v___y_2580_);
lean_dec_ref(v___x_2575_);
v___x_2605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2605_, 0, v_b_2579_);
lean_ctor_set(v___x_2605_, 1, v___y_2585_);
return v___x_2605_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8___boxed(lean_object* v___x_2606_, lean_object* v_as_2607_, lean_object* v_i_2608_, lean_object* v_stop_2609_, lean_object* v_b_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_){
_start:
{
size_t v_i_boxed_2618_; size_t v_stop_boxed_2619_; lean_object* v_res_2620_; 
v_i_boxed_2618_ = lean_unbox_usize(v_i_2608_);
lean_dec(v_i_2608_);
v_stop_boxed_2619_ = lean_unbox_usize(v_stop_2609_);
lean_dec(v_stop_2609_);
v_res_2620_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v___x_2606_, v_as_2607_, v_i_boxed_2618_, v_stop_boxed_2619_, v_b_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_);
lean_dec_ref(v___y_2615_);
lean_dec(v___y_2614_);
lean_dec(v___y_2613_);
lean_dec(v___y_2612_);
lean_dec_ref(v_as_2607_);
return v_res_2620_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(lean_object* v_self_2621_, lean_object* v_a_2622_){
_start:
{
lean_object* v_toHashSet_2623_; lean_object* v_toArray_2624_; uint8_t v___x_2625_; 
v_toHashSet_2623_ = lean_ctor_get(v_self_2621_, 0);
v_toArray_2624_ = lean_ctor_get(v_self_2621_, 1);
v___x_2625_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_toHashSet_2623_, v_a_2622_);
if (v___x_2625_ == 0)
{
lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2635_; 
lean_inc_ref(v_toArray_2624_);
lean_inc_ref(v_toHashSet_2623_);
v_isSharedCheck_2635_ = !lean_is_exclusive(v_self_2621_);
if (v_isSharedCheck_2635_ == 0)
{
lean_object* v_unused_2636_; lean_object* v_unused_2637_; 
v_unused_2636_ = lean_ctor_get(v_self_2621_, 1);
lean_dec(v_unused_2636_);
v_unused_2637_ = lean_ctor_get(v_self_2621_, 0);
lean_dec(v_unused_2637_);
v___x_2627_ = v_self_2621_;
v_isShared_2628_ = v_isSharedCheck_2635_;
goto v_resetjp_2626_;
}
else
{
lean_dec(v_self_2621_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2635_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2633_; 
v___x_2629_ = lean_box(0);
lean_inc_ref(v_a_2622_);
v___x_2630_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_toHashSet_2623_, v_a_2622_, v___x_2629_);
v___x_2631_ = lean_array_push(v_toArray_2624_, v_a_2622_);
if (v_isShared_2628_ == 0)
{
lean_ctor_set(v___x_2627_, 1, v___x_2631_);
lean_ctor_set(v___x_2627_, 0, v___x_2630_);
v___x_2633_ = v___x_2627_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v___x_2630_);
lean_ctor_set(v_reuseFailAlloc_2634_, 1, v___x_2631_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
else
{
lean_dec_ref(v_a_2622_);
return v_self_2621_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(lean_object* v_as_2638_, size_t v_i_2639_, size_t v_stop_2640_, lean_object* v_b_2641_){
_start:
{
uint8_t v___x_2642_; 
v___x_2642_ = lean_usize_dec_eq(v_i_2639_, v_stop_2640_);
if (v___x_2642_ == 0)
{
lean_object* v___x_2643_; lean_object* v___x_2644_; size_t v___x_2645_; size_t v___x_2646_; 
v___x_2643_ = lean_array_uget_borrowed(v_as_2638_, v_i_2639_);
lean_inc(v___x_2643_);
v___x_2644_ = l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(v_b_2641_, v___x_2643_);
v___x_2645_ = ((size_t)1ULL);
v___x_2646_ = lean_usize_add(v_i_2639_, v___x_2645_);
v_i_2639_ = v___x_2646_;
v_b_2641_ = v___x_2644_;
goto _start;
}
else
{
return v_b_2641_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1___boxed(lean_object* v_as_2648_, lean_object* v_i_2649_, lean_object* v_stop_2650_, lean_object* v_b_2651_){
_start:
{
size_t v_i_boxed_2652_; size_t v_stop_boxed_2653_; lean_object* v_res_2654_; 
v_i_boxed_2652_ = lean_unbox_usize(v_i_2649_);
lean_dec(v_i_2649_);
v_stop_boxed_2653_ = lean_unbox_usize(v_stop_2650_);
lean_dec(v_stop_2650_);
v_res_2654_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_as_2648_, v_i_boxed_2652_, v_stop_boxed_2653_, v_b_2651_);
lean_dec_ref(v_as_2648_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(lean_object* v_self_2655_, lean_object* v_arr_2656_){
_start:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; uint8_t v___x_2659_; 
v___x_2657_ = lean_unsigned_to_nat(0u);
v___x_2658_ = lean_array_get_size(v_arr_2656_);
v___x_2659_ = lean_nat_dec_lt(v___x_2657_, v___x_2658_);
if (v___x_2659_ == 0)
{
return v_self_2655_;
}
else
{
size_t v___x_2660_; size_t v___x_2661_; lean_object* v___x_2662_; 
v___x_2660_ = ((size_t)0ULL);
v___x_2661_ = lean_usize_of_nat(v___x_2658_);
v___x_2662_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_arr_2656_, v___x_2660_, v___x_2661_, v_self_2655_);
return v___x_2662_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0___boxed(lean_object* v_self_2663_, lean_object* v_arr_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(v_self_2663_, v_arr_2664_);
lean_dec_ref(v_arr_2664_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(lean_object* v_as_2666_, size_t v_i_2667_, size_t v_stop_2668_, lean_object* v_b_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_){
_start:
{
uint8_t v___x_2677_; 
v___x_2677_ = lean_usize_dec_eq(v_i_2667_, v_stop_2668_);
if (v___x_2677_ == 0)
{
lean_object* v___x_2678_; lean_object* v_lib_2679_; lean_object* v_pkg_2680_; lean_object* v_name_2681_; lean_object* v_keyName_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; 
v___x_2678_ = lean_array_uget_borrowed(v_as_2666_, v_i_2667_);
v_lib_2679_ = lean_ctor_get(v___x_2678_, 0);
v_pkg_2680_ = lean_ctor_get(v_lib_2679_, 0);
v_name_2681_ = lean_ctor_get(v___x_2678_, 1);
v_keyName_2682_ = lean_ctor_get(v_pkg_2680_, 2);
v___x_2683_ = l_Lake_Module_transImportsFacet;
lean_inc(v_name_2681_);
lean_inc(v_keyName_2682_);
v___x_2684_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2684_, 0, v_keyName_2682_);
lean_ctor_set(v___x_2684_, 1, v_name_2681_);
v___x_2685_ = l_Lake_Module_keyword;
lean_inc(v___x_2678_);
v___x_2686_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2684_);
lean_ctor_set(v___x_2686_, 1, v___x_2685_);
lean_ctor_set(v___x_2686_, 2, v___x_2678_);
lean_ctor_set(v___x_2686_, 3, v___x_2683_);
lean_inc_ref(v___y_2670_);
lean_inc_ref(v___y_2674_);
lean_inc(v___y_2673_);
lean_inc(v___y_2672_);
lean_inc(v___y_2671_);
v___x_2687_ = lean_apply_7(v___y_2670_, v___x_2686_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_, lean_box(0));
if (lean_obj_tag(v___x_2687_) == 0)
{
lean_object* v_a_2688_; lean_object* v_a_2689_; lean_object* v___x_2690_; 
v_a_2688_ = lean_ctor_get(v___x_2687_, 0);
lean_inc(v_a_2688_);
v_a_2689_ = lean_ctor_get(v___x_2687_, 1);
lean_inc(v_a_2689_);
lean_dec_ref_known(v___x_2687_, 2);
v___x_2690_ = l_Lake_Job_await___redArg(v_a_2688_, v_a_2689_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2691_; lean_object* v_a_2692_; lean_object* v___x_2693_; size_t v___x_2694_; size_t v___x_2695_; 
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
lean_inc(v_a_2691_);
v_a_2692_ = lean_ctor_get(v___x_2690_, 1);
lean_inc(v_a_2692_);
lean_dec_ref_known(v___x_2690_, 2);
v___x_2693_ = l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(v_b_2669_, v_a_2691_);
lean_dec(v_a_2691_);
v___x_2694_ = ((size_t)1ULL);
v___x_2695_ = lean_usize_add(v_i_2667_, v___x_2694_);
v_i_2667_ = v___x_2695_;
v_b_2669_ = v___x_2693_;
v___y_2675_ = v_a_2692_;
goto _start;
}
else
{
lean_object* v_a_2697_; lean_object* v_a_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2705_; 
lean_dec_ref(v___y_2670_);
lean_dec_ref(v_b_2669_);
v_a_2697_ = lean_ctor_get(v___x_2690_, 0);
v_a_2698_ = lean_ctor_get(v___x_2690_, 1);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2700_ = v___x_2690_;
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_a_2698_);
lean_inc(v_a_2697_);
lean_dec(v___x_2690_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2703_; 
if (v_isShared_2701_ == 0)
{
v___x_2703_ = v___x_2700_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v_a_2697_);
lean_ctor_set(v_reuseFailAlloc_2704_, 1, v_a_2698_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
}
else
{
lean_object* v_a_2706_; lean_object* v_a_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2714_; 
lean_dec_ref(v___y_2670_);
lean_dec_ref(v_b_2669_);
v_a_2706_ = lean_ctor_get(v___x_2687_, 0);
v_a_2707_ = lean_ctor_get(v___x_2687_, 1);
v_isSharedCheck_2714_ = !lean_is_exclusive(v___x_2687_);
if (v_isSharedCheck_2714_ == 0)
{
v___x_2709_ = v___x_2687_;
v_isShared_2710_ = v_isSharedCheck_2714_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_a_2707_);
lean_inc(v_a_2706_);
lean_dec(v___x_2687_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2714_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
lean_object* v___x_2712_; 
if (v_isShared_2710_ == 0)
{
v___x_2712_ = v___x_2709_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v_a_2706_);
lean_ctor_set(v_reuseFailAlloc_2713_, 1, v_a_2707_);
v___x_2712_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
return v___x_2712_;
}
}
}
}
else
{
lean_object* v___x_2715_; 
lean_dec_ref(v___y_2670_);
v___x_2715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2715_, 0, v_b_2669_);
lean_ctor_set(v___x_2715_, 1, v___y_2675_);
return v___x_2715_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7___boxed(lean_object* v_as_2716_, lean_object* v_i_2717_, lean_object* v_stop_2718_, lean_object* v_b_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
size_t v_i_boxed_2727_; size_t v_stop_boxed_2728_; lean_object* v_res_2729_; 
v_i_boxed_2727_ = lean_unbox_usize(v_i_2717_);
lean_dec(v_i_2717_);
v_stop_boxed_2728_ = lean_unbox_usize(v_stop_2718_);
lean_dec(v_stop_2718_);
v_res_2729_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_as_2716_, v_i_boxed_2727_, v_stop_boxed_2728_, v_b_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec(v___y_2722_);
lean_dec(v___y_2721_);
lean_dec_ref(v_as_2716_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(lean_object* v_as_2730_, size_t v_i_2731_, size_t v_stop_2732_, lean_object* v_b_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_){
_start:
{
uint8_t v___x_2741_; 
v___x_2741_ = lean_usize_dec_eq(v_i_2731_, v_stop_2732_);
if (v___x_2741_ == 0)
{
lean_object* v___x_2742_; lean_object* v_pkg_2743_; lean_object* v_name_2744_; lean_object* v_keyName_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2742_ = lean_array_uget_borrowed(v_as_2730_, v_i_2731_);
v_pkg_2743_ = lean_ctor_get(v___x_2742_, 0);
v_name_2744_ = lean_ctor_get(v___x_2742_, 1);
v_keyName_2745_ = lean_ctor_get(v_pkg_2743_, 2);
v___x_2746_ = l_Lake_ExternLib_dynlibFacet;
lean_inc(v_name_2744_);
lean_inc(v_keyName_2745_);
v___x_2747_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2747_, 0, v_keyName_2745_);
lean_ctor_set(v___x_2747_, 1, v_name_2744_);
v___x_2748_ = l_Lake_ExternLib_keyword;
lean_inc(v___x_2742_);
v___x_2749_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2747_);
lean_ctor_set(v___x_2749_, 1, v___x_2748_);
lean_ctor_set(v___x_2749_, 2, v___x_2742_);
lean_ctor_set(v___x_2749_, 3, v___x_2746_);
lean_inc_ref(v___y_2734_);
lean_inc_ref(v___y_2738_);
lean_inc(v___y_2737_);
lean_inc(v___y_2736_);
lean_inc(v___y_2735_);
v___x_2750_ = lean_apply_7(v___y_2734_, v___x_2749_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_, lean_box(0));
if (lean_obj_tag(v___x_2750_) == 0)
{
lean_object* v_a_2751_; lean_object* v_a_2752_; lean_object* v___x_2753_; size_t v___x_2754_; size_t v___x_2755_; 
v_a_2751_ = lean_ctor_get(v___x_2750_, 0);
lean_inc(v_a_2751_);
v_a_2752_ = lean_ctor_get(v___x_2750_, 1);
lean_inc(v_a_2752_);
lean_dec_ref_known(v___x_2750_, 2);
v___x_2753_ = lean_array_push(v_b_2733_, v_a_2751_);
v___x_2754_ = ((size_t)1ULL);
v___x_2755_ = lean_usize_add(v_i_2731_, v___x_2754_);
v_i_2731_ = v___x_2755_;
v_b_2733_ = v___x_2753_;
v___y_2739_ = v_a_2752_;
goto _start;
}
else
{
lean_object* v_a_2757_; lean_object* v_a_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2765_; 
lean_dec_ref(v___y_2734_);
lean_dec_ref(v_b_2733_);
v_a_2757_ = lean_ctor_get(v___x_2750_, 0);
v_a_2758_ = lean_ctor_get(v___x_2750_, 1);
v_isSharedCheck_2765_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2760_ = v___x_2750_;
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_a_2758_);
lean_inc(v_a_2757_);
lean_dec(v___x_2750_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___x_2763_; 
if (v_isShared_2761_ == 0)
{
v___x_2763_ = v___x_2760_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v_a_2757_);
lean_ctor_set(v_reuseFailAlloc_2764_, 1, v_a_2758_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
return v___x_2763_;
}
}
}
}
else
{
lean_object* v___x_2766_; 
lean_dec_ref(v___y_2734_);
v___x_2766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2766_, 0, v_b_2733_);
lean_ctor_set(v___x_2766_, 1, v___y_2739_);
return v___x_2766_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2___boxed(lean_object* v_as_2767_, lean_object* v_i_2768_, lean_object* v_stop_2769_, lean_object* v_b_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_){
_start:
{
size_t v_i_boxed_2778_; size_t v_stop_boxed_2779_; lean_object* v_res_2780_; 
v_i_boxed_2778_ = lean_unbox_usize(v_i_2768_);
lean_dec(v_i_2768_);
v_stop_boxed_2779_ = lean_unbox_usize(v_stop_2769_);
lean_dec(v_stop_2769_);
v_res_2780_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v_as_2767_, v_i_boxed_2778_, v_stop_boxed_2779_, v_b_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
lean_dec_ref(v___y_2775_);
lean_dec(v___y_2774_);
lean_dec(v___y_2773_);
lean_dec(v___y_2772_);
lean_dec_ref(v_as_2767_);
return v_res_2780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(lean_object* v_as_2781_, size_t v_i_2782_, size_t v_stop_2783_, lean_object* v_b_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_){
_start:
{
lean_object* v_a_2793_; lean_object* v_a_2794_; uint8_t v___x_2798_; 
v___x_2798_ = lean_usize_dec_eq(v_i_2782_, v_stop_2783_);
if (v___x_2798_ == 0)
{
lean_object* v_fst_2799_; lean_object* v_snd_2800_; lean_object* v___x_2801_; lean_object* v_lib_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2839_; 
v_fst_2799_ = lean_ctor_get(v_b_2784_, 0);
v_snd_2800_ = lean_ctor_get(v_b_2784_, 1);
v___x_2801_ = lean_array_uget(v_as_2781_, v_i_2782_);
v_lib_2802_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2839_ == 0)
{
lean_object* v_unused_2840_; 
v_unused_2840_ = lean_ctor_get(v___x_2801_, 1);
lean_dec(v_unused_2840_);
v___x_2804_ = v___x_2801_;
v_isShared_2805_ = v_isSharedCheck_2839_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_lib_2802_);
lean_dec(v___x_2801_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2839_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v_pkg_2806_; lean_object* v_name_2807_; uint8_t v___x_2808_; 
v_pkg_2806_ = lean_ctor_get(v_lib_2802_, 0);
v_name_2807_ = lean_ctor_get(v_lib_2802_, 1);
lean_inc(v_name_2807_);
v___x_2808_ = l_Lean_NameSet_contains(v_fst_2799_, v_name_2807_);
if (v___x_2808_ == 0)
{
lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2836_; 
lean_inc(v_snd_2800_);
lean_inc(v_fst_2799_);
v_isSharedCheck_2836_ = !lean_is_exclusive(v_b_2784_);
if (v_isSharedCheck_2836_ == 0)
{
lean_object* v_unused_2837_; lean_object* v_unused_2838_; 
v_unused_2837_ = lean_ctor_get(v_b_2784_, 1);
lean_dec(v_unused_2837_);
v_unused_2838_ = lean_ctor_get(v_b_2784_, 0);
lean_dec(v_unused_2838_);
v___x_2810_ = v_b_2784_;
v_isShared_2811_ = v_isSharedCheck_2836_;
goto v_resetjp_2809_;
}
else
{
lean_dec(v_b_2784_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2836_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v_keyName_2812_; lean_object* v___x_2813_; lean_object* v___x_2815_; 
v_keyName_2812_ = lean_ctor_get(v_pkg_2806_, 2);
v___x_2813_ = l_Lake_LeanLib_sharedFacet;
lean_inc(v_name_2807_);
lean_inc(v_keyName_2812_);
if (v_isShared_2805_ == 0)
{
lean_ctor_set_tag(v___x_2804_, 3);
lean_ctor_set(v___x_2804_, 1, v_name_2807_);
lean_ctor_set(v___x_2804_, 0, v_keyName_2812_);
v___x_2815_ = v___x_2804_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_keyName_2812_);
lean_ctor_set(v_reuseFailAlloc_2835_, 1, v_name_2807_);
v___x_2815_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2816_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2817_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2815_);
lean_ctor_set(v___x_2817_, 1, v___x_2816_);
lean_ctor_set(v___x_2817_, 2, v_lib_2802_);
lean_ctor_set(v___x_2817_, 3, v___x_2813_);
lean_inc_ref(v___y_2785_);
lean_inc_ref(v___y_2789_);
lean_inc(v___y_2788_);
lean_inc(v___y_2787_);
lean_inc(v___y_2786_);
v___x_2818_ = lean_apply_7(v___y_2785_, v___x_2817_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, lean_box(0));
if (lean_obj_tag(v___x_2818_) == 0)
{
lean_object* v_a_2819_; lean_object* v_a_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2824_; 
v_a_2819_ = lean_ctor_get(v___x_2818_, 0);
lean_inc(v_a_2819_);
v_a_2820_ = lean_ctor_get(v___x_2818_, 1);
lean_inc(v_a_2820_);
lean_dec_ref_known(v___x_2818_, 2);
v___x_2821_ = lean_array_push(v_snd_2800_, v_a_2819_);
v___x_2822_ = l_Lean_NameSet_insert(v_fst_2799_, v_name_2807_);
if (v_isShared_2811_ == 0)
{
lean_ctor_set(v___x_2810_, 1, v___x_2821_);
lean_ctor_set(v___x_2810_, 0, v___x_2822_);
v___x_2824_ = v___x_2810_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v___x_2822_);
lean_ctor_set(v_reuseFailAlloc_2825_, 1, v___x_2821_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
v_a_2793_ = v___x_2824_;
v_a_2794_ = v_a_2820_;
goto v___jp_2792_;
}
}
else
{
lean_object* v_a_2826_; lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_del_object(v___x_2810_);
lean_dec(v_name_2807_);
lean_dec(v_snd_2800_);
lean_dec(v_fst_2799_);
lean_dec_ref(v___y_2785_);
v_a_2826_ = lean_ctor_get(v___x_2818_, 0);
v_a_2827_ = lean_ctor_get(v___x_2818_, 1);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2818_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2818_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_inc(v_a_2826_);
lean_dec(v___x_2818_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2826_);
lean_ctor_set(v_reuseFailAlloc_2833_, 1, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
}
}
else
{
lean_dec(v_name_2807_);
lean_del_object(v___x_2804_);
lean_dec_ref(v_lib_2802_);
v_a_2793_ = v_b_2784_;
v_a_2794_ = v___y_2790_;
goto v___jp_2792_;
}
}
}
else
{
lean_object* v___x_2841_; 
lean_dec_ref(v___y_2785_);
v___x_2841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2841_, 0, v_b_2784_);
lean_ctor_set(v___x_2841_, 1, v___y_2790_);
return v___x_2841_;
}
v___jp_2792_:
{
size_t v___x_2795_; size_t v___x_2796_; 
v___x_2795_ = ((size_t)1ULL);
v___x_2796_ = lean_usize_add(v_i_2782_, v___x_2795_);
v_i_2782_ = v___x_2796_;
v_b_2784_ = v_a_2793_;
v___y_2790_ = v_a_2794_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6___boxed(lean_object* v_as_2842_, lean_object* v_i_2843_, lean_object* v_stop_2844_, lean_object* v_b_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_){
_start:
{
size_t v_i_boxed_2853_; size_t v_stop_boxed_2854_; lean_object* v_res_2855_; 
v_i_boxed_2853_ = lean_unbox_usize(v_i_2843_);
lean_dec(v_i_2843_);
v_stop_boxed_2854_ = lean_unbox_usize(v_stop_2844_);
lean_dec(v_stop_2844_);
v_res_2855_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_as_2842_, v_i_boxed_2853_, v_stop_boxed_2854_, v_b_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v_as_2842_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(lean_object* v___x_2856_, lean_object* v_as_2857_, size_t v_i_2858_, size_t v_stop_2859_, lean_object* v_b_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_){
_start:
{
uint8_t v___x_2868_; 
v___x_2868_ = lean_usize_dec_eq(v_i_2858_, v_stop_2859_);
if (v___x_2868_ == 0)
{
lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2869_ = lean_array_uget_borrowed(v_as_2857_, v_i_2858_);
lean_inc_ref(v___y_2861_);
lean_inc(v___x_2869_);
lean_inc_ref(v___x_2856_);
v___x_2870_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(v___x_2856_, v___x_2869_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_);
if (lean_obj_tag(v___x_2870_) == 0)
{
lean_object* v_a_2871_; lean_object* v_a_2872_; lean_object* v___x_2873_; size_t v___x_2874_; size_t v___x_2875_; 
v_a_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_a_2871_);
v_a_2872_ = lean_ctor_get(v___x_2870_, 1);
lean_inc(v_a_2872_);
lean_dec_ref_known(v___x_2870_, 2);
v___x_2873_ = lean_array_push(v_b_2860_, v_a_2871_);
v___x_2874_ = ((size_t)1ULL);
v___x_2875_ = lean_usize_add(v_i_2858_, v___x_2874_);
v_i_2858_ = v___x_2875_;
v_b_2860_ = v___x_2873_;
v___y_2866_ = v_a_2872_;
goto _start;
}
else
{
lean_object* v_a_2877_; lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2885_; 
lean_dec_ref(v___y_2861_);
lean_dec_ref(v_b_2860_);
lean_dec_ref(v___x_2856_);
v_a_2877_ = lean_ctor_get(v___x_2870_, 0);
v_a_2878_ = lean_ctor_get(v___x_2870_, 1);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2870_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2880_ = v___x_2870_;
v_isShared_2881_ = v_isSharedCheck_2885_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_inc(v_a_2877_);
lean_dec(v___x_2870_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2885_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2883_; 
if (v_isShared_2881_ == 0)
{
v___x_2883_ = v___x_2880_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_a_2877_);
lean_ctor_set(v_reuseFailAlloc_2884_, 1, v_a_2878_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
return v___x_2883_;
}
}
}
}
else
{
lean_object* v___x_2886_; 
lean_dec_ref(v___y_2861_);
lean_dec_ref(v___x_2856_);
v___x_2886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2886_, 0, v_b_2860_);
lean_ctor_set(v___x_2886_, 1, v___y_2866_);
return v___x_2886_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4___boxed(lean_object* v___x_2887_, lean_object* v_as_2888_, lean_object* v_i_2889_, lean_object* v_stop_2890_, lean_object* v_b_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_){
_start:
{
size_t v_i_boxed_2899_; size_t v_stop_boxed_2900_; lean_object* v_res_2901_; 
v_i_boxed_2899_ = lean_unbox_usize(v_i_2889_);
lean_dec(v_i_2889_);
v_stop_boxed_2900_ = lean_unbox_usize(v_stop_2890_);
lean_dec(v_stop_2890_);
v_res_2901_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v___x_2887_, v_as_2888_, v_i_boxed_2899_, v_stop_boxed_2900_, v_b_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec(v___y_2894_);
lean_dec(v___y_2893_);
lean_dec_ref(v_as_2888_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(lean_object* v___x_2902_, lean_object* v_as_2903_, size_t v_i_2904_, size_t v_stop_2905_, lean_object* v_b_2906_){
_start:
{
lean_object* v___y_2908_; uint8_t v___x_2912_; 
v___x_2912_ = lean_usize_dec_eq(v_i_2904_, v_stop_2905_);
if (v___x_2912_ == 0)
{
lean_object* v_toConfigDecl_2913_; lean_object* v_name_2914_; lean_object* v_kind_2915_; lean_object* v_config_2916_; lean_object* v___x_2917_; uint8_t v___x_2918_; 
v_toConfigDecl_2913_ = lean_array_uget_borrowed(v_as_2903_, v_i_2904_);
v_name_2914_ = lean_ctor_get(v_toConfigDecl_2913_, 1);
v_kind_2915_ = lean_ctor_get(v_toConfigDecl_2913_, 2);
v_config_2916_ = lean_ctor_get(v_toConfigDecl_2913_, 3);
v___x_2917_ = l_Lake_ExternLib_keyword;
v___x_2918_ = lean_name_eq(v_kind_2915_, v___x_2917_);
if (v___x_2918_ == 0)
{
v___y_2908_ = v_b_2906_;
goto v___jp_2907_;
}
else
{
lean_object* v___x_2919_; lean_object* v___x_2920_; 
lean_inc(v_config_2916_);
lean_inc(v_name_2914_);
lean_inc_ref(v___x_2902_);
v___x_2919_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2902_);
lean_ctor_set(v___x_2919_, 1, v_name_2914_);
lean_ctor_set(v___x_2919_, 2, v_config_2916_);
v___x_2920_ = lean_array_push(v_b_2906_, v___x_2919_);
v___y_2908_ = v___x_2920_;
goto v___jp_2907_;
}
}
else
{
lean_dec_ref(v___x_2902_);
return v_b_2906_;
}
v___jp_2907_:
{
size_t v___x_2909_; size_t v___x_2910_; 
v___x_2909_ = ((size_t)1ULL);
v___x_2910_ = lean_usize_add(v_i_2904_, v___x_2909_);
v_i_2904_ = v___x_2910_;
v_b_2906_ = v___y_2908_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3___boxed(lean_object* v___x_2921_, lean_object* v_as_2922_, lean_object* v_i_2923_, lean_object* v_stop_2924_, lean_object* v_b_2925_){
_start:
{
size_t v_i_boxed_2926_; size_t v_stop_boxed_2927_; lean_object* v_res_2928_; 
v_i_boxed_2926_ = lean_unbox_usize(v_i_2923_);
lean_dec(v_i_2923_);
v_stop_boxed_2927_ = lean_unbox_usize(v_stop_2924_);
lean_dec(v_stop_2924_);
v_res_2928_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v___x_2921_, v_as_2922_, v_i_boxed_2926_, v_stop_boxed_2927_, v_b_2925_);
lean_dec_ref(v_as_2922_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(lean_object* v_as_2929_, size_t v_i_2930_, size_t v_stop_2931_, lean_object* v_b_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_){
_start:
{
uint8_t v___x_2940_; 
v___x_2940_ = lean_usize_dec_eq(v_i_2930_, v_stop_2931_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2941_; lean_object* v_lib_2942_; lean_object* v_config_2943_; lean_object* v_nativeFacets_2944_; uint8_t v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; size_t v_sz_2948_; size_t v___x_2949_; lean_object* v___x_2950_; 
v___x_2941_ = lean_array_uget_borrowed(v_as_2929_, v_i_2930_);
v_lib_2942_ = lean_ctor_get(v___x_2941_, 0);
v_config_2943_ = lean_ctor_get(v_lib_2942_, 2);
v_nativeFacets_2944_ = lean_ctor_get(v_config_2943_, 8);
v___x_2945_ = 1;
v___x_2946_ = lean_box(v___x_2945_);
lean_inc_ref(v_nativeFacets_2944_);
v___x_2947_ = lean_apply_1(v_nativeFacets_2944_, v___x_2946_);
v_sz_2948_ = lean_array_size(v___x_2947_);
v___x_2949_ = ((size_t)0ULL);
lean_inc_ref(v___y_2933_);
lean_inc(v___x_2941_);
v___x_2950_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v___x_2941_, v_sz_2948_, v___x_2949_, v___x_2947_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v_a_2951_; lean_object* v_a_2952_; lean_object* v___x_2953_; size_t v___x_2954_; size_t v___x_2955_; 
v_a_2951_ = lean_ctor_get(v___x_2950_, 0);
lean_inc(v_a_2951_);
v_a_2952_ = lean_ctor_get(v___x_2950_, 1);
lean_inc(v_a_2952_);
lean_dec_ref_known(v___x_2950_, 2);
v___x_2953_ = l_Array_append___redArg(v_b_2932_, v_a_2951_);
lean_dec(v_a_2951_);
v___x_2954_ = ((size_t)1ULL);
v___x_2955_ = lean_usize_add(v_i_2930_, v___x_2954_);
v_i_2930_ = v___x_2955_;
v_b_2932_ = v___x_2953_;
v___y_2938_ = v_a_2952_;
goto _start;
}
else
{
lean_dec_ref(v___y_2933_);
lean_dec_ref(v_b_2932_);
return v___x_2950_;
}
}
else
{
lean_object* v___x_2957_; 
lean_dec_ref(v___y_2933_);
v___x_2957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2957_, 0, v_b_2932_);
lean_ctor_set(v___x_2957_, 1, v___y_2938_);
return v___x_2957_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9___boxed(lean_object* v_as_2958_, lean_object* v_i_2959_, lean_object* v_stop_2960_, lean_object* v_b_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_){
_start:
{
size_t v_i_boxed_2969_; size_t v_stop_boxed_2970_; lean_object* v_res_2971_; 
v_i_boxed_2969_ = lean_unbox_usize(v_i_2959_);
lean_dec(v_i_2959_);
v_stop_boxed_2970_ = lean_unbox_usize(v_stop_2960_);
lean_dec(v_stop_2960_);
v_res_2971_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_as_2958_, v_i_boxed_2969_, v_stop_boxed_2970_, v_b_2961_, v___y_2962_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_);
lean_dec_ref(v___y_2966_);
lean_dec(v___y_2965_);
lean_dec(v___y_2964_);
lean_dec(v___y_2963_);
lean_dec_ref(v_as_2958_);
return v_res_2971_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(lean_object* v_self_2972_, lean_object* v_dir_2973_, lean_object* v___x_2974_, lean_object* v_targetDecls_2975_, lean_object* v_pkg_2976_, lean_object* v_name_2977_, lean_object* v___x_2978_, lean_object* v_config_2979_, lean_object* v_config_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_){
_start:
{
lean_object* v_a_2989_; lean_object* v_a_2990_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v_a_3000_; lean_object* v_a_3001_; lean_object* v___y_3019_; lean_object* v___y_3020_; lean_object* v___y_3021_; lean_object* v___y_3022_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; lean_object* v___y_3027_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v_a_3048_; lean_object* v_a_3049_; lean_object* v___y_3057_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3060_; lean_object* v___y_3061_; lean_object* v___y_3062_; lean_object* v___y_3063_; lean_object* v___y_3064_; lean_object* v___y_3065_; lean_object* v___y_3066_; lean_object* v_snd_3067_; lean_object* v_a_3068_; lean_object* v___y_3080_; lean_object* v___y_3081_; lean_object* v___y_3082_; lean_object* v___y_3083_; lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v___y_3087_; lean_object* v___y_3088_; lean_object* v___y_3089_; lean_object* v_a_3090_; lean_object* v_a_3091_; lean_object* v___x_3114_; 
lean_inc_ref(v___y_2981_);
lean_inc_ref(v___y_2985_);
lean_inc(v___y_2984_);
lean_inc(v___y_2983_);
lean_inc(v___x_2974_);
v___x_3114_ = lean_apply_7(v___y_2981_, v___x_2978_, v___x_2974_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_, lean_box(0));
if (lean_obj_tag(v___x_3114_) == 0)
{
lean_object* v_a_3115_; lean_object* v_a_3116_; lean_object* v___x_3117_; 
v_a_3115_ = lean_ctor_get(v___x_3114_, 0);
lean_inc(v_a_3115_);
v_a_3116_ = lean_ctor_get(v___x_3114_, 1);
lean_inc(v_a_3116_);
lean_dec_ref_known(v___x_3114_, 2);
v___x_3117_ = l_Lake_Job_await___redArg(v_a_3115_, v_a_3116_);
if (lean_obj_tag(v___x_3117_) == 0)
{
lean_object* v_a_3118_; lean_object* v_a_3119_; lean_object* v___y_3121_; lean_object* v___y_3122_; lean_object* v___y_3123_; lean_object* v___y_3124_; lean_object* v___y_3125_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v___y_3128_; lean_object* v___y_3129_; lean_object* v_a_3130_; lean_object* v_a_3131_; lean_object* v_a_3143_; lean_object* v_a_3144_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; uint8_t v___x_3178_; 
v_a_3118_ = lean_ctor_get(v___x_3117_, 0);
lean_inc(v_a_3118_);
v_a_3119_ = lean_ctor_get(v___x_3117_, 1);
lean_inc(v_a_3119_);
lean_dec_ref_known(v___x_3117_, 2);
v___x_3175_ = lean_unsigned_to_nat(0u);
v___x_3176_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_3177_ = lean_array_get_size(v_a_3118_);
v___x_3178_ = lean_nat_dec_lt(v___x_3175_, v___x_3177_);
if (v___x_3178_ == 0)
{
v_a_3143_ = v___x_3176_;
v_a_3144_ = v_a_3119_;
goto v___jp_3142_;
}
else
{
size_t v___x_3179_; size_t v___x_3180_; lean_object* v___x_3181_; 
v___x_3179_ = ((size_t)0ULL);
v___x_3180_ = lean_usize_of_nat(v___x_3177_);
lean_inc_ref(v___y_2981_);
v___x_3181_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_a_3118_, v___x_3179_, v___x_3180_, v___x_3176_, v___y_2981_, v___x_2974_, v___y_2983_, v___y_2984_, v___y_2985_, v_a_3119_);
if (lean_obj_tag(v___x_3181_) == 0)
{
lean_object* v_a_3182_; lean_object* v_a_3183_; 
v_a_3182_ = lean_ctor_get(v___x_3181_, 0);
lean_inc(v_a_3182_);
v_a_3183_ = lean_ctor_get(v___x_3181_, 1);
lean_inc(v_a_3183_);
lean_dec_ref_known(v___x_3181_, 2);
v_a_3143_ = v_a_3182_;
v_a_3144_ = v_a_3183_;
goto v___jp_3142_;
}
else
{
lean_object* v_a_3184_; lean_object* v_a_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3192_; 
lean_dec(v_a_3118_);
lean_dec_ref(v___y_2981_);
lean_dec_ref(v_config_2979_);
lean_dec(v_name_2977_);
lean_dec_ref(v_pkg_2976_);
lean_dec(v___x_2974_);
lean_dec_ref(v_dir_2973_);
lean_dec_ref(v_self_2972_);
v_a_3184_ = lean_ctor_get(v___x_3181_, 0);
v_a_3185_ = lean_ctor_get(v___x_3181_, 1);
v_isSharedCheck_3192_ = !lean_is_exclusive(v___x_3181_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3187_ = v___x_3181_;
v_isShared_3188_ = v_isSharedCheck_3192_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_a_3185_);
lean_inc(v_a_3184_);
lean_dec(v___x_3181_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3192_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v___x_3190_; 
if (v_isShared_3188_ == 0)
{
v___x_3190_ = v___x_3187_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v_a_3184_);
lean_ctor_set(v_reuseFailAlloc_3191_, 1, v_a_3185_);
v___x_3190_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
return v___x_3190_;
}
}
}
}
v___jp_3120_:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; uint8_t v___x_3134_; 
v___x_3132_ = l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5;
v___x_3133_ = lean_array_get_size(v_a_3118_);
v___x_3134_ = lean_nat_dec_lt(v___y_3127_, v___x_3133_);
if (v___x_3134_ == 0)
{
lean_dec(v_a_3118_);
v___y_3080_ = v___y_3121_;
v___y_3081_ = v___y_3122_;
v___y_3082_ = v___y_3123_;
v___y_3083_ = v___y_3124_;
v___y_3084_ = v___y_3125_;
v___y_3085_ = v___y_3126_;
v___y_3086_ = v___y_3127_;
v___y_3087_ = v___y_3128_;
v___y_3088_ = v_a_3130_;
v___y_3089_ = v___y_3129_;
v_a_3090_ = v___x_3132_;
v_a_3091_ = v_a_3131_;
goto v___jp_3079_;
}
else
{
size_t v___x_3135_; size_t v___x_3136_; lean_object* v___x_3137_; 
v___x_3135_ = ((size_t)0ULL);
v___x_3136_ = lean_usize_of_nat(v___x_3133_);
lean_inc_ref(v___y_2981_);
v___x_3137_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_a_3118_, v___x_3135_, v___x_3136_, v___x_3132_, v___y_2981_, v___x_2974_, v___y_2983_, v___y_2984_, v___y_2985_, v_a_3131_);
lean_dec(v_a_3118_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_a_3138_; lean_object* v_a_3139_; 
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3138_);
v_a_3139_ = lean_ctor_get(v___x_3137_, 1);
lean_inc(v_a_3139_);
lean_dec_ref_known(v___x_3137_, 2);
v___y_3080_ = v___y_3121_;
v___y_3081_ = v___y_3122_;
v___y_3082_ = v___y_3123_;
v___y_3083_ = v___y_3124_;
v___y_3084_ = v___y_3125_;
v___y_3085_ = v___y_3126_;
v___y_3086_ = v___y_3127_;
v___y_3087_ = v___y_3128_;
v___y_3088_ = v_a_3130_;
v___y_3089_ = v___y_3129_;
v_a_3090_ = v_a_3138_;
v_a_3091_ = v_a_3139_;
goto v___jp_3079_;
}
else
{
lean_object* v_a_3140_; lean_object* v_a_3141_; 
lean_dec_ref(v_a_3130_);
lean_dec_ref(v___y_3128_);
lean_dec_ref(v___y_3126_);
lean_dec_ref(v___y_3124_);
lean_dec_ref(v___y_3123_);
lean_dec_ref(v___y_3122_);
lean_dec_ref(v___y_2981_);
lean_dec(v_name_2977_);
lean_dec_ref(v_pkg_2976_);
lean_dec(v___x_2974_);
lean_dec_ref(v_dir_2973_);
lean_dec_ref(v_self_2972_);
v_a_3140_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3140_);
v_a_3141_ = lean_ctor_get(v___x_3137_, 1);
lean_inc(v_a_3141_);
lean_dec_ref_known(v___x_3137_, 2);
v_a_2989_ = v_a_3140_;
v_a_2990_ = v_a_3141_;
goto v___jp_2988_;
}
}
}
v___jp_3142_:
{
lean_object* v_toLeanConfig_3145_; lean_object* v_toLeanConfig_3146_; lean_object* v_buildDir_3147_; lean_object* v_nativeLibDir_3148_; lean_object* v_moreLinkObjs_3149_; lean_object* v_moreLinkLibs_3150_; lean_object* v_moreLinkArgs_3151_; lean_object* v_weakLinkArgs_3152_; lean_object* v_moreLinkObjs_3153_; lean_object* v_moreLinkLibs_3154_; lean_object* v_moreLinkArgs_3155_; lean_object* v_weakLinkArgs_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; uint8_t v___x_3160_; 
v_toLeanConfig_3145_ = lean_ctor_get(v_config_2979_, 1);
lean_inc_ref(v_toLeanConfig_3145_);
v_toLeanConfig_3146_ = lean_ctor_get(v_config_2980_, 0);
v_buildDir_3147_ = lean_ctor_get(v_config_2979_, 5);
lean_inc_ref(v_buildDir_3147_);
v_nativeLibDir_3148_ = lean_ctor_get(v_config_2979_, 7);
lean_inc_ref(v_nativeLibDir_3148_);
lean_dec_ref(v_config_2979_);
v_moreLinkObjs_3149_ = lean_ctor_get(v_toLeanConfig_3145_, 6);
lean_inc_ref(v_moreLinkObjs_3149_);
v_moreLinkLibs_3150_ = lean_ctor_get(v_toLeanConfig_3145_, 7);
lean_inc_ref(v_moreLinkLibs_3150_);
v_moreLinkArgs_3151_ = lean_ctor_get(v_toLeanConfig_3145_, 8);
lean_inc_ref(v_moreLinkArgs_3151_);
v_weakLinkArgs_3152_ = lean_ctor_get(v_toLeanConfig_3145_, 9);
lean_inc_ref(v_weakLinkArgs_3152_);
lean_dec_ref(v_toLeanConfig_3145_);
v_moreLinkObjs_3153_ = lean_ctor_get(v_toLeanConfig_3146_, 6);
v_moreLinkLibs_3154_ = lean_ctor_get(v_toLeanConfig_3146_, 7);
v_moreLinkArgs_3155_ = lean_ctor_get(v_toLeanConfig_3146_, 8);
v_weakLinkArgs_3156_ = lean_ctor_get(v_toLeanConfig_3146_, 9);
v___x_3157_ = l_Array_append___redArg(v_moreLinkObjs_3149_, v_moreLinkObjs_3153_);
v___x_3158_ = lean_unsigned_to_nat(0u);
v___x_3159_ = lean_array_get_size(v___x_3157_);
v___x_3160_ = lean_nat_dec_lt(v___x_3158_, v___x_3159_);
if (v___x_3160_ == 0)
{
lean_dec_ref(v___x_3157_);
v___y_3121_ = v_weakLinkArgs_3156_;
v___y_3122_ = v_nativeLibDir_3148_;
v___y_3123_ = v_weakLinkArgs_3152_;
v___y_3124_ = v_buildDir_3147_;
v___y_3125_ = v_moreLinkLibs_3154_;
v___y_3126_ = v_moreLinkLibs_3150_;
v___y_3127_ = v___x_3158_;
v___y_3128_ = v_moreLinkArgs_3151_;
v___y_3129_ = v_moreLinkArgs_3155_;
v_a_3130_ = v_a_3143_;
v_a_3131_ = v_a_3144_;
goto v___jp_3120_;
}
else
{
size_t v___x_3161_; size_t v___x_3162_; lean_object* v___x_3163_; 
v___x_3161_ = ((size_t)0ULL);
v___x_3162_ = lean_usize_of_nat(v___x_3159_);
lean_inc_ref(v___y_2981_);
lean_inc_ref(v_pkg_2976_);
v___x_3163_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v_pkg_2976_, v___x_3157_, v___x_3161_, v___x_3162_, v_a_3143_, v___y_2981_, v___x_2974_, v___y_2983_, v___y_2984_, v___y_2985_, v_a_3144_);
lean_dec_ref(v___x_3157_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_a_3164_; lean_object* v_a_3165_; 
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
lean_inc(v_a_3164_);
v_a_3165_ = lean_ctor_get(v___x_3163_, 1);
lean_inc(v_a_3165_);
lean_dec_ref_known(v___x_3163_, 2);
v___y_3121_ = v_weakLinkArgs_3156_;
v___y_3122_ = v_nativeLibDir_3148_;
v___y_3123_ = v_weakLinkArgs_3152_;
v___y_3124_ = v_buildDir_3147_;
v___y_3125_ = v_moreLinkLibs_3154_;
v___y_3126_ = v_moreLinkLibs_3150_;
v___y_3127_ = v___x_3158_;
v___y_3128_ = v_moreLinkArgs_3151_;
v___y_3129_ = v_moreLinkArgs_3155_;
v_a_3130_ = v_a_3164_;
v_a_3131_ = v_a_3165_;
goto v___jp_3120_;
}
else
{
lean_object* v_a_3166_; lean_object* v_a_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3174_; 
lean_dec_ref(v_weakLinkArgs_3152_);
lean_dec_ref(v_moreLinkArgs_3151_);
lean_dec_ref(v_moreLinkLibs_3150_);
lean_dec_ref(v_nativeLibDir_3148_);
lean_dec_ref(v_buildDir_3147_);
lean_dec(v_a_3118_);
lean_dec_ref(v___y_2981_);
lean_dec(v_name_2977_);
lean_dec_ref(v_pkg_2976_);
lean_dec(v___x_2974_);
lean_dec_ref(v_dir_2973_);
lean_dec_ref(v_self_2972_);
v_a_3166_ = lean_ctor_get(v___x_3163_, 0);
v_a_3167_ = lean_ctor_get(v___x_3163_, 1);
v_isSharedCheck_3174_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3169_ = v___x_3163_;
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_a_3167_);
lean_inc(v_a_3166_);
lean_dec(v___x_3163_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3172_; 
if (v_isShared_3170_ == 0)
{
v___x_3172_ = v___x_3169_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_a_3166_);
lean_ctor_set(v_reuseFailAlloc_3173_, 1, v_a_3167_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
return v___x_3172_;
}
}
}
}
}
}
else
{
lean_object* v_a_3193_; lean_object* v_a_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3201_; 
lean_dec_ref(v___y_2981_);
lean_dec_ref(v_config_2979_);
lean_dec(v_name_2977_);
lean_dec_ref(v_pkg_2976_);
lean_dec(v___x_2974_);
lean_dec_ref(v_dir_2973_);
lean_dec_ref(v_self_2972_);
v_a_3193_ = lean_ctor_get(v___x_3117_, 0);
v_a_3194_ = lean_ctor_get(v___x_3117_, 1);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___x_3117_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3196_ = v___x_3117_;
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_a_3194_);
lean_inc(v_a_3193_);
lean_dec(v___x_3117_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3199_; 
if (v_isShared_3197_ == 0)
{
v___x_3199_ = v___x_3196_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_a_3193_);
lean_ctor_set(v_reuseFailAlloc_3200_, 1, v_a_3194_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
}
else
{
lean_object* v_a_3202_; lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
lean_dec_ref(v___y_2981_);
lean_dec_ref(v_config_2979_);
lean_dec(v_name_2977_);
lean_dec_ref(v_pkg_2976_);
lean_dec(v___x_2974_);
lean_dec_ref(v_dir_2973_);
lean_dec_ref(v_self_2972_);
v_a_3202_ = lean_ctor_get(v___x_3114_, 0);
v_a_3203_ = lean_ctor_get(v___x_3114_, 1);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3114_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_inc(v_a_3202_);
lean_dec(v___x_3114_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3202_);
lean_ctor_set(v_reuseFailAlloc_3209_, 1, v_a_3203_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
v___jp_2988_:
{
lean_object* v___x_2991_; 
v___x_2991_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2991_, 0, v_a_2989_);
lean_ctor_set(v___x_2991_, 1, v_a_2990_);
return v___x_2991_;
}
v___jp_2992_:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; uint8_t v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; uint8_t v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; 
lean_inc_ref(v_self_2972_);
v___x_3002_ = l_Lake_LeanLib_libName(v_self_2972_);
v___x_3003_ = l_System_FilePath_normalize(v___y_2996_);
v___x_3004_ = l_Lake_joinRelative(v_dir_2973_, v___x_3003_);
v___x_3005_ = l_System_FilePath_normalize(v___y_2994_);
v___x_3006_ = l_Lake_joinRelative(v___x_3004_, v___x_3005_);
v___x_3007_ = 0;
v___x_3008_ = l_Lake_nameToSharedLib(v___x_3002_, v___x_3007_);
v___x_3009_ = l_Lake_joinRelative(v___x_3006_, v___x_3008_);
v___x_3010_ = l_Array_append___redArg(v___y_2995_, v___y_2993_);
v___x_3011_ = l_Array_append___redArg(v___y_2997_, v___y_2999_);
v___x_3012_ = l_Lake_LeanLib_isPlugin(v_self_2972_);
v___x_3013_ = l_System_Platform_isWindows;
v___x_3014_ = lean_box(0);
v___x_3015_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___closed__1);
v___x_3016_ = l_Lake_buildLeanSharedLib(v___x_3002_, v___x_3009_, v___y_2998_, v_a_3000_, v___x_3010_, v___x_3011_, v___x_3012_, v___x_3013_, v___x_3014_, v___y_2981_, v___x_2974_, v___y_2983_, v___y_2984_, v___y_2985_, v___x_3015_);
lean_dec(v___x_2974_);
lean_dec_ref(v___y_2998_);
v___x_3017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3016_);
lean_ctor_set(v___x_3017_, 1, v_a_3001_);
return v___x_3017_;
}
v___jp_3018_:
{
lean_object* v___x_3030_; uint8_t v___x_3031_; 
v___x_3030_ = lean_array_get_size(v___y_3029_);
v___x_3031_ = lean_nat_dec_lt(v___y_3024_, v___x_3030_);
if (v___x_3031_ == 0)
{
lean_dec_ref(v___y_3029_);
v___y_2993_ = v___y_3019_;
v___y_2994_ = v___y_3020_;
v___y_2995_ = v___y_3023_;
v___y_2996_ = v___y_3022_;
v___y_2997_ = v___y_3025_;
v___y_2998_ = v___y_3028_;
v___y_2999_ = v___y_3027_;
v_a_3000_ = v___y_3021_;
v_a_3001_ = v___y_3026_;
goto v___jp_2992_;
}
else
{
size_t v___x_3032_; size_t v___x_3033_; lean_object* v___x_3034_; 
v___x_3032_ = ((size_t)0ULL);
v___x_3033_ = lean_usize_of_nat(v___x_3030_);
lean_inc_ref(v___y_2981_);
v___x_3034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v___y_3029_, v___x_3032_, v___x_3033_, v___y_3021_, v___y_2981_, v___x_2974_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_3026_);
lean_dec_ref(v___y_3029_);
if (lean_obj_tag(v___x_3034_) == 0)
{
lean_object* v_a_3035_; lean_object* v_a_3036_; 
v_a_3035_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3035_);
v_a_3036_ = lean_ctor_get(v___x_3034_, 1);
lean_inc(v_a_3036_);
lean_dec_ref_known(v___x_3034_, 2);
v___y_2993_ = v___y_3019_;
v___y_2994_ = v___y_3020_;
v___y_2995_ = v___y_3023_;
v___y_2996_ = v___y_3022_;
v___y_2997_ = v___y_3025_;
v___y_2998_ = v___y_3028_;
v___y_2999_ = v___y_3027_;
v_a_3000_ = v_a_3035_;
v_a_3001_ = v_a_3036_;
goto v___jp_2992_;
}
else
{
lean_object* v_a_3037_; lean_object* v_a_3038_; 
lean_dec_ref(v___y_3028_);
lean_dec_ref(v___y_3025_);
lean_dec_ref(v___y_3023_);
lean_dec_ref(v___y_3022_);
lean_dec_ref(v___y_3020_);
lean_dec_ref(v___y_2981_);
lean_dec(v___x_2974_);
lean_dec_ref(v_dir_2973_);
lean_dec_ref(v_self_2972_);
v_a_3037_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3037_);
v_a_3038_ = lean_ctor_get(v___x_3034_, 1);
lean_inc(v_a_3038_);
lean_dec_ref_known(v___x_3034_, 2);
v_a_2989_ = v_a_3037_;
v_a_2990_ = v_a_3038_;
goto v___jp_2988_;
}
}
}
v___jp_3039_:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; uint8_t v___x_3052_; 
v___x_3050_ = lean_mk_empty_array_with_capacity(v___y_3044_);
v___x_3051_ = lean_array_get_size(v_targetDecls_2975_);
v___x_3052_ = lean_nat_dec_lt(v___y_3044_, v___x_3051_);
if (v___x_3052_ == 0)
{
lean_dec_ref(v_pkg_2976_);
v___y_3019_ = v___y_3040_;
v___y_3020_ = v___y_3041_;
v___y_3021_ = v_a_3048_;
v___y_3022_ = v___y_3043_;
v___y_3023_ = v___y_3042_;
v___y_3024_ = v___y_3044_;
v___y_3025_ = v___y_3045_;
v___y_3026_ = v_a_3049_;
v___y_3027_ = v___y_3047_;
v___y_3028_ = v___y_3046_;
v___y_3029_ = v___x_3050_;
goto v___jp_3018_;
}
else
{
size_t v___x_3053_; size_t v___x_3054_; lean_object* v___x_3055_; 
v___x_3053_ = ((size_t)0ULL);
v___x_3054_ = lean_usize_of_nat(v___x_3051_);
v___x_3055_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v_pkg_2976_, v_targetDecls_2975_, v___x_3053_, v___x_3054_, v___x_3050_);
v___y_3019_ = v___y_3040_;
v___y_3020_ = v___y_3041_;
v___y_3021_ = v_a_3048_;
v___y_3022_ = v___y_3043_;
v___y_3023_ = v___y_3042_;
v___y_3024_ = v___y_3044_;
v___y_3025_ = v___y_3045_;
v___y_3026_ = v_a_3049_;
v___y_3027_ = v___y_3047_;
v___y_3028_ = v___y_3046_;
v___y_3029_ = v___x_3055_;
goto v___jp_3018_;
}
}
v___jp_3056_:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; uint8_t v___x_3071_; 
v___x_3069_ = l_Array_append___redArg(v___y_3062_, v___y_3061_);
v___x_3070_ = lean_array_get_size(v___x_3069_);
v___x_3071_ = lean_nat_dec_lt(v___y_3063_, v___x_3070_);
if (v___x_3071_ == 0)
{
lean_dec_ref(v___x_3069_);
v___y_3040_ = v___y_3057_;
v___y_3041_ = v___y_3058_;
v___y_3042_ = v___y_3060_;
v___y_3043_ = v___y_3059_;
v___y_3044_ = v___y_3063_;
v___y_3045_ = v___y_3064_;
v___y_3046_ = v___y_3066_;
v___y_3047_ = v___y_3065_;
v_a_3048_ = v_snd_3067_;
v_a_3049_ = v_a_3068_;
goto v___jp_3039_;
}
else
{
size_t v___x_3072_; size_t v___x_3073_; lean_object* v___x_3074_; 
v___x_3072_ = ((size_t)0ULL);
v___x_3073_ = lean_usize_of_nat(v___x_3070_);
lean_inc_ref(v___y_2981_);
lean_inc_ref(v_pkg_2976_);
v___x_3074_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v_pkg_2976_, v___x_3069_, v___x_3072_, v___x_3073_, v_snd_3067_, v___y_2981_, v___x_2974_, v___y_2983_, v___y_2984_, v___y_2985_, v_a_3068_);
lean_dec_ref(v___x_3069_);
if (lean_obj_tag(v___x_3074_) == 0)
{
lean_object* v_a_3075_; lean_object* v_a_3076_; 
v_a_3075_ = lean_ctor_get(v___x_3074_, 0);
lean_inc(v_a_3075_);
v_a_3076_ = lean_ctor_get(v___x_3074_, 1);
lean_inc(v_a_3076_);
lean_dec_ref_known(v___x_3074_, 2);
v___y_3040_ = v___y_3057_;
v___y_3041_ = v___y_3058_;
v___y_3042_ = v___y_3060_;
v___y_3043_ = v___y_3059_;
v___y_3044_ = v___y_3063_;
v___y_3045_ = v___y_3064_;
v___y_3046_ = v___y_3066_;
v___y_3047_ = v___y_3065_;
v_a_3048_ = v_a_3075_;
v_a_3049_ = v_a_3076_;
goto v___jp_3039_;
}
else
{
lean_object* v_a_3077_; lean_object* v_a_3078_; 
lean_dec_ref(v___y_3066_);
lean_dec_ref(v___y_3064_);
lean_dec_ref(v___y_3060_);
lean_dec_ref(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec_ref(v___y_2981_);
lean_dec_ref(v_pkg_2976_);
lean_dec(v___x_2974_);
lean_dec_ref(v_dir_2973_);
lean_dec_ref(v_self_2972_);
v_a_3077_ = lean_ctor_get(v___x_3074_, 0);
lean_inc(v_a_3077_);
v_a_3078_ = lean_ctor_get(v___x_3074_, 1);
lean_inc(v_a_3078_);
lean_dec_ref_known(v___x_3074_, 2);
v_a_2989_ = v_a_3077_;
v_a_2990_ = v_a_3078_;
goto v___jp_2988_;
}
}
}
v___jp_3079_:
{
lean_object* v_toArray_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3112_; 
v_toArray_3092_ = lean_ctor_get(v_a_3090_, 1);
v_isSharedCheck_3112_ = !lean_is_exclusive(v_a_3090_);
if (v_isSharedCheck_3112_ == 0)
{
lean_object* v_unused_3113_; 
v_unused_3113_ = lean_ctor_get(v_a_3090_, 0);
lean_dec(v_unused_3113_);
v___x_3094_ = v_a_3090_;
v_isShared_3095_ = v_isSharedCheck_3112_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_toArray_3092_);
lean_dec(v_a_3090_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3112_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; uint8_t v___x_3098_; 
v___x_3096_ = lean_mk_empty_array_with_capacity(v___y_3086_);
v___x_3097_ = lean_array_get_size(v_toArray_3092_);
v___x_3098_ = lean_nat_dec_lt(v___y_3086_, v___x_3097_);
if (v___x_3098_ == 0)
{
lean_del_object(v___x_3094_);
lean_dec_ref(v_toArray_3092_);
lean_dec(v_name_2977_);
v___y_3057_ = v___y_3080_;
v___y_3058_ = v___y_3081_;
v___y_3059_ = v___y_3083_;
v___y_3060_ = v___y_3082_;
v___y_3061_ = v___y_3084_;
v___y_3062_ = v___y_3085_;
v___y_3063_ = v___y_3086_;
v___y_3064_ = v___y_3087_;
v___y_3065_ = v___y_3089_;
v___y_3066_ = v___y_3088_;
v_snd_3067_ = v___x_3096_;
v_a_3068_ = v_a_3091_;
goto v___jp_3056_;
}
else
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3102_; 
v___x_3099_ = l_Lean_NameSet_empty;
v___x_3100_ = l_Lean_NameSet_insert(v___x_3099_, v_name_2977_);
if (v_isShared_3095_ == 0)
{
lean_ctor_set(v___x_3094_, 1, v___x_3096_);
lean_ctor_set(v___x_3094_, 0, v___x_3100_);
v___x_3102_ = v___x_3094_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v___x_3100_);
lean_ctor_set(v_reuseFailAlloc_3111_, 1, v___x_3096_);
v___x_3102_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
size_t v___x_3103_; size_t v___x_3104_; lean_object* v___x_3105_; 
v___x_3103_ = ((size_t)0ULL);
v___x_3104_ = lean_usize_of_nat(v___x_3097_);
lean_inc_ref(v___y_2981_);
v___x_3105_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_toArray_3092_, v___x_3103_, v___x_3104_, v___x_3102_, v___y_2981_, v___x_2974_, v___y_2983_, v___y_2984_, v___y_2985_, v_a_3091_);
lean_dec_ref(v_toArray_3092_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v_a_3106_; lean_object* v_a_3107_; lean_object* v_snd_3108_; 
v_a_3106_ = lean_ctor_get(v___x_3105_, 0);
lean_inc(v_a_3106_);
v_a_3107_ = lean_ctor_get(v___x_3105_, 1);
lean_inc(v_a_3107_);
lean_dec_ref_known(v___x_3105_, 2);
v_snd_3108_ = lean_ctor_get(v_a_3106_, 1);
lean_inc(v_snd_3108_);
lean_dec(v_a_3106_);
v___y_3057_ = v___y_3080_;
v___y_3058_ = v___y_3081_;
v___y_3059_ = v___y_3083_;
v___y_3060_ = v___y_3082_;
v___y_3061_ = v___y_3084_;
v___y_3062_ = v___y_3085_;
v___y_3063_ = v___y_3086_;
v___y_3064_ = v___y_3087_;
v___y_3065_ = v___y_3089_;
v___y_3066_ = v___y_3088_;
v_snd_3067_ = v_snd_3108_;
v_a_3068_ = v_a_3107_;
goto v___jp_3056_;
}
else
{
lean_object* v_a_3109_; lean_object* v_a_3110_; 
lean_dec_ref(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec_ref(v___y_3085_);
lean_dec_ref(v___y_3083_);
lean_dec_ref(v___y_3082_);
lean_dec_ref(v___y_3081_);
lean_dec_ref(v___y_2981_);
lean_dec_ref(v_pkg_2976_);
lean_dec(v___x_2974_);
lean_dec_ref(v_dir_2973_);
lean_dec_ref(v_self_2972_);
v_a_3109_ = lean_ctor_get(v___x_3105_, 0);
lean_inc(v_a_3109_);
v_a_3110_ = lean_ctor_get(v___x_3105_, 1);
lean_inc(v_a_3110_);
lean_dec_ref_known(v___x_3105_, 2);
v_a_2989_ = v_a_3109_;
v_a_2990_ = v_a_3110_;
goto v___jp_2988_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed(lean_object* v_self_3211_, lean_object* v_dir_3212_, lean_object* v___x_3213_, lean_object* v_targetDecls_3214_, lean_object* v_pkg_3215_, lean_object* v_name_3216_, lean_object* v___x_3217_, lean_object* v_config_3218_, lean_object* v_config_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_){
_start:
{
lean_object* v_res_3227_; 
v_res_3227_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(v_self_3211_, v_dir_3212_, v___x_3213_, v_targetDecls_3214_, v_pkg_3215_, v_name_3216_, v___x_3217_, v_config_3218_, v_config_3219_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
lean_dec_ref(v___y_3224_);
lean_dec(v___y_3223_);
lean_dec(v___y_3222_);
lean_dec(v___y_3221_);
lean_dec(v_config_3219_);
lean_dec_ref(v_targetDecls_3214_);
return v_res_3227_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(lean_object* v_self_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_, lean_object* v_a_3232_, lean_object* v_a_3233_, lean_object* v_a_3234_, lean_object* v_a_3235_){
_start:
{
lean_object* v_pkg_3237_; lean_object* v_name_3238_; lean_object* v_config_3239_; lean_object* v_keyName_3240_; lean_object* v_dir_3241_; lean_object* v_config_3242_; lean_object* v_targetDecls_3243_; lean_object* v___x_3244_; uint8_t v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___f_3254_; uint8_t v___x_3255_; lean_object* v___x_3256_; 
v_pkg_3237_ = lean_ctor_get(v_self_3229_, 0);
lean_inc_ref_n(v_pkg_3237_, 2);
v_name_3238_ = lean_ctor_get(v_self_3229_, 1);
lean_inc_n(v_name_3238_, 3);
v_config_3239_ = lean_ctor_get(v_self_3229_, 2);
lean_inc(v_config_3239_);
v_keyName_3240_ = lean_ctor_get(v_pkg_3237_, 2);
v_dir_3241_ = lean_ctor_get(v_pkg_3237_, 4);
lean_inc_ref(v_dir_3241_);
v_config_3242_ = lean_ctor_get(v_pkg_3237_, 6);
lean_inc_ref(v_config_3242_);
v_targetDecls_3243_ = lean_ctor_get(v_pkg_3237_, 15);
lean_inc_ref(v_targetDecls_3243_);
v___x_3244_ = l_Lake_instDataKindDynlib;
v___x_3245_ = 1;
v___x_3246_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3238_, v___x_3245_);
v___x_3247_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0));
v___x_3248_ = lean_string_append(v___x_3246_, v___x_3247_);
v___x_3249_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_3240_);
v___x_3250_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3250_, 0, v_keyName_3240_);
lean_ctor_set(v___x_3250_, 1, v_name_3238_);
v___x_3251_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_3229_);
v___x_3252_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3250_);
lean_ctor_set(v___x_3252_, 1, v___x_3251_);
lean_ctor_set(v___x_3252_, 2, v_self_3229_);
lean_ctor_set(v___x_3252_, 3, v___x_3249_);
v___x_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3253_, 0, v_pkg_3237_);
v___f_3254_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed), 16, 9);
lean_closure_set(v___f_3254_, 0, v_self_3229_);
lean_closure_set(v___f_3254_, 1, v_dir_3241_);
lean_closure_set(v___f_3254_, 2, v___x_3253_);
lean_closure_set(v___f_3254_, 3, v_targetDecls_3243_);
lean_closure_set(v___f_3254_, 4, v_pkg_3237_);
lean_closure_set(v___f_3254_, 5, v_name_3238_);
lean_closure_set(v___f_3254_, 6, v___x_3252_);
lean_closure_set(v___f_3254_, 7, v_config_3242_);
lean_closure_set(v___f_3254_, 8, v_config_3239_);
v___x_3255_ = 0;
v___x_3256_ = l_Lake_ensureJob___redArg(v___x_3244_, v___f_3254_, v_a_3230_, v_a_3231_, v_a_3232_, v_a_3233_, v_a_3234_, v_a_3235_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v_a_3257_; lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3281_; 
v_a_3257_ = lean_ctor_get(v___x_3256_, 0);
v_a_3258_ = lean_ctor_get(v___x_3256_, 1);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3260_ = v___x_3256_;
v_isShared_3261_ = v_isSharedCheck_3281_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_inc(v_a_3257_);
lean_dec(v___x_3256_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3281_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v_task_3262_; lean_object* v_kind_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3279_; 
v_task_3262_ = lean_ctor_get(v_a_3257_, 0);
v_kind_3263_ = lean_ctor_get(v_a_3257_, 1);
v_isSharedCheck_3279_ = !lean_is_exclusive(v_a_3257_);
if (v_isSharedCheck_3279_ == 0)
{
lean_object* v_unused_3280_; 
v_unused_3280_ = lean_ctor_get(v_a_3257_, 2);
lean_dec(v_unused_3280_);
v___x_3265_ = v_a_3257_;
v_isShared_3266_ = v_isSharedCheck_3279_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_kind_3263_);
lean_inc(v_task_3262_);
lean_dec(v_a_3257_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3279_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v_registeredJobs_3267_; lean_object* v_job_3269_; 
v_registeredJobs_3267_ = lean_ctor_get(v_a_3234_, 4);
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 2, v___x_3248_);
v_job_3269_ = v___x_3265_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v_task_3262_);
lean_ctor_set(v_reuseFailAlloc_3278_, 1, v_kind_3263_);
lean_ctor_set(v_reuseFailAlloc_3278_, 2, v___x_3248_);
v_job_3269_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3276_; 
lean_ctor_set_uint8(v_job_3269_, sizeof(void*)*3, v___x_3255_);
v___x_3270_ = lean_st_ref_take(v_registeredJobs_3267_);
lean_inc_ref(v_job_3269_);
v___x_3271_ = l_Lake_Job_toOpaque___redArg(v_job_3269_);
v___x_3272_ = lean_array_push(v___x_3270_, v___x_3271_);
v___x_3273_ = lean_st_ref_put(v_registeredJobs_3267_, v___x_3272_);
v___x_3274_ = l_Lake_Job_renew___redArg(v_job_3269_);
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 0, v___x_3274_);
v___x_3276_ = v___x_3260_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v___x_3274_);
lean_ctor_set(v_reuseFailAlloc_3277_, 1, v_a_3258_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
return v___x_3276_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3248_);
return v___x_3256_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed(lean_object* v_self_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_, lean_object* v_a_3287_, lean_object* v_a_3288_, lean_object* v_a_3289_){
_start:
{
lean_object* v_res_3290_; 
v_res_3290_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(v_self_3282_, v_a_3283_, v_a_3284_, v_a_3285_, v_a_3286_, v_a_3287_, v_a_3288_);
lean_dec_ref(v_a_3287_);
lean_dec(v_a_3286_);
lean_dec(v_a_3285_);
lean_dec(v_a_3284_);
return v_res_3290_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(uint8_t v_fmt_3291_, lean_object* v_a_3292_){
_start:
{
if (v_fmt_3291_ == 0)
{
lean_object* v_path_3293_; 
v_path_3293_ = lean_ctor_get(v_a_3292_, 0);
lean_inc_ref(v_path_3293_);
return v_path_3293_;
}
else
{
lean_object* v_path_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; 
v_path_3294_ = lean_ctor_get(v_a_3292_, 0);
lean_inc_ref(v_path_3294_);
v___x_3295_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3295_, 0, v_path_3294_);
v___x_3296_ = l_Lean_Json_compress(v___x_3295_);
return v___x_3296_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed(lean_object* v_fmt_3297_, lean_object* v_a_3298_){
_start:
{
uint8_t v_fmt_boxed_3299_; lean_object* v_res_3300_; 
v_fmt_boxed_3299_ = lean_unbox(v_fmt_3297_);
v_res_3300_ = l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(v_fmt_boxed_3299_, v_a_3298_);
lean_dec_ref(v_a_3298_);
return v_res_3300_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_3303_; uint8_t v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___f_3303_ = ((lean_object*)(l_Lake_LeanLib_sharedFacetConfig___closed__0));
v___x_3304_ = 1;
v___x_3305_ = l_Lake_instDataKindDynlib;
v___x_3306_ = ((lean_object*)(l_Lake_LeanLib_sharedFacetConfig___closed__1));
v___x_3307_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3308_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3308_, 0, v___x_3307_);
lean_ctor_set(v___x_3308_, 1, v___x_3306_);
lean_ctor_set(v___x_3308_, 2, v___x_3305_);
lean_ctor_set(v___x_3308_, 3, v___f_3303_);
lean_ctor_set_uint8(v___x_3308_, sizeof(void*)*4, v___x_3304_);
lean_ctor_set_uint8(v___x_3308_, sizeof(void*)*4 + 1, v___x_3304_);
return v___x_3308_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacetConfig(void){
_start:
{
lean_object* v___x_3309_; 
v___x_3309_ = lean_obj_once(&l_Lake_LeanLib_sharedFacetConfig___closed__2, &l_Lake_LeanLib_sharedFacetConfig___closed__2_once, _init_l_Lake_LeanLib_sharedFacetConfig___closed__2);
return v___x_3309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(lean_object* v___x_3310_, lean_object* v_as_3311_, size_t v_sz_3312_, size_t v_i_3313_, lean_object* v_b_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_){
_start:
{
uint8_t v___x_3322_; 
v___x_3322_ = lean_usize_dec_lt(v_i_3313_, v_sz_3312_);
if (v___x_3322_ == 0)
{
lean_object* v___x_3323_; 
lean_dec_ref(v___y_3315_);
lean_dec_ref(v___x_3310_);
v___x_3323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3323_, 0, v_b_3314_);
lean_ctor_set(v___x_3323_, 1, v___y_3320_);
return v___x_3323_;
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3325_; 
v_a_3324_ = lean_array_uget_borrowed(v_as_3311_, v_i_3313_);
lean_inc_ref(v___y_3315_);
lean_inc_n(v_a_3324_, 2);
lean_inc_ref(v___x_3310_);
v___x_3325_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v___x_3310_, v_a_3324_, v_a_3324_, v___x_3322_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
if (lean_obj_tag(v___x_3325_) == 0)
{
lean_object* v_a_3326_; lean_object* v_a_3327_; lean_object* v_snd_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; size_t v___x_3331_; size_t v___x_3332_; 
v_a_3326_ = lean_ctor_get(v___x_3325_, 0);
lean_inc(v_a_3326_);
v_a_3327_ = lean_ctor_get(v___x_3325_, 1);
lean_inc(v_a_3327_);
lean_dec_ref_known(v___x_3325_, 2);
v_snd_3328_ = lean_ctor_get(v_a_3326_, 1);
lean_inc(v_snd_3328_);
lean_dec(v_a_3326_);
v___x_3329_ = l_Lake_Job_toOpaque___redArg(v_snd_3328_);
v___x_3330_ = l_Lake_Job_mix___redArg(v_b_3314_, v___x_3329_);
v___x_3331_ = ((size_t)1ULL);
v___x_3332_ = lean_usize_add(v_i_3313_, v___x_3331_);
v_i_3313_ = v___x_3332_;
v_b_3314_ = v___x_3330_;
v___y_3320_ = v_a_3327_;
goto _start;
}
else
{
lean_object* v_a_3334_; lean_object* v_a_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3342_; 
lean_dec_ref(v___y_3315_);
lean_dec_ref(v_b_3314_);
lean_dec_ref(v___x_3310_);
v_a_3334_ = lean_ctor_get(v___x_3325_, 0);
v_a_3335_ = lean_ctor_get(v___x_3325_, 1);
v_isSharedCheck_3342_ = !lean_is_exclusive(v___x_3325_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3337_ = v___x_3325_;
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_a_3335_);
lean_inc(v_a_3334_);
lean_dec(v___x_3325_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3340_; 
if (v_isShared_3338_ == 0)
{
v___x_3340_ = v___x_3337_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_a_3334_);
lean_ctor_set(v_reuseFailAlloc_3341_, 1, v_a_3335_);
v___x_3340_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
return v___x_3340_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1___boxed(lean_object* v___x_3343_, lean_object* v_as_3344_, lean_object* v_sz_3345_, lean_object* v_i_3346_, lean_object* v_b_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_){
_start:
{
size_t v_sz_boxed_3355_; size_t v_i_boxed_3356_; lean_object* v_res_3357_; 
v_sz_boxed_3355_ = lean_unbox_usize(v_sz_3345_);
lean_dec(v_sz_3345_);
v_i_boxed_3356_ = lean_unbox_usize(v_i_3346_);
lean_dec(v_i_3346_);
v_res_3357_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(v___x_3343_, v_as_3344_, v_sz_boxed_3355_, v_i_boxed_3356_, v_b_3347_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
lean_dec_ref(v___y_3352_);
lean_dec(v___y_3351_);
lean_dec(v___y_3350_);
lean_dec(v___y_3349_);
lean_dec_ref(v_as_3344_);
return v_res_3357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(lean_object* v___x_3358_, lean_object* v_as_3359_, size_t v_sz_3360_, size_t v_i_3361_, lean_object* v_b_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
uint8_t v___x_3370_; 
v___x_3370_ = lean_usize_dec_lt(v_i_3361_, v_sz_3360_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; 
lean_dec_ref(v___y_3363_);
lean_dec_ref(v___x_3358_);
v___x_3371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3371_, 0, v_b_3362_);
lean_ctor_set(v___x_3371_, 1, v___y_3368_);
return v___x_3371_;
}
else
{
lean_object* v_a_3372_; lean_object* v___x_3373_; 
v_a_3372_ = lean_array_uget_borrowed(v_as_3359_, v_i_3361_);
lean_inc_ref(v___y_3363_);
lean_inc(v_a_3372_);
lean_inc_ref(v___x_3358_);
v___x_3373_ = l_Lake_Package_fetchTargetJob(v___x_3358_, v_a_3372_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v_a_3374_; lean_object* v_a_3375_; lean_object* v___x_3376_; size_t v___x_3377_; size_t v___x_3378_; 
v_a_3374_ = lean_ctor_get(v___x_3373_, 0);
lean_inc(v_a_3374_);
v_a_3375_ = lean_ctor_get(v___x_3373_, 1);
lean_inc(v_a_3375_);
lean_dec_ref_known(v___x_3373_, 2);
v___x_3376_ = l_Lake_Job_mix___redArg(v_b_3362_, v_a_3374_);
v___x_3377_ = ((size_t)1ULL);
v___x_3378_ = lean_usize_add(v_i_3361_, v___x_3377_);
v_i_3361_ = v___x_3378_;
v_b_3362_ = v___x_3376_;
v___y_3368_ = v_a_3375_;
goto _start;
}
else
{
lean_object* v_a_3380_; lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_dec_ref(v___y_3363_);
lean_dec_ref(v_b_3362_);
lean_dec_ref(v___x_3358_);
v_a_3380_ = lean_ctor_get(v___x_3373_, 0);
v_a_3381_ = lean_ctor_get(v___x_3373_, 1);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3383_ = v___x_3373_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_inc(v_a_3380_);
lean_dec(v___x_3373_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3380_);
lean_ctor_set(v_reuseFailAlloc_3387_, 1, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0___boxed(lean_object* v___x_3389_, lean_object* v_as_3390_, lean_object* v_sz_3391_, lean_object* v_i_3392_, lean_object* v_b_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_){
_start:
{
size_t v_sz_boxed_3401_; size_t v_i_boxed_3402_; lean_object* v_res_3403_; 
v_sz_boxed_3401_ = lean_unbox_usize(v_sz_3391_);
lean_dec(v_sz_3391_);
v_i_boxed_3402_ = lean_unbox_usize(v_i_3392_);
lean_dec(v_i_3392_);
v_res_3403_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(v___x_3389_, v_as_3390_, v_sz_boxed_3401_, v_i_boxed_3402_, v_b_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_, v___y_3398_, v___y_3399_);
lean_dec_ref(v___y_3398_);
lean_dec(v___y_3397_);
lean_dec(v___y_3396_);
lean_dec(v___y_3395_);
lean_dec_ref(v_as_3390_);
return v_res_3403_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(lean_object* v_self_3406_, lean_object* v_a_3407_, lean_object* v_a_3408_, lean_object* v_a_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_){
_start:
{
lean_object* v_pkg_3414_; lean_object* v_name_3415_; lean_object* v_config_3416_; lean_object* v_baseName_3417_; lean_object* v_keyName_3418_; uint8_t v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; uint8_t v___x_3431_; uint8_t v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v_job_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; 
v_pkg_3414_ = lean_ctor_get(v_self_3406_, 0);
lean_inc_ref_n(v_pkg_3414_, 2);
v_name_3415_ = lean_ctor_get(v_self_3406_, 1);
lean_inc(v_name_3415_);
v_config_3416_ = lean_ctor_get(v_self_3406_, 2);
lean_inc(v_config_3416_);
lean_dec_ref(v_self_3406_);
v_baseName_3417_ = lean_ctor_get(v_pkg_3414_, 1);
v_keyName_3418_ = lean_ctor_get(v_pkg_3414_, 2);
v___x_3419_ = 1;
lean_inc(v_baseName_3417_);
v___x_3420_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_3417_, v___x_3419_);
v___x_3421_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0));
v___x_3422_ = lean_string_append(v___x_3420_, v___x_3421_);
v___x_3423_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3415_, v___x_3419_);
v___x_3424_ = lean_string_append(v___x_3422_, v___x_3423_);
lean_dec_ref(v___x_3423_);
v___x_3425_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1));
v___x_3426_ = lean_string_append(v___x_3424_, v___x_3425_);
v___x_3427_ = lean_box(0);
v___x_3428_ = lean_box(0);
v___x_3429_ = lean_unsigned_to_nat(0u);
v___x_3430_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildElabArts___closed__0));
v___x_3431_ = 0;
v___x_3432_ = 0;
v___x_3433_ = l_Lake_BuildTrace_nil(v___x_3426_);
v___x_3434_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_3434_, 0, v___x_3430_);
lean_ctor_set(v___x_3434_, 1, v___x_3433_);
lean_ctor_set(v___x_3434_, 2, v___x_3429_);
lean_ctor_set_uint8(v___x_3434_, sizeof(void*)*3, v___x_3431_);
lean_ctor_set_uint8(v___x_3434_, sizeof(void*)*3 + 1, v___x_3432_);
lean_ctor_set_uint8(v___x_3434_, sizeof(void*)*3 + 2, v___x_3432_);
v___x_3435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3435_, 0, v___x_3427_);
lean_ctor_set(v___x_3435_, 1, v___x_3434_);
v___x_3436_ = lean_task_pure(v___x_3435_);
v___x_3437_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v_job_3438_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_job_3438_, 0, v___x_3436_);
lean_ctor_set(v_job_3438_, 1, v___x_3428_);
lean_ctor_set(v_job_3438_, 2, v___x_3437_);
lean_ctor_set_uint8(v_job_3438_, sizeof(void*)*3, v___x_3432_);
v___x_3439_ = l_Lake_Package_extraDepFacet;
lean_inc(v_keyName_3418_);
v___x_3440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3440_, 0, v_keyName_3418_);
v___x_3441_ = l_Lake_Package_keyword;
v___x_3442_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3440_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
lean_ctor_set(v___x_3442_, 2, v_pkg_3414_);
lean_ctor_set(v___x_3442_, 3, v___x_3439_);
lean_inc_ref(v_a_3407_);
lean_inc_ref(v_a_3411_);
lean_inc(v_a_3410_);
lean_inc(v_a_3409_);
lean_inc(v_a_3408_);
v___x_3443_ = lean_apply_7(v_a_3407_, v___x_3442_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, lean_box(0));
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v_a_3444_; lean_object* v_a_3445_; lean_object* v_needs_3446_; lean_object* v_extraDepTargets_3447_; lean_object* v___x_3448_; size_t v_sz_3449_; size_t v___x_3450_; lean_object* v___x_3451_; 
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3444_);
v_a_3445_ = lean_ctor_get(v___x_3443_, 1);
lean_inc(v_a_3445_);
lean_dec_ref_known(v___x_3443_, 2);
v_needs_3446_ = lean_ctor_get(v_config_3416_, 5);
lean_inc_ref(v_needs_3446_);
v_extraDepTargets_3447_ = lean_ctor_get(v_config_3416_, 6);
lean_inc_ref(v_extraDepTargets_3447_);
lean_dec(v_config_3416_);
v___x_3448_ = l_Lake_Job_mix___redArg(v_job_3438_, v_a_3444_);
v_sz_3449_ = lean_array_size(v_extraDepTargets_3447_);
v___x_3450_ = ((size_t)0ULL);
lean_inc_ref(v_a_3407_);
lean_inc_ref(v_pkg_3414_);
v___x_3451_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(v_pkg_3414_, v_extraDepTargets_3447_, v_sz_3449_, v___x_3450_, v___x_3448_, v_a_3407_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3445_);
lean_dec_ref(v_extraDepTargets_3447_);
if (lean_obj_tag(v___x_3451_) == 0)
{
lean_object* v_a_3452_; lean_object* v_a_3453_; size_t v_sz_3454_; lean_object* v___x_3455_; 
v_a_3452_ = lean_ctor_get(v___x_3451_, 0);
lean_inc(v_a_3452_);
v_a_3453_ = lean_ctor_get(v___x_3451_, 1);
lean_inc(v_a_3453_);
lean_dec_ref_known(v___x_3451_, 2);
v_sz_3454_ = lean_array_size(v_needs_3446_);
v___x_3455_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(v_pkg_3414_, v_needs_3446_, v_sz_3454_, v___x_3450_, v_a_3452_, v_a_3407_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3453_);
lean_dec_ref(v_needs_3446_);
return v___x_3455_;
}
else
{
lean_dec_ref(v_needs_3446_);
lean_dec_ref(v_pkg_3414_);
lean_dec_ref(v_a_3407_);
return v___x_3451_;
}
}
else
{
lean_dec_ref_known(v_job_3438_, 3);
lean_dec(v_config_3416_);
lean_dec_ref(v_pkg_3414_);
lean_dec_ref(v_a_3407_);
return v___x_3443_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed(lean_object* v_self_3456_, lean_object* v_a_3457_, lean_object* v_a_3458_, lean_object* v_a_3459_, lean_object* v_a_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_){
_start:
{
lean_object* v_res_3464_; 
v_res_3464_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(v_self_3456_, v_a_3457_, v_a_3458_, v_a_3459_, v_a_3460_, v_a_3461_, v_a_3462_);
lean_dec_ref(v_a_3461_);
lean_dec(v_a_3460_);
lean_dec(v_a_3459_);
lean_dec(v_a_3458_);
return v_res_3464_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3466_; uint8_t v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; 
v___f_3466_ = ((lean_object*)(l_Lake_LeanLib_elabArtsFacetConfig___closed__0));
v___x_3467_ = 1;
v___x_3468_ = l_Lake_instDataKindUnit;
v___x_3469_ = ((lean_object*)(l_Lake_LeanLib_extraDepFacetConfig___closed__0));
v___x_3470_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3471_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3471_, 0, v___x_3470_);
lean_ctor_set(v___x_3471_, 1, v___x_3469_);
lean_ctor_set(v___x_3471_, 2, v___x_3468_);
lean_ctor_set(v___x_3471_, 3, v___f_3466_);
lean_ctor_set_uint8(v___x_3471_, sizeof(void*)*4, v___x_3467_);
lean_ctor_set_uint8(v___x_3471_, sizeof(void*)*4 + 1, v___x_3467_);
return v___x_3471_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacetConfig(void){
_start:
{
lean_object* v___x_3472_; 
v___x_3472_ = lean_obj_once(&l_Lake_LeanLib_extraDepFacetConfig___closed__1, &l_Lake_LeanLib_extraDepFacetConfig___closed__1_once, _init_l_Lake_LeanLib_extraDepFacetConfig___closed__1);
return v___x_3472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(lean_object* v_self_3473_, size_t v_sz_3474_, size_t v_i_3475_, lean_object* v_bs_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_){
_start:
{
uint8_t v___x_3484_; 
v___x_3484_ = lean_usize_dec_lt(v_i_3475_, v_sz_3474_);
if (v___x_3484_ == 0)
{
lean_object* v___x_3485_; 
lean_dec_ref(v___y_3477_);
lean_dec_ref(v_self_3473_);
v___x_3485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3485_, 0, v_bs_3476_);
lean_ctor_set(v___x_3485_, 1, v___y_3482_);
return v___x_3485_;
}
else
{
lean_object* v_pkg_3486_; lean_object* v_name_3487_; lean_object* v_keyName_3488_; lean_object* v_v_3489_; lean_object* v___x_3490_; lean_object* v_bs_x27_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; 
v_pkg_3486_ = lean_ctor_get(v_self_3473_, 0);
v_name_3487_ = lean_ctor_get(v_self_3473_, 1);
v_keyName_3488_ = lean_ctor_get(v_pkg_3486_, 2);
v_v_3489_ = lean_array_uget(v_bs_3476_, v_i_3475_);
v___x_3490_ = lean_unsigned_to_nat(0u);
v_bs_x27_3491_ = lean_array_uset(v_bs_3476_, v_i_3475_, v___x_3490_);
lean_inc(v_name_3487_);
lean_inc(v_keyName_3488_);
v___x_3492_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3492_, 0, v_keyName_3488_);
lean_ctor_set(v___x_3492_, 1, v_name_3487_);
v___x_3493_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_3473_);
v___x_3494_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3492_);
lean_ctor_set(v___x_3494_, 1, v___x_3493_);
lean_ctor_set(v___x_3494_, 2, v_self_3473_);
lean_ctor_set(v___x_3494_, 3, v_v_3489_);
lean_inc_ref(v___y_3477_);
lean_inc_ref(v___y_3481_);
lean_inc(v___y_3480_);
lean_inc(v___y_3479_);
lean_inc(v___y_3478_);
v___x_3495_ = lean_apply_7(v___y_3477_, v___x_3494_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, lean_box(0));
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; lean_object* v_a_3497_; lean_object* v___x_3498_; size_t v___x_3499_; size_t v___x_3500_; lean_object* v___x_3501_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3496_);
v_a_3497_ = lean_ctor_get(v___x_3495_, 1);
lean_inc(v_a_3497_);
lean_dec_ref_known(v___x_3495_, 2);
v___x_3498_ = l_Lake_Job_toOpaque___redArg(v_a_3496_);
v___x_3499_ = ((size_t)1ULL);
v___x_3500_ = lean_usize_add(v_i_3475_, v___x_3499_);
v___x_3501_ = lean_array_uset(v_bs_x27_3491_, v_i_3475_, v___x_3498_);
v_i_3475_ = v___x_3500_;
v_bs_3476_ = v___x_3501_;
v___y_3482_ = v_a_3497_;
goto _start;
}
else
{
lean_object* v_a_3503_; lean_object* v_a_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3511_; 
lean_dec_ref(v_bs_x27_3491_);
lean_dec_ref(v___y_3477_);
lean_dec_ref(v_self_3473_);
v_a_3503_ = lean_ctor_get(v___x_3495_, 0);
v_a_3504_ = lean_ctor_get(v___x_3495_, 1);
v_isSharedCheck_3511_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3506_ = v___x_3495_;
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
else
{
lean_inc(v_a_3504_);
lean_inc(v_a_3503_);
lean_dec(v___x_3495_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
lean_object* v___x_3509_; 
if (v_isShared_3507_ == 0)
{
v___x_3509_ = v___x_3506_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_a_3503_);
lean_ctor_set(v_reuseFailAlloc_3510_, 1, v_a_3504_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0___boxed(lean_object* v_self_3512_, lean_object* v_sz_3513_, lean_object* v_i_3514_, lean_object* v_bs_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_){
_start:
{
size_t v_sz_boxed_3523_; size_t v_i_boxed_3524_; lean_object* v_res_3525_; 
v_sz_boxed_3523_ = lean_unbox_usize(v_sz_3513_);
lean_dec(v_sz_3513_);
v_i_boxed_3524_ = lean_unbox_usize(v_i_3514_);
lean_dec(v_i_3514_);
v_res_3525_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(v_self_3512_, v_sz_boxed_3523_, v_i_boxed_3524_, v_bs_3515_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_);
lean_dec_ref(v___y_3520_);
lean_dec(v___y_3519_);
lean_dec(v___y_3518_);
lean_dec(v___y_3517_);
return v_res_3525_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(lean_object* v_self_3527_, lean_object* v_a_3528_, lean_object* v_a_3529_, lean_object* v_a_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_){
_start:
{
lean_object* v_config_3535_; lean_object* v_defaultFacets_3536_; size_t v_sz_3537_; size_t v___x_3538_; lean_object* v___x_3539_; 
v_config_3535_ = lean_ctor_get(v_self_3527_, 2);
v_defaultFacets_3536_ = lean_ctor_get(v_config_3535_, 7);
lean_inc_ref(v_defaultFacets_3536_);
v_sz_3537_ = lean_array_size(v_defaultFacets_3536_);
v___x_3538_ = ((size_t)0ULL);
v___x_3539_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(v_self_3527_, v_sz_3537_, v___x_3538_, v_defaultFacets_3536_, v_a_3528_, v_a_3529_, v_a_3530_, v_a_3531_, v_a_3532_, v_a_3533_);
if (lean_obj_tag(v___x_3539_) == 0)
{
lean_object* v_a_3540_; lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3550_; 
v_a_3540_ = lean_ctor_get(v___x_3539_, 0);
v_a_3541_ = lean_ctor_get(v___x_3539_, 1);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3539_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3543_ = v___x_3539_;
v_isShared_3544_ = v_isSharedCheck_3550_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_inc(v_a_3540_);
lean_dec(v___x_3539_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3550_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3548_; 
v___x_3545_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0));
v___x_3546_ = l_Lake_Job_mixArray___redArg(v_a_3540_, v___x_3545_);
lean_dec(v_a_3540_);
if (v_isShared_3544_ == 0)
{
lean_ctor_set(v___x_3543_, 0, v___x_3546_);
v___x_3548_ = v___x_3543_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v___x_3546_);
lean_ctor_set(v_reuseFailAlloc_3549_, 1, v_a_3541_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
else
{
lean_object* v_a_3551_; lean_object* v_a_3552_; lean_object* v___x_3554_; uint8_t v_isShared_3555_; uint8_t v_isSharedCheck_3559_; 
v_a_3551_ = lean_ctor_get(v___x_3539_, 0);
v_a_3552_ = lean_ctor_get(v___x_3539_, 1);
v_isSharedCheck_3559_ = !lean_is_exclusive(v___x_3539_);
if (v_isSharedCheck_3559_ == 0)
{
v___x_3554_ = v___x_3539_;
v_isShared_3555_ = v_isSharedCheck_3559_;
goto v_resetjp_3553_;
}
else
{
lean_inc(v_a_3552_);
lean_inc(v_a_3551_);
lean_dec(v___x_3539_);
v___x_3554_ = lean_box(0);
v_isShared_3555_ = v_isSharedCheck_3559_;
goto v_resetjp_3553_;
}
v_resetjp_3553_:
{
lean_object* v___x_3557_; 
if (v_isShared_3555_ == 0)
{
v___x_3557_ = v___x_3554_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v_a_3551_);
lean_ctor_set(v_reuseFailAlloc_3558_, 1, v_a_3552_);
v___x_3557_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
return v___x_3557_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed(lean_object* v_self_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_){
_start:
{
lean_object* v_res_3568_; 
v_res_3568_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(v_self_3560_, v_a_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
lean_dec(v_a_3563_);
lean_dec(v_a_3562_);
return v_res_3568_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3570_; uint8_t v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___f_3570_ = ((lean_object*)(l_Lake_LeanLib_elabArtsFacetConfig___closed__0));
v___x_3571_ = 1;
v___x_3572_ = l_Lake_instDataKindUnit;
v___x_3573_ = ((lean_object*)(l_Lake_LeanLib_defaultFacetConfig___closed__0));
v___x_3574_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3575_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3575_, 0, v___x_3574_);
lean_ctor_set(v___x_3575_, 1, v___x_3573_);
lean_ctor_set(v___x_3575_, 2, v___x_3572_);
lean_ctor_set(v___x_3575_, 3, v___f_3570_);
lean_ctor_set_uint8(v___x_3575_, sizeof(void*)*4, v___x_3571_);
lean_ctor_set_uint8(v___x_3575_, sizeof(void*)*4 + 1, v___x_3571_);
return v___x_3575_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacetConfig(void){
_start:
{
lean_object* v___x_3576_; 
v___x_3576_ = lean_obj_once(&l_Lake_LeanLib_defaultFacetConfig___closed__1, &l_Lake_LeanLib_defaultFacetConfig___closed__1_once, _init_l_Lake_LeanLib_defaultFacetConfig___closed__1);
return v___x_3576_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(lean_object* v_k_3577_, lean_object* v_v_3578_, lean_object* v_t_3579_){
_start:
{
if (lean_obj_tag(v_t_3579_) == 0)
{
lean_object* v_size_3580_; lean_object* v_k_3581_; lean_object* v_v_3582_; lean_object* v_l_3583_; lean_object* v_r_3584_; lean_object* v___x_3586_; uint8_t v_isShared_3587_; uint8_t v_isSharedCheck_3864_; 
v_size_3580_ = lean_ctor_get(v_t_3579_, 0);
v_k_3581_ = lean_ctor_get(v_t_3579_, 1);
v_v_3582_ = lean_ctor_get(v_t_3579_, 2);
v_l_3583_ = lean_ctor_get(v_t_3579_, 3);
v_r_3584_ = lean_ctor_get(v_t_3579_, 4);
v_isSharedCheck_3864_ = !lean_is_exclusive(v_t_3579_);
if (v_isSharedCheck_3864_ == 0)
{
v___x_3586_ = v_t_3579_;
v_isShared_3587_ = v_isSharedCheck_3864_;
goto v_resetjp_3585_;
}
else
{
lean_inc(v_r_3584_);
lean_inc(v_l_3583_);
lean_inc(v_v_3582_);
lean_inc(v_k_3581_);
lean_inc(v_size_3580_);
lean_dec(v_t_3579_);
v___x_3586_ = lean_box(0);
v_isShared_3587_ = v_isSharedCheck_3864_;
goto v_resetjp_3585_;
}
v_resetjp_3585_:
{
uint8_t v___x_3588_; 
v___x_3588_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3577_, v_k_3581_);
switch(v___x_3588_)
{
case 0:
{
lean_object* v_impl_3589_; lean_object* v___x_3590_; 
lean_dec(v_size_3580_);
v_impl_3589_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3577_, v_v_3578_, v_l_3583_);
v___x_3590_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_3584_) == 0)
{
lean_object* v_size_3591_; lean_object* v_size_3592_; lean_object* v_k_3593_; lean_object* v_v_3594_; lean_object* v_l_3595_; lean_object* v_r_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; uint8_t v___x_3599_; 
v_size_3591_ = lean_ctor_get(v_r_3584_, 0);
v_size_3592_ = lean_ctor_get(v_impl_3589_, 0);
v_k_3593_ = lean_ctor_get(v_impl_3589_, 1);
v_v_3594_ = lean_ctor_get(v_impl_3589_, 2);
v_l_3595_ = lean_ctor_get(v_impl_3589_, 3);
v_r_3596_ = lean_ctor_get(v_impl_3589_, 4);
lean_inc(v_r_3596_);
v___x_3597_ = lean_unsigned_to_nat(3u);
v___x_3598_ = lean_nat_mul(v___x_3597_, v_size_3591_);
v___x_3599_ = lean_nat_dec_lt(v___x_3598_, v_size_3592_);
lean_dec(v___x_3598_);
if (v___x_3599_ == 0)
{
lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3603_; 
lean_dec(v_r_3596_);
v___x_3600_ = lean_nat_add(v___x_3590_, v_size_3592_);
v___x_3601_ = lean_nat_add(v___x_3600_, v_size_3591_);
lean_dec(v___x_3600_);
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 3, v_impl_3589_);
lean_ctor_set(v___x_3586_, 0, v___x_3601_);
v___x_3603_ = v___x_3586_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v___x_3601_);
lean_ctor_set(v_reuseFailAlloc_3604_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3604_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3604_, 3, v_impl_3589_);
lean_ctor_set(v_reuseFailAlloc_3604_, 4, v_r_3584_);
v___x_3603_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
return v___x_3603_;
}
}
else
{
lean_object* v___x_3606_; uint8_t v_isShared_3607_; uint8_t v_isSharedCheck_3670_; 
lean_inc(v_l_3595_);
lean_inc(v_v_3594_);
lean_inc(v_k_3593_);
lean_inc(v_size_3592_);
v_isSharedCheck_3670_ = !lean_is_exclusive(v_impl_3589_);
if (v_isSharedCheck_3670_ == 0)
{
lean_object* v_unused_3671_; lean_object* v_unused_3672_; lean_object* v_unused_3673_; lean_object* v_unused_3674_; lean_object* v_unused_3675_; 
v_unused_3671_ = lean_ctor_get(v_impl_3589_, 4);
lean_dec(v_unused_3671_);
v_unused_3672_ = lean_ctor_get(v_impl_3589_, 3);
lean_dec(v_unused_3672_);
v_unused_3673_ = lean_ctor_get(v_impl_3589_, 2);
lean_dec(v_unused_3673_);
v_unused_3674_ = lean_ctor_get(v_impl_3589_, 1);
lean_dec(v_unused_3674_);
v_unused_3675_ = lean_ctor_get(v_impl_3589_, 0);
lean_dec(v_unused_3675_);
v___x_3606_ = v_impl_3589_;
v_isShared_3607_ = v_isSharedCheck_3670_;
goto v_resetjp_3605_;
}
else
{
lean_dec(v_impl_3589_);
v___x_3606_ = lean_box(0);
v_isShared_3607_ = v_isSharedCheck_3670_;
goto v_resetjp_3605_;
}
v_resetjp_3605_:
{
lean_object* v_size_3608_; lean_object* v_size_3609_; lean_object* v_k_3610_; lean_object* v_v_3611_; lean_object* v_l_3612_; lean_object* v_r_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; uint8_t v___x_3616_; 
v_size_3608_ = lean_ctor_get(v_l_3595_, 0);
v_size_3609_ = lean_ctor_get(v_r_3596_, 0);
v_k_3610_ = lean_ctor_get(v_r_3596_, 1);
v_v_3611_ = lean_ctor_get(v_r_3596_, 2);
v_l_3612_ = lean_ctor_get(v_r_3596_, 3);
v_r_3613_ = lean_ctor_get(v_r_3596_, 4);
v___x_3614_ = lean_unsigned_to_nat(2u);
v___x_3615_ = lean_nat_mul(v___x_3614_, v_size_3608_);
v___x_3616_ = lean_nat_dec_lt(v_size_3609_, v___x_3615_);
lean_dec(v___x_3615_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3645_; 
lean_inc(v_r_3613_);
lean_inc(v_l_3612_);
lean_inc(v_v_3611_);
lean_inc(v_k_3610_);
v_isSharedCheck_3645_ = !lean_is_exclusive(v_r_3596_);
if (v_isSharedCheck_3645_ == 0)
{
lean_object* v_unused_3646_; lean_object* v_unused_3647_; lean_object* v_unused_3648_; lean_object* v_unused_3649_; lean_object* v_unused_3650_; 
v_unused_3646_ = lean_ctor_get(v_r_3596_, 4);
lean_dec(v_unused_3646_);
v_unused_3647_ = lean_ctor_get(v_r_3596_, 3);
lean_dec(v_unused_3647_);
v_unused_3648_ = lean_ctor_get(v_r_3596_, 2);
lean_dec(v_unused_3648_);
v_unused_3649_ = lean_ctor_get(v_r_3596_, 1);
lean_dec(v_unused_3649_);
v_unused_3650_ = lean_ctor_get(v_r_3596_, 0);
lean_dec(v_unused_3650_);
v___x_3618_ = v_r_3596_;
v_isShared_3619_ = v_isSharedCheck_3645_;
goto v_resetjp_3617_;
}
else
{
lean_dec(v_r_3596_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3645_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___y_3623_; lean_object* v___y_3624_; lean_object* v___y_3625_; lean_object* v___x_3633_; lean_object* v___y_3635_; 
v___x_3620_ = lean_nat_add(v___x_3590_, v_size_3592_);
lean_dec(v_size_3592_);
v___x_3621_ = lean_nat_add(v___x_3620_, v_size_3591_);
lean_dec(v___x_3620_);
v___x_3633_ = lean_nat_add(v___x_3590_, v_size_3608_);
if (lean_obj_tag(v_l_3612_) == 0)
{
lean_object* v_size_3643_; 
v_size_3643_ = lean_ctor_get(v_l_3612_, 0);
lean_inc(v_size_3643_);
v___y_3635_ = v_size_3643_;
goto v___jp_3634_;
}
else
{
lean_object* v___x_3644_; 
v___x_3644_ = lean_unsigned_to_nat(0u);
v___y_3635_ = v___x_3644_;
goto v___jp_3634_;
}
v___jp_3622_:
{
lean_object* v___x_3626_; lean_object* v___x_3628_; 
v___x_3626_ = lean_nat_add(v___y_3624_, v___y_3625_);
lean_dec(v___y_3625_);
lean_dec(v___y_3624_);
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 4, v_r_3584_);
lean_ctor_set(v___x_3618_, 3, v_r_3613_);
lean_ctor_set(v___x_3618_, 2, v_v_3582_);
lean_ctor_set(v___x_3618_, 1, v_k_3581_);
lean_ctor_set(v___x_3618_, 0, v___x_3626_);
v___x_3628_ = v___x_3618_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v___x_3626_);
lean_ctor_set(v_reuseFailAlloc_3632_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3632_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3632_, 3, v_r_3613_);
lean_ctor_set(v_reuseFailAlloc_3632_, 4, v_r_3584_);
v___x_3628_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
lean_object* v___x_3630_; 
if (v_isShared_3607_ == 0)
{
lean_ctor_set(v___x_3606_, 4, v___x_3628_);
lean_ctor_set(v___x_3606_, 3, v___y_3623_);
lean_ctor_set(v___x_3606_, 2, v_v_3611_);
lean_ctor_set(v___x_3606_, 1, v_k_3610_);
lean_ctor_set(v___x_3606_, 0, v___x_3621_);
v___x_3630_ = v___x_3606_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v___x_3621_);
lean_ctor_set(v_reuseFailAlloc_3631_, 1, v_k_3610_);
lean_ctor_set(v_reuseFailAlloc_3631_, 2, v_v_3611_);
lean_ctor_set(v_reuseFailAlloc_3631_, 3, v___y_3623_);
lean_ctor_set(v_reuseFailAlloc_3631_, 4, v___x_3628_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
v___jp_3634_:
{
lean_object* v___x_3636_; lean_object* v___x_3638_; 
v___x_3636_ = lean_nat_add(v___x_3633_, v___y_3635_);
lean_dec(v___y_3635_);
lean_dec(v___x_3633_);
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 4, v_l_3612_);
lean_ctor_set(v___x_3586_, 3, v_l_3595_);
lean_ctor_set(v___x_3586_, 2, v_v_3594_);
lean_ctor_set(v___x_3586_, 1, v_k_3593_);
lean_ctor_set(v___x_3586_, 0, v___x_3636_);
v___x_3638_ = v___x_3586_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v___x_3636_);
lean_ctor_set(v_reuseFailAlloc_3642_, 1, v_k_3593_);
lean_ctor_set(v_reuseFailAlloc_3642_, 2, v_v_3594_);
lean_ctor_set(v_reuseFailAlloc_3642_, 3, v_l_3595_);
lean_ctor_set(v_reuseFailAlloc_3642_, 4, v_l_3612_);
v___x_3638_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
lean_object* v___x_3639_; 
v___x_3639_ = lean_nat_add(v___x_3590_, v_size_3591_);
if (lean_obj_tag(v_r_3613_) == 0)
{
lean_object* v_size_3640_; 
v_size_3640_ = lean_ctor_get(v_r_3613_, 0);
lean_inc(v_size_3640_);
v___y_3623_ = v___x_3638_;
v___y_3624_ = v___x_3639_;
v___y_3625_ = v_size_3640_;
goto v___jp_3622_;
}
else
{
lean_object* v___x_3641_; 
v___x_3641_ = lean_unsigned_to_nat(0u);
v___y_3623_ = v___x_3638_;
v___y_3624_ = v___x_3639_;
v___y_3625_ = v___x_3641_;
goto v___jp_3622_;
}
}
}
}
}
else
{
lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3656_; 
lean_del_object(v___x_3586_);
v___x_3651_ = lean_nat_add(v___x_3590_, v_size_3592_);
lean_dec(v_size_3592_);
v___x_3652_ = lean_nat_add(v___x_3651_, v_size_3591_);
lean_dec(v___x_3651_);
v___x_3653_ = lean_nat_add(v___x_3590_, v_size_3591_);
v___x_3654_ = lean_nat_add(v___x_3653_, v_size_3609_);
lean_dec(v___x_3653_);
lean_inc_ref(v_r_3584_);
if (v_isShared_3607_ == 0)
{
lean_ctor_set(v___x_3606_, 4, v_r_3584_);
lean_ctor_set(v___x_3606_, 3, v_r_3596_);
lean_ctor_set(v___x_3606_, 2, v_v_3582_);
lean_ctor_set(v___x_3606_, 1, v_k_3581_);
lean_ctor_set(v___x_3606_, 0, v___x_3654_);
v___x_3656_ = v___x_3606_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v___x_3654_);
lean_ctor_set(v_reuseFailAlloc_3669_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3669_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3669_, 3, v_r_3596_);
lean_ctor_set(v_reuseFailAlloc_3669_, 4, v_r_3584_);
v___x_3656_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3663_; 
v_isSharedCheck_3663_ = !lean_is_exclusive(v_r_3584_);
if (v_isSharedCheck_3663_ == 0)
{
lean_object* v_unused_3664_; lean_object* v_unused_3665_; lean_object* v_unused_3666_; lean_object* v_unused_3667_; lean_object* v_unused_3668_; 
v_unused_3664_ = lean_ctor_get(v_r_3584_, 4);
lean_dec(v_unused_3664_);
v_unused_3665_ = lean_ctor_get(v_r_3584_, 3);
lean_dec(v_unused_3665_);
v_unused_3666_ = lean_ctor_get(v_r_3584_, 2);
lean_dec(v_unused_3666_);
v_unused_3667_ = lean_ctor_get(v_r_3584_, 1);
lean_dec(v_unused_3667_);
v_unused_3668_ = lean_ctor_get(v_r_3584_, 0);
lean_dec(v_unused_3668_);
v___x_3658_ = v_r_3584_;
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
else
{
lean_dec(v_r_3584_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3661_; 
if (v_isShared_3659_ == 0)
{
lean_ctor_set(v___x_3658_, 4, v___x_3656_);
lean_ctor_set(v___x_3658_, 3, v_l_3595_);
lean_ctor_set(v___x_3658_, 2, v_v_3594_);
lean_ctor_set(v___x_3658_, 1, v_k_3593_);
lean_ctor_set(v___x_3658_, 0, v___x_3652_);
v___x_3661_ = v___x_3658_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v___x_3652_);
lean_ctor_set(v_reuseFailAlloc_3662_, 1, v_k_3593_);
lean_ctor_set(v_reuseFailAlloc_3662_, 2, v_v_3594_);
lean_ctor_set(v_reuseFailAlloc_3662_, 3, v_l_3595_);
lean_ctor_set(v_reuseFailAlloc_3662_, 4, v___x_3656_);
v___x_3661_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
return v___x_3661_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3676_; 
v_l_3676_ = lean_ctor_get(v_impl_3589_, 3);
if (lean_obj_tag(v_l_3676_) == 0)
{
lean_object* v_r_3677_; lean_object* v_k_3678_; lean_object* v_v_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3690_; 
lean_inc_ref(v_l_3676_);
v_r_3677_ = lean_ctor_get(v_impl_3589_, 4);
v_k_3678_ = lean_ctor_get(v_impl_3589_, 1);
v_v_3679_ = lean_ctor_get(v_impl_3589_, 2);
v_isSharedCheck_3690_ = !lean_is_exclusive(v_impl_3589_);
if (v_isSharedCheck_3690_ == 0)
{
lean_object* v_unused_3691_; lean_object* v_unused_3692_; 
v_unused_3691_ = lean_ctor_get(v_impl_3589_, 3);
lean_dec(v_unused_3691_);
v_unused_3692_ = lean_ctor_get(v_impl_3589_, 0);
lean_dec(v_unused_3692_);
v___x_3681_ = v_impl_3589_;
v_isShared_3682_ = v_isSharedCheck_3690_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_r_3677_);
lean_inc(v_v_3679_);
lean_inc(v_k_3678_);
lean_dec(v_impl_3589_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3690_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v___x_3683_; lean_object* v___x_3685_; 
v___x_3683_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_3677_);
if (v_isShared_3682_ == 0)
{
lean_ctor_set(v___x_3681_, 3, v_r_3677_);
lean_ctor_set(v___x_3681_, 2, v_v_3582_);
lean_ctor_set(v___x_3681_, 1, v_k_3581_);
lean_ctor_set(v___x_3681_, 0, v___x_3590_);
v___x_3685_ = v___x_3681_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v___x_3590_);
lean_ctor_set(v_reuseFailAlloc_3689_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3689_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3689_, 3, v_r_3677_);
lean_ctor_set(v_reuseFailAlloc_3689_, 4, v_r_3677_);
v___x_3685_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
lean_object* v___x_3687_; 
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 4, v___x_3685_);
lean_ctor_set(v___x_3586_, 3, v_l_3676_);
lean_ctor_set(v___x_3586_, 2, v_v_3679_);
lean_ctor_set(v___x_3586_, 1, v_k_3678_);
lean_ctor_set(v___x_3586_, 0, v___x_3683_);
v___x_3687_ = v___x_3586_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v___x_3683_);
lean_ctor_set(v_reuseFailAlloc_3688_, 1, v_k_3678_);
lean_ctor_set(v_reuseFailAlloc_3688_, 2, v_v_3679_);
lean_ctor_set(v_reuseFailAlloc_3688_, 3, v_l_3676_);
lean_ctor_set(v_reuseFailAlloc_3688_, 4, v___x_3685_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
}
else
{
lean_object* v_r_3693_; 
v_r_3693_ = lean_ctor_get(v_impl_3589_, 4);
lean_inc(v_r_3693_);
if (lean_obj_tag(v_r_3693_) == 0)
{
lean_object* v_k_3694_; lean_object* v_v_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3718_; 
lean_inc(v_l_3676_);
v_k_3694_ = lean_ctor_get(v_impl_3589_, 1);
v_v_3695_ = lean_ctor_get(v_impl_3589_, 2);
v_isSharedCheck_3718_ = !lean_is_exclusive(v_impl_3589_);
if (v_isSharedCheck_3718_ == 0)
{
lean_object* v_unused_3719_; lean_object* v_unused_3720_; lean_object* v_unused_3721_; 
v_unused_3719_ = lean_ctor_get(v_impl_3589_, 4);
lean_dec(v_unused_3719_);
v_unused_3720_ = lean_ctor_get(v_impl_3589_, 3);
lean_dec(v_unused_3720_);
v_unused_3721_ = lean_ctor_get(v_impl_3589_, 0);
lean_dec(v_unused_3721_);
v___x_3697_ = v_impl_3589_;
v_isShared_3698_ = v_isSharedCheck_3718_;
goto v_resetjp_3696_;
}
else
{
lean_inc(v_v_3695_);
lean_inc(v_k_3694_);
lean_dec(v_impl_3589_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3718_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
lean_object* v_k_3699_; lean_object* v_v_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3714_; 
v_k_3699_ = lean_ctor_get(v_r_3693_, 1);
v_v_3700_ = lean_ctor_get(v_r_3693_, 2);
v_isSharedCheck_3714_ = !lean_is_exclusive(v_r_3693_);
if (v_isSharedCheck_3714_ == 0)
{
lean_object* v_unused_3715_; lean_object* v_unused_3716_; lean_object* v_unused_3717_; 
v_unused_3715_ = lean_ctor_get(v_r_3693_, 4);
lean_dec(v_unused_3715_);
v_unused_3716_ = lean_ctor_get(v_r_3693_, 3);
lean_dec(v_unused_3716_);
v_unused_3717_ = lean_ctor_get(v_r_3693_, 0);
lean_dec(v_unused_3717_);
v___x_3702_ = v_r_3693_;
v_isShared_3703_ = v_isSharedCheck_3714_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_v_3700_);
lean_inc(v_k_3699_);
lean_dec(v_r_3693_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3714_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
lean_object* v___x_3704_; lean_object* v___x_3706_; 
v___x_3704_ = lean_unsigned_to_nat(3u);
if (v_isShared_3703_ == 0)
{
lean_ctor_set(v___x_3702_, 4, v_l_3676_);
lean_ctor_set(v___x_3702_, 3, v_l_3676_);
lean_ctor_set(v___x_3702_, 2, v_v_3695_);
lean_ctor_set(v___x_3702_, 1, v_k_3694_);
lean_ctor_set(v___x_3702_, 0, v___x_3590_);
v___x_3706_ = v___x_3702_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v___x_3590_);
lean_ctor_set(v_reuseFailAlloc_3713_, 1, v_k_3694_);
lean_ctor_set(v_reuseFailAlloc_3713_, 2, v_v_3695_);
lean_ctor_set(v_reuseFailAlloc_3713_, 3, v_l_3676_);
lean_ctor_set(v_reuseFailAlloc_3713_, 4, v_l_3676_);
v___x_3706_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
lean_object* v___x_3708_; 
if (v_isShared_3698_ == 0)
{
lean_ctor_set(v___x_3697_, 4, v_l_3676_);
lean_ctor_set(v___x_3697_, 2, v_v_3582_);
lean_ctor_set(v___x_3697_, 1, v_k_3581_);
lean_ctor_set(v___x_3697_, 0, v___x_3590_);
v___x_3708_ = v___x_3697_;
goto v_reusejp_3707_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v___x_3590_);
lean_ctor_set(v_reuseFailAlloc_3712_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3712_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3712_, 3, v_l_3676_);
lean_ctor_set(v_reuseFailAlloc_3712_, 4, v_l_3676_);
v___x_3708_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3707_;
}
v_reusejp_3707_:
{
lean_object* v___x_3710_; 
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 4, v___x_3708_);
lean_ctor_set(v___x_3586_, 3, v___x_3706_);
lean_ctor_set(v___x_3586_, 2, v_v_3700_);
lean_ctor_set(v___x_3586_, 1, v_k_3699_);
lean_ctor_set(v___x_3586_, 0, v___x_3704_);
v___x_3710_ = v___x_3586_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v___x_3704_);
lean_ctor_set(v_reuseFailAlloc_3711_, 1, v_k_3699_);
lean_ctor_set(v_reuseFailAlloc_3711_, 2, v_v_3700_);
lean_ctor_set(v_reuseFailAlloc_3711_, 3, v___x_3706_);
lean_ctor_set(v_reuseFailAlloc_3711_, 4, v___x_3708_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
}
}
else
{
lean_object* v___x_3722_; lean_object* v___x_3724_; 
v___x_3722_ = lean_unsigned_to_nat(2u);
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 4, v_r_3693_);
lean_ctor_set(v___x_3586_, 3, v_impl_3589_);
lean_ctor_set(v___x_3586_, 0, v___x_3722_);
v___x_3724_ = v___x_3586_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3722_);
lean_ctor_set(v_reuseFailAlloc_3725_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3725_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3725_, 3, v_impl_3589_);
lean_ctor_set(v_reuseFailAlloc_3725_, 4, v_r_3693_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
}
case 1:
{
lean_object* v___x_3727_; 
lean_dec(v_v_3582_);
lean_dec(v_k_3581_);
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 2, v_v_3578_);
lean_ctor_set(v___x_3586_, 1, v_k_3577_);
v___x_3727_ = v___x_3586_;
goto v_reusejp_3726_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v_size_3580_);
lean_ctor_set(v_reuseFailAlloc_3728_, 1, v_k_3577_);
lean_ctor_set(v_reuseFailAlloc_3728_, 2, v_v_3578_);
lean_ctor_set(v_reuseFailAlloc_3728_, 3, v_l_3583_);
lean_ctor_set(v_reuseFailAlloc_3728_, 4, v_r_3584_);
v___x_3727_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3726_;
}
v_reusejp_3726_:
{
return v___x_3727_;
}
}
default: 
{
lean_object* v_impl_3729_; lean_object* v___x_3730_; 
lean_dec(v_size_3580_);
v_impl_3729_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3577_, v_v_3578_, v_r_3584_);
v___x_3730_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_3583_) == 0)
{
lean_object* v_size_3731_; lean_object* v_size_3732_; lean_object* v_k_3733_; lean_object* v_v_3734_; lean_object* v_l_3735_; lean_object* v_r_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; uint8_t v___x_3739_; 
v_size_3731_ = lean_ctor_get(v_l_3583_, 0);
v_size_3732_ = lean_ctor_get(v_impl_3729_, 0);
v_k_3733_ = lean_ctor_get(v_impl_3729_, 1);
v_v_3734_ = lean_ctor_get(v_impl_3729_, 2);
v_l_3735_ = lean_ctor_get(v_impl_3729_, 3);
lean_inc(v_l_3735_);
v_r_3736_ = lean_ctor_get(v_impl_3729_, 4);
v___x_3737_ = lean_unsigned_to_nat(3u);
v___x_3738_ = lean_nat_mul(v___x_3737_, v_size_3731_);
v___x_3739_ = lean_nat_dec_lt(v___x_3738_, v_size_3732_);
lean_dec(v___x_3738_);
if (v___x_3739_ == 0)
{
lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3743_; 
lean_dec(v_l_3735_);
v___x_3740_ = lean_nat_add(v___x_3730_, v_size_3731_);
v___x_3741_ = lean_nat_add(v___x_3740_, v_size_3732_);
lean_dec(v___x_3740_);
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 4, v_impl_3729_);
lean_ctor_set(v___x_3586_, 0, v___x_3741_);
v___x_3743_ = v___x_3586_;
goto v_reusejp_3742_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v___x_3741_);
lean_ctor_set(v_reuseFailAlloc_3744_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3744_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3744_, 3, v_l_3583_);
lean_ctor_set(v_reuseFailAlloc_3744_, 4, v_impl_3729_);
v___x_3743_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3742_;
}
v_reusejp_3742_:
{
return v___x_3743_;
}
}
else
{
lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3808_; 
lean_inc(v_r_3736_);
lean_inc(v_v_3734_);
lean_inc(v_k_3733_);
lean_inc(v_size_3732_);
v_isSharedCheck_3808_ = !lean_is_exclusive(v_impl_3729_);
if (v_isSharedCheck_3808_ == 0)
{
lean_object* v_unused_3809_; lean_object* v_unused_3810_; lean_object* v_unused_3811_; lean_object* v_unused_3812_; lean_object* v_unused_3813_; 
v_unused_3809_ = lean_ctor_get(v_impl_3729_, 4);
lean_dec(v_unused_3809_);
v_unused_3810_ = lean_ctor_get(v_impl_3729_, 3);
lean_dec(v_unused_3810_);
v_unused_3811_ = lean_ctor_get(v_impl_3729_, 2);
lean_dec(v_unused_3811_);
v_unused_3812_ = lean_ctor_get(v_impl_3729_, 1);
lean_dec(v_unused_3812_);
v_unused_3813_ = lean_ctor_get(v_impl_3729_, 0);
lean_dec(v_unused_3813_);
v___x_3746_ = v_impl_3729_;
v_isShared_3747_ = v_isSharedCheck_3808_;
goto v_resetjp_3745_;
}
else
{
lean_dec(v_impl_3729_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3808_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
lean_object* v_size_3748_; lean_object* v_k_3749_; lean_object* v_v_3750_; lean_object* v_l_3751_; lean_object* v_r_3752_; lean_object* v_size_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; uint8_t v___x_3756_; 
v_size_3748_ = lean_ctor_get(v_l_3735_, 0);
v_k_3749_ = lean_ctor_get(v_l_3735_, 1);
v_v_3750_ = lean_ctor_get(v_l_3735_, 2);
v_l_3751_ = lean_ctor_get(v_l_3735_, 3);
v_r_3752_ = lean_ctor_get(v_l_3735_, 4);
v_size_3753_ = lean_ctor_get(v_r_3736_, 0);
v___x_3754_ = lean_unsigned_to_nat(2u);
v___x_3755_ = lean_nat_mul(v___x_3754_, v_size_3753_);
v___x_3756_ = lean_nat_dec_lt(v_size_3748_, v___x_3755_);
lean_dec(v___x_3755_);
if (v___x_3756_ == 0)
{
lean_object* v___x_3758_; uint8_t v_isShared_3759_; uint8_t v_isSharedCheck_3784_; 
lean_inc(v_r_3752_);
lean_inc(v_l_3751_);
lean_inc(v_v_3750_);
lean_inc(v_k_3749_);
v_isSharedCheck_3784_ = !lean_is_exclusive(v_l_3735_);
if (v_isSharedCheck_3784_ == 0)
{
lean_object* v_unused_3785_; lean_object* v_unused_3786_; lean_object* v_unused_3787_; lean_object* v_unused_3788_; lean_object* v_unused_3789_; 
v_unused_3785_ = lean_ctor_get(v_l_3735_, 4);
lean_dec(v_unused_3785_);
v_unused_3786_ = lean_ctor_get(v_l_3735_, 3);
lean_dec(v_unused_3786_);
v_unused_3787_ = lean_ctor_get(v_l_3735_, 2);
lean_dec(v_unused_3787_);
v_unused_3788_ = lean_ctor_get(v_l_3735_, 1);
lean_dec(v_unused_3788_);
v_unused_3789_ = lean_ctor_get(v_l_3735_, 0);
lean_dec(v_unused_3789_);
v___x_3758_ = v_l_3735_;
v_isShared_3759_ = v_isSharedCheck_3784_;
goto v_resetjp_3757_;
}
else
{
lean_dec(v_l_3735_);
v___x_3758_ = lean_box(0);
v_isShared_3759_ = v_isSharedCheck_3784_;
goto v_resetjp_3757_;
}
v_resetjp_3757_:
{
lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___y_3763_; lean_object* v___y_3764_; lean_object* v___y_3765_; lean_object* v___y_3774_; 
v___x_3760_ = lean_nat_add(v___x_3730_, v_size_3731_);
v___x_3761_ = lean_nat_add(v___x_3760_, v_size_3732_);
lean_dec(v_size_3732_);
if (lean_obj_tag(v_l_3751_) == 0)
{
lean_object* v_size_3782_; 
v_size_3782_ = lean_ctor_get(v_l_3751_, 0);
lean_inc(v_size_3782_);
v___y_3774_ = v_size_3782_;
goto v___jp_3773_;
}
else
{
lean_object* v___x_3783_; 
v___x_3783_ = lean_unsigned_to_nat(0u);
v___y_3774_ = v___x_3783_;
goto v___jp_3773_;
}
v___jp_3762_:
{
lean_object* v___x_3766_; lean_object* v___x_3768_; 
v___x_3766_ = lean_nat_add(v___y_3764_, v___y_3765_);
lean_dec(v___y_3765_);
lean_dec(v___y_3764_);
if (v_isShared_3759_ == 0)
{
lean_ctor_set(v___x_3758_, 4, v_r_3736_);
lean_ctor_set(v___x_3758_, 3, v_r_3752_);
lean_ctor_set(v___x_3758_, 2, v_v_3734_);
lean_ctor_set(v___x_3758_, 1, v_k_3733_);
lean_ctor_set(v___x_3758_, 0, v___x_3766_);
v___x_3768_ = v___x_3758_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v___x_3766_);
lean_ctor_set(v_reuseFailAlloc_3772_, 1, v_k_3733_);
lean_ctor_set(v_reuseFailAlloc_3772_, 2, v_v_3734_);
lean_ctor_set(v_reuseFailAlloc_3772_, 3, v_r_3752_);
lean_ctor_set(v_reuseFailAlloc_3772_, 4, v_r_3736_);
v___x_3768_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
lean_object* v___x_3770_; 
if (v_isShared_3747_ == 0)
{
lean_ctor_set(v___x_3746_, 4, v___x_3768_);
lean_ctor_set(v___x_3746_, 3, v___y_3763_);
lean_ctor_set(v___x_3746_, 2, v_v_3750_);
lean_ctor_set(v___x_3746_, 1, v_k_3749_);
lean_ctor_set(v___x_3746_, 0, v___x_3761_);
v___x_3770_ = v___x_3746_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v___x_3761_);
lean_ctor_set(v_reuseFailAlloc_3771_, 1, v_k_3749_);
lean_ctor_set(v_reuseFailAlloc_3771_, 2, v_v_3750_);
lean_ctor_set(v_reuseFailAlloc_3771_, 3, v___y_3763_);
lean_ctor_set(v_reuseFailAlloc_3771_, 4, v___x_3768_);
v___x_3770_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
return v___x_3770_;
}
}
}
v___jp_3773_:
{
lean_object* v___x_3775_; lean_object* v___x_3777_; 
v___x_3775_ = lean_nat_add(v___x_3760_, v___y_3774_);
lean_dec(v___y_3774_);
lean_dec(v___x_3760_);
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 4, v_l_3751_);
lean_ctor_set(v___x_3586_, 0, v___x_3775_);
v___x_3777_ = v___x_3586_;
goto v_reusejp_3776_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v___x_3775_);
lean_ctor_set(v_reuseFailAlloc_3781_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3781_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3781_, 3, v_l_3583_);
lean_ctor_set(v_reuseFailAlloc_3781_, 4, v_l_3751_);
v___x_3777_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3776_;
}
v_reusejp_3776_:
{
lean_object* v___x_3778_; 
v___x_3778_ = lean_nat_add(v___x_3730_, v_size_3753_);
if (lean_obj_tag(v_r_3752_) == 0)
{
lean_object* v_size_3779_; 
v_size_3779_ = lean_ctor_get(v_r_3752_, 0);
lean_inc(v_size_3779_);
v___y_3763_ = v___x_3777_;
v___y_3764_ = v___x_3778_;
v___y_3765_ = v_size_3779_;
goto v___jp_3762_;
}
else
{
lean_object* v___x_3780_; 
v___x_3780_ = lean_unsigned_to_nat(0u);
v___y_3763_ = v___x_3777_;
v___y_3764_ = v___x_3778_;
v___y_3765_ = v___x_3780_;
goto v___jp_3762_;
}
}
}
}
}
else
{
lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3794_; 
lean_del_object(v___x_3586_);
v___x_3790_ = lean_nat_add(v___x_3730_, v_size_3731_);
v___x_3791_ = lean_nat_add(v___x_3790_, v_size_3732_);
lean_dec(v_size_3732_);
v___x_3792_ = lean_nat_add(v___x_3790_, v_size_3748_);
lean_dec(v___x_3790_);
lean_inc_ref(v_l_3583_);
if (v_isShared_3747_ == 0)
{
lean_ctor_set(v___x_3746_, 4, v_l_3735_);
lean_ctor_set(v___x_3746_, 3, v_l_3583_);
lean_ctor_set(v___x_3746_, 2, v_v_3582_);
lean_ctor_set(v___x_3746_, 1, v_k_3581_);
lean_ctor_set(v___x_3746_, 0, v___x_3792_);
v___x_3794_ = v___x_3746_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v___x_3792_);
lean_ctor_set(v_reuseFailAlloc_3807_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3807_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3807_, 3, v_l_3583_);
lean_ctor_set(v_reuseFailAlloc_3807_, 4, v_l_3735_);
v___x_3794_ = v_reuseFailAlloc_3807_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3801_; 
v_isSharedCheck_3801_ = !lean_is_exclusive(v_l_3583_);
if (v_isSharedCheck_3801_ == 0)
{
lean_object* v_unused_3802_; lean_object* v_unused_3803_; lean_object* v_unused_3804_; lean_object* v_unused_3805_; lean_object* v_unused_3806_; 
v_unused_3802_ = lean_ctor_get(v_l_3583_, 4);
lean_dec(v_unused_3802_);
v_unused_3803_ = lean_ctor_get(v_l_3583_, 3);
lean_dec(v_unused_3803_);
v_unused_3804_ = lean_ctor_get(v_l_3583_, 2);
lean_dec(v_unused_3804_);
v_unused_3805_ = lean_ctor_get(v_l_3583_, 1);
lean_dec(v_unused_3805_);
v_unused_3806_ = lean_ctor_get(v_l_3583_, 0);
lean_dec(v_unused_3806_);
v___x_3796_ = v_l_3583_;
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
else
{
lean_dec(v_l_3583_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3799_; 
if (v_isShared_3797_ == 0)
{
lean_ctor_set(v___x_3796_, 4, v_r_3736_);
lean_ctor_set(v___x_3796_, 3, v___x_3794_);
lean_ctor_set(v___x_3796_, 2, v_v_3734_);
lean_ctor_set(v___x_3796_, 1, v_k_3733_);
lean_ctor_set(v___x_3796_, 0, v___x_3791_);
v___x_3799_ = v___x_3796_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v___x_3791_);
lean_ctor_set(v_reuseFailAlloc_3800_, 1, v_k_3733_);
lean_ctor_set(v_reuseFailAlloc_3800_, 2, v_v_3734_);
lean_ctor_set(v_reuseFailAlloc_3800_, 3, v___x_3794_);
lean_ctor_set(v_reuseFailAlloc_3800_, 4, v_r_3736_);
v___x_3799_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
return v___x_3799_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3814_; 
v_l_3814_ = lean_ctor_get(v_impl_3729_, 3);
lean_inc(v_l_3814_);
if (lean_obj_tag(v_l_3814_) == 0)
{
lean_object* v_r_3815_; lean_object* v_k_3816_; lean_object* v_v_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3840_; 
v_r_3815_ = lean_ctor_get(v_impl_3729_, 4);
v_k_3816_ = lean_ctor_get(v_impl_3729_, 1);
v_v_3817_ = lean_ctor_get(v_impl_3729_, 2);
v_isSharedCheck_3840_ = !lean_is_exclusive(v_impl_3729_);
if (v_isSharedCheck_3840_ == 0)
{
lean_object* v_unused_3841_; lean_object* v_unused_3842_; 
v_unused_3841_ = lean_ctor_get(v_impl_3729_, 3);
lean_dec(v_unused_3841_);
v_unused_3842_ = lean_ctor_get(v_impl_3729_, 0);
lean_dec(v_unused_3842_);
v___x_3819_ = v_impl_3729_;
v_isShared_3820_ = v_isSharedCheck_3840_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_r_3815_);
lean_inc(v_v_3817_);
lean_inc(v_k_3816_);
lean_dec(v_impl_3729_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3840_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v_k_3821_; lean_object* v_v_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3836_; 
v_k_3821_ = lean_ctor_get(v_l_3814_, 1);
v_v_3822_ = lean_ctor_get(v_l_3814_, 2);
v_isSharedCheck_3836_ = !lean_is_exclusive(v_l_3814_);
if (v_isSharedCheck_3836_ == 0)
{
lean_object* v_unused_3837_; lean_object* v_unused_3838_; lean_object* v_unused_3839_; 
v_unused_3837_ = lean_ctor_get(v_l_3814_, 4);
lean_dec(v_unused_3837_);
v_unused_3838_ = lean_ctor_get(v_l_3814_, 3);
lean_dec(v_unused_3838_);
v_unused_3839_ = lean_ctor_get(v_l_3814_, 0);
lean_dec(v_unused_3839_);
v___x_3824_ = v_l_3814_;
v_isShared_3825_ = v_isSharedCheck_3836_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_v_3822_);
lean_inc(v_k_3821_);
lean_dec(v_l_3814_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3836_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3826_; lean_object* v___x_3828_; 
v___x_3826_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_3815_, 2);
if (v_isShared_3825_ == 0)
{
lean_ctor_set(v___x_3824_, 4, v_r_3815_);
lean_ctor_set(v___x_3824_, 3, v_r_3815_);
lean_ctor_set(v___x_3824_, 2, v_v_3582_);
lean_ctor_set(v___x_3824_, 1, v_k_3581_);
lean_ctor_set(v___x_3824_, 0, v___x_3730_);
v___x_3828_ = v___x_3824_;
goto v_reusejp_3827_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v___x_3730_);
lean_ctor_set(v_reuseFailAlloc_3835_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3835_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3835_, 3, v_r_3815_);
lean_ctor_set(v_reuseFailAlloc_3835_, 4, v_r_3815_);
v___x_3828_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3827_;
}
v_reusejp_3827_:
{
lean_object* v___x_3830_; 
lean_inc(v_r_3815_);
if (v_isShared_3820_ == 0)
{
lean_ctor_set(v___x_3819_, 3, v_r_3815_);
lean_ctor_set(v___x_3819_, 0, v___x_3730_);
v___x_3830_ = v___x_3819_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v___x_3730_);
lean_ctor_set(v_reuseFailAlloc_3834_, 1, v_k_3816_);
lean_ctor_set(v_reuseFailAlloc_3834_, 2, v_v_3817_);
lean_ctor_set(v_reuseFailAlloc_3834_, 3, v_r_3815_);
lean_ctor_set(v_reuseFailAlloc_3834_, 4, v_r_3815_);
v___x_3830_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
lean_object* v___x_3832_; 
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 4, v___x_3830_);
lean_ctor_set(v___x_3586_, 3, v___x_3828_);
lean_ctor_set(v___x_3586_, 2, v_v_3822_);
lean_ctor_set(v___x_3586_, 1, v_k_3821_);
lean_ctor_set(v___x_3586_, 0, v___x_3826_);
v___x_3832_ = v___x_3586_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v___x_3826_);
lean_ctor_set(v_reuseFailAlloc_3833_, 1, v_k_3821_);
lean_ctor_set(v_reuseFailAlloc_3833_, 2, v_v_3822_);
lean_ctor_set(v_reuseFailAlloc_3833_, 3, v___x_3828_);
lean_ctor_set(v_reuseFailAlloc_3833_, 4, v___x_3830_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
}
}
}
}
else
{
lean_object* v_r_3843_; 
v_r_3843_ = lean_ctor_get(v_impl_3729_, 4);
lean_inc(v_r_3843_);
if (lean_obj_tag(v_r_3843_) == 0)
{
lean_object* v_k_3844_; lean_object* v_v_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3856_; 
v_k_3844_ = lean_ctor_get(v_impl_3729_, 1);
v_v_3845_ = lean_ctor_get(v_impl_3729_, 2);
v_isSharedCheck_3856_ = !lean_is_exclusive(v_impl_3729_);
if (v_isSharedCheck_3856_ == 0)
{
lean_object* v_unused_3857_; lean_object* v_unused_3858_; lean_object* v_unused_3859_; 
v_unused_3857_ = lean_ctor_get(v_impl_3729_, 4);
lean_dec(v_unused_3857_);
v_unused_3858_ = lean_ctor_get(v_impl_3729_, 3);
lean_dec(v_unused_3858_);
v_unused_3859_ = lean_ctor_get(v_impl_3729_, 0);
lean_dec(v_unused_3859_);
v___x_3847_ = v_impl_3729_;
v_isShared_3848_ = v_isSharedCheck_3856_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_v_3845_);
lean_inc(v_k_3844_);
lean_dec(v_impl_3729_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3856_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3849_; lean_object* v___x_3851_; 
v___x_3849_ = lean_unsigned_to_nat(3u);
if (v_isShared_3848_ == 0)
{
lean_ctor_set(v___x_3847_, 4, v_l_3814_);
lean_ctor_set(v___x_3847_, 2, v_v_3582_);
lean_ctor_set(v___x_3847_, 1, v_k_3581_);
lean_ctor_set(v___x_3847_, 0, v___x_3730_);
v___x_3851_ = v___x_3847_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v___x_3730_);
lean_ctor_set(v_reuseFailAlloc_3855_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3855_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3855_, 3, v_l_3814_);
lean_ctor_set(v_reuseFailAlloc_3855_, 4, v_l_3814_);
v___x_3851_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
lean_object* v___x_3853_; 
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 4, v_r_3843_);
lean_ctor_set(v___x_3586_, 3, v___x_3851_);
lean_ctor_set(v___x_3586_, 2, v_v_3845_);
lean_ctor_set(v___x_3586_, 1, v_k_3844_);
lean_ctor_set(v___x_3586_, 0, v___x_3849_);
v___x_3853_ = v___x_3586_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v___x_3849_);
lean_ctor_set(v_reuseFailAlloc_3854_, 1, v_k_3844_);
lean_ctor_set(v_reuseFailAlloc_3854_, 2, v_v_3845_);
lean_ctor_set(v_reuseFailAlloc_3854_, 3, v___x_3851_);
lean_ctor_set(v_reuseFailAlloc_3854_, 4, v_r_3843_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
}
else
{
lean_object* v___x_3860_; lean_object* v___x_3862_; 
v___x_3860_ = lean_unsigned_to_nat(2u);
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 4, v_impl_3729_);
lean_ctor_set(v___x_3586_, 3, v_r_3843_);
lean_ctor_set(v___x_3586_, 0, v___x_3860_);
v___x_3862_ = v___x_3586_;
goto v_reusejp_3861_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v___x_3860_);
lean_ctor_set(v_reuseFailAlloc_3863_, 1, v_k_3581_);
lean_ctor_set(v_reuseFailAlloc_3863_, 2, v_v_3582_);
lean_ctor_set(v_reuseFailAlloc_3863_, 3, v_r_3843_);
lean_ctor_set(v_reuseFailAlloc_3863_, 4, v_impl_3729_);
v___x_3862_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3861_;
}
v_reusejp_3861_:
{
return v___x_3862_;
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
lean_object* v___x_3865_; lean_object* v___x_3866_; 
v___x_3865_ = lean_unsigned_to_nat(1u);
v___x_3866_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3866_, 0, v___x_3865_);
lean_ctor_set(v___x_3866_, 1, v_k_3577_);
lean_ctor_set(v___x_3866_, 2, v_v_3578_);
lean_ctor_set(v___x_3866_, 3, v_t_3579_);
lean_ctor_set(v___x_3866_, 4, v_t_3579_);
return v___x_3866_;
}
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__0(void){
_start:
{
lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; 
v___x_3867_ = lean_box(1);
v___x_3868_ = l_Lake_LeanLib_defaultFacetConfig;
v___x_3869_ = l_Lake_LeanLib_defaultFacet;
v___x_3870_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3869_, v___x_3868_, v___x_3867_);
return v___x_3870_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__1(void){
_start:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; 
v___x_3871_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__0, &l_Lake_LeanLib_initFacetConfigs___closed__0_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__0);
v___x_3872_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig));
v___x_3873_ = l_Lake_LeanLib_modulesFacet;
v___x_3874_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3873_, v___x_3872_, v___x_3871_);
return v___x_3874_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__2(void){
_start:
{
lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; 
v___x_3875_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__1, &l_Lake_LeanLib_initFacetConfigs___closed__1_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__1);
v___x_3876_ = l_Lake_LeanLib_elabArtsFacetConfig;
v___x_3877_ = l_Lake_LeanLib_elabArtsFacet;
v___x_3878_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3877_, v___x_3876_, v___x_3875_);
return v___x_3878_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__3(void){
_start:
{
lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
v___x_3879_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__2, &l_Lake_LeanLib_initFacetConfigs___closed__2_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__2);
v___x_3880_ = l_Lake_LeanLib_irArtsFacetConfig;
v___x_3881_ = l_Lake_LeanLib_irArtsFacet;
v___x_3882_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3881_, v___x_3880_, v___x_3879_);
return v___x_3882_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__4(void){
_start:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3883_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__3, &l_Lake_LeanLib_initFacetConfigs___closed__3_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__3);
v___x_3884_ = l_Lake_LeanLib_leanArtsFacetConfig;
v___x_3885_ = l_Lake_LeanLib_leanArtsFacet;
v___x_3886_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3885_, v___x_3884_, v___x_3883_);
return v___x_3886_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__5(void){
_start:
{
lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3887_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__4, &l_Lake_LeanLib_initFacetConfigs___closed__4_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__4);
v___x_3888_ = l_Lake_LeanLib_staticFacetConfig;
v___x_3889_ = l_Lake_LeanLib_staticFacet;
v___x_3890_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3889_, v___x_3888_, v___x_3887_);
return v___x_3890_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__6(void){
_start:
{
lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v___x_3891_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__5, &l_Lake_LeanLib_initFacetConfigs___closed__5_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__5);
v___x_3892_ = l_Lake_LeanLib_staticExportFacetConfig;
v___x_3893_ = l_Lake_LeanLib_staticExportFacet;
v___x_3894_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3893_, v___x_3892_, v___x_3891_);
return v___x_3894_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__7(void){
_start:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3895_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__6, &l_Lake_LeanLib_initFacetConfigs___closed__6_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__6);
v___x_3896_ = l_Lake_LeanLib_sharedFacetConfig;
v___x_3897_ = l_Lake_LeanLib_sharedFacet;
v___x_3898_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3897_, v___x_3896_, v___x_3895_);
return v___x_3898_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__8(void){
_start:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; 
v___x_3899_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__7, &l_Lake_LeanLib_initFacetConfigs___closed__7_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__7);
v___x_3900_ = l_Lake_LeanLib_extraDepFacetConfig;
v___x_3901_ = l_Lake_LeanLib_extraDepFacet;
v___x_3902_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3901_, v___x_3900_, v___x_3899_);
return v___x_3902_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs(void){
_start:
{
lean_object* v___x_3903_; 
v___x_3903_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__8, &l_Lake_LeanLib_initFacetConfigs___closed__8_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__8);
return v___x_3903_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0(lean_object* v_00_u03b2_3904_, lean_object* v_k_3905_, lean_object* v_v_3906_, lean_object* v_t_3907_, lean_object* v_hl_3908_){
_start:
{
lean_object* v___x_3909_; 
v___x_3909_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3905_, v_v_3906_, v_t_3907_);
return v___x_3909_;
}
}
static lean_object* _init_l_Lake_initLibraryFacetConfigs(void){
_start:
{
lean_object* v___x_3910_; 
v___x_3910_ = l_Lake_LeanLib_initFacetConfigs;
return v___x_3910_;
}
}
lean_object* runtime_initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Common(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Target_Fetch(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Proc(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_LeanLib_elabArtsFacetConfig = _init_l_Lake_LeanLib_elabArtsFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_elabArtsFacetConfig);
l_Lake_LeanLib_irArtsFacetConfig = _init_l_Lake_LeanLib_irArtsFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_irArtsFacetConfig);
l_Lake_LeanLib_leanArtsFacetConfig = _init_l_Lake_LeanLib_leanArtsFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_leanArtsFacetConfig);
l_Lake_LeanLib_staticFacetConfig = _init_l_Lake_LeanLib_staticFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_staticFacetConfig);
l_Lake_LeanLib_staticExportFacetConfig = _init_l_Lake_LeanLib_staticExportFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_staticExportFacetConfig);
l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5 = _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5();
lean_mark_persistent(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5);
l_Lake_LeanLib_sharedFacetConfig = _init_l_Lake_LeanLib_sharedFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_sharedFacetConfig);
l_Lake_LeanLib_extraDepFacetConfig = _init_l_Lake_LeanLib_extraDepFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_extraDepFacetConfig);
l_Lake_LeanLib_defaultFacetConfig = _init_l_Lake_LeanLib_defaultFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_defaultFacetConfig);
l_Lake_LeanLib_initFacetConfigs = _init_l_Lake_LeanLib_initFacetConfigs();
lean_mark_persistent(l_Lake_LeanLib_initFacetConfigs);
l_Lake_initLibraryFacetConfigs = _init_l_Lake_initLibraryFacetConfigs();
lean_mark_persistent(l_Lake_initLibraryFacetConfigs);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* initialize_Lake_Build_Common(uint8_t builtin);
lean_object* initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* initialize_Lake_Build_Target_Fetch(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* initialize_Lake_Util_Proc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Library(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Library(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Library(builtin);
}
#ifdef __cplusplus
}
#endif
