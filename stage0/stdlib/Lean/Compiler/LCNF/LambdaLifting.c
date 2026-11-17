// Lean compiler output
// Module: Lean.Compiler.LCNF.LambdaLifting
// Imports: public import Lean.Compiler.LCNF.Closure public import Lean.Compiler.LCNF.MonadScope public import Lean.Compiler.LCNF.Level public import Lean.Compiler.LCNF.AuxDeclCache
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_Code_size(uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___redArg(uint8_t, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCode(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkForallParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_setLevelParams(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Compiler_LCNF_cacheAuxDecl___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_save(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l_Lean_isInstanceReducibleCore(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Decl_inlineable___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_hasInstParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_hasInstParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_shouldLift___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_shouldLift___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_shouldLift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_shouldLift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go_spec__0(size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LambdaLifting_visitFunDecl_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LambdaLifting_visitFunDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_LambdaLifting_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_LambdaLifting_visitCode___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_LambdaLifting_main___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_LambdaLifting_main___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Decl_lambdaLifting___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_lambdaLifting___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_lambdaLifting___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_lambdaLifting___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Decl_lambdaLifting___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_lambdaLifting___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_lambdaLifting___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_lambdaLifting(lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_lambdaLifting___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_lam"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 101, 74, 224, 114, 167, 47, 177)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_lambdaLifting___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_lambdaLifting___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_lambdaLifting___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_lambdaLifting___lam__0___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_lambdaLifting___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_lambdaLifting___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_lambdaLifting___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "lambdaLifting"};
static const lean_object* l_Lean_Compiler_LCNF_lambdaLifting___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_lambdaLifting___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_lambdaLifting___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_lambdaLifting___closed__1_value),LEAN_SCALAR_PTR_LITERAL(158, 207, 174, 138, 100, 9, 104, 199)}};
static const lean_object* l_Lean_Compiler_LCNF_lambdaLifting___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_lambdaLifting___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_lambdaLifting___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_lambdaLifting___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_lambdaLifting___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_lambdaLifting___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_lambdaLifting___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_lambdaLifting = (const lean_object*)&l_Lean_Compiler_LCNF_lambdaLifting___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_elam"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 56, 62, 57, 79, 158, 214, 10)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eagerLambdaLifting___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eagerLambdaLifting___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_eagerLambdaLifting___lam__0___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "eagerLambdaLifting"};
static const lean_object* l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__1_value),LEAN_SCALAR_PTR_LITERAL(122, 243, 150, 143, 215, 86, 241, 229)}};
static const lean_object* l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_eagerLambdaLifting = (const lean_object*)&l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_eagerLambdaLifting___closed__1_value),LEAN_SCALAR_PTR_LITERAL(228, 70, 220, 104, 162, 210, 125, 97)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LambdaLifting"};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 21, 0, 27, 3, 212, 3, 122)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(163, 13, 234, 200, 11, 197, 96, 251)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(238, 32, 36, 94, 50, 116, 19, 243)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(204, 242, 185, 198, 185, 239, 80, 121)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 169, 100, 165, 204, 233, 0, 114)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(228, 11, 57, 42, 15, 159, 79, 187)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(237, 155, 229, 202, 99, 104, 232, 139)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(88, 255, 214, 176, 226, 120, 65, 163)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(114, 193, 88, 177, 192, 62, 195, 60)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(179, 53, 124, 193, 137, 72, 184, 45)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(136, 170, 56, 81, 179, 20, 255, 76)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_lambdaLifting___closed__1_value),LEAN_SCALAR_PTR_LITERAL(96, 54, 226, 25, 136, 9, 133, 35)}};
static const lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0___redArg(lean_object* v_as_1_, size_t v_i_2_, size_t v_stop_3_, lean_object* v___y_4_){
_start:
{
uint8_t v___x_6_; 
v___x_6_ = lean_usize_dec_eq(v_i_2_, v_stop_3_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; lean_object* v_type_8_; lean_object* v___x_9_; 
v___x_7_ = lean_array_uget_borrowed(v_as_1_, v_i_2_);
v_type_8_ = lean_ctor_get(v___x_7_, 2);
lean_inc_ref(v_type_8_);
v___x_9_ = l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(v_type_8_, v___y_4_);
if (lean_obj_tag(v___x_9_) == 0)
{
lean_object* v_a_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_22_; 
v_a_10_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_22_ == 0)
{
v___x_12_ = v___x_9_;
v_isShared_13_ = v_isSharedCheck_22_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_a_10_);
lean_dec(v___x_9_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_22_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
if (lean_obj_tag(v_a_10_) == 0)
{
size_t v___x_14_; size_t v___x_15_; 
lean_del_object(v___x_12_);
v___x_14_ = ((size_t)1ULL);
v___x_15_ = lean_usize_add(v_i_2_, v___x_14_);
v_i_2_ = v___x_15_;
goto _start;
}
else
{
uint8_t v___x_17_; lean_object* v___x_18_; lean_object* v___x_20_; 
lean_dec_ref_known(v_a_10_, 1);
v___x_17_ = 1;
v___x_18_ = lean_box(v___x_17_);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_18_);
v___x_20_ = v___x_12_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v___x_18_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
}
else
{
lean_object* v_a_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_30_; 
v_a_23_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_30_ == 0)
{
v___x_25_ = v___x_9_;
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_a_23_);
lean_dec(v___x_9_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v___x_28_; 
if (v_isShared_26_ == 0)
{
v___x_28_ = v___x_25_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_a_23_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
}
else
{
uint8_t v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_31_ = 0;
v___x_32_ = lean_box(v___x_31_);
v___x_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0___redArg___boxed(lean_object* v_as_34_, lean_object* v_i_35_, lean_object* v_stop_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
size_t v_i_boxed_39_; size_t v_stop_boxed_40_; lean_object* v_res_41_; 
v_i_boxed_39_ = lean_unbox_usize(v_i_35_);
lean_dec(v_i_35_);
v_stop_boxed_40_ = lean_unbox_usize(v_stop_36_);
lean_dec(v_stop_36_);
v_res_41_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0___redArg(v_as_34_, v_i_boxed_39_, v_stop_boxed_40_, v___y_37_);
lean_dec(v___y_37_);
lean_dec_ref(v_as_34_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_hasInstParam(lean_object* v_decl_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_){
_start:
{
lean_object* v_params_48_; lean_object* v___x_49_; lean_object* v___x_50_; uint8_t v___x_51_; 
v_params_48_ = lean_ctor_get(v_decl_42_, 2);
v___x_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = lean_array_get_size(v_params_48_);
v___x_51_ = lean_nat_dec_lt(v___x_49_, v___x_50_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_box(v___x_51_);
v___x_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
else
{
if (v___x_51_ == 0)
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_box(v___x_51_);
v___x_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
return v___x_55_;
}
else
{
size_t v___x_56_; size_t v___x_57_; lean_object* v___x_58_; 
v___x_56_ = ((size_t)0ULL);
v___x_57_ = lean_usize_of_nat(v___x_50_);
v___x_58_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0___redArg(v_params_48_, v___x_56_, v___x_57_, v_a_46_);
return v___x_58_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_hasInstParam___boxed(lean_object* v_decl_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lean_Compiler_LCNF_LambdaLifting_hasInstParam(v_decl_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
lean_dec_ref(v_decl_59_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0(lean_object* v_as_66_, size_t v_i_67_, size_t v_stop_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0___redArg(v_as_66_, v_i_67_, v_stop_68_, v___y_72_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0___boxed(lean_object* v_as_75_, lean_object* v_i_76_, lean_object* v_stop_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
size_t v_i_boxed_83_; size_t v_stop_boxed_84_; lean_object* v_res_85_; 
v_i_boxed_83_ = lean_unbox_usize(v_i_76_);
lean_dec(v_i_76_);
v_stop_boxed_84_ = lean_unbox_usize(v_stop_77_);
lean_dec(v_stop_77_);
v_res_85_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_LambdaLifting_hasInstParam_spec__0(v_as_75_, v_i_boxed_83_, v_stop_boxed_84_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec_ref(v_as_75_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_shouldLift___redArg(lean_object* v_decl_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
lean_object* v_value_93_; uint8_t v_liftInstParamOnly_94_; lean_object* v_minSize_95_; uint8_t v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v_value_93_ = lean_ctor_get(v_decl_86_, 4);
v_liftInstParamOnly_94_ = lean_ctor_get_uint8(v_a_87_, sizeof(void*)*3);
v_minSize_95_ = lean_ctor_get(v_a_87_, 2);
v___x_96_ = 0;
v___x_97_ = l_Lean_Compiler_LCNF_Code_size(v___x_96_, v_value_93_);
v___x_98_ = lean_nat_dec_lt(v___x_97_, v_minSize_95_);
lean_dec(v___x_97_);
if (v___x_98_ == 0)
{
if (v_liftInstParamOnly_94_ == 0)
{
uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = 1;
v___x_100_ = lean_box(v___x_99_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
else
{
lean_object* v___x_102_; 
v___x_102_ = l_Lean_Compiler_LCNF_LambdaLifting_hasInstParam(v_decl_86_, v_a_88_, v_a_89_, v_a_90_, v_a_91_);
return v___x_102_;
}
}
else
{
uint8_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = 0;
v___x_104_ = lean_box(v___x_103_);
v___x_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_shouldLift___redArg___boxed(lean_object* v_decl_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_Compiler_LCNF_LambdaLifting_shouldLift___redArg(v_decl_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_);
lean_dec(v_a_111_);
lean_dec_ref(v_a_110_);
lean_dec(v_a_109_);
lean_dec_ref(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec_ref(v_decl_106_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_shouldLift(lean_object* v_decl_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_Compiler_LCNF_LambdaLifting_shouldLift___redArg(v_decl_114_, v_a_115_, v_a_118_, v_a_119_, v_a_120_, v_a_121_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_shouldLift___boxed(lean_object* v_decl_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Lean_Compiler_LCNF_LambdaLifting_shouldLift(v_decl_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
lean_dec(v_a_127_);
lean_dec(v_a_126_);
lean_dec_ref(v_a_125_);
lean_dec_ref(v_decl_124_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName___redArg(lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v___x_140_; lean_object* v_decls_141_; lean_object* v_nextIdx_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_187_; 
v___x_140_ = lean_st_ref_take(v_a_135_);
v_decls_141_ = lean_ctor_get(v___x_140_, 0);
v_nextIdx_142_ = lean_ctor_get(v___x_140_, 1);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_187_ == 0)
{
v___x_144_ = v___x_140_;
v_isShared_145_ = v_isSharedCheck_187_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_nextIdx_142_);
lean_inc(v_decls_141_);
lean_dec(v___x_140_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_187_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_149_; 
v___x_146_ = lean_unsigned_to_nat(1u);
v___x_147_ = lean_nat_add(v_nextIdx_142_, v___x_146_);
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 1, v___x_147_);
v___x_149_ = v___x_144_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_decls_141_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v___x_147_);
v___x_149_ = v_reuseFailAlloc_186_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
lean_object* v___x_150_; lean_object* v_mainDecl_151_; lean_object* v_toSignature_152_; lean_object* v_suffix_153_; lean_object* v_name_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_150_ = lean_st_ref_put(v_a_135_, v___x_149_);
v_mainDecl_151_ = lean_ctor_get(v_a_134_, 1);
v_toSignature_152_ = lean_ctor_get(v_mainDecl_151_, 0);
v_suffix_153_ = lean_ctor_get(v_a_134_, 0);
v_name_154_ = lean_ctor_get(v_toSignature_152_, 0);
lean_inc(v_suffix_153_);
v___x_155_ = lean_name_append_index_after(v_suffix_153_, v_nextIdx_142_);
lean_inc(v_name_154_);
v___x_156_ = l_Lean_Name_append(v_name_154_, v___x_155_);
v___x_157_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_136_);
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v_a_158_; uint8_t v___x_159_; lean_object* v___x_160_; 
v_a_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_a_158_);
lean_dec_ref_known(v___x_157_, 1);
v___x_159_ = lean_unbox(v_a_158_);
lean_dec(v_a_158_);
lean_inc(v___x_156_);
v___x_160_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v___x_156_, v___x_159_, v_a_137_, v_a_138_);
if (lean_obj_tag(v___x_160_) == 0)
{
lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_169_; 
v_a_161_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_169_ == 0)
{
v___x_163_ = v___x_160_;
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___x_160_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
if (lean_obj_tag(v_a_161_) == 1)
{
lean_dec_ref_known(v_a_161_, 1);
lean_del_object(v___x_163_);
lean_dec(v___x_156_);
goto _start;
}
else
{
lean_object* v___x_167_; 
lean_dec(v_a_161_);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 0, v___x_156_);
v___x_167_ = v___x_163_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_156_);
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
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
lean_dec(v___x_156_);
v_a_170_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_160_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_160_);
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
else
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
lean_dec(v___x_156_);
v_a_178_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_185_ == 0)
{
v___x_180_ = v___x_157_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_157_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_178_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName___redArg___boxed(lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName___redArg(v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
lean_dec(v_a_192_);
lean_dec_ref(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
lean_dec_ref(v_a_188_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName(lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName___redArg(v_a_195_, v_a_196_, v_a_198_, v_a_200_, v_a_201_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName___boxed(lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName(v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_, v_a_209_, v_a_210_);
lean_dec(v_a_210_);
lean_dec_ref(v_a_209_);
lean_dec(v_a_208_);
lean_dec_ref(v_a_207_);
lean_dec(v_a_206_);
lean_dec(v_a_205_);
lean_dec_ref(v_a_204_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl___redArg(lean_object* v_decl_213_, lean_object* v_value_214_, lean_object* v_a_215_){
_start:
{
lean_object* v_fvarId_217_; lean_object* v_binderName_218_; lean_object* v_type_219_; uint8_t v___x_220_; lean_object* v_declNew_221_; lean_object* v___x_222_; lean_object* v_lctx_223_; lean_object* v_nextIdx_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_251_; 
v_fvarId_217_ = lean_ctor_get(v_decl_213_, 0);
v_binderName_218_ = lean_ctor_get(v_decl_213_, 1);
v_type_219_ = lean_ctor_get(v_decl_213_, 3);
v___x_220_ = 0;
lean_inc_ref(v_type_219_);
lean_inc(v_binderName_218_);
lean_inc(v_fvarId_217_);
v_declNew_221_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_declNew_221_, 0, v_fvarId_217_);
lean_ctor_set(v_declNew_221_, 1, v_binderName_218_);
lean_ctor_set(v_declNew_221_, 2, v_type_219_);
lean_ctor_set(v_declNew_221_, 3, v_value_214_);
v___x_222_ = lean_st_ref_take(v_a_215_);
v_lctx_223_ = lean_ctor_get(v___x_222_, 0);
v_nextIdx_224_ = lean_ctor_get(v___x_222_, 1);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_251_ == 0)
{
v___x_226_ = v___x_222_;
v_isShared_227_ = v_isSharedCheck_251_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_nextIdx_224_);
lean_inc(v_lctx_223_);
lean_dec(v___x_222_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_251_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v___x_230_; 
lean_inc_ref(v_declNew_221_);
v___x_228_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_220_, v_lctx_223_, v_declNew_221_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 0, v___x_228_);
v___x_230_ = v___x_226_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v_nextIdx_224_);
v___x_230_ = v_reuseFailAlloc_250_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; 
v___x_231_ = lean_st_ref_put(v_a_215_, v___x_230_);
v___x_232_ = 1;
v___x_233_ = l_Lean_Compiler_LCNF_eraseFunDecl___redArg(v___x_220_, v_decl_213_, v___x_232_, v_a_215_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_240_ == 0)
{
lean_object* v_unused_241_; 
v_unused_241_ = lean_ctor_get(v___x_233_, 0);
lean_dec(v_unused_241_);
v___x_235_ = v___x_233_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_dec(v___x_233_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 0, v_declNew_221_);
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_declNew_221_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
else
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
lean_dec_ref_known(v_declNew_221_, 4);
v_a_242_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v___x_233_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_233_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_a_242_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl___redArg___boxed(lean_object* v_decl_252_, lean_object* v_value_253_, lean_object* v_a_254_, lean_object* v_a_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl___redArg(v_decl_252_, v_value_253_, v_a_254_);
lean_dec(v_a_254_);
lean_dec_ref(v_decl_252_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl(lean_object* v_decl_257_, lean_object* v_value_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl___redArg(v_decl_257_, v_value_258_, v_a_263_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl___boxed(lean_object* v_decl_268_, lean_object* v_value_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl(v_decl_268_, v_value_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_);
lean_dec(v_a_276_);
lean_dec_ref(v_a_275_);
lean_dec(v_a_274_);
lean_dec_ref(v_a_273_);
lean_dec(v_a_272_);
lean_dec(v_a_271_);
lean_dec_ref(v_a_270_);
lean_dec_ref(v_decl_268_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go_spec__0(size_t v_sz_279_, size_t v_i_280_, lean_object* v_bs_281_, uint8_t v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
uint8_t v___x_289_; 
v___x_289_ = lean_usize_dec_lt(v_i_280_, v_sz_279_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; 
v___x_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_290_, 0, v_bs_281_);
return v___x_290_;
}
else
{
uint8_t v___x_291_; lean_object* v_v_292_; lean_object* v___x_293_; lean_object* v_bs_x27_294_; lean_object* v___x_295_; 
v___x_291_ = 0;
v_v_292_ = lean_array_uget(v_bs_281_, v_i_280_);
v___x_293_ = lean_unsigned_to_nat(0u);
v_bs_x27_294_ = lean_array_uset(v_bs_281_, v_i_280_, v___x_293_);
v___x_295_ = l_Lean_Compiler_LCNF_Internalize_internalizeParam(v___x_291_, v_v_292_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; size_t v___x_297_; size_t v___x_298_; lean_object* v___x_299_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
lean_inc(v_a_296_);
lean_dec_ref_known(v___x_295_, 1);
v___x_297_ = ((size_t)1ULL);
v___x_298_ = lean_usize_add(v_i_280_, v___x_297_);
v___x_299_ = lean_array_uset(v_bs_x27_294_, v_i_280_, v_a_296_);
v_i_280_ = v___x_298_;
v_bs_281_ = v___x_299_;
goto _start;
}
else
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
lean_dec_ref(v_bs_x27_294_);
v_a_301_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_295_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_295_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go_spec__0___boxed(lean_object* v_sz_309_, lean_object* v_i_310_, lean_object* v_bs_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_){
_start:
{
size_t v_sz_boxed_319_; size_t v_i_boxed_320_; uint8_t v___y_2272__boxed_321_; lean_object* v_res_322_; 
v_sz_boxed_319_ = lean_unbox_usize(v_sz_309_);
lean_dec(v_sz_309_);
v_i_boxed_320_ = lean_unbox_usize(v_i_310_);
lean_dec(v_i_310_);
v___y_2272__boxed_321_ = lean_unbox(v___y_312_);
v_res_322_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go_spec__0(v_sz_boxed_319_, v_i_boxed_320_, v_bs_311_, v___y_2272__boxed_321_, v___y_313_, v___y_314_, v___y_315_, v___y_316_, v___y_317_);
lean_dec(v___y_317_);
lean_dec_ref(v___y_316_);
lean_dec(v___y_315_);
lean_dec_ref(v___y_314_);
lean_dec(v___y_313_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go(lean_object* v_closure_323_, lean_object* v_decl_324_, lean_object* v_nameNew_325_, uint8_t v_safe_326_, lean_object* v_inlineAttr_x3f_327_, uint8_t v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
uint8_t v___x_335_; size_t v_sz_336_; size_t v___x_337_; lean_object* v___x_338_; 
v___x_335_ = 0;
v_sz_336_ = lean_array_size(v_closure_323_);
v___x_337_ = ((size_t)0ULL);
v___x_338_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go_spec__0(v_sz_336_, v___x_337_, v_closure_323_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v_a_339_; lean_object* v_params_340_; lean_object* v_value_341_; size_t v_sz_342_; lean_object* v___x_343_; 
v_a_339_ = lean_ctor_get(v___x_338_, 0);
lean_inc(v_a_339_);
lean_dec_ref_known(v___x_338_, 1);
v_params_340_ = lean_ctor_get(v_decl_324_, 2);
lean_inc_ref(v_params_340_);
v_value_341_ = lean_ctor_get(v_decl_324_, 4);
lean_inc_ref(v_value_341_);
lean_dec_ref(v_decl_324_);
v_sz_342_ = lean_array_size(v_params_340_);
v___x_343_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go_spec__0(v_sz_342_, v___x_337_, v_params_340_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_343_, 1);
v___x_345_ = l_Array_append___redArg(v_a_339_, v_a_344_);
lean_dec(v_a_344_);
v___x_346_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v___x_335_, v_value_341_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; lean_object* v___x_348_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc_n(v_a_347_, 2);
lean_dec_ref_known(v___x_346_, 1);
v___x_348_ = l_Lean_Compiler_LCNF_Code_inferType(v___x_335_, v_a_347_, v_a_330_, v_a_331_, v_a_332_, v_a_333_);
if (lean_obj_tag(v___x_348_) == 0)
{
lean_object* v_a_349_; lean_object* v___x_350_; 
v_a_349_ = lean_ctor_get(v___x_348_, 0);
lean_inc(v_a_349_);
lean_dec_ref_known(v___x_348_, 1);
lean_inc_ref(v___x_345_);
v___x_350_ = l_Lean_Compiler_LCNF_mkForallParams(v___x_335_, v___x_345_, v_a_349_, v_a_330_, v_a_331_, v_a_332_, v_a_333_);
lean_dec(v_a_349_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_364_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_364_ == 0)
{
v___x_353_ = v___x_350_;
v_isShared_354_ = v_isSharedCheck_364_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___x_350_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_364_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_355_, 0, v_a_347_);
v___x_356_ = lean_box(0);
v___x_357_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_357_, 0, v_nameNew_325_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
lean_ctor_set(v___x_357_, 2, v_a_351_);
lean_ctor_set(v___x_357_, 3, v___x_345_);
lean_ctor_set_uint8(v___x_357_, sizeof(void*)*4, v_safe_326_);
v___x_358_ = 0;
v___x_359_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_359_, 0, v___x_357_);
lean_ctor_set(v___x_359_, 1, v___x_355_);
lean_ctor_set(v___x_359_, 2, v_inlineAttr_x3f_327_);
lean_ctor_set_uint8(v___x_359_, sizeof(void*)*3, v___x_358_);
v___x_360_ = l_Lean_Compiler_LCNF_Decl_setLevelParams(v___x_359_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 0, v___x_360_);
v___x_362_ = v___x_353_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_360_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
else
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
lean_dec(v_a_347_);
lean_dec_ref(v___x_345_);
lean_dec(v_inlineAttr_x3f_327_);
lean_dec(v_nameNew_325_);
v_a_365_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_350_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_350_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
lean_dec(v_a_347_);
lean_dec_ref(v___x_345_);
lean_dec(v_inlineAttr_x3f_327_);
lean_dec(v_nameNew_325_);
v_a_373_ = lean_ctor_get(v___x_348_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_348_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_348_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_348_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_373_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
else
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
lean_dec_ref(v___x_345_);
lean_dec(v_inlineAttr_x3f_327_);
lean_dec(v_nameNew_325_);
v_a_381_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_388_ == 0)
{
v___x_383_ = v___x_346_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_346_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
else
{
lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_396_; 
lean_dec_ref(v_value_341_);
lean_dec(v_a_339_);
lean_dec(v_inlineAttr_x3f_327_);
lean_dec(v_nameNew_325_);
v_a_389_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_396_ == 0)
{
v___x_391_ = v___x_343_;
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_343_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_392_ == 0)
{
v___x_394_ = v___x_391_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_a_389_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
else
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_404_; 
lean_dec(v_inlineAttr_x3f_327_);
lean_dec(v_nameNew_325_);
lean_dec_ref(v_decl_324_);
v_a_397_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_404_ == 0)
{
v___x_399_ = v___x_338_;
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_338_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_a_397_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go___boxed(lean_object* v_closure_405_, lean_object* v_decl_406_, lean_object* v_nameNew_407_, lean_object* v_safe_408_, lean_object* v_inlineAttr_x3f_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
uint8_t v_safe_boxed_417_; uint8_t v_a_boxed_418_; lean_object* v_res_419_; 
v_safe_boxed_417_ = lean_unbox(v_safe_408_);
v_a_boxed_418_ = lean_unbox(v_a_410_);
v_res_419_ = l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go(v_closure_405_, v_decl_406_, v_nameNew_407_, v_safe_boxed_417_, v_inlineAttr_x3f_409_, v_a_boxed_418_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
lean_dec(v_a_415_);
lean_dec_ref(v_a_414_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
lean_dec(v_a_411_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_spec__0(lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
if (lean_obj_tag(v_a_420_) == 0)
{
lean_object* v___x_422_; 
v___x_422_ = l_List_reverse___redArg(v_a_421_);
return v___x_422_;
}
else
{
lean_object* v_head_423_; lean_object* v_tail_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_433_; 
v_head_423_ = lean_ctor_get(v_a_420_, 0);
v_tail_424_ = lean_ctor_get(v_a_420_, 1);
v_isSharedCheck_433_ = !lean_is_exclusive(v_a_420_);
if (v_isSharedCheck_433_ == 0)
{
v___x_426_ = v_a_420_;
v_isShared_427_ = v_isSharedCheck_433_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_tail_424_);
lean_inc(v_head_423_);
lean_dec(v_a_420_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_433_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_428_; lean_object* v___x_430_; 
v___x_428_ = l_Lean_mkLevelParam(v_head_423_);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 1, v_a_421_);
lean_ctor_set(v___x_426_, 0, v___x_428_);
v___x_430_ = v___x_426_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_428_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_a_421_);
v___x_430_ = v_reuseFailAlloc_432_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
v_a_420_ = v_tail_424_;
v_a_421_ = v___x_430_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_spec__1(size_t v_sz_434_, size_t v_i_435_, lean_object* v_bs_436_){
_start:
{
uint8_t v___x_437_; 
v___x_437_ = lean_usize_dec_lt(v_i_435_, v_sz_434_);
if (v___x_437_ == 0)
{
return v_bs_436_;
}
else
{
lean_object* v_v_438_; lean_object* v_fvarId_439_; lean_object* v___x_440_; lean_object* v_bs_x27_441_; lean_object* v___x_442_; size_t v___x_443_; size_t v___x_444_; lean_object* v___x_445_; 
v_v_438_ = lean_array_uget_borrowed(v_bs_436_, v_i_435_);
v_fvarId_439_ = lean_ctor_get(v_v_438_, 0);
lean_inc(v_fvarId_439_);
v___x_440_ = lean_unsigned_to_nat(0u);
v_bs_x27_441_ = lean_array_uset(v_bs_436_, v_i_435_, v___x_440_);
v___x_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_442_, 0, v_fvarId_439_);
v___x_443_ = ((size_t)1ULL);
v___x_444_ = lean_usize_add(v_i_435_, v___x_443_);
v___x_445_ = lean_array_uset(v_bs_x27_441_, v_i_435_, v___x_442_);
v_i_435_ = v___x_444_;
v_bs_436_ = v___x_445_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_spec__1___boxed(lean_object* v_sz_447_, lean_object* v_i_448_, lean_object* v_bs_449_){
_start:
{
size_t v_sz_boxed_450_; size_t v_i_boxed_451_; lean_object* v_res_452_; 
v_sz_boxed_450_ = lean_unbox_usize(v_sz_447_);
lean_dec(v_sz_447_);
v_i_boxed_451_ = lean_unbox_usize(v_i_448_);
lean_dec(v_i_448_);
v_res_452_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_spec__1(v_sz_boxed_450_, v_i_boxed_451_, v_bs_449_);
return v_res_452_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__0(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_453_ = lean_box(0);
v___x_454_ = lean_unsigned_to_nat(16u);
v___x_455_ = lean_mk_array(v___x_454_, v___x_453_);
return v___x_455_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__1(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_456_ = lean_obj_once(&l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__0, &l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__0);
v___x_457_ = lean_unsigned_to_nat(0u);
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v___x_456_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg(lean_object* v_closure_459_, lean_object* v_decl_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
lean_object* v___y_469_; lean_object* v_auxDeclName_470_; lean_object* v___y_471_; lean_object* v___x_477_; 
v___x_477_ = l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDeclName___redArg(v_a_461_, v_a_462_, v_a_463_, v_a_465_, v_a_466_);
if (lean_obj_tag(v___x_477_) == 0)
{
lean_object* v_a_478_; lean_object* v_inlineAttr_x3f_480_; lean_object* v_toSignature_481_; lean_object* v___y_482_; lean_object* v___y_483_; lean_object* v___y_484_; lean_object* v___y_485_; lean_object* v___y_486_; uint8_t v_inheritInlineAttrs_550_; 
v_a_478_ = lean_ctor_get(v___x_477_, 0);
lean_inc(v_a_478_);
lean_dec_ref_known(v___x_477_, 1);
v_inheritInlineAttrs_550_ = lean_ctor_get_uint8(v_a_461_, sizeof(void*)*3 + 1);
if (v_inheritInlineAttrs_550_ == 0)
{
lean_object* v_mainDecl_551_; lean_object* v_toSignature_552_; lean_object* v___x_553_; 
v_mainDecl_551_ = lean_ctor_get(v_a_461_, 1);
v_toSignature_552_ = lean_ctor_get(v_mainDecl_551_, 0);
v___x_553_ = lean_box(0);
v_inlineAttr_x3f_480_ = v___x_553_;
v_toSignature_481_ = v_toSignature_552_;
v___y_482_ = v_a_462_;
v___y_483_ = v_a_463_;
v___y_484_ = v_a_464_;
v___y_485_ = v_a_465_;
v___y_486_ = v_a_466_;
goto v___jp_479_;
}
else
{
lean_object* v_mainDecl_554_; lean_object* v_toSignature_555_; lean_object* v_inlineAttr_x3f_556_; 
v_mainDecl_554_ = lean_ctor_get(v_a_461_, 1);
v_toSignature_555_ = lean_ctor_get(v_mainDecl_554_, 0);
v_inlineAttr_x3f_556_ = lean_ctor_get(v_mainDecl_554_, 2);
v_inlineAttr_x3f_480_ = v_inlineAttr_x3f_556_;
v_toSignature_481_ = v_toSignature_555_;
v___y_482_ = v_a_462_;
v___y_483_ = v_a_463_;
v___y_484_ = v_a_464_;
v___y_485_ = v_a_465_;
v___y_486_ = v_a_466_;
goto v___jp_479_;
}
v___jp_479_:
{
uint8_t v_safe_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; uint8_t v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v_safe_487_ = lean_ctor_get_uint8(v_toSignature_481_, sizeof(void*)*4);
v___x_488_ = 0;
v___x_489_ = lean_unsigned_to_nat(0u);
v___x_490_ = lean_obj_once(&l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__1, &l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___closed__1);
v___x_491_ = 0;
v___x_492_ = lean_st_mk_ref(v___x_490_);
lean_inc(v_inlineAttr_x3f_480_);
lean_inc_ref(v_decl_460_);
lean_inc_ref(v_closure_459_);
v___x_493_ = l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_go(v_closure_459_, v_decl_460_, v_a_478_, v_safe_487_, v_inlineAttr_x3f_480_, v___x_491_, v___x_492_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
if (lean_obj_tag(v___x_493_) == 0)
{
lean_object* v_a_494_; lean_object* v___x_495_; lean_object* v_toSignature_496_; lean_object* v_name_497_; lean_object* v_levelParams_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v_a_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc_n(v_a_494_, 2);
lean_dec_ref_known(v___x_493_, 1);
v___x_495_ = lean_st_ref_get(v___x_492_);
lean_dec(v___x_492_);
lean_dec(v___x_495_);
v_toSignature_496_ = lean_ctor_get(v_a_494_, 0);
v_name_497_ = lean_ctor_get(v_toSignature_496_, 0);
v_levelParams_498_ = lean_ctor_get(v_toSignature_496_, 1);
v___x_499_ = lean_box(0);
lean_inc(v_levelParams_498_);
v___x_500_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_spec__0(v_levelParams_498_, v___x_499_);
v___x_501_ = l_Lean_Compiler_LCNF_cacheAuxDecl___redArg(v___x_488_, v_a_494_, v___y_485_, v___y_486_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
if (lean_obj_tag(v_a_502_) == 0)
{
lean_object* v___x_503_; 
lean_inc(v_name_497_);
lean_inc(v_a_494_);
v___x_503_ = l_Lean_Compiler_LCNF_Decl_save(v___x_488_, v_a_494_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v___x_504_; lean_object* v_decls_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_514_; 
lean_dec_ref_known(v___x_503_, 1);
v___x_504_ = lean_st_ref_take(v___y_482_);
v_decls_505_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_514_ == 0)
{
lean_object* v_unused_515_; 
v_unused_515_ = lean_ctor_get(v___x_504_, 1);
lean_dec(v_unused_515_);
v___x_507_ = v___x_504_;
v_isShared_508_ = v_isSharedCheck_514_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_decls_505_);
lean_dec(v___x_504_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_514_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_509_; lean_object* v___x_511_; 
v___x_509_ = lean_array_push(v_decls_505_, v_a_494_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v___x_489_);
lean_ctor_set(v___x_507_, 0, v___x_509_);
v___x_511_ = v___x_507_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_509_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v___x_489_);
v___x_511_ = v_reuseFailAlloc_513_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
lean_object* v___x_512_; 
v___x_512_ = lean_st_ref_put(v___y_482_, v___x_511_);
v___y_469_ = v___x_500_;
v_auxDeclName_470_ = v_name_497_;
v___y_471_ = v___y_484_;
goto v___jp_468_;
}
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_dec(v___x_500_);
lean_dec(v_name_497_);
lean_dec(v_a_494_);
lean_dec_ref(v_decl_460_);
lean_dec_ref(v_closure_459_);
v_a_516_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_503_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_503_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
else
{
lean_object* v_declName_524_; lean_object* v___x_525_; 
v_declName_524_ = lean_ctor_get(v_a_502_, 0);
lean_inc(v_declName_524_);
lean_dec_ref_known(v_a_502_, 1);
v___x_525_ = l_Lean_Compiler_LCNF_eraseDecl(v___x_488_, v_a_494_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_dec_ref_known(v___x_525_, 1);
v___y_469_ = v___x_500_;
v_auxDeclName_470_ = v_declName_524_;
v___y_471_ = v___y_484_;
goto v___jp_468_;
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_dec(v_declName_524_);
lean_dec(v___x_500_);
lean_dec_ref(v_decl_460_);
lean_dec_ref(v_closure_459_);
v_a_526_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_525_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
else
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
lean_dec(v___x_500_);
lean_dec(v_a_494_);
lean_dec_ref(v_decl_460_);
lean_dec_ref(v_closure_459_);
v_a_534_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_501_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_501_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
lean_dec(v___x_492_);
lean_dec_ref(v_decl_460_);
lean_dec_ref(v_closure_459_);
v_a_542_ = lean_ctor_get(v___x_493_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_493_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_493_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_493_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v_decl_460_);
lean_dec_ref(v_closure_459_);
v_a_557_ = lean_ctor_get(v___x_477_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_477_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_477_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
v___jp_468_:
{
size_t v_sz_472_; size_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v_sz_472_ = lean_array_size(v_closure_459_);
v___x_473_ = ((size_t)0ULL);
v___x_474_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl_spec__1(v_sz_472_, v___x_473_, v_closure_459_);
v___x_475_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_475_, 0, v_auxDeclName_470_);
lean_ctor_set(v___x_475_, 1, v___y_469_);
lean_ctor_set(v___x_475_, 2, v___x_474_);
v___x_476_ = l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl___redArg(v_decl_460_, v___x_475_, v___y_471_);
lean_dec_ref(v_decl_460_);
return v___x_476_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg___boxed(lean_object* v_closure_565_, lean_object* v_decl_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg(v_closure_565_, v_decl_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_);
lean_dec(v_a_572_);
lean_dec_ref(v_a_571_);
lean_dec(v_a_570_);
lean_dec_ref(v_a_569_);
lean_dec(v_a_568_);
lean_dec_ref(v_a_567_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl(lean_object* v_closure_575_, lean_object* v_decl_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg(v_closure_575_, v_decl_576_, v_a_577_, v_a_578_, v_a_580_, v_a_581_, v_a_582_, v_a_583_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___boxed(lean_object* v_closure_586_, lean_object* v_decl_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl(v_closure_586_, v_decl_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_);
lean_dec(v_a_594_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec(v_a_590_);
lean_dec(v_a_589_);
lean_dec_ref(v_a_588_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg(lean_object* v_as_599_, size_t v_sz_600_, size_t v_i_601_, lean_object* v_b_602_){
_start:
{
uint8_t v___x_604_; 
v___x_604_ = lean_usize_dec_lt(v_i_601_, v_sz_600_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; 
v___x_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_605_, 0, v_b_602_);
return v___x_605_;
}
else
{
lean_object* v_snd_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_658_; 
v_snd_606_ = lean_ctor_get(v_b_602_, 1);
v_isSharedCheck_658_ = !lean_is_exclusive(v_b_602_);
if (v_isSharedCheck_658_ == 0)
{
lean_object* v_unused_659_; 
v_unused_659_ = lean_ctor_get(v_b_602_, 0);
lean_dec(v_unused_659_);
v___x_608_ = v_b_602_;
v_isShared_609_ = v_isSharedCheck_658_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_snd_606_);
lean_dec(v_b_602_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_658_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v_array_610_; lean_object* v_start_611_; lean_object* v_stop_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v_array_610_ = lean_ctor_get(v_snd_606_, 0);
v_start_611_ = lean_ctor_get(v_snd_606_, 1);
v_stop_612_ = lean_ctor_get(v_snd_606_, 2);
v___x_613_ = lean_box(0);
v___x_614_ = lean_nat_dec_lt(v_start_611_, v_stop_612_);
if (v___x_614_ == 0)
{
lean_object* v___x_616_; 
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v___x_613_);
v___x_616_ = v___x_608_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_613_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_snd_606_);
v___x_616_ = v_reuseFailAlloc_618_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_617_; 
v___x_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
return v___x_617_;
}
}
else
{
lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_654_; 
lean_inc(v_stop_612_);
lean_inc(v_start_611_);
lean_inc_ref(v_array_610_);
v_isSharedCheck_654_ = !lean_is_exclusive(v_snd_606_);
if (v_isSharedCheck_654_ == 0)
{
lean_object* v_unused_655_; lean_object* v_unused_656_; lean_object* v_unused_657_; 
v_unused_655_ = lean_ctor_get(v_snd_606_, 2);
lean_dec(v_unused_655_);
v_unused_656_ = lean_ctor_get(v_snd_606_, 1);
lean_dec(v_unused_656_);
v_unused_657_ = lean_ctor_get(v_snd_606_, 0);
lean_dec(v_unused_657_);
v___x_620_ = v_snd_606_;
v_isShared_621_ = v_isSharedCheck_654_;
goto v_resetjp_619_;
}
else
{
lean_dec(v_snd_606_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_654_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v_a_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_627_; 
v_a_622_ = lean_array_uget(v_as_599_, v_i_601_);
v___x_623_ = lean_array_fget(v_array_610_, v_start_611_);
v___x_624_ = lean_unsigned_to_nat(1u);
v___x_625_ = lean_nat_add(v_start_611_, v___x_624_);
lean_dec(v_start_611_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 1, v___x_625_);
v___x_627_ = v___x_620_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_array_610_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v___x_625_);
lean_ctor_set(v_reuseFailAlloc_653_, 2, v_stop_612_);
v___x_627_ = v_reuseFailAlloc_653_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
if (lean_obj_tag(v_a_622_) == 1)
{
lean_object* v_fvarId_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_647_; 
v_fvarId_628_ = lean_ctor_get(v_a_622_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v_a_622_);
if (v_isSharedCheck_647_ == 0)
{
v___x_630_ = v_a_622_;
v_isShared_631_ = v_isSharedCheck_647_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_fvarId_628_);
lean_dec(v_a_622_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_647_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v_fvarId_632_; uint8_t v___x_633_; 
v_fvarId_632_ = lean_ctor_get(v___x_623_, 0);
lean_inc(v_fvarId_632_);
lean_dec(v___x_623_);
v___x_633_ = l_Lean_instBEqFVarId_beq(v_fvarId_628_, v_fvarId_632_);
lean_dec(v_fvarId_632_);
lean_dec(v_fvarId_628_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_634_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg___closed__0));
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 1, v___x_627_);
lean_ctor_set(v___x_608_, 0, v___x_634_);
v___x_636_ = v___x_608_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_634_);
lean_ctor_set(v_reuseFailAlloc_640_, 1, v___x_627_);
v___x_636_ = v_reuseFailAlloc_640_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_638_; 
if (v_isShared_631_ == 0)
{
lean_ctor_set_tag(v___x_630_, 0);
lean_ctor_set(v___x_630_, 0, v___x_636_);
v___x_638_ = v___x_630_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
else
{
lean_object* v___x_642_; 
lean_del_object(v___x_630_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 1, v___x_627_);
lean_ctor_set(v___x_608_, 0, v___x_613_);
v___x_642_ = v___x_608_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_613_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v___x_627_);
v___x_642_ = v_reuseFailAlloc_646_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
size_t v___x_643_; size_t v___x_644_; 
v___x_643_ = ((size_t)1ULL);
v___x_644_ = lean_usize_add(v_i_601_, v___x_643_);
v_i_601_ = v___x_644_;
v_b_602_ = v___x_642_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_648_; lean_object* v___x_650_; 
lean_dec(v___x_623_);
lean_dec(v_a_622_);
v___x_648_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg___closed__0));
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 1, v___x_627_);
lean_ctor_set(v___x_608_, 0, v___x_648_);
v___x_650_ = v___x_608_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_648_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v___x_627_);
v___x_650_ = v_reuseFailAlloc_652_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_651_; 
v___x_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
return v___x_651_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg___boxed(lean_object* v_as_660_, lean_object* v_sz_661_, lean_object* v_i_662_, lean_object* v_b_663_, lean_object* v___y_664_){
_start:
{
size_t v_sz_boxed_665_; size_t v_i_boxed_666_; lean_object* v_res_667_; 
v_sz_boxed_665_ = lean_unbox_usize(v_sz_661_);
lean_dec(v_sz_661_);
v_i_boxed_666_ = lean_unbox_usize(v_i_662_);
lean_dec(v_i_662_);
v_res_667_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg(v_as_660_, v_sz_boxed_665_, v_i_boxed_666_, v_b_663_);
lean_dec_ref(v_as_660_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f(lean_object* v_decl_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_){
_start:
{
uint8_t v_allowEtaContraction_685_; 
v_allowEtaContraction_685_ = lean_ctor_get_uint8(v_a_671_, sizeof(void*)*3 + 2);
if (v_allowEtaContraction_685_ == 0)
{
lean_dec_ref(v_decl_670_);
goto v___jp_679_;
}
else
{
lean_object* v_value_686_; 
v_value_686_ = lean_ctor_get(v_decl_670_, 4);
lean_inc_ref(v_value_686_);
if (lean_obj_tag(v_value_686_) == 0)
{
lean_object* v_decl_687_; lean_object* v_value_688_; 
v_decl_687_ = lean_ctor_get(v_value_686_, 0);
lean_inc_ref(v_decl_687_);
v_value_688_ = lean_ctor_get(v_decl_687_, 3);
lean_inc(v_value_688_);
if (lean_obj_tag(v_value_688_) == 3)
{
lean_object* v_k_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_784_; 
v_k_689_ = lean_ctor_get(v_value_686_, 1);
v_isSharedCheck_784_ = !lean_is_exclusive(v_value_686_);
if (v_isSharedCheck_784_ == 0)
{
lean_object* v_unused_785_; 
v_unused_785_ = lean_ctor_get(v_value_686_, 0);
lean_dec(v_unused_785_);
v___x_691_ = v_value_686_;
v_isShared_692_ = v_isSharedCheck_784_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_k_689_);
lean_dec(v_value_686_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_784_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
if (lean_obj_tag(v_k_689_) == 5)
{
lean_object* v_params_693_; lean_object* v_fvarId_694_; lean_object* v_declName_695_; lean_object* v_us_696_; lean_object* v_args_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_783_; 
v_params_693_ = lean_ctor_get(v_decl_670_, 2);
v_fvarId_694_ = lean_ctor_get(v_decl_687_, 0);
lean_inc(v_fvarId_694_);
lean_dec_ref(v_decl_687_);
v_declName_695_ = lean_ctor_get(v_value_688_, 0);
v_us_696_ = lean_ctor_get(v_value_688_, 1);
v_args_697_ = lean_ctor_get(v_value_688_, 2);
v_isSharedCheck_783_ = !lean_is_exclusive(v_value_688_);
if (v_isSharedCheck_783_ == 0)
{
v___x_699_ = v_value_688_;
v_isShared_700_ = v_isSharedCheck_783_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_args_697_);
lean_inc(v_us_696_);
lean_inc(v_declName_695_);
lean_dec(v_value_688_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_783_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v_fvarId_701_; uint8_t v___x_702_; 
v_fvarId_701_ = lean_ctor_get(v_k_689_, 0);
lean_inc(v_fvarId_701_);
lean_dec_ref_known(v_k_689_, 1);
v___x_702_ = l_Lean_instBEqFVarId_beq(v_fvarId_694_, v_fvarId_701_);
lean_dec(v_fvarId_701_);
lean_dec(v_fvarId_694_);
if (v___x_702_ == 0)
{
lean_del_object(v___x_699_);
lean_dec_ref(v_args_697_);
lean_dec(v_us_696_);
lean_dec(v_declName_695_);
lean_del_object(v___x_691_);
lean_dec_ref(v_decl_670_);
goto v___jp_679_;
}
else
{
lean_object* v___x_703_; lean_object* v___x_704_; uint8_t v___x_705_; 
v___x_703_ = lean_array_get_size(v_args_697_);
v___x_704_ = lean_array_get_size(v_params_693_);
v___x_705_ = lean_nat_dec_eq(v___x_703_, v___x_704_);
if (v___x_705_ == 0)
{
lean_del_object(v___x_699_);
lean_dec_ref(v_args_697_);
lean_dec(v_us_696_);
lean_dec(v_declName_695_);
lean_del_object(v___x_691_);
lean_dec_ref(v_decl_670_);
goto v___jp_679_;
}
else
{
lean_object* v___x_706_; 
v___x_706_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_674_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; uint8_t v___x_708_; lean_object* v___x_709_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_707_);
lean_dec_ref_known(v___x_706_, 1);
v___x_708_ = lean_unbox(v_a_707_);
lean_dec(v_a_707_);
lean_inc(v_declName_695_);
v___x_709_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_695_, v___x_708_, v_a_676_, v_a_677_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_a_710_);
lean_dec_ref_known(v___x_709_, 1);
if (lean_obj_tag(v_a_710_) == 1)
{
lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_765_; 
v_isSharedCheck_765_ = !lean_is_exclusive(v_a_710_);
if (v_isSharedCheck_765_ == 0)
{
lean_object* v_unused_766_; 
v_unused_766_ = lean_ctor_get(v_a_710_, 0);
lean_dec(v_unused_766_);
v___x_712_ = v_a_710_;
v_isShared_713_ = v_isSharedCheck_765_;
goto v_resetjp_711_;
}
else
{
lean_dec(v_a_710_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_765_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_714_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_params_693_);
v___x_715_ = l_Array_toSubarray___redArg(v_params_693_, v___x_714_, v___x_704_);
v___x_716_ = lean_box(0);
if (v_isShared_692_ == 0)
{
lean_ctor_set(v___x_691_, 1, v___x_715_);
lean_ctor_set(v___x_691_, 0, v___x_716_);
v___x_718_ = v___x_691_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v___x_715_);
v___x_718_ = v_reuseFailAlloc_764_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
size_t v_sz_719_; size_t v___x_720_; lean_object* v___x_721_; 
v_sz_719_ = lean_array_size(v_args_697_);
v___x_720_ = ((size_t)0ULL);
v___x_721_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg(v_args_697_, v_sz_719_, v___x_720_, v___x_718_);
lean_dec_ref(v_args_697_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_755_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_755_ == 0)
{
v___x_724_ = v___x_721_;
v_isShared_725_ = v_isSharedCheck_755_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_721_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_755_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v_fst_726_; 
v_fst_726_ = lean_ctor_get(v_a_722_, 0);
lean_inc(v_fst_726_);
lean_dec(v_a_722_);
if (lean_obj_tag(v_fst_726_) == 0)
{
lean_object* v___x_727_; lean_object* v___x_729_; 
lean_del_object(v___x_724_);
v___x_727_ = ((lean_object*)(l_Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f___closed__0));
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 2, v___x_727_);
v___x_729_ = v___x_699_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_declName_695_);
lean_ctor_set(v_reuseFailAlloc_750_, 1, v_us_696_);
lean_ctor_set(v_reuseFailAlloc_750_, 2, v___x_727_);
v___x_729_ = v_reuseFailAlloc_750_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
lean_object* v___x_730_; 
v___x_730_ = l_Lean_Compiler_LCNF_LambdaLifting_replaceFunDecl___redArg(v_decl_670_, v___x_729_, v_a_675_);
lean_dec_ref(v_decl_670_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_741_; 
v_a_731_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_741_ == 0)
{
v___x_733_ = v___x_730_;
v_isShared_734_ = v_isSharedCheck_741_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_730_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_741_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v_a_731_);
v___x_736_ = v___x_712_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_740_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
lean_object* v___x_738_; 
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 0, v___x_736_);
v___x_738_ = v___x_733_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v___x_736_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_del_object(v___x_712_);
v_a_742_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_730_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_730_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
else
{
lean_object* v_val_751_; lean_object* v___x_753_; 
lean_del_object(v___x_712_);
lean_del_object(v___x_699_);
lean_dec(v_us_696_);
lean_dec(v_declName_695_);
lean_dec_ref(v_decl_670_);
v_val_751_ = lean_ctor_get(v_fst_726_, 0);
lean_inc(v_val_751_);
lean_dec_ref_known(v_fst_726_, 1);
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 0, v_val_751_);
v___x_753_ = v___x_724_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_val_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
lean_del_object(v___x_712_);
lean_del_object(v___x_699_);
lean_dec(v_us_696_);
lean_dec(v_declName_695_);
lean_dec_ref(v_decl_670_);
v_a_756_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_721_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_721_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
}
}
else
{
lean_dec(v_a_710_);
lean_del_object(v___x_699_);
lean_dec_ref(v_args_697_);
lean_dec(v_us_696_);
lean_dec(v_declName_695_);
lean_del_object(v___x_691_);
lean_dec_ref(v_decl_670_);
goto v___jp_679_;
}
}
else
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
lean_del_object(v___x_699_);
lean_dec_ref(v_args_697_);
lean_dec(v_us_696_);
lean_dec(v_declName_695_);
lean_del_object(v___x_691_);
lean_dec_ref(v_decl_670_);
v_a_767_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_709_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_709_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_del_object(v___x_699_);
lean_dec_ref(v_args_697_);
lean_dec(v_us_696_);
lean_dec(v_declName_695_);
lean_del_object(v___x_691_);
lean_dec_ref(v_decl_670_);
v_a_775_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_706_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_706_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_691_);
lean_dec_ref(v_k_689_);
lean_dec_ref_known(v_value_688_, 3);
lean_dec_ref(v_decl_687_);
lean_dec_ref(v_decl_670_);
goto v___jp_682_;
}
}
}
else
{
lean_dec(v_value_688_);
lean_dec_ref(v_decl_687_);
lean_dec_ref_known(v_value_686_, 2);
lean_dec_ref(v_decl_670_);
goto v___jp_682_;
}
}
else
{
lean_dec_ref(v_value_686_);
lean_dec_ref(v_decl_670_);
goto v___jp_682_;
}
}
v___jp_679_:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = lean_box(0);
v___x_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
return v___x_681_;
}
v___jp_682_:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = lean_box(0);
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
return v___x_684_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f___boxed(lean_object* v_decl_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f(v_decl_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_, v_a_792_, v_a_793_);
lean_dec(v_a_793_);
lean_dec_ref(v_a_792_);
lean_dec(v_a_791_);
lean_dec_ref(v_a_790_);
lean_dec(v_a_789_);
lean_dec(v_a_788_);
lean_dec_ref(v_a_787_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0(lean_object* v_as_796_, size_t v_sz_797_, size_t v_i_798_, lean_object* v_b_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___redArg(v_as_796_, v_sz_797_, v_i_798_, v_b_799_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0___boxed(lean_object* v_as_809_, lean_object* v_sz_810_, lean_object* v_i_811_, lean_object* v_b_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
size_t v_sz_boxed_821_; size_t v_i_boxed_822_; lean_object* v_res_823_; 
v_sz_boxed_821_ = lean_unbox_usize(v_sz_810_);
lean_dec(v_sz_810_);
v_i_boxed_822_ = lean_unbox_usize(v_i_811_);
lean_dec(v_i_811_);
v_res_823_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f_spec__0(v_as_809_, v_sz_boxed_821_, v_i_boxed_822_, v_b_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
lean_dec(v___y_815_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec_ref(v_as_809_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LambdaLifting_visitFunDecl_spec__0(lean_object* v_as_824_, size_t v_i_825_, size_t v_stop_826_, lean_object* v_b_827_){
_start:
{
uint8_t v___x_828_; 
v___x_828_ = lean_usize_dec_eq(v_i_825_, v_stop_826_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; lean_object* v_fvarId_830_; lean_object* v___x_831_; size_t v___x_832_; size_t v___x_833_; 
v___x_829_ = lean_array_uget_borrowed(v_as_824_, v_i_825_);
v_fvarId_830_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_fvarId_830_);
v___x_831_ = l_Lean_FVarIdSet_insert(v_b_827_, v_fvarId_830_);
v___x_832_ = ((size_t)1ULL);
v___x_833_ = lean_usize_add(v_i_825_, v___x_832_);
v_i_825_ = v___x_833_;
v_b_827_ = v___x_831_;
goto _start;
}
else
{
return v_b_827_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LambdaLifting_visitFunDecl_spec__0___boxed(lean_object* v_as_835_, lean_object* v_i_836_, lean_object* v_stop_837_, lean_object* v_b_838_){
_start:
{
size_t v_i_boxed_839_; size_t v_stop_boxed_840_; lean_object* v_res_841_; 
v_i_boxed_839_ = lean_unbox_usize(v_i_836_);
lean_dec(v_i_836_);
v_stop_boxed_840_ = lean_unbox_usize(v_stop_837_);
lean_dec(v_stop_837_);
v_res_841_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LambdaLifting_visitFunDecl_spec__0(v_as_835_, v_i_boxed_839_, v_stop_boxed_840_, v_b_838_);
lean_dec_ref(v_as_835_);
return v_res_841_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2___redArg(lean_object* v_k_842_, lean_object* v_t_843_){
_start:
{
if (lean_obj_tag(v_t_843_) == 0)
{
lean_object* v_k_844_; lean_object* v_l_845_; lean_object* v_r_846_; uint8_t v___x_847_; 
v_k_844_ = lean_ctor_get(v_t_843_, 1);
v_l_845_ = lean_ctor_get(v_t_843_, 3);
v_r_846_ = lean_ctor_get(v_t_843_, 4);
v___x_847_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_842_, v_k_844_);
switch(v___x_847_)
{
case 0:
{
v_t_843_ = v_l_845_;
goto _start;
}
case 1:
{
uint8_t v___x_849_; 
v___x_849_ = 1;
return v___x_849_;
}
default: 
{
v_t_843_ = v_r_846_;
goto _start;
}
}
}
else
{
uint8_t v___x_851_; 
v___x_851_ = 0;
return v___x_851_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2___redArg___boxed(lean_object* v_k_852_, lean_object* v_t_853_){
_start:
{
uint8_t v_res_854_; lean_object* v_r_855_; 
v_res_854_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2___redArg(v_k_852_, v_t_853_);
lean_dec(v_t_853_);
lean_dec(v_k_852_);
v_r_855_ = lean_box(v_res_854_);
return v_r_855_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__0(lean_object* v_a_856_, lean_object* v___y_857_){
_start:
{
uint8_t v___x_858_; 
v___x_858_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2___redArg(v___y_857_, v_a_856_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__0___boxed(lean_object* v_a_859_, lean_object* v___y_860_){
_start:
{
uint8_t v_res_861_; lean_object* v_r_862_; 
v_res_861_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__0(v_a_859_, v___y_860_);
lean_dec(v___y_860_);
lean_dec(v_a_859_);
v_r_862_ = lean_box(v_res_861_);
return v_r_862_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__1(uint8_t v_a_863_, lean_object* v_x_864_){
_start:
{
return v_a_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__1___boxed(lean_object* v_a_865_, lean_object* v_x_866_){
_start:
{
uint8_t v_a_13339__boxed_867_; uint8_t v_res_868_; lean_object* v_r_869_; 
v_a_13339__boxed_867_ = lean_unbox(v_a_865_);
v_res_868_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__1(v_a_13339__boxed_867_, v_x_866_);
lean_dec(v_x_866_);
v_r_869_ = lean_box(v_res_868_);
return v_r_869_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__3(lean_object* v_i_870_, lean_object* v_as_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
lean_object* v___x_880_; uint8_t v___x_881_; 
v___x_880_ = lean_array_get_size(v_as_871_);
v___x_881_ = lean_nat_dec_lt(v_i_870_, v___x_880_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; 
lean_dec(v_i_870_);
v___x_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_882_, 0, v_as_871_);
return v___x_882_;
}
else
{
lean_object* v_a_883_; lean_object* v_a_885_; 
v_a_883_ = lean_array_fget_borrowed(v_as_871_, v_i_870_);
if (lean_obj_tag(v_a_883_) == 0)
{
lean_object* v_params_896_; lean_object* v_code_897_; lean_object* v___x_898_; lean_object* v___x_899_; uint8_t v___x_900_; 
v_params_896_ = lean_ctor_get(v_a_883_, 1);
v_code_897_ = lean_ctor_get(v_a_883_, 2);
v___x_898_ = lean_unsigned_to_nat(0u);
v___x_899_ = lean_array_get_size(v_params_896_);
v___x_900_ = lean_nat_dec_lt(v___x_898_, v___x_899_);
if (v___x_900_ == 0)
{
lean_object* v___x_901_; 
lean_inc_ref(v_code_897_);
v___x_901_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode(v_code_897_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v___x_903_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
lean_inc_ref(v_a_883_);
v___x_903_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_883_, v_a_902_);
v_a_885_ = v___x_903_;
goto v___jp_884_;
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec_ref(v_as_871_);
lean_dec(v_i_870_);
v_a_904_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_901_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_901_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
else
{
size_t v___x_912_; size_t v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_912_ = ((size_t)0ULL);
v___x_913_ = lean_usize_of_nat(v___x_899_);
lean_inc(v___y_874_);
v___x_914_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LambdaLifting_visitFunDecl_spec__0(v_params_896_, v___x_912_, v___x_913_, v___y_874_);
lean_inc_ref(v_code_897_);
v___x_915_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode(v_code_897_, v___y_872_, v___y_873_, v___x_914_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
lean_dec(v___x_914_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v_a_916_; lean_object* v___x_917_; 
v_a_916_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_a_916_);
lean_dec_ref_known(v___x_915_, 1);
lean_inc_ref(v_a_883_);
v___x_917_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_883_, v_a_916_);
v_a_885_ = v___x_917_;
goto v___jp_884_;
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec_ref(v_as_871_);
lean_dec(v_i_870_);
v_a_918_ = lean_ctor_get(v___x_915_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_915_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_915_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_915_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
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
lean_object* v_code_926_; lean_object* v___x_927_; 
v_code_926_ = lean_ctor_get(v_a_883_, 0);
lean_inc_ref(v_code_926_);
v___x_927_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode(v_code_926_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v_a_928_; lean_object* v___x_929_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_928_);
lean_dec_ref_known(v___x_927_, 1);
lean_inc_ref(v_a_883_);
v___x_929_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_883_, v_a_928_);
v_a_885_ = v___x_929_;
goto v___jp_884_;
}
else
{
lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_937_; 
lean_dec_ref(v_as_871_);
lean_dec(v_i_870_);
v_a_930_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_937_ == 0)
{
v___x_932_ = v___x_927_;
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_dec(v___x_927_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_935_; 
if (v_isShared_933_ == 0)
{
v___x_935_ = v___x_932_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_a_930_);
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
v___jp_884_:
{
size_t v___x_886_; size_t v___x_887_; uint8_t v___x_888_; 
v___x_886_ = lean_ptr_addr(v_a_883_);
v___x_887_ = lean_ptr_addr(v_a_885_);
v___x_888_ = lean_usize_dec_eq(v___x_886_, v___x_887_);
if (v___x_888_ == 0)
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_889_ = lean_unsigned_to_nat(1u);
v___x_890_ = lean_nat_add(v_i_870_, v___x_889_);
v___x_891_ = lean_array_fset(v_as_871_, v_i_870_, v_a_885_);
lean_dec(v_i_870_);
v_i_870_ = v___x_890_;
v_as_871_ = v___x_891_;
goto _start;
}
else
{
lean_object* v___x_893_; lean_object* v___x_894_; 
lean_dec_ref(v_a_885_);
v___x_893_ = lean_unsigned_to_nat(1u);
v___x_894_ = lean_nat_add(v_i_870_, v___x_893_);
lean_dec(v_i_870_);
v_i_870_ = v___x_894_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitCode(lean_object* v_code_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_){
_start:
{
switch(lean_obj_tag(v_code_938_))
{
case 0:
{
lean_object* v_decl_947_; lean_object* v_k_948_; lean_object* v_fvarId_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v_decl_947_ = lean_ctor_get(v_code_938_, 0);
v_k_948_ = lean_ctor_get(v_code_938_, 1);
v_fvarId_949_ = lean_ctor_get(v_decl_947_, 0);
lean_inc(v_fvarId_949_);
lean_inc(v_a_941_);
v___x_950_ = l_Lean_FVarIdSet_insert(v_a_941_, v_fvarId_949_);
lean_inc_ref(v_k_948_);
v___x_951_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode(v_k_948_, v_a_939_, v_a_940_, v___x_950_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
lean_dec(v___x_950_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_989_; 
v_a_952_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_989_ == 0)
{
v___x_954_ = v___x_951_;
v_isShared_955_ = v_isSharedCheck_989_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_951_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_989_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
size_t v___x_956_; size_t v___x_957_; uint8_t v___x_958_; 
v___x_956_ = lean_ptr_addr(v_k_948_);
v___x_957_ = lean_ptr_addr(v_a_952_);
v___x_958_ = lean_usize_dec_eq(v___x_956_, v___x_957_);
if (v___x_958_ == 0)
{
lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_968_; 
lean_inc_ref(v_decl_947_);
v_isSharedCheck_968_ = !lean_is_exclusive(v_code_938_);
if (v_isSharedCheck_968_ == 0)
{
lean_object* v_unused_969_; lean_object* v_unused_970_; 
v_unused_969_ = lean_ctor_get(v_code_938_, 1);
lean_dec(v_unused_969_);
v_unused_970_ = lean_ctor_get(v_code_938_, 0);
lean_dec(v_unused_970_);
v___x_960_ = v_code_938_;
v_isShared_961_ = v_isSharedCheck_968_;
goto v_resetjp_959_;
}
else
{
lean_dec(v_code_938_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_968_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 1, v_a_952_);
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_decl_947_);
lean_ctor_set(v_reuseFailAlloc_967_, 1, v_a_952_);
v___x_963_ = v_reuseFailAlloc_967_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_965_; 
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 0, v___x_963_);
v___x_965_ = v___x_954_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
else
{
size_t v___x_971_; size_t v___x_972_; uint8_t v___x_973_; 
v___x_971_ = lean_ptr_addr(v_decl_947_);
v___x_972_ = lean_ptr_addr(v_decl_947_);
v___x_973_ = lean_usize_dec_eq(v___x_971_, v___x_972_);
if (v___x_973_ == 0)
{
lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_983_; 
lean_inc_ref(v_decl_947_);
v_isSharedCheck_983_ = !lean_is_exclusive(v_code_938_);
if (v_isSharedCheck_983_ == 0)
{
lean_object* v_unused_984_; lean_object* v_unused_985_; 
v_unused_984_ = lean_ctor_get(v_code_938_, 1);
lean_dec(v_unused_984_);
v_unused_985_ = lean_ctor_get(v_code_938_, 0);
lean_dec(v_unused_985_);
v___x_975_ = v_code_938_;
v_isShared_976_ = v_isSharedCheck_983_;
goto v_resetjp_974_;
}
else
{
lean_dec(v_code_938_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_983_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 1, v_a_952_);
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_decl_947_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_a_952_);
v___x_978_ = v_reuseFailAlloc_982_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
lean_object* v___x_980_; 
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 0, v___x_978_);
v___x_980_ = v___x_954_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v___x_978_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
else
{
lean_object* v___x_987_; 
lean_dec(v_a_952_);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 0, v_code_938_);
v___x_987_ = v___x_954_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_code_938_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_938_, 2);
return v___x_951_;
}
}
case 1:
{
lean_object* v_decl_990_; lean_object* v_k_991_; lean_object* v_declNew_993_; lean_object* v___y_994_; lean_object* v___y_995_; lean_object* v___y_996_; lean_object* v___y_997_; lean_object* v___y_998_; lean_object* v___y_999_; lean_object* v___y_1000_; lean_object* v___f_1013_; lean_object* v___x_1014_; 
v_decl_990_ = lean_ctor_get(v_code_938_, 0);
v_k_991_ = lean_ctor_get(v_code_938_, 1);
lean_inc(v_a_941_);
v___f_1013_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1013_, 0, v_a_941_);
lean_inc_ref(v_decl_990_);
v___x_1014_ = l_Lean_Compiler_LCNF_LambdaLifting_visitFunDecl(v_decl_990_, v_a_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
if (lean_obj_tag(v___x_1014_) == 0)
{
lean_object* v_a_1015_; lean_object* v___x_1016_; 
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
lean_inc(v_a_1015_);
lean_dec_ref_known(v___x_1014_, 1);
v___x_1016_ = l_Lean_Compiler_LCNF_LambdaLifting_shouldLift___redArg(v_a_1015_, v_a_939_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v_a_1017_; uint8_t v___x_1018_; 
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
lean_inc(v_a_1017_);
lean_dec_ref_known(v___x_1016_, 1);
v___x_1018_ = lean_unbox(v_a_1017_);
if (v___x_1018_ == 0)
{
lean_object* v_fvarId_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
lean_dec(v_a_1017_);
lean_dec_ref(v___f_1013_);
v_fvarId_1019_ = lean_ctor_get(v_a_1015_, 0);
lean_inc(v_fvarId_1019_);
lean_inc(v_a_941_);
v___x_1020_ = l_Lean_FVarIdSet_insert(v_a_941_, v_fvarId_1019_);
lean_inc_ref(v_k_991_);
v___x_1021_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode(v_k_991_, v_a_939_, v_a_940_, v___x_1020_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
lean_dec(v___x_1020_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1059_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1024_ = v___x_1021_;
v_isShared_1025_ = v_isSharedCheck_1059_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1021_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1059_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
size_t v___x_1026_; size_t v___x_1027_; uint8_t v___x_1028_; 
v___x_1026_ = lean_ptr_addr(v_k_991_);
v___x_1027_ = lean_ptr_addr(v_a_1022_);
v___x_1028_ = lean_usize_dec_eq(v___x_1026_, v___x_1027_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1038_; 
v_isSharedCheck_1038_ = !lean_is_exclusive(v_code_938_);
if (v_isSharedCheck_1038_ == 0)
{
lean_object* v_unused_1039_; lean_object* v_unused_1040_; 
v_unused_1039_ = lean_ctor_get(v_code_938_, 1);
lean_dec(v_unused_1039_);
v_unused_1040_ = lean_ctor_get(v_code_938_, 0);
lean_dec(v_unused_1040_);
v___x_1030_ = v_code_938_;
v_isShared_1031_ = v_isSharedCheck_1038_;
goto v_resetjp_1029_;
}
else
{
lean_dec(v_code_938_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1038_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 1, v_a_1022_);
lean_ctor_set(v___x_1030_, 0, v_a_1015_);
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1015_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v_a_1022_);
v___x_1033_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
lean_object* v___x_1035_; 
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 0, v___x_1033_);
v___x_1035_ = v___x_1024_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
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
else
{
size_t v___x_1041_; size_t v___x_1042_; uint8_t v___x_1043_; 
v___x_1041_ = lean_ptr_addr(v_decl_990_);
v___x_1042_ = lean_ptr_addr(v_a_1015_);
v___x_1043_ = lean_usize_dec_eq(v___x_1041_, v___x_1042_);
if (v___x_1043_ == 0)
{
lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1053_; 
v_isSharedCheck_1053_ = !lean_is_exclusive(v_code_938_);
if (v_isSharedCheck_1053_ == 0)
{
lean_object* v_unused_1054_; lean_object* v_unused_1055_; 
v_unused_1054_ = lean_ctor_get(v_code_938_, 1);
lean_dec(v_unused_1054_);
v_unused_1055_ = lean_ctor_get(v_code_938_, 0);
lean_dec(v_unused_1055_);
v___x_1045_ = v_code_938_;
v_isShared_1046_ = v_isSharedCheck_1053_;
goto v_resetjp_1044_;
}
else
{
lean_dec(v_code_938_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1053_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 1, v_a_1022_);
lean_ctor_set(v___x_1045_, 0, v_a_1015_);
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1015_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v_a_1022_);
v___x_1048_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v___x_1050_; 
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 0, v___x_1048_);
v___x_1050_ = v___x_1024_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
else
{
lean_object* v___x_1057_; 
lean_dec(v_a_1022_);
lean_dec(v_a_1015_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 0, v_code_938_);
v___x_1057_ = v___x_1024_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_code_938_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
}
else
{
lean_dec(v_a_1015_);
lean_dec_ref_known(v_code_938_, 2);
return v___x_1021_;
}
}
else
{
lean_object* v___f_1060_; lean_object* v___x_1061_; 
lean_inc_ref(v_k_991_);
lean_dec_ref_known(v_code_938_, 2);
v___f_1060_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LambdaLifting_visitCode___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1060_, 0, v_a_1017_);
lean_inc(v_a_1015_);
v___x_1061_ = l_Lean_Compiler_LCNF_LambdaLifting_etaContractibleDecl_x3f(v_a_1015_, v_a_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v_a_1062_; 
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_a_1062_);
lean_dec_ref_known(v___x_1061_, 1);
if (lean_obj_tag(v_a_1062_) == 1)
{
lean_object* v_val_1063_; 
lean_dec_ref(v___f_1060_);
lean_dec(v_a_1015_);
lean_dec_ref(v___f_1013_);
v_val_1063_ = lean_ctor_get(v_a_1062_, 0);
lean_inc(v_val_1063_);
lean_dec_ref_known(v_a_1062_, 1);
v_declNew_993_ = v_val_1063_;
v___y_994_ = v_a_939_;
v___y_995_ = v_a_940_;
v___y_996_ = v_a_941_;
v___y_997_ = v_a_942_;
v___y_998_ = v_a_943_;
v___y_999_ = v_a_944_;
v___y_1000_ = v_a_945_;
goto v___jp_992_;
}
else
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
lean_dec(v_a_1062_);
lean_inc(v_a_1015_);
v___x_1064_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Closure_collectFunDecl___boxed), 8, 1);
lean_closure_set(v___x_1064_, 0, v_a_1015_);
v___x_1065_ = l_Lean_Compiler_LCNF_Closure_run___redArg(v___x_1064_, v___f_1013_, v___f_1060_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v_snd_1067_; lean_object* v_fst_1068_; lean_object* v___x_1069_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1066_);
lean_dec_ref_known(v___x_1065_, 1);
v_snd_1067_ = lean_ctor_get(v_a_1066_, 1);
lean_inc(v_snd_1067_);
lean_dec(v_a_1066_);
v_fst_1068_ = lean_ctor_get(v_snd_1067_, 0);
lean_inc(v_fst_1068_);
lean_dec(v_snd_1067_);
v___x_1069_ = l_Lean_Compiler_LCNF_LambdaLifting_mkAuxDecl___redArg(v_fst_1068_, v_a_1015_, v_a_939_, v_a_940_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
if (lean_obj_tag(v___x_1069_) == 0)
{
lean_object* v_a_1070_; 
v_a_1070_ = lean_ctor_get(v___x_1069_, 0);
lean_inc(v_a_1070_);
lean_dec_ref_known(v___x_1069_, 1);
v_declNew_993_ = v_a_1070_;
v___y_994_ = v_a_939_;
v___y_995_ = v_a_940_;
v___y_996_ = v_a_941_;
v___y_997_ = v_a_942_;
v___y_998_ = v_a_943_;
v___y_999_ = v_a_944_;
v___y_1000_ = v_a_945_;
goto v___jp_992_;
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
lean_dec_ref(v_k_991_);
v_a_1071_ = lean_ctor_get(v___x_1069_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1069_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1069_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1069_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_a_1071_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
lean_dec(v_a_1015_);
lean_dec_ref(v_k_991_);
v_a_1079_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1065_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1065_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
lean_dec_ref(v___f_1060_);
lean_dec(v_a_1015_);
lean_dec_ref(v___f_1013_);
lean_dec_ref(v_k_991_);
v_a_1087_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1061_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1061_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
lean_dec(v_a_1015_);
lean_dec_ref(v___f_1013_);
lean_dec_ref_known(v_code_938_, 2);
v_a_1095_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1016_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1016_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
lean_dec_ref(v___f_1013_);
lean_dec_ref_known(v_code_938_, 2);
v_a_1103_ = lean_ctor_get(v___x_1014_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1014_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1014_);
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
v___jp_992_:
{
lean_object* v_fvarId_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v_fvarId_1001_ = lean_ctor_get(v_declNew_993_, 0);
lean_inc(v_fvarId_1001_);
lean_inc(v___y_996_);
v___x_1002_ = l_Lean_FVarIdSet_insert(v___y_996_, v_fvarId_1001_);
v___x_1003_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode(v_k_991_, v___y_994_, v___y_995_, v___x_1002_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
lean_dec(v___x_1002_);
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1012_; 
v_a_1004_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1006_ = v___x_1003_;
v_isShared_1007_ = v_isSharedCheck_1012_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_1003_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1012_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1010_; 
v___x_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1008_, 0, v_declNew_993_);
lean_ctor_set(v___x_1008_, 1, v_a_1004_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 0, v___x_1008_);
v___x_1010_ = v___x_1006_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v___x_1008_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
else
{
lean_dec_ref(v_declNew_993_);
return v___x_1003_;
}
}
}
case 2:
{
lean_object* v_decl_1111_; lean_object* v_k_1112_; lean_object* v___x_1113_; 
v_decl_1111_ = lean_ctor_get(v_code_938_, 0);
v_k_1112_ = lean_ctor_get(v_code_938_, 1);
lean_inc_ref(v_decl_1111_);
v___x_1113_ = l_Lean_Compiler_LCNF_LambdaLifting_visitFunDecl(v_decl_1111_, v_a_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v_a_1114_; lean_object* v_fvarId_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc(v_a_1114_);
lean_dec_ref_known(v___x_1113_, 1);
v_fvarId_1115_ = lean_ctor_get(v_a_1114_, 0);
lean_inc(v_fvarId_1115_);
lean_inc(v_a_941_);
v___x_1116_ = l_Lean_FVarIdSet_insert(v_a_941_, v_fvarId_1115_);
lean_inc_ref(v_k_1112_);
v___x_1117_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode(v_k_1112_, v_a_939_, v_a_940_, v___x_1116_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
lean_dec(v___x_1116_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1155_; 
v_a_1118_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1120_ = v___x_1117_;
v_isShared_1121_ = v_isSharedCheck_1155_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1117_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1155_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
size_t v___x_1122_; size_t v___x_1123_; uint8_t v___x_1124_; 
v___x_1122_ = lean_ptr_addr(v_k_1112_);
v___x_1123_ = lean_ptr_addr(v_a_1118_);
v___x_1124_ = lean_usize_dec_eq(v___x_1122_, v___x_1123_);
if (v___x_1124_ == 0)
{
lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1134_; 
v_isSharedCheck_1134_ = !lean_is_exclusive(v_code_938_);
if (v_isSharedCheck_1134_ == 0)
{
lean_object* v_unused_1135_; lean_object* v_unused_1136_; 
v_unused_1135_ = lean_ctor_get(v_code_938_, 1);
lean_dec(v_unused_1135_);
v_unused_1136_ = lean_ctor_get(v_code_938_, 0);
lean_dec(v_unused_1136_);
v___x_1126_ = v_code_938_;
v_isShared_1127_ = v_isSharedCheck_1134_;
goto v_resetjp_1125_;
}
else
{
lean_dec(v_code_938_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1134_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 1, v_a_1118_);
lean_ctor_set(v___x_1126_, 0, v_a_1114_);
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1114_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_a_1118_);
v___x_1129_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
lean_object* v___x_1131_; 
if (v_isShared_1121_ == 0)
{
lean_ctor_set(v___x_1120_, 0, v___x_1129_);
v___x_1131_ = v___x_1120_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
else
{
size_t v___x_1137_; size_t v___x_1138_; uint8_t v___x_1139_; 
v___x_1137_ = lean_ptr_addr(v_decl_1111_);
v___x_1138_ = lean_ptr_addr(v_a_1114_);
v___x_1139_ = lean_usize_dec_eq(v___x_1137_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1149_; 
v_isSharedCheck_1149_ = !lean_is_exclusive(v_code_938_);
if (v_isSharedCheck_1149_ == 0)
{
lean_object* v_unused_1150_; lean_object* v_unused_1151_; 
v_unused_1150_ = lean_ctor_get(v_code_938_, 1);
lean_dec(v_unused_1150_);
v_unused_1151_ = lean_ctor_get(v_code_938_, 0);
lean_dec(v_unused_1151_);
v___x_1141_ = v_code_938_;
v_isShared_1142_ = v_isSharedCheck_1149_;
goto v_resetjp_1140_;
}
else
{
lean_dec(v_code_938_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1149_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1144_; 
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 1, v_a_1118_);
lean_ctor_set(v___x_1141_, 0, v_a_1114_);
v___x_1144_ = v___x_1141_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1114_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v_a_1118_);
v___x_1144_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
lean_object* v___x_1146_; 
if (v_isShared_1121_ == 0)
{
lean_ctor_set(v___x_1120_, 0, v___x_1144_);
v___x_1146_ = v___x_1120_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v___x_1144_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
}
else
{
lean_object* v___x_1153_; 
lean_dec(v_a_1118_);
lean_dec(v_a_1114_);
if (v_isShared_1121_ == 0)
{
lean_ctor_set(v___x_1120_, 0, v_code_938_);
v___x_1153_ = v___x_1120_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_code_938_);
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
}
else
{
lean_dec(v_a_1114_);
lean_dec_ref_known(v_code_938_, 2);
return v___x_1117_;
}
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
lean_dec_ref_known(v_code_938_, 2);
v_a_1156_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1113_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1113_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
case 4:
{
lean_object* v_cases_1164_; lean_object* v_typeName_1165_; lean_object* v_resultType_1166_; lean_object* v_discr_1167_; lean_object* v_alts_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1207_; 
v_cases_1164_ = lean_ctor_get(v_code_938_, 0);
lean_inc_ref(v_cases_1164_);
v_typeName_1165_ = lean_ctor_get(v_cases_1164_, 0);
v_resultType_1166_ = lean_ctor_get(v_cases_1164_, 1);
v_discr_1167_ = lean_ctor_get(v_cases_1164_, 2);
v_alts_1168_ = lean_ctor_get(v_cases_1164_, 3);
v_isSharedCheck_1207_ = !lean_is_exclusive(v_cases_1164_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1170_ = v_cases_1164_;
v_isShared_1171_ = v_isSharedCheck_1207_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_alts_1168_);
lean_inc(v_discr_1167_);
lean_inc(v_resultType_1166_);
lean_inc(v_typeName_1165_);
lean_dec(v_cases_1164_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1207_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_1168_);
v___x_1173_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__3(v___x_1172_, v_alts_1168_, v_a_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1198_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1176_ = v___x_1173_;
v_isShared_1177_ = v_isSharedCheck_1198_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1173_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1198_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
size_t v___x_1178_; size_t v___x_1179_; uint8_t v___x_1180_; 
v___x_1178_ = lean_ptr_addr(v_alts_1168_);
lean_dec_ref(v_alts_1168_);
v___x_1179_ = lean_ptr_addr(v_a_1174_);
v___x_1180_ = lean_usize_dec_eq(v___x_1178_, v___x_1179_);
if (v___x_1180_ == 0)
{
lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1193_; 
v_isSharedCheck_1193_ = !lean_is_exclusive(v_code_938_);
if (v_isSharedCheck_1193_ == 0)
{
lean_object* v_unused_1194_; 
v_unused_1194_ = lean_ctor_get(v_code_938_, 0);
lean_dec(v_unused_1194_);
v___x_1182_ = v_code_938_;
v_isShared_1183_ = v_isSharedCheck_1193_;
goto v_resetjp_1181_;
}
else
{
lean_dec(v_code_938_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1193_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 3, v_a_1174_);
v___x_1185_ = v___x_1170_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_typeName_1165_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v_resultType_1166_);
lean_ctor_set(v_reuseFailAlloc_1192_, 2, v_discr_1167_);
lean_ctor_set(v_reuseFailAlloc_1192_, 3, v_a_1174_);
v___x_1185_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
lean_object* v___x_1187_; 
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___x_1185_);
v___x_1187_ = v___x_1182_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1189_; 
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 0, v___x_1187_);
v___x_1189_ = v___x_1176_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v___x_1187_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
}
else
{
lean_object* v___x_1196_; 
lean_dec(v_a_1174_);
lean_del_object(v___x_1170_);
lean_dec(v_discr_1167_);
lean_dec_ref(v_resultType_1166_);
lean_dec(v_typeName_1165_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 0, v_code_938_);
v___x_1196_ = v___x_1176_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_code_938_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
}
else
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
lean_del_object(v___x_1170_);
lean_dec_ref(v_alts_1168_);
lean_dec(v_discr_1167_);
lean_dec_ref(v_resultType_1166_);
lean_dec(v_typeName_1165_);
lean_dec_ref_known(v_code_938_, 1);
v_a_1199_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1173_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1173_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
}
}
default: 
{
lean_object* v___x_1208_; 
v___x_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1208_, 0, v_code_938_);
return v___x_1208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitFunDecl(lean_object* v_funDecl_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_){
_start:
{
lean_object* v_params_1218_; lean_object* v_type_1219_; lean_object* v_value_1220_; uint8_t v___x_1221_; lean_object* v___y_1223_; lean_object* v___x_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; 
v_params_1218_ = lean_ctor_get(v_funDecl_1209_, 2);
lean_inc_ref(v_params_1218_);
v_type_1219_ = lean_ctor_get(v_funDecl_1209_, 3);
lean_inc_ref(v_type_1219_);
v_value_1220_ = lean_ctor_get(v_funDecl_1209_, 4);
v___x_1221_ = 0;
v___x_1234_ = lean_unsigned_to_nat(0u);
v___x_1235_ = lean_array_get_size(v_params_1218_);
v___x_1236_ = lean_nat_dec_lt(v___x_1234_, v___x_1235_);
if (v___x_1236_ == 0)
{
lean_object* v___x_1237_; 
lean_inc_ref(v_value_1220_);
v___x_1237_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode(v_value_1220_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_);
v___y_1223_ = v___x_1237_;
goto v___jp_1222_;
}
else
{
size_t v___x_1238_; size_t v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1238_ = ((size_t)0ULL);
v___x_1239_ = lean_usize_of_nat(v___x_1235_);
lean_inc(v_a_1212_);
v___x_1240_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LambdaLifting_visitFunDecl_spec__0(v_params_1218_, v___x_1238_, v___x_1239_, v_a_1212_);
lean_inc_ref(v_value_1220_);
v___x_1241_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode(v_value_1220_, v_a_1210_, v_a_1211_, v___x_1240_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_);
lean_dec(v___x_1240_);
v___y_1223_ = v___x_1241_;
goto v___jp_1222_;
}
v___jp_1222_:
{
if (lean_obj_tag(v___y_1223_) == 0)
{
lean_object* v_a_1224_; lean_object* v___x_1225_; 
v_a_1224_ = lean_ctor_get(v___y_1223_, 0);
lean_inc(v_a_1224_);
lean_dec_ref_known(v___y_1223_, 1);
v___x_1225_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1221_, v_funDecl_1209_, v_type_1219_, v_params_1218_, v_a_1224_, v_a_1214_);
return v___x_1225_;
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
lean_dec_ref(v_type_1219_);
lean_dec_ref(v_params_1218_);
lean_dec_ref(v_funDecl_1209_);
v_a_1226_ = lean_ctor_get(v___y_1223_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___y_1223_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___y_1223_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___y_1223_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitFunDecl___boxed(lean_object* v_funDecl_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Lean_Compiler_LCNF_LambdaLifting_visitFunDecl(v_funDecl_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
lean_dec(v_a_1249_);
lean_dec_ref(v_a_1248_);
lean_dec(v_a_1247_);
lean_dec_ref(v_a_1246_);
lean_dec(v_a_1245_);
lean_dec(v_a_1244_);
lean_dec_ref(v_a_1243_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__3___boxed(lean_object* v_i_1252_, lean_object* v_as_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__3(v_i_1252_, v_as_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
lean_dec(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_visitCode___boxed(lean_object* v_code_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_Lean_Compiler_LCNF_LambdaLifting_visitCode(v_code_1263_, v_a_1264_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
lean_dec(v_a_1270_);
lean_dec_ref(v_a_1269_);
lean_dec(v_a_1268_);
lean_dec_ref(v_a_1267_);
lean_dec(v_a_1266_);
lean_dec(v_a_1265_);
lean_dec_ref(v_a_1264_);
return v_res_1272_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2(lean_object* v_00_u03b2_1273_, lean_object* v_k_1274_, lean_object* v_t_1275_){
_start:
{
uint8_t v___x_1276_; 
v___x_1276_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2___redArg(v_k_1274_, v_t_1275_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2___boxed(lean_object* v_00_u03b2_1277_, lean_object* v_k_1278_, lean_object* v_t_1279_){
_start:
{
uint8_t v_res_1280_; lean_object* v_r_1281_; 
v_res_1280_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_LambdaLifting_visitCode_spec__2(v_00_u03b2_1277_, v_k_1278_, v_t_1279_);
lean_dec(v_t_1279_);
lean_dec(v_k_1278_);
v_r_1281_ = lean_box(v_res_1280_);
return v_r_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0___redArg(lean_object* v_f_1282_, lean_object* v_v_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
if (lean_obj_tag(v_v_1283_) == 0)
{
lean_object* v_code_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1316_; 
v_code_1292_ = lean_ctor_get(v_v_1283_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v_v_1283_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1294_ = v_v_1283_;
v_isShared_1295_ = v_isSharedCheck_1316_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_code_1292_);
lean_dec(v_v_1283_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1316_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1296_; 
lean_inc(v___y_1290_);
lean_inc_ref(v___y_1289_);
lean_inc(v___y_1288_);
lean_inc_ref(v___y_1287_);
lean_inc(v___y_1286_);
lean_inc(v___y_1285_);
lean_inc_ref(v___y_1284_);
v___x_1296_ = lean_apply_9(v_f_1282_, v_code_1292_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, lean_box(0));
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1307_; 
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1299_ = v___x_1296_;
v_isShared_1300_ = v_isSharedCheck_1307_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1296_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1307_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 0, v_a_1297_);
v___x_1302_ = v___x_1294_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_a_1297_);
v___x_1302_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
lean_object* v___x_1304_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 0, v___x_1302_);
v___x_1304_ = v___x_1299_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v___x_1302_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
}
}
else
{
lean_object* v_a_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1315_; 
lean_del_object(v___x_1294_);
v_a_1308_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1315_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1310_ = v___x_1296_;
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_a_1308_);
lean_dec(v___x_1296_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v___x_1313_; 
if (v_isShared_1311_ == 0)
{
v___x_1313_ = v___x_1310_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_a_1308_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
}
}
else
{
lean_object* v___x_1317_; 
lean_dec_ref(v_f_1282_);
v___x_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1317_, 0, v_v_1283_);
return v___x_1317_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0___redArg___boxed(lean_object* v_f_1318_, lean_object* v_v_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0___redArg(v_f_1318_, v_v_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec(v___y_1321_);
lean_dec_ref(v___y_1320_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0(uint8_t v_pu_1329_, lean_object* v_f_1330_, lean_object* v_v_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0___redArg(v_f_1330_, v_v_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0___boxed(lean_object* v_pu_1341_, lean_object* v_f_1342_, lean_object* v_v_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
uint8_t v_pu_boxed_1352_; lean_object* v_res_1353_; 
v_pu_boxed_1352_ = lean_unbox(v_pu_1341_);
v_res_1353_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0(v_pu_boxed_1352_, v_f_1342_, v_v_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec_ref(v___y_1347_);
lean_dec(v___y_1346_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_main(lean_object* v_decl_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_){
_start:
{
lean_object* v_toSignature_1364_; lean_object* v_value_1365_; uint8_t v_recursive_1366_; lean_object* v_inlineAttr_x3f_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1402_; 
v_toSignature_1364_ = lean_ctor_get(v_decl_1355_, 0);
v_value_1365_ = lean_ctor_get(v_decl_1355_, 1);
v_recursive_1366_ = lean_ctor_get_uint8(v_decl_1355_, sizeof(void*)*3);
v_inlineAttr_x3f_1367_ = lean_ctor_get(v_decl_1355_, 2);
v_isSharedCheck_1402_ = !lean_is_exclusive(v_decl_1355_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1369_ = v_decl_1355_;
v_isShared_1370_ = v_isSharedCheck_1402_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_inlineAttr_x3f_1367_);
lean_inc(v_value_1365_);
lean_inc(v_toSignature_1364_);
lean_dec(v_decl_1355_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1402_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___y_1372_; lean_object* v_params_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; uint8_t v___x_1396_; 
v_params_1392_ = lean_ctor_get(v_toSignature_1364_, 3);
v___x_1393_ = ((lean_object*)(l_Lean_Compiler_LCNF_LambdaLifting_main___closed__0));
v___x_1394_ = lean_unsigned_to_nat(0u);
v___x_1395_ = lean_array_get_size(v_params_1392_);
v___x_1396_ = lean_nat_dec_lt(v___x_1394_, v___x_1395_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1397_; 
v___x_1397_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0___redArg(v___x_1393_, v_value_1365_, v_a_1356_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_, v_a_1362_);
v___y_1372_ = v___x_1397_;
goto v___jp_1371_;
}
else
{
size_t v___x_1398_; size_t v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1398_ = ((size_t)0ULL);
v___x_1399_ = lean_usize_of_nat(v___x_1395_);
lean_inc(v_a_1358_);
v___x_1400_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LambdaLifting_visitFunDecl_spec__0(v_params_1392_, v___x_1398_, v___x_1399_, v_a_1358_);
v___x_1401_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_LambdaLifting_main_spec__0___redArg(v___x_1393_, v_value_1365_, v_a_1356_, v_a_1357_, v___x_1400_, v_a_1359_, v_a_1360_, v_a_1361_, v_a_1362_);
lean_dec(v___x_1400_);
v___y_1372_ = v___x_1401_;
goto v___jp_1371_;
}
v___jp_1371_:
{
if (lean_obj_tag(v___y_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1383_; 
v_a_1373_ = lean_ctor_get(v___y_1372_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___y_1372_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1375_ = v___y_1372_;
v_isShared_1376_ = v_isSharedCheck_1383_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___y_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1383_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 1, v_a_1373_);
v___x_1378_ = v___x_1369_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_toSignature_1364_);
lean_ctor_set(v_reuseFailAlloc_1382_, 1, v_a_1373_);
lean_ctor_set(v_reuseFailAlloc_1382_, 2, v_inlineAttr_x3f_1367_);
lean_ctor_set_uint8(v_reuseFailAlloc_1382_, sizeof(void*)*3, v_recursive_1366_);
v___x_1378_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
lean_object* v___x_1380_; 
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1378_);
v___x_1380_ = v___x_1375_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v___x_1378_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
lean_del_object(v___x_1369_);
lean_dec(v_inlineAttr_x3f_1367_);
lean_dec_ref(v_toSignature_1364_);
v_a_1384_ = lean_ctor_get(v___y_1372_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___y_1372_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___y_1372_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___y_1372_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LambdaLifting_main___boxed(lean_object* v_decl_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l_Lean_Compiler_LCNF_LambdaLifting_main(v_decl_1403_, v_a_1404_, v_a_1405_, v_a_1406_, v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_);
lean_dec(v_a_1410_);
lean_dec_ref(v_a_1409_);
lean_dec(v_a_1408_);
lean_dec_ref(v_a_1407_);
lean_dec(v_a_1406_);
lean_dec(v_a_1405_);
lean_dec_ref(v_a_1404_);
return v_res_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_lambdaLifting(lean_object* v_decl_1418_, uint8_t v_liftInstParamOnly_1419_, uint8_t v_allowEtaContraction_1420_, lean_object* v_suffix_1421_, uint8_t v_inheritInlineAttrs_1422_, lean_object* v_minSize_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_){
_start:
{
lean_object* v___x_1429_; lean_object* v_ctx_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1429_ = lean_box(1);
lean_inc_ref(v_decl_1418_);
v_ctx_1430_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_ctx_1430_, 0, v_suffix_1421_);
lean_ctor_set(v_ctx_1430_, 1, v_decl_1418_);
lean_ctor_set(v_ctx_1430_, 2, v_minSize_1423_);
lean_ctor_set_uint8(v_ctx_1430_, sizeof(void*)*3, v_liftInstParamOnly_1419_);
lean_ctor_set_uint8(v_ctx_1430_, sizeof(void*)*3 + 1, v_inheritInlineAttrs_1422_);
lean_ctor_set_uint8(v_ctx_1430_, sizeof(void*)*3 + 2, v_allowEtaContraction_1420_);
v___x_1431_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_lambdaLifting___closed__1));
v___x_1432_ = lean_st_mk_ref(v___x_1431_);
v___x_1433_ = l_Lean_Compiler_LCNF_LambdaLifting_main(v_decl_1418_, v_ctx_1430_, v___x_1432_, v___x_1429_, v_a_1424_, v_a_1425_, v_a_1426_, v_a_1427_);
lean_dec_ref_known(v_ctx_1430_, 3);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1444_; 
v_a_1434_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1436_ = v___x_1433_;
v_isShared_1437_ = v_isSharedCheck_1444_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1433_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1444_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1438_; lean_object* v_decls_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
v___x_1438_ = lean_st_ref_get(v___x_1432_);
lean_dec(v___x_1432_);
v_decls_1439_ = lean_ctor_get(v___x_1438_, 0);
lean_inc_ref(v_decls_1439_);
lean_dec(v___x_1438_);
v___x_1440_ = lean_array_push(v_decls_1439_, v_a_1434_);
if (v_isShared_1437_ == 0)
{
lean_ctor_set(v___x_1436_, 0, v___x_1440_);
v___x_1442_ = v___x_1436_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1440_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
else
{
lean_object* v_a_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1452_; 
lean_dec(v___x_1432_);
v_a_1445_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1447_ = v___x_1433_;
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_a_1445_);
lean_dec(v___x_1433_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1450_; 
if (v_isShared_1448_ == 0)
{
v___x_1450_ = v___x_1447_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_a_1445_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_lambdaLifting___boxed(lean_object* v_decl_1453_, lean_object* v_liftInstParamOnly_1454_, lean_object* v_allowEtaContraction_1455_, lean_object* v_suffix_1456_, lean_object* v_inheritInlineAttrs_1457_, lean_object* v_minSize_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_){
_start:
{
uint8_t v_liftInstParamOnly_boxed_1464_; uint8_t v_allowEtaContraction_boxed_1465_; uint8_t v_inheritInlineAttrs_boxed_1466_; lean_object* v_res_1467_; 
v_liftInstParamOnly_boxed_1464_ = lean_unbox(v_liftInstParamOnly_1454_);
v_allowEtaContraction_boxed_1465_ = lean_unbox(v_allowEtaContraction_1455_);
v_inheritInlineAttrs_boxed_1466_ = lean_unbox(v_inheritInlineAttrs_1457_);
v_res_1467_ = l_Lean_Compiler_LCNF_Decl_lambdaLifting(v_decl_1453_, v_liftInstParamOnly_boxed_1464_, v_allowEtaContraction_boxed_1465_, v_suffix_1456_, v_inheritInlineAttrs_boxed_1466_, v_minSize_1458_, v_a_1459_, v_a_1460_, v_a_1461_, v_a_1462_);
lean_dec(v_a_1462_);
lean_dec_ref(v_a_1461_);
lean_dec(v_a_1460_);
lean_dec_ref(v_a_1459_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0(lean_object* v_as_1471_, size_t v_i_1472_, size_t v_stop_1473_, lean_object* v_b_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
uint8_t v___x_1480_; 
v___x_1480_ = lean_usize_dec_eq(v_i_1472_, v_stop_1473_);
if (v___x_1480_ == 0)
{
lean_object* v___x_1481_; lean_object* v___x_1482_; uint8_t v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1481_ = lean_unsigned_to_nat(0u);
v___x_1482_ = lean_array_uget_borrowed(v_as_1471_, v_i_1472_);
v___x_1483_ = 1;
v___x_1484_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0___closed__1));
lean_inc(v___x_1482_);
v___x_1485_ = l_Lean_Compiler_LCNF_Decl_lambdaLifting(v___x_1482_, v___x_1480_, v___x_1483_, v___x_1484_, v___x_1480_, v___x_1481_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v_a_1486_; lean_object* v___x_1487_; size_t v___x_1488_; size_t v___x_1489_; 
v_a_1486_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_a_1486_);
lean_dec_ref_known(v___x_1485_, 1);
v___x_1487_ = l_Array_append___redArg(v_b_1474_, v_a_1486_);
lean_dec(v_a_1486_);
v___x_1488_ = ((size_t)1ULL);
v___x_1489_ = lean_usize_add(v_i_1472_, v___x_1488_);
v_i_1472_ = v___x_1489_;
v_b_1474_ = v___x_1487_;
goto _start;
}
else
{
lean_dec_ref(v_b_1474_);
return v___x_1485_;
}
}
else
{
lean_object* v___x_1491_; 
v___x_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1491_, 0, v_b_1474_);
return v___x_1491_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0___boxed(lean_object* v_as_1492_, lean_object* v_i_1493_, lean_object* v_stop_1494_, lean_object* v_b_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
size_t v_i_boxed_1501_; size_t v_stop_boxed_1502_; lean_object* v_res_1503_; 
v_i_boxed_1501_ = lean_unbox_usize(v_i_1493_);
lean_dec(v_i_1493_);
v_stop_boxed_1502_ = lean_unbox_usize(v_stop_1494_);
lean_dec(v_stop_1494_);
v_res_1503_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0(v_as_1492_, v_i_boxed_1501_, v_stop_boxed_1502_, v_b_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec_ref(v_as_1492_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_lambdaLifting___lam__0(lean_object* v___x_1504_, lean_object* v_decls_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_){
_start:
{
lean_object* v___x_1511_; lean_object* v___x_1512_; uint8_t v___x_1513_; 
v___x_1511_ = lean_mk_empty_array_with_capacity(v___x_1504_);
v___x_1512_ = lean_array_get_size(v_decls_1505_);
v___x_1513_ = lean_nat_dec_lt(v___x_1504_, v___x_1512_);
if (v___x_1513_ == 0)
{
lean_object* v___x_1514_; 
v___x_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1511_);
return v___x_1514_;
}
else
{
size_t v___x_1515_; size_t v___x_1516_; lean_object* v___x_1517_; 
v___x_1515_ = ((size_t)0ULL);
v___x_1516_ = lean_usize_of_nat(v___x_1512_);
v___x_1517_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_lambdaLifting_spec__0(v_decls_1505_, v___x_1515_, v___x_1516_, v___x_1511_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
return v___x_1517_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_lambdaLifting___lam__0___boxed(lean_object* v___x_1518_, lean_object* v_decls_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l_Lean_Compiler_LCNF_lambdaLifting___lam__0(v___x_1518_, v_decls_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec_ref(v_decls_1519_);
lean_dec(v___x_1518_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0___redArg(lean_object* v_declName_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v___x_1541_; lean_object* v_env_1542_; uint8_t v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1541_ = lean_st_ref_get(v___y_1539_);
v_env_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc_ref(v_env_1542_);
lean_dec(v___x_1541_);
v___x_1543_ = l_Lean_isInstanceReducibleCore(v_env_1542_, v_declName_1538_);
v___x_1544_ = lean_box(v___x_1543_);
v___x_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1544_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0___redArg___boxed(lean_object* v_declName_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0___redArg(v_declName_1546_, v___y_1547_);
lean_dec(v___y_1547_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0(lean_object* v_declName_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v___x_1556_; 
v___x_1556_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0___redArg(v_declName_1550_, v___y_1554_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0___boxed(lean_object* v_declName_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0(v_declName_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1(lean_object* v_as_1567_, size_t v_i_1568_, size_t v_stop_1569_, lean_object* v_b_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_){
_start:
{
lean_object* v_a_1577_; uint8_t v___x_1581_; 
v___x_1581_ = lean_usize_dec_eq(v_i_1568_, v_stop_1569_);
if (v___x_1581_ == 0)
{
lean_object* v___x_1582_; lean_object* v_toSignature_1583_; lean_object* v_name_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1582_ = lean_array_uget_borrowed(v_as_1567_, v_i_1568_);
v_toSignature_1583_ = lean_ctor_get(v___x_1582_, 0);
v_name_1584_ = lean_ctor_get(v_toSignature_1583_, 0);
v___x_1585_ = lean_unsigned_to_nat(0u);
lean_inc(v_name_1584_);
v___x_1586_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__0___redArg(v_name_1584_, v___y_1574_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; uint8_t v___x_1590_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
lean_inc(v_a_1587_);
lean_dec_ref_known(v___x_1586_, 1);
v___x_1590_ = l_Lean_Compiler_LCNF_Decl_inlineable___redArg(v___x_1582_);
if (v___x_1590_ == 0)
{
uint8_t v___x_1591_; 
v___x_1591_ = lean_unbox(v_a_1587_);
lean_dec(v_a_1587_);
if (v___x_1591_ == 0)
{
uint8_t v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1592_ = 1;
v___x_1593_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1___closed__1));
lean_inc(v___x_1582_);
v___x_1594_ = l_Lean_Compiler_LCNF_Decl_lambdaLifting(v___x_1582_, v___x_1592_, v___x_1581_, v___x_1593_, v___x_1581_, v___x_1585_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v_a_1595_; lean_object* v___x_1596_; 
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v___x_1594_, 1);
v___x_1596_ = l_Array_append___redArg(v_b_1570_, v_a_1595_);
lean_dec(v_a_1595_);
v_a_1577_ = v___x_1596_;
goto v___jp_1576_;
}
else
{
lean_dec_ref(v_b_1570_);
return v___x_1594_;
}
}
else
{
goto v___jp_1588_;
}
}
else
{
lean_dec(v_a_1587_);
goto v___jp_1588_;
}
v___jp_1588_:
{
lean_object* v___x_1589_; 
lean_inc(v___x_1582_);
v___x_1589_ = lean_array_push(v_b_1570_, v___x_1582_);
v_a_1577_ = v___x_1589_;
goto v___jp_1576_;
}
}
else
{
lean_object* v_a_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1604_; 
lean_dec_ref(v_b_1570_);
v_a_1597_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1604_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1599_ = v___x_1586_;
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_a_1597_);
lean_dec(v___x_1586_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v___x_1602_; 
if (v_isShared_1600_ == 0)
{
v___x_1602_ = v___x_1599_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v_a_1597_);
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
else
{
lean_object* v___x_1605_; 
v___x_1605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1605_, 0, v_b_1570_);
return v___x_1605_;
}
v___jp_1576_:
{
size_t v___x_1578_; size_t v___x_1579_; 
v___x_1578_ = ((size_t)1ULL);
v___x_1579_ = lean_usize_add(v_i_1568_, v___x_1578_);
v_i_1568_ = v___x_1579_;
v_b_1570_ = v_a_1577_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1___boxed(lean_object* v_as_1606_, lean_object* v_i_1607_, lean_object* v_stop_1608_, lean_object* v_b_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
size_t v_i_boxed_1615_; size_t v_stop_boxed_1616_; lean_object* v_res_1617_; 
v_i_boxed_1615_ = lean_unbox_usize(v_i_1607_);
lean_dec(v_i_1607_);
v_stop_boxed_1616_ = lean_unbox_usize(v_stop_1608_);
lean_dec(v_stop_1608_);
v_res_1617_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1(v_as_1606_, v_i_boxed_1615_, v_stop_boxed_1616_, v_b_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec_ref(v_as_1606_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eagerLambdaLifting___lam__0(lean_object* v___x_1618_, lean_object* v_decls_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; uint8_t v___x_1627_; 
v___x_1625_ = lean_mk_empty_array_with_capacity(v___x_1618_);
v___x_1626_ = lean_array_get_size(v_decls_1619_);
v___x_1627_ = lean_nat_dec_lt(v___x_1618_, v___x_1626_);
if (v___x_1627_ == 0)
{
lean_object* v___x_1628_; 
v___x_1628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1625_);
return v___x_1628_;
}
else
{
size_t v___x_1629_; size_t v___x_1630_; lean_object* v___x_1631_; 
v___x_1629_ = ((size_t)0ULL);
v___x_1630_ = lean_usize_of_nat(v___x_1626_);
v___x_1631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eagerLambdaLifting_spec__1(v_decls_1619_, v___x_1629_, v___x_1630_, v___x_1625_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
return v___x_1631_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eagerLambdaLifting___lam__0___boxed(lean_object* v___x_1632_, lean_object* v_decls_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l_Lean_Compiler_LCNF_eagerLambdaLifting___lam__0(v___x_1632_, v_decls_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
lean_dec(v___y_1637_);
lean_dec_ref(v___y_1636_);
lean_dec(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v_decls_1633_);
lean_dec(v___x_1632_);
return v_res_1639_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1707_ = lean_unsigned_to_nat(4205464346u);
v___x_1708_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_));
v___x_1709_ = l_Lean_Name_num___override(v___x_1708_, v___x_1707_);
return v___x_1709_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1711_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_));
v___x_1712_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_);
v___x_1713_ = l_Lean_Name_str___override(v___x_1712_, v___x_1711_);
return v___x_1713_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1715_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_));
v___x_1716_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_);
v___x_1717_ = l_Lean_Name_str___override(v___x_1716_, v___x_1715_);
return v___x_1717_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1718_ = lean_unsigned_to_nat(2u);
v___x_1719_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_);
v___x_1720_ = l_Lean_Name_num___override(v___x_1719_, v___x_1718_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1725_; uint8_t v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1725_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_));
v___x_1726_ = 1;
v___x_1727_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_);
v___x_1728_ = l_Lean_registerTraceClass(v___x_1725_, v___x_1726_, v___x_1727_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
lean_dec_ref_known(v___x_1728_, 1);
v___x_1729_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_));
v___x_1730_ = l_Lean_registerTraceClass(v___x_1729_, v___x_1726_, v___x_1727_);
return v___x_1730_;
}
else
{
return v___x_1728_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2____boxed(lean_object* v_a_1731_){
_start:
{
lean_object* v_res_1732_; 
v_res_1732_ = l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_();
return v_res_1732_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Closure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_MonadScope(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Level(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_AuxDeclCache(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_LambdaLifting(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_MonadScope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_AuxDeclCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_LambdaLifting_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_LambdaLifting_4205464346____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_LambdaLifting(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Closure(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_MonadScope(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Level(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_AuxDeclCache(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_LambdaLifting(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_MonadScope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_AuxDeclCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_LambdaLifting(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_LambdaLifting(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_LambdaLifting(builtin);
}
#ifdef __cplusplus
}
#endif
