// Lean compiler output
// Module: Lean.Compiler.LCNF.PullFunDecls
// Imports: public import Lean.Compiler.LCNF.DependsOn public import Lean.Compiler.LCNF.PassManager
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
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFVarIdHashSet;
lean_object* l_Lean_Compiler_LCNF_instInhabitedFunDecl_default__1___redArg();
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_FunDecl_collectUsed(uint8_t, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCode___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attach(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_addToPull(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_pull(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_addToPull___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_pull___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_pullFunDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_PullFunDecls_pull___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullFunDecls___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_pullFunDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "pullFunDecls"};
static const lean_object* l_Lean_Compiler_LCNF_pullFunDecls___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_pullFunDecls___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_pullFunDecls___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_pullFunDecls___closed__0_value),LEAN_SCALAR_PTR_LITERAL(42, 214, 187, 111, 27, 230, 209, 214)}};
static const lean_object* l_Lean_Compiler_LCNF_pullFunDecls___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_pullFunDecls___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_pullFunDecls___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Decl_pullFunDecls___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_pullFunDecls___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_pullFunDecls___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_pullFunDecls___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_pullFunDecls___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_pullFunDecls;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_pullFunDecls___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 137, 34, 178, 57, 97, 174, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PullFunDecls"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(34, 22, 167, 240, 97, 96, 111, 65)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(131, 100, 103, 236, 110, 190, 9, 116)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(78, 145, 55, 223, 32, 104, 111, 137)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(236, 31, 216, 154, 82, 114, 229, 5)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(173, 162, 66, 169, 209, 13, 217, 144)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(4, 162, 43, 226, 174, 157, 211, 6)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(141, 150, 70, 168, 50, 70, 196, 119)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 126, 218, 119, 38, 57, 70, 9)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 121, 99, 184, 127, 70, 201, 225)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 165, 234, 171, 104, 161, 33, 84)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(136, 29, 219, 35, 181, 138, 226, 178)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1553090079) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(166, 206, 19, 9, 70, 7, 4, 159)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 149, 47, 183, 177, 167, 88, 77)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(89, 202, 79, 174, 233, 112, 55, 156)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(132, 9, 140, 163, 170, 173, 0, 118)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_Compiler_LCNF_instInhabitedFunDecl_default__1___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; uint8_t v___x_4_; lean_object* v___x_5_; 
v___x_2_ = l_Lean_instInhabitedFVarIdHashSet;
v___x_3_ = lean_obj_once(&l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0, &l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0_once, _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__0);
v___x_4_ = 0;
v___x_5_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_5_, 0, v___x_3_);
lean_ctor_set(v___x_5_, 1, v___x_2_);
lean_ctor_set_uint8(v___x_5_, sizeof(void*)*2, v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1, &l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1_once, _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default___closed__1);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default;
return v___x_7_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0___redArg(lean_object* v_a_8_, lean_object* v_x_9_){
_start:
{
if (lean_obj_tag(v_x_9_) == 0)
{
uint8_t v___x_10_; 
v___x_10_ = 0;
return v___x_10_;
}
else
{
lean_object* v_key_11_; lean_object* v_tail_12_; uint8_t v___x_13_; 
v_key_11_ = lean_ctor_get(v_x_9_, 0);
v_tail_12_ = lean_ctor_get(v_x_9_, 2);
v___x_13_ = l_Lean_instBEqFVarId_beq(v_key_11_, v_a_8_);
if (v___x_13_ == 0)
{
v_x_9_ = v_tail_12_;
goto _start;
}
else
{
return v___x_13_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_15_, lean_object* v_x_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0___redArg(v_a_15_, v_x_16_);
lean_dec(v_x_16_);
lean_dec(v_a_15_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0___redArg(lean_object* v_m_19_, lean_object* v_a_20_){
_start:
{
lean_object* v_buckets_21_; lean_object* v___x_22_; uint64_t v___x_23_; uint64_t v___x_24_; uint64_t v___x_25_; uint64_t v_fold_26_; uint64_t v___x_27_; uint64_t v___x_28_; uint64_t v___x_29_; size_t v___x_30_; size_t v___x_31_; size_t v___x_32_; size_t v___x_33_; size_t v___x_34_; lean_object* v___x_35_; uint8_t v___x_36_; 
v_buckets_21_ = lean_ctor_get(v_m_19_, 1);
v___x_22_ = lean_array_get_size(v_buckets_21_);
v___x_23_ = l_Lean_instHashableFVarId_hash(v_a_20_);
v___x_24_ = 32ULL;
v___x_25_ = lean_uint64_shift_right(v___x_23_, v___x_24_);
v_fold_26_ = lean_uint64_xor(v___x_23_, v___x_25_);
v___x_27_ = 16ULL;
v___x_28_ = lean_uint64_shift_right(v_fold_26_, v___x_27_);
v___x_29_ = lean_uint64_xor(v_fold_26_, v___x_28_);
v___x_30_ = lean_uint64_to_usize(v___x_29_);
v___x_31_ = lean_usize_of_nat(v___x_22_);
v___x_32_ = ((size_t)1ULL);
v___x_33_ = lean_usize_sub(v___x_31_, v___x_32_);
v___x_34_ = lean_usize_land(v___x_30_, v___x_33_);
v___x_35_ = lean_array_uget_borrowed(v_buckets_21_, v___x_34_);
v___x_36_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0___redArg(v_a_20_, v___x_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0___redArg___boxed(lean_object* v_m_37_, lean_object* v_a_38_){
_start:
{
uint8_t v_res_39_; lean_object* v_r_40_; 
v_res_39_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0___redArg(v_m_37_, v_a_38_);
lean_dec(v_a_38_);
lean_dec_ref(v_m_37_);
v_r_40_ = lean_box(v_res_39_);
return v_r_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg(lean_object* v_fvarId_41_, lean_object* v_as_42_, lean_object* v_keep_43_, lean_object* v_dep_44_){
_start:
{
if (lean_obj_tag(v_as_42_) == 0)
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v_keep_43_);
lean_ctor_set(v___x_46_, 1, v_dep_44_);
v___x_47_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
return v___x_47_;
}
else
{
lean_object* v_head_48_; lean_object* v_tail_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_63_; 
v_head_48_ = lean_ctor_get(v_as_42_, 0);
v_tail_49_ = lean_ctor_get(v_as_42_, 1);
v_isSharedCheck_63_ = !lean_is_exclusive(v_as_42_);
if (v_isSharedCheck_63_ == 0)
{
v___x_51_ = v_as_42_;
v_isShared_52_ = v_isSharedCheck_63_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_tail_49_);
lean_inc(v_head_48_);
lean_dec(v_as_42_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_63_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v_used_53_; uint8_t v___x_54_; 
v_used_53_ = lean_ctor_get(v_head_48_, 1);
v___x_54_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0___redArg(v_used_53_, v_fvarId_41_);
if (v___x_54_ == 0)
{
lean_object* v___x_56_; 
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 1, v_keep_43_);
v___x_56_ = v___x_51_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_head_48_);
lean_ctor_set(v_reuseFailAlloc_58_, 1, v_keep_43_);
v___x_56_ = v_reuseFailAlloc_58_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
v_as_42_ = v_tail_49_;
v_keep_43_ = v___x_56_;
goto _start;
}
}
else
{
lean_object* v___x_60_; 
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 1, v_dep_44_);
v___x_60_ = v___x_51_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_head_48_);
lean_ctor_set(v_reuseFailAlloc_62_, 1, v_dep_44_);
v___x_60_ = v_reuseFailAlloc_62_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
v_as_42_ = v_tail_49_;
v_dep_44_ = v___x_60_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg___boxed(lean_object* v_fvarId_64_, lean_object* v_as_65_, lean_object* v_keep_66_, lean_object* v_dep_67_, lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg(v_fvarId_64_, v_as_65_, v_keep_66_, v_dep_67_);
lean_dec(v_fvarId_64_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go(lean_object* v_fvarId_70_, lean_object* v_as_71_, lean_object* v_keep_72_, lean_object* v_dep_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg(v_fvarId_70_, v_as_71_, v_keep_72_, v_dep_73_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___boxed(lean_object* v_fvarId_78_, lean_object* v_as_79_, lean_object* v_keep_80_, lean_object* v_dep_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go(v_fvarId_78_, v_as_79_, v_keep_80_, v_dep_81_, v_a_82_, v_a_83_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
lean_dec(v_fvarId_78_);
return v_res_85_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0(lean_object* v_00_u03b2_86_, lean_object* v_m_87_, lean_object* v_a_88_){
_start:
{
uint8_t v___x_89_; 
v___x_89_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0___redArg(v_m_87_, v_a_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0___boxed(lean_object* v_00_u03b2_90_, lean_object* v_m_91_, lean_object* v_a_92_){
_start:
{
uint8_t v_res_93_; lean_object* v_r_94_; 
v_res_93_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0(v_00_u03b2_90_, v_m_91_, v_a_92_);
lean_dec(v_a_92_);
lean_dec_ref(v_m_91_);
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0(lean_object* v_00_u03b2_95_, lean_object* v_a_96_, lean_object* v_x_97_){
_start:
{
uint8_t v___x_98_; 
v___x_98_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0___redArg(v_a_96_, v_x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_99_, lean_object* v_a_100_, lean_object* v_x_101_){
_start:
{
uint8_t v_res_102_; lean_object* v_r_103_; 
v_res_102_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0_spec__0(v_00_u03b2_99_, v_a_100_, v_x_101_);
lean_dec(v_x_101_);
lean_dec(v_a_100_);
v_r_103_ = lean_box(v_res_102_);
return v_r_103_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0(lean_object* v_fvarId_104_, lean_object* v_x_105_){
_start:
{
if (lean_obj_tag(v_x_105_) == 0)
{
uint8_t v___x_106_; 
v___x_106_ = 0;
return v___x_106_;
}
else
{
lean_object* v_head_107_; lean_object* v_tail_108_; lean_object* v_used_109_; uint8_t v___x_110_; 
v_head_107_ = lean_ctor_get(v_x_105_, 0);
v_tail_108_ = lean_ctor_get(v_x_105_, 1);
v_used_109_ = lean_ctor_get(v_head_107_, 1);
v___x_110_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0___redArg(v_used_109_, v_fvarId_104_);
if (v___x_110_ == 0)
{
v_x_105_ = v_tail_108_;
goto _start;
}
else
{
return v___x_110_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0___boxed(lean_object* v_fvarId_112_, lean_object* v_x_113_){
_start:
{
uint8_t v_res_114_; lean_object* v_r_115_; 
v_res_114_ = l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0(v_fvarId_112_, v_x_113_);
lean_dec(v_x_113_);
lean_dec(v_fvarId_112_);
v_r_115_ = lean_box(v_res_114_);
return v_r_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(lean_object* v_fvarId_116_, lean_object* v_a_117_){
_start:
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = lean_st_ref_get(v_a_117_);
v___x_120_ = l_List_any___at___00Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_spec__0(v_fvarId_116_, v___x_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; lean_object* v___x_122_; 
lean_dec(v___x_119_);
v___x_121_ = lean_box(0);
v___x_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
return v___x_122_;
}
else
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_135_; 
v___x_123_ = lean_box(0);
v___x_124_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go___redArg(v_fvarId_116_, v___x_119_, v___x_123_, v___x_123_);
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_135_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_135_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_135_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v_fst_129_; lean_object* v_snd_130_; lean_object* v___x_131_; lean_object* v___x_133_; 
v_fst_129_ = lean_ctor_get(v_a_125_, 0);
lean_inc(v_fst_129_);
v_snd_130_ = lean_ctor_get(v_a_125_, 1);
lean_inc(v_snd_130_);
lean_dec(v_a_125_);
v___x_131_ = lean_st_ref_swap(v_a_117_, v_fst_129_);
lean_dec(v___x_131_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v_snd_130_);
v___x_133_ = v___x_127_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_snd_130_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg___boxed(lean_object* v_fvarId_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(v_fvarId_136_, v_a_137_);
lean_dec(v_a_137_);
lean_dec(v_fvarId_136_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps(lean_object* v_fvarId_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(v_fvarId_140_, v_a_141_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___boxed(lean_object* v_fvarId_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps(v_fvarId_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
lean_dec(v_a_149_);
lean_dec(v_fvarId_148_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(lean_object* v_todo_156_, lean_object* v_acc_157_, lean_object* v_a_158_){
_start:
{
if (lean_obj_tag(v_todo_156_) == 0)
{
lean_object* v___x_160_; 
v___x_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_160_, 0, v_acc_157_);
return v___x_160_;
}
else
{
lean_object* v_head_161_; lean_object* v_decl_162_; lean_object* v_tail_163_; lean_object* v_fvarId_164_; lean_object* v___x_165_; 
v_head_161_ = lean_ctor_get(v_todo_156_, 0);
lean_inc(v_head_161_);
v_decl_162_ = lean_ctor_get(v_head_161_, 0);
v_tail_163_ = lean_ctor_get(v_todo_156_, 1);
lean_inc(v_tail_163_);
lean_dec_ref_known(v_todo_156_, 2);
v_fvarId_164_ = lean_ctor_get(v_decl_162_, 0);
v___x_165_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(v_fvarId_164_, v_a_158_);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v_a_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v_a_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc(v_a_166_);
lean_dec_ref_known(v___x_165_, 1);
v___x_167_ = l_List_appendTR___redArg(v_a_166_, v_tail_163_);
v___x_168_ = lean_array_push(v_acc_157_, v_head_161_);
v_todo_156_ = v___x_167_;
v_acc_157_ = v___x_168_;
goto _start;
}
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
lean_dec(v_tail_163_);
lean_dec(v_head_161_);
lean_dec_ref(v_acc_157_);
v_a_170_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_165_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_165_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg___boxed(lean_object* v_todo_178_, lean_object* v_acc_179_, lean_object* v_a_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(v_todo_178_, v_acc_179_, v_a_180_);
lean_dec(v_a_180_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint(lean_object* v_todo_183_, lean_object* v_acc_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(v_todo_183_, v_acc_184_, v_a_185_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___boxed(lean_object* v_todo_192_, lean_object* v_acc_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint(v_todo_192_, v_acc_193_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_);
lean_dec(v_a_198_);
lean_dec_ref(v_a_197_);
lean_dec(v_a_196_);
lean_dec_ref(v_a_195_);
lean_dec(v_a_194_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(lean_object* v_fvarId_203_, lean_object* v_a_204_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps___redArg(v_fvarId_203_, v_a_204_);
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v_a_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v_a_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_a_207_);
lean_dec_ref_known(v___x_206_, 1);
v___x_208_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0));
v___x_209_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(v_a_207_, v___x_208_, v_a_204_);
return v___x_209_;
}
else
{
lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_217_; 
v_a_210_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_217_ == 0)
{
v___x_212_ = v___x_206_;
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_206_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_215_; 
if (v_isShared_213_ == 0)
{
v___x_215_ = v___x_212_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_a_210_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___boxed(lean_object* v_fvarId_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(v_fvarId_218_, v_a_219_);
lean_dec(v_a_219_);
lean_dec(v_fvarId_218_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps(lean_object* v_fvarId_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(v_fvarId_222_, v_a_223_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___boxed(lean_object* v_fvarId_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps(v_fvarId_230_, v_a_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
lean_dec(v_a_235_);
lean_dec_ref(v_a_234_);
lean_dec(v_a_233_);
lean_dec_ref(v_a_232_);
lean_dec(v_a_231_);
lean_dec(v_fvarId_230_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg(lean_object* v_as_238_, size_t v_sz_239_, size_t v_i_240_, lean_object* v_b_241_, lean_object* v___y_242_){
_start:
{
uint8_t v___x_244_; 
v___x_244_ = lean_usize_dec_lt(v_i_240_, v_sz_239_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; 
v___x_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_245_, 0, v_b_241_);
return v___x_245_;
}
else
{
lean_object* v_a_246_; lean_object* v_fvarId_247_; lean_object* v___x_248_; 
v_a_246_ = lean_array_uget_borrowed(v_as_238_, v_i_240_);
v_fvarId_247_ = lean_ctor_get(v_a_246_, 0);
v___x_248_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(v_fvarId_247_, v___y_242_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_250_; size_t v___x_251_; size_t v___x_252_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
lean_inc(v_a_249_);
lean_dec_ref_known(v___x_248_, 1);
v___x_250_ = l_Array_append___redArg(v_b_241_, v_a_249_);
lean_dec(v_a_249_);
v___x_251_ = ((size_t)1ULL);
v___x_252_ = lean_usize_add(v_i_240_, v___x_251_);
v_i_240_ = v___x_252_;
v_b_241_ = v___x_250_;
goto _start;
}
else
{
lean_dec_ref(v_b_241_);
return v___x_248_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg___boxed(lean_object* v_as_254_, lean_object* v_sz_255_, lean_object* v_i_256_, lean_object* v_b_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
size_t v_sz_boxed_260_; size_t v_i_boxed_261_; lean_object* v_res_262_; 
v_sz_boxed_260_ = lean_unbox_usize(v_sz_255_);
lean_dec(v_sz_255_);
v_i_boxed_261_ = lean_unbox_usize(v_i_256_);
lean_dec(v_i_256_);
v_res_262_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg(v_as_254_, v_sz_boxed_260_, v_i_boxed_261_, v_b_257_, v___y_258_);
lean_dec(v___y_258_);
lean_dec_ref(v_as_254_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg(lean_object* v_params_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_acc_270_; size_t v_sz_271_; size_t v___x_272_; lean_object* v___x_273_; 
v_acc_270_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0));
v_sz_271_ = lean_array_size(v_params_263_);
v___x_272_ = ((size_t)0ULL);
v___x_273_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg(v_params_263_, v_sz_271_, v___x_272_, v_acc_270_, v_a_264_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg___boxed(lean_object* v_params_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg(v_params_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_);
lean_dec(v_a_279_);
lean_dec_ref(v_a_278_);
lean_dec(v_a_277_);
lean_dec_ref(v_a_276_);
lean_dec(v_a_275_);
lean_dec_ref(v_params_274_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps(uint8_t v_pu_282_, lean_object* v_params_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg(v_params_283_, v_a_284_, v_a_285_, v_a_286_, v_a_287_, v_a_288_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___boxed(lean_object* v_pu_291_, lean_object* v_params_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_){
_start:
{
uint8_t v_pu_boxed_299_; lean_object* v_res_300_; 
v_pu_boxed_299_ = lean_unbox(v_pu_291_);
v_res_300_ = l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps(v_pu_boxed_299_, v_params_292_, v_a_293_, v_a_294_, v_a_295_, v_a_296_, v_a_297_);
lean_dec(v_a_297_);
lean_dec_ref(v_a_296_);
lean_dec(v_a_295_);
lean_dec_ref(v_a_294_);
lean_dec(v_a_293_);
lean_dec_ref(v_params_292_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0(lean_object* v_as_301_, size_t v_sz_302_, size_t v_i_303_, lean_object* v_b_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___redArg(v_as_301_, v_sz_302_, v_i_303_, v_b_304_, v___y_305_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0___boxed(lean_object* v_as_312_, lean_object* v_sz_313_, lean_object* v_i_314_, lean_object* v_b_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_){
_start:
{
size_t v_sz_boxed_322_; size_t v_i_boxed_323_; lean_object* v_res_324_; 
v_sz_boxed_322_ = lean_unbox_usize(v_sz_313_);
lean_dec(v_sz_313_);
v_i_boxed_323_ = lean_unbox_usize(v_i_314_);
lean_dec(v_i_314_);
v_res_324_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_PullFunDecls_findParamsDeps_spec__0(v_as_312_, v_sz_boxed_322_, v_i_boxed_323_, v_b_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_);
lean_dec(v___y_320_);
lean_dec_ref(v___y_319_);
lean_dec(v___y_318_);
lean_dec_ref(v___y_317_);
lean_dec(v___y_316_);
lean_dec_ref(v_as_312_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach(lean_object* v_p_325_, lean_object* v_k_326_){
_start:
{
uint8_t v_isFun_327_; 
v_isFun_327_ = lean_ctor_get_uint8(v_p_325_, sizeof(void*)*2);
if (v_isFun_327_ == 0)
{
lean_object* v_decl_328_; lean_object* v___x_329_; 
v_decl_328_ = lean_ctor_get(v_p_325_, 0);
lean_inc_ref(v_decl_328_);
v___x_329_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_329_, 0, v_decl_328_);
lean_ctor_set(v___x_329_, 1, v_k_326_);
return v___x_329_;
}
else
{
lean_object* v_decl_330_; lean_object* v___x_331_; 
v_decl_330_ = lean_ctor_get(v_p_325_, 0);
lean_inc_ref(v_decl_330_);
v___x_331_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_331_, 0, v_decl_330_);
lean_ctor_set(v___x_331_, 1, v_k_326_);
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach___boxed(lean_object* v_p_332_, lean_object* v_k_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach(v_p_332_, v_k_333_);
lean_dec_ref(v_p_332_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited(lean_object* v_i_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_snd_337_; uint8_t v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_snd_337_ = lean_ctor_get(v_a_336_, 1);
v___x_338_ = 0;
v___x_339_ = lean_box(v___x_338_);
v___x_340_ = lean_array_get(v___x_339_, v_snd_337_, v_i_335_);
lean_dec(v___x_339_);
v___x_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v_a_336_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited___boxed(lean_object* v_i_342_, lean_object* v_a_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited(v_i_342_, v_a_343_);
lean_dec(v_i_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg___lam__0(lean_object* v___x_345_, lean_object* v_00___346_, lean_object* v___y_347_){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_345_);
v___x_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
lean_ctor_set(v___x_349_, 1, v___y_347_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg(lean_object* v_upperBound_350_, lean_object* v___x_351_, lean_object* v_ps_352_, lean_object* v_a_353_, lean_object* v_b_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_a_357_; lean_object* v_snd_358_; lean_object* v___y_363_; uint8_t v___x_377_; 
v___x_377_ = lean_nat_dec_lt(v_a_353_, v_upperBound_350_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; 
lean_dec(v_a_353_);
v___x_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_378_, 0, v_b_354_);
lean_ctor_set(v___x_378_, 1, v___y_355_);
return v___x_378_;
}
else
{
lean_object* v___x_379_; lean_object* v_fst_380_; lean_object* v_snd_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_379_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited(v_a_353_, v___y_355_);
v_fst_380_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_fst_380_);
v_snd_381_ = lean_ctor_get(v___x_379_, 1);
lean_inc(v_snd_381_);
lean_dec_ref(v___x_379_);
v___x_382_ = lean_box(0);
v___x_383_ = lean_unbox(v_fst_380_);
lean_dec(v_fst_380_);
if (v___x_383_ == 0)
{
lean_object* v_decl_384_; lean_object* v_fvarId_385_; lean_object* v___x_386_; lean_object* v_used_387_; uint8_t v___x_388_; 
v_decl_384_ = lean_ctor_get(v___x_351_, 0);
v_fvarId_385_ = lean_ctor_get(v_decl_384_, 0);
v___x_386_ = lean_array_fget_borrowed(v_ps_352_, v_a_353_);
v_used_387_ = lean_ctor_get(v___x_386_, 1);
v___x_388_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_findFVarDirectDeps_go_spec__0___redArg(v_used_387_, v_fvarId_385_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; 
v___x_389_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg___lam__0(v___x_382_, v___x_382_, v_snd_381_);
v___y_363_ = v___x_389_;
goto v___jp_362_;
}
else
{
lean_object* v___x_390_; lean_object* v_snd_391_; 
v___x_390_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit(v_ps_352_, v_a_353_, v_snd_381_);
v_snd_391_ = lean_ctor_get(v___x_390_, 1);
lean_inc(v_snd_391_);
lean_dec_ref(v___x_390_);
v_a_357_ = v___x_382_;
v_snd_358_ = v_snd_391_;
goto v___jp_356_;
}
}
else
{
lean_object* v___x_392_; 
v___x_392_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg___lam__0(v___x_382_, v___x_382_, v_snd_381_);
v___y_363_ = v___x_392_;
goto v___jp_362_;
}
}
v___jp_356_:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = lean_unsigned_to_nat(1u);
v___x_360_ = lean_nat_add(v_a_353_, v___x_359_);
lean_dec(v_a_353_);
v_a_353_ = v___x_360_;
v_b_354_ = v_a_357_;
v___y_355_ = v_snd_358_;
goto _start;
}
v___jp_362_:
{
lean_object* v_fst_364_; 
v_fst_364_ = lean_ctor_get(v___y_363_, 0);
lean_inc(v_fst_364_);
if (lean_obj_tag(v_fst_364_) == 0)
{
lean_object* v_snd_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_373_; 
lean_dec(v_a_353_);
v_snd_365_ = lean_ctor_get(v___y_363_, 1);
v_isSharedCheck_373_ = !lean_is_exclusive(v___y_363_);
if (v_isSharedCheck_373_ == 0)
{
lean_object* v_unused_374_; 
v_unused_374_ = lean_ctor_get(v___y_363_, 0);
lean_dec(v_unused_374_);
v___x_367_ = v___y_363_;
v_isShared_368_ = v_isSharedCheck_373_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_snd_365_);
lean_dec(v___y_363_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_373_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v_a_369_; lean_object* v___x_371_; 
v_a_369_ = lean_ctor_get(v_fst_364_, 0);
lean_inc(v_a_369_);
lean_dec_ref_known(v_fst_364_, 1);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v_a_369_);
v___x_371_ = v___x_367_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_a_369_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v_snd_365_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
else
{
lean_object* v_snd_375_; lean_object* v_a_376_; 
v_snd_375_ = lean_ctor_get(v___y_363_, 1);
lean_inc(v_snd_375_);
lean_dec_ref(v___y_363_);
v_a_376_ = lean_ctor_get(v_fst_364_, 0);
lean_inc(v_a_376_);
lean_dec_ref_known(v_fst_364_, 1);
v_a_357_ = v_a_376_;
v_snd_358_ = v_snd_375_;
goto v___jp_356_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit(lean_object* v_ps_393_, lean_object* v_i_394_, lean_object* v_a_395_){
_start:
{
lean_object* v___x_396_; lean_object* v_fst_397_; uint8_t v___x_398_; 
v___x_396_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visited(v_i_394_, v_a_395_);
v_fst_397_ = lean_ctor_get(v___x_396_, 0);
v___x_398_ = lean_unbox(v_fst_397_);
if (v___x_398_ == 0)
{
lean_object* v_snd_399_; lean_object* v_fst_400_; lean_object* v_snd_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_436_; 
v_snd_399_ = lean_ctor_get(v___x_396_, 1);
lean_inc(v_snd_399_);
lean_dec_ref(v___x_396_);
v_fst_400_ = lean_ctor_get(v_snd_399_, 0);
v_snd_401_ = lean_ctor_get(v_snd_399_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v_snd_399_);
if (v_isSharedCheck_436_ == 0)
{
v___x_403_ = v_snd_399_;
v_isShared_404_ = v_isSharedCheck_436_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_snd_401_);
lean_inc(v_fst_400_);
lean_dec(v_snd_399_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_436_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; uint8_t v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_413_; 
v___x_405_ = l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default;
v___x_406_ = lean_array_get_size(v_ps_393_);
v___x_407_ = lean_unsigned_to_nat(0u);
v___x_408_ = 1;
v___x_409_ = lean_box(v___x_408_);
v___x_410_ = lean_array_set(v_snd_401_, v_i_394_, v___x_409_);
v___x_411_ = lean_array_get_borrowed(v___x_405_, v_ps_393_, v_i_394_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 1, v___x_410_);
v___x_413_ = v___x_403_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_fst_400_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v___x_410_);
v___x_413_ = v_reuseFailAlloc_435_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v_snd_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_433_; 
v___x_414_ = lean_box(0);
v___x_415_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg(v___x_406_, v___x_411_, v_ps_393_, v___x_407_, v___x_414_, v___x_413_);
v_snd_416_ = lean_ctor_get(v___x_415_, 1);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_433_ == 0)
{
lean_object* v_unused_434_; 
v_unused_434_ = lean_ctor_get(v___x_415_, 0);
lean_dec(v_unused_434_);
v___x_418_ = v___x_415_;
v_isShared_419_ = v_isSharedCheck_433_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_snd_416_);
lean_dec(v___x_415_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_433_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v_fst_420_; lean_object* v_snd_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_432_; 
v_fst_420_ = lean_ctor_get(v_snd_416_, 0);
v_snd_421_ = lean_ctor_get(v_snd_416_, 1);
v_isSharedCheck_432_ = !lean_is_exclusive(v_snd_416_);
if (v_isSharedCheck_432_ == 0)
{
v___x_423_ = v_snd_416_;
v_isShared_424_ = v_isSharedCheck_432_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_snd_421_);
lean_inc(v_fst_420_);
lean_dec(v_snd_416_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_432_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_425_; lean_object* v___x_427_; 
v___x_425_ = l_Lean_Compiler_LCNF_PullFunDecls_ToPull_attach(v___x_411_, v_fst_420_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 0, v___x_425_);
v___x_427_ = v___x_423_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_425_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_snd_421_);
v___x_427_ = v_reuseFailAlloc_431_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_429_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 1, v___x_427_);
lean_ctor_set(v___x_418_, 0, v___x_414_);
v___x_429_ = v___x_418_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_414_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v___x_427_);
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
}
}
}
else
{
lean_object* v_snd_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_445_; 
v_snd_437_ = lean_ctor_get(v___x_396_, 1);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_445_ == 0)
{
lean_object* v_unused_446_; 
v_unused_446_ = lean_ctor_get(v___x_396_, 0);
lean_dec(v_unused_446_);
v___x_439_ = v___x_396_;
v_isShared_440_ = v_isSharedCheck_445_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_snd_437_);
lean_dec(v___x_396_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_445_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_441_ = lean_box(0);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_441_);
v___x_443_ = v___x_439_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_441_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_snd_437_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit___boxed(lean_object* v_ps_447_, lean_object* v_i_448_, lean_object* v_a_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit(v_ps_447_, v_i_448_, v_a_449_);
lean_dec(v_i_448_);
lean_dec_ref(v_ps_447_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg___boxed(lean_object* v_upperBound_451_, lean_object* v___x_452_, lean_object* v_ps_453_, lean_object* v_a_454_, lean_object* v_b_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg(v_upperBound_451_, v___x_452_, v_ps_453_, v_a_454_, v_b_455_, v___y_456_);
lean_dec_ref(v_ps_453_);
lean_dec_ref(v___x_452_);
lean_dec(v_upperBound_451_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0(lean_object* v_upperBound_458_, lean_object* v___x_459_, lean_object* v_ps_460_, lean_object* v_inst_461_, lean_object* v_R_462_, lean_object* v_a_463_, lean_object* v_b_464_, lean_object* v_c_465_, lean_object* v___y_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___redArg(v_upperBound_458_, v___x_459_, v_ps_460_, v_a_463_, v_b_464_, v___y_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0___boxed(lean_object* v_upperBound_468_, lean_object* v___x_469_, lean_object* v_ps_470_, lean_object* v_inst_471_, lean_object* v_R_472_, lean_object* v_a_473_, lean_object* v_b_474_, lean_object* v_c_475_, lean_object* v___y_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit_spec__0(v_upperBound_468_, v___x_469_, v_ps_470_, v_inst_471_, v_R_472_, v_a_473_, v_b_474_, v_c_475_, v___y_476_);
lean_dec_ref(v_ps_470_);
lean_dec_ref(v___x_469_);
lean_dec(v_upperBound_468_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg(lean_object* v_upperBound_478_, lean_object* v_ps_479_, lean_object* v_a_480_, lean_object* v_b_481_, lean_object* v___y_482_){
_start:
{
uint8_t v___x_483_; 
v___x_483_ = lean_nat_dec_lt(v_a_480_, v_upperBound_478_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
lean_dec(v_a_480_);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v_b_481_);
lean_ctor_set(v___x_484_, 1, v___y_482_);
return v___x_484_;
}
else
{
lean_object* v___x_485_; lean_object* v_snd_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_485_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_visit(v_ps_479_, v_a_480_, v___y_482_);
v_snd_486_ = lean_ctor_get(v___x_485_, 1);
lean_inc(v_snd_486_);
lean_dec_ref(v___x_485_);
v___x_487_ = lean_box(0);
v___x_488_ = lean_unsigned_to_nat(1u);
v___x_489_ = lean_nat_add(v_a_480_, v___x_488_);
lean_dec(v_a_480_);
v_a_480_ = v___x_489_;
v_b_481_ = v___x_487_;
v___y_482_ = v_snd_486_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg___boxed(lean_object* v_upperBound_491_, lean_object* v_ps_492_, lean_object* v_a_493_, lean_object* v_b_494_, lean_object* v___y_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg(v_upperBound_491_, v_ps_492_, v_a_493_, v_b_494_, v___y_495_);
lean_dec_ref(v_ps_492_);
lean_dec(v_upperBound_491_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go(lean_object* v_ps_497_, lean_object* v_a_498_){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v_snd_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
v___x_499_ = lean_array_get_size(v_ps_497_);
v___x_500_ = lean_unsigned_to_nat(0u);
v___x_501_ = lean_box(0);
v___x_502_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg(v___x_499_, v_ps_497_, v___x_500_, v___x_501_, v_a_498_);
v_snd_503_ = lean_ctor_get(v___x_502_, 1);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_510_ == 0)
{
lean_object* v_unused_511_; 
v_unused_511_ = lean_ctor_get(v___x_502_, 0);
lean_dec(v_unused_511_);
v___x_505_ = v___x_502_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_snd_503_);
lean_dec(v___x_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v___x_501_);
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_501_);
lean_ctor_set(v_reuseFailAlloc_509_, 1, v_snd_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go___boxed(lean_object* v_ps_512_, lean_object* v_a_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go(v_ps_512_, v_a_513_);
lean_dec_ref(v_ps_512_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0(lean_object* v_upperBound_515_, lean_object* v_ps_516_, lean_object* v_inst_517_, lean_object* v_R_518_, lean_object* v_a_519_, lean_object* v_b_520_, lean_object* v_c_521_, lean_object* v___y_522_){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___redArg(v_upperBound_515_, v_ps_516_, v_a_519_, v_b_520_, v___y_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0___boxed(lean_object* v_upperBound_524_, lean_object* v_ps_525_, lean_object* v_inst_526_, lean_object* v_R_527_, lean_object* v_a_528_, lean_object* v_b_529_, lean_object* v_c_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go_spec__0(v_upperBound_524_, v_ps_525_, v_inst_526_, v_R_527_, v_a_528_, v_b_529_, v_c_530_, v___y_531_);
lean_dec_ref(v_ps_525_);
lean_dec(v_upperBound_524_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0(size_t v_sz_533_, size_t v_i_534_, lean_object* v_bs_535_){
_start:
{
uint8_t v___x_536_; 
v___x_536_ = lean_usize_dec_lt(v_i_534_, v_sz_533_);
if (v___x_536_ == 0)
{
return v_bs_535_;
}
else
{
lean_object* v___x_537_; lean_object* v_bs_x27_538_; uint8_t v___x_539_; size_t v___x_540_; size_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_537_ = lean_unsigned_to_nat(0u);
v_bs_x27_538_ = lean_array_uset(v_bs_535_, v_i_534_, v___x_537_);
v___x_539_ = 0;
v___x_540_ = ((size_t)1ULL);
v___x_541_ = lean_usize_add(v_i_534_, v___x_540_);
v___x_542_ = lean_box(v___x_539_);
v___x_543_ = lean_array_uset(v_bs_x27_538_, v_i_534_, v___x_542_);
v_i_534_ = v___x_541_;
v_bs_535_ = v___x_543_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0___boxed(lean_object* v_sz_545_, lean_object* v_i_546_, lean_object* v_bs_547_){
_start:
{
size_t v_sz_boxed_548_; size_t v_i_boxed_549_; lean_object* v_res_550_; 
v_sz_boxed_548_ = lean_unbox_usize(v_sz_545_);
lean_dec(v_sz_545_);
v_i_boxed_549_ = lean_unbox_usize(v_i_546_);
lean_dec(v_i_546_);
v_res_550_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0(v_sz_boxed_548_, v_i_boxed_549_, v_bs_547_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attach(lean_object* v_ps_551_, lean_object* v_k_552_){
_start:
{
size_t v_sz_553_; size_t v___x_554_; lean_object* v_visited_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v_snd_558_; lean_object* v_fst_559_; 
v_sz_553_ = lean_array_size(v_ps_551_);
v___x_554_ = ((size_t)0ULL);
lean_inc_ref(v_ps_551_);
v_visited_555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_PullFunDecls_attach_spec__0(v_sz_553_, v___x_554_, v_ps_551_);
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v_k_552_);
lean_ctor_set(v___x_556_, 1, v_visited_555_);
v___x_557_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_PullFunDecls_attach_go(v_ps_551_, v___x_556_);
lean_dec_ref(v_ps_551_);
v_snd_558_ = lean_ctor_get(v___x_557_, 1);
lean_inc(v_snd_558_);
lean_dec_ref(v___x_557_);
v_fst_559_ = lean_ctor_get(v_snd_558_, 0);
lean_inc(v_fst_559_);
lean_dec(v_snd_558_);
return v_fst_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg(lean_object* v_fvarId_560_, lean_object* v_k_561_, lean_object* v_a_562_){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg(v_fvarId_560_, v_a_562_);
if (lean_obj_tag(v___x_564_) == 0)
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_573_; 
v_a_565_ = lean_ctor_get(v___x_564_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_564_);
if (v_isSharedCheck_573_ == 0)
{
v___x_567_ = v___x_564_;
v_isShared_568_ = v_isSharedCheck_573_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_564_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_573_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_569_ = l_Lean_Compiler_LCNF_PullFunDecls_attach(v_a_565_, v_k_561_);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 0, v___x_569_);
v___x_571_ = v___x_567_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v___x_569_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
else
{
lean_object* v_a_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_581_; 
lean_dec_ref(v_k_561_);
v_a_574_ = lean_ctor_get(v___x_564_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_564_);
if (v_isSharedCheck_581_ == 0)
{
v___x_576_ = v___x_564_;
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_a_574_);
lean_dec(v___x_564_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_a_574_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg___boxed(lean_object* v_fvarId_582_, lean_object* v_k_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg(v_fvarId_582_, v_k_583_, v_a_584_);
lean_dec(v_a_584_);
lean_dec(v_fvarId_582_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps(lean_object* v_fvarId_587_, lean_object* v_k_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg(v_fvarId_587_, v_k_588_, v_a_589_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___boxed(lean_object* v_fvarId_596_, lean_object* v_k_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps(v_fvarId_596_, v_k_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_);
lean_dec(v_a_602_);
lean_dec_ref(v_a_601_);
lean_dec(v_a_600_);
lean_dec_ref(v_a_599_);
lean_dec(v_a_598_);
lean_dec(v_fvarId_596_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps(lean_object* v_params_605_, lean_object* v_k_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_Lean_Compiler_LCNF_PullFunDecls_findParamsDeps___redArg(v_params_605_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_622_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_622_ == 0)
{
v___x_616_ = v___x_613_;
v_isShared_617_ = v_isSharedCheck_622_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_613_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_622_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_618_ = l_Lean_Compiler_LCNF_PullFunDecls_attach(v_a_614_, v_k_606_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_618_);
v___x_620_ = v___x_616_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_618_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
else
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
lean_dec_ref(v_k_606_);
v_a_623_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_613_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_613_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps___boxed(lean_object* v_params_631_, lean_object* v_k_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps(v_params_631_, v_k_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_637_);
lean_dec(v_a_637_);
lean_dec_ref(v_a_636_);
lean_dec(v_a_635_);
lean_dec_ref(v_a_634_);
lean_dec(v_a_633_);
lean_dec_ref(v_params_631_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__1(lean_object* v_a_640_, lean_object* v_a_641_){
_start:
{
if (lean_obj_tag(v_a_640_) == 0)
{
lean_object* v___x_642_; 
v___x_642_ = l_List_reverse___redArg(v_a_641_);
return v___x_642_;
}
else
{
lean_object* v_head_643_; uint8_t v_isFun_644_; 
v_head_643_ = lean_ctor_get(v_a_640_, 0);
v_isFun_644_ = lean_ctor_get_uint8(v_head_643_, sizeof(void*)*2);
if (v_isFun_644_ == 0)
{
lean_object* v_tail_645_; 
v_tail_645_ = lean_ctor_get(v_a_640_, 1);
lean_inc(v_tail_645_);
lean_dec_ref_known(v_a_640_, 2);
v_a_640_ = v_tail_645_;
goto _start;
}
else
{
lean_object* v_tail_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_655_; 
lean_inc(v_head_643_);
v_tail_647_ = lean_ctor_get(v_a_640_, 1);
v_isSharedCheck_655_ = !lean_is_exclusive(v_a_640_);
if (v_isSharedCheck_655_ == 0)
{
lean_object* v_unused_656_; 
v_unused_656_ = lean_ctor_get(v_a_640_, 0);
lean_dec(v_unused_656_);
v___x_649_ = v_a_640_;
v_isShared_650_ = v_isSharedCheck_655_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_tail_647_);
lean_dec(v_a_640_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_655_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 1, v_a_641_);
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_head_643_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v_a_641_);
v___x_652_ = v_reuseFailAlloc_654_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
v_a_640_ = v_tail_647_;
v_a_641_ = v___x_652_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__0(lean_object* v_a_657_, lean_object* v_a_658_){
_start:
{
if (lean_obj_tag(v_a_657_) == 0)
{
lean_object* v___x_659_; 
v___x_659_ = l_List_reverse___redArg(v_a_658_);
return v___x_659_;
}
else
{
lean_object* v_head_660_; uint8_t v_isFun_661_; 
v_head_660_ = lean_ctor_get(v_a_657_, 0);
v_isFun_661_ = lean_ctor_get_uint8(v_head_660_, sizeof(void*)*2);
if (v_isFun_661_ == 0)
{
lean_object* v_tail_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_670_; 
lean_inc(v_head_660_);
v_tail_662_ = lean_ctor_get(v_a_657_, 1);
v_isSharedCheck_670_ = !lean_is_exclusive(v_a_657_);
if (v_isSharedCheck_670_ == 0)
{
lean_object* v_unused_671_; 
v_unused_671_ = lean_ctor_get(v_a_657_, 0);
lean_dec(v_unused_671_);
v___x_664_ = v_a_657_;
v_isShared_665_ = v_isSharedCheck_670_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_tail_662_);
lean_dec(v_a_657_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_670_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 1, v_a_658_);
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_head_660_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_a_658_);
v___x_667_ = v_reuseFailAlloc_669_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
v_a_657_ = v_tail_662_;
v_a_658_ = v___x_667_;
goto _start;
}
}
}
else
{
lean_object* v_tail_672_; 
v_tail_672_ = lean_ctor_get(v_a_657_, 1);
lean_inc(v_tail_672_);
lean_dec_ref_known(v_a_657_, 2);
v_a_657_ = v_tail_672_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg(lean_object* v_k_674_, lean_object* v_a_675_){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_677_ = lean_st_ref_get(v_a_675_);
v___x_678_ = lean_box(0);
v___x_679_ = l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__0(v___x_677_, v___x_678_);
v___x_680_ = lean_st_ref_take(v_a_675_);
v___x_681_ = l_List_filterTR_loop___at___00Lean_Compiler_LCNF_PullFunDecls_attachJps_spec__1(v___x_680_, v___x_678_);
v___x_682_ = lean_st_ref_put(v_a_675_, v___x_681_);
v___x_683_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullFunDecls_findFVarDeps___redArg___closed__0));
v___x_684_ = l_Lean_Compiler_LCNF_PullFunDecls_findFVarDepsFixpoint___redArg(v___x_679_, v___x_683_, v_a_675_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_693_ == 0)
{
v___x_687_ = v___x_684_;
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_684_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_689_ = l_Lean_Compiler_LCNF_PullFunDecls_attach(v_a_685_, v_k_674_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 0, v___x_689_);
v___x_691_ = v___x_687_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_701_; 
lean_dec_ref(v_k_674_);
v_a_694_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_701_ == 0)
{
v___x_696_ = v___x_684_;
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v___x_684_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_699_; 
if (v_isShared_697_ == 0)
{
v___x_699_ = v___x_696_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_a_694_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg___boxed(lean_object* v_k_702_, lean_object* v_a_703_, lean_object* v_a_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg(v_k_702_, v_a_703_);
lean_dec(v_a_703_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps(lean_object* v_k_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg(v_k_706_, v_a_707_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_attachJps___boxed(lean_object* v_k_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l_Lean_Compiler_LCNF_PullFunDecls_attachJps(v_k_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
lean_dec(v_a_719_);
lean_dec_ref(v_a_718_);
lean_dec(v_a_717_);
lean_dec_ref(v_a_716_);
lean_dec(v_a_715_);
return v_res_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_addToPull(uint8_t v_isFun_722_, lean_object* v_decl_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v_params_735_; lean_object* v_type_736_; lean_object* v_value_737_; uint8_t v___x_738_; lean_object* v_value_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___x_767_; 
v___x_730_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_731_ = lean_st_ref_get(v_a_724_);
v___x_732_ = lean_st_ref_take(v_a_724_);
lean_dec(v___x_732_);
v___x_733_ = lean_box(0);
v___x_734_ = lean_st_ref_put(v_a_724_, v___x_733_);
v_params_735_ = lean_ctor_get(v_decl_723_, 2);
lean_inc_ref(v_params_735_);
v_type_736_ = lean_ctor_get(v_decl_723_, 3);
lean_inc_ref(v_type_736_);
v_value_737_ = lean_ctor_get(v_decl_723_, 4);
v___x_738_ = 0;
lean_inc_ref(v_value_737_);
v___x_767_ = l_Lean_Compiler_LCNF_PullFunDecls_pull(v_value_737_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; lean_object* v___x_769_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_767_, 1);
v___x_769_ = l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps(v_params_735_, v_a_768_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_);
if (lean_obj_tag(v___x_769_) == 0)
{
if (v_isFun_722_ == 0)
{
lean_object* v_a_770_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
lean_dec_ref_known(v___x_769_, 1);
v_value_740_ = v_a_770_;
v___y_741_ = v_a_724_;
v___y_742_ = v_a_726_;
goto v___jp_739_;
}
else
{
lean_object* v_a_771_; lean_object* v___x_772_; 
v_a_771_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_771_);
lean_dec_ref_known(v___x_769_, 1);
v___x_772_ = l_Lean_Compiler_LCNF_PullFunDecls_attachJps___redArg(v_a_771_, v_a_724_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_a_773_);
lean_dec_ref_known(v___x_772_, 1);
v_value_740_ = v_a_773_;
v___y_741_ = v_a_724_;
v___y_742_ = v_a_726_;
goto v___jp_739_;
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
lean_dec_ref(v_type_736_);
lean_dec_ref(v_params_735_);
lean_dec(v___x_731_);
lean_dec_ref(v_decl_723_);
v_a_774_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_772_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_772_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_774_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
lean_dec_ref(v_type_736_);
lean_dec_ref(v_params_735_);
lean_dec(v___x_731_);
lean_dec_ref(v_decl_723_);
v_a_782_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_769_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_769_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec_ref(v_type_736_);
lean_dec_ref(v_params_735_);
lean_dec(v___x_731_);
lean_dec_ref(v_decl_723_);
v_a_790_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_767_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_767_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
v___jp_739_:
{
lean_object* v___x_743_; 
v___x_743_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_738_, v_decl_723_, v_type_736_, v_params_735_, v_value_740_, v___y_742_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_758_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_758_ == 0)
{
v___x_746_ = v___x_743_;
v_isShared_747_ = v_isSharedCheck_758_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_743_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_758_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_756_; 
v___x_748_ = lean_st_ref_take(v___y_741_);
v___x_749_ = lean_box(0);
lean_inc(v_a_744_);
v___x_750_ = l_Lean_Compiler_LCNF_FunDecl_collectUsed(v___x_738_, v_a_744_, v___x_730_);
v___x_751_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_751_, 0, v_a_744_);
lean_ctor_set(v___x_751_, 1, v___x_750_);
lean_ctor_set_uint8(v___x_751_, sizeof(void*)*2, v_isFun_722_);
v___x_752_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
lean_ctor_set(v___x_752_, 1, v___x_748_);
v___x_753_ = l_List_appendTR___redArg(v___x_752_, v___x_731_);
v___x_754_ = lean_st_ref_put(v___y_741_, v___x_753_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v___x_749_);
v___x_756_ = v___x_746_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_749_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
else
{
lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_766_; 
lean_dec(v___x_731_);
v_a_759_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_766_ == 0)
{
v___x_761_ = v___x_743_;
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_dec(v___x_743_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_a_759_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_pull(lean_object* v_code_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_){
_start:
{
switch(lean_obj_tag(v_code_798_))
{
case 0:
{
lean_object* v_decl_805_; lean_object* v_k_806_; lean_object* v___x_807_; 
v_decl_805_ = lean_ctor_get(v_code_798_, 0);
v_k_806_ = lean_ctor_get(v_code_798_, 1);
lean_inc_ref(v_k_806_);
v___x_807_ = l_Lean_Compiler_LCNF_PullFunDecls_pull(v_k_806_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v_a_808_; lean_object* v_fvarId_809_; lean_object* v___x_810_; 
v_a_808_ = lean_ctor_get(v___x_807_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v___x_807_, 1);
v_fvarId_809_ = lean_ctor_get(v_decl_805_, 0);
v___x_810_ = l_Lean_Compiler_LCNF_PullFunDecls_attachFVarDeps___redArg(v_fvarId_809_, v_a_808_, v_a_799_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_848_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_848_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_848_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_848_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
size_t v___x_815_; size_t v___x_816_; uint8_t v___x_817_; 
v___x_815_ = lean_ptr_addr(v_k_806_);
v___x_816_ = lean_ptr_addr(v_a_811_);
v___x_817_ = lean_usize_dec_eq(v___x_815_, v___x_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_827_; 
lean_inc_ref(v_decl_805_);
v_isSharedCheck_827_ = !lean_is_exclusive(v_code_798_);
if (v_isSharedCheck_827_ == 0)
{
lean_object* v_unused_828_; lean_object* v_unused_829_; 
v_unused_828_ = lean_ctor_get(v_code_798_, 1);
lean_dec(v_unused_828_);
v_unused_829_ = lean_ctor_get(v_code_798_, 0);
lean_dec(v_unused_829_);
v___x_819_ = v_code_798_;
v_isShared_820_ = v_isSharedCheck_827_;
goto v_resetjp_818_;
}
else
{
lean_dec(v_code_798_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_827_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_822_; 
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 1, v_a_811_);
v___x_822_ = v___x_819_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_decl_805_);
lean_ctor_set(v_reuseFailAlloc_826_, 1, v_a_811_);
v___x_822_ = v_reuseFailAlloc_826_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
lean_object* v___x_824_; 
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v___x_822_);
v___x_824_ = v___x_813_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_822_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
else
{
size_t v___x_830_; size_t v___x_831_; uint8_t v___x_832_; 
v___x_830_ = lean_ptr_addr(v_decl_805_);
v___x_831_ = lean_ptr_addr(v_decl_805_);
v___x_832_ = lean_usize_dec_eq(v___x_830_, v___x_831_);
if (v___x_832_ == 0)
{
lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_842_; 
lean_inc_ref(v_decl_805_);
v_isSharedCheck_842_ = !lean_is_exclusive(v_code_798_);
if (v_isSharedCheck_842_ == 0)
{
lean_object* v_unused_843_; lean_object* v_unused_844_; 
v_unused_843_ = lean_ctor_get(v_code_798_, 1);
lean_dec(v_unused_843_);
v_unused_844_ = lean_ctor_get(v_code_798_, 0);
lean_dec(v_unused_844_);
v___x_834_ = v_code_798_;
v_isShared_835_ = v_isSharedCheck_842_;
goto v_resetjp_833_;
}
else
{
lean_dec(v_code_798_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_842_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_837_; 
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 1, v_a_811_);
v___x_837_ = v___x_834_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_decl_805_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v_a_811_);
v___x_837_ = v_reuseFailAlloc_841_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
lean_object* v___x_839_; 
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v___x_837_);
v___x_839_ = v___x_813_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_837_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
else
{
lean_object* v___x_846_; 
lean_dec(v_a_811_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v_code_798_);
v___x_846_ = v___x_813_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_code_798_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_798_, 2);
return v___x_810_;
}
}
else
{
lean_dec_ref_known(v_code_798_, 2);
return v___x_807_;
}
}
case 1:
{
lean_object* v_decl_849_; lean_object* v_k_850_; uint8_t v___x_851_; lean_object* v___x_852_; 
v_decl_849_ = lean_ctor_get(v_code_798_, 0);
lean_inc_ref(v_decl_849_);
v_k_850_ = lean_ctor_get(v_code_798_, 1);
lean_inc_ref(v_k_850_);
lean_dec_ref_known(v_code_798_, 2);
v___x_851_ = 1;
v___x_852_ = l_Lean_Compiler_LCNF_PullFunDecls_addToPull(v___x_851_, v_decl_849_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_);
if (lean_obj_tag(v___x_852_) == 0)
{
lean_dec_ref_known(v___x_852_, 1);
v_code_798_ = v_k_850_;
goto _start;
}
else
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
lean_dec_ref(v_k_850_);
v_a_854_ = lean_ctor_get(v___x_852_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_852_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_852_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_852_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
case 2:
{
lean_object* v_decl_862_; lean_object* v_k_863_; uint8_t v___x_864_; lean_object* v___x_865_; 
v_decl_862_ = lean_ctor_get(v_code_798_, 0);
lean_inc_ref(v_decl_862_);
v_k_863_ = lean_ctor_get(v_code_798_, 1);
lean_inc_ref(v_k_863_);
lean_dec_ref_known(v_code_798_, 2);
v___x_864_ = 0;
v___x_865_ = l_Lean_Compiler_LCNF_PullFunDecls_addToPull(v___x_864_, v_decl_862_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_dec_ref_known(v___x_865_, 1);
v_code_798_ = v_k_863_;
goto _start;
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec_ref(v_k_863_);
v_a_867_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_865_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_865_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
case 4:
{
lean_object* v_cases_875_; lean_object* v_typeName_876_; lean_object* v_resultType_877_; lean_object* v_discr_878_; lean_object* v_alts_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_918_; 
v_cases_875_ = lean_ctor_get(v_code_798_, 0);
lean_inc_ref(v_cases_875_);
v_typeName_876_ = lean_ctor_get(v_cases_875_, 0);
v_resultType_877_ = lean_ctor_get(v_cases_875_, 1);
v_discr_878_ = lean_ctor_get(v_cases_875_, 2);
v_alts_879_ = lean_ctor_get(v_cases_875_, 3);
v_isSharedCheck_918_ = !lean_is_exclusive(v_cases_875_);
if (v_isSharedCheck_918_ == 0)
{
v___x_881_ = v_cases_875_;
v_isShared_882_ = v_isSharedCheck_918_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_alts_879_);
lean_inc(v_discr_878_);
lean_inc(v_resultType_877_);
lean_inc(v_typeName_876_);
lean_dec(v_cases_875_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_918_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_883_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_879_);
v___x_884_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1(v___x_883_, v_alts_879_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_909_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_909_ == 0)
{
v___x_887_ = v___x_884_;
v_isShared_888_ = v_isSharedCheck_909_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_884_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_909_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
size_t v___x_889_; size_t v___x_890_; uint8_t v___x_891_; 
v___x_889_ = lean_ptr_addr(v_alts_879_);
lean_dec_ref(v_alts_879_);
v___x_890_ = lean_ptr_addr(v_a_885_);
v___x_891_ = lean_usize_dec_eq(v___x_889_, v___x_890_);
if (v___x_891_ == 0)
{
lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_904_; 
v_isSharedCheck_904_ = !lean_is_exclusive(v_code_798_);
if (v_isSharedCheck_904_ == 0)
{
lean_object* v_unused_905_; 
v_unused_905_ = lean_ctor_get(v_code_798_, 0);
lean_dec(v_unused_905_);
v___x_893_ = v_code_798_;
v_isShared_894_ = v_isSharedCheck_904_;
goto v_resetjp_892_;
}
else
{
lean_dec(v_code_798_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_904_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 3, v_a_885_);
v___x_896_ = v___x_881_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_typeName_876_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_resultType_877_);
lean_ctor_set(v_reuseFailAlloc_903_, 2, v_discr_878_);
lean_ctor_set(v_reuseFailAlloc_903_, 3, v_a_885_);
v___x_896_ = v_reuseFailAlloc_903_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
lean_object* v___x_898_; 
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v___x_896_);
v___x_898_ = v___x_893_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_896_);
v___x_898_ = v_reuseFailAlloc_902_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
lean_object* v___x_900_; 
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_898_);
v___x_900_ = v___x_887_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v___x_898_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
}
else
{
lean_object* v___x_907_; 
lean_dec(v_a_885_);
lean_del_object(v___x_881_);
lean_dec(v_discr_878_);
lean_dec_ref(v_resultType_877_);
lean_dec(v_typeName_876_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v_code_798_);
v___x_907_ = v___x_887_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_code_798_);
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
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
lean_del_object(v___x_881_);
lean_dec_ref(v_alts_879_);
lean_dec(v_discr_878_);
lean_dec_ref(v_resultType_877_);
lean_dec(v_typeName_876_);
lean_dec_ref_known(v_code_798_, 1);
v_a_910_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_884_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_884_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
}
default: 
{
lean_object* v___x_919_; 
v___x_919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_919_, 0, v_code_798_);
return v___x_919_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1(lean_object* v_i_920_, lean_object* v_as_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v___x_928_; uint8_t v___x_929_; 
v___x_928_ = lean_array_get_size(v_as_921_);
v___x_929_ = lean_nat_dec_lt(v_i_920_, v___x_928_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; 
lean_dec(v_i_920_);
v___x_930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_930_, 0, v_as_921_);
return v___x_930_;
}
else
{
lean_object* v_a_931_; lean_object* v_a_933_; 
v_a_931_ = lean_array_fget_borrowed(v_as_921_, v_i_920_);
if (lean_obj_tag(v_a_931_) == 0)
{
lean_object* v_params_944_; lean_object* v_code_945_; lean_object* v___x_946_; 
v_params_944_ = lean_ctor_get(v_a_931_, 1);
v_code_945_ = lean_ctor_get(v_a_931_, 2);
lean_inc_ref(v_code_945_);
v___x_946_ = l_Lean_Compiler_LCNF_PullFunDecls_pull(v_code_945_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_948_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_a_947_);
lean_dec_ref_known(v___x_946_, 1);
v___x_948_ = l_Lean_Compiler_LCNF_PullFunDecls_attachParamsDeps(v_params_944_, v_a_947_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_950_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_a_949_);
lean_dec_ref_known(v___x_948_, 1);
lean_inc_ref(v_a_931_);
v___x_950_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_931_, v_a_949_);
v_a_933_ = v___x_950_;
goto v___jp_932_;
}
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
lean_dec_ref(v_as_921_);
lean_dec(v_i_920_);
v_a_951_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_948_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_948_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
lean_dec_ref(v_as_921_);
lean_dec(v_i_920_);
v_a_959_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_946_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_946_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
else
{
lean_object* v_code_967_; lean_object* v___x_968_; 
v_code_967_ = lean_ctor_get(v_a_931_, 0);
lean_inc_ref(v_code_967_);
v___x_968_ = l_Lean_Compiler_LCNF_PullFunDecls_pull(v_code_967_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v___x_970_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 1);
lean_inc_ref(v_a_931_);
v___x_970_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_931_, v_a_969_);
v_a_933_ = v___x_970_;
goto v___jp_932_;
}
else
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
lean_dec_ref(v_as_921_);
lean_dec(v_i_920_);
v_a_971_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_968_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_968_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
v___jp_932_:
{
size_t v___x_934_; size_t v___x_935_; uint8_t v___x_936_; 
v___x_934_ = lean_ptr_addr(v_a_931_);
v___x_935_ = lean_ptr_addr(v_a_933_);
v___x_936_ = lean_usize_dec_eq(v___x_934_, v___x_935_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_937_ = lean_unsigned_to_nat(1u);
v___x_938_ = lean_nat_add(v_i_920_, v___x_937_);
v___x_939_ = lean_array_fset(v_as_921_, v_i_920_, v_a_933_);
lean_dec(v_i_920_);
v_i_920_ = v___x_938_;
v_as_921_ = v___x_939_;
goto _start;
}
else
{
lean_object* v___x_941_; lean_object* v___x_942_; 
lean_dec_ref(v_a_933_);
v___x_941_ = lean_unsigned_to_nat(1u);
v___x_942_ = lean_nat_add(v_i_920_, v___x_941_);
lean_dec(v_i_920_);
v_i_920_ = v___x_942_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1___boxed(lean_object* v_i_979_, lean_object* v_as_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullFunDecls_pull_spec__1(v_i_979_, v_as_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
lean_dec(v___y_981_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_addToPull___boxed(lean_object* v_isFun_988_, lean_object* v_decl_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_){
_start:
{
uint8_t v_isFun_boxed_996_; lean_object* v_res_997_; 
v_isFun_boxed_996_ = lean_unbox(v_isFun_988_);
v_res_997_ = l_Lean_Compiler_LCNF_PullFunDecls_addToPull(v_isFun_boxed_996_, v_decl_989_, v_a_990_, v_a_991_, v_a_992_, v_a_993_, v_a_994_);
lean_dec(v_a_994_);
lean_dec_ref(v_a_993_);
lean_dec(v_a_992_);
lean_dec_ref(v_a_991_);
lean_dec(v_a_990_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullFunDecls_pull___boxed(lean_object* v_code_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Lean_Compiler_LCNF_PullFunDecls_pull(v_code_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_, v_a_1003_);
lean_dec(v_a_1003_);
lean_dec_ref(v_a_1002_);
lean_dec(v_a_1001_);
lean_dec_ref(v_a_1000_);
lean_dec(v_a_999_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg(lean_object* v_f_1006_, lean_object* v_v_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
if (lean_obj_tag(v_v_1007_) == 0)
{
lean_object* v_code_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1038_; 
v_code_1014_ = lean_ctor_get(v_v_1007_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v_v_1007_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1016_ = v_v_1007_;
v_isShared_1017_ = v_isSharedCheck_1038_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_code_1014_);
lean_dec(v_v_1007_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1038_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1018_; 
lean_inc(v___y_1012_);
lean_inc_ref(v___y_1011_);
lean_inc(v___y_1010_);
lean_inc_ref(v___y_1009_);
lean_inc(v___y_1008_);
v___x_1018_ = lean_apply_7(v_f_1006_, v_code_1014_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, lean_box(0));
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1029_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1021_ = v___x_1018_;
v_isShared_1022_ = v_isSharedCheck_1029_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1018_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1029_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 0, v_a_1019_);
v___x_1024_ = v___x_1016_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1026_; 
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 0, v___x_1024_);
v___x_1026_ = v___x_1021_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_1024_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
}
else
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
lean_del_object(v___x_1016_);
v_a_1030_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_1018_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_1018_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
}
else
{
lean_object* v___x_1039_; 
lean_dec_ref(v_f_1006_);
v___x_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1039_, 0, v_v_1007_);
return v___x_1039_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg___boxed(lean_object* v_f_1040_, lean_object* v_v_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg(v_f_1040_, v_v_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1042_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0(uint8_t v_pu_1049_, lean_object* v_f_1050_, lean_object* v_v_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg(v_f_1050_, v_v_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___boxed(lean_object* v_pu_1059_, lean_object* v_f_1060_, lean_object* v_v_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
uint8_t v_pu_boxed_1068_; lean_object* v_res_1069_; 
v_pu_boxed_1068_ = lean_unbox(v_pu_1059_);
v_res_1069_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0(v_pu_boxed_1068_, v_f_1060_, v_v_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls(lean_object* v_decl_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_){
_start:
{
lean_object* v_toSignature_1077_; lean_object* v_value_1078_; uint8_t v_recursive_1079_; lean_object* v_inlineAttr_x3f_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1111_; 
v_toSignature_1077_ = lean_ctor_get(v_decl_1071_, 0);
v_value_1078_ = lean_ctor_get(v_decl_1071_, 1);
v_recursive_1079_ = lean_ctor_get_uint8(v_decl_1071_, sizeof(void*)*3);
v_inlineAttr_x3f_1080_ = lean_ctor_get(v_decl_1071_, 2);
v_isSharedCheck_1111_ = !lean_is_exclusive(v_decl_1071_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1082_ = v_decl_1071_;
v_isShared_1083_ = v_isSharedCheck_1111_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_inlineAttr_x3f_1080_);
lean_inc(v_value_1078_);
lean_inc(v_toSignature_1077_);
lean_dec(v_decl_1071_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1111_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1084_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_pullFunDecls___closed__0));
v___x_1085_ = lean_box(0);
v___x_1086_ = lean_st_mk_ref(v___x_1085_);
v___x_1087_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullFunDecls_spec__0___redArg(v___x_1084_, v_value_1078_, v___x_1086_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1102_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1090_ = v___x_1087_;
v_isShared_1091_ = v_isSharedCheck_1102_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1087_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1102_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___x_1092_ = lean_st_ref_get(v___x_1086_);
lean_dec(v___x_1086_);
v___x_1093_ = lean_array_mk(v___x_1092_);
v___x_1094_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_PullFunDecls_attach), 2, 1);
lean_closure_set(v___x_1094_, 0, v___x_1093_);
v___x_1095_ = l_Lean_Compiler_LCNF_DeclValue_mapCode___redArg(v___x_1094_, v_a_1088_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 1, v___x_1095_);
v___x_1097_ = v___x_1082_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_toSignature_1077_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v___x_1095_);
lean_ctor_set(v_reuseFailAlloc_1101_, 2, v_inlineAttr_x3f_1080_);
lean_ctor_set_uint8(v_reuseFailAlloc_1101_, sizeof(void*)*3, v_recursive_1079_);
v___x_1097_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
lean_object* v___x_1099_; 
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 0, v___x_1097_);
v___x_1099_ = v___x_1090_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
lean_dec(v___x_1086_);
lean_del_object(v___x_1082_);
lean_dec(v_inlineAttr_x3f_1080_);
lean_dec_ref(v_toSignature_1077_);
v_a_1103_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1087_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1087_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls___boxed(lean_object* v_decl_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lean_Compiler_LCNF_Decl_pullFunDecls(v_decl_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_);
lean_dec(v_a_1116_);
lean_dec_ref(v_a_1115_);
lean_dec(v_a_1114_);
lean_dec_ref(v_a_1113_);
return v_res_1118_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_pullFunDecls___closed__3(void){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; uint8_t v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1123_ = lean_unsigned_to_nat(0u);
v___x_1124_ = ((lean_object*)(l_Lean_Compiler_LCNF_pullFunDecls___closed__2));
v___x_1125_ = 0;
v___x_1126_ = ((lean_object*)(l_Lean_Compiler_LCNF_pullFunDecls___closed__1));
v___x_1127_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_1126_, v___x_1125_, v___x_1124_, v___x_1123_);
return v___x_1127_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_pullFunDecls(void){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = lean_obj_once(&l_Lean_Compiler_LCNF_pullFunDecls___closed__3, &l_Lean_Compiler_LCNF_pullFunDecls___closed__3_once, _init_l_Lean_Compiler_LCNF_pullFunDecls___closed__3);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1199_; uint8_t v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1199_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_));
v___x_1200_ = 1;
v___x_1201_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_));
v___x_1202_ = l_Lean_registerTraceClass(v___x_1199_, v___x_1200_, v___x_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2____boxed(lean_object* v_a_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_();
return v_res_1204_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_PullFunDecls(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default = _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull_default);
l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull = _init_l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull();
lean_mark_persistent(l_Lean_Compiler_LCNF_PullFunDecls_instInhabitedToPull);
l_Lean_Compiler_LCNF_pullFunDecls = _init_l_Lean_Compiler_LCNF_pullFunDecls();
lean_mark_persistent(l_Lean_Compiler_LCNF_pullFunDecls);
res = l___private_Lean_Compiler_LCNF_PullFunDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullFunDecls_1553090079____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_PullFunDecls(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_PullFunDecls(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PullFunDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_PullFunDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_PullFunDecls(builtin);
}
#ifdef __cplusplus
}
#endif
