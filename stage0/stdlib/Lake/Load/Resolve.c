// Lean compiler output
// Module: Lake.Load.Resolve
// Imports: public import Lake.Config.Workspace public import Lake.Load.Manifest import Lake.Util.IO import Lake.Util.StoreInsts import Lake.Config.Monad import Lake.Load.Materialize import Lake.Load.Lean.Eval import Lake.Load.Package import Init.Data.Vector.Lemmas import Init.Data.Range.Polymorphic.Iterators import Init.Data.Range.Polymorphic.Lemmas import Init.TacticsExtra import Lean.Runtime
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
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_Dependency_materialize(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lake_PackageEntry_materialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_Manifest_load(lean_object*);
extern lean_object* l_Lake_defaultManifestFile;
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_resolveConfigFile(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_loadConfigFile___redArg(lean_object*, lean_object*);
lean_object* l_Lake_mkPackage(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lake_FacetConfigMap_insert(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_defaultLakeDir;
lean_object* l_Lake_Manifest_tryLoadEntries(lean_object*);
lean_object* l_Lake_mkRelPathString(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lake_toolchainFileName;
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Env_noToolchainVars(lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_io_exit(uint8_t);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Lake_ToolchainVer_ofFile_x3f(lean_object*);
uint8_t l_Lake_instDecidableEqToolchainVer_decEq(lean_object*, lean_object*);
uint8_t l_Lake_MaterializedDep_fixedToolchain(lean_object*);
uint8_t l_Lake_ToolchainVer_ble(lean_object*, lean_object*);
uint8_t l_Lake_ToolchainVer_blt(lean_object*, lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* lean_io_rename(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lake_Manifest_save(lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = ": package requires itself (or a package with the same name)"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "unknown package `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "could not rename workspace packages directory: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "workspace packages directory changed; renaming '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "' to '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3_value;
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = ": no previous manifest, creating one from scratch"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = ": ignoring previous manifest because it failed to load: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = ": ignoring missing manifest:\n  "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = ": ignoring manifest because it failed to load: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l___private_Lake_Load_Resolve_0__Lake_restartCode;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\n    from "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\n  "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " (fixed toolchain)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "toolchain not updated; multiple toolchain candidates:\n  "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "restarting Lake via Elan"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "run"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "--install"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "no Elan detected; you will need to manually restart Lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "cannot auto-restart; you will need to manually restart Lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "updating toolchain to '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "toolchain not updated; already up-to-date"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "toolchain not updated; no toolchain information found"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "toolchain not updated; multiple toolchain candidates:"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18_value;
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4_spec__6___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": updating '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "' with "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg(lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = ": running post-update hooks"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "manifest out of date: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " of dependency '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "' changed; use `lake update "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "` to update it"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "source kind (git/path)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "git revision"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "git url"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lake_Workspace_materializeDeps_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lake_Workspace_materializeDeps_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dependency '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "' of '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 169, .m_capacity = 169, .m_length = 168, .m_data = "' not in manifest; this suggests that the manifest is corrupt; use `lake update` to generate a new, complete file (warning: this will update ALL workspace dependencies)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "' not in manifest; use `lake update "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` to add it"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "missing manifest; use `lake update` to generate one"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__0 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__0_value;
static const lean_ctor_object l_Lake_Workspace_materializeDeps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_materializeDeps___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__1 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__1_value;
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "package-overrides.json"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__2 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__2_value;
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 147, .m_capacity = 147, .m_length = 146, .m_data = "manifest out of date: packages directory changed; use `lake update` to rebuild the manifest (warning: this will update ALL workspace dependencies)"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__3 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__3_value;
static const lean_ctor_object l_Lake_Workspace_materializeDeps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_materializeDeps___closed__3_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__4 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(lean_object* v_ws_3_, lean_object* v_dep_4_, lean_object* v_lakeOpts_5_, lean_object* v_leanOpts_6_, uint8_t v_reconfigure_7_){
_start:
{
lean_object* v_lakeEnv_8_; lean_object* v_packages_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v_manifestEntry_12_; lean_object* v_dir_13_; lean_object* v_pkgDir_14_; lean_object* v_relPkgDir_15_; lean_object* v_remoteUrl_16_; lean_object* v_name_17_; lean_object* v_scope_18_; lean_object* v_configFile_19_; lean_object* v_manifestFile_x3f_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___y_25_; 
v_lakeEnv_8_ = lean_ctor_get(v_ws_3_, 0);
v_packages_9_ = lean_ctor_get(v_ws_3_, 4);
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_array_fget_borrowed(v_packages_9_, v___x_10_);
v_manifestEntry_12_ = lean_ctor_get(v_dep_4_, 4);
lean_inc_ref(v_manifestEntry_12_);
v_dir_13_ = lean_ctor_get(v___x_11_, 4);
v_pkgDir_14_ = lean_ctor_get(v_dep_4_, 0);
lean_inc_ref_n(v_pkgDir_14_, 2);
v_relPkgDir_15_ = lean_ctor_get(v_dep_4_, 1);
lean_inc_ref(v_relPkgDir_15_);
v_remoteUrl_16_ = lean_ctor_get(v_dep_4_, 2);
lean_inc_ref(v_remoteUrl_16_);
lean_dec_ref(v_dep_4_);
v_name_17_ = lean_ctor_get(v_manifestEntry_12_, 0);
lean_inc(v_name_17_);
v_scope_18_ = lean_ctor_get(v_manifestEntry_12_, 1);
lean_inc_ref(v_scope_18_);
v_configFile_19_ = lean_ctor_get(v_manifestEntry_12_, 2);
lean_inc_ref_n(v_configFile_19_, 2);
v_manifestFile_x3f_20_ = lean_ctor_get(v_manifestEntry_12_, 3);
lean_inc(v_manifestFile_x3f_20_);
lean_dec_ref(v_manifestEntry_12_);
v___x_21_ = lean_box(0);
v___x_22_ = lean_array_get_size(v_packages_9_);
v___x_23_ = l_Lake_joinRelative(v_pkgDir_14_, v_configFile_19_);
if (lean_obj_tag(v_manifestFile_x3f_20_) == 0)
{
lean_object* v___x_30_; 
v___x_30_ = l_Lake_defaultManifestFile;
v___y_25_ = v___x_30_;
goto v___jp_24_;
}
else
{
lean_object* v_val_31_; 
v_val_31_ = lean_ctor_get(v_manifestFile_x3f_20_, 0);
lean_inc(v_val_31_);
lean_dec_ref_known(v_manifestFile_x3f_20_, 1);
v___y_25_ = v_val_31_;
goto v___jp_24_;
}
v___jp_24_:
{
lean_object* v___x_26_; uint8_t v___x_27_; uint8_t v___x_28_; lean_object* v___x_29_; 
v___x_26_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_27_ = 0;
v___x_28_ = 1;
lean_inc_ref(v_dir_13_);
lean_inc_ref(v_lakeEnv_8_);
v___x_29_ = lean_alloc_ctor(0, 16, 3);
lean_ctor_set(v___x_29_, 0, v_lakeEnv_8_);
lean_ctor_set(v___x_29_, 1, v___x_21_);
lean_ctor_set(v___x_29_, 2, v_dir_13_);
lean_ctor_set(v___x_29_, 3, v___x_22_);
lean_ctor_set(v___x_29_, 4, v_name_17_);
lean_ctor_set(v___x_29_, 5, v_relPkgDir_15_);
lean_ctor_set(v___x_29_, 6, v_pkgDir_14_);
lean_ctor_set(v___x_29_, 7, v_configFile_19_);
lean_ctor_set(v___x_29_, 8, v___x_23_);
lean_ctor_set(v___x_29_, 9, v___x_21_);
lean_ctor_set(v___x_29_, 10, v___y_25_);
lean_ctor_set(v___x_29_, 11, v___x_26_);
lean_ctor_set(v___x_29_, 12, v_lakeOpts_5_);
lean_ctor_set(v___x_29_, 13, v_leanOpts_6_);
lean_ctor_set(v___x_29_, 14, v_scope_18_);
lean_ctor_set(v___x_29_, 15, v_remoteUrl_16_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16, v_reconfigure_7_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16 + 1, v___x_27_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16 + 2, v___x_28_);
return v___x_29_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___boxed(lean_object* v_ws_32_, lean_object* v_dep_33_, lean_object* v_lakeOpts_34_, lean_object* v_leanOpts_35_, lean_object* v_reconfigure_36_){
_start:
{
uint8_t v_reconfigure_boxed_37_; lean_object* v_res_38_; 
v_reconfigure_boxed_37_ = lean_unbox(v_reconfigure_36_);
v_res_38_ = l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(v_ws_32_, v_dep_33_, v_lakeOpts_34_, v_leanOpts_35_, v_reconfigure_boxed_37_);
lean_dec_ref(v_ws_32_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(lean_object* v_as_39_, size_t v_i_40_, size_t v_stop_41_, lean_object* v_b_42_){
_start:
{
uint8_t v___x_43_; 
v___x_43_ = lean_usize_dec_eq(v_i_40_, v_stop_41_);
if (v___x_43_ == 0)
{
lean_object* v___x_44_; lean_object* v_name_45_; lean_object* v_config_46_; lean_object* v_lakeEnv_47_; lean_object* v_lakeConfig_48_; lean_object* v_lakeCache_49_; lean_object* v_lakeArgs_x3f_50_; lean_object* v_packages_51_; lean_object* v_packageMap_52_; lean_object* v_facetConfigs_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_64_; 
v___x_44_ = lean_array_uget_borrowed(v_as_39_, v_i_40_);
v_name_45_ = lean_ctor_get(v___x_44_, 0);
v_config_46_ = lean_ctor_get(v___x_44_, 1);
v_lakeEnv_47_ = lean_ctor_get(v_b_42_, 0);
v_lakeConfig_48_ = lean_ctor_get(v_b_42_, 1);
v_lakeCache_49_ = lean_ctor_get(v_b_42_, 2);
v_lakeArgs_x3f_50_ = lean_ctor_get(v_b_42_, 3);
v_packages_51_ = lean_ctor_get(v_b_42_, 4);
v_packageMap_52_ = lean_ctor_get(v_b_42_, 5);
v_facetConfigs_53_ = lean_ctor_get(v_b_42_, 6);
v_isSharedCheck_64_ = !lean_is_exclusive(v_b_42_);
if (v_isSharedCheck_64_ == 0)
{
v___x_55_ = v_b_42_;
v_isShared_56_ = v_isSharedCheck_64_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_facetConfigs_53_);
lean_inc(v_packageMap_52_);
lean_inc(v_packages_51_);
lean_inc(v_lakeArgs_x3f_50_);
lean_inc(v_lakeCache_49_);
lean_inc(v_lakeConfig_48_);
lean_inc(v_lakeEnv_47_);
lean_dec(v_b_42_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_64_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_59_; 
lean_inc(v_config_46_);
lean_inc(v_name_45_);
v___x_57_ = l_Lake_FacetConfigMap_insert(v_name_45_, v_config_46_, v_facetConfigs_53_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 6, v___x_57_);
v___x_59_ = v___x_55_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_lakeEnv_47_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_lakeConfig_48_);
lean_ctor_set(v_reuseFailAlloc_63_, 2, v_lakeCache_49_);
lean_ctor_set(v_reuseFailAlloc_63_, 3, v_lakeArgs_x3f_50_);
lean_ctor_set(v_reuseFailAlloc_63_, 4, v_packages_51_);
lean_ctor_set(v_reuseFailAlloc_63_, 5, v_packageMap_52_);
lean_ctor_set(v_reuseFailAlloc_63_, 6, v___x_57_);
v___x_59_ = v_reuseFailAlloc_63_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
size_t v___x_60_; size_t v___x_61_; 
v___x_60_ = ((size_t)1ULL);
v___x_61_ = lean_usize_add(v_i_40_, v___x_60_);
v_i_40_ = v___x_61_;
v_b_42_ = v___x_59_;
goto _start;
}
}
}
else
{
return v_b_42_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0___boxed(lean_object* v_as_65_, lean_object* v_i_66_, lean_object* v_stop_67_, lean_object* v_b_68_){
_start:
{
size_t v_i_boxed_69_; size_t v_stop_boxed_70_; lean_object* v_res_71_; 
v_i_boxed_69_ = lean_unbox_usize(v_i_66_);
lean_dec(v_i_66_);
v_stop_boxed_70_ = lean_unbox_usize(v_stop_67_);
lean_dec(v_stop_67_);
v_res_71_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(v_as_65_, v_i_boxed_69_, v_stop_boxed_70_, v_b_68_);
lean_dec_ref(v_as_65_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(lean_object* v_decls_72_, lean_object* v_self_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = lean_array_get_size(v_decls_72_);
v___x_76_ = lean_nat_dec_lt(v___x_74_, v___x_75_);
if (v___x_76_ == 0)
{
return v_self_73_;
}
else
{
size_t v___x_77_; size_t v___x_78_; lean_object* v___x_79_; 
v___x_77_ = ((size_t)0ULL);
v___x_78_ = lean_usize_of_nat(v___x_75_);
v___x_79_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(v_decls_72_, v___x_77_, v___x_78_, v_self_73_);
return v___x_79_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls___boxed(lean_object* v_decls_80_, lean_object* v_self_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(v_decls_80_, v_self_81_);
lean_dec_ref(v_decls_80_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(lean_object* v_k_83_, lean_object* v_v_84_, lean_object* v_t_85_){
_start:
{
if (lean_obj_tag(v_t_85_) == 0)
{
lean_object* v_size_86_; lean_object* v_k_87_; lean_object* v_v_88_; lean_object* v_l_89_; lean_object* v_r_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_370_; 
v_size_86_ = lean_ctor_get(v_t_85_, 0);
v_k_87_ = lean_ctor_get(v_t_85_, 1);
v_v_88_ = lean_ctor_get(v_t_85_, 2);
v_l_89_ = lean_ctor_get(v_t_85_, 3);
v_r_90_ = lean_ctor_get(v_t_85_, 4);
v_isSharedCheck_370_ = !lean_is_exclusive(v_t_85_);
if (v_isSharedCheck_370_ == 0)
{
v___x_92_ = v_t_85_;
v_isShared_93_ = v_isSharedCheck_370_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_r_90_);
lean_inc(v_l_89_);
lean_inc(v_v_88_);
lean_inc(v_k_87_);
lean_inc(v_size_86_);
lean_dec(v_t_85_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_370_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
uint8_t v___x_94_; 
v___x_94_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_83_, v_k_87_);
switch(v___x_94_)
{
case 0:
{
lean_object* v_impl_95_; lean_object* v___x_96_; 
lean_dec(v_size_86_);
v_impl_95_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_83_, v_v_84_, v_l_89_);
v___x_96_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_90_) == 0)
{
lean_object* v_size_97_; lean_object* v_size_98_; lean_object* v_k_99_; lean_object* v_v_100_; lean_object* v_l_101_; lean_object* v_r_102_; lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v_size_97_ = lean_ctor_get(v_r_90_, 0);
v_size_98_ = lean_ctor_get(v_impl_95_, 0);
v_k_99_ = lean_ctor_get(v_impl_95_, 1);
v_v_100_ = lean_ctor_get(v_impl_95_, 2);
v_l_101_ = lean_ctor_get(v_impl_95_, 3);
v_r_102_ = lean_ctor_get(v_impl_95_, 4);
lean_inc(v_r_102_);
v___x_103_ = lean_unsigned_to_nat(3u);
v___x_104_ = lean_nat_mul(v___x_103_, v_size_97_);
v___x_105_ = lean_nat_dec_lt(v___x_104_, v_size_98_);
lean_dec(v___x_104_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_109_; 
lean_dec(v_r_102_);
v___x_106_ = lean_nat_add(v___x_96_, v_size_98_);
v___x_107_ = lean_nat_add(v___x_106_, v_size_97_);
lean_dec(v___x_106_);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 3, v_impl_95_);
lean_ctor_set(v___x_92_, 0, v___x_107_);
v___x_109_ = v___x_92_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_107_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_110_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_110_, 3, v_impl_95_);
lean_ctor_set(v_reuseFailAlloc_110_, 4, v_r_90_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
else
{
lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_176_; 
lean_inc(v_l_101_);
lean_inc(v_v_100_);
lean_inc(v_k_99_);
lean_inc(v_size_98_);
v_isSharedCheck_176_ = !lean_is_exclusive(v_impl_95_);
if (v_isSharedCheck_176_ == 0)
{
lean_object* v_unused_177_; lean_object* v_unused_178_; lean_object* v_unused_179_; lean_object* v_unused_180_; lean_object* v_unused_181_; 
v_unused_177_ = lean_ctor_get(v_impl_95_, 4);
lean_dec(v_unused_177_);
v_unused_178_ = lean_ctor_get(v_impl_95_, 3);
lean_dec(v_unused_178_);
v_unused_179_ = lean_ctor_get(v_impl_95_, 2);
lean_dec(v_unused_179_);
v_unused_180_ = lean_ctor_get(v_impl_95_, 1);
lean_dec(v_unused_180_);
v_unused_181_ = lean_ctor_get(v_impl_95_, 0);
lean_dec(v_unused_181_);
v___x_112_ = v_impl_95_;
v_isShared_113_ = v_isSharedCheck_176_;
goto v_resetjp_111_;
}
else
{
lean_dec(v_impl_95_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_176_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v_size_114_; lean_object* v_size_115_; lean_object* v_k_116_; lean_object* v_v_117_; lean_object* v_l_118_; lean_object* v_r_119_; lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; 
v_size_114_ = lean_ctor_get(v_l_101_, 0);
v_size_115_ = lean_ctor_get(v_r_102_, 0);
v_k_116_ = lean_ctor_get(v_r_102_, 1);
v_v_117_ = lean_ctor_get(v_r_102_, 2);
v_l_118_ = lean_ctor_get(v_r_102_, 3);
v_r_119_ = lean_ctor_get(v_r_102_, 4);
v___x_120_ = lean_unsigned_to_nat(2u);
v___x_121_ = lean_nat_mul(v___x_120_, v_size_114_);
v___x_122_ = lean_nat_dec_lt(v_size_115_, v___x_121_);
lean_dec(v___x_121_);
if (v___x_122_ == 0)
{
lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_151_; 
lean_inc(v_r_119_);
lean_inc(v_l_118_);
lean_inc(v_v_117_);
lean_inc(v_k_116_);
v_isSharedCheck_151_ = !lean_is_exclusive(v_r_102_);
if (v_isSharedCheck_151_ == 0)
{
lean_object* v_unused_152_; lean_object* v_unused_153_; lean_object* v_unused_154_; lean_object* v_unused_155_; lean_object* v_unused_156_; 
v_unused_152_ = lean_ctor_get(v_r_102_, 4);
lean_dec(v_unused_152_);
v_unused_153_ = lean_ctor_get(v_r_102_, 3);
lean_dec(v_unused_153_);
v_unused_154_ = lean_ctor_get(v_r_102_, 2);
lean_dec(v_unused_154_);
v_unused_155_ = lean_ctor_get(v_r_102_, 1);
lean_dec(v_unused_155_);
v_unused_156_ = lean_ctor_get(v_r_102_, 0);
lean_dec(v_unused_156_);
v___x_124_ = v_r_102_;
v_isShared_125_ = v_isSharedCheck_151_;
goto v_resetjp_123_;
}
else
{
lean_dec(v_r_102_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_151_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___y_129_; lean_object* v___y_130_; lean_object* v___y_131_; lean_object* v___x_139_; lean_object* v___y_141_; 
v___x_126_ = lean_nat_add(v___x_96_, v_size_98_);
lean_dec(v_size_98_);
v___x_127_ = lean_nat_add(v___x_126_, v_size_97_);
lean_dec(v___x_126_);
v___x_139_ = lean_nat_add(v___x_96_, v_size_114_);
if (lean_obj_tag(v_l_118_) == 0)
{
lean_object* v_size_149_; 
v_size_149_ = lean_ctor_get(v_l_118_, 0);
lean_inc(v_size_149_);
v___y_141_ = v_size_149_;
goto v___jp_140_;
}
else
{
lean_object* v___x_150_; 
v___x_150_ = lean_unsigned_to_nat(0u);
v___y_141_ = v___x_150_;
goto v___jp_140_;
}
v___jp_128_:
{
lean_object* v___x_132_; lean_object* v___x_134_; 
v___x_132_ = lean_nat_add(v___y_129_, v___y_131_);
lean_dec(v___y_131_);
lean_dec(v___y_129_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 4, v_r_90_);
lean_ctor_set(v___x_124_, 3, v_r_119_);
lean_ctor_set(v___x_124_, 2, v_v_88_);
lean_ctor_set(v___x_124_, 1, v_k_87_);
lean_ctor_set(v___x_124_, 0, v___x_132_);
v___x_134_ = v___x_124_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v___x_132_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_138_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_138_, 3, v_r_119_);
lean_ctor_set(v_reuseFailAlloc_138_, 4, v_r_90_);
v___x_134_ = v_reuseFailAlloc_138_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
lean_object* v___x_136_; 
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 4, v___x_134_);
lean_ctor_set(v___x_112_, 3, v___y_130_);
lean_ctor_set(v___x_112_, 2, v_v_117_);
lean_ctor_set(v___x_112_, 1, v_k_116_);
lean_ctor_set(v___x_112_, 0, v___x_127_);
v___x_136_ = v___x_112_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v_k_116_);
lean_ctor_set(v_reuseFailAlloc_137_, 2, v_v_117_);
lean_ctor_set(v_reuseFailAlloc_137_, 3, v___y_130_);
lean_ctor_set(v_reuseFailAlloc_137_, 4, v___x_134_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
v___jp_140_:
{
lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_142_ = lean_nat_add(v___x_139_, v___y_141_);
lean_dec(v___y_141_);
lean_dec(v___x_139_);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 4, v_l_118_);
lean_ctor_set(v___x_92_, 3, v_l_101_);
lean_ctor_set(v___x_92_, 2, v_v_100_);
lean_ctor_set(v___x_92_, 1, v_k_99_);
lean_ctor_set(v___x_92_, 0, v___x_142_);
v___x_144_ = v___x_92_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_142_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_k_99_);
lean_ctor_set(v_reuseFailAlloc_148_, 2, v_v_100_);
lean_ctor_set(v_reuseFailAlloc_148_, 3, v_l_101_);
lean_ctor_set(v_reuseFailAlloc_148_, 4, v_l_118_);
v___x_144_ = v_reuseFailAlloc_148_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_145_; 
v___x_145_ = lean_nat_add(v___x_96_, v_size_97_);
if (lean_obj_tag(v_r_119_) == 0)
{
lean_object* v_size_146_; 
v_size_146_ = lean_ctor_get(v_r_119_, 0);
lean_inc(v_size_146_);
v___y_129_ = v___x_145_;
v___y_130_ = v___x_144_;
v___y_131_ = v_size_146_;
goto v___jp_128_;
}
else
{
lean_object* v___x_147_; 
v___x_147_ = lean_unsigned_to_nat(0u);
v___y_129_ = v___x_145_;
v___y_130_ = v___x_144_;
v___y_131_ = v___x_147_;
goto v___jp_128_;
}
}
}
}
}
else
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_162_; 
lean_del_object(v___x_92_);
v___x_157_ = lean_nat_add(v___x_96_, v_size_98_);
lean_dec(v_size_98_);
v___x_158_ = lean_nat_add(v___x_157_, v_size_97_);
lean_dec(v___x_157_);
v___x_159_ = lean_nat_add(v___x_96_, v_size_97_);
v___x_160_ = lean_nat_add(v___x_159_, v_size_115_);
lean_dec(v___x_159_);
lean_inc_ref(v_r_90_);
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 4, v_r_90_);
lean_ctor_set(v___x_112_, 3, v_r_102_);
lean_ctor_set(v___x_112_, 2, v_v_88_);
lean_ctor_set(v___x_112_, 1, v_k_87_);
lean_ctor_set(v___x_112_, 0, v___x_160_);
v___x_162_ = v___x_112_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_160_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_175_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_175_, 3, v_r_102_);
lean_ctor_set(v_reuseFailAlloc_175_, 4, v_r_90_);
v___x_162_ = v_reuseFailAlloc_175_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_169_; 
v_isSharedCheck_169_ = !lean_is_exclusive(v_r_90_);
if (v_isSharedCheck_169_ == 0)
{
lean_object* v_unused_170_; lean_object* v_unused_171_; lean_object* v_unused_172_; lean_object* v_unused_173_; lean_object* v_unused_174_; 
v_unused_170_ = lean_ctor_get(v_r_90_, 4);
lean_dec(v_unused_170_);
v_unused_171_ = lean_ctor_get(v_r_90_, 3);
lean_dec(v_unused_171_);
v_unused_172_ = lean_ctor_get(v_r_90_, 2);
lean_dec(v_unused_172_);
v_unused_173_ = lean_ctor_get(v_r_90_, 1);
lean_dec(v_unused_173_);
v_unused_174_ = lean_ctor_get(v_r_90_, 0);
lean_dec(v_unused_174_);
v___x_164_ = v_r_90_;
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
else
{
lean_dec(v_r_90_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_167_; 
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v___x_162_);
lean_ctor_set(v___x_164_, 3, v_l_101_);
lean_ctor_set(v___x_164_, 2, v_v_100_);
lean_ctor_set(v___x_164_, 1, v_k_99_);
lean_ctor_set(v___x_164_, 0, v___x_158_);
v___x_167_ = v___x_164_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_158_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v_k_99_);
lean_ctor_set(v_reuseFailAlloc_168_, 2, v_v_100_);
lean_ctor_set(v_reuseFailAlloc_168_, 3, v_l_101_);
lean_ctor_set(v_reuseFailAlloc_168_, 4, v___x_162_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_182_; 
v_l_182_ = lean_ctor_get(v_impl_95_, 3);
if (lean_obj_tag(v_l_182_) == 0)
{
lean_object* v_r_183_; lean_object* v_k_184_; lean_object* v_v_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_196_; 
lean_inc_ref(v_l_182_);
v_r_183_ = lean_ctor_get(v_impl_95_, 4);
v_k_184_ = lean_ctor_get(v_impl_95_, 1);
v_v_185_ = lean_ctor_get(v_impl_95_, 2);
v_isSharedCheck_196_ = !lean_is_exclusive(v_impl_95_);
if (v_isSharedCheck_196_ == 0)
{
lean_object* v_unused_197_; lean_object* v_unused_198_; 
v_unused_197_ = lean_ctor_get(v_impl_95_, 3);
lean_dec(v_unused_197_);
v_unused_198_ = lean_ctor_get(v_impl_95_, 0);
lean_dec(v_unused_198_);
v___x_187_ = v_impl_95_;
v_isShared_188_ = v_isSharedCheck_196_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_r_183_);
lean_inc(v_v_185_);
lean_inc(v_k_184_);
lean_dec(v_impl_95_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_196_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_189_; lean_object* v___x_191_; 
v___x_189_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_183_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 3, v_r_183_);
lean_ctor_set(v___x_187_, 2, v_v_88_);
lean_ctor_set(v___x_187_, 1, v_k_87_);
lean_ctor_set(v___x_187_, 0, v___x_96_);
v___x_191_ = v___x_187_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_96_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_195_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_195_, 3, v_r_183_);
lean_ctor_set(v_reuseFailAlloc_195_, 4, v_r_183_);
v___x_191_ = v_reuseFailAlloc_195_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_193_; 
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 4, v___x_191_);
lean_ctor_set(v___x_92_, 3, v_l_182_);
lean_ctor_set(v___x_92_, 2, v_v_185_);
lean_ctor_set(v___x_92_, 1, v_k_184_);
lean_ctor_set(v___x_92_, 0, v___x_189_);
v___x_193_ = v___x_92_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_189_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v_k_184_);
lean_ctor_set(v_reuseFailAlloc_194_, 2, v_v_185_);
lean_ctor_set(v_reuseFailAlloc_194_, 3, v_l_182_);
lean_ctor_set(v_reuseFailAlloc_194_, 4, v___x_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
else
{
lean_object* v_r_199_; 
v_r_199_ = lean_ctor_get(v_impl_95_, 4);
lean_inc(v_r_199_);
if (lean_obj_tag(v_r_199_) == 0)
{
lean_object* v_k_200_; lean_object* v_v_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_224_; 
lean_inc(v_l_182_);
v_k_200_ = lean_ctor_get(v_impl_95_, 1);
v_v_201_ = lean_ctor_get(v_impl_95_, 2);
v_isSharedCheck_224_ = !lean_is_exclusive(v_impl_95_);
if (v_isSharedCheck_224_ == 0)
{
lean_object* v_unused_225_; lean_object* v_unused_226_; lean_object* v_unused_227_; 
v_unused_225_ = lean_ctor_get(v_impl_95_, 4);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_impl_95_, 3);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_impl_95_, 0);
lean_dec(v_unused_227_);
v___x_203_ = v_impl_95_;
v_isShared_204_ = v_isSharedCheck_224_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_v_201_);
lean_inc(v_k_200_);
lean_dec(v_impl_95_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_224_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v_k_205_; lean_object* v_v_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_220_; 
v_k_205_ = lean_ctor_get(v_r_199_, 1);
v_v_206_ = lean_ctor_get(v_r_199_, 2);
v_isSharedCheck_220_ = !lean_is_exclusive(v_r_199_);
if (v_isSharedCheck_220_ == 0)
{
lean_object* v_unused_221_; lean_object* v_unused_222_; lean_object* v_unused_223_; 
v_unused_221_ = lean_ctor_get(v_r_199_, 4);
lean_dec(v_unused_221_);
v_unused_222_ = lean_ctor_get(v_r_199_, 3);
lean_dec(v_unused_222_);
v_unused_223_ = lean_ctor_get(v_r_199_, 0);
lean_dec(v_unused_223_);
v___x_208_ = v_r_199_;
v_isShared_209_ = v_isSharedCheck_220_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_v_206_);
lean_inc(v_k_205_);
lean_dec(v_r_199_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_220_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_212_; 
v___x_210_ = lean_unsigned_to_nat(3u);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 4, v_l_182_);
lean_ctor_set(v___x_208_, 3, v_l_182_);
lean_ctor_set(v___x_208_, 2, v_v_201_);
lean_ctor_set(v___x_208_, 1, v_k_200_);
lean_ctor_set(v___x_208_, 0, v___x_96_);
v___x_212_ = v___x_208_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_96_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_k_200_);
lean_ctor_set(v_reuseFailAlloc_219_, 2, v_v_201_);
lean_ctor_set(v_reuseFailAlloc_219_, 3, v_l_182_);
lean_ctor_set(v_reuseFailAlloc_219_, 4, v_l_182_);
v___x_212_ = v_reuseFailAlloc_219_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
lean_object* v___x_214_; 
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 4, v_l_182_);
lean_ctor_set(v___x_203_, 2, v_v_88_);
lean_ctor_set(v___x_203_, 1, v_k_87_);
lean_ctor_set(v___x_203_, 0, v___x_96_);
v___x_214_ = v___x_203_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_96_);
lean_ctor_set(v_reuseFailAlloc_218_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_218_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_218_, 3, v_l_182_);
lean_ctor_set(v_reuseFailAlloc_218_, 4, v_l_182_);
v___x_214_ = v_reuseFailAlloc_218_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
lean_object* v___x_216_; 
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 4, v___x_214_);
lean_ctor_set(v___x_92_, 3, v___x_212_);
lean_ctor_set(v___x_92_, 2, v_v_206_);
lean_ctor_set(v___x_92_, 1, v_k_205_);
lean_ctor_set(v___x_92_, 0, v___x_210_);
v___x_216_ = v___x_92_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_217_, 1, v_k_205_);
lean_ctor_set(v_reuseFailAlloc_217_, 2, v_v_206_);
lean_ctor_set(v_reuseFailAlloc_217_, 3, v___x_212_);
lean_ctor_set(v_reuseFailAlloc_217_, 4, v___x_214_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
}
}
else
{
lean_object* v___x_228_; lean_object* v___x_230_; 
v___x_228_ = lean_unsigned_to_nat(2u);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 4, v_r_199_);
lean_ctor_set(v___x_92_, 3, v_impl_95_);
lean_ctor_set(v___x_92_, 0, v___x_228_);
v___x_230_ = v___x_92_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_231_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_231_, 3, v_impl_95_);
lean_ctor_set(v_reuseFailAlloc_231_, 4, v_r_199_);
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
case 1:
{
lean_object* v___x_233_; 
lean_dec(v_v_88_);
lean_dec(v_k_87_);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 2, v_v_84_);
lean_ctor_set(v___x_92_, 1, v_k_83_);
v___x_233_ = v___x_92_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_size_86_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v_k_83_);
lean_ctor_set(v_reuseFailAlloc_234_, 2, v_v_84_);
lean_ctor_set(v_reuseFailAlloc_234_, 3, v_l_89_);
lean_ctor_set(v_reuseFailAlloc_234_, 4, v_r_90_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
default: 
{
lean_object* v_impl_235_; lean_object* v___x_236_; 
lean_dec(v_size_86_);
v_impl_235_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_83_, v_v_84_, v_r_90_);
v___x_236_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_89_) == 0)
{
lean_object* v_size_237_; lean_object* v_size_238_; lean_object* v_k_239_; lean_object* v_v_240_; lean_object* v_l_241_; lean_object* v_r_242_; lean_object* v___x_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v_size_237_ = lean_ctor_get(v_l_89_, 0);
v_size_238_ = lean_ctor_get(v_impl_235_, 0);
v_k_239_ = lean_ctor_get(v_impl_235_, 1);
v_v_240_ = lean_ctor_get(v_impl_235_, 2);
v_l_241_ = lean_ctor_get(v_impl_235_, 3);
lean_inc(v_l_241_);
v_r_242_ = lean_ctor_get(v_impl_235_, 4);
v___x_243_ = lean_unsigned_to_nat(3u);
v___x_244_ = lean_nat_mul(v___x_243_, v_size_237_);
v___x_245_ = lean_nat_dec_lt(v___x_244_, v_size_238_);
lean_dec(v___x_244_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
lean_dec(v_l_241_);
v___x_246_ = lean_nat_add(v___x_236_, v_size_237_);
v___x_247_ = lean_nat_add(v___x_246_, v_size_238_);
lean_dec(v___x_246_);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 4, v_impl_235_);
lean_ctor_set(v___x_92_, 0, v___x_247_);
v___x_249_ = v___x_92_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_247_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_250_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_250_, 3, v_l_89_);
lean_ctor_set(v_reuseFailAlloc_250_, 4, v_impl_235_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
else
{
lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_314_; 
lean_inc(v_r_242_);
lean_inc(v_v_240_);
lean_inc(v_k_239_);
lean_inc(v_size_238_);
v_isSharedCheck_314_ = !lean_is_exclusive(v_impl_235_);
if (v_isSharedCheck_314_ == 0)
{
lean_object* v_unused_315_; lean_object* v_unused_316_; lean_object* v_unused_317_; lean_object* v_unused_318_; lean_object* v_unused_319_; 
v_unused_315_ = lean_ctor_get(v_impl_235_, 4);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_impl_235_, 3);
lean_dec(v_unused_316_);
v_unused_317_ = lean_ctor_get(v_impl_235_, 2);
lean_dec(v_unused_317_);
v_unused_318_ = lean_ctor_get(v_impl_235_, 1);
lean_dec(v_unused_318_);
v_unused_319_ = lean_ctor_get(v_impl_235_, 0);
lean_dec(v_unused_319_);
v___x_252_ = v_impl_235_;
v_isShared_253_ = v_isSharedCheck_314_;
goto v_resetjp_251_;
}
else
{
lean_dec(v_impl_235_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_314_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v_size_254_; lean_object* v_k_255_; lean_object* v_v_256_; lean_object* v_l_257_; lean_object* v_r_258_; lean_object* v_size_259_; lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; 
v_size_254_ = lean_ctor_get(v_l_241_, 0);
v_k_255_ = lean_ctor_get(v_l_241_, 1);
v_v_256_ = lean_ctor_get(v_l_241_, 2);
v_l_257_ = lean_ctor_get(v_l_241_, 3);
v_r_258_ = lean_ctor_get(v_l_241_, 4);
v_size_259_ = lean_ctor_get(v_r_242_, 0);
v___x_260_ = lean_unsigned_to_nat(2u);
v___x_261_ = lean_nat_mul(v___x_260_, v_size_259_);
v___x_262_ = lean_nat_dec_lt(v_size_254_, v___x_261_);
lean_dec(v___x_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_290_; 
lean_inc(v_r_258_);
lean_inc(v_l_257_);
lean_inc(v_v_256_);
lean_inc(v_k_255_);
v_isSharedCheck_290_ = !lean_is_exclusive(v_l_241_);
if (v_isSharedCheck_290_ == 0)
{
lean_object* v_unused_291_; lean_object* v_unused_292_; lean_object* v_unused_293_; lean_object* v_unused_294_; lean_object* v_unused_295_; 
v_unused_291_ = lean_ctor_get(v_l_241_, 4);
lean_dec(v_unused_291_);
v_unused_292_ = lean_ctor_get(v_l_241_, 3);
lean_dec(v_unused_292_);
v_unused_293_ = lean_ctor_get(v_l_241_, 2);
lean_dec(v_unused_293_);
v_unused_294_ = lean_ctor_get(v_l_241_, 1);
lean_dec(v_unused_294_);
v_unused_295_ = lean_ctor_get(v_l_241_, 0);
lean_dec(v_unused_295_);
v___x_264_ = v_l_241_;
v_isShared_265_ = v_isSharedCheck_290_;
goto v_resetjp_263_;
}
else
{
lean_dec(v_l_241_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_290_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___y_269_; lean_object* v___y_270_; lean_object* v___y_271_; lean_object* v___y_280_; 
v___x_266_ = lean_nat_add(v___x_236_, v_size_237_);
v___x_267_ = lean_nat_add(v___x_266_, v_size_238_);
lean_dec(v_size_238_);
if (lean_obj_tag(v_l_257_) == 0)
{
lean_object* v_size_288_; 
v_size_288_ = lean_ctor_get(v_l_257_, 0);
lean_inc(v_size_288_);
v___y_280_ = v_size_288_;
goto v___jp_279_;
}
else
{
lean_object* v___x_289_; 
v___x_289_ = lean_unsigned_to_nat(0u);
v___y_280_ = v___x_289_;
goto v___jp_279_;
}
v___jp_268_:
{
lean_object* v___x_272_; lean_object* v___x_274_; 
v___x_272_ = lean_nat_add(v___y_269_, v___y_271_);
lean_dec(v___y_271_);
lean_dec(v___y_269_);
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 4, v_r_242_);
lean_ctor_set(v___x_264_, 3, v_r_258_);
lean_ctor_set(v___x_264_, 2, v_v_240_);
lean_ctor_set(v___x_264_, 1, v_k_239_);
lean_ctor_set(v___x_264_, 0, v___x_272_);
v___x_274_ = v___x_264_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_272_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_k_239_);
lean_ctor_set(v_reuseFailAlloc_278_, 2, v_v_240_);
lean_ctor_set(v_reuseFailAlloc_278_, 3, v_r_258_);
lean_ctor_set(v_reuseFailAlloc_278_, 4, v_r_242_);
v___x_274_ = v_reuseFailAlloc_278_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_276_; 
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 4, v___x_274_);
lean_ctor_set(v___x_252_, 3, v___y_270_);
lean_ctor_set(v___x_252_, 2, v_v_256_);
lean_ctor_set(v___x_252_, 1, v_k_255_);
lean_ctor_set(v___x_252_, 0, v___x_267_);
v___x_276_ = v___x_252_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_267_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v_k_255_);
lean_ctor_set(v_reuseFailAlloc_277_, 2, v_v_256_);
lean_ctor_set(v_reuseFailAlloc_277_, 3, v___y_270_);
lean_ctor_set(v_reuseFailAlloc_277_, 4, v___x_274_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
v___jp_279_:
{
lean_object* v___x_281_; lean_object* v___x_283_; 
v___x_281_ = lean_nat_add(v___x_266_, v___y_280_);
lean_dec(v___y_280_);
lean_dec(v___x_266_);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 4, v_l_257_);
lean_ctor_set(v___x_92_, 0, v___x_281_);
v___x_283_ = v___x_92_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_287_, 3, v_l_89_);
lean_ctor_set(v_reuseFailAlloc_287_, 4, v_l_257_);
v___x_283_ = v_reuseFailAlloc_287_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
lean_object* v___x_284_; 
v___x_284_ = lean_nat_add(v___x_236_, v_size_259_);
if (lean_obj_tag(v_r_258_) == 0)
{
lean_object* v_size_285_; 
v_size_285_ = lean_ctor_get(v_r_258_, 0);
lean_inc(v_size_285_);
v___y_269_ = v___x_284_;
v___y_270_ = v___x_283_;
v___y_271_ = v_size_285_;
goto v___jp_268_;
}
else
{
lean_object* v___x_286_; 
v___x_286_ = lean_unsigned_to_nat(0u);
v___y_269_ = v___x_284_;
v___y_270_ = v___x_283_;
v___y_271_ = v___x_286_;
goto v___jp_268_;
}
}
}
}
}
else
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_300_; 
lean_del_object(v___x_92_);
v___x_296_ = lean_nat_add(v___x_236_, v_size_237_);
v___x_297_ = lean_nat_add(v___x_296_, v_size_238_);
lean_dec(v_size_238_);
v___x_298_ = lean_nat_add(v___x_296_, v_size_254_);
lean_dec(v___x_296_);
lean_inc_ref(v_l_89_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 4, v_l_241_);
lean_ctor_set(v___x_252_, 3, v_l_89_);
lean_ctor_set(v___x_252_, 2, v_v_88_);
lean_ctor_set(v___x_252_, 1, v_k_87_);
lean_ctor_set(v___x_252_, 0, v___x_298_);
v___x_300_ = v___x_252_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_298_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_313_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_313_, 3, v_l_89_);
lean_ctor_set(v_reuseFailAlloc_313_, 4, v_l_241_);
v___x_300_ = v_reuseFailAlloc_313_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
v_isSharedCheck_307_ = !lean_is_exclusive(v_l_89_);
if (v_isSharedCheck_307_ == 0)
{
lean_object* v_unused_308_; lean_object* v_unused_309_; lean_object* v_unused_310_; lean_object* v_unused_311_; lean_object* v_unused_312_; 
v_unused_308_ = lean_ctor_get(v_l_89_, 4);
lean_dec(v_unused_308_);
v_unused_309_ = lean_ctor_get(v_l_89_, 3);
lean_dec(v_unused_309_);
v_unused_310_ = lean_ctor_get(v_l_89_, 2);
lean_dec(v_unused_310_);
v_unused_311_ = lean_ctor_get(v_l_89_, 1);
lean_dec(v_unused_311_);
v_unused_312_ = lean_ctor_get(v_l_89_, 0);
lean_dec(v_unused_312_);
v___x_302_ = v_l_89_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_dec(v_l_89_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 4, v_r_242_);
lean_ctor_set(v___x_302_, 3, v___x_300_);
lean_ctor_set(v___x_302_, 2, v_v_240_);
lean_ctor_set(v___x_302_, 1, v_k_239_);
lean_ctor_set(v___x_302_, 0, v___x_297_);
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_297_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v_k_239_);
lean_ctor_set(v_reuseFailAlloc_306_, 2, v_v_240_);
lean_ctor_set(v_reuseFailAlloc_306_, 3, v___x_300_);
lean_ctor_set(v_reuseFailAlloc_306_, 4, v_r_242_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_320_; 
v_l_320_ = lean_ctor_get(v_impl_235_, 3);
lean_inc(v_l_320_);
if (lean_obj_tag(v_l_320_) == 0)
{
lean_object* v_r_321_; lean_object* v_k_322_; lean_object* v_v_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_346_; 
v_r_321_ = lean_ctor_get(v_impl_235_, 4);
v_k_322_ = lean_ctor_get(v_impl_235_, 1);
v_v_323_ = lean_ctor_get(v_impl_235_, 2);
v_isSharedCheck_346_ = !lean_is_exclusive(v_impl_235_);
if (v_isSharedCheck_346_ == 0)
{
lean_object* v_unused_347_; lean_object* v_unused_348_; 
v_unused_347_ = lean_ctor_get(v_impl_235_, 3);
lean_dec(v_unused_347_);
v_unused_348_ = lean_ctor_get(v_impl_235_, 0);
lean_dec(v_unused_348_);
v___x_325_ = v_impl_235_;
v_isShared_326_ = v_isSharedCheck_346_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_r_321_);
lean_inc(v_v_323_);
lean_inc(v_k_322_);
lean_dec(v_impl_235_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_346_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v_k_327_; lean_object* v_v_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_342_; 
v_k_327_ = lean_ctor_get(v_l_320_, 1);
v_v_328_ = lean_ctor_get(v_l_320_, 2);
v_isSharedCheck_342_ = !lean_is_exclusive(v_l_320_);
if (v_isSharedCheck_342_ == 0)
{
lean_object* v_unused_343_; lean_object* v_unused_344_; lean_object* v_unused_345_; 
v_unused_343_ = lean_ctor_get(v_l_320_, 4);
lean_dec(v_unused_343_);
v_unused_344_ = lean_ctor_get(v_l_320_, 3);
lean_dec(v_unused_344_);
v_unused_345_ = lean_ctor_get(v_l_320_, 0);
lean_dec(v_unused_345_);
v___x_330_ = v_l_320_;
v_isShared_331_ = v_isSharedCheck_342_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_v_328_);
lean_inc(v_k_327_);
lean_dec(v_l_320_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_342_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; lean_object* v___x_334_; 
v___x_332_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_321_, 2);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 4, v_r_321_);
lean_ctor_set(v___x_330_, 3, v_r_321_);
lean_ctor_set(v___x_330_, 2, v_v_88_);
lean_ctor_set(v___x_330_, 1, v_k_87_);
lean_ctor_set(v___x_330_, 0, v___x_236_);
v___x_334_ = v___x_330_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_341_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_341_, 3, v_r_321_);
lean_ctor_set(v_reuseFailAlloc_341_, 4, v_r_321_);
v___x_334_ = v_reuseFailAlloc_341_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
lean_object* v___x_336_; 
lean_inc(v_r_321_);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 3, v_r_321_);
lean_ctor_set(v___x_325_, 0, v___x_236_);
v___x_336_ = v___x_325_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v_k_322_);
lean_ctor_set(v_reuseFailAlloc_340_, 2, v_v_323_);
lean_ctor_set(v_reuseFailAlloc_340_, 3, v_r_321_);
lean_ctor_set(v_reuseFailAlloc_340_, 4, v_r_321_);
v___x_336_ = v_reuseFailAlloc_340_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
lean_object* v___x_338_; 
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 4, v___x_336_);
lean_ctor_set(v___x_92_, 3, v___x_334_);
lean_ctor_set(v___x_92_, 2, v_v_328_);
lean_ctor_set(v___x_92_, 1, v_k_327_);
lean_ctor_set(v___x_92_, 0, v___x_332_);
v___x_338_ = v___x_92_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v___x_332_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v_k_327_);
lean_ctor_set(v_reuseFailAlloc_339_, 2, v_v_328_);
lean_ctor_set(v_reuseFailAlloc_339_, 3, v___x_334_);
lean_ctor_set(v_reuseFailAlloc_339_, 4, v___x_336_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
}
}
}
else
{
lean_object* v_r_349_; 
v_r_349_ = lean_ctor_get(v_impl_235_, 4);
lean_inc(v_r_349_);
if (lean_obj_tag(v_r_349_) == 0)
{
lean_object* v_k_350_; lean_object* v_v_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_362_; 
v_k_350_ = lean_ctor_get(v_impl_235_, 1);
v_v_351_ = lean_ctor_get(v_impl_235_, 2);
v_isSharedCheck_362_ = !lean_is_exclusive(v_impl_235_);
if (v_isSharedCheck_362_ == 0)
{
lean_object* v_unused_363_; lean_object* v_unused_364_; lean_object* v_unused_365_; 
v_unused_363_ = lean_ctor_get(v_impl_235_, 4);
lean_dec(v_unused_363_);
v_unused_364_ = lean_ctor_get(v_impl_235_, 3);
lean_dec(v_unused_364_);
v_unused_365_ = lean_ctor_get(v_impl_235_, 0);
lean_dec(v_unused_365_);
v___x_353_ = v_impl_235_;
v_isShared_354_ = v_isSharedCheck_362_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_v_351_);
lean_inc(v_k_350_);
lean_dec(v_impl_235_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_362_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_355_ = lean_unsigned_to_nat(3u);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 4, v_l_320_);
lean_ctor_set(v___x_353_, 2, v_v_88_);
lean_ctor_set(v___x_353_, 1, v_k_87_);
lean_ctor_set(v___x_353_, 0, v___x_236_);
v___x_357_ = v___x_353_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_361_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_361_, 3, v_l_320_);
lean_ctor_set(v_reuseFailAlloc_361_, 4, v_l_320_);
v___x_357_ = v_reuseFailAlloc_361_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_359_; 
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 4, v_r_349_);
lean_ctor_set(v___x_92_, 3, v___x_357_);
lean_ctor_set(v___x_92_, 2, v_v_351_);
lean_ctor_set(v___x_92_, 1, v_k_350_);
lean_ctor_set(v___x_92_, 0, v___x_355_);
v___x_359_ = v___x_92_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_355_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_k_350_);
lean_ctor_set(v_reuseFailAlloc_360_, 2, v_v_351_);
lean_ctor_set(v_reuseFailAlloc_360_, 3, v___x_357_);
lean_ctor_set(v_reuseFailAlloc_360_, 4, v_r_349_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v___x_366_; lean_object* v___x_368_; 
v___x_366_ = lean_unsigned_to_nat(2u);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 4, v_impl_235_);
lean_ctor_set(v___x_92_, 3, v_r_349_);
lean_ctor_set(v___x_92_, 0, v___x_366_);
v___x_368_ = v___x_92_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___x_366_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_369_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_369_, 3, v_r_349_);
lean_ctor_set(v_reuseFailAlloc_369_, 4, v_impl_235_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
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
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_unsigned_to_nat(1u);
v___x_372_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v_k_83_);
lean_ctor_set(v___x_372_, 2, v_v_84_);
lean_ctor_set(v___x_372_, 3, v_t_85_);
lean_ctor_set(v___x_372_, 4, v_t_85_);
return v___x_372_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(lean_object* v_ws_373_, lean_object* v_dep_374_, lean_object* v_lakeOpts_375_, lean_object* v_leanOpts_376_, uint8_t v_reconfigure_377_, lean_object* v_a_378_){
_start:
{
lean_object* v_lakeEnv_380_; lean_object* v_lakeConfig_381_; lean_object* v_lakeCache_382_; lean_object* v_lakeArgs_x3f_383_; lean_object* v_packages_384_; lean_object* v_packageMap_385_; lean_object* v_facetConfigs_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_453_; 
v_lakeEnv_380_ = lean_ctor_get(v_ws_373_, 0);
v_lakeConfig_381_ = lean_ctor_get(v_ws_373_, 1);
v_lakeCache_382_ = lean_ctor_get(v_ws_373_, 2);
v_lakeArgs_x3f_383_ = lean_ctor_get(v_ws_373_, 3);
v_packages_384_ = lean_ctor_get(v_ws_373_, 4);
v_packageMap_385_ = lean_ctor_get(v_ws_373_, 5);
v_facetConfigs_386_ = lean_ctor_get(v_ws_373_, 6);
v_isSharedCheck_453_ = !lean_is_exclusive(v_ws_373_);
if (v_isSharedCheck_453_ == 0)
{
v___x_388_ = v_ws_373_;
v_isShared_389_ = v_isSharedCheck_453_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_facetConfigs_386_);
lean_inc(v_packageMap_385_);
lean_inc(v_packages_384_);
lean_inc(v_lakeArgs_x3f_383_);
lean_inc(v_lakeCache_382_);
lean_inc(v_lakeConfig_381_);
lean_inc(v_lakeEnv_380_);
lean_dec(v_ws_373_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_453_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v_manifestEntry_392_; lean_object* v_dir_393_; lean_object* v_pkgDir_394_; lean_object* v_relPkgDir_395_; lean_object* v_remoteUrl_396_; lean_object* v_name_397_; lean_object* v_scope_398_; lean_object* v_configFile_399_; lean_object* v_manifestFile_x3f_400_; lean_object* v_wsIdx_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___y_405_; 
v___x_390_ = lean_unsigned_to_nat(0u);
v___x_391_ = lean_array_fget_borrowed(v_packages_384_, v___x_390_);
v_manifestEntry_392_ = lean_ctor_get(v_dep_374_, 4);
lean_inc_ref(v_manifestEntry_392_);
v_dir_393_ = lean_ctor_get(v___x_391_, 4);
v_pkgDir_394_ = lean_ctor_get(v_dep_374_, 0);
lean_inc_ref_n(v_pkgDir_394_, 2);
v_relPkgDir_395_ = lean_ctor_get(v_dep_374_, 1);
lean_inc_ref(v_relPkgDir_395_);
v_remoteUrl_396_ = lean_ctor_get(v_dep_374_, 2);
lean_inc_ref(v_remoteUrl_396_);
lean_dec_ref(v_dep_374_);
v_name_397_ = lean_ctor_get(v_manifestEntry_392_, 0);
lean_inc(v_name_397_);
v_scope_398_ = lean_ctor_get(v_manifestEntry_392_, 1);
lean_inc_ref(v_scope_398_);
v_configFile_399_ = lean_ctor_get(v_manifestEntry_392_, 2);
lean_inc_ref_n(v_configFile_399_, 2);
v_manifestFile_x3f_400_ = lean_ctor_get(v_manifestEntry_392_, 3);
lean_inc(v_manifestFile_x3f_400_);
lean_dec_ref(v_manifestEntry_392_);
v_wsIdx_401_ = lean_array_get_size(v_packages_384_);
v___x_402_ = lean_box(0);
v___x_403_ = l_Lake_joinRelative(v_pkgDir_394_, v_configFile_399_);
if (lean_obj_tag(v_manifestFile_x3f_400_) == 0)
{
lean_object* v___x_451_; 
v___x_451_ = l_Lake_defaultManifestFile;
v___y_405_ = v___x_451_;
goto v___jp_404_;
}
else
{
lean_object* v_val_452_; 
v_val_452_ = lean_ctor_get(v_manifestFile_x3f_400_, 0);
lean_inc(v_val_452_);
lean_dec_ref_known(v_manifestFile_x3f_400_, 1);
v___y_405_ = v_val_452_;
goto v___jp_404_;
}
v___jp_404_:
{
lean_object* v___x_406_; uint8_t v___x_407_; uint8_t v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_406_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_407_ = 0;
v___x_408_ = 1;
lean_inc(v_name_397_);
lean_inc_ref(v_dir_393_);
lean_inc_ref(v_lakeEnv_380_);
v___x_409_ = lean_alloc_ctor(0, 16, 3);
lean_ctor_set(v___x_409_, 0, v_lakeEnv_380_);
lean_ctor_set(v___x_409_, 1, v___x_402_);
lean_ctor_set(v___x_409_, 2, v_dir_393_);
lean_ctor_set(v___x_409_, 3, v_wsIdx_401_);
lean_ctor_set(v___x_409_, 4, v_name_397_);
lean_ctor_set(v___x_409_, 5, v_relPkgDir_395_);
lean_ctor_set(v___x_409_, 6, v_pkgDir_394_);
lean_ctor_set(v___x_409_, 7, v_configFile_399_);
lean_ctor_set(v___x_409_, 8, v___x_403_);
lean_ctor_set(v___x_409_, 9, v___x_402_);
lean_ctor_set(v___x_409_, 10, v___y_405_);
lean_ctor_set(v___x_409_, 11, v___x_406_);
lean_ctor_set(v___x_409_, 12, v_lakeOpts_375_);
lean_ctor_set(v___x_409_, 13, v_leanOpts_376_);
lean_ctor_set(v___x_409_, 14, v_scope_398_);
lean_ctor_set(v___x_409_, 15, v_remoteUrl_396_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*16, v_reconfigure_377_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*16 + 1, v___x_407_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*16 + 2, v___x_408_);
v___x_410_ = l_Lean_Name_toString(v_name_397_, v___x_407_);
v___x_411_ = l_Lake_resolveConfigFile(v___x_410_, v___x_409_, v_a_378_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v_a_413_; lean_object* v___x_414_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc_n(v_a_412_, 2);
v_a_413_ = lean_ctor_get(v___x_411_, 1);
lean_inc(v_a_413_);
lean_dec_ref_known(v___x_411_, 2);
v___x_414_ = l_Lake_loadConfigFile___redArg(v_a_412_, v_a_413_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_432_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
v_a_416_ = lean_ctor_get(v___x_414_, 1);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_432_ == 0)
{
v___x_418_ = v___x_414_;
v_isShared_419_ = v_isSharedCheck_432_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_inc(v_a_415_);
lean_dec(v___x_414_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_432_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v_facetDecls_420_; lean_object* v___x_421_; lean_object* v_keyName_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_426_; 
v_facetDecls_420_ = lean_ctor_get(v_a_415_, 2);
lean_inc_ref(v_facetDecls_420_);
v___x_421_ = l_Lake_mkPackage(v_a_412_, v_a_415_, v_wsIdx_401_);
lean_dec(v_a_412_);
v_keyName_422_ = lean_ctor_get(v___x_421_, 2);
lean_inc(v_keyName_422_);
lean_inc_ref(v___x_421_);
v___x_423_ = lean_array_push(v_packages_384_, v___x_421_);
v___x_424_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_keyName_422_, v___x_421_, v_packageMap_385_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 5, v___x_424_);
lean_ctor_set(v___x_388_, 4, v___x_423_);
v___x_426_ = v___x_388_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_lakeEnv_380_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_lakeConfig_381_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v_lakeCache_382_);
lean_ctor_set(v_reuseFailAlloc_431_, 3, v_lakeArgs_x3f_383_);
lean_ctor_set(v_reuseFailAlloc_431_, 4, v___x_423_);
lean_ctor_set(v_reuseFailAlloc_431_, 5, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_431_, 6, v_facetConfigs_386_);
v___x_426_ = v_reuseFailAlloc_431_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_427_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(v_facetDecls_420_, v___x_426_);
lean_dec_ref(v_facetDecls_420_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_427_);
v___x_429_ = v___x_418_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_a_416_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
else
{
lean_object* v_a_433_; lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
lean_dec(v_a_412_);
lean_del_object(v___x_388_);
lean_dec(v_facetConfigs_386_);
lean_dec(v_packageMap_385_);
lean_dec_ref(v_packages_384_);
lean_dec(v_lakeArgs_x3f_383_);
lean_dec_ref(v_lakeCache_382_);
lean_dec_ref(v_lakeConfig_381_);
lean_dec_ref(v_lakeEnv_380_);
v_a_433_ = lean_ctor_get(v___x_414_, 0);
v_a_434_ = lean_ctor_get(v___x_414_, 1);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_414_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_inc(v_a_433_);
lean_dec(v___x_414_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_433_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
else
{
lean_object* v_a_442_; lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
lean_del_object(v___x_388_);
lean_dec(v_facetConfigs_386_);
lean_dec(v_packageMap_385_);
lean_dec_ref(v_packages_384_);
lean_dec(v_lakeArgs_x3f_383_);
lean_dec_ref(v_lakeCache_382_);
lean_dec_ref(v_lakeConfig_381_);
lean_dec_ref(v_lakeEnv_380_);
v_a_442_ = lean_ctor_get(v___x_411_, 0);
v_a_443_ = lean_ctor_get(v___x_411_, 1);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_411_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_inc(v_a_442_);
lean_dec(v___x_411_);
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
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_442_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_a_443_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27___boxed(lean_object* v_ws_454_, lean_object* v_dep_455_, lean_object* v_lakeOpts_456_, lean_object* v_leanOpts_457_, lean_object* v_reconfigure_458_, lean_object* v_a_459_, lean_object* v_a_460_){
_start:
{
uint8_t v_reconfigure_boxed_461_; lean_object* v_res_462_; 
v_reconfigure_boxed_461_ = lean_unbox(v_reconfigure_458_);
v_res_462_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_454_, v_dep_455_, v_lakeOpts_456_, v_leanOpts_457_, v_reconfigure_boxed_461_, v_a_459_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0(lean_object* v_00_u03b2_463_, lean_object* v_k_464_, lean_object* v_v_465_, lean_object* v_t_466_, lean_object* v_hl_467_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_464_, v_v_465_, v_t_466_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(lean_object* v_self_469_, lean_object* v_pkg_470_, lean_object* v_depIdxs_471_){
_start:
{
lean_object* v_wsIdx_472_; lean_object* v_baseName_473_; lean_object* v_keyName_474_; lean_object* v_origName_475_; lean_object* v_dir_476_; lean_object* v_relDir_477_; lean_object* v_config_478_; lean_object* v_configFile_479_; lean_object* v_relConfigFile_480_; lean_object* v_relManifestFile_481_; lean_object* v_scope_482_; lean_object* v_remoteUrl_483_; lean_object* v_depConfigs_484_; lean_object* v_depPkgs_485_; lean_object* v_targetDecls_486_; lean_object* v_targetDeclMap_487_; lean_object* v_defaultTargets_488_; lean_object* v_cacheServices_489_; lean_object* v_scripts_490_; lean_object* v_defaultScripts_491_; lean_object* v_postUpdateHooks_492_; lean_object* v_buildArchive_493_; lean_object* v_testDriver_494_; lean_object* v_lintDriver_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_518_; 
v_wsIdx_472_ = lean_ctor_get(v_pkg_470_, 0);
v_baseName_473_ = lean_ctor_get(v_pkg_470_, 1);
v_keyName_474_ = lean_ctor_get(v_pkg_470_, 2);
v_origName_475_ = lean_ctor_get(v_pkg_470_, 3);
v_dir_476_ = lean_ctor_get(v_pkg_470_, 4);
v_relDir_477_ = lean_ctor_get(v_pkg_470_, 5);
v_config_478_ = lean_ctor_get(v_pkg_470_, 6);
v_configFile_479_ = lean_ctor_get(v_pkg_470_, 7);
v_relConfigFile_480_ = lean_ctor_get(v_pkg_470_, 8);
v_relManifestFile_481_ = lean_ctor_get(v_pkg_470_, 9);
v_scope_482_ = lean_ctor_get(v_pkg_470_, 10);
v_remoteUrl_483_ = lean_ctor_get(v_pkg_470_, 11);
v_depConfigs_484_ = lean_ctor_get(v_pkg_470_, 12);
v_depPkgs_485_ = lean_ctor_get(v_pkg_470_, 14);
v_targetDecls_486_ = lean_ctor_get(v_pkg_470_, 15);
v_targetDeclMap_487_ = lean_ctor_get(v_pkg_470_, 16);
v_defaultTargets_488_ = lean_ctor_get(v_pkg_470_, 17);
v_cacheServices_489_ = lean_ctor_get(v_pkg_470_, 18);
v_scripts_490_ = lean_ctor_get(v_pkg_470_, 19);
v_defaultScripts_491_ = lean_ctor_get(v_pkg_470_, 20);
v_postUpdateHooks_492_ = lean_ctor_get(v_pkg_470_, 21);
v_buildArchive_493_ = lean_ctor_get(v_pkg_470_, 22);
v_testDriver_494_ = lean_ctor_get(v_pkg_470_, 23);
v_lintDriver_495_ = lean_ctor_get(v_pkg_470_, 24);
v_isSharedCheck_518_ = !lean_is_exclusive(v_pkg_470_);
if (v_isSharedCheck_518_ == 0)
{
lean_object* v_unused_519_; 
v_unused_519_ = lean_ctor_get(v_pkg_470_, 13);
lean_dec(v_unused_519_);
v___x_497_ = v_pkg_470_;
v_isShared_498_ = v_isSharedCheck_518_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_lintDriver_495_);
lean_inc(v_testDriver_494_);
lean_inc(v_buildArchive_493_);
lean_inc(v_postUpdateHooks_492_);
lean_inc(v_defaultScripts_491_);
lean_inc(v_scripts_490_);
lean_inc(v_cacheServices_489_);
lean_inc(v_defaultTargets_488_);
lean_inc(v_targetDeclMap_487_);
lean_inc(v_targetDecls_486_);
lean_inc(v_depPkgs_485_);
lean_inc(v_depConfigs_484_);
lean_inc(v_remoteUrl_483_);
lean_inc(v_scope_482_);
lean_inc(v_relManifestFile_481_);
lean_inc(v_relConfigFile_480_);
lean_inc(v_configFile_479_);
lean_inc(v_config_478_);
lean_inc(v_relDir_477_);
lean_inc(v_dir_476_);
lean_inc(v_origName_475_);
lean_inc(v_keyName_474_);
lean_inc(v_baseName_473_);
lean_inc(v_wsIdx_472_);
lean_dec(v_pkg_470_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_518_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v_lakeEnv_499_; lean_object* v_lakeConfig_500_; lean_object* v_lakeCache_501_; lean_object* v_lakeArgs_x3f_502_; lean_object* v_packages_503_; lean_object* v_packageMap_504_; lean_object* v_facetConfigs_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_517_; 
v_lakeEnv_499_ = lean_ctor_get(v_self_469_, 0);
v_lakeConfig_500_ = lean_ctor_get(v_self_469_, 1);
v_lakeCache_501_ = lean_ctor_get(v_self_469_, 2);
v_lakeArgs_x3f_502_ = lean_ctor_get(v_self_469_, 3);
v_packages_503_ = lean_ctor_get(v_self_469_, 4);
v_packageMap_504_ = lean_ctor_get(v_self_469_, 5);
v_facetConfigs_505_ = lean_ctor_get(v_self_469_, 6);
v_isSharedCheck_517_ = !lean_is_exclusive(v_self_469_);
if (v_isSharedCheck_517_ == 0)
{
v___x_507_ = v_self_469_;
v_isShared_508_ = v_isSharedCheck_517_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_facetConfigs_505_);
lean_inc(v_packageMap_504_);
lean_inc(v_packages_503_);
lean_inc(v_lakeArgs_x3f_502_);
lean_inc(v_lakeCache_501_);
lean_inc(v_lakeConfig_500_);
lean_inc(v_lakeEnv_499_);
lean_dec(v_self_469_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_517_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v_pkg_510_; 
lean_inc(v_keyName_474_);
lean_inc(v_wsIdx_472_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 13, v_depIdxs_471_);
v_pkg_510_ = v___x_497_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 25, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_wsIdx_472_);
lean_ctor_set(v_reuseFailAlloc_516_, 1, v_baseName_473_);
lean_ctor_set(v_reuseFailAlloc_516_, 2, v_keyName_474_);
lean_ctor_set(v_reuseFailAlloc_516_, 3, v_origName_475_);
lean_ctor_set(v_reuseFailAlloc_516_, 4, v_dir_476_);
lean_ctor_set(v_reuseFailAlloc_516_, 5, v_relDir_477_);
lean_ctor_set(v_reuseFailAlloc_516_, 6, v_config_478_);
lean_ctor_set(v_reuseFailAlloc_516_, 7, v_configFile_479_);
lean_ctor_set(v_reuseFailAlloc_516_, 8, v_relConfigFile_480_);
lean_ctor_set(v_reuseFailAlloc_516_, 9, v_relManifestFile_481_);
lean_ctor_set(v_reuseFailAlloc_516_, 10, v_scope_482_);
lean_ctor_set(v_reuseFailAlloc_516_, 11, v_remoteUrl_483_);
lean_ctor_set(v_reuseFailAlloc_516_, 12, v_depConfigs_484_);
lean_ctor_set(v_reuseFailAlloc_516_, 13, v_depIdxs_471_);
lean_ctor_set(v_reuseFailAlloc_516_, 14, v_depPkgs_485_);
lean_ctor_set(v_reuseFailAlloc_516_, 15, v_targetDecls_486_);
lean_ctor_set(v_reuseFailAlloc_516_, 16, v_targetDeclMap_487_);
lean_ctor_set(v_reuseFailAlloc_516_, 17, v_defaultTargets_488_);
lean_ctor_set(v_reuseFailAlloc_516_, 18, v_cacheServices_489_);
lean_ctor_set(v_reuseFailAlloc_516_, 19, v_scripts_490_);
lean_ctor_set(v_reuseFailAlloc_516_, 20, v_defaultScripts_491_);
lean_ctor_set(v_reuseFailAlloc_516_, 21, v_postUpdateHooks_492_);
lean_ctor_set(v_reuseFailAlloc_516_, 22, v_buildArchive_493_);
lean_ctor_set(v_reuseFailAlloc_516_, 23, v_testDriver_494_);
lean_ctor_set(v_reuseFailAlloc_516_, 24, v_lintDriver_495_);
v_pkg_510_ = v_reuseFailAlloc_516_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_514_; 
lean_inc_ref(v_pkg_510_);
v___x_511_ = lean_array_fset(v_packages_503_, v_wsIdx_472_, v_pkg_510_);
lean_dec(v_wsIdx_472_);
v___x_512_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_keyName_474_, v_pkg_510_, v_packageMap_504_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 5, v___x_512_);
lean_ctor_set(v___x_507_, 4, v___x_511_);
v___x_514_ = v___x_507_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_lakeEnv_499_);
lean_ctor_set(v_reuseFailAlloc_515_, 1, v_lakeConfig_500_);
lean_ctor_set(v_reuseFailAlloc_515_, 2, v_lakeCache_501_);
lean_ctor_set(v_reuseFailAlloc_515_, 3, v_lakeArgs_x3f_502_);
lean_ctor_set(v_reuseFailAlloc_515_, 4, v___x_511_);
lean_ctor_set(v_reuseFailAlloc_515_, 5, v___x_512_);
lean_ctor_set(v_reuseFailAlloc_515_, 6, v_facetConfigs_505_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs(lean_object* v_self_520_, lean_object* v_pkg_521_, lean_object* v_depIdxs_522_, lean_object* v_h__wsIdx_523_, lean_object* v_h__depIdxs_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_self_520_, v_pkg_521_, v_depIdxs_522_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(lean_object* v_val_526_, size_t v_sz_527_, size_t v_i_528_, lean_object* v_bs_529_){
_start:
{
uint8_t v___x_530_; 
v___x_530_ = lean_usize_dec_lt(v_i_528_, v_sz_527_);
if (v___x_530_ == 0)
{
return v_bs_529_;
}
else
{
lean_object* v_v_531_; lean_object* v___x_532_; lean_object* v_bs_x27_533_; lean_object* v___x_534_; size_t v___x_535_; size_t v___x_536_; lean_object* v___x_537_; 
v_v_531_ = lean_array_uget(v_bs_529_, v_i_528_);
v___x_532_ = lean_unsigned_to_nat(0u);
v_bs_x27_533_ = lean_array_uset(v_bs_529_, v_i_528_, v___x_532_);
v___x_534_ = lean_array_fget_borrowed(v_val_526_, v_v_531_);
lean_dec(v_v_531_);
v___x_535_ = ((size_t)1ULL);
v___x_536_ = lean_usize_add(v_i_528_, v___x_535_);
lean_inc(v___x_534_);
v___x_537_ = lean_array_uset(v_bs_x27_533_, v_i_528_, v___x_534_);
v_i_528_ = v___x_536_;
v_bs_529_ = v___x_537_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0___boxed(lean_object* v_val_539_, lean_object* v_sz_540_, lean_object* v_i_541_, lean_object* v_bs_542_){
_start:
{
size_t v_sz_boxed_543_; size_t v_i_boxed_544_; lean_object* v_res_545_; 
v_sz_boxed_543_ = lean_unbox_usize(v_sz_540_);
lean_dec(v_sz_540_);
v_i_boxed_544_ = lean_unbox_usize(v_i_541_);
lean_dec(v_i_541_);
v_res_545_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(v_val_539_, v_sz_boxed_543_, v_i_boxed_544_, v_bs_542_);
lean_dec_ref(v_val_539_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(lean_object* v_x_546_, lean_object* v_x_547_){
_start:
{
lean_object* v_zero_548_; uint8_t v_isZero_549_; 
v_zero_548_ = lean_unsigned_to_nat(0u);
v_isZero_549_ = lean_nat_dec_eq(v_x_546_, v_zero_548_);
if (v_isZero_549_ == 1)
{
lean_dec(v_x_546_);
return v_x_547_;
}
else
{
lean_object* v_one_550_; lean_object* v_n_551_; lean_object* v_pkg_552_; lean_object* v_wsIdx_553_; lean_object* v_baseName_554_; lean_object* v_keyName_555_; lean_object* v_origName_556_; lean_object* v_dir_557_; lean_object* v_relDir_558_; lean_object* v_config_559_; lean_object* v_configFile_560_; lean_object* v_relConfigFile_561_; lean_object* v_relManifestFile_562_; lean_object* v_scope_563_; lean_object* v_remoteUrl_564_; lean_object* v_depConfigs_565_; lean_object* v_depIdxs_566_; lean_object* v_targetDecls_567_; lean_object* v_targetDeclMap_568_; lean_object* v_defaultTargets_569_; lean_object* v_cacheServices_570_; lean_object* v_scripts_571_; lean_object* v_defaultScripts_572_; lean_object* v_postUpdateHooks_573_; lean_object* v_buildArchive_574_; lean_object* v_testDriver_575_; lean_object* v_lintDriver_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_588_; 
v_one_550_ = lean_unsigned_to_nat(1u);
v_n_551_ = lean_nat_sub(v_x_546_, v_one_550_);
lean_dec(v_x_546_);
v_pkg_552_ = lean_array_fget(v_x_547_, v_n_551_);
v_wsIdx_553_ = lean_ctor_get(v_pkg_552_, 0);
v_baseName_554_ = lean_ctor_get(v_pkg_552_, 1);
v_keyName_555_ = lean_ctor_get(v_pkg_552_, 2);
v_origName_556_ = lean_ctor_get(v_pkg_552_, 3);
v_dir_557_ = lean_ctor_get(v_pkg_552_, 4);
v_relDir_558_ = lean_ctor_get(v_pkg_552_, 5);
v_config_559_ = lean_ctor_get(v_pkg_552_, 6);
v_configFile_560_ = lean_ctor_get(v_pkg_552_, 7);
v_relConfigFile_561_ = lean_ctor_get(v_pkg_552_, 8);
v_relManifestFile_562_ = lean_ctor_get(v_pkg_552_, 9);
v_scope_563_ = lean_ctor_get(v_pkg_552_, 10);
v_remoteUrl_564_ = lean_ctor_get(v_pkg_552_, 11);
v_depConfigs_565_ = lean_ctor_get(v_pkg_552_, 12);
v_depIdxs_566_ = lean_ctor_get(v_pkg_552_, 13);
v_targetDecls_567_ = lean_ctor_get(v_pkg_552_, 15);
v_targetDeclMap_568_ = lean_ctor_get(v_pkg_552_, 16);
v_defaultTargets_569_ = lean_ctor_get(v_pkg_552_, 17);
v_cacheServices_570_ = lean_ctor_get(v_pkg_552_, 18);
v_scripts_571_ = lean_ctor_get(v_pkg_552_, 19);
v_defaultScripts_572_ = lean_ctor_get(v_pkg_552_, 20);
v_postUpdateHooks_573_ = lean_ctor_get(v_pkg_552_, 21);
v_buildArchive_574_ = lean_ctor_get(v_pkg_552_, 22);
v_testDriver_575_ = lean_ctor_get(v_pkg_552_, 23);
v_lintDriver_576_ = lean_ctor_get(v_pkg_552_, 24);
v_isSharedCheck_588_ = !lean_is_exclusive(v_pkg_552_);
if (v_isSharedCheck_588_ == 0)
{
lean_object* v_unused_589_; 
v_unused_589_ = lean_ctor_get(v_pkg_552_, 14);
lean_dec(v_unused_589_);
v___x_578_ = v_pkg_552_;
v_isShared_579_ = v_isSharedCheck_588_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_lintDriver_576_);
lean_inc(v_testDriver_575_);
lean_inc(v_buildArchive_574_);
lean_inc(v_postUpdateHooks_573_);
lean_inc(v_defaultScripts_572_);
lean_inc(v_scripts_571_);
lean_inc(v_cacheServices_570_);
lean_inc(v_defaultTargets_569_);
lean_inc(v_targetDeclMap_568_);
lean_inc(v_targetDecls_567_);
lean_inc(v_depIdxs_566_);
lean_inc(v_depConfigs_565_);
lean_inc(v_remoteUrl_564_);
lean_inc(v_scope_563_);
lean_inc(v_relManifestFile_562_);
lean_inc(v_relConfigFile_561_);
lean_inc(v_configFile_560_);
lean_inc(v_config_559_);
lean_inc(v_relDir_558_);
lean_inc(v_dir_557_);
lean_inc(v_origName_556_);
lean_inc(v_keyName_555_);
lean_inc(v_baseName_554_);
lean_inc(v_wsIdx_553_);
lean_dec(v_pkg_552_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_588_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
size_t v_sz_580_; size_t v___x_581_; lean_object* v_depPkgs_582_; lean_object* v___x_584_; 
v_sz_580_ = lean_array_size(v_depIdxs_566_);
v___x_581_ = ((size_t)0ULL);
lean_inc_ref(v_depIdxs_566_);
v_depPkgs_582_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(v_x_547_, v_sz_580_, v___x_581_, v_depIdxs_566_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 14, v_depPkgs_582_);
v___x_584_ = v___x_578_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 25, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_wsIdx_553_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v_baseName_554_);
lean_ctor_set(v_reuseFailAlloc_587_, 2, v_keyName_555_);
lean_ctor_set(v_reuseFailAlloc_587_, 3, v_origName_556_);
lean_ctor_set(v_reuseFailAlloc_587_, 4, v_dir_557_);
lean_ctor_set(v_reuseFailAlloc_587_, 5, v_relDir_558_);
lean_ctor_set(v_reuseFailAlloc_587_, 6, v_config_559_);
lean_ctor_set(v_reuseFailAlloc_587_, 7, v_configFile_560_);
lean_ctor_set(v_reuseFailAlloc_587_, 8, v_relConfigFile_561_);
lean_ctor_set(v_reuseFailAlloc_587_, 9, v_relManifestFile_562_);
lean_ctor_set(v_reuseFailAlloc_587_, 10, v_scope_563_);
lean_ctor_set(v_reuseFailAlloc_587_, 11, v_remoteUrl_564_);
lean_ctor_set(v_reuseFailAlloc_587_, 12, v_depConfigs_565_);
lean_ctor_set(v_reuseFailAlloc_587_, 13, v_depIdxs_566_);
lean_ctor_set(v_reuseFailAlloc_587_, 14, v_depPkgs_582_);
lean_ctor_set(v_reuseFailAlloc_587_, 15, v_targetDecls_567_);
lean_ctor_set(v_reuseFailAlloc_587_, 16, v_targetDeclMap_568_);
lean_ctor_set(v_reuseFailAlloc_587_, 17, v_defaultTargets_569_);
lean_ctor_set(v_reuseFailAlloc_587_, 18, v_cacheServices_570_);
lean_ctor_set(v_reuseFailAlloc_587_, 19, v_scripts_571_);
lean_ctor_set(v_reuseFailAlloc_587_, 20, v_defaultScripts_572_);
lean_ctor_set(v_reuseFailAlloc_587_, 21, v_postUpdateHooks_573_);
lean_ctor_set(v_reuseFailAlloc_587_, 22, v_buildArchive_574_);
lean_ctor_set(v_reuseFailAlloc_587_, 23, v_testDriver_575_);
lean_ctor_set(v_reuseFailAlloc_587_, 24, v_lintDriver_576_);
v___x_584_ = v_reuseFailAlloc_587_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
lean_object* v_pkgs_x27_585_; 
v_pkgs_x27_585_ = lean_array_fset(v_x_547_, v_n_551_, v___x_584_);
v_x_546_ = v_n_551_;
v_x_547_ = v_pkgs_x27_585_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(lean_object* v___x_590_, lean_object* v_x_591_, lean_object* v_x_592_){
_start:
{
lean_object* v_zero_593_; uint8_t v_isZero_594_; 
v_zero_593_ = lean_unsigned_to_nat(0u);
v_isZero_594_ = lean_nat_dec_eq(v_x_591_, v_zero_593_);
if (v_isZero_594_ == 1)
{
return v_x_592_;
}
else
{
lean_object* v_one_595_; lean_object* v_n_596_; lean_object* v_pkg_597_; lean_object* v_wsIdx_598_; lean_object* v_baseName_599_; lean_object* v_keyName_600_; lean_object* v_origName_601_; lean_object* v_dir_602_; lean_object* v_relDir_603_; lean_object* v_config_604_; lean_object* v_configFile_605_; lean_object* v_relConfigFile_606_; lean_object* v_relManifestFile_607_; lean_object* v_scope_608_; lean_object* v_remoteUrl_609_; lean_object* v_depConfigs_610_; lean_object* v_depIdxs_611_; lean_object* v_targetDecls_612_; lean_object* v_targetDeclMap_613_; lean_object* v_defaultTargets_614_; lean_object* v_cacheServices_615_; lean_object* v_scripts_616_; lean_object* v_defaultScripts_617_; lean_object* v_postUpdateHooks_618_; lean_object* v_buildArchive_619_; lean_object* v_testDriver_620_; lean_object* v_lintDriver_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_633_; 
v_one_595_ = lean_unsigned_to_nat(1u);
v_n_596_ = lean_nat_sub(v_x_591_, v_one_595_);
v_pkg_597_ = lean_array_fget(v_x_592_, v_n_596_);
v_wsIdx_598_ = lean_ctor_get(v_pkg_597_, 0);
v_baseName_599_ = lean_ctor_get(v_pkg_597_, 1);
v_keyName_600_ = lean_ctor_get(v_pkg_597_, 2);
v_origName_601_ = lean_ctor_get(v_pkg_597_, 3);
v_dir_602_ = lean_ctor_get(v_pkg_597_, 4);
v_relDir_603_ = lean_ctor_get(v_pkg_597_, 5);
v_config_604_ = lean_ctor_get(v_pkg_597_, 6);
v_configFile_605_ = lean_ctor_get(v_pkg_597_, 7);
v_relConfigFile_606_ = lean_ctor_get(v_pkg_597_, 8);
v_relManifestFile_607_ = lean_ctor_get(v_pkg_597_, 9);
v_scope_608_ = lean_ctor_get(v_pkg_597_, 10);
v_remoteUrl_609_ = lean_ctor_get(v_pkg_597_, 11);
v_depConfigs_610_ = lean_ctor_get(v_pkg_597_, 12);
v_depIdxs_611_ = lean_ctor_get(v_pkg_597_, 13);
v_targetDecls_612_ = lean_ctor_get(v_pkg_597_, 15);
v_targetDeclMap_613_ = lean_ctor_get(v_pkg_597_, 16);
v_defaultTargets_614_ = lean_ctor_get(v_pkg_597_, 17);
v_cacheServices_615_ = lean_ctor_get(v_pkg_597_, 18);
v_scripts_616_ = lean_ctor_get(v_pkg_597_, 19);
v_defaultScripts_617_ = lean_ctor_get(v_pkg_597_, 20);
v_postUpdateHooks_618_ = lean_ctor_get(v_pkg_597_, 21);
v_buildArchive_619_ = lean_ctor_get(v_pkg_597_, 22);
v_testDriver_620_ = lean_ctor_get(v_pkg_597_, 23);
v_lintDriver_621_ = lean_ctor_get(v_pkg_597_, 24);
v_isSharedCheck_633_ = !lean_is_exclusive(v_pkg_597_);
if (v_isSharedCheck_633_ == 0)
{
lean_object* v_unused_634_; 
v_unused_634_ = lean_ctor_get(v_pkg_597_, 14);
lean_dec(v_unused_634_);
v___x_623_ = v_pkg_597_;
v_isShared_624_ = v_isSharedCheck_633_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_lintDriver_621_);
lean_inc(v_testDriver_620_);
lean_inc(v_buildArchive_619_);
lean_inc(v_postUpdateHooks_618_);
lean_inc(v_defaultScripts_617_);
lean_inc(v_scripts_616_);
lean_inc(v_cacheServices_615_);
lean_inc(v_defaultTargets_614_);
lean_inc(v_targetDeclMap_613_);
lean_inc(v_targetDecls_612_);
lean_inc(v_depIdxs_611_);
lean_inc(v_depConfigs_610_);
lean_inc(v_remoteUrl_609_);
lean_inc(v_scope_608_);
lean_inc(v_relManifestFile_607_);
lean_inc(v_relConfigFile_606_);
lean_inc(v_configFile_605_);
lean_inc(v_config_604_);
lean_inc(v_relDir_603_);
lean_inc(v_dir_602_);
lean_inc(v_origName_601_);
lean_inc(v_keyName_600_);
lean_inc(v_baseName_599_);
lean_inc(v_wsIdx_598_);
lean_dec(v_pkg_597_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_633_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
size_t v_sz_625_; size_t v___x_626_; lean_object* v_depPkgs_627_; lean_object* v___x_629_; 
v_sz_625_ = lean_array_size(v_depIdxs_611_);
v___x_626_ = ((size_t)0ULL);
lean_inc_ref(v_depIdxs_611_);
v_depPkgs_627_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(v_x_592_, v_sz_625_, v___x_626_, v_depIdxs_611_);
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 14, v_depPkgs_627_);
v___x_629_ = v___x_623_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 25, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_wsIdx_598_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_baseName_599_);
lean_ctor_set(v_reuseFailAlloc_632_, 2, v_keyName_600_);
lean_ctor_set(v_reuseFailAlloc_632_, 3, v_origName_601_);
lean_ctor_set(v_reuseFailAlloc_632_, 4, v_dir_602_);
lean_ctor_set(v_reuseFailAlloc_632_, 5, v_relDir_603_);
lean_ctor_set(v_reuseFailAlloc_632_, 6, v_config_604_);
lean_ctor_set(v_reuseFailAlloc_632_, 7, v_configFile_605_);
lean_ctor_set(v_reuseFailAlloc_632_, 8, v_relConfigFile_606_);
lean_ctor_set(v_reuseFailAlloc_632_, 9, v_relManifestFile_607_);
lean_ctor_set(v_reuseFailAlloc_632_, 10, v_scope_608_);
lean_ctor_set(v_reuseFailAlloc_632_, 11, v_remoteUrl_609_);
lean_ctor_set(v_reuseFailAlloc_632_, 12, v_depConfigs_610_);
lean_ctor_set(v_reuseFailAlloc_632_, 13, v_depIdxs_611_);
lean_ctor_set(v_reuseFailAlloc_632_, 14, v_depPkgs_627_);
lean_ctor_set(v_reuseFailAlloc_632_, 15, v_targetDecls_612_);
lean_ctor_set(v_reuseFailAlloc_632_, 16, v_targetDeclMap_613_);
lean_ctor_set(v_reuseFailAlloc_632_, 17, v_defaultTargets_614_);
lean_ctor_set(v_reuseFailAlloc_632_, 18, v_cacheServices_615_);
lean_ctor_set(v_reuseFailAlloc_632_, 19, v_scripts_616_);
lean_ctor_set(v_reuseFailAlloc_632_, 20, v_defaultScripts_617_);
lean_ctor_set(v_reuseFailAlloc_632_, 21, v_postUpdateHooks_618_);
lean_ctor_set(v_reuseFailAlloc_632_, 22, v_buildArchive_619_);
lean_ctor_set(v_reuseFailAlloc_632_, 23, v_testDriver_620_);
lean_ctor_set(v_reuseFailAlloc_632_, 24, v_lintDriver_621_);
v___x_629_ = v_reuseFailAlloc_632_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
lean_object* v_pkgs_x27_630_; lean_object* v___x_631_; 
v_pkgs_x27_630_ = lean_array_fset(v_x_592_, v_n_596_, v___x_629_);
v___x_631_ = l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(v_n_596_, v_pkgs_x27_630_);
return v___x_631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1___boxed(lean_object* v___x_635_, lean_object* v_x_636_, lean_object* v_x_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(v___x_635_, v_x_636_, v_x_637_);
lean_dec(v_x_636_);
lean_dec(v___x_635_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(lean_object* v_as_639_, size_t v_i_640_, size_t v_stop_641_, lean_object* v_b_642_){
_start:
{
uint8_t v___x_643_; 
v___x_643_ = lean_usize_dec_eq(v_i_640_, v_stop_641_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; lean_object* v_keyName_645_; lean_object* v___x_646_; size_t v___x_647_; size_t v___x_648_; 
v___x_644_ = lean_array_uget_borrowed(v_as_639_, v_i_640_);
v_keyName_645_ = lean_ctor_get(v___x_644_, 2);
lean_inc(v___x_644_);
lean_inc(v_keyName_645_);
v___x_646_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_keyName_645_, v___x_644_, v_b_642_);
v___x_647_ = ((size_t)1ULL);
v___x_648_ = lean_usize_add(v_i_640_, v___x_647_);
v_i_640_ = v___x_648_;
v_b_642_ = v___x_646_;
goto _start;
}
else
{
return v_b_642_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2___boxed(lean_object* v_as_650_, lean_object* v_i_651_, lean_object* v_stop_652_, lean_object* v_b_653_){
_start:
{
size_t v_i_boxed_654_; size_t v_stop_boxed_655_; lean_object* v_res_656_; 
v_i_boxed_654_ = lean_unbox_usize(v_i_651_);
lean_dec(v_i_651_);
v_stop_boxed_655_ = lean_unbox_usize(v_stop_652_);
lean_dec(v_stop_652_);
v_res_656_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(v_as_650_, v_i_boxed_654_, v_stop_boxed_655_, v_b_653_);
lean_dec_ref(v_as_650_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(lean_object* v_self_657_){
_start:
{
lean_object* v_lakeEnv_658_; lean_object* v_lakeConfig_659_; lean_object* v_lakeCache_660_; lean_object* v_lakeArgs_x3f_661_; lean_object* v_packages_662_; lean_object* v_facetConfigs_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_682_; 
v_lakeEnv_658_ = lean_ctor_get(v_self_657_, 0);
v_lakeConfig_659_ = lean_ctor_get(v_self_657_, 1);
v_lakeCache_660_ = lean_ctor_get(v_self_657_, 2);
v_lakeArgs_x3f_661_ = lean_ctor_get(v_self_657_, 3);
v_packages_662_ = lean_ctor_get(v_self_657_, 4);
v_facetConfigs_663_ = lean_ctor_get(v_self_657_, 6);
v_isSharedCheck_682_ = !lean_is_exclusive(v_self_657_);
if (v_isSharedCheck_682_ == 0)
{
lean_object* v_unused_683_; 
v_unused_683_ = lean_ctor_get(v_self_657_, 5);
lean_dec(v_unused_683_);
v___x_665_ = v_self_657_;
v_isShared_666_ = v_isSharedCheck_682_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_facetConfigs_663_);
lean_inc(v_packages_662_);
lean_inc(v_lakeArgs_x3f_661_);
lean_inc(v_lakeCache_660_);
lean_inc(v_lakeConfig_659_);
lean_inc(v_lakeEnv_658_);
lean_dec(v_self_657_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_682_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_667_; lean_object* v_val_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; 
v___x_667_ = lean_array_get_size(v_packages_662_);
v_val_668_ = l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(v___x_667_, v___x_667_, v_packages_662_);
v___x_669_ = lean_box(1);
v___x_670_ = lean_unsigned_to_nat(0u);
v___x_671_ = lean_array_get_size(v_val_668_);
v___x_672_ = lean_nat_dec_lt(v___x_670_, v___x_671_);
if (v___x_672_ == 0)
{
lean_object* v___x_674_; 
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 5, v___x_669_);
lean_ctor_set(v___x_665_, 4, v_val_668_);
v___x_674_ = v___x_665_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_lakeEnv_658_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v_lakeConfig_659_);
lean_ctor_set(v_reuseFailAlloc_675_, 2, v_lakeCache_660_);
lean_ctor_set(v_reuseFailAlloc_675_, 3, v_lakeArgs_x3f_661_);
lean_ctor_set(v_reuseFailAlloc_675_, 4, v_val_668_);
lean_ctor_set(v_reuseFailAlloc_675_, 5, v___x_669_);
lean_ctor_set(v_reuseFailAlloc_675_, 6, v_facetConfigs_663_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
else
{
size_t v___x_676_; size_t v___x_677_; lean_object* v___x_678_; lean_object* v___x_680_; 
v___x_676_ = ((size_t)0ULL);
v___x_677_ = lean_usize_of_nat(v___x_671_);
v___x_678_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(v_val_668_, v___x_676_, v___x_677_, v___x_669_);
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 5, v___x_678_);
lean_ctor_set(v___x_665_, 4, v_val_668_);
v___x_680_ = v___x_665_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_lakeEnv_658_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v_lakeConfig_659_);
lean_ctor_set(v_reuseFailAlloc_681_, 2, v_lakeCache_660_);
lean_ctor_set(v_reuseFailAlloc_681_, 3, v_lakeArgs_x3f_661_);
lean_ctor_set(v_reuseFailAlloc_681_, 4, v_val_668_);
lean_ctor_set(v_reuseFailAlloc_681_, 5, v___x_678_);
lean_ctor_set(v_reuseFailAlloc_681_, 6, v_facetConfigs_663_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1(lean_object* v___x_684_, lean_object* v_x_685_, lean_object* v_x_686_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(v_x_685_, v_x_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___boxed(lean_object* v___x_688_, lean_object* v_x_689_, lean_object* v_x_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1(v___x_688_, v_x_689_, v_x_690_);
lean_dec(v___x_688_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(lean_object* v_ws_692_, lean_object* v_size_693_){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_mk_empty_array_with_capacity(v_size_693_);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v_ws_692_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init___boxed(lean_object* v_ws_696_, lean_object* v_size_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(v_ws_696_, v_size_697_);
lean_dec(v_size_697_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___redArg(lean_object* v_s_699_, lean_object* v_wsIdx_700_){
_start:
{
lean_object* v_ws_701_; lean_object* v_depIdxs_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_710_; 
v_ws_701_ = lean_ctor_get(v_s_699_, 0);
v_depIdxs_702_ = lean_ctor_get(v_s_699_, 1);
v_isSharedCheck_710_ = !lean_is_exclusive(v_s_699_);
if (v_isSharedCheck_710_ == 0)
{
v___x_704_ = v_s_699_;
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_depIdxs_702_);
lean_inc(v_ws_701_);
lean_dec(v_s_699_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_706_; lean_object* v___x_708_; 
v___x_706_ = lean_array_push(v_depIdxs_702_, v_wsIdx_700_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v___x_706_);
v___x_708_ = v___x_704_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_ws_701_);
lean_ctor_set(v_reuseFailAlloc_709_, 1, v___x_706_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep(lean_object* v_n_711_, lean_object* v_s_712_, lean_object* v_wsIdx_713_){
_start:
{
lean_object* v_ws_714_; lean_object* v_depIdxs_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_723_; 
v_ws_714_ = lean_ctor_get(v_s_712_, 0);
v_depIdxs_715_ = lean_ctor_get(v_s_712_, 1);
v_isSharedCheck_723_ = !lean_is_exclusive(v_s_712_);
if (v_isSharedCheck_723_ == 0)
{
v___x_717_ = v_s_712_;
v_isShared_718_ = v_isSharedCheck_723_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_depIdxs_715_);
lean_inc(v_ws_714_);
lean_dec(v_s_712_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_723_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_719_; lean_object* v___x_721_; 
v___x_719_ = lean_array_push(v_depIdxs_715_, v_wsIdx_713_);
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 1, v___x_719_);
v___x_721_ = v___x_717_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_ws_714_);
lean_ctor_set(v_reuseFailAlloc_722_, 1, v___x_719_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___boxed(lean_object* v_n_724_, lean_object* v_s_725_, lean_object* v_wsIdx_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep(v_n_724_, v_s_725_, v_wsIdx_726_);
lean_dec(v_n_724_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg(lean_object* v_s_728_, lean_object* v_dep_729_, lean_object* v_lakeOpts_730_, lean_object* v_leanOpts_731_, uint8_t v_reconfigure_732_, lean_object* v_a_733_){
_start:
{
lean_object* v_ws_735_; lean_object* v_depIdxs_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_765_; 
v_ws_735_ = lean_ctor_get(v_s_728_, 0);
v_depIdxs_736_ = lean_ctor_get(v_s_728_, 1);
v_isSharedCheck_765_ = !lean_is_exclusive(v_s_728_);
if (v_isSharedCheck_765_ == 0)
{
v___x_738_ = v_s_728_;
v_isShared_739_ = v_isSharedCheck_765_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_depIdxs_736_);
lean_inc(v_ws_735_);
lean_dec(v_s_728_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_765_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v_packages_740_; lean_object* v_wsIdx_741_; lean_object* v___x_742_; 
v_packages_740_ = lean_ctor_get(v_ws_735_, 4);
v_wsIdx_741_ = lean_array_get_size(v_packages_740_);
v___x_742_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_735_, v_dep_729_, v_lakeOpts_730_, v_leanOpts_731_, v_reconfigure_732_, v_a_733_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_755_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
v_a_744_ = lean_ctor_get(v___x_742_, 1);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_755_ == 0)
{
v___x_746_ = v___x_742_;
v_isShared_747_ = v_isSharedCheck_755_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_inc(v_a_743_);
lean_dec(v___x_742_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_755_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_748_; lean_object* v___x_750_; 
v___x_748_ = lean_array_push(v_depIdxs_736_, v_wsIdx_741_);
if (v_isShared_739_ == 0)
{
lean_ctor_set(v___x_738_, 1, v___x_748_);
lean_ctor_set(v___x_738_, 0, v_a_743_);
v___x_750_ = v___x_738_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_743_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v___x_748_);
v___x_750_ = v_reuseFailAlloc_754_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
lean_object* v___x_752_; 
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v___x_750_);
v___x_752_ = v___x_746_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_750_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_a_744_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
else
{
lean_object* v_a_756_; lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
lean_del_object(v___x_738_);
lean_dec_ref(v_depIdxs_736_);
v_a_756_ = lean_ctor_get(v___x_742_, 0);
v_a_757_ = lean_ctor_get(v___x_742_, 1);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_742_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_inc(v_a_756_);
lean_dec(v___x_742_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_756_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg___boxed(lean_object* v_s_766_, lean_object* v_dep_767_, lean_object* v_lakeOpts_768_, lean_object* v_leanOpts_769_, lean_object* v_reconfigure_770_, lean_object* v_a_771_, lean_object* v_a_772_){
_start:
{
uint8_t v_reconfigure_boxed_773_; lean_object* v_res_774_; 
v_reconfigure_boxed_773_ = lean_unbox(v_reconfigure_770_);
v_res_774_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg(v_s_766_, v_dep_767_, v_lakeOpts_768_, v_leanOpts_769_, v_reconfigure_boxed_773_, v_a_771_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(lean_object* v_n_775_, lean_object* v_s_776_, lean_object* v_dep_777_, lean_object* v_lakeOpts_778_, lean_object* v_leanOpts_779_, uint8_t v_reconfigure_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_ws_783_; lean_object* v_depIdxs_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_813_; 
v_ws_783_ = lean_ctor_get(v_s_776_, 0);
v_depIdxs_784_ = lean_ctor_get(v_s_776_, 1);
v_isSharedCheck_813_ = !lean_is_exclusive(v_s_776_);
if (v_isSharedCheck_813_ == 0)
{
v___x_786_ = v_s_776_;
v_isShared_787_ = v_isSharedCheck_813_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_depIdxs_784_);
lean_inc(v_ws_783_);
lean_dec(v_s_776_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_813_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v_packages_788_; lean_object* v_wsIdx_789_; lean_object* v___x_790_; 
v_packages_788_ = lean_ctor_get(v_ws_783_, 4);
v_wsIdx_789_ = lean_array_get_size(v_packages_788_);
v___x_790_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_783_, v_dep_777_, v_lakeOpts_778_, v_leanOpts_779_, v_reconfigure_780_, v_a_781_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_803_; 
v_a_791_ = lean_ctor_get(v___x_790_, 0);
v_a_792_ = lean_ctor_get(v___x_790_, 1);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_803_ == 0)
{
v___x_794_ = v___x_790_;
v_isShared_795_ = v_isSharedCheck_803_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_inc(v_a_791_);
lean_dec(v___x_790_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_803_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v___x_798_; 
v___x_796_ = lean_array_push(v_depIdxs_784_, v_wsIdx_789_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 1, v___x_796_);
lean_ctor_set(v___x_786_, 0, v_a_791_);
v___x_798_ = v___x_786_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_791_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v___x_796_);
v___x_798_ = v_reuseFailAlloc_802_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_800_; 
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v___x_798_);
v___x_800_ = v___x_794_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_798_);
lean_ctor_set(v_reuseFailAlloc_801_, 1, v_a_792_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
else
{
lean_object* v_a_804_; lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
lean_del_object(v___x_786_);
lean_dec_ref(v_depIdxs_784_);
v_a_804_ = lean_ctor_get(v___x_790_, 0);
v_a_805_ = lean_ctor_get(v___x_790_, 1);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_790_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_inc(v_a_804_);
lean_dec(v___x_790_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_804_);
lean_ctor_set(v_reuseFailAlloc_811_, 1, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed(lean_object* v_n_814_, lean_object* v_s_815_, lean_object* v_dep_816_, lean_object* v_lakeOpts_817_, lean_object* v_leanOpts_818_, lean_object* v_reconfigure_819_, lean_object* v_a_820_, lean_object* v_a_821_){
_start:
{
uint8_t v_reconfigure_boxed_822_; lean_object* v_res_823_; 
v_reconfigure_boxed_822_ = lean_unbox(v_reconfigure_819_);
v_res_823_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(v_n_814_, v_s_815_, v_dep_816_, v_lakeOpts_817_, v_leanOpts_818_, v_reconfigure_boxed_822_, v_a_820_);
lean_dec(v_n_814_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___redArg(lean_object* v_inst_824_){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = lean_apply_2(v_inst_824_, lean_box(0), lean_box(0));
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl(lean_object* v_m_826_, lean_object* v_00_u03b1_827_, lean_object* v_inst_828_, lean_object* v_inst_829_, lean_object* v_as_830_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = lean_apply_2(v_inst_828_, lean_box(0), lean_box(0));
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___boxed(lean_object* v_m_832_, lean_object* v_00_u03b1_833_, lean_object* v_inst_834_, lean_object* v_inst_835_, lean_object* v_as_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl(v_m_832_, v_00_u03b1_833_, v_inst_834_, v_inst_835_, v_as_836_);
lean_dec_ref(v_as_836_);
lean_dec(v_inst_835_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(lean_object* v_resolve_838_, lean_object* v_pkg_839_, lean_object* v_dep_840_, lean_object* v_ws_841_, lean_object* v_toBind_842_, lean_object* v___f_843_, lean_object* v_____r_844_){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = lean_apply_3(v_resolve_838_, v_pkg_839_, v_dep_840_, v_ws_841_);
v___x_846_ = lean_apply_4(v_toBind_842_, lean_box(0), lean_box(0), v___x_845_, v___f_843_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(lean_object* v_start_847_, lean_object* v_s_848_, lean_object* v_opts_849_, lean_object* v_leanOpts_850_, uint8_t v_reconfigure_851_, lean_object* v_inst_852_, lean_object* v_matDep_853_){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = lean_box(v_reconfigure_851_);
v___x_855_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed), 8, 6);
lean_closure_set(v___x_855_, 0, v_start_847_);
lean_closure_set(v___x_855_, 1, v_s_848_);
lean_closure_set(v___x_855_, 2, v_matDep_853_);
lean_closure_set(v___x_855_, 3, v_opts_849_);
lean_closure_set(v___x_855_, 4, v_leanOpts_850_);
lean_closure_set(v___x_855_, 5, v___x_854_);
v___x_856_ = lean_apply_2(v_inst_852_, lean_box(0), v___x_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed(lean_object* v_start_857_, lean_object* v_s_858_, lean_object* v_opts_859_, lean_object* v_leanOpts_860_, lean_object* v_reconfigure_861_, lean_object* v_inst_862_, lean_object* v_matDep_863_){
_start:
{
uint8_t v_reconfigure_boxed_864_; lean_object* v_res_865_; 
v_reconfigure_boxed_864_ = lean_unbox(v_reconfigure_861_);
v_res_865_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(v_start_857_, v_s_858_, v_opts_859_, v_leanOpts_860_, v_reconfigure_boxed_864_, v_inst_862_, v_matDep_863_);
return v_res_865_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(lean_object* v_dep_866_, lean_object* v_x_867_){
_start:
{
lean_object* v_baseName_868_; lean_object* v_name_869_; uint8_t v___x_870_; 
v_baseName_868_ = lean_ctor_get(v_x_867_, 1);
v_name_869_ = lean_ctor_get(v_dep_866_, 0);
v___x_870_ = lean_name_eq(v_baseName_868_, v_name_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed(lean_object* v_dep_871_, lean_object* v_x_872_){
_start:
{
uint8_t v_res_873_; lean_object* v_r_874_; 
v_res_873_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(v_dep_871_, v_x_872_);
lean_dec_ref(v_x_872_);
lean_dec_ref(v_dep_871_);
v_r_874_ = lean_box(v_res_873_);
return v_r_874_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5(lean_object* v___f_875_, lean_object* v_____r_876_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = lean_apply_1(v___f_875_, v_____r_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(lean_object* v_toPure_879_, lean_object* v_start_880_, lean_object* v_leanOpts_881_, uint8_t v_reconfigure_882_, lean_object* v_inst_883_, lean_object* v_resolve_884_, lean_object* v_pkg_885_, lean_object* v_toBind_886_, lean_object* v_baseName_887_, lean_object* v_inst_888_, lean_object* v_dep_889_, lean_object* v_s_890_){
_start:
{
lean_object* v_ws_891_; lean_object* v_depIdxs_892_; lean_object* v_packages_893_; lean_object* v___f_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v_ws_891_ = lean_ctor_get(v_s_890_, 0);
lean_inc_ref(v_ws_891_);
v_depIdxs_892_ = lean_ctor_get(v_s_890_, 1);
v_packages_893_ = lean_ctor_get(v_ws_891_, 4);
lean_inc_ref(v_dep_889_);
v___f_894_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_894_, 0, v_dep_889_);
v___x_895_ = lean_unsigned_to_nat(0u);
v___x_896_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_894_, v_packages_893_, v___x_895_);
if (lean_obj_tag(v___x_896_) == 1)
{
lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_906_; 
lean_inc_ref(v_depIdxs_892_);
lean_dec_ref(v_dep_889_);
lean_dec(v_inst_888_);
lean_dec(v_baseName_887_);
lean_dec(v_toBind_886_);
lean_dec_ref(v_pkg_885_);
lean_dec(v_resolve_884_);
lean_dec(v_inst_883_);
lean_dec_ref(v_leanOpts_881_);
lean_dec(v_start_880_);
v_isSharedCheck_906_ = !lean_is_exclusive(v_s_890_);
if (v_isSharedCheck_906_ == 0)
{
lean_object* v_unused_907_; lean_object* v_unused_908_; 
v_unused_907_ = lean_ctor_get(v_s_890_, 1);
lean_dec(v_unused_907_);
v_unused_908_ = lean_ctor_get(v_s_890_, 0);
lean_dec(v_unused_908_);
v___x_898_ = v_s_890_;
v_isShared_899_ = v_isSharedCheck_906_;
goto v_resetjp_897_;
}
else
{
lean_dec(v_s_890_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_906_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v_val_900_; lean_object* v___x_901_; lean_object* v___x_903_; 
v_val_900_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_val_900_);
lean_dec_ref_known(v___x_896_, 1);
v___x_901_ = lean_array_push(v_depIdxs_892_, v_val_900_);
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 1, v___x_901_);
v___x_903_ = v___x_898_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_ws_891_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v___x_901_);
v___x_903_ = v_reuseFailAlloc_905_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v___x_904_; 
v___x_904_ = lean_apply_2(v_toPure_879_, lean_box(0), v___x_903_);
return v___x_904_;
}
}
}
else
{
lean_object* v_name_909_; lean_object* v_opts_910_; lean_object* v___x_911_; lean_object* v___f_912_; lean_object* v___f_913_; uint8_t v___x_914_; 
lean_dec(v___x_896_);
lean_dec(v_toPure_879_);
v_name_909_ = lean_ctor_get(v_dep_889_, 0);
v_opts_910_ = lean_ctor_get(v_dep_889_, 4);
v___x_911_ = lean_box(v_reconfigure_882_);
lean_inc(v_opts_910_);
v___f_912_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_912_, 0, v_start_880_);
lean_closure_set(v___f_912_, 1, v_s_890_);
lean_closure_set(v___f_912_, 2, v_opts_910_);
lean_closure_set(v___f_912_, 3, v_leanOpts_881_);
lean_closure_set(v___f_912_, 4, v___x_911_);
lean_closure_set(v___f_912_, 5, v_inst_883_);
lean_inc_ref(v___f_912_);
lean_inc(v_toBind_886_);
lean_inc_ref(v_ws_891_);
lean_inc_ref(v_dep_889_);
lean_inc_ref(v_pkg_885_);
lean_inc(v_resolve_884_);
v___f_913_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4), 7, 6);
lean_closure_set(v___f_913_, 0, v_resolve_884_);
lean_closure_set(v___f_913_, 1, v_pkg_885_);
lean_closure_set(v___f_913_, 2, v_dep_889_);
lean_closure_set(v___f_913_, 3, v_ws_891_);
lean_closure_set(v___f_913_, 4, v_toBind_886_);
lean_closure_set(v___f_913_, 5, v___f_912_);
v___x_914_ = lean_name_eq(v_baseName_887_, v_name_909_);
if (v___x_914_ == 0)
{
lean_object* v___x_915_; lean_object* v___x_916_; 
lean_dec_ref(v___f_913_);
lean_dec(v_inst_888_);
lean_dec(v_baseName_887_);
v___x_915_ = lean_box(0);
v___x_916_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(v_resolve_884_, v_pkg_885_, v_dep_889_, v_ws_891_, v_toBind_886_, v___f_912_, v___x_915_);
return v___x_916_;
}
else
{
lean_object* v___f_917_; uint8_t v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
lean_dec_ref(v___f_912_);
lean_dec_ref(v_ws_891_);
lean_dec_ref(v_dep_889_);
lean_dec_ref(v_pkg_885_);
lean_dec(v_resolve_884_);
v___f_917_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5), 2, 1);
lean_closure_set(v___f_917_, 0, v___f_913_);
v___x_918_ = 0;
v___x_919_ = l_Lean_Name_toString(v_baseName_887_, v___x_918_);
v___x_920_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_921_ = lean_string_append(v___x_919_, v___x_920_);
v___x_922_ = lean_apply_2(v_inst_888_, lean_box(0), v___x_921_);
v___x_923_ = lean_apply_4(v_toBind_886_, lean_box(0), lean_box(0), v___x_922_, v___f_917_);
return v___x_923_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed(lean_object* v_toPure_924_, lean_object* v_start_925_, lean_object* v_leanOpts_926_, lean_object* v_reconfigure_927_, lean_object* v_inst_928_, lean_object* v_resolve_929_, lean_object* v_pkg_930_, lean_object* v_toBind_931_, lean_object* v_baseName_932_, lean_object* v_inst_933_, lean_object* v_dep_934_, lean_object* v_s_935_){
_start:
{
uint8_t v_reconfigure_boxed_936_; lean_object* v_res_937_; 
v_reconfigure_boxed_936_ = lean_unbox(v_reconfigure_927_);
v_res_937_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(v_toPure_924_, v_start_925_, v_leanOpts_926_, v_reconfigure_boxed_936_, v_inst_928_, v_resolve_929_, v_pkg_930_, v_toBind_931_, v_baseName_932_, v_inst_933_, v_dep_934_, v_s_935_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed(lean_object* v_next_938_, lean_object* v_inst_939_, lean_object* v_inst_940_, lean_object* v_inst_941_, lean_object* v_resolve_942_, lean_object* v_leanOpts_943_, lean_object* v_reconfigure_944_, lean_object* v_ws_945_, lean_object* v_____x_946_){
_start:
{
uint8_t v_reconfigure_boxed_947_; lean_object* v_res_948_; 
v_reconfigure_boxed_947_ = lean_unbox(v_reconfigure_944_);
v_res_948_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(v_next_938_, v_inst_939_, v_inst_940_, v_inst_941_, v_resolve_942_, v_leanOpts_943_, v_reconfigure_boxed_947_, v_ws_945_, v_____x_946_);
lean_dec(v_next_938_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(lean_object* v_pkg_949_, lean_object* v_next_950_, lean_object* v_toPure_951_, lean_object* v_inst_952_, lean_object* v_inst_953_, lean_object* v_inst_954_, lean_object* v_resolve_955_, lean_object* v_leanOpts_956_, uint8_t v_reconfigure_957_, lean_object* v_toBind_958_, lean_object* v_____x_959_){
_start:
{
lean_object* v_ws_960_; lean_object* v_depIdxs_961_; lean_object* v_ws_962_; lean_object* v_packages_963_; lean_object* v___x_964_; uint8_t v___x_965_; 
v_ws_960_ = lean_ctor_get(v_____x_959_, 0);
lean_inc_ref(v_ws_960_);
v_depIdxs_961_ = lean_ctor_get(v_____x_959_, 1);
lean_inc_ref(v_depIdxs_961_);
lean_dec_ref(v_____x_959_);
v_ws_962_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_960_, v_pkg_949_, v_depIdxs_961_);
v_packages_963_ = lean_ctor_get(v_ws_962_, 4);
v___x_964_ = lean_array_get_size(v_packages_963_);
v___x_965_ = lean_nat_dec_lt(v_next_950_, v___x_964_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; 
lean_dec(v_toBind_958_);
lean_dec_ref(v_leanOpts_956_);
lean_dec(v_resolve_955_);
lean_dec(v_inst_954_);
lean_dec(v_inst_953_);
lean_dec_ref(v_inst_952_);
lean_dec(v_next_950_);
v___x_966_ = lean_apply_2(v_toPure_951_, lean_box(0), v_ws_962_);
return v___x_966_;
}
else
{
lean_object* v___x_967_; lean_object* v___f_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_967_ = lean_box(v_reconfigure_957_);
v___f_968_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_968_, 0, v_next_950_);
lean_closure_set(v___f_968_, 1, v_inst_952_);
lean_closure_set(v___f_968_, 2, v_inst_953_);
lean_closure_set(v___f_968_, 3, v_inst_954_);
lean_closure_set(v___f_968_, 4, v_resolve_955_);
lean_closure_set(v___f_968_, 5, v_leanOpts_956_);
lean_closure_set(v___f_968_, 6, v___x_967_);
lean_closure_set(v___f_968_, 7, v_ws_962_);
v___x_969_ = lean_apply_2(v_toPure_951_, lean_box(0), lean_box(0));
v___x_970_ = lean_apply_4(v_toBind_958_, lean_box(0), lean_box(0), v___x_969_, v___f_968_);
return v___x_970_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed(lean_object* v_pkg_971_, lean_object* v_next_972_, lean_object* v_toPure_973_, lean_object* v_inst_974_, lean_object* v_inst_975_, lean_object* v_inst_976_, lean_object* v_resolve_977_, lean_object* v_leanOpts_978_, lean_object* v_reconfigure_979_, lean_object* v_toBind_980_, lean_object* v_____x_981_){
_start:
{
uint8_t v_reconfigure_boxed_982_; lean_object* v_res_983_; 
v_reconfigure_boxed_982_ = lean_unbox(v_reconfigure_979_);
v_res_983_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(v_pkg_971_, v_next_972_, v_toPure_973_, v_inst_974_, v_inst_975_, v_inst_976_, v_resolve_977_, v_leanOpts_978_, v_reconfigure_boxed_982_, v_toBind_980_, v_____x_981_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(lean_object* v_inst_984_, lean_object* v_inst_985_, lean_object* v_inst_986_, lean_object* v_resolve_987_, lean_object* v_leanOpts_988_, uint8_t v_reconfigure_989_, lean_object* v_ws_990_, lean_object* v_i_991_, lean_object* v_next_992_){
_start:
{
lean_object* v_packages_993_; lean_object* v_pkg_994_; lean_object* v_toApplicative_995_; lean_object* v_baseName_996_; lean_object* v_depConfigs_997_; lean_object* v_toBind_998_; lean_object* v_toPure_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v_s_1002_; lean_object* v___x_1003_; lean_object* v___f_1004_; lean_object* v___x_1005_; uint8_t v___x_1006_; 
v_packages_993_ = lean_ctor_get(v_ws_990_, 4);
lean_inc_ref(v_packages_993_);
v_pkg_994_ = lean_array_fget(v_packages_993_, v_i_991_);
v_toApplicative_995_ = lean_ctor_get(v_inst_984_, 0);
v_baseName_996_ = lean_ctor_get(v_pkg_994_, 1);
lean_inc(v_baseName_996_);
v_depConfigs_997_ = lean_ctor_get(v_pkg_994_, 12);
lean_inc_ref(v_depConfigs_997_);
v_toBind_998_ = lean_ctor_get(v_inst_984_, 1);
lean_inc_n(v_toBind_998_, 2);
v_toPure_999_ = lean_ctor_get(v_toApplicative_995_, 1);
v___x_1000_ = lean_array_get_size(v_depConfigs_997_);
v___x_1001_ = lean_mk_empty_array_with_capacity(v___x_1000_);
v_s_1002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_1002_, 0, v_ws_990_);
lean_ctor_set(v_s_1002_, 1, v___x_1001_);
v___x_1003_ = lean_box(v_reconfigure_989_);
lean_inc_ref(v_leanOpts_988_);
lean_inc(v_resolve_987_);
lean_inc(v_inst_986_);
lean_inc(v_inst_985_);
lean_inc_ref(v_inst_984_);
lean_inc(v_toPure_999_);
lean_inc(v_pkg_994_);
v___f_1004_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed), 11, 10);
lean_closure_set(v___f_1004_, 0, v_pkg_994_);
lean_closure_set(v___f_1004_, 1, v_next_992_);
lean_closure_set(v___f_1004_, 2, v_toPure_999_);
lean_closure_set(v___f_1004_, 3, v_inst_984_);
lean_closure_set(v___f_1004_, 4, v_inst_985_);
lean_closure_set(v___f_1004_, 5, v_inst_986_);
lean_closure_set(v___f_1004_, 6, v_resolve_987_);
lean_closure_set(v___f_1004_, 7, v_leanOpts_988_);
lean_closure_set(v___f_1004_, 8, v___x_1003_);
lean_closure_set(v___f_1004_, 9, v_toBind_998_);
v___x_1005_ = lean_unsigned_to_nat(0u);
v___x_1006_ = lean_nat_dec_lt(v___x_1005_, v___x_1000_);
if (v___x_1006_ == 0)
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_inc(v_toPure_999_);
lean_dec_ref(v_depConfigs_997_);
lean_dec(v_baseName_996_);
lean_dec(v_pkg_994_);
lean_dec_ref(v_packages_993_);
lean_dec_ref(v_leanOpts_988_);
lean_dec(v_resolve_987_);
lean_dec(v_inst_986_);
lean_dec(v_inst_985_);
lean_dec_ref(v_inst_984_);
v___x_1007_ = lean_apply_2(v_toPure_999_, lean_box(0), v_s_1002_);
v___x_1008_ = lean_apply_4(v_toBind_998_, lean_box(0), lean_box(0), v___x_1007_, v___f_1004_);
return v___x_1008_;
}
else
{
lean_object* v_start_1009_; lean_object* v___x_1010_; lean_object* v___f_1011_; size_t v___x_1012_; size_t v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_start_1009_ = lean_array_get_size(v_packages_993_);
lean_dec_ref(v_packages_993_);
v___x_1010_ = lean_box(v_reconfigure_989_);
lean_inc(v_toBind_998_);
lean_inc(v_toPure_999_);
v___f_1011_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed), 12, 10);
lean_closure_set(v___f_1011_, 0, v_toPure_999_);
lean_closure_set(v___f_1011_, 1, v_start_1009_);
lean_closure_set(v___f_1011_, 2, v_leanOpts_988_);
lean_closure_set(v___f_1011_, 3, v___x_1010_);
lean_closure_set(v___f_1011_, 4, v_inst_986_);
lean_closure_set(v___f_1011_, 5, v_resolve_987_);
lean_closure_set(v___f_1011_, 6, v_pkg_994_);
lean_closure_set(v___f_1011_, 7, v_toBind_998_);
lean_closure_set(v___f_1011_, 8, v_baseName_996_);
lean_closure_set(v___f_1011_, 9, v_inst_985_);
v___x_1012_ = lean_usize_of_nat(v___x_1000_);
v___x_1013_ = ((size_t)0ULL);
v___x_1014_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_984_, v___f_1011_, v_depConfigs_997_, v___x_1012_, v___x_1013_, v_s_1002_);
v___x_1015_ = lean_apply_4(v_toBind_998_, lean_box(0), lean_box(0), v___x_1014_, v___f_1004_);
return v___x_1015_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(lean_object* v_next_1016_, lean_object* v_inst_1017_, lean_object* v_inst_1018_, lean_object* v_inst_1019_, lean_object* v_resolve_1020_, lean_object* v_leanOpts_1021_, uint8_t v_reconfigure_1022_, lean_object* v_ws_1023_, lean_object* v_____x_1024_){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1025_ = lean_unsigned_to_nat(1u);
v___x_1026_ = lean_nat_add(v_next_1016_, v___x_1025_);
v___x_1027_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1017_, v_inst_1018_, v_inst_1019_, v_resolve_1020_, v_leanOpts_1021_, v_reconfigure_1022_, v_ws_1023_, v_next_1016_, v___x_1026_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___boxed(lean_object* v_inst_1028_, lean_object* v_inst_1029_, lean_object* v_inst_1030_, lean_object* v_resolve_1031_, lean_object* v_leanOpts_1032_, lean_object* v_reconfigure_1033_, lean_object* v_ws_1034_, lean_object* v_i_1035_, lean_object* v_next_1036_){
_start:
{
uint8_t v_reconfigure_boxed_1037_; lean_object* v_res_1038_; 
v_reconfigure_boxed_1037_ = lean_unbox(v_reconfigure_1033_);
v_res_1038_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1028_, v_inst_1029_, v_inst_1030_, v_resolve_1031_, v_leanOpts_1032_, v_reconfigure_boxed_1037_, v_ws_1034_, v_i_1035_, v_next_1036_);
lean_dec(v_i_1035_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(lean_object* v_m_1039_, lean_object* v_inst_1040_, lean_object* v_inst_1041_, lean_object* v_inst_1042_, lean_object* v_resolve_1043_, lean_object* v_leanOpts_1044_, uint8_t v_reconfigure_1045_, lean_object* v_ws_1046_, lean_object* v_i_1047_, lean_object* v_i__lt_1048_, lean_object* v_next_1049_, lean_object* v_lt__next_1050_){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1040_, v_inst_1041_, v_inst_1042_, v_resolve_1043_, v_leanOpts_1044_, v_reconfigure_1045_, v_ws_1046_, v_i_1047_, v_next_1049_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___boxed(lean_object* v_m_1052_, lean_object* v_inst_1053_, lean_object* v_inst_1054_, lean_object* v_inst_1055_, lean_object* v_resolve_1056_, lean_object* v_leanOpts_1057_, lean_object* v_reconfigure_1058_, lean_object* v_ws_1059_, lean_object* v_i_1060_, lean_object* v_i__lt_1061_, lean_object* v_next_1062_, lean_object* v_lt__next_1063_){
_start:
{
uint8_t v_reconfigure_boxed_1064_; lean_object* v_res_1065_; 
v_reconfigure_boxed_1064_ = lean_unbox(v_reconfigure_1058_);
v_res_1065_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(v_m_1052_, v_inst_1053_, v_inst_1054_, v_inst_1055_, v_resolve_1056_, v_leanOpts_1057_, v_reconfigure_boxed_1064_, v_ws_1059_, v_i_1060_, v_i__lt_1061_, v_next_1062_, v_lt__next_1063_);
lean_dec(v_i_1060_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___redArg(lean_object* v_x_1066_, lean_object* v_h__1_1067_, lean_object* v_h__2_1068_){
_start:
{
if (lean_obj_tag(v_x_1066_) == 1)
{
lean_object* v_val_1069_; lean_object* v___x_1070_; 
lean_dec(v_h__2_1068_);
v_val_1069_ = lean_ctor_get(v_x_1066_, 0);
lean_inc(v_val_1069_);
lean_dec_ref_known(v_x_1066_, 1);
v___x_1070_ = lean_apply_1(v_h__1_1067_, v_val_1069_);
return v___x_1070_;
}
else
{
lean_object* v___x_1071_; 
lean_dec(v_h__1_1067_);
v___x_1071_ = lean_apply_2(v_h__2_1068_, v_x_1066_, lean_box(0));
return v___x_1071_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter(lean_object* v_ws_1072_, lean_object* v_s_1073_, lean_object* v_motive_1074_, lean_object* v_x_1075_, lean_object* v_h__1_1076_, lean_object* v_h__2_1077_){
_start:
{
if (lean_obj_tag(v_x_1075_) == 1)
{
lean_object* v_val_1078_; lean_object* v___x_1079_; 
lean_dec(v_h__2_1077_);
v_val_1078_ = lean_ctor_get(v_x_1075_, 0);
lean_inc(v_val_1078_);
lean_dec_ref_known(v_x_1075_, 1);
v___x_1079_ = lean_apply_1(v_h__1_1076_, v_val_1078_);
return v___x_1079_;
}
else
{
lean_object* v___x_1080_; 
lean_dec(v_h__1_1076_);
v___x_1080_ = lean_apply_2(v_h__2_1077_, v_x_1075_, lean_box(0));
return v___x_1080_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___boxed(lean_object* v_ws_1081_, lean_object* v_s_1082_, lean_object* v_motive_1083_, lean_object* v_x_1084_, lean_object* v_h__1_1085_, lean_object* v_h__2_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter(v_ws_1081_, v_s_1082_, v_motive_1083_, v_x_1084_, v_h__1_1085_, v_h__2_1086_);
lean_dec_ref(v_s_1082_);
lean_dec_ref(v_ws_1081_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___redArg(lean_object* v_x_1088_, lean_object* v_h__1_1089_){
_start:
{
lean_object* v_ws_1090_; lean_object* v_depIdxs_1091_; lean_object* v___x_1092_; 
v_ws_1090_ = lean_ctor_get(v_x_1088_, 0);
lean_inc_ref(v_ws_1090_);
v_depIdxs_1091_ = lean_ctor_get(v_x_1088_, 1);
lean_inc_ref(v_depIdxs_1091_);
lean_dec_ref(v_x_1088_);
v___x_1092_ = lean_apply_4(v_h__1_1089_, v_ws_1090_, v_depIdxs_1091_, lean_box(0), lean_box(0));
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter(lean_object* v_ws_1093_, lean_object* v_motive_1094_, lean_object* v_x_1095_, lean_object* v_h__1_1096_){
_start:
{
lean_object* v_ws_1097_; lean_object* v_depIdxs_1098_; lean_object* v___x_1099_; 
v_ws_1097_ = lean_ctor_get(v_x_1095_, 0);
lean_inc_ref(v_ws_1097_);
v_depIdxs_1098_ = lean_ctor_get(v_x_1095_, 1);
lean_inc_ref(v_depIdxs_1098_);
lean_dec_ref(v_x_1095_);
v___x_1099_ = lean_apply_4(v_h__1_1096_, v_ws_1097_, v_depIdxs_1098_, lean_box(0), lean_box(0));
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___boxed(lean_object* v_ws_1100_, lean_object* v_motive_1101_, lean_object* v_x_1102_, lean_object* v_h__1_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter(v_ws_1100_, v_motive_1101_, v_x_1102_, v_h__1_1103_);
lean_dec_ref(v_ws_1100_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___redArg(lean_object* v_h__1_1105_){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = lean_apply_1(v_h__1_1105_, lean_box(0));
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter(lean_object* v_ws_1107_, lean_object* v_motive_1108_, lean_object* v_x_1109_, lean_object* v_h__1_1110_){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_apply_1(v_h__1_1110_, lean_box(0));
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___boxed(lean_object* v_ws_1112_, lean_object* v_motive_1113_, lean_object* v_x_1114_, lean_object* v_h__1_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter(v_ws_1112_, v_motive_1113_, v_x_1114_, v_h__1_1115_);
lean_dec_ref(v_ws_1112_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(lean_object* v_inst_1118_, lean_object* v_inst_1119_, lean_object* v_inst_1120_, lean_object* v_ws_1121_, lean_object* v_resolve_1122_, lean_object* v_root_1123_, lean_object* v_next_1124_, lean_object* v_leanOpts_1125_, uint8_t v_reconfigure_1126_){
_start:
{
lean_object* v_toApplicative_1127_; lean_object* v_toFunctor_1128_; lean_object* v_map_1129_; lean_object* v___f_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v_toApplicative_1127_ = lean_ctor_get(v_inst_1118_, 0);
v_toFunctor_1128_ = lean_ctor_get(v_toApplicative_1127_, 0);
v_map_1129_ = lean_ctor_get(v_toFunctor_1128_, 0);
lean_inc(v_map_1129_);
v___f_1130_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0));
v___x_1131_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1118_, v_inst_1119_, v_inst_1120_, v_resolve_1122_, v_leanOpts_1125_, v_reconfigure_1126_, v_ws_1121_, v_root_1123_, v_next_1124_);
v___x_1132_ = lean_apply_4(v_map_1129_, lean_box(0), lean_box(0), v___f_1130_, v___x_1131_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___boxed(lean_object* v_inst_1133_, lean_object* v_inst_1134_, lean_object* v_inst_1135_, lean_object* v_ws_1136_, lean_object* v_resolve_1137_, lean_object* v_root_1138_, lean_object* v_next_1139_, lean_object* v_leanOpts_1140_, lean_object* v_reconfigure_1141_){
_start:
{
uint8_t v_reconfigure_boxed_1142_; lean_object* v_res_1143_; 
v_reconfigure_boxed_1142_ = lean_unbox(v_reconfigure_1141_);
v_res_1143_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(v_inst_1133_, v_inst_1134_, v_inst_1135_, v_ws_1136_, v_resolve_1137_, v_root_1138_, v_next_1139_, v_leanOpts_1140_, v_reconfigure_boxed_1142_);
lean_dec(v_root_1138_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(lean_object* v_m_1144_, lean_object* v_inst_1145_, lean_object* v_inst_1146_, lean_object* v_inst_1147_, lean_object* v_ws_1148_, lean_object* v_resolve_1149_, lean_object* v_root_1150_, lean_object* v_root__lt_1151_, lean_object* v_next_1152_, lean_object* v_next__lt_1153_, lean_object* v_leanOpts_1154_, uint8_t v_reconfigure_1155_){
_start:
{
lean_object* v_toApplicative_1156_; lean_object* v_toFunctor_1157_; lean_object* v_map_1158_; lean_object* v___f_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v_toApplicative_1156_ = lean_ctor_get(v_inst_1145_, 0);
v_toFunctor_1157_ = lean_ctor_get(v_toApplicative_1156_, 0);
v_map_1158_ = lean_ctor_get(v_toFunctor_1157_, 0);
lean_inc(v_map_1158_);
v___f_1159_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0));
v___x_1160_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1145_, v_inst_1146_, v_inst_1147_, v_resolve_1149_, v_leanOpts_1154_, v_reconfigure_1155_, v_ws_1148_, v_root_1150_, v_next_1152_);
v___x_1161_ = lean_apply_4(v_map_1158_, lean_box(0), lean_box(0), v___f_1159_, v___x_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___boxed(lean_object* v_m_1162_, lean_object* v_inst_1163_, lean_object* v_inst_1164_, lean_object* v_inst_1165_, lean_object* v_ws_1166_, lean_object* v_resolve_1167_, lean_object* v_root_1168_, lean_object* v_root__lt_1169_, lean_object* v_next_1170_, lean_object* v_next__lt_1171_, lean_object* v_leanOpts_1172_, lean_object* v_reconfigure_1173_){
_start:
{
uint8_t v_reconfigure_boxed_1174_; lean_object* v_res_1175_; 
v_reconfigure_boxed_1174_ = lean_unbox(v_reconfigure_1173_);
v_res_1175_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(v_m_1162_, v_inst_1163_, v_inst_1164_, v_inst_1165_, v_ws_1166_, v_resolve_1167_, v_root_1168_, v_root__lt_1169_, v_next_1170_, v_next__lt_1171_, v_leanOpts_1172_, v_reconfigure_boxed_1174_);
lean_dec(v_root_1168_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run___redArg(lean_object* v_x_1176_, lean_object* v_init_1177_){
_start:
{
lean_object* v___x_1178_; 
v___x_1178_ = lean_apply_1(v_x_1176_, v_init_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run(lean_object* v_m_1179_, lean_object* v_00_u03b1_1180_, lean_object* v_x_1181_, lean_object* v_init_1182_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = lean_apply_1(v_x_1181_, v_init_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(lean_object* v_as_1184_, size_t v_i_1185_, size_t v_stop_1186_, lean_object* v_b_1187_){
_start:
{
uint8_t v___x_1188_; 
v___x_1188_ = lean_usize_dec_eq(v_i_1185_, v_stop_1186_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1189_; lean_object* v_name_1190_; lean_object* v___x_1191_; size_t v___x_1192_; size_t v___x_1193_; 
v___x_1189_ = lean_array_uget_borrowed(v_as_1184_, v_i_1185_);
v_name_1190_ = lean_ctor_get(v___x_1189_, 0);
lean_inc(v_name_1190_);
v___x_1191_ = l_Lean_NameSet_insert(v_b_1187_, v_name_1190_);
v___x_1192_ = ((size_t)1ULL);
v___x_1193_ = lean_usize_add(v_i_1185_, v___x_1192_);
v_i_1185_ = v___x_1193_;
v_b_1187_ = v___x_1191_;
goto _start;
}
else
{
return v_b_1187_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2___boxed(lean_object* v_as_1195_, lean_object* v_i_1196_, lean_object* v_stop_1197_, lean_object* v_b_1198_){
_start:
{
size_t v_i_boxed_1199_; size_t v_stop_boxed_1200_; lean_object* v_res_1201_; 
v_i_boxed_1199_ = lean_unbox_usize(v_i_1196_);
lean_dec(v_i_1196_);
v_stop_boxed_1200_ = lean_unbox_usize(v_stop_1197_);
lean_dec(v_stop_1197_);
v_res_1201_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(v_as_1195_, v_i_boxed_1199_, v_stop_boxed_1200_, v_b_1198_);
lean_dec_ref(v_as_1195_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(lean_object* v_as_1202_, size_t v_sz_1203_, size_t v_i_1204_, lean_object* v_b_1205_, lean_object* v___y_1206_){
_start:
{
uint8_t v___x_1208_; 
v___x_1208_ = lean_usize_dec_lt(v_i_1204_, v_sz_1203_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1209_, 0, v_b_1205_);
lean_ctor_set(v___x_1209_, 1, v___y_1206_);
v___x_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
return v___x_1210_;
}
else
{
lean_object* v_a_1211_; lean_object* v_name_1212_; lean_object* v___x_1213_; size_t v___x_1214_; size_t v___x_1215_; 
v_a_1211_ = lean_array_uget_borrowed(v_as_1202_, v_i_1204_);
v_name_1212_ = lean_ctor_get(v_a_1211_, 0);
lean_inc(v_name_1212_);
v___x_1213_ = l_Lean_NameSet_insert(v_b_1205_, v_name_1212_);
v___x_1214_ = ((size_t)1ULL);
v___x_1215_ = lean_usize_add(v_i_1204_, v___x_1214_);
v_i_1204_ = v___x_1215_;
v_b_1205_ = v___x_1213_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg___boxed(lean_object* v_as_1217_, lean_object* v_sz_1218_, lean_object* v_i_1219_, lean_object* v_b_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
size_t v_sz_boxed_1223_; size_t v_i_boxed_1224_; lean_object* v_res_1225_; 
v_sz_boxed_1223_ = lean_unbox_usize(v_sz_1218_);
lean_dec(v_sz_1218_);
v_i_boxed_1224_ = lean_unbox_usize(v_i_1219_);
lean_dec(v_i_1219_);
v_res_1225_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(v_as_1217_, v_sz_boxed_1223_, v_i_boxed_1224_, v_b_1220_, v___y_1221_);
lean_dec_ref(v_as_1217_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(lean_object* v_fst_1228_, lean_object* v_init_1229_, lean_object* v_x_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
if (lean_obj_tag(v_x_1230_) == 0)
{
lean_object* v_k_1234_; lean_object* v_l_1235_; lean_object* v_r_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v_k_1234_ = lean_ctor_get(v_x_1230_, 1);
lean_inc(v_k_1234_);
v_l_1235_ = lean_ctor_get(v_x_1230_, 3);
lean_inc(v_l_1235_);
v_r_1236_ = lean_ctor_get(v_x_1230_, 4);
lean_inc(v_r_1236_);
lean_dec_ref_known(v_x_1230_, 5);
v___x_1237_ = lean_box(0);
v___x_1238_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(v_fst_1228_, v_init_1229_, v_l_1235_, v___y_1231_, v___y_1232_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1257_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1241_ = v___x_1238_;
v_isShared_1242_ = v_isSharedCheck_1257_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1238_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1257_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v_snd_1243_; uint8_t v___x_1244_; 
v_snd_1243_ = lean_ctor_get(v_a_1239_, 1);
lean_inc(v_snd_1243_);
lean_dec(v_a_1239_);
v___x_1244_ = l_Lean_NameSet_contains(v_fst_1228_, v_k_1234_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; uint8_t v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1254_; 
lean_dec(v_snd_1243_);
lean_dec(v_r_1236_);
v___x_1245_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0));
v___x_1246_ = l_Lean_Name_toString(v_k_1234_, v___x_1244_);
v___x_1247_ = lean_string_append(v___x_1245_, v___x_1246_);
lean_dec_ref(v___x_1246_);
v___x_1248_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1));
v___x_1249_ = lean_string_append(v___x_1247_, v___x_1248_);
v___x_1250_ = 3;
v___x_1251_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1251_, 0, v___x_1249_);
lean_ctor_set_uint8(v___x_1251_, sizeof(void*)*1, v___x_1250_);
lean_inc_ref(v___y_1232_);
v___x_1252_ = lean_apply_2(v___y_1232_, v___x_1251_, lean_box(0));
if (v_isShared_1242_ == 0)
{
lean_ctor_set_tag(v___x_1241_, 1);
lean_ctor_set(v___x_1241_, 0, v___x_1237_);
v___x_1254_ = v___x_1241_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1237_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
else
{
lean_del_object(v___x_1241_);
lean_dec(v_k_1234_);
v_init_1229_ = v___x_1237_;
v_x_1230_ = v_r_1236_;
v___y_1231_ = v_snd_1243_;
goto _start;
}
}
}
else
{
lean_dec(v_r_1236_);
lean_dec(v_k_1234_);
return v___x_1238_;
}
}
else
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1258_, 0, v_init_1229_);
v___x_1259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
lean_ctor_set(v___x_1259_, 1, v___y_1231_);
v___x_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
return v___x_1260_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___boxed(lean_object* v_fst_1261_, lean_object* v_init_1262_, lean_object* v_x_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(v_fst_1261_, v_init_1262_, v_x_1263_, v___y_1264_, v___y_1265_);
lean_dec_ref(v___y_1265_);
lean_dec(v_fst_1261_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(lean_object* v_toUpdate_1268_, lean_object* v_depConfigs_1269_, lean_object* v___x_1270_, lean_object* v_entries_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v___y_1276_; 
if (lean_obj_tag(v_toUpdate_1268_) == 0)
{
lean_object* v___x_1318_; lean_object* v___x_1319_; uint8_t v___x_1320_; 
v___x_1318_ = l_Lean_NameSet_empty;
v___x_1319_ = lean_array_get_size(v_depConfigs_1269_);
v___x_1320_ = lean_nat_dec_lt(v___x_1270_, v___x_1319_);
if (v___x_1320_ == 0)
{
v___y_1276_ = v___x_1318_;
goto v___jp_1275_;
}
else
{
size_t v___x_1321_; size_t v___x_1322_; lean_object* v___x_1323_; 
v___x_1321_ = ((size_t)0ULL);
v___x_1322_ = lean_usize_of_nat(v___x_1319_);
v___x_1323_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(v_depConfigs_1269_, v___x_1321_, v___x_1322_, v___x_1318_);
v___y_1276_ = v___x_1323_;
goto v___jp_1275_;
}
}
else
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1324_ = lean_box(0);
v___x_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
lean_ctor_set(v___x_1325_, 1, v___y_1272_);
v___x_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
return v___x_1326_;
}
v___jp_1275_:
{
size_t v_sz_1277_; size_t v___x_1278_; lean_object* v___x_1279_; 
v_sz_1277_ = lean_array_size(v_entries_1271_);
v___x_1278_ = ((size_t)0ULL);
v___x_1279_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(v_entries_1271_, v_sz_1277_, v___x_1278_, v___y_1276_, v___y_1272_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; lean_object* v_fst_1281_; lean_object* v_snd_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
lean_dec_ref_known(v___x_1279_, 1);
v_fst_1281_ = lean_ctor_get(v_a_1280_, 0);
lean_inc(v_fst_1281_);
v_snd_1282_ = lean_ctor_get(v_a_1280_, 1);
lean_inc(v_snd_1282_);
lean_dec(v_a_1280_);
v___x_1283_ = lean_box(0);
v___x_1284_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(v_fst_1281_, v___x_1283_, v_toUpdate_1268_, v_snd_1282_, v___y_1273_);
lean_dec(v_fst_1281_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1301_; 
v_a_1285_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1287_ = v___x_1284_;
v_isShared_1288_ = v_isSharedCheck_1301_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_dec(v___x_1284_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1301_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v_snd_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1299_; 
v_snd_1289_ = lean_ctor_get(v_a_1285_, 1);
v_isSharedCheck_1299_ = !lean_is_exclusive(v_a_1285_);
if (v_isSharedCheck_1299_ == 0)
{
lean_object* v_unused_1300_; 
v_unused_1300_ = lean_ctor_get(v_a_1285_, 0);
lean_dec(v_unused_1300_);
v___x_1291_ = v_a_1285_;
v_isShared_1292_ = v_isSharedCheck_1299_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_snd_1289_);
lean_dec(v_a_1285_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1299_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 0, v___x_1283_);
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1283_);
lean_ctor_set(v_reuseFailAlloc_1298_, 1, v_snd_1289_);
v___x_1294_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
lean_object* v___x_1296_; 
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 0, v___x_1294_);
v___x_1296_ = v___x_1287_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1294_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
else
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
v_a_1302_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1284_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1284_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
else
{
lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
lean_dec(v_toUpdate_1268_);
v_a_1310_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1279_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1279_);
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
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0___boxed(lean_object* v_toUpdate_1327_, lean_object* v_depConfigs_1328_, lean_object* v___x_1329_, lean_object* v_entries_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(v_toUpdate_1327_, v_depConfigs_1328_, v___x_1329_, v_entries_1330_, v___y_1331_, v___y_1332_);
lean_dec_ref(v___y_1332_);
lean_dec_ref(v_entries_1330_);
lean_dec(v___x_1329_);
lean_dec_ref(v_depConfigs_1328_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(lean_object* v_as_1335_, size_t v_i_1336_, size_t v_stop_1337_, lean_object* v_b_1338_, lean_object* v___y_1339_){
_start:
{
uint8_t v___x_1341_; 
v___x_1341_ = lean_usize_dec_eq(v_i_1336_, v_stop_1337_);
if (v___x_1341_ == 0)
{
lean_object* v___x_1342_; lean_object* v___x_1343_; size_t v___x_1344_; size_t v___x_1345_; 
v___x_1342_ = lean_array_uget_borrowed(v_as_1335_, v_i_1336_);
lean_inc_ref(v___y_1339_);
lean_inc(v___x_1342_);
v___x_1343_ = lean_apply_2(v___y_1339_, v___x_1342_, lean_box(0));
v___x_1344_ = ((size_t)1ULL);
v___x_1345_ = lean_usize_add(v_i_1336_, v___x_1344_);
v_i_1336_ = v___x_1345_;
v_b_1338_ = v___x_1343_;
goto _start;
}
else
{
lean_object* v___x_1347_; 
v___x_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1347_, 0, v_b_1338_);
return v___x_1347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3___boxed(lean_object* v_as_1348_, lean_object* v_i_1349_, lean_object* v_stop_1350_, lean_object* v_b_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
size_t v_i_boxed_1354_; size_t v_stop_boxed_1355_; lean_object* v_res_1356_; 
v_i_boxed_1354_ = lean_unbox_usize(v_i_1349_);
lean_dec(v_i_1349_);
v_stop_boxed_1355_ = lean_unbox_usize(v_stop_1350_);
lean_dec(v_stop_1350_);
v_res_1356_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_as_1348_, v_i_boxed_1354_, v_stop_boxed_1355_, v_b_1351_, v___y_1352_);
lean_dec_ref(v___y_1352_);
lean_dec_ref(v_as_1348_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(lean_object* v_toUpdate_1357_, lean_object* v_as_1358_, size_t v_i_1359_, size_t v_stop_1360_, lean_object* v_b_1361_, lean_object* v___y_1362_){
_start:
{
lean_object* v_fst_1365_; lean_object* v_snd_1366_; uint8_t v___x_1372_; 
v___x_1372_ = lean_usize_dec_eq(v_i_1359_, v_stop_1360_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; uint8_t v_inherited_1374_; 
v___x_1373_ = lean_array_uget_borrowed(v_as_1358_, v_i_1359_);
v_inherited_1374_ = lean_ctor_get_uint8(v___x_1373_, sizeof(void*)*5);
if (v_inherited_1374_ == 0)
{
lean_object* v_name_1375_; uint8_t v___x_1376_; 
v_name_1375_ = lean_ctor_get(v___x_1373_, 0);
v___x_1376_ = l_Lean_NameSet_contains(v_toUpdate_1357_, v_name_1375_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1377_ = lean_box(0);
lean_inc(v___x_1373_);
lean_inc(v_name_1375_);
v___x_1378_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1375_, v___x_1373_, v___y_1362_);
v_fst_1365_ = v___x_1377_;
v_snd_1366_ = v___x_1378_;
goto v___jp_1364_;
}
else
{
goto v___jp_1370_;
}
}
else
{
goto v___jp_1370_;
}
}
else
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1379_, 0, v_b_1361_);
lean_ctor_set(v___x_1379_, 1, v___y_1362_);
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
return v___x_1380_;
}
v___jp_1364_:
{
size_t v___x_1367_; size_t v___x_1368_; 
v___x_1367_ = ((size_t)1ULL);
v___x_1368_ = lean_usize_add(v_i_1359_, v___x_1367_);
v_i_1359_ = v___x_1368_;
v_b_1361_ = v_fst_1365_;
v___y_1362_ = v_snd_1366_;
goto _start;
}
v___jp_1370_:
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_box(0);
v_fst_1365_ = v___x_1371_;
v_snd_1366_ = v___y_1362_;
goto v___jp_1364_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg___boxed(lean_object* v_toUpdate_1381_, lean_object* v_as_1382_, lean_object* v_i_1383_, lean_object* v_stop_1384_, lean_object* v_b_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
size_t v_i_boxed_1388_; size_t v_stop_boxed_1389_; lean_object* v_res_1390_; 
v_i_boxed_1388_ = lean_unbox_usize(v_i_1383_);
lean_dec(v_i_1383_);
v_stop_boxed_1389_ = lean_unbox_usize(v_stop_1384_);
lean_dec(v_stop_1384_);
v_res_1390_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_1381_, v_as_1382_, v_i_boxed_1388_, v_stop_boxed_1389_, v_b_1385_, v___y_1386_);
lean_dec_ref(v_as_1382_);
lean_dec(v_toUpdate_1381_);
return v_res_1390_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5(void){
_start:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1397_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1398_ = lean_array_get_size(v___x_1397_);
return v___x_1398_;
}
}
static uint8_t _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6(void){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; 
v___x_1399_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5);
v___x_1400_ = lean_unsigned_to_nat(0u);
v___x_1401_ = lean_nat_dec_lt(v___x_1400_, v___x_1399_);
return v___x_1401_;
}
}
static size_t _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7(void){
_start:
{
lean_object* v___x_1402_; size_t v___x_1403_; 
v___x_1402_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5);
v___x_1403_ = lean_usize_of_nat(v___x_1402_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest(lean_object* v_ws_1406_, lean_object* v_toUpdate_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_){
_start:
{
lean_object* v___y_1412_; lean_object* v___y_1417_; lean_object* v_fst_1418_; lean_object* v_snd_1419_; lean_object* v_packages_1438_; lean_object* v___x_1439_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v_val_1444_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1462_; lean_object* v_a_1463_; lean_object* v___x_1465_; lean_object* v_baseName_1466_; lean_object* v_dir_1467_; lean_object* v_config_1468_; lean_object* v_relManifestFile_1469_; lean_object* v_depConfigs_1470_; lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___y_1474_; uint8_t v_fst_1475_; lean_object* v_snd_1476_; lean_object* v_packagesDir_x3f_1507_; lean_object* v___y_1508_; lean_object* v___y_1509_; uint8_t v___x_1530_; lean_object* v_rootName_1531_; lean_object* v_fst_1533_; lean_object* v_snd_1534_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v_val_1601_; lean_object* v___x_1615_; 
v_packages_1438_ = lean_ctor_get(v_ws_1406_, 4);
v___x_1439_ = lean_unsigned_to_nat(0u);
v___x_1465_ = lean_array_fget_borrowed(v_packages_1438_, v___x_1439_);
v_baseName_1466_ = lean_ctor_get(v___x_1465_, 1);
v_dir_1467_ = lean_ctor_get(v___x_1465_, 4);
v_config_1468_ = lean_ctor_get(v___x_1465_, 6);
v_relManifestFile_1469_ = lean_ctor_get(v___x_1465_, 9);
v_depConfigs_1470_ = lean_ctor_get(v___x_1465_, 12);
v___x_1530_ = 0;
lean_inc(v_baseName_1466_);
v_rootName_1531_ = l_Lean_Name_toString(v_baseName_1466_, v___x_1530_);
lean_inc_ref(v_relManifestFile_1469_);
lean_inc_ref(v_dir_1467_);
v___x_1598_ = l_Lake_joinRelative(v_dir_1467_, v_relManifestFile_1469_);
v___x_1599_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1615_ = l_Lake_Manifest_load(v___x_1598_);
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1618_ = v___x_1615_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1615_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
lean_ctor_set_tag(v___x_1618_, 1);
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
v_val_1601_ = v___x_1621_;
goto v___jp_1600_;
}
}
}
else
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
v_a_1624_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v___x_1615_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1615_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1629_; 
if (v_isShared_1627_ == 0)
{
lean_ctor_set_tag(v___x_1626_, 0);
v___x_1629_ = v___x_1626_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_a_1624_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
v_val_1601_ = v___x_1629_;
goto v___jp_1600_;
}
}
}
v___jp_1411_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1413_ = lean_box(0);
v___x_1414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1413_);
lean_ctor_set(v___x_1414_, 1, v___y_1412_);
v___x_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1414_);
return v___x_1415_;
}
v___jp_1416_:
{
if (lean_obj_tag(v_fst_1418_) == 0)
{
lean_object* v_a_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1434_; 
lean_dec(v_snd_1419_);
v_a_1420_ = lean_ctor_get(v_fst_1418_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v_fst_1418_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1422_ = v_fst_1418_;
v_isShared_1423_ = v_isSharedCheck_1434_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_a_1420_);
lean_dec(v_fst_1418_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1434_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; uint8_t v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1432_; 
v___x_1424_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0));
v___x_1425_ = lean_io_error_to_string(v_a_1420_);
v___x_1426_ = lean_string_append(v___x_1424_, v___x_1425_);
lean_dec_ref(v___x_1425_);
v___x_1427_ = 3;
v___x_1428_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1428_, 0, v___x_1426_);
lean_ctor_set_uint8(v___x_1428_, sizeof(void*)*1, v___x_1427_);
lean_inc_ref(v___y_1417_);
v___x_1429_ = lean_apply_2(v___y_1417_, v___x_1428_, lean_box(0));
v___x_1430_ = lean_box(0);
if (v_isShared_1423_ == 0)
{
lean_ctor_set_tag(v___x_1422_, 1);
lean_ctor_set(v___x_1422_, 0, v___x_1430_);
v___x_1432_ = v___x_1422_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1430_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
else
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
lean_dec_ref(v_fst_1418_);
v___x_1435_ = lean_box(0);
v___x_1436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1435_);
lean_ctor_set(v___x_1436_, 1, v_snd_1419_);
v___x_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
return v___x_1437_;
}
}
v___jp_1440_:
{
lean_object* v___x_1445_; uint8_t v___x_1446_; 
v___x_1445_ = lean_array_get_size(v___y_1441_);
v___x_1446_ = lean_nat_dec_lt(v___x_1439_, v___x_1445_);
if (v___x_1446_ == 0)
{
v___y_1417_ = v___y_1442_;
v_fst_1418_ = v_val_1444_;
v_snd_1419_ = v___y_1443_;
goto v___jp_1416_;
}
else
{
lean_object* v___x_1447_; size_t v___x_1448_; size_t v___x_1449_; lean_object* v___x_1450_; 
v___x_1447_ = lean_box(0);
v___x_1448_ = ((size_t)0ULL);
v___x_1449_ = lean_usize_of_nat(v___x_1445_);
v___x_1450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___y_1441_, v___x_1448_, v___x_1449_, v___x_1447_, v___y_1442_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_dec_ref_known(v___x_1450_, 1);
v___y_1417_ = v___y_1442_;
v_fst_1418_ = v_val_1444_;
v_snd_1419_ = v___y_1443_;
goto v___jp_1416_;
}
else
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
lean_dec_ref(v_val_1444_);
lean_dec(v___y_1443_);
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1453_ = v___x_1450_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1450_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_a_1451_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
}
}
v___jp_1459_:
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1464_, 0, v_a_1463_);
v___y_1441_ = v___y_1460_;
v___y_1442_ = v___y_1461_;
v___y_1443_ = v___y_1462_;
v_val_1444_ = v___x_1464_;
goto v___jp_1440_;
}
v___jp_1471_:
{
lean_object* v_toWorkspaceConfig_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; uint8_t v___x_1481_; 
v_toWorkspaceConfig_1477_ = lean_ctor_get(v_config_1468_, 0);
v___x_1478_ = l_System_FilePath_normalize(v___y_1473_);
lean_inc_ref(v_toWorkspaceConfig_1477_);
v___x_1479_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1477_);
lean_inc_ref(v___x_1479_);
v___x_1480_ = l_System_FilePath_normalize(v___x_1479_);
v___x_1481_ = lean_string_dec_eq(v___x_1478_, v___x_1480_);
lean_dec_ref(v___x_1480_);
lean_dec_ref(v___x_1478_);
if (v___x_1481_ == 0)
{
if (v_fst_1475_ == 0)
{
lean_dec_ref(v___x_1479_);
lean_dec_ref(v___y_1474_);
v___y_1412_ = v_snd_1476_;
goto v___jp_1411_;
}
else
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; uint8_t v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1482_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1));
v___x_1483_ = lean_string_append(v___x_1482_, v___y_1474_);
v___x_1484_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2));
v___x_1485_ = lean_string_append(v___x_1483_, v___x_1484_);
lean_inc_ref(v_dir_1467_);
v___x_1486_ = l_Lake_joinRelative(v_dir_1467_, v___x_1479_);
v___x_1487_ = lean_string_append(v___x_1485_, v___x_1486_);
v___x_1488_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_1489_ = lean_string_append(v___x_1487_, v___x_1488_);
v___x_1490_ = 1;
v___x_1491_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1491_, 0, v___x_1489_);
lean_ctor_set_uint8(v___x_1491_, sizeof(void*)*1, v___x_1490_);
lean_inc_ref(v___y_1472_);
v___x_1492_ = lean_apply_2(v___y_1472_, v___x_1491_, lean_box(0));
v___x_1493_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___x_1486_);
v___x_1494_ = l_Lake_createParentDirs(v___x_1486_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v___x_1495_; 
lean_dec_ref_known(v___x_1494_, 1);
v___x_1495_ = lean_io_rename(v___y_1474_, v___x_1486_);
lean_dec_ref(v___x_1486_);
lean_dec_ref(v___y_1474_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1495_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1495_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set_tag(v___x_1498_, 1);
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
v___y_1441_ = v___x_1493_;
v___y_1442_ = v___y_1472_;
v___y_1443_ = v_snd_1476_;
v_val_1444_ = v___x_1501_;
goto v___jp_1440_;
}
}
}
else
{
lean_object* v_a_1504_; 
v_a_1504_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1495_, 1);
v___y_1460_ = v___x_1493_;
v___y_1461_ = v___y_1472_;
v___y_1462_ = v_snd_1476_;
v_a_1463_ = v_a_1504_;
goto v___jp_1459_;
}
}
else
{
lean_object* v_a_1505_; 
lean_dec_ref(v___x_1486_);
lean_dec_ref(v___y_1474_);
v_a_1505_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1505_);
lean_dec_ref_known(v___x_1494_, 1);
v___y_1460_ = v___x_1493_;
v___y_1461_ = v___y_1472_;
v___y_1462_ = v_snd_1476_;
v_a_1463_ = v_a_1505_;
goto v___jp_1459_;
}
}
}
else
{
lean_dec_ref(v___x_1479_);
lean_dec_ref(v___y_1474_);
v___y_1412_ = v_snd_1476_;
goto v___jp_1411_;
}
}
v___jp_1506_:
{
if (lean_obj_tag(v_packagesDir_x3f_1507_) == 1)
{
lean_object* v_val_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; uint8_t v___x_1513_; uint8_t v___x_1514_; 
v_val_1510_ = lean_ctor_get(v_packagesDir_x3f_1507_, 0);
lean_inc_n(v_val_1510_, 2);
lean_dec_ref_known(v_packagesDir_x3f_1507_, 1);
lean_inc_ref(v_dir_1467_);
v___x_1511_ = l_Lake_joinRelative(v_dir_1467_, v_val_1510_);
v___x_1512_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1513_ = l_System_FilePath_pathExists(v___x_1511_);
v___x_1514_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_1514_ == 0)
{
v___y_1472_ = v___y_1509_;
v___y_1473_ = v_val_1510_;
v___y_1474_ = v___x_1511_;
v_fst_1475_ = v___x_1513_;
v_snd_1476_ = v___y_1508_;
goto v___jp_1471_;
}
else
{
lean_object* v___x_1515_; size_t v___x_1516_; size_t v___x_1517_; lean_object* v___x_1518_; 
v___x_1515_ = lean_box(0);
v___x_1516_ = ((size_t)0ULL);
v___x_1517_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
v___x_1518_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___x_1512_, v___x_1516_, v___x_1517_, v___x_1515_, v___y_1509_);
if (lean_obj_tag(v___x_1518_) == 0)
{
lean_dec_ref_known(v___x_1518_, 1);
v___y_1472_ = v___y_1509_;
v___y_1473_ = v_val_1510_;
v___y_1474_ = v___x_1511_;
v_fst_1475_ = v___x_1513_;
v_snd_1476_ = v___y_1508_;
goto v___jp_1471_;
}
else
{
lean_object* v_a_1519_; lean_object* v___x_1521_; uint8_t v_isShared_1522_; uint8_t v_isSharedCheck_1526_; 
lean_dec_ref(v___x_1511_);
lean_dec(v_val_1510_);
lean_dec(v___y_1508_);
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
v_isSharedCheck_1526_ = !lean_is_exclusive(v___x_1518_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1521_ = v___x_1518_;
v_isShared_1522_ = v_isSharedCheck_1526_;
goto v_resetjp_1520_;
}
else
{
lean_inc(v_a_1519_);
lean_dec(v___x_1518_);
v___x_1521_ = lean_box(0);
v_isShared_1522_ = v_isSharedCheck_1526_;
goto v_resetjp_1520_;
}
v_resetjp_1520_:
{
lean_object* v___x_1524_; 
if (v_isShared_1522_ == 0)
{
v___x_1524_ = v___x_1521_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v_a_1519_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
}
}
}
else
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_dec(v_packagesDir_x3f_1507_);
v___x_1527_ = lean_box(0);
v___x_1528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
lean_ctor_set(v___x_1528_, 1, v___y_1508_);
v___x_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1528_);
return v___x_1529_;
}
}
v___jp_1532_:
{
if (lean_obj_tag(v_fst_1533_) == 0)
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1582_; 
v_a_1535_ = lean_ctor_get(v_fst_1533_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v_fst_1533_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1537_ = v_fst_1533_;
v_isShared_1538_ = v_isSharedCheck_1582_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v_fst_1533_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1582_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
if (lean_obj_tag(v_a_1535_) == 11)
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
lean_dec_ref_known(v_a_1535_, 2);
lean_del_object(v___x_1537_);
v___x_1539_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_1540_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(v_toUpdate_1407_, v_depConfigs_1470_, v___x_1439_, v___x_1539_, v_snd_1534_, v_a_1409_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1562_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1543_ = v___x_1540_;
v_isShared_1544_ = v_isSharedCheck_1562_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1540_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1562_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v_snd_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1560_; 
v_snd_1545_ = lean_ctor_get(v_a_1541_, 1);
v_isSharedCheck_1560_ = !lean_is_exclusive(v_a_1541_);
if (v_isSharedCheck_1560_ == 0)
{
lean_object* v_unused_1561_; 
v_unused_1561_ = lean_ctor_get(v_a_1541_, 0);
lean_dec(v_unused_1561_);
v___x_1547_ = v_a_1541_;
v_isShared_1548_ = v_isSharedCheck_1560_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_snd_1545_);
lean_dec(v_a_1541_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1560_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; uint8_t v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1555_; 
v___x_1549_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8));
v___x_1550_ = lean_string_append(v_rootName_1531_, v___x_1549_);
v___x_1551_ = 1;
v___x_1552_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1552_, 0, v___x_1550_);
lean_ctor_set_uint8(v___x_1552_, sizeof(void*)*1, v___x_1551_);
lean_inc_ref(v_a_1409_);
v___x_1553_ = lean_apply_2(v_a_1409_, v___x_1552_, lean_box(0));
if (v_isShared_1548_ == 0)
{
lean_ctor_set(v___x_1547_, 0, v___x_1553_);
v___x_1555_ = v___x_1547_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v___x_1553_);
lean_ctor_set(v_reuseFailAlloc_1559_, 1, v_snd_1545_);
v___x_1555_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
lean_object* v___x_1557_; 
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 0, v___x_1555_);
v___x_1557_ = v___x_1543_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v___x_1555_);
v___x_1557_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
return v___x_1557_;
}
}
}
}
}
else
{
lean_dec_ref(v_rootName_1531_);
return v___x_1540_;
}
}
else
{
if (lean_obj_tag(v_toUpdate_1407_) == 0)
{
lean_object* v___x_1563_; uint8_t v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1569_; 
lean_dec_ref_known(v_toUpdate_1407_, 5);
lean_dec(v_snd_1534_);
lean_dec_ref(v_rootName_1531_);
v___x_1563_ = lean_io_error_to_string(v_a_1535_);
v___x_1564_ = 3;
v___x_1565_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1565_, 0, v___x_1563_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*1, v___x_1564_);
lean_inc_ref(v_a_1409_);
v___x_1566_ = lean_apply_2(v_a_1409_, v___x_1565_, lean_box(0));
v___x_1567_ = lean_box(0);
if (v_isShared_1538_ == 0)
{
lean_ctor_set_tag(v___x_1537_, 1);
lean_ctor_set(v___x_1537_, 0, v___x_1567_);
v___x_1569_ = v___x_1537_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1567_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
else
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; uint8_t v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1580_; 
v___x_1571_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9));
v___x_1572_ = lean_string_append(v_rootName_1531_, v___x_1571_);
v___x_1573_ = lean_io_error_to_string(v_a_1535_);
v___x_1574_ = lean_string_append(v___x_1572_, v___x_1573_);
lean_dec_ref(v___x_1573_);
v___x_1575_ = 2;
v___x_1576_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1576_, 0, v___x_1574_);
lean_ctor_set_uint8(v___x_1576_, sizeof(void*)*1, v___x_1575_);
lean_inc_ref(v_a_1409_);
v___x_1577_ = lean_apply_2(v_a_1409_, v___x_1576_, lean_box(0));
v___x_1578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1577_);
lean_ctor_set(v___x_1578_, 1, v_snd_1534_);
if (v_isShared_1538_ == 0)
{
lean_ctor_set(v___x_1537_, 0, v___x_1578_);
v___x_1580_ = v___x_1537_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v___x_1578_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
}
}
else
{
lean_object* v_a_1583_; lean_object* v_packagesDir_x3f_1584_; lean_object* v_packages_1585_; lean_object* v___x_1586_; 
lean_dec_ref(v_rootName_1531_);
v_a_1583_ = lean_ctor_get(v_fst_1533_, 0);
lean_inc(v_a_1583_);
lean_dec_ref_known(v_fst_1533_, 1);
v_packagesDir_x3f_1584_ = lean_ctor_get(v_a_1583_, 2);
lean_inc(v_packagesDir_x3f_1584_);
v_packages_1585_ = lean_ctor_get(v_a_1583_, 3);
lean_inc_ref(v_packages_1585_);
lean_dec(v_a_1583_);
lean_inc(v_toUpdate_1407_);
v___x_1586_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(v_toUpdate_1407_, v_depConfigs_1470_, v___x_1439_, v_packages_1585_, v_snd_1534_, v_a_1409_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
lean_inc(v_a_1587_);
lean_dec_ref_known(v___x_1586_, 1);
if (lean_obj_tag(v_toUpdate_1407_) == 0)
{
lean_object* v_snd_1588_; lean_object* v___x_1589_; uint8_t v___x_1590_; 
v_snd_1588_ = lean_ctor_get(v_a_1587_, 1);
lean_inc(v_snd_1588_);
lean_dec(v_a_1587_);
v___x_1589_ = lean_array_get_size(v_packages_1585_);
v___x_1590_ = lean_nat_dec_lt(v___x_1439_, v___x_1589_);
if (v___x_1590_ == 0)
{
lean_dec_ref_known(v_toUpdate_1407_, 5);
lean_dec_ref(v_packages_1585_);
v_packagesDir_x3f_1507_ = v_packagesDir_x3f_1584_;
v___y_1508_ = v_snd_1588_;
v___y_1509_ = v_a_1409_;
goto v___jp_1506_;
}
else
{
lean_object* v___x_1591_; size_t v___x_1592_; size_t v___x_1593_; lean_object* v___x_1594_; 
v___x_1591_ = lean_box(0);
v___x_1592_ = ((size_t)0ULL);
v___x_1593_ = lean_usize_of_nat(v___x_1589_);
v___x_1594_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_1407_, v_packages_1585_, v___x_1592_, v___x_1593_, v___x_1591_, v_snd_1588_);
lean_dec_ref(v_packages_1585_);
lean_dec_ref_known(v_toUpdate_1407_, 5);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v_a_1595_; lean_object* v_snd_1596_; 
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v___x_1594_, 1);
v_snd_1596_ = lean_ctor_get(v_a_1595_, 1);
lean_inc(v_snd_1596_);
lean_dec(v_a_1595_);
v_packagesDir_x3f_1507_ = v_packagesDir_x3f_1584_;
v___y_1508_ = v_snd_1596_;
v___y_1509_ = v_a_1409_;
goto v___jp_1506_;
}
else
{
lean_dec(v_packagesDir_x3f_1584_);
return v___x_1594_;
}
}
}
else
{
lean_object* v_snd_1597_; 
lean_dec_ref(v_packages_1585_);
v_snd_1597_ = lean_ctor_get(v_a_1587_, 1);
lean_inc(v_snd_1597_);
lean_dec(v_a_1587_);
v_packagesDir_x3f_1507_ = v_packagesDir_x3f_1584_;
v___y_1508_ = v_snd_1597_;
v___y_1509_ = v_a_1409_;
goto v___jp_1506_;
}
}
else
{
lean_dec_ref(v_packages_1585_);
lean_dec(v_packagesDir_x3f_1584_);
lean_dec(v_toUpdate_1407_);
return v___x_1586_;
}
}
}
v___jp_1600_:
{
uint8_t v___x_1602_; 
v___x_1602_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_1602_ == 0)
{
v_fst_1533_ = v_val_1601_;
v_snd_1534_ = v_a_1408_;
goto v___jp_1532_;
}
else
{
lean_object* v___x_1603_; size_t v___x_1604_; size_t v___x_1605_; lean_object* v___x_1606_; 
v___x_1603_ = lean_box(0);
v___x_1604_ = ((size_t)0ULL);
v___x_1605_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
v___x_1606_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___x_1599_, v___x_1604_, v___x_1605_, v___x_1603_, v_a_1409_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_dec_ref_known(v___x_1606_, 1);
v_fst_1533_ = v_val_1601_;
v_snd_1534_ = v_a_1408_;
goto v___jp_1532_;
}
else
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
lean_dec_ref(v_val_1601_);
lean_dec_ref(v_rootName_1531_);
lean_dec(v_a_1408_);
lean_dec(v_toUpdate_1407_);
v_a_1607_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1606_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1606_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___boxed(lean_object* v_ws_1632_, lean_object* v_toUpdate_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest(v_ws_1632_, v_toUpdate_1633_, v_a_1634_, v_a_1635_);
lean_dec_ref(v_a_1635_);
lean_dec_ref(v_ws_1632_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(lean_object* v_as_1638_, size_t v_sz_1639_, size_t v_i_1640_, lean_object* v_b_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(v_as_1638_, v_sz_1639_, v_i_1640_, v_b_1641_, v___y_1642_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___boxed(lean_object* v_as_1646_, lean_object* v_sz_1647_, lean_object* v_i_1648_, lean_object* v_b_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
size_t v_sz_boxed_1653_; size_t v_i_boxed_1654_; lean_object* v_res_1655_; 
v_sz_boxed_1653_ = lean_unbox_usize(v_sz_1647_);
lean_dec(v_sz_1647_);
v_i_boxed_1654_ = lean_unbox_usize(v_i_1648_);
lean_dec(v_i_1648_);
v_res_1655_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_as_1646_, v_sz_boxed_1653_, v_i_boxed_1654_, v_b_1649_, v___y_1650_, v___y_1651_);
lean_dec_ref(v___y_1651_);
lean_dec_ref(v_as_1646_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4(lean_object* v_toUpdate_1656_, lean_object* v_as_1657_, size_t v_i_1658_, size_t v_stop_1659_, lean_object* v_b_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_1656_, v_as_1657_, v_i_1658_, v_stop_1659_, v_b_1660_, v___y_1661_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___boxed(lean_object* v_toUpdate_1665_, lean_object* v_as_1666_, lean_object* v_i_1667_, lean_object* v_stop_1668_, lean_object* v_b_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
size_t v_i_boxed_1673_; size_t v_stop_boxed_1674_; lean_object* v_res_1675_; 
v_i_boxed_1673_ = lean_unbox_usize(v_i_1667_);
lean_dec(v_i_1667_);
v_stop_boxed_1674_ = lean_unbox_usize(v_stop_1668_);
lean_dec(v_stop_1668_);
v_res_1675_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4(v_toUpdate_1665_, v_as_1666_, v_i_boxed_1673_, v_stop_boxed_1674_, v_b_1669_, v___y_1670_, v___y_1671_);
lean_dec_ref(v___y_1671_);
lean_dec_ref(v_as_1666_);
lean_dec(v_toUpdate_1665_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(lean_object* v_dep_1676_, lean_object* v_as_1677_, size_t v_i_1678_, size_t v_stop_1679_, lean_object* v_b_1680_, lean_object* v___y_1681_){
_start:
{
lean_object* v_fst_1684_; lean_object* v_snd_1685_; lean_object* v___y_1690_; lean_object* v_name_1691_; uint8_t v___x_1694_; 
v___x_1694_ = lean_usize_dec_eq(v_i_1678_, v_stop_1679_);
if (v___x_1694_ == 0)
{
lean_object* v___x_1695_; lean_object* v_name_1696_; lean_object* v_scope_1697_; lean_object* v_configFile_1698_; lean_object* v_manifestFile_x3f_1699_; lean_object* v_src_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1727_; 
v___x_1695_ = lean_array_uget(v_as_1677_, v_i_1678_);
v_name_1696_ = lean_ctor_get(v___x_1695_, 0);
v_scope_1697_ = lean_ctor_get(v___x_1695_, 1);
v_configFile_1698_ = lean_ctor_get(v___x_1695_, 2);
v_manifestFile_x3f_1699_ = lean_ctor_get(v___x_1695_, 3);
v_src_1700_ = lean_ctor_get(v___x_1695_, 4);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1702_ = v___x_1695_;
v_isShared_1703_ = v_isSharedCheck_1727_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_src_1700_);
lean_inc(v_manifestFile_x3f_1699_);
lean_inc(v_configFile_1698_);
lean_inc(v_scope_1697_);
lean_inc(v_name_1696_);
lean_dec(v___x_1695_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1727_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
uint8_t v___x_1704_; 
v___x_1704_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_name_1696_, v___y_1681_);
if (v___x_1704_ == 0)
{
uint8_t v___x_1705_; 
v___x_1705_ = 1;
if (lean_obj_tag(v_src_1700_) == 0)
{
uint8_t v_copy_1706_; 
v_copy_1706_ = lean_ctor_get_uint8(v_src_1700_, sizeof(void*)*1);
if (v_copy_1706_ == 0)
{
lean_object* v_dir_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1719_; 
v_dir_1707_ = lean_ctor_get(v_src_1700_, 0);
v_isSharedCheck_1719_ = !lean_is_exclusive(v_src_1700_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1709_ = v_src_1700_;
v_isShared_1710_ = v_isSharedCheck_1719_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_dir_1707_);
lean_dec(v_src_1700_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1719_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v_relPkgDir_1711_; lean_object* v___x_1712_; lean_object* v___x_1714_; 
v_relPkgDir_1711_ = lean_ctor_get(v_dep_1676_, 1);
lean_inc_ref(v_relPkgDir_1711_);
v___x_1712_ = l_Lake_joinRelative(v_relPkgDir_1711_, v_dir_1707_);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v___x_1712_);
v___x_1714_ = v___x_1709_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v___x_1712_);
lean_ctor_set_uint8(v_reuseFailAlloc_1718_, sizeof(void*)*1, v_copy_1706_);
v___x_1714_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
lean_object* v___x_1716_; 
lean_inc(v_name_1696_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 4, v___x_1714_);
v___x_1716_ = v___x_1702_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_name_1696_);
lean_ctor_set(v_reuseFailAlloc_1717_, 1, v_scope_1697_);
lean_ctor_set(v_reuseFailAlloc_1717_, 2, v_configFile_1698_);
lean_ctor_set(v_reuseFailAlloc_1717_, 3, v_manifestFile_x3f_1699_);
lean_ctor_set(v_reuseFailAlloc_1717_, 4, v___x_1714_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
lean_ctor_set_uint8(v___x_1716_, sizeof(void*)*5, v___x_1705_);
v___y_1690_ = v___x_1716_;
v_name_1691_ = v_name_1696_;
goto v___jp_1689_;
}
}
}
}
else
{
lean_object* v___x_1721_; 
lean_inc(v_name_1696_);
if (v_isShared_1703_ == 0)
{
v___x_1721_ = v___x_1702_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v_name_1696_);
lean_ctor_set(v_reuseFailAlloc_1722_, 1, v_scope_1697_);
lean_ctor_set(v_reuseFailAlloc_1722_, 2, v_configFile_1698_);
lean_ctor_set(v_reuseFailAlloc_1722_, 3, v_manifestFile_x3f_1699_);
lean_ctor_set(v_reuseFailAlloc_1722_, 4, v_src_1700_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*5, v___x_1705_);
v___y_1690_ = v___x_1721_;
v_name_1691_ = v_name_1696_;
goto v___jp_1689_;
}
}
}
else
{
lean_object* v___x_1724_; 
lean_inc(v_name_1696_);
if (v_isShared_1703_ == 0)
{
v___x_1724_ = v___x_1702_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v_name_1696_);
lean_ctor_set(v_reuseFailAlloc_1725_, 1, v_scope_1697_);
lean_ctor_set(v_reuseFailAlloc_1725_, 2, v_configFile_1698_);
lean_ctor_set(v_reuseFailAlloc_1725_, 3, v_manifestFile_x3f_1699_);
lean_ctor_set(v_reuseFailAlloc_1725_, 4, v_src_1700_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
lean_ctor_set_uint8(v___x_1724_, sizeof(void*)*5, v___x_1705_);
v___y_1690_ = v___x_1724_;
v_name_1691_ = v_name_1696_;
goto v___jp_1689_;
}
}
}
else
{
lean_object* v___x_1726_; 
lean_del_object(v___x_1702_);
lean_dec_ref(v_src_1700_);
lean_dec(v_manifestFile_x3f_1699_);
lean_dec_ref(v_configFile_1698_);
lean_dec_ref(v_scope_1697_);
lean_dec(v_name_1696_);
v___x_1726_ = lean_box(0);
v_fst_1684_ = v___x_1726_;
v_snd_1685_ = v___y_1681_;
goto v___jp_1683_;
}
}
}
else
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
lean_dec_ref(v_dep_1676_);
v___x_1728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1728_, 0, v_b_1680_);
lean_ctor_set(v___x_1728_, 1, v___y_1681_);
v___x_1729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1728_);
return v___x_1729_;
}
v___jp_1683_:
{
size_t v___x_1686_; size_t v___x_1687_; 
v___x_1686_ = ((size_t)1ULL);
v___x_1687_ = lean_usize_add(v_i_1678_, v___x_1686_);
v_i_1678_ = v___x_1687_;
v_b_1680_ = v_fst_1684_;
v___y_1681_ = v_snd_1685_;
goto _start;
}
v___jp_1689_:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1692_ = lean_box(0);
v___x_1693_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1691_, v___y_1690_, v___y_1681_);
v_fst_1684_ = v___x_1692_;
v_snd_1685_ = v___x_1693_;
goto v___jp_1683_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg___boxed(lean_object* v_dep_1730_, lean_object* v_as_1731_, lean_object* v_i_1732_, lean_object* v_stop_1733_, lean_object* v_b_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
size_t v_i_boxed_1737_; size_t v_stop_boxed_1738_; lean_object* v_res_1739_; 
v_i_boxed_1737_ = lean_unbox_usize(v_i_1732_);
lean_dec(v_i_1732_);
v_stop_boxed_1738_ = lean_unbox_usize(v_stop_1733_);
lean_dec(v_stop_1733_);
v_res_1739_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1730_, v_as_1731_, v_i_boxed_1737_, v_stop_boxed_1738_, v_b_1734_, v___y_1735_);
lean_dec_ref(v_as_1731_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(lean_object* v_dep_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_){
_start:
{
lean_object* v_manifestEntry_1746_; lean_object* v_pkgDir_1747_; lean_object* v_name_1748_; lean_object* v_manifestFile_x3f_1749_; lean_object* v___y_1751_; lean_object* v_fst_1752_; lean_object* v_snd_1753_; lean_object* v___y_1802_; lean_object* v___y_1803_; lean_object* v___y_1804_; lean_object* v_val_1805_; lean_object* v___y_1821_; 
v_manifestEntry_1746_ = lean_ctor_get(v_dep_1742_, 4);
v_pkgDir_1747_ = lean_ctor_get(v_dep_1742_, 0);
v_name_1748_ = lean_ctor_get(v_manifestEntry_1746_, 0);
v_manifestFile_x3f_1749_ = lean_ctor_get(v_manifestEntry_1746_, 3);
if (lean_obj_tag(v_manifestFile_x3f_1749_) == 0)
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1841_ = l_Lake_defaultManifestFile;
lean_inc_ref(v_pkgDir_1747_);
v___x_1842_ = l_Lake_joinRelative(v_pkgDir_1747_, v___x_1841_);
v___y_1821_ = v___x_1842_;
goto v___jp_1820_;
}
else
{
lean_object* v_val_1843_; lean_object* v___x_1844_; 
v_val_1843_ = lean_ctor_get(v_manifestFile_x3f_1749_, 0);
lean_inc(v_val_1843_);
lean_inc_ref(v_pkgDir_1747_);
v___x_1844_ = l_Lake_joinRelative(v_pkgDir_1747_, v_val_1843_);
v___y_1821_ = v___x_1844_;
goto v___jp_1820_;
}
v___jp_1750_:
{
if (lean_obj_tag(v_fst_1752_) == 0)
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1783_; 
lean_inc(v_name_1748_);
lean_dec_ref(v_dep_1742_);
v_a_1754_ = lean_ctor_get(v_fst_1752_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_fst_1752_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1756_ = v_fst_1752_;
v_isShared_1757_ = v_isSharedCheck_1783_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v_fst_1752_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1783_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
if (lean_obj_tag(v_a_1754_) == 11)
{
uint8_t v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; uint8_t v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1768_; 
lean_dec_ref_known(v_a_1754_, 2);
v___x_1758_ = 0;
v___x_1759_ = l_Lean_Name_toString(v_name_1748_, v___x_1758_);
v___x_1760_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0));
v___x_1761_ = lean_string_append(v___x_1759_, v___x_1760_);
v___x_1762_ = lean_string_append(v___x_1761_, v___y_1751_);
lean_dec_ref(v___y_1751_);
v___x_1763_ = 2;
v___x_1764_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1764_, 0, v___x_1762_);
lean_ctor_set_uint8(v___x_1764_, sizeof(void*)*1, v___x_1763_);
lean_inc_ref(v_a_1744_);
v___x_1765_ = lean_apply_2(v_a_1744_, v___x_1764_, lean_box(0));
v___x_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1765_);
lean_ctor_set(v___x_1766_, 1, v_snd_1753_);
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 0, v___x_1766_);
v___x_1768_ = v___x_1756_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v___x_1766_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
else
{
uint8_t v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; uint8_t v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1781_; 
lean_dec_ref(v___y_1751_);
v___x_1770_ = 0;
v___x_1771_ = l_Lean_Name_toString(v_name_1748_, v___x_1770_);
v___x_1772_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1));
v___x_1773_ = lean_string_append(v___x_1771_, v___x_1772_);
v___x_1774_ = lean_io_error_to_string(v_a_1754_);
v___x_1775_ = lean_string_append(v___x_1773_, v___x_1774_);
lean_dec_ref(v___x_1774_);
v___x_1776_ = 2;
v___x_1777_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1777_, 0, v___x_1775_);
lean_ctor_set_uint8(v___x_1777_, sizeof(void*)*1, v___x_1776_);
lean_inc_ref(v_a_1744_);
v___x_1778_ = lean_apply_2(v_a_1744_, v___x_1777_, lean_box(0));
v___x_1779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1779_, 0, v___x_1778_);
lean_ctor_set(v___x_1779_, 1, v_snd_1753_);
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 0, v___x_1779_);
v___x_1781_ = v___x_1756_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v___x_1779_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
else
{
lean_object* v_a_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1800_; 
lean_dec_ref(v___y_1751_);
v_a_1784_ = lean_ctor_get(v_fst_1752_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v_fst_1752_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1786_ = v_fst_1752_;
v_isShared_1787_ = v_isSharedCheck_1800_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_a_1784_);
lean_dec(v_fst_1752_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1800_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v_packages_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; uint8_t v___x_1792_; 
v_packages_1788_ = lean_ctor_get(v_a_1784_, 3);
lean_inc_ref(v_packages_1788_);
lean_dec(v_a_1784_);
v___x_1789_ = lean_unsigned_to_nat(0u);
v___x_1790_ = lean_array_get_size(v_packages_1788_);
v___x_1791_ = lean_box(0);
v___x_1792_ = lean_nat_dec_lt(v___x_1789_, v___x_1790_);
if (v___x_1792_ == 0)
{
lean_object* v___x_1793_; lean_object* v___x_1795_; 
lean_dec_ref(v_packages_1788_);
lean_dec_ref(v_dep_1742_);
v___x_1793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1791_);
lean_ctor_set(v___x_1793_, 1, v_snd_1753_);
if (v_isShared_1787_ == 0)
{
lean_ctor_set_tag(v___x_1786_, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1793_);
v___x_1795_ = v___x_1786_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
else
{
size_t v___x_1797_; size_t v___x_1798_; lean_object* v___x_1799_; 
lean_del_object(v___x_1786_);
v___x_1797_ = ((size_t)0ULL);
v___x_1798_ = lean_usize_of_nat(v___x_1790_);
v___x_1799_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1742_, v_packages_1788_, v___x_1797_, v___x_1798_, v___x_1791_, v_snd_1753_);
lean_dec_ref(v_packages_1788_);
return v___x_1799_;
}
}
}
}
v___jp_1801_:
{
lean_object* v___x_1806_; uint8_t v___x_1807_; 
v___x_1806_ = lean_array_get_size(v___y_1803_);
v___x_1807_ = lean_nat_dec_lt(v___y_1804_, v___x_1806_);
if (v___x_1807_ == 0)
{
v___y_1751_ = v___y_1802_;
v_fst_1752_ = v_val_1805_;
v_snd_1753_ = v_a_1743_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1808_; size_t v___x_1809_; size_t v___x_1810_; lean_object* v___x_1811_; 
v___x_1808_ = lean_box(0);
v___x_1809_ = ((size_t)0ULL);
v___x_1810_ = lean_usize_of_nat(v___x_1806_);
v___x_1811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___y_1803_, v___x_1809_, v___x_1810_, v___x_1808_, v_a_1744_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_dec_ref_known(v___x_1811_, 1);
v___y_1751_ = v___y_1802_;
v_fst_1752_ = v_val_1805_;
v_snd_1753_ = v_a_1743_;
goto v___jp_1750_;
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
lean_dec_ref(v_val_1805_);
lean_dec_ref(v___y_1802_);
lean_dec(v_a_1743_);
lean_dec_ref(v_dep_1742_);
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1811_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1811_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
}
v___jp_1820_:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1822_ = lean_unsigned_to_nat(0u);
v___x_1823_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___y_1821_);
v___x_1824_ = l_Lake_Manifest_load(v___y_1821_);
if (lean_obj_tag(v___x_1824_) == 0)
{
lean_object* v_a_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1832_; 
v_a_1825_ = lean_ctor_get(v___x_1824_, 0);
v_isSharedCheck_1832_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1827_ = v___x_1824_;
v_isShared_1828_ = v_isSharedCheck_1832_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_a_1825_);
lean_dec(v___x_1824_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1832_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v___x_1830_; 
if (v_isShared_1828_ == 0)
{
lean_ctor_set_tag(v___x_1827_, 1);
v___x_1830_ = v___x_1827_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_a_1825_);
v___x_1830_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
v___y_1802_ = v___y_1821_;
v___y_1803_ = v___x_1823_;
v___y_1804_ = v___x_1822_;
v_val_1805_ = v___x_1830_;
goto v___jp_1801_;
}
}
}
else
{
lean_object* v_a_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1840_; 
v_a_1833_ = lean_ctor_get(v___x_1824_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1835_ = v___x_1824_;
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_a_1833_);
lean_dec(v___x_1824_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1838_; 
if (v_isShared_1836_ == 0)
{
lean_ctor_set_tag(v___x_1835_, 0);
v___x_1838_ = v___x_1835_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1833_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
v___y_1802_ = v___y_1821_;
v___y_1803_ = v___x_1823_;
v___y_1804_ = v___x_1822_;
v_val_1805_ = v___x_1838_;
goto v___jp_1801_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___boxed(lean_object* v_dep_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_dep_1845_, v_a_1846_, v_a_1847_);
lean_dec_ref(v_a_1847_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(lean_object* v_dep_1850_, lean_object* v_as_1851_, size_t v_i_1852_, size_t v_stop_1853_, lean_object* v_b_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1850_, v_as_1851_, v_i_1852_, v_stop_1853_, v_b_1854_, v___y_1855_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___boxed(lean_object* v_dep_1859_, lean_object* v_as_1860_, lean_object* v_i_1861_, lean_object* v_stop_1862_, lean_object* v_b_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
size_t v_i_boxed_1867_; size_t v_stop_boxed_1868_; lean_object* v_res_1869_; 
v_i_boxed_1867_ = lean_unbox_usize(v_i_1861_);
lean_dec(v_i_1861_);
v_stop_boxed_1868_ = lean_unbox_usize(v_stop_1862_);
lean_dec(v_stop_1862_);
v_res_1869_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(v_dep_1859_, v_as_1860_, v_i_boxed_1867_, v_stop_boxed_1868_, v_b_1863_, v___y_1864_, v___y_1865_);
lean_dec_ref(v___y_1865_);
lean_dec_ref(v_as_1860_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(lean_object* v_ws_1871_, lean_object* v_pkg_1872_, lean_object* v_dep_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_){
_start:
{
uint8_t v___y_1878_; lean_object* v___y_1879_; lean_object* v_name_1909_; lean_object* v___x_1910_; 
v_name_1909_ = lean_ctor_get(v_dep_1873_, 0);
v___x_1910_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_1874_, v_name_1909_);
if (lean_obj_tag(v___x_1910_) == 1)
{
lean_object* v_val_1911_; lean_object* v_lakeEnv_1912_; lean_object* v_packages_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v_config_1916_; lean_object* v_dir_1917_; lean_object* v_toWorkspaceConfig_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; 
lean_dec_ref(v_dep_1873_);
lean_dec_ref(v_pkg_1872_);
v_val_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_val_1911_);
lean_dec_ref_known(v___x_1910_, 1);
v_lakeEnv_1912_ = lean_ctor_get(v_ws_1871_, 0);
lean_inc_ref(v_lakeEnv_1912_);
v_packages_1913_ = lean_ctor_get(v_ws_1871_, 4);
lean_inc_ref(v_packages_1913_);
lean_dec_ref(v_ws_1871_);
v___x_1914_ = lean_unsigned_to_nat(0u);
v___x_1915_ = lean_array_fget(v_packages_1913_, v___x_1914_);
lean_dec_ref(v_packages_1913_);
v_config_1916_ = lean_ctor_get(v___x_1915_, 6);
lean_inc_ref(v_config_1916_);
v_dir_1917_ = lean_ctor_get(v___x_1915_, 4);
lean_inc_ref(v_dir_1917_);
lean_dec(v___x_1915_);
v_toWorkspaceConfig_1918_ = lean_ctor_get(v_config_1916_, 0);
lean_inc_ref(v_toWorkspaceConfig_1918_);
lean_dec_ref(v_config_1916_);
v___x_1919_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1918_);
v___x_1920_ = l_Lake_PackageEntry_materialize(v_val_1911_, v_lakeEnv_1912_, v_dir_1917_, v___x_1919_, v_a_1875_);
lean_dec_ref(v_lakeEnv_1912_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1929_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1923_ = v___x_1920_;
v_isShared_1924_ = v_isSharedCheck_1929_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_a_1921_);
lean_dec(v___x_1920_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1929_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___x_1925_; lean_object* v___x_1927_; 
v___x_1925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1925_, 0, v_a_1921_);
lean_ctor_set(v___x_1925_, 1, v_a_1874_);
if (v_isShared_1924_ == 0)
{
lean_ctor_set(v___x_1923_, 0, v___x_1925_);
v___x_1927_ = v___x_1923_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1925_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
else
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
lean_dec(v_a_1874_);
v_a_1930_ = lean_ctor_get(v___x_1920_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1920_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1920_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
else
{
lean_object* v_wsIdx_1938_; lean_object* v_relDir_1939_; uint8_t v___y_1941_; lean_object* v___x_1945_; uint8_t v___x_1946_; 
lean_dec(v___x_1910_);
v_wsIdx_1938_ = lean_ctor_get(v_pkg_1872_, 0);
lean_inc(v_wsIdx_1938_);
v_relDir_1939_ = lean_ctor_get(v_pkg_1872_, 5);
lean_inc_ref(v_relDir_1939_);
lean_dec_ref(v_pkg_1872_);
v___x_1945_ = lean_unsigned_to_nat(0u);
v___x_1946_ = lean_nat_dec_eq(v_wsIdx_1938_, v___x_1945_);
lean_dec(v_wsIdx_1938_);
if (v___x_1946_ == 0)
{
uint8_t v___x_1947_; 
v___x_1947_ = 1;
v___y_1941_ = v___x_1947_;
goto v___jp_1940_;
}
else
{
uint8_t v___x_1948_; 
v___x_1948_ = 0;
v___y_1941_ = v___x_1948_;
goto v___jp_1940_;
}
v___jp_1940_:
{
lean_object* v___x_1942_; uint8_t v___x_1943_; 
v___x_1942_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0));
v___x_1943_ = lean_string_dec_eq(v_relDir_1939_, v___x_1942_);
if (v___x_1943_ == 0)
{
lean_object* v___x_1944_; 
v___x_1944_ = l_Lake_joinRelative(v_relDir_1939_, v___x_1942_);
v___y_1878_ = v___y_1941_;
v___y_1879_ = v___x_1944_;
goto v___jp_1877_;
}
else
{
v___y_1878_ = v___y_1941_;
v___y_1879_ = v_relDir_1939_;
goto v___jp_1877_;
}
}
}
v___jp_1877_:
{
lean_object* v_lakeEnv_1880_; lean_object* v_packages_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v_config_1884_; lean_object* v_dir_1885_; lean_object* v_toWorkspaceConfig_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v_lakeEnv_1880_ = lean_ctor_get(v_ws_1871_, 0);
lean_inc_ref(v_lakeEnv_1880_);
v_packages_1881_ = lean_ctor_get(v_ws_1871_, 4);
lean_inc_ref(v_packages_1881_);
lean_dec_ref(v_ws_1871_);
v___x_1882_ = lean_unsigned_to_nat(0u);
v___x_1883_ = lean_array_fget(v_packages_1881_, v___x_1882_);
lean_dec_ref(v_packages_1881_);
v_config_1884_ = lean_ctor_get(v___x_1883_, 6);
lean_inc_ref(v_config_1884_);
v_dir_1885_ = lean_ctor_get(v___x_1883_, 4);
lean_inc_ref(v_dir_1885_);
lean_dec(v___x_1883_);
v_toWorkspaceConfig_1886_ = lean_ctor_get(v_config_1884_, 0);
lean_inc_ref(v_toWorkspaceConfig_1886_);
lean_dec_ref(v_config_1884_);
v___x_1887_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1886_);
v___x_1888_ = l_Lake_Dependency_materialize(v_dep_1873_, v___y_1878_, v_lakeEnv_1880_, v_dir_1885_, v___x_1887_, v___y_1879_, v_a_1875_);
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v_a_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1900_; 
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1891_ = v___x_1888_;
v_isShared_1892_ = v_isSharedCheck_1900_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_a_1889_);
lean_dec(v___x_1888_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1900_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v_manifestEntry_1893_; lean_object* v_name_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1898_; 
v_manifestEntry_1893_ = lean_ctor_get(v_a_1889_, 4);
v_name_1894_ = lean_ctor_get(v_manifestEntry_1893_, 0);
lean_inc_ref(v_manifestEntry_1893_);
lean_inc(v_name_1894_);
v___x_1895_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1894_, v_manifestEntry_1893_, v_a_1874_);
v___x_1896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1896_, 0, v_a_1889_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 0, v___x_1896_);
v___x_1898_ = v___x_1891_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1896_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
lean_dec(v_a_1874_);
v_a_1901_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1888_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1888_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___boxed(lean_object* v_ws_1949_, lean_object* v_pkg_1950_, lean_object* v_dep_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_1949_, v_pkg_1950_, v_dep_1951_, v_a_1952_, v_a_1953_);
lean_dec_ref(v_a_1953_);
return v_res_1955_;
}
}
static uint32_t _init_l___private_Lake_Load_Resolve_0__Lake_restartCode(void){
_start:
{
uint32_t v___x_1956_; 
v___x_1956_ = 4;
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(lean_object* v_src_1957_, lean_object* v_tc_x3f_1958_, uint8_t v_fixed_1959_, lean_object* v_self_1960_){
_start:
{
lean_object* v_clashes_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
v_clashes_1961_ = lean_ctor_get(v_self_1960_, 2);
v_isSharedCheck_1968_ = !lean_is_exclusive(v_self_1960_);
if (v_isSharedCheck_1968_ == 0)
{
lean_object* v_unused_1969_; lean_object* v_unused_1970_; 
v_unused_1969_ = lean_ctor_get(v_self_1960_, 1);
lean_dec(v_unused_1969_);
v_unused_1970_ = lean_ctor_get(v_self_1960_, 0);
lean_dec(v_unused_1970_);
v___x_1963_ = v_self_1960_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_clashes_1961_);
lean_dec(v_self_1960_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 1, v_tc_x3f_1958_);
lean_ctor_set(v___x_1963_, 0, v_src_1957_);
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_src_1957_);
lean_ctor_set(v_reuseFailAlloc_1967_, 1, v_tc_x3f_1958_);
lean_ctor_set(v_reuseFailAlloc_1967_, 2, v_clashes_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
lean_ctor_set_uint8(v___x_1966_, sizeof(void*)*3, v_fixed_1959_);
return v___x_1966_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace___boxed(lean_object* v_src_1971_, lean_object* v_tc_x3f_1972_, lean_object* v_fixed_1973_, lean_object* v_self_1974_){
_start:
{
uint8_t v_fixed_boxed_1975_; lean_object* v_res_1976_; 
v_fixed_boxed_1975_ = lean_unbox(v_fixed_1973_);
v_res_1976_ = l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(v_src_1971_, v_tc_x3f_1972_, v_fixed_boxed_1975_, v_self_1974_);
return v_res_1976_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(lean_object* v_src_1977_, lean_object* v_ver_1978_, uint8_t v_fixed_1979_, lean_object* v_self_1980_){
_start:
{
lean_object* v_src_1981_; lean_object* v_tc_x3f_1982_; lean_object* v_clashes_1983_; uint8_t v_fixed_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1993_; 
v_src_1981_ = lean_ctor_get(v_self_1980_, 0);
v_tc_x3f_1982_ = lean_ctor_get(v_self_1980_, 1);
v_clashes_1983_ = lean_ctor_get(v_self_1980_, 2);
v_fixed_1984_ = lean_ctor_get_uint8(v_self_1980_, sizeof(void*)*3);
v_isSharedCheck_1993_ = !lean_is_exclusive(v_self_1980_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1986_ = v_self_1980_;
v_isShared_1987_ = v_isSharedCheck_1993_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_clashes_1983_);
lean_inc(v_tc_x3f_1982_);
lean_inc(v_src_1981_);
lean_dec(v_self_1980_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1993_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1991_; 
v___x_1988_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1988_, 0, v_src_1977_);
lean_ctor_set(v___x_1988_, 1, v_ver_1978_);
lean_ctor_set_uint8(v___x_1988_, sizeof(void*)*2, v_fixed_1979_);
v___x_1989_ = lean_array_push(v_clashes_1983_, v___x_1988_);
if (v_isShared_1987_ == 0)
{
lean_ctor_set(v___x_1986_, 2, v___x_1989_);
v___x_1991_ = v___x_1986_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_src_1981_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v_tc_x3f_1982_);
lean_ctor_set(v_reuseFailAlloc_1992_, 2, v___x_1989_);
lean_ctor_set_uint8(v_reuseFailAlloc_1992_, sizeof(void*)*3, v_fixed_1984_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash___boxed(lean_object* v_src_1994_, lean_object* v_ver_1995_, lean_object* v_fixed_1996_, lean_object* v_self_1997_){
_start:
{
uint8_t v_fixed_boxed_1998_; lean_object* v_res_1999_; 
v_fixed_boxed_1998_ = lean_unbox(v_fixed_1996_);
v_res_1999_ = l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(v_src_1994_, v_ver_1995_, v_fixed_boxed_1998_, v_self_1997_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(lean_object* v___x_2004_, lean_object* v_as_2005_, size_t v_i_2006_, size_t v_stop_2007_, lean_object* v_b_2008_){
_start:
{
uint8_t v___x_2009_; 
v___x_2009_ = lean_usize_dec_eq(v_i_2006_, v_stop_2007_);
if (v___x_2009_ == 0)
{
lean_object* v___x_2010_; lean_object* v_src_2011_; lean_object* v_ver_2012_; uint8_t v_fixed_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; lean_object* v___y_2017_; lean_object* v___y_2018_; lean_object* v___y_2019_; lean_object* v___y_2030_; 
v___x_2010_ = lean_array_uget_borrowed(v_as_2005_, v_i_2006_);
v_src_2011_ = lean_ctor_get(v___x_2010_, 0);
v_ver_2012_ = lean_ctor_get(v___x_2010_, 1);
v_fixed_2013_ = lean_ctor_get_uint8(v___x_2010_, sizeof(void*)*2);
v___x_2014_ = lean_unsigned_to_nat(0u);
v___x_2015_ = lean_nat_dec_lt(v___x_2014_, v___x_2004_);
if (v_fixed_2013_ == 0)
{
lean_object* v___x_2034_; 
v___x_2034_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_2030_ = v___x_2034_;
goto v___jp_2029_;
}
else
{
lean_object* v___x_2035_; 
v___x_2035_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_2030_ = v___x_2035_;
goto v___jp_2029_;
}
v___jp_2016_:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; size_t v___x_2026_; size_t v___x_2027_; 
v___x_2020_ = lean_string_append(v___y_2018_, v___y_2019_);
lean_dec_ref(v___y_2019_);
v___x_2021_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2022_ = lean_string_append(v___x_2020_, v___x_2021_);
lean_inc(v_src_2011_);
v___x_2023_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_src_2011_, v___x_2015_);
v___x_2024_ = lean_string_append(v___x_2022_, v___x_2023_);
lean_dec_ref(v___x_2023_);
v___x_2025_ = lean_string_append(v___x_2024_, v___y_2017_);
v___x_2026_ = ((size_t)1ULL);
v___x_2027_ = lean_usize_add(v_i_2006_, v___x_2026_);
v_i_2006_ = v___x_2027_;
v_b_2008_ = v___x_2025_;
goto _start;
}
v___jp_2029_:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v_toString_2033_; 
v___x_2031_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1));
v___x_2032_ = lean_string_append(v_b_2008_, v___x_2031_);
v_toString_2033_ = lean_ctor_get(v_ver_2012_, 0);
lean_inc_ref(v_toString_2033_);
v___y_2017_ = v___y_2030_;
v___y_2018_ = v___x_2032_;
v___y_2019_ = v_toString_2033_;
goto v___jp_2016_;
}
}
else
{
return v_b_2008_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___boxed(lean_object* v___x_2036_, lean_object* v_as_2037_, lean_object* v_i_2038_, lean_object* v_stop_2039_, lean_object* v_b_2040_){
_start:
{
size_t v_i_boxed_2041_; size_t v_stop_boxed_2042_; lean_object* v_res_2043_; 
v_i_boxed_2041_ = lean_unbox_usize(v_i_2038_);
lean_dec(v_i_2038_);
v_stop_boxed_2042_ = lean_unbox_usize(v_stop_2039_);
lean_dec(v_stop_2039_);
v_res_2043_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(v___x_2036_, v_as_2037_, v_i_boxed_2041_, v_stop_boxed_2042_, v_b_2040_);
lean_dec_ref(v_as_2037_);
lean_dec(v___x_2036_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(lean_object* v___x_2044_, lean_object* v_as_2045_, size_t v_i_2046_, size_t v_stop_2047_, lean_object* v_b_2048_){
_start:
{
uint8_t v___x_2049_; 
v___x_2049_ = lean_usize_dec_eq(v_i_2046_, v_stop_2047_);
if (v___x_2049_ == 0)
{
lean_object* v___x_2050_; lean_object* v_src_2051_; lean_object* v_ver_2052_; uint8_t v_fixed_2053_; lean_object* v___x_2054_; uint8_t v___x_2055_; lean_object* v___y_2057_; lean_object* v___y_2058_; lean_object* v___y_2059_; lean_object* v___y_2070_; 
v___x_2050_ = lean_array_uget_borrowed(v_as_2045_, v_i_2046_);
v_src_2051_ = lean_ctor_get(v___x_2050_, 0);
v_ver_2052_ = lean_ctor_get(v___x_2050_, 1);
v_fixed_2053_ = lean_ctor_get_uint8(v___x_2050_, sizeof(void*)*2);
v___x_2054_ = lean_unsigned_to_nat(0u);
v___x_2055_ = lean_nat_dec_lt(v___x_2054_, v___x_2044_);
if (v_fixed_2053_ == 0)
{
lean_object* v___x_2074_; 
v___x_2074_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_2070_ = v___x_2074_;
goto v___jp_2069_;
}
else
{
lean_object* v___x_2075_; 
v___x_2075_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_2070_ = v___x_2075_;
goto v___jp_2069_;
}
v___jp_2056_:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; size_t v___x_2066_; size_t v___x_2067_; lean_object* v___x_2068_; 
v___x_2060_ = lean_string_append(v___y_2058_, v___y_2059_);
lean_dec_ref(v___y_2059_);
v___x_2061_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2062_ = lean_string_append(v___x_2060_, v___x_2061_);
lean_inc(v_src_2051_);
v___x_2063_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_src_2051_, v___x_2055_);
v___x_2064_ = lean_string_append(v___x_2062_, v___x_2063_);
lean_dec_ref(v___x_2063_);
v___x_2065_ = lean_string_append(v___x_2064_, v___y_2057_);
v___x_2066_ = ((size_t)1ULL);
v___x_2067_ = lean_usize_add(v_i_2046_, v___x_2066_);
v___x_2068_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(v___x_2044_, v_as_2045_, v___x_2067_, v_stop_2047_, v___x_2065_);
return v___x_2068_;
}
v___jp_2069_:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v_toString_2073_; 
v___x_2071_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1));
v___x_2072_ = lean_string_append(v_b_2048_, v___x_2071_);
v_toString_2073_ = lean_ctor_get(v_ver_2052_, 0);
lean_inc_ref(v_toString_2073_);
v___y_2057_ = v___y_2070_;
v___y_2058_ = v___x_2072_;
v___y_2059_ = v_toString_2073_;
goto v___jp_2056_;
}
}
else
{
return v_b_2048_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0___boxed(lean_object* v___x_2076_, lean_object* v_as_2077_, lean_object* v_i_2078_, lean_object* v_stop_2079_, lean_object* v_b_2080_){
_start:
{
size_t v_i_boxed_2081_; size_t v_stop_boxed_2082_; lean_object* v_res_2083_; 
v_i_boxed_2081_ = lean_unbox_usize(v_i_2078_);
lean_dec(v_i_2078_);
v_stop_boxed_2082_ = lean_unbox_usize(v_stop_2079_);
lean_dec(v_stop_2079_);
v_res_2083_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___x_2076_, v_as_2077_, v_i_boxed_2081_, v_stop_boxed_2082_, v_b_2080_);
lean_dec_ref(v_as_2077_);
lean_dec(v___x_2076_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(lean_object* v___x_2084_, lean_object* v_as_2085_, size_t v_i_2086_, size_t v_stop_2087_, lean_object* v_b_2088_, lean_object* v___y_2089_){
_start:
{
lean_object* v_a_2092_; uint8_t v___x_2096_; 
v___x_2096_ = lean_usize_dec_eq(v_i_2086_, v_stop_2087_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; lean_object* v_relPkgDir_2098_; lean_object* v_manifestEntry_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
v___x_2097_ = lean_array_uget_borrowed(v_as_2085_, v_i_2086_);
v_relPkgDir_2098_ = lean_ctor_get(v___x_2097_, 1);
v_manifestEntry_2099_ = lean_ctor_get(v___x_2097_, 4);
lean_inc_ref(v_relPkgDir_2098_);
lean_inc_ref(v___x_2084_);
v___x_2100_ = l_Lake_joinRelative(v___x_2084_, v_relPkgDir_2098_);
v___x_2101_ = l_Lake_toolchainFileName;
v___x_2102_ = l_System_FilePath_join(v___x_2100_, v___x_2101_);
v___x_2103_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_2102_);
lean_dec_ref(v___x_2102_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
lean_inc(v_a_2104_);
lean_dec_ref_known(v___x_2103_, 1);
if (lean_obj_tag(v_a_2104_) == 1)
{
lean_object* v_val_2105_; lean_object* v_src_2106_; lean_object* v_tc_x3f_2107_; lean_object* v_clashes_2108_; uint8_t v_fixed_2109_; 
v_val_2105_ = lean_ctor_get(v_a_2104_, 0);
v_src_2106_ = lean_ctor_get(v_b_2088_, 0);
v_tc_x3f_2107_ = lean_ctor_get(v_b_2088_, 1);
v_clashes_2108_ = lean_ctor_get(v_b_2088_, 2);
v_fixed_2109_ = lean_ctor_get_uint8(v_b_2088_, sizeof(void*)*3);
if (lean_obj_tag(v_tc_x3f_2107_) == 1)
{
lean_object* v_val_2116_; uint8_t v___x_2117_; 
v_val_2116_ = lean_ctor_get(v_tc_x3f_2107_, 0);
v___x_2117_ = l_Lake_MaterializedDep_fixedToolchain(v___x_2097_);
if (v___x_2117_ == 0)
{
uint8_t v___x_2118_; 
v___x_2118_ = l_Lake_ToolchainVer_ble(v_val_2105_, v_val_2116_);
if (v___x_2118_ == 0)
{
lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2127_; 
lean_inc_ref(v_tc_x3f_2107_);
lean_inc_ref(v_clashes_2108_);
lean_inc(v_src_2106_);
v_isSharedCheck_2127_ = !lean_is_exclusive(v_b_2088_);
if (v_isSharedCheck_2127_ == 0)
{
lean_object* v_unused_2128_; lean_object* v_unused_2129_; lean_object* v_unused_2130_; 
v_unused_2128_ = lean_ctor_get(v_b_2088_, 2);
lean_dec(v_unused_2128_);
v_unused_2129_ = lean_ctor_get(v_b_2088_, 1);
lean_dec(v_unused_2129_);
v_unused_2130_ = lean_ctor_get(v_b_2088_, 0);
lean_dec(v_unused_2130_);
v___x_2120_ = v_b_2088_;
v_isShared_2121_ = v_isSharedCheck_2127_;
goto v_resetjp_2119_;
}
else
{
lean_dec(v_b_2088_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2127_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
if (v_fixed_2109_ == 0)
{
uint8_t v___x_2122_; 
v___x_2122_ = l_Lake_ToolchainVer_blt(v_val_2116_, v_val_2105_);
if (v___x_2122_ == 0)
{
lean_inc(v_val_2105_);
lean_del_object(v___x_2120_);
lean_dec_ref_known(v_a_2104_, 1);
goto v___jp_2110_;
}
else
{
lean_object* v_name_2123_; lean_object* v___x_2125_; 
lean_dec_ref_known(v_tc_x3f_2107_, 1);
lean_dec(v_src_2106_);
v_name_2123_ = lean_ctor_get(v_manifestEntry_2099_, 0);
lean_inc(v_name_2123_);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 1, v_a_2104_);
lean_ctor_set(v___x_2120_, 0, v_name_2123_);
v___x_2125_ = v___x_2120_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_name_2123_);
lean_ctor_set(v_reuseFailAlloc_2126_, 1, v_a_2104_);
lean_ctor_set(v_reuseFailAlloc_2126_, 2, v_clashes_2108_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
lean_ctor_set_uint8(v___x_2125_, sizeof(void*)*3, v___x_2117_);
v_a_2092_ = v___x_2125_;
goto v___jp_2091_;
}
}
}
else
{
lean_inc(v_val_2105_);
lean_del_object(v___x_2120_);
lean_dec_ref_known(v_a_2104_, 1);
goto v___jp_2110_;
}
}
}
else
{
lean_dec_ref_known(v_a_2104_, 1);
v_a_2092_ = v_b_2088_;
goto v___jp_2091_;
}
}
else
{
if (v_fixed_2109_ == 0)
{
lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2145_; 
lean_inc_ref(v_tc_x3f_2107_);
lean_inc_ref(v_clashes_2108_);
lean_inc(v_src_2106_);
v_isSharedCheck_2145_ = !lean_is_exclusive(v_b_2088_);
if (v_isSharedCheck_2145_ == 0)
{
lean_object* v_unused_2146_; lean_object* v_unused_2147_; lean_object* v_unused_2148_; 
v_unused_2146_ = lean_ctor_get(v_b_2088_, 2);
lean_dec(v_unused_2146_);
v_unused_2147_ = lean_ctor_get(v_b_2088_, 1);
lean_dec(v_unused_2147_);
v_unused_2148_ = lean_ctor_get(v_b_2088_, 0);
lean_dec(v_unused_2148_);
v___x_2132_ = v_b_2088_;
v_isShared_2133_ = v_isSharedCheck_2145_;
goto v_resetjp_2131_;
}
else
{
lean_dec(v_b_2088_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2145_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
uint8_t v___x_2134_; 
v___x_2134_ = l_Lake_ToolchainVer_ble(v_val_2116_, v_val_2105_);
if (v___x_2134_ == 0)
{
lean_object* v_name_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2139_; 
lean_inc(v_val_2105_);
lean_dec_ref_known(v_a_2104_, 1);
v_name_2135_ = lean_ctor_get(v_manifestEntry_2099_, 0);
lean_inc(v_name_2135_);
v___x_2136_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2136_, 0, v_name_2135_);
lean_ctor_set(v___x_2136_, 1, v_val_2105_);
lean_ctor_set_uint8(v___x_2136_, sizeof(void*)*2, v___x_2117_);
v___x_2137_ = lean_array_push(v_clashes_2108_, v___x_2136_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 2, v___x_2137_);
v___x_2139_ = v___x_2132_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v_src_2106_);
lean_ctor_set(v_reuseFailAlloc_2140_, 1, v_tc_x3f_2107_);
lean_ctor_set(v_reuseFailAlloc_2140_, 2, v___x_2137_);
lean_ctor_set_uint8(v_reuseFailAlloc_2140_, sizeof(void*)*3, v_fixed_2109_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
v_a_2092_ = v___x_2139_;
goto v___jp_2091_;
}
}
else
{
lean_object* v_name_2141_; lean_object* v___x_2143_; 
lean_dec_ref_known(v_tc_x3f_2107_, 1);
lean_dec(v_src_2106_);
v_name_2141_ = lean_ctor_get(v_manifestEntry_2099_, 0);
lean_inc(v_name_2141_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 1, v_a_2104_);
lean_ctor_set(v___x_2132_, 0, v_name_2141_);
v___x_2143_ = v___x_2132_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_name_2141_);
lean_ctor_set(v_reuseFailAlloc_2144_, 1, v_a_2104_);
lean_ctor_set(v_reuseFailAlloc_2144_, 2, v_clashes_2108_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_ctor_set_uint8(v___x_2143_, sizeof(void*)*3, v___x_2117_);
v_a_2092_ = v___x_2143_;
goto v___jp_2091_;
}
}
}
}
else
{
uint8_t v___x_2149_; 
lean_inc_n(v_val_2105_, 2);
lean_dec_ref_known(v_a_2104_, 1);
lean_inc(v_val_2116_);
v___x_2149_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_2116_, v_val_2105_);
if (v___x_2149_ == 0)
{
lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2159_; 
lean_inc_ref(v_tc_x3f_2107_);
lean_inc_ref(v_clashes_2108_);
lean_inc(v_src_2106_);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_b_2088_);
if (v_isSharedCheck_2159_ == 0)
{
lean_object* v_unused_2160_; lean_object* v_unused_2161_; lean_object* v_unused_2162_; 
v_unused_2160_ = lean_ctor_get(v_b_2088_, 2);
lean_dec(v_unused_2160_);
v_unused_2161_ = lean_ctor_get(v_b_2088_, 1);
lean_dec(v_unused_2161_);
v_unused_2162_ = lean_ctor_get(v_b_2088_, 0);
lean_dec(v_unused_2162_);
v___x_2151_ = v_b_2088_;
v_isShared_2152_ = v_isSharedCheck_2159_;
goto v_resetjp_2150_;
}
else
{
lean_dec(v_b_2088_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2159_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v_name_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2157_; 
v_name_2153_ = lean_ctor_get(v_manifestEntry_2099_, 0);
lean_inc(v_name_2153_);
v___x_2154_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2154_, 0, v_name_2153_);
lean_ctor_set(v___x_2154_, 1, v_val_2105_);
lean_ctor_set_uint8(v___x_2154_, sizeof(void*)*2, v___x_2117_);
v___x_2155_ = lean_array_push(v_clashes_2108_, v___x_2154_);
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 2, v___x_2155_);
v___x_2157_ = v___x_2151_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_src_2106_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v_tc_x3f_2107_);
lean_ctor_set(v_reuseFailAlloc_2158_, 2, v___x_2155_);
lean_ctor_set_uint8(v_reuseFailAlloc_2158_, sizeof(void*)*3, v_fixed_2109_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
v_a_2092_ = v___x_2157_;
goto v___jp_2091_;
}
}
}
else
{
lean_dec(v_val_2105_);
v_a_2092_ = v_b_2088_;
goto v___jp_2091_;
}
}
}
}
else
{
lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2171_; 
lean_inc_ref(v_clashes_2108_);
v_isSharedCheck_2171_ = !lean_is_exclusive(v_b_2088_);
if (v_isSharedCheck_2171_ == 0)
{
lean_object* v_unused_2172_; lean_object* v_unused_2173_; lean_object* v_unused_2174_; 
v_unused_2172_ = lean_ctor_get(v_b_2088_, 2);
lean_dec(v_unused_2172_);
v_unused_2173_ = lean_ctor_get(v_b_2088_, 1);
lean_dec(v_unused_2173_);
v_unused_2174_ = lean_ctor_get(v_b_2088_, 0);
lean_dec(v_unused_2174_);
v___x_2164_ = v_b_2088_;
v_isShared_2165_ = v_isSharedCheck_2171_;
goto v_resetjp_2163_;
}
else
{
lean_dec(v_b_2088_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2171_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v_name_2166_; uint8_t v___x_2167_; lean_object* v___x_2169_; 
v_name_2166_ = lean_ctor_get(v_manifestEntry_2099_, 0);
v___x_2167_ = l_Lake_MaterializedDep_fixedToolchain(v___x_2097_);
lean_inc(v_name_2166_);
if (v_isShared_2165_ == 0)
{
lean_ctor_set(v___x_2164_, 1, v_a_2104_);
lean_ctor_set(v___x_2164_, 0, v_name_2166_);
v___x_2169_ = v___x_2164_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_name_2166_);
lean_ctor_set(v_reuseFailAlloc_2170_, 1, v_a_2104_);
lean_ctor_set(v_reuseFailAlloc_2170_, 2, v_clashes_2108_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
lean_ctor_set_uint8(v___x_2169_, sizeof(void*)*3, v___x_2167_);
v_a_2092_ = v___x_2169_;
goto v___jp_2091_;
}
}
}
v___jp_2110_:
{
lean_object* v_name_2111_; uint8_t v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v_name_2111_ = lean_ctor_get(v_manifestEntry_2099_, 0);
v___x_2112_ = l_Lake_MaterializedDep_fixedToolchain(v___x_2097_);
lean_inc(v_name_2111_);
v___x_2113_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2113_, 0, v_name_2111_);
lean_ctor_set(v___x_2113_, 1, v_val_2105_);
lean_ctor_set_uint8(v___x_2113_, sizeof(void*)*2, v___x_2112_);
v___x_2114_ = lean_array_push(v_clashes_2108_, v___x_2113_);
v___x_2115_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2115_, 0, v_src_2106_);
lean_ctor_set(v___x_2115_, 1, v_tc_x3f_2107_);
lean_ctor_set(v___x_2115_, 2, v___x_2114_);
lean_ctor_set_uint8(v___x_2115_, sizeof(void*)*3, v_fixed_2109_);
v_a_2092_ = v___x_2115_;
goto v___jp_2091_;
}
}
else
{
lean_dec(v_a_2104_);
v_a_2092_ = v_b_2088_;
goto v___jp_2091_;
}
}
else
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2187_; 
lean_dec_ref(v_b_2088_);
lean_dec_ref(v___x_2084_);
v_a_2175_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2177_ = v___x_2103_;
v_isShared_2178_ = v_isSharedCheck_2187_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2103_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2187_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2179_; uint8_t v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2185_; 
v___x_2179_ = lean_io_error_to_string(v_a_2175_);
v___x_2180_ = 3;
v___x_2181_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2181_, 0, v___x_2179_);
lean_ctor_set_uint8(v___x_2181_, sizeof(void*)*1, v___x_2180_);
lean_inc_ref(v___y_2089_);
v___x_2182_ = lean_apply_2(v___y_2089_, v___x_2181_, lean_box(0));
v___x_2183_ = lean_box(0);
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 0, v___x_2183_);
v___x_2185_ = v___x_2177_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v___x_2183_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
else
{
lean_object* v___x_2188_; 
lean_dec_ref(v___x_2084_);
v___x_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2188_, 0, v_b_2088_);
return v___x_2188_;
}
v___jp_2091_:
{
size_t v___x_2093_; size_t v___x_2094_; 
v___x_2093_ = ((size_t)1ULL);
v___x_2094_ = lean_usize_add(v_i_2086_, v___x_2093_);
v_i_2086_ = v___x_2094_;
v_b_2088_ = v_a_2092_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1___boxed(lean_object* v___x_2189_, lean_object* v_as_2190_, lean_object* v_i_2191_, lean_object* v_stop_2192_, lean_object* v_b_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_){
_start:
{
size_t v_i_boxed_2196_; size_t v_stop_boxed_2197_; lean_object* v_res_2198_; 
v_i_boxed_2196_ = lean_unbox_usize(v_i_2191_);
lean_dec(v_i_2191_);
v_stop_boxed_2197_ = lean_unbox_usize(v_stop_2192_);
lean_dec(v_stop_2192_);
v_res_2198_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v___x_2189_, v_as_2190_, v_i_boxed_2196_, v_stop_boxed_2197_, v_b_2193_, v___y_2194_);
lean_dec_ref(v___y_2194_);
lean_dec_ref(v_as_2190_);
return v_res_2198_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7(void){
_start:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2209_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4));
v___x_2210_ = lean_unsigned_to_nat(4u);
v___x_2211_ = lean_mk_empty_array_with_capacity(v___x_2210_);
v___x_2212_ = lean_array_push(v___x_2211_, v___x_2209_);
return v___x_2212_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8(void){
_start:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
v___x_2213_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5));
v___x_2214_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7);
v___x_2215_ = lean_array_push(v___x_2214_, v___x_2213_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(lean_object* v_ws_2236_, lean_object* v_rootDeps_2237_, lean_object* v_a_2238_){
_start:
{
lean_object* v___y_2241_; lean_object* v___y_2247_; lean_object* v___y_2248_; lean_object* v___y_2249_; lean_object* v___y_2254_; lean_object* v___y_2255_; uint8_t v___y_2256_; lean_object* v___y_2257_; lean_object* v___y_2258_; lean_object* v___y_2259_; lean_object* v___y_2260_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2270_; uint8_t v___y_2271_; lean_object* v___y_2272_; lean_object* v___y_2273_; lean_object* v_lakeEnv_2276_; lean_object* v_lakeArgs_x3f_2277_; lean_object* v_packages_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v_baseName_2281_; lean_object* v_dir_2282_; lean_object* v_config_2283_; lean_object* v___x_2284_; lean_object* v_rootToolchainFile_2285_; lean_object* v___y_2287_; uint8_t v___y_2288_; lean_object* v___y_2289_; lean_object* v___y_2431_; uint8_t v___y_2432_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v_lakeEnv_2276_ = lean_ctor_get(v_ws_2236_, 0);
lean_inc_ref(v_lakeEnv_2276_);
v_lakeArgs_x3f_2277_ = lean_ctor_get(v_ws_2236_, 3);
lean_inc(v_lakeArgs_x3f_2277_);
v_packages_2278_ = lean_ctor_get(v_ws_2236_, 4);
lean_inc_ref(v_packages_2278_);
lean_dec_ref(v_ws_2236_);
v___x_2279_ = lean_unsigned_to_nat(0u);
v___x_2280_ = lean_array_fget(v_packages_2278_, v___x_2279_);
lean_dec_ref(v_packages_2278_);
v_baseName_2281_ = lean_ctor_get(v___x_2280_, 1);
lean_inc(v_baseName_2281_);
v_dir_2282_ = lean_ctor_get(v___x_2280_, 4);
lean_inc_ref_n(v_dir_2282_, 3);
v_config_2283_ = lean_ctor_get(v___x_2280_, 6);
lean_inc_ref(v_config_2283_);
lean_dec(v___x_2280_);
v___x_2284_ = l_Lake_toolchainFileName;
v_rootToolchainFile_2285_ = l_Lake_joinRelative(v_dir_2282_, v___x_2284_);
v___x_2435_ = l_System_FilePath_join(v_dir_2282_, v___x_2284_);
v___x_2436_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_2435_);
lean_dec_ref(v___x_2435_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2489_; 
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2439_ = v___x_2436_;
v_isShared_2440_ = v_isSharedCheck_2489_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v___x_2436_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2489_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v_src_2442_; lean_object* v_tc_x3f_2443_; lean_object* v_clashes_2444_; uint8_t v_fixed_2445_; uint8_t v_fixedToolchain_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; uint8_t v___x_2471_; 
v_fixedToolchain_2468_ = lean_ctor_get_uint8(v_config_2283_, sizeof(void*)*28 + 6);
lean_dec_ref(v_config_2283_);
v___x_2469_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19));
v___x_2470_ = lean_array_get_size(v_rootDeps_2237_);
v___x_2471_ = lean_nat_dec_lt(v___x_2279_, v___x_2470_);
if (v___x_2471_ == 0)
{
lean_dec_ref(v_dir_2282_);
lean_inc(v_a_2437_);
v_src_2442_ = v_baseName_2281_;
v_tc_x3f_2443_ = v_a_2437_;
v_clashes_2444_ = v___x_2469_;
v_fixed_2445_ = v_fixedToolchain_2468_;
goto v___jp_2441_;
}
else
{
lean_object* v___x_2472_; size_t v___x_2473_; size_t v___x_2474_; lean_object* v___x_2475_; 
lean_inc(v_a_2437_);
v___x_2472_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2472_, 0, v_baseName_2281_);
lean_ctor_set(v___x_2472_, 1, v_a_2437_);
lean_ctor_set(v___x_2472_, 2, v___x_2469_);
lean_ctor_set_uint8(v___x_2472_, sizeof(void*)*3, v_fixedToolchain_2468_);
v___x_2473_ = ((size_t)0ULL);
v___x_2474_ = lean_usize_of_nat(v___x_2470_);
v___x_2475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_2282_, v_rootDeps_2237_, v___x_2473_, v___x_2474_, v___x_2472_, v_a_2238_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; lean_object* v_src_2477_; lean_object* v_tc_x3f_2478_; lean_object* v_clashes_2479_; uint8_t v_fixed_2480_; 
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2476_);
lean_dec_ref_known(v___x_2475_, 1);
v_src_2477_ = lean_ctor_get(v_a_2476_, 0);
lean_inc(v_src_2477_);
v_tc_x3f_2478_ = lean_ctor_get(v_a_2476_, 1);
lean_inc(v_tc_x3f_2478_);
v_clashes_2479_ = lean_ctor_get(v_a_2476_, 2);
lean_inc_ref(v_clashes_2479_);
v_fixed_2480_ = lean_ctor_get_uint8(v_a_2476_, sizeof(void*)*3);
lean_dec(v_a_2476_);
v_src_2442_ = v_src_2477_;
v_tc_x3f_2443_ = v_tc_x3f_2478_;
v_clashes_2444_ = v_clashes_2479_;
v_fixed_2445_ = v_fixed_2480_;
goto v___jp_2441_;
}
else
{
lean_object* v_a_2481_; lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2488_; 
lean_del_object(v___x_2439_);
lean_dec(v_a_2437_);
lean_dec_ref(v_rootToolchainFile_2285_);
lean_dec(v_lakeArgs_x3f_2277_);
lean_dec_ref(v_lakeEnv_2276_);
v_a_2481_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2483_ = v___x_2475_;
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
else
{
lean_inc(v_a_2481_);
lean_dec(v___x_2475_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
v_resetjp_2482_:
{
lean_object* v___x_2486_; 
if (v_isShared_2484_ == 0)
{
v___x_2486_ = v___x_2483_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2481_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
v___jp_2441_:
{
lean_object* v___x_2446_; uint8_t v___x_2447_; 
v___x_2446_ = lean_array_get_size(v_clashes_2444_);
v___x_2447_ = lean_nat_dec_lt(v___x_2279_, v___x_2446_);
if (v___x_2447_ == 0)
{
lean_dec_ref(v_clashes_2444_);
lean_dec(v_src_2442_);
if (lean_obj_tag(v_tc_x3f_2443_) == 1)
{
if (lean_obj_tag(v_a_2437_) == 0)
{
lean_object* v_val_2448_; 
lean_del_object(v___x_2439_);
v_val_2448_ = lean_ctor_get(v_tc_x3f_2443_, 0);
lean_inc(v_val_2448_);
lean_dec_ref_known(v_tc_x3f_2443_, 1);
v___y_2431_ = v_val_2448_;
v___y_2432_ = v___x_2447_;
goto v___jp_2430_;
}
else
{
lean_object* v_val_2449_; lean_object* v_val_2450_; uint8_t v___x_2451_; 
v_val_2449_ = lean_ctor_get(v_tc_x3f_2443_, 0);
lean_inc_n(v_val_2449_, 2);
lean_dec_ref_known(v_tc_x3f_2443_, 1);
v_val_2450_ = lean_ctor_get(v_a_2437_, 0);
lean_inc(v_val_2450_);
lean_dec_ref_known(v_a_2437_, 1);
v___x_2451_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_2450_, v_val_2449_);
if (v___x_2451_ == 0)
{
lean_del_object(v___x_2439_);
v___y_2431_ = v_val_2449_;
v___y_2432_ = v___x_2451_;
goto v___jp_2430_;
}
else
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2456_; 
lean_dec(v_val_2449_);
lean_dec_ref(v_rootToolchainFile_2285_);
lean_dec(v_lakeArgs_x3f_2277_);
lean_dec_ref(v_lakeEnv_2276_);
v___x_2452_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15));
lean_inc_ref(v_a_2238_);
v___x_2453_ = lean_apply_2(v_a_2238_, v___x_2452_, lean_box(0));
v___x_2454_ = lean_box(0);
if (v_isShared_2440_ == 0)
{
lean_ctor_set(v___x_2439_, 0, v___x_2454_);
v___x_2456_ = v___x_2439_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v___x_2454_);
v___x_2456_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
return v___x_2456_;
}
}
}
}
else
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2461_; 
lean_dec(v_tc_x3f_2443_);
lean_dec(v_a_2437_);
lean_dec_ref(v_rootToolchainFile_2285_);
lean_dec(v_lakeArgs_x3f_2277_);
lean_dec_ref(v_lakeEnv_2276_);
v___x_2458_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17));
lean_inc_ref(v_a_2238_);
v___x_2459_ = lean_apply_2(v_a_2238_, v___x_2458_, lean_box(0));
if (v_isShared_2440_ == 0)
{
lean_ctor_set(v___x_2439_, 0, v___x_2459_);
v___x_2461_ = v___x_2439_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v___x_2459_);
v___x_2461_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
return v___x_2461_;
}
}
}
else
{
lean_del_object(v___x_2439_);
lean_dec(v_a_2437_);
lean_dec_ref(v_rootToolchainFile_2285_);
lean_dec(v_lakeArgs_x3f_2277_);
lean_dec_ref(v_lakeEnv_2276_);
if (lean_obj_tag(v_tc_x3f_2443_) == 1)
{
if (v_fixed_2445_ == 0)
{
lean_object* v_val_2463_; lean_object* v___x_2464_; 
v_val_2463_ = lean_ctor_get(v_tc_x3f_2443_, 0);
lean_inc(v_val_2463_);
lean_dec_ref_known(v_tc_x3f_2443_, 1);
v___x_2464_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_2268_ = v_val_2463_;
v___y_2269_ = v_src_2442_;
v___y_2270_ = v_clashes_2444_;
v___y_2271_ = v___x_2447_;
v___y_2272_ = v___x_2446_;
v___y_2273_ = v___x_2464_;
goto v___jp_2267_;
}
else
{
lean_object* v_val_2465_; lean_object* v___x_2466_; 
v_val_2465_ = lean_ctor_get(v_tc_x3f_2443_, 0);
lean_inc(v_val_2465_);
lean_dec_ref_known(v_tc_x3f_2443_, 1);
v___x_2466_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_2268_ = v_val_2465_;
v___y_2269_ = v_src_2442_;
v___y_2270_ = v_clashes_2444_;
v___y_2271_ = v___x_2447_;
v___y_2272_ = v___x_2446_;
v___y_2273_ = v___x_2466_;
goto v___jp_2267_;
}
}
else
{
lean_object* v___x_2467_; 
lean_dec(v_tc_x3f_2443_);
lean_dec(v_src_2442_);
v___x_2467_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18));
v___y_2247_ = v_clashes_2444_;
v___y_2248_ = v___x_2446_;
v___y_2249_ = v___x_2467_;
goto v___jp_2246_;
}
}
}
}
}
else
{
lean_object* v_a_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2502_; 
lean_dec_ref(v_rootToolchainFile_2285_);
lean_dec_ref(v_config_2283_);
lean_dec_ref(v_dir_2282_);
lean_dec(v_baseName_2281_);
lean_dec(v_lakeArgs_x3f_2277_);
lean_dec_ref(v_lakeEnv_2276_);
v_a_2490_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2492_ = v___x_2436_;
v_isShared_2493_ = v_isSharedCheck_2502_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_a_2490_);
lean_dec(v___x_2436_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2502_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2494_; uint8_t v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2500_; 
v___x_2494_ = lean_io_error_to_string(v_a_2490_);
v___x_2495_ = 3;
v___x_2496_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2496_, 0, v___x_2494_);
lean_ctor_set_uint8(v___x_2496_, sizeof(void*)*1, v___x_2495_);
lean_inc_ref(v_a_2238_);
v___x_2497_ = lean_apply_2(v_a_2238_, v___x_2496_, lean_box(0));
v___x_2498_ = lean_box(0);
if (v_isShared_2493_ == 0)
{
lean_ctor_set(v___x_2492_, 0, v___x_2498_);
v___x_2500_ = v___x_2492_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v___x_2498_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
v___jp_2240_:
{
uint8_t v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___x_2242_ = 2;
v___x_2243_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2243_, 0, v___y_2241_);
lean_ctor_set_uint8(v___x_2243_, sizeof(void*)*1, v___x_2242_);
lean_inc_ref(v_a_2238_);
v___x_2244_ = lean_apply_2(v_a_2238_, v___x_2243_, lean_box(0));
v___x_2245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2244_);
return v___x_2245_;
}
v___jp_2246_:
{
size_t v___x_2250_; size_t v___x_2251_; lean_object* v___x_2252_; 
v___x_2250_ = ((size_t)0ULL);
v___x_2251_ = lean_usize_of_nat(v___y_2248_);
v___x_2252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___y_2248_, v___y_2247_, v___x_2250_, v___x_2251_, v___y_2249_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2248_);
v___y_2241_ = v___x_2252_;
goto v___jp_2240_;
}
v___jp_2253_:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
lean_inc_ref(v___y_2259_);
v___x_2261_ = lean_string_append(v___y_2259_, v___y_2260_);
lean_dec_ref(v___y_2260_);
v___x_2262_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2263_ = lean_string_append(v___x_2261_, v___x_2262_);
v___x_2264_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_2255_, v___y_2256_);
v___x_2265_ = lean_string_append(v___x_2263_, v___x_2264_);
lean_dec_ref(v___x_2264_);
v___x_2266_ = lean_string_append(v___x_2265_, v___y_2258_);
if (v___y_2256_ == 0)
{
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2254_);
v___y_2241_ = v___x_2266_;
goto v___jp_2240_;
}
else
{
v___y_2247_ = v___y_2254_;
v___y_2248_ = v___y_2257_;
v___y_2249_ = v___x_2266_;
goto v___jp_2246_;
}
}
v___jp_2267_:
{
lean_object* v___x_2274_; lean_object* v_toString_2275_; 
v___x_2274_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0));
v_toString_2275_ = lean_ctor_get(v___y_2268_, 0);
lean_inc_ref(v_toString_2275_);
lean_dec_ref(v___y_2268_);
v___y_2254_ = v___y_2270_;
v___y_2255_ = v___y_2269_;
v___y_2256_ = v___y_2271_;
v___y_2257_ = v___y_2272_;
v___y_2258_ = v___y_2273_;
v___y_2259_ = v___x_2274_;
v___y_2260_ = v_toString_2275_;
goto v___jp_2253_;
}
v___jp_2286_:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; uint8_t v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; 
lean_inc_ref(v___y_2287_);
v___x_2290_ = lean_string_append(v___y_2287_, v___y_2289_);
v___x_2291_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_2292_ = lean_string_append(v___x_2290_, v___x_2291_);
v___x_2293_ = 1;
v___x_2294_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2294_, 0, v___x_2292_);
lean_ctor_set_uint8(v___x_2294_, sizeof(void*)*1, v___x_2293_);
lean_inc_ref(v_a_2238_);
v___x_2295_ = lean_apply_2(v_a_2238_, v___x_2294_, lean_box(0));
v___x_2296_ = l_IO_FS_writeFile(v_rootToolchainFile_2285_, v___y_2289_);
lean_dec_ref(v_rootToolchainFile_2285_);
if (lean_obj_tag(v___x_2296_) == 0)
{
lean_dec_ref_known(v___x_2296_, 1);
if (lean_obj_tag(v_lakeArgs_x3f_2277_) == 1)
{
lean_object* v_elan_x3f_2297_; 
v_elan_x3f_2297_ = lean_ctor_get(v_lakeEnv_2276_, 2);
if (lean_obj_tag(v_elan_x3f_2297_) == 1)
{
lean_object* v_val_2298_; lean_object* v_val_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v_elan_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; uint8_t v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v_val_2298_ = lean_ctor_get(v_lakeArgs_x3f_2277_, 0);
lean_inc(v_val_2298_);
lean_dec_ref_known(v_lakeArgs_x3f_2277_, 1);
v_val_2299_ = lean_ctor_get(v_elan_x3f_2297_, 0);
v___x_2300_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2));
lean_inc_ref(v_a_2238_);
v___x_2301_ = lean_apply_2(v_a_2238_, v___x_2300_, lean_box(0));
v___x_2302_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3));
v_elan_2303_ = lean_ctor_get(v_val_2299_, 1);
lean_inc_ref(v_elan_2303_);
v___x_2304_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6));
v___x_2305_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8);
v___x_2306_ = lean_array_push(v___x_2305_, v___y_2289_);
v___x_2307_ = lean_array_push(v___x_2306_, v___x_2304_);
v___x_2308_ = l_Array_append___redArg(v___x_2307_, v_val_2298_);
lean_dec(v_val_2298_);
v___x_2309_ = lean_box(0);
v___x_2310_ = l_Lake_Env_noToolchainVars(v_lakeEnv_2276_);
v___x_2311_ = 1;
v___x_2312_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_2312_, 0, v___x_2302_);
lean_ctor_set(v___x_2312_, 1, v_elan_2303_);
lean_ctor_set(v___x_2312_, 2, v___x_2308_);
lean_ctor_set(v___x_2312_, 3, v___x_2309_);
lean_ctor_set(v___x_2312_, 4, v___x_2310_);
lean_ctor_set_uint8(v___x_2312_, sizeof(void*)*5, v___x_2311_);
lean_ctor_set_uint8(v___x_2312_, sizeof(void*)*5 + 1, v___y_2288_);
v___x_2313_ = lean_io_process_spawn(v___x_2312_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v_a_2314_; lean_object* v___x_2315_; 
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_a_2314_);
lean_dec_ref_known(v___x_2313_, 1);
v___x_2315_ = lean_io_process_child_wait(v___x_2302_, v_a_2314_);
lean_dec(v_a_2314_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v_a_2316_; uint32_t v___x_2317_; uint8_t v___x_2318_; lean_object* v___x_2319_; 
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_a_2316_);
lean_dec_ref_known(v___x_2315_, 1);
v___x_2317_ = lean_unbox_uint32(v_a_2316_);
lean_dec(v_a_2316_);
v___x_2318_ = lean_uint32_to_uint8(v___x_2317_);
v___x_2319_ = lean_io_exit(v___x_2318_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2319_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2319_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
else
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2340_; 
v_a_2328_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2340_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2330_ = v___x_2319_;
v_isShared_2331_ = v_isSharedCheck_2340_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2319_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2340_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2332_; uint8_t v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2338_; 
v___x_2332_ = lean_io_error_to_string(v_a_2328_);
v___x_2333_ = 3;
v___x_2334_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2334_, 0, v___x_2332_);
lean_ctor_set_uint8(v___x_2334_, sizeof(void*)*1, v___x_2333_);
lean_inc_ref(v_a_2238_);
v___x_2335_ = lean_apply_2(v_a_2238_, v___x_2334_, lean_box(0));
v___x_2336_ = lean_box(0);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 0, v___x_2336_);
v___x_2338_ = v___x_2330_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v___x_2336_);
v___x_2338_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
return v___x_2338_;
}
}
}
}
else
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2353_; 
v_a_2341_ = lean_ctor_get(v___x_2315_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2315_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2343_ = v___x_2315_;
v_isShared_2344_ = v_isSharedCheck_2353_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2315_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2353_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2345_; uint8_t v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2351_; 
v___x_2345_ = lean_io_error_to_string(v_a_2341_);
v___x_2346_ = 3;
v___x_2347_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2347_, 0, v___x_2345_);
lean_ctor_set_uint8(v___x_2347_, sizeof(void*)*1, v___x_2346_);
lean_inc_ref(v_a_2238_);
v___x_2348_ = lean_apply_2(v_a_2238_, v___x_2347_, lean_box(0));
v___x_2349_ = lean_box(0);
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 0, v___x_2349_);
v___x_2351_ = v___x_2343_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2349_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
}
else
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2366_; 
v_a_2354_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2356_ = v___x_2313_;
v_isShared_2357_ = v_isSharedCheck_2366_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2313_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2366_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2358_; uint8_t v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2364_; 
v___x_2358_ = lean_io_error_to_string(v_a_2354_);
v___x_2359_ = 3;
v___x_2360_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2360_, 0, v___x_2358_);
lean_ctor_set_uint8(v___x_2360_, sizeof(void*)*1, v___x_2359_);
lean_inc_ref(v_a_2238_);
v___x_2361_ = lean_apply_2(v_a_2238_, v___x_2360_, lean_box(0));
v___x_2362_ = lean_box(0);
if (v_isShared_2357_ == 0)
{
lean_ctor_set(v___x_2356_, 0, v___x_2362_);
v___x_2364_ = v___x_2356_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v___x_2362_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
}
}
else
{
lean_object* v___x_2367_; lean_object* v___x_2368_; uint8_t v___x_2369_; lean_object* v___x_2370_; 
lean_dec_ref_known(v_lakeArgs_x3f_2277_, 1);
lean_dec_ref(v___y_2289_);
lean_dec_ref(v_lakeEnv_2276_);
v___x_2367_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10));
lean_inc_ref(v_a_2238_);
v___x_2368_ = lean_apply_2(v_a_2238_, v___x_2367_, lean_box(0));
v___x_2369_ = 4;
v___x_2370_ = lean_io_exit(v___x_2369_);
if (lean_obj_tag(v___x_2370_) == 0)
{
lean_object* v_a_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2378_; 
v_a_2371_ = lean_ctor_get(v___x_2370_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2373_ = v___x_2370_;
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_a_2371_);
lean_dec(v___x_2370_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_a_2371_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
else
{
lean_object* v_a_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2391_; 
v_a_2379_ = lean_ctor_get(v___x_2370_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2381_ = v___x_2370_;
v_isShared_2382_ = v_isSharedCheck_2391_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_a_2379_);
lean_dec(v___x_2370_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2391_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2383_; uint8_t v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2389_; 
v___x_2383_ = lean_io_error_to_string(v_a_2379_);
v___x_2384_ = 3;
v___x_2385_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2385_, 0, v___x_2383_);
lean_ctor_set_uint8(v___x_2385_, sizeof(void*)*1, v___x_2384_);
lean_inc_ref(v_a_2238_);
v___x_2386_ = lean_apply_2(v_a_2238_, v___x_2385_, lean_box(0));
v___x_2387_ = lean_box(0);
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 0, v___x_2387_);
v___x_2389_ = v___x_2381_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2387_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
}
else
{
lean_object* v___x_2392_; lean_object* v___x_2393_; uint8_t v___x_2394_; lean_object* v___x_2395_; 
lean_dec_ref(v___y_2289_);
lean_dec(v_lakeArgs_x3f_2277_);
lean_dec_ref(v_lakeEnv_2276_);
v___x_2392_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12));
lean_inc_ref(v_a_2238_);
v___x_2393_ = lean_apply_2(v_a_2238_, v___x_2392_, lean_box(0));
v___x_2394_ = 4;
v___x_2395_ = lean_io_exit(v___x_2394_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2403_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
v_isSharedCheck_2403_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2398_ = v___x_2395_;
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_a_2396_);
lean_dec(v___x_2395_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2401_; 
if (v_isShared_2399_ == 0)
{
v___x_2401_ = v___x_2398_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v_a_2396_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
}
else
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2416_; 
v_a_2404_ = lean_ctor_get(v___x_2395_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2406_ = v___x_2395_;
v_isShared_2407_ = v_isSharedCheck_2416_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2395_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2416_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2408_; uint8_t v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2414_; 
v___x_2408_ = lean_io_error_to_string(v_a_2404_);
v___x_2409_ = 3;
v___x_2410_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2410_, 0, v___x_2408_);
lean_ctor_set_uint8(v___x_2410_, sizeof(void*)*1, v___x_2409_);
lean_inc_ref(v_a_2238_);
v___x_2411_ = lean_apply_2(v_a_2238_, v___x_2410_, lean_box(0));
v___x_2412_ = lean_box(0);
if (v_isShared_2407_ == 0)
{
lean_ctor_set(v___x_2406_, 0, v___x_2412_);
v___x_2414_ = v___x_2406_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___x_2412_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
}
}
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2429_; 
lean_dec_ref(v___y_2289_);
lean_dec(v_lakeArgs_x3f_2277_);
lean_dec_ref(v_lakeEnv_2276_);
v_a_2417_ = lean_ctor_get(v___x_2296_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2296_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2419_ = v___x_2296_;
v_isShared_2420_ = v_isSharedCheck_2429_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2296_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2429_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2421_; uint8_t v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2427_; 
v___x_2421_ = lean_io_error_to_string(v_a_2417_);
v___x_2422_ = 3;
v___x_2423_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2423_, 0, v___x_2421_);
lean_ctor_set_uint8(v___x_2423_, sizeof(void*)*1, v___x_2422_);
lean_inc_ref(v_a_2238_);
v___x_2424_ = lean_apply_2(v_a_2238_, v___x_2423_, lean_box(0));
v___x_2425_ = lean_box(0);
if (v_isShared_2420_ == 0)
{
lean_ctor_set(v___x_2419_, 0, v___x_2425_);
v___x_2427_ = v___x_2419_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v___x_2425_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
v___jp_2430_:
{
lean_object* v___x_2433_; lean_object* v_toString_2434_; 
v___x_2433_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13));
v_toString_2434_ = lean_ctor_get(v___y_2431_, 0);
lean_inc_ref(v_toString_2434_);
lean_dec_ref(v___y_2431_);
v___y_2287_ = v___x_2433_;
v___y_2288_ = v___y_2432_;
v___y_2289_ = v_toString_2434_;
goto v___jp_2286_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___boxed(lean_object* v_ws_2503_, lean_object* v_rootDeps_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(v_ws_2503_, v_rootDeps_2504_, v_a_2505_);
lean_dec_ref(v_a_2505_);
lean_dec_ref(v_rootDeps_2504_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(lean_object* v_pkg_2508_, lean_object* v_dep_2509_, lean_object* v_ws_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_){
_start:
{
lean_object* v___x_2514_; 
v___x_2514_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_2510_, v_pkg_2508_, v_dep_2509_, v_a_2511_, v_a_2512_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; lean_object* v_fst_2516_; lean_object* v_snd_2517_; lean_object* v___x_2518_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2515_);
lean_dec_ref_known(v___x_2514_, 1);
v_fst_2516_ = lean_ctor_get(v_a_2515_, 0);
lean_inc_n(v_fst_2516_, 2);
v_snd_2517_ = lean_ctor_get(v_a_2515_, 1);
lean_inc(v_snd_2517_);
lean_dec(v_a_2515_);
v___x_2518_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_fst_2516_, v_snd_2517_, v_a_2512_);
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2535_; 
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2521_ = v___x_2518_;
v_isShared_2522_ = v_isSharedCheck_2535_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2518_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2535_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v_snd_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2533_; 
v_snd_2523_ = lean_ctor_get(v_a_2519_, 1);
v_isSharedCheck_2533_ = !lean_is_exclusive(v_a_2519_);
if (v_isSharedCheck_2533_ == 0)
{
lean_object* v_unused_2534_; 
v_unused_2534_ = lean_ctor_get(v_a_2519_, 0);
lean_dec(v_unused_2534_);
v___x_2525_ = v_a_2519_;
v_isShared_2526_ = v_isSharedCheck_2533_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_snd_2523_);
lean_dec(v_a_2519_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2533_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
lean_ctor_set(v___x_2525_, 0, v_fst_2516_);
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_fst_2516_);
lean_ctor_set(v_reuseFailAlloc_2532_, 1, v_snd_2523_);
v___x_2528_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
lean_object* v___x_2530_; 
if (v_isShared_2522_ == 0)
{
lean_ctor_set(v___x_2521_, 0, v___x_2528_);
v___x_2530_ = v___x_2521_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2528_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
}
}
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2543_; 
lean_dec(v_fst_2516_);
v_a_2536_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2538_ = v___x_2518_;
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2518_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2541_; 
if (v_isShared_2539_ == 0)
{
v___x_2541_ = v___x_2538_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_a_2536_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
}
else
{
return v___x_2514_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep___boxed(lean_object* v_pkg_2544_, lean_object* v_dep_2545_, lean_object* v_ws_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(v_pkg_2544_, v_dep_2545_, v_ws_2546_, v_a_2547_, v_a_2548_);
lean_dec_ref(v_a_2548_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(lean_object* v___y_2551_, lean_object* v_ws_2552_, lean_object* v_pkg_2553_, lean_object* v_dep_2554_, lean_object* v_a_2555_){
_start:
{
uint8_t v___y_2558_; lean_object* v___y_2559_; lean_object* v_name_2589_; lean_object* v___x_2590_; 
v_name_2589_ = lean_ctor_get(v_dep_2554_, 0);
v___x_2590_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_2555_, v_name_2589_);
if (lean_obj_tag(v___x_2590_) == 1)
{
lean_object* v_val_2591_; lean_object* v_lakeEnv_2592_; lean_object* v_packages_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v_config_2596_; lean_object* v_dir_2597_; lean_object* v_toWorkspaceConfig_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
lean_dec_ref(v_dep_2554_);
lean_dec_ref(v_pkg_2553_);
v_val_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_val_2591_);
lean_dec_ref_known(v___x_2590_, 1);
v_lakeEnv_2592_ = lean_ctor_get(v_ws_2552_, 0);
lean_inc_ref(v_lakeEnv_2592_);
v_packages_2593_ = lean_ctor_get(v_ws_2552_, 4);
lean_inc_ref(v_packages_2593_);
lean_dec_ref(v_ws_2552_);
v___x_2594_ = lean_unsigned_to_nat(0u);
v___x_2595_ = lean_array_fget(v_packages_2593_, v___x_2594_);
lean_dec_ref(v_packages_2593_);
v_config_2596_ = lean_ctor_get(v___x_2595_, 6);
lean_inc_ref(v_config_2596_);
v_dir_2597_ = lean_ctor_get(v___x_2595_, 4);
lean_inc_ref(v_dir_2597_);
lean_dec(v___x_2595_);
v_toWorkspaceConfig_2598_ = lean_ctor_get(v_config_2596_, 0);
lean_inc_ref(v_toWorkspaceConfig_2598_);
lean_dec_ref(v_config_2596_);
v___x_2599_ = l_System_FilePath_normalize(v_toWorkspaceConfig_2598_);
v___x_2600_ = l_Lake_PackageEntry_materialize(v_val_2591_, v_lakeEnv_2592_, v_dir_2597_, v___x_2599_, v___y_2551_);
lean_dec_ref(v_lakeEnv_2592_);
if (lean_obj_tag(v___x_2600_) == 0)
{
lean_object* v_a_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2609_; 
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2609_ == 0)
{
v___x_2603_ = v___x_2600_;
v_isShared_2604_ = v_isSharedCheck_2609_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_a_2601_);
lean_dec(v___x_2600_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2609_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2605_; lean_object* v___x_2607_; 
v___x_2605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2605_, 0, v_a_2601_);
lean_ctor_set(v___x_2605_, 1, v_a_2555_);
if (v_isShared_2604_ == 0)
{
lean_ctor_set(v___x_2603_, 0, v___x_2605_);
v___x_2607_ = v___x_2603_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v___x_2605_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
return v___x_2607_;
}
}
}
else
{
lean_object* v_a_2610_; lean_object* v___x_2612_; uint8_t v_isShared_2613_; uint8_t v_isSharedCheck_2617_; 
lean_dec(v_a_2555_);
v_a_2610_ = lean_ctor_get(v___x_2600_, 0);
v_isSharedCheck_2617_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2617_ == 0)
{
v___x_2612_ = v___x_2600_;
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
else
{
lean_inc(v_a_2610_);
lean_dec(v___x_2600_);
v___x_2612_ = lean_box(0);
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
v_resetjp_2611_:
{
lean_object* v___x_2615_; 
if (v_isShared_2613_ == 0)
{
v___x_2615_ = v___x_2612_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v_a_2610_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
return v___x_2615_;
}
}
}
}
else
{
lean_object* v_wsIdx_2618_; lean_object* v_relDir_2619_; uint8_t v___y_2621_; lean_object* v___x_2625_; uint8_t v___x_2626_; 
lean_dec(v___x_2590_);
v_wsIdx_2618_ = lean_ctor_get(v_pkg_2553_, 0);
lean_inc(v_wsIdx_2618_);
v_relDir_2619_ = lean_ctor_get(v_pkg_2553_, 5);
lean_inc_ref(v_relDir_2619_);
lean_dec_ref(v_pkg_2553_);
v___x_2625_ = lean_unsigned_to_nat(0u);
v___x_2626_ = lean_nat_dec_eq(v_wsIdx_2618_, v___x_2625_);
lean_dec(v_wsIdx_2618_);
if (v___x_2626_ == 0)
{
uint8_t v___x_2627_; 
v___x_2627_ = 1;
v___y_2621_ = v___x_2627_;
goto v___jp_2620_;
}
else
{
uint8_t v___x_2628_; 
v___x_2628_ = 0;
v___y_2621_ = v___x_2628_;
goto v___jp_2620_;
}
v___jp_2620_:
{
lean_object* v___x_2622_; uint8_t v___x_2623_; 
v___x_2622_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0));
v___x_2623_ = lean_string_dec_eq(v_relDir_2619_, v___x_2622_);
if (v___x_2623_ == 0)
{
lean_object* v___x_2624_; 
v___x_2624_ = l_Lake_joinRelative(v_relDir_2619_, v___x_2622_);
v___y_2558_ = v___y_2621_;
v___y_2559_ = v___x_2624_;
goto v___jp_2557_;
}
else
{
v___y_2558_ = v___y_2621_;
v___y_2559_ = v_relDir_2619_;
goto v___jp_2557_;
}
}
}
v___jp_2557_:
{
lean_object* v_lakeEnv_2560_; lean_object* v_packages_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v_config_2564_; lean_object* v_dir_2565_; lean_object* v_toWorkspaceConfig_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v_lakeEnv_2560_ = lean_ctor_get(v_ws_2552_, 0);
lean_inc_ref(v_lakeEnv_2560_);
v_packages_2561_ = lean_ctor_get(v_ws_2552_, 4);
lean_inc_ref(v_packages_2561_);
lean_dec_ref(v_ws_2552_);
v___x_2562_ = lean_unsigned_to_nat(0u);
v___x_2563_ = lean_array_fget(v_packages_2561_, v___x_2562_);
lean_dec_ref(v_packages_2561_);
v_config_2564_ = lean_ctor_get(v___x_2563_, 6);
lean_inc_ref(v_config_2564_);
v_dir_2565_ = lean_ctor_get(v___x_2563_, 4);
lean_inc_ref(v_dir_2565_);
lean_dec(v___x_2563_);
v_toWorkspaceConfig_2566_ = lean_ctor_get(v_config_2564_, 0);
lean_inc_ref(v_toWorkspaceConfig_2566_);
lean_dec_ref(v_config_2564_);
v___x_2567_ = l_System_FilePath_normalize(v_toWorkspaceConfig_2566_);
v___x_2568_ = l_Lake_Dependency_materialize(v_dep_2554_, v___y_2558_, v_lakeEnv_2560_, v_dir_2565_, v___x_2567_, v___y_2559_, v___y_2551_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2580_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2580_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2571_ = v___x_2568_;
v_isShared_2572_ = v_isSharedCheck_2580_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2568_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2580_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v_manifestEntry_2573_; lean_object* v_name_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2578_; 
v_manifestEntry_2573_ = lean_ctor_get(v_a_2569_, 4);
v_name_2574_ = lean_ctor_get(v_manifestEntry_2573_, 0);
lean_inc_ref(v_manifestEntry_2573_);
lean_inc(v_name_2574_);
v___x_2575_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_2574_, v_manifestEntry_2573_, v_a_2555_);
v___x_2576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2576_, 0, v_a_2569_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
if (v_isShared_2572_ == 0)
{
lean_ctor_set(v___x_2571_, 0, v___x_2576_);
v___x_2578_ = v___x_2571_;
goto v_reusejp_2577_;
}
else
{
lean_object* v_reuseFailAlloc_2579_; 
v_reuseFailAlloc_2579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2579_, 0, v___x_2576_);
v___x_2578_ = v_reuseFailAlloc_2579_;
goto v_reusejp_2577_;
}
v_reusejp_2577_:
{
return v___x_2578_;
}
}
}
else
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2588_; 
lean_dec(v_a_2555_);
v_a_2581_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2583_ = v___x_2568_;
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2568_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2584_ == 0)
{
v___x_2586_ = v___x_2583_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_a_2581_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0___boxed(lean_object* v___y_2629_, lean_object* v_ws_2630_, lean_object* v_pkg_2631_, lean_object* v_dep_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(v___y_2629_, v_ws_2630_, v_pkg_2631_, v_dep_2632_, v_a_2633_);
lean_dec_ref(v___y_2629_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(lean_object* v___y_2636_, lean_object* v_dep_2637_, lean_object* v_a_2638_){
_start:
{
lean_object* v_manifestEntry_2640_; lean_object* v_pkgDir_2641_; lean_object* v_name_2642_; lean_object* v_manifestFile_x3f_2643_; lean_object* v___y_2645_; lean_object* v_fst_2646_; lean_object* v_snd_2647_; lean_object* v___y_2696_; lean_object* v___y_2697_; lean_object* v___y_2698_; lean_object* v_val_2699_; lean_object* v___y_2715_; 
v_manifestEntry_2640_ = lean_ctor_get(v_dep_2637_, 4);
v_pkgDir_2641_ = lean_ctor_get(v_dep_2637_, 0);
v_name_2642_ = lean_ctor_get(v_manifestEntry_2640_, 0);
v_manifestFile_x3f_2643_ = lean_ctor_get(v_manifestEntry_2640_, 3);
if (lean_obj_tag(v_manifestFile_x3f_2643_) == 0)
{
lean_object* v___x_2735_; lean_object* v___x_2736_; 
v___x_2735_ = l_Lake_defaultManifestFile;
lean_inc_ref(v_pkgDir_2641_);
v___x_2736_ = l_Lake_joinRelative(v_pkgDir_2641_, v___x_2735_);
v___y_2715_ = v___x_2736_;
goto v___jp_2714_;
}
else
{
lean_object* v_val_2737_; lean_object* v___x_2738_; 
v_val_2737_ = lean_ctor_get(v_manifestFile_x3f_2643_, 0);
lean_inc(v_val_2737_);
lean_inc_ref(v_pkgDir_2641_);
v___x_2738_ = l_Lake_joinRelative(v_pkgDir_2641_, v_val_2737_);
v___y_2715_ = v___x_2738_;
goto v___jp_2714_;
}
v___jp_2644_:
{
if (lean_obj_tag(v_fst_2646_) == 0)
{
lean_object* v_a_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2677_; 
lean_inc(v_name_2642_);
lean_dec_ref(v_dep_2637_);
v_a_2648_ = lean_ctor_get(v_fst_2646_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v_fst_2646_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2650_ = v_fst_2646_;
v_isShared_2651_ = v_isSharedCheck_2677_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_a_2648_);
lean_dec(v_fst_2646_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2677_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
if (lean_obj_tag(v_a_2648_) == 11)
{
uint8_t v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2662_; 
lean_dec_ref_known(v_a_2648_, 2);
v___x_2652_ = 0;
v___x_2653_ = l_Lean_Name_toString(v_name_2642_, v___x_2652_);
v___x_2654_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0));
v___x_2655_ = lean_string_append(v___x_2653_, v___x_2654_);
v___x_2656_ = lean_string_append(v___x_2655_, v___y_2645_);
lean_dec_ref(v___y_2645_);
v___x_2657_ = 2;
v___x_2658_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2658_, 0, v___x_2656_);
lean_ctor_set_uint8(v___x_2658_, sizeof(void*)*1, v___x_2657_);
v___x_2659_ = lean_apply_2(v___y_2636_, v___x_2658_, lean_box(0));
v___x_2660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2660_, 0, v___x_2659_);
lean_ctor_set(v___x_2660_, 1, v_snd_2647_);
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2660_);
v___x_2662_ = v___x_2650_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v___x_2660_);
v___x_2662_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
return v___x_2662_;
}
}
else
{
uint8_t v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; uint8_t v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2675_; 
lean_dec_ref(v___y_2645_);
v___x_2664_ = 0;
v___x_2665_ = l_Lean_Name_toString(v_name_2642_, v___x_2664_);
v___x_2666_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1));
v___x_2667_ = lean_string_append(v___x_2665_, v___x_2666_);
v___x_2668_ = lean_io_error_to_string(v_a_2648_);
v___x_2669_ = lean_string_append(v___x_2667_, v___x_2668_);
lean_dec_ref(v___x_2668_);
v___x_2670_ = 2;
v___x_2671_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2671_, 0, v___x_2669_);
lean_ctor_set_uint8(v___x_2671_, sizeof(void*)*1, v___x_2670_);
v___x_2672_ = lean_apply_2(v___y_2636_, v___x_2671_, lean_box(0));
v___x_2673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2672_);
lean_ctor_set(v___x_2673_, 1, v_snd_2647_);
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2673_);
v___x_2675_ = v___x_2650_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v___x_2673_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
else
{
lean_object* v_a_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2694_; 
lean_dec_ref(v___y_2645_);
lean_dec_ref(v___y_2636_);
v_a_2678_ = lean_ctor_get(v_fst_2646_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v_fst_2646_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2680_ = v_fst_2646_;
v_isShared_2681_ = v_isSharedCheck_2694_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_a_2678_);
lean_dec(v_fst_2646_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2694_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v_packages_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; uint8_t v___x_2686_; 
v_packages_2682_ = lean_ctor_get(v_a_2678_, 3);
lean_inc_ref(v_packages_2682_);
lean_dec(v_a_2678_);
v___x_2683_ = lean_unsigned_to_nat(0u);
v___x_2684_ = lean_array_get_size(v_packages_2682_);
v___x_2685_ = lean_box(0);
v___x_2686_ = lean_nat_dec_lt(v___x_2683_, v___x_2684_);
if (v___x_2686_ == 0)
{
lean_object* v___x_2687_; lean_object* v___x_2689_; 
lean_dec_ref(v_packages_2682_);
lean_dec_ref(v_dep_2637_);
v___x_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2685_);
lean_ctor_set(v___x_2687_, 1, v_snd_2647_);
if (v_isShared_2681_ == 0)
{
lean_ctor_set_tag(v___x_2680_, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2687_);
v___x_2689_ = v___x_2680_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v___x_2687_);
v___x_2689_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
return v___x_2689_;
}
}
else
{
size_t v___x_2691_; size_t v___x_2692_; lean_object* v___x_2693_; 
lean_del_object(v___x_2680_);
v___x_2691_ = ((size_t)0ULL);
v___x_2692_ = lean_usize_of_nat(v___x_2684_);
v___x_2693_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_2637_, v_packages_2682_, v___x_2691_, v___x_2692_, v___x_2685_, v_snd_2647_);
lean_dec_ref(v_packages_2682_);
return v___x_2693_;
}
}
}
}
v___jp_2695_:
{
lean_object* v___x_2700_; uint8_t v___x_2701_; 
v___x_2700_ = lean_array_get_size(v___y_2696_);
v___x_2701_ = lean_nat_dec_lt(v___y_2697_, v___x_2700_);
if (v___x_2701_ == 0)
{
v___y_2645_ = v___y_2698_;
v_fst_2646_ = v_val_2699_;
v_snd_2647_ = v_a_2638_;
goto v___jp_2644_;
}
else
{
lean_object* v___x_2702_; size_t v___x_2703_; size_t v___x_2704_; lean_object* v___x_2705_; 
v___x_2702_ = lean_box(0);
v___x_2703_ = ((size_t)0ULL);
v___x_2704_ = lean_usize_of_nat(v___x_2700_);
v___x_2705_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___y_2696_, v___x_2703_, v___x_2704_, v___x_2702_, v___y_2636_);
if (lean_obj_tag(v___x_2705_) == 0)
{
lean_dec_ref_known(v___x_2705_, 1);
v___y_2645_ = v___y_2698_;
v_fst_2646_ = v_val_2699_;
v_snd_2647_ = v_a_2638_;
goto v___jp_2644_;
}
else
{
lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2713_; 
lean_dec_ref(v_val_2699_);
lean_dec_ref(v___y_2698_);
lean_dec(v_a_2638_);
lean_dec_ref(v_dep_2637_);
lean_dec_ref(v___y_2636_);
v_a_2706_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2708_ = v___x_2705_;
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v___x_2705_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2711_; 
if (v_isShared_2709_ == 0)
{
v___x_2711_ = v___x_2708_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v_a_2706_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
return v___x_2711_;
}
}
}
}
}
v___jp_2714_:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2716_ = lean_unsigned_to_nat(0u);
v___x_2717_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___y_2715_);
v___x_2718_ = l_Lake_Manifest_load(v___y_2715_);
if (lean_obj_tag(v___x_2718_) == 0)
{
lean_object* v_a_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2726_; 
v_a_2719_ = lean_ctor_get(v___x_2718_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2718_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2721_ = v___x_2718_;
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_a_2719_);
lean_dec(v___x_2718_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
lean_object* v___x_2724_; 
if (v_isShared_2722_ == 0)
{
lean_ctor_set_tag(v___x_2721_, 1);
v___x_2724_ = v___x_2721_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_a_2719_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
v___y_2696_ = v___x_2717_;
v___y_2697_ = v___x_2716_;
v___y_2698_ = v___y_2715_;
v_val_2699_ = v___x_2724_;
goto v___jp_2695_;
}
}
}
else
{
lean_object* v_a_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2734_; 
v_a_2727_ = lean_ctor_get(v___x_2718_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2718_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2729_ = v___x_2718_;
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_a_2727_);
lean_dec(v___x_2718_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2732_; 
if (v_isShared_2730_ == 0)
{
lean_ctor_set_tag(v___x_2729_, 0);
v___x_2732_ = v___x_2729_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v_a_2727_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
v___y_2696_ = v___x_2717_;
v___y_2697_ = v___x_2716_;
v___y_2698_ = v___y_2715_;
v_val_2699_ = v___x_2732_;
goto v___jp_2695_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1___boxed(lean_object* v___y_2739_, lean_object* v_dep_2740_, lean_object* v_a_2741_, lean_object* v_a_2742_){
_start:
{
lean_object* v_res_2743_; 
v_res_2743_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(v___y_2739_, v_dep_2740_, v_a_2741_);
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_){
_start:
{
lean_object* v___x_2750_; 
v___x_2750_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(v___y_2748_, v___y_2746_, v___y_2744_, v___y_2745_, v___y_2747_);
if (lean_obj_tag(v___x_2750_) == 0)
{
lean_object* v_a_2751_; lean_object* v_fst_2752_; lean_object* v_snd_2753_; lean_object* v___x_2754_; 
v_a_2751_ = lean_ctor_get(v___x_2750_, 0);
lean_inc(v_a_2751_);
lean_dec_ref_known(v___x_2750_, 1);
v_fst_2752_ = lean_ctor_get(v_a_2751_, 0);
lean_inc_n(v_fst_2752_, 2);
v_snd_2753_ = lean_ctor_get(v_a_2751_, 1);
lean_inc(v_snd_2753_);
lean_dec(v_a_2751_);
v___x_2754_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(v___y_2748_, v_fst_2752_, v_snd_2753_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2771_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2757_ = v___x_2754_;
v_isShared_2758_ = v_isSharedCheck_2771_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_a_2755_);
lean_dec(v___x_2754_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2771_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v_snd_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2769_; 
v_snd_2759_ = lean_ctor_get(v_a_2755_, 1);
v_isSharedCheck_2769_ = !lean_is_exclusive(v_a_2755_);
if (v_isSharedCheck_2769_ == 0)
{
lean_object* v_unused_2770_; 
v_unused_2770_ = lean_ctor_get(v_a_2755_, 0);
lean_dec(v_unused_2770_);
v___x_2761_ = v_a_2755_;
v_isShared_2762_ = v_isSharedCheck_2769_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_snd_2759_);
lean_dec(v_a_2755_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2769_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v___x_2764_; 
if (v_isShared_2762_ == 0)
{
lean_ctor_set(v___x_2761_, 0, v_fst_2752_);
v___x_2764_ = v___x_2761_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_fst_2752_);
lean_ctor_set(v_reuseFailAlloc_2768_, 1, v_snd_2759_);
v___x_2764_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
lean_object* v___x_2766_; 
if (v_isShared_2758_ == 0)
{
lean_ctor_set(v___x_2757_, 0, v___x_2764_);
v___x_2766_ = v___x_2757_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v___x_2764_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
return v___x_2766_;
}
}
}
}
}
else
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
lean_dec(v_fst_2752_);
v_a_2772_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2774_ = v___x_2754_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v___x_2754_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
else
{
lean_dec_ref(v___y_2748_);
return v___x_2750_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0___boxed(lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v_res_2786_; 
v_res_2786_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(lean_object* v_a_2787_, lean_object* v_ws_2788_, lean_object* v_toUpdate_2789_, lean_object* v_a_2790_){
_start:
{
lean_object* v___y_2793_; lean_object* v___y_2798_; lean_object* v_fst_2799_; lean_object* v_snd_2800_; lean_object* v_packages_2819_; lean_object* v___x_2820_; lean_object* v___y_2822_; lean_object* v___y_2823_; lean_object* v___y_2824_; lean_object* v_val_2825_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v_a_2844_; lean_object* v___x_2846_; lean_object* v_baseName_2847_; lean_object* v_dir_2848_; lean_object* v_config_2849_; lean_object* v_relManifestFile_2850_; lean_object* v_depConfigs_2851_; lean_object* v___y_2853_; lean_object* v___y_2854_; lean_object* v___y_2855_; uint8_t v_fst_2856_; lean_object* v_snd_2857_; lean_object* v_packagesDir_x3f_2888_; lean_object* v___y_2889_; lean_object* v___y_2890_; uint8_t v___x_2911_; lean_object* v_rootName_2912_; lean_object* v_fst_2914_; lean_object* v_snd_2915_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v_val_2982_; lean_object* v___x_2996_; 
v_packages_2819_ = lean_ctor_get(v_ws_2788_, 4);
v___x_2820_ = lean_unsigned_to_nat(0u);
v___x_2846_ = lean_array_fget_borrowed(v_packages_2819_, v___x_2820_);
v_baseName_2847_ = lean_ctor_get(v___x_2846_, 1);
v_dir_2848_ = lean_ctor_get(v___x_2846_, 4);
v_config_2849_ = lean_ctor_get(v___x_2846_, 6);
v_relManifestFile_2850_ = lean_ctor_get(v___x_2846_, 9);
v_depConfigs_2851_ = lean_ctor_get(v___x_2846_, 12);
v___x_2911_ = 0;
lean_inc(v_baseName_2847_);
v_rootName_2912_ = l_Lean_Name_toString(v_baseName_2847_, v___x_2911_);
lean_inc_ref(v_relManifestFile_2850_);
lean_inc_ref(v_dir_2848_);
v___x_2979_ = l_Lake_joinRelative(v_dir_2848_, v_relManifestFile_2850_);
v___x_2980_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_2996_ = l_Lake_Manifest_load(v___x_2979_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3004_; 
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3004_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3004_ == 0)
{
v___x_2999_ = v___x_2996_;
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v___x_2996_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3002_; 
if (v_isShared_3000_ == 0)
{
lean_ctor_set_tag(v___x_2999_, 1);
v___x_3002_ = v___x_2999_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v_a_2997_);
v___x_3002_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
v_val_2982_ = v___x_3002_;
goto v___jp_2981_;
}
}
}
else
{
lean_object* v_a_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3012_; 
v_a_3005_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_3007_ = v___x_2996_;
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_a_3005_);
lean_dec(v___x_2996_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3010_; 
if (v_isShared_3008_ == 0)
{
lean_ctor_set_tag(v___x_3007_, 0);
v___x_3010_ = v___x_3007_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_a_3005_);
v___x_3010_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
v_val_2982_ = v___x_3010_;
goto v___jp_2981_;
}
}
}
v___jp_2792_:
{
lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2794_ = lean_box(0);
v___x_2795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2794_);
lean_ctor_set(v___x_2795_, 1, v___y_2793_);
v___x_2796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2795_);
return v___x_2796_;
}
v___jp_2797_:
{
if (lean_obj_tag(v_fst_2799_) == 0)
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2815_; 
lean_dec(v_snd_2800_);
v_a_2801_ = lean_ctor_get(v_fst_2799_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v_fst_2799_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2803_ = v_fst_2799_;
v_isShared_2804_ = v_isSharedCheck_2815_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v_fst_2799_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2815_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2813_; 
v___x_2805_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0));
v___x_2806_ = lean_io_error_to_string(v_a_2801_);
v___x_2807_ = lean_string_append(v___x_2805_, v___x_2806_);
lean_dec_ref(v___x_2806_);
v___x_2808_ = 3;
v___x_2809_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2809_, 0, v___x_2807_);
lean_ctor_set_uint8(v___x_2809_, sizeof(void*)*1, v___x_2808_);
lean_inc_ref(v___y_2798_);
v___x_2810_ = lean_apply_2(v___y_2798_, v___x_2809_, lean_box(0));
v___x_2811_ = lean_box(0);
if (v_isShared_2804_ == 0)
{
lean_ctor_set_tag(v___x_2803_, 1);
lean_ctor_set(v___x_2803_, 0, v___x_2811_);
v___x_2813_ = v___x_2803_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v___x_2811_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
else
{
lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
lean_dec_ref(v_fst_2799_);
v___x_2816_ = lean_box(0);
v___x_2817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2816_);
lean_ctor_set(v___x_2817_, 1, v_snd_2800_);
v___x_2818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2818_, 0, v___x_2817_);
return v___x_2818_;
}
}
v___jp_2821_:
{
lean_object* v___x_2826_; uint8_t v___x_2827_; 
v___x_2826_ = lean_array_get_size(v___y_2823_);
v___x_2827_ = lean_nat_dec_lt(v___x_2820_, v___x_2826_);
if (v___x_2827_ == 0)
{
v___y_2798_ = v___y_2822_;
v_fst_2799_ = v_val_2825_;
v_snd_2800_ = v___y_2824_;
goto v___jp_2797_;
}
else
{
lean_object* v___x_2828_; size_t v___x_2829_; size_t v___x_2830_; lean_object* v___x_2831_; 
v___x_2828_ = lean_box(0);
v___x_2829_ = ((size_t)0ULL);
v___x_2830_ = lean_usize_of_nat(v___x_2826_);
v___x_2831_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___y_2823_, v___x_2829_, v___x_2830_, v___x_2828_, v___y_2822_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_dec_ref_known(v___x_2831_, 1);
v___y_2798_ = v___y_2822_;
v_fst_2799_ = v_val_2825_;
v_snd_2800_ = v___y_2824_;
goto v___jp_2797_;
}
else
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2839_; 
lean_dec_ref(v_val_2825_);
lean_dec(v___y_2824_);
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2834_ = v___x_2831_;
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___x_2831_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2837_; 
if (v_isShared_2835_ == 0)
{
v___x_2837_ = v___x_2834_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_a_2832_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
}
}
v___jp_2840_:
{
lean_object* v___x_2845_; 
v___x_2845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2845_, 0, v_a_2844_);
v___y_2822_ = v___y_2841_;
v___y_2823_ = v___y_2842_;
v___y_2824_ = v___y_2843_;
v_val_2825_ = v___x_2845_;
goto v___jp_2821_;
}
v___jp_2852_:
{
lean_object* v_toWorkspaceConfig_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; uint8_t v___x_2862_; 
v_toWorkspaceConfig_2858_ = lean_ctor_get(v_config_2849_, 0);
v___x_2859_ = l_System_FilePath_normalize(v___y_2855_);
lean_inc_ref(v_toWorkspaceConfig_2858_);
v___x_2860_ = l_System_FilePath_normalize(v_toWorkspaceConfig_2858_);
lean_inc_ref(v___x_2860_);
v___x_2861_ = l_System_FilePath_normalize(v___x_2860_);
v___x_2862_ = lean_string_dec_eq(v___x_2859_, v___x_2861_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___x_2859_);
if (v___x_2862_ == 0)
{
if (v_fst_2856_ == 0)
{
lean_dec_ref(v___x_2860_);
lean_dec_ref(v___y_2854_);
v___y_2793_ = v_snd_2857_;
goto v___jp_2792_;
}
else
{
lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; uint8_t v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2863_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1));
v___x_2864_ = lean_string_append(v___x_2863_, v___y_2854_);
v___x_2865_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2));
v___x_2866_ = lean_string_append(v___x_2864_, v___x_2865_);
lean_inc_ref(v_dir_2848_);
v___x_2867_ = l_Lake_joinRelative(v_dir_2848_, v___x_2860_);
v___x_2868_ = lean_string_append(v___x_2866_, v___x_2867_);
v___x_2869_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_2870_ = lean_string_append(v___x_2868_, v___x_2869_);
v___x_2871_ = 1;
v___x_2872_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2872_, 0, v___x_2870_);
lean_ctor_set_uint8(v___x_2872_, sizeof(void*)*1, v___x_2871_);
lean_inc_ref(v___y_2853_);
v___x_2873_ = lean_apply_2(v___y_2853_, v___x_2872_, lean_box(0));
v___x_2874_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___x_2867_);
v___x_2875_ = l_Lake_createParentDirs(v___x_2867_);
if (lean_obj_tag(v___x_2875_) == 0)
{
lean_object* v___x_2876_; 
lean_dec_ref_known(v___x_2875_, 1);
v___x_2876_ = lean_io_rename(v___y_2854_, v___x_2867_);
lean_dec_ref(v___x_2867_);
lean_dec_ref(v___y_2854_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2884_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2876_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2879_ = v___x_2876_;
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v___x_2876_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
lean_ctor_set_tag(v___x_2879_, 1);
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
v___y_2822_ = v___y_2853_;
v___y_2823_ = v___x_2874_;
v___y_2824_ = v_snd_2857_;
v_val_2825_ = v___x_2882_;
goto v___jp_2821_;
}
}
}
else
{
lean_object* v_a_2885_; 
v_a_2885_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2885_);
lean_dec_ref_known(v___x_2876_, 1);
v___y_2841_ = v___y_2853_;
v___y_2842_ = v___x_2874_;
v___y_2843_ = v_snd_2857_;
v_a_2844_ = v_a_2885_;
goto v___jp_2840_;
}
}
else
{
lean_object* v_a_2886_; 
lean_dec_ref(v___x_2867_);
lean_dec_ref(v___y_2854_);
v_a_2886_ = lean_ctor_get(v___x_2875_, 0);
lean_inc(v_a_2886_);
lean_dec_ref_known(v___x_2875_, 1);
v___y_2841_ = v___y_2853_;
v___y_2842_ = v___x_2874_;
v___y_2843_ = v_snd_2857_;
v_a_2844_ = v_a_2886_;
goto v___jp_2840_;
}
}
}
else
{
lean_dec_ref(v___x_2860_);
lean_dec_ref(v___y_2854_);
v___y_2793_ = v_snd_2857_;
goto v___jp_2792_;
}
}
v___jp_2887_:
{
if (lean_obj_tag(v_packagesDir_x3f_2888_) == 1)
{
lean_object* v_val_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; uint8_t v___x_2894_; uint8_t v___x_2895_; 
v_val_2891_ = lean_ctor_get(v_packagesDir_x3f_2888_, 0);
lean_inc_n(v_val_2891_, 2);
lean_dec_ref_known(v_packagesDir_x3f_2888_, 1);
lean_inc_ref(v_dir_2848_);
v___x_2892_ = l_Lake_joinRelative(v_dir_2848_, v_val_2891_);
v___x_2893_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_2894_ = l_System_FilePath_pathExists(v___x_2892_);
v___x_2895_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_2895_ == 0)
{
v___y_2853_ = v___y_2890_;
v___y_2854_ = v___x_2892_;
v___y_2855_ = v_val_2891_;
v_fst_2856_ = v___x_2894_;
v_snd_2857_ = v___y_2889_;
goto v___jp_2852_;
}
else
{
lean_object* v___x_2896_; size_t v___x_2897_; size_t v___x_2898_; lean_object* v___x_2899_; 
v___x_2896_ = lean_box(0);
v___x_2897_ = ((size_t)0ULL);
v___x_2898_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
v___x_2899_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___x_2893_, v___x_2897_, v___x_2898_, v___x_2896_, v___y_2890_);
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_dec_ref_known(v___x_2899_, 1);
v___y_2853_ = v___y_2890_;
v___y_2854_ = v___x_2892_;
v___y_2855_ = v_val_2891_;
v_fst_2856_ = v___x_2894_;
v_snd_2857_ = v___y_2889_;
goto v___jp_2852_;
}
else
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2907_; 
lean_dec_ref(v___x_2892_);
lean_dec(v_val_2891_);
lean_dec(v___y_2889_);
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2902_ = v___x_2899_;
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2899_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
}
}
else
{
lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
lean_dec(v_packagesDir_x3f_2888_);
v___x_2908_ = lean_box(0);
v___x_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2908_);
lean_ctor_set(v___x_2909_, 1, v___y_2889_);
v___x_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2909_);
return v___x_2910_;
}
}
v___jp_2913_:
{
if (lean_obj_tag(v_fst_2914_) == 0)
{
lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2963_; 
v_a_2916_ = lean_ctor_get(v_fst_2914_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v_fst_2914_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2918_ = v_fst_2914_;
v_isShared_2919_ = v_isSharedCheck_2963_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_dec(v_fst_2914_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2963_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
if (lean_obj_tag(v_a_2916_) == 11)
{
lean_object* v___x_2920_; lean_object* v___x_2921_; 
lean_dec_ref_known(v_a_2916_, 2);
lean_del_object(v___x_2918_);
v___x_2920_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_2921_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(v_toUpdate_2789_, v_depConfigs_2851_, v___x_2820_, v___x_2920_, v_snd_2915_, v_a_2787_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2943_; 
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2924_ = v___x_2921_;
v_isShared_2925_ = v_isSharedCheck_2943_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_a_2922_);
lean_dec(v___x_2921_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2943_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v_snd_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2941_; 
v_snd_2926_ = lean_ctor_get(v_a_2922_, 1);
v_isSharedCheck_2941_ = !lean_is_exclusive(v_a_2922_);
if (v_isSharedCheck_2941_ == 0)
{
lean_object* v_unused_2942_; 
v_unused_2942_ = lean_ctor_get(v_a_2922_, 0);
lean_dec(v_unused_2942_);
v___x_2928_ = v_a_2922_;
v_isShared_2929_ = v_isSharedCheck_2941_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_snd_2926_);
lean_dec(v_a_2922_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2941_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; uint8_t v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2936_; 
v___x_2930_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8));
v___x_2931_ = lean_string_append(v_rootName_2912_, v___x_2930_);
v___x_2932_ = 1;
v___x_2933_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2933_, 0, v___x_2931_);
lean_ctor_set_uint8(v___x_2933_, sizeof(void*)*1, v___x_2932_);
lean_inc_ref(v_a_2787_);
v___x_2934_ = lean_apply_2(v_a_2787_, v___x_2933_, lean_box(0));
if (v_isShared_2929_ == 0)
{
lean_ctor_set(v___x_2928_, 0, v___x_2934_);
v___x_2936_ = v___x_2928_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v___x_2934_);
lean_ctor_set(v_reuseFailAlloc_2940_, 1, v_snd_2926_);
v___x_2936_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
lean_object* v___x_2938_; 
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 0, v___x_2936_);
v___x_2938_ = v___x_2924_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v___x_2936_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
return v___x_2938_;
}
}
}
}
}
else
{
lean_dec_ref(v_rootName_2912_);
return v___x_2921_;
}
}
else
{
if (lean_obj_tag(v_toUpdate_2789_) == 0)
{
lean_object* v___x_2944_; uint8_t v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2950_; 
lean_dec_ref_known(v_toUpdate_2789_, 5);
lean_dec(v_snd_2915_);
lean_dec_ref(v_rootName_2912_);
v___x_2944_ = lean_io_error_to_string(v_a_2916_);
v___x_2945_ = 3;
v___x_2946_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2946_, 0, v___x_2944_);
lean_ctor_set_uint8(v___x_2946_, sizeof(void*)*1, v___x_2945_);
lean_inc_ref(v_a_2787_);
v___x_2947_ = lean_apply_2(v_a_2787_, v___x_2946_, lean_box(0));
v___x_2948_ = lean_box(0);
if (v_isShared_2919_ == 0)
{
lean_ctor_set_tag(v___x_2918_, 1);
lean_ctor_set(v___x_2918_, 0, v___x_2948_);
v___x_2950_ = v___x_2918_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v___x_2948_);
v___x_2950_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
return v___x_2950_;
}
}
else
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; uint8_t v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2961_; 
v___x_2952_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9));
v___x_2953_ = lean_string_append(v_rootName_2912_, v___x_2952_);
v___x_2954_ = lean_io_error_to_string(v_a_2916_);
v___x_2955_ = lean_string_append(v___x_2953_, v___x_2954_);
lean_dec_ref(v___x_2954_);
v___x_2956_ = 2;
v___x_2957_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2957_, 0, v___x_2955_);
lean_ctor_set_uint8(v___x_2957_, sizeof(void*)*1, v___x_2956_);
lean_inc_ref(v_a_2787_);
v___x_2958_ = lean_apply_2(v_a_2787_, v___x_2957_, lean_box(0));
v___x_2959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2958_);
lean_ctor_set(v___x_2959_, 1, v_snd_2915_);
if (v_isShared_2919_ == 0)
{
lean_ctor_set(v___x_2918_, 0, v___x_2959_);
v___x_2961_ = v___x_2918_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v___x_2959_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
}
}
else
{
lean_object* v_a_2964_; lean_object* v_packagesDir_x3f_2965_; lean_object* v_packages_2966_; lean_object* v___x_2967_; 
lean_dec_ref(v_rootName_2912_);
v_a_2964_ = lean_ctor_get(v_fst_2914_, 0);
lean_inc(v_a_2964_);
lean_dec_ref_known(v_fst_2914_, 1);
v_packagesDir_x3f_2965_ = lean_ctor_get(v_a_2964_, 2);
lean_inc(v_packagesDir_x3f_2965_);
v_packages_2966_ = lean_ctor_get(v_a_2964_, 3);
lean_inc_ref(v_packages_2966_);
lean_dec(v_a_2964_);
lean_inc(v_toUpdate_2789_);
v___x_2967_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(v_toUpdate_2789_, v_depConfigs_2851_, v___x_2820_, v_packages_2966_, v_snd_2915_, v_a_2787_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v_a_2968_; 
v_a_2968_ = lean_ctor_get(v___x_2967_, 0);
lean_inc(v_a_2968_);
lean_dec_ref_known(v___x_2967_, 1);
if (lean_obj_tag(v_toUpdate_2789_) == 0)
{
lean_object* v_snd_2969_; lean_object* v___x_2970_; uint8_t v___x_2971_; 
v_snd_2969_ = lean_ctor_get(v_a_2968_, 1);
lean_inc(v_snd_2969_);
lean_dec(v_a_2968_);
v___x_2970_ = lean_array_get_size(v_packages_2966_);
v___x_2971_ = lean_nat_dec_lt(v___x_2820_, v___x_2970_);
if (v___x_2971_ == 0)
{
lean_dec_ref_known(v_toUpdate_2789_, 5);
lean_dec_ref(v_packages_2966_);
v_packagesDir_x3f_2888_ = v_packagesDir_x3f_2965_;
v___y_2889_ = v_snd_2969_;
v___y_2890_ = v_a_2787_;
goto v___jp_2887_;
}
else
{
lean_object* v___x_2972_; size_t v___x_2973_; size_t v___x_2974_; lean_object* v___x_2975_; 
v___x_2972_ = lean_box(0);
v___x_2973_ = ((size_t)0ULL);
v___x_2974_ = lean_usize_of_nat(v___x_2970_);
v___x_2975_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_2789_, v_packages_2966_, v___x_2973_, v___x_2974_, v___x_2972_, v_snd_2969_);
lean_dec_ref(v_packages_2966_);
lean_dec_ref_known(v_toUpdate_2789_, 5);
if (lean_obj_tag(v___x_2975_) == 0)
{
lean_object* v_a_2976_; lean_object* v_snd_2977_; 
v_a_2976_ = lean_ctor_get(v___x_2975_, 0);
lean_inc(v_a_2976_);
lean_dec_ref_known(v___x_2975_, 1);
v_snd_2977_ = lean_ctor_get(v_a_2976_, 1);
lean_inc(v_snd_2977_);
lean_dec(v_a_2976_);
v_packagesDir_x3f_2888_ = v_packagesDir_x3f_2965_;
v___y_2889_ = v_snd_2977_;
v___y_2890_ = v_a_2787_;
goto v___jp_2887_;
}
else
{
lean_dec(v_packagesDir_x3f_2965_);
return v___x_2975_;
}
}
}
else
{
lean_object* v_snd_2978_; 
lean_dec_ref(v_packages_2966_);
v_snd_2978_ = lean_ctor_get(v_a_2968_, 1);
lean_inc(v_snd_2978_);
lean_dec(v_a_2968_);
v_packagesDir_x3f_2888_ = v_packagesDir_x3f_2965_;
v___y_2889_ = v_snd_2978_;
v___y_2890_ = v_a_2787_;
goto v___jp_2887_;
}
}
else
{
lean_dec_ref(v_packages_2966_);
lean_dec(v_packagesDir_x3f_2965_);
lean_dec(v_toUpdate_2789_);
return v___x_2967_;
}
}
}
v___jp_2981_:
{
uint8_t v___x_2983_; 
v___x_2983_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_2983_ == 0)
{
v_fst_2914_ = v_val_2982_;
v_snd_2915_ = v_a_2790_;
goto v___jp_2913_;
}
else
{
lean_object* v___x_2984_; size_t v___x_2985_; size_t v___x_2986_; lean_object* v___x_2987_; 
v___x_2984_ = lean_box(0);
v___x_2985_ = ((size_t)0ULL);
v___x_2986_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
v___x_2987_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___x_2980_, v___x_2985_, v___x_2986_, v___x_2984_, v_a_2787_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_dec_ref_known(v___x_2987_, 1);
v_fst_2914_ = v_val_2982_;
v_snd_2915_ = v_a_2790_;
goto v___jp_2913_;
}
else
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2995_; 
lean_dec_ref(v_val_2982_);
lean_dec_ref(v_rootName_2912_);
lean_dec(v_a_2790_);
lean_dec(v_toUpdate_2789_);
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2990_ = v___x_2987_;
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v___x_2987_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_a_2988_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___boxed(lean_object* v_a_3013_, lean_object* v_ws_3014_, lean_object* v_toUpdate_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_){
_start:
{
lean_object* v_res_3018_; 
v_res_3018_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_3013_, v_ws_3014_, v_toUpdate_3015_, v_a_3016_);
lean_dec_ref(v_ws_3014_);
lean_dec_ref(v_a_3013_);
return v_res_3018_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(lean_object* v_a_3019_, lean_object* v_ws_3020_, lean_object* v_rootDeps_3021_){
_start:
{
lean_object* v___y_3024_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; uint8_t v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v___y_3053_; lean_object* v___y_3054_; uint8_t v___y_3055_; lean_object* v___y_3056_; lean_object* v_lakeEnv_3059_; lean_object* v_lakeArgs_x3f_3060_; lean_object* v_packages_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v_baseName_3064_; lean_object* v_dir_3065_; lean_object* v_config_3066_; lean_object* v___x_3067_; lean_object* v_rootToolchainFile_3068_; uint8_t v___y_3070_; lean_object* v___y_3071_; lean_object* v___y_3072_; lean_object* v___y_3216_; uint8_t v___y_3217_; lean_object* v___x_3220_; lean_object* v___x_3221_; 
v_lakeEnv_3059_ = lean_ctor_get(v_ws_3020_, 0);
lean_inc_ref(v_lakeEnv_3059_);
v_lakeArgs_x3f_3060_ = lean_ctor_get(v_ws_3020_, 3);
lean_inc(v_lakeArgs_x3f_3060_);
v_packages_3061_ = lean_ctor_get(v_ws_3020_, 4);
lean_inc_ref(v_packages_3061_);
lean_dec_ref(v_ws_3020_);
v___x_3062_ = lean_unsigned_to_nat(0u);
v___x_3063_ = lean_array_fget(v_packages_3061_, v___x_3062_);
lean_dec_ref(v_packages_3061_);
v_baseName_3064_ = lean_ctor_get(v___x_3063_, 1);
lean_inc(v_baseName_3064_);
v_dir_3065_ = lean_ctor_get(v___x_3063_, 4);
lean_inc_ref_n(v_dir_3065_, 3);
v_config_3066_ = lean_ctor_get(v___x_3063_, 6);
lean_inc_ref(v_config_3066_);
lean_dec(v___x_3063_);
v___x_3067_ = l_Lake_toolchainFileName;
v_rootToolchainFile_3068_ = l_Lake_joinRelative(v_dir_3065_, v___x_3067_);
v___x_3220_ = l_System_FilePath_join(v_dir_3065_, v___x_3067_);
v___x_3221_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_3220_);
lean_dec_ref(v___x_3220_);
if (lean_obj_tag(v___x_3221_) == 0)
{
lean_object* v_a_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3274_; 
v_a_3222_ = lean_ctor_get(v___x_3221_, 0);
v_isSharedCheck_3274_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3274_ == 0)
{
v___x_3224_ = v___x_3221_;
v_isShared_3225_ = v_isSharedCheck_3274_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_a_3222_);
lean_dec(v___x_3221_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3274_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v_src_3227_; lean_object* v_tc_x3f_3228_; lean_object* v_clashes_3229_; uint8_t v_fixed_3230_; uint8_t v_fixedToolchain_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; uint8_t v___x_3256_; 
v_fixedToolchain_3253_ = lean_ctor_get_uint8(v_config_3066_, sizeof(void*)*28 + 6);
lean_dec_ref(v_config_3066_);
v___x_3254_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19));
v___x_3255_ = lean_array_get_size(v_rootDeps_3021_);
v___x_3256_ = lean_nat_dec_lt(v___x_3062_, v___x_3255_);
if (v___x_3256_ == 0)
{
lean_dec_ref(v_dir_3065_);
lean_inc(v_a_3222_);
v_src_3227_ = v_baseName_3064_;
v_tc_x3f_3228_ = v_a_3222_;
v_clashes_3229_ = v___x_3254_;
v_fixed_3230_ = v_fixedToolchain_3253_;
goto v___jp_3226_;
}
else
{
lean_object* v___x_3257_; size_t v___x_3258_; size_t v___x_3259_; lean_object* v___x_3260_; 
lean_inc(v_a_3222_);
v___x_3257_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3257_, 0, v_baseName_3064_);
lean_ctor_set(v___x_3257_, 1, v_a_3222_);
lean_ctor_set(v___x_3257_, 2, v___x_3254_);
lean_ctor_set_uint8(v___x_3257_, sizeof(void*)*3, v_fixedToolchain_3253_);
v___x_3258_ = ((size_t)0ULL);
v___x_3259_ = lean_usize_of_nat(v___x_3255_);
v___x_3260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_3065_, v_rootDeps_3021_, v___x_3258_, v___x_3259_, v___x_3257_, v_a_3019_);
if (lean_obj_tag(v___x_3260_) == 0)
{
lean_object* v_a_3261_; lean_object* v_src_3262_; lean_object* v_tc_x3f_3263_; lean_object* v_clashes_3264_; uint8_t v_fixed_3265_; 
v_a_3261_ = lean_ctor_get(v___x_3260_, 0);
lean_inc(v_a_3261_);
lean_dec_ref_known(v___x_3260_, 1);
v_src_3262_ = lean_ctor_get(v_a_3261_, 0);
lean_inc(v_src_3262_);
v_tc_x3f_3263_ = lean_ctor_get(v_a_3261_, 1);
lean_inc(v_tc_x3f_3263_);
v_clashes_3264_ = lean_ctor_get(v_a_3261_, 2);
lean_inc_ref(v_clashes_3264_);
v_fixed_3265_ = lean_ctor_get_uint8(v_a_3261_, sizeof(void*)*3);
lean_dec(v_a_3261_);
v_src_3227_ = v_src_3262_;
v_tc_x3f_3228_ = v_tc_x3f_3263_;
v_clashes_3229_ = v_clashes_3264_;
v_fixed_3230_ = v_fixed_3265_;
goto v___jp_3226_;
}
else
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3273_; 
lean_del_object(v___x_3224_);
lean_dec(v_a_3222_);
lean_dec_ref(v_rootToolchainFile_3068_);
lean_dec(v_lakeArgs_x3f_3060_);
lean_dec_ref(v_lakeEnv_3059_);
v_a_3266_ = lean_ctor_get(v___x_3260_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3260_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3268_ = v___x_3260_;
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v___x_3260_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3271_; 
if (v_isShared_3269_ == 0)
{
v___x_3271_ = v___x_3268_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_a_3266_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
return v___x_3271_;
}
}
}
}
v___jp_3226_:
{
lean_object* v___x_3231_; uint8_t v___x_3232_; 
v___x_3231_ = lean_array_get_size(v_clashes_3229_);
v___x_3232_ = lean_nat_dec_lt(v___x_3062_, v___x_3231_);
if (v___x_3232_ == 0)
{
lean_dec_ref(v_clashes_3229_);
lean_dec(v_src_3227_);
if (lean_obj_tag(v_tc_x3f_3228_) == 1)
{
if (lean_obj_tag(v_a_3222_) == 0)
{
lean_object* v_val_3233_; 
lean_del_object(v___x_3224_);
v_val_3233_ = lean_ctor_get(v_tc_x3f_3228_, 0);
lean_inc(v_val_3233_);
lean_dec_ref_known(v_tc_x3f_3228_, 1);
v___y_3216_ = v_val_3233_;
v___y_3217_ = v___x_3232_;
goto v___jp_3215_;
}
else
{
lean_object* v_val_3234_; lean_object* v_val_3235_; uint8_t v___x_3236_; 
v_val_3234_ = lean_ctor_get(v_tc_x3f_3228_, 0);
lean_inc_n(v_val_3234_, 2);
lean_dec_ref_known(v_tc_x3f_3228_, 1);
v_val_3235_ = lean_ctor_get(v_a_3222_, 0);
lean_inc(v_val_3235_);
lean_dec_ref_known(v_a_3222_, 1);
v___x_3236_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_3235_, v_val_3234_);
if (v___x_3236_ == 0)
{
lean_del_object(v___x_3224_);
v___y_3216_ = v_val_3234_;
v___y_3217_ = v___x_3236_;
goto v___jp_3215_;
}
else
{
lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3241_; 
lean_dec(v_val_3234_);
lean_dec_ref(v_rootToolchainFile_3068_);
lean_dec(v_lakeArgs_x3f_3060_);
lean_dec_ref(v_lakeEnv_3059_);
v___x_3237_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15));
lean_inc_ref(v_a_3019_);
v___x_3238_ = lean_apply_2(v_a_3019_, v___x_3237_, lean_box(0));
v___x_3239_ = lean_box(0);
if (v_isShared_3225_ == 0)
{
lean_ctor_set(v___x_3224_, 0, v___x_3239_);
v___x_3241_ = v___x_3224_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v___x_3239_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
else
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3246_; 
lean_dec(v_tc_x3f_3228_);
lean_dec(v_a_3222_);
lean_dec_ref(v_rootToolchainFile_3068_);
lean_dec(v_lakeArgs_x3f_3060_);
lean_dec_ref(v_lakeEnv_3059_);
v___x_3243_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17));
lean_inc_ref(v_a_3019_);
v___x_3244_ = lean_apply_2(v_a_3019_, v___x_3243_, lean_box(0));
if (v_isShared_3225_ == 0)
{
lean_ctor_set(v___x_3224_, 0, v___x_3244_);
v___x_3246_ = v___x_3224_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v___x_3244_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
else
{
lean_del_object(v___x_3224_);
lean_dec(v_a_3222_);
lean_dec_ref(v_rootToolchainFile_3068_);
lean_dec(v_lakeArgs_x3f_3060_);
lean_dec_ref(v_lakeEnv_3059_);
if (lean_obj_tag(v_tc_x3f_3228_) == 1)
{
if (v_fixed_3230_ == 0)
{
lean_object* v_val_3248_; lean_object* v___x_3249_; 
v_val_3248_ = lean_ctor_get(v_tc_x3f_3228_, 0);
lean_inc(v_val_3248_);
lean_dec_ref_known(v_tc_x3f_3228_, 1);
v___x_3249_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_3051_ = v_clashes_3229_;
v___y_3052_ = v___x_3231_;
v___y_3053_ = v_src_3227_;
v___y_3054_ = v_val_3248_;
v___y_3055_ = v___x_3232_;
v___y_3056_ = v___x_3249_;
goto v___jp_3050_;
}
else
{
lean_object* v_val_3250_; lean_object* v___x_3251_; 
v_val_3250_ = lean_ctor_get(v_tc_x3f_3228_, 0);
lean_inc(v_val_3250_);
lean_dec_ref_known(v_tc_x3f_3228_, 1);
v___x_3251_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_3051_ = v_clashes_3229_;
v___y_3052_ = v___x_3231_;
v___y_3053_ = v_src_3227_;
v___y_3054_ = v_val_3250_;
v___y_3055_ = v___x_3232_;
v___y_3056_ = v___x_3251_;
goto v___jp_3050_;
}
}
else
{
lean_object* v___x_3252_; 
lean_dec(v_tc_x3f_3228_);
lean_dec(v_src_3227_);
v___x_3252_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18));
v___y_3030_ = v_clashes_3229_;
v___y_3031_ = v___x_3231_;
v___y_3032_ = v___x_3252_;
goto v___jp_3029_;
}
}
}
}
}
else
{
lean_object* v_a_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3287_; 
lean_dec_ref(v_rootToolchainFile_3068_);
lean_dec_ref(v_config_3066_);
lean_dec_ref(v_dir_3065_);
lean_dec(v_baseName_3064_);
lean_dec(v_lakeArgs_x3f_3060_);
lean_dec_ref(v_lakeEnv_3059_);
v_a_3275_ = lean_ctor_get(v___x_3221_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3277_ = v___x_3221_;
v_isShared_3278_ = v_isSharedCheck_3287_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_a_3275_);
lean_dec(v___x_3221_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3287_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___x_3279_; uint8_t v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3285_; 
v___x_3279_ = lean_io_error_to_string(v_a_3275_);
v___x_3280_ = 3;
v___x_3281_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3281_, 0, v___x_3279_);
lean_ctor_set_uint8(v___x_3281_, sizeof(void*)*1, v___x_3280_);
lean_inc_ref(v_a_3019_);
v___x_3282_ = lean_apply_2(v_a_3019_, v___x_3281_, lean_box(0));
v___x_3283_ = lean_box(0);
if (v_isShared_3278_ == 0)
{
lean_ctor_set(v___x_3277_, 0, v___x_3283_);
v___x_3285_ = v___x_3277_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v___x_3283_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
v___jp_3023_:
{
uint8_t v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3025_ = 2;
v___x_3026_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3026_, 0, v___y_3024_);
lean_ctor_set_uint8(v___x_3026_, sizeof(void*)*1, v___x_3025_);
lean_inc_ref(v_a_3019_);
v___x_3027_ = lean_apply_2(v_a_3019_, v___x_3026_, lean_box(0));
v___x_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3027_);
return v___x_3028_;
}
v___jp_3029_:
{
size_t v___x_3033_; size_t v___x_3034_; lean_object* v___x_3035_; 
v___x_3033_ = ((size_t)0ULL);
v___x_3034_ = lean_usize_of_nat(v___y_3031_);
v___x_3035_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___y_3031_, v___y_3030_, v___x_3033_, v___x_3034_, v___y_3032_);
lean_dec_ref(v___y_3030_);
lean_dec(v___y_3031_);
v___y_3024_ = v___x_3035_;
goto v___jp_3023_;
}
v___jp_3036_:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
lean_inc_ref(v___y_3037_);
v___x_3044_ = lean_string_append(v___y_3037_, v___y_3043_);
lean_dec_ref(v___y_3043_);
v___x_3045_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_3046_ = lean_string_append(v___x_3044_, v___x_3045_);
v___x_3047_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_3040_, v___y_3041_);
v___x_3048_ = lean_string_append(v___x_3046_, v___x_3047_);
lean_dec_ref(v___x_3047_);
v___x_3049_ = lean_string_append(v___x_3048_, v___y_3042_);
if (v___y_3041_ == 0)
{
lean_dec(v___y_3039_);
lean_dec_ref(v___y_3038_);
v___y_3024_ = v___x_3049_;
goto v___jp_3023_;
}
else
{
v___y_3030_ = v___y_3038_;
v___y_3031_ = v___y_3039_;
v___y_3032_ = v___x_3049_;
goto v___jp_3029_;
}
}
v___jp_3050_:
{
lean_object* v___x_3057_; lean_object* v_toString_3058_; 
v___x_3057_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0));
v_toString_3058_ = lean_ctor_get(v___y_3054_, 0);
lean_inc_ref(v_toString_3058_);
lean_dec_ref(v___y_3054_);
v___y_3037_ = v___x_3057_;
v___y_3038_ = v___y_3051_;
v___y_3039_ = v___y_3052_;
v___y_3040_ = v___y_3053_;
v___y_3041_ = v___y_3055_;
v___y_3042_ = v___y_3056_;
v___y_3043_ = v_toString_3058_;
goto v___jp_3036_;
}
v___jp_3069_:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; uint8_t v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
lean_inc_ref(v___y_3071_);
v___x_3073_ = lean_string_append(v___y_3071_, v___y_3072_);
v___x_3074_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_3075_ = lean_string_append(v___x_3073_, v___x_3074_);
v___x_3076_ = 1;
v___x_3077_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3077_, 0, v___x_3075_);
lean_ctor_set_uint8(v___x_3077_, sizeof(void*)*1, v___x_3076_);
lean_inc_ref(v_a_3019_);
v___x_3078_ = lean_apply_2(v_a_3019_, v___x_3077_, lean_box(0));
v___x_3079_ = l_IO_FS_writeFile(v_rootToolchainFile_3068_, v___y_3072_);
lean_dec_ref(v_rootToolchainFile_3068_);
if (lean_obj_tag(v___x_3079_) == 0)
{
lean_dec_ref_known(v___x_3079_, 1);
if (lean_obj_tag(v_lakeArgs_x3f_3060_) == 1)
{
lean_object* v_elan_x3f_3080_; 
v_elan_x3f_3080_ = lean_ctor_get(v_lakeEnv_3059_, 2);
if (lean_obj_tag(v_elan_x3f_3080_) == 1)
{
lean_object* v_val_3081_; lean_object* v_val_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v_elan_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; uint8_t v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v_val_3081_ = lean_ctor_get(v_lakeArgs_x3f_3060_, 0);
lean_inc(v_val_3081_);
lean_dec_ref_known(v_lakeArgs_x3f_3060_, 1);
v_val_3082_ = lean_ctor_get(v_elan_x3f_3080_, 0);
v___x_3083_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2));
lean_inc_ref(v_a_3019_);
v___x_3084_ = lean_apply_2(v_a_3019_, v___x_3083_, lean_box(0));
v___x_3085_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3));
v_elan_3086_ = lean_ctor_get(v_val_3082_, 1);
lean_inc_ref(v_elan_3086_);
v___x_3087_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6));
v___x_3088_ = lean_unsigned_to_nat(4u);
v___x_3089_ = lean_mk_empty_array_with_capacity(v___x_3088_);
lean_dec_ref(v___x_3089_);
v___x_3090_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8);
v___x_3091_ = lean_array_push(v___x_3090_, v___y_3072_);
v___x_3092_ = lean_array_push(v___x_3091_, v___x_3087_);
v___x_3093_ = l_Array_append___redArg(v___x_3092_, v_val_3081_);
lean_dec(v_val_3081_);
v___x_3094_ = lean_box(0);
v___x_3095_ = l_Lake_Env_noToolchainVars(v_lakeEnv_3059_);
v___x_3096_ = 1;
v___x_3097_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_3097_, 0, v___x_3085_);
lean_ctor_set(v___x_3097_, 1, v_elan_3086_);
lean_ctor_set(v___x_3097_, 2, v___x_3093_);
lean_ctor_set(v___x_3097_, 3, v___x_3094_);
lean_ctor_set(v___x_3097_, 4, v___x_3095_);
lean_ctor_set_uint8(v___x_3097_, sizeof(void*)*5, v___x_3096_);
lean_ctor_set_uint8(v___x_3097_, sizeof(void*)*5 + 1, v___y_3070_);
v___x_3098_ = lean_io_process_spawn(v___x_3097_);
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_object* v_a_3099_; lean_object* v___x_3100_; 
v_a_3099_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_a_3099_);
lean_dec_ref_known(v___x_3098_, 1);
v___x_3100_ = lean_io_process_child_wait(v___x_3085_, v_a_3099_);
lean_dec(v_a_3099_);
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_object* v_a_3101_; uint32_t v___x_3102_; uint8_t v___x_3103_; lean_object* v___x_3104_; 
v_a_3101_ = lean_ctor_get(v___x_3100_, 0);
lean_inc(v_a_3101_);
lean_dec_ref_known(v___x_3100_, 1);
v___x_3102_ = lean_unbox_uint32(v_a_3101_);
lean_dec(v_a_3101_);
v___x_3103_ = lean_uint32_to_uint8(v___x_3102_);
v___x_3104_ = lean_io_exit(v___x_3103_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3112_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3107_ = v___x_3104_;
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3104_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3110_; 
if (v_isShared_3108_ == 0)
{
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_a_3105_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
else
{
lean_object* v_a_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3125_; 
v_a_3113_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3115_ = v___x_3104_;
v_isShared_3116_ = v_isSharedCheck_3125_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_a_3113_);
lean_dec(v___x_3104_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3125_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___x_3117_; uint8_t v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3123_; 
v___x_3117_ = lean_io_error_to_string(v_a_3113_);
v___x_3118_ = 3;
v___x_3119_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3119_, 0, v___x_3117_);
lean_ctor_set_uint8(v___x_3119_, sizeof(void*)*1, v___x_3118_);
lean_inc_ref(v_a_3019_);
v___x_3120_ = lean_apply_2(v_a_3019_, v___x_3119_, lean_box(0));
v___x_3121_ = lean_box(0);
if (v_isShared_3116_ == 0)
{
lean_ctor_set(v___x_3115_, 0, v___x_3121_);
v___x_3123_ = v___x_3115_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v___x_3121_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3138_; 
v_a_3126_ = lean_ctor_get(v___x_3100_, 0);
v_isSharedCheck_3138_ = !lean_is_exclusive(v___x_3100_);
if (v_isSharedCheck_3138_ == 0)
{
v___x_3128_ = v___x_3100_;
v_isShared_3129_ = v_isSharedCheck_3138_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3100_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3138_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3130_; uint8_t v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3136_; 
v___x_3130_ = lean_io_error_to_string(v_a_3126_);
v___x_3131_ = 3;
v___x_3132_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3132_, 0, v___x_3130_);
lean_ctor_set_uint8(v___x_3132_, sizeof(void*)*1, v___x_3131_);
lean_inc_ref(v_a_3019_);
v___x_3133_ = lean_apply_2(v_a_3019_, v___x_3132_, lean_box(0));
v___x_3134_ = lean_box(0);
if (v_isShared_3129_ == 0)
{
lean_ctor_set(v___x_3128_, 0, v___x_3134_);
v___x_3136_ = v___x_3128_;
goto v_reusejp_3135_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v___x_3134_);
v___x_3136_ = v_reuseFailAlloc_3137_;
goto v_reusejp_3135_;
}
v_reusejp_3135_:
{
return v___x_3136_;
}
}
}
}
else
{
lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3151_; 
v_a_3139_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3141_ = v___x_3098_;
v_isShared_3142_ = v_isSharedCheck_3151_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_dec(v___x_3098_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3151_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
lean_object* v___x_3143_; uint8_t v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3149_; 
v___x_3143_ = lean_io_error_to_string(v_a_3139_);
v___x_3144_ = 3;
v___x_3145_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3145_, 0, v___x_3143_);
lean_ctor_set_uint8(v___x_3145_, sizeof(void*)*1, v___x_3144_);
lean_inc_ref(v_a_3019_);
v___x_3146_ = lean_apply_2(v_a_3019_, v___x_3145_, lean_box(0));
v___x_3147_ = lean_box(0);
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 0, v___x_3147_);
v___x_3149_ = v___x_3141_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
}
else
{
lean_object* v___x_3152_; lean_object* v___x_3153_; uint8_t v___x_3154_; lean_object* v___x_3155_; 
lean_dec_ref_known(v_lakeArgs_x3f_3060_, 1);
lean_dec_ref(v___y_3072_);
lean_dec_ref(v_lakeEnv_3059_);
v___x_3152_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10));
lean_inc_ref(v_a_3019_);
v___x_3153_ = lean_apply_2(v_a_3019_, v___x_3152_, lean_box(0));
v___x_3154_ = 4;
v___x_3155_ = lean_io_exit(v___x_3154_);
if (lean_obj_tag(v___x_3155_) == 0)
{
lean_object* v_a_3156_; lean_object* v___x_3158_; uint8_t v_isShared_3159_; uint8_t v_isSharedCheck_3163_; 
v_a_3156_ = lean_ctor_get(v___x_3155_, 0);
v_isSharedCheck_3163_ = !lean_is_exclusive(v___x_3155_);
if (v_isSharedCheck_3163_ == 0)
{
v___x_3158_ = v___x_3155_;
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
else
{
lean_inc(v_a_3156_);
lean_dec(v___x_3155_);
v___x_3158_ = lean_box(0);
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
v_resetjp_3157_:
{
lean_object* v___x_3161_; 
if (v_isShared_3159_ == 0)
{
v___x_3161_ = v___x_3158_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v_a_3156_);
v___x_3161_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
return v___x_3161_;
}
}
}
else
{
lean_object* v_a_3164_; lean_object* v___x_3166_; uint8_t v_isShared_3167_; uint8_t v_isSharedCheck_3176_; 
v_a_3164_ = lean_ctor_get(v___x_3155_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3155_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3166_ = v___x_3155_;
v_isShared_3167_ = v_isSharedCheck_3176_;
goto v_resetjp_3165_;
}
else
{
lean_inc(v_a_3164_);
lean_dec(v___x_3155_);
v___x_3166_ = lean_box(0);
v_isShared_3167_ = v_isSharedCheck_3176_;
goto v_resetjp_3165_;
}
v_resetjp_3165_:
{
lean_object* v___x_3168_; uint8_t v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3174_; 
v___x_3168_ = lean_io_error_to_string(v_a_3164_);
v___x_3169_ = 3;
v___x_3170_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3170_, 0, v___x_3168_);
lean_ctor_set_uint8(v___x_3170_, sizeof(void*)*1, v___x_3169_);
lean_inc_ref(v_a_3019_);
v___x_3171_ = lean_apply_2(v_a_3019_, v___x_3170_, lean_box(0));
v___x_3172_ = lean_box(0);
if (v_isShared_3167_ == 0)
{
lean_ctor_set(v___x_3166_, 0, v___x_3172_);
v___x_3174_ = v___x_3166_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v___x_3172_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
}
}
}
else
{
lean_object* v___x_3177_; lean_object* v___x_3178_; uint8_t v___x_3179_; lean_object* v___x_3180_; 
lean_dec_ref(v___y_3072_);
lean_dec(v_lakeArgs_x3f_3060_);
lean_dec_ref(v_lakeEnv_3059_);
v___x_3177_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12));
lean_inc_ref(v_a_3019_);
v___x_3178_ = lean_apply_2(v_a_3019_, v___x_3177_, lean_box(0));
v___x_3179_ = 4;
v___x_3180_ = lean_io_exit(v___x_3179_);
if (lean_obj_tag(v___x_3180_) == 0)
{
lean_object* v_a_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3188_; 
v_a_3181_ = lean_ctor_get(v___x_3180_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v___x_3180_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3183_ = v___x_3180_;
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_a_3181_);
lean_dec(v___x_3180_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
lean_object* v___x_3186_; 
if (v_isShared_3184_ == 0)
{
v___x_3186_ = v___x_3183_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v_a_3181_);
v___x_3186_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
return v___x_3186_;
}
}
}
else
{
lean_object* v_a_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3201_; 
v_a_3189_ = lean_ctor_get(v___x_3180_, 0);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___x_3180_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3191_ = v___x_3180_;
v_isShared_3192_ = v_isSharedCheck_3201_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_a_3189_);
lean_dec(v___x_3180_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3201_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3193_; uint8_t v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3199_; 
v___x_3193_ = lean_io_error_to_string(v_a_3189_);
v___x_3194_ = 3;
v___x_3195_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3195_, 0, v___x_3193_);
lean_ctor_set_uint8(v___x_3195_, sizeof(void*)*1, v___x_3194_);
lean_inc_ref(v_a_3019_);
v___x_3196_ = lean_apply_2(v_a_3019_, v___x_3195_, lean_box(0));
v___x_3197_ = lean_box(0);
if (v_isShared_3192_ == 0)
{
lean_ctor_set(v___x_3191_, 0, v___x_3197_);
v___x_3199_ = v___x_3191_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v___x_3197_);
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
}
else
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3214_; 
lean_dec_ref(v___y_3072_);
lean_dec(v_lakeArgs_x3f_3060_);
lean_dec_ref(v_lakeEnv_3059_);
v_a_3202_ = lean_ctor_get(v___x_3079_, 0);
v_isSharedCheck_3214_ = !lean_is_exclusive(v___x_3079_);
if (v_isSharedCheck_3214_ == 0)
{
v___x_3204_ = v___x_3079_;
v_isShared_3205_ = v_isSharedCheck_3214_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3079_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3214_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3206_; uint8_t v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3212_; 
v___x_3206_ = lean_io_error_to_string(v_a_3202_);
v___x_3207_ = 3;
v___x_3208_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3208_, 0, v___x_3206_);
lean_ctor_set_uint8(v___x_3208_, sizeof(void*)*1, v___x_3207_);
lean_inc_ref(v_a_3019_);
v___x_3209_ = lean_apply_2(v_a_3019_, v___x_3208_, lean_box(0));
v___x_3210_ = lean_box(0);
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 0, v___x_3210_);
v___x_3212_ = v___x_3204_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v___x_3210_);
v___x_3212_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
return v___x_3212_;
}
}
}
}
v___jp_3215_:
{
lean_object* v___x_3218_; lean_object* v_toString_3219_; 
v___x_3218_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13));
v_toString_3219_ = lean_ctor_get(v___y_3216_, 0);
lean_inc_ref(v_toString_3219_);
lean_dec_ref(v___y_3216_);
v___y_3070_ = v___y_3217_;
v___y_3071_ = v___x_3218_;
v___y_3072_ = v_toString_3219_;
goto v___jp_3069_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___boxed(lean_object* v_a_3288_, lean_object* v_ws_3289_, lean_object* v_rootDeps_3290_, lean_object* v_a_3291_){
_start:
{
lean_object* v_res_3292_; 
v_res_3292_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(v_a_3288_, v_ws_3289_, v_rootDeps_3290_);
lean_dec_ref(v_rootDeps_3290_);
lean_dec_ref(v_a_3288_);
return v_res_3292_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4_spec__6___redArg(lean_object* v_msg_3293_){
_start:
{
lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3294_ = lean_box(1);
v___x_3295_ = lean_panic_fn_borrowed(v___x_3294_, v_msg_3293_);
return v___x_3295_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; 
v___x_3299_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__2));
v___x_3300_ = lean_unsigned_to_nat(35u);
v___x_3301_ = lean_unsigned_to_nat(182u);
v___x_3302_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__1));
v___x_3303_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__0));
v___x_3304_ = l_mkPanicMessageWithDecl(v___x_3303_, v___x_3302_, v___x_3301_, v___x_3300_, v___x_3299_);
return v___x_3304_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__4(void){
_start:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3305_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__2));
v___x_3306_ = lean_unsigned_to_nat(21u);
v___x_3307_ = lean_unsigned_to_nat(183u);
v___x_3308_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__1));
v___x_3309_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__0));
v___x_3310_ = l_mkPanicMessageWithDecl(v___x_3309_, v___x_3308_, v___x_3307_, v___x_3306_, v___x_3305_);
return v___x_3310_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__7(void){
_start:
{
lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; 
v___x_3313_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__6));
v___x_3314_ = lean_unsigned_to_nat(35u);
v___x_3315_ = lean_unsigned_to_nat(276u);
v___x_3316_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__5));
v___x_3317_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__0));
v___x_3318_ = l_mkPanicMessageWithDecl(v___x_3317_, v___x_3316_, v___x_3315_, v___x_3314_, v___x_3313_);
return v___x_3318_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__8(void){
_start:
{
lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; 
v___x_3319_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__6));
v___x_3320_ = lean_unsigned_to_nat(21u);
v___x_3321_ = lean_unsigned_to_nat(277u);
v___x_3322_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__5));
v___x_3323_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__0));
v___x_3324_ = l_mkPanicMessageWithDecl(v___x_3323_, v___x_3322_, v___x_3321_, v___x_3320_, v___x_3319_);
return v___x_3324_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(lean_object* v_k_3325_, lean_object* v_v_3326_, lean_object* v_t_3327_){
_start:
{
if (lean_obj_tag(v_t_3327_) == 0)
{
lean_object* v_size_3328_; lean_object* v_k_3329_; lean_object* v_v_3330_; lean_object* v_l_3331_; lean_object* v_r_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3688_; 
v_size_3328_ = lean_ctor_get(v_t_3327_, 0);
v_k_3329_ = lean_ctor_get(v_t_3327_, 1);
v_v_3330_ = lean_ctor_get(v_t_3327_, 2);
v_l_3331_ = lean_ctor_get(v_t_3327_, 3);
v_r_3332_ = lean_ctor_get(v_t_3327_, 4);
v_isSharedCheck_3688_ = !lean_is_exclusive(v_t_3327_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3334_ = v_t_3327_;
v_isShared_3335_ = v_isSharedCheck_3688_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_r_3332_);
lean_inc(v_l_3331_);
lean_inc(v_v_3330_);
lean_inc(v_k_3329_);
lean_inc(v_size_3328_);
lean_dec(v_t_3327_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3688_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
uint8_t v___x_3336_; 
v___x_3336_ = lean_string_compare(v_k_3325_, v_k_3329_);
switch(v___x_3336_)
{
case 0:
{
lean_object* v___x_3337_; 
lean_dec(v_size_3328_);
v___x_3337_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(v_k_3325_, v_v_3326_, v_l_3331_);
if (lean_obj_tag(v_r_3332_) == 0)
{
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_size_3338_; lean_object* v_size_3339_; lean_object* v_k_3340_; lean_object* v_v_3341_; lean_object* v_l_3342_; lean_object* v_r_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; uint8_t v___x_3346_; 
v_size_3338_ = lean_ctor_get(v_r_3332_, 0);
v_size_3339_ = lean_ctor_get(v___x_3337_, 0);
v_k_3340_ = lean_ctor_get(v___x_3337_, 1);
v_v_3341_ = lean_ctor_get(v___x_3337_, 2);
v_l_3342_ = lean_ctor_get(v___x_3337_, 3);
v_r_3343_ = lean_ctor_get(v___x_3337_, 4);
lean_inc(v_r_3343_);
v___x_3344_ = lean_unsigned_to_nat(3u);
v___x_3345_ = lean_nat_mul(v___x_3344_, v_size_3338_);
v___x_3346_ = lean_nat_dec_lt(v___x_3345_, v_size_3339_);
lean_dec(v___x_3345_);
if (v___x_3346_ == 0)
{
lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3351_; 
lean_dec(v_r_3343_);
v___x_3347_ = lean_unsigned_to_nat(1u);
v___x_3348_ = lean_nat_add(v___x_3347_, v_size_3339_);
v___x_3349_ = lean_nat_add(v___x_3348_, v_size_3338_);
lean_dec(v___x_3348_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 3, v___x_3337_);
lean_ctor_set(v___x_3334_, 0, v___x_3349_);
v___x_3351_ = v___x_3334_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v___x_3349_);
lean_ctor_set(v_reuseFailAlloc_3352_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3352_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3352_, 3, v___x_3337_);
lean_ctor_set(v_reuseFailAlloc_3352_, 4, v_r_3332_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
return v___x_3351_;
}
}
else
{
lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3424_; 
lean_inc(v_l_3342_);
lean_inc(v_v_3341_);
lean_inc(v_k_3340_);
lean_inc(v_size_3339_);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3424_ == 0)
{
lean_object* v_unused_3425_; lean_object* v_unused_3426_; lean_object* v_unused_3427_; lean_object* v_unused_3428_; lean_object* v_unused_3429_; 
v_unused_3425_ = lean_ctor_get(v___x_3337_, 4);
lean_dec(v_unused_3425_);
v_unused_3426_ = lean_ctor_get(v___x_3337_, 3);
lean_dec(v_unused_3426_);
v_unused_3427_ = lean_ctor_get(v___x_3337_, 2);
lean_dec(v_unused_3427_);
v_unused_3428_ = lean_ctor_get(v___x_3337_, 1);
lean_dec(v_unused_3428_);
v_unused_3429_ = lean_ctor_get(v___x_3337_, 0);
lean_dec(v_unused_3429_);
v___x_3354_ = v___x_3337_;
v_isShared_3355_ = v_isSharedCheck_3424_;
goto v_resetjp_3353_;
}
else
{
lean_dec(v___x_3337_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3424_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
if (lean_obj_tag(v_l_3342_) == 0)
{
if (lean_obj_tag(v_r_3343_) == 0)
{
lean_object* v_size_3356_; lean_object* v_size_3357_; lean_object* v_k_3358_; lean_object* v_v_3359_; lean_object* v_l_3360_; lean_object* v_r_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; uint8_t v___x_3364_; 
v_size_3356_ = lean_ctor_get(v_l_3342_, 0);
v_size_3357_ = lean_ctor_get(v_r_3343_, 0);
v_k_3358_ = lean_ctor_get(v_r_3343_, 1);
v_v_3359_ = lean_ctor_get(v_r_3343_, 2);
v_l_3360_ = lean_ctor_get(v_r_3343_, 3);
v_r_3361_ = lean_ctor_get(v_r_3343_, 4);
v___x_3362_ = lean_unsigned_to_nat(2u);
v___x_3363_ = lean_nat_mul(v___x_3362_, v_size_3356_);
v___x_3364_ = lean_nat_dec_lt(v_size_3357_, v___x_3363_);
lean_dec(v___x_3363_);
if (v___x_3364_ == 0)
{
lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3394_; 
lean_inc(v_r_3361_);
lean_inc(v_l_3360_);
lean_inc(v_v_3359_);
lean_inc(v_k_3358_);
v_isSharedCheck_3394_ = !lean_is_exclusive(v_r_3343_);
if (v_isSharedCheck_3394_ == 0)
{
lean_object* v_unused_3395_; lean_object* v_unused_3396_; lean_object* v_unused_3397_; lean_object* v_unused_3398_; lean_object* v_unused_3399_; 
v_unused_3395_ = lean_ctor_get(v_r_3343_, 4);
lean_dec(v_unused_3395_);
v_unused_3396_ = lean_ctor_get(v_r_3343_, 3);
lean_dec(v_unused_3396_);
v_unused_3397_ = lean_ctor_get(v_r_3343_, 2);
lean_dec(v_unused_3397_);
v_unused_3398_ = lean_ctor_get(v_r_3343_, 1);
lean_dec(v_unused_3398_);
v_unused_3399_ = lean_ctor_get(v_r_3343_, 0);
lean_dec(v_unused_3399_);
v___x_3366_ = v_r_3343_;
v_isShared_3367_ = v_isSharedCheck_3394_;
goto v_resetjp_3365_;
}
else
{
lean_dec(v_r_3343_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3394_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___y_3372_; lean_object* v___y_3373_; lean_object* v___y_3374_; lean_object* v___x_3382_; lean_object* v___y_3384_; 
v___x_3368_ = lean_unsigned_to_nat(1u);
v___x_3369_ = lean_nat_add(v___x_3368_, v_size_3339_);
lean_dec(v_size_3339_);
v___x_3370_ = lean_nat_add(v___x_3369_, v_size_3338_);
lean_dec(v___x_3369_);
v___x_3382_ = lean_nat_add(v___x_3368_, v_size_3356_);
if (lean_obj_tag(v_l_3360_) == 0)
{
lean_object* v_size_3392_; 
v_size_3392_ = lean_ctor_get(v_l_3360_, 0);
lean_inc(v_size_3392_);
v___y_3384_ = v_size_3392_;
goto v___jp_3383_;
}
else
{
lean_object* v___x_3393_; 
v___x_3393_ = lean_unsigned_to_nat(0u);
v___y_3384_ = v___x_3393_;
goto v___jp_3383_;
}
v___jp_3371_:
{
lean_object* v___x_3375_; lean_object* v___x_3377_; 
v___x_3375_ = lean_nat_add(v___y_3373_, v___y_3374_);
lean_dec(v___y_3374_);
lean_dec(v___y_3373_);
if (v_isShared_3367_ == 0)
{
lean_ctor_set(v___x_3366_, 4, v_r_3332_);
lean_ctor_set(v___x_3366_, 3, v_r_3361_);
lean_ctor_set(v___x_3366_, 2, v_v_3330_);
lean_ctor_set(v___x_3366_, 1, v_k_3329_);
lean_ctor_set(v___x_3366_, 0, v___x_3375_);
v___x_3377_ = v___x_3366_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v___x_3375_);
lean_ctor_set(v_reuseFailAlloc_3381_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3381_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3381_, 3, v_r_3361_);
lean_ctor_set(v_reuseFailAlloc_3381_, 4, v_r_3332_);
v___x_3377_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
lean_object* v___x_3379_; 
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 4, v___x_3377_);
lean_ctor_set(v___x_3354_, 3, v___y_3372_);
lean_ctor_set(v___x_3354_, 2, v_v_3359_);
lean_ctor_set(v___x_3354_, 1, v_k_3358_);
lean_ctor_set(v___x_3354_, 0, v___x_3370_);
v___x_3379_ = v___x_3354_;
goto v_reusejp_3378_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v___x_3370_);
lean_ctor_set(v_reuseFailAlloc_3380_, 1, v_k_3358_);
lean_ctor_set(v_reuseFailAlloc_3380_, 2, v_v_3359_);
lean_ctor_set(v_reuseFailAlloc_3380_, 3, v___y_3372_);
lean_ctor_set(v_reuseFailAlloc_3380_, 4, v___x_3377_);
v___x_3379_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3378_;
}
v_reusejp_3378_:
{
return v___x_3379_;
}
}
}
v___jp_3383_:
{
lean_object* v___x_3385_; lean_object* v___x_3387_; 
v___x_3385_ = lean_nat_add(v___x_3382_, v___y_3384_);
lean_dec(v___y_3384_);
lean_dec(v___x_3382_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v_l_3360_);
lean_ctor_set(v___x_3334_, 3, v_l_3342_);
lean_ctor_set(v___x_3334_, 2, v_v_3341_);
lean_ctor_set(v___x_3334_, 1, v_k_3340_);
lean_ctor_set(v___x_3334_, 0, v___x_3385_);
v___x_3387_ = v___x_3334_;
goto v_reusejp_3386_;
}
else
{
lean_object* v_reuseFailAlloc_3391_; 
v_reuseFailAlloc_3391_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3391_, 0, v___x_3385_);
lean_ctor_set(v_reuseFailAlloc_3391_, 1, v_k_3340_);
lean_ctor_set(v_reuseFailAlloc_3391_, 2, v_v_3341_);
lean_ctor_set(v_reuseFailAlloc_3391_, 3, v_l_3342_);
lean_ctor_set(v_reuseFailAlloc_3391_, 4, v_l_3360_);
v___x_3387_ = v_reuseFailAlloc_3391_;
goto v_reusejp_3386_;
}
v_reusejp_3386_:
{
lean_object* v___x_3388_; 
v___x_3388_ = lean_nat_add(v___x_3368_, v_size_3338_);
if (lean_obj_tag(v_r_3361_) == 0)
{
lean_object* v_size_3389_; 
v_size_3389_ = lean_ctor_get(v_r_3361_, 0);
lean_inc(v_size_3389_);
v___y_3372_ = v___x_3387_;
v___y_3373_ = v___x_3388_;
v___y_3374_ = v_size_3389_;
goto v___jp_3371_;
}
else
{
lean_object* v___x_3390_; 
v___x_3390_ = lean_unsigned_to_nat(0u);
v___y_3372_ = v___x_3387_;
v___y_3373_ = v___x_3388_;
v___y_3374_ = v___x_3390_;
goto v___jp_3371_;
}
}
}
}
}
else
{
lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3406_; 
lean_del_object(v___x_3334_);
v___x_3400_ = lean_unsigned_to_nat(1u);
v___x_3401_ = lean_nat_add(v___x_3400_, v_size_3339_);
lean_dec(v_size_3339_);
v___x_3402_ = lean_nat_add(v___x_3401_, v_size_3338_);
lean_dec(v___x_3401_);
v___x_3403_ = lean_nat_add(v___x_3400_, v_size_3338_);
v___x_3404_ = lean_nat_add(v___x_3403_, v_size_3357_);
lean_dec(v___x_3403_);
lean_inc_ref(v_r_3332_);
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 4, v_r_3332_);
lean_ctor_set(v___x_3354_, 3, v_r_3343_);
lean_ctor_set(v___x_3354_, 2, v_v_3330_);
lean_ctor_set(v___x_3354_, 1, v_k_3329_);
lean_ctor_set(v___x_3354_, 0, v___x_3404_);
v___x_3406_ = v___x_3354_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v___x_3404_);
lean_ctor_set(v_reuseFailAlloc_3419_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3419_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3419_, 3, v_r_3343_);
lean_ctor_set(v_reuseFailAlloc_3419_, 4, v_r_3332_);
v___x_3406_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3413_; 
v_isSharedCheck_3413_ = !lean_is_exclusive(v_r_3332_);
if (v_isSharedCheck_3413_ == 0)
{
lean_object* v_unused_3414_; lean_object* v_unused_3415_; lean_object* v_unused_3416_; lean_object* v_unused_3417_; lean_object* v_unused_3418_; 
v_unused_3414_ = lean_ctor_get(v_r_3332_, 4);
lean_dec(v_unused_3414_);
v_unused_3415_ = lean_ctor_get(v_r_3332_, 3);
lean_dec(v_unused_3415_);
v_unused_3416_ = lean_ctor_get(v_r_3332_, 2);
lean_dec(v_unused_3416_);
v_unused_3417_ = lean_ctor_get(v_r_3332_, 1);
lean_dec(v_unused_3417_);
v_unused_3418_ = lean_ctor_get(v_r_3332_, 0);
lean_dec(v_unused_3418_);
v___x_3408_ = v_r_3332_;
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
else
{
lean_dec(v_r_3332_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3411_; 
if (v_isShared_3409_ == 0)
{
lean_ctor_set(v___x_3408_, 4, v___x_3406_);
lean_ctor_set(v___x_3408_, 3, v_l_3342_);
lean_ctor_set(v___x_3408_, 2, v_v_3341_);
lean_ctor_set(v___x_3408_, 1, v_k_3340_);
lean_ctor_set(v___x_3408_, 0, v___x_3402_);
v___x_3411_ = v___x_3408_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v___x_3402_);
lean_ctor_set(v_reuseFailAlloc_3412_, 1, v_k_3340_);
lean_ctor_set(v_reuseFailAlloc_3412_, 2, v_v_3341_);
lean_ctor_set(v_reuseFailAlloc_3412_, 3, v_l_3342_);
lean_ctor_set(v_reuseFailAlloc_3412_, 4, v___x_3406_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
}
}
}
else
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
lean_dec_ref_known(v_l_3342_, 5);
lean_del_object(v___x_3354_);
lean_dec(v_v_3341_);
lean_dec(v_k_3340_);
lean_dec(v_size_3339_);
lean_dec_ref_known(v_r_3332_, 5);
lean_del_object(v___x_3334_);
lean_dec(v_v_3330_);
lean_dec(v_k_3329_);
v___x_3420_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__3);
v___x_3421_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4_spec__6___redArg(v___x_3420_);
return v___x_3421_;
}
}
else
{
lean_object* v___x_3422_; lean_object* v___x_3423_; 
lean_del_object(v___x_3354_);
lean_dec(v_r_3343_);
lean_dec(v_v_3341_);
lean_dec(v_k_3340_);
lean_dec(v_size_3339_);
lean_dec_ref_known(v_r_3332_, 5);
lean_del_object(v___x_3334_);
lean_dec(v_v_3330_);
lean_dec(v_k_3329_);
v___x_3422_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__4);
v___x_3423_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4_spec__6___redArg(v___x_3422_);
return v___x_3423_;
}
}
}
}
else
{
lean_object* v_size_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3434_; 
v_size_3430_ = lean_ctor_get(v_r_3332_, 0);
v___x_3431_ = lean_unsigned_to_nat(1u);
v___x_3432_ = lean_nat_add(v___x_3431_, v_size_3430_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 3, v___x_3337_);
lean_ctor_set(v___x_3334_, 0, v___x_3432_);
v___x_3434_ = v___x_3334_;
goto v_reusejp_3433_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v___x_3432_);
lean_ctor_set(v_reuseFailAlloc_3435_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3435_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3435_, 3, v___x_3337_);
lean_ctor_set(v_reuseFailAlloc_3435_, 4, v_r_3332_);
v___x_3434_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3433_;
}
v_reusejp_3433_:
{
return v___x_3434_;
}
}
}
else
{
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_l_3436_; 
v_l_3436_ = lean_ctor_get(v___x_3337_, 3);
if (lean_obj_tag(v_l_3436_) == 0)
{
lean_object* v_r_3437_; 
lean_inc_ref(v_l_3436_);
v_r_3437_ = lean_ctor_get(v___x_3337_, 4);
lean_inc(v_r_3437_);
if (lean_obj_tag(v_r_3437_) == 0)
{
lean_object* v_size_3438_; lean_object* v_k_3439_; lean_object* v_v_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3454_; 
v_size_3438_ = lean_ctor_get(v___x_3337_, 0);
v_k_3439_ = lean_ctor_get(v___x_3337_, 1);
v_v_3440_ = lean_ctor_get(v___x_3337_, 2);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3454_ == 0)
{
lean_object* v_unused_3455_; lean_object* v_unused_3456_; 
v_unused_3455_ = lean_ctor_get(v___x_3337_, 4);
lean_dec(v_unused_3455_);
v_unused_3456_ = lean_ctor_get(v___x_3337_, 3);
lean_dec(v_unused_3456_);
v___x_3442_ = v___x_3337_;
v_isShared_3443_ = v_isSharedCheck_3454_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_v_3440_);
lean_inc(v_k_3439_);
lean_inc(v_size_3438_);
lean_dec(v___x_3337_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3454_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v_size_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3449_; 
v_size_3444_ = lean_ctor_get(v_r_3437_, 0);
v___x_3445_ = lean_unsigned_to_nat(1u);
v___x_3446_ = lean_nat_add(v___x_3445_, v_size_3438_);
lean_dec(v_size_3438_);
v___x_3447_ = lean_nat_add(v___x_3445_, v_size_3444_);
if (v_isShared_3443_ == 0)
{
lean_ctor_set(v___x_3442_, 4, v_r_3332_);
lean_ctor_set(v___x_3442_, 3, v_r_3437_);
lean_ctor_set(v___x_3442_, 2, v_v_3330_);
lean_ctor_set(v___x_3442_, 1, v_k_3329_);
lean_ctor_set(v___x_3442_, 0, v___x_3447_);
v___x_3449_ = v___x_3442_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v___x_3447_);
lean_ctor_set(v_reuseFailAlloc_3453_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3453_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3453_, 3, v_r_3437_);
lean_ctor_set(v_reuseFailAlloc_3453_, 4, v_r_3332_);
v___x_3449_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
lean_object* v___x_3451_; 
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v___x_3449_);
lean_ctor_set(v___x_3334_, 3, v_l_3436_);
lean_ctor_set(v___x_3334_, 2, v_v_3440_);
lean_ctor_set(v___x_3334_, 1, v_k_3439_);
lean_ctor_set(v___x_3334_, 0, v___x_3446_);
v___x_3451_ = v___x_3334_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v___x_3446_);
lean_ctor_set(v_reuseFailAlloc_3452_, 1, v_k_3439_);
lean_ctor_set(v_reuseFailAlloc_3452_, 2, v_v_3440_);
lean_ctor_set(v_reuseFailAlloc_3452_, 3, v_l_3436_);
lean_ctor_set(v_reuseFailAlloc_3452_, 4, v___x_3449_);
v___x_3451_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
return v___x_3451_;
}
}
}
}
else
{
lean_object* v_k_3457_; lean_object* v_v_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3470_; 
v_k_3457_ = lean_ctor_get(v___x_3337_, 1);
v_v_3458_ = lean_ctor_get(v___x_3337_, 2);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3470_ == 0)
{
lean_object* v_unused_3471_; lean_object* v_unused_3472_; lean_object* v_unused_3473_; 
v_unused_3471_ = lean_ctor_get(v___x_3337_, 4);
lean_dec(v_unused_3471_);
v_unused_3472_ = lean_ctor_get(v___x_3337_, 3);
lean_dec(v_unused_3472_);
v_unused_3473_ = lean_ctor_get(v___x_3337_, 0);
lean_dec(v_unused_3473_);
v___x_3460_ = v___x_3337_;
v_isShared_3461_ = v_isSharedCheck_3470_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_v_3458_);
lean_inc(v_k_3457_);
lean_dec(v___x_3337_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3470_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3465_; 
v___x_3462_ = lean_unsigned_to_nat(3u);
v___x_3463_ = lean_unsigned_to_nat(1u);
if (v_isShared_3461_ == 0)
{
lean_ctor_set(v___x_3460_, 3, v_r_3437_);
lean_ctor_set(v___x_3460_, 2, v_v_3330_);
lean_ctor_set(v___x_3460_, 1, v_k_3329_);
lean_ctor_set(v___x_3460_, 0, v___x_3463_);
v___x_3465_ = v___x_3460_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v___x_3463_);
lean_ctor_set(v_reuseFailAlloc_3469_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3469_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3469_, 3, v_r_3437_);
lean_ctor_set(v_reuseFailAlloc_3469_, 4, v_r_3437_);
v___x_3465_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
lean_object* v___x_3467_; 
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v___x_3465_);
lean_ctor_set(v___x_3334_, 3, v_l_3436_);
lean_ctor_set(v___x_3334_, 2, v_v_3458_);
lean_ctor_set(v___x_3334_, 1, v_k_3457_);
lean_ctor_set(v___x_3334_, 0, v___x_3462_);
v___x_3467_ = v___x_3334_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v___x_3462_);
lean_ctor_set(v_reuseFailAlloc_3468_, 1, v_k_3457_);
lean_ctor_set(v_reuseFailAlloc_3468_, 2, v_v_3458_);
lean_ctor_set(v_reuseFailAlloc_3468_, 3, v_l_3436_);
lean_ctor_set(v_reuseFailAlloc_3468_, 4, v___x_3465_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
}
}
}
else
{
lean_object* v_r_3474_; 
v_r_3474_ = lean_ctor_get(v___x_3337_, 4);
lean_inc(v_r_3474_);
if (lean_obj_tag(v_r_3474_) == 0)
{
lean_object* v_k_3475_; lean_object* v_v_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3500_; 
lean_inc(v_l_3436_);
v_k_3475_ = lean_ctor_get(v___x_3337_, 1);
v_v_3476_ = lean_ctor_get(v___x_3337_, 2);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3500_ == 0)
{
lean_object* v_unused_3501_; lean_object* v_unused_3502_; lean_object* v_unused_3503_; 
v_unused_3501_ = lean_ctor_get(v___x_3337_, 4);
lean_dec(v_unused_3501_);
v_unused_3502_ = lean_ctor_get(v___x_3337_, 3);
lean_dec(v_unused_3502_);
v_unused_3503_ = lean_ctor_get(v___x_3337_, 0);
lean_dec(v_unused_3503_);
v___x_3478_ = v___x_3337_;
v_isShared_3479_ = v_isSharedCheck_3500_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_v_3476_);
lean_inc(v_k_3475_);
lean_dec(v___x_3337_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3500_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v_k_3480_; lean_object* v_v_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3496_; 
v_k_3480_ = lean_ctor_get(v_r_3474_, 1);
v_v_3481_ = lean_ctor_get(v_r_3474_, 2);
v_isSharedCheck_3496_ = !lean_is_exclusive(v_r_3474_);
if (v_isSharedCheck_3496_ == 0)
{
lean_object* v_unused_3497_; lean_object* v_unused_3498_; lean_object* v_unused_3499_; 
v_unused_3497_ = lean_ctor_get(v_r_3474_, 4);
lean_dec(v_unused_3497_);
v_unused_3498_ = lean_ctor_get(v_r_3474_, 3);
lean_dec(v_unused_3498_);
v_unused_3499_ = lean_ctor_get(v_r_3474_, 0);
lean_dec(v_unused_3499_);
v___x_3483_ = v_r_3474_;
v_isShared_3484_ = v_isSharedCheck_3496_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_v_3481_);
lean_inc(v_k_3480_);
lean_dec(v_r_3474_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3496_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3488_; 
v___x_3485_ = lean_unsigned_to_nat(3u);
v___x_3486_ = lean_unsigned_to_nat(1u);
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 4, v_l_3436_);
lean_ctor_set(v___x_3483_, 3, v_l_3436_);
lean_ctor_set(v___x_3483_, 2, v_v_3476_);
lean_ctor_set(v___x_3483_, 1, v_k_3475_);
lean_ctor_set(v___x_3483_, 0, v___x_3486_);
v___x_3488_ = v___x_3483_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v___x_3486_);
lean_ctor_set(v_reuseFailAlloc_3495_, 1, v_k_3475_);
lean_ctor_set(v_reuseFailAlloc_3495_, 2, v_v_3476_);
lean_ctor_set(v_reuseFailAlloc_3495_, 3, v_l_3436_);
lean_ctor_set(v_reuseFailAlloc_3495_, 4, v_l_3436_);
v___x_3488_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
lean_object* v___x_3490_; 
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 4, v_l_3436_);
lean_ctor_set(v___x_3478_, 2, v_v_3330_);
lean_ctor_set(v___x_3478_, 1, v_k_3329_);
lean_ctor_set(v___x_3478_, 0, v___x_3486_);
v___x_3490_ = v___x_3478_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v___x_3486_);
lean_ctor_set(v_reuseFailAlloc_3494_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3494_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3494_, 3, v_l_3436_);
lean_ctor_set(v_reuseFailAlloc_3494_, 4, v_l_3436_);
v___x_3490_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
lean_object* v___x_3492_; 
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v___x_3490_);
lean_ctor_set(v___x_3334_, 3, v___x_3488_);
lean_ctor_set(v___x_3334_, 2, v_v_3481_);
lean_ctor_set(v___x_3334_, 1, v_k_3480_);
lean_ctor_set(v___x_3334_, 0, v___x_3485_);
v___x_3492_ = v___x_3334_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v___x_3485_);
lean_ctor_set(v_reuseFailAlloc_3493_, 1, v_k_3480_);
lean_ctor_set(v_reuseFailAlloc_3493_, 2, v_v_3481_);
lean_ctor_set(v_reuseFailAlloc_3493_, 3, v___x_3488_);
lean_ctor_set(v_reuseFailAlloc_3493_, 4, v___x_3490_);
v___x_3492_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
return v___x_3492_;
}
}
}
}
}
}
else
{
lean_object* v___x_3504_; lean_object* v___x_3506_; 
v___x_3504_ = lean_unsigned_to_nat(2u);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v_r_3474_);
lean_ctor_set(v___x_3334_, 3, v___x_3337_);
lean_ctor_set(v___x_3334_, 0, v___x_3504_);
v___x_3506_ = v___x_3334_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3507_; 
v_reuseFailAlloc_3507_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3507_, 0, v___x_3504_);
lean_ctor_set(v_reuseFailAlloc_3507_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3507_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3507_, 3, v___x_3337_);
lean_ctor_set(v_reuseFailAlloc_3507_, 4, v_r_3474_);
v___x_3506_ = v_reuseFailAlloc_3507_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
return v___x_3506_;
}
}
}
}
else
{
lean_object* v___x_3508_; lean_object* v___x_3510_; 
v___x_3508_ = lean_unsigned_to_nat(1u);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v___x_3337_);
lean_ctor_set(v___x_3334_, 3, v___x_3337_);
lean_ctor_set(v___x_3334_, 0, v___x_3508_);
v___x_3510_ = v___x_3334_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v___x_3508_);
lean_ctor_set(v_reuseFailAlloc_3511_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3511_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3511_, 3, v___x_3337_);
lean_ctor_set(v_reuseFailAlloc_3511_, 4, v___x_3337_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
}
}
}
}
case 1:
{
lean_object* v___x_3513_; 
lean_dec(v_v_3330_);
lean_dec(v_k_3329_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 2, v_v_3326_);
lean_ctor_set(v___x_3334_, 1, v_k_3325_);
v___x_3513_ = v___x_3334_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_size_3328_);
lean_ctor_set(v_reuseFailAlloc_3514_, 1, v_k_3325_);
lean_ctor_set(v_reuseFailAlloc_3514_, 2, v_v_3326_);
lean_ctor_set(v_reuseFailAlloc_3514_, 3, v_l_3331_);
lean_ctor_set(v_reuseFailAlloc_3514_, 4, v_r_3332_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
return v___x_3513_;
}
}
default: 
{
lean_object* v___x_3515_; 
lean_dec(v_size_3328_);
v___x_3515_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(v_k_3325_, v_v_3326_, v_r_3332_);
if (lean_obj_tag(v_l_3331_) == 0)
{
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v_size_3516_; lean_object* v_size_3517_; lean_object* v_k_3518_; lean_object* v_v_3519_; lean_object* v_l_3520_; lean_object* v_r_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; uint8_t v___x_3524_; 
v_size_3516_ = lean_ctor_get(v_l_3331_, 0);
v_size_3517_ = lean_ctor_get(v___x_3515_, 0);
v_k_3518_ = lean_ctor_get(v___x_3515_, 1);
v_v_3519_ = lean_ctor_get(v___x_3515_, 2);
v_l_3520_ = lean_ctor_get(v___x_3515_, 3);
lean_inc(v_l_3520_);
v_r_3521_ = lean_ctor_get(v___x_3515_, 4);
v___x_3522_ = lean_unsigned_to_nat(3u);
v___x_3523_ = lean_nat_mul(v___x_3522_, v_size_3516_);
v___x_3524_ = lean_nat_dec_lt(v___x_3523_, v_size_3517_);
lean_dec(v___x_3523_);
if (v___x_3524_ == 0)
{
lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3529_; 
lean_dec(v_l_3520_);
v___x_3525_ = lean_unsigned_to_nat(1u);
v___x_3526_ = lean_nat_add(v___x_3525_, v_size_3516_);
v___x_3527_ = lean_nat_add(v___x_3526_, v_size_3517_);
lean_dec(v___x_3526_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v___x_3515_);
lean_ctor_set(v___x_3334_, 0, v___x_3527_);
v___x_3529_ = v___x_3334_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v___x_3527_);
lean_ctor_set(v_reuseFailAlloc_3530_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3530_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3530_, 3, v_l_3331_);
lean_ctor_set(v_reuseFailAlloc_3530_, 4, v___x_3515_);
v___x_3529_ = v_reuseFailAlloc_3530_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
return v___x_3529_;
}
}
else
{
lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3600_; 
lean_inc(v_r_3521_);
lean_inc(v_v_3519_);
lean_inc(v_k_3518_);
lean_inc(v_size_3517_);
v_isSharedCheck_3600_ = !lean_is_exclusive(v___x_3515_);
if (v_isSharedCheck_3600_ == 0)
{
lean_object* v_unused_3601_; lean_object* v_unused_3602_; lean_object* v_unused_3603_; lean_object* v_unused_3604_; lean_object* v_unused_3605_; 
v_unused_3601_ = lean_ctor_get(v___x_3515_, 4);
lean_dec(v_unused_3601_);
v_unused_3602_ = lean_ctor_get(v___x_3515_, 3);
lean_dec(v_unused_3602_);
v_unused_3603_ = lean_ctor_get(v___x_3515_, 2);
lean_dec(v_unused_3603_);
v_unused_3604_ = lean_ctor_get(v___x_3515_, 1);
lean_dec(v_unused_3604_);
v_unused_3605_ = lean_ctor_get(v___x_3515_, 0);
lean_dec(v_unused_3605_);
v___x_3532_ = v___x_3515_;
v_isShared_3533_ = v_isSharedCheck_3600_;
goto v_resetjp_3531_;
}
else
{
lean_dec(v___x_3515_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3600_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
if (lean_obj_tag(v_l_3520_) == 0)
{
if (lean_obj_tag(v_r_3521_) == 0)
{
lean_object* v_size_3534_; lean_object* v_k_3535_; lean_object* v_v_3536_; lean_object* v_l_3537_; lean_object* v_r_3538_; lean_object* v_size_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; uint8_t v___x_3542_; 
v_size_3534_ = lean_ctor_get(v_l_3520_, 0);
v_k_3535_ = lean_ctor_get(v_l_3520_, 1);
v_v_3536_ = lean_ctor_get(v_l_3520_, 2);
v_l_3537_ = lean_ctor_get(v_l_3520_, 3);
v_r_3538_ = lean_ctor_get(v_l_3520_, 4);
v_size_3539_ = lean_ctor_get(v_r_3521_, 0);
v___x_3540_ = lean_unsigned_to_nat(2u);
v___x_3541_ = lean_nat_mul(v___x_3540_, v_size_3539_);
v___x_3542_ = lean_nat_dec_lt(v_size_3534_, v___x_3541_);
lean_dec(v___x_3541_);
if (v___x_3542_ == 0)
{
lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3571_; 
lean_inc(v_r_3538_);
lean_inc(v_l_3537_);
lean_inc(v_v_3536_);
lean_inc(v_k_3535_);
v_isSharedCheck_3571_ = !lean_is_exclusive(v_l_3520_);
if (v_isSharedCheck_3571_ == 0)
{
lean_object* v_unused_3572_; lean_object* v_unused_3573_; lean_object* v_unused_3574_; lean_object* v_unused_3575_; lean_object* v_unused_3576_; 
v_unused_3572_ = lean_ctor_get(v_l_3520_, 4);
lean_dec(v_unused_3572_);
v_unused_3573_ = lean_ctor_get(v_l_3520_, 3);
lean_dec(v_unused_3573_);
v_unused_3574_ = lean_ctor_get(v_l_3520_, 2);
lean_dec(v_unused_3574_);
v_unused_3575_ = lean_ctor_get(v_l_3520_, 1);
lean_dec(v_unused_3575_);
v_unused_3576_ = lean_ctor_get(v_l_3520_, 0);
lean_dec(v_unused_3576_);
v___x_3544_ = v_l_3520_;
v_isShared_3545_ = v_isSharedCheck_3571_;
goto v_resetjp_3543_;
}
else
{
lean_dec(v_l_3520_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3571_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___y_3550_; lean_object* v___y_3551_; lean_object* v___y_3552_; lean_object* v___y_3561_; 
v___x_3546_ = lean_unsigned_to_nat(1u);
v___x_3547_ = lean_nat_add(v___x_3546_, v_size_3516_);
v___x_3548_ = lean_nat_add(v___x_3547_, v_size_3517_);
lean_dec(v_size_3517_);
if (lean_obj_tag(v_l_3537_) == 0)
{
lean_object* v_size_3569_; 
v_size_3569_ = lean_ctor_get(v_l_3537_, 0);
lean_inc(v_size_3569_);
v___y_3561_ = v_size_3569_;
goto v___jp_3560_;
}
else
{
lean_object* v___x_3570_; 
v___x_3570_ = lean_unsigned_to_nat(0u);
v___y_3561_ = v___x_3570_;
goto v___jp_3560_;
}
v___jp_3549_:
{
lean_object* v___x_3553_; lean_object* v___x_3555_; 
v___x_3553_ = lean_nat_add(v___y_3551_, v___y_3552_);
lean_dec(v___y_3552_);
lean_dec(v___y_3551_);
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 4, v_r_3521_);
lean_ctor_set(v___x_3544_, 3, v_r_3538_);
lean_ctor_set(v___x_3544_, 2, v_v_3519_);
lean_ctor_set(v___x_3544_, 1, v_k_3518_);
lean_ctor_set(v___x_3544_, 0, v___x_3553_);
v___x_3555_ = v___x_3544_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v___x_3553_);
lean_ctor_set(v_reuseFailAlloc_3559_, 1, v_k_3518_);
lean_ctor_set(v_reuseFailAlloc_3559_, 2, v_v_3519_);
lean_ctor_set(v_reuseFailAlloc_3559_, 3, v_r_3538_);
lean_ctor_set(v_reuseFailAlloc_3559_, 4, v_r_3521_);
v___x_3555_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
lean_object* v___x_3557_; 
if (v_isShared_3533_ == 0)
{
lean_ctor_set(v___x_3532_, 4, v___x_3555_);
lean_ctor_set(v___x_3532_, 3, v___y_3550_);
lean_ctor_set(v___x_3532_, 2, v_v_3536_);
lean_ctor_set(v___x_3532_, 1, v_k_3535_);
lean_ctor_set(v___x_3532_, 0, v___x_3548_);
v___x_3557_ = v___x_3532_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v___x_3548_);
lean_ctor_set(v_reuseFailAlloc_3558_, 1, v_k_3535_);
lean_ctor_set(v_reuseFailAlloc_3558_, 2, v_v_3536_);
lean_ctor_set(v_reuseFailAlloc_3558_, 3, v___y_3550_);
lean_ctor_set(v_reuseFailAlloc_3558_, 4, v___x_3555_);
v___x_3557_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
return v___x_3557_;
}
}
}
v___jp_3560_:
{
lean_object* v___x_3562_; lean_object* v___x_3564_; 
v___x_3562_ = lean_nat_add(v___x_3547_, v___y_3561_);
lean_dec(v___y_3561_);
lean_dec(v___x_3547_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v_l_3537_);
lean_ctor_set(v___x_3334_, 0, v___x_3562_);
v___x_3564_ = v___x_3334_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v___x_3562_);
lean_ctor_set(v_reuseFailAlloc_3568_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3568_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3568_, 3, v_l_3331_);
lean_ctor_set(v_reuseFailAlloc_3568_, 4, v_l_3537_);
v___x_3564_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
lean_object* v___x_3565_; 
v___x_3565_ = lean_nat_add(v___x_3546_, v_size_3539_);
if (lean_obj_tag(v_r_3538_) == 0)
{
lean_object* v_size_3566_; 
v_size_3566_ = lean_ctor_get(v_r_3538_, 0);
lean_inc(v_size_3566_);
v___y_3550_ = v___x_3564_;
v___y_3551_ = v___x_3565_;
v___y_3552_ = v_size_3566_;
goto v___jp_3549_;
}
else
{
lean_object* v___x_3567_; 
v___x_3567_ = lean_unsigned_to_nat(0u);
v___y_3550_ = v___x_3564_;
v___y_3551_ = v___x_3565_;
v___y_3552_ = v___x_3567_;
goto v___jp_3549_;
}
}
}
}
}
else
{
lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3582_; 
lean_del_object(v___x_3334_);
v___x_3577_ = lean_unsigned_to_nat(1u);
v___x_3578_ = lean_nat_add(v___x_3577_, v_size_3516_);
v___x_3579_ = lean_nat_add(v___x_3578_, v_size_3517_);
lean_dec(v_size_3517_);
v___x_3580_ = lean_nat_add(v___x_3578_, v_size_3534_);
lean_dec(v___x_3578_);
lean_inc_ref(v_l_3331_);
if (v_isShared_3533_ == 0)
{
lean_ctor_set(v___x_3532_, 4, v_l_3520_);
lean_ctor_set(v___x_3532_, 3, v_l_3331_);
lean_ctor_set(v___x_3532_, 2, v_v_3330_);
lean_ctor_set(v___x_3532_, 1, v_k_3329_);
lean_ctor_set(v___x_3532_, 0, v___x_3580_);
v___x_3582_ = v___x_3532_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v___x_3580_);
lean_ctor_set(v_reuseFailAlloc_3595_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3595_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3595_, 3, v_l_3331_);
lean_ctor_set(v_reuseFailAlloc_3595_, 4, v_l_3520_);
v___x_3582_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3589_; 
v_isSharedCheck_3589_ = !lean_is_exclusive(v_l_3331_);
if (v_isSharedCheck_3589_ == 0)
{
lean_object* v_unused_3590_; lean_object* v_unused_3591_; lean_object* v_unused_3592_; lean_object* v_unused_3593_; lean_object* v_unused_3594_; 
v_unused_3590_ = lean_ctor_get(v_l_3331_, 4);
lean_dec(v_unused_3590_);
v_unused_3591_ = lean_ctor_get(v_l_3331_, 3);
lean_dec(v_unused_3591_);
v_unused_3592_ = lean_ctor_get(v_l_3331_, 2);
lean_dec(v_unused_3592_);
v_unused_3593_ = lean_ctor_get(v_l_3331_, 1);
lean_dec(v_unused_3593_);
v_unused_3594_ = lean_ctor_get(v_l_3331_, 0);
lean_dec(v_unused_3594_);
v___x_3584_ = v_l_3331_;
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
else
{
lean_dec(v_l_3331_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3587_; 
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 4, v_r_3521_);
lean_ctor_set(v___x_3584_, 3, v___x_3582_);
lean_ctor_set(v___x_3584_, 2, v_v_3519_);
lean_ctor_set(v___x_3584_, 1, v_k_3518_);
lean_ctor_set(v___x_3584_, 0, v___x_3579_);
v___x_3587_ = v___x_3584_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v___x_3579_);
lean_ctor_set(v_reuseFailAlloc_3588_, 1, v_k_3518_);
lean_ctor_set(v_reuseFailAlloc_3588_, 2, v_v_3519_);
lean_ctor_set(v_reuseFailAlloc_3588_, 3, v___x_3582_);
lean_ctor_set(v_reuseFailAlloc_3588_, 4, v_r_3521_);
v___x_3587_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
return v___x_3587_;
}
}
}
}
}
else
{
lean_object* v___x_3596_; lean_object* v___x_3597_; 
lean_dec_ref_known(v_l_3520_, 5);
lean_del_object(v___x_3532_);
lean_dec(v_v_3519_);
lean_dec(v_k_3518_);
lean_dec(v_size_3517_);
lean_dec_ref_known(v_l_3331_, 5);
lean_del_object(v___x_3334_);
lean_dec(v_v_3330_);
lean_dec(v_k_3329_);
v___x_3596_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__7);
v___x_3597_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4_spec__6___redArg(v___x_3596_);
return v___x_3597_;
}
}
else
{
lean_object* v___x_3598_; lean_object* v___x_3599_; 
lean_del_object(v___x_3532_);
lean_dec(v_r_3521_);
lean_dec(v_v_3519_);
lean_dec(v_k_3518_);
lean_dec(v_size_3517_);
lean_dec_ref_known(v_l_3331_, 5);
lean_del_object(v___x_3334_);
lean_dec(v_v_3330_);
lean_dec(v_k_3329_);
v___x_3598_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___closed__8);
v___x_3599_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4_spec__6___redArg(v___x_3598_);
return v___x_3599_;
}
}
}
}
else
{
lean_object* v_size_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3610_; 
v_size_3606_ = lean_ctor_get(v_l_3331_, 0);
v___x_3607_ = lean_unsigned_to_nat(1u);
v___x_3608_ = lean_nat_add(v___x_3607_, v_size_3606_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v___x_3515_);
lean_ctor_set(v___x_3334_, 0, v___x_3608_);
v___x_3610_ = v___x_3334_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v___x_3608_);
lean_ctor_set(v_reuseFailAlloc_3611_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3611_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3611_, 3, v_l_3331_);
lean_ctor_set(v_reuseFailAlloc_3611_, 4, v___x_3515_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
return v___x_3610_;
}
}
}
else
{
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v_l_3612_; 
v_l_3612_ = lean_ctor_get(v___x_3515_, 3);
lean_inc(v_l_3612_);
if (lean_obj_tag(v_l_3612_) == 0)
{
lean_object* v_r_3613_; 
v_r_3613_ = lean_ctor_get(v___x_3515_, 4);
lean_inc(v_r_3613_);
if (lean_obj_tag(v_r_3613_) == 0)
{
lean_object* v_size_3614_; lean_object* v_k_3615_; lean_object* v_v_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3630_; 
v_size_3614_ = lean_ctor_get(v___x_3515_, 0);
v_k_3615_ = lean_ctor_get(v___x_3515_, 1);
v_v_3616_ = lean_ctor_get(v___x_3515_, 2);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3515_);
if (v_isSharedCheck_3630_ == 0)
{
lean_object* v_unused_3631_; lean_object* v_unused_3632_; 
v_unused_3631_ = lean_ctor_get(v___x_3515_, 4);
lean_dec(v_unused_3631_);
v_unused_3632_ = lean_ctor_get(v___x_3515_, 3);
lean_dec(v_unused_3632_);
v___x_3618_ = v___x_3515_;
v_isShared_3619_ = v_isSharedCheck_3630_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_v_3616_);
lean_inc(v_k_3615_);
lean_inc(v_size_3614_);
lean_dec(v___x_3515_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3630_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v_size_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3625_; 
v_size_3620_ = lean_ctor_get(v_l_3612_, 0);
v___x_3621_ = lean_unsigned_to_nat(1u);
v___x_3622_ = lean_nat_add(v___x_3621_, v_size_3614_);
lean_dec(v_size_3614_);
v___x_3623_ = lean_nat_add(v___x_3621_, v_size_3620_);
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 4, v_l_3612_);
lean_ctor_set(v___x_3618_, 3, v_l_3331_);
lean_ctor_set(v___x_3618_, 2, v_v_3330_);
lean_ctor_set(v___x_3618_, 1, v_k_3329_);
lean_ctor_set(v___x_3618_, 0, v___x_3623_);
v___x_3625_ = v___x_3618_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v___x_3623_);
lean_ctor_set(v_reuseFailAlloc_3629_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3629_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3629_, 3, v_l_3331_);
lean_ctor_set(v_reuseFailAlloc_3629_, 4, v_l_3612_);
v___x_3625_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
lean_object* v___x_3627_; 
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v_r_3613_);
lean_ctor_set(v___x_3334_, 3, v___x_3625_);
lean_ctor_set(v___x_3334_, 2, v_v_3616_);
lean_ctor_set(v___x_3334_, 1, v_k_3615_);
lean_ctor_set(v___x_3334_, 0, v___x_3622_);
v___x_3627_ = v___x_3334_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v___x_3622_);
lean_ctor_set(v_reuseFailAlloc_3628_, 1, v_k_3615_);
lean_ctor_set(v_reuseFailAlloc_3628_, 2, v_v_3616_);
lean_ctor_set(v_reuseFailAlloc_3628_, 3, v___x_3625_);
lean_ctor_set(v_reuseFailAlloc_3628_, 4, v_r_3613_);
v___x_3627_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
return v___x_3627_;
}
}
}
}
else
{
lean_object* v_k_3633_; lean_object* v_v_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3658_; 
v_k_3633_ = lean_ctor_get(v___x_3515_, 1);
v_v_3634_ = lean_ctor_get(v___x_3515_, 2);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3515_);
if (v_isSharedCheck_3658_ == 0)
{
lean_object* v_unused_3659_; lean_object* v_unused_3660_; lean_object* v_unused_3661_; 
v_unused_3659_ = lean_ctor_get(v___x_3515_, 4);
lean_dec(v_unused_3659_);
v_unused_3660_ = lean_ctor_get(v___x_3515_, 3);
lean_dec(v_unused_3660_);
v_unused_3661_ = lean_ctor_get(v___x_3515_, 0);
lean_dec(v_unused_3661_);
v___x_3636_ = v___x_3515_;
v_isShared_3637_ = v_isSharedCheck_3658_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_v_3634_);
lean_inc(v_k_3633_);
lean_dec(v___x_3515_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3658_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v_k_3638_; lean_object* v_v_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3654_; 
v_k_3638_ = lean_ctor_get(v_l_3612_, 1);
v_v_3639_ = lean_ctor_get(v_l_3612_, 2);
v_isSharedCheck_3654_ = !lean_is_exclusive(v_l_3612_);
if (v_isSharedCheck_3654_ == 0)
{
lean_object* v_unused_3655_; lean_object* v_unused_3656_; lean_object* v_unused_3657_; 
v_unused_3655_ = lean_ctor_get(v_l_3612_, 4);
lean_dec(v_unused_3655_);
v_unused_3656_ = lean_ctor_get(v_l_3612_, 3);
lean_dec(v_unused_3656_);
v_unused_3657_ = lean_ctor_get(v_l_3612_, 0);
lean_dec(v_unused_3657_);
v___x_3641_ = v_l_3612_;
v_isShared_3642_ = v_isSharedCheck_3654_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_v_3639_);
lean_inc(v_k_3638_);
lean_dec(v_l_3612_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3654_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3646_; 
v___x_3643_ = lean_unsigned_to_nat(3u);
v___x_3644_ = lean_unsigned_to_nat(1u);
if (v_isShared_3642_ == 0)
{
lean_ctor_set(v___x_3641_, 4, v_r_3613_);
lean_ctor_set(v___x_3641_, 3, v_r_3613_);
lean_ctor_set(v___x_3641_, 2, v_v_3330_);
lean_ctor_set(v___x_3641_, 1, v_k_3329_);
lean_ctor_set(v___x_3641_, 0, v___x_3644_);
v___x_3646_ = v___x_3641_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v___x_3644_);
lean_ctor_set(v_reuseFailAlloc_3653_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3653_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3653_, 3, v_r_3613_);
lean_ctor_set(v_reuseFailAlloc_3653_, 4, v_r_3613_);
v___x_3646_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
lean_object* v___x_3648_; 
if (v_isShared_3637_ == 0)
{
lean_ctor_set(v___x_3636_, 3, v_r_3613_);
lean_ctor_set(v___x_3636_, 0, v___x_3644_);
v___x_3648_ = v___x_3636_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v___x_3644_);
lean_ctor_set(v_reuseFailAlloc_3652_, 1, v_k_3633_);
lean_ctor_set(v_reuseFailAlloc_3652_, 2, v_v_3634_);
lean_ctor_set(v_reuseFailAlloc_3652_, 3, v_r_3613_);
lean_ctor_set(v_reuseFailAlloc_3652_, 4, v_r_3613_);
v___x_3648_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
lean_object* v___x_3650_; 
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v___x_3648_);
lean_ctor_set(v___x_3334_, 3, v___x_3646_);
lean_ctor_set(v___x_3334_, 2, v_v_3639_);
lean_ctor_set(v___x_3334_, 1, v_k_3638_);
lean_ctor_set(v___x_3334_, 0, v___x_3643_);
v___x_3650_ = v___x_3334_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v___x_3643_);
lean_ctor_set(v_reuseFailAlloc_3651_, 1, v_k_3638_);
lean_ctor_set(v_reuseFailAlloc_3651_, 2, v_v_3639_);
lean_ctor_set(v_reuseFailAlloc_3651_, 3, v___x_3646_);
lean_ctor_set(v_reuseFailAlloc_3651_, 4, v___x_3648_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_3662_; 
v_r_3662_ = lean_ctor_get(v___x_3515_, 4);
lean_inc(v_r_3662_);
if (lean_obj_tag(v_r_3662_) == 0)
{
lean_object* v_k_3663_; lean_object* v_v_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3676_; 
v_k_3663_ = lean_ctor_get(v___x_3515_, 1);
v_v_3664_ = lean_ctor_get(v___x_3515_, 2);
v_isSharedCheck_3676_ = !lean_is_exclusive(v___x_3515_);
if (v_isSharedCheck_3676_ == 0)
{
lean_object* v_unused_3677_; lean_object* v_unused_3678_; lean_object* v_unused_3679_; 
v_unused_3677_ = lean_ctor_get(v___x_3515_, 4);
lean_dec(v_unused_3677_);
v_unused_3678_ = lean_ctor_get(v___x_3515_, 3);
lean_dec(v_unused_3678_);
v_unused_3679_ = lean_ctor_get(v___x_3515_, 0);
lean_dec(v_unused_3679_);
v___x_3666_ = v___x_3515_;
v_isShared_3667_ = v_isSharedCheck_3676_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_v_3664_);
lean_inc(v_k_3663_);
lean_dec(v___x_3515_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3676_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3671_; 
v___x_3668_ = lean_unsigned_to_nat(3u);
v___x_3669_ = lean_unsigned_to_nat(1u);
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 4, v_l_3612_);
lean_ctor_set(v___x_3666_, 2, v_v_3330_);
lean_ctor_set(v___x_3666_, 1, v_k_3329_);
lean_ctor_set(v___x_3666_, 0, v___x_3669_);
v___x_3671_ = v___x_3666_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v___x_3669_);
lean_ctor_set(v_reuseFailAlloc_3675_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3675_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3675_, 3, v_l_3612_);
lean_ctor_set(v_reuseFailAlloc_3675_, 4, v_l_3612_);
v___x_3671_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
lean_object* v___x_3673_; 
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v_r_3662_);
lean_ctor_set(v___x_3334_, 3, v___x_3671_);
lean_ctor_set(v___x_3334_, 2, v_v_3664_);
lean_ctor_set(v___x_3334_, 1, v_k_3663_);
lean_ctor_set(v___x_3334_, 0, v___x_3668_);
v___x_3673_ = v___x_3334_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v___x_3668_);
lean_ctor_set(v_reuseFailAlloc_3674_, 1, v_k_3663_);
lean_ctor_set(v_reuseFailAlloc_3674_, 2, v_v_3664_);
lean_ctor_set(v_reuseFailAlloc_3674_, 3, v___x_3671_);
lean_ctor_set(v_reuseFailAlloc_3674_, 4, v_r_3662_);
v___x_3673_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
return v___x_3673_;
}
}
}
}
else
{
lean_object* v___x_3680_; lean_object* v___x_3682_; 
v___x_3680_ = lean_unsigned_to_nat(2u);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v___x_3515_);
lean_ctor_set(v___x_3334_, 3, v_r_3662_);
lean_ctor_set(v___x_3334_, 0, v___x_3680_);
v___x_3682_ = v___x_3334_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v___x_3680_);
lean_ctor_set(v_reuseFailAlloc_3683_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3683_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3683_, 3, v_r_3662_);
lean_ctor_set(v_reuseFailAlloc_3683_, 4, v___x_3515_);
v___x_3682_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
return v___x_3682_;
}
}
}
}
else
{
lean_object* v___x_3684_; lean_object* v___x_3686_; 
v___x_3684_ = lean_unsigned_to_nat(1u);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 4, v___x_3515_);
lean_ctor_set(v___x_3334_, 3, v___x_3515_);
lean_ctor_set(v___x_3334_, 0, v___x_3684_);
v___x_3686_ = v___x_3334_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3684_);
lean_ctor_set(v_reuseFailAlloc_3687_, 1, v_k_3329_);
lean_ctor_set(v_reuseFailAlloc_3687_, 2, v_v_3330_);
lean_ctor_set(v_reuseFailAlloc_3687_, 3, v___x_3515_);
lean_ctor_set(v_reuseFailAlloc_3687_, 4, v___x_3515_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3689_ = lean_unsigned_to_nat(1u);
v___x_3690_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3689_);
lean_ctor_set(v___x_3690_, 1, v_k_3325_);
lean_ctor_set(v___x_3690_, 2, v_v_3326_);
lean_ctor_set(v___x_3690_, 3, v_t_3327_);
lean_ctor_set(v___x_3690_, 4, v_t_3327_);
return v___x_3690_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5_spec__8(lean_object* v_init_3691_, lean_object* v_x_3692_){
_start:
{
if (lean_obj_tag(v_x_3692_) == 0)
{
lean_object* v_k_3693_; lean_object* v_v_3694_; lean_object* v_l_3695_; lean_object* v_r_3696_; lean_object* v___x_3697_; uint8_t v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; 
v_k_3693_ = lean_ctor_get(v_x_3692_, 1);
lean_inc(v_k_3693_);
v_v_3694_ = lean_ctor_get(v_x_3692_, 2);
lean_inc(v_v_3694_);
v_l_3695_ = lean_ctor_get(v_x_3692_, 3);
lean_inc(v_l_3695_);
v_r_3696_ = lean_ctor_get(v_x_3692_, 4);
lean_inc(v_r_3696_);
lean_dec_ref_known(v_x_3692_, 5);
v___x_3697_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5_spec__8(v_init_3691_, v_l_3695_);
v___x_3698_ = 1;
v___x_3699_ = l_Lean_Name_toString(v_k_3693_, v___x_3698_);
v___x_3700_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3700_, 0, v_v_3694_);
v___x_3701_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(v___x_3699_, v___x_3700_, v___x_3697_);
v_init_3691_ = v___x_3701_;
v_x_3692_ = v_r_3696_;
goto _start;
}
else
{
return v_init_3691_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(lean_object* v_m_3703_){
_start:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3704_ = lean_box(1);
v___x_3705_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5_spec__8(v___x_3704_, v_m_3703_);
v___x_3706_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3705_);
return v___x_3706_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0(lean_object* v_baseName_3709_, lean_object* v_ws_3710_, lean_object* v___x_3711_, lean_object* v_dep_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_){
_start:
{
lean_object* v_name_3716_; lean_object* v_opts_3717_; uint8_t v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; uint8_t v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; uint8_t v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; 
v_name_3716_ = lean_ctor_get(v_dep_3712_, 0);
v_opts_3717_ = lean_ctor_get(v_dep_3712_, 4);
v___x_3718_ = 0;
v___x_3719_ = l_Lean_Name_toString(v_baseName_3709_, v___x_3718_);
v___x_3720_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0));
v___x_3721_ = lean_string_append(v___x_3719_, v___x_3720_);
v___x_3722_ = 1;
lean_inc(v_name_3716_);
v___x_3723_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3716_, v___x_3722_);
v___x_3724_ = lean_string_append(v___x_3721_, v___x_3723_);
lean_dec_ref(v___x_3723_);
v___x_3725_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1));
v___x_3726_ = lean_string_append(v___x_3724_, v___x_3725_);
lean_inc(v_opts_3717_);
v___x_3727_ = l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(v_opts_3717_);
v___x_3728_ = lean_unsigned_to_nat(80u);
v___x_3729_ = l_Lean_Json_pretty(v___x_3727_, v___x_3728_);
v___x_3730_ = lean_string_append(v___x_3726_, v___x_3729_);
lean_dec_ref(v___x_3729_);
v___x_3731_ = 0;
v___x_3732_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3732_, 0, v___x_3730_);
lean_ctor_set_uint8(v___x_3732_, sizeof(void*)*1, v___x_3731_);
lean_inc_ref(v___y_3714_);
v___x_3733_ = lean_apply_2(v___y_3714_, v___x_3732_, lean_box(0));
v___x_3734_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_3710_, v___x_3711_, v_dep_3712_, v___y_3713_, v___y_3714_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed(lean_object* v_baseName_3735_, lean_object* v_ws_3736_, lean_object* v___x_3737_, lean_object* v_dep_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_){
_start:
{
lean_object* v_res_3742_; 
v_res_3742_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0(v_baseName_3735_, v_ws_3736_, v___x_3737_, v_dep_3738_, v___y_3739_, v___y_3740_);
lean_dec_ref(v___y_3740_);
return v_res_3742_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg___lam__0(lean_object* v___x_3743_, lean_object* v_x_3744_){
_start:
{
lean_object* v_baseName_3745_; lean_object* v_name_3746_; uint8_t v___x_3747_; 
v_baseName_3745_ = lean_ctor_get(v_x_3744_, 1);
v_name_3746_ = lean_ctor_get(v___x_3743_, 0);
v___x_3747_ = lean_name_eq(v_baseName_3745_, v_name_3746_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg___lam__0___boxed(lean_object* v___x_3748_, lean_object* v_x_3749_){
_start:
{
uint8_t v_res_3750_; lean_object* v_r_3751_; 
v_res_3750_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg___lam__0(v___x_3748_, v_x_3749_);
lean_dec_ref(v_x_3749_);
lean_dec_ref(v___x_3748_);
v_r_3751_ = lean_box(v_res_3750_);
return v_r_3751_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg(lean_object* v_pkg_3752_, lean_object* v_leanOpts_3753_, uint8_t v_reconfigure_3754_, lean_object* v_as_3755_, size_t v_i_3756_, size_t v_stop_3757_, lean_object* v_b_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_){
_start:
{
uint8_t v___x_3762_; 
v___x_3762_ = lean_usize_dec_eq(v_i_3756_, v_stop_3757_);
if (v___x_3762_ == 0)
{
lean_object* v_ws_3763_; lean_object* v_depIdxs_3764_; lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3861_; 
v_ws_3763_ = lean_ctor_get(v_b_3758_, 0);
v_depIdxs_3764_ = lean_ctor_get(v_b_3758_, 1);
v_isSharedCheck_3861_ = !lean_is_exclusive(v_b_3758_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3766_ = v_b_3758_;
v_isShared_3767_ = v_isSharedCheck_3861_;
goto v_resetjp_3765_;
}
else
{
lean_inc(v_depIdxs_3764_);
lean_inc(v_ws_3763_);
lean_dec(v_b_3758_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3861_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v_packages_3768_; size_t v___x_3769_; size_t v___x_3770_; lean_object* v___x_3771_; lean_object* v___f_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
v_packages_3768_ = lean_ctor_get(v_ws_3763_, 4);
v___x_3769_ = ((size_t)1ULL);
v___x_3770_ = lean_usize_sub(v_i_3756_, v___x_3769_);
v___x_3771_ = lean_array_uget_borrowed(v_as_3755_, v___x_3770_);
lean_inc(v___x_3771_);
v___f_3772_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3772_, 0, v___x_3771_);
v___x_3773_ = lean_unsigned_to_nat(0u);
v___x_3774_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_3772_, v_packages_3768_, v___x_3773_);
if (lean_obj_tag(v___x_3774_) == 1)
{
lean_object* v_val_3775_; lean_object* v___x_3776_; lean_object* v___x_3778_; 
v_val_3775_ = lean_ctor_get(v___x_3774_, 0);
lean_inc(v_val_3775_);
lean_dec_ref_known(v___x_3774_, 1);
v___x_3776_ = lean_array_push(v_depIdxs_3764_, v_val_3775_);
if (v_isShared_3767_ == 0)
{
lean_ctor_set(v___x_3766_, 1, v___x_3776_);
v___x_3778_ = v___x_3766_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v_ws_3763_);
lean_ctor_set(v_reuseFailAlloc_3780_, 1, v___x_3776_);
v___x_3778_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
v_i_3756_ = v___x_3770_;
v_b_3758_ = v___x_3778_;
goto _start;
}
}
else
{
lean_object* v_baseName_3781_; lean_object* v_name_3782_; lean_object* v_opts_3783_; uint8_t v___x_3784_; 
lean_dec(v___x_3774_);
v_baseName_3781_ = lean_ctor_get(v_pkg_3752_, 1);
v_name_3782_ = lean_ctor_get(v___x_3771_, 0);
v_opts_3783_ = lean_ctor_get(v___x_3771_, 4);
v___x_3784_ = lean_name_eq(v_baseName_3781_, v_name_3782_);
if (v___x_3784_ == 0)
{
lean_object* v___x_3785_; 
lean_inc_ref(v___y_3760_);
lean_inc_ref(v_ws_3763_);
lean_inc(v___x_3771_);
lean_inc_ref(v_pkg_3752_);
v___x_3785_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(v_pkg_3752_, v___x_3771_, v_ws_3763_, v___y_3759_, v___y_3760_);
if (lean_obj_tag(v___x_3785_) == 0)
{
lean_object* v_a_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3844_; 
v_a_3786_ = lean_ctor_get(v___x_3785_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v___x_3785_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3788_ = v___x_3785_;
v_isShared_3789_ = v_isSharedCheck_3844_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_a_3786_);
lean_dec(v___x_3785_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3844_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v_fst_3790_; lean_object* v_snd_3791_; lean_object* v___x_3792_; lean_object* v_wsIdx_3793_; lean_object* v___x_3794_; 
v_fst_3790_ = lean_ctor_get(v_a_3786_, 0);
lean_inc(v_fst_3790_);
v_snd_3791_ = lean_ctor_get(v_a_3786_, 1);
lean_inc(v_snd_3791_);
lean_dec(v_a_3786_);
v___x_3792_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_3793_ = lean_array_get_size(v_packages_3768_);
lean_inc_ref(v_leanOpts_3753_);
lean_inc(v_opts_3783_);
v___x_3794_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_3763_, v_fst_3790_, v_opts_3783_, v_leanOpts_3753_, v_reconfigure_3754_, v___x_3792_);
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_object* v_a_3795_; lean_object* v_a_3796_; lean_object* v___x_3797_; lean_object* v___x_3799_; 
lean_del_object(v___x_3788_);
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
lean_inc(v_a_3795_);
v_a_3796_ = lean_ctor_get(v___x_3794_, 1);
lean_inc(v_a_3796_);
lean_dec_ref_known(v___x_3794_, 2);
v___x_3797_ = lean_array_push(v_depIdxs_3764_, v_wsIdx_3793_);
if (v_isShared_3767_ == 0)
{
lean_ctor_set(v___x_3766_, 1, v___x_3797_);
lean_ctor_set(v___x_3766_, 0, v_a_3795_);
v___x_3799_ = v___x_3766_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v_a_3795_);
lean_ctor_set(v_reuseFailAlloc_3816_, 1, v___x_3797_);
v___x_3799_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
lean_object* v___x_3800_; uint8_t v___x_3801_; 
v___x_3800_ = lean_array_get_size(v_a_3796_);
v___x_3801_ = lean_nat_dec_lt(v___x_3773_, v___x_3800_);
if (v___x_3801_ == 0)
{
lean_dec(v_a_3796_);
v_i_3756_ = v___x_3770_;
v_b_3758_ = v___x_3799_;
v___y_3759_ = v_snd_3791_;
goto _start;
}
else
{
lean_object* v___x_3803_; size_t v___x_3804_; size_t v___x_3805_; lean_object* v___x_3806_; 
v___x_3803_ = lean_box(0);
v___x_3804_ = ((size_t)0ULL);
v___x_3805_ = lean_usize_of_nat(v___x_3800_);
v___x_3806_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3796_, v___x_3804_, v___x_3805_, v___x_3803_, v___y_3760_);
lean_dec(v_a_3796_);
if (lean_obj_tag(v___x_3806_) == 0)
{
lean_dec_ref_known(v___x_3806_, 1);
v_i_3756_ = v___x_3770_;
v_b_3758_ = v___x_3799_;
v___y_3759_ = v_snd_3791_;
goto _start;
}
else
{
lean_object* v_a_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3815_; 
lean_dec_ref(v___x_3799_);
lean_dec(v_snd_3791_);
lean_dec_ref(v_leanOpts_3753_);
lean_dec_ref(v_pkg_3752_);
v_a_3808_ = lean_ctor_get(v___x_3806_, 0);
v_isSharedCheck_3815_ = !lean_is_exclusive(v___x_3806_);
if (v_isSharedCheck_3815_ == 0)
{
v___x_3810_ = v___x_3806_;
v_isShared_3811_ = v_isSharedCheck_3815_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_a_3808_);
lean_dec(v___x_3806_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3815_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3813_; 
if (v_isShared_3811_ == 0)
{
v___x_3813_ = v___x_3810_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3814_; 
v_reuseFailAlloc_3814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3814_, 0, v_a_3808_);
v___x_3813_ = v_reuseFailAlloc_3814_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
return v___x_3813_;
}
}
}
}
}
}
else
{
lean_object* v_a_3817_; lean_object* v___x_3818_; uint8_t v___x_3819_; 
lean_dec(v_snd_3791_);
lean_del_object(v___x_3766_);
lean_dec_ref(v_depIdxs_3764_);
lean_dec_ref(v_leanOpts_3753_);
lean_dec_ref(v_pkg_3752_);
v_a_3817_ = lean_ctor_get(v___x_3794_, 1);
lean_inc(v_a_3817_);
lean_dec_ref_known(v___x_3794_, 2);
v___x_3818_ = lean_array_get_size(v_a_3817_);
v___x_3819_ = lean_nat_dec_lt(v___x_3773_, v___x_3818_);
if (v___x_3819_ == 0)
{
lean_object* v___x_3820_; lean_object* v___x_3822_; 
lean_dec(v_a_3817_);
v___x_3820_ = lean_box(0);
if (v_isShared_3789_ == 0)
{
lean_ctor_set_tag(v___x_3788_, 1);
lean_ctor_set(v___x_3788_, 0, v___x_3820_);
v___x_3822_ = v___x_3788_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3820_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
else
{
lean_object* v___x_3824_; size_t v___x_3825_; size_t v___x_3826_; lean_object* v___x_3827_; 
lean_del_object(v___x_3788_);
v___x_3824_ = lean_box(0);
v___x_3825_ = ((size_t)0ULL);
v___x_3826_ = lean_usize_of_nat(v___x_3818_);
v___x_3827_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3817_, v___x_3825_, v___x_3826_, v___x_3824_, v___y_3760_);
lean_dec(v_a_3817_);
if (lean_obj_tag(v___x_3827_) == 0)
{
lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3834_; 
v_isSharedCheck_3834_ = !lean_is_exclusive(v___x_3827_);
if (v_isSharedCheck_3834_ == 0)
{
lean_object* v_unused_3835_; 
v_unused_3835_ = lean_ctor_get(v___x_3827_, 0);
lean_dec(v_unused_3835_);
v___x_3829_ = v___x_3827_;
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
else
{
lean_dec(v___x_3827_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
lean_object* v___x_3832_; 
if (v_isShared_3830_ == 0)
{
lean_ctor_set_tag(v___x_3829_, 1);
lean_ctor_set(v___x_3829_, 0, v___x_3824_);
v___x_3832_ = v___x_3829_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v___x_3824_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
}
else
{
lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3843_; 
v_a_3836_ = lean_ctor_get(v___x_3827_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___x_3827_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3838_ = v___x_3827_;
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v___x_3827_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3841_; 
if (v_isShared_3839_ == 0)
{
v___x_3841_ = v___x_3838_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_a_3836_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3852_; 
lean_del_object(v___x_3766_);
lean_dec_ref(v_depIdxs_3764_);
lean_dec_ref(v_ws_3763_);
lean_dec_ref(v_leanOpts_3753_);
lean_dec_ref(v_pkg_3752_);
v_a_3845_ = lean_ctor_get(v___x_3785_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v___x_3785_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3847_ = v___x_3785_;
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3785_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3850_; 
if (v_isShared_3848_ == 0)
{
v___x_3850_ = v___x_3847_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(1, 1, 0);
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
else
{
lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; uint8_t v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; 
lean_inc(v_baseName_3781_);
lean_del_object(v___x_3766_);
lean_dec_ref(v_depIdxs_3764_);
lean_dec_ref(v_ws_3763_);
lean_dec(v___y_3759_);
lean_dec_ref(v_leanOpts_3753_);
lean_dec_ref(v_pkg_3752_);
v___x_3853_ = l_Lean_Name_toString(v_baseName_3781_, v___x_3762_);
v___x_3854_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_3855_ = lean_string_append(v___x_3853_, v___x_3854_);
v___x_3856_ = 3;
v___x_3857_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3857_, 0, v___x_3855_);
lean_ctor_set_uint8(v___x_3857_, sizeof(void*)*1, v___x_3856_);
lean_inc_ref(v___y_3760_);
v___x_3858_ = lean_apply_2(v___y_3760_, v___x_3857_, lean_box(0));
v___x_3859_ = lean_box(0);
v___x_3860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3859_);
return v___x_3860_;
}
}
}
}
else
{
lean_object* v___x_3862_; lean_object* v___x_3863_; 
lean_dec_ref(v_leanOpts_3753_);
lean_dec_ref(v_pkg_3752_);
v___x_3862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3862_, 0, v_b_3758_);
lean_ctor_set(v___x_3862_, 1, v___y_3759_);
v___x_3863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3863_, 0, v___x_3862_);
return v___x_3863_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg___boxed(lean_object* v_pkg_3864_, lean_object* v_leanOpts_3865_, lean_object* v_reconfigure_3866_, lean_object* v_as_3867_, lean_object* v_i_3868_, lean_object* v_stop_3869_, lean_object* v_b_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_){
_start:
{
uint8_t v_reconfigure_boxed_3874_; size_t v_i_boxed_3875_; size_t v_stop_boxed_3876_; lean_object* v_res_3877_; 
v_reconfigure_boxed_3874_ = lean_unbox(v_reconfigure_3866_);
v_i_boxed_3875_ = lean_unbox_usize(v_i_3868_);
lean_dec(v_i_3868_);
v_stop_boxed_3876_ = lean_unbox_usize(v_stop_3869_);
lean_dec(v_stop_3869_);
v_res_3877_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg(v_pkg_3864_, v_leanOpts_3865_, v_reconfigure_boxed_3874_, v_as_3867_, v_i_boxed_3875_, v_stop_boxed_3876_, v_b_3870_, v___y_3871_, v___y_3872_);
lean_dec_ref(v___y_3872_);
lean_dec_ref(v_as_3867_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___redArg(lean_object* v_leanOpts_3878_, uint8_t v_reconfigure_3879_, lean_object* v_ws_3880_, lean_object* v_i_3881_, lean_object* v_next_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_){
_start:
{
lean_object* v_packages_3886_; lean_object* v_pkg_3887_; lean_object* v_ws_3889_; lean_object* v_depIdxs_3890_; lean_object* v___y_3891_; lean_object* v___y_3892_; lean_object* v_____x_3903_; lean_object* v___y_3904_; lean_object* v___y_3905_; lean_object* v_depConfigs_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v_s_3911_; lean_object* v___x_3912_; uint8_t v___x_3913_; 
v_packages_3886_ = lean_ctor_get(v_ws_3880_, 4);
v_pkg_3887_ = lean_array_fget(v_packages_3886_, v_i_3881_);
lean_dec(v_i_3881_);
v_depConfigs_3908_ = lean_ctor_get(v_pkg_3887_, 12);
v___x_3909_ = lean_array_get_size(v_depConfigs_3908_);
v___x_3910_ = lean_mk_empty_array_with_capacity(v___x_3909_);
lean_inc_ref(v___x_3910_);
lean_inc_ref(v_ws_3880_);
v_s_3911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_3911_, 0, v_ws_3880_);
lean_ctor_set(v_s_3911_, 1, v___x_3910_);
v___x_3912_ = lean_unsigned_to_nat(0u);
v___x_3913_ = lean_nat_dec_le(v___x_3909_, v___x_3909_);
if (v___x_3913_ == 0)
{
uint8_t v___x_3914_; 
v___x_3914_ = lean_nat_dec_lt(v___x_3912_, v___x_3909_);
if (v___x_3914_ == 0)
{
lean_object* v_ws_3915_; lean_object* v_packages_3916_; lean_object* v___x_3917_; uint8_t v___x_3918_; 
lean_dec_ref_known(v_s_3911_, 2);
v_ws_3915_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_3880_, v_pkg_3887_, v___x_3910_);
v_packages_3916_ = lean_ctor_get(v_ws_3915_, 4);
v___x_3917_ = lean_array_get_size(v_packages_3916_);
v___x_3918_ = lean_nat_dec_lt(v_next_3882_, v___x_3917_);
if (v___x_3918_ == 0)
{
lean_object* v___x_3919_; lean_object* v___x_3920_; 
lean_dec(v_next_3882_);
lean_dec_ref(v_leanOpts_3878_);
v___x_3919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3919_, 0, v_ws_3915_);
lean_ctor_set(v___x_3919_, 1, v___y_3883_);
v___x_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3919_);
return v___x_3920_;
}
else
{
lean_object* v___x_3921_; lean_object* v___x_3922_; 
v___x_3921_ = lean_unsigned_to_nat(1u);
v___x_3922_ = lean_nat_add(v_next_3882_, v___x_3921_);
v_ws_3880_ = v_ws_3915_;
v_i_3881_ = v_next_3882_;
v_next_3882_ = v___x_3922_;
goto _start;
}
}
else
{
size_t v___x_3924_; size_t v___x_3925_; lean_object* v___x_3926_; 
lean_dec_ref(v___x_3910_);
lean_dec_ref(v_ws_3880_);
v___x_3924_ = lean_usize_of_nat(v___x_3909_);
v___x_3925_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_3878_);
lean_inc(v_pkg_3887_);
v___x_3926_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg(v_pkg_3887_, v_leanOpts_3878_, v_reconfigure_3879_, v_depConfigs_3908_, v___x_3924_, v___x_3925_, v_s_3911_, v___y_3883_, v___y_3884_);
if (lean_obj_tag(v___x_3926_) == 0)
{
lean_object* v_a_3927_; lean_object* v_fst_3928_; lean_object* v_snd_3929_; 
v_a_3927_ = lean_ctor_get(v___x_3926_, 0);
lean_inc(v_a_3927_);
lean_dec_ref_known(v___x_3926_, 1);
v_fst_3928_ = lean_ctor_get(v_a_3927_, 0);
lean_inc(v_fst_3928_);
v_snd_3929_ = lean_ctor_get(v_a_3927_, 1);
lean_inc(v_snd_3929_);
lean_dec(v_a_3927_);
v_____x_3903_ = v_fst_3928_;
v___y_3904_ = v_snd_3929_;
v___y_3905_ = v___y_3884_;
goto v___jp_3902_;
}
else
{
lean_object* v_a_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3937_; 
lean_dec(v_pkg_3887_);
lean_dec(v_next_3882_);
lean_dec_ref(v_leanOpts_3878_);
v_a_3930_ = lean_ctor_get(v___x_3926_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v___x_3926_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3932_ = v___x_3926_;
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_a_3930_);
lean_dec(v___x_3926_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3935_; 
if (v_isShared_3933_ == 0)
{
v___x_3935_ = v___x_3932_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_a_3930_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
}
}
else
{
uint8_t v___x_3938_; 
v___x_3938_ = lean_nat_dec_lt(v___x_3912_, v___x_3909_);
if (v___x_3938_ == 0)
{
lean_dec_ref_known(v_s_3911_, 2);
v_ws_3889_ = v_ws_3880_;
v_depIdxs_3890_ = v___x_3910_;
v___y_3891_ = v___y_3883_;
v___y_3892_ = v___y_3884_;
goto v___jp_3888_;
}
else
{
size_t v___x_3939_; size_t v___x_3940_; lean_object* v___x_3941_; 
lean_dec_ref(v___x_3910_);
lean_dec_ref(v_ws_3880_);
v___x_3939_ = lean_usize_of_nat(v___x_3909_);
v___x_3940_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_3878_);
lean_inc(v_pkg_3887_);
v___x_3941_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg(v_pkg_3887_, v_leanOpts_3878_, v_reconfigure_3879_, v_depConfigs_3908_, v___x_3939_, v___x_3940_, v_s_3911_, v___y_3883_, v___y_3884_);
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3942_; lean_object* v_fst_3943_; lean_object* v_snd_3944_; 
v_a_3942_ = lean_ctor_get(v___x_3941_, 0);
lean_inc(v_a_3942_);
lean_dec_ref_known(v___x_3941_, 1);
v_fst_3943_ = lean_ctor_get(v_a_3942_, 0);
lean_inc(v_fst_3943_);
v_snd_3944_ = lean_ctor_get(v_a_3942_, 1);
lean_inc(v_snd_3944_);
lean_dec(v_a_3942_);
v_____x_3903_ = v_fst_3943_;
v___y_3904_ = v_snd_3944_;
v___y_3905_ = v___y_3884_;
goto v___jp_3902_;
}
else
{
lean_object* v_a_3945_; lean_object* v___x_3947_; uint8_t v_isShared_3948_; uint8_t v_isSharedCheck_3952_; 
lean_dec(v_pkg_3887_);
lean_dec(v_next_3882_);
lean_dec_ref(v_leanOpts_3878_);
v_a_3945_ = lean_ctor_get(v___x_3941_, 0);
v_isSharedCheck_3952_ = !lean_is_exclusive(v___x_3941_);
if (v_isSharedCheck_3952_ == 0)
{
v___x_3947_ = v___x_3941_;
v_isShared_3948_ = v_isSharedCheck_3952_;
goto v_resetjp_3946_;
}
else
{
lean_inc(v_a_3945_);
lean_dec(v___x_3941_);
v___x_3947_ = lean_box(0);
v_isShared_3948_ = v_isSharedCheck_3952_;
goto v_resetjp_3946_;
}
v_resetjp_3946_:
{
lean_object* v___x_3950_; 
if (v_isShared_3948_ == 0)
{
v___x_3950_ = v___x_3947_;
goto v_reusejp_3949_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v_a_3945_);
v___x_3950_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3949_;
}
v_reusejp_3949_:
{
return v___x_3950_;
}
}
}
}
}
v___jp_3888_:
{
lean_object* v_ws_3893_; lean_object* v_packages_3894_; lean_object* v___x_3895_; uint8_t v___x_3896_; 
v_ws_3893_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_3889_, v_pkg_3887_, v_depIdxs_3890_);
v_packages_3894_ = lean_ctor_get(v_ws_3893_, 4);
v___x_3895_ = lean_array_get_size(v_packages_3894_);
v___x_3896_ = lean_nat_dec_lt(v_next_3882_, v___x_3895_);
if (v___x_3896_ == 0)
{
lean_object* v___x_3897_; lean_object* v___x_3898_; 
lean_dec(v_next_3882_);
lean_dec_ref(v_leanOpts_3878_);
v___x_3897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3897_, 0, v_ws_3893_);
lean_ctor_set(v___x_3897_, 1, v___y_3891_);
v___x_3898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3897_);
return v___x_3898_;
}
else
{
lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3899_ = lean_unsigned_to_nat(1u);
v___x_3900_ = lean_nat_add(v_next_3882_, v___x_3899_);
v_ws_3880_ = v_ws_3893_;
v_i_3881_ = v_next_3882_;
v_next_3882_ = v___x_3900_;
v___y_3883_ = v___y_3891_;
v___y_3884_ = v___y_3892_;
goto _start;
}
}
v___jp_3902_:
{
lean_object* v_ws_3906_; lean_object* v_depIdxs_3907_; 
v_ws_3906_ = lean_ctor_get(v_____x_3903_, 0);
lean_inc_ref(v_ws_3906_);
v_depIdxs_3907_ = lean_ctor_get(v_____x_3903_, 1);
lean_inc_ref(v_depIdxs_3907_);
lean_dec_ref(v_____x_3903_);
v_ws_3889_ = v_ws_3906_;
v_depIdxs_3890_ = v_depIdxs_3907_;
v___y_3891_ = v___y_3904_;
v___y_3892_ = v___y_3905_;
goto v___jp_3888_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___redArg___boxed(lean_object* v_leanOpts_3953_, lean_object* v_reconfigure_3954_, lean_object* v_ws_3955_, lean_object* v_i_3956_, lean_object* v_next_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_){
_start:
{
uint8_t v_reconfigure_boxed_3961_; lean_object* v_res_3962_; 
v_reconfigure_boxed_3961_ = lean_unbox(v_reconfigure_3954_);
v_res_3962_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___redArg(v_leanOpts_3953_, v_reconfigure_boxed_3961_, v_ws_3955_, v_i_3956_, v_next_3957_, v___y_3958_, v___y_3959_);
lean_dec_ref(v___y_3959_);
return v_res_3962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(lean_object* v_n_3963_, lean_object* v_f_3964_, lean_object* v_xs_3965_, lean_object* v_k_3966_, lean_object* v_acc_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_){
_start:
{
uint8_t v___x_3971_; 
v___x_3971_ = lean_nat_dec_lt(v_k_3966_, v_n_3963_);
if (v___x_3971_ == 0)
{
lean_object* v___x_3972_; lean_object* v___x_3973_; 
lean_dec(v_k_3966_);
lean_dec_ref(v_f_3964_);
v___x_3972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3972_, 0, v_acc_3967_);
lean_ctor_set(v___x_3972_, 1, v___y_3968_);
v___x_3973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3973_, 0, v___x_3972_);
return v___x_3973_;
}
else
{
lean_object* v___x_3974_; lean_object* v___x_3975_; 
v___x_3974_ = lean_array_fget_borrowed(v_xs_3965_, v_k_3966_);
lean_inc_ref(v_f_3964_);
lean_inc_ref(v___y_3969_);
lean_inc(v___x_3974_);
v___x_3975_ = lean_apply_4(v_f_3964_, v___x_3974_, v___y_3968_, v___y_3969_, lean_box(0));
if (lean_obj_tag(v___x_3975_) == 0)
{
lean_object* v_a_3976_; lean_object* v_fst_3977_; lean_object* v_snd_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
v_a_3976_ = lean_ctor_get(v___x_3975_, 0);
lean_inc(v_a_3976_);
lean_dec_ref_known(v___x_3975_, 1);
v_fst_3977_ = lean_ctor_get(v_a_3976_, 0);
lean_inc(v_fst_3977_);
v_snd_3978_ = lean_ctor_get(v_a_3976_, 1);
lean_inc(v_snd_3978_);
lean_dec(v_a_3976_);
v___x_3979_ = lean_unsigned_to_nat(1u);
v___x_3980_ = lean_nat_add(v_k_3966_, v___x_3979_);
lean_dec(v_k_3966_);
v___x_3981_ = lean_array_push(v_acc_3967_, v_fst_3977_);
v_k_3966_ = v___x_3980_;
v_acc_3967_ = v___x_3981_;
v___y_3968_ = v_snd_3978_;
goto _start;
}
else
{
lean_object* v_a_3983_; lean_object* v___x_3985_; uint8_t v_isShared_3986_; uint8_t v_isSharedCheck_3990_; 
lean_dec_ref(v_acc_3967_);
lean_dec(v_k_3966_);
lean_dec_ref(v_f_3964_);
v_a_3983_ = lean_ctor_get(v___x_3975_, 0);
v_isSharedCheck_3990_ = !lean_is_exclusive(v___x_3975_);
if (v_isSharedCheck_3990_ == 0)
{
v___x_3985_ = v___x_3975_;
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
else
{
lean_inc(v_a_3983_);
lean_dec(v___x_3975_);
v___x_3985_ = lean_box(0);
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
v_resetjp_3984_:
{
lean_object* v___x_3988_; 
if (v_isShared_3986_ == 0)
{
v___x_3988_ = v___x_3985_;
goto v_reusejp_3987_;
}
else
{
lean_object* v_reuseFailAlloc_3989_; 
v_reuseFailAlloc_3989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3989_, 0, v_a_3983_);
v___x_3988_ = v_reuseFailAlloc_3989_;
goto v_reusejp_3987_;
}
v_reusejp_3987_:
{
return v___x_3988_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg___boxed(lean_object* v_n_3991_, lean_object* v_f_3992_, lean_object* v_xs_3993_, lean_object* v_k_3994_, lean_object* v_acc_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_){
_start:
{
lean_object* v_res_3999_; 
v_res_3999_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(v_n_3991_, v_f_3992_, v_xs_3993_, v_k_3994_, v_acc_3995_, v___y_3996_, v___y_3997_);
lean_dec_ref(v___y_3997_);
lean_dec_ref(v_xs_3993_);
lean_dec(v_n_3991_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg(lean_object* v_upperBound_4000_, lean_object* v_fst_4001_, lean_object* v___x_4002_, lean_object* v_leanOpts_4003_, lean_object* v_a_4004_, lean_object* v_b_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_){
_start:
{
lean_object* v_fst_4010_; lean_object* v_snd_4011_; uint8_t v___x_4015_; 
v___x_4015_ = lean_nat_dec_lt(v_a_4004_, v_upperBound_4000_);
if (v___x_4015_ == 0)
{
lean_object* v___x_4016_; lean_object* v___x_4017_; 
lean_dec(v_a_4004_);
lean_dec_ref(v_leanOpts_4003_);
v___x_4016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4016_, 0, v_b_4005_);
lean_ctor_set(v___x_4016_, 1, v___y_4006_);
v___x_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4017_, 0, v___x_4016_);
return v___x_4017_;
}
else
{
lean_object* v___x_4018_; lean_object* v___x_4019_; 
v___x_4018_ = lean_array_fget_borrowed(v_fst_4001_, v_a_4004_);
lean_inc(v___x_4018_);
v___x_4019_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v___x_4018_, v___y_4006_, v___y_4007_);
if (lean_obj_tag(v___x_4019_) == 0)
{
lean_object* v_a_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4073_; 
v_a_4020_ = lean_ctor_get(v___x_4019_, 0);
v_isSharedCheck_4073_ = !lean_is_exclusive(v___x_4019_);
if (v_isSharedCheck_4073_ == 0)
{
v___x_4022_ = v___x_4019_;
v_isShared_4023_ = v_isSharedCheck_4073_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_a_4020_);
lean_dec(v___x_4019_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4073_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
lean_object* v_snd_4024_; lean_object* v___x_4025_; lean_object* v_opts_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; 
v_snd_4024_ = lean_ctor_get(v_a_4020_, 1);
lean_inc(v_snd_4024_);
lean_dec(v_a_4020_);
v___x_4025_ = lean_array_fget_borrowed(v___x_4002_, v_a_4004_);
v_opts_4026_ = lean_ctor_get(v___x_4025_, 4);
v___x_4027_ = lean_unsigned_to_nat(0u);
v___x_4028_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v_leanOpts_4003_);
lean_inc(v_opts_4026_);
lean_inc(v___x_4018_);
v___x_4029_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_b_4005_, v___x_4018_, v_opts_4026_, v_leanOpts_4003_, v___x_4015_, v___x_4028_);
if (lean_obj_tag(v___x_4029_) == 0)
{
lean_object* v_a_4030_; lean_object* v_a_4031_; lean_object* v___x_4032_; uint8_t v___x_4033_; 
lean_del_object(v___x_4022_);
v_a_4030_ = lean_ctor_get(v___x_4029_, 0);
lean_inc(v_a_4030_);
v_a_4031_ = lean_ctor_get(v___x_4029_, 1);
lean_inc(v_a_4031_);
lean_dec_ref_known(v___x_4029_, 2);
v___x_4032_ = lean_array_get_size(v_a_4031_);
v___x_4033_ = lean_nat_dec_lt(v___x_4027_, v___x_4032_);
if (v___x_4033_ == 0)
{
lean_dec(v_a_4031_);
v_fst_4010_ = v_a_4030_;
v_snd_4011_ = v_snd_4024_;
goto v___jp_4009_;
}
else
{
lean_object* v___x_4034_; size_t v___x_4035_; size_t v___x_4036_; lean_object* v___x_4037_; 
v___x_4034_ = lean_box(0);
v___x_4035_ = ((size_t)0ULL);
v___x_4036_ = lean_usize_of_nat(v___x_4032_);
v___x_4037_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4031_, v___x_4035_, v___x_4036_, v___x_4034_, v___y_4007_);
lean_dec(v_a_4031_);
if (lean_obj_tag(v___x_4037_) == 0)
{
lean_dec_ref_known(v___x_4037_, 1);
v_fst_4010_ = v_a_4030_;
v_snd_4011_ = v_snd_4024_;
goto v___jp_4009_;
}
else
{
lean_object* v_a_4038_; lean_object* v___x_4040_; uint8_t v_isShared_4041_; uint8_t v_isSharedCheck_4045_; 
lean_dec(v_a_4030_);
lean_dec(v_snd_4024_);
lean_dec(v_a_4004_);
lean_dec_ref(v_leanOpts_4003_);
v_a_4038_ = lean_ctor_get(v___x_4037_, 0);
v_isSharedCheck_4045_ = !lean_is_exclusive(v___x_4037_);
if (v_isSharedCheck_4045_ == 0)
{
v___x_4040_ = v___x_4037_;
v_isShared_4041_ = v_isSharedCheck_4045_;
goto v_resetjp_4039_;
}
else
{
lean_inc(v_a_4038_);
lean_dec(v___x_4037_);
v___x_4040_ = lean_box(0);
v_isShared_4041_ = v_isSharedCheck_4045_;
goto v_resetjp_4039_;
}
v_resetjp_4039_:
{
lean_object* v___x_4043_; 
if (v_isShared_4041_ == 0)
{
v___x_4043_ = v___x_4040_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v_a_4038_);
v___x_4043_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
return v___x_4043_;
}
}
}
}
}
else
{
lean_object* v_a_4046_; lean_object* v___x_4047_; uint8_t v___x_4048_; 
lean_dec(v_snd_4024_);
lean_dec(v_a_4004_);
lean_dec_ref(v_leanOpts_4003_);
v_a_4046_ = lean_ctor_get(v___x_4029_, 1);
lean_inc(v_a_4046_);
lean_dec_ref_known(v___x_4029_, 2);
v___x_4047_ = lean_array_get_size(v_a_4046_);
v___x_4048_ = lean_nat_dec_lt(v___x_4027_, v___x_4047_);
if (v___x_4048_ == 0)
{
lean_object* v___x_4049_; lean_object* v___x_4051_; 
lean_dec(v_a_4046_);
v___x_4049_ = lean_box(0);
if (v_isShared_4023_ == 0)
{
lean_ctor_set_tag(v___x_4022_, 1);
lean_ctor_set(v___x_4022_, 0, v___x_4049_);
v___x_4051_ = v___x_4022_;
goto v_reusejp_4050_;
}
else
{
lean_object* v_reuseFailAlloc_4052_; 
v_reuseFailAlloc_4052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4052_, 0, v___x_4049_);
v___x_4051_ = v_reuseFailAlloc_4052_;
goto v_reusejp_4050_;
}
v_reusejp_4050_:
{
return v___x_4051_;
}
}
else
{
lean_object* v___x_4053_; size_t v___x_4054_; size_t v___x_4055_; lean_object* v___x_4056_; 
lean_del_object(v___x_4022_);
v___x_4053_ = lean_box(0);
v___x_4054_ = ((size_t)0ULL);
v___x_4055_ = lean_usize_of_nat(v___x_4047_);
v___x_4056_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4046_, v___x_4054_, v___x_4055_, v___x_4053_, v___y_4007_);
lean_dec(v_a_4046_);
if (lean_obj_tag(v___x_4056_) == 0)
{
lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4063_; 
v_isSharedCheck_4063_ = !lean_is_exclusive(v___x_4056_);
if (v_isSharedCheck_4063_ == 0)
{
lean_object* v_unused_4064_; 
v_unused_4064_ = lean_ctor_get(v___x_4056_, 0);
lean_dec(v_unused_4064_);
v___x_4058_ = v___x_4056_;
v_isShared_4059_ = v_isSharedCheck_4063_;
goto v_resetjp_4057_;
}
else
{
lean_dec(v___x_4056_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4063_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
lean_object* v___x_4061_; 
if (v_isShared_4059_ == 0)
{
lean_ctor_set_tag(v___x_4058_, 1);
lean_ctor_set(v___x_4058_, 0, v___x_4053_);
v___x_4061_ = v___x_4058_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v___x_4053_);
v___x_4061_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
return v___x_4061_;
}
}
}
else
{
lean_object* v_a_4065_; lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4072_; 
v_a_4065_ = lean_ctor_get(v___x_4056_, 0);
v_isSharedCheck_4072_ = !lean_is_exclusive(v___x_4056_);
if (v_isSharedCheck_4072_ == 0)
{
v___x_4067_ = v___x_4056_;
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
else
{
lean_inc(v_a_4065_);
lean_dec(v___x_4056_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
lean_object* v___x_4070_; 
if (v_isShared_4068_ == 0)
{
v___x_4070_ = v___x_4067_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v_a_4065_);
v___x_4070_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
return v___x_4070_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4074_; lean_object* v___x_4076_; uint8_t v_isShared_4077_; uint8_t v_isSharedCheck_4081_; 
lean_dec_ref(v_b_4005_);
lean_dec(v_a_4004_);
lean_dec_ref(v_leanOpts_4003_);
v_a_4074_ = lean_ctor_get(v___x_4019_, 0);
v_isSharedCheck_4081_ = !lean_is_exclusive(v___x_4019_);
if (v_isSharedCheck_4081_ == 0)
{
v___x_4076_ = v___x_4019_;
v_isShared_4077_ = v_isSharedCheck_4081_;
goto v_resetjp_4075_;
}
else
{
lean_inc(v_a_4074_);
lean_dec(v___x_4019_);
v___x_4076_ = lean_box(0);
v_isShared_4077_ = v_isSharedCheck_4081_;
goto v_resetjp_4075_;
}
v_resetjp_4075_:
{
lean_object* v___x_4079_; 
if (v_isShared_4077_ == 0)
{
v___x_4079_ = v___x_4076_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4080_; 
v_reuseFailAlloc_4080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4080_, 0, v_a_4074_);
v___x_4079_ = v_reuseFailAlloc_4080_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
return v___x_4079_;
}
}
}
}
v___jp_4009_:
{
lean_object* v___x_4012_; lean_object* v___x_4013_; 
v___x_4012_ = lean_unsigned_to_nat(1u);
v___x_4013_ = lean_nat_add(v_a_4004_, v___x_4012_);
lean_dec(v_a_4004_);
v_a_4004_ = v___x_4013_;
v_b_4005_ = v_fst_4010_;
v___y_4006_ = v_snd_4011_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg___boxed(lean_object* v_upperBound_4082_, lean_object* v_fst_4083_, lean_object* v___x_4084_, lean_object* v_leanOpts_4085_, lean_object* v_a_4086_, lean_object* v_b_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_){
_start:
{
lean_object* v_res_4091_; 
v_res_4091_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg(v_upperBound_4082_, v_fst_4083_, v___x_4084_, v_leanOpts_4085_, v_a_4086_, v_b_4087_, v___y_4088_, v___y_4089_);
lean_dec_ref(v___y_4089_);
lean_dec_ref(v___x_4084_);
lean_dec_ref(v_fst_4083_);
lean_dec(v_upperBound_4082_);
return v_res_4091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg(lean_object* v_a_4092_, lean_object* v_b_4093_){
_start:
{
lean_object* v_next_4094_; 
v_next_4094_ = lean_ctor_get(v_a_4092_, 0);
lean_inc(v_next_4094_);
if (lean_obj_tag(v_next_4094_) == 0)
{
lean_dec_ref(v_a_4092_);
return v_b_4093_;
}
else
{
lean_object* v_upperBound_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4115_; 
v_upperBound_4095_ = lean_ctor_get(v_a_4092_, 1);
v_isSharedCheck_4115_ = !lean_is_exclusive(v_a_4092_);
if (v_isSharedCheck_4115_ == 0)
{
lean_object* v_unused_4116_; 
v_unused_4116_ = lean_ctor_get(v_a_4092_, 0);
lean_dec(v_unused_4116_);
v___x_4097_ = v_a_4092_;
v_isShared_4098_ = v_isSharedCheck_4115_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_upperBound_4095_);
lean_dec(v_a_4092_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4115_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v_val_4099_; lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4114_; 
v_val_4099_ = lean_ctor_get(v_next_4094_, 0);
v_isSharedCheck_4114_ = !lean_is_exclusive(v_next_4094_);
if (v_isSharedCheck_4114_ == 0)
{
v___x_4101_ = v_next_4094_;
v_isShared_4102_ = v_isSharedCheck_4114_;
goto v_resetjp_4100_;
}
else
{
lean_inc(v_val_4099_);
lean_dec(v_next_4094_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4114_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
uint8_t v___x_4103_; 
v___x_4103_ = lean_nat_dec_lt(v_val_4099_, v_upperBound_4095_);
if (v___x_4103_ == 0)
{
lean_del_object(v___x_4101_);
lean_dec(v_val_4099_);
lean_del_object(v___x_4097_);
lean_dec(v_upperBound_4095_);
return v_b_4093_;
}
else
{
lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4107_; 
v___x_4104_ = lean_unsigned_to_nat(1u);
v___x_4105_ = lean_nat_add(v_val_4099_, v___x_4104_);
if (v_isShared_4102_ == 0)
{
lean_ctor_set(v___x_4101_, 0, v___x_4105_);
v___x_4107_ = v___x_4101_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4113_; 
v_reuseFailAlloc_4113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4113_, 0, v___x_4105_);
v___x_4107_ = v_reuseFailAlloc_4113_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
lean_object* v___x_4109_; 
if (v_isShared_4098_ == 0)
{
lean_ctor_set(v___x_4097_, 0, v___x_4107_);
v___x_4109_ = v___x_4097_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v___x_4107_);
lean_ctor_set(v_reuseFailAlloc_4112_, 1, v_upperBound_4095_);
v___x_4109_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
lean_object* v___x_4110_; 
v___x_4110_ = lean_array_push(v_b_4093_, v_val_4099_);
v_a_4092_ = v___x_4109_;
v_b_4093_ = v___x_4110_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(lean_object* v_ws_4119_, lean_object* v_toUpdate_4120_, lean_object* v_leanOpts_4121_, uint8_t v_updateToolchain_4122_, lean_object* v_a_4123_){
_start:
{
lean_object* v___x_4125_; lean_object* v___x_4126_; 
v___x_4125_ = lean_box(1);
v___x_4126_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_4123_, v_ws_4119_, v_toUpdate_4120_, v___x_4125_);
if (lean_obj_tag(v___x_4126_) == 0)
{
lean_object* v_a_4127_; lean_object* v_snd_4128_; lean_object* v_packages_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v_baseName_4132_; lean_object* v_depConfigs_4133_; lean_object* v___f_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; 
v_a_4127_ = lean_ctor_get(v___x_4126_, 0);
lean_inc(v_a_4127_);
lean_dec_ref_known(v___x_4126_, 1);
v_snd_4128_ = lean_ctor_get(v_a_4127_, 1);
lean_inc(v_snd_4128_);
lean_dec(v_a_4127_);
v_packages_4129_ = lean_ctor_get(v_ws_4119_, 4);
v___x_4130_ = lean_unsigned_to_nat(0u);
v___x_4131_ = lean_array_fget_borrowed(v_packages_4129_, v___x_4130_);
v_baseName_4132_ = lean_ctor_get(v___x_4131_, 1);
v_depConfigs_4133_ = lean_ctor_get(v___x_4131_, 12);
lean_inc(v___x_4131_);
lean_inc_ref(v_ws_4119_);
lean_inc(v_baseName_4132_);
v___f_4134_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed), 7, 3);
lean_closure_set(v___f_4134_, 0, v_baseName_4132_);
lean_closure_set(v___f_4134_, 1, v_ws_4119_);
lean_closure_set(v___f_4134_, 2, v___x_4131_);
v___x_4135_ = lean_array_get_size(v_depConfigs_4133_);
lean_inc_ref(v_depConfigs_4133_);
v___x_4136_ = l_Array_reverse___redArg(v_depConfigs_4133_);
v___x_4137_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0));
v___x_4138_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(v___x_4135_, v___f_4134_, v___x_4136_, v___x_4130_, v___x_4137_, v_snd_4128_, v_a_4123_);
if (lean_obj_tag(v___x_4138_) == 0)
{
lean_object* v_a_4139_; lean_object* v_fst_4140_; lean_object* v_snd_4141_; lean_object* v___x_4143_; uint8_t v_isShared_4144_; uint8_t v_isSharedCheck_4216_; 
v_a_4139_ = lean_ctor_get(v___x_4138_, 0);
lean_inc(v_a_4139_);
lean_dec_ref_known(v___x_4138_, 1);
v_fst_4140_ = lean_ctor_get(v_a_4139_, 0);
v_snd_4141_ = lean_ctor_get(v_a_4139_, 1);
v_isSharedCheck_4216_ = !lean_is_exclusive(v_a_4139_);
if (v_isSharedCheck_4216_ == 0)
{
v___x_4143_ = v_a_4139_;
v_isShared_4144_ = v_isSharedCheck_4216_;
goto v_resetjp_4142_;
}
else
{
lean_inc(v_snd_4141_);
lean_inc(v_fst_4140_);
lean_dec(v_a_4139_);
v___x_4143_ = lean_box(0);
v_isShared_4144_ = v_isSharedCheck_4216_;
goto v_resetjp_4142_;
}
v_resetjp_4142_:
{
lean_object* v___y_4146_; 
if (v_updateToolchain_4122_ == 0)
{
v___y_4146_ = v_a_4123_;
goto v___jp_4145_;
}
else
{
lean_object* v___x_4207_; 
lean_inc_ref(v_ws_4119_);
v___x_4207_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(v_a_4123_, v_ws_4119_, v_fst_4140_);
if (lean_obj_tag(v___x_4207_) == 0)
{
lean_dec_ref_known(v___x_4207_, 1);
v___y_4146_ = v_a_4123_;
goto v___jp_4145_;
}
else
{
lean_object* v_a_4208_; lean_object* v___x_4210_; uint8_t v_isShared_4211_; uint8_t v_isSharedCheck_4215_; 
lean_del_object(v___x_4143_);
lean_dec(v_snd_4141_);
lean_dec(v_fst_4140_);
lean_dec_ref(v___x_4136_);
lean_dec_ref(v_leanOpts_4121_);
lean_dec_ref(v_ws_4119_);
v_a_4208_ = lean_ctor_get(v___x_4207_, 0);
v_isSharedCheck_4215_ = !lean_is_exclusive(v___x_4207_);
if (v_isSharedCheck_4215_ == 0)
{
v___x_4210_ = v___x_4207_;
v_isShared_4211_ = v_isSharedCheck_4215_;
goto v_resetjp_4209_;
}
else
{
lean_inc(v_a_4208_);
lean_dec(v___x_4207_);
v___x_4210_ = lean_box(0);
v_isShared_4211_ = v_isSharedCheck_4215_;
goto v_resetjp_4209_;
}
v_resetjp_4209_:
{
lean_object* v___x_4213_; 
if (v_isShared_4211_ == 0)
{
v___x_4213_ = v___x_4210_;
goto v_reusejp_4212_;
}
else
{
lean_object* v_reuseFailAlloc_4214_; 
v_reuseFailAlloc_4214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4214_, 0, v_a_4208_);
v___x_4213_ = v_reuseFailAlloc_4214_;
goto v_reusejp_4212_;
}
v_reusejp_4212_:
{
return v___x_4213_;
}
}
}
}
v___jp_4145_:
{
lean_object* v___x_4147_; lean_object* v___x_4148_; 
v___x_4147_ = lean_array_get_size(v_packages_4129_);
lean_inc_ref(v_leanOpts_4121_);
v___x_4148_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg(v___x_4135_, v_fst_4140_, v___x_4136_, v_leanOpts_4121_, v___x_4130_, v_ws_4119_, v_snd_4141_, v___y_4146_);
lean_dec_ref(v___x_4136_);
lean_dec(v_fst_4140_);
if (lean_obj_tag(v___x_4148_) == 0)
{
lean_object* v_a_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4198_; 
v_a_4149_ = lean_ctor_get(v___x_4148_, 0);
v_isSharedCheck_4198_ = !lean_is_exclusive(v___x_4148_);
if (v_isSharedCheck_4198_ == 0)
{
v___x_4151_ = v___x_4148_;
v_isShared_4152_ = v_isSharedCheck_4198_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_a_4149_);
lean_dec(v___x_4148_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4198_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v_fst_4153_; lean_object* v_snd_4154_; lean_object* v___x_4156_; uint8_t v_isShared_4157_; uint8_t v_isSharedCheck_4197_; 
v_fst_4153_ = lean_ctor_get(v_a_4149_, 0);
v_snd_4154_ = lean_ctor_get(v_a_4149_, 1);
v_isSharedCheck_4197_ = !lean_is_exclusive(v_a_4149_);
if (v_isSharedCheck_4197_ == 0)
{
v___x_4156_ = v_a_4149_;
v_isShared_4157_ = v_isSharedCheck_4197_;
goto v_resetjp_4155_;
}
else
{
lean_inc(v_snd_4154_);
lean_inc(v_fst_4153_);
lean_dec(v_a_4149_);
v___x_4156_ = lean_box(0);
v_isShared_4157_ = v_isSharedCheck_4197_;
goto v_resetjp_4155_;
}
v_resetjp_4155_:
{
lean_object* v_packages_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4163_; 
v_packages_4158_ = lean_ctor_get(v_fst_4153_, 4);
v___x_4159_ = lean_array_get_size(v_packages_4158_);
v___x_4160_ = lean_array_fget(v_packages_4158_, v___x_4130_);
v___x_4161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4161_, 0, v___x_4147_);
if (v_isShared_4144_ == 0)
{
lean_ctor_set(v___x_4143_, 1, v___x_4159_);
lean_ctor_set(v___x_4143_, 0, v___x_4161_);
v___x_4163_ = v___x_4143_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4196_; 
v_reuseFailAlloc_4196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4196_, 0, v___x_4161_);
lean_ctor_set(v_reuseFailAlloc_4196_, 1, v___x_4159_);
v___x_4163_ = v_reuseFailAlloc_4196_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
lean_object* v___x_4164_; lean_object* v___x_4165_; uint8_t v___x_4166_; 
v___x_4164_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg(v___x_4163_, v___x_4137_);
v___x_4165_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_fst_4153_, v___x_4160_, v___x_4164_);
v___x_4166_ = lean_nat_dec_eq(v___x_4147_, v___x_4159_);
if (v___x_4166_ == 0)
{
uint8_t v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; 
lean_del_object(v___x_4156_);
lean_del_object(v___x_4151_);
v___x_4167_ = 1;
v___x_4168_ = lean_unsigned_to_nat(1u);
v___x_4169_ = lean_nat_add(v___x_4147_, v___x_4168_);
v___x_4170_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___redArg(v_leanOpts_4121_, v___x_4167_, v___x_4165_, v___x_4147_, v___x_4169_, v_snd_4154_, v___y_4146_);
if (lean_obj_tag(v___x_4170_) == 0)
{
lean_object* v_a_4171_; lean_object* v___x_4173_; uint8_t v_isShared_4174_; uint8_t v_isSharedCheck_4188_; 
v_a_4171_ = lean_ctor_get(v___x_4170_, 0);
v_isSharedCheck_4188_ = !lean_is_exclusive(v___x_4170_);
if (v_isSharedCheck_4188_ == 0)
{
v___x_4173_ = v___x_4170_;
v_isShared_4174_ = v_isSharedCheck_4188_;
goto v_resetjp_4172_;
}
else
{
lean_inc(v_a_4171_);
lean_dec(v___x_4170_);
v___x_4173_ = lean_box(0);
v_isShared_4174_ = v_isSharedCheck_4188_;
goto v_resetjp_4172_;
}
v_resetjp_4172_:
{
lean_object* v_fst_4175_; lean_object* v_snd_4176_; lean_object* v___x_4178_; uint8_t v_isShared_4179_; uint8_t v_isSharedCheck_4187_; 
v_fst_4175_ = lean_ctor_get(v_a_4171_, 0);
v_snd_4176_ = lean_ctor_get(v_a_4171_, 1);
v_isSharedCheck_4187_ = !lean_is_exclusive(v_a_4171_);
if (v_isSharedCheck_4187_ == 0)
{
v___x_4178_ = v_a_4171_;
v_isShared_4179_ = v_isSharedCheck_4187_;
goto v_resetjp_4177_;
}
else
{
lean_inc(v_snd_4176_);
lean_inc(v_fst_4175_);
lean_dec(v_a_4171_);
v___x_4178_ = lean_box(0);
v_isShared_4179_ = v_isSharedCheck_4187_;
goto v_resetjp_4177_;
}
v_resetjp_4177_:
{
lean_object* v___x_4180_; lean_object* v___x_4182_; 
v___x_4180_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_4175_);
if (v_isShared_4179_ == 0)
{
lean_ctor_set(v___x_4178_, 0, v___x_4180_);
v___x_4182_ = v___x_4178_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v___x_4180_);
lean_ctor_set(v_reuseFailAlloc_4186_, 1, v_snd_4176_);
v___x_4182_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
lean_object* v___x_4184_; 
if (v_isShared_4174_ == 0)
{
lean_ctor_set(v___x_4173_, 0, v___x_4182_);
v___x_4184_ = v___x_4173_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4185_; 
v_reuseFailAlloc_4185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4185_, 0, v___x_4182_);
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
else
{
return v___x_4170_;
}
}
else
{
lean_object* v___x_4189_; lean_object* v___x_4191_; 
lean_dec_ref(v_leanOpts_4121_);
v___x_4189_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v___x_4165_);
if (v_isShared_4157_ == 0)
{
lean_ctor_set(v___x_4156_, 0, v___x_4189_);
v___x_4191_ = v___x_4156_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v___x_4189_);
lean_ctor_set(v_reuseFailAlloc_4195_, 1, v_snd_4154_);
v___x_4191_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
lean_object* v___x_4193_; 
if (v_isShared_4152_ == 0)
{
lean_ctor_set(v___x_4151_, 0, v___x_4191_);
v___x_4193_ = v___x_4151_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v___x_4191_);
v___x_4193_ = v_reuseFailAlloc_4194_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
return v___x_4193_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4199_; lean_object* v___x_4201_; uint8_t v_isShared_4202_; uint8_t v_isSharedCheck_4206_; 
lean_del_object(v___x_4143_);
lean_dec_ref(v_leanOpts_4121_);
v_a_4199_ = lean_ctor_get(v___x_4148_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v___x_4148_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4201_ = v___x_4148_;
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
else
{
lean_inc(v_a_4199_);
lean_dec(v___x_4148_);
v___x_4201_ = lean_box(0);
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
v_resetjp_4200_:
{
lean_object* v___x_4204_; 
if (v_isShared_4202_ == 0)
{
v___x_4204_ = v___x_4201_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4199_);
v___x_4204_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4203_;
}
v_reusejp_4203_:
{
return v___x_4204_;
}
}
}
}
}
}
else
{
lean_object* v_a_4217_; lean_object* v___x_4219_; uint8_t v_isShared_4220_; uint8_t v_isSharedCheck_4224_; 
lean_dec_ref(v___x_4136_);
lean_dec_ref(v_leanOpts_4121_);
lean_dec_ref(v_ws_4119_);
v_a_4217_ = lean_ctor_get(v___x_4138_, 0);
v_isSharedCheck_4224_ = !lean_is_exclusive(v___x_4138_);
if (v_isSharedCheck_4224_ == 0)
{
v___x_4219_ = v___x_4138_;
v_isShared_4220_ = v_isSharedCheck_4224_;
goto v_resetjp_4218_;
}
else
{
lean_inc(v_a_4217_);
lean_dec(v___x_4138_);
v___x_4219_ = lean_box(0);
v_isShared_4220_ = v_isSharedCheck_4224_;
goto v_resetjp_4218_;
}
v_resetjp_4218_:
{
lean_object* v___x_4222_; 
if (v_isShared_4220_ == 0)
{
v___x_4222_ = v___x_4219_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v_a_4217_);
v___x_4222_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
return v___x_4222_;
}
}
}
}
else
{
lean_object* v_a_4225_; lean_object* v___x_4227_; uint8_t v_isShared_4228_; uint8_t v_isSharedCheck_4232_; 
lean_dec_ref(v_leanOpts_4121_);
lean_dec_ref(v_ws_4119_);
v_a_4225_ = lean_ctor_get(v___x_4126_, 0);
v_isSharedCheck_4232_ = !lean_is_exclusive(v___x_4126_);
if (v_isSharedCheck_4232_ == 0)
{
v___x_4227_ = v___x_4126_;
v_isShared_4228_ = v_isSharedCheck_4232_;
goto v_resetjp_4226_;
}
else
{
lean_inc(v_a_4225_);
lean_dec(v___x_4126_);
v___x_4227_ = lean_box(0);
v_isShared_4228_ = v_isSharedCheck_4232_;
goto v_resetjp_4226_;
}
v_resetjp_4226_:
{
lean_object* v___x_4230_; 
if (v_isShared_4228_ == 0)
{
v___x_4230_ = v___x_4227_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v_a_4225_);
v___x_4230_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
return v___x_4230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___boxed(lean_object* v_ws_4233_, lean_object* v_toUpdate_4234_, lean_object* v_leanOpts_4235_, lean_object* v_updateToolchain_4236_, lean_object* v_a_4237_, lean_object* v_a_4238_){
_start:
{
uint8_t v_updateToolchain_boxed_4239_; lean_object* v_res_4240_; 
v_updateToolchain_boxed_4239_ = lean_unbox(v_updateToolchain_4236_);
v_res_4240_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(v_ws_4233_, v_toUpdate_4234_, v_leanOpts_4235_, v_updateToolchain_boxed_4239_, v_a_4237_);
lean_dec_ref(v_a_4237_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(lean_object* v_00_u03b1_4241_, lean_object* v_00_u03b2_4242_, lean_object* v_n_4243_, lean_object* v_f_4244_, lean_object* v_xs_4245_, lean_object* v_k_4246_, lean_object* v_h_4247_, lean_object* v_acc_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_){
_start:
{
lean_object* v___x_4252_; 
v___x_4252_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(v_n_4243_, v_f_4244_, v_xs_4245_, v_k_4246_, v_acc_4248_, v___y_4249_, v___y_4250_);
return v___x_4252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___boxed(lean_object* v_00_u03b1_4253_, lean_object* v_00_u03b2_4254_, lean_object* v_n_4255_, lean_object* v_f_4256_, lean_object* v_xs_4257_, lean_object* v_k_4258_, lean_object* v_h_4259_, lean_object* v_acc_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_){
_start:
{
lean_object* v_res_4264_; 
v_res_4264_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(v_00_u03b1_4253_, v_00_u03b2_4254_, v_n_4255_, v_f_4256_, v_xs_4257_, v_k_4258_, v_h_4259_, v_acc_4260_, v___y_4261_, v___y_4262_);
lean_dec_ref(v___y_4262_);
lean_dec_ref(v_xs_4257_);
lean_dec(v_n_4255_);
return v_res_4264_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6(lean_object* v_inst_4265_, lean_object* v_R_4266_, lean_object* v_a_4267_, lean_object* v_b_4268_){
_start:
{
lean_object* v___x_4269_; 
v___x_4269_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg(v_a_4267_, v_b_4268_);
return v___x_4269_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(lean_object* v_leanOpts_4270_, uint8_t v_reconfigure_4271_, lean_object* v_ws_4272_, lean_object* v_i_4273_, lean_object* v_i__lt_4274_, lean_object* v_next_4275_, lean_object* v_lt__next_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_){
_start:
{
lean_object* v___x_4280_; 
v___x_4280_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___redArg(v_leanOpts_4270_, v_reconfigure_4271_, v_ws_4272_, v_i_4273_, v_next_4275_, v___y_4277_, v___y_4278_);
return v___x_4280_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___boxed(lean_object* v_leanOpts_4281_, lean_object* v_reconfigure_4282_, lean_object* v_ws_4283_, lean_object* v_i_4284_, lean_object* v_i__lt_4285_, lean_object* v_next_4286_, lean_object* v_lt__next_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_){
_start:
{
uint8_t v_reconfigure_boxed_4291_; lean_object* v_res_4292_; 
v_reconfigure_boxed_4291_ = lean_unbox(v_reconfigure_4282_);
v_res_4292_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(v_leanOpts_4281_, v_reconfigure_boxed_4291_, v_ws_4283_, v_i_4284_, v_i__lt_4285_, v_next_4286_, v_lt__next_4287_, v___y_4288_, v___y_4289_);
lean_dec_ref(v___y_4289_);
return v_res_4292_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8(lean_object* v_upperBound_4293_, lean_object* v_fst_4294_, lean_object* v___x_4295_, lean_object* v_leanOpts_4296_, lean_object* v_inst_4297_, lean_object* v_R_4298_, lean_object* v_a_4299_, lean_object* v_b_4300_, lean_object* v_c_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_){
_start:
{
lean_object* v___x_4305_; 
v___x_4305_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg(v_upperBound_4293_, v_fst_4294_, v___x_4295_, v_leanOpts_4296_, v_a_4299_, v_b_4300_, v___y_4302_, v___y_4303_);
return v___x_4305_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___boxed(lean_object* v_upperBound_4306_, lean_object* v_fst_4307_, lean_object* v___x_4308_, lean_object* v_leanOpts_4309_, lean_object* v_inst_4310_, lean_object* v_R_4311_, lean_object* v_a_4312_, lean_object* v_b_4313_, lean_object* v_c_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_){
_start:
{
lean_object* v_res_4318_; 
v_res_4318_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8(v_upperBound_4306_, v_fst_4307_, v___x_4308_, v_leanOpts_4309_, v_inst_4310_, v_R_4311_, v_a_4312_, v_b_4313_, v_c_4314_, v___y_4315_, v___y_4316_);
lean_dec_ref(v___y_4316_);
lean_dec_ref(v___x_4308_);
lean_dec_ref(v_fst_4307_);
lean_dec(v_upperBound_4306_);
return v_res_4318_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4_spec__6(lean_object* v_00_u03b2_4319_, lean_object* v_msg_4320_){
_start:
{
lean_object* v___x_4321_; 
v___x_4321_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4_spec__6___redArg(v_msg_4320_);
return v___x_4321_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4(lean_object* v_00_u03b2_4322_, lean_object* v_k_4323_, lean_object* v_v_4324_, lean_object* v_t_4325_){
_start:
{
lean_object* v___x_4326_; 
v___x_4326_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(v_k_4323_, v_v_4324_, v_t_4325_);
return v___x_4326_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(lean_object* v_init_4327_, lean_object* v_t_4328_){
_start:
{
lean_object* v___x_4329_; 
v___x_4329_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5_spec__8(v_init_4327_, v_t_4328_);
return v___x_4329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9(lean_object* v_start_4330_, lean_object* v_pkg_4331_, lean_object* v_leanOpts_4332_, uint8_t v_reconfigure_4333_, lean_object* v_as_4334_, size_t v_i_4335_, size_t v_stop_4336_, lean_object* v_b_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_){
_start:
{
lean_object* v___x_4341_; 
v___x_4341_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg(v_pkg_4331_, v_leanOpts_4332_, v_reconfigure_4333_, v_as_4334_, v_i_4335_, v_stop_4336_, v_b_4337_, v___y_4338_, v___y_4339_);
return v___x_4341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___boxed(lean_object* v_start_4342_, lean_object* v_pkg_4343_, lean_object* v_leanOpts_4344_, lean_object* v_reconfigure_4345_, lean_object* v_as_4346_, lean_object* v_i_4347_, lean_object* v_stop_4348_, lean_object* v_b_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_){
_start:
{
uint8_t v_reconfigure_boxed_4353_; size_t v_i_boxed_4354_; size_t v_stop_boxed_4355_; lean_object* v_res_4356_; 
v_reconfigure_boxed_4353_ = lean_unbox(v_reconfigure_4345_);
v_i_boxed_4354_ = lean_unbox_usize(v_i_4347_);
lean_dec(v_i_4347_);
v_stop_boxed_4355_ = lean_unbox_usize(v_stop_4348_);
lean_dec(v_stop_4348_);
v_res_4356_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9(v_start_4342_, v_pkg_4343_, v_leanOpts_4344_, v_reconfigure_boxed_4353_, v_as_4346_, v_i_boxed_4354_, v_stop_boxed_4355_, v_b_4349_, v___y_4350_, v___y_4351_);
lean_dec_ref(v___y_4351_);
lean_dec_ref(v_as_4346_);
lean_dec(v_start_4342_);
return v_res_4356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(lean_object* v_entries_4357_, lean_object* v_as_4358_, size_t v_i_4359_, size_t v_stop_4360_, lean_object* v_b_4361_){
_start:
{
lean_object* v___y_4363_; uint8_t v___x_4367_; 
v___x_4367_ = lean_usize_dec_eq(v_i_4359_, v_stop_4360_);
if (v___x_4367_ == 0)
{
lean_object* v___x_4368_; lean_object* v_baseName_4369_; lean_object* v_relConfigFile_4370_; lean_object* v_relManifestFile_4371_; lean_object* v___x_4372_; 
v___x_4368_ = lean_array_uget_borrowed(v_as_4358_, v_i_4359_);
v_baseName_4369_ = lean_ctor_get(v___x_4368_, 1);
v_relConfigFile_4370_ = lean_ctor_get(v___x_4368_, 8);
v_relManifestFile_4371_ = lean_ctor_get(v___x_4368_, 9);
v___x_4372_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_entries_4357_, v_baseName_4369_);
if (lean_obj_tag(v___x_4372_) == 0)
{
v___y_4363_ = v_b_4361_;
goto v___jp_4362_;
}
else
{
lean_object* v_val_4373_; lean_object* v___x_4375_; uint8_t v_isShared_4376_; uint8_t v_isSharedCheck_4394_; 
v_val_4373_ = lean_ctor_get(v___x_4372_, 0);
v_isSharedCheck_4394_ = !lean_is_exclusive(v___x_4372_);
if (v_isSharedCheck_4394_ == 0)
{
v___x_4375_ = v___x_4372_;
v_isShared_4376_ = v_isSharedCheck_4394_;
goto v_resetjp_4374_;
}
else
{
lean_inc(v_val_4373_);
lean_dec(v___x_4372_);
v___x_4375_ = lean_box(0);
v_isShared_4376_ = v_isSharedCheck_4394_;
goto v_resetjp_4374_;
}
v_resetjp_4374_:
{
lean_object* v_name_4377_; lean_object* v_scope_4378_; uint8_t v_inherited_4379_; lean_object* v_src_4380_; lean_object* v___x_4382_; uint8_t v_isShared_4383_; uint8_t v_isSharedCheck_4391_; 
v_name_4377_ = lean_ctor_get(v_val_4373_, 0);
v_scope_4378_ = lean_ctor_get(v_val_4373_, 1);
v_inherited_4379_ = lean_ctor_get_uint8(v_val_4373_, sizeof(void*)*5);
v_src_4380_ = lean_ctor_get(v_val_4373_, 4);
v_isSharedCheck_4391_ = !lean_is_exclusive(v_val_4373_);
if (v_isSharedCheck_4391_ == 0)
{
lean_object* v_unused_4392_; lean_object* v_unused_4393_; 
v_unused_4392_ = lean_ctor_get(v_val_4373_, 3);
lean_dec(v_unused_4392_);
v_unused_4393_ = lean_ctor_get(v_val_4373_, 2);
lean_dec(v_unused_4393_);
v___x_4382_ = v_val_4373_;
v_isShared_4383_ = v_isSharedCheck_4391_;
goto v_resetjp_4381_;
}
else
{
lean_inc(v_src_4380_);
lean_inc(v_scope_4378_);
lean_inc(v_name_4377_);
lean_dec(v_val_4373_);
v___x_4382_ = lean_box(0);
v_isShared_4383_ = v_isSharedCheck_4391_;
goto v_resetjp_4381_;
}
v_resetjp_4381_:
{
lean_object* v___x_4385_; 
lean_inc_ref(v_relManifestFile_4371_);
if (v_isShared_4376_ == 0)
{
lean_ctor_set(v___x_4375_, 0, v_relManifestFile_4371_);
v___x_4385_ = v___x_4375_;
goto v_reusejp_4384_;
}
else
{
lean_object* v_reuseFailAlloc_4390_; 
v_reuseFailAlloc_4390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4390_, 0, v_relManifestFile_4371_);
v___x_4385_ = v_reuseFailAlloc_4390_;
goto v_reusejp_4384_;
}
v_reusejp_4384_:
{
lean_object* v___x_4387_; 
lean_inc_ref(v_relConfigFile_4370_);
if (v_isShared_4383_ == 0)
{
lean_ctor_set(v___x_4382_, 3, v___x_4385_);
lean_ctor_set(v___x_4382_, 2, v_relConfigFile_4370_);
v___x_4387_ = v___x_4382_;
goto v_reusejp_4386_;
}
else
{
lean_object* v_reuseFailAlloc_4389_; 
v_reuseFailAlloc_4389_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_4389_, 0, v_name_4377_);
lean_ctor_set(v_reuseFailAlloc_4389_, 1, v_scope_4378_);
lean_ctor_set(v_reuseFailAlloc_4389_, 2, v_relConfigFile_4370_);
lean_ctor_set(v_reuseFailAlloc_4389_, 3, v___x_4385_);
lean_ctor_set(v_reuseFailAlloc_4389_, 4, v_src_4380_);
lean_ctor_set_uint8(v_reuseFailAlloc_4389_, sizeof(void*)*5, v_inherited_4379_);
v___x_4387_ = v_reuseFailAlloc_4389_;
goto v_reusejp_4386_;
}
v_reusejp_4386_:
{
lean_object* v___x_4388_; 
v___x_4388_ = lean_array_push(v_b_4361_, v___x_4387_);
v___y_4363_ = v___x_4388_;
goto v___jp_4362_;
}
}
}
}
}
}
else
{
return v_b_4361_;
}
v___jp_4362_:
{
size_t v___x_4364_; size_t v___x_4365_; 
v___x_4364_ = ((size_t)1ULL);
v___x_4365_ = lean_usize_add(v_i_4359_, v___x_4364_);
v_i_4359_ = v___x_4365_;
v_b_4361_ = v___y_4363_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0___boxed(lean_object* v_entries_4395_, lean_object* v_as_4396_, lean_object* v_i_4397_, lean_object* v_stop_4398_, lean_object* v_b_4399_){
_start:
{
size_t v_i_boxed_4400_; size_t v_stop_boxed_4401_; lean_object* v_res_4402_; 
v_i_boxed_4400_ = lean_unbox_usize(v_i_4397_);
lean_dec(v_i_4397_);
v_stop_boxed_4401_ = lean_unbox_usize(v_stop_4398_);
lean_dec(v_stop_4398_);
v_res_4402_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_4395_, v_as_4396_, v_i_boxed_4400_, v_stop_boxed_4401_, v_b_4399_);
lean_dec_ref(v_as_4396_);
lean_dec(v_entries_4395_);
return v_res_4402_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(lean_object* v_ws_4403_, lean_object* v_entries_4404_){
_start:
{
lean_object* v_packages_4406_; lean_object* v___y_4408_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; uint8_t v___x_4426_; 
v_packages_4406_ = lean_ctor_get(v_ws_4403_, 4);
v___x_4423_ = lean_unsigned_to_nat(0u);
v___x_4424_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_4425_ = lean_array_get_size(v_packages_4406_);
v___x_4426_ = lean_nat_dec_lt(v___x_4423_, v___x_4425_);
if (v___x_4426_ == 0)
{
v___y_4408_ = v___x_4424_;
goto v___jp_4407_;
}
else
{
size_t v___x_4427_; size_t v___x_4428_; lean_object* v___x_4429_; 
v___x_4427_ = ((size_t)0ULL);
v___x_4428_ = lean_usize_of_nat(v___x_4425_);
v___x_4429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_4404_, v_packages_4406_, v___x_4427_, v___x_4428_, v___x_4424_);
v___y_4408_ = v___x_4429_;
goto v___jp_4407_;
}
v___jp_4407_:
{
lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v_config_4411_; lean_object* v_baseName_4412_; lean_object* v_dir_4413_; lean_object* v_relManifestFile_4414_; lean_object* v_toWorkspaceConfig_4415_; uint8_t v_fixedToolchain_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v_manifest_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; 
v___x_4409_ = lean_unsigned_to_nat(0u);
v___x_4410_ = lean_array_fget_borrowed(v_packages_4406_, v___x_4409_);
v_config_4411_ = lean_ctor_get(v___x_4410_, 6);
v_baseName_4412_ = lean_ctor_get(v___x_4410_, 1);
v_dir_4413_ = lean_ctor_get(v___x_4410_, 4);
v_relManifestFile_4414_ = lean_ctor_get(v___x_4410_, 9);
v_toWorkspaceConfig_4415_ = lean_ctor_get(v_config_4411_, 0);
v_fixedToolchain_4416_ = lean_ctor_get_uint8(v_config_4411_, sizeof(void*)*28 + 6);
v___x_4417_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_toWorkspaceConfig_4415_);
v___x_4418_ = l_System_FilePath_normalize(v_toWorkspaceConfig_4415_);
v___x_4419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4419_, 0, v___x_4418_);
lean_inc(v_baseName_4412_);
v_manifest_4420_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_manifest_4420_, 0, v_baseName_4412_);
lean_ctor_set(v_manifest_4420_, 1, v___x_4417_);
lean_ctor_set(v_manifest_4420_, 2, v___x_4419_);
lean_ctor_set(v_manifest_4420_, 3, v___y_4408_);
lean_ctor_set_uint8(v_manifest_4420_, sizeof(void*)*4, v_fixedToolchain_4416_);
lean_inc_ref(v_relManifestFile_4414_);
lean_inc_ref(v_dir_4413_);
v___x_4421_ = l_Lake_joinRelative(v_dir_4413_, v_relManifestFile_4414_);
v___x_4422_ = l_Lake_Manifest_save(v_manifest_4420_, v___x_4421_);
lean_dec_ref(v___x_4421_);
return v___x_4422_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest___boxed(lean_object* v_ws_4430_, lean_object* v_entries_4431_, lean_object* v_a_4432_){
_start:
{
lean_object* v_res_4433_; 
v_res_4433_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(v_ws_4430_, v_entries_4431_);
lean_dec(v_entries_4431_);
lean_dec_ref(v_ws_4430_);
return v_res_4433_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(lean_object* v_pkg_4434_, lean_object* v_as_4435_, size_t v_i_4436_, size_t v_stop_4437_, lean_object* v_b_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_){
_start:
{
lean_object* v_a_4443_; uint8_t v___x_4447_; 
v___x_4447_ = lean_usize_dec_eq(v_i_4436_, v_stop_4437_);
if (v___x_4447_ == 0)
{
lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_7243__overap_4450_; lean_object* v___x_4451_; 
v___x_4448_ = lean_unsigned_to_nat(0u);
v___x_4449_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_7243__overap_4450_ = lean_array_uget_borrowed(v_as_4435_, v_i_4436_);
lean_inc(v___x_7243__overap_4450_);
lean_inc(v___y_4439_);
lean_inc_ref(v_pkg_4434_);
v___x_4451_ = lean_apply_4(v___x_7243__overap_4450_, v_pkg_4434_, v___y_4439_, v___x_4449_, lean_box(0));
if (lean_obj_tag(v___x_4451_) == 0)
{
lean_object* v_a_4452_; lean_object* v_a_4453_; lean_object* v___x_4454_; uint8_t v___x_4455_; 
v_a_4452_ = lean_ctor_get(v___x_4451_, 0);
lean_inc(v_a_4452_);
v_a_4453_ = lean_ctor_get(v___x_4451_, 1);
lean_inc(v_a_4453_);
lean_dec_ref_known(v___x_4451_, 2);
v___x_4454_ = lean_array_get_size(v_a_4453_);
v___x_4455_ = lean_nat_dec_lt(v___x_4448_, v___x_4454_);
if (v___x_4455_ == 0)
{
lean_dec(v_a_4453_);
v_a_4443_ = v_a_4452_;
goto v___jp_4442_;
}
else
{
lean_object* v___x_4456_; size_t v___x_4457_; size_t v___x_4458_; lean_object* v___x_4459_; 
v___x_4456_ = lean_box(0);
v___x_4457_ = ((size_t)0ULL);
v___x_4458_ = lean_usize_of_nat(v___x_4454_);
v___x_4459_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4453_, v___x_4457_, v___x_4458_, v___x_4456_, v___y_4440_);
lean_dec(v_a_4453_);
if (lean_obj_tag(v___x_4459_) == 0)
{
lean_dec_ref_known(v___x_4459_, 1);
v_a_4443_ = v_a_4452_;
goto v___jp_4442_;
}
else
{
lean_dec(v_a_4452_);
lean_dec_ref(v_pkg_4434_);
return v___x_4459_;
}
}
}
else
{
lean_object* v_a_4460_; lean_object* v___x_4461_; uint8_t v___x_4462_; 
lean_dec_ref(v_pkg_4434_);
v_a_4460_ = lean_ctor_get(v___x_4451_, 1);
lean_inc(v_a_4460_);
lean_dec_ref_known(v___x_4451_, 2);
v___x_4461_ = lean_array_get_size(v_a_4460_);
v___x_4462_ = lean_nat_dec_lt(v___x_4448_, v___x_4461_);
if (v___x_4462_ == 0)
{
lean_object* v___x_4463_; lean_object* v___x_4464_; 
lean_dec(v_a_4460_);
v___x_4463_ = lean_box(0);
v___x_4464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4464_, 0, v___x_4463_);
return v___x_4464_;
}
else
{
lean_object* v___x_4465_; size_t v___x_4466_; size_t v___x_4467_; lean_object* v___x_4468_; 
v___x_4465_ = lean_box(0);
v___x_4466_ = ((size_t)0ULL);
v___x_4467_ = lean_usize_of_nat(v___x_4461_);
v___x_4468_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4460_, v___x_4466_, v___x_4467_, v___x_4465_, v___y_4440_);
lean_dec(v_a_4460_);
if (lean_obj_tag(v___x_4468_) == 0)
{
lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4475_; 
v_isSharedCheck_4475_ = !lean_is_exclusive(v___x_4468_);
if (v_isSharedCheck_4475_ == 0)
{
lean_object* v_unused_4476_; 
v_unused_4476_ = lean_ctor_get(v___x_4468_, 0);
lean_dec(v_unused_4476_);
v___x_4470_ = v___x_4468_;
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
else
{
lean_dec(v___x_4468_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v___x_4473_; 
if (v_isShared_4471_ == 0)
{
lean_ctor_set_tag(v___x_4470_, 1);
lean_ctor_set(v___x_4470_, 0, v___x_4465_);
v___x_4473_ = v___x_4470_;
goto v_reusejp_4472_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v___x_4465_);
v___x_4473_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4472_;
}
v_reusejp_4472_:
{
return v___x_4473_;
}
}
}
else
{
return v___x_4468_;
}
}
}
}
else
{
lean_object* v___x_4477_; 
lean_dec_ref(v_pkg_4434_);
v___x_4477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4477_, 0, v_b_4438_);
return v___x_4477_;
}
v___jp_4442_:
{
size_t v___x_4444_; size_t v___x_4445_; 
v___x_4444_ = ((size_t)1ULL);
v___x_4445_ = lean_usize_add(v_i_4436_, v___x_4444_);
v_i_4436_ = v___x_4445_;
v_b_4438_ = v_a_4443_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0___boxed(lean_object* v_pkg_4478_, lean_object* v_as_4479_, lean_object* v_i_4480_, lean_object* v_stop_4481_, lean_object* v_b_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_){
_start:
{
size_t v_i_boxed_4486_; size_t v_stop_boxed_4487_; lean_object* v_res_4488_; 
v_i_boxed_4486_ = lean_unbox_usize(v_i_4480_);
lean_dec(v_i_4480_);
v_stop_boxed_4487_ = lean_unbox_usize(v_stop_4481_);
lean_dec(v_stop_4481_);
v_res_4488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_4478_, v_as_4479_, v_i_boxed_4486_, v_stop_boxed_4487_, v_b_4482_, v___y_4483_, v___y_4484_);
lean_dec_ref(v___y_4484_);
lean_dec(v___y_4483_);
lean_dec_ref(v_as_4479_);
return v_res_4488_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(lean_object* v_pkg_4490_, lean_object* v_a_4491_, lean_object* v_a_4492_){
_start:
{
lean_object* v_baseName_4494_; lean_object* v_postUpdateHooks_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; uint8_t v___x_4498_; 
v_baseName_4494_ = lean_ctor_get(v_pkg_4490_, 1);
v_postUpdateHooks_4495_ = lean_ctor_get(v_pkg_4490_, 21);
lean_inc_ref(v_postUpdateHooks_4495_);
v___x_4496_ = lean_array_get_size(v_postUpdateHooks_4495_);
v___x_4497_ = lean_unsigned_to_nat(0u);
v___x_4498_ = lean_nat_dec_eq(v___x_4496_, v___x_4497_);
if (v___x_4498_ == 0)
{
lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; uint8_t v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; uint8_t v___x_4506_; 
lean_inc(v_baseName_4494_);
v___x_4499_ = l_Lean_Name_toString(v_baseName_4494_, v___x_4498_);
v___x_4500_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0));
v___x_4501_ = lean_string_append(v___x_4499_, v___x_4500_);
v___x_4502_ = 1;
v___x_4503_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4503_, 0, v___x_4501_);
lean_ctor_set_uint8(v___x_4503_, sizeof(void*)*1, v___x_4502_);
lean_inc_ref(v_a_4492_);
v___x_4504_ = lean_apply_2(v_a_4492_, v___x_4503_, lean_box(0));
v___x_4505_ = lean_box(0);
v___x_4506_ = lean_nat_dec_lt(v___x_4497_, v___x_4496_);
if (v___x_4506_ == 0)
{
lean_object* v___x_4507_; 
lean_dec_ref(v_postUpdateHooks_4495_);
lean_dec_ref(v_pkg_4490_);
v___x_4507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4507_, 0, v___x_4505_);
return v___x_4507_;
}
else
{
size_t v___x_4508_; size_t v___x_4509_; lean_object* v___x_4510_; 
v___x_4508_ = ((size_t)0ULL);
v___x_4509_ = lean_usize_of_nat(v___x_4496_);
v___x_4510_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_4490_, v_postUpdateHooks_4495_, v___x_4508_, v___x_4509_, v___x_4505_, v_a_4491_, v_a_4492_);
lean_dec_ref(v_postUpdateHooks_4495_);
return v___x_4510_;
}
}
else
{
lean_object* v___x_4511_; lean_object* v___x_4512_; 
lean_dec_ref(v_postUpdateHooks_4495_);
lean_dec_ref(v_pkg_4490_);
v___x_4511_ = lean_box(0);
v___x_4512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4511_);
return v___x_4512_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___boxed(lean_object* v_pkg_4513_, lean_object* v_a_4514_, lean_object* v_a_4515_, lean_object* v_a_4516_){
_start:
{
lean_object* v_res_4517_; 
v_res_4517_ = l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(v_pkg_4513_, v_a_4514_, v_a_4515_);
lean_dec_ref(v_a_4515_);
lean_dec(v_a_4514_);
return v_res_4517_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(lean_object* v_a_4518_, lean_object* v_ws_4519_, lean_object* v_toUpdate_4520_, lean_object* v_leanOpts_4521_, uint8_t v_updateToolchain_4522_){
_start:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___x_4524_ = lean_box(1);
v___x_4525_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_4518_, v_ws_4519_, v_toUpdate_4520_, v___x_4524_);
if (lean_obj_tag(v___x_4525_) == 0)
{
lean_object* v_a_4526_; lean_object* v_snd_4527_; lean_object* v_packages_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v_baseName_4531_; lean_object* v_depConfigs_4532_; lean_object* v___f_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v_a_4526_ = lean_ctor_get(v___x_4525_, 0);
lean_inc(v_a_4526_);
lean_dec_ref_known(v___x_4525_, 1);
v_snd_4527_ = lean_ctor_get(v_a_4526_, 1);
lean_inc(v_snd_4527_);
lean_dec(v_a_4526_);
v_packages_4528_ = lean_ctor_get(v_ws_4519_, 4);
v___x_4529_ = lean_unsigned_to_nat(0u);
v___x_4530_ = lean_array_fget_borrowed(v_packages_4528_, v___x_4529_);
v_baseName_4531_ = lean_ctor_get(v___x_4530_, 1);
v_depConfigs_4532_ = lean_ctor_get(v___x_4530_, 12);
lean_inc(v___x_4530_);
lean_inc_ref(v_ws_4519_);
lean_inc(v_baseName_4531_);
v___f_4533_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed), 7, 3);
lean_closure_set(v___f_4533_, 0, v_baseName_4531_);
lean_closure_set(v___f_4533_, 1, v_ws_4519_);
lean_closure_set(v___f_4533_, 2, v___x_4530_);
v___x_4534_ = lean_array_get_size(v_depConfigs_4532_);
lean_inc_ref(v_depConfigs_4532_);
v___x_4535_ = l_Array_reverse___redArg(v_depConfigs_4532_);
v___x_4536_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0));
v___x_4537_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(v___x_4534_, v___f_4533_, v___x_4535_, v___x_4529_, v___x_4536_, v_snd_4527_, v_a_4518_);
if (lean_obj_tag(v___x_4537_) == 0)
{
lean_object* v_a_4538_; lean_object* v_fst_4539_; lean_object* v_snd_4540_; lean_object* v___x_4542_; uint8_t v_isShared_4543_; uint8_t v_isSharedCheck_4615_; 
v_a_4538_ = lean_ctor_get(v___x_4537_, 0);
lean_inc(v_a_4538_);
lean_dec_ref_known(v___x_4537_, 1);
v_fst_4539_ = lean_ctor_get(v_a_4538_, 0);
v_snd_4540_ = lean_ctor_get(v_a_4538_, 1);
v_isSharedCheck_4615_ = !lean_is_exclusive(v_a_4538_);
if (v_isSharedCheck_4615_ == 0)
{
v___x_4542_ = v_a_4538_;
v_isShared_4543_ = v_isSharedCheck_4615_;
goto v_resetjp_4541_;
}
else
{
lean_inc(v_snd_4540_);
lean_inc(v_fst_4539_);
lean_dec(v_a_4538_);
v___x_4542_ = lean_box(0);
v_isShared_4543_ = v_isSharedCheck_4615_;
goto v_resetjp_4541_;
}
v_resetjp_4541_:
{
lean_object* v___y_4545_; 
if (v_updateToolchain_4522_ == 0)
{
v___y_4545_ = v_a_4518_;
goto v___jp_4544_;
}
else
{
lean_object* v___x_4606_; 
lean_inc_ref(v_ws_4519_);
v___x_4606_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(v_a_4518_, v_ws_4519_, v_fst_4539_);
if (lean_obj_tag(v___x_4606_) == 0)
{
lean_dec_ref_known(v___x_4606_, 1);
v___y_4545_ = v_a_4518_;
goto v___jp_4544_;
}
else
{
lean_object* v_a_4607_; lean_object* v___x_4609_; uint8_t v_isShared_4610_; uint8_t v_isSharedCheck_4614_; 
lean_del_object(v___x_4542_);
lean_dec(v_snd_4540_);
lean_dec(v_fst_4539_);
lean_dec_ref(v___x_4535_);
lean_dec_ref(v_leanOpts_4521_);
lean_dec_ref(v_ws_4519_);
v_a_4607_ = lean_ctor_get(v___x_4606_, 0);
v_isSharedCheck_4614_ = !lean_is_exclusive(v___x_4606_);
if (v_isSharedCheck_4614_ == 0)
{
v___x_4609_ = v___x_4606_;
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
else
{
lean_inc(v_a_4607_);
lean_dec(v___x_4606_);
v___x_4609_ = lean_box(0);
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
v_resetjp_4608_:
{
lean_object* v___x_4612_; 
if (v_isShared_4610_ == 0)
{
v___x_4612_ = v___x_4609_;
goto v_reusejp_4611_;
}
else
{
lean_object* v_reuseFailAlloc_4613_; 
v_reuseFailAlloc_4613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4613_, 0, v_a_4607_);
v___x_4612_ = v_reuseFailAlloc_4613_;
goto v_reusejp_4611_;
}
v_reusejp_4611_:
{
return v___x_4612_;
}
}
}
}
v___jp_4544_:
{
lean_object* v___x_4546_; lean_object* v___x_4547_; 
v___x_4546_ = lean_array_get_size(v_packages_4528_);
lean_inc_ref(v_leanOpts_4521_);
v___x_4547_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg(v___x_4534_, v_fst_4539_, v___x_4535_, v_leanOpts_4521_, v___x_4529_, v_ws_4519_, v_snd_4540_, v___y_4545_);
lean_dec_ref(v___x_4535_);
lean_dec(v_fst_4539_);
if (lean_obj_tag(v___x_4547_) == 0)
{
lean_object* v_a_4548_; lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4597_; 
v_a_4548_ = lean_ctor_get(v___x_4547_, 0);
v_isSharedCheck_4597_ = !lean_is_exclusive(v___x_4547_);
if (v_isSharedCheck_4597_ == 0)
{
v___x_4550_ = v___x_4547_;
v_isShared_4551_ = v_isSharedCheck_4597_;
goto v_resetjp_4549_;
}
else
{
lean_inc(v_a_4548_);
lean_dec(v___x_4547_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4597_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v_fst_4552_; lean_object* v_snd_4553_; lean_object* v___x_4555_; uint8_t v_isShared_4556_; uint8_t v_isSharedCheck_4596_; 
v_fst_4552_ = lean_ctor_get(v_a_4548_, 0);
v_snd_4553_ = lean_ctor_get(v_a_4548_, 1);
v_isSharedCheck_4596_ = !lean_is_exclusive(v_a_4548_);
if (v_isSharedCheck_4596_ == 0)
{
v___x_4555_ = v_a_4548_;
v_isShared_4556_ = v_isSharedCheck_4596_;
goto v_resetjp_4554_;
}
else
{
lean_inc(v_snd_4553_);
lean_inc(v_fst_4552_);
lean_dec(v_a_4548_);
v___x_4555_ = lean_box(0);
v_isShared_4556_ = v_isSharedCheck_4596_;
goto v_resetjp_4554_;
}
v_resetjp_4554_:
{
lean_object* v_packages_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4562_; 
v_packages_4557_ = lean_ctor_get(v_fst_4552_, 4);
v___x_4558_ = lean_array_get_size(v_packages_4557_);
v___x_4559_ = lean_array_fget(v_packages_4557_, v___x_4529_);
v___x_4560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4560_, 0, v___x_4546_);
if (v_isShared_4543_ == 0)
{
lean_ctor_set(v___x_4542_, 1, v___x_4558_);
lean_ctor_set(v___x_4542_, 0, v___x_4560_);
v___x_4562_ = v___x_4542_;
goto v_reusejp_4561_;
}
else
{
lean_object* v_reuseFailAlloc_4595_; 
v_reuseFailAlloc_4595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4595_, 0, v___x_4560_);
lean_ctor_set(v_reuseFailAlloc_4595_, 1, v___x_4558_);
v___x_4562_ = v_reuseFailAlloc_4595_;
goto v_reusejp_4561_;
}
v_reusejp_4561_:
{
lean_object* v___x_4563_; lean_object* v___x_4564_; uint8_t v___x_4565_; 
v___x_4563_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg(v___x_4562_, v___x_4536_);
v___x_4564_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_fst_4552_, v___x_4559_, v___x_4563_);
v___x_4565_ = lean_nat_dec_eq(v___x_4546_, v___x_4558_);
if (v___x_4565_ == 0)
{
uint8_t v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; 
lean_del_object(v___x_4555_);
lean_del_object(v___x_4550_);
v___x_4566_ = 1;
v___x_4567_ = lean_unsigned_to_nat(1u);
v___x_4568_ = lean_nat_add(v___x_4546_, v___x_4567_);
v___x_4569_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___redArg(v_leanOpts_4521_, v___x_4566_, v___x_4564_, v___x_4546_, v___x_4568_, v_snd_4553_, v___y_4545_);
if (lean_obj_tag(v___x_4569_) == 0)
{
lean_object* v_a_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4587_; 
v_a_4570_ = lean_ctor_get(v___x_4569_, 0);
v_isSharedCheck_4587_ = !lean_is_exclusive(v___x_4569_);
if (v_isSharedCheck_4587_ == 0)
{
v___x_4572_ = v___x_4569_;
v_isShared_4573_ = v_isSharedCheck_4587_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_a_4570_);
lean_dec(v___x_4569_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4587_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v_fst_4574_; lean_object* v_snd_4575_; lean_object* v___x_4577_; uint8_t v_isShared_4578_; uint8_t v_isSharedCheck_4586_; 
v_fst_4574_ = lean_ctor_get(v_a_4570_, 0);
v_snd_4575_ = lean_ctor_get(v_a_4570_, 1);
v_isSharedCheck_4586_ = !lean_is_exclusive(v_a_4570_);
if (v_isSharedCheck_4586_ == 0)
{
v___x_4577_ = v_a_4570_;
v_isShared_4578_ = v_isSharedCheck_4586_;
goto v_resetjp_4576_;
}
else
{
lean_inc(v_snd_4575_);
lean_inc(v_fst_4574_);
lean_dec(v_a_4570_);
v___x_4577_ = lean_box(0);
v_isShared_4578_ = v_isSharedCheck_4586_;
goto v_resetjp_4576_;
}
v_resetjp_4576_:
{
lean_object* v___x_4579_; lean_object* v___x_4581_; 
v___x_4579_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_4574_);
if (v_isShared_4578_ == 0)
{
lean_ctor_set(v___x_4577_, 0, v___x_4579_);
v___x_4581_ = v___x_4577_;
goto v_reusejp_4580_;
}
else
{
lean_object* v_reuseFailAlloc_4585_; 
v_reuseFailAlloc_4585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4585_, 0, v___x_4579_);
lean_ctor_set(v_reuseFailAlloc_4585_, 1, v_snd_4575_);
v___x_4581_ = v_reuseFailAlloc_4585_;
goto v_reusejp_4580_;
}
v_reusejp_4580_:
{
lean_object* v___x_4583_; 
if (v_isShared_4573_ == 0)
{
lean_ctor_set(v___x_4572_, 0, v___x_4581_);
v___x_4583_ = v___x_4572_;
goto v_reusejp_4582_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v___x_4581_);
v___x_4583_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4582_;
}
v_reusejp_4582_:
{
return v___x_4583_;
}
}
}
}
}
else
{
return v___x_4569_;
}
}
else
{
lean_object* v___x_4588_; lean_object* v___x_4590_; 
lean_dec_ref(v_leanOpts_4521_);
v___x_4588_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v___x_4564_);
if (v_isShared_4556_ == 0)
{
lean_ctor_set(v___x_4555_, 0, v___x_4588_);
v___x_4590_ = v___x_4555_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4594_; 
v_reuseFailAlloc_4594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4594_, 0, v___x_4588_);
lean_ctor_set(v_reuseFailAlloc_4594_, 1, v_snd_4553_);
v___x_4590_ = v_reuseFailAlloc_4594_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
lean_object* v___x_4592_; 
if (v_isShared_4551_ == 0)
{
lean_ctor_set(v___x_4550_, 0, v___x_4590_);
v___x_4592_ = v___x_4550_;
goto v_reusejp_4591_;
}
else
{
lean_object* v_reuseFailAlloc_4593_; 
v_reuseFailAlloc_4593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4593_, 0, v___x_4590_);
v___x_4592_ = v_reuseFailAlloc_4593_;
goto v_reusejp_4591_;
}
v_reusejp_4591_:
{
return v___x_4592_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4598_; lean_object* v___x_4600_; uint8_t v_isShared_4601_; uint8_t v_isSharedCheck_4605_; 
lean_del_object(v___x_4542_);
lean_dec_ref(v_leanOpts_4521_);
v_a_4598_ = lean_ctor_get(v___x_4547_, 0);
v_isSharedCheck_4605_ = !lean_is_exclusive(v___x_4547_);
if (v_isSharedCheck_4605_ == 0)
{
v___x_4600_ = v___x_4547_;
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
else
{
lean_inc(v_a_4598_);
lean_dec(v___x_4547_);
v___x_4600_ = lean_box(0);
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
v_resetjp_4599_:
{
lean_object* v___x_4603_; 
if (v_isShared_4601_ == 0)
{
v___x_4603_ = v___x_4600_;
goto v_reusejp_4602_;
}
else
{
lean_object* v_reuseFailAlloc_4604_; 
v_reuseFailAlloc_4604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4604_, 0, v_a_4598_);
v___x_4603_ = v_reuseFailAlloc_4604_;
goto v_reusejp_4602_;
}
v_reusejp_4602_:
{
return v___x_4603_;
}
}
}
}
}
}
else
{
lean_object* v_a_4616_; lean_object* v___x_4618_; uint8_t v_isShared_4619_; uint8_t v_isSharedCheck_4623_; 
lean_dec_ref(v___x_4535_);
lean_dec_ref(v_leanOpts_4521_);
lean_dec_ref(v_ws_4519_);
v_a_4616_ = lean_ctor_get(v___x_4537_, 0);
v_isSharedCheck_4623_ = !lean_is_exclusive(v___x_4537_);
if (v_isSharedCheck_4623_ == 0)
{
v___x_4618_ = v___x_4537_;
v_isShared_4619_ = v_isSharedCheck_4623_;
goto v_resetjp_4617_;
}
else
{
lean_inc(v_a_4616_);
lean_dec(v___x_4537_);
v___x_4618_ = lean_box(0);
v_isShared_4619_ = v_isSharedCheck_4623_;
goto v_resetjp_4617_;
}
v_resetjp_4617_:
{
lean_object* v___x_4621_; 
if (v_isShared_4619_ == 0)
{
v___x_4621_ = v___x_4618_;
goto v_reusejp_4620_;
}
else
{
lean_object* v_reuseFailAlloc_4622_; 
v_reuseFailAlloc_4622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4622_, 0, v_a_4616_);
v___x_4621_ = v_reuseFailAlloc_4622_;
goto v_reusejp_4620_;
}
v_reusejp_4620_:
{
return v___x_4621_;
}
}
}
}
else
{
lean_object* v_a_4624_; lean_object* v___x_4626_; uint8_t v_isShared_4627_; uint8_t v_isSharedCheck_4631_; 
lean_dec_ref(v_leanOpts_4521_);
lean_dec_ref(v_ws_4519_);
v_a_4624_ = lean_ctor_get(v___x_4525_, 0);
v_isSharedCheck_4631_ = !lean_is_exclusive(v___x_4525_);
if (v_isSharedCheck_4631_ == 0)
{
v___x_4626_ = v___x_4525_;
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
else
{
lean_inc(v_a_4624_);
lean_dec(v___x_4525_);
v___x_4626_ = lean_box(0);
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
v_resetjp_4625_:
{
lean_object* v___x_4629_; 
if (v_isShared_4627_ == 0)
{
v___x_4629_ = v___x_4626_;
goto v_reusejp_4628_;
}
else
{
lean_object* v_reuseFailAlloc_4630_; 
v_reuseFailAlloc_4630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4630_, 0, v_a_4624_);
v___x_4629_ = v_reuseFailAlloc_4630_;
goto v_reusejp_4628_;
}
v_reusejp_4628_:
{
return v___x_4629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0___boxed(lean_object* v_a_4632_, lean_object* v_ws_4633_, lean_object* v_toUpdate_4634_, lean_object* v_leanOpts_4635_, lean_object* v_updateToolchain_4636_, lean_object* v_a_4637_){
_start:
{
uint8_t v_updateToolchain_boxed_4638_; lean_object* v_res_4639_; 
v_updateToolchain_boxed_4638_ = lean_unbox(v_updateToolchain_4636_);
v_res_4639_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(v_a_4632_, v_ws_4633_, v_toUpdate_4634_, v_leanOpts_4635_, v_updateToolchain_boxed_4638_);
lean_dec_ref(v_a_4632_);
return v_res_4639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(lean_object* v_as_4640_, size_t v_i_4641_, size_t v_stop_4642_, lean_object* v_b_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_){
_start:
{
uint8_t v___x_4647_; 
v___x_4647_ = lean_usize_dec_eq(v_i_4641_, v_stop_4642_);
if (v___x_4647_ == 0)
{
lean_object* v___x_4648_; lean_object* v___x_4649_; 
v___x_4648_ = lean_array_uget_borrowed(v_as_4640_, v_i_4641_);
lean_inc(v___x_4648_);
v___x_4649_ = l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(v___x_4648_, v___y_4644_, v___y_4645_);
if (lean_obj_tag(v___x_4649_) == 0)
{
lean_object* v_a_4650_; size_t v___x_4651_; size_t v___x_4652_; 
v_a_4650_ = lean_ctor_get(v___x_4649_, 0);
lean_inc(v_a_4650_);
lean_dec_ref_known(v___x_4649_, 1);
v___x_4651_ = ((size_t)1ULL);
v___x_4652_ = lean_usize_add(v_i_4641_, v___x_4651_);
v_i_4641_ = v___x_4652_;
v_b_4643_ = v_a_4650_;
goto _start;
}
else
{
return v___x_4649_;
}
}
else
{
lean_object* v___x_4654_; 
v___x_4654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4654_, 0, v_b_4643_);
return v___x_4654_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1___boxed(lean_object* v_as_4655_, lean_object* v_i_4656_, lean_object* v_stop_4657_, lean_object* v_b_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
size_t v_i_boxed_4662_; size_t v_stop_boxed_4663_; lean_object* v_res_4664_; 
v_i_boxed_4662_ = lean_unbox_usize(v_i_4656_);
lean_dec(v_i_4656_);
v_stop_boxed_4663_ = lean_unbox_usize(v_stop_4657_);
lean_dec(v_stop_4657_);
v_res_4664_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(v_as_4655_, v_i_boxed_4662_, v_stop_boxed_4663_, v_b_4658_, v___y_4659_, v___y_4660_);
lean_dec_ref(v___y_4660_);
lean_dec(v___y_4659_);
lean_dec_ref(v_as_4655_);
return v_res_4664_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize(lean_object* v_ws_4665_, lean_object* v_toUpdate_4666_, lean_object* v_leanOpts_4667_, uint8_t v_updateToolchain_4668_, lean_object* v_a_4669_){
_start:
{
lean_object* v___x_4671_; 
v___x_4671_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(v_a_4669_, v_ws_4665_, v_toUpdate_4666_, v_leanOpts_4667_, v_updateToolchain_4668_);
if (lean_obj_tag(v___x_4671_) == 0)
{
lean_object* v_a_4672_; lean_object* v_fst_4673_; lean_object* v_snd_4674_; lean_object* v___x_4675_; 
v_a_4672_ = lean_ctor_get(v___x_4671_, 0);
lean_inc(v_a_4672_);
lean_dec_ref_known(v___x_4671_, 1);
v_fst_4673_ = lean_ctor_get(v_a_4672_, 0);
lean_inc(v_fst_4673_);
v_snd_4674_ = lean_ctor_get(v_a_4672_, 1);
lean_inc(v_snd_4674_);
lean_dec(v_a_4672_);
v___x_4675_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(v_fst_4673_, v_snd_4674_);
lean_dec(v_snd_4674_);
if (lean_obj_tag(v___x_4675_) == 0)
{
lean_object* v___x_4677_; uint8_t v_isShared_4678_; uint8_t v_isSharedCheck_4706_; 
v_isSharedCheck_4706_ = !lean_is_exclusive(v___x_4675_);
if (v_isSharedCheck_4706_ == 0)
{
lean_object* v_unused_4707_; 
v_unused_4707_ = lean_ctor_get(v___x_4675_, 0);
lean_dec(v_unused_4707_);
v___x_4677_ = v___x_4675_;
v_isShared_4678_ = v_isSharedCheck_4706_;
goto v_resetjp_4676_;
}
else
{
lean_dec(v___x_4675_);
v___x_4677_ = lean_box(0);
v_isShared_4678_ = v_isSharedCheck_4706_;
goto v_resetjp_4676_;
}
v_resetjp_4676_:
{
lean_object* v_packages_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; uint8_t v___x_4682_; 
v_packages_4679_ = lean_ctor_get(v_fst_4673_, 4);
v___x_4680_ = lean_unsigned_to_nat(0u);
v___x_4681_ = lean_array_get_size(v_packages_4679_);
v___x_4682_ = lean_nat_dec_lt(v___x_4680_, v___x_4681_);
if (v___x_4682_ == 0)
{
lean_object* v___x_4684_; 
if (v_isShared_4678_ == 0)
{
lean_ctor_set(v___x_4677_, 0, v_fst_4673_);
v___x_4684_ = v___x_4677_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v_fst_4673_);
v___x_4684_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
return v___x_4684_;
}
}
else
{
lean_object* v___x_4686_; size_t v___x_4687_; size_t v___x_4688_; lean_object* v___x_4689_; 
lean_del_object(v___x_4677_);
v___x_4686_ = lean_box(0);
v___x_4687_ = ((size_t)0ULL);
v___x_4688_ = lean_usize_of_nat(v___x_4681_);
v___x_4689_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(v_packages_4679_, v___x_4687_, v___x_4688_, v___x_4686_, v_fst_4673_, v_a_4669_);
if (lean_obj_tag(v___x_4689_) == 0)
{
lean_object* v___x_4691_; uint8_t v_isShared_4692_; uint8_t v_isSharedCheck_4696_; 
v_isSharedCheck_4696_ = !lean_is_exclusive(v___x_4689_);
if (v_isSharedCheck_4696_ == 0)
{
lean_object* v_unused_4697_; 
v_unused_4697_ = lean_ctor_get(v___x_4689_, 0);
lean_dec(v_unused_4697_);
v___x_4691_ = v___x_4689_;
v_isShared_4692_ = v_isSharedCheck_4696_;
goto v_resetjp_4690_;
}
else
{
lean_dec(v___x_4689_);
v___x_4691_ = lean_box(0);
v_isShared_4692_ = v_isSharedCheck_4696_;
goto v_resetjp_4690_;
}
v_resetjp_4690_:
{
lean_object* v___x_4694_; 
if (v_isShared_4692_ == 0)
{
lean_ctor_set(v___x_4691_, 0, v_fst_4673_);
v___x_4694_ = v___x_4691_;
goto v_reusejp_4693_;
}
else
{
lean_object* v_reuseFailAlloc_4695_; 
v_reuseFailAlloc_4695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4695_, 0, v_fst_4673_);
v___x_4694_ = v_reuseFailAlloc_4695_;
goto v_reusejp_4693_;
}
v_reusejp_4693_:
{
return v___x_4694_;
}
}
}
else
{
lean_object* v_a_4698_; lean_object* v___x_4700_; uint8_t v_isShared_4701_; uint8_t v_isSharedCheck_4705_; 
lean_dec(v_fst_4673_);
v_a_4698_ = lean_ctor_get(v___x_4689_, 0);
v_isSharedCheck_4705_ = !lean_is_exclusive(v___x_4689_);
if (v_isSharedCheck_4705_ == 0)
{
v___x_4700_ = v___x_4689_;
v_isShared_4701_ = v_isSharedCheck_4705_;
goto v_resetjp_4699_;
}
else
{
lean_inc(v_a_4698_);
lean_dec(v___x_4689_);
v___x_4700_ = lean_box(0);
v_isShared_4701_ = v_isSharedCheck_4705_;
goto v_resetjp_4699_;
}
v_resetjp_4699_:
{
lean_object* v___x_4703_; 
if (v_isShared_4701_ == 0)
{
v___x_4703_ = v___x_4700_;
goto v_reusejp_4702_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v_a_4698_);
v___x_4703_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4702_;
}
v_reusejp_4702_:
{
return v___x_4703_;
}
}
}
}
}
}
else
{
lean_object* v_a_4708_; lean_object* v___x_4710_; uint8_t v_isShared_4711_; uint8_t v_isSharedCheck_4720_; 
lean_dec(v_fst_4673_);
v_a_4708_ = lean_ctor_get(v___x_4675_, 0);
v_isSharedCheck_4720_ = !lean_is_exclusive(v___x_4675_);
if (v_isSharedCheck_4720_ == 0)
{
v___x_4710_ = v___x_4675_;
v_isShared_4711_ = v_isSharedCheck_4720_;
goto v_resetjp_4709_;
}
else
{
lean_inc(v_a_4708_);
lean_dec(v___x_4675_);
v___x_4710_ = lean_box(0);
v_isShared_4711_ = v_isSharedCheck_4720_;
goto v_resetjp_4709_;
}
v_resetjp_4709_:
{
lean_object* v___x_4712_; uint8_t v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4718_; 
v___x_4712_ = lean_io_error_to_string(v_a_4708_);
v___x_4713_ = 3;
v___x_4714_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4714_, 0, v___x_4712_);
lean_ctor_set_uint8(v___x_4714_, sizeof(void*)*1, v___x_4713_);
lean_inc_ref(v_a_4669_);
v___x_4715_ = lean_apply_2(v_a_4669_, v___x_4714_, lean_box(0));
v___x_4716_ = lean_box(0);
if (v_isShared_4711_ == 0)
{
lean_ctor_set(v___x_4710_, 0, v___x_4716_);
v___x_4718_ = v___x_4710_;
goto v_reusejp_4717_;
}
else
{
lean_object* v_reuseFailAlloc_4719_; 
v_reuseFailAlloc_4719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4719_, 0, v___x_4716_);
v___x_4718_ = v_reuseFailAlloc_4719_;
goto v_reusejp_4717_;
}
v_reusejp_4717_:
{
return v___x_4718_;
}
}
}
}
else
{
lean_object* v_a_4721_; lean_object* v___x_4723_; uint8_t v_isShared_4724_; uint8_t v_isSharedCheck_4728_; 
v_a_4721_ = lean_ctor_get(v___x_4671_, 0);
v_isSharedCheck_4728_ = !lean_is_exclusive(v___x_4671_);
if (v_isSharedCheck_4728_ == 0)
{
v___x_4723_ = v___x_4671_;
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
else
{
lean_inc(v_a_4721_);
lean_dec(v___x_4671_);
v___x_4723_ = lean_box(0);
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
v_resetjp_4722_:
{
lean_object* v___x_4726_; 
if (v_isShared_4724_ == 0)
{
v___x_4726_ = v___x_4723_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v_a_4721_);
v___x_4726_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
return v___x_4726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize___boxed(lean_object* v_ws_4729_, lean_object* v_toUpdate_4730_, lean_object* v_leanOpts_4731_, lean_object* v_updateToolchain_4732_, lean_object* v_a_4733_, lean_object* v_a_4734_){
_start:
{
uint8_t v_updateToolchain_boxed_4735_; lean_object* v_res_4736_; 
v_updateToolchain_boxed_4735_ = lean_unbox(v_updateToolchain_4732_);
v_res_4736_ = l_Lake_Workspace_updateAndMaterialize(v_ws_4729_, v_toUpdate_4730_, v_leanOpts_4731_, v_updateToolchain_boxed_4735_, v_a_4733_);
lean_dec_ref(v_a_4733_);
return v_res_4736_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(lean_object* v_name_4741_, lean_object* v_what_4742_, lean_object* v___y_4743_){
_start:
{
lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; uint8_t v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; uint8_t v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
v___x_4745_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0));
v___x_4746_ = lean_string_append(v___x_4745_, v_what_4742_);
v___x_4747_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1));
v___x_4748_ = lean_string_append(v___x_4746_, v___x_4747_);
v___x_4749_ = 1;
v___x_4750_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4741_, v___x_4749_);
v___x_4751_ = lean_string_append(v___x_4748_, v___x_4750_);
v___x_4752_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2));
v___x_4753_ = lean_string_append(v___x_4751_, v___x_4752_);
v___x_4754_ = lean_string_append(v___x_4753_, v___x_4750_);
lean_dec_ref(v___x_4750_);
v___x_4755_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3));
v___x_4756_ = lean_string_append(v___x_4754_, v___x_4755_);
v___x_4757_ = 2;
v___x_4758_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4758_, 0, v___x_4756_);
lean_ctor_set_uint8(v___x_4758_, sizeof(void*)*1, v___x_4757_);
lean_inc_ref(v___y_4743_);
v___x_4759_ = lean_apply_2(v___y_4743_, v___x_4758_, lean_box(0));
v___x_4760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4760_, 0, v___x_4759_);
return v___x_4760_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___boxed(lean_object* v_name_4761_, lean_object* v_what_4762_, lean_object* v___y_4763_, lean_object* v___y_4764_){
_start:
{
lean_object* v_res_4765_; 
v_res_4765_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v_name_4761_, v_what_4762_, v___y_4763_);
lean_dec_ref(v___y_4763_);
lean_dec_ref(v_what_4762_);
return v_res_4765_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(lean_object* v_pkgEntries_4769_, lean_object* v_as_4770_, size_t v_i_4771_, size_t v_stop_4772_, lean_object* v_b_4773_, lean_object* v___y_4774_){
_start:
{
lean_object* v_a_4777_; lean_object* v___y_4782_; uint8_t v___x_4784_; 
v___x_4784_ = lean_usize_dec_eq(v_i_4771_, v_stop_4772_);
if (v___x_4784_ == 0)
{
lean_object* v___x_4785_; lean_object* v_src_x3f_4786_; 
v___x_4785_ = lean_array_uget_borrowed(v_as_4770_, v_i_4771_);
v_src_x3f_4786_ = lean_ctor_get(v___x_4785_, 3);
if (lean_obj_tag(v_src_x3f_4786_) == 1)
{
lean_object* v_name_4787_; lean_object* v_val_4788_; lean_object* v___x_4789_; 
v_name_4787_ = lean_ctor_get(v___x_4785_, 0);
v_val_4788_ = lean_ctor_get(v_src_x3f_4786_, 0);
v___x_4789_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_pkgEntries_4769_, v_name_4787_);
if (lean_obj_tag(v___x_4789_) == 1)
{
lean_object* v_val_4790_; lean_object* v___y_4792_; 
v_val_4790_ = lean_ctor_get(v___x_4789_, 0);
lean_inc(v_val_4790_);
lean_dec_ref_known(v___x_4789_, 1);
if (lean_obj_tag(v_val_4788_) == 0)
{
lean_object* v_src_4795_; 
v_src_4795_ = lean_ctor_get(v_val_4790_, 4);
lean_inc_ref(v_src_4795_);
lean_dec(v_val_4790_);
if (lean_obj_tag(v_src_4795_) == 0)
{
lean_object* v___x_4796_; 
lean_dec_ref_known(v_src_4795_, 1);
v___x_4796_ = lean_box(0);
v_a_4777_ = v___x_4796_;
goto v___jp_4776_;
}
else
{
lean_dec_ref(v_src_4795_);
v___y_4792_ = v___y_4774_;
goto v___jp_4791_;
}
}
else
{
lean_object* v_src_4797_; 
v_src_4797_ = lean_ctor_get(v_val_4790_, 4);
lean_inc_ref(v_src_4797_);
lean_dec(v_val_4790_);
if (lean_obj_tag(v_src_4797_) == 1)
{
lean_object* v_url_4798_; lean_object* v_rev_4799_; lean_object* v_url_4800_; lean_object* v_inputRev_x3f_4801_; lean_object* v___y_4803_; uint8_t v___x_4809_; 
v_url_4798_ = lean_ctor_get(v_val_4788_, 0);
v_rev_4799_ = lean_ctor_get(v_val_4788_, 1);
v_url_4800_ = lean_ctor_get(v_src_4797_, 0);
lean_inc_ref(v_url_4800_);
v_inputRev_x3f_4801_ = lean_ctor_get(v_src_4797_, 2);
lean_inc(v_inputRev_x3f_4801_);
lean_dec_ref_known(v_src_4797_, 4);
v___x_4809_ = lean_string_dec_eq(v_url_4798_, v_url_4800_);
lean_dec_ref(v_url_4800_);
if (v___x_4809_ == 0)
{
lean_object* v___x_4810_; lean_object* v___x_4811_; 
v___x_4810_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2));
lean_inc(v_name_4787_);
v___x_4811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v_name_4787_, v___x_4810_, v___y_4774_);
if (lean_obj_tag(v___x_4811_) == 0)
{
lean_dec_ref_known(v___x_4811_, 1);
v___y_4803_ = v___y_4774_;
goto v___jp_4802_;
}
else
{
lean_dec(v_inputRev_x3f_4801_);
return v___x_4811_;
}
}
else
{
v___y_4803_ = v___y_4774_;
goto v___jp_4802_;
}
v___jp_4802_:
{
lean_object* v___x_4804_; uint8_t v___x_4805_; 
v___x_4804_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
lean_inc(v_rev_4799_);
v___x_4805_ = l_Option_instDecidableEq___redArg(v___x_4804_, v_rev_4799_, v_inputRev_x3f_4801_);
if (v___x_4805_ == 0)
{
lean_object* v___x_4806_; lean_object* v___x_4807_; 
v___x_4806_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1));
lean_inc(v_name_4787_);
v___x_4807_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v_name_4787_, v___x_4806_, v___y_4803_);
v___y_4782_ = v___x_4807_;
goto v___jp_4781_;
}
else
{
lean_object* v___x_4808_; 
v___x_4808_ = lean_box(0);
v_a_4777_ = v___x_4808_;
goto v___jp_4776_;
}
}
}
else
{
lean_dec_ref(v_src_4797_);
v___y_4792_ = v___y_4774_;
goto v___jp_4791_;
}
}
v___jp_4791_:
{
lean_object* v___x_4793_; lean_object* v___x_4794_; 
v___x_4793_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0));
lean_inc(v_name_4787_);
v___x_4794_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v_name_4787_, v___x_4793_, v___y_4792_);
v___y_4782_ = v___x_4794_;
goto v___jp_4781_;
}
}
else
{
lean_object* v___x_4812_; 
lean_dec(v___x_4789_);
v___x_4812_ = lean_box(0);
v_a_4777_ = v___x_4812_;
goto v___jp_4776_;
}
}
else
{
lean_object* v___x_4813_; 
v___x_4813_ = lean_box(0);
v_a_4777_ = v___x_4813_;
goto v___jp_4776_;
}
}
else
{
lean_object* v___x_4814_; 
v___x_4814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4814_, 0, v_b_4773_);
return v___x_4814_;
}
v___jp_4776_:
{
size_t v___x_4778_; size_t v___x_4779_; 
v___x_4778_ = ((size_t)1ULL);
v___x_4779_ = lean_usize_add(v_i_4771_, v___x_4778_);
v_i_4771_ = v___x_4779_;
v_b_4773_ = v_a_4777_;
goto _start;
}
v___jp_4781_:
{
if (lean_obj_tag(v___y_4782_) == 0)
{
lean_object* v_a_4783_; 
v_a_4783_ = lean_ctor_get(v___y_4782_, 0);
lean_inc(v_a_4783_);
lean_dec_ref_known(v___y_4782_, 1);
v_a_4777_ = v_a_4783_;
goto v___jp_4776_;
}
else
{
return v___y_4782_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___boxed(lean_object* v_pkgEntries_4815_, lean_object* v_as_4816_, lean_object* v_i_4817_, lean_object* v_stop_4818_, lean_object* v_b_4819_, lean_object* v___y_4820_, lean_object* v___y_4821_){
_start:
{
size_t v_i_boxed_4822_; size_t v_stop_boxed_4823_; lean_object* v_res_4824_; 
v_i_boxed_4822_ = lean_unbox_usize(v_i_4817_);
lean_dec(v_i_4817_);
v_stop_boxed_4823_ = lean_unbox_usize(v_stop_4818_);
lean_dec(v_stop_4818_);
v_res_4824_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_4815_, v_as_4816_, v_i_boxed_4822_, v_stop_boxed_4823_, v_b_4819_, v___y_4820_);
lean_dec_ref(v___y_4820_);
lean_dec_ref(v_as_4816_);
lean_dec(v_pkgEntries_4815_);
return v_res_4824_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest(lean_object* v_pkgEntries_4825_, lean_object* v_deps_4826_, lean_object* v_a_4827_){
_start:
{
lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; uint8_t v___x_4832_; 
v___x_4829_ = lean_unsigned_to_nat(0u);
v___x_4830_ = lean_array_get_size(v_deps_4826_);
v___x_4831_ = lean_box(0);
v___x_4832_ = lean_nat_dec_lt(v___x_4829_, v___x_4830_);
if (v___x_4832_ == 0)
{
lean_object* v___x_4833_; 
v___x_4833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4833_, 0, v___x_4831_);
return v___x_4833_;
}
else
{
size_t v___x_4834_; size_t v___x_4835_; lean_object* v___x_4836_; 
v___x_4834_ = ((size_t)0ULL);
v___x_4835_ = lean_usize_of_nat(v___x_4830_);
v___x_4836_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_4825_, v_deps_4826_, v___x_4834_, v___x_4835_, v___x_4831_, v_a_4827_);
return v___x_4836_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest___boxed(lean_object* v_pkgEntries_4837_, lean_object* v_deps_4838_, lean_object* v_a_4839_, lean_object* v_a_4840_){
_start:
{
lean_object* v_res_4841_; 
v_res_4841_ = l___private_Lake_Load_Resolve_0__Lake_validateManifest(v_pkgEntries_4837_, v_deps_4838_, v_a_4839_);
lean_dec_ref(v_a_4839_);
lean_dec_ref(v_deps_4838_);
lean_dec(v_pkgEntries_4837_);
return v_res_4841_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lake_Workspace_materializeDeps_spec__2(lean_object* v_x_4842_, lean_object* v_x_4843_){
_start:
{
if (lean_obj_tag(v_x_4842_) == 0)
{
if (lean_obj_tag(v_x_4843_) == 0)
{
uint8_t v___x_4844_; 
v___x_4844_ = 1;
return v___x_4844_;
}
else
{
uint8_t v___x_4845_; 
v___x_4845_ = 0;
return v___x_4845_;
}
}
else
{
if (lean_obj_tag(v_x_4843_) == 0)
{
uint8_t v___x_4846_; 
v___x_4846_ = 0;
return v___x_4846_;
}
else
{
lean_object* v_val_4847_; lean_object* v_val_4848_; uint8_t v___x_4849_; 
v_val_4847_ = lean_ctor_get(v_x_4842_, 0);
v_val_4848_ = lean_ctor_get(v_x_4843_, 0);
v___x_4849_ = lean_string_dec_eq(v_val_4847_, v_val_4848_);
return v___x_4849_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lake_Workspace_materializeDeps_spec__2___boxed(lean_object* v_x_4850_, lean_object* v_x_4851_){
_start:
{
uint8_t v_res_4852_; lean_object* v_r_4853_; 
v_res_4852_ = l_instBEqOption_beq___at___00Lake_Workspace_materializeDeps_spec__2(v_x_4850_, v_x_4851_);
lean_dec(v_x_4851_);
lean_dec(v_x_4850_);
v_r_4853_ = lean_box(v_res_4852_);
return v_r_4853_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(lean_object* v_pkg_4859_, lean_object* v___y_4860_, lean_object* v___y_4861_, lean_object* v_leanOpts_4862_, uint8_t v_reconfigure_4863_, lean_object* v_as_4864_, size_t v_i_4865_, size_t v_stop_4866_, lean_object* v_b_4867_, lean_object* v___y_4868_){
_start:
{
uint8_t v___x_4870_; 
v___x_4870_ = lean_usize_dec_eq(v_i_4865_, v_stop_4866_);
if (v___x_4870_ == 0)
{
lean_object* v_ws_4871_; lean_object* v_depIdxs_4872_; lean_object* v___x_4874_; uint8_t v_isShared_4875_; uint8_t v_isSharedCheck_5002_; 
v_ws_4871_ = lean_ctor_get(v_b_4867_, 0);
v_depIdxs_4872_ = lean_ctor_get(v_b_4867_, 1);
v_isSharedCheck_5002_ = !lean_is_exclusive(v_b_4867_);
if (v_isSharedCheck_5002_ == 0)
{
v___x_4874_ = v_b_4867_;
v_isShared_4875_ = v_isSharedCheck_5002_;
goto v_resetjp_4873_;
}
else
{
lean_inc(v_depIdxs_4872_);
lean_inc(v_ws_4871_);
lean_dec(v_b_4867_);
v___x_4874_ = lean_box(0);
v_isShared_4875_ = v_isSharedCheck_5002_;
goto v_resetjp_4873_;
}
v_resetjp_4873_:
{
lean_object* v_lakeEnv_4876_; lean_object* v_packages_4877_; size_t v___x_4878_; size_t v___x_4879_; lean_object* v___x_4880_; lean_object* v___f_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; 
v_lakeEnv_4876_ = lean_ctor_get(v_ws_4871_, 0);
v_packages_4877_ = lean_ctor_get(v_ws_4871_, 4);
v___x_4878_ = ((size_t)1ULL);
v___x_4879_ = lean_usize_sub(v_i_4865_, v___x_4878_);
v___x_4880_ = lean_array_uget_borrowed(v_as_4864_, v___x_4879_);
lean_inc(v___x_4880_);
v___f_4881_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4881_, 0, v___x_4880_);
v___x_4882_ = lean_unsigned_to_nat(0u);
v___x_4883_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_4881_, v_packages_4877_, v___x_4882_);
if (lean_obj_tag(v___x_4883_) == 1)
{
lean_object* v_val_4884_; lean_object* v___x_4885_; lean_object* v___x_4887_; 
v_val_4884_ = lean_ctor_get(v___x_4883_, 0);
lean_inc(v_val_4884_);
lean_dec_ref_known(v___x_4883_, 1);
v___x_4885_ = lean_array_push(v_depIdxs_4872_, v_val_4884_);
if (v_isShared_4875_ == 0)
{
lean_ctor_set(v___x_4874_, 1, v___x_4885_);
v___x_4887_ = v___x_4874_;
goto v_reusejp_4886_;
}
else
{
lean_object* v_reuseFailAlloc_4889_; 
v_reuseFailAlloc_4889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4889_, 0, v_ws_4871_);
lean_ctor_set(v_reuseFailAlloc_4889_, 1, v___x_4885_);
v___x_4887_ = v_reuseFailAlloc_4889_;
goto v_reusejp_4886_;
}
v_reusejp_4886_:
{
v_i_4865_ = v___x_4879_;
v_b_4867_ = v___x_4887_;
goto _start;
}
}
else
{
lean_object* v_wsIdx_4890_; lean_object* v_baseName_4891_; lean_object* v_name_4892_; lean_object* v_opts_4893_; uint8_t v___x_4894_; 
lean_dec(v___x_4883_);
v_wsIdx_4890_ = lean_ctor_get(v_pkg_4859_, 0);
v_baseName_4891_ = lean_ctor_get(v_pkg_4859_, 1);
v_name_4892_ = lean_ctor_get(v___x_4880_, 0);
v_opts_4893_ = lean_ctor_get(v___x_4880_, 4);
v___x_4894_ = lean_name_eq(v_baseName_4891_, v_name_4892_);
if (v___x_4894_ == 0)
{
lean_object* v___x_4895_; 
v___x_4895_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___y_4860_, v_name_4892_);
if (lean_obj_tag(v___x_4895_) == 1)
{
lean_object* v_val_4896_; lean_object* v___x_4897_; lean_object* v_dir_4898_; lean_object* v___x_4899_; 
v_val_4896_ = lean_ctor_get(v___x_4895_, 0);
lean_inc(v_val_4896_);
lean_dec_ref_known(v___x_4895_, 1);
v___x_4897_ = lean_array_fget_borrowed(v_packages_4877_, v___x_4882_);
v_dir_4898_ = lean_ctor_get(v___x_4897_, 4);
lean_inc_ref(v___y_4861_);
lean_inc_ref(v_dir_4898_);
v___x_4899_ = l_Lake_PackageEntry_materialize(v_val_4896_, v_lakeEnv_4876_, v_dir_4898_, v___y_4861_, v___y_4868_);
if (lean_obj_tag(v___x_4899_) == 0)
{
lean_object* v_a_4900_; lean_object* v___x_4902_; uint8_t v_isShared_4903_; uint8_t v_isSharedCheck_4956_; 
v_a_4900_ = lean_ctor_get(v___x_4899_, 0);
v_isSharedCheck_4956_ = !lean_is_exclusive(v___x_4899_);
if (v_isSharedCheck_4956_ == 0)
{
v___x_4902_ = v___x_4899_;
v_isShared_4903_ = v_isSharedCheck_4956_;
goto v_resetjp_4901_;
}
else
{
lean_inc(v_a_4900_);
lean_dec(v___x_4899_);
v___x_4902_ = lean_box(0);
v_isShared_4903_ = v_isSharedCheck_4956_;
goto v_resetjp_4901_;
}
v_resetjp_4901_:
{
lean_object* v___x_4904_; lean_object* v_wsIdx_4905_; lean_object* v___x_4906_; 
v___x_4904_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_4905_ = lean_array_get_size(v_packages_4877_);
lean_inc_ref(v_leanOpts_4862_);
lean_inc(v_opts_4893_);
v___x_4906_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_4871_, v_a_4900_, v_opts_4893_, v_leanOpts_4862_, v_reconfigure_4863_, v___x_4904_);
if (lean_obj_tag(v___x_4906_) == 0)
{
lean_object* v_a_4907_; lean_object* v_a_4908_; lean_object* v___x_4909_; lean_object* v___x_4911_; 
lean_del_object(v___x_4902_);
v_a_4907_ = lean_ctor_get(v___x_4906_, 0);
lean_inc(v_a_4907_);
v_a_4908_ = lean_ctor_get(v___x_4906_, 1);
lean_inc(v_a_4908_);
lean_dec_ref_known(v___x_4906_, 2);
v___x_4909_ = lean_array_push(v_depIdxs_4872_, v_wsIdx_4905_);
if (v_isShared_4875_ == 0)
{
lean_ctor_set(v___x_4874_, 1, v___x_4909_);
lean_ctor_set(v___x_4874_, 0, v_a_4907_);
v___x_4911_ = v___x_4874_;
goto v_reusejp_4910_;
}
else
{
lean_object* v_reuseFailAlloc_4928_; 
v_reuseFailAlloc_4928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4928_, 0, v_a_4907_);
lean_ctor_set(v_reuseFailAlloc_4928_, 1, v___x_4909_);
v___x_4911_ = v_reuseFailAlloc_4928_;
goto v_reusejp_4910_;
}
v_reusejp_4910_:
{
lean_object* v___x_4912_; uint8_t v___x_4913_; 
v___x_4912_ = lean_array_get_size(v_a_4908_);
v___x_4913_ = lean_nat_dec_lt(v___x_4882_, v___x_4912_);
if (v___x_4913_ == 0)
{
lean_dec(v_a_4908_);
v_i_4865_ = v___x_4879_;
v_b_4867_ = v___x_4911_;
goto _start;
}
else
{
lean_object* v___x_4915_; size_t v___x_4916_; size_t v___x_4917_; lean_object* v___x_4918_; 
v___x_4915_ = lean_box(0);
v___x_4916_ = ((size_t)0ULL);
v___x_4917_ = lean_usize_of_nat(v___x_4912_);
v___x_4918_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4908_, v___x_4916_, v___x_4917_, v___x_4915_, v___y_4868_);
lean_dec(v_a_4908_);
if (lean_obj_tag(v___x_4918_) == 0)
{
lean_dec_ref_known(v___x_4918_, 1);
v_i_4865_ = v___x_4879_;
v_b_4867_ = v___x_4911_;
goto _start;
}
else
{
lean_object* v_a_4920_; lean_object* v___x_4922_; uint8_t v_isShared_4923_; uint8_t v_isSharedCheck_4927_; 
lean_dec_ref(v___x_4911_);
lean_dec_ref(v_leanOpts_4862_);
lean_dec_ref(v___y_4861_);
lean_dec_ref(v_pkg_4859_);
v_a_4920_ = lean_ctor_get(v___x_4918_, 0);
v_isSharedCheck_4927_ = !lean_is_exclusive(v___x_4918_);
if (v_isSharedCheck_4927_ == 0)
{
v___x_4922_ = v___x_4918_;
v_isShared_4923_ = v_isSharedCheck_4927_;
goto v_resetjp_4921_;
}
else
{
lean_inc(v_a_4920_);
lean_dec(v___x_4918_);
v___x_4922_ = lean_box(0);
v_isShared_4923_ = v_isSharedCheck_4927_;
goto v_resetjp_4921_;
}
v_resetjp_4921_:
{
lean_object* v___x_4925_; 
if (v_isShared_4923_ == 0)
{
v___x_4925_ = v___x_4922_;
goto v_reusejp_4924_;
}
else
{
lean_object* v_reuseFailAlloc_4926_; 
v_reuseFailAlloc_4926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4926_, 0, v_a_4920_);
v___x_4925_ = v_reuseFailAlloc_4926_;
goto v_reusejp_4924_;
}
v_reusejp_4924_:
{
return v___x_4925_;
}
}
}
}
}
}
else
{
lean_object* v_a_4929_; lean_object* v___x_4930_; uint8_t v___x_4931_; 
lean_del_object(v___x_4874_);
lean_dec_ref(v_depIdxs_4872_);
lean_dec_ref(v_leanOpts_4862_);
lean_dec_ref(v___y_4861_);
lean_dec_ref(v_pkg_4859_);
v_a_4929_ = lean_ctor_get(v___x_4906_, 1);
lean_inc(v_a_4929_);
lean_dec_ref_known(v___x_4906_, 2);
v___x_4930_ = lean_array_get_size(v_a_4929_);
v___x_4931_ = lean_nat_dec_lt(v___x_4882_, v___x_4930_);
if (v___x_4931_ == 0)
{
lean_object* v___x_4932_; lean_object* v___x_4934_; 
lean_dec(v_a_4929_);
v___x_4932_ = lean_box(0);
if (v_isShared_4903_ == 0)
{
lean_ctor_set_tag(v___x_4902_, 1);
lean_ctor_set(v___x_4902_, 0, v___x_4932_);
v___x_4934_ = v___x_4902_;
goto v_reusejp_4933_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v___x_4932_);
v___x_4934_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4933_;
}
v_reusejp_4933_:
{
return v___x_4934_;
}
}
else
{
lean_object* v___x_4936_; size_t v___x_4937_; size_t v___x_4938_; lean_object* v___x_4939_; 
lean_del_object(v___x_4902_);
v___x_4936_ = lean_box(0);
v___x_4937_ = ((size_t)0ULL);
v___x_4938_ = lean_usize_of_nat(v___x_4930_);
v___x_4939_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4929_, v___x_4937_, v___x_4938_, v___x_4936_, v___y_4868_);
lean_dec(v_a_4929_);
if (lean_obj_tag(v___x_4939_) == 0)
{
lean_object* v___x_4941_; uint8_t v_isShared_4942_; uint8_t v_isSharedCheck_4946_; 
v_isSharedCheck_4946_ = !lean_is_exclusive(v___x_4939_);
if (v_isSharedCheck_4946_ == 0)
{
lean_object* v_unused_4947_; 
v_unused_4947_ = lean_ctor_get(v___x_4939_, 0);
lean_dec(v_unused_4947_);
v___x_4941_ = v___x_4939_;
v_isShared_4942_ = v_isSharedCheck_4946_;
goto v_resetjp_4940_;
}
else
{
lean_dec(v___x_4939_);
v___x_4941_ = lean_box(0);
v_isShared_4942_ = v_isSharedCheck_4946_;
goto v_resetjp_4940_;
}
v_resetjp_4940_:
{
lean_object* v___x_4944_; 
if (v_isShared_4942_ == 0)
{
lean_ctor_set_tag(v___x_4941_, 1);
lean_ctor_set(v___x_4941_, 0, v___x_4936_);
v___x_4944_ = v___x_4941_;
goto v_reusejp_4943_;
}
else
{
lean_object* v_reuseFailAlloc_4945_; 
v_reuseFailAlloc_4945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4945_, 0, v___x_4936_);
v___x_4944_ = v_reuseFailAlloc_4945_;
goto v_reusejp_4943_;
}
v_reusejp_4943_:
{
return v___x_4944_;
}
}
}
else
{
lean_object* v_a_4948_; lean_object* v___x_4950_; uint8_t v_isShared_4951_; uint8_t v_isSharedCheck_4955_; 
v_a_4948_ = lean_ctor_get(v___x_4939_, 0);
v_isSharedCheck_4955_ = !lean_is_exclusive(v___x_4939_);
if (v_isSharedCheck_4955_ == 0)
{
v___x_4950_ = v___x_4939_;
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
else
{
lean_inc(v_a_4948_);
lean_dec(v___x_4939_);
v___x_4950_ = lean_box(0);
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
v_resetjp_4949_:
{
lean_object* v___x_4953_; 
if (v_isShared_4951_ == 0)
{
v___x_4953_ = v___x_4950_;
goto v_reusejp_4952_;
}
else
{
lean_object* v_reuseFailAlloc_4954_; 
v_reuseFailAlloc_4954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4954_, 0, v_a_4948_);
v___x_4953_ = v_reuseFailAlloc_4954_;
goto v_reusejp_4952_;
}
v_reusejp_4952_:
{
return v___x_4953_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4957_; lean_object* v___x_4959_; uint8_t v_isShared_4960_; uint8_t v_isSharedCheck_4964_; 
lean_del_object(v___x_4874_);
lean_dec_ref(v_depIdxs_4872_);
lean_dec_ref(v_ws_4871_);
lean_dec_ref(v_leanOpts_4862_);
lean_dec_ref(v___y_4861_);
lean_dec_ref(v_pkg_4859_);
v_a_4957_ = lean_ctor_get(v___x_4899_, 0);
v_isSharedCheck_4964_ = !lean_is_exclusive(v___x_4899_);
if (v_isSharedCheck_4964_ == 0)
{
v___x_4959_ = v___x_4899_;
v_isShared_4960_ = v_isSharedCheck_4964_;
goto v_resetjp_4958_;
}
else
{
lean_inc(v_a_4957_);
lean_dec(v___x_4899_);
v___x_4959_ = lean_box(0);
v_isShared_4960_ = v_isSharedCheck_4964_;
goto v_resetjp_4958_;
}
v_resetjp_4958_:
{
lean_object* v___x_4962_; 
if (v_isShared_4960_ == 0)
{
v___x_4962_ = v___x_4959_;
goto v_reusejp_4961_;
}
else
{
lean_object* v_reuseFailAlloc_4963_; 
v_reuseFailAlloc_4963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4963_, 0, v_a_4957_);
v___x_4962_ = v_reuseFailAlloc_4963_;
goto v_reusejp_4961_;
}
v_reusejp_4961_:
{
return v___x_4962_;
}
}
}
}
else
{
uint8_t v___x_4965_; 
lean_inc(v_baseName_4891_);
lean_inc(v_wsIdx_4890_);
lean_dec(v___x_4895_);
lean_del_object(v___x_4874_);
lean_dec_ref(v_depIdxs_4872_);
lean_dec_ref(v_ws_4871_);
lean_dec_ref(v_leanOpts_4862_);
lean_dec_ref(v___y_4861_);
lean_dec_ref(v_pkg_4859_);
v___x_4965_ = lean_nat_dec_eq(v_wsIdx_4890_, v___x_4882_);
lean_dec(v_wsIdx_4890_);
if (v___x_4965_ == 0)
{
lean_object* v___x_4966_; uint8_t v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; uint8_t v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; 
v___x_4966_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_4967_ = 1;
lean_inc(v_name_4892_);
v___x_4968_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4892_, v___x_4967_);
v___x_4969_ = lean_string_append(v___x_4966_, v___x_4968_);
lean_dec_ref(v___x_4968_);
v___x_4970_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1));
v___x_4971_ = lean_string_append(v___x_4969_, v___x_4970_);
v___x_4972_ = l_Lean_Name_toString(v_baseName_4891_, v___x_4965_);
v___x_4973_ = lean_string_append(v___x_4971_, v___x_4972_);
lean_dec_ref(v___x_4972_);
v___x_4974_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2));
v___x_4975_ = lean_string_append(v___x_4973_, v___x_4974_);
v___x_4976_ = 3;
v___x_4977_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4977_, 0, v___x_4975_);
lean_ctor_set_uint8(v___x_4977_, sizeof(void*)*1, v___x_4976_);
lean_inc_ref(v___y_4868_);
v___x_4978_ = lean_apply_2(v___y_4868_, v___x_4977_, lean_box(0));
v___x_4979_ = lean_box(0);
v___x_4980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4980_, 0, v___x_4979_);
return v___x_4980_;
}
else
{
lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; uint8_t v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; 
lean_dec(v_baseName_4891_);
v___x_4981_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
lean_inc(v_name_4892_);
v___x_4982_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4892_, v___x_4965_);
v___x_4983_ = lean_string_append(v___x_4981_, v___x_4982_);
v___x_4984_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3));
v___x_4985_ = lean_string_append(v___x_4983_, v___x_4984_);
v___x_4986_ = lean_string_append(v___x_4985_, v___x_4982_);
lean_dec_ref(v___x_4982_);
v___x_4987_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4));
v___x_4988_ = lean_string_append(v___x_4986_, v___x_4987_);
v___x_4989_ = 3;
v___x_4990_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4990_, 0, v___x_4988_);
lean_ctor_set_uint8(v___x_4990_, sizeof(void*)*1, v___x_4989_);
lean_inc_ref(v___y_4868_);
v___x_4991_ = lean_apply_2(v___y_4868_, v___x_4990_, lean_box(0));
v___x_4992_ = lean_box(0);
v___x_4993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4993_, 0, v___x_4992_);
return v___x_4993_;
}
}
}
else
{
lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; uint8_t v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; 
lean_inc(v_baseName_4891_);
lean_del_object(v___x_4874_);
lean_dec_ref(v_depIdxs_4872_);
lean_dec_ref(v_ws_4871_);
lean_dec_ref(v_leanOpts_4862_);
lean_dec_ref(v___y_4861_);
lean_dec_ref(v_pkg_4859_);
v___x_4994_ = l_Lean_Name_toString(v_baseName_4891_, v___x_4870_);
v___x_4995_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_4996_ = lean_string_append(v___x_4994_, v___x_4995_);
v___x_4997_ = 3;
v___x_4998_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4998_, 0, v___x_4996_);
lean_ctor_set_uint8(v___x_4998_, sizeof(void*)*1, v___x_4997_);
lean_inc_ref(v___y_4868_);
v___x_4999_ = lean_apply_2(v___y_4868_, v___x_4998_, lean_box(0));
v___x_5000_ = lean_box(0);
v___x_5001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5001_, 0, v___x_5000_);
return v___x_5001_;
}
}
}
}
else
{
lean_object* v___x_5003_; 
lean_dec_ref(v_leanOpts_4862_);
lean_dec_ref(v___y_4861_);
lean_dec_ref(v_pkg_4859_);
v___x_5003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5003_, 0, v_b_4867_);
return v___x_5003_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_pkg_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v_leanOpts_5007_, lean_object* v_reconfigure_5008_, lean_object* v_as_5009_, lean_object* v_i_5010_, lean_object* v_stop_5011_, lean_object* v_b_5012_, lean_object* v___y_5013_, lean_object* v___y_5014_){
_start:
{
uint8_t v_reconfigure_boxed_5015_; size_t v_i_boxed_5016_; size_t v_stop_boxed_5017_; lean_object* v_res_5018_; 
v_reconfigure_boxed_5015_ = lean_unbox(v_reconfigure_5008_);
v_i_boxed_5016_ = lean_unbox_usize(v_i_5010_);
lean_dec(v_i_5010_);
v_stop_boxed_5017_ = lean_unbox_usize(v_stop_5011_);
lean_dec(v_stop_5011_);
v_res_5018_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_5004_, v___y_5005_, v___y_5006_, v_leanOpts_5007_, v_reconfigure_boxed_5015_, v_as_5009_, v_i_boxed_5016_, v_stop_boxed_5017_, v_b_5012_, v___y_5013_);
lean_dec_ref(v___y_5013_);
lean_dec_ref(v_as_5009_);
lean_dec(v___y_5005_);
return v_res_5018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(lean_object* v_start_5019_, lean_object* v_pkg_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v_leanOpts_5023_, uint8_t v_reconfigure_5024_, lean_object* v_as_5025_, size_t v_i_5026_, size_t v_stop_5027_, lean_object* v_b_5028_, lean_object* v___y_5029_){
_start:
{
uint8_t v___x_5031_; 
v___x_5031_ = lean_usize_dec_eq(v_i_5026_, v_stop_5027_);
if (v___x_5031_ == 0)
{
lean_object* v_ws_5032_; lean_object* v_depIdxs_5033_; lean_object* v___x_5035_; uint8_t v_isShared_5036_; uint8_t v_isSharedCheck_5163_; 
v_ws_5032_ = lean_ctor_get(v_b_5028_, 0);
v_depIdxs_5033_ = lean_ctor_get(v_b_5028_, 1);
v_isSharedCheck_5163_ = !lean_is_exclusive(v_b_5028_);
if (v_isSharedCheck_5163_ == 0)
{
v___x_5035_ = v_b_5028_;
v_isShared_5036_ = v_isSharedCheck_5163_;
goto v_resetjp_5034_;
}
else
{
lean_inc(v_depIdxs_5033_);
lean_inc(v_ws_5032_);
lean_dec(v_b_5028_);
v___x_5035_ = lean_box(0);
v_isShared_5036_ = v_isSharedCheck_5163_;
goto v_resetjp_5034_;
}
v_resetjp_5034_:
{
lean_object* v_lakeEnv_5037_; lean_object* v_packages_5038_; size_t v___x_5039_; size_t v___x_5040_; lean_object* v___x_5041_; lean_object* v___f_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; 
v_lakeEnv_5037_ = lean_ctor_get(v_ws_5032_, 0);
v_packages_5038_ = lean_ctor_get(v_ws_5032_, 4);
v___x_5039_ = ((size_t)1ULL);
v___x_5040_ = lean_usize_sub(v_i_5026_, v___x_5039_);
v___x_5041_ = lean_array_uget_borrowed(v_as_5025_, v___x_5040_);
lean_inc(v___x_5041_);
v___f_5042_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7_spec__9___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_5042_, 0, v___x_5041_);
v___x_5043_ = lean_unsigned_to_nat(0u);
v___x_5044_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_5042_, v_packages_5038_, v___x_5043_);
if (lean_obj_tag(v___x_5044_) == 1)
{
lean_object* v_val_5045_; lean_object* v___x_5046_; lean_object* v___x_5048_; 
v_val_5045_ = lean_ctor_get(v___x_5044_, 0);
lean_inc(v_val_5045_);
lean_dec_ref_known(v___x_5044_, 1);
v___x_5046_ = lean_array_push(v_depIdxs_5033_, v_val_5045_);
if (v_isShared_5036_ == 0)
{
lean_ctor_set(v___x_5035_, 1, v___x_5046_);
v___x_5048_ = v___x_5035_;
goto v_reusejp_5047_;
}
else
{
lean_object* v_reuseFailAlloc_5050_; 
v_reuseFailAlloc_5050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5050_, 0, v_ws_5032_);
lean_ctor_set(v_reuseFailAlloc_5050_, 1, v___x_5046_);
v___x_5048_ = v_reuseFailAlloc_5050_;
goto v_reusejp_5047_;
}
v_reusejp_5047_:
{
lean_object* v___x_5049_; 
v___x_5049_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_5020_, v___y_5021_, v___y_5022_, v_leanOpts_5023_, v_reconfigure_5024_, v_as_5025_, v___x_5040_, v_stop_5027_, v___x_5048_, v___y_5029_);
return v___x_5049_;
}
}
else
{
lean_object* v_wsIdx_5051_; lean_object* v_baseName_5052_; lean_object* v_name_5053_; lean_object* v_opts_5054_; uint8_t v___x_5055_; 
lean_dec(v___x_5044_);
v_wsIdx_5051_ = lean_ctor_get(v_pkg_5020_, 0);
v_baseName_5052_ = lean_ctor_get(v_pkg_5020_, 1);
v_name_5053_ = lean_ctor_get(v___x_5041_, 0);
v_opts_5054_ = lean_ctor_get(v___x_5041_, 4);
v___x_5055_ = lean_name_eq(v_baseName_5052_, v_name_5053_);
if (v___x_5055_ == 0)
{
lean_object* v___x_5056_; 
v___x_5056_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___y_5021_, v_name_5053_);
if (lean_obj_tag(v___x_5056_) == 1)
{
lean_object* v_val_5057_; lean_object* v___x_5058_; lean_object* v_dir_5059_; lean_object* v___x_5060_; 
v_val_5057_ = lean_ctor_get(v___x_5056_, 0);
lean_inc(v_val_5057_);
lean_dec_ref_known(v___x_5056_, 1);
v___x_5058_ = lean_array_fget_borrowed(v_packages_5038_, v___x_5043_);
v_dir_5059_ = lean_ctor_get(v___x_5058_, 4);
lean_inc_ref(v___y_5022_);
lean_inc_ref(v_dir_5059_);
v___x_5060_ = l_Lake_PackageEntry_materialize(v_val_5057_, v_lakeEnv_5037_, v_dir_5059_, v___y_5022_, v___y_5029_);
if (lean_obj_tag(v___x_5060_) == 0)
{
lean_object* v_a_5061_; lean_object* v___x_5063_; uint8_t v_isShared_5064_; uint8_t v_isSharedCheck_5117_; 
v_a_5061_ = lean_ctor_get(v___x_5060_, 0);
v_isSharedCheck_5117_ = !lean_is_exclusive(v___x_5060_);
if (v_isSharedCheck_5117_ == 0)
{
v___x_5063_ = v___x_5060_;
v_isShared_5064_ = v_isSharedCheck_5117_;
goto v_resetjp_5062_;
}
else
{
lean_inc(v_a_5061_);
lean_dec(v___x_5060_);
v___x_5063_ = lean_box(0);
v_isShared_5064_ = v_isSharedCheck_5117_;
goto v_resetjp_5062_;
}
v_resetjp_5062_:
{
lean_object* v___x_5065_; lean_object* v_wsIdx_5066_; lean_object* v___x_5067_; 
v___x_5065_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_5066_ = lean_array_get_size(v_packages_5038_);
lean_inc_ref(v_leanOpts_5023_);
lean_inc(v_opts_5054_);
v___x_5067_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_5032_, v_a_5061_, v_opts_5054_, v_leanOpts_5023_, v_reconfigure_5024_, v___x_5065_);
if (lean_obj_tag(v___x_5067_) == 0)
{
lean_object* v_a_5068_; lean_object* v_a_5069_; lean_object* v___x_5070_; lean_object* v___x_5072_; 
lean_del_object(v___x_5063_);
v_a_5068_ = lean_ctor_get(v___x_5067_, 0);
lean_inc(v_a_5068_);
v_a_5069_ = lean_ctor_get(v___x_5067_, 1);
lean_inc(v_a_5069_);
lean_dec_ref_known(v___x_5067_, 2);
v___x_5070_ = lean_array_push(v_depIdxs_5033_, v_wsIdx_5066_);
if (v_isShared_5036_ == 0)
{
lean_ctor_set(v___x_5035_, 1, v___x_5070_);
lean_ctor_set(v___x_5035_, 0, v_a_5068_);
v___x_5072_ = v___x_5035_;
goto v_reusejp_5071_;
}
else
{
lean_object* v_reuseFailAlloc_5089_; 
v_reuseFailAlloc_5089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5089_, 0, v_a_5068_);
lean_ctor_set(v_reuseFailAlloc_5089_, 1, v___x_5070_);
v___x_5072_ = v_reuseFailAlloc_5089_;
goto v_reusejp_5071_;
}
v_reusejp_5071_:
{
lean_object* v___x_5073_; uint8_t v___x_5074_; 
v___x_5073_ = lean_array_get_size(v_a_5069_);
v___x_5074_ = lean_nat_dec_lt(v___x_5043_, v___x_5073_);
if (v___x_5074_ == 0)
{
lean_object* v___x_5075_; 
lean_dec(v_a_5069_);
v___x_5075_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_5020_, v___y_5021_, v___y_5022_, v_leanOpts_5023_, v_reconfigure_5024_, v_as_5025_, v___x_5040_, v_stop_5027_, v___x_5072_, v___y_5029_);
return v___x_5075_;
}
else
{
lean_object* v___x_5076_; size_t v___x_5077_; size_t v___x_5078_; lean_object* v___x_5079_; 
v___x_5076_ = lean_box(0);
v___x_5077_ = ((size_t)0ULL);
v___x_5078_ = lean_usize_of_nat(v___x_5073_);
v___x_5079_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_5069_, v___x_5077_, v___x_5078_, v___x_5076_, v___y_5029_);
lean_dec(v_a_5069_);
if (lean_obj_tag(v___x_5079_) == 0)
{
lean_object* v___x_5080_; 
lean_dec_ref_known(v___x_5079_, 1);
v___x_5080_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_5020_, v___y_5021_, v___y_5022_, v_leanOpts_5023_, v_reconfigure_5024_, v_as_5025_, v___x_5040_, v_stop_5027_, v___x_5072_, v___y_5029_);
return v___x_5080_;
}
else
{
lean_object* v_a_5081_; lean_object* v___x_5083_; uint8_t v_isShared_5084_; uint8_t v_isSharedCheck_5088_; 
lean_dec_ref(v___x_5072_);
lean_dec_ref(v_leanOpts_5023_);
lean_dec_ref(v___y_5022_);
lean_dec_ref(v_pkg_5020_);
v_a_5081_ = lean_ctor_get(v___x_5079_, 0);
v_isSharedCheck_5088_ = !lean_is_exclusive(v___x_5079_);
if (v_isSharedCheck_5088_ == 0)
{
v___x_5083_ = v___x_5079_;
v_isShared_5084_ = v_isSharedCheck_5088_;
goto v_resetjp_5082_;
}
else
{
lean_inc(v_a_5081_);
lean_dec(v___x_5079_);
v___x_5083_ = lean_box(0);
v_isShared_5084_ = v_isSharedCheck_5088_;
goto v_resetjp_5082_;
}
v_resetjp_5082_:
{
lean_object* v___x_5086_; 
if (v_isShared_5084_ == 0)
{
v___x_5086_ = v___x_5083_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5087_; 
v_reuseFailAlloc_5087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5087_, 0, v_a_5081_);
v___x_5086_ = v_reuseFailAlloc_5087_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
return v___x_5086_;
}
}
}
}
}
}
else
{
lean_object* v_a_5090_; lean_object* v___x_5091_; uint8_t v___x_5092_; 
lean_del_object(v___x_5035_);
lean_dec_ref(v_depIdxs_5033_);
lean_dec_ref(v_leanOpts_5023_);
lean_dec_ref(v___y_5022_);
lean_dec_ref(v_pkg_5020_);
v_a_5090_ = lean_ctor_get(v___x_5067_, 1);
lean_inc(v_a_5090_);
lean_dec_ref_known(v___x_5067_, 2);
v___x_5091_ = lean_array_get_size(v_a_5090_);
v___x_5092_ = lean_nat_dec_lt(v___x_5043_, v___x_5091_);
if (v___x_5092_ == 0)
{
lean_object* v___x_5093_; lean_object* v___x_5095_; 
lean_dec(v_a_5090_);
v___x_5093_ = lean_box(0);
if (v_isShared_5064_ == 0)
{
lean_ctor_set_tag(v___x_5063_, 1);
lean_ctor_set(v___x_5063_, 0, v___x_5093_);
v___x_5095_ = v___x_5063_;
goto v_reusejp_5094_;
}
else
{
lean_object* v_reuseFailAlloc_5096_; 
v_reuseFailAlloc_5096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5096_, 0, v___x_5093_);
v___x_5095_ = v_reuseFailAlloc_5096_;
goto v_reusejp_5094_;
}
v_reusejp_5094_:
{
return v___x_5095_;
}
}
else
{
lean_object* v___x_5097_; size_t v___x_5098_; size_t v___x_5099_; lean_object* v___x_5100_; 
lean_del_object(v___x_5063_);
v___x_5097_ = lean_box(0);
v___x_5098_ = ((size_t)0ULL);
v___x_5099_ = lean_usize_of_nat(v___x_5091_);
v___x_5100_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_5090_, v___x_5098_, v___x_5099_, v___x_5097_, v___y_5029_);
lean_dec(v_a_5090_);
if (lean_obj_tag(v___x_5100_) == 0)
{
lean_object* v___x_5102_; uint8_t v_isShared_5103_; uint8_t v_isSharedCheck_5107_; 
v_isSharedCheck_5107_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5107_ == 0)
{
lean_object* v_unused_5108_; 
v_unused_5108_ = lean_ctor_get(v___x_5100_, 0);
lean_dec(v_unused_5108_);
v___x_5102_ = v___x_5100_;
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
else
{
lean_dec(v___x_5100_);
v___x_5102_ = lean_box(0);
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
v_resetjp_5101_:
{
lean_object* v___x_5105_; 
if (v_isShared_5103_ == 0)
{
lean_ctor_set_tag(v___x_5102_, 1);
lean_ctor_set(v___x_5102_, 0, v___x_5097_);
v___x_5105_ = v___x_5102_;
goto v_reusejp_5104_;
}
else
{
lean_object* v_reuseFailAlloc_5106_; 
v_reuseFailAlloc_5106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5106_, 0, v___x_5097_);
v___x_5105_ = v_reuseFailAlloc_5106_;
goto v_reusejp_5104_;
}
v_reusejp_5104_:
{
return v___x_5105_;
}
}
}
else
{
lean_object* v_a_5109_; lean_object* v___x_5111_; uint8_t v_isShared_5112_; uint8_t v_isSharedCheck_5116_; 
v_a_5109_ = lean_ctor_get(v___x_5100_, 0);
v_isSharedCheck_5116_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5116_ == 0)
{
v___x_5111_ = v___x_5100_;
v_isShared_5112_ = v_isSharedCheck_5116_;
goto v_resetjp_5110_;
}
else
{
lean_inc(v_a_5109_);
lean_dec(v___x_5100_);
v___x_5111_ = lean_box(0);
v_isShared_5112_ = v_isSharedCheck_5116_;
goto v_resetjp_5110_;
}
v_resetjp_5110_:
{
lean_object* v___x_5114_; 
if (v_isShared_5112_ == 0)
{
v___x_5114_ = v___x_5111_;
goto v_reusejp_5113_;
}
else
{
lean_object* v_reuseFailAlloc_5115_; 
v_reuseFailAlloc_5115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5115_, 0, v_a_5109_);
v___x_5114_ = v_reuseFailAlloc_5115_;
goto v_reusejp_5113_;
}
v_reusejp_5113_:
{
return v___x_5114_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5118_; lean_object* v___x_5120_; uint8_t v_isShared_5121_; uint8_t v_isSharedCheck_5125_; 
lean_del_object(v___x_5035_);
lean_dec_ref(v_depIdxs_5033_);
lean_dec_ref(v_ws_5032_);
lean_dec_ref(v_leanOpts_5023_);
lean_dec_ref(v___y_5022_);
lean_dec_ref(v_pkg_5020_);
v_a_5118_ = lean_ctor_get(v___x_5060_, 0);
v_isSharedCheck_5125_ = !lean_is_exclusive(v___x_5060_);
if (v_isSharedCheck_5125_ == 0)
{
v___x_5120_ = v___x_5060_;
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
else
{
lean_inc(v_a_5118_);
lean_dec(v___x_5060_);
v___x_5120_ = lean_box(0);
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
v_resetjp_5119_:
{
lean_object* v___x_5123_; 
if (v_isShared_5121_ == 0)
{
v___x_5123_ = v___x_5120_;
goto v_reusejp_5122_;
}
else
{
lean_object* v_reuseFailAlloc_5124_; 
v_reuseFailAlloc_5124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5124_, 0, v_a_5118_);
v___x_5123_ = v_reuseFailAlloc_5124_;
goto v_reusejp_5122_;
}
v_reusejp_5122_:
{
return v___x_5123_;
}
}
}
}
else
{
uint8_t v___x_5126_; 
lean_inc(v_baseName_5052_);
lean_inc(v_wsIdx_5051_);
lean_dec(v___x_5056_);
lean_del_object(v___x_5035_);
lean_dec_ref(v_depIdxs_5033_);
lean_dec_ref(v_ws_5032_);
lean_dec_ref(v_leanOpts_5023_);
lean_dec_ref(v___y_5022_);
lean_dec_ref(v_pkg_5020_);
v___x_5126_ = lean_nat_dec_eq(v_wsIdx_5051_, v___x_5043_);
lean_dec(v_wsIdx_5051_);
if (v___x_5126_ == 0)
{
lean_object* v___x_5127_; uint8_t v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; uint8_t v___x_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; 
v___x_5127_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_5128_ = 1;
lean_inc(v_name_5053_);
v___x_5129_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_5053_, v___x_5128_);
v___x_5130_ = lean_string_append(v___x_5127_, v___x_5129_);
lean_dec_ref(v___x_5129_);
v___x_5131_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1));
v___x_5132_ = lean_string_append(v___x_5130_, v___x_5131_);
v___x_5133_ = l_Lean_Name_toString(v_baseName_5052_, v___x_5126_);
v___x_5134_ = lean_string_append(v___x_5132_, v___x_5133_);
lean_dec_ref(v___x_5133_);
v___x_5135_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2));
v___x_5136_ = lean_string_append(v___x_5134_, v___x_5135_);
v___x_5137_ = 3;
v___x_5138_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5138_, 0, v___x_5136_);
lean_ctor_set_uint8(v___x_5138_, sizeof(void*)*1, v___x_5137_);
lean_inc_ref(v___y_5029_);
v___x_5139_ = lean_apply_2(v___y_5029_, v___x_5138_, lean_box(0));
v___x_5140_ = lean_box(0);
v___x_5141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5141_, 0, v___x_5140_);
return v___x_5141_;
}
else
{
lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; lean_object* v___x_5149_; uint8_t v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; lean_object* v___x_5154_; 
lean_dec(v_baseName_5052_);
v___x_5142_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
lean_inc(v_name_5053_);
v___x_5143_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_5053_, v___x_5126_);
v___x_5144_ = lean_string_append(v___x_5142_, v___x_5143_);
v___x_5145_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3));
v___x_5146_ = lean_string_append(v___x_5144_, v___x_5145_);
v___x_5147_ = lean_string_append(v___x_5146_, v___x_5143_);
lean_dec_ref(v___x_5143_);
v___x_5148_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4));
v___x_5149_ = lean_string_append(v___x_5147_, v___x_5148_);
v___x_5150_ = 3;
v___x_5151_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5151_, 0, v___x_5149_);
lean_ctor_set_uint8(v___x_5151_, sizeof(void*)*1, v___x_5150_);
lean_inc_ref(v___y_5029_);
v___x_5152_ = lean_apply_2(v___y_5029_, v___x_5151_, lean_box(0));
v___x_5153_ = lean_box(0);
v___x_5154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5154_, 0, v___x_5153_);
return v___x_5154_;
}
}
}
else
{
lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; uint8_t v___x_5158_; lean_object* v___x_5159_; lean_object* v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; 
lean_inc(v_baseName_5052_);
lean_del_object(v___x_5035_);
lean_dec_ref(v_depIdxs_5033_);
lean_dec_ref(v_ws_5032_);
lean_dec_ref(v_leanOpts_5023_);
lean_dec_ref(v___y_5022_);
lean_dec_ref(v_pkg_5020_);
v___x_5155_ = l_Lean_Name_toString(v_baseName_5052_, v___x_5031_);
v___x_5156_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_5157_ = lean_string_append(v___x_5155_, v___x_5156_);
v___x_5158_ = 3;
v___x_5159_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5159_, 0, v___x_5157_);
lean_ctor_set_uint8(v___x_5159_, sizeof(void*)*1, v___x_5158_);
lean_inc_ref(v___y_5029_);
v___x_5160_ = lean_apply_2(v___y_5029_, v___x_5159_, lean_box(0));
v___x_5161_ = lean_box(0);
v___x_5162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5162_, 0, v___x_5161_);
return v___x_5162_;
}
}
}
}
else
{
lean_object* v___x_5164_; 
lean_dec_ref(v_leanOpts_5023_);
lean_dec_ref(v___y_5022_);
lean_dec_ref(v_pkg_5020_);
v___x_5164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5164_, 0, v_b_5028_);
return v___x_5164_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0___boxed(lean_object* v_start_5165_, lean_object* v_pkg_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_, lean_object* v_leanOpts_5169_, lean_object* v_reconfigure_5170_, lean_object* v_as_5171_, lean_object* v_i_5172_, lean_object* v_stop_5173_, lean_object* v_b_5174_, lean_object* v___y_5175_, lean_object* v___y_5176_){
_start:
{
uint8_t v_reconfigure_boxed_5177_; size_t v_i_boxed_5178_; size_t v_stop_boxed_5179_; lean_object* v_res_5180_; 
v_reconfigure_boxed_5177_ = lean_unbox(v_reconfigure_5170_);
v_i_boxed_5178_ = lean_unbox_usize(v_i_5172_);
lean_dec(v_i_5172_);
v_stop_boxed_5179_ = lean_unbox_usize(v_stop_5173_);
lean_dec(v_stop_5173_);
v_res_5180_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_5165_, v_pkg_5166_, v___y_5167_, v___y_5168_, v_leanOpts_5169_, v_reconfigure_boxed_5177_, v_as_5171_, v_i_boxed_5178_, v_stop_boxed_5179_, v_b_5174_, v___y_5175_);
lean_dec_ref(v___y_5175_);
lean_dec_ref(v_as_5171_);
lean_dec(v___y_5167_);
lean_dec(v_start_5165_);
return v_res_5180_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(lean_object* v___y_5181_, lean_object* v___y_5182_, lean_object* v_leanOpts_5183_, uint8_t v_reconfigure_5184_, lean_object* v_ws_5185_, lean_object* v_i_5186_, lean_object* v_next_5187_, lean_object* v___y_5188_){
_start:
{
lean_object* v_packages_5190_; lean_object* v_pkg_5191_; lean_object* v_ws_5193_; lean_object* v_depIdxs_5194_; lean_object* v___y_5195_; lean_object* v_____x_5205_; lean_object* v___y_5206_; lean_object* v_depConfigs_5209_; lean_object* v_start_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v_s_5213_; lean_object* v___x_5214_; uint8_t v___x_5215_; 
v_packages_5190_ = lean_ctor_get(v_ws_5185_, 4);
v_pkg_5191_ = lean_array_fget(v_packages_5190_, v_i_5186_);
lean_dec(v_i_5186_);
v_depConfigs_5209_ = lean_ctor_get(v_pkg_5191_, 12);
v_start_5210_ = lean_array_get_size(v_packages_5190_);
v___x_5211_ = lean_array_get_size(v_depConfigs_5209_);
v___x_5212_ = lean_mk_empty_array_with_capacity(v___x_5211_);
lean_inc_ref(v___x_5212_);
lean_inc_ref(v_ws_5185_);
v_s_5213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_5213_, 0, v_ws_5185_);
lean_ctor_set(v_s_5213_, 1, v___x_5212_);
v___x_5214_ = lean_unsigned_to_nat(0u);
v___x_5215_ = lean_nat_dec_le(v___x_5211_, v___x_5211_);
if (v___x_5215_ == 0)
{
uint8_t v___x_5216_; 
v___x_5216_ = lean_nat_dec_lt(v___x_5214_, v___x_5211_);
if (v___x_5216_ == 0)
{
lean_object* v_ws_5217_; lean_object* v_packages_5218_; lean_object* v___x_5219_; uint8_t v___x_5220_; 
lean_dec_ref_known(v_s_5213_, 2);
v_ws_5217_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_5185_, v_pkg_5191_, v___x_5212_);
v_packages_5218_ = lean_ctor_get(v_ws_5217_, 4);
v___x_5219_ = lean_array_get_size(v_packages_5218_);
v___x_5220_ = lean_nat_dec_lt(v_next_5187_, v___x_5219_);
if (v___x_5220_ == 0)
{
lean_object* v___x_5221_; 
lean_dec(v_next_5187_);
lean_dec_ref(v_leanOpts_5183_);
lean_dec_ref(v___y_5182_);
v___x_5221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5221_, 0, v_ws_5217_);
return v___x_5221_;
}
else
{
lean_object* v___x_5222_; lean_object* v___x_5223_; 
v___x_5222_ = lean_unsigned_to_nat(1u);
v___x_5223_ = lean_nat_add(v_next_5187_, v___x_5222_);
v_ws_5185_ = v_ws_5217_;
v_i_5186_ = v_next_5187_;
v_next_5187_ = v___x_5223_;
goto _start;
}
}
else
{
size_t v___x_5225_; size_t v___x_5226_; lean_object* v___x_5227_; 
lean_dec_ref(v___x_5212_);
lean_dec_ref(v_ws_5185_);
v___x_5225_ = lean_usize_of_nat(v___x_5211_);
v___x_5226_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_5183_);
lean_inc_ref(v___y_5182_);
lean_inc(v_pkg_5191_);
v___x_5227_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_5210_, v_pkg_5191_, v___y_5181_, v___y_5182_, v_leanOpts_5183_, v_reconfigure_5184_, v_depConfigs_5209_, v___x_5225_, v___x_5226_, v_s_5213_, v___y_5188_);
if (lean_obj_tag(v___x_5227_) == 0)
{
lean_object* v_a_5228_; 
v_a_5228_ = lean_ctor_get(v___x_5227_, 0);
lean_inc(v_a_5228_);
lean_dec_ref_known(v___x_5227_, 1);
v_____x_5205_ = v_a_5228_;
v___y_5206_ = v___y_5188_;
goto v___jp_5204_;
}
else
{
lean_object* v_a_5229_; lean_object* v___x_5231_; uint8_t v_isShared_5232_; uint8_t v_isSharedCheck_5236_; 
lean_dec(v_pkg_5191_);
lean_dec(v_next_5187_);
lean_dec_ref(v_leanOpts_5183_);
lean_dec_ref(v___y_5182_);
v_a_5229_ = lean_ctor_get(v___x_5227_, 0);
v_isSharedCheck_5236_ = !lean_is_exclusive(v___x_5227_);
if (v_isSharedCheck_5236_ == 0)
{
v___x_5231_ = v___x_5227_;
v_isShared_5232_ = v_isSharedCheck_5236_;
goto v_resetjp_5230_;
}
else
{
lean_inc(v_a_5229_);
lean_dec(v___x_5227_);
v___x_5231_ = lean_box(0);
v_isShared_5232_ = v_isSharedCheck_5236_;
goto v_resetjp_5230_;
}
v_resetjp_5230_:
{
lean_object* v___x_5234_; 
if (v_isShared_5232_ == 0)
{
v___x_5234_ = v___x_5231_;
goto v_reusejp_5233_;
}
else
{
lean_object* v_reuseFailAlloc_5235_; 
v_reuseFailAlloc_5235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5235_, 0, v_a_5229_);
v___x_5234_ = v_reuseFailAlloc_5235_;
goto v_reusejp_5233_;
}
v_reusejp_5233_:
{
return v___x_5234_;
}
}
}
}
}
else
{
uint8_t v___x_5237_; 
v___x_5237_ = lean_nat_dec_lt(v___x_5214_, v___x_5211_);
if (v___x_5237_ == 0)
{
lean_dec_ref_known(v_s_5213_, 2);
v_ws_5193_ = v_ws_5185_;
v_depIdxs_5194_ = v___x_5212_;
v___y_5195_ = v___y_5188_;
goto v___jp_5192_;
}
else
{
size_t v___x_5238_; size_t v___x_5239_; lean_object* v___x_5240_; 
lean_dec_ref(v___x_5212_);
lean_dec_ref(v_ws_5185_);
v___x_5238_ = lean_usize_of_nat(v___x_5211_);
v___x_5239_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_5183_);
lean_inc_ref(v___y_5182_);
lean_inc(v_pkg_5191_);
v___x_5240_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_5210_, v_pkg_5191_, v___y_5181_, v___y_5182_, v_leanOpts_5183_, v_reconfigure_5184_, v_depConfigs_5209_, v___x_5238_, v___x_5239_, v_s_5213_, v___y_5188_);
if (lean_obj_tag(v___x_5240_) == 0)
{
lean_object* v_a_5241_; 
v_a_5241_ = lean_ctor_get(v___x_5240_, 0);
lean_inc(v_a_5241_);
lean_dec_ref_known(v___x_5240_, 1);
v_____x_5205_ = v_a_5241_;
v___y_5206_ = v___y_5188_;
goto v___jp_5204_;
}
else
{
lean_object* v_a_5242_; lean_object* v___x_5244_; uint8_t v_isShared_5245_; uint8_t v_isSharedCheck_5249_; 
lean_dec(v_pkg_5191_);
lean_dec(v_next_5187_);
lean_dec_ref(v_leanOpts_5183_);
lean_dec_ref(v___y_5182_);
v_a_5242_ = lean_ctor_get(v___x_5240_, 0);
v_isSharedCheck_5249_ = !lean_is_exclusive(v___x_5240_);
if (v_isSharedCheck_5249_ == 0)
{
v___x_5244_ = v___x_5240_;
v_isShared_5245_ = v_isSharedCheck_5249_;
goto v_resetjp_5243_;
}
else
{
lean_inc(v_a_5242_);
lean_dec(v___x_5240_);
v___x_5244_ = lean_box(0);
v_isShared_5245_ = v_isSharedCheck_5249_;
goto v_resetjp_5243_;
}
v_resetjp_5243_:
{
lean_object* v___x_5247_; 
if (v_isShared_5245_ == 0)
{
v___x_5247_ = v___x_5244_;
goto v_reusejp_5246_;
}
else
{
lean_object* v_reuseFailAlloc_5248_; 
v_reuseFailAlloc_5248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5248_, 0, v_a_5242_);
v___x_5247_ = v_reuseFailAlloc_5248_;
goto v_reusejp_5246_;
}
v_reusejp_5246_:
{
return v___x_5247_;
}
}
}
}
}
v___jp_5192_:
{
lean_object* v_ws_5196_; lean_object* v_packages_5197_; lean_object* v___x_5198_; uint8_t v___x_5199_; 
v_ws_5196_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_5193_, v_pkg_5191_, v_depIdxs_5194_);
v_packages_5197_ = lean_ctor_get(v_ws_5196_, 4);
v___x_5198_ = lean_array_get_size(v_packages_5197_);
v___x_5199_ = lean_nat_dec_lt(v_next_5187_, v___x_5198_);
if (v___x_5199_ == 0)
{
lean_object* v___x_5200_; 
lean_dec(v_next_5187_);
lean_dec_ref(v_leanOpts_5183_);
lean_dec_ref(v___y_5182_);
v___x_5200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5200_, 0, v_ws_5196_);
return v___x_5200_;
}
else
{
lean_object* v___x_5201_; lean_object* v___x_5202_; 
v___x_5201_ = lean_unsigned_to_nat(1u);
v___x_5202_ = lean_nat_add(v_next_5187_, v___x_5201_);
v_ws_5185_ = v_ws_5196_;
v_i_5186_ = v_next_5187_;
v_next_5187_ = v___x_5202_;
v___y_5188_ = v___y_5195_;
goto _start;
}
}
v___jp_5204_:
{
lean_object* v_ws_5207_; lean_object* v_depIdxs_5208_; 
v_ws_5207_ = lean_ctor_get(v_____x_5205_, 0);
lean_inc_ref(v_ws_5207_);
v_depIdxs_5208_ = lean_ctor_get(v_____x_5205_, 1);
lean_inc_ref(v_depIdxs_5208_);
lean_dec_ref(v_____x_5205_);
v_ws_5193_ = v_ws_5207_;
v_depIdxs_5194_ = v_depIdxs_5208_;
v___y_5195_ = v___y_5206_;
goto v___jp_5192_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg___boxed(lean_object* v___y_5250_, lean_object* v___y_5251_, lean_object* v_leanOpts_5252_, lean_object* v_reconfigure_5253_, lean_object* v_ws_5254_, lean_object* v_i_5255_, lean_object* v_next_5256_, lean_object* v___y_5257_, lean_object* v___y_5258_){
_start:
{
uint8_t v_reconfigure_boxed_5259_; lean_object* v_res_5260_; 
v_reconfigure_boxed_5259_ = lean_unbox(v_reconfigure_5253_);
v_res_5260_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_5250_, v___y_5251_, v_leanOpts_5252_, v_reconfigure_boxed_5259_, v_ws_5254_, v_i_5255_, v_next_5256_, v___y_5257_);
lean_dec_ref(v___y_5257_);
lean_dec(v___y_5250_);
return v_res_5260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(lean_object* v_as_5261_, size_t v_i_5262_, size_t v_stop_5263_, lean_object* v_b_5264_){
_start:
{
uint8_t v___x_5265_; 
v___x_5265_ = lean_usize_dec_eq(v_i_5262_, v_stop_5263_);
if (v___x_5265_ == 0)
{
lean_object* v___x_5266_; lean_object* v_name_5267_; lean_object* v___x_5268_; size_t v___x_5269_; size_t v___x_5270_; 
v___x_5266_ = lean_array_uget_borrowed(v_as_5261_, v_i_5262_);
v_name_5267_ = lean_ctor_get(v___x_5266_, 0);
lean_inc(v___x_5266_);
lean_inc(v_name_5267_);
v___x_5268_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_5267_, v___x_5266_, v_b_5264_);
v___x_5269_ = ((size_t)1ULL);
v___x_5270_ = lean_usize_add(v_i_5262_, v___x_5269_);
v_i_5262_ = v___x_5270_;
v_b_5264_ = v___x_5268_;
goto _start;
}
else
{
return v_b_5264_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2___boxed(lean_object* v_as_5272_, lean_object* v_i_5273_, lean_object* v_stop_5274_, lean_object* v_b_5275_){
_start:
{
size_t v_i_boxed_5276_; size_t v_stop_boxed_5277_; lean_object* v_res_5278_; 
v_i_boxed_5276_ = lean_unbox_usize(v_i_5273_);
lean_dec(v_i_5273_);
v_stop_boxed_5277_ = lean_unbox_usize(v_stop_5274_);
lean_dec(v_stop_5274_);
v_res_5278_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(v_as_5272_, v_i_boxed_5276_, v_stop_boxed_5277_, v_b_5275_);
lean_dec_ref(v_as_5272_);
return v_res_5278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(lean_object* v_as_5279_, size_t v_i_5280_, size_t v_stop_5281_, lean_object* v_b_5282_){
_start:
{
uint8_t v___x_5283_; 
v___x_5283_ = lean_usize_dec_eq(v_i_5280_, v_stop_5281_);
if (v___x_5283_ == 0)
{
lean_object* v___x_5284_; lean_object* v_name_5285_; lean_object* v___x_5286_; size_t v___x_5287_; size_t v___x_5288_; lean_object* v___x_5289_; 
v___x_5284_ = lean_array_uget_borrowed(v_as_5279_, v_i_5280_);
v_name_5285_ = lean_ctor_get(v___x_5284_, 0);
lean_inc(v___x_5284_);
lean_inc(v_name_5285_);
v___x_5286_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_5285_, v___x_5284_, v_b_5282_);
v___x_5287_ = ((size_t)1ULL);
v___x_5288_ = lean_usize_add(v_i_5280_, v___x_5287_);
v___x_5289_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(v_as_5279_, v___x_5288_, v_stop_5281_, v___x_5286_);
return v___x_5289_;
}
else
{
return v_b_5282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1___boxed(lean_object* v_as_5290_, lean_object* v_i_5291_, lean_object* v_stop_5292_, lean_object* v_b_5293_){
_start:
{
size_t v_i_boxed_5294_; size_t v_stop_boxed_5295_; lean_object* v_res_5296_; 
v_i_boxed_5294_ = lean_unbox_usize(v_i_5291_);
lean_dec(v_i_5291_);
v_stop_boxed_5295_ = lean_unbox_usize(v_stop_5292_);
lean_dec(v_stop_5292_);
v_res_5296_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_as_5290_, v_i_boxed_5294_, v_stop_boxed_5295_, v_b_5293_);
lean_dec_ref(v_as_5290_);
return v_res_5296_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps(lean_object* v_ws_5306_, lean_object* v_manifest_5307_, lean_object* v_leanOpts_5308_, uint8_t v_reconfigure_5309_, lean_object* v_overrides_5310_, lean_object* v_a_5311_){
_start:
{
lean_object* v___y_5314_; lean_object* v___y_5315_; lean_object* v___y_5316_; lean_object* v___y_5317_; lean_object* v___y_5318_; lean_object* v___y_5331_; lean_object* v___y_5332_; lean_object* v___y_5333_; lean_object* v___y_5334_; lean_object* v___y_5335_; lean_object* v___y_5336_; lean_object* v___y_5337_; lean_object* v___y_5345_; lean_object* v___y_5346_; lean_object* v___y_5347_; lean_object* v___y_5348_; lean_object* v___y_5349_; lean_object* v___y_5350_; lean_object* v___y_5351_; lean_object* v___y_5358_; lean_object* v___y_5359_; lean_object* v___y_5360_; lean_object* v___y_5361_; lean_object* v_packagesDir_x3f_5400_; lean_object* v_packages_5401_; lean_object* v___y_5403_; lean_object* v___y_5404_; lean_object* v___y_5413_; lean_object* v___x_5421_; lean_object* v___x_5422_; uint8_t v___x_5423_; 
v_packagesDir_x3f_5400_ = lean_ctor_get(v_manifest_5307_, 2);
lean_inc(v_packagesDir_x3f_5400_);
v_packages_5401_ = lean_ctor_get(v_manifest_5307_, 3);
lean_inc_ref(v_packages_5401_);
lean_dec_ref(v_manifest_5307_);
v___x_5421_ = lean_array_get_size(v_packages_5401_);
v___x_5422_ = lean_unsigned_to_nat(0u);
v___x_5423_ = lean_nat_dec_eq(v___x_5421_, v___x_5422_);
if (v___x_5423_ == 0)
{
lean_object* v_packages_5424_; lean_object* v___x_5425_; lean_object* v_config_5426_; lean_object* v_toWorkspaceConfig_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; uint8_t v___x_5431_; 
v_packages_5424_ = lean_ctor_get(v_ws_5306_, 4);
v___x_5425_ = lean_array_fget_borrowed(v_packages_5424_, v___x_5422_);
v_config_5426_ = lean_ctor_get(v___x_5425_, 6);
v_toWorkspaceConfig_5427_ = lean_ctor_get(v_config_5426_, 0);
lean_inc_ref(v_toWorkspaceConfig_5427_);
v___x_5428_ = l_System_FilePath_normalize(v_toWorkspaceConfig_5427_);
v___x_5429_ = l_Lake_mkRelPathString(v___x_5428_);
v___x_5430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5430_, 0, v___x_5429_);
v___x_5431_ = l_instBEqOption_beq___at___00Lake_Workspace_materializeDeps_spec__2(v_packagesDir_x3f_5400_, v___x_5430_);
lean_dec_ref_known(v___x_5430_, 1);
if (v___x_5431_ == 0)
{
lean_object* v___x_5432_; lean_object* v___x_5433_; 
v___x_5432_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__4));
lean_inc_ref(v_a_5311_);
v___x_5433_ = lean_apply_2(v_a_5311_, v___x_5432_, lean_box(0));
v___y_5413_ = v_a_5311_;
goto v___jp_5412_;
}
else
{
v___y_5413_ = v_a_5311_;
goto v___jp_5412_;
}
}
else
{
v___y_5413_ = v_a_5311_;
goto v___jp_5412_;
}
v___jp_5313_:
{
lean_object* v___x_5319_; lean_object* v___x_5320_; 
v___x_5319_ = lean_array_get_size(v___y_5315_);
lean_dec_ref(v___y_5315_);
v___x_5320_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_5314_, v___y_5317_, v_leanOpts_5308_, v_reconfigure_5309_, v_ws_5306_, v___y_5316_, v___x_5319_, v___y_5318_);
lean_dec(v___y_5314_);
if (lean_obj_tag(v___x_5320_) == 0)
{
lean_object* v_a_5321_; lean_object* v___x_5323_; uint8_t v_isShared_5324_; uint8_t v_isSharedCheck_5329_; 
v_a_5321_ = lean_ctor_get(v___x_5320_, 0);
v_isSharedCheck_5329_ = !lean_is_exclusive(v___x_5320_);
if (v_isSharedCheck_5329_ == 0)
{
v___x_5323_ = v___x_5320_;
v_isShared_5324_ = v_isSharedCheck_5329_;
goto v_resetjp_5322_;
}
else
{
lean_inc(v_a_5321_);
lean_dec(v___x_5320_);
v___x_5323_ = lean_box(0);
v_isShared_5324_ = v_isSharedCheck_5329_;
goto v_resetjp_5322_;
}
v_resetjp_5322_:
{
lean_object* v___x_5325_; lean_object* v___x_5327_; 
v___x_5325_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_a_5321_);
if (v_isShared_5324_ == 0)
{
lean_ctor_set(v___x_5323_, 0, v___x_5325_);
v___x_5327_ = v___x_5323_;
goto v_reusejp_5326_;
}
else
{
lean_object* v_reuseFailAlloc_5328_; 
v_reuseFailAlloc_5328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5328_, 0, v___x_5325_);
v___x_5327_ = v_reuseFailAlloc_5328_;
goto v_reusejp_5326_;
}
v_reusejp_5326_:
{
return v___x_5327_;
}
}
}
else
{
return v___x_5320_;
}
}
v___jp_5330_:
{
if (lean_obj_tag(v___y_5337_) == 0)
{
lean_dec_ref(v___y_5331_);
v___y_5314_ = v___y_5337_;
v___y_5315_ = v___y_5333_;
v___y_5316_ = v___y_5334_;
v___y_5317_ = v___y_5335_;
v___y_5318_ = v___y_5336_;
goto v___jp_5313_;
}
else
{
lean_object* v___x_5338_; uint8_t v___x_5339_; 
v___x_5338_ = lean_array_get_size(v___y_5331_);
lean_dec_ref(v___y_5331_);
v___x_5339_ = lean_nat_dec_eq(v___x_5338_, v___y_5332_);
if (v___x_5339_ == 0)
{
lean_object* v___x_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; 
lean_dec_ref(v___y_5335_);
lean_dec(v___y_5334_);
lean_dec_ref(v___y_5333_);
lean_dec_ref(v_leanOpts_5308_);
lean_dec_ref(v_ws_5306_);
v___x_5340_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__1));
lean_inc_ref(v___y_5336_);
v___x_5341_ = lean_apply_2(v___y_5336_, v___x_5340_, lean_box(0));
v___x_5342_ = lean_box(0);
v___x_5343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5343_, 0, v___x_5342_);
return v___x_5343_;
}
else
{
v___y_5314_ = v___y_5337_;
v___y_5315_ = v___y_5333_;
v___y_5316_ = v___y_5334_;
v___y_5317_ = v___y_5335_;
v___y_5318_ = v___y_5336_;
goto v___jp_5313_;
}
}
}
v___jp_5344_:
{
lean_object* v___x_5352_; uint8_t v___x_5353_; 
v___x_5352_ = lean_array_get_size(v_overrides_5310_);
v___x_5353_ = lean_nat_dec_lt(v___y_5346_, v___x_5352_);
if (v___x_5353_ == 0)
{
v___y_5331_ = v___y_5345_;
v___y_5332_ = v___y_5346_;
v___y_5333_ = v___y_5347_;
v___y_5334_ = v___y_5348_;
v___y_5335_ = v___y_5349_;
v___y_5336_ = v___y_5350_;
v___y_5337_ = v___y_5351_;
goto v___jp_5330_;
}
else
{
size_t v___x_5354_; size_t v___x_5355_; lean_object* v___x_5356_; 
v___x_5354_ = ((size_t)0ULL);
v___x_5355_ = lean_usize_of_nat(v___x_5352_);
v___x_5356_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_overrides_5310_, v___x_5354_, v___x_5355_, v___y_5351_);
v___y_5331_ = v___y_5345_;
v___y_5332_ = v___y_5346_;
v___y_5333_ = v___y_5347_;
v___y_5334_ = v___y_5348_;
v___y_5335_ = v___y_5349_;
v___y_5336_ = v___y_5350_;
v___y_5337_ = v___x_5356_;
goto v___jp_5330_;
}
}
v___jp_5357_:
{
lean_object* v_packages_5362_; lean_object* v___x_5363_; lean_object* v_wsIdx_5364_; lean_object* v_dir_5365_; lean_object* v_depConfigs_5366_; lean_object* v___x_5367_; 
v_packages_5362_ = lean_ctor_get(v_ws_5306_, 4);
v___x_5363_ = lean_array_fget_borrowed(v_packages_5362_, v___y_5358_);
v_wsIdx_5364_ = lean_ctor_get(v___x_5363_, 0);
v_dir_5365_ = lean_ctor_get(v___x_5363_, 4);
v_depConfigs_5366_ = lean_ctor_get(v___x_5363_, 12);
v___x_5367_ = l___private_Lake_Load_Resolve_0__Lake_validateManifest(v___y_5361_, v_depConfigs_5366_, v___y_5360_);
if (lean_obj_tag(v___x_5367_) == 0)
{
lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; 
lean_dec_ref_known(v___x_5367_, 1);
v___x_5368_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_dir_5365_);
v___x_5369_ = l_Lake_joinRelative(v_dir_5365_, v___x_5368_);
v___x_5370_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__2));
v___x_5371_ = l_Lake_joinRelative(v___x_5369_, v___x_5370_);
v___x_5372_ = l_Lake_Manifest_tryLoadEntries(v___x_5371_);
if (lean_obj_tag(v___x_5372_) == 0)
{
lean_object* v_a_5373_; lean_object* v___x_5374_; uint8_t v___x_5375_; 
v_a_5373_ = lean_ctor_get(v___x_5372_, 0);
lean_inc(v_a_5373_);
lean_dec_ref_known(v___x_5372_, 1);
v___x_5374_ = lean_array_get_size(v_a_5373_);
v___x_5375_ = lean_nat_dec_lt(v___y_5358_, v___x_5374_);
if (v___x_5375_ == 0)
{
lean_dec(v_a_5373_);
lean_inc(v_wsIdx_5364_);
lean_inc_ref(v_packages_5362_);
lean_inc_ref(v_depConfigs_5366_);
v___y_5345_ = v_depConfigs_5366_;
v___y_5346_ = v___y_5358_;
v___y_5347_ = v_packages_5362_;
v___y_5348_ = v_wsIdx_5364_;
v___y_5349_ = v___y_5359_;
v___y_5350_ = v___y_5360_;
v___y_5351_ = v___y_5361_;
goto v___jp_5344_;
}
else
{
size_t v___x_5376_; size_t v___x_5377_; lean_object* v___x_5378_; 
v___x_5376_ = ((size_t)0ULL);
v___x_5377_ = lean_usize_of_nat(v___x_5374_);
v___x_5378_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_a_5373_, v___x_5376_, v___x_5377_, v___y_5361_);
lean_dec(v_a_5373_);
lean_inc(v_wsIdx_5364_);
lean_inc_ref(v_packages_5362_);
lean_inc_ref(v_depConfigs_5366_);
v___y_5345_ = v_depConfigs_5366_;
v___y_5346_ = v___y_5358_;
v___y_5347_ = v_packages_5362_;
v___y_5348_ = v_wsIdx_5364_;
v___y_5349_ = v___y_5359_;
v___y_5350_ = v___y_5360_;
v___y_5351_ = v___x_5378_;
goto v___jp_5344_;
}
}
else
{
lean_object* v_a_5379_; lean_object* v___x_5381_; uint8_t v_isShared_5382_; uint8_t v_isSharedCheck_5391_; 
lean_dec(v___y_5361_);
lean_dec_ref(v___y_5359_);
lean_dec_ref(v_leanOpts_5308_);
lean_dec_ref(v_ws_5306_);
v_a_5379_ = lean_ctor_get(v___x_5372_, 0);
v_isSharedCheck_5391_ = !lean_is_exclusive(v___x_5372_);
if (v_isSharedCheck_5391_ == 0)
{
v___x_5381_ = v___x_5372_;
v_isShared_5382_ = v_isSharedCheck_5391_;
goto v_resetjp_5380_;
}
else
{
lean_inc(v_a_5379_);
lean_dec(v___x_5372_);
v___x_5381_ = lean_box(0);
v_isShared_5382_ = v_isSharedCheck_5391_;
goto v_resetjp_5380_;
}
v_resetjp_5380_:
{
lean_object* v___x_5383_; uint8_t v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5389_; 
v___x_5383_ = lean_io_error_to_string(v_a_5379_);
v___x_5384_ = 3;
v___x_5385_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5385_, 0, v___x_5383_);
lean_ctor_set_uint8(v___x_5385_, sizeof(void*)*1, v___x_5384_);
lean_inc_ref(v___y_5360_);
v___x_5386_ = lean_apply_2(v___y_5360_, v___x_5385_, lean_box(0));
v___x_5387_ = lean_box(0);
if (v_isShared_5382_ == 0)
{
lean_ctor_set(v___x_5381_, 0, v___x_5387_);
v___x_5389_ = v___x_5381_;
goto v_reusejp_5388_;
}
else
{
lean_object* v_reuseFailAlloc_5390_; 
v_reuseFailAlloc_5390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5390_, 0, v___x_5387_);
v___x_5389_ = v_reuseFailAlloc_5390_;
goto v_reusejp_5388_;
}
v_reusejp_5388_:
{
return v___x_5389_;
}
}
}
}
else
{
lean_object* v_a_5392_; lean_object* v___x_5394_; uint8_t v_isShared_5395_; uint8_t v_isSharedCheck_5399_; 
lean_dec(v___y_5361_);
lean_dec_ref(v___y_5359_);
lean_dec_ref(v_leanOpts_5308_);
lean_dec_ref(v_ws_5306_);
v_a_5392_ = lean_ctor_get(v___x_5367_, 0);
v_isSharedCheck_5399_ = !lean_is_exclusive(v___x_5367_);
if (v_isSharedCheck_5399_ == 0)
{
v___x_5394_ = v___x_5367_;
v_isShared_5395_ = v_isSharedCheck_5399_;
goto v_resetjp_5393_;
}
else
{
lean_inc(v_a_5392_);
lean_dec(v___x_5367_);
v___x_5394_ = lean_box(0);
v_isShared_5395_ = v_isSharedCheck_5399_;
goto v_resetjp_5393_;
}
v_resetjp_5393_:
{
lean_object* v___x_5397_; 
if (v_isShared_5395_ == 0)
{
v___x_5397_ = v___x_5394_;
goto v_reusejp_5396_;
}
else
{
lean_object* v_reuseFailAlloc_5398_; 
v_reuseFailAlloc_5398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5398_, 0, v_a_5392_);
v___x_5397_ = v_reuseFailAlloc_5398_;
goto v_reusejp_5396_;
}
v_reusejp_5396_:
{
return v___x_5397_;
}
}
}
}
v___jp_5402_:
{
lean_object* v_pkgEntries_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; uint8_t v___x_5408_; 
v_pkgEntries_5405_ = lean_box(1);
v___x_5406_ = lean_unsigned_to_nat(0u);
v___x_5407_ = lean_array_get_size(v_packages_5401_);
v___x_5408_ = lean_nat_dec_lt(v___x_5406_, v___x_5407_);
if (v___x_5408_ == 0)
{
lean_dec_ref(v_packages_5401_);
v___y_5358_ = v___x_5406_;
v___y_5359_ = v___y_5404_;
v___y_5360_ = v___y_5403_;
v___y_5361_ = v_pkgEntries_5405_;
goto v___jp_5357_;
}
else
{
size_t v___x_5409_; size_t v___x_5410_; lean_object* v___x_5411_; 
v___x_5409_ = ((size_t)0ULL);
v___x_5410_ = lean_usize_of_nat(v___x_5407_);
v___x_5411_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_packages_5401_, v___x_5409_, v___x_5410_, v_pkgEntries_5405_);
lean_dec_ref(v_packages_5401_);
v___y_5358_ = v___x_5406_;
v___y_5359_ = v___y_5404_;
v___y_5360_ = v___y_5403_;
v___y_5361_ = v___x_5411_;
goto v___jp_5357_;
}
}
v___jp_5412_:
{
if (lean_obj_tag(v_packagesDir_x3f_5400_) == 0)
{
lean_object* v_packages_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v_config_5417_; lean_object* v_toWorkspaceConfig_5418_; lean_object* v___x_5419_; 
v_packages_5414_ = lean_ctor_get(v_ws_5306_, 4);
v___x_5415_ = lean_unsigned_to_nat(0u);
v___x_5416_ = lean_array_fget_borrowed(v_packages_5414_, v___x_5415_);
v_config_5417_ = lean_ctor_get(v___x_5416_, 6);
v_toWorkspaceConfig_5418_ = lean_ctor_get(v_config_5417_, 0);
lean_inc_ref(v_toWorkspaceConfig_5418_);
v___x_5419_ = l_System_FilePath_normalize(v_toWorkspaceConfig_5418_);
v___y_5403_ = v___y_5413_;
v___y_5404_ = v___x_5419_;
goto v___jp_5402_;
}
else
{
lean_object* v_val_5420_; 
v_val_5420_ = lean_ctor_get(v_packagesDir_x3f_5400_, 0);
lean_inc(v_val_5420_);
lean_dec_ref_known(v_packagesDir_x3f_5400_, 1);
v___y_5403_ = v___y_5413_;
v___y_5404_ = v_val_5420_;
goto v___jp_5402_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps___boxed(lean_object* v_ws_5434_, lean_object* v_manifest_5435_, lean_object* v_leanOpts_5436_, lean_object* v_reconfigure_5437_, lean_object* v_overrides_5438_, lean_object* v_a_5439_, lean_object* v_a_5440_){
_start:
{
uint8_t v_reconfigure_boxed_5441_; lean_object* v_res_5442_; 
v_reconfigure_boxed_5441_ = lean_unbox(v_reconfigure_5437_);
v_res_5442_ = l_Lake_Workspace_materializeDeps(v_ws_5434_, v_manifest_5435_, v_leanOpts_5436_, v_reconfigure_boxed_5441_, v_overrides_5438_, v_a_5439_);
lean_dec_ref(v_a_5439_);
lean_dec_ref(v_overrides_5438_);
return v_res_5442_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(lean_object* v___y_5443_, lean_object* v___y_5444_, lean_object* v_leanOpts_5445_, uint8_t v_reconfigure_5446_, lean_object* v_ws_5447_, lean_object* v_i_5448_, lean_object* v_i__lt_5449_, lean_object* v_next_5450_, lean_object* v_lt__next_5451_, lean_object* v___y_5452_){
_start:
{
lean_object* v___x_5454_; 
v___x_5454_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_5443_, v___y_5444_, v_leanOpts_5445_, v_reconfigure_5446_, v_ws_5447_, v_i_5448_, v_next_5450_, v___y_5452_);
return v___x_5454_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___boxed(lean_object* v___y_5455_, lean_object* v___y_5456_, lean_object* v_leanOpts_5457_, lean_object* v_reconfigure_5458_, lean_object* v_ws_5459_, lean_object* v_i_5460_, lean_object* v_i__lt_5461_, lean_object* v_next_5462_, lean_object* v_lt__next_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_){
_start:
{
uint8_t v_reconfigure_boxed_5466_; lean_object* v_res_5467_; 
v_reconfigure_boxed_5466_ = lean_unbox(v_reconfigure_5458_);
v_res_5467_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(v___y_5455_, v___y_5456_, v_leanOpts_5457_, v_reconfigure_boxed_5466_, v_ws_5459_, v_i_5460_, v_i__lt_5461_, v_next_5462_, v_lt__next_5463_, v___y_5464_);
lean_dec_ref(v___y_5464_);
lean_dec(v___y_5455_);
return v_res_5467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2(lean_object* v_start_5468_, lean_object* v_pkg_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_, lean_object* v_leanOpts_5472_, uint8_t v_reconfigure_5473_, lean_object* v_as_5474_, size_t v_i_5475_, size_t v_stop_5476_, lean_object* v_b_5477_, lean_object* v___y_5478_){
_start:
{
lean_object* v___x_5480_; 
v___x_5480_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_5469_, v___y_5470_, v___y_5471_, v_leanOpts_5472_, v_reconfigure_5473_, v_as_5474_, v_i_5475_, v_stop_5476_, v_b_5477_, v___y_5478_);
return v___x_5480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___boxed(lean_object* v_start_5481_, lean_object* v_pkg_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_, lean_object* v_leanOpts_5485_, lean_object* v_reconfigure_5486_, lean_object* v_as_5487_, lean_object* v_i_5488_, lean_object* v_stop_5489_, lean_object* v_b_5490_, lean_object* v___y_5491_, lean_object* v___y_5492_){
_start:
{
uint8_t v_reconfigure_boxed_5493_; size_t v_i_boxed_5494_; size_t v_stop_boxed_5495_; lean_object* v_res_5496_; 
v_reconfigure_boxed_5493_ = lean_unbox(v_reconfigure_5486_);
v_i_boxed_5494_ = lean_unbox_usize(v_i_5488_);
lean_dec(v_i_5488_);
v_stop_boxed_5495_ = lean_unbox_usize(v_stop_5489_);
lean_dec(v_stop_5489_);
v_res_5496_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2(v_start_5481_, v_pkg_5482_, v___y_5483_, v___y_5484_, v_leanOpts_5485_, v_reconfigure_boxed_5493_, v_as_5487_, v_i_boxed_5494_, v_stop_boxed_5495_, v_b_5490_, v___y_5491_);
lean_dec_ref(v___y_5491_);
lean_dec_ref(v_as_5487_);
lean_dec(v___y_5483_);
lean_dec(v_start_5481_);
return v_res_5496_;
}
}
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_StoreInsts(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Materialize(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Lean_Eval(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Package(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_TacticsExtra(uint8_t builtin);
lean_object* runtime_initialize_Lean_Runtime(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Materialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Lean_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lake_Load_Resolve_0__Lake_restartCode = _init_l___private_Lake_Load_Resolve_0__Lake_restartCode();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Lake_Util_StoreInsts(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Load_Materialize(uint8_t builtin);
lean_object* initialize_Lake_Load_Lean_Eval(uint8_t builtin);
lean_object* initialize_Lake_Load_Package(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Lemmas(uint8_t builtin);
lean_object* initialize_Init_TacticsExtra(uint8_t builtin);
lean_object* initialize_Lean_Runtime(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Materialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Lean_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Resolve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Load_Resolve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Load_Resolve(builtin);
}
#ifdef __cplusplus
}
#endif
