// Lean compiler output
// Module: Lean.Compiler.LCNF.PullLetDecls
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_isClass_x3f___redArg(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(uint8_t, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__3_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__5_value)}};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__9_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_shouldPull(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_shouldPull___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_pullLetDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullLetDecls___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_pullInstances___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullInstances___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_pullInstances___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "pullInstances"};
static const lean_object* l_Lean_Compiler_LCNF_pullInstances___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_pullInstances___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_pullInstances___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_pullInstances___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 64, 178, 67, 149, 31, 237, 171)}};
static const lean_object* l_Lean_Compiler_LCNF_pullInstances___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_pullInstances___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_pullInstances___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Decl_pullInstances___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_pullInstances___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_pullInstances___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_pullInstances___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_pullInstances___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_pullInstances;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_pullInstances___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 201, 254, 145, 100, 42, 166, 160)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PullLetDecls"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(27, 241, 159, 200, 135, 109, 225, 185)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(166, 136, 187, 86, 18, 25, 137, 250)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 251, 46, 178, 152, 200, 229, 229)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(33, 158, 200, 255, 227, 47, 35, 179)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(132, 194, 125, 228, 235, 98, 41, 196)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 133, 224, 244, 214, 86, 90, 84)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(108, 69, 254, 167, 12, 16, 110, 124)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(109, 16, 148, 33, 118, 65, 200, 4)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(11, 149, 17, 125, 174, 166, 104, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(182, 72, 13, 30, 160, 214, 147, 68)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 189, 197, 199, 72, 35, 203, 245)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___redArg(lean_object* v_fvarId_1_, lean_object* v_x_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_){
_start:
{
lean_object* v_isCandidateFn_10_; lean_object* v_included_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v_isCandidateFn_10_ = lean_ctor_get(v_a_3_, 0);
v_included_11_ = lean_ctor_get(v_a_3_, 1);
lean_inc(v_included_11_);
v___x_12_ = l_Lean_FVarIdSet_insert(v_included_11_, v_fvarId_1_);
lean_inc_ref(v_isCandidateFn_10_);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v_isCandidateFn_10_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
v___x_14_ = lean_apply_7(v_x_2_, v___x_13_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___redArg___boxed(lean_object* v_fvarId_15_, lean_object* v_x_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Compiler_LCNF_PullLetDecls_withFVar___redArg(v_fvarId_15_, v_x_16_, v_a_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
lean_dec(v_a_20_);
lean_dec_ref(v_a_19_);
lean_dec(v_a_18_);
lean_dec_ref(v_a_17_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar(lean_object* v_00_u03b1_25_, lean_object* v_fvarId_26_, lean_object* v_x_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_){
_start:
{
lean_object* v_isCandidateFn_35_; lean_object* v_included_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_isCandidateFn_35_ = lean_ctor_get(v_a_28_, 0);
v_included_36_ = lean_ctor_get(v_a_28_, 1);
lean_inc(v_included_36_);
v___x_37_ = l_Lean_FVarIdSet_insert(v_included_36_, v_fvarId_26_);
lean_inc_ref(v_isCandidateFn_35_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_isCandidateFn_35_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
lean_inc(v_a_33_);
lean_inc_ref(v_a_32_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
v___x_39_ = lean_apply_7(v_x_27_, v___x_38_, v_a_29_, v_a_30_, v_a_31_, v_a_32_, v_a_33_, lean_box(0));
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___boxed(lean_object* v_00_u03b1_40_, lean_object* v_fvarId_41_, lean_object* v_x_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Compiler_LCNF_PullLetDecls_withFVar(v_00_u03b1_40_, v_fvarId_41_, v_x_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec(v_a_46_);
lean_dec_ref(v_a_45_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___lam__0(lean_object* v_x1_51_, lean_object* v_x2_52_){
_start:
{
lean_object* v_fvarId_53_; lean_object* v___x_54_; 
v_fvarId_53_ = lean_ctor_get(v_x2_52_, 0);
lean_inc(v_fvarId_53_);
lean_dec_ref(v_x2_52_);
v___x_54_ = l_Lean_FVarIdSet_insert(v_x1_51_, v_fvarId_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg(lean_object* v_ps_75_, lean_object* v_x_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_){
_start:
{
lean_object* v_isCandidateFn_84_; lean_object* v_included_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; 
v_isCandidateFn_84_ = lean_ctor_get(v_a_77_, 0);
v_included_85_ = lean_ctor_get(v_a_77_, 1);
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_array_get_size(v_ps_75_);
v___x_88_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__9));
v___x_89_ = lean_nat_dec_lt(v___x_86_, v___x_87_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; 
lean_dec_ref(v_ps_75_);
lean_inc(v_a_82_);
lean_inc_ref(v_a_81_);
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
v___x_90_ = lean_apply_7(v_x_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, lean_box(0));
return v___x_90_;
}
else
{
lean_object* v___f_91_; size_t v___x_92_; size_t v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___f_91_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__10));
v___x_92_ = ((size_t)0ULL);
v___x_93_ = lean_usize_of_nat(v___x_87_);
lean_inc(v_included_85_);
v___x_94_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_88_, v___f_91_, v_ps_75_, v___x_92_, v___x_93_, v_included_85_);
lean_inc_ref(v_isCandidateFn_84_);
v___x_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_95_, 0, v_isCandidateFn_84_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
lean_inc(v_a_82_);
lean_inc_ref(v_a_81_);
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
v___x_96_ = lean_apply_7(v_x_76_, v___x_95_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, lean_box(0));
return v___x_96_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___boxed(lean_object* v_ps_97_, lean_object* v_x_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg(v_ps_97_, v_x_98_, v_a_99_, v_a_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_);
lean_dec(v_a_104_);
lean_dec_ref(v_a_103_);
lean_dec(v_a_102_);
lean_dec_ref(v_a_101_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams(lean_object* v_00_u03b1_107_, lean_object* v_ps_108_, lean_object* v_x_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_){
_start:
{
lean_object* v_isCandidateFn_117_; lean_object* v_included_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; 
v_isCandidateFn_117_ = lean_ctor_get(v_a_110_, 0);
v_included_118_ = lean_ctor_get(v_a_110_, 1);
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_array_get_size(v_ps_108_);
v___x_121_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__9));
v___x_122_ = lean_nat_dec_lt(v___x_119_, v___x_120_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
lean_dec_ref(v_ps_108_);
lean_inc(v_a_115_);
lean_inc_ref(v_a_114_);
lean_inc(v_a_113_);
lean_inc_ref(v_a_112_);
lean_inc(v_a_111_);
lean_inc_ref(v_a_110_);
v___x_123_ = lean_apply_7(v_x_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_, v_a_115_, lean_box(0));
return v___x_123_;
}
else
{
lean_object* v___f_124_; size_t v___x_125_; size_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___f_124_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__10));
v___x_125_ = ((size_t)0ULL);
v___x_126_ = lean_usize_of_nat(v___x_120_);
lean_inc(v_included_118_);
v___x_127_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_121_, v___f_124_, v_ps_108_, v___x_125_, v___x_126_, v_included_118_);
lean_inc_ref(v_isCandidateFn_117_);
v___x_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_128_, 0, v_isCandidateFn_117_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
lean_inc(v_a_115_);
lean_inc_ref(v_a_114_);
lean_inc(v_a_113_);
lean_inc_ref(v_a_112_);
lean_inc(v_a_111_);
v___x_129_ = lean_apply_7(v_x_109_, v___x_128_, v_a_111_, v_a_112_, v_a_113_, v_a_114_, v_a_115_, lean_box(0));
return v___x_129_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___boxed(lean_object* v_00_u03b1_130_, lean_object* v_ps_131_, lean_object* v_x_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_Compiler_LCNF_PullLetDecls_withParams(v_00_u03b1_130_, v_ps_131_, v_x_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
lean_dec(v_a_138_);
lean_dec_ref(v_a_137_);
lean_dec(v_a_136_);
lean_dec_ref(v_a_135_);
lean_dec(v_a_134_);
lean_dec_ref(v_a_133_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___redArg(lean_object* v_x_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v_isCandidateFn_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_isCandidateFn_149_ = lean_ctor_get(v_a_142_, 0);
v___x_150_ = lean_box(1);
lean_inc_ref(v_isCandidateFn_149_);
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v_isCandidateFn_149_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
lean_inc(v_a_147_);
lean_inc_ref(v_a_146_);
lean_inc(v_a_145_);
lean_inc_ref(v_a_144_);
lean_inc(v_a_143_);
v___x_152_ = lean_apply_7(v_x_141_, v___x_151_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, lean_box(0));
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___redArg___boxed(lean_object* v_x_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___redArg(v_x_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
lean_dec(v_a_155_);
lean_dec_ref(v_a_154_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope(lean_object* v_00_u03b1_162_, lean_object* v_x_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_){
_start:
{
lean_object* v_isCandidateFn_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v_isCandidateFn_171_ = lean_ctor_get(v_a_164_, 0);
v___x_172_ = lean_box(1);
lean_inc_ref(v_isCandidateFn_171_);
v___x_173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_173_, 0, v_isCandidateFn_171_);
lean_ctor_set(v___x_173_, 1, v___x_172_);
lean_inc(v_a_169_);
lean_inc_ref(v_a_168_);
lean_inc(v_a_167_);
lean_inc_ref(v_a_166_);
lean_inc(v_a_165_);
v___x_174_ = lean_apply_7(v_x_163_, v___x_173_, v_a_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_, lean_box(0));
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___boxed(lean_object* v_00_u03b1_175_, lean_object* v_x_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lean_Compiler_LCNF_PullLetDecls_withNewScope(v_00_u03b1_175_, v_x_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_, v_a_181_, v_a_182_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
lean_dec(v_a_180_);
lean_dec_ref(v_a_179_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go(lean_object* v_c_185_, lean_object* v_toPull_186_, lean_object* v_i_187_, lean_object* v_included_188_, lean_object* v_a_189_){
_start:
{
lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_190_ = lean_array_get_size(v_toPull_186_);
v___x_191_ = lean_nat_dec_lt(v_i_187_, v___x_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; 
lean_dec(v_included_188_);
lean_dec(v_i_187_);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v_c_185_);
lean_ctor_set(v___x_192_, 1, v_a_189_);
return v___x_192_;
}
else
{
lean_object* v_letDecl_193_; uint8_t v___x_194_; uint8_t v___x_195_; 
v_letDecl_193_ = lean_array_fget_borrowed(v_toPull_186_, v_i_187_);
v___x_194_ = 0;
v___x_195_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(v___x_194_, v_letDecl_193_, v_included_188_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
lean_inc(v_letDecl_193_);
v___x_196_ = lean_array_push(v_a_189_, v_letDecl_193_);
v___x_197_ = lean_unsigned_to_nat(1u);
v___x_198_ = lean_nat_add(v_i_187_, v___x_197_);
lean_dec(v_i_187_);
v_i_187_ = v___x_198_;
v_a_189_ = v___x_196_;
goto _start;
}
else
{
lean_object* v_fvarId_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v_fst_205_; lean_object* v_snd_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_214_; 
v_fvarId_200_ = lean_ctor_get(v_letDecl_193_, 0);
v___x_201_ = lean_unsigned_to_nat(1u);
v___x_202_ = lean_nat_add(v_i_187_, v___x_201_);
lean_dec(v_i_187_);
lean_inc(v_fvarId_200_);
v___x_203_ = l_Lean_FVarIdSet_insert(v_included_188_, v_fvarId_200_);
v___x_204_ = l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go(v_c_185_, v_toPull_186_, v___x_202_, v___x_203_, v_a_189_);
v_fst_205_ = lean_ctor_get(v___x_204_, 0);
v_snd_206_ = lean_ctor_get(v___x_204_, 1);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_214_ == 0)
{
v___x_208_ = v___x_204_;
v_isShared_209_ = v_isSharedCheck_214_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_snd_206_);
lean_inc(v_fst_205_);
lean_dec(v___x_204_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_214_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_212_; 
lean_inc(v_letDecl_193_);
v___x_210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_210_, 0, v_letDecl_193_);
lean_ctor_set(v___x_210_, 1, v_fst_205_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_210_);
v___x_212_ = v___x_208_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_snd_206_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go___boxed(lean_object* v_c_215_, lean_object* v_toPull_216_, lean_object* v_i_217_, lean_object* v_included_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go(v_c_215_, v_toPull_216_, v_i_217_, v_included_218_, v_a_219_);
lean_dec_ref(v_toPull_216_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint(lean_object* v_x_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v___x_231_; lean_object* v_isCandidateFn_232_; lean_object* v_included_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_231_ = lean_st_ref_get(v_a_225_);
v_isCandidateFn_232_ = lean_ctor_get(v_a_224_, 0);
v_included_233_ = lean_ctor_get(v_a_224_, 1);
v___x_234_ = lean_array_get_size(v___x_231_);
lean_dec(v___x_231_);
v___x_235_ = lean_box(1);
lean_inc_ref(v_isCandidateFn_232_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v_isCandidateFn_232_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
lean_inc(v_a_229_);
lean_inc_ref(v_a_228_);
lean_inc(v_a_227_);
lean_inc_ref(v_a_226_);
lean_inc(v_a_225_);
v___x_237_ = lean_apply_7(v_x_223_, v___x_236_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_, lean_box(0));
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_254_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_254_ == 0)
{
v___x_240_ = v___x_237_;
v_isShared_241_ = v_isSharedCheck_254_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_254_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v_fst_245_; lean_object* v_snd_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_252_; 
v___x_242_ = lean_st_ref_get(v_a_225_);
v___x_243_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___closed__0));
lean_inc(v_included_233_);
v___x_244_ = l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go(v_a_238_, v___x_242_, v___x_234_, v_included_233_, v___x_243_);
lean_dec(v___x_242_);
v_fst_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_fst_245_);
v_snd_246_ = lean_ctor_get(v___x_244_, 1);
lean_inc(v_snd_246_);
lean_dec_ref(v___x_244_);
v___x_247_ = lean_st_ref_take(v_a_225_);
v___x_248_ = l_Array_shrink___redArg(v___x_247_, v___x_234_);
v___x_249_ = l_Array_append___redArg(v___x_248_, v_snd_246_);
lean_dec(v_snd_246_);
v___x_250_ = lean_st_ref_put(v_a_225_, v___x_249_);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v_fst_245_);
v___x_252_ = v___x_240_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_fst_245_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
else
{
return v___x_237_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___boxed(lean_object* v_x_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint(v_x_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_, v_a_261_);
lean_dec(v_a_261_);
lean_dec_ref(v_a_260_);
lean_dec(v_a_259_);
lean_dec_ref(v_a_258_);
lean_dec(v_a_257_);
lean_dec_ref(v_a_256_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0(lean_object* v_as_264_, size_t v_i_265_, size_t v_stop_266_, lean_object* v_b_267_){
_start:
{
uint8_t v___x_268_; 
v___x_268_ = lean_usize_dec_eq(v_i_265_, v_stop_266_);
if (v___x_268_ == 0)
{
size_t v___x_269_; size_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_269_ = ((size_t)1ULL);
v___x_270_ = lean_usize_sub(v_i_265_, v___x_269_);
v___x_271_ = lean_array_uget_borrowed(v_as_264_, v___x_270_);
lean_inc(v___x_271_);
v___x_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set(v___x_272_, 1, v_b_267_);
v_i_265_ = v___x_270_;
v_b_267_ = v___x_272_;
goto _start;
}
else
{
return v_b_267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0___boxed(lean_object* v_as_274_, lean_object* v_i_275_, lean_object* v_stop_276_, lean_object* v_b_277_){
_start:
{
size_t v_i_boxed_278_; size_t v_stop_boxed_279_; lean_object* v_res_280_; 
v_i_boxed_278_ = lean_unbox_usize(v_i_275_);
lean_dec(v_i_275_);
v_stop_boxed_279_ = lean_unbox_usize(v_stop_276_);
lean_dec(v_stop_276_);
v_res_280_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0(v_as_274_, v_i_boxed_278_, v_stop_boxed_279_, v_b_277_);
lean_dec_ref(v_as_274_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg(lean_object* v_c_281_, lean_object* v_a_282_){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; uint8_t v___x_287_; 
v___x_284_ = lean_st_ref_get(v_a_282_);
v___x_285_ = lean_array_get_size(v___x_284_);
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = lean_nat_dec_lt(v___x_286_, v___x_285_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; 
lean_dec(v___x_284_);
v___x_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_288_, 0, v_c_281_);
return v___x_288_;
}
else
{
size_t v___x_289_; size_t v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_289_ = lean_usize_of_nat(v___x_285_);
v___x_290_ = ((size_t)0ULL);
v___x_291_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0(v___x_284_, v___x_289_, v___x_290_, v_c_281_);
lean_dec(v___x_284_);
v___x_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
return v___x_292_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg___boxed(lean_object* v_c_293_, lean_object* v_a_294_, lean_object* v_a_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg(v_c_293_, v_a_294_);
lean_dec(v_a_294_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull(lean_object* v_c_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg(v_c_297_, v_a_299_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___boxed(lean_object* v_c_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Compiler_LCNF_PullLetDecls_attachToPull(v_c_306_, v_a_307_, v_a_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
lean_dec(v_a_310_);
lean_dec_ref(v_a_309_);
lean_dec(v_a_308_);
lean_dec_ref(v_a_307_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_shouldPull(lean_object* v_decl_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_){
_start:
{
lean_object* v_isCandidateFn_327_; lean_object* v_included_328_; uint8_t v___x_329_; uint8_t v___x_330_; 
v_isCandidateFn_327_ = lean_ctor_get(v_a_316_, 0);
v_included_328_ = lean_ctor_get(v_a_316_, 1);
v___x_329_ = 0;
v___x_330_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(v___x_329_, v_decl_315_, v_included_328_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
lean_inc_ref(v_isCandidateFn_327_);
lean_inc(v_a_321_);
lean_inc_ref(v_a_320_);
lean_inc(v_a_319_);
lean_inc_ref(v_a_318_);
lean_inc(v_included_328_);
lean_inc_ref(v_decl_315_);
v___x_331_ = lean_apply_7(v_isCandidateFn_327_, v_decl_315_, v_included_328_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, lean_box(0));
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_343_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_343_ == 0)
{
v___x_334_ = v___x_331_;
v_isShared_335_ = v_isSharedCheck_343_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_331_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_343_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
uint8_t v___x_336_; 
v___x_336_ = lean_unbox(v_a_332_);
if (v___x_336_ == 0)
{
lean_del_object(v___x_334_);
lean_dec(v_a_332_);
lean_dec_ref(v_decl_315_);
goto v___jp_323_;
}
else
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_337_ = lean_st_ref_take(v_a_317_);
v___x_338_ = lean_array_push(v___x_337_, v_decl_315_);
v___x_339_ = lean_st_ref_put(v_a_317_, v___x_338_);
if (v_isShared_335_ == 0)
{
v___x_341_ = v___x_334_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_332_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
else
{
lean_dec_ref(v_decl_315_);
return v___x_331_;
}
}
else
{
lean_dec_ref(v_decl_315_);
goto v___jp_323_;
}
v___jp_323_:
{
uint8_t v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_324_ = 0;
v___x_325_ = lean_box(v___x_324_);
v___x_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_shouldPull___boxed(lean_object* v_decl_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lean_Compiler_LCNF_PullLetDecls_shouldPull(v_decl_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_);
lean_dec(v_a_350_);
lean_dec_ref(v_a_349_);
lean_dec(v_a_348_);
lean_dec_ref(v_a_347_);
lean_dec(v_a_346_);
lean_dec_ref(v_a_345_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(lean_object* v_as_353_, size_t v_i_354_, size_t v_stop_355_, lean_object* v_b_356_){
_start:
{
uint8_t v___x_357_; 
v___x_357_ = lean_usize_dec_eq(v_i_354_, v_stop_355_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; lean_object* v_fvarId_359_; lean_object* v___x_360_; size_t v___x_361_; size_t v___x_362_; 
v___x_358_ = lean_array_uget_borrowed(v_as_353_, v_i_354_);
v_fvarId_359_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_fvarId_359_);
v___x_360_ = l_Lean_FVarIdSet_insert(v_b_356_, v_fvarId_359_);
v___x_361_ = ((size_t)1ULL);
v___x_362_ = lean_usize_add(v_i_354_, v___x_361_);
v_i_354_ = v___x_362_;
v_b_356_ = v___x_360_;
goto _start;
}
else
{
return v_b_356_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0___boxed(lean_object* v_as_364_, lean_object* v_i_365_, lean_object* v_stop_366_, lean_object* v_b_367_){
_start:
{
size_t v_i_boxed_368_; size_t v_stop_boxed_369_; lean_object* v_res_370_; 
v_i_boxed_368_ = lean_unbox_usize(v_i_365_);
lean_dec(v_i_365_);
v_stop_boxed_369_ = lean_unbox_usize(v_stop_366_);
lean_dec(v_stop_366_);
v_res_370_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(v_as_364_, v_i_boxed_368_, v_stop_boxed_369_, v_b_367_);
lean_dec_ref(v_as_364_);
return v_res_370_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2(lean_object* v_msg_372_){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0, &l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0);
v___x_374_ = lean_panic_fn_borrowed(v___x_373_, v_msg_372_);
return v___x_374_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_378_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__2));
v___x_379_ = lean_unsigned_to_nat(9u);
v___x_380_ = lean_unsigned_to_nat(658u);
v___x_381_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__1));
v___x_382_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__0));
v___x_383_ = l_mkPanicMessageWithDecl(v___x_382_, v___x_381_, v___x_380_, v___x_379_, v___x_378_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0(uint8_t v___x_384_, lean_object* v_decl_385_, lean_object* v_type_386_, lean_object* v_params_387_, lean_object* v_k_388_, lean_object* v_code_389_, lean_object* v_value_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_isCandidateFn_398_; lean_object* v_included_399_; lean_object* v___y_401_; lean_object* v___x_507_; lean_object* v___x_508_; uint8_t v___x_509_; 
v_isCandidateFn_398_ = lean_ctor_get(v___y_391_, 0);
v_included_399_ = lean_ctor_get(v___y_391_, 1);
v___x_507_ = lean_unsigned_to_nat(0u);
v___x_508_ = lean_array_get_size(v_params_387_);
v___x_509_ = lean_nat_dec_lt(v___x_507_, v___x_508_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; 
lean_inc(v_included_399_);
lean_inc_ref(v_isCandidateFn_398_);
v___x_510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_510_, 0, v_isCandidateFn_398_);
lean_ctor_set(v___x_510_, 1, v_included_399_);
v___x_511_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_value_390_, v___x_510_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec_ref_known(v___x_510_, 2);
v___y_401_ = v___x_511_;
goto v___jp_400_;
}
else
{
size_t v___x_512_; size_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_512_ = ((size_t)0ULL);
v___x_513_ = lean_usize_of_nat(v___x_508_);
lean_inc(v_included_399_);
v___x_514_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(v_params_387_, v___x_512_, v___x_513_, v_included_399_);
lean_inc_ref(v_isCandidateFn_398_);
v___x_515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_515_, 0, v_isCandidateFn_398_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_value_390_, v___x_515_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec_ref_known(v___x_515_, 2);
v___y_401_ = v___x_516_;
goto v___jp_400_;
}
v___jp_400_:
{
if (lean_obj_tag(v___y_401_) == 0)
{
lean_object* v_a_402_; lean_object* v___x_403_; 
v_a_402_ = lean_ctor_get(v___y_401_, 0);
lean_inc(v_a_402_);
lean_dec_ref_known(v___y_401_, 1);
v___x_403_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_384_, v_decl_385_, v_type_386_, v_params_387_, v_a_402_, v___y_394_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v_fvarId_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_404_);
lean_dec_ref_known(v___x_403_, 1);
v_fvarId_405_ = lean_ctor_get(v_a_404_, 0);
lean_inc(v_fvarId_405_);
lean_inc(v_included_399_);
v___x_406_ = l_Lean_FVarIdSet_insert(v_included_399_, v_fvarId_405_);
lean_inc_ref(v_isCandidateFn_398_);
v___x_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_407_, 0, v_isCandidateFn_398_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
v___x_408_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_k_388_, v___x_407_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec_ref_known(v___x_407_, 2);
if (lean_obj_tag(v___x_408_) == 0)
{
switch(lean_obj_tag(v_code_389_))
{
case 1:
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_448_; 
v_a_409_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_448_ == 0)
{
v___x_411_ = v___x_408_;
v_isShared_412_ = v_isSharedCheck_448_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_408_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_448_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v_decl_413_; lean_object* v_k_414_; size_t v___x_415_; size_t v___x_416_; uint8_t v___x_417_; 
v_decl_413_ = lean_ctor_get(v_code_389_, 0);
v_k_414_ = lean_ctor_get(v_code_389_, 1);
v___x_415_ = lean_ptr_addr(v_k_414_);
v___x_416_ = lean_ptr_addr(v_a_409_);
v___x_417_ = lean_usize_dec_eq(v___x_415_, v___x_416_);
if (v___x_417_ == 0)
{
lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_427_; 
v_isSharedCheck_427_ = !lean_is_exclusive(v_code_389_);
if (v_isSharedCheck_427_ == 0)
{
lean_object* v_unused_428_; lean_object* v_unused_429_; 
v_unused_428_ = lean_ctor_get(v_code_389_, 1);
lean_dec(v_unused_428_);
v_unused_429_ = lean_ctor_get(v_code_389_, 0);
lean_dec(v_unused_429_);
v___x_419_ = v_code_389_;
v_isShared_420_ = v_isSharedCheck_427_;
goto v_resetjp_418_;
}
else
{
lean_dec(v_code_389_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_427_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 1, v_a_409_);
lean_ctor_set(v___x_419_, 0, v_a_404_);
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_a_404_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v_a_409_);
v___x_422_ = v_reuseFailAlloc_426_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_424_; 
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v___x_422_);
v___x_424_ = v___x_411_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_422_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
}
else
{
size_t v___x_430_; size_t v___x_431_; uint8_t v___x_432_; 
v___x_430_ = lean_ptr_addr(v_decl_413_);
v___x_431_ = lean_ptr_addr(v_a_404_);
v___x_432_ = lean_usize_dec_eq(v___x_430_, v___x_431_);
if (v___x_432_ == 0)
{
lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_442_; 
v_isSharedCheck_442_ = !lean_is_exclusive(v_code_389_);
if (v_isSharedCheck_442_ == 0)
{
lean_object* v_unused_443_; lean_object* v_unused_444_; 
v_unused_443_ = lean_ctor_get(v_code_389_, 1);
lean_dec(v_unused_443_);
v_unused_444_ = lean_ctor_get(v_code_389_, 0);
lean_dec(v_unused_444_);
v___x_434_ = v_code_389_;
v_isShared_435_ = v_isSharedCheck_442_;
goto v_resetjp_433_;
}
else
{
lean_dec(v_code_389_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_442_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 1, v_a_409_);
lean_ctor_set(v___x_434_, 0, v_a_404_);
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_a_404_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_a_409_);
v___x_437_ = v_reuseFailAlloc_441_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
lean_object* v___x_439_; 
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v___x_437_);
v___x_439_ = v___x_411_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v___x_437_);
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
lean_object* v___x_446_; 
lean_dec(v_a_409_);
lean_dec(v_a_404_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v_code_389_);
v___x_446_ = v___x_411_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_code_389_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
case 2:
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_488_; 
v_a_449_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_488_ == 0)
{
v___x_451_ = v___x_408_;
v_isShared_452_ = v_isSharedCheck_488_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_408_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_488_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v_decl_453_; lean_object* v_k_454_; size_t v___x_455_; size_t v___x_456_; uint8_t v___x_457_; 
v_decl_453_ = lean_ctor_get(v_code_389_, 0);
v_k_454_ = lean_ctor_get(v_code_389_, 1);
v___x_455_ = lean_ptr_addr(v_k_454_);
v___x_456_ = lean_ptr_addr(v_a_449_);
v___x_457_ = lean_usize_dec_eq(v___x_455_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_467_; 
v_isSharedCheck_467_ = !lean_is_exclusive(v_code_389_);
if (v_isSharedCheck_467_ == 0)
{
lean_object* v_unused_468_; lean_object* v_unused_469_; 
v_unused_468_ = lean_ctor_get(v_code_389_, 1);
lean_dec(v_unused_468_);
v_unused_469_ = lean_ctor_get(v_code_389_, 0);
lean_dec(v_unused_469_);
v___x_459_ = v_code_389_;
v_isShared_460_ = v_isSharedCheck_467_;
goto v_resetjp_458_;
}
else
{
lean_dec(v_code_389_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_467_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 1, v_a_449_);
lean_ctor_set(v___x_459_, 0, v_a_404_);
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_404_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_a_449_);
v___x_462_ = v_reuseFailAlloc_466_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
lean_object* v___x_464_; 
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 0, v___x_462_);
v___x_464_ = v___x_451_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_462_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
else
{
size_t v___x_470_; size_t v___x_471_; uint8_t v___x_472_; 
v___x_470_ = lean_ptr_addr(v_decl_453_);
v___x_471_ = lean_ptr_addr(v_a_404_);
v___x_472_ = lean_usize_dec_eq(v___x_470_, v___x_471_);
if (v___x_472_ == 0)
{
lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_482_; 
v_isSharedCheck_482_ = !lean_is_exclusive(v_code_389_);
if (v_isSharedCheck_482_ == 0)
{
lean_object* v_unused_483_; lean_object* v_unused_484_; 
v_unused_483_ = lean_ctor_get(v_code_389_, 1);
lean_dec(v_unused_483_);
v_unused_484_ = lean_ctor_get(v_code_389_, 0);
lean_dec(v_unused_484_);
v___x_474_ = v_code_389_;
v_isShared_475_ = v_isSharedCheck_482_;
goto v_resetjp_473_;
}
else
{
lean_dec(v_code_389_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_482_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 1, v_a_449_);
lean_ctor_set(v___x_474_, 0, v_a_404_);
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_404_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_a_449_);
v___x_477_ = v_reuseFailAlloc_481_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
lean_object* v___x_479_; 
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 0, v___x_477_);
v___x_479_ = v___x_451_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_477_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
else
{
lean_object* v___x_486_; 
lean_dec(v_a_449_);
lean_dec(v_a_404_);
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 0, v_code_389_);
v___x_486_ = v___x_451_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_code_389_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
}
default: 
{
lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_497_; 
lean_dec(v_a_404_);
lean_dec_ref(v_code_389_);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_497_ == 0)
{
lean_object* v_unused_498_; 
v_unused_498_ = lean_ctor_get(v___x_408_, 0);
lean_dec(v_unused_498_);
v___x_490_ = v___x_408_;
v_isShared_491_ = v_isSharedCheck_497_;
goto v_resetjp_489_;
}
else
{
lean_dec(v___x_408_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_497_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_495_; 
v___x_492_ = lean_obj_once(&l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3, &l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3_once, _init_l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3);
v___x_493_ = l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2(v___x_492_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v___x_493_);
v___x_495_ = v___x_490_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
}
}
else
{
lean_dec(v_a_404_);
lean_dec_ref(v_code_389_);
return v___x_408_;
}
}
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
lean_dec_ref(v_code_389_);
lean_dec_ref(v_k_388_);
v_a_499_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v___x_403_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_403_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
else
{
lean_dec_ref(v_code_389_);
lean_dec_ref(v_k_388_);
lean_dec_ref(v_params_387_);
lean_dec_ref(v_type_386_);
lean_dec_ref(v_decl_385_);
return v___y_401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___boxed(lean_object* v___x_517_, lean_object* v_decl_518_, lean_object* v_type_519_, lean_object* v_params_520_, lean_object* v_k_521_, lean_object* v_code_522_, lean_object* v_value_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
uint8_t v___x_4112__boxed_531_; lean_object* v_res_532_; 
v___x_4112__boxed_531_ = lean_unbox(v___x_517_);
v_res_532_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0(v___x_4112__boxed_531_, v_decl_518_, v_type_519_, v_params_520_, v_k_521_, v_code_522_, v_value_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1___boxed(lean_object* v___x_533_, lean_object* v_alts_534_, lean_object* v_typeName_535_, lean_object* v_resultType_536_, lean_object* v_discr_537_, lean_object* v_code_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1(v___x_533_, v_alts_534_, v_typeName_535_, v_resultType_536_, v_discr_537_, v_code_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(lean_object* v_code_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_){
_start:
{
lean_object* v_decl_556_; lean_object* v_k_557_; lean_object* v___y_558_; lean_object* v___y_559_; lean_object* v___y_560_; lean_object* v___y_561_; lean_object* v___y_562_; lean_object* v___y_563_; 
switch(lean_obj_tag(v_code_547_))
{
case 4:
{
lean_object* v_cases_571_; lean_object* v_typeName_572_; lean_object* v_resultType_573_; lean_object* v_discr_574_; lean_object* v_alts_575_; lean_object* v___x_576_; lean_object* v___f_577_; lean_object* v___x_578_; 
v_cases_571_ = lean_ctor_get(v_code_547_, 0);
v_typeName_572_ = lean_ctor_get(v_cases_571_, 0);
lean_inc(v_typeName_572_);
v_resultType_573_ = lean_ctor_get(v_cases_571_, 1);
lean_inc_ref(v_resultType_573_);
v_discr_574_ = lean_ctor_get(v_cases_571_, 2);
lean_inc(v_discr_574_);
v_alts_575_ = lean_ctor_get(v_cases_571_, 3);
lean_inc_ref(v_alts_575_);
v___x_576_ = lean_unsigned_to_nat(0u);
v___f_577_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1___boxed), 13, 6);
lean_closure_set(v___f_577_, 0, v___x_576_);
lean_closure_set(v___f_577_, 1, v_alts_575_);
lean_closure_set(v___f_577_, 2, v_typeName_572_);
lean_closure_set(v___f_577_, 3, v_resultType_573_);
lean_closure_set(v___f_577_, 4, v_discr_574_);
lean_closure_set(v___f_577_, 5, v_code_547_);
v___x_578_ = l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint(v___f_577_, v_a_548_, v_a_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
return v___x_578_;
}
case 0:
{
lean_object* v_decl_579_; lean_object* v_k_580_; lean_object* v___x_581_; 
v_decl_579_ = lean_ctor_get(v_code_547_, 0);
v_k_580_ = lean_ctor_get(v_code_547_, 1);
lean_inc_ref(v_decl_579_);
v___x_581_ = l_Lean_Compiler_LCNF_PullLetDecls_shouldPull(v_decl_579_, v_a_548_, v_a_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; uint8_t v___x_583_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_581_, 1);
v___x_583_ = lean_unbox(v_a_582_);
lean_dec(v_a_582_);
if (v___x_583_ == 0)
{
lean_object* v_fvarId_584_; lean_object* v_isCandidateFn_585_; lean_object* v_included_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_fvarId_584_ = lean_ctor_get(v_decl_579_, 0);
v_isCandidateFn_585_ = lean_ctor_get(v_a_548_, 0);
v_included_586_ = lean_ctor_get(v_a_548_, 1);
lean_inc(v_fvarId_584_);
lean_inc(v_included_586_);
v___x_587_ = l_Lean_FVarIdSet_insert(v_included_586_, v_fvarId_584_);
lean_inc_ref(v_isCandidateFn_585_);
v___x_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_588_, 0, v_isCandidateFn_585_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
lean_inc_ref(v_k_580_);
v___x_589_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_k_580_, v___x_588_, v_a_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_);
lean_dec_ref_known(v___x_588_, 2);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_612_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_612_ == 0)
{
v___x_592_ = v___x_589_;
v_isShared_593_ = v_isSharedCheck_612_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_589_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_612_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
size_t v___x_594_; size_t v___x_595_; uint8_t v___x_596_; 
v___x_594_ = lean_ptr_addr(v_k_580_);
v___x_595_ = lean_ptr_addr(v_a_590_);
v___x_596_ = lean_usize_dec_eq(v___x_594_, v___x_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_606_; 
lean_inc_ref(v_decl_579_);
v_isSharedCheck_606_ = !lean_is_exclusive(v_code_547_);
if (v_isSharedCheck_606_ == 0)
{
lean_object* v_unused_607_; lean_object* v_unused_608_; 
v_unused_607_ = lean_ctor_get(v_code_547_, 1);
lean_dec(v_unused_607_);
v_unused_608_ = lean_ctor_get(v_code_547_, 0);
lean_dec(v_unused_608_);
v___x_598_ = v_code_547_;
v_isShared_599_ = v_isSharedCheck_606_;
goto v_resetjp_597_;
}
else
{
lean_dec(v_code_547_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_606_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 1, v_a_590_);
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_decl_579_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_a_590_);
v___x_601_ = v_reuseFailAlloc_605_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
lean_object* v___x_603_; 
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v___x_601_);
v___x_603_ = v___x_592_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
else
{
lean_object* v___x_610_; 
lean_dec(v_a_590_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v_code_547_);
v___x_610_ = v___x_592_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_code_547_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_547_, 2);
return v___x_589_;
}
}
else
{
lean_inc_ref(v_k_580_);
lean_dec_ref_known(v_code_547_, 2);
v_code_547_ = v_k_580_;
goto _start;
}
}
else
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
lean_dec_ref_known(v_code_547_, 2);
v_a_614_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_581_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_581_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
case 1:
{
lean_object* v_decl_622_; lean_object* v_k_623_; 
v_decl_622_ = lean_ctor_get(v_code_547_, 0);
v_k_623_ = lean_ctor_get(v_code_547_, 1);
lean_inc_ref(v_k_623_);
lean_inc_ref(v_decl_622_);
v_decl_556_ = v_decl_622_;
v_k_557_ = v_k_623_;
v___y_558_ = v_a_548_;
v___y_559_ = v_a_549_;
v___y_560_ = v_a_550_;
v___y_561_ = v_a_551_;
v___y_562_ = v_a_552_;
v___y_563_ = v_a_553_;
goto v___jp_555_;
}
case 2:
{
lean_object* v_decl_624_; lean_object* v_k_625_; 
v_decl_624_ = lean_ctor_get(v_code_547_, 0);
v_k_625_ = lean_ctor_get(v_code_547_, 1);
lean_inc_ref(v_k_625_);
lean_inc_ref(v_decl_624_);
v_decl_556_ = v_decl_624_;
v_k_557_ = v_k_625_;
v___y_558_ = v_a_548_;
v___y_559_ = v_a_549_;
v___y_560_ = v_a_550_;
v___y_561_ = v_a_551_;
v___y_562_ = v_a_552_;
v___y_563_ = v_a_553_;
goto v___jp_555_;
}
default: 
{
lean_object* v___x_626_; 
v___x_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_626_, 0, v_code_547_);
return v___x_626_;
}
}
v___jp_555_:
{
lean_object* v_params_564_; lean_object* v_type_565_; lean_object* v_value_566_; uint8_t v___x_567_; lean_object* v___x_568_; lean_object* v___f_569_; lean_object* v___x_570_; 
v_params_564_ = lean_ctor_get(v_decl_556_, 2);
lean_inc_ref(v_params_564_);
v_type_565_ = lean_ctor_get(v_decl_556_, 3);
lean_inc_ref(v_type_565_);
v_value_566_ = lean_ctor_get(v_decl_556_, 4);
lean_inc_ref(v_value_566_);
v___x_567_ = 0;
v___x_568_ = lean_box(v___x_567_);
v___f_569_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___boxed), 14, 7);
lean_closure_set(v___f_569_, 0, v___x_568_);
lean_closure_set(v___f_569_, 1, v_decl_556_);
lean_closure_set(v___f_569_, 2, v_type_565_);
lean_closure_set(v___f_569_, 3, v_params_564_);
lean_closure_set(v___f_569_, 4, v_k_557_);
lean_closure_set(v___f_569_, 5, v_code_547_);
lean_closure_set(v___f_569_, 6, v_value_566_);
v___x_570_ = l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint(v___f_569_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullAlt(lean_object* v_alt_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_){
_start:
{
lean_object* v___y_636_; 
if (lean_obj_tag(v_alt_627_) == 0)
{
lean_object* v_params_654_; lean_object* v_code_655_; lean_object* v_isCandidateFn_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v_params_654_ = lean_ctor_get(v_alt_627_, 1);
v_code_655_ = lean_ctor_get(v_alt_627_, 2);
v_isCandidateFn_656_ = lean_ctor_get(v_a_628_, 0);
v___x_657_ = lean_box(1);
v___x_658_ = lean_unsigned_to_nat(0u);
v___x_659_ = lean_array_get_size(v_params_654_);
v___x_660_ = lean_nat_dec_lt(v___x_658_, v___x_659_);
if (v___x_660_ == 0)
{
lean_object* v___x_661_; lean_object* v___x_662_; 
lean_inc_ref(v_isCandidateFn_656_);
v___x_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_661_, 0, v_isCandidateFn_656_);
lean_ctor_set(v___x_661_, 1, v___x_657_);
lean_inc_ref(v_code_655_);
v___x_662_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_code_655_, v___x_661_, v_a_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_);
lean_dec_ref_known(v___x_661_, 2);
v___y_636_ = v___x_662_;
goto v___jp_635_;
}
else
{
size_t v___x_663_; size_t v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_663_ = ((size_t)0ULL);
v___x_664_ = lean_usize_of_nat(v___x_659_);
v___x_665_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(v_params_654_, v___x_663_, v___x_664_, v___x_657_);
lean_inc_ref(v_isCandidateFn_656_);
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v_isCandidateFn_656_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
lean_inc_ref(v_code_655_);
v___x_667_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_code_655_, v___x_666_, v_a_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_);
lean_dec_ref_known(v___x_666_, 2);
v___y_636_ = v___x_667_;
goto v___jp_635_;
}
}
else
{
lean_object* v_code_668_; lean_object* v_isCandidateFn_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v_code_668_ = lean_ctor_get(v_alt_627_, 0);
v_isCandidateFn_669_ = lean_ctor_get(v_a_628_, 0);
v___x_670_ = lean_box(1);
lean_inc_ref(v_isCandidateFn_669_);
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v_isCandidateFn_669_);
lean_ctor_set(v___x_671_, 1, v___x_670_);
lean_inc_ref(v_code_668_);
v___x_672_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_code_668_, v___x_671_, v_a_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_);
lean_dec_ref_known(v___x_671_, 2);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_681_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_681_ == 0)
{
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_627_, v_a_673_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_677_);
v___x_679_ = v___x_675_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_677_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
else
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
lean_dec_ref_known(v_alt_627_, 1);
v_a_682_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_672_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_672_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
v___jp_635_:
{
if (lean_obj_tag(v___y_636_) == 0)
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_645_; 
v_a_637_ = lean_ctor_get(v___y_636_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___y_636_);
if (v_isSharedCheck_645_ == 0)
{
v___x_639_ = v___y_636_;
v_isShared_640_ = v_isSharedCheck_645_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___y_636_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_645_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_641_; lean_object* v___x_643_; 
v___x_641_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_627_, v_a_637_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v___x_641_);
v___x_643_ = v___x_639_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_641_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
else
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec_ref(v_alt_627_);
v_a_646_ = lean_ctor_get(v___y_636_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___y_636_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___y_636_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___y_636_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3(lean_object* v_i_690_, lean_object* v_as_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v___x_699_; uint8_t v___x_700_; 
v___x_699_ = lean_array_get_size(v_as_691_);
v___x_700_ = lean_nat_dec_lt(v_i_690_, v___x_699_);
if (v___x_700_ == 0)
{
lean_object* v___x_701_; 
lean_dec(v_i_690_);
v___x_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_701_, 0, v_as_691_);
return v___x_701_;
}
else
{
lean_object* v_a_702_; lean_object* v___x_703_; 
v_a_702_ = lean_array_fget_borrowed(v_as_691_, v_i_690_);
lean_inc(v_a_702_);
v___x_703_ = l_Lean_Compiler_LCNF_PullLetDecls_pullAlt(v_a_702_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; size_t v___x_705_; size_t v___x_706_; uint8_t v___x_707_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_a_704_);
lean_dec_ref_known(v___x_703_, 1);
v___x_705_ = lean_ptr_addr(v_a_702_);
v___x_706_ = lean_ptr_addr(v_a_704_);
v___x_707_ = lean_usize_dec_eq(v___x_705_, v___x_706_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_708_ = lean_unsigned_to_nat(1u);
v___x_709_ = lean_nat_add(v_i_690_, v___x_708_);
v___x_710_ = lean_array_fset(v_as_691_, v_i_690_, v_a_704_);
lean_dec(v_i_690_);
v_i_690_ = v___x_709_;
v_as_691_ = v___x_710_;
goto _start;
}
else
{
lean_object* v___x_712_; lean_object* v___x_713_; 
lean_dec(v_a_704_);
v___x_712_ = lean_unsigned_to_nat(1u);
v___x_713_ = lean_nat_add(v_i_690_, v___x_712_);
lean_dec(v_i_690_);
v_i_690_ = v___x_713_;
goto _start;
}
}
else
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_722_; 
lean_dec_ref(v_as_691_);
lean_dec(v_i_690_);
v_a_715_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_722_ == 0)
{
v___x_717_ = v___x_703_;
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v___x_703_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_720_; 
if (v_isShared_718_ == 0)
{
v___x_720_ = v___x_717_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_a_715_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1(lean_object* v___x_723_, lean_object* v_alts_724_, lean_object* v_typeName_725_, lean_object* v_resultType_726_, lean_object* v_discr_727_, lean_object* v_code_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v___x_736_; 
lean_inc_ref(v_alts_724_);
v___x_736_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3(v___x_723_, v_alts_724_, v___y_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_, v___y_734_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_752_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_752_ == 0)
{
v___x_739_ = v___x_736_;
v_isShared_740_ = v_isSharedCheck_752_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_736_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_752_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
size_t v___x_741_; size_t v___x_742_; uint8_t v___x_743_; 
v___x_741_ = lean_ptr_addr(v_alts_724_);
lean_dec_ref(v_alts_724_);
v___x_742_ = lean_ptr_addr(v_a_737_);
v___x_743_ = lean_usize_dec_eq(v___x_741_, v___x_742_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
lean_dec_ref(v_code_728_);
v___x_744_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_744_, 0, v_typeName_725_);
lean_ctor_set(v___x_744_, 1, v_resultType_726_);
lean_ctor_set(v___x_744_, 2, v_discr_727_);
lean_ctor_set(v___x_744_, 3, v_a_737_);
v___x_745_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 0, v___x_745_);
v___x_747_ = v___x_739_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_745_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
else
{
lean_object* v___x_750_; 
lean_dec(v_a_737_);
lean_dec(v_discr_727_);
lean_dec_ref(v_resultType_726_);
lean_dec(v_typeName_725_);
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 0, v_code_728_);
v___x_750_ = v___x_739_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_code_728_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec_ref(v_code_728_);
lean_dec(v_discr_727_);
lean_dec_ref(v_resultType_726_);
lean_dec(v_typeName_725_);
lean_dec_ref(v_alts_724_);
v_a_753_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_736_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_736_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3___boxed(lean_object* v_i_761_, lean_object* v_as_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3(v_i_761_, v_as_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullAlt___boxed(lean_object* v_alt_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lean_Compiler_LCNF_PullLetDecls_pullAlt(v_alt_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_, v_a_776_, v_a_777_);
lean_dec(v_a_777_);
lean_dec_ref(v_a_776_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___boxed(lean_object* v_code_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_code_780_, v_a_781_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_);
lean_dec(v_a_786_);
lean_dec_ref(v_a_785_);
lean_dec(v_a_784_);
lean_dec_ref(v_a_783_);
lean_dec(v_a_782_);
lean_dec_ref(v_a_781_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg(lean_object* v_x_789_, lean_object* v_isCandidateFn_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_796_ = lean_box(1);
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v_isCandidateFn_790_);
lean_ctor_set(v___x_797_, 1, v___x_796_);
v___x_798_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___closed__0));
v___x_799_ = lean_st_mk_ref(v___x_798_);
lean_inc(v_a_794_);
lean_inc_ref(v_a_793_);
lean_inc(v_a_792_);
lean_inc_ref(v_a_791_);
lean_inc(v___x_799_);
v___x_800_ = lean_apply_7(v_x_789_, v___x_797_, v___x_799_, v_a_791_, v_a_792_, v_a_793_, v_a_794_, lean_box(0));
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_809_; 
v_a_801_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_809_ == 0)
{
v___x_803_ = v___x_800_;
v_isShared_804_ = v_isSharedCheck_809_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_800_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_809_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_805_ = lean_st_ref_get(v___x_799_);
lean_dec(v___x_799_);
lean_dec(v___x_805_);
if (v_isShared_804_ == 0)
{
v___x_807_ = v___x_803_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_801_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
else
{
lean_dec(v___x_799_);
return v___x_800_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg___boxed(lean_object* v_x_810_, lean_object* v_isCandidateFn_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg(v_x_810_, v_isCandidateFn_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_);
lean_dec(v_a_815_);
lean_dec_ref(v_a_814_);
lean_dec(v_a_813_);
lean_dec_ref(v_a_812_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run(lean_object* v_00_u03b1_818_, lean_object* v_x_819_, lean_object* v_isCandidateFn_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg(v_x_819_, v_isCandidateFn_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___boxed(lean_object* v_00_u03b1_827_, lean_object* v_x_828_, lean_object* v_isCandidateFn_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lean_Compiler_LCNF_PullLetDecls_PullM_run(v_00_u03b1_827_, v_x_828_, v_isCandidateFn_829_, v_a_830_, v_a_831_, v_a_832_, v_a_833_);
lean_dec(v_a_833_);
lean_dec_ref(v_a_832_);
lean_dec(v_a_831_);
lean_dec_ref(v_a_830_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(lean_object* v_f_836_, lean_object* v_v_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
if (lean_obj_tag(v_v_837_) == 0)
{
lean_object* v_code_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_869_; 
v_code_845_ = lean_ctor_get(v_v_837_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v_v_837_);
if (v_isSharedCheck_869_ == 0)
{
v___x_847_ = v_v_837_;
v_isShared_848_ = v_isSharedCheck_869_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_code_845_);
lean_dec(v_v_837_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_869_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_849_; 
lean_inc(v___y_843_);
lean_inc_ref(v___y_842_);
lean_inc(v___y_841_);
lean_inc_ref(v___y_840_);
lean_inc(v___y_839_);
lean_inc_ref(v___y_838_);
v___x_849_ = lean_apply_8(v_f_836_, v_code_845_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, lean_box(0));
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_860_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_860_ == 0)
{
v___x_852_ = v___x_849_;
v_isShared_853_ = v_isSharedCheck_860_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_849_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_860_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 0, v_a_850_);
v___x_855_ = v___x_847_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_859_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_857_; 
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 0, v___x_855_);
v___x_857_ = v___x_852_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_855_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
else
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_868_; 
lean_del_object(v___x_847_);
v_a_861_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_868_ == 0)
{
v___x_863_ = v___x_849_;
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_849_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_a_861_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
}
}
else
{
lean_object* v___x_870_; 
lean_dec_ref(v_f_836_);
v___x_870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_870_, 0, v_v_837_);
return v___x_870_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg___boxed(lean_object* v_f_871_, lean_object* v_v_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(v_f_871_, v_v_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0(uint8_t v_pu_881_, lean_object* v_f_882_, lean_object* v_v_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(v_f_882_, v_v_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___boxed(lean_object* v_pu_892_, lean_object* v_f_893_, lean_object* v_v_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
uint8_t v_pu_boxed_902_; lean_object* v_res_903_; 
v_pu_boxed_902_ = lean_unbox(v_pu_892_);
v_res_903_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0(v_pu_boxed_902_, v_f_893_, v_v_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
lean_dec(v___y_900_);
lean_dec_ref(v___y_899_);
lean_dec(v___y_898_);
lean_dec_ref(v___y_897_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0(lean_object* v___x_905_, lean_object* v_value_906_, lean_object* v_toSignature_907_, uint8_t v_recursive_908_, lean_object* v_inlineAttr_x3f_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(v___x_905_, v_value_906_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___x_917_, 1);
v___x_919_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___closed__0));
v___x_920_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(v___x_919_, v_a_918_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_929_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_929_ == 0)
{
v___x_923_ = v___x_920_;
v_isShared_924_ = v_isSharedCheck_929_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_920_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_929_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_925_; lean_object* v___x_927_; 
v___x_925_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_925_, 0, v_toSignature_907_);
lean_ctor_set(v___x_925_, 1, v_a_921_);
lean_ctor_set(v___x_925_, 2, v_inlineAttr_x3f_909_);
lean_ctor_set_uint8(v___x_925_, sizeof(void*)*3, v_recursive_908_);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_925_);
v___x_927_ = v___x_923_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
else
{
lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_937_; 
lean_dec(v_inlineAttr_x3f_909_);
lean_dec_ref(v_toSignature_907_);
v_a_930_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_937_ == 0)
{
v___x_932_ = v___x_920_;
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_dec(v___x_920_);
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
else
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
lean_dec(v_inlineAttr_x3f_909_);
lean_dec_ref(v_toSignature_907_);
v_a_938_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_917_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_917_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___boxed(lean_object* v___x_946_, lean_object* v_value_947_, lean_object* v_toSignature_948_, lean_object* v_recursive_949_, lean_object* v_inlineAttr_x3f_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
uint8_t v_recursive_boxed_958_; lean_object* v_res_959_; 
v_recursive_boxed_958_ = lean_unbox(v_recursive_949_);
v_res_959_ = l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0(v___x_946_, v_value_947_, v_toSignature_948_, v_recursive_boxed_958_, v_inlineAttr_x3f_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1(lean_object* v_params_960_, lean_object* v___f_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_isCandidateFn_969_; lean_object* v_included_970_; lean_object* v___x_971_; lean_object* v___x_972_; uint8_t v___x_973_; 
v_isCandidateFn_969_ = lean_ctor_get(v___y_962_, 0);
v_included_970_ = lean_ctor_get(v___y_962_, 1);
v___x_971_ = lean_unsigned_to_nat(0u);
v___x_972_ = lean_array_get_size(v_params_960_);
v___x_973_ = lean_nat_dec_lt(v___x_971_, v___x_972_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; 
v___x_974_ = lean_apply_7(v___f_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, lean_box(0));
return v___x_974_;
}
else
{
lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_985_; 
lean_inc(v_included_970_);
lean_inc_ref(v_isCandidateFn_969_);
v_isSharedCheck_985_ = !lean_is_exclusive(v___y_962_);
if (v_isSharedCheck_985_ == 0)
{
lean_object* v_unused_986_; lean_object* v_unused_987_; 
v_unused_986_ = lean_ctor_get(v___y_962_, 1);
lean_dec(v_unused_986_);
v_unused_987_ = lean_ctor_get(v___y_962_, 0);
lean_dec(v_unused_987_);
v___x_976_ = v___y_962_;
v_isShared_977_ = v_isSharedCheck_985_;
goto v_resetjp_975_;
}
else
{
lean_dec(v___y_962_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_985_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
size_t v___x_978_; size_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_982_; 
v___x_978_ = ((size_t)0ULL);
v___x_979_ = lean_usize_of_nat(v___x_972_);
v___x_980_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(v_params_960_, v___x_978_, v___x_979_, v_included_970_);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 1, v___x_980_);
v___x_982_ = v___x_976_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_isCandidateFn_969_);
lean_ctor_set(v_reuseFailAlloc_984_, 1, v___x_980_);
v___x_982_ = v_reuseFailAlloc_984_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_983_; 
v___x_983_ = lean_apply_7(v___f_961_, v___x_982_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, lean_box(0));
return v___x_983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1___boxed(lean_object* v_params_988_, lean_object* v___f_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1(v_params_988_, v___f_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
lean_dec_ref(v_params_988_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls(lean_object* v_decl_999_, lean_object* v_isCandidateFn_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v_toSignature_1006_; lean_object* v_value_1007_; uint8_t v_recursive_1008_; lean_object* v_inlineAttr_x3f_1009_; lean_object* v_params_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___x_1015_; 
v_toSignature_1006_ = lean_ctor_get(v_decl_999_, 0);
lean_inc_ref(v_toSignature_1006_);
v_value_1007_ = lean_ctor_get(v_decl_999_, 1);
lean_inc_ref(v_value_1007_);
v_recursive_1008_ = lean_ctor_get_uint8(v_decl_999_, sizeof(void*)*3);
v_inlineAttr_x3f_1009_ = lean_ctor_get(v_decl_999_, 2);
lean_inc(v_inlineAttr_x3f_1009_);
lean_dec_ref(v_decl_999_);
v_params_1010_ = lean_ctor_get(v_toSignature_1006_, 3);
lean_inc_ref(v_params_1010_);
v___x_1011_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_pullLetDecls___closed__0));
v___x_1012_ = lean_box(v_recursive_1008_);
v___f_1013_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1013_, 0, v___x_1011_);
lean_closure_set(v___f_1013_, 1, v_value_1007_);
lean_closure_set(v___f_1013_, 2, v_toSignature_1006_);
lean_closure_set(v___f_1013_, 3, v___x_1012_);
lean_closure_set(v___f_1013_, 4, v_inlineAttr_x3f_1009_);
v___f_1014_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1___boxed), 9, 2);
lean_closure_set(v___f_1014_, 0, v_params_1010_);
lean_closure_set(v___f_1014_, 1, v___f_1013_);
v___x_1015_ = l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg(v___f_1014_, v_isCandidateFn_1000_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___boxed(lean_object* v_decl_1016_, lean_object* v_isCandidateFn_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l_Lean_Compiler_LCNF_Decl_pullLetDecls(v_decl_1016_, v_isCandidateFn_1017_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_);
lean_dec(v_a_1021_);
lean_dec_ref(v_a_1020_);
lean_dec(v_a_1019_);
lean_dec_ref(v_a_1018_);
return v_res_1023_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0___redArg(lean_object* v_k_1024_, lean_object* v_t_1025_){
_start:
{
if (lean_obj_tag(v_t_1025_) == 0)
{
lean_object* v_k_1026_; lean_object* v_l_1027_; lean_object* v_r_1028_; uint8_t v___x_1029_; 
v_k_1026_ = lean_ctor_get(v_t_1025_, 1);
v_l_1027_ = lean_ctor_get(v_t_1025_, 3);
v_r_1028_ = lean_ctor_get(v_t_1025_, 4);
v___x_1029_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1024_, v_k_1026_);
switch(v___x_1029_)
{
case 0:
{
v_t_1025_ = v_l_1027_;
goto _start;
}
case 1:
{
uint8_t v___x_1031_; 
v___x_1031_ = 1;
return v___x_1031_;
}
default: 
{
v_t_1025_ = v_r_1028_;
goto _start;
}
}
}
else
{
uint8_t v___x_1033_; 
v___x_1033_ = 0;
return v___x_1033_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0___redArg___boxed(lean_object* v_k_1034_, lean_object* v_t_1035_){
_start:
{
uint8_t v_res_1036_; lean_object* v_r_1037_; 
v_res_1036_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0___redArg(v_k_1034_, v_t_1035_);
lean_dec(v_t_1035_);
lean_dec(v_k_1034_);
v_r_1037_ = lean_box(v_res_1036_);
return v_r_1037_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__1(lean_object* v_as_1038_, size_t v_i_1039_, size_t v_stop_1040_){
_start:
{
uint8_t v___x_1041_; 
v___x_1041_ = lean_usize_dec_eq(v_i_1039_, v_stop_1040_);
if (v___x_1041_ == 0)
{
lean_object* v___x_1042_; lean_object* v___x_1043_; uint8_t v___x_1044_; 
v___x_1042_ = lean_array_uget_borrowed(v_as_1038_, v_i_1039_);
v___x_1043_ = lean_box(0);
v___x_1044_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_1042_, v___x_1043_);
if (v___x_1044_ == 0)
{
size_t v___x_1045_; size_t v___x_1046_; 
v___x_1045_ = ((size_t)1ULL);
v___x_1046_ = lean_usize_add(v_i_1039_, v___x_1045_);
v_i_1039_ = v___x_1046_;
goto _start;
}
else
{
return v___x_1044_;
}
}
else
{
uint8_t v___x_1048_; 
v___x_1048_ = 0;
return v___x_1048_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__1___boxed(lean_object* v_as_1049_, lean_object* v_i_1050_, lean_object* v_stop_1051_){
_start:
{
size_t v_i_boxed_1052_; size_t v_stop_boxed_1053_; uint8_t v_res_1054_; lean_object* v_r_1055_; 
v_i_boxed_1052_ = lean_unbox_usize(v_i_1050_);
lean_dec(v_i_1050_);
v_stop_boxed_1053_ = lean_unbox_usize(v_stop_1051_);
lean_dec(v_stop_1051_);
v_res_1054_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__1(v_as_1049_, v_i_boxed_1052_, v_stop_boxed_1053_);
lean_dec_ref(v_as_1049_);
v_r_1055_ = lean_box(v_res_1054_);
return v_r_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0(lean_object* v_letDecl_1059_, lean_object* v_candidates_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v_type_1066_; lean_object* v_value_1067_; lean_object* v___y_1069_; lean_object* v___y_1105_; 
v_type_1066_ = lean_ctor_get(v_letDecl_1059_, 2);
v_value_1067_ = lean_ctor_get(v_letDecl_1059_, 3);
if (lean_obj_tag(v_value_1067_) == 3)
{
lean_object* v_args_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; uint8_t v___x_1119_; 
v_args_1116_ = lean_ctor_get(v_value_1067_, 2);
v___x_1117_ = lean_unsigned_to_nat(0u);
v___x_1118_ = lean_array_get_size(v_args_1116_);
v___x_1119_ = lean_nat_dec_lt(v___x_1117_, v___x_1118_);
if (v___x_1119_ == 0)
{
v___y_1105_ = v___y_1064_;
goto v___jp_1104_;
}
else
{
if (v___x_1119_ == 0)
{
v___y_1105_ = v___y_1064_;
goto v___jp_1104_;
}
else
{
size_t v___x_1120_; size_t v___x_1121_; uint8_t v___x_1122_; 
v___x_1120_ = ((size_t)0ULL);
v___x_1121_ = lean_usize_of_nat(v___x_1118_);
v___x_1122_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__1(v_args_1116_, v___x_1120_, v___x_1121_);
if (v___x_1122_ == 0)
{
v___y_1105_ = v___y_1064_;
goto v___jp_1104_;
}
else
{
uint8_t v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1123_ = 0;
v___x_1124_ = lean_box(v___x_1123_);
v___x_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1124_);
return v___x_1125_;
}
}
}
}
else
{
v___y_1105_ = v___y_1064_;
goto v___jp_1104_;
}
v___jp_1068_:
{
lean_object* v___x_1070_; uint8_t v___x_1071_; 
v___x_1070_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__1));
v___x_1071_ = l_Lean_Expr_isAppOf(v_type_1066_, v___x_1070_);
if (v___x_1071_ == 0)
{
lean_object* v___x_1072_; 
v___x_1072_ = l_Lean_Compiler_LCNF_isClass_x3f___redArg(v_type_1066_, v___y_1069_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1092_; 
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1075_ = v___x_1072_;
v_isShared_1076_ = v_isSharedCheck_1092_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1072_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1092_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
if (lean_obj_tag(v_a_1073_) == 0)
{
if (lean_obj_tag(v_value_1067_) == 2)
{
lean_object* v_struct_1077_; uint8_t v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1081_; 
v_struct_1077_ = lean_ctor_get(v_value_1067_, 2);
v___x_1078_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0___redArg(v_struct_1077_, v_candidates_1060_);
v___x_1079_ = lean_box(v___x_1078_);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 0, v___x_1079_);
v___x_1081_ = v___x_1075_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v___x_1079_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
else
{
lean_object* v___x_1083_; lean_object* v___x_1085_; 
v___x_1083_ = lean_box(v___x_1071_);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 0, v___x_1083_);
v___x_1085_ = v___x_1075_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v___x_1083_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
else
{
uint8_t v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1090_; 
lean_dec_ref_known(v_a_1073_, 1);
v___x_1087_ = 1;
v___x_1088_ = lean_box(v___x_1087_);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 0, v___x_1088_);
v___x_1090_ = v___x_1075_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1088_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
v_a_1093_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___x_1072_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1072_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1093_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
}
else
{
uint8_t v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1101_ = 0;
v___x_1102_ = lean_box(v___x_1101_);
v___x_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
return v___x_1103_;
}
}
v___jp_1104_:
{
if (lean_obj_tag(v_value_1067_) == 4)
{
lean_object* v_args_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; 
v_args_1106_ = lean_ctor_get(v_value_1067_, 1);
v___x_1107_ = lean_unsigned_to_nat(0u);
v___x_1108_ = lean_array_get_size(v_args_1106_);
v___x_1109_ = lean_nat_dec_lt(v___x_1107_, v___x_1108_);
if (v___x_1109_ == 0)
{
v___y_1069_ = v___y_1105_;
goto v___jp_1068_;
}
else
{
if (v___x_1109_ == 0)
{
v___y_1069_ = v___y_1105_;
goto v___jp_1068_;
}
else
{
size_t v___x_1110_; size_t v___x_1111_; uint8_t v___x_1112_; 
v___x_1110_ = ((size_t)0ULL);
v___x_1111_ = lean_usize_of_nat(v___x_1108_);
v___x_1112_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__1(v_args_1106_, v___x_1110_, v___x_1111_);
if (v___x_1112_ == 0)
{
v___y_1069_ = v___y_1105_;
goto v___jp_1068_;
}
else
{
uint8_t v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1113_ = 0;
v___x_1114_ = lean_box(v___x_1113_);
v___x_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1114_);
return v___x_1115_;
}
}
}
}
else
{
v___y_1069_ = v___y_1105_;
goto v___jp_1068_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___boxed(lean_object* v_letDecl_1126_, lean_object* v_candidates_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0(v_letDecl_1126_, v_candidates_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec(v_candidates_1127_);
lean_dec_ref(v_letDecl_1126_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances(lean_object* v_decl_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_){
_start:
{
lean_object* v___f_1141_; lean_object* v___x_1142_; 
v___f_1141_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_pullInstances___closed__0));
v___x_1142_ = l_Lean_Compiler_LCNF_Decl_pullLetDecls(v_decl_1135_, v___f_1141_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___boxed(lean_object* v_decl_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_Compiler_LCNF_Decl_pullInstances(v_decl_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
lean_dec(v_a_1147_);
lean_dec_ref(v_a_1146_);
lean_dec(v_a_1145_);
lean_dec_ref(v_a_1144_);
return v_res_1149_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0(lean_object* v_00_u03b2_1150_, lean_object* v_k_1151_, lean_object* v_t_1152_){
_start:
{
uint8_t v___x_1153_; 
v___x_1153_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0___redArg(v_k_1151_, v_t_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0___boxed(lean_object* v_00_u03b2_1154_, lean_object* v_k_1155_, lean_object* v_t_1156_){
_start:
{
uint8_t v_res_1157_; lean_object* v_r_1158_; 
v_res_1157_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0(v_00_u03b2_1154_, v_k_1155_, v_t_1156_);
lean_dec(v_t_1156_);
lean_dec(v_k_1155_);
v_r_1158_ = lean_box(v_res_1157_);
return v_r_1158_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_pullInstances___closed__3(void){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1163_ = lean_unsigned_to_nat(0u);
v___x_1164_ = ((lean_object*)(l_Lean_Compiler_LCNF_pullInstances___closed__2));
v___x_1165_ = 0;
v___x_1166_ = ((lean_object*)(l_Lean_Compiler_LCNF_pullInstances___closed__1));
v___x_1167_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_1166_, v___x_1165_, v___x_1164_, v___x_1163_);
return v___x_1167_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_pullInstances(void){
_start:
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_obj_once(&l_Lean_Compiler_LCNF_pullInstances___closed__3, &l_Lean_Compiler_LCNF_pullInstances___closed__3_once, _init_l_Lean_Compiler_LCNF_pullInstances___closed__3);
return v___x_1168_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1224_ = lean_unsigned_to_nat(3825914912u);
v___x_1225_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_));
v___x_1226_ = l_Lean_Name_num___override(v___x_1225_, v___x_1224_);
return v___x_1226_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1228_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_));
v___x_1229_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_);
v___x_1230_ = l_Lean_Name_str___override(v___x_1229_, v___x_1228_);
return v___x_1230_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1232_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_));
v___x_1233_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_);
v___x_1234_ = l_Lean_Name_str___override(v___x_1233_, v___x_1232_);
return v___x_1234_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1235_ = lean_unsigned_to_nat(2u);
v___x_1236_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_);
v___x_1237_ = l_Lean_Name_num___override(v___x_1236_, v___x_1235_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1239_; uint8_t v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1239_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_));
v___x_1240_ = 1;
v___x_1241_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_);
v___x_1242_ = l_Lean_registerTraceClass(v___x_1239_, v___x_1240_, v___x_1241_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2____boxed(lean_object* v_a_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_();
return v_res_1244_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_PullLetDecls(uint8_t builtin) {
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
l_Lean_Compiler_LCNF_pullInstances = _init_l_Lean_Compiler_LCNF_pullInstances();
lean_mark_persistent(l_Lean_Compiler_LCNF_pullInstances);
res = l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_PullLetDecls(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_PullLetDecls(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PullLetDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_PullLetDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_PullLetDecls(builtin);
}
#ifdef __cplusplus
}
#endif
