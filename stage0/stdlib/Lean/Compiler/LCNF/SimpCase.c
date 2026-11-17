// Lean compiler output
// Module: Lean.Compiler.LCNF.SimpCase
// Imports: public import Lean.Compiler.LCNF.CompilerM public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.AlphaEqv import Init.Omega
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_alphaEqv(uint8_t, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.SimpCase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "_private.Lean.Compiler.LCNF.SimpCase.0.Lean.Compiler.LCNF.addDefaultAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_simplifyCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_simplifyCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ensureHasDefault_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ensureHasDefault_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureHasDefault(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_simpCase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpCase"};
static const lean_object* l_Lean_Compiler_LCNF_simpCase___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_simpCase___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_simpCase___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_simpCase___closed__0_value),LEAN_SCALAR_PTR_LITERAL(68, 92, 41, 80, 34, 13, 30, 2)}};
static const lean_object* l_Lean_Compiler_LCNF_simpCase___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_simpCase___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_simpCase___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_simpCase___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_simpCase___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_simpCase___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_simpCase___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simpCase;
static const lean_string_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_simpCase___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 115, 95, 67, 81, 150, 198, 169)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "SimpCase"};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(148, 85, 95, 162, 237, 93, 136, 210)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(149, 85, 1, 1, 249, 114, 201, 242)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(128, 195, 27, 71, 70, 238, 5, 249)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(218, 73, 79, 143, 6, 98, 132, 204)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(59, 66, 31, 97, 69, 225, 237, 3)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(10, 203, 5, 135, 216, 0, 147, 100)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 166, 14, 190, 157, 30, 192, 24)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 200, 250, 209, 136, 24, 111, 216)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(12, 208, 198, 202, 11, 103, 204, 69)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(205, 185, 0, 153, 59, 162, 228, 227)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(136, 14, 40, 21, 139, 206, 91, 108)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1808010913) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(44, 138, 246, 18, 227, 5, 112, 193)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 122, 251, 129, 187, 139, 157, 59)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(131, 16, 117, 131, 59, 32, 143, 15)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(70, 179, 246, 216, 56, 171, 143, 161)}};
static const lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0___redArg(lean_object* v_upperBound_1_, lean_object* v_alts_2_, lean_object* v_code_3_, lean_object* v_a_4_, lean_object* v_b_5_){
_start:
{
uint8_t v___x_6_; 
v___x_6_ = lean_nat_dec_lt(v_a_4_, v_upperBound_1_);
if (v___x_6_ == 0)
{
lean_dec(v_a_4_);
lean_dec_ref(v_code_3_);
return v_b_5_;
}
else
{
uint8_t v___x_7_; lean_object* v_n_8_; lean_object* v_a_10_; lean_object* v___y_14_; lean_object* v___x_17_; 
v___x_7_ = 1;
v_n_8_ = lean_unsigned_to_nat(1u);
v___x_17_ = lean_array_fget_borrowed(v_alts_2_, v_a_4_);
switch(lean_obj_tag(v___x_17_))
{
case 0:
{
lean_object* v_code_18_; 
v_code_18_ = lean_ctor_get(v___x_17_, 2);
lean_inc_ref(v_code_18_);
v___y_14_ = v_code_18_;
goto v___jp_13_;
}
case 1:
{
lean_object* v_code_19_; 
v_code_19_ = lean_ctor_get(v___x_17_, 1);
lean_inc_ref(v_code_19_);
v___y_14_ = v_code_19_;
goto v___jp_13_;
}
default: 
{
lean_object* v_code_20_; 
v_code_20_ = lean_ctor_get(v___x_17_, 0);
lean_inc_ref(v_code_20_);
v___y_14_ = v_code_20_;
goto v___jp_13_;
}
}
v___jp_9_:
{
lean_object* v___x_11_; 
v___x_11_ = lean_nat_add(v_a_4_, v_n_8_);
lean_dec(v_a_4_);
v_a_4_ = v___x_11_;
v_b_5_ = v_a_10_;
goto _start;
}
v___jp_13_:
{
uint8_t v___x_15_; 
lean_inc_ref(v_code_3_);
v___x_15_ = l_Lean_Compiler_LCNF_Code_alphaEqv(v___x_7_, v___y_14_, v_code_3_);
if (v___x_15_ == 0)
{
v_a_10_ = v_b_5_;
goto v___jp_9_;
}
else
{
lean_object* v___x_16_; 
v___x_16_ = lean_nat_add(v_b_5_, v_n_8_);
lean_dec(v_b_5_);
v_a_10_ = v___x_16_;
goto v___jp_9_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0___redArg___boxed(lean_object* v_upperBound_21_, lean_object* v_alts_22_, lean_object* v_code_23_, lean_object* v_a_24_, lean_object* v_b_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0___redArg(v_upperBound_21_, v_alts_22_, v_code_23_, v_a_24_, v_b_25_);
lean_dec_ref(v_alts_22_);
lean_dec(v_upperBound_21_);
return v_res_26_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf(lean_object* v_alts_28_, lean_object* v_i_29_){
_start:
{
lean_object* v___x_30_; lean_object* v_n_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_30_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0, &l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0_once, _init_l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0);
v_n_31_ = lean_unsigned_to_nat(1u);
v___x_32_ = lean_nat_add(v_i_29_, v_n_31_);
v___x_33_ = lean_array_get_size(v_alts_28_);
v___x_34_ = lean_array_get_borrowed(v___x_30_, v_alts_28_, v_i_29_);
switch(lean_obj_tag(v___x_34_))
{
case 0:
{
lean_object* v_code_35_; lean_object* v___x_36_; 
v_code_35_ = lean_ctor_get(v___x_34_, 2);
lean_inc_ref(v_code_35_);
v___x_36_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0___redArg(v___x_33_, v_alts_28_, v_code_35_, v___x_32_, v_n_31_);
return v___x_36_;
}
case 1:
{
lean_object* v_code_37_; lean_object* v___x_38_; 
v_code_37_ = lean_ctor_get(v___x_34_, 1);
lean_inc_ref(v_code_37_);
v___x_38_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0___redArg(v___x_33_, v_alts_28_, v_code_37_, v___x_32_, v_n_31_);
return v___x_38_;
}
default: 
{
lean_object* v_code_39_; lean_object* v___x_40_; 
v_code_39_ = lean_ctor_get(v___x_34_, 0);
lean_inc_ref(v_code_39_);
v___x_40_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0___redArg(v___x_33_, v_alts_28_, v_code_39_, v___x_32_, v_n_31_);
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___boxed(lean_object* v_alts_41_, lean_object* v_i_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf(v_alts_41_, v_i_42_);
lean_dec(v_i_42_);
lean_dec_ref(v_alts_41_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0(lean_object* v_upperBound_44_, lean_object* v_alts_45_, lean_object* v_code_46_, lean_object* v_inst_47_, lean_object* v_R_48_, lean_object* v_a_49_, lean_object* v_b_50_, lean_object* v_c_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0___redArg(v_upperBound_44_, v_alts_45_, v_code_46_, v_a_49_, v_b_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0___boxed(lean_object* v_upperBound_53_, lean_object* v_alts_54_, lean_object* v_code_55_, lean_object* v_inst_56_, lean_object* v_R_57_, lean_object* v_a_58_, lean_object* v_b_59_, lean_object* v_c_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf_spec__0(v_upperBound_53_, v_alts_54_, v_code_55_, v_inst_56_, v_R_57_, v_a_58_, v_b_59_, v_c_60_);
lean_dec_ref(v_alts_54_);
lean_dec(v_upperBound_53_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0___redArg(lean_object* v_upperBound_62_, lean_object* v_alts_63_, lean_object* v_a_64_, lean_object* v_b_65_){
_start:
{
lean_object* v_a_67_; uint8_t v___x_71_; 
v___x_71_ = lean_nat_dec_lt(v_a_64_, v_upperBound_62_);
if (v___x_71_ == 0)
{
lean_dec(v_a_64_);
return v_b_65_;
}
else
{
lean_object* v_fst_72_; lean_object* v_snd_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_86_; 
v_fst_72_ = lean_ctor_get(v_b_65_, 0);
v_snd_73_ = lean_ctor_get(v_b_65_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_b_65_);
if (v_isSharedCheck_86_ == 0)
{
v___x_75_ = v_b_65_;
v_isShared_76_ = v_isSharedCheck_86_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_snd_73_);
lean_inc(v_fst_72_);
lean_dec(v_b_65_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_86_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_77_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf(v_alts_63_, v_a_64_);
v___x_78_ = lean_nat_dec_lt(v_snd_73_, v___x_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_80_; 
lean_dec(v___x_77_);
if (v_isShared_76_ == 0)
{
v___x_80_ = v___x_75_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_fst_72_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v_snd_73_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
v_a_67_ = v___x_80_;
goto v___jp_66_;
}
}
else
{
lean_object* v___x_82_; lean_object* v___x_84_; 
lean_dec(v_snd_73_);
lean_dec(v_fst_72_);
v___x_82_ = lean_array_fget_borrowed(v_alts_63_, v_a_64_);
lean_inc(v___x_82_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 1, v___x_77_);
lean_ctor_set(v___x_75_, 0, v___x_82_);
v___x_84_ = v___x_75_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_82_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v___x_77_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
v_a_67_ = v___x_84_;
goto v___jp_66_;
}
}
}
}
v___jp_66_:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = lean_nat_add(v_a_64_, v___x_68_);
lean_dec(v_a_64_);
v_a_64_ = v___x_69_;
v_b_65_ = v_a_67_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0___redArg___boxed(lean_object* v_upperBound_87_, lean_object* v_alts_88_, lean_object* v_a_89_, lean_object* v_b_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0___redArg(v_upperBound_87_, v_alts_88_, v_a_89_, v_b_90_);
lean_dec_ref(v_alts_88_);
lean_dec(v_upperBound_87_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs(lean_object* v_alts_92_){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v_maxAlt_97_; lean_object* v_max_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v_fst_101_; lean_object* v_snd_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_109_; 
v___x_93_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0, &l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0_once, _init_l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0);
v___x_94_ = lean_unsigned_to_nat(1u);
v___x_95_ = lean_array_get_size(v_alts_92_);
v___x_96_ = lean_unsigned_to_nat(0u);
v_maxAlt_97_ = lean_array_get_borrowed(v___x_93_, v_alts_92_, v___x_96_);
v_max_98_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf(v_alts_92_, v___x_96_);
lean_inc(v_maxAlt_97_);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v_maxAlt_97_);
lean_ctor_set(v___x_99_, 1, v_max_98_);
v___x_100_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0___redArg(v___x_95_, v_alts_92_, v___x_94_, v___x_99_);
v_fst_101_ = lean_ctor_get(v___x_100_, 0);
v_snd_102_ = lean_ctor_get(v___x_100_, 1);
v_isSharedCheck_109_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_109_ == 0)
{
v___x_104_ = v___x_100_;
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_snd_102_);
lean_inc(v_fst_101_);
lean_dec(v___x_100_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_107_; 
if (v_isShared_105_ == 0)
{
v___x_107_ = v___x_104_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_fst_101_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_snd_102_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs___boxed(lean_object* v_alts_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs(v_alts_110_);
lean_dec_ref(v_alts_110_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0(lean_object* v_upperBound_112_, lean_object* v_alts_113_, lean_object* v_inst_114_, lean_object* v_R_115_, lean_object* v_a_116_, lean_object* v_b_117_, lean_object* v_c_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0___redArg(v_upperBound_112_, v_alts_113_, v_a_116_, v_b_117_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0___boxed(lean_object* v_upperBound_120_, lean_object* v_alts_121_, lean_object* v_inst_122_, lean_object* v_R_123_, lean_object* v_a_124_, lean_object* v_b_125_, lean_object* v_c_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_spec__0(v_upperBound_120_, v_alts_121_, v_inst_122_, v_R_123_, v_a_124_, v_b_125_, v_c_126_);
lean_dec_ref(v_alts_121_);
lean_dec(v_upperBound_120_);
return v_res_127_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__0(void){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_instMonadEIO___redArg();
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0(lean_object* v_msg_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v_toApplicative_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_172_; 
v___x_137_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__0);
v___x_138_ = l_StateRefT_x27_instMonad___redArg(v___x_137_);
v_toApplicative_139_ = lean_ctor_get(v___x_138_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_172_ == 0)
{
lean_object* v_unused_173_; 
v_unused_173_ = lean_ctor_get(v___x_138_, 1);
lean_dec(v_unused_173_);
v___x_141_ = v___x_138_;
v_isShared_142_ = v_isSharedCheck_172_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_toApplicative_139_);
lean_dec(v___x_138_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_172_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v_toFunctor_143_; lean_object* v_toSeq_144_; lean_object* v_toSeqLeft_145_; lean_object* v_toSeqRight_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_170_; 
v_toFunctor_143_ = lean_ctor_get(v_toApplicative_139_, 0);
v_toSeq_144_ = lean_ctor_get(v_toApplicative_139_, 2);
v_toSeqLeft_145_ = lean_ctor_get(v_toApplicative_139_, 3);
v_toSeqRight_146_ = lean_ctor_get(v_toApplicative_139_, 4);
v_isSharedCheck_170_ = !lean_is_exclusive(v_toApplicative_139_);
if (v_isSharedCheck_170_ == 0)
{
lean_object* v_unused_171_; 
v_unused_171_ = lean_ctor_get(v_toApplicative_139_, 1);
lean_dec(v_unused_171_);
v___x_148_ = v_toApplicative_139_;
v_isShared_149_ = v_isSharedCheck_170_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_toSeqRight_146_);
lean_inc(v_toSeqLeft_145_);
lean_inc(v_toSeq_144_);
lean_inc(v_toFunctor_143_);
lean_dec(v_toApplicative_139_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_170_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___f_150_; lean_object* v___f_151_; lean_object* v___f_152_; lean_object* v___f_153_; lean_object* v___x_154_; lean_object* v___f_155_; lean_object* v___f_156_; lean_object* v___f_157_; lean_object* v___x_159_; 
v___f_150_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__1));
v___f_151_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___closed__2));
lean_inc_ref(v_toFunctor_143_);
v___f_152_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_152_, 0, v_toFunctor_143_);
v___f_153_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_153_, 0, v_toFunctor_143_);
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v___f_152_);
lean_ctor_set(v___x_154_, 1, v___f_153_);
v___f_155_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_155_, 0, v_toSeqRight_146_);
v___f_156_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_156_, 0, v_toSeqLeft_145_);
v___f_157_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_157_, 0, v_toSeq_144_);
if (v_isShared_149_ == 0)
{
lean_ctor_set(v___x_148_, 4, v___f_155_);
lean_ctor_set(v___x_148_, 3, v___f_156_);
lean_ctor_set(v___x_148_, 2, v___f_157_);
lean_ctor_set(v___x_148_, 1, v___f_150_);
lean_ctor_set(v___x_148_, 0, v___x_154_);
v___x_159_ = v___x_148_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v___f_150_);
lean_ctor_set(v_reuseFailAlloc_169_, 2, v___f_157_);
lean_ctor_set(v_reuseFailAlloc_169_, 3, v___f_156_);
lean_ctor_set(v_reuseFailAlloc_169_, 4, v___f_155_);
v___x_159_ = v_reuseFailAlloc_169_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
lean_object* v___x_161_; 
if (v_isShared_142_ == 0)
{
lean_ctor_set(v___x_141_, 1, v___f_151_);
lean_ctor_set(v___x_141_, 0, v___x_159_);
v___x_161_ = v___x_141_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_159_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v___f_151_);
v___x_161_ = v_reuseFailAlloc_168_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___f_165_; lean_object* v___x_1770__overap_166_; lean_object* v___x_167_; 
v___x_162_ = l_StateRefT_x27_instMonad___redArg(v___x_161_);
v___x_163_ = lean_box(0);
v___x_164_ = l_instInhabitedOfMonad___redArg(v___x_162_, v___x_163_);
v___f_165_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_165_, 0, v___x_164_);
v___x_1770__overap_166_ = lean_panic_fn_borrowed(v___f_165_, v_msg_131_);
lean_dec_ref(v___f_165_);
lean_inc(v___y_135_);
lean_inc_ref(v___y_134_);
lean_inc(v___y_133_);
lean_inc_ref(v___y_132_);
v___x_167_ = lean_apply_5(v___x_1770__overap_166_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, lean_box(0));
return v___x_167_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0___boxed(lean_object* v_msg_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0(v_msg_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
return v_res_180_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__3(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_184_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__2));
v___x_185_ = lean_unsigned_to_nat(36u);
v___x_186_ = lean_unsigned_to_nat(77u);
v___x_187_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__1));
v___x_188_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__0));
v___x_189_ = l_mkPanicMessageWithDecl(v___x_188_, v___x_187_, v___x_186_, v___x_185_, v___x_184_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1(lean_object* v_snd_190_, lean_object* v_fst_191_, lean_object* v_as_192_, size_t v_sz_193_, size_t v_i_194_, lean_object* v_b_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v_a_202_; uint8_t v___x_206_; 
v___x_206_ = lean_usize_dec_lt(v_i_194_, v_sz_193_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; 
lean_dec_ref(v_fst_191_);
v___x_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_207_, 0, v_b_195_);
return v___x_207_;
}
else
{
lean_object* v_fst_208_; lean_object* v_snd_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_258_; 
v_fst_208_ = lean_ctor_get(v_b_195_, 0);
v_snd_209_ = lean_ctor_get(v_b_195_, 1);
v_isSharedCheck_258_ = !lean_is_exclusive(v_b_195_);
if (v_isSharedCheck_258_ == 0)
{
v___x_211_ = v_b_195_;
v_isShared_212_ = v_isSharedCheck_258_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_snd_209_);
lean_inc(v_fst_208_);
lean_dec(v_b_195_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_258_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_213_; uint8_t v___x_214_; lean_object* v_a_220_; uint8_t v___x_221_; lean_object* v___y_223_; lean_object* v___y_224_; lean_object* v___y_251_; 
v___x_213_ = lean_unsigned_to_nat(1u);
v___x_214_ = lean_nat_dec_eq(v_snd_190_, v___x_213_);
v_a_220_ = lean_array_uget_borrowed(v_as_192_, v_i_194_);
v___x_221_ = 1;
switch(lean_obj_tag(v_a_220_))
{
case 0:
{
lean_object* v_code_255_; 
v_code_255_ = lean_ctor_get(v_a_220_, 2);
lean_inc_ref(v_code_255_);
v___y_251_ = v_code_255_;
goto v___jp_250_;
}
case 1:
{
lean_object* v_code_256_; 
v_code_256_ = lean_ctor_get(v_a_220_, 1);
lean_inc_ref(v_code_256_);
v___y_251_ = v_code_256_;
goto v___jp_250_;
}
default: 
{
lean_object* v_code_257_; 
v_code_257_ = lean_ctor_get(v_a_220_, 0);
lean_inc_ref(v_code_257_);
v___y_251_ = v_code_257_;
goto v___jp_250_;
}
}
v___jp_215_:
{
lean_object* v___x_216_; lean_object* v___x_218_; 
v___x_216_ = lean_box(v___x_214_);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 1, v___x_216_);
v___x_218_ = v___x_211_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_fst_208_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v___x_216_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
v_a_202_ = v___x_218_;
goto v___jp_201_;
}
}
v___jp_222_:
{
uint8_t v___x_225_; 
v___x_225_ = l_Lean_Compiler_LCNF_Code_alphaEqv(v___x_221_, v___y_223_, v___y_224_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_del_object(v___x_211_);
lean_inc(v_a_220_);
v___x_226_ = lean_array_push(v_fst_208_, v_a_220_);
v___x_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v_snd_209_);
v_a_202_ = v___x_227_;
goto v___jp_201_;
}
else
{
if (lean_obj_tag(v_a_220_) == 1)
{
uint8_t v___x_228_; 
v___x_228_ = lean_unbox(v_snd_209_);
lean_dec(v_snd_209_);
if (v___x_228_ == 0)
{
lean_object* v_code_229_; lean_object* v___x_230_; 
v_code_229_ = lean_ctor_get(v_a_220_, 1);
v___x_230_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_221_, v_code_229_, v___y_197_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_dec_ref_known(v___x_230_, 1);
goto v___jp_215_;
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
lean_del_object(v___x_211_);
lean_dec(v_fst_208_);
lean_dec_ref(v_fst_191_);
v_a_231_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_230_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_230_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
else
{
goto v___jp_215_;
}
}
else
{
lean_object* v___x_239_; lean_object* v___x_240_; 
lean_del_object(v___x_211_);
v___x_239_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___closed__3);
v___x_240_ = l_panic___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__0(v___x_239_, v___y_196_, v___y_197_, v___y_198_, v___y_199_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v___x_241_; 
lean_dec_ref_known(v___x_240_, 1);
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v_fst_208_);
lean_ctor_set(v___x_241_, 1, v_snd_209_);
v_a_202_ = v___x_241_;
goto v___jp_201_;
}
else
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
lean_dec(v_snd_209_);
lean_dec(v_fst_208_);
lean_dec_ref(v_fst_191_);
v_a_242_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v___x_240_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_240_);
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
v___jp_250_:
{
switch(lean_obj_tag(v_fst_191_))
{
case 0:
{
lean_object* v_code_252_; 
v_code_252_ = lean_ctor_get(v_fst_191_, 2);
lean_inc_ref(v_code_252_);
v___y_223_ = v___y_251_;
v___y_224_ = v_code_252_;
goto v___jp_222_;
}
case 1:
{
lean_object* v_code_253_; 
v_code_253_ = lean_ctor_get(v_fst_191_, 1);
lean_inc_ref(v_code_253_);
v___y_223_ = v___y_251_;
v___y_224_ = v_code_253_;
goto v___jp_222_;
}
default: 
{
lean_object* v_code_254_; 
v_code_254_ = lean_ctor_get(v_fst_191_, 0);
lean_inc_ref(v_code_254_);
v___y_223_ = v___y_251_;
v___y_224_ = v_code_254_;
goto v___jp_222_;
}
}
}
}
}
v___jp_201_:
{
size_t v___x_203_; size_t v___x_204_; 
v___x_203_ = ((size_t)1ULL);
v___x_204_ = lean_usize_add(v_i_194_, v___x_203_);
v_i_194_ = v___x_204_;
v_b_195_ = v_a_202_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1___boxed(lean_object* v_snd_259_, lean_object* v_fst_260_, lean_object* v_as_261_, lean_object* v_sz_262_, lean_object* v_i_263_, lean_object* v_b_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
size_t v_sz_boxed_270_; size_t v_i_boxed_271_; lean_object* v_res_272_; 
v_sz_boxed_270_ = lean_unbox_usize(v_sz_262_);
lean_dec(v_sz_262_);
v_i_boxed_271_ = lean_unbox_usize(v_i_263_);
lean_dec(v_i_263_);
v_res_272_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1(v_snd_259_, v_fst_260_, v_as_261_, v_sz_boxed_270_, v_i_boxed_271_, v_b_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec_ref(v_as_261_);
lean_dec(v_snd_259_);
return v_res_272_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__2(lean_object* v___x_273_, lean_object* v_as_274_, size_t v_i_275_, size_t v_stop_276_){
_start:
{
uint8_t v___x_277_; 
v___x_277_ = lean_usize_dec_eq(v_i_275_, v_stop_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; 
v___x_278_ = lean_array_uget_borrowed(v_as_274_, v_i_275_);
if (lean_obj_tag(v___x_278_) == 2)
{
uint8_t v___x_279_; 
v___x_279_ = 1;
return v___x_279_;
}
else
{
lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(1u);
v___x_281_ = lean_nat_dec_le(v___x_273_, v___x_280_);
if (v___x_281_ == 0)
{
size_t v___x_282_; size_t v___x_283_; 
v___x_282_ = ((size_t)1ULL);
v___x_283_ = lean_usize_add(v_i_275_, v___x_282_);
v_i_275_ = v___x_283_;
goto _start;
}
else
{
return v___x_281_;
}
}
}
else
{
uint8_t v___x_285_; 
v___x_285_ = 0;
return v___x_285_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__2___boxed(lean_object* v___x_286_, lean_object* v_as_287_, lean_object* v_i_288_, lean_object* v_stop_289_){
_start:
{
size_t v_i_boxed_290_; size_t v_stop_boxed_291_; uint8_t v_res_292_; lean_object* v_r_293_; 
v_i_boxed_290_ = lean_unbox_usize(v_i_288_);
lean_dec(v_i_288_);
v_stop_boxed_291_ = lean_unbox_usize(v_stop_289_);
lean_dec(v_stop_289_);
v_res_292_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__2(v___x_286_, v_as_287_, v_i_boxed_290_, v_stop_boxed_291_);
lean_dec_ref(v_as_287_);
lean_dec(v___x_286_);
v_r_293_ = lean_box(v_res_292_);
return v_r_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt(lean_object* v_alts_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v___y_307_; lean_object* v___y_308_; lean_object* v___x_338_; lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_338_ = lean_array_get_size(v_alts_300_);
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = lean_nat_dec_le(v___x_338_, v___x_339_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_341_ = lean_unsigned_to_nat(0u);
v___x_342_ = lean_nat_dec_lt(v___x_341_, v___x_338_);
if (v___x_342_ == 0)
{
goto v___jp_312_;
}
else
{
if (v___x_342_ == 0)
{
goto v___jp_312_;
}
else
{
size_t v___x_343_; size_t v___x_344_; uint8_t v___x_345_; 
v___x_343_ = ((size_t)0ULL);
v___x_344_ = lean_usize_of_nat(v___x_338_);
v___x_345_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__2(v___x_338_, v_alts_300_, v___x_343_, v___x_344_);
if (v___x_345_ == 0)
{
goto v___jp_312_;
}
else
{
lean_object* v___x_346_; 
v___x_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_346_, 0, v_alts_300_);
return v___x_346_;
}
}
}
}
else
{
lean_object* v___x_347_; 
v___x_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_347_, 0, v_alts_300_);
return v___x_347_;
}
v___jp_306_:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_309_, 0, v___y_308_);
v___x_310_ = lean_array_push(v___y_307_, v___x_309_);
v___x_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
return v___x_311_;
}
v___jp_312_:
{
lean_object* v___x_313_; lean_object* v_fst_314_; lean_object* v_snd_315_; lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_313_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs(v_alts_300_);
v_fst_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_fst_314_);
v_snd_315_ = lean_ctor_get(v___x_313_, 1);
lean_inc(v_snd_315_);
lean_dec_ref(v___x_313_);
v___x_316_ = lean_unsigned_to_nat(1u);
v___x_317_ = lean_nat_dec_eq(v_snd_315_, v___x_316_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; size_t v_sz_319_; size_t v___x_320_; lean_object* v___x_321_; 
v___x_318_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt___closed__1));
v_sz_319_ = lean_array_size(v_alts_300_);
v___x_320_ = ((size_t)0ULL);
lean_inc(v_fst_314_);
v___x_321_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt_spec__1(v_snd_315_, v_fst_314_, v_alts_300_, v_sz_319_, v___x_320_, v___x_318_, v_a_301_, v_a_302_, v_a_303_, v_a_304_);
lean_dec_ref(v_alts_300_);
lean_dec(v_snd_315_);
if (lean_obj_tag(v___x_321_) == 0)
{
lean_object* v_a_322_; 
v_a_322_ = lean_ctor_get(v___x_321_, 0);
lean_inc(v_a_322_);
lean_dec_ref_known(v___x_321_, 1);
switch(lean_obj_tag(v_fst_314_))
{
case 0:
{
lean_object* v_fst_323_; lean_object* v_code_324_; 
v_fst_323_ = lean_ctor_get(v_a_322_, 0);
lean_inc(v_fst_323_);
lean_dec(v_a_322_);
v_code_324_ = lean_ctor_get(v_fst_314_, 2);
lean_inc_ref(v_code_324_);
lean_dec_ref_known(v_fst_314_, 3);
v___y_307_ = v_fst_323_;
v___y_308_ = v_code_324_;
goto v___jp_306_;
}
case 1:
{
lean_object* v_fst_325_; lean_object* v_code_326_; 
v_fst_325_ = lean_ctor_get(v_a_322_, 0);
lean_inc(v_fst_325_);
lean_dec(v_a_322_);
v_code_326_ = lean_ctor_get(v_fst_314_, 1);
lean_inc_ref(v_code_326_);
lean_dec_ref_known(v_fst_314_, 2);
v___y_307_ = v_fst_325_;
v___y_308_ = v_code_326_;
goto v___jp_306_;
}
default: 
{
lean_object* v_fst_327_; lean_object* v_code_328_; 
v_fst_327_ = lean_ctor_get(v_a_322_, 0);
lean_inc(v_fst_327_);
lean_dec(v_a_322_);
v_code_328_ = lean_ctor_get(v_fst_314_, 0);
lean_inc_ref(v_code_328_);
lean_dec_ref_known(v_fst_314_, 1);
v___y_307_ = v_fst_327_;
v___y_308_ = v_code_328_;
goto v___jp_306_;
}
}
}
else
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_336_; 
lean_dec(v_fst_314_);
v_a_329_ = lean_ctor_get(v___x_321_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_336_ == 0)
{
v___x_331_ = v___x_321_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_321_);
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
else
{
lean_object* v___x_337_; 
lean_dec(v_snd_315_);
lean_dec(v_fst_314_);
v___x_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_337_, 0, v_alts_300_);
return v___x_337_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt___boxed(lean_object* v_alts_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt(v_alts_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_);
lean_dec(v_a_352_);
lean_dec_ref(v_a_351_);
lean_dec(v_a_350_);
lean_dec_ref(v_a_349_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable_spec__0(lean_object* v_as_355_, size_t v_i_356_, size_t v_stop_357_, lean_object* v_b_358_){
_start:
{
lean_object* v___y_360_; uint8_t v___x_364_; 
v___x_364_ = lean_usize_dec_eq(v_i_356_, v_stop_357_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___y_367_; 
v___x_365_ = lean_array_uget_borrowed(v_as_355_, v_i_356_);
switch(lean_obj_tag(v___x_365_))
{
case 0:
{
lean_object* v_code_369_; 
v_code_369_ = lean_ctor_get(v___x_365_, 2);
lean_inc_ref(v_code_369_);
v___y_367_ = v_code_369_;
goto v___jp_366_;
}
case 1:
{
lean_object* v_code_370_; 
v_code_370_ = lean_ctor_get(v___x_365_, 1);
lean_inc_ref(v_code_370_);
v___y_367_ = v_code_370_;
goto v___jp_366_;
}
default: 
{
lean_object* v_code_371_; 
v_code_371_ = lean_ctor_get(v___x_365_, 0);
lean_inc_ref(v_code_371_);
v___y_367_ = v_code_371_;
goto v___jp_366_;
}
}
v___jp_366_:
{
if (lean_obj_tag(v___y_367_) == 6)
{
lean_dec_ref_known(v___y_367_, 1);
v___y_360_ = v_b_358_;
goto v___jp_359_;
}
else
{
lean_object* v___x_368_; 
lean_dec_ref(v___y_367_);
lean_inc(v___x_365_);
v___x_368_ = lean_array_push(v_b_358_, v___x_365_);
v___y_360_ = v___x_368_;
goto v___jp_359_;
}
}
}
else
{
return v_b_358_;
}
v___jp_359_:
{
size_t v___x_361_; size_t v___x_362_; 
v___x_361_ = ((size_t)1ULL);
v___x_362_ = lean_usize_add(v_i_356_, v___x_361_);
v_i_356_ = v___x_362_;
v_b_358_ = v___y_360_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable_spec__0___boxed(lean_object* v_as_372_, lean_object* v_i_373_, lean_object* v_stop_374_, lean_object* v_b_375_){
_start:
{
size_t v_i_boxed_376_; size_t v_stop_boxed_377_; lean_object* v_res_378_; 
v_i_boxed_376_ = lean_unbox_usize(v_i_373_);
lean_dec(v_i_373_);
v_stop_boxed_377_ = lean_unbox_usize(v_stop_374_);
lean_dec(v_stop_374_);
v_res_378_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable_spec__0(v_as_372_, v_i_boxed_376_, v_stop_boxed_377_, v_b_375_);
lean_dec_ref(v_as_372_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable(lean_object* v_alts_379_){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_380_ = lean_unsigned_to_nat(0u);
v___x_381_ = lean_array_get_size(v_alts_379_);
v___x_382_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt___closed__0));
v___x_383_ = lean_nat_dec_lt(v___x_380_, v___x_381_);
if (v___x_383_ == 0)
{
return v___x_382_;
}
else
{
size_t v___x_384_; size_t v___x_385_; lean_object* v___x_386_; 
v___x_384_ = ((size_t)0ULL);
v___x_385_ = lean_usize_of_nat(v___x_381_);
v___x_386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable_spec__0(v_alts_379_, v___x_384_, v___x_385_, v___x_382_);
return v___x_386_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable___boxed(lean_object* v_alts_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable(v_alts_387_);
lean_dec_ref(v_alts_387_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_simplifyCases(lean_object* v_c_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_){
_start:
{
lean_object* v_typeName_395_; lean_object* v_resultType_396_; lean_object* v_discr_397_; lean_object* v_alts_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_446_; 
v_typeName_395_ = lean_ctor_get(v_c_389_, 0);
v_resultType_396_ = lean_ctor_get(v_c_389_, 1);
v_discr_397_ = lean_ctor_get(v_c_389_, 2);
v_alts_398_ = lean_ctor_get(v_c_389_, 3);
v_isSharedCheck_446_ = !lean_is_exclusive(v_c_389_);
if (v_isSharedCheck_446_ == 0)
{
v___x_400_ = v_c_389_;
v_isShared_401_ = v_isSharedCheck_446_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_alts_398_);
lean_inc(v_discr_397_);
lean_inc(v_resultType_396_);
lean_inc(v_typeName_395_);
lean_dec(v_c_389_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_446_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v_alts_402_; lean_object* v___x_403_; 
v_alts_402_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_filterUnreachable(v_alts_398_);
lean_dec_ref(v_alts_398_);
v___x_403_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_addDefaultAlt(v_alts_402_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_437_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_437_ == 0)
{
v___x_406_ = v___x_403_;
v_isShared_407_ = v_isSharedCheck_437_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_403_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_437_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_408_ = lean_array_get_size(v_a_404_);
v___x_409_ = lean_unsigned_to_nat(0u);
v___x_410_ = lean_nat_dec_eq(v___x_408_, v___x_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; uint8_t v___x_412_; 
v___x_411_ = lean_unsigned_to_nat(1u);
v___x_412_ = lean_nat_dec_eq(v___x_408_, v___x_411_);
if (v___x_412_ == 0)
{
lean_object* v___x_414_; 
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 3, v_a_404_);
v___x_414_ = v___x_400_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_typeName_395_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v_resultType_396_);
lean_ctor_set(v_reuseFailAlloc_419_, 2, v_discr_397_);
lean_ctor_set(v_reuseFailAlloc_419_, 3, v_a_404_);
v___x_414_ = v_reuseFailAlloc_419_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
lean_object* v___x_415_; lean_object* v___x_417_; 
v___x_415_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v___x_415_);
v___x_417_ = v___x_406_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v___x_415_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
else
{
lean_object* v___x_420_; 
lean_del_object(v___x_400_);
lean_dec(v_discr_397_);
lean_dec_ref(v_resultType_396_);
lean_dec(v_typeName_395_);
v___x_420_ = lean_array_fget(v_a_404_, v___x_409_);
lean_dec(v_a_404_);
switch(lean_obj_tag(v___x_420_))
{
case 0:
{
lean_object* v_code_421_; lean_object* v___x_423_; 
v_code_421_ = lean_ctor_get(v___x_420_, 2);
lean_inc_ref(v_code_421_);
lean_dec_ref_known(v___x_420_, 3);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v_code_421_);
v___x_423_ = v___x_406_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_code_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
case 1:
{
lean_object* v_code_425_; lean_object* v___x_427_; 
v_code_425_ = lean_ctor_get(v___x_420_, 1);
lean_inc_ref(v_code_425_);
lean_dec_ref_known(v___x_420_, 2);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v_code_425_);
v___x_427_ = v___x_406_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_code_425_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
default: 
{
lean_object* v_code_429_; lean_object* v___x_431_; 
v_code_429_ = lean_ctor_get(v___x_420_, 0);
lean_inc_ref(v_code_429_);
lean_dec_ref_known(v___x_420_, 1);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v_code_429_);
v___x_431_ = v___x_406_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_code_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
}
else
{
lean_object* v___x_433_; lean_object* v___x_435_; 
lean_dec(v_a_404_);
lean_del_object(v___x_400_);
lean_dec(v_discr_397_);
lean_dec(v_typeName_395_);
v___x_433_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_433_, 0, v_resultType_396_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v___x_433_);
v___x_435_ = v___x_406_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_433_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
else
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_del_object(v___x_400_);
lean_dec(v_discr_397_);
lean_dec_ref(v_resultType_396_);
lean_dec(v_typeName_395_);
v_a_438_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_403_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_403_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_438_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_simplifyCases___boxed(lean_object* v_c_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_simplifyCases(v_c_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_);
lean_dec(v_a_451_);
lean_dec_ref(v_a_450_);
lean_dec(v_a_449_);
lean_dec_ref(v_a_448_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0___redArg(lean_object* v_alt_454_, lean_object* v_f_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
lean_object* v___y_462_; 
switch(lean_obj_tag(v_alt_454_))
{
case 0:
{
lean_object* v_code_481_; 
v_code_481_ = lean_ctor_get(v_alt_454_, 2);
lean_inc_ref(v_code_481_);
v___y_462_ = v_code_481_;
goto v___jp_461_;
}
case 1:
{
lean_object* v_code_482_; 
v_code_482_ = lean_ctor_get(v_alt_454_, 1);
lean_inc_ref(v_code_482_);
v___y_462_ = v_code_482_;
goto v___jp_461_;
}
default: 
{
lean_object* v_code_483_; 
v_code_483_ = lean_ctor_get(v_alt_454_, 0);
lean_inc_ref(v_code_483_);
v___y_462_ = v_code_483_;
goto v___jp_461_;
}
}
v___jp_461_:
{
lean_object* v___x_463_; 
lean_inc(v___y_459_);
lean_inc_ref(v___y_458_);
lean_inc(v___y_457_);
lean_inc_ref(v___y_456_);
v___x_463_ = lean_apply_6(v_f_455_, v___y_462_, v___y_456_, v___y_457_, v___y_458_, v___y_459_, lean_box(0));
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_472_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_472_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_472_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_463_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_472_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_468_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_454_, v_a_464_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_468_);
v___x_470_ = v___x_466_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_468_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_dec_ref(v_alt_454_);
v_a_473_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_463_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_463_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0___redArg___boxed(lean_object* v_alt_484_, lean_object* v_f_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0___redArg(v_alt_484_, v_f_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0(uint8_t v_pu_492_, lean_object* v_alt_493_, lean_object* v_f_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0___redArg(v_alt_493_, v_f_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0___boxed(lean_object* v_pu_501_, lean_object* v_alt_502_, lean_object* v_f_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
uint8_t v_pu_boxed_509_; lean_object* v_res_510_; 
v_pu_boxed_509_ = lean_unbox(v_pu_501_);
v_res_510_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0(v_pu_boxed_509_, v_alt_502_, v_f_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(lean_object* v_code_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_){
_start:
{
switch(lean_obj_tag(v_code_511_))
{
case 0:
{
lean_object* v_decl_517_; lean_object* v_k_518_; lean_object* v___x_519_; 
v_decl_517_ = lean_ctor_get(v_code_511_, 0);
v_k_518_ = lean_ctor_get(v_code_511_, 1);
lean_inc_ref(v_k_518_);
v___x_519_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(v_k_518_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_542_; 
v_a_520_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_542_ == 0)
{
v___x_522_ = v___x_519_;
v_isShared_523_ = v_isSharedCheck_542_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_519_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_542_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
size_t v___x_524_; size_t v___x_525_; uint8_t v___x_526_; 
v___x_524_ = lean_ptr_addr(v_k_518_);
v___x_525_ = lean_ptr_addr(v_a_520_);
v___x_526_ = lean_usize_dec_eq(v___x_524_, v___x_525_);
if (v___x_526_ == 0)
{
lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_536_; 
lean_inc_ref(v_decl_517_);
v_isSharedCheck_536_ = !lean_is_exclusive(v_code_511_);
if (v_isSharedCheck_536_ == 0)
{
lean_object* v_unused_537_; lean_object* v_unused_538_; 
v_unused_537_ = lean_ctor_get(v_code_511_, 1);
lean_dec(v_unused_537_);
v_unused_538_ = lean_ctor_get(v_code_511_, 0);
lean_dec(v_unused_538_);
v___x_528_ = v_code_511_;
v_isShared_529_ = v_isSharedCheck_536_;
goto v_resetjp_527_;
}
else
{
lean_dec(v_code_511_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_536_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 1, v_a_520_);
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_decl_517_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_a_520_);
v___x_531_ = v_reuseFailAlloc_535_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
lean_object* v___x_533_; 
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 0, v___x_531_);
v___x_533_ = v___x_522_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_531_);
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
else
{
lean_object* v___x_540_; 
lean_dec(v_a_520_);
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 0, v_code_511_);
v___x_540_ = v___x_522_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_code_511_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_511_, 2);
return v___x_519_;
}
}
case 2:
{
lean_object* v_decl_543_; lean_object* v_k_544_; lean_object* v_params_545_; lean_object* v_type_546_; lean_object* v_value_547_; uint8_t v___x_548_; lean_object* v___x_549_; 
v_decl_543_ = lean_ctor_get(v_code_511_, 0);
v_k_544_ = lean_ctor_get(v_code_511_, 1);
v_params_545_ = lean_ctor_get(v_decl_543_, 2);
v_type_546_ = lean_ctor_get(v_decl_543_, 3);
v_value_547_ = lean_ctor_get(v_decl_543_, 4);
v___x_548_ = 1;
lean_inc_ref(v_value_547_);
v___x_549_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(v_value_547_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; lean_object* v___x_551_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
lean_inc(v_a_550_);
lean_dec_ref_known(v___x_549_, 1);
lean_inc_ref(v_params_545_);
lean_inc_ref(v_type_546_);
lean_inc_ref(v_decl_543_);
v___x_551_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_548_, v_decl_543_, v_type_546_, v_params_545_, v_a_550_, v_a_513_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_553_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_a_552_);
lean_dec_ref_known(v___x_551_, 1);
lean_inc_ref(v_k_544_);
v___x_553_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(v_k_544_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_591_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_591_ == 0)
{
v___x_556_ = v___x_553_;
v_isShared_557_ = v_isSharedCheck_591_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_553_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_591_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
size_t v___x_558_; size_t v___x_559_; uint8_t v___x_560_; 
v___x_558_ = lean_ptr_addr(v_k_544_);
v___x_559_ = lean_ptr_addr(v_a_554_);
v___x_560_ = lean_usize_dec_eq(v___x_558_, v___x_559_);
if (v___x_560_ == 0)
{
lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_570_; 
v_isSharedCheck_570_ = !lean_is_exclusive(v_code_511_);
if (v_isSharedCheck_570_ == 0)
{
lean_object* v_unused_571_; lean_object* v_unused_572_; 
v_unused_571_ = lean_ctor_get(v_code_511_, 1);
lean_dec(v_unused_571_);
v_unused_572_ = lean_ctor_get(v_code_511_, 0);
lean_dec(v_unused_572_);
v___x_562_ = v_code_511_;
v_isShared_563_ = v_isSharedCheck_570_;
goto v_resetjp_561_;
}
else
{
lean_dec(v_code_511_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_570_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 1, v_a_554_);
lean_ctor_set(v___x_562_, 0, v_a_552_);
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_552_);
lean_ctor_set(v_reuseFailAlloc_569_, 1, v_a_554_);
v___x_565_ = v_reuseFailAlloc_569_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
lean_object* v___x_567_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v___x_565_);
v___x_567_ = v___x_556_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v___x_565_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
else
{
size_t v___x_573_; size_t v___x_574_; uint8_t v___x_575_; 
v___x_573_ = lean_ptr_addr(v_decl_543_);
v___x_574_ = lean_ptr_addr(v_a_552_);
v___x_575_ = lean_usize_dec_eq(v___x_573_, v___x_574_);
if (v___x_575_ == 0)
{
lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_585_; 
v_isSharedCheck_585_ = !lean_is_exclusive(v_code_511_);
if (v_isSharedCheck_585_ == 0)
{
lean_object* v_unused_586_; lean_object* v_unused_587_; 
v_unused_586_ = lean_ctor_get(v_code_511_, 1);
lean_dec(v_unused_586_);
v_unused_587_ = lean_ctor_get(v_code_511_, 0);
lean_dec(v_unused_587_);
v___x_577_ = v_code_511_;
v_isShared_578_ = v_isSharedCheck_585_;
goto v_resetjp_576_;
}
else
{
lean_dec(v_code_511_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_585_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 1, v_a_554_);
lean_ctor_set(v___x_577_, 0, v_a_552_);
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_552_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v_a_554_);
v___x_580_ = v_reuseFailAlloc_584_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_582_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v___x_580_);
v___x_582_ = v___x_556_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v___x_580_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
else
{
lean_object* v___x_589_; 
lean_dec(v_a_554_);
lean_dec(v_a_552_);
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v_code_511_);
v___x_589_ = v___x_556_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_code_511_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
else
{
lean_dec(v_a_552_);
lean_dec_ref_known(v_code_511_, 2);
return v___x_553_;
}
}
else
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
lean_dec_ref_known(v_code_511_, 2);
v_a_592_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_551_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_551_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_511_, 2);
return v___x_549_;
}
}
case 4:
{
lean_object* v_cases_600_; lean_object* v_typeName_601_; lean_object* v_resultType_602_; lean_object* v_discr_603_; lean_object* v_alts_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_623_; 
v_cases_600_ = lean_ctor_get(v_code_511_, 0);
lean_inc_ref(v_cases_600_);
lean_dec_ref_known(v_code_511_, 1);
v_typeName_601_ = lean_ctor_get(v_cases_600_, 0);
v_resultType_602_ = lean_ctor_get(v_cases_600_, 1);
v_discr_603_ = lean_ctor_get(v_cases_600_, 2);
v_alts_604_ = lean_ctor_get(v_cases_600_, 3);
v_isSharedCheck_623_ = !lean_is_exclusive(v_cases_600_);
if (v_isSharedCheck_623_ == 0)
{
v___x_606_ = v_cases_600_;
v_isShared_607_ = v_isSharedCheck_623_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_alts_604_);
lean_inc(v_discr_603_);
lean_inc(v_resultType_602_);
lean_inc(v_typeName_601_);
lean_dec(v_cases_600_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_623_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = lean_unsigned_to_nat(0u);
v___x_609_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__1(v___x_608_, v_alts_604_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_612_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_a_610_);
lean_dec_ref_known(v___x_609_, 1);
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 3, v_a_610_);
v___x_612_ = v___x_606_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_typeName_601_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v_resultType_602_);
lean_ctor_set(v_reuseFailAlloc_614_, 2, v_discr_603_);
lean_ctor_set(v_reuseFailAlloc_614_, 3, v_a_610_);
v___x_612_ = v_reuseFailAlloc_614_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
lean_object* v___x_613_; 
v___x_613_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_simplifyCases(v___x_612_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
return v___x_613_;
}
}
else
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
lean_del_object(v___x_606_);
lean_dec(v_discr_603_);
lean_dec_ref(v_resultType_602_);
lean_dec(v_typeName_601_);
v_a_615_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_609_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_609_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_624_; lean_object* v_i_625_; lean_object* v_y_626_; lean_object* v_k_627_; lean_object* v___x_628_; 
v_fvarId_624_ = lean_ctor_get(v_code_511_, 0);
v_i_625_ = lean_ctor_get(v_code_511_, 1);
v_y_626_ = lean_ctor_get(v_code_511_, 2);
v_k_627_ = lean_ctor_get(v_code_511_, 3);
lean_inc_ref(v_k_627_);
v___x_628_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(v_k_627_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_653_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_653_ == 0)
{
v___x_631_ = v___x_628_;
v_isShared_632_ = v_isSharedCheck_653_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_628_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_653_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
size_t v___x_633_; size_t v___x_634_; uint8_t v___x_635_; 
v___x_633_ = lean_ptr_addr(v_k_627_);
v___x_634_ = lean_ptr_addr(v_a_629_);
v___x_635_ = lean_usize_dec_eq(v___x_633_, v___x_634_);
if (v___x_635_ == 0)
{
lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_645_; 
lean_inc(v_y_626_);
lean_inc(v_i_625_);
lean_inc(v_fvarId_624_);
v_isSharedCheck_645_ = !lean_is_exclusive(v_code_511_);
if (v_isSharedCheck_645_ == 0)
{
lean_object* v_unused_646_; lean_object* v_unused_647_; lean_object* v_unused_648_; lean_object* v_unused_649_; 
v_unused_646_ = lean_ctor_get(v_code_511_, 3);
lean_dec(v_unused_646_);
v_unused_647_ = lean_ctor_get(v_code_511_, 2);
lean_dec(v_unused_647_);
v_unused_648_ = lean_ctor_get(v_code_511_, 1);
lean_dec(v_unused_648_);
v_unused_649_ = lean_ctor_get(v_code_511_, 0);
lean_dec(v_unused_649_);
v___x_637_ = v_code_511_;
v_isShared_638_ = v_isSharedCheck_645_;
goto v_resetjp_636_;
}
else
{
lean_dec(v_code_511_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_645_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
lean_ctor_set(v___x_637_, 3, v_a_629_);
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_fvarId_624_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v_i_625_);
lean_ctor_set(v_reuseFailAlloc_644_, 2, v_y_626_);
lean_ctor_set(v_reuseFailAlloc_644_, 3, v_a_629_);
v___x_640_ = v_reuseFailAlloc_644_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_642_; 
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 0, v___x_640_);
v___x_642_ = v___x_631_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
else
{
lean_object* v___x_651_; 
lean_dec(v_a_629_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 0, v_code_511_);
v___x_651_ = v___x_631_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_code_511_);
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
else
{
lean_dec_ref_known(v_code_511_, 4);
return v___x_628_;
}
}
case 8:
{
lean_object* v_fvarId_654_; lean_object* v_i_655_; lean_object* v_y_656_; lean_object* v_k_657_; lean_object* v___x_658_; 
v_fvarId_654_ = lean_ctor_get(v_code_511_, 0);
v_i_655_ = lean_ctor_get(v_code_511_, 1);
v_y_656_ = lean_ctor_get(v_code_511_, 2);
v_k_657_ = lean_ctor_get(v_code_511_, 3);
lean_inc_ref(v_k_657_);
v___x_658_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(v_k_657_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_683_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_683_ == 0)
{
v___x_661_ = v___x_658_;
v_isShared_662_ = v_isSharedCheck_683_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_658_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_683_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
size_t v___x_663_; size_t v___x_664_; uint8_t v___x_665_; 
v___x_663_ = lean_ptr_addr(v_k_657_);
v___x_664_ = lean_ptr_addr(v_a_659_);
v___x_665_ = lean_usize_dec_eq(v___x_663_, v___x_664_);
if (v___x_665_ == 0)
{
lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_675_; 
lean_inc(v_y_656_);
lean_inc(v_i_655_);
lean_inc(v_fvarId_654_);
v_isSharedCheck_675_ = !lean_is_exclusive(v_code_511_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; lean_object* v_unused_677_; lean_object* v_unused_678_; lean_object* v_unused_679_; 
v_unused_676_ = lean_ctor_get(v_code_511_, 3);
lean_dec(v_unused_676_);
v_unused_677_ = lean_ctor_get(v_code_511_, 2);
lean_dec(v_unused_677_);
v_unused_678_ = lean_ctor_get(v_code_511_, 1);
lean_dec(v_unused_678_);
v_unused_679_ = lean_ctor_get(v_code_511_, 0);
lean_dec(v_unused_679_);
v___x_667_ = v_code_511_;
v_isShared_668_ = v_isSharedCheck_675_;
goto v_resetjp_666_;
}
else
{
lean_dec(v_code_511_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_675_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 3, v_a_659_);
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_fvarId_654_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v_i_655_);
lean_ctor_set(v_reuseFailAlloc_674_, 2, v_y_656_);
lean_ctor_set(v_reuseFailAlloc_674_, 3, v_a_659_);
v___x_670_ = v_reuseFailAlloc_674_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
lean_object* v___x_672_; 
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 0, v___x_670_);
v___x_672_ = v___x_661_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_670_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
}
else
{
lean_object* v___x_681_; 
lean_dec(v_a_659_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 0, v_code_511_);
v___x_681_ = v___x_661_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_code_511_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_511_, 4);
return v___x_658_;
}
}
case 9:
{
lean_object* v_fvarId_684_; lean_object* v_i_685_; lean_object* v_offset_686_; lean_object* v_y_687_; lean_object* v_ty_688_; lean_object* v_k_689_; lean_object* v___x_690_; 
v_fvarId_684_ = lean_ctor_get(v_code_511_, 0);
v_i_685_ = lean_ctor_get(v_code_511_, 1);
v_offset_686_ = lean_ctor_get(v_code_511_, 2);
v_y_687_ = lean_ctor_get(v_code_511_, 3);
v_ty_688_ = lean_ctor_get(v_code_511_, 4);
v_k_689_ = lean_ctor_get(v_code_511_, 5);
lean_inc_ref(v_k_689_);
v___x_690_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(v_k_689_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_717_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_717_ == 0)
{
v___x_693_ = v___x_690_;
v_isShared_694_ = v_isSharedCheck_717_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_a_691_);
lean_dec(v___x_690_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_717_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
size_t v___x_695_; size_t v___x_696_; uint8_t v___x_697_; 
v___x_695_ = lean_ptr_addr(v_k_689_);
v___x_696_ = lean_ptr_addr(v_a_691_);
v___x_697_ = lean_usize_dec_eq(v___x_695_, v___x_696_);
if (v___x_697_ == 0)
{
lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_707_; 
lean_inc_ref(v_ty_688_);
lean_inc(v_y_687_);
lean_inc(v_offset_686_);
lean_inc(v_i_685_);
lean_inc(v_fvarId_684_);
v_isSharedCheck_707_ = !lean_is_exclusive(v_code_511_);
if (v_isSharedCheck_707_ == 0)
{
lean_object* v_unused_708_; lean_object* v_unused_709_; lean_object* v_unused_710_; lean_object* v_unused_711_; lean_object* v_unused_712_; lean_object* v_unused_713_; 
v_unused_708_ = lean_ctor_get(v_code_511_, 5);
lean_dec(v_unused_708_);
v_unused_709_ = lean_ctor_get(v_code_511_, 4);
lean_dec(v_unused_709_);
v_unused_710_ = lean_ctor_get(v_code_511_, 3);
lean_dec(v_unused_710_);
v_unused_711_ = lean_ctor_get(v_code_511_, 2);
lean_dec(v_unused_711_);
v_unused_712_ = lean_ctor_get(v_code_511_, 1);
lean_dec(v_unused_712_);
v_unused_713_ = lean_ctor_get(v_code_511_, 0);
lean_dec(v_unused_713_);
v___x_699_ = v_code_511_;
v_isShared_700_ = v_isSharedCheck_707_;
goto v_resetjp_698_;
}
else
{
lean_dec(v_code_511_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_707_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 5, v_a_691_);
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_fvarId_684_);
lean_ctor_set(v_reuseFailAlloc_706_, 1, v_i_685_);
lean_ctor_set(v_reuseFailAlloc_706_, 2, v_offset_686_);
lean_ctor_set(v_reuseFailAlloc_706_, 3, v_y_687_);
lean_ctor_set(v_reuseFailAlloc_706_, 4, v_ty_688_);
lean_ctor_set(v_reuseFailAlloc_706_, 5, v_a_691_);
v___x_702_ = v_reuseFailAlloc_706_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
lean_object* v___x_704_; 
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 0, v___x_702_);
v___x_704_ = v___x_693_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___x_702_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
else
{
lean_object* v___x_715_; 
lean_dec(v_a_691_);
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 0, v_code_511_);
v___x_715_ = v___x_693_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_code_511_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_511_, 6);
return v___x_690_;
}
}
case 10:
{
lean_object* v_fvarId_718_; lean_object* v_cidx_719_; lean_object* v_k_720_; lean_object* v___x_721_; 
v_fvarId_718_ = lean_ctor_get(v_code_511_, 0);
v_cidx_719_ = lean_ctor_get(v_code_511_, 1);
v_k_720_ = lean_ctor_get(v_code_511_, 2);
lean_inc_ref(v_k_720_);
v___x_721_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(v_k_720_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_745_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_745_ == 0)
{
v___x_724_ = v___x_721_;
v_isShared_725_ = v_isSharedCheck_745_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_721_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_745_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
size_t v___x_726_; size_t v___x_727_; uint8_t v___x_728_; 
v___x_726_ = lean_ptr_addr(v_k_720_);
v___x_727_ = lean_ptr_addr(v_a_722_);
v___x_728_ = lean_usize_dec_eq(v___x_726_, v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_738_; 
lean_inc(v_cidx_719_);
lean_inc(v_fvarId_718_);
v_isSharedCheck_738_ = !lean_is_exclusive(v_code_511_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; lean_object* v_unused_740_; lean_object* v_unused_741_; 
v_unused_739_ = lean_ctor_get(v_code_511_, 2);
lean_dec(v_unused_739_);
v_unused_740_ = lean_ctor_get(v_code_511_, 1);
lean_dec(v_unused_740_);
v_unused_741_ = lean_ctor_get(v_code_511_, 0);
lean_dec(v_unused_741_);
v___x_730_ = v_code_511_;
v_isShared_731_ = v_isSharedCheck_738_;
goto v_resetjp_729_;
}
else
{
lean_dec(v_code_511_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_738_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 2, v_a_722_);
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_fvarId_718_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v_cidx_719_);
lean_ctor_set(v_reuseFailAlloc_737_, 2, v_a_722_);
v___x_733_ = v_reuseFailAlloc_737_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_735_; 
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 0, v___x_733_);
v___x_735_ = v___x_724_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_733_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
else
{
lean_object* v___x_743_; 
lean_dec(v_a_722_);
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 0, v_code_511_);
v___x_743_ = v___x_724_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_code_511_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_511_, 3);
return v___x_721_;
}
}
case 11:
{
lean_object* v_fvarId_746_; lean_object* v_n_747_; uint8_t v_check_748_; uint8_t v_persistent_749_; lean_object* v_k_750_; lean_object* v___x_751_; 
v_fvarId_746_ = lean_ctor_get(v_code_511_, 0);
v_n_747_ = lean_ctor_get(v_code_511_, 1);
v_check_748_ = lean_ctor_get_uint8(v_code_511_, sizeof(void*)*3);
v_persistent_749_ = lean_ctor_get_uint8(v_code_511_, sizeof(void*)*3 + 1);
v_k_750_ = lean_ctor_get(v_code_511_, 2);
lean_inc_ref(v_k_750_);
v___x_751_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(v_k_750_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
if (lean_obj_tag(v___x_751_) == 0)
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_775_; 
v_a_752_ = lean_ctor_get(v___x_751_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_751_);
if (v_isSharedCheck_775_ == 0)
{
v___x_754_ = v___x_751_;
v_isShared_755_ = v_isSharedCheck_775_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_751_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_775_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
size_t v___x_756_; size_t v___x_757_; uint8_t v___x_758_; 
v___x_756_ = lean_ptr_addr(v_k_750_);
v___x_757_ = lean_ptr_addr(v_a_752_);
v___x_758_ = lean_usize_dec_eq(v___x_756_, v___x_757_);
if (v___x_758_ == 0)
{
lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_768_; 
lean_inc(v_n_747_);
lean_inc(v_fvarId_746_);
v_isSharedCheck_768_ = !lean_is_exclusive(v_code_511_);
if (v_isSharedCheck_768_ == 0)
{
lean_object* v_unused_769_; lean_object* v_unused_770_; lean_object* v_unused_771_; 
v_unused_769_ = lean_ctor_get(v_code_511_, 2);
lean_dec(v_unused_769_);
v_unused_770_ = lean_ctor_get(v_code_511_, 1);
lean_dec(v_unused_770_);
v_unused_771_ = lean_ctor_get(v_code_511_, 0);
lean_dec(v_unused_771_);
v___x_760_ = v_code_511_;
v_isShared_761_ = v_isSharedCheck_768_;
goto v_resetjp_759_;
}
else
{
lean_dec(v_code_511_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_768_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 2, v_a_752_);
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_fvarId_746_);
lean_ctor_set(v_reuseFailAlloc_767_, 1, v_n_747_);
lean_ctor_set(v_reuseFailAlloc_767_, 2, v_a_752_);
lean_ctor_set_uint8(v_reuseFailAlloc_767_, sizeof(void*)*3, v_check_748_);
lean_ctor_set_uint8(v_reuseFailAlloc_767_, sizeof(void*)*3 + 1, v_persistent_749_);
v___x_763_ = v_reuseFailAlloc_767_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
lean_object* v___x_765_; 
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 0, v___x_763_);
v___x_765_ = v___x_754_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_763_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
}
else
{
lean_object* v___x_773_; 
lean_dec(v_a_752_);
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 0, v_code_511_);
v___x_773_ = v___x_754_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_code_511_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_511_, 3);
return v___x_751_;
}
}
case 12:
{
lean_object* v_fvarId_776_; lean_object* v_n_777_; uint8_t v_check_778_; uint8_t v_persistent_779_; lean_object* v_objs_x3f_780_; lean_object* v_k_781_; lean_object* v___x_782_; 
v_fvarId_776_ = lean_ctor_get(v_code_511_, 0);
v_n_777_ = lean_ctor_get(v_code_511_, 1);
v_check_778_ = lean_ctor_get_uint8(v_code_511_, sizeof(void*)*4);
v_persistent_779_ = lean_ctor_get_uint8(v_code_511_, sizeof(void*)*4 + 1);
v_objs_x3f_780_ = lean_ctor_get(v_code_511_, 2);
v_k_781_ = lean_ctor_get(v_code_511_, 3);
lean_inc_ref(v_k_781_);
v___x_782_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(v_k_781_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_807_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_807_ == 0)
{
v___x_785_ = v___x_782_;
v_isShared_786_ = v_isSharedCheck_807_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_782_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_807_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
size_t v___x_787_; size_t v___x_788_; uint8_t v___x_789_; 
v___x_787_ = lean_ptr_addr(v_k_781_);
v___x_788_ = lean_ptr_addr(v_a_783_);
v___x_789_ = lean_usize_dec_eq(v___x_787_, v___x_788_);
if (v___x_789_ == 0)
{
lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_799_; 
lean_inc(v_objs_x3f_780_);
lean_inc(v_n_777_);
lean_inc(v_fvarId_776_);
v_isSharedCheck_799_ = !lean_is_exclusive(v_code_511_);
if (v_isSharedCheck_799_ == 0)
{
lean_object* v_unused_800_; lean_object* v_unused_801_; lean_object* v_unused_802_; lean_object* v_unused_803_; 
v_unused_800_ = lean_ctor_get(v_code_511_, 3);
lean_dec(v_unused_800_);
v_unused_801_ = lean_ctor_get(v_code_511_, 2);
lean_dec(v_unused_801_);
v_unused_802_ = lean_ctor_get(v_code_511_, 1);
lean_dec(v_unused_802_);
v_unused_803_ = lean_ctor_get(v_code_511_, 0);
lean_dec(v_unused_803_);
v___x_791_ = v_code_511_;
v_isShared_792_ = v_isSharedCheck_799_;
goto v_resetjp_790_;
}
else
{
lean_dec(v_code_511_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_799_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 3, v_a_783_);
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_fvarId_776_);
lean_ctor_set(v_reuseFailAlloc_798_, 1, v_n_777_);
lean_ctor_set(v_reuseFailAlloc_798_, 2, v_objs_x3f_780_);
lean_ctor_set(v_reuseFailAlloc_798_, 3, v_a_783_);
lean_ctor_set_uint8(v_reuseFailAlloc_798_, sizeof(void*)*4, v_check_778_);
lean_ctor_set_uint8(v_reuseFailAlloc_798_, sizeof(void*)*4 + 1, v_persistent_779_);
v___x_794_ = v_reuseFailAlloc_798_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
lean_object* v___x_796_; 
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v___x_794_);
v___x_796_ = v___x_785_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_794_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
else
{
lean_object* v___x_805_; 
lean_dec(v_a_783_);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v_code_511_);
v___x_805_ = v___x_785_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_code_511_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_511_, 4);
return v___x_782_;
}
}
case 13:
{
lean_object* v_fvarId_808_; lean_object* v_k_809_; lean_object* v___x_810_; 
v_fvarId_808_ = lean_ctor_get(v_code_511_, 0);
v_k_809_ = lean_ctor_get(v_code_511_, 1);
lean_inc_ref(v_k_809_);
v___x_810_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(v_k_809_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_833_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_833_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_833_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_833_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
size_t v___x_815_; size_t v___x_816_; uint8_t v___x_817_; 
v___x_815_ = lean_ptr_addr(v_k_809_);
v___x_816_ = lean_ptr_addr(v_a_811_);
v___x_817_ = lean_usize_dec_eq(v___x_815_, v___x_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_827_; 
lean_inc(v_fvarId_808_);
v_isSharedCheck_827_ = !lean_is_exclusive(v_code_511_);
if (v_isSharedCheck_827_ == 0)
{
lean_object* v_unused_828_; lean_object* v_unused_829_; 
v_unused_828_ = lean_ctor_get(v_code_511_, 1);
lean_dec(v_unused_828_);
v_unused_829_ = lean_ctor_get(v_code_511_, 0);
lean_dec(v_unused_829_);
v___x_819_ = v_code_511_;
v_isShared_820_ = v_isSharedCheck_827_;
goto v_resetjp_818_;
}
else
{
lean_dec(v_code_511_);
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
v_reuseFailAlloc_826_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_fvarId_808_);
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
lean_object* v___x_831_; 
lean_dec(v_a_811_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v_code_511_);
v___x_831_ = v___x_813_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_code_511_);
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
else
{
lean_dec_ref_known(v_code_511_, 2);
return v___x_810_;
}
}
default: 
{
lean_object* v___x_834_; 
v___x_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_834_, 0, v_code_511_);
return v___x_834_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase___boxed(lean_object* v_code_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase(v_code_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_);
lean_dec(v_a_839_);
lean_dec_ref(v_a_838_);
lean_dec(v_a_837_);
lean_dec_ref(v_a_836_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__1(lean_object* v_i_842_, lean_object* v_as_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
lean_object* v___x_849_; uint8_t v___x_850_; 
v___x_849_ = lean_array_get_size(v_as_843_);
v___x_850_ = lean_nat_dec_lt(v_i_842_, v___x_849_);
if (v___x_850_ == 0)
{
lean_object* v___x_851_; 
lean_dec(v_i_842_);
v___x_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_851_, 0, v_as_843_);
return v___x_851_;
}
else
{
lean_object* v___f_852_; lean_object* v_a_853_; lean_object* v___x_854_; 
v___f_852_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase___boxed), 6, 0);
v_a_853_ = lean_array_fget_borrowed(v_as_843_, v_i_842_);
lean_inc(v_a_853_);
v___x_854_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__0___redArg(v_a_853_, v___f_852_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; size_t v___x_856_; size_t v___x_857_; uint8_t v___x_858_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_a_855_);
lean_dec_ref_known(v___x_854_, 1);
v___x_856_ = lean_ptr_addr(v_a_853_);
v___x_857_ = lean_ptr_addr(v_a_855_);
v___x_858_ = lean_usize_dec_eq(v___x_856_, v___x_857_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_859_ = lean_unsigned_to_nat(1u);
v___x_860_ = lean_nat_add(v_i_842_, v___x_859_);
v___x_861_ = lean_array_fset(v_as_843_, v_i_842_, v_a_855_);
lean_dec(v_i_842_);
v_i_842_ = v___x_860_;
v_as_843_ = v___x_861_;
goto _start;
}
else
{
lean_object* v___x_863_; lean_object* v___x_864_; 
lean_dec(v_a_855_);
v___x_863_ = lean_unsigned_to_nat(1u);
v___x_864_ = lean_nat_add(v_i_842_, v___x_863_);
lean_dec(v_i_842_);
v_i_842_ = v___x_864_;
goto _start;
}
}
else
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_873_; 
lean_dec_ref(v_as_843_);
lean_dec(v_i_842_);
v_a_866_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_873_ == 0)
{
v___x_868_ = v___x_854_;
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_854_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_a_866_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__1___boxed(lean_object* v_i_874_, lean_object* v_as_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Code_simpCase_spec__1(v_i_874_, v_as_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0___redArg(lean_object* v_f_882_, lean_object* v_v_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
if (lean_obj_tag(v_v_883_) == 0)
{
lean_object* v_code_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_913_; 
v_code_889_ = lean_ctor_get(v_v_883_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v_v_883_);
if (v_isSharedCheck_913_ == 0)
{
v___x_891_ = v_v_883_;
v_isShared_892_ = v_isSharedCheck_913_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_code_889_);
lean_dec(v_v_883_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_913_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_893_; 
lean_inc(v___y_887_);
lean_inc_ref(v___y_886_);
lean_inc(v___y_885_);
lean_inc_ref(v___y_884_);
v___x_893_ = lean_apply_6(v_f_882_, v_code_889_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, lean_box(0));
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_904_; 
v_a_894_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_904_ == 0)
{
v___x_896_ = v___x_893_;
v_isShared_897_ = v_isSharedCheck_904_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_893_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_904_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v_a_894_);
v___x_899_ = v___x_891_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_903_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
lean_object* v___x_901_; 
if (v_isShared_897_ == 0)
{
lean_ctor_set(v___x_896_, 0, v___x_899_);
v___x_901_ = v___x_896_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_899_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_912_; 
lean_del_object(v___x_891_);
v_a_905_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_912_ == 0)
{
v___x_907_ = v___x_893_;
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_893_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_910_; 
if (v_isShared_908_ == 0)
{
v___x_910_ = v___x_907_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_905_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
}
}
else
{
lean_object* v___x_914_; 
lean_dec_ref(v_f_882_);
v___x_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_914_, 0, v_v_883_);
return v___x_914_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0___redArg___boxed(lean_object* v_f_915_, lean_object* v_v_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0___redArg(v_f_915_, v_v_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0(uint8_t v_pu_923_, lean_object* v_f_924_, lean_object* v_v_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v___x_931_; 
v___x_931_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0___redArg(v_f_924_, v_v_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0___boxed(lean_object* v_pu_932_, lean_object* v_f_933_, lean_object* v_v_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
uint8_t v_pu_boxed_940_; lean_object* v_res_941_; 
v_pu_boxed_940_ = lean_unbox(v_pu_932_);
v_res_941_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0(v_pu_boxed_940_, v_f_933_, v_v_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase(lean_object* v_decl_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_){
_start:
{
lean_object* v_toSignature_949_; lean_object* v_value_950_; uint8_t v_recursive_951_; lean_object* v_inlineAttr_x3f_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_977_; 
v_toSignature_949_ = lean_ctor_get(v_decl_943_, 0);
v_value_950_ = lean_ctor_get(v_decl_943_, 1);
v_recursive_951_ = lean_ctor_get_uint8(v_decl_943_, sizeof(void*)*3);
v_inlineAttr_x3f_952_ = lean_ctor_get(v_decl_943_, 2);
v_isSharedCheck_977_ = !lean_is_exclusive(v_decl_943_);
if (v_isSharedCheck_977_ == 0)
{
v___x_954_ = v_decl_943_;
v_isShared_955_ = v_isSharedCheck_977_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_inlineAttr_x3f_952_);
lean_inc(v_value_950_);
lean_inc(v_toSignature_949_);
lean_dec(v_decl_943_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_977_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___f_956_; lean_object* v___x_957_; 
v___f_956_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase___closed__0));
v___x_957_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase_spec__0___redArg(v___f_956_, v_value_950_, v_a_944_, v_a_945_, v_a_946_, v_a_947_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_968_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_968_ == 0)
{
v___x_960_ = v___x_957_;
v_isShared_961_ = v_isSharedCheck_968_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_957_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_968_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 1, v_a_958_);
v___x_963_ = v___x_954_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_toSignature_949_);
lean_ctor_set(v_reuseFailAlloc_967_, 1, v_a_958_);
lean_ctor_set(v_reuseFailAlloc_967_, 2, v_inlineAttr_x3f_952_);
lean_ctor_set_uint8(v_reuseFailAlloc_967_, sizeof(void*)*3, v_recursive_951_);
v___x_963_ = v_reuseFailAlloc_967_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_965_; 
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 0, v___x_963_);
v___x_965_ = v___x_960_;
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
lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_976_; 
lean_del_object(v___x_954_);
lean_dec(v_inlineAttr_x3f_952_);
lean_dec_ref(v_toSignature_949_);
v_a_969_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_976_ == 0)
{
v___x_971_ = v___x_957_;
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v___x_957_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_974_; 
if (v_isShared_972_ == 0)
{
v___x_974_ = v___x_971_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_a_969_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase___boxed(lean_object* v_decl_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_Decl_simpCase(v_decl_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_);
lean_dec(v_a_982_);
lean_dec_ref(v_a_981_);
lean_dec(v_a_980_);
lean_dec_ref(v_a_979_);
return v_res_984_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ensureHasDefault_spec__0(lean_object* v_as_985_, size_t v_i_986_, size_t v_stop_987_){
_start:
{
uint8_t v___x_988_; 
v___x_988_ = lean_usize_dec_eq(v_i_986_, v_stop_987_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; 
v___x_989_ = lean_array_uget_borrowed(v_as_985_, v_i_986_);
if (lean_obj_tag(v___x_989_) == 2)
{
uint8_t v___x_990_; 
v___x_990_ = 1;
return v___x_990_;
}
else
{
size_t v___x_991_; size_t v___x_992_; 
v___x_991_ = ((size_t)1ULL);
v___x_992_ = lean_usize_add(v_i_986_, v___x_991_);
v_i_986_ = v___x_992_;
goto _start;
}
}
else
{
uint8_t v___x_994_; 
v___x_994_ = 0;
return v___x_994_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ensureHasDefault_spec__0___boxed(lean_object* v_as_995_, lean_object* v_i_996_, lean_object* v_stop_997_){
_start:
{
size_t v_i_boxed_998_; size_t v_stop_boxed_999_; uint8_t v_res_1000_; lean_object* v_r_1001_; 
v_i_boxed_998_ = lean_unbox_usize(v_i_996_);
lean_dec(v_i_996_);
v_stop_boxed_999_ = lean_unbox_usize(v_stop_997_);
lean_dec(v_stop_997_);
v_res_1000_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ensureHasDefault_spec__0(v_as_995_, v_i_boxed_998_, v_stop_boxed_999_);
lean_dec_ref(v_as_995_);
v_r_1001_ = lean_box(v_res_1000_);
return v_r_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureHasDefault(lean_object* v_alts_1002_){
_start:
{
lean_object* v___y_1004_; lean_object* v___y_1005_; lean_object* v___x_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; 
v___x_1020_ = lean_unsigned_to_nat(0u);
v___x_1021_ = lean_array_get_size(v_alts_1002_);
v___x_1022_ = lean_nat_dec_lt(v___x_1020_, v___x_1021_);
if (v___x_1022_ == 0)
{
goto v___jp_1008_;
}
else
{
if (v___x_1022_ == 0)
{
goto v___jp_1008_;
}
else
{
size_t v___x_1023_; size_t v___x_1024_; uint8_t v___x_1025_; 
v___x_1023_ = ((size_t)0ULL);
v___x_1024_ = lean_usize_of_nat(v___x_1021_);
v___x_1025_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ensureHasDefault_spec__0(v_alts_1002_, v___x_1023_, v___x_1024_);
if (v___x_1025_ == 0)
{
goto v___jp_1008_;
}
else
{
return v_alts_1002_;
}
}
}
v___jp_1003_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___y_1005_);
v___x_1007_ = lean_array_push(v___y_1004_, v___x_1006_);
return v___x_1007_;
}
v___jp_1008_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; 
v___x_1009_ = lean_array_get_size(v_alts_1002_);
v___x_1010_ = lean_unsigned_to_nat(2u);
v___x_1011_ = lean_nat_dec_lt(v___x_1009_, v___x_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v_last_1015_; lean_object* v_alts_1016_; 
v___x_1012_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0, &l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0_once, _init_l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_getMaxOccs_getNumOccsOf___closed__0);
v___x_1013_ = lean_unsigned_to_nat(1u);
v___x_1014_ = lean_nat_sub(v___x_1009_, v___x_1013_);
v_last_1015_ = lean_array_get(v___x_1012_, v_alts_1002_, v___x_1014_);
lean_dec(v___x_1014_);
v_alts_1016_ = lean_array_pop(v_alts_1002_);
switch(lean_obj_tag(v_last_1015_))
{
case 0:
{
lean_object* v_code_1017_; 
v_code_1017_ = lean_ctor_get(v_last_1015_, 2);
lean_inc_ref(v_code_1017_);
lean_dec_ref_known(v_last_1015_, 3);
v___y_1004_ = v_alts_1016_;
v___y_1005_ = v_code_1017_;
goto v___jp_1003_;
}
case 1:
{
lean_object* v_code_1018_; 
v_code_1018_ = lean_ctor_get(v_last_1015_, 1);
lean_inc_ref(v_code_1018_);
lean_dec_ref_known(v_last_1015_, 2);
v___y_1004_ = v_alts_1016_;
v___y_1005_ = v_code_1018_;
goto v___jp_1003_;
}
default: 
{
lean_object* v_code_1019_; 
v_code_1019_ = lean_ctor_get(v_last_1015_, 0);
lean_inc_ref(v_code_1019_);
lean_dec_ref_known(v_last_1015_, 1);
v___y_1004_ = v_alts_1016_;
v___y_1005_ = v_code_1019_;
goto v___jp_1003_;
}
}
}
else
{
return v_alts_1002_;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_simpCase___closed__3(void){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; uint8_t v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1030_ = lean_unsigned_to_nat(0u);
v___x_1031_ = ((lean_object*)(l_Lean_Compiler_LCNF_simpCase___closed__2));
v___x_1032_ = 2;
v___x_1033_ = ((lean_object*)(l_Lean_Compiler_LCNF_simpCase___closed__1));
v___x_1034_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_1033_, v___x_1032_, v___x_1031_, v___x_1030_);
return v___x_1034_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_simpCase(void){
_start:
{
lean_object* v___x_1035_; 
v___x_1035_ = lean_obj_once(&l_Lean_Compiler_LCNF_simpCase___closed__3, &l_Lean_Compiler_LCNF_simpCase___closed__3_once, _init_l_Lean_Compiler_LCNF_simpCase___closed__3);
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1106_; uint8_t v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1106_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_));
v___x_1107_ = 1;
v___x_1108_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_));
v___x_1109_ = l_Lean_registerTraceClass(v___x_1106_, v___x_1107_, v___x_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2____boxed(lean_object* v_a_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_();
return v_res_1111_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_AlphaEqv(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_SimpCase(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_AlphaEqv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_simpCase = _init_l_Lean_Compiler_LCNF_simpCase();
lean_mark_persistent(l_Lean_Compiler_LCNF_simpCase);
res = l___private_Lean_Compiler_LCNF_SimpCase_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_SimpCase_1808010913____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_SimpCase(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_AlphaEqv(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_SimpCase(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_AlphaEqv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_SimpCase(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_SimpCase(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_SimpCase(builtin);
}
#ifdef __cplusplus
}
#endif
