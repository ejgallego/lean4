// Lean compiler output
// Module: Lean.Compiler.LCNF.ExplicitBoxing
// Imports: public import Lean.Compiler.LCNF.CompilerM public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.ElimDead import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.AuxDeclCache import Lean.Runtime
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
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_closureMaxArgs;
uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isVoid(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkParam(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkBoxedName(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_attachCodeDecls___redArg(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg___lam__0___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_Compiler_LCNF_Nat_isPossibleRef(lean_object*);
lean_object* l_Lean_Compiler_LCNF_CtorInfo_type(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(uint8_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_cacheAuxDecl___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_CtorInfo_isScalar(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LitValue_impureTypeScalarNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updatePapImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadVars(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateFVarImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "boxed"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "res"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 61, 90, 23, 143, 26, 140, 228)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__3_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__3_value),LEAN_SCALAR_PTR_LITERAL(201, 206, 29, 183, 206, 15, 98, 41)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addBoxedVersions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addBoxedVersions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_getResultType___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_getResultType___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_getResultType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_getResultType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "_boxed_const"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__0_value),LEAN_SCALAR_PTR_LITERAL(112, 157, 119, 166, 190, 88, 106, 4)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__1_value;
static const lean_array_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castVarIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castVarIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tobj"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(25, 168, 138, 20, 203, 141, 233, 12)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateLetImp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castResultIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castResultIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tagged"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 57, 252, 162, 142, 133, 51, 193)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__2;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Compiler.LCNF.ExplicitBoxing"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 106, .m_capacity = 106, .m_length = 105, .m_data = "_private.Lean.Compiler.LCNF.ExplicitBoxing.0.Lean.Compiler.LCNF.Code.explicitBoxing.tryCorrectLetDeclType"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__5;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "obj"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__6_value),LEAN_SCALAR_PTR_LITERAL(240, 235, 44, 74, 242, 121, 239, 90)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__7_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__8;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "USize"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__9_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__9_value),LEAN_SCALAR_PTR_LITERAL(109, 217, 26, 131, 232, 198, 207, 245)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__10_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__11;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Compiler.LCNF.ExplicitBoxing.0.Lean.Compiler.LCNF.Code.explicitBoxing.visitLet"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__1;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__3;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "_private.Lean.Compiler.LCNF.ExplicitBoxing.0.Lean.Compiler.LCNF.Code.explicitBoxing"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_explicitBoxing___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBoxing"};
static const lean_object* l_Lean_Compiler_LCNF_explicitBoxing___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_explicitBoxing___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_explicitBoxing___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_explicitBoxing___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 162, 141, 185, 247, 139, 72, 40)}};
static const lean_object* l_Lean_Compiler_LCNF_explicitBoxing___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_explicitBoxing___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_explicitBoxing___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_explicitBoxing___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_explicitBoxing___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_explicitBoxing___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_explicitBoxing___closed__1_value),((lean_object*)&l_Lean_Compiler_LCNF_explicitBoxing___closed__2_value),LEAN_SCALAR_PTR_LITERAL(2, 2, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_explicitBoxing___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_explicitBoxing___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_explicitBoxing = (const lean_object*)&l_Lean_Compiler_LCNF_explicitBoxing___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_explicitBoxing___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 96, 99, 100, 223, 46, 216, 101)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ExplicitBoxing"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 42, 222, 16, 111, 249, 179, 156)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(108, 8, 207, 169, 143, 212, 226, 30)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(109, 143, 6, 108, 3, 197, 95, 68)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(11, 136, 18, 33, 69, 107, 44, 218)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(182, 225, 110, 155, 173, 102, 72, 215)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(27, 17, 232, 84, 94, 206, 128, 218)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(126, 177, 146, 111, 253, 172, 137, 144)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(71, 38, 219, 234, 30, 215, 82, 129)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(217, 205, 136, 29, 104, 99, 34, 251)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(124, 89, 48, 194, 67, 193, 228, 59)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(184, 138, 155, 10, 111, 76, 192, 98)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)(((size_t)(654907530) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(45, 112, 151, 245, 157, 42, 188, 100)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(78, 83, 245, 87, 79, 251, 66, 10)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(34, 243, 209, 85, 135, 207, 4, 169)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(187, 126, 28, 226, 12, 101, 145, 238)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion_spec__0(lean_object* v_as_1_, size_t v_i_2_, size_t v_stop_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = lean_usize_dec_eq(v_i_2_, v_stop_3_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; lean_object* v_type_6_; uint8_t v_borrow_7_; uint8_t v___x_8_; 
v___x_5_ = lean_array_uget_borrowed(v_as_1_, v_i_2_);
v_type_6_ = lean_ctor_get(v___x_5_, 2);
v_borrow_7_ = lean_ctor_get_uint8(v___x_5_, sizeof(void*)*3);
v___x_8_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_type_6_);
if (v___x_8_ == 0)
{
if (v_borrow_7_ == 0)
{
uint8_t v___x_9_; 
v___x_9_ = l_Lean_Expr_isVoid(v_type_6_);
if (v___x_9_ == 0)
{
size_t v___x_10_; size_t v___x_11_; 
v___x_10_ = ((size_t)1ULL);
v___x_11_ = lean_usize_add(v_i_2_, v___x_10_);
v_i_2_ = v___x_11_;
goto _start;
}
else
{
return v___x_9_;
}
}
else
{
return v_borrow_7_;
}
}
else
{
return v___x_8_;
}
}
else
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion_spec__0___boxed(lean_object* v_as_14_, lean_object* v_i_15_, lean_object* v_stop_16_){
_start:
{
size_t v_i_boxed_17_; size_t v_stop_boxed_18_; uint8_t v_res_19_; lean_object* v_r_20_; 
v_i_boxed_17_ = lean_unbox_usize(v_i_15_);
lean_dec(v_i_15_);
v_stop_boxed_18_ = lean_unbox_usize(v_stop_16_);
lean_dec(v_stop_16_);
v_res_19_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion_spec__0(v_as_14_, v_i_boxed_17_, v_stop_boxed_18_);
lean_dec_ref(v_as_14_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion___redArg(lean_object* v_sig_21_, lean_object* v_a_22_){
_start:
{
lean_object* v_name_24_; lean_object* v_type_25_; lean_object* v_params_26_; lean_object* v___x_27_; lean_object* v___x_34_; lean_object* v___x_35_; uint8_t v___x_36_; 
v_name_24_ = lean_ctor_get(v_sig_21_, 0);
lean_inc(v_name_24_);
v_type_25_ = lean_ctor_get(v_sig_21_, 2);
lean_inc_ref(v_type_25_);
v_params_26_ = lean_ctor_get(v_sig_21_, 3);
lean_inc_ref(v_params_26_);
lean_dec_ref(v_sig_21_);
v___x_27_ = lean_st_ref_get(v_a_22_);
v___x_34_ = lean_unsigned_to_nat(0u);
v___x_35_ = lean_array_get_size(v_params_26_);
v___x_36_ = lean_nat_dec_lt(v___x_34_, v___x_35_);
if (v___x_36_ == 0)
{
lean_dec(v___x_27_);
lean_dec_ref(v_type_25_);
lean_dec(v_name_24_);
goto v___jp_28_;
}
else
{
uint8_t v___x_37_; 
v___x_37_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_type_25_);
lean_dec_ref(v_type_25_);
if (v___x_37_ == 0)
{
lean_object* v_env_38_; 
v_env_38_ = lean_ctor_get(v___x_27_, 0);
lean_inc_ref(v_env_38_);
lean_dec(v___x_27_);
if (v___x_36_ == 0)
{
goto v___jp_39_;
}
else
{
size_t v___x_43_; size_t v___x_44_; uint8_t v___x_45_; 
v___x_43_ = ((size_t)0ULL);
v___x_44_ = lean_usize_of_nat(v___x_35_);
v___x_45_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion_spec__0(v_params_26_, v___x_43_, v___x_44_);
if (v___x_45_ == 0)
{
goto v___jp_39_;
}
else
{
lean_object* v___x_46_; lean_object* v___x_47_; 
lean_dec_ref(v_env_38_);
lean_dec_ref(v_params_26_);
lean_dec(v_name_24_);
v___x_46_ = lean_box(v___x_45_);
v___x_47_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
return v___x_47_;
}
}
v___jp_39_:
{
uint8_t v___x_40_; 
v___x_40_ = l_Lean_isExtern(v_env_38_, v_name_24_);
if (v___x_40_ == 0)
{
goto v___jp_28_;
}
else
{
lean_object* v___x_41_; lean_object* v___x_42_; 
lean_dec_ref(v_params_26_);
v___x_41_ = lean_box(v___x_40_);
v___x_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
return v___x_42_;
}
}
}
else
{
lean_object* v___x_48_; lean_object* v___x_49_; 
lean_dec(v___x_27_);
lean_dec_ref(v_params_26_);
lean_dec(v_name_24_);
v___x_48_ = lean_box(v___x_37_);
v___x_49_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_49_, 0, v___x_48_);
return v___x_49_;
}
}
v___jp_28_:
{
lean_object* v___x_29_; lean_object* v___x_30_; uint8_t v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_29_ = l_Lean_closureMaxArgs;
v___x_30_ = lean_array_get_size(v_params_26_);
lean_dec_ref(v_params_26_);
v___x_31_ = lean_nat_dec_lt(v___x_29_, v___x_30_);
v___x_32_ = lean_box(v___x_31_);
v___x_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion___redArg___boxed(lean_object* v_sig_50_, lean_object* v_a_51_, lean_object* v_a_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion___redArg(v_sig_50_, v_a_51_);
lean_dec(v_a_51_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion(lean_object* v_sig_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion___redArg(v_sig_54_, v_a_58_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion___boxed(lean_object* v_sig_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion(v_sig_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__0(size_t v_sz_68_, size_t v_i_69_, lean_object* v_bs_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = lean_usize_dec_lt(v_i_69_, v_sz_68_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; 
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v_bs_70_);
return v___x_77_;
}
else
{
lean_object* v_v_78_; lean_object* v_binderName_79_; lean_object* v_type_80_; lean_object* v___x_81_; lean_object* v_bs_x27_82_; uint8_t v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; lean_object* v___x_86_; 
v_v_78_ = lean_array_uget_borrowed(v_bs_70_, v_i_69_);
v_binderName_79_ = lean_ctor_get(v_v_78_, 1);
lean_inc(v_binderName_79_);
v_type_80_ = lean_ctor_get(v_v_78_, 2);
lean_inc_ref(v_type_80_);
v___x_81_ = lean_unsigned_to_nat(0u);
v_bs_x27_82_ = lean_array_uset(v_bs_70_, v_i_69_, v___x_81_);
v___x_83_ = 1;
v___x_84_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed(v_type_80_);
lean_dec_ref(v_type_80_);
v___x_85_ = 0;
v___x_86_ = l_Lean_Compiler_LCNF_mkParam(v___x_83_, v_binderName_79_, v___x_84_, v___x_85_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v_a_87_; size_t v___x_88_; size_t v___x_89_; lean_object* v___x_90_; 
v_a_87_ = lean_ctor_get(v___x_86_, 0);
lean_inc(v_a_87_);
lean_dec_ref_known(v___x_86_, 1);
v___x_88_ = ((size_t)1ULL);
v___x_89_ = lean_usize_add(v_i_69_, v___x_88_);
v___x_90_ = lean_array_uset(v_bs_x27_82_, v_i_69_, v_a_87_);
v_i_69_ = v___x_89_;
v_bs_70_ = v___x_90_;
goto _start;
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec_ref(v_bs_x27_82_);
v_a_92_ = lean_ctor_get(v___x_86_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_86_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_86_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__0___boxed(lean_object* v_sz_100_, lean_object* v_i_101_, lean_object* v_bs_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
size_t v_sz_boxed_108_; size_t v_i_boxed_109_; lean_object* v_res_110_; 
v_sz_boxed_108_ = lean_unbox_usize(v_sz_100_);
lean_dec(v_sz_100_);
v_i_boxed_109_ = lean_unbox_usize(v_i_101_);
lean_dec(v_i_101_);
v_res_110_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__0(v_sz_boxed_108_, v_i_boxed_109_, v_bs_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__1(lean_object* v_as_112_, size_t v_sz_113_, size_t v_i_114_, lean_object* v_b_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_){
_start:
{
lean_object* v_a_122_; uint8_t v___x_126_; 
v___x_126_ = lean_usize_dec_lt(v_i_114_, v_sz_113_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; 
v___x_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_127_, 0, v_b_115_);
return v___x_127_;
}
else
{
lean_object* v_snd_128_; lean_object* v_snd_129_; lean_object* v_fst_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_203_; 
v_snd_128_ = lean_ctor_get(v_b_115_, 1);
lean_inc(v_snd_128_);
v_snd_129_ = lean_ctor_get(v_snd_128_, 1);
lean_inc(v_snd_129_);
v_fst_130_ = lean_ctor_get(v_b_115_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v_b_115_);
if (v_isSharedCheck_203_ == 0)
{
lean_object* v_unused_204_; 
v_unused_204_ = lean_ctor_get(v_b_115_, 1);
lean_dec(v_unused_204_);
v___x_132_ = v_b_115_;
v_isShared_133_ = v_isSharedCheck_203_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_fst_130_);
lean_dec(v_b_115_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_203_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v_fst_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_201_; 
v_fst_134_ = lean_ctor_get(v_snd_128_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v_snd_128_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; 
v_unused_202_ = lean_ctor_get(v_snd_128_, 1);
lean_dec(v_unused_202_);
v___x_136_ = v_snd_128_;
v_isShared_137_ = v_isSharedCheck_201_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_fst_134_);
lean_dec(v_snd_128_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_201_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v_array_138_; lean_object* v_start_139_; lean_object* v_stop_140_; uint8_t v___x_141_; 
v_array_138_ = lean_ctor_get(v_snd_129_, 0);
v_start_139_ = lean_ctor_get(v_snd_129_, 1);
v_stop_140_ = lean_ctor_get(v_snd_129_, 2);
v___x_141_ = lean_nat_dec_lt(v_start_139_, v_stop_140_);
if (v___x_141_ == 0)
{
lean_object* v___x_143_; 
if (v_isShared_137_ == 0)
{
v___x_143_ = v___x_136_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_fst_134_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_snd_129_);
v___x_143_ = v_reuseFailAlloc_148_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_145_; 
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v___x_143_);
v___x_145_ = v___x_132_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_fst_130_);
lean_ctor_set(v_reuseFailAlloc_147_, 1, v___x_143_);
v___x_145_ = v_reuseFailAlloc_147_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
lean_object* v___x_146_; 
v___x_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
return v___x_146_;
}
}
}
else
{
lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_197_; 
lean_inc(v_stop_140_);
lean_inc(v_start_139_);
lean_inc_ref(v_array_138_);
v_isSharedCheck_197_ = !lean_is_exclusive(v_snd_129_);
if (v_isSharedCheck_197_ == 0)
{
lean_object* v_unused_198_; lean_object* v_unused_199_; lean_object* v_unused_200_; 
v_unused_198_ = lean_ctor_get(v_snd_129_, 2);
lean_dec(v_unused_198_);
v_unused_199_ = lean_ctor_get(v_snd_129_, 1);
lean_dec(v_unused_199_);
v_unused_200_ = lean_ctor_get(v_snd_129_, 0);
lean_dec(v_unused_200_);
v___x_150_ = v_snd_129_;
v_isShared_151_ = v_isSharedCheck_197_;
goto v_resetjp_149_;
}
else
{
lean_dec(v_snd_129_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_197_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v_a_152_; lean_object* v_binderName_153_; lean_object* v_type_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_159_; 
v_a_152_ = lean_array_uget_borrowed(v_as_112_, v_i_114_);
v_binderName_153_ = lean_ctor_get(v_a_152_, 1);
v_type_154_ = lean_ctor_get(v_a_152_, 2);
v___x_155_ = lean_array_fget(v_array_138_, v_start_139_);
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_157_ = lean_nat_add(v_start_139_, v___x_156_);
lean_dec(v_start_139_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 1, v___x_157_);
v___x_159_ = v___x_150_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_array_138_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v___x_157_);
lean_ctor_set(v_reuseFailAlloc_196_, 2, v_stop_140_);
v___x_159_ = v_reuseFailAlloc_196_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
uint8_t v___x_160_; 
v___x_160_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_type_154_);
if (v___x_160_ == 0)
{
lean_object* v_fvarId_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_165_; 
v_fvarId_161_ = lean_ctor_get(v___x_155_, 0);
lean_inc(v_fvarId_161_);
lean_dec(v___x_155_);
v___x_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_162_, 0, v_fvarId_161_);
v___x_163_ = lean_array_push(v_fst_134_, v___x_162_);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 1, v___x_159_);
lean_ctor_set(v___x_136_, 0, v___x_163_);
v___x_165_ = v___x_136_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_163_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v___x_159_);
v___x_165_ = v_reuseFailAlloc_169_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
lean_object* v___x_167_; 
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v___x_165_);
v___x_167_ = v___x_132_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_fst_130_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v___x_165_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
v_a_122_ = v___x_167_;
goto v___jp_121_;
}
}
}
else
{
lean_object* v_fvarId_170_; uint8_t v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_fvarId_170_ = lean_ctor_get(v___x_155_, 0);
lean_inc(v_fvarId_170_);
lean_dec(v___x_155_);
v___x_171_ = 1;
v___x_172_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__1___closed__0));
lean_inc(v_binderName_153_);
v___x_173_ = l_Lean_Name_str___override(v_binderName_153_, v___x_172_);
v___x_174_ = lean_alloc_ctor(14, 1, 0);
lean_ctor_set(v___x_174_, 0, v_fvarId_170_);
lean_inc_ref(v_type_154_);
v___x_175_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_171_, v___x_173_, v_type_154_, v___x_174_, v___y_116_, v___y_117_, v___y_118_, v___y_119_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; lean_object* v_fvarId_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_183_; 
v_a_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_a_176_);
lean_dec_ref_known(v___x_175_, 1);
v_fvarId_177_ = lean_ctor_get(v_a_176_, 0);
lean_inc(v_fvarId_177_);
v___x_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_178_, 0, v_a_176_);
v___x_179_ = lean_array_push(v_fst_130_, v___x_178_);
v___x_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_180_, 0, v_fvarId_177_);
v___x_181_ = lean_array_push(v_fst_134_, v___x_180_);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 1, v___x_159_);
lean_ctor_set(v___x_136_, 0, v___x_181_);
v___x_183_ = v___x_136_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_181_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v___x_159_);
v___x_183_ = v_reuseFailAlloc_187_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
lean_object* v___x_185_; 
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v___x_183_);
lean_ctor_set(v___x_132_, 0, v___x_179_);
v___x_185_ = v___x_132_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_179_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v___x_183_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
v_a_122_ = v___x_185_;
goto v___jp_121_;
}
}
}
else
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
lean_dec_ref(v___x_159_);
lean_del_object(v___x_136_);
lean_dec(v_fst_134_);
lean_del_object(v___x_132_);
lean_dec(v_fst_130_);
v_a_188_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v___x_175_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_175_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_a_188_);
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
}
}
}
}
}
}
v___jp_121_:
{
size_t v___x_123_; size_t v___x_124_; 
v___x_123_ = ((size_t)1ULL);
v___x_124_ = lean_usize_add(v_i_114_, v___x_123_);
v_i_114_ = v___x_124_;
v_b_115_ = v_a_122_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__1___boxed(lean_object* v_as_205_, lean_object* v_sz_206_, lean_object* v_i_207_, lean_object* v_b_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
size_t v_sz_boxed_214_; size_t v_i_boxed_215_; lean_object* v_res_216_; 
v_sz_boxed_214_ = lean_unbox_usize(v_sz_206_);
lean_dec(v_sz_206_);
v_i_boxed_215_ = lean_unbox_usize(v_i_207_);
lean_dec(v_i_207_);
v_res_216_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__1(v_as_205_, v_sz_boxed_214_, v_i_boxed_215_, v_b_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
lean_dec(v___y_210_);
lean_dec_ref(v___y_209_);
lean_dec_ref(v_as_205_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion(lean_object* v_sig_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v_name_231_; lean_object* v_type_232_; lean_object* v_params_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_352_; 
v_name_231_ = lean_ctor_get(v_sig_225_, 0);
v_type_232_ = lean_ctor_get(v_sig_225_, 2);
v_params_233_ = lean_ctor_get(v_sig_225_, 3);
v_isSharedCheck_352_ = !lean_is_exclusive(v_sig_225_);
if (v_isSharedCheck_352_ == 0)
{
lean_object* v_unused_353_; 
v_unused_353_ = lean_ctor_get(v_sig_225_, 1);
lean_dec(v_unused_353_);
v___x_235_ = v_sig_225_;
v_isShared_236_ = v_isSharedCheck_352_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_params_233_);
lean_inc(v_type_232_);
lean_inc(v_name_231_);
lean_dec(v_sig_225_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_352_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
size_t v_sz_237_; size_t v___x_238_; lean_object* v___x_239_; 
v_sz_237_ = lean_array_size(v_params_233_);
v___x_238_ = ((size_t)0ULL);
lean_inc_ref(v_params_233_);
v___x_239_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__0(v_sz_237_, v___x_238_, v_params_233_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v_a_240_; lean_object* v_value_242_; lean_object* v___y_243_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_a_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc_n(v_a_240_, 2);
lean_dec_ref_known(v___x_239_, 1);
v___x_272_ = lean_unsigned_to_nat(0u);
v___x_273_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__0));
v___x_274_ = lean_array_get_size(v_params_233_);
v___x_275_ = lean_mk_empty_array_with_capacity(v___x_274_);
v___x_276_ = lean_array_get_size(v_a_240_);
v___x_277_ = l_Array_toSubarray___redArg(v_a_240_, v___x_272_, v___x_276_);
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_275_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_273_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
v___x_280_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion_spec__1(v_params_233_, v_sz_237_, v___x_238_, v___x_279_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
lean_dec_ref(v_params_233_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v_snd_282_; lean_object* v_fst_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_335_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_280_, 1);
v_snd_282_ = lean_ctor_get(v_a_281_, 1);
v_fst_283_ = lean_ctor_get(v_a_281_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v_a_281_);
if (v_isSharedCheck_335_ == 0)
{
v___x_285_ = v_a_281_;
v_isShared_286_ = v_isSharedCheck_335_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_snd_282_);
lean_inc(v_fst_283_);
lean_dec(v_a_281_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_335_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v_fst_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_333_; 
v_fst_287_ = lean_ctor_get(v_snd_282_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v_snd_282_);
if (v_isSharedCheck_333_ == 0)
{
lean_object* v_unused_334_; 
v_unused_334_ = lean_ctor_get(v_snd_282_, 1);
lean_dec(v_unused_334_);
v___x_289_ = v_snd_282_;
v_isShared_290_ = v_isSharedCheck_333_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_fst_287_);
lean_dec(v_snd_282_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_333_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
uint8_t v___x_291_; lean_object* v___x_292_; lean_object* v___x_294_; 
v___x_291_ = 1;
v___x_292_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__2));
lean_inc(v_name_231_);
if (v_isShared_290_ == 0)
{
lean_ctor_set_tag(v___x_289_, 9);
lean_ctor_set(v___x_289_, 1, v_fst_287_);
lean_ctor_set(v___x_289_, 0, v_name_231_);
v___x_294_ = v___x_289_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_name_231_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_fst_287_);
v___x_294_ = v_reuseFailAlloc_332_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
lean_object* v___x_295_; 
lean_inc_ref(v_type_232_);
v___x_295_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_291_, v___x_292_, v_type_232_, v___x_294_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_297_; lean_object* v___x_298_; uint8_t v___x_299_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
lean_inc_n(v_a_296_, 2);
lean_dec_ref_known(v___x_295_, 1);
v___x_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_297_, 0, v_a_296_);
v___x_298_ = lean_array_push(v_fst_283_, v___x_297_);
v___x_299_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_type_232_);
if (v___x_299_ == 0)
{
lean_object* v_fvarId_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
lean_del_object(v___x_285_);
v_fvarId_300_ = lean_ctor_get(v_a_296_, 0);
lean_inc(v_fvarId_300_);
lean_dec(v_a_296_);
v___x_301_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_301_, 0, v_fvarId_300_);
v___x_302_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v___x_298_, v___x_301_);
lean_dec_ref(v___x_298_);
v_value_242_ = v___x_302_;
v___y_243_ = v_a_229_;
goto v___jp_241_;
}
else
{
lean_object* v_fvarId_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_307_; 
v_fvarId_303_ = lean_ctor_get(v_a_296_, 0);
lean_inc(v_fvarId_303_);
lean_dec(v_a_296_);
v___x_304_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__4));
v___x_305_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed(v_type_232_);
lean_inc_ref(v_type_232_);
if (v_isShared_286_ == 0)
{
lean_ctor_set_tag(v___x_285_, 13);
lean_ctor_set(v___x_285_, 1, v_fvarId_303_);
lean_ctor_set(v___x_285_, 0, v_type_232_);
v___x_307_ = v___x_285_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_type_232_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v_fvarId_303_);
v___x_307_ = v_reuseFailAlloc_323_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_291_, v___x_304_, v___x_305_, v___x_307_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v_fvarId_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_309_);
lean_dec_ref_known(v___x_308_, 1);
v_fvarId_310_ = lean_ctor_get(v_a_309_, 0);
lean_inc(v_fvarId_310_);
v___x_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_311_, 0, v_a_309_);
v___x_312_ = lean_array_push(v___x_298_, v___x_311_);
v___x_313_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_313_, 0, v_fvarId_310_);
v___x_314_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v___x_312_, v___x_313_);
lean_dec_ref(v___x_312_);
v_value_242_ = v___x_314_;
v___y_243_ = v_a_229_;
goto v___jp_241_;
}
else
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
lean_dec_ref(v___x_298_);
lean_dec(v_a_240_);
lean_del_object(v___x_235_);
lean_dec_ref(v_type_232_);
lean_dec(v_name_231_);
v_a_315_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_308_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_308_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
lean_del_object(v___x_285_);
lean_dec(v_fst_283_);
lean_dec(v_a_240_);
lean_del_object(v___x_235_);
lean_dec_ref(v_type_232_);
lean_dec(v_name_231_);
v_a_324_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_295_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_295_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
lean_dec(v_a_240_);
lean_del_object(v___x_235_);
lean_dec_ref(v_type_232_);
lean_dec(v_name_231_);
v_a_336_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_280_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_280_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
v___jp_241_:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; uint8_t v___x_247_; lean_object* v___x_249_; 
v___x_244_ = l_Lean_Compiler_LCNF_mkBoxedName(v_name_231_);
v___x_245_ = lean_box(0);
v___x_246_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed(v_type_232_);
lean_dec_ref(v_type_232_);
v___x_247_ = 1;
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 3, v_a_240_);
lean_ctor_set(v___x_235_, 2, v___x_246_);
lean_ctor_set(v___x_235_, 1, v___x_245_);
lean_ctor_set(v___x_235_, 0, v___x_244_);
v___x_249_ = v___x_235_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_271_, 1, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_271_, 2, v___x_246_);
lean_ctor_set(v_reuseFailAlloc_271_, 3, v_a_240_);
v___x_249_ = v_reuseFailAlloc_271_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_250_; uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
lean_ctor_set_uint8(v___x_249_, sizeof(void*)*4, v___x_247_);
v___x_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_250_, 0, v_value_242_);
v___x_251_ = 0;
v___x_252_ = lean_box(0);
v___x_253_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_253_, 0, v___x_249_);
lean_ctor_set(v___x_253_, 1, v___x_250_);
lean_ctor_set(v___x_253_, 2, v___x_252_);
lean_ctor_set_uint8(v___x_253_, sizeof(void*)*3, v___x_251_);
lean_inc_ref(v___x_253_);
v___x_254_ = l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(v___x_253_, v___y_243_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_261_ == 0)
{
lean_object* v_unused_262_; 
v_unused_262_ = lean_ctor_get(v___x_254_, 0);
lean_dec(v_unused_262_);
v___x_256_ = v___x_254_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_dec(v___x_254_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 0, v___x_253_);
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_253_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
else
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
lean_dec_ref_known(v___x_253_, 3);
v_a_263_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v___x_254_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_254_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_a_263_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_del_object(v___x_235_);
lean_dec_ref(v_params_233_);
lean_dec_ref(v_type_232_);
lean_dec(v_name_231_);
v_a_344_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_239_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_239_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___boxed(lean_object* v_sig_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion(v_sig_354_, v_a_355_, v_a_356_, v_a_357_, v_a_358_);
lean_dec(v_a_358_);
lean_dec_ref(v_a_357_);
lean_dec(v_a_356_);
lean_dec_ref(v_a_355_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0_spec__0(lean_object* v_as_361_, size_t v_i_362_, size_t v_stop_363_, lean_object* v_b_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v_a_371_; uint8_t v___x_375_; 
v___x_375_ = lean_usize_dec_eq(v_i_362_, v_stop_363_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; lean_object* v_toSignature_377_; lean_object* v___x_378_; 
v___x_376_ = lean_array_uget_borrowed(v_as_361_, v_i_362_);
v_toSignature_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc_ref(v_toSignature_377_);
v___x_378_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion___redArg(v_toSignature_377_, v___y_368_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; uint8_t v___x_380_; 
v_a_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_a_379_);
lean_dec_ref_known(v___x_378_, 1);
v___x_380_ = lean_unbox(v_a_379_);
lean_dec(v_a_379_);
if (v___x_380_ == 0)
{
v_a_371_ = v_b_364_;
goto v___jp_370_;
}
else
{
lean_object* v___x_381_; 
lean_inc_ref(v_toSignature_377_);
v___x_381_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion(v_toSignature_377_, v___y_365_, v___y_366_, v___y_367_, v___y_368_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_382_; lean_object* v___x_383_; 
v_a_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_382_);
lean_dec_ref_known(v___x_381_, 1);
v___x_383_ = lean_array_push(v_b_364_, v_a_382_);
v_a_371_ = v___x_383_;
goto v___jp_370_;
}
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
lean_dec_ref(v_b_364_);
v_a_384_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_381_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_381_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
}
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
lean_dec_ref(v_b_364_);
v_a_392_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_378_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_378_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
else
{
lean_object* v___x_400_; 
v___x_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_400_, 0, v_b_364_);
return v___x_400_;
}
v___jp_370_:
{
size_t v___x_372_; size_t v___x_373_; 
v___x_372_ = ((size_t)1ULL);
v___x_373_ = lean_usize_add(v_i_362_, v___x_372_);
v_i_362_ = v___x_373_;
v_b_364_ = v_a_371_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0_spec__0___boxed(lean_object* v_as_401_, lean_object* v_i_402_, lean_object* v_stop_403_, lean_object* v_b_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
size_t v_i_boxed_410_; size_t v_stop_boxed_411_; lean_object* v_res_412_; 
v_i_boxed_410_ = lean_unbox_usize(v_i_402_);
lean_dec(v_i_402_);
v_stop_boxed_411_ = lean_unbox_usize(v_stop_403_);
lean_dec(v_stop_403_);
v_res_412_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0_spec__0(v_as_401_, v_i_boxed_410_, v_stop_boxed_411_, v_b_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_);
lean_dec(v___y_408_);
lean_dec_ref(v___y_407_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
lean_dec_ref(v_as_401_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0(lean_object* v_as_415_, lean_object* v_start_416_, lean_object* v_stop_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; uint8_t v___x_424_; 
v___x_423_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0___closed__0));
v___x_424_ = lean_nat_dec_lt(v_start_416_, v_stop_417_);
if (v___x_424_ == 0)
{
lean_object* v___x_425_; 
v___x_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_425_, 0, v___x_423_);
return v___x_425_;
}
else
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = lean_array_get_size(v_as_415_);
v___x_427_ = lean_nat_dec_le(v_stop_417_, v___x_426_);
if (v___x_427_ == 0)
{
uint8_t v___x_428_; 
v___x_428_ = lean_nat_dec_lt(v_start_416_, v___x_426_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; 
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_423_);
return v___x_429_;
}
else
{
size_t v___x_430_; size_t v___x_431_; lean_object* v___x_432_; 
v___x_430_ = lean_usize_of_nat(v_start_416_);
v___x_431_ = lean_usize_of_nat(v___x_426_);
v___x_432_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0_spec__0(v_as_415_, v___x_430_, v___x_431_, v___x_423_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
return v___x_432_;
}
}
else
{
size_t v___x_433_; size_t v___x_434_; lean_object* v___x_435_; 
v___x_433_ = lean_usize_of_nat(v_start_416_);
v___x_434_ = lean_usize_of_nat(v_stop_417_);
v___x_435_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0_spec__0(v_as_415_, v___x_433_, v___x_434_, v___x_423_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
return v___x_435_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0___boxed(lean_object* v_as_436_, lean_object* v_start_437_, lean_object* v_stop_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0(v_as_436_, v_start_437_, v_stop_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
lean_dec(v_stop_438_);
lean_dec(v_start_437_);
lean_dec_ref(v_as_436_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addBoxedVersions(lean_object* v_decls_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = lean_array_get_size(v_decls_445_);
v___x_453_ = l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0(v_decls_445_, v___x_451_, v___x_452_, v_a_446_, v_a_447_, v_a_448_, v_a_449_);
if (lean_obj_tag(v___x_453_) == 0)
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_462_; 
v_a_454_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_462_ == 0)
{
v___x_456_ = v___x_453_;
v_isShared_457_ = v_isSharedCheck_462_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_453_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_462_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_458_ = l_Array_append___redArg(v_decls_445_, v_a_454_);
lean_dec(v_a_454_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_458_);
v___x_460_ = v___x_456_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_458_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
else
{
lean_dec_ref(v_decls_445_);
return v___x_453_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addBoxedVersions___boxed(lean_object* v_decls_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lean_Compiler_LCNF_addBoxedVersions(v_decls_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
lean_dec(v_a_467_);
lean_dec_ref(v_a_466_);
lean_dec(v_a_465_);
lean_dec_ref(v_a_464_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_getResultType___redArg(lean_object* v_a_470_){
_start:
{
lean_object* v_currDeclResultType_472_; lean_object* v___x_473_; 
v_currDeclResultType_472_ = lean_ctor_get(v_a_470_, 1);
lean_inc_ref(v_currDeclResultType_472_);
v___x_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_473_, 0, v_currDeclResultType_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_getResultType___redArg___boxed(lean_object* v_a_474_, lean_object* v_a_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_getResultType___redArg(v_a_474_);
lean_dec_ref(v_a_474_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_getResultType(lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_){
_start:
{
lean_object* v_currDeclResultType_484_; lean_object* v___x_485_; 
v_currDeclResultType_484_ = lean_ctor_get(v_a_477_, 1);
lean_inc_ref(v_currDeclResultType_484_);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v_currDeclResultType_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_getResultType___boxed(lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_getResultType(v_a_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
lean_dec(v_a_491_);
lean_dec_ref(v_a_490_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
return v_res_493_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing(lean_object* v_t_u2081_494_, lean_object* v_t_u2082_495_){
_start:
{
uint8_t v___y_497_; uint8_t v___x_500_; uint8_t v___x_501_; 
v___x_500_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_t_u2081_494_);
v___x_501_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_t_u2082_495_);
if (v___x_501_ == 0)
{
if (v___x_500_ == 0)
{
uint8_t v___x_502_; 
v___x_502_ = 1;
v___y_497_ = v___x_502_;
goto v___jp_496_;
}
else
{
return v___x_501_;
}
}
else
{
if (v___x_500_ == 0)
{
return v___x_500_;
}
else
{
v___y_497_ = v___x_500_;
goto v___jp_496_;
}
}
v___jp_496_:
{
uint8_t v___x_498_; 
v___x_498_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_t_u2081_494_);
if (v___x_498_ == 0)
{
return v___y_497_;
}
else
{
uint8_t v___x_499_; 
v___x_499_ = lean_expr_eqv(v_t_u2081_494_, v_t_u2082_495_);
return v___x_499_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing___boxed(lean_object* v_t_u2081_503_, lean_object* v_t_u2082_504_){
_start:
{
uint8_t v_res_505_; lean_object* v_r_506_; 
v_res_505_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing(v_t_u2081_503_, v_t_u2082_504_);
lean_dec_ref(v_t_u2082_504_);
lean_dec_ref(v_t_u2081_503_);
v_r_506_ = lean_box(v_res_505_);
return v_r_506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg(lean_object* v_x_509_, lean_object* v_xType_510_, lean_object* v_a_511_){
_start:
{
lean_object* v___y_514_; 
if (lean_obj_tag(v_xType_510_) == 4)
{
lean_object* v_declName_553_; 
v_declName_553_ = lean_ctor_get(v_xType_510_, 0);
if (lean_obj_tag(v_declName_553_) == 1)
{
lean_object* v_pre_554_; 
v_pre_554_ = lean_ctor_get(v_declName_553_, 0);
if (lean_obj_tag(v_pre_554_) == 0)
{
lean_object* v_us_555_; lean_object* v_str_556_; lean_object* v___x_557_; uint8_t v___x_558_; 
v_us_555_ = lean_ctor_get(v_xType_510_, 1);
v_str_556_ = lean_ctor_get(v_declName_553_, 1);
v___x_557_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg___closed__0));
v___x_558_ = lean_string_dec_eq(v_str_556_, v___x_557_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; uint8_t v___x_560_; 
v___x_559_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg___closed__1));
v___x_560_ = lean_string_dec_eq(v_str_556_, v___x_559_);
if (v___x_560_ == 0)
{
v___y_514_ = v_a_511_;
goto v___jp_513_;
}
else
{
if (lean_obj_tag(v_us_555_) == 0)
{
goto v___jp_550_;
}
else
{
v___y_514_ = v_a_511_;
goto v___jp_513_;
}
}
}
else
{
if (lean_obj_tag(v_us_555_) == 0)
{
goto v___jp_550_;
}
else
{
v___y_514_ = v_a_511_;
goto v___jp_513_;
}
}
}
else
{
v___y_514_ = v_a_511_;
goto v___jp_513_;
}
}
else
{
v___y_514_ = v_a_511_;
goto v___jp_513_;
}
}
else
{
v___y_514_ = v_a_511_;
goto v___jp_513_;
}
v___jp_513_:
{
uint8_t v___x_515_; lean_object* v___x_516_; 
v___x_515_ = 1;
v___x_516_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v___x_515_, v_x_509_, v___y_514_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
if (lean_obj_tag(v_a_517_) == 1)
{
lean_object* v_val_518_; 
v_val_518_ = lean_ctor_get(v_a_517_, 0);
switch(lean_obj_tag(v_val_518_))
{
case 0:
{
return v___x_516_;
}
case 9:
{
lean_object* v_args_519_; lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; 
v_args_519_ = lean_ctor_get(v_val_518_, 1);
v___x_520_ = lean_array_get_size(v_args_519_);
v___x_521_ = lean_unsigned_to_nat(0u);
v___x_522_ = lean_nat_dec_eq(v___x_520_, v___x_521_);
if (v___x_522_ == 0)
{
lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_530_; 
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_530_ == 0)
{
lean_object* v_unused_531_; 
v_unused_531_ = lean_ctor_get(v___x_516_, 0);
lean_dec(v_unused_531_);
v___x_524_ = v___x_516_;
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
else
{
lean_dec(v___x_516_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_526_ = lean_box(0);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v___x_526_);
v___x_528_ = v___x_524_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_526_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
else
{
return v___x_516_;
}
}
default: 
{
lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_539_; 
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_539_ == 0)
{
lean_object* v_unused_540_; 
v_unused_540_ = lean_ctor_get(v___x_516_, 0);
lean_dec(v_unused_540_);
v___x_533_ = v___x_516_;
v_isShared_534_ = v_isSharedCheck_539_;
goto v_resetjp_532_;
}
else
{
lean_dec(v___x_516_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_539_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_535_; lean_object* v___x_537_; 
v___x_535_ = lean_box(0);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v___x_535_);
v___x_537_ = v___x_533_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___x_535_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
else
{
lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_548_; 
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_548_ == 0)
{
lean_object* v_unused_549_; 
v_unused_549_ = lean_ctor_get(v___x_516_, 0);
lean_dec(v_unused_549_);
v___x_542_ = v___x_516_;
v_isShared_543_ = v_isSharedCheck_548_;
goto v_resetjp_541_;
}
else
{
lean_dec(v___x_516_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_548_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_544_; lean_object* v___x_546_; 
v___x_544_ = lean_box(0);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 0, v___x_544_);
v___x_546_ = v___x_542_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
else
{
return v___x_516_;
}
}
v___jp_550_:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_box(0);
v___x_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
return v___x_552_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg___boxed(lean_object* v_x_561_, lean_object* v_xType_562_, lean_object* v_a_563_, lean_object* v_a_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg(v_x_561_, v_xType_562_, v_a_563_);
lean_dec(v_a_563_);
lean_dec_ref(v_xType_562_);
lean_dec(v_x_561_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing(lean_object* v_x_566_, lean_object* v_xType_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg(v_x_566_, v_xType_567_, v_a_571_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___boxed(lean_object* v_x_576_, lean_object* v_xType_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing(v_x_576_, v_xType_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_);
lean_dec(v_a_583_);
lean_dec_ref(v_a_582_);
lean_dec(v_a_581_);
lean_dec_ref(v_a_580_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
lean_dec_ref(v_xType_577_);
lean_dec(v_x_576_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast(lean_object* v_fvarId_591_, lean_object* v_fvarIdType_592_, lean_object* v_expectedType_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_){
_start:
{
uint8_t v___x_601_; 
v___x_601_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_expectedType_593_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; 
v___x_602_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_isExpensiveConstantValueBoxing___redArg(v_fvarId_591_, v_fvarIdType_592_, v_a_597_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_729_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_729_ == 0)
{
v___x_605_ = v___x_602_;
v_isShared_606_ = v_isSharedCheck_729_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_602_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_729_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
if (lean_obj_tag(v_a_603_) == 0)
{
lean_object* v___x_607_; lean_object* v___x_609_; 
lean_dec_ref(v_expectedType_593_);
v___x_607_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v___x_607_, 0, v_fvarIdType_592_);
lean_ctor_set(v___x_607_, 1, v_fvarId_591_);
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 0, v___x_607_);
v___x_609_ = v___x_605_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v___x_607_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
else
{
lean_object* v_val_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_728_; 
lean_del_object(v___x_605_);
lean_dec(v_fvarId_591_);
v_val_611_ = lean_ctor_get(v_a_603_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v_a_603_);
if (v_isSharedCheck_728_ == 0)
{
v___x_613_ = v_a_603_;
v_isShared_614_ = v_isSharedCheck_728_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_val_611_);
lean_dec(v_a_603_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_728_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_615_ = 1;
v___x_616_ = lean_box(0);
lean_inc_ref(v_fvarIdType_592_);
v___x_617_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_615_, v___x_616_, v_fvarIdType_592_, v_val_611_, v_a_596_, v_a_597_, v_a_598_, v_a_599_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; lean_object* v_fvarId_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_617_, 1);
v_fvarId_619_ = lean_ctor_get(v_a_618_, 0);
lean_inc(v_fvarId_619_);
v___x_620_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v___x_620_, 0, v_fvarIdType_592_);
lean_ctor_set(v___x_620_, 1, v_fvarId_619_);
lean_inc_ref(v_expectedType_593_);
v___x_621_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_615_, v___x_616_, v_expectedType_593_, v___x_620_, v_a_596_, v_a_597_, v_a_598_, v_a_599_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v_a_622_; lean_object* v_fvarId_623_; lean_object* v___x_625_; 
v_a_622_ = lean_ctor_get(v___x_621_, 0);
lean_inc(v_a_622_);
lean_dec_ref_known(v___x_621_, 1);
v_fvarId_623_ = lean_ctor_get(v_a_622_, 0);
lean_inc(v_fvarId_623_);
if (v_isShared_614_ == 0)
{
lean_ctor_set_tag(v___x_613_, 5);
lean_ctor_set(v___x_613_, 0, v_fvarId_623_);
v___x_625_ = v___x_613_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_fvarId_623_);
v___x_625_ = v_reuseFailAlloc_711_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v_currDecl_629_; lean_object* v_nextAuxIdx_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_709_; 
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v_a_622_);
lean_ctor_set(v___x_626_, 1, v___x_625_);
v___x_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_627_, 0, v_a_618_);
lean_ctor_set(v___x_627_, 1, v___x_626_);
v___x_628_ = lean_st_ref_get(v_a_595_);
v_currDecl_629_ = lean_ctor_get(v_a_594_, 0);
v_nextAuxIdx_630_ = lean_ctor_get(v___x_628_, 1);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_709_ == 0)
{
lean_object* v_unused_710_; 
v_unused_710_ = lean_ctor_get(v___x_628_, 0);
lean_dec(v_unused_710_);
v___x_632_ = v___x_628_;
v_isShared_633_ = v_isSharedCheck_709_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_nextAuxIdx_630_);
lean_dec(v___x_628_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_709_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_634_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__1));
v___x_635_ = lean_name_append_index_after(v___x_634_, v_nextAuxIdx_630_);
lean_inc(v_currDecl_629_);
v___x_636_ = l_Lean_Name_append(v_currDecl_629_, v___x_635_);
v___x_637_ = lean_box(0);
v___x_638_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___closed__2));
v___x_639_ = 1;
lean_inc(v___x_636_);
v___x_640_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_640_, 0, v___x_636_);
lean_ctor_set(v___x_640_, 1, v___x_637_);
lean_ctor_set(v___x_640_, 2, v_expectedType_593_);
lean_ctor_set(v___x_640_, 3, v___x_638_);
lean_ctor_set_uint8(v___x_640_, sizeof(void*)*4, v___x_639_);
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_627_);
v___x_642_ = lean_box(0);
v___x_643_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_643_, 0, v___x_640_);
lean_ctor_set(v___x_643_, 1, v___x_641_);
lean_ctor_set(v___x_643_, 2, v___x_642_);
lean_ctor_set_uint8(v___x_643_, sizeof(void*)*3, v___x_601_);
lean_inc_ref(v___x_643_);
v___x_644_ = l_Lean_Compiler_LCNF_cacheAuxDecl___redArg(v___x_615_, v___x_643_, v_a_598_, v_a_599_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v___x_644_, 1);
if (lean_obj_tag(v_a_645_) == 0)
{
lean_object* v___x_646_; lean_object* v_auxDecls_647_; lean_object* v_nextAuxIdx_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_679_; 
v___x_646_ = lean_st_ref_take(v_a_595_);
v_auxDecls_647_ = lean_ctor_get(v___x_646_, 0);
v_nextAuxIdx_648_ = lean_ctor_get(v___x_646_, 1);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_679_ == 0)
{
v___x_650_ = v___x_646_;
v_isShared_651_ = v_isSharedCheck_679_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_nextAuxIdx_648_);
lean_inc(v_auxDecls_647_);
lean_dec(v___x_646_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_679_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_656_; 
lean_inc_ref(v___x_643_);
v___x_652_ = lean_array_push(v_auxDecls_647_, v___x_643_);
v___x_653_ = lean_unsigned_to_nat(1u);
v___x_654_ = lean_nat_add(v_nextAuxIdx_648_, v___x_653_);
lean_dec(v_nextAuxIdx_648_);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 1, v___x_654_);
lean_ctor_set(v___x_650_, 0, v___x_652_);
v___x_656_ = v___x_650_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_652_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v___x_654_);
v___x_656_ = v_reuseFailAlloc_678_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = lean_st_ref_put(v_a_595_, v___x_656_);
v___x_658_ = l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(v___x_643_, v_a_599_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_668_; 
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_668_ == 0)
{
lean_object* v_unused_669_; 
v_unused_669_ = lean_ctor_get(v___x_658_, 0);
lean_dec(v_unused_669_);
v___x_660_ = v___x_658_;
v_isShared_661_ = v_isSharedCheck_668_;
goto v_resetjp_659_;
}
else
{
lean_dec(v___x_658_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_668_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_663_; 
if (v_isShared_633_ == 0)
{
lean_ctor_set_tag(v___x_632_, 9);
lean_ctor_set(v___x_632_, 1, v___x_638_);
lean_ctor_set(v___x_632_, 0, v___x_636_);
v___x_663_ = v___x_632_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v___x_636_);
lean_ctor_set(v_reuseFailAlloc_667_, 1, v___x_638_);
v___x_663_ = v_reuseFailAlloc_667_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_665_; 
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 0, v___x_663_);
v___x_665_ = v___x_660_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
else
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
lean_dec(v___x_636_);
lean_del_object(v___x_632_);
v_a_670_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_658_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_658_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
}
}
else
{
lean_object* v_declName_680_; lean_object* v___x_681_; 
lean_dec(v___x_636_);
v_declName_680_ = lean_ctor_get(v_a_645_, 0);
lean_inc(v_declName_680_);
lean_dec_ref_known(v_a_645_, 1);
v___x_681_ = l_Lean_Compiler_LCNF_eraseDecl(v___x_615_, v___x_643_, v_a_596_, v_a_597_, v_a_598_, v_a_599_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_691_; 
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_691_ == 0)
{
lean_object* v_unused_692_; 
v_unused_692_ = lean_ctor_get(v___x_681_, 0);
lean_dec(v_unused_692_);
v___x_683_ = v___x_681_;
v_isShared_684_ = v_isSharedCheck_691_;
goto v_resetjp_682_;
}
else
{
lean_dec(v___x_681_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_691_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_633_ == 0)
{
lean_ctor_set_tag(v___x_632_, 9);
lean_ctor_set(v___x_632_, 1, v___x_638_);
lean_ctor_set(v___x_632_, 0, v_declName_680_);
v___x_686_ = v___x_632_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_declName_680_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v___x_638_);
v___x_686_ = v_reuseFailAlloc_690_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_688_; 
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 0, v___x_686_);
v___x_688_ = v___x_683_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_686_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
lean_dec(v_declName_680_);
lean_del_object(v___x_632_);
v_a_693_ = lean_ctor_get(v___x_681_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_681_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_681_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
}
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec_ref_known(v___x_643_, 3);
lean_dec(v___x_636_);
lean_del_object(v___x_632_);
v_a_701_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_644_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_644_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
}
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_dec(v_a_618_);
lean_del_object(v___x_613_);
lean_dec_ref(v_expectedType_593_);
v_a_712_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_621_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_621_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
lean_del_object(v___x_613_);
lean_dec_ref(v_expectedType_593_);
lean_dec_ref(v_fvarIdType_592_);
v_a_720_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_617_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_617_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
lean_dec_ref(v_expectedType_593_);
lean_dec_ref(v_fvarIdType_592_);
lean_dec(v_fvarId_591_);
v_a_730_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_602_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_602_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
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
lean_object* v___x_738_; lean_object* v___x_739_; 
lean_dec_ref(v_expectedType_593_);
lean_dec_ref(v_fvarIdType_592_);
v___x_738_ = lean_alloc_ctor(14, 1, 0);
lean_ctor_set(v___x_738_, 0, v_fvarId_591_);
v___x_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
return v___x_739_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast___boxed(lean_object* v_fvarId_740_, lean_object* v_fvarIdType_741_, lean_object* v_expectedType_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast(v_fvarId_740_, v_fvarIdType_741_, v_expectedType_742_, v_a_743_, v_a_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_);
lean_dec(v_a_748_);
lean_dec_ref(v_a_747_);
lean_dec(v_a_746_);
lean_dec_ref(v_a_745_);
lean_dec(v_a_744_);
lean_dec_ref(v_a_743_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castVarIfNeeded(lean_object* v_fvarId_751_, lean_object* v_expectedType_752_, lean_object* v_k_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_){
_start:
{
lean_object* v___x_761_; 
lean_inc(v_fvarId_751_);
v___x_761_ = l_Lean_Compiler_LCNF_getType(v_fvarId_751_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v_a_762_; uint8_t v___x_763_; 
v_a_762_ = lean_ctor_get(v___x_761_, 0);
lean_inc(v_a_762_);
lean_dec_ref_known(v___x_761_, 1);
v___x_763_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing(v_a_762_, v_expectedType_752_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; 
lean_inc_ref(v_expectedType_752_);
v___x_764_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast(v_fvarId_751_, v_a_762_, v_expectedType_752_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
if (lean_obj_tag(v___x_764_) == 0)
{
lean_object* v_a_765_; uint8_t v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v_a_765_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_a_765_);
lean_dec_ref_known(v___x_764_, 1);
v___x_766_ = 1;
v___x_767_ = lean_box(0);
v___x_768_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_766_, v___x_767_, v_expectedType_752_, v_a_765_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v_fvarId_770_; lean_object* v___x_771_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_a_769_);
lean_dec_ref_known(v___x_768_, 1);
v_fvarId_770_ = lean_ctor_get(v_a_769_, 0);
lean_inc(v_a_759_);
lean_inc_ref(v_a_758_);
lean_inc(v_a_757_);
lean_inc_ref(v_a_756_);
lean_inc(v_a_755_);
lean_inc_ref(v_a_754_);
lean_inc(v_fvarId_770_);
v___x_771_ = lean_apply_8(v_k_753_, v_fvarId_770_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_, lean_box(0));
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_780_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_780_ == 0)
{
v___x_774_ = v___x_771_;
v_isShared_775_ = v_isSharedCheck_780_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___x_771_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_780_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_776_; lean_object* v___x_778_; 
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v_a_769_);
lean_ctor_set(v___x_776_, 1, v_a_772_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v___x_776_);
v___x_778_ = v___x_774_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_776_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
else
{
lean_dec(v_a_769_);
return v___x_771_;
}
}
else
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
lean_dec_ref(v_k_753_);
v_a_781_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_768_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_768_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_dec_ref(v_k_753_);
lean_dec_ref(v_expectedType_752_);
v_a_789_ = lean_ctor_get(v___x_764_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_764_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_764_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_764_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
else
{
lean_object* v___x_797_; 
lean_dec(v_a_762_);
lean_dec_ref(v_expectedType_752_);
lean_inc(v_a_759_);
lean_inc_ref(v_a_758_);
lean_inc(v_a_757_);
lean_inc_ref(v_a_756_);
lean_inc(v_a_755_);
lean_inc_ref(v_a_754_);
v___x_797_ = lean_apply_8(v_k_753_, v_fvarId_751_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_, lean_box(0));
return v___x_797_;
}
}
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec_ref(v_k_753_);
lean_dec_ref(v_expectedType_752_);
lean_dec(v_fvarId_751_);
v_a_798_ = lean_ctor_get(v___x_761_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_761_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_761_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castVarIfNeeded___boxed(lean_object* v_fvarId_806_, lean_object* v_expectedType_807_, lean_object* v_k_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castVarIfNeeded(v_fvarId_806_, v_expectedType_807_, v_k_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_, v_a_814_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
lean_dec(v_a_812_);
lean_dec_ref(v_a_811_);
lean_dec(v_a_810_);
lean_dec_ref(v_a_809_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded___lam__0(lean_object* v_arg_817_, lean_object* v_k_818_, lean_object* v_x_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_827_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateFVarImp___redArg(v_arg_817_, v_x_819_);
lean_inc(v___y_825_);
lean_inc_ref(v___y_824_);
lean_inc(v___y_823_);
lean_inc_ref(v___y_822_);
lean_inc(v___y_821_);
lean_inc_ref(v___y_820_);
v___x_828_ = lean_apply_8(v_k_818_, v___x_827_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, lean_box(0));
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded___lam__0___boxed(lean_object* v_arg_829_, lean_object* v_k_830_, lean_object* v_x_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded___lam__0(v_arg_829_, v_k_830_, v_x_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_);
lean_dec(v___y_837_);
lean_dec_ref(v___y_836_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded(lean_object* v_arg_840_, lean_object* v_expectedType_841_, lean_object* v_k_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_){
_start:
{
if (lean_obj_tag(v_arg_840_) == 0)
{
lean_object* v___x_850_; 
lean_dec_ref(v_expectedType_841_);
lean_inc(v_a_848_);
lean_inc_ref(v_a_847_);
lean_inc(v_a_846_);
lean_inc_ref(v_a_845_);
lean_inc(v_a_844_);
lean_inc_ref(v_a_843_);
v___x_850_ = lean_apply_8(v_k_842_, v_arg_840_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, lean_box(0));
return v___x_850_;
}
else
{
lean_object* v_fvarId_851_; lean_object* v___x_852_; 
v_fvarId_851_ = lean_ctor_get(v_arg_840_, 0);
lean_inc(v_fvarId_851_);
v___x_852_ = l_Lean_Compiler_LCNF_getType(v_fvarId_851_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
if (lean_obj_tag(v___x_852_) == 0)
{
lean_object* v_a_853_; uint8_t v___x_854_; 
v_a_853_ = lean_ctor_get(v___x_852_, 0);
lean_inc(v_a_853_);
lean_dec_ref_known(v___x_852_, 1);
v___x_854_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing(v_a_853_, v_expectedType_841_);
if (v___x_854_ == 0)
{
lean_object* v___x_855_; 
lean_inc_ref(v_expectedType_841_);
lean_inc(v_fvarId_851_);
v___x_855_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast(v_fvarId_851_, v_a_853_, v_expectedType_841_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; uint8_t v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_856_);
lean_dec_ref_known(v___x_855_, 1);
v___x_857_ = 1;
v___x_858_ = lean_box(0);
v___x_859_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_857_, v___x_858_, v_expectedType_841_, v_a_856_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; lean_object* v_fvarId_861_; lean_object* v___x_862_; 
v_a_860_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_a_860_);
lean_dec_ref_known(v___x_859_, 1);
v_fvarId_861_ = lean_ctor_get(v_a_860_, 0);
lean_inc(v_fvarId_861_);
v___x_862_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded___lam__0(v_arg_840_, v_k_842_, v_fvarId_861_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_871_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_871_ == 0)
{
v___x_865_ = v___x_862_;
v_isShared_866_ = v_isSharedCheck_871_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_862_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_871_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_867_, 0, v_a_860_);
lean_ctor_set(v___x_867_, 1, v_a_863_);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v___x_867_);
v___x_869_ = v___x_865_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v___x_867_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
else
{
lean_dec(v_a_860_);
return v___x_862_;
}
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
lean_dec_ref_known(v_arg_840_, 1);
lean_dec_ref(v_k_842_);
v_a_872_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_859_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_859_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_a_872_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
lean_dec_ref_known(v_arg_840_, 1);
lean_dec_ref(v_k_842_);
lean_dec_ref(v_expectedType_841_);
v_a_880_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_855_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_855_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
else
{
lean_object* v___x_888_; 
lean_inc(v_fvarId_851_);
lean_dec(v_a_853_);
lean_dec_ref(v_expectedType_841_);
v___x_888_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded___lam__0(v_arg_840_, v_k_842_, v_fvarId_851_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
return v___x_888_;
}
}
else
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_dec_ref_known(v_arg_840_, 1);
lean_dec_ref(v_k_842_);
lean_dec_ref(v_expectedType_841_);
v_a_889_ = lean_ctor_get(v___x_852_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_852_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_852_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_852_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_889_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded___boxed(lean_object* v_arg_897_, lean_object* v_expectedType_898_, lean_object* v_k_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgIfNeeded(v_arg_897_, v_expectedType_898_, v_k_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_, v_a_904_, v_a_905_);
lean_dec(v_a_905_);
lean_dec_ref(v_a_904_);
lean_dec(v_a_903_);
lean_dec_ref(v_a_902_);
lean_dec(v_a_901_);
lean_dec_ref(v_a_900_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg___lam__0(lean_object* v_fst_908_, lean_object* v___x_909_, lean_object* v_snd_910_, lean_object* v_00___911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_919_ = lean_array_push(v_fst_908_, v___x_909_);
v___x_920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
lean_ctor_set(v___x_920_, 1, v_snd_910_);
v___x_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
v___x_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg___lam__0___boxed(lean_object* v_fst_923_, lean_object* v___x_924_, lean_object* v_snd_925_, lean_object* v_00___926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg___lam__0(v_fst_923_, v___x_924_, v_snd_925_, v_00___926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg(lean_object* v_upperBound_935_, lean_object* v_args_936_, lean_object* v_typeFromIdx_937_, lean_object* v_a_938_, lean_object* v_b_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
lean_object* v_a_948_; lean_object* v___y_953_; uint8_t v___x_972_; 
v___x_972_ = lean_nat_dec_lt(v_a_938_, v_upperBound_935_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; 
lean_dec(v_a_938_);
lean_dec_ref(v_typeFromIdx_937_);
v___x_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_973_, 0, v_b_939_);
return v___x_973_;
}
else
{
lean_object* v_fst_974_; lean_object* v_snd_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_1034_; 
v_fst_974_ = lean_ctor_get(v_b_939_, 0);
v_snd_975_ = lean_ctor_get(v_b_939_, 1);
v_isSharedCheck_1034_ = !lean_is_exclusive(v_b_939_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_977_ = v_b_939_;
v_isShared_978_ = v_isSharedCheck_1034_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_snd_975_);
lean_inc(v_fst_974_);
lean_dec(v_b_939_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_1034_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_979_; 
v___x_979_ = lean_array_fget(v_args_936_, v_a_938_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v___x_980_; lean_object* v___x_981_; 
lean_del_object(v___x_977_);
v___x_980_ = lean_box(0);
v___x_981_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg___lam__0(v_fst_974_, v___x_979_, v_snd_975_, v___x_980_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
v___y_953_ = v___x_981_;
goto v___jp_952_;
}
else
{
lean_object* v_fvarId_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v_fvarId_982_ = lean_ctor_get(v___x_979_, 0);
lean_inc_ref(v_typeFromIdx_937_);
lean_inc(v_a_938_);
v___x_983_ = lean_apply_1(v_typeFromIdx_937_, v_a_938_);
lean_inc(v_fvarId_982_);
v___x_984_ = l_Lean_Compiler_LCNF_getType(v_fvarId_982_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; uint8_t v___x_986_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing(v_a_985_, v___x_983_);
if (v___x_986_ == 0)
{
lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1022_; 
lean_inc(v_fvarId_982_);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_1022_ == 0)
{
lean_object* v_unused_1023_; 
v_unused_1023_ = lean_ctor_get(v___x_979_, 0);
lean_dec(v_unused_1023_);
v___x_988_ = v___x_979_;
v_isShared_989_ = v_isSharedCheck_1022_;
goto v_resetjp_987_;
}
else
{
lean_dec(v___x_979_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1022_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; 
lean_inc_ref(v___x_983_);
v___x_990_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast(v_fvarId_982_, v_a_985_, v___x_983_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; uint8_t v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_991_);
lean_dec_ref_known(v___x_990_, 1);
v___x_992_ = 1;
v___x_993_ = lean_box(0);
v___x_994_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_992_, v___x_993_, v___x_983_, v_a_991_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v_fvarId_996_; lean_object* v___x_998_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_994_, 1);
v_fvarId_996_ = lean_ctor_get(v_a_995_, 0);
lean_inc(v_fvarId_996_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v_fvarId_996_);
v___x_998_ = v___x_988_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_fvarId_996_);
v___x_998_ = v_reuseFailAlloc_1005_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1003_; 
v___x_999_ = lean_array_push(v_fst_974_, v___x_998_);
v___x_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1000_, 0, v_a_995_);
v___x_1001_ = lean_array_push(v_snd_975_, v___x_1000_);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 1, v___x_1001_);
lean_ctor_set(v___x_977_, 0, v___x_999_);
v___x_1003_ = v___x_977_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
v_a_948_ = v___x_1003_;
goto v___jp_947_;
}
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1013_; 
lean_del_object(v___x_988_);
lean_del_object(v___x_977_);
lean_dec(v_snd_975_);
lean_dec(v_fst_974_);
lean_dec(v_a_938_);
lean_dec_ref(v_typeFromIdx_937_);
v_a_1006_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1008_ = v___x_994_;
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_994_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
else
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
lean_del_object(v___x_988_);
lean_dec_ref(v___x_983_);
lean_del_object(v___x_977_);
lean_dec(v_snd_975_);
lean_dec(v_fst_974_);
lean_dec(v_a_938_);
lean_dec_ref(v_typeFromIdx_937_);
v_a_1014_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_990_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_990_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_a_1014_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
else
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
lean_dec(v_a_985_);
lean_dec_ref(v___x_983_);
lean_del_object(v___x_977_);
v___x_1024_ = lean_box(0);
v___x_1025_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg___lam__0(v_fst_974_, v___x_979_, v_snd_975_, v___x_1024_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
v___y_953_ = v___x_1025_;
goto v___jp_952_;
}
}
else
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
lean_dec_ref(v___x_983_);
lean_dec_ref_known(v___x_979_, 1);
lean_del_object(v___x_977_);
lean_dec(v_snd_975_);
lean_dec(v_fst_974_);
lean_dec(v_a_938_);
lean_dec_ref(v_typeFromIdx_937_);
v_a_1026_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___x_984_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_984_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1026_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
}
}
v___jp_947_:
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = lean_unsigned_to_nat(1u);
v___x_950_ = lean_nat_add(v_a_938_, v___x_949_);
lean_dec(v_a_938_);
v_a_938_ = v___x_950_;
v_b_939_ = v_a_948_;
goto _start;
}
v___jp_952_:
{
if (lean_obj_tag(v___y_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_963_; 
v_a_954_ = lean_ctor_get(v___y_953_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___y_953_);
if (v_isSharedCheck_963_ == 0)
{
v___x_956_ = v___y_953_;
v_isShared_957_ = v_isSharedCheck_963_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___y_953_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_963_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
if (lean_obj_tag(v_a_954_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_960_; 
lean_dec(v_a_938_);
lean_dec_ref(v_typeFromIdx_937_);
v_a_958_ = lean_ctor_get(v_a_954_, 0);
lean_inc(v_a_958_);
lean_dec_ref_known(v_a_954_, 1);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 0, v_a_958_);
v___x_960_ = v___x_956_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
else
{
lean_object* v_a_962_; 
lean_del_object(v___x_956_);
v_a_962_ = lean_ctor_get(v_a_954_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v_a_954_, 1);
v_a_948_ = v_a_962_;
goto v___jp_947_;
}
}
}
else
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_971_; 
lean_dec(v_a_938_);
lean_dec_ref(v_typeFromIdx_937_);
v_a_964_ = lean_ctor_get(v___y_953_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___y_953_);
if (v_isSharedCheck_971_ == 0)
{
v___x_966_ = v___y_953_;
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___y_953_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_969_; 
if (v_isShared_967_ == 0)
{
v___x_969_ = v___x_966_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_a_964_);
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
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg___boxed(lean_object* v_upperBound_1035_, lean_object* v_args_1036_, lean_object* v_typeFromIdx_1037_, lean_object* v_a_1038_, lean_object* v_b_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg(v_upperBound_1035_, v_args_1036_, v_typeFromIdx_1037_, v_a_1038_, v_b_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec_ref(v_args_1036_);
lean_dec(v_upperBound_1035_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux(lean_object* v_args_1048_, lean_object* v_typeFromIdx_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_){
_start:
{
lean_object* v___x_1057_; lean_object* v_newArgs_1058_; lean_object* v___x_1059_; lean_object* v_casters_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1057_ = lean_array_get_size(v_args_1048_);
v_newArgs_1058_ = lean_mk_empty_array_with_capacity(v___x_1057_);
v___x_1059_ = lean_unsigned_to_nat(0u);
v_casters_1060_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkBoxedVersion___closed__0));
v___x_1061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1061_, 0, v_newArgs_1058_);
lean_ctor_set(v___x_1061_, 1, v_casters_1060_);
v___x_1062_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg(v___x_1057_, v_args_1048_, v_typeFromIdx_1049_, v___x_1059_, v___x_1061_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1079_; 
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1065_ = v___x_1062_;
v_isShared_1066_ = v_isSharedCheck_1079_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1062_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1079_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v_fst_1067_; lean_object* v_snd_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1078_; 
v_fst_1067_ = lean_ctor_get(v_a_1063_, 0);
v_snd_1068_ = lean_ctor_get(v_a_1063_, 1);
v_isSharedCheck_1078_ = !lean_is_exclusive(v_a_1063_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1070_ = v_a_1063_;
v_isShared_1071_ = v_isSharedCheck_1078_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_snd_1068_);
lean_inc(v_fst_1067_);
lean_dec(v_a_1063_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1078_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_fst_1067_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v_snd_1068_);
v___x_1073_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
lean_object* v___x_1075_; 
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 0, v___x_1073_);
v___x_1075_ = v___x_1065_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
}
else
{
return v___x_1062_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux___boxed(lean_object* v_args_1080_, lean_object* v_typeFromIdx_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux(v_args_1080_, v_typeFromIdx_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_, v_a_1087_);
lean_dec(v_a_1087_);
lean_dec_ref(v_a_1086_);
lean_dec(v_a_1085_);
lean_dec_ref(v_a_1084_);
lean_dec(v_a_1083_);
lean_dec_ref(v_a_1082_);
lean_dec_ref(v_args_1080_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0(lean_object* v_upperBound_1090_, lean_object* v_args_1091_, lean_object* v_typeFromIdx_1092_, lean_object* v_inst_1093_, lean_object* v_R_1094_, lean_object* v_a_1095_, lean_object* v_b_1096_, lean_object* v_c_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___redArg(v_upperBound_1090_, v_args_1091_, v_typeFromIdx_1092_, v_a_1095_, v_b_1096_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0___boxed(lean_object* v_upperBound_1106_, lean_object* v_args_1107_, lean_object* v_typeFromIdx_1108_, lean_object* v_inst_1109_, lean_object* v_R_1110_, lean_object* v_a_1111_, lean_object* v_b_1112_, lean_object* v_c_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux_spec__0(v_upperBound_1106_, v_args_1107_, v_typeFromIdx_1108_, v_inst_1109_, v_R_1110_, v_a_1111_, v_b_1112_, v_c_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
lean_dec(v___y_1117_);
lean_dec_ref(v___y_1116_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
lean_dec_ref(v_args_1107_);
lean_dec(v_upperBound_1106_);
return v_res_1121_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0(lean_object* v_ps_1123_, lean_object* v_i_1124_){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v_type_1127_; 
v___x_1125_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0);
v___x_1126_ = lean_array_get_borrowed(v___x_1125_, v_ps_1123_, v_i_1124_);
v_type_1127_ = lean_ctor_get(v___x_1126_, 2);
lean_inc_ref(v_type_1127_);
return v_type_1127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___boxed(lean_object* v_ps_1128_, lean_object* v_i_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0(v_ps_1128_, v_i_1129_);
lean_dec(v_i_1129_);
lean_dec_ref(v_ps_1128_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded(lean_object* v_args_1131_, lean_object* v_ps_1132_, lean_object* v_k_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_){
_start:
{
lean_object* v___f_1141_; lean_object* v___x_1142_; 
v___f_1141_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1141_, 0, v_ps_1132_);
v___x_1142_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux(v_args_1131_, v___f_1141_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v_fst_1144_; lean_object* v_snd_1145_; lean_object* v___x_1146_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1143_);
lean_dec_ref_known(v___x_1142_, 1);
v_fst_1144_ = lean_ctor_get(v_a_1143_, 0);
lean_inc(v_fst_1144_);
v_snd_1145_ = lean_ctor_get(v_a_1143_, 1);
lean_inc(v_snd_1145_);
lean_dec(v_a_1143_);
lean_inc(v_a_1139_);
lean_inc_ref(v_a_1138_);
lean_inc(v_a_1137_);
lean_inc_ref(v_a_1136_);
lean_inc(v_a_1135_);
lean_inc_ref(v_a_1134_);
v___x_1146_ = lean_apply_8(v_k_1133_, v_fst_1144_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_, lean_box(0));
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1155_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1149_ = v___x_1146_;
v_isShared_1150_ = v_isSharedCheck_1155_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1146_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1155_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1151_; lean_object* v___x_1153_; 
v___x_1151_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_snd_1145_, v_a_1147_);
lean_dec(v_snd_1145_);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 0, v___x_1151_);
v___x_1153_ = v___x_1149_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1151_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
else
{
lean_dec(v_snd_1145_);
return v___x_1146_;
}
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
lean_dec_ref(v_k_1133_);
v_a_1156_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1142_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1142_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___boxed(lean_object* v_args_1164_, lean_object* v_ps_1165_, lean_object* v_k_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded(v_args_1164_, v_ps_1165_, v_k_1166_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_, v_a_1171_, v_a_1172_);
lean_dec(v_a_1172_);
lean_dec_ref(v_a_1171_);
lean_dec(v_a_1170_);
lean_dec_ref(v_a_1169_);
lean_dec(v_a_1168_);
lean_dec_ref(v_a_1167_);
lean_dec_ref(v_args_1164_);
return v_res_1174_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = lean_box(0);
v___x_1179_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__1));
v___x_1180_ = l_Lean_Expr_const___override(v___x_1179_, v___x_1178_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0(lean_object* v_x_1181_){
_start:
{
lean_object* v___x_1182_; 
v___x_1182_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___boxed(lean_object* v_x_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0(v_x_1183_);
lean_dec(v_x_1183_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded(lean_object* v_args_1186_, lean_object* v_k_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_){
_start:
{
lean_object* v___f_1195_; lean_object* v___x_1196_; 
v___f_1195_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___closed__0));
v___x_1196_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux(v_args_1186_, v___f_1195_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v_fst_1198_; lean_object* v_snd_1199_; lean_object* v___x_1200_; 
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc(v_a_1197_);
lean_dec_ref_known(v___x_1196_, 1);
v_fst_1198_ = lean_ctor_get(v_a_1197_, 0);
lean_inc(v_fst_1198_);
v_snd_1199_ = lean_ctor_get(v_a_1197_, 1);
lean_inc(v_snd_1199_);
lean_dec(v_a_1197_);
lean_inc(v_a_1193_);
lean_inc_ref(v_a_1192_);
lean_inc(v_a_1191_);
lean_inc_ref(v_a_1190_);
lean_inc(v_a_1189_);
lean_inc_ref(v_a_1188_);
v___x_1200_ = lean_apply_8(v_k_1187_, v_fst_1198_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, lean_box(0));
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1209_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1203_ = v___x_1200_;
v_isShared_1204_ = v_isSharedCheck_1209_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1209_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1205_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_snd_1199_, v_a_1201_);
lean_dec(v_snd_1199_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 0, v___x_1205_);
v___x_1207_ = v___x_1203_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1205_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
else
{
lean_dec(v_snd_1199_);
return v___x_1200_;
}
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
lean_dec_ref(v_k_1187_);
v_a_1210_ = lean_ctor_get(v___x_1196_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1196_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1196_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___boxed(lean_object* v_args_1218_, lean_object* v_k_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded(v_args_1218_, v_k_1219_, v_a_1220_, v_a_1221_, v_a_1222_, v_a_1223_, v_a_1224_, v_a_1225_);
lean_dec(v_a_1225_);
lean_dec_ref(v_a_1224_);
lean_dec(v_a_1223_);
lean_dec_ref(v_a_1222_);
lean_dec(v_a_1221_);
lean_dec_ref(v_a_1220_);
lean_dec_ref(v_args_1218_);
return v_res_1227_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1228_; 
v___x_1228_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0(lean_object* v_msg_1229_){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1230_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0___closed__0);
v___x_1231_ = lean_panic_fn_borrowed(v___x_1230_, v_msg_1229_);
return v___x_1231_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3(void){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1235_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__2));
v___x_1236_ = lean_unsigned_to_nat(9u);
v___x_1237_ = lean_unsigned_to_nat(633u);
v___x_1238_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__1));
v___x_1239_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__0));
v___x_1240_ = l_mkPanicMessageWithDecl(v___x_1239_, v___x_1238_, v___x_1237_, v___x_1236_, v___x_1235_);
return v___x_1240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg(lean_object* v_code_1241_, lean_object* v_decl_1242_, lean_object* v_k_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_){
_start:
{
lean_object* v_type_1249_; lean_object* v_value_1250_; uint8_t v___x_1251_; 
v_type_1249_ = lean_ctor_get(v_decl_1242_, 2);
v_value_1250_ = lean_ctor_get(v_decl_1242_, 3);
v___x_1251_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_type_1249_);
if (v___x_1251_ == 0)
{
if (lean_obj_tag(v_code_1241_) == 0)
{
lean_object* v_decl_1252_; lean_object* v_k_1253_; size_t v___x_1254_; size_t v___x_1255_; uint8_t v___x_1256_; 
v_decl_1252_ = lean_ctor_get(v_code_1241_, 0);
v_k_1253_ = lean_ctor_get(v_code_1241_, 1);
v___x_1254_ = lean_ptr_addr(v_k_1253_);
v___x_1255_ = lean_ptr_addr(v_k_1243_);
v___x_1256_ = lean_usize_dec_eq(v___x_1254_, v___x_1255_);
if (v___x_1256_ == 0)
{
lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1264_; 
v_isSharedCheck_1264_ = !lean_is_exclusive(v_code_1241_);
if (v_isSharedCheck_1264_ == 0)
{
lean_object* v_unused_1265_; lean_object* v_unused_1266_; 
v_unused_1265_ = lean_ctor_get(v_code_1241_, 1);
lean_dec(v_unused_1265_);
v_unused_1266_ = lean_ctor_get(v_code_1241_, 0);
lean_dec(v_unused_1266_);
v___x_1258_ = v_code_1241_;
v_isShared_1259_ = v_isSharedCheck_1264_;
goto v_resetjp_1257_;
}
else
{
lean_dec(v_code_1241_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1264_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 1, v_k_1243_);
lean_ctor_set(v___x_1258_, 0, v_decl_1242_);
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_decl_1242_);
lean_ctor_set(v_reuseFailAlloc_1263_, 1, v_k_1243_);
v___x_1261_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
return v___x_1262_;
}
}
}
else
{
size_t v___x_1267_; size_t v___x_1268_; uint8_t v___x_1269_; 
v___x_1267_ = lean_ptr_addr(v_decl_1252_);
v___x_1268_ = lean_ptr_addr(v_decl_1242_);
v___x_1269_ = lean_usize_dec_eq(v___x_1267_, v___x_1268_);
if (v___x_1269_ == 0)
{
lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1277_; 
v_isSharedCheck_1277_ = !lean_is_exclusive(v_code_1241_);
if (v_isSharedCheck_1277_ == 0)
{
lean_object* v_unused_1278_; lean_object* v_unused_1279_; 
v_unused_1278_ = lean_ctor_get(v_code_1241_, 1);
lean_dec(v_unused_1278_);
v_unused_1279_ = lean_ctor_get(v_code_1241_, 0);
lean_dec(v_unused_1279_);
v___x_1271_ = v_code_1241_;
v_isShared_1272_ = v_isSharedCheck_1277_;
goto v_resetjp_1270_;
}
else
{
lean_dec(v_code_1241_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1277_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 1, v_k_1243_);
lean_ctor_set(v___x_1271_, 0, v_decl_1242_);
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_decl_1242_);
lean_ctor_set(v_reuseFailAlloc_1276_, 1, v_k_1243_);
v___x_1274_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
lean_object* v___x_1275_; 
v___x_1275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
return v___x_1275_;
}
}
}
else
{
lean_object* v___x_1280_; 
lean_dec_ref(v_k_1243_);
lean_dec_ref(v_decl_1242_);
v___x_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1280_, 0, v_code_1241_);
return v___x_1280_;
}
}
}
else
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
lean_dec_ref(v_k_1243_);
lean_dec_ref(v_decl_1242_);
lean_dec_ref(v_code_1241_);
v___x_1281_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3);
v___x_1282_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0(v___x_1281_);
v___x_1283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1282_);
return v___x_1283_;
}
}
else
{
uint8_t v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
lean_dec_ref(v_code_1241_);
v___x_1284_ = 1;
v___x_1285_ = lean_box(0);
v___x_1286_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2);
lean_inc(v_value_1250_);
v___x_1287_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_1284_, v___x_1285_, v___x_1286_, v_value_1250_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_);
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_object* v_a_1288_; lean_object* v_fvarId_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_a_1288_);
lean_dec_ref_known(v___x_1287_, 1);
v_fvarId_1289_ = lean_ctor_get(v_a_1288_, 0);
lean_inc(v_fvarId_1289_);
v___x_1290_ = lean_alloc_ctor(14, 1, 0);
lean_ctor_set(v___x_1290_, 0, v_fvarId_1289_);
v___x_1291_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_1284_, v_decl_1242_, v___x_1290_, v_a_1245_);
if (lean_obj_tag(v___x_1291_) == 0)
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1301_; 
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1294_ = v___x_1291_;
v_isShared_1295_ = v_isSharedCheck_1301_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v___x_1291_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1301_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1299_; 
v___x_1296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1296_, 0, v_a_1292_);
lean_ctor_set(v___x_1296_, 1, v_k_1243_);
v___x_1297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1297_, 0, v_a_1288_);
lean_ctor_set(v___x_1297_, 1, v___x_1296_);
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 0, v___x_1297_);
v___x_1299_ = v___x_1294_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v___x_1297_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
else
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
lean_dec(v_a_1288_);
lean_dec_ref(v_k_1243_);
v_a_1302_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1291_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1291_);
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
lean_dec_ref(v_k_1243_);
lean_dec_ref(v_decl_1242_);
v_a_1310_ = lean_ctor_get(v___x_1287_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1287_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1287_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1287_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___boxed(lean_object* v_code_1318_, lean_object* v_decl_1319_, lean_object* v_k_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg(v_code_1318_, v_decl_1319_, v_k_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_);
lean_dec(v_a_1324_);
lean_dec_ref(v_a_1323_);
lean_dec(v_a_1322_);
lean_dec_ref(v_a_1321_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded(lean_object* v_code_1327_, lean_object* v_decl_1328_, lean_object* v_k_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_){
_start:
{
lean_object* v___x_1337_; 
v___x_1337_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg(v_code_1327_, v_decl_1328_, v_k_1329_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_);
return v___x_1337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___boxed(lean_object* v_code_1338_, lean_object* v_decl_1339_, lean_object* v_k_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded(v_code_1338_, v_decl_1339_, v_k_1340_, v_a_1341_, v_a_1342_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_);
lean_dec(v_a_1346_);
lean_dec_ref(v_a_1345_);
lean_dec(v_a_1344_);
lean_dec_ref(v_a_1343_);
lean_dec(v_a_1342_);
lean_dec_ref(v_a_1341_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castResultIfNeeded(lean_object* v_code_1349_, lean_object* v_decl_1350_, lean_object* v_expType_1351_, lean_object* v_k_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_){
_start:
{
lean_object* v_type_1360_; lean_object* v_value_1361_; uint8_t v___x_1362_; 
v_type_1360_ = lean_ctor_get(v_decl_1350_, 2);
v_value_1361_ = lean_ctor_get(v_decl_1350_, 3);
v___x_1362_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing(v_type_1360_, v_expType_1351_);
if (v___x_1362_ == 0)
{
lean_object* v_boxedTy_1363_; uint8_t v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
lean_dec_ref(v_code_1349_);
v_boxedTy_1363_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed(v_type_1360_);
v___x_1364_ = 1;
v___x_1365_ = lean_box(0);
lean_inc(v_value_1361_);
v___x_1366_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_1364_, v___x_1365_, v_boxedTy_1363_, v_value_1361_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v_fvarId_1368_; lean_object* v_type_1369_; lean_object* v___x_1370_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_a_1367_);
lean_dec_ref_known(v___x_1366_, 1);
v_fvarId_1368_ = lean_ctor_get(v_a_1367_, 0);
v_type_1369_ = lean_ctor_get(v_a_1367_, 2);
lean_inc_ref(v_type_1360_);
lean_inc_ref(v_type_1369_);
lean_inc(v_fvarId_1368_);
v___x_1370_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast(v_fvarId_1368_, v_type_1369_, v_type_1360_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v___x_1372_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_a_1371_);
lean_dec_ref_known(v___x_1370_, 1);
v___x_1372_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_1364_, v_decl_1350_, v_a_1371_, v_a_1356_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1382_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1382_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1382_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1380_; 
v___x_1377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1377_, 0, v_a_1373_);
lean_ctor_set(v___x_1377_, 1, v_k_1352_);
v___x_1378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1378_, 0, v_a_1367_);
lean_ctor_set(v___x_1378_, 1, v___x_1377_);
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
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
lean_dec(v_a_1367_);
lean_dec_ref(v_k_1352_);
v_a_1383_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1372_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1372_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
lean_dec(v_a_1367_);
lean_dec_ref(v_k_1352_);
lean_dec_ref(v_decl_1350_);
v_a_1391_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___x_1370_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1370_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_a_1391_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
else
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
lean_dec_ref(v_k_1352_);
lean_dec_ref(v_decl_1350_);
v_a_1399_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1366_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1366_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
else
{
if (lean_obj_tag(v_code_1349_) == 0)
{
lean_object* v_decl_1407_; lean_object* v_k_1408_; size_t v___x_1409_; size_t v___x_1410_; uint8_t v___x_1411_; 
v_decl_1407_ = lean_ctor_get(v_code_1349_, 0);
v_k_1408_ = lean_ctor_get(v_code_1349_, 1);
v___x_1409_ = lean_ptr_addr(v_k_1408_);
v___x_1410_ = lean_ptr_addr(v_k_1352_);
v___x_1411_ = lean_usize_dec_eq(v___x_1409_, v___x_1410_);
if (v___x_1411_ == 0)
{
lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1419_; 
v_isSharedCheck_1419_ = !lean_is_exclusive(v_code_1349_);
if (v_isSharedCheck_1419_ == 0)
{
lean_object* v_unused_1420_; lean_object* v_unused_1421_; 
v_unused_1420_ = lean_ctor_get(v_code_1349_, 1);
lean_dec(v_unused_1420_);
v_unused_1421_ = lean_ctor_get(v_code_1349_, 0);
lean_dec(v_unused_1421_);
v___x_1413_ = v_code_1349_;
v_isShared_1414_ = v_isSharedCheck_1419_;
goto v_resetjp_1412_;
}
else
{
lean_dec(v_code_1349_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1419_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1416_; 
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 1, v_k_1352_);
lean_ctor_set(v___x_1413_, 0, v_decl_1350_);
v___x_1416_ = v___x_1413_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_decl_1350_);
lean_ctor_set(v_reuseFailAlloc_1418_, 1, v_k_1352_);
v___x_1416_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1416_);
return v___x_1417_;
}
}
}
else
{
size_t v___x_1422_; size_t v___x_1423_; uint8_t v___x_1424_; 
v___x_1422_ = lean_ptr_addr(v_decl_1407_);
v___x_1423_ = lean_ptr_addr(v_decl_1350_);
v___x_1424_ = lean_usize_dec_eq(v___x_1422_, v___x_1423_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1432_; 
v_isSharedCheck_1432_ = !lean_is_exclusive(v_code_1349_);
if (v_isSharedCheck_1432_ == 0)
{
lean_object* v_unused_1433_; lean_object* v_unused_1434_; 
v_unused_1433_ = lean_ctor_get(v_code_1349_, 1);
lean_dec(v_unused_1433_);
v_unused_1434_ = lean_ctor_get(v_code_1349_, 0);
lean_dec(v_unused_1434_);
v___x_1426_ = v_code_1349_;
v_isShared_1427_ = v_isSharedCheck_1432_;
goto v_resetjp_1425_;
}
else
{
lean_dec(v_code_1349_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1432_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1429_; 
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 1, v_k_1352_);
lean_ctor_set(v___x_1426_, 0, v_decl_1350_);
v___x_1429_ = v___x_1426_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_decl_1350_);
lean_ctor_set(v_reuseFailAlloc_1431_, 1, v_k_1352_);
v___x_1429_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
lean_object* v___x_1430_; 
v___x_1430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1429_);
return v___x_1430_;
}
}
}
else
{
lean_object* v___x_1435_; 
lean_dec_ref(v_k_1352_);
lean_dec_ref(v_decl_1350_);
v___x_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1435_, 0, v_code_1349_);
return v___x_1435_;
}
}
}
else
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
lean_dec_ref(v_k_1352_);
lean_dec_ref(v_decl_1350_);
lean_dec_ref(v_code_1349_);
v___x_1436_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3);
v___x_1437_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0(v___x_1436_);
v___x_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
return v___x_1438_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castResultIfNeeded___boxed(lean_object* v_code_1439_, lean_object* v_decl_1440_, lean_object* v_expType_1441_, lean_object* v_k_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castResultIfNeeded(v_code_1439_, v_decl_1440_, v_expType_1441_, v_k_1442_, v_a_1443_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_);
lean_dec(v_a_1448_);
lean_dec_ref(v_a_1447_);
lean_dec(v_a_1446_);
lean_dec_ref(v_a_1445_);
lean_dec(v_a_1444_);
lean_dec_ref(v_a_1443_);
lean_dec_ref(v_expType_1441_);
return v_res_1450_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l_instMonadEIO___redArg();
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0(lean_object* v_msg_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v_toApplicative_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1529_; 
v___x_1464_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__0);
v___x_1465_ = l_StateRefT_x27_instMonad___redArg(v___x_1464_);
v_toApplicative_1466_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1529_ == 0)
{
lean_object* v_unused_1530_; 
v_unused_1530_ = lean_ctor_get(v___x_1465_, 1);
lean_dec(v_unused_1530_);
v___x_1468_ = v___x_1465_;
v_isShared_1469_ = v_isSharedCheck_1529_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_toApplicative_1466_);
lean_dec(v___x_1465_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1529_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v_toFunctor_1470_; lean_object* v_toSeq_1471_; lean_object* v_toSeqLeft_1472_; lean_object* v_toSeqRight_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1527_; 
v_toFunctor_1470_ = lean_ctor_get(v_toApplicative_1466_, 0);
v_toSeq_1471_ = lean_ctor_get(v_toApplicative_1466_, 2);
v_toSeqLeft_1472_ = lean_ctor_get(v_toApplicative_1466_, 3);
v_toSeqRight_1473_ = lean_ctor_get(v_toApplicative_1466_, 4);
v_isSharedCheck_1527_ = !lean_is_exclusive(v_toApplicative_1466_);
if (v_isSharedCheck_1527_ == 0)
{
lean_object* v_unused_1528_; 
v_unused_1528_ = lean_ctor_get(v_toApplicative_1466_, 1);
lean_dec(v_unused_1528_);
v___x_1475_ = v_toApplicative_1466_;
v_isShared_1476_ = v_isSharedCheck_1527_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_toSeqRight_1473_);
lean_inc(v_toSeqLeft_1472_);
lean_inc(v_toSeq_1471_);
lean_inc(v_toFunctor_1470_);
lean_dec(v_toApplicative_1466_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1527_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___f_1477_; lean_object* v___f_1478_; lean_object* v___f_1479_; lean_object* v___f_1480_; lean_object* v___x_1481_; lean_object* v___f_1482_; lean_object* v___f_1483_; lean_object* v___f_1484_; lean_object* v___x_1486_; 
v___f_1477_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__1));
v___f_1478_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1470_);
v___f_1479_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1479_, 0, v_toFunctor_1470_);
v___f_1480_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1480_, 0, v_toFunctor_1470_);
v___x_1481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1481_, 0, v___f_1479_);
lean_ctor_set(v___x_1481_, 1, v___f_1480_);
v___f_1482_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1482_, 0, v_toSeqRight_1473_);
v___f_1483_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1483_, 0, v_toSeqLeft_1472_);
v___f_1484_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1484_, 0, v_toSeq_1471_);
if (v_isShared_1476_ == 0)
{
lean_ctor_set(v___x_1475_, 4, v___f_1482_);
lean_ctor_set(v___x_1475_, 3, v___f_1483_);
lean_ctor_set(v___x_1475_, 2, v___f_1484_);
lean_ctor_set(v___x_1475_, 1, v___f_1477_);
lean_ctor_set(v___x_1475_, 0, v___x_1481_);
v___x_1486_ = v___x_1475_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v___f_1477_);
lean_ctor_set(v_reuseFailAlloc_1526_, 2, v___f_1484_);
lean_ctor_set(v_reuseFailAlloc_1526_, 3, v___f_1483_);
lean_ctor_set(v_reuseFailAlloc_1526_, 4, v___f_1482_);
v___x_1486_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
lean_object* v___x_1488_; 
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 1, v___f_1478_);
lean_ctor_set(v___x_1468_, 0, v___x_1486_);
v___x_1488_ = v___x_1468_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1486_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v___f_1478_);
v___x_1488_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
lean_object* v___x_1489_; lean_object* v_toApplicative_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1523_; 
v___x_1489_ = l_StateRefT_x27_instMonad___redArg(v___x_1488_);
v_toApplicative_1490_ = lean_ctor_get(v___x_1489_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1489_);
if (v_isSharedCheck_1523_ == 0)
{
lean_object* v_unused_1524_; 
v_unused_1524_ = lean_ctor_get(v___x_1489_, 1);
lean_dec(v_unused_1524_);
v___x_1492_ = v___x_1489_;
v_isShared_1493_ = v_isSharedCheck_1523_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_toApplicative_1490_);
lean_dec(v___x_1489_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1523_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v_toFunctor_1494_; lean_object* v_toSeq_1495_; lean_object* v_toSeqLeft_1496_; lean_object* v_toSeqRight_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1521_; 
v_toFunctor_1494_ = lean_ctor_get(v_toApplicative_1490_, 0);
v_toSeq_1495_ = lean_ctor_get(v_toApplicative_1490_, 2);
v_toSeqLeft_1496_ = lean_ctor_get(v_toApplicative_1490_, 3);
v_toSeqRight_1497_ = lean_ctor_get(v_toApplicative_1490_, 4);
v_isSharedCheck_1521_ = !lean_is_exclusive(v_toApplicative_1490_);
if (v_isSharedCheck_1521_ == 0)
{
lean_object* v_unused_1522_; 
v_unused_1522_ = lean_ctor_get(v_toApplicative_1490_, 1);
lean_dec(v_unused_1522_);
v___x_1499_ = v_toApplicative_1490_;
v_isShared_1500_ = v_isSharedCheck_1521_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_toSeqRight_1497_);
lean_inc(v_toSeqLeft_1496_);
lean_inc(v_toSeq_1495_);
lean_inc(v_toFunctor_1494_);
lean_dec(v_toApplicative_1490_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1521_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___f_1501_; lean_object* v___f_1502_; lean_object* v___f_1503_; lean_object* v___f_1504_; lean_object* v___x_1505_; lean_object* v___f_1506_; lean_object* v___f_1507_; lean_object* v___f_1508_; lean_object* v___x_1510_; 
v___f_1501_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__3));
v___f_1502_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1494_);
v___f_1503_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1503_, 0, v_toFunctor_1494_);
v___f_1504_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1504_, 0, v_toFunctor_1494_);
v___x_1505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1505_, 0, v___f_1503_);
lean_ctor_set(v___x_1505_, 1, v___f_1504_);
v___f_1506_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1506_, 0, v_toSeqRight_1497_);
v___f_1507_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1507_, 0, v_toSeqLeft_1496_);
v___f_1508_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1508_, 0, v_toSeq_1495_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 4, v___f_1506_);
lean_ctor_set(v___x_1499_, 3, v___f_1507_);
lean_ctor_set(v___x_1499_, 2, v___f_1508_);
lean_ctor_set(v___x_1499_, 1, v___f_1501_);
lean_ctor_set(v___x_1499_, 0, v___x_1505_);
v___x_1510_ = v___x_1499_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1505_);
lean_ctor_set(v_reuseFailAlloc_1520_, 1, v___f_1501_);
lean_ctor_set(v_reuseFailAlloc_1520_, 2, v___f_1508_);
lean_ctor_set(v_reuseFailAlloc_1520_, 3, v___f_1507_);
lean_ctor_set(v_reuseFailAlloc_1520_, 4, v___f_1506_);
v___x_1510_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
lean_object* v___x_1512_; 
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 1, v___f_1502_);
lean_ctor_set(v___x_1492_, 0, v___x_1510_);
v___x_1512_ = v___x_1492_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1510_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v___f_1502_);
v___x_1512_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___f_1516_; lean_object* v___x_2473__overap_1517_; lean_object* v___x_1518_; 
v___x_1513_ = l_StateRefT_x27_instMonad___redArg(v___x_1512_);
v___x_1514_ = l_Lean_instInhabitedExpr;
v___x_1515_ = l_instInhabitedOfMonad___redArg(v___x_1513_, v___x_1514_);
v___f_1516_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1516_, 0, v___x_1515_);
v___x_2473__overap_1517_ = lean_panic_fn_borrowed(v___f_1516_, v_msg_1456_);
lean_dec_ref(v___f_1516_);
lean_inc(v___y_1462_);
lean_inc_ref(v___y_1461_);
lean_inc(v___y_1460_);
lean_inc_ref(v___y_1459_);
lean_inc(v___y_1458_);
lean_inc_ref(v___y_1457_);
v___x_1518_ = lean_apply_7(v___x_2473__overap_1517_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, lean_box(0));
return v___x_1518_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___boxed(lean_object* v_msg_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0(v_msg_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
return v_res_1539_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__2(void){
_start:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1543_ = lean_box(0);
v___x_1544_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__1));
v___x_1545_ = l_Lean_Expr_const___override(v___x_1544_, v___x_1543_);
return v___x_1545_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__5(void){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1548_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__2));
v___x_1549_ = lean_unsigned_to_nat(44u);
v___x_1550_ = lean_unsigned_to_nat(316u);
v___x_1551_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__4));
v___x_1552_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__3));
v___x_1553_ = l_mkPanicMessageWithDecl(v___x_1552_, v___x_1551_, v___x_1550_, v___x_1549_, v___x_1548_);
return v___x_1553_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__8(void){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1557_ = lean_box(0);
v___x_1558_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__7));
v___x_1559_ = l_Lean_Expr_const___override(v___x_1558_, v___x_1557_);
return v___x_1559_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__11(void){
_start:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1563_ = lean_box(0);
v___x_1564_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__10));
v___x_1565_ = l_Lean_Expr_const___override(v___x_1564_, v___x_1563_);
return v___x_1565_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__12(void){
_start:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1566_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__2));
v___x_1567_ = lean_unsigned_to_nat(45u);
v___x_1568_ = lean_unsigned_to_nat(301u);
v___x_1569_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__4));
v___x_1570_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__3));
v___x_1571_ = l_mkPanicMessageWithDecl(v___x_1570_, v___x_1569_, v___x_1568_, v___x_1567_, v___x_1566_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType(lean_object* v_currentType_1572_, lean_object* v_value_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_){
_start:
{
lean_object* v___y_1585_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v___y_1588_; lean_object* v___y_1589_; lean_object* v___y_1590_; 
switch(lean_obj_tag(v_value_1573_))
{
case 0:
{
lean_object* v_value_1593_; lean_object* v___x_1595_; uint8_t v_isShared_1596_; uint8_t v_isSharedCheck_1618_; 
v_value_1593_ = lean_ctor_get(v_value_1573_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v_value_1573_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1595_ = v_value_1573_;
v_isShared_1596_ = v_isSharedCheck_1618_;
goto v_resetjp_1594_;
}
else
{
lean_inc(v_value_1593_);
lean_dec(v_value_1573_);
v___x_1595_ = lean_box(0);
v_isShared_1596_ = v_isSharedCheck_1618_;
goto v_resetjp_1594_;
}
v_resetjp_1594_:
{
switch(lean_obj_tag(v_value_1593_))
{
case 0:
{
lean_object* v_val_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1605_; 
lean_del_object(v___x_1595_);
v_val_1597_ = lean_ctor_get(v_value_1593_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v_value_1593_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1599_ = v_value_1593_;
v_isShared_1600_ = v_isSharedCheck_1605_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_val_1597_);
lean_dec(v_value_1593_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1605_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
uint8_t v___x_1601_; 
v___x_1601_ = l_Lean_Compiler_LCNF_Nat_isPossibleRef(v_val_1597_);
lean_dec(v_val_1597_);
if (v___x_1601_ == 0)
{
lean_del_object(v___x_1599_);
lean_dec_ref(v_currentType_1572_);
goto v___jp_1581_;
}
else
{
lean_object* v___x_1603_; 
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 0, v_currentType_1572_);
v___x_1603_ = v___x_1599_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_currentType_1572_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
case 1:
{
lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1613_; 
lean_del_object(v___x_1595_);
lean_dec_ref(v_currentType_1572_);
v_isSharedCheck_1613_ = !lean_is_exclusive(v_value_1593_);
if (v_isSharedCheck_1613_ == 0)
{
lean_object* v_unused_1614_; 
v_unused_1614_ = lean_ctor_get(v_value_1593_, 0);
lean_dec(v_unused_1614_);
v___x_1607_ = v_value_1593_;
v_isShared_1608_ = v_isSharedCheck_1613_;
goto v_resetjp_1606_;
}
else
{
lean_dec(v_value_1593_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1613_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1609_; lean_object* v___x_1611_; 
v___x_1609_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__8, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__8_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__8);
if (v_isShared_1608_ == 0)
{
lean_ctor_set_tag(v___x_1607_, 0);
lean_ctor_set(v___x_1607_, 0, v___x_1609_);
v___x_1611_ = v___x_1607_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v___x_1609_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
default: 
{
lean_object* v___x_1616_; 
lean_dec_ref(v_value_1593_);
if (v_isShared_1596_ == 0)
{
lean_ctor_set(v___x_1595_, 0, v_currentType_1572_);
v___x_1616_ = v___x_1595_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_currentType_1572_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
}
case 1:
{
lean_dec_ref(v_currentType_1572_);
goto v___jp_1581_;
}
case 5:
{
lean_object* v_i_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
lean_dec_ref(v_currentType_1572_);
v_i_1619_ = lean_ctor_get(v_value_1573_, 0);
lean_inc_ref(v_i_1619_);
lean_dec_ref_known(v_value_1573_, 2);
v___x_1620_ = l_Lean_Compiler_LCNF_CtorInfo_type(v_i_1619_);
lean_dec_ref(v_i_1619_);
v___x_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
return v___x_1621_;
}
case 7:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
lean_dec_ref_known(v_value_1573_, 2);
lean_dec_ref(v_currentType_1572_);
v___x_1622_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__11, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__11_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__11);
v___x_1623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1622_);
return v___x_1623_;
}
case 9:
{
lean_object* v_fn_1624_; lean_object* v___x_1625_; 
lean_dec_ref(v_currentType_1572_);
v_fn_1624_ = lean_ctor_get(v_value_1573_, 0);
lean_inc(v_fn_1624_);
lean_dec_ref_known(v_value_1573_, 2);
v___x_1625_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_1624_, v_a_1579_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1637_; 
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1637_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1637_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
if (lean_obj_tag(v_a_1626_) == 1)
{
lean_object* v_val_1630_; lean_object* v_type_1631_; lean_object* v___x_1633_; 
v_val_1630_ = lean_ctor_get(v_a_1626_, 0);
lean_inc(v_val_1630_);
lean_dec_ref_known(v_a_1626_, 1);
v_type_1631_ = lean_ctor_get(v_val_1630_, 2);
lean_inc_ref(v_type_1631_);
lean_dec(v_val_1630_);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v_type_1631_);
v___x_1633_ = v___x_1628_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_type_1631_);
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
lean_object* v___x_1635_; lean_object* v___x_1636_; 
lean_del_object(v___x_1628_);
lean_dec(v_a_1626_);
v___x_1635_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__12, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__12);
v___x_1636_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0(v___x_1635_, v_a_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_);
return v___x_1636_;
}
}
}
else
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
v_a_1638_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1640_ = v___x_1625_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1625_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
case 10:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
lean_dec_ref_known(v_value_1573_, 2);
lean_dec_ref(v_currentType_1572_);
v___x_1646_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__8, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__8_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__8);
v___x_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
return v___x_1647_;
}
case 13:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; 
lean_dec_ref_known(v_value_1573_, 2);
lean_dec_ref(v_currentType_1572_);
v___x_1648_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__5, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__5);
v___x_1649_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0(v___x_1648_, v_a_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_);
return v___x_1649_;
}
case 14:
{
lean_dec_ref_known(v_value_1573_, 1);
lean_dec_ref(v_currentType_1572_);
v___y_1585_ = v_a_1574_;
v___y_1586_ = v_a_1575_;
v___y_1587_ = v_a_1576_;
v___y_1588_ = v_a_1577_;
v___y_1589_ = v_a_1578_;
v___y_1590_ = v_a_1579_;
goto v___jp_1584_;
}
case 15:
{
lean_dec_ref_known(v_value_1573_, 1);
lean_dec_ref(v_currentType_1572_);
v___y_1585_ = v_a_1574_;
v___y_1586_ = v_a_1575_;
v___y_1587_ = v_a_1576_;
v___y_1588_ = v_a_1577_;
v___y_1589_ = v_a_1578_;
v___y_1590_ = v_a_1579_;
goto v___jp_1584_;
}
default: 
{
lean_object* v___x_1650_; 
lean_dec(v_value_1573_);
v___x_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1650_, 0, v_currentType_1572_);
return v___x_1650_;
}
}
v___jp_1581_:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__2);
v___x_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
return v___x_1583_;
}
v___jp_1584_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1591_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__5, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__5);
v___x_1592_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0(v___x_1591_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_);
return v___x_1592_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___boxed(lean_object* v_currentType_1651_, lean_object* v_value_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType(v_currentType_1651_, v_value_1652_, v_a_1653_, v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_, v_a_1658_);
lean_dec(v_a_1658_);
lean_dec_ref(v_a_1657_);
lean_dec(v_a_1656_);
lean_dec_ref(v_a_1655_);
lean_dec(v_a_1654_);
lean_dec_ref(v_a_1653_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet_spec__0(lean_object* v_msg_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v_toApplicative_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1734_; 
v___x_1669_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__0);
v___x_1670_ = l_StateRefT_x27_instMonad___redArg(v___x_1669_);
v_toApplicative_1671_ = lean_ctor_get(v___x_1670_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1734_ == 0)
{
lean_object* v_unused_1735_; 
v_unused_1735_ = lean_ctor_get(v___x_1670_, 1);
lean_dec(v_unused_1735_);
v___x_1673_ = v___x_1670_;
v_isShared_1674_ = v_isSharedCheck_1734_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_toApplicative_1671_);
lean_dec(v___x_1670_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1734_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v_toFunctor_1675_; lean_object* v_toSeq_1676_; lean_object* v_toSeqLeft_1677_; lean_object* v_toSeqRight_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1732_; 
v_toFunctor_1675_ = lean_ctor_get(v_toApplicative_1671_, 0);
v_toSeq_1676_ = lean_ctor_get(v_toApplicative_1671_, 2);
v_toSeqLeft_1677_ = lean_ctor_get(v_toApplicative_1671_, 3);
v_toSeqRight_1678_ = lean_ctor_get(v_toApplicative_1671_, 4);
v_isSharedCheck_1732_ = !lean_is_exclusive(v_toApplicative_1671_);
if (v_isSharedCheck_1732_ == 0)
{
lean_object* v_unused_1733_; 
v_unused_1733_ = lean_ctor_get(v_toApplicative_1671_, 1);
lean_dec(v_unused_1733_);
v___x_1680_ = v_toApplicative_1671_;
v_isShared_1681_ = v_isSharedCheck_1732_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_toSeqRight_1678_);
lean_inc(v_toSeqLeft_1677_);
lean_inc(v_toSeq_1676_);
lean_inc(v_toFunctor_1675_);
lean_dec(v_toApplicative_1671_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1732_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___f_1682_; lean_object* v___f_1683_; lean_object* v___f_1684_; lean_object* v___f_1685_; lean_object* v___x_1686_; lean_object* v___f_1687_; lean_object* v___f_1688_; lean_object* v___f_1689_; lean_object* v___x_1691_; 
v___f_1682_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__1));
v___f_1683_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1675_);
v___f_1684_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1684_, 0, v_toFunctor_1675_);
v___f_1685_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1685_, 0, v_toFunctor_1675_);
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___f_1684_);
lean_ctor_set(v___x_1686_, 1, v___f_1685_);
v___f_1687_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1687_, 0, v_toSeqRight_1678_);
v___f_1688_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1688_, 0, v_toSeqLeft_1677_);
v___f_1689_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1689_, 0, v_toSeq_1676_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 4, v___f_1687_);
lean_ctor_set(v___x_1680_, 3, v___f_1688_);
lean_ctor_set(v___x_1680_, 2, v___f_1689_);
lean_ctor_set(v___x_1680_, 1, v___f_1682_);
lean_ctor_set(v___x_1680_, 0, v___x_1686_);
v___x_1691_ = v___x_1680_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v___x_1686_);
lean_ctor_set(v_reuseFailAlloc_1731_, 1, v___f_1682_);
lean_ctor_set(v_reuseFailAlloc_1731_, 2, v___f_1689_);
lean_ctor_set(v_reuseFailAlloc_1731_, 3, v___f_1688_);
lean_ctor_set(v_reuseFailAlloc_1731_, 4, v___f_1687_);
v___x_1691_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
lean_object* v___x_1693_; 
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 1, v___f_1683_);
lean_ctor_set(v___x_1673_, 0, v___x_1691_);
v___x_1693_ = v___x_1673_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v___x_1691_);
lean_ctor_set(v_reuseFailAlloc_1730_, 1, v___f_1683_);
v___x_1693_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
lean_object* v___x_1694_; lean_object* v_toApplicative_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1728_; 
v___x_1694_ = l_StateRefT_x27_instMonad___redArg(v___x_1693_);
v_toApplicative_1695_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1728_ == 0)
{
lean_object* v_unused_1729_; 
v_unused_1729_ = lean_ctor_get(v___x_1694_, 1);
lean_dec(v_unused_1729_);
v___x_1697_ = v___x_1694_;
v_isShared_1698_ = v_isSharedCheck_1728_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_toApplicative_1695_);
lean_dec(v___x_1694_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1728_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v_toFunctor_1699_; lean_object* v_toSeq_1700_; lean_object* v_toSeqLeft_1701_; lean_object* v_toSeqRight_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1726_; 
v_toFunctor_1699_ = lean_ctor_get(v_toApplicative_1695_, 0);
v_toSeq_1700_ = lean_ctor_get(v_toApplicative_1695_, 2);
v_toSeqLeft_1701_ = lean_ctor_get(v_toApplicative_1695_, 3);
v_toSeqRight_1702_ = lean_ctor_get(v_toApplicative_1695_, 4);
v_isSharedCheck_1726_ = !lean_is_exclusive(v_toApplicative_1695_);
if (v_isSharedCheck_1726_ == 0)
{
lean_object* v_unused_1727_; 
v_unused_1727_ = lean_ctor_get(v_toApplicative_1695_, 1);
lean_dec(v_unused_1727_);
v___x_1704_ = v_toApplicative_1695_;
v_isShared_1705_ = v_isSharedCheck_1726_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_toSeqRight_1702_);
lean_inc(v_toSeqLeft_1701_);
lean_inc(v_toSeq_1700_);
lean_inc(v_toFunctor_1699_);
lean_dec(v_toApplicative_1695_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1726_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___f_1706_; lean_object* v___f_1707_; lean_object* v___f_1708_; lean_object* v___f_1709_; lean_object* v___x_1710_; lean_object* v___f_1711_; lean_object* v___f_1712_; lean_object* v___f_1713_; lean_object* v___x_1715_; 
v___f_1706_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__3));
v___f_1707_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1699_);
v___f_1708_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1708_, 0, v_toFunctor_1699_);
v___f_1709_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1709_, 0, v_toFunctor_1699_);
v___x_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1710_, 0, v___f_1708_);
lean_ctor_set(v___x_1710_, 1, v___f_1709_);
v___f_1711_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1711_, 0, v_toSeqRight_1702_);
v___f_1712_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1712_, 0, v_toSeqLeft_1701_);
v___f_1713_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1713_, 0, v_toSeq_1700_);
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 4, v___f_1711_);
lean_ctor_set(v___x_1704_, 3, v___f_1712_);
lean_ctor_set(v___x_1704_, 2, v___f_1713_);
lean_ctor_set(v___x_1704_, 1, v___f_1706_);
lean_ctor_set(v___x_1704_, 0, v___x_1710_);
v___x_1715_ = v___x_1704_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v___x_1710_);
lean_ctor_set(v_reuseFailAlloc_1725_, 1, v___f_1706_);
lean_ctor_set(v_reuseFailAlloc_1725_, 2, v___f_1713_);
lean_ctor_set(v_reuseFailAlloc_1725_, 3, v___f_1712_);
lean_ctor_set(v_reuseFailAlloc_1725_, 4, v___f_1711_);
v___x_1715_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
lean_object* v___x_1717_; 
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 1, v___f_1707_);
lean_ctor_set(v___x_1697_, 0, v___x_1715_);
v___x_1717_ = v___x_1697_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v___x_1715_);
lean_ctor_set(v_reuseFailAlloc_1724_, 1, v___f_1707_);
v___x_1717_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___f_1721_; lean_object* v___x_22343__overap_1722_; lean_object* v___x_1723_; 
v___x_1718_ = l_StateRefT_x27_instMonad___redArg(v___x_1717_);
v___x_1719_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0___closed__0);
v___x_1720_ = l_instInhabitedOfMonad___redArg(v___x_1718_, v___x_1719_);
v___f_1721_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1721_, 0, v___x_1720_);
v___x_22343__overap_1722_ = lean_panic_fn_borrowed(v___f_1721_, v_msg_1661_);
lean_dec_ref(v___f_1721_);
lean_inc(v___y_1667_);
lean_inc_ref(v___y_1666_);
lean_inc(v___y_1665_);
lean_inc_ref(v___y_1664_);
lean_inc(v___y_1663_);
lean_inc_ref(v___y_1662_);
v___x_1723_ = lean_apply_7(v___x_22343__overap_1722_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, lean_box(0));
return v___x_1723_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet_spec__0___boxed(lean_object* v_msg_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet_spec__0(v_msg_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__0(lean_object* v_x_1745_){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_boxArgsIfNeeded___lam__0___closed__2);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__0___boxed(lean_object* v_x_1747_){
_start:
{
lean_object* v_res_1748_; 
v_res_1748_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__0(v_x_1747_);
lean_dec(v_x_1747_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__4(lean_object* v_params_1749_, lean_object* v_i_1750_){
_start:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v_type_1753_; 
v___x_1751_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0);
v___x_1752_ = lean_array_get_borrowed(v___x_1751_, v_params_1749_, v_i_1750_);
v_type_1753_ = lean_ctor_get(v___x_1752_, 2);
lean_inc_ref(v_type_1753_);
return v_type_1753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__4___boxed(lean_object* v_params_1754_, lean_object* v_i_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__4(v_params_1754_, v_i_1755_);
lean_dec(v_i_1755_);
lean_dec_ref(v_params_1754_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__2(lean_object* v_fvarId_1757_, lean_object* v_code_1758_, lean_object* v_fvarId_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_){
_start:
{
uint8_t v___x_1767_; 
v___x_1767_ = l_Lean_instBEqFVarId_beq(v_fvarId_1757_, v_fvarId_1759_);
if (v___x_1767_ == 0)
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
lean_dec_ref(v_code_1758_);
v___x_1768_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1768_, 0, v_fvarId_1759_);
v___x_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1768_);
return v___x_1769_;
}
else
{
lean_object* v___x_1770_; 
lean_dec(v_fvarId_1759_);
v___x_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1770_, 0, v_code_1758_);
return v___x_1770_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__2___boxed(lean_object* v_fvarId_1771_, lean_object* v_code_1772_, lean_object* v_fvarId_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__2(v_fvarId_1771_, v_code_1772_, v_fvarId_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec(v___y_1777_);
lean_dec_ref(v___y_1776_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v_fvarId_1771_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__1(lean_object* v_typeName_1782_, lean_object* v_a_1783_, lean_object* v_alts_1784_, lean_object* v_resultType_1785_, lean_object* v_discr_1786_, lean_object* v_code_1787_, lean_object* v_discr_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
lean_object* v_currDeclResultType_1796_; size_t v___x_1801_; size_t v___x_1802_; uint8_t v___x_1803_; 
v_currDeclResultType_1796_ = lean_ctor_get(v___y_1789_, 1);
v___x_1801_ = lean_ptr_addr(v_alts_1784_);
v___x_1802_ = lean_ptr_addr(v_a_1783_);
v___x_1803_ = lean_usize_dec_eq(v___x_1801_, v___x_1802_);
if (v___x_1803_ == 0)
{
lean_dec_ref(v_code_1787_);
goto v___jp_1797_;
}
else
{
size_t v___x_1804_; size_t v___x_1805_; uint8_t v___x_1806_; 
v___x_1804_ = lean_ptr_addr(v_resultType_1785_);
v___x_1805_ = lean_ptr_addr(v_currDeclResultType_1796_);
v___x_1806_ = lean_usize_dec_eq(v___x_1804_, v___x_1805_);
if (v___x_1806_ == 0)
{
lean_dec_ref(v_code_1787_);
goto v___jp_1797_;
}
else
{
uint8_t v___x_1807_; 
v___x_1807_ = l_Lean_instBEqFVarId_beq(v_discr_1786_, v_discr_1788_);
if (v___x_1807_ == 0)
{
lean_dec_ref(v_code_1787_);
goto v___jp_1797_;
}
else
{
lean_object* v___x_1808_; 
lean_dec(v_discr_1788_);
lean_dec_ref(v_a_1783_);
lean_dec(v_typeName_1782_);
v___x_1808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1808_, 0, v_code_1787_);
return v___x_1808_;
}
}
}
v___jp_1797_:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
lean_inc_ref(v_currDeclResultType_1796_);
v___x_1798_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1798_, 0, v_typeName_1782_);
lean_ctor_set(v___x_1798_, 1, v_currDeclResultType_1796_);
lean_ctor_set(v___x_1798_, 2, v_discr_1788_);
lean_ctor_set(v___x_1798_, 3, v_a_1783_);
v___x_1799_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1798_);
v___x_1800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1799_);
return v___x_1800_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__1___boxed(lean_object* v_typeName_1809_, lean_object* v_a_1810_, lean_object* v_alts_1811_, lean_object* v_resultType_1812_, lean_object* v_discr_1813_, lean_object* v_code_1814_, lean_object* v_discr_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__1(v_typeName_1809_, v_a_1810_, v_alts_1811_, v_resultType_1812_, v_discr_1813_, v_code_1814_, v_discr_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v_discr_1813_);
lean_dec_ref(v_resultType_1812_);
lean_dec_ref(v_alts_1811_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2___redArg(lean_object* v_alt_1824_, lean_object* v_f_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
lean_object* v___y_1834_; 
switch(lean_obj_tag(v_alt_1824_))
{
case 0:
{
lean_object* v_code_1853_; 
v_code_1853_ = lean_ctor_get(v_alt_1824_, 2);
lean_inc_ref(v_code_1853_);
v___y_1834_ = v_code_1853_;
goto v___jp_1833_;
}
case 1:
{
lean_object* v_code_1854_; 
v_code_1854_ = lean_ctor_get(v_alt_1824_, 1);
lean_inc_ref(v_code_1854_);
v___y_1834_ = v_code_1854_;
goto v___jp_1833_;
}
default: 
{
lean_object* v_code_1855_; 
v_code_1855_ = lean_ctor_get(v_alt_1824_, 0);
lean_inc_ref(v_code_1855_);
v___y_1834_ = v_code_1855_;
goto v___jp_1833_;
}
}
v___jp_1833_:
{
lean_object* v___x_1835_; 
lean_inc(v___y_1831_);
lean_inc_ref(v___y_1830_);
lean_inc(v___y_1829_);
lean_inc_ref(v___y_1828_);
lean_inc(v___y_1827_);
lean_inc_ref(v___y_1826_);
v___x_1835_ = lean_apply_8(v_f_1825_, v___y_1834_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, lean_box(0));
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1844_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1838_ = v___x_1835_;
v_isShared_1839_ = v_isSharedCheck_1844_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_a_1836_);
lean_dec(v___x_1835_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1844_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v___x_1840_; lean_object* v___x_1842_; 
v___x_1840_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_1824_, v_a_1836_);
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 0, v___x_1840_);
v___x_1842_ = v___x_1838_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v___x_1840_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
lean_dec_ref(v_alt_1824_);
v_a_1845_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1847_ = v___x_1835_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1835_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1845_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2___redArg___boxed(lean_object* v_alt_1856_, lean_object* v_f_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2___redArg(v_alt_1856_, v_f_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__4(lean_object* v_fvarId_1866_, lean_object* v_i_1867_, lean_object* v_offset_1868_, lean_object* v_ty_1869_, lean_object* v_a_1870_, lean_object* v_y_1871_, lean_object* v_k_1872_, lean_object* v_code_1873_, lean_object* v_y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
size_t v___x_1882_; size_t v___x_1883_; uint8_t v___x_1884_; 
v___x_1882_ = lean_ptr_addr(v_fvarId_1866_);
v___x_1883_ = lean_ptr_addr(v_fvarId_1866_);
v___x_1884_ = lean_usize_dec_eq(v___x_1882_, v___x_1883_);
if (v___x_1884_ == 0)
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
lean_dec_ref(v_code_1873_);
v___x_1885_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1885_, 0, v_fvarId_1866_);
lean_ctor_set(v___x_1885_, 1, v_i_1867_);
lean_ctor_set(v___x_1885_, 2, v_offset_1868_);
lean_ctor_set(v___x_1885_, 3, v_y_1874_);
lean_ctor_set(v___x_1885_, 4, v_ty_1869_);
lean_ctor_set(v___x_1885_, 5, v_a_1870_);
v___x_1886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1885_);
return v___x_1886_;
}
else
{
uint8_t v___x_1887_; 
v___x_1887_ = lean_nat_dec_eq(v_i_1867_, v_i_1867_);
if (v___x_1887_ == 0)
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
lean_dec_ref(v_code_1873_);
v___x_1888_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1888_, 0, v_fvarId_1866_);
lean_ctor_set(v___x_1888_, 1, v_i_1867_);
lean_ctor_set(v___x_1888_, 2, v_offset_1868_);
lean_ctor_set(v___x_1888_, 3, v_y_1874_);
lean_ctor_set(v___x_1888_, 4, v_ty_1869_);
lean_ctor_set(v___x_1888_, 5, v_a_1870_);
v___x_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1888_);
return v___x_1889_;
}
else
{
uint8_t v___x_1890_; 
v___x_1890_ = lean_nat_dec_eq(v_offset_1868_, v_offset_1868_);
if (v___x_1890_ == 0)
{
lean_object* v___x_1891_; lean_object* v___x_1892_; 
lean_dec_ref(v_code_1873_);
v___x_1891_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1891_, 0, v_fvarId_1866_);
lean_ctor_set(v___x_1891_, 1, v_i_1867_);
lean_ctor_set(v___x_1891_, 2, v_offset_1868_);
lean_ctor_set(v___x_1891_, 3, v_y_1874_);
lean_ctor_set(v___x_1891_, 4, v_ty_1869_);
lean_ctor_set(v___x_1891_, 5, v_a_1870_);
v___x_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
return v___x_1892_;
}
else
{
size_t v___x_1893_; size_t v___x_1894_; uint8_t v___x_1895_; 
v___x_1893_ = lean_ptr_addr(v_y_1871_);
v___x_1894_ = lean_ptr_addr(v_y_1874_);
v___x_1895_ = lean_usize_dec_eq(v___x_1893_, v___x_1894_);
if (v___x_1895_ == 0)
{
lean_object* v___x_1896_; lean_object* v___x_1897_; 
lean_dec_ref(v_code_1873_);
v___x_1896_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1896_, 0, v_fvarId_1866_);
lean_ctor_set(v___x_1896_, 1, v_i_1867_);
lean_ctor_set(v___x_1896_, 2, v_offset_1868_);
lean_ctor_set(v___x_1896_, 3, v_y_1874_);
lean_ctor_set(v___x_1896_, 4, v_ty_1869_);
lean_ctor_set(v___x_1896_, 5, v_a_1870_);
v___x_1897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1896_);
return v___x_1897_;
}
else
{
size_t v___x_1898_; size_t v___x_1899_; uint8_t v___x_1900_; 
v___x_1898_ = lean_ptr_addr(v_ty_1869_);
v___x_1899_ = lean_ptr_addr(v_ty_1869_);
v___x_1900_ = lean_usize_dec_eq(v___x_1898_, v___x_1899_);
if (v___x_1900_ == 0)
{
lean_object* v___x_1901_; lean_object* v___x_1902_; 
lean_dec_ref(v_code_1873_);
v___x_1901_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1901_, 0, v_fvarId_1866_);
lean_ctor_set(v___x_1901_, 1, v_i_1867_);
lean_ctor_set(v___x_1901_, 2, v_offset_1868_);
lean_ctor_set(v___x_1901_, 3, v_y_1874_);
lean_ctor_set(v___x_1901_, 4, v_ty_1869_);
lean_ctor_set(v___x_1901_, 5, v_a_1870_);
v___x_1902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1901_);
return v___x_1902_;
}
else
{
size_t v___x_1903_; size_t v___x_1904_; uint8_t v___x_1905_; 
v___x_1903_ = lean_ptr_addr(v_k_1872_);
v___x_1904_ = lean_ptr_addr(v_a_1870_);
v___x_1905_ = lean_usize_dec_eq(v___x_1903_, v___x_1904_);
if (v___x_1905_ == 0)
{
lean_object* v___x_1906_; lean_object* v___x_1907_; 
lean_dec_ref(v_code_1873_);
v___x_1906_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1906_, 0, v_fvarId_1866_);
lean_ctor_set(v___x_1906_, 1, v_i_1867_);
lean_ctor_set(v___x_1906_, 2, v_offset_1868_);
lean_ctor_set(v___x_1906_, 3, v_y_1874_);
lean_ctor_set(v___x_1906_, 4, v_ty_1869_);
lean_ctor_set(v___x_1906_, 5, v_a_1870_);
v___x_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1906_);
return v___x_1907_;
}
else
{
lean_object* v___x_1908_; 
lean_dec(v_y_1874_);
lean_dec_ref(v_a_1870_);
lean_dec_ref(v_ty_1869_);
lean_dec(v_offset_1868_);
lean_dec(v_i_1867_);
lean_dec(v_fvarId_1866_);
v___x_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1908_, 0, v_code_1873_);
return v___x_1908_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__4___boxed(lean_object* v_fvarId_1909_, lean_object* v_i_1910_, lean_object* v_offset_1911_, lean_object* v_ty_1912_, lean_object* v_a_1913_, lean_object* v_y_1914_, lean_object* v_k_1915_, lean_object* v_code_1916_, lean_object* v_y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__4(v_fvarId_1909_, v_i_1910_, v_offset_1911_, v_ty_1912_, v_a_1913_, v_y_1914_, v_k_1915_, v_code_1916_, v_y_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec_ref(v_k_1915_);
lean_dec(v_y_1914_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__3(lean_object* v_fvarId_1926_, lean_object* v_i_1927_, lean_object* v_a_1928_, lean_object* v_y_1929_, lean_object* v_k_1930_, lean_object* v_code_1931_, lean_object* v_y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_){
_start:
{
size_t v___x_1940_; size_t v___x_1941_; uint8_t v___x_1942_; 
v___x_1940_ = lean_ptr_addr(v_fvarId_1926_);
v___x_1941_ = lean_ptr_addr(v_fvarId_1926_);
v___x_1942_ = lean_usize_dec_eq(v___x_1940_, v___x_1941_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1943_; lean_object* v___x_1944_; 
lean_dec_ref(v_code_1931_);
v___x_1943_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v___x_1943_, 0, v_fvarId_1926_);
lean_ctor_set(v___x_1943_, 1, v_i_1927_);
lean_ctor_set(v___x_1943_, 2, v_y_1932_);
lean_ctor_set(v___x_1943_, 3, v_a_1928_);
v___x_1944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1943_);
return v___x_1944_;
}
else
{
uint8_t v___x_1945_; 
v___x_1945_ = lean_nat_dec_eq(v_i_1927_, v_i_1927_);
if (v___x_1945_ == 0)
{
lean_object* v___x_1946_; lean_object* v___x_1947_; 
lean_dec_ref(v_code_1931_);
v___x_1946_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v___x_1946_, 0, v_fvarId_1926_);
lean_ctor_set(v___x_1946_, 1, v_i_1927_);
lean_ctor_set(v___x_1946_, 2, v_y_1932_);
lean_ctor_set(v___x_1946_, 3, v_a_1928_);
v___x_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1946_);
return v___x_1947_;
}
else
{
size_t v___x_1948_; size_t v___x_1949_; uint8_t v___x_1950_; 
v___x_1948_ = lean_ptr_addr(v_y_1929_);
v___x_1949_ = lean_ptr_addr(v_y_1932_);
v___x_1950_ = lean_usize_dec_eq(v___x_1948_, v___x_1949_);
if (v___x_1950_ == 0)
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
lean_dec_ref(v_code_1931_);
v___x_1951_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v___x_1951_, 0, v_fvarId_1926_);
lean_ctor_set(v___x_1951_, 1, v_i_1927_);
lean_ctor_set(v___x_1951_, 2, v_y_1932_);
lean_ctor_set(v___x_1951_, 3, v_a_1928_);
v___x_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
return v___x_1952_;
}
else
{
size_t v___x_1953_; size_t v___x_1954_; uint8_t v___x_1955_; 
v___x_1953_ = lean_ptr_addr(v_k_1930_);
v___x_1954_ = lean_ptr_addr(v_a_1928_);
v___x_1955_ = lean_usize_dec_eq(v___x_1953_, v___x_1954_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
lean_dec_ref(v_code_1931_);
v___x_1956_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v___x_1956_, 0, v_fvarId_1926_);
lean_ctor_set(v___x_1956_, 1, v_i_1927_);
lean_ctor_set(v___x_1956_, 2, v_y_1932_);
lean_ctor_set(v___x_1956_, 3, v_a_1928_);
v___x_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
return v___x_1957_;
}
else
{
lean_object* v___x_1958_; 
lean_dec(v_y_1932_);
lean_dec_ref(v_a_1928_);
lean_dec(v_i_1927_);
lean_dec(v_fvarId_1926_);
v___x_1958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1958_, 0, v_code_1931_);
return v___x_1958_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__3___boxed(lean_object* v_fvarId_1959_, lean_object* v_i_1960_, lean_object* v_a_1961_, lean_object* v_y_1962_, lean_object* v_k_1963_, lean_object* v_code_1964_, lean_object* v_y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_){
_start:
{
lean_object* v_res_1973_; 
v_res_1973_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__3(v_fvarId_1959_, v_i_1960_, v_a_1961_, v_y_1962_, v_k_1963_, v_code_1964_, v_y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec_ref(v_k_1963_);
lean_dec(v_y_1962_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__0(lean_object* v_params_1974_, lean_object* v_i_1975_){
_start:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v_type_1978_; 
v___x_1976_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeeded___lam__0___closed__0);
v___x_1977_ = lean_array_get_borrowed(v___x_1976_, v_params_1974_, v_i_1975_);
v_type_1978_ = lean_ctor_get(v___x_1977_, 2);
lean_inc_ref(v_type_1978_);
return v_type_1978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__0___boxed(lean_object* v_params_1979_, lean_object* v_i_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__0(v_params_1979_, v_i_1980_);
lean_dec(v_i_1980_);
lean_dec_ref(v_params_1979_);
return v_res_1981_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__1(void){
_start:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1983_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__2));
v___x_1984_ = lean_unsigned_to_nat(44u);
v___x_1985_ = lean_unsigned_to_nat(353u);
v___x_1986_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__0));
v___x_1987_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__3));
v___x_1988_ = l_mkPanicMessageWithDecl(v___x_1987_, v___x_1986_, v___x_1985_, v___x_1984_, v___x_1983_);
return v___x_1988_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__3(void){
_start:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1990_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__2));
v___x_1991_ = lean_unsigned_to_nat(45u);
v___x_1992_ = lean_unsigned_to_nat(336u);
v___x_1993_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__0));
v___x_1994_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__3));
v___x_1995_ = l_mkPanicMessageWithDecl(v___x_1994_, v___x_1993_, v___x_1992_, v___x_1991_, v___x_1990_);
return v___x_1995_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__4(void){
_start:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1996_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__2));
v___x_1997_ = lean_unsigned_to_nat(45u);
v___x_1998_ = lean_unsigned_to_nat(341u);
v___x_1999_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__0));
v___x_2000_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__3));
v___x_2001_ = l_mkPanicMessageWithDecl(v___x_2000_, v___x_1999_, v___x_1998_, v___x_1997_, v___x_1996_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet(lean_object* v_code_2002_, lean_object* v_decl_2003_, lean_object* v_k_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_){
_start:
{
lean_object* v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2018_; lean_object* v___y_2019_; lean_object* v___y_2023_; lean_object* v___y_2024_; lean_object* v___y_2025_; lean_object* v___y_2026_; lean_object* v___y_2027_; lean_object* v___y_2028_; lean_object* v_type_2031_; lean_object* v_value_2032_; lean_object* v___f_2033_; lean_object* v___x_2034_; 
v_type_2031_ = lean_ctor_get(v_decl_2003_, 2);
v_value_2032_ = lean_ctor_get(v_decl_2003_, 3);
lean_inc_n(v_value_2032_, 2);
v___f_2033_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__2));
lean_inc_ref(v_type_2031_);
v___x_2034_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType(v_type_2031_, v_value_2032_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v_a_2035_; uint8_t v___x_2036_; lean_object* v___x_2037_; 
v_a_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc_n(v_a_2035_, 2);
lean_dec_ref_known(v___x_2034_, 1);
v___x_2036_ = 1;
v___x_2037_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_2036_, v_decl_2003_, v_a_2035_, v_value_2032_, v_a_2008_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; lean_object* v___x_2039_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
lean_inc(v_a_2038_);
lean_dec_ref_known(v___x_2037_, 1);
v___x_2039_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing(v_k_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2514_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2042_ = v___x_2039_;
v_isShared_2043_ = v_isSharedCheck_2514_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2039_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2514_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v_value_2044_; lean_object* v___y_2046_; 
v_value_2044_ = lean_ctor_get(v_a_2038_, 3);
switch(lean_obj_tag(v_value_2044_))
{
case 4:
{
lean_object* v_args_2106_; lean_object* v___x_2107_; 
lean_del_object(v___x_2042_);
lean_dec(v_a_2035_);
v_args_2106_ = lean_ctor_get(v_value_2044_, 1);
v___x_2107_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux(v_args_2106_, v___f_2033_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v_fst_2109_; lean_object* v_snd_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___x_2107_, 1);
v_fst_2109_ = lean_ctor_get(v_a_2108_, 0);
lean_inc(v_fst_2109_);
v_snd_2110_ = lean_ctor_get(v_a_2108_, 1);
lean_inc(v_snd_2110_);
lean_dec(v_a_2108_);
lean_inc_ref(v_value_2044_);
v___x_2111_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_value_2044_, v_fst_2109_);
v___x_2112_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_2036_, v_a_2038_, v___x_2111_, v_a_2008_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2114_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v___x_2114_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg(v_code_2002_, v_a_2113_, v_a_2040_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2123_; 
v_a_2115_ = lean_ctor_get(v___x_2114_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v___x_2114_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2117_ = v___x_2114_;
v_isShared_2118_ = v_isSharedCheck_2123_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v___x_2114_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2123_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2119_; lean_object* v___x_2121_; 
v___x_2119_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_snd_2110_, v_a_2115_);
lean_dec(v_snd_2110_);
if (v_isShared_2118_ == 0)
{
lean_ctor_set(v___x_2117_, 0, v___x_2119_);
v___x_2121_ = v___x_2117_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v___x_2119_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
return v___x_2121_;
}
}
}
else
{
lean_dec(v_snd_2110_);
return v___x_2114_;
}
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
lean_dec(v_snd_2110_);
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v_a_2124_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2126_ = v___x_2112_;
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2112_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2127_ == 0)
{
v___x_2129_ = v___x_2126_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2124_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec_ref(v_code_2002_);
v_a_2132_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2107_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2107_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
}
case 5:
{
lean_object* v_i_2140_; lean_object* v_args_2141_; uint8_t v___x_2194_; 
v_i_2140_ = lean_ctor_get(v_value_2044_, 0);
v_args_2141_ = lean_ctor_get(v_value_2044_, 1);
v___x_2194_ = l_Lean_Compiler_LCNF_CtorInfo_isScalar(v_i_2140_);
if (v___x_2194_ == 0)
{
lean_del_object(v___x_2042_);
lean_dec(v_a_2035_);
goto v___jp_2142_;
}
else
{
uint8_t v___x_2195_; 
v___x_2195_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_a_2035_);
if (v___x_2195_ == 0)
{
lean_del_object(v___x_2042_);
lean_dec(v_a_2035_);
goto v___jp_2142_;
}
else
{
lean_object* v_cidx_2196_; lean_object* v___x_2197_; lean_object* v___x_2199_; 
v_cidx_2196_ = lean_ctor_get(v_i_2140_, 1);
v___x_2197_ = l_Lean_Compiler_LCNF_LitValue_impureTypeScalarNumLit(v_a_2035_, v_cidx_2196_);
lean_dec(v_a_2035_);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 0, v___x_2197_);
v___x_2199_ = v___x_2042_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2197_);
v___x_2199_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
lean_object* v___x_2200_; 
v___x_2200_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_2036_, v_a_2038_, v___x_2199_, v_a_2008_);
if (lean_obj_tag(v___x_2200_) == 0)
{
if (lean_obj_tag(v_code_2002_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2240_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2203_ = v___x_2200_;
v_isShared_2204_ = v_isSharedCheck_2240_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2200_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2240_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v_decl_2205_; lean_object* v_k_2206_; size_t v___x_2207_; size_t v___x_2208_; uint8_t v___x_2209_; 
v_decl_2205_ = lean_ctor_get(v_code_2002_, 0);
v_k_2206_ = lean_ctor_get(v_code_2002_, 1);
v___x_2207_ = lean_ptr_addr(v_k_2206_);
v___x_2208_ = lean_ptr_addr(v_a_2040_);
v___x_2209_ = lean_usize_dec_eq(v___x_2207_, v___x_2208_);
if (v___x_2209_ == 0)
{
lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2219_; 
v_isSharedCheck_2219_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2219_ == 0)
{
lean_object* v_unused_2220_; lean_object* v_unused_2221_; 
v_unused_2220_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2220_);
v_unused_2221_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2221_);
v___x_2211_ = v_code_2002_;
v_isShared_2212_ = v_isSharedCheck_2219_;
goto v_resetjp_2210_;
}
else
{
lean_dec(v_code_2002_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2219_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2214_; 
if (v_isShared_2212_ == 0)
{
lean_ctor_set(v___x_2211_, 1, v_a_2040_);
lean_ctor_set(v___x_2211_, 0, v_a_2201_);
v___x_2214_ = v___x_2211_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2201_);
lean_ctor_set(v_reuseFailAlloc_2218_, 1, v_a_2040_);
v___x_2214_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
lean_object* v___x_2216_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 0, v___x_2214_);
v___x_2216_ = v___x_2203_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v___x_2214_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
else
{
size_t v___x_2222_; size_t v___x_2223_; uint8_t v___x_2224_; 
v___x_2222_ = lean_ptr_addr(v_decl_2205_);
v___x_2223_ = lean_ptr_addr(v_a_2201_);
v___x_2224_ = lean_usize_dec_eq(v___x_2222_, v___x_2223_);
if (v___x_2224_ == 0)
{
lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2234_; 
v_isSharedCheck_2234_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2234_ == 0)
{
lean_object* v_unused_2235_; lean_object* v_unused_2236_; 
v_unused_2235_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2235_);
v_unused_2236_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2236_);
v___x_2226_ = v_code_2002_;
v_isShared_2227_ = v_isSharedCheck_2234_;
goto v_resetjp_2225_;
}
else
{
lean_dec(v_code_2002_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2234_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
lean_ctor_set(v___x_2226_, 1, v_a_2040_);
lean_ctor_set(v___x_2226_, 0, v_a_2201_);
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2201_);
lean_ctor_set(v_reuseFailAlloc_2233_, 1, v_a_2040_);
v___x_2229_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
lean_object* v___x_2231_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 0, v___x_2229_);
v___x_2231_ = v___x_2203_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v___x_2229_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
else
{
lean_object* v___x_2238_; 
lean_dec(v_a_2201_);
lean_dec(v_a_2040_);
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 0, v_code_2002_);
v___x_2238_ = v___x_2203_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v_code_2002_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
}
}
}
else
{
lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2249_; 
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v_isSharedCheck_2249_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2249_ == 0)
{
lean_object* v_unused_2250_; 
v_unused_2250_ = lean_ctor_get(v___x_2200_, 0);
lean_dec(v_unused_2250_);
v___x_2242_ = v___x_2200_;
v_isShared_2243_ = v_isSharedCheck_2249_;
goto v_resetjp_2241_;
}
else
{
lean_dec(v___x_2200_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2249_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2247_; 
v___x_2244_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3);
v___x_2245_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0(v___x_2244_);
if (v_isShared_2243_ == 0)
{
lean_ctor_set(v___x_2242_, 0, v___x_2245_);
v___x_2247_ = v___x_2242_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v___x_2245_);
v___x_2247_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
return v___x_2247_;
}
}
}
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2258_; 
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v_a_2251_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2253_ = v___x_2200_;
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___x_2200_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2256_; 
if (v_isShared_2254_ == 0)
{
v___x_2256_ = v___x_2253_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2251_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
}
}
}
v___jp_2142_:
{
lean_object* v___x_2143_; 
v___x_2143_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux(v_args_2141_, v___f_2033_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
if (lean_obj_tag(v___x_2143_) == 0)
{
lean_object* v_a_2144_; lean_object* v_fst_2145_; lean_object* v_snd_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v_a_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc(v_a_2144_);
lean_dec_ref_known(v___x_2143_, 1);
v_fst_2145_ = lean_ctor_get(v_a_2144_, 0);
lean_inc(v_fst_2145_);
v_snd_2146_ = lean_ctor_get(v_a_2144_, 1);
lean_inc(v_snd_2146_);
lean_dec(v_a_2144_);
lean_inc_ref(v_value_2044_);
v___x_2147_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_value_2044_, v_fst_2145_);
v___x_2148_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_2036_, v_a_2038_, v___x_2147_, v_a_2008_);
if (lean_obj_tag(v___x_2148_) == 0)
{
if (lean_obj_tag(v_code_2002_) == 0)
{
lean_object* v_a_2149_; lean_object* v_decl_2150_; lean_object* v_k_2151_; size_t v___x_2152_; size_t v___x_2153_; uint8_t v___x_2154_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2148_, 1);
v_decl_2150_ = lean_ctor_get(v_code_2002_, 0);
v_k_2151_ = lean_ctor_get(v_code_2002_, 1);
v___x_2152_ = lean_ptr_addr(v_k_2151_);
v___x_2153_ = lean_ptr_addr(v_a_2040_);
v___x_2154_ = lean_usize_dec_eq(v___x_2152_, v___x_2153_);
if (v___x_2154_ == 0)
{
lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
v_isSharedCheck_2161_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2161_ == 0)
{
lean_object* v_unused_2162_; lean_object* v_unused_2163_; 
v_unused_2162_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2162_);
v_unused_2163_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2163_);
v___x_2156_ = v_code_2002_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_dec(v_code_2002_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 1, v_a_2040_);
lean_ctor_set(v___x_2156_, 0, v_a_2149_);
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2149_);
lean_ctor_set(v_reuseFailAlloc_2160_, 1, v_a_2040_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
v___y_2018_ = v_snd_2146_;
v___y_2019_ = v___x_2159_;
goto v___jp_2017_;
}
}
}
else
{
size_t v___x_2164_; size_t v___x_2165_; uint8_t v___x_2166_; 
v___x_2164_ = lean_ptr_addr(v_decl_2150_);
v___x_2165_ = lean_ptr_addr(v_a_2149_);
v___x_2166_ = lean_usize_dec_eq(v___x_2164_, v___x_2165_);
if (v___x_2166_ == 0)
{
lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2173_; 
v_isSharedCheck_2173_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2173_ == 0)
{
lean_object* v_unused_2174_; lean_object* v_unused_2175_; 
v_unused_2174_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2174_);
v_unused_2175_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2175_);
v___x_2168_ = v_code_2002_;
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
else
{
lean_dec(v_code_2002_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2171_; 
if (v_isShared_2169_ == 0)
{
lean_ctor_set(v___x_2168_, 1, v_a_2040_);
lean_ctor_set(v___x_2168_, 0, v_a_2149_);
v___x_2171_ = v___x_2168_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v_a_2149_);
lean_ctor_set(v_reuseFailAlloc_2172_, 1, v_a_2040_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
v___y_2018_ = v_snd_2146_;
v___y_2019_ = v___x_2171_;
goto v___jp_2017_;
}
}
}
else
{
lean_dec(v_a_2149_);
lean_dec(v_a_2040_);
v___y_2018_ = v_snd_2146_;
v___y_2019_ = v_code_2002_;
goto v___jp_2017_;
}
}
}
else
{
lean_object* v___x_2176_; lean_object* v___x_2177_; 
lean_dec_ref_known(v___x_2148_, 1);
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v___x_2176_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3);
v___x_2177_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0(v___x_2176_);
v___y_2018_ = v_snd_2146_;
v___y_2019_ = v___x_2177_;
goto v___jp_2017_;
}
}
else
{
lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2185_; 
lean_dec(v_snd_2146_);
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v_a_2178_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2185_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2180_ = v___x_2148_;
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_dec(v___x_2148_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2183_; 
if (v_isShared_2181_ == 0)
{
v___x_2183_ = v___x_2180_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_a_2178_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
else
{
lean_object* v_a_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2193_; 
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec_ref(v_code_2002_);
v_a_2186_ = lean_ctor_get(v___x_2143_, 0);
v_isSharedCheck_2193_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2193_ == 0)
{
v___x_2188_ = v___x_2143_;
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_a_2186_);
lean_dec(v___x_2143_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2191_; 
if (v_isShared_2189_ == 0)
{
v___x_2191_ = v___x_2188_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_a_2186_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
}
}
case 6:
{
lean_inc_ref(v_value_2044_);
lean_del_object(v___x_2042_);
v___y_2046_ = v_a_2008_;
goto v___jp_2045_;
}
case 7:
{
lean_inc_ref(v_value_2044_);
lean_del_object(v___x_2042_);
v___y_2046_ = v_a_2008_;
goto v___jp_2045_;
}
case 9:
{
lean_object* v_fn_2260_; lean_object* v_args_2261_; lean_object* v___x_2262_; 
lean_del_object(v___x_2042_);
lean_dec(v_a_2035_);
v_fn_2260_ = lean_ctor_get(v_value_2044_, 0);
v_args_2261_ = lean_ctor_get(v_value_2044_, 1);
lean_inc(v_fn_2260_);
v___x_2262_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_2260_, v_a_2010_);
if (lean_obj_tag(v___x_2262_) == 0)
{
lean_object* v_a_2263_; 
v_a_2263_ = lean_ctor_get(v___x_2262_, 0);
lean_inc(v_a_2263_);
lean_dec_ref_known(v___x_2262_, 1);
if (lean_obj_tag(v_a_2263_) == 1)
{
lean_object* v_val_2264_; lean_object* v_type_2265_; lean_object* v_params_2266_; lean_object* v___f_2267_; lean_object* v___x_2268_; 
v_val_2264_ = lean_ctor_get(v_a_2263_, 0);
lean_inc(v_val_2264_);
lean_dec_ref_known(v_a_2263_, 1);
v_type_2265_ = lean_ctor_get(v_val_2264_, 2);
lean_inc_ref(v_type_2265_);
v_params_2266_ = lean_ctor_get(v_val_2264_, 3);
lean_inc_ref(v_params_2266_);
lean_dec(v_val_2264_);
v___f_2267_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___lam__4___boxed), 2, 1);
lean_closure_set(v___f_2267_, 0, v_params_2266_);
v___x_2268_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux(v_args_2261_, v___f_2267_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v_a_2269_; lean_object* v_fst_2270_; lean_object* v_snd_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v_a_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_a_2269_);
lean_dec_ref_known(v___x_2268_, 1);
v_fst_2270_ = lean_ctor_get(v_a_2269_, 0);
lean_inc(v_fst_2270_);
v_snd_2271_ = lean_ctor_get(v_a_2269_, 1);
lean_inc(v_snd_2271_);
lean_dec(v_a_2269_);
lean_inc_ref(v_value_2044_);
v___x_2272_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_value_2044_, v_fst_2270_);
v___x_2273_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_2036_, v_a_2038_, v___x_2272_, v_a_2008_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; lean_object* v___x_2275_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_a_2274_);
lean_dec_ref_known(v___x_2273_, 1);
v___x_2275_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castResultIfNeeded(v_code_2002_, v_a_2274_, v_type_2265_, v_a_2040_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
lean_dec_ref(v_type_2265_);
if (lean_obj_tag(v___x_2275_) == 0)
{
lean_object* v_a_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2284_; 
v_a_2276_ = lean_ctor_get(v___x_2275_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2275_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2278_ = v___x_2275_;
v_isShared_2279_ = v_isSharedCheck_2284_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_a_2276_);
lean_dec(v___x_2275_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2284_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2280_; lean_object* v___x_2282_; 
v___x_2280_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_snd_2271_, v_a_2276_);
lean_dec(v_snd_2271_);
if (v_isShared_2279_ == 0)
{
lean_ctor_set(v___x_2278_, 0, v___x_2280_);
v___x_2282_ = v___x_2278_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v___x_2280_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
else
{
lean_dec(v_snd_2271_);
return v___x_2275_;
}
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
lean_dec(v_snd_2271_);
lean_dec_ref(v_type_2265_);
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v_a_2285_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2273_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2273_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2290_; 
if (v_isShared_2288_ == 0)
{
v___x_2290_ = v___x_2287_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2285_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
lean_dec_ref(v_type_2265_);
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec_ref(v_code_2002_);
v_a_2293_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2268_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2268_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
}
else
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
lean_dec(v_a_2263_);
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec_ref(v_code_2002_);
v___x_2301_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__3);
v___x_2302_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet_spec__0(v___x_2301_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
return v___x_2302_;
}
}
else
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec_ref(v_code_2002_);
v_a_2303_ = lean_ctor_get(v___x_2262_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2262_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2305_ = v___x_2262_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___x_2262_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2303_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
case 10:
{
lean_object* v_fn_2311_; lean_object* v_args_2312_; lean_object* v___x_2313_; 
lean_del_object(v___x_2042_);
lean_dec(v_a_2035_);
v_fn_2311_ = lean_ctor_get(v_value_2044_, 0);
v_args_2312_ = lean_ctor_get(v_value_2044_, 1);
lean_inc(v_fn_2311_);
v___x_2313_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_2311_, v_a_2010_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v_a_2314_; 
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_a_2314_);
lean_dec_ref_known(v___x_2313_, 1);
if (lean_obj_tag(v_a_2314_) == 1)
{
lean_object* v_val_2315_; lean_object* v___x_2316_; 
v_val_2315_ = lean_ctor_get(v_a_2314_, 0);
lean_inc(v_val_2315_);
lean_dec_ref_known(v_a_2314_, 1);
v___x_2316_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_requiresBoxedVersion___redArg(v_val_2315_, v_a_2010_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v_a_2317_; lean_object* v___y_2319_; uint8_t v___x_2371_; 
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
lean_inc(v_a_2317_);
lean_dec_ref_known(v___x_2316_, 1);
v___x_2371_ = lean_unbox(v_a_2317_);
lean_dec(v_a_2317_);
if (v___x_2371_ == 0)
{
lean_inc(v_fn_2311_);
v___y_2319_ = v_fn_2311_;
goto v___jp_2318_;
}
else
{
lean_object* v___x_2372_; 
lean_inc(v_fn_2311_);
v___x_2372_ = l_Lean_Compiler_LCNF_mkBoxedName(v_fn_2311_);
v___y_2319_ = v___x_2372_;
goto v___jp_2318_;
}
v___jp_2318_:
{
lean_object* v___x_2320_; 
v___x_2320_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux(v_args_2312_, v___f_2033_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
if (lean_obj_tag(v___x_2320_) == 0)
{
lean_object* v_a_2321_; lean_object* v_fst_2322_; lean_object* v_snd_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; 
v_a_2321_ = lean_ctor_get(v___x_2320_, 0);
lean_inc(v_a_2321_);
lean_dec_ref_known(v___x_2320_, 1);
v_fst_2322_ = lean_ctor_get(v_a_2321_, 0);
lean_inc(v_fst_2322_);
v_snd_2323_ = lean_ctor_get(v_a_2321_, 1);
lean_inc(v_snd_2323_);
lean_dec(v_a_2321_);
lean_inc_ref(v_value_2044_);
v___x_2324_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updatePapImp___redArg(v_value_2044_, v___y_2319_, v_fst_2322_);
v___x_2325_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_2036_, v_a_2038_, v___x_2324_, v_a_2008_);
if (lean_obj_tag(v___x_2325_) == 0)
{
if (lean_obj_tag(v_code_2002_) == 0)
{
lean_object* v_a_2326_; lean_object* v_decl_2327_; lean_object* v_k_2328_; size_t v___x_2329_; size_t v___x_2330_; uint8_t v___x_2331_; 
v_a_2326_ = lean_ctor_get(v___x_2325_, 0);
lean_inc(v_a_2326_);
lean_dec_ref_known(v___x_2325_, 1);
v_decl_2327_ = lean_ctor_get(v_code_2002_, 0);
v_k_2328_ = lean_ctor_get(v_code_2002_, 1);
v___x_2329_ = lean_ptr_addr(v_k_2328_);
v___x_2330_ = lean_ptr_addr(v_a_2040_);
v___x_2331_ = lean_usize_dec_eq(v___x_2329_, v___x_2330_);
if (v___x_2331_ == 0)
{
lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2338_; 
v_isSharedCheck_2338_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2338_ == 0)
{
lean_object* v_unused_2339_; lean_object* v_unused_2340_; 
v_unused_2339_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2339_);
v_unused_2340_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2340_);
v___x_2333_ = v_code_2002_;
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
else
{
lean_dec(v_code_2002_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2336_; 
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 1, v_a_2040_);
lean_ctor_set(v___x_2333_, 0, v_a_2326_);
v___x_2336_ = v___x_2333_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_a_2326_);
lean_ctor_set(v_reuseFailAlloc_2337_, 1, v_a_2040_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
v___y_2013_ = v_snd_2323_;
v___y_2014_ = v___x_2336_;
goto v___jp_2012_;
}
}
}
else
{
size_t v___x_2341_; size_t v___x_2342_; uint8_t v___x_2343_; 
v___x_2341_ = lean_ptr_addr(v_decl_2327_);
v___x_2342_ = lean_ptr_addr(v_a_2326_);
v___x_2343_ = lean_usize_dec_eq(v___x_2341_, v___x_2342_);
if (v___x_2343_ == 0)
{
lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2350_; 
v_isSharedCheck_2350_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2350_ == 0)
{
lean_object* v_unused_2351_; lean_object* v_unused_2352_; 
v_unused_2351_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2351_);
v_unused_2352_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2352_);
v___x_2345_ = v_code_2002_;
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
else
{
lean_dec(v_code_2002_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 1, v_a_2040_);
lean_ctor_set(v___x_2345_, 0, v_a_2326_);
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2326_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v_a_2040_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
v___y_2013_ = v_snd_2323_;
v___y_2014_ = v___x_2348_;
goto v___jp_2012_;
}
}
}
else
{
lean_dec(v_a_2326_);
lean_dec(v_a_2040_);
v___y_2013_ = v_snd_2323_;
v___y_2014_ = v_code_2002_;
goto v___jp_2012_;
}
}
}
else
{
lean_object* v___x_2353_; lean_object* v___x_2354_; 
lean_dec_ref_known(v___x_2325_, 1);
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v___x_2353_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3);
v___x_2354_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0(v___x_2353_);
v___y_2013_ = v_snd_2323_;
v___y_2014_ = v___x_2354_;
goto v___jp_2012_;
}
}
else
{
lean_object* v_a_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2362_; 
lean_dec(v_snd_2323_);
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v_a_2355_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2357_ = v___x_2325_;
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_a_2355_);
lean_dec(v___x_2325_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2360_; 
if (v_isShared_2358_ == 0)
{
v___x_2360_ = v___x_2357_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_a_2355_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
}
}
}
}
else
{
lean_object* v_a_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2370_; 
lean_dec(v___y_2319_);
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec_ref(v_code_2002_);
v_a_2363_ = lean_ctor_get(v___x_2320_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v___x_2320_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2365_ = v___x_2320_;
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_a_2363_);
lean_dec(v___x_2320_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2368_; 
if (v_isShared_2366_ == 0)
{
v___x_2368_ = v___x_2365_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_a_2363_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
}
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2380_; 
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec_ref(v_code_2002_);
v_a_2373_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2375_ = v___x_2316_;
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2316_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2378_; 
if (v_isShared_2376_ == 0)
{
v___x_2378_ = v___x_2375_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_a_2373_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
}
else
{
lean_object* v___x_2381_; lean_object* v___x_2382_; 
lean_dec(v_a_2314_);
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec_ref(v_code_2002_);
v___x_2381_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__4, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__4);
v___x_2382_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet_spec__0(v___x_2381_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
return v___x_2382_;
}
}
else
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec_ref(v_code_2002_);
v_a_2383_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v___x_2313_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2313_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2383_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
}
case 11:
{
lean_inc_ref(v_value_2044_);
lean_del_object(v___x_2042_);
v___y_2046_ = v_a_2008_;
goto v___jp_2045_;
}
case 12:
{
lean_object* v_args_2391_; lean_object* v___x_2392_; 
lean_del_object(v___x_2042_);
lean_dec(v_a_2035_);
v_args_2391_ = lean_ctor_get(v_value_2044_, 2);
v___x_2392_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux(v_args_2391_, v___f_2033_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
if (lean_obj_tag(v___x_2392_) == 0)
{
lean_object* v_a_2393_; lean_object* v_fst_2394_; lean_object* v_snd_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_a_2393_ = lean_ctor_get(v___x_2392_, 0);
lean_inc(v_a_2393_);
lean_dec_ref_known(v___x_2392_, 1);
v_fst_2394_ = lean_ctor_get(v_a_2393_, 0);
lean_inc(v_fst_2394_);
v_snd_2395_ = lean_ctor_get(v_a_2393_, 1);
lean_inc(v_snd_2395_);
lean_dec(v_a_2393_);
lean_inc_ref(v_value_2044_);
v___x_2396_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_value_2044_, v_fst_2394_);
v___x_2397_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_2036_, v_a_2038_, v___x_2396_, v_a_2008_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2436_; 
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2400_ = v___x_2397_;
v_isShared_2401_ = v_isSharedCheck_2436_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_2397_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2436_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___y_2403_; 
if (lean_obj_tag(v_code_2002_) == 0)
{
lean_object* v_decl_2408_; lean_object* v_k_2409_; size_t v___x_2410_; size_t v___x_2411_; uint8_t v___x_2412_; 
v_decl_2408_ = lean_ctor_get(v_code_2002_, 0);
v_k_2409_ = lean_ctor_get(v_code_2002_, 1);
v___x_2410_ = lean_ptr_addr(v_k_2409_);
v___x_2411_ = lean_ptr_addr(v_a_2040_);
v___x_2412_ = lean_usize_dec_eq(v___x_2410_, v___x_2411_);
if (v___x_2412_ == 0)
{
lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2419_; 
v_isSharedCheck_2419_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2419_ == 0)
{
lean_object* v_unused_2420_; lean_object* v_unused_2421_; 
v_unused_2420_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2420_);
v_unused_2421_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2421_);
v___x_2414_ = v_code_2002_;
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
else
{
lean_dec(v_code_2002_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2417_; 
if (v_isShared_2415_ == 0)
{
lean_ctor_set(v___x_2414_, 1, v_a_2040_);
lean_ctor_set(v___x_2414_, 0, v_a_2398_);
v___x_2417_ = v___x_2414_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_a_2398_);
lean_ctor_set(v_reuseFailAlloc_2418_, 1, v_a_2040_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
v___y_2403_ = v___x_2417_;
goto v___jp_2402_;
}
}
}
else
{
size_t v___x_2422_; size_t v___x_2423_; uint8_t v___x_2424_; 
v___x_2422_ = lean_ptr_addr(v_decl_2408_);
v___x_2423_ = lean_ptr_addr(v_a_2398_);
v___x_2424_ = lean_usize_dec_eq(v___x_2422_, v___x_2423_);
if (v___x_2424_ == 0)
{
lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2431_; 
v_isSharedCheck_2431_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2431_ == 0)
{
lean_object* v_unused_2432_; lean_object* v_unused_2433_; 
v_unused_2432_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2432_);
v_unused_2433_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2433_);
v___x_2426_ = v_code_2002_;
v_isShared_2427_ = v_isSharedCheck_2431_;
goto v_resetjp_2425_;
}
else
{
lean_dec(v_code_2002_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2431_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2429_; 
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 1, v_a_2040_);
lean_ctor_set(v___x_2426_, 0, v_a_2398_);
v___x_2429_ = v___x_2426_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v_a_2398_);
lean_ctor_set(v_reuseFailAlloc_2430_, 1, v_a_2040_);
v___x_2429_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
v___y_2403_ = v___x_2429_;
goto v___jp_2402_;
}
}
}
else
{
lean_dec(v_a_2398_);
lean_dec(v_a_2040_);
v___y_2403_ = v_code_2002_;
goto v___jp_2402_;
}
}
}
else
{
lean_object* v___x_2434_; lean_object* v___x_2435_; 
lean_dec(v_a_2398_);
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v___x_2434_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3);
v___x_2435_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0(v___x_2434_);
v___y_2403_ = v___x_2435_;
goto v___jp_2402_;
}
v___jp_2402_:
{
lean_object* v___x_2404_; lean_object* v___x_2406_; 
v___x_2404_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_snd_2395_, v___y_2403_);
lean_dec(v_snd_2395_);
if (v_isShared_2401_ == 0)
{
lean_ctor_set(v___x_2400_, 0, v___x_2404_);
v___x_2406_ = v___x_2400_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v___x_2404_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
}
else
{
lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2444_; 
lean_dec(v_snd_2395_);
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v_a_2437_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2444_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2439_ = v___x_2397_;
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v___x_2397_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2442_; 
if (v_isShared_2440_ == 0)
{
v___x_2442_ = v___x_2439_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_a_2437_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
}
else
{
lean_object* v_a_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2452_; 
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec_ref(v_code_2002_);
v_a_2445_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2452_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2452_ == 0)
{
v___x_2447_ = v___x_2392_;
v_isShared_2448_ = v_isSharedCheck_2452_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_a_2445_);
lean_dec(v___x_2392_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2452_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
lean_object* v___x_2450_; 
if (v_isShared_2448_ == 0)
{
v___x_2450_ = v___x_2447_;
goto v_reusejp_2449_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v_a_2445_);
v___x_2450_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2449_;
}
v_reusejp_2449_:
{
return v___x_2450_;
}
}
}
}
case 13:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; 
lean_del_object(v___x_2042_);
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec(v_a_2035_);
lean_dec_ref(v_code_2002_);
v___x_2453_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__1);
v___x_2454_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet_spec__0(v___x_2453_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
return v___x_2454_;
}
case 14:
{
lean_del_object(v___x_2042_);
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec(v_a_2035_);
lean_dec_ref(v_code_2002_);
v___y_2023_ = v_a_2005_;
v___y_2024_ = v_a_2006_;
v___y_2025_ = v_a_2007_;
v___y_2026_ = v_a_2008_;
v___y_2027_ = v_a_2009_;
v___y_2028_ = v_a_2010_;
goto v___jp_2022_;
}
case 15:
{
lean_del_object(v___x_2042_);
lean_dec(v_a_2040_);
lean_dec(v_a_2038_);
lean_dec(v_a_2035_);
lean_dec_ref(v_code_2002_);
v___y_2023_ = v_a_2005_;
v___y_2024_ = v_a_2006_;
v___y_2025_ = v_a_2007_;
v___y_2026_ = v_a_2008_;
v___y_2027_ = v_a_2009_;
v___y_2028_ = v_a_2010_;
goto v___jp_2022_;
}
default: 
{
lean_object* v___x_2455_; 
lean_inc(v_value_2044_);
lean_del_object(v___x_2042_);
v___x_2455_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_2036_, v_a_2038_, v_a_2035_, v_value_2044_, v_a_2008_);
if (lean_obj_tag(v___x_2455_) == 0)
{
if (lean_obj_tag(v_code_2002_) == 0)
{
lean_object* v_a_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2495_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2458_ = v___x_2455_;
v_isShared_2459_ = v_isSharedCheck_2495_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_a_2456_);
lean_dec(v___x_2455_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2495_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v_decl_2460_; lean_object* v_k_2461_; size_t v___x_2462_; size_t v___x_2463_; uint8_t v___x_2464_; 
v_decl_2460_ = lean_ctor_get(v_code_2002_, 0);
v_k_2461_ = lean_ctor_get(v_code_2002_, 1);
v___x_2462_ = lean_ptr_addr(v_k_2461_);
v___x_2463_ = lean_ptr_addr(v_a_2040_);
v___x_2464_ = lean_usize_dec_eq(v___x_2462_, v___x_2463_);
if (v___x_2464_ == 0)
{
lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2474_; 
v_isSharedCheck_2474_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2474_ == 0)
{
lean_object* v_unused_2475_; lean_object* v_unused_2476_; 
v_unused_2475_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2475_);
v_unused_2476_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2476_);
v___x_2466_ = v_code_2002_;
v_isShared_2467_ = v_isSharedCheck_2474_;
goto v_resetjp_2465_;
}
else
{
lean_dec(v_code_2002_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2474_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2469_; 
if (v_isShared_2467_ == 0)
{
lean_ctor_set(v___x_2466_, 1, v_a_2040_);
lean_ctor_set(v___x_2466_, 0, v_a_2456_);
v___x_2469_ = v___x_2466_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_a_2456_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v_a_2040_);
v___x_2469_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
lean_object* v___x_2471_; 
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v___x_2469_);
v___x_2471_ = v___x_2458_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v___x_2469_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
else
{
size_t v___x_2477_; size_t v___x_2478_; uint8_t v___x_2479_; 
v___x_2477_ = lean_ptr_addr(v_decl_2460_);
v___x_2478_ = lean_ptr_addr(v_a_2456_);
v___x_2479_ = lean_usize_dec_eq(v___x_2477_, v___x_2478_);
if (v___x_2479_ == 0)
{
lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2489_; 
v_isSharedCheck_2489_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2489_ == 0)
{
lean_object* v_unused_2490_; lean_object* v_unused_2491_; 
v_unused_2490_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2490_);
v_unused_2491_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2491_);
v___x_2481_ = v_code_2002_;
v_isShared_2482_ = v_isSharedCheck_2489_;
goto v_resetjp_2480_;
}
else
{
lean_dec(v_code_2002_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2489_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 1, v_a_2040_);
lean_ctor_set(v___x_2481_, 0, v_a_2456_);
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_a_2456_);
lean_ctor_set(v_reuseFailAlloc_2488_, 1, v_a_2040_);
v___x_2484_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
lean_object* v___x_2486_; 
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v___x_2484_);
v___x_2486_ = v___x_2458_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2484_);
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
else
{
lean_object* v___x_2493_; 
lean_dec(v_a_2456_);
lean_dec(v_a_2040_);
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v_code_2002_);
v___x_2493_ = v___x_2458_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_code_2002_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
}
}
else
{
lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2504_; 
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v_isSharedCheck_2504_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2504_ == 0)
{
lean_object* v_unused_2505_; 
v_unused_2505_ = lean_ctor_get(v___x_2455_, 0);
lean_dec(v_unused_2505_);
v___x_2497_ = v___x_2455_;
v_isShared_2498_ = v_isSharedCheck_2504_;
goto v_resetjp_2496_;
}
else
{
lean_dec(v___x_2455_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2504_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2502_; 
v___x_2499_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3);
v___x_2500_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0(v___x_2499_);
if (v_isShared_2498_ == 0)
{
lean_ctor_set(v___x_2497_, 0, v___x_2500_);
v___x_2502_ = v___x_2497_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v___x_2500_);
v___x_2502_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
return v___x_2502_;
}
}
}
}
else
{
lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2513_; 
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v_a_2506_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2508_ = v___x_2455_;
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2455_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v___x_2511_; 
if (v_isShared_2509_ == 0)
{
v___x_2511_ = v___x_2508_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_a_2506_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
}
}
}
v___jp_2045_:
{
lean_object* v___x_2047_; 
v___x_2047_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_2036_, v_a_2038_, v_a_2035_, v_value_2044_, v___y_2046_);
if (lean_obj_tag(v___x_2047_) == 0)
{
if (lean_obj_tag(v_code_2002_) == 0)
{
lean_object* v_a_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2087_; 
v_a_2048_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2050_ = v___x_2047_;
v_isShared_2051_ = v_isSharedCheck_2087_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_a_2048_);
lean_dec(v___x_2047_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2087_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v_decl_2052_; lean_object* v_k_2053_; size_t v___x_2054_; size_t v___x_2055_; uint8_t v___x_2056_; 
v_decl_2052_ = lean_ctor_get(v_code_2002_, 0);
v_k_2053_ = lean_ctor_get(v_code_2002_, 1);
v___x_2054_ = lean_ptr_addr(v_k_2053_);
v___x_2055_ = lean_ptr_addr(v_a_2040_);
v___x_2056_ = lean_usize_dec_eq(v___x_2054_, v___x_2055_);
if (v___x_2056_ == 0)
{
lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2066_; 
v_isSharedCheck_2066_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2066_ == 0)
{
lean_object* v_unused_2067_; lean_object* v_unused_2068_; 
v_unused_2067_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2067_);
v_unused_2068_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2068_);
v___x_2058_ = v_code_2002_;
v_isShared_2059_ = v_isSharedCheck_2066_;
goto v_resetjp_2057_;
}
else
{
lean_dec(v_code_2002_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2066_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 1, v_a_2040_);
lean_ctor_set(v___x_2058_, 0, v_a_2048_);
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v_a_2048_);
lean_ctor_set(v_reuseFailAlloc_2065_, 1, v_a_2040_);
v___x_2061_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
lean_object* v___x_2063_; 
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2061_);
v___x_2063_ = v___x_2050_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v___x_2061_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
else
{
size_t v___x_2069_; size_t v___x_2070_; uint8_t v___x_2071_; 
v___x_2069_ = lean_ptr_addr(v_decl_2052_);
v___x_2070_ = lean_ptr_addr(v_a_2048_);
v___x_2071_ = lean_usize_dec_eq(v___x_2069_, v___x_2070_);
if (v___x_2071_ == 0)
{
lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2081_; 
v_isSharedCheck_2081_ = !lean_is_exclusive(v_code_2002_);
if (v_isSharedCheck_2081_ == 0)
{
lean_object* v_unused_2082_; lean_object* v_unused_2083_; 
v_unused_2082_ = lean_ctor_get(v_code_2002_, 1);
lean_dec(v_unused_2082_);
v_unused_2083_ = lean_ctor_get(v_code_2002_, 0);
lean_dec(v_unused_2083_);
v___x_2073_ = v_code_2002_;
v_isShared_2074_ = v_isSharedCheck_2081_;
goto v_resetjp_2072_;
}
else
{
lean_dec(v_code_2002_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2081_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2076_; 
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 1, v_a_2040_);
lean_ctor_set(v___x_2073_, 0, v_a_2048_);
v___x_2076_ = v___x_2073_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_a_2048_);
lean_ctor_set(v_reuseFailAlloc_2080_, 1, v_a_2040_);
v___x_2076_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
lean_object* v___x_2078_; 
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2076_);
v___x_2078_ = v___x_2050_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___x_2076_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
else
{
lean_object* v___x_2085_; 
lean_dec(v_a_2048_);
lean_dec(v_a_2040_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v_code_2002_);
v___x_2085_ = v___x_2050_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_code_2002_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
else
{
lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2096_; 
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2096_ == 0)
{
lean_object* v_unused_2097_; 
v_unused_2097_ = lean_ctor_get(v___x_2047_, 0);
lean_dec(v_unused_2097_);
v___x_2089_ = v___x_2047_;
v_isShared_2090_ = v_isSharedCheck_2096_;
goto v_resetjp_2088_;
}
else
{
lean_dec(v___x_2047_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2096_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2094_; 
v___x_2091_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__3);
v___x_2092_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded_spec__0(v___x_2091_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 0, v___x_2092_);
v___x_2094_ = v___x_2089_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2092_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
else
{
lean_object* v_a_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2105_; 
lean_dec(v_a_2040_);
lean_dec_ref(v_code_2002_);
v_a_2098_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2100_ = v___x_2047_;
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_a_2098_);
lean_dec(v___x_2047_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2103_; 
if (v_isShared_2101_ == 0)
{
v___x_2103_ = v___x_2100_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_a_2098_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
return v___x_2103_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2038_);
lean_dec(v_a_2035_);
lean_dec_ref(v_code_2002_);
return v___x_2039_;
}
}
else
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2522_; 
lean_dec(v_a_2035_);
lean_dec_ref(v_k_2004_);
lean_dec_ref(v_code_2002_);
v_a_2515_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2517_ = v___x_2037_;
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2037_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2515_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
lean_dec(v_value_2032_);
lean_dec_ref(v_k_2004_);
lean_dec_ref(v_decl_2003_);
lean_dec_ref(v_code_2002_);
v_a_2523_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2034_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2034_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
v___jp_2012_:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2015_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v___y_2013_, v___y_2014_);
lean_dec_ref(v___y_2013_);
v___x_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2015_);
return v___x_2016_;
}
v___jp_2017_:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2020_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v___y_2018_, v___y_2019_);
lean_dec_ref(v___y_2018_);
v___x_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2020_);
return v___x_2021_;
}
v___jp_2022_:
{
lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2029_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___closed__1);
v___x_2030_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet_spec__0(v___x_2029_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_);
return v___x_2030_;
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__1(void){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2532_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__2));
v___x_2533_ = lean_unsigned_to_nat(44u);
v___x_2534_ = lean_unsigned_to_nat(284u);
v___x_2535_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__0));
v___x_2536_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__3));
v___x_2537_ = l_mkPanicMessageWithDecl(v___x_2536_, v___x_2535_, v___x_2534_, v___x_2533_, v___x_2532_);
return v___x_2537_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__2(void){
_start:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2538_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_unboxResultIfNeeded___redArg___closed__2));
v___x_2539_ = lean_unsigned_to_nat(59u);
v___x_2540_ = lean_unsigned_to_nat(287u);
v___x_2541_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__0));
v___x_2542_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__3));
v___x_2543_ = l_mkPanicMessageWithDecl(v___x_2542_, v___x_2541_, v___x_2540_, v___x_2539_, v___x_2538_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing(lean_object* v_code_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_){
_start:
{
switch(lean_obj_tag(v_code_2544_))
{
case 0:
{
lean_object* v_decl_2552_; lean_object* v_k_2553_; lean_object* v___x_2554_; 
v_decl_2552_ = lean_ctor_get(v_code_2544_, 0);
lean_inc_ref(v_decl_2552_);
v_k_2553_ = lean_ctor_get(v_code_2544_, 1);
lean_inc_ref(v_k_2553_);
v___x_2554_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet(v_code_2544_, v_decl_2552_, v_k_2553_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
return v___x_2554_;
}
case 2:
{
lean_object* v_decl_2555_; lean_object* v_k_2556_; lean_object* v_params_2557_; lean_object* v_value_2558_; uint8_t v___x_2559_; lean_object* v___x_2560_; 
v_decl_2555_ = lean_ctor_get(v_code_2544_, 0);
v_k_2556_ = lean_ctor_get(v_code_2544_, 1);
v_params_2557_ = lean_ctor_get(v_decl_2555_, 2);
v_value_2558_ = lean_ctor_get(v_decl_2555_, 4);
v___x_2559_ = 1;
lean_inc_ref(v_value_2558_);
v___x_2560_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing(v_value_2558_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_a_2561_; lean_object* v_currDeclResultType_2562_; lean_object* v___x_2563_; 
v_a_2561_ = lean_ctor_get(v___x_2560_, 0);
lean_inc(v_a_2561_);
lean_dec_ref_known(v___x_2560_, 1);
v_currDeclResultType_2562_ = lean_ctor_get(v_a_2545_, 1);
lean_inc_ref(v_params_2557_);
lean_inc_ref(v_currDeclResultType_2562_);
lean_inc_ref(v_decl_2555_);
v___x_2563_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_2559_, v_decl_2555_, v_currDeclResultType_2562_, v_params_2557_, v_a_2561_, v_a_2548_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v___x_2565_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v___x_2563_, 1);
lean_inc_ref(v_k_2556_);
v___x_2565_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing(v_k_2556_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2603_; 
v_a_2566_ = lean_ctor_get(v___x_2565_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2568_ = v___x_2565_;
v_isShared_2569_ = v_isSharedCheck_2603_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___x_2565_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2603_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
size_t v___x_2570_; size_t v___x_2571_; uint8_t v___x_2572_; 
v___x_2570_ = lean_ptr_addr(v_k_2556_);
v___x_2571_ = lean_ptr_addr(v_a_2566_);
v___x_2572_ = lean_usize_dec_eq(v___x_2570_, v___x_2571_);
if (v___x_2572_ == 0)
{
lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2582_; 
v_isSharedCheck_2582_ = !lean_is_exclusive(v_code_2544_);
if (v_isSharedCheck_2582_ == 0)
{
lean_object* v_unused_2583_; lean_object* v_unused_2584_; 
v_unused_2583_ = lean_ctor_get(v_code_2544_, 1);
lean_dec(v_unused_2583_);
v_unused_2584_ = lean_ctor_get(v_code_2544_, 0);
lean_dec(v_unused_2584_);
v___x_2574_ = v_code_2544_;
v_isShared_2575_ = v_isSharedCheck_2582_;
goto v_resetjp_2573_;
}
else
{
lean_dec(v_code_2544_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2582_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
lean_ctor_set(v___x_2574_, 1, v_a_2566_);
lean_ctor_set(v___x_2574_, 0, v_a_2564_);
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2564_);
lean_ctor_set(v_reuseFailAlloc_2581_, 1, v_a_2566_);
v___x_2577_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
lean_object* v___x_2579_; 
if (v_isShared_2569_ == 0)
{
lean_ctor_set(v___x_2568_, 0, v___x_2577_);
v___x_2579_ = v___x_2568_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v___x_2577_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
}
else
{
size_t v___x_2585_; size_t v___x_2586_; uint8_t v___x_2587_; 
v___x_2585_ = lean_ptr_addr(v_decl_2555_);
v___x_2586_ = lean_ptr_addr(v_a_2564_);
v___x_2587_ = lean_usize_dec_eq(v___x_2585_, v___x_2586_);
if (v___x_2587_ == 0)
{
lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2597_; 
v_isSharedCheck_2597_ = !lean_is_exclusive(v_code_2544_);
if (v_isSharedCheck_2597_ == 0)
{
lean_object* v_unused_2598_; lean_object* v_unused_2599_; 
v_unused_2598_ = lean_ctor_get(v_code_2544_, 1);
lean_dec(v_unused_2598_);
v_unused_2599_ = lean_ctor_get(v_code_2544_, 0);
lean_dec(v_unused_2599_);
v___x_2589_ = v_code_2544_;
v_isShared_2590_ = v_isSharedCheck_2597_;
goto v_resetjp_2588_;
}
else
{
lean_dec(v_code_2544_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2597_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2592_; 
if (v_isShared_2590_ == 0)
{
lean_ctor_set(v___x_2589_, 1, v_a_2566_);
lean_ctor_set(v___x_2589_, 0, v_a_2564_);
v___x_2592_ = v___x_2589_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_a_2564_);
lean_ctor_set(v_reuseFailAlloc_2596_, 1, v_a_2566_);
v___x_2592_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
lean_object* v___x_2594_; 
if (v_isShared_2569_ == 0)
{
lean_ctor_set(v___x_2568_, 0, v___x_2592_);
v___x_2594_ = v___x_2568_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v___x_2592_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
return v___x_2594_;
}
}
}
}
else
{
lean_object* v___x_2601_; 
lean_dec(v_a_2566_);
lean_dec(v_a_2564_);
if (v_isShared_2569_ == 0)
{
lean_ctor_set(v___x_2568_, 0, v_code_2544_);
v___x_2601_ = v___x_2568_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v_code_2544_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
return v___x_2601_;
}
}
}
}
}
else
{
lean_dec(v_a_2564_);
lean_dec_ref_known(v_code_2544_, 2);
return v___x_2565_;
}
}
else
{
lean_object* v_a_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2611_; 
lean_dec_ref_known(v_code_2544_, 2);
v_a_2604_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2606_ = v___x_2563_;
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_a_2604_);
lean_dec(v___x_2563_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2609_; 
if (v_isShared_2607_ == 0)
{
v___x_2609_ = v___x_2606_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_a_2604_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_2544_, 2);
return v___x_2560_;
}
}
case 3:
{
lean_object* v_fvarId_2612_; lean_object* v_args_2613_; uint8_t v___x_2614_; lean_object* v___x_2615_; 
v_fvarId_2612_ = lean_ctor_get(v_code_2544_, 0);
v_args_2613_ = lean_ctor_get(v_code_2544_, 1);
v___x_2614_ = 1;
v___x_2615_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_2614_, v_fvarId_2612_, v_a_2548_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
lean_dec_ref_known(v___x_2615_, 1);
if (lean_obj_tag(v_a_2616_) == 1)
{
lean_object* v_val_2617_; lean_object* v_params_2618_; lean_object* v___f_2619_; lean_object* v___x_2620_; 
v_val_2617_ = lean_ctor_get(v_a_2616_, 0);
lean_inc(v_val_2617_);
lean_dec_ref_known(v_a_2616_, 1);
v_params_2618_ = lean_ctor_get(v_val_2617_, 2);
lean_inc_ref(v_params_2618_);
lean_dec(v_val_2617_);
v___f_2619_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2619_, 0, v_params_2618_);
v___x_2620_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_castArgsIfNeededAux(v_args_2613_, v___f_2619_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2655_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2655_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2655_ == 0)
{
v___x_2623_ = v___x_2620_;
v_isShared_2624_ = v_isSharedCheck_2655_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2620_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2655_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v_fst_2625_; lean_object* v_snd_2626_; lean_object* v___y_2628_; uint8_t v___x_2633_; 
v_fst_2625_ = lean_ctor_get(v_a_2621_, 0);
lean_inc(v_fst_2625_);
v_snd_2626_ = lean_ctor_get(v_a_2621_, 1);
lean_inc(v_snd_2626_);
lean_dec(v_a_2621_);
v___x_2633_ = l_Lean_instBEqFVarId_beq(v_fvarId_2612_, v_fvarId_2612_);
if (v___x_2633_ == 0)
{
lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
lean_inc(v_fvarId_2612_);
v_isSharedCheck_2640_ = !lean_is_exclusive(v_code_2544_);
if (v_isSharedCheck_2640_ == 0)
{
lean_object* v_unused_2641_; lean_object* v_unused_2642_; 
v_unused_2641_ = lean_ctor_get(v_code_2544_, 1);
lean_dec(v_unused_2641_);
v_unused_2642_ = lean_ctor_get(v_code_2544_, 0);
lean_dec(v_unused_2642_);
v___x_2635_ = v_code_2544_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_dec(v_code_2544_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 1, v_fst_2625_);
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_fvarId_2612_);
lean_ctor_set(v_reuseFailAlloc_2639_, 1, v_fst_2625_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
v___y_2628_ = v___x_2638_;
goto v___jp_2627_;
}
}
}
else
{
size_t v___x_2643_; size_t v___x_2644_; uint8_t v___x_2645_; 
v___x_2643_ = lean_ptr_addr(v_args_2613_);
v___x_2644_ = lean_ptr_addr(v_fst_2625_);
v___x_2645_ = lean_usize_dec_eq(v___x_2643_, v___x_2644_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2652_; 
lean_inc(v_fvarId_2612_);
v_isSharedCheck_2652_ = !lean_is_exclusive(v_code_2544_);
if (v_isSharedCheck_2652_ == 0)
{
lean_object* v_unused_2653_; lean_object* v_unused_2654_; 
v_unused_2653_ = lean_ctor_get(v_code_2544_, 1);
lean_dec(v_unused_2653_);
v_unused_2654_ = lean_ctor_get(v_code_2544_, 0);
lean_dec(v_unused_2654_);
v___x_2647_ = v_code_2544_;
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
else
{
lean_dec(v_code_2544_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
lean_ctor_set(v___x_2647_, 1, v_fst_2625_);
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_fvarId_2612_);
lean_ctor_set(v_reuseFailAlloc_2651_, 1, v_fst_2625_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
v___y_2628_ = v___x_2650_;
goto v___jp_2627_;
}
}
}
else
{
lean_dec(v_fst_2625_);
v___y_2628_ = v_code_2544_;
goto v___jp_2627_;
}
}
v___jp_2627_:
{
lean_object* v___x_2629_; lean_object* v___x_2631_; 
v___x_2629_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_snd_2626_, v___y_2628_);
lean_dec(v_snd_2626_);
if (v_isShared_2624_ == 0)
{
lean_ctor_set(v___x_2623_, 0, v___x_2629_);
v___x_2631_ = v___x_2623_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v___x_2629_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
}
else
{
lean_object* v_a_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2663_; 
lean_dec_ref_known(v_code_2544_, 2);
v_a_2656_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2663_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2663_ == 0)
{
v___x_2658_ = v___x_2620_;
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_a_2656_);
lean_dec(v___x_2620_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2661_; 
if (v_isShared_2659_ == 0)
{
v___x_2661_ = v___x_2658_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v_a_2656_);
v___x_2661_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
return v___x_2661_;
}
}
}
}
else
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
lean_dec(v_a_2616_);
lean_dec_ref_known(v_code_2544_, 2);
v___x_2664_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__1);
v___x_2665_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet_spec__0(v___x_2664_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
return v___x_2665_;
}
}
else
{
lean_object* v_a_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2673_; 
lean_dec_ref_known(v_code_2544_, 2);
v_a_2666_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2673_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2668_ = v___x_2615_;
v_isShared_2669_ = v_isSharedCheck_2673_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_a_2666_);
lean_dec(v___x_2615_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2673_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2671_; 
if (v_isShared_2669_ == 0)
{
v___x_2671_ = v___x_2668_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_a_2666_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
return v___x_2671_;
}
}
}
}
case 4:
{
lean_object* v_cases_2674_; lean_object* v_typeName_2675_; lean_object* v_resultType_2676_; lean_object* v_discr_2677_; lean_object* v_alts_2678_; uint8_t v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v_cases_2674_ = lean_ctor_get(v_code_2544_, 0);
v_typeName_2675_ = lean_ctor_get(v_cases_2674_, 0);
lean_inc(v_typeName_2675_);
v_resultType_2676_ = lean_ctor_get(v_cases_2674_, 1);
lean_inc_ref(v_resultType_2676_);
v_discr_2677_ = lean_ctor_get(v_cases_2674_, 2);
lean_inc(v_discr_2677_);
v_alts_2678_ = lean_ctor_get(v_cases_2674_, 3);
lean_inc_ref_n(v_alts_2678_, 2);
v___x_2679_ = 1;
v___x_2680_ = lean_unsigned_to_nat(0u);
v___x_2681_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__3(v___x_2680_, v_alts_2678_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2681_) == 0)
{
lean_object* v_a_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v_a_2682_ = lean_ctor_get(v___x_2681_, 0);
lean_inc(v_a_2682_);
lean_dec_ref_known(v___x_2681_, 1);
v___x_2683_ = lean_box(0);
lean_inc(v_typeName_2675_);
v___x_2684_ = l_Lean_mkConst(v_typeName_2675_, v___x_2683_);
lean_inc(v_discr_2677_);
v___x_2685_ = l_Lean_Compiler_LCNF_getType(v_discr_2677_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_object* v_a_2686_; uint8_t v___x_2687_; 
v_a_2686_ = lean_ctor_get(v___x_2685_, 0);
lean_inc(v_a_2686_);
lean_dec_ref_known(v___x_2685_, 1);
v___x_2687_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing(v_a_2686_, v___x_2684_);
if (v___x_2687_ == 0)
{
lean_object* v___x_2688_; 
lean_inc_ref(v___x_2684_);
lean_inc(v_discr_2677_);
v___x_2688_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast(v_discr_2677_, v_a_2686_, v___x_2684_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v_a_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v_a_2689_ = lean_ctor_get(v___x_2688_, 0);
lean_inc(v_a_2689_);
lean_dec_ref_known(v___x_2688_, 1);
v___x_2690_ = lean_box(0);
v___x_2691_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2679_, v___x_2690_, v___x_2684_, v_a_2689_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v_a_2692_; lean_object* v_fvarId_2693_; lean_object* v___x_2694_; 
v_a_2692_ = lean_ctor_get(v___x_2691_, 0);
lean_inc(v_a_2692_);
lean_dec_ref_known(v___x_2691_, 1);
v_fvarId_2693_ = lean_ctor_get(v_a_2692_, 0);
lean_inc(v_fvarId_2693_);
v___x_2694_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__1(v_typeName_2675_, v_a_2682_, v_alts_2678_, v_resultType_2676_, v_discr_2677_, v_code_2544_, v_fvarId_2693_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
lean_dec(v_discr_2677_);
lean_dec_ref(v_resultType_2676_);
lean_dec_ref(v_alts_2678_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2703_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2703_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2697_ = v___x_2694_;
v_isShared_2698_ = v_isSharedCheck_2703_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2694_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2703_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2699_; lean_object* v___x_2701_; 
v___x_2699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2699_, 0, v_a_2692_);
lean_ctor_set(v___x_2699_, 1, v_a_2695_);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 0, v___x_2699_);
v___x_2701_ = v___x_2697_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v___x_2699_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
}
else
{
lean_dec(v_a_2692_);
return v___x_2694_;
}
}
else
{
lean_object* v_a_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2711_; 
lean_dec(v_a_2682_);
lean_dec_ref(v_alts_2678_);
lean_dec(v_discr_2677_);
lean_dec_ref(v_resultType_2676_);
lean_dec(v_typeName_2675_);
lean_dec_ref_known(v_code_2544_, 1);
v_a_2704_ = lean_ctor_get(v___x_2691_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2706_ = v___x_2691_;
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
else
{
lean_inc(v_a_2704_);
lean_dec(v___x_2691_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v___x_2709_; 
if (v_isShared_2707_ == 0)
{
v___x_2709_ = v___x_2706_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_a_2704_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
}
else
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2719_; 
lean_dec_ref(v___x_2684_);
lean_dec(v_a_2682_);
lean_dec_ref(v_alts_2678_);
lean_dec(v_discr_2677_);
lean_dec_ref(v_resultType_2676_);
lean_dec(v_typeName_2675_);
lean_dec_ref_known(v_code_2544_, 1);
v_a_2712_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2714_ = v___x_2688_;
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2688_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2717_; 
if (v_isShared_2715_ == 0)
{
v___x_2717_ = v___x_2714_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_a_2712_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
else
{
lean_object* v___x_2720_; 
lean_dec(v_a_2686_);
lean_dec_ref(v___x_2684_);
lean_inc(v_discr_2677_);
v___x_2720_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__1(v_typeName_2675_, v_a_2682_, v_alts_2678_, v_resultType_2676_, v_discr_2677_, v_code_2544_, v_discr_2677_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
lean_dec(v_discr_2677_);
lean_dec_ref(v_resultType_2676_);
lean_dec_ref(v_alts_2678_);
return v___x_2720_;
}
}
else
{
lean_object* v_a_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2728_; 
lean_dec_ref(v___x_2684_);
lean_dec(v_a_2682_);
lean_dec_ref(v_alts_2678_);
lean_dec(v_discr_2677_);
lean_dec_ref(v_resultType_2676_);
lean_dec(v_typeName_2675_);
lean_dec_ref_known(v_code_2544_, 1);
v_a_2721_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2728_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2728_ == 0)
{
v___x_2723_ = v___x_2685_;
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_a_2721_);
lean_dec(v___x_2685_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2726_; 
if (v_isShared_2724_ == 0)
{
v___x_2726_ = v___x_2723_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v_a_2721_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
return v___x_2726_;
}
}
}
}
else
{
lean_object* v_a_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2736_; 
lean_dec_ref(v_alts_2678_);
lean_dec(v_discr_2677_);
lean_dec_ref(v_resultType_2676_);
lean_dec(v_typeName_2675_);
lean_dec_ref_known(v_code_2544_, 1);
v_a_2729_ = lean_ctor_get(v___x_2681_, 0);
v_isSharedCheck_2736_ = !lean_is_exclusive(v___x_2681_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2731_ = v___x_2681_;
v_isShared_2732_ = v_isSharedCheck_2736_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_a_2729_);
lean_dec(v___x_2681_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2736_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2734_; 
if (v_isShared_2732_ == 0)
{
v___x_2734_ = v___x_2731_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v_a_2729_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
return v___x_2734_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_2737_; lean_object* v_currDeclResultType_2738_; lean_object* v___x_2739_; 
v_fvarId_2737_ = lean_ctor_get(v_code_2544_, 0);
lean_inc_n(v_fvarId_2737_, 2);
v_currDeclResultType_2738_ = lean_ctor_get(v_a_2545_, 1);
v___x_2739_ = l_Lean_Compiler_LCNF_getType(v_fvarId_2737_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; uint8_t v___x_2741_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref_known(v___x_2739_, 1);
v___x_2741_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing(v_a_2740_, v_currDeclResultType_2738_);
if (v___x_2741_ == 0)
{
lean_object* v___x_2742_; 
lean_inc_ref(v_currDeclResultType_2738_);
lean_inc(v_fvarId_2737_);
v___x_2742_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast(v_fvarId_2737_, v_a_2740_, v_currDeclResultType_2738_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2742_) == 0)
{
lean_object* v_a_2743_; uint8_t v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; 
v_a_2743_ = lean_ctor_get(v___x_2742_, 0);
lean_inc(v_a_2743_);
lean_dec_ref_known(v___x_2742_, 1);
v___x_2744_ = 1;
v___x_2745_ = lean_box(0);
lean_inc_ref(v_currDeclResultType_2738_);
v___x_2746_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2744_, v___x_2745_, v_currDeclResultType_2738_, v_a_2743_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; lean_object* v_fvarId_2748_; lean_object* v___x_2749_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc(v_a_2747_);
lean_dec_ref_known(v___x_2746_, 1);
v_fvarId_2748_ = lean_ctor_get(v_a_2747_, 0);
lean_inc(v_fvarId_2748_);
v___x_2749_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__2(v_fvarId_2737_, v_code_2544_, v_fvarId_2748_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
lean_dec(v_fvarId_2737_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2758_; 
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2758_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2758_ == 0)
{
v___x_2752_ = v___x_2749_;
v_isShared_2753_ = v_isSharedCheck_2758_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___x_2749_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2758_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2754_; lean_object* v___x_2756_; 
v___x_2754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2754_, 0, v_a_2747_);
lean_ctor_set(v___x_2754_, 1, v_a_2750_);
if (v_isShared_2753_ == 0)
{
lean_ctor_set(v___x_2752_, 0, v___x_2754_);
v___x_2756_ = v___x_2752_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v___x_2754_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
return v___x_2756_;
}
}
}
else
{
lean_dec(v_a_2747_);
return v___x_2749_;
}
}
else
{
lean_object* v_a_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2766_; 
lean_dec(v_fvarId_2737_);
lean_dec_ref_known(v_code_2544_, 1);
v_a_2759_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2766_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2766_ == 0)
{
v___x_2761_ = v___x_2746_;
v_isShared_2762_ = v_isSharedCheck_2766_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_a_2759_);
lean_dec(v___x_2746_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2766_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v___x_2764_; 
if (v_isShared_2762_ == 0)
{
v___x_2764_ = v___x_2761_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v_a_2759_);
v___x_2764_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
return v___x_2764_;
}
}
}
}
else
{
lean_object* v_a_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2774_; 
lean_dec(v_fvarId_2737_);
lean_dec_ref_known(v_code_2544_, 1);
v_a_2767_ = lean_ctor_get(v___x_2742_, 0);
v_isSharedCheck_2774_ = !lean_is_exclusive(v___x_2742_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2769_ = v___x_2742_;
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_a_2767_);
lean_dec(v___x_2742_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2772_; 
if (v_isShared_2770_ == 0)
{
v___x_2772_ = v___x_2769_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v_a_2767_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
return v___x_2772_;
}
}
}
}
else
{
lean_object* v___x_2775_; 
lean_dec(v_a_2740_);
lean_inc(v_fvarId_2737_);
v___x_2775_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__2(v_fvarId_2737_, v_code_2544_, v_fvarId_2737_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
lean_dec(v_fvarId_2737_);
return v___x_2775_;
}
}
else
{
lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2783_; 
lean_dec(v_fvarId_2737_);
lean_dec_ref_known(v_code_2544_, 1);
v_a_2776_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2778_ = v___x_2739_;
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2739_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2781_; 
if (v_isShared_2779_ == 0)
{
v___x_2781_ = v___x_2778_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_a_2776_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
}
}
case 6:
{
lean_object* v_type_2784_; lean_object* v_currDeclResultType_2785_; size_t v___x_2786_; size_t v___x_2787_; uint8_t v___x_2788_; 
v_type_2784_ = lean_ctor_get(v_code_2544_, 0);
v_currDeclResultType_2785_ = lean_ctor_get(v_a_2545_, 1);
v___x_2786_ = lean_ptr_addr(v_type_2784_);
v___x_2787_ = lean_ptr_addr(v_currDeclResultType_2785_);
v___x_2788_ = lean_usize_dec_eq(v___x_2786_, v___x_2787_);
if (v___x_2788_ == 0)
{
lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2796_; 
v_isSharedCheck_2796_ = !lean_is_exclusive(v_code_2544_);
if (v_isSharedCheck_2796_ == 0)
{
lean_object* v_unused_2797_; 
v_unused_2797_ = lean_ctor_get(v_code_2544_, 0);
lean_dec(v_unused_2797_);
v___x_2790_ = v_code_2544_;
v_isShared_2791_ = v_isSharedCheck_2796_;
goto v_resetjp_2789_;
}
else
{
lean_dec(v_code_2544_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2796_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2793_; 
lean_inc_ref(v_currDeclResultType_2785_);
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 0, v_currDeclResultType_2785_);
v___x_2793_ = v___x_2790_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_currDeclResultType_2785_);
v___x_2793_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
lean_object* v___x_2794_; 
v___x_2794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2793_);
return v___x_2794_;
}
}
}
else
{
lean_object* v___x_2798_; 
v___x_2798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2798_, 0, v_code_2544_);
return v___x_2798_;
}
}
case 8:
{
lean_object* v_fvarId_2799_; lean_object* v_i_2800_; lean_object* v_y_2801_; lean_object* v_k_2802_; lean_object* v___x_2803_; 
v_fvarId_2799_ = lean_ctor_get(v_code_2544_, 0);
lean_inc(v_fvarId_2799_);
v_i_2800_ = lean_ctor_get(v_code_2544_, 1);
lean_inc(v_i_2800_);
v_y_2801_ = lean_ctor_get(v_code_2544_, 2);
lean_inc(v_y_2801_);
v_k_2802_ = lean_ctor_get(v_code_2544_, 3);
lean_inc_ref_n(v_k_2802_, 2);
v___x_2803_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing(v_k_2802_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2803_) == 0)
{
lean_object* v_a_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
v_a_2804_ = lean_ctor_get(v___x_2803_, 0);
lean_inc(v_a_2804_);
lean_dec_ref_known(v___x_2803_, 1);
v___x_2805_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__11, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__11_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_tryCorrectLetDeclType___closed__11);
lean_inc(v_y_2801_);
v___x_2806_ = l_Lean_Compiler_LCNF_getType(v_y_2801_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v_a_2807_; uint8_t v___x_2808_; 
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_a_2807_);
lean_dec_ref_known(v___x_2806_, 1);
v___x_2808_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing(v_a_2807_, v___x_2805_);
if (v___x_2808_ == 0)
{
lean_object* v___x_2809_; 
lean_inc(v_y_2801_);
v___x_2809_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast(v_y_2801_, v_a_2807_, v___x_2805_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_object* v_a_2810_; uint8_t v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v_a_2810_ = lean_ctor_get(v___x_2809_, 0);
lean_inc(v_a_2810_);
lean_dec_ref_known(v___x_2809_, 1);
v___x_2811_ = 1;
v___x_2812_ = lean_box(0);
v___x_2813_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2811_, v___x_2812_, v___x_2805_, v_a_2810_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v_a_2814_; lean_object* v_fvarId_2815_; lean_object* v___x_2816_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2813_, 1);
v_fvarId_2815_ = lean_ctor_get(v_a_2814_, 0);
lean_inc(v_fvarId_2815_);
v___x_2816_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__3(v_fvarId_2799_, v_i_2800_, v_a_2804_, v_y_2801_, v_k_2802_, v_code_2544_, v_fvarId_2815_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
lean_dec_ref(v_k_2802_);
lean_dec(v_y_2801_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2825_; 
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2819_ = v___x_2816_;
v_isShared_2820_ = v_isSharedCheck_2825_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2816_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2825_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2821_; lean_object* v___x_2823_; 
v___x_2821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2821_, 0, v_a_2814_);
lean_ctor_set(v___x_2821_, 1, v_a_2817_);
if (v_isShared_2820_ == 0)
{
lean_ctor_set(v___x_2819_, 0, v___x_2821_);
v___x_2823_ = v___x_2819_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v___x_2821_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
}
else
{
lean_dec(v_a_2814_);
return v___x_2816_;
}
}
else
{
lean_object* v_a_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2833_; 
lean_dec(v_a_2804_);
lean_dec_ref(v_k_2802_);
lean_dec(v_y_2801_);
lean_dec(v_i_2800_);
lean_dec_ref_known(v_code_2544_, 4);
lean_dec(v_fvarId_2799_);
v_a_2826_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2833_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2833_ == 0)
{
v___x_2828_ = v___x_2813_;
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_a_2826_);
lean_dec(v___x_2813_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2831_; 
if (v_isShared_2829_ == 0)
{
v___x_2831_ = v___x_2828_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_a_2826_);
v___x_2831_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
return v___x_2831_;
}
}
}
}
else
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
lean_dec(v_a_2804_);
lean_dec_ref(v_k_2802_);
lean_dec(v_y_2801_);
lean_dec(v_i_2800_);
lean_dec_ref_known(v_code_2544_, 4);
lean_dec(v_fvarId_2799_);
v_a_2834_ = lean_ctor_get(v___x_2809_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2809_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2809_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
}
else
{
lean_object* v___x_2842_; 
lean_dec(v_a_2807_);
lean_inc(v_y_2801_);
v___x_2842_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__3(v_fvarId_2799_, v_i_2800_, v_a_2804_, v_y_2801_, v_k_2802_, v_code_2544_, v_y_2801_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
lean_dec_ref(v_k_2802_);
lean_dec(v_y_2801_);
return v___x_2842_;
}
}
else
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2850_; 
lean_dec(v_a_2804_);
lean_dec_ref(v_k_2802_);
lean_dec(v_y_2801_);
lean_dec(v_i_2800_);
lean_dec_ref_known(v_code_2544_, 4);
lean_dec(v_fvarId_2799_);
v_a_2843_ = lean_ctor_get(v___x_2806_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2845_ = v___x_2806_;
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2806_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2848_; 
if (v_isShared_2846_ == 0)
{
v___x_2848_ = v___x_2845_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_a_2843_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
}
}
else
{
lean_dec_ref(v_k_2802_);
lean_dec(v_y_2801_);
lean_dec(v_i_2800_);
lean_dec(v_fvarId_2799_);
lean_dec_ref_known(v_code_2544_, 4);
return v___x_2803_;
}
}
case 9:
{
lean_object* v_fvarId_2851_; lean_object* v_i_2852_; lean_object* v_offset_2853_; lean_object* v_y_2854_; lean_object* v_ty_2855_; lean_object* v_k_2856_; lean_object* v___x_2857_; 
v_fvarId_2851_ = lean_ctor_get(v_code_2544_, 0);
lean_inc(v_fvarId_2851_);
v_i_2852_ = lean_ctor_get(v_code_2544_, 1);
lean_inc(v_i_2852_);
v_offset_2853_ = lean_ctor_get(v_code_2544_, 2);
lean_inc(v_offset_2853_);
v_y_2854_ = lean_ctor_get(v_code_2544_, 3);
lean_inc(v_y_2854_);
v_ty_2855_ = lean_ctor_get(v_code_2544_, 4);
lean_inc_ref(v_ty_2855_);
v_k_2856_ = lean_ctor_get(v_code_2544_, 5);
lean_inc_ref_n(v_k_2856_, 2);
v___x_2857_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing(v_k_2856_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2857_) == 0)
{
lean_object* v_a_2858_; lean_object* v___x_2859_; 
v_a_2858_ = lean_ctor_get(v___x_2857_, 0);
lean_inc(v_a_2858_);
lean_dec_ref_known(v___x_2857_, 1);
lean_inc(v_y_2854_);
v___x_2859_ = l_Lean_Compiler_LCNF_getType(v_y_2854_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v_a_2860_; uint8_t v___x_2861_; 
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
lean_inc(v_a_2860_);
lean_dec_ref_known(v___x_2859_, 1);
v___x_2861_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_typesEqvForBoxing(v_a_2860_, v_ty_2855_);
if (v___x_2861_ == 0)
{
lean_object* v___x_2862_; 
lean_inc_ref(v_ty_2855_);
lean_inc(v_y_2854_);
v___x_2862_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_mkCast(v_y_2854_, v_a_2860_, v_ty_2855_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2862_) == 0)
{
lean_object* v_a_2863_; uint8_t v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
v_a_2863_ = lean_ctor_get(v___x_2862_, 0);
lean_inc(v_a_2863_);
lean_dec_ref_known(v___x_2862_, 1);
v___x_2864_ = 1;
v___x_2865_ = lean_box(0);
lean_inc_ref(v_ty_2855_);
v___x_2866_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2864_, v___x_2865_, v_ty_2855_, v_a_2863_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v_a_2867_; lean_object* v_fvarId_2868_; lean_object* v___x_2869_; 
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
lean_inc(v_a_2867_);
lean_dec_ref_known(v___x_2866_, 1);
v_fvarId_2868_ = lean_ctor_get(v_a_2867_, 0);
lean_inc(v_fvarId_2868_);
v___x_2869_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__4(v_fvarId_2851_, v_i_2852_, v_offset_2853_, v_ty_2855_, v_a_2858_, v_y_2854_, v_k_2856_, v_code_2544_, v_fvarId_2868_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
lean_dec_ref(v_k_2856_);
lean_dec(v_y_2854_);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_object* v_a_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2878_; 
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2869_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2872_ = v___x_2869_;
v_isShared_2873_ = v_isSharedCheck_2878_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_a_2870_);
lean_dec(v___x_2869_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2878_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v___x_2874_; lean_object* v___x_2876_; 
v___x_2874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2874_, 0, v_a_2867_);
lean_ctor_set(v___x_2874_, 1, v_a_2870_);
if (v_isShared_2873_ == 0)
{
lean_ctor_set(v___x_2872_, 0, v___x_2874_);
v___x_2876_ = v___x_2872_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v___x_2874_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
}
else
{
lean_dec(v_a_2867_);
return v___x_2869_;
}
}
else
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
lean_dec(v_a_2858_);
lean_dec_ref(v_k_2856_);
lean_dec_ref(v_ty_2855_);
lean_dec(v_y_2854_);
lean_dec(v_offset_2853_);
lean_dec(v_i_2852_);
lean_dec_ref_known(v_code_2544_, 6);
lean_dec(v_fvarId_2851_);
v_a_2879_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2881_ = v___x_2866_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2866_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
}
}
else
{
lean_object* v_a_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2894_; 
lean_dec(v_a_2858_);
lean_dec_ref(v_k_2856_);
lean_dec_ref(v_ty_2855_);
lean_dec(v_y_2854_);
lean_dec(v_offset_2853_);
lean_dec(v_i_2852_);
lean_dec_ref_known(v_code_2544_, 6);
lean_dec(v_fvarId_2851_);
v_a_2887_ = lean_ctor_get(v___x_2862_, 0);
v_isSharedCheck_2894_ = !lean_is_exclusive(v___x_2862_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2889_ = v___x_2862_;
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_a_2887_);
lean_dec(v___x_2862_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
lean_object* v___x_2892_; 
if (v_isShared_2890_ == 0)
{
v___x_2892_ = v___x_2889_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v_a_2887_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
return v___x_2892_;
}
}
}
}
else
{
lean_object* v___x_2895_; 
lean_dec(v_a_2860_);
lean_inc(v_y_2854_);
v___x_2895_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___lam__4(v_fvarId_2851_, v_i_2852_, v_offset_2853_, v_ty_2855_, v_a_2858_, v_y_2854_, v_k_2856_, v_code_2544_, v_y_2854_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
lean_dec_ref(v_k_2856_);
lean_dec(v_y_2854_);
return v___x_2895_;
}
}
else
{
lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2903_; 
lean_dec(v_a_2858_);
lean_dec_ref(v_k_2856_);
lean_dec_ref(v_ty_2855_);
lean_dec(v_y_2854_);
lean_dec(v_offset_2853_);
lean_dec(v_i_2852_);
lean_dec_ref_known(v_code_2544_, 6);
lean_dec(v_fvarId_2851_);
v_a_2896_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2898_ = v___x_2859_;
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_dec(v___x_2859_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2901_; 
if (v_isShared_2899_ == 0)
{
v___x_2901_ = v___x_2898_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_a_2896_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
return v___x_2901_;
}
}
}
}
else
{
lean_dec_ref(v_k_2856_);
lean_dec_ref(v_ty_2855_);
lean_dec(v_y_2854_);
lean_dec(v_offset_2853_);
lean_dec(v_i_2852_);
lean_dec_ref_known(v_code_2544_, 6);
lean_dec(v_fvarId_2851_);
return v___x_2857_;
}
}
default: 
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
lean_dec_ref(v_code_2544_);
v___x_2904_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___closed__2);
v___x_2905_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet_spec__0(v___x_2904_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
return v___x_2905_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___boxed(lean_object* v_code_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_){
_start:
{
lean_object* v_res_2914_; 
v_res_2914_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing(v_code_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_);
lean_dec(v_a_2912_);
lean_dec_ref(v_a_2911_);
lean_dec(v_a_2910_);
lean_dec_ref(v_a_2909_);
lean_dec(v_a_2908_);
lean_dec_ref(v_a_2907_);
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__3(lean_object* v_i_2915_, lean_object* v_as_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_){
_start:
{
lean_object* v___x_2924_; uint8_t v___x_2925_; 
v___x_2924_ = lean_array_get_size(v_as_2916_);
v___x_2925_ = lean_nat_dec_lt(v_i_2915_, v___x_2924_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; 
lean_dec(v_i_2915_);
v___x_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2926_, 0, v_as_2916_);
return v___x_2926_;
}
else
{
lean_object* v___f_2927_; lean_object* v_a_2928_; lean_object* v___x_2929_; 
v___f_2927_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing___boxed), 8, 0);
v_a_2928_ = lean_array_fget_borrowed(v_as_2916_, v_i_2915_);
lean_inc(v_a_2928_);
v___x_2929_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2___redArg(v_a_2928_, v___f_2927_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_object* v_a_2930_; size_t v___x_2931_; size_t v___x_2932_; uint8_t v___x_2933_; 
v_a_2930_ = lean_ctor_get(v___x_2929_, 0);
lean_inc(v_a_2930_);
lean_dec_ref_known(v___x_2929_, 1);
v___x_2931_ = lean_ptr_addr(v_a_2928_);
v___x_2932_ = lean_ptr_addr(v_a_2930_);
v___x_2933_ = lean_usize_dec_eq(v___x_2931_, v___x_2932_);
if (v___x_2933_ == 0)
{
lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2934_ = lean_unsigned_to_nat(1u);
v___x_2935_ = lean_nat_add(v_i_2915_, v___x_2934_);
v___x_2936_ = lean_array_fset(v_as_2916_, v_i_2915_, v_a_2930_);
lean_dec(v_i_2915_);
v_i_2915_ = v___x_2935_;
v_as_2916_ = v___x_2936_;
goto _start;
}
else
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
lean_dec(v_a_2930_);
v___x_2938_ = lean_unsigned_to_nat(1u);
v___x_2939_ = lean_nat_add(v_i_2915_, v___x_2938_);
lean_dec(v_i_2915_);
v_i_2915_ = v___x_2939_;
goto _start;
}
}
else
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
lean_dec_ref(v_as_2916_);
lean_dec(v_i_2915_);
v_a_2941_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2929_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2929_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__3___boxed(lean_object* v_i_2949_, lean_object* v_as_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_){
_start:
{
lean_object* v_res_2958_; 
v_res_2958_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__3(v_i_2949_, v_as_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_);
lean_dec(v___y_2956_);
lean_dec_ref(v___y_2955_);
lean_dec(v___y_2954_);
lean_dec_ref(v___y_2953_);
lean_dec(v___y_2952_);
lean_dec_ref(v___y_2951_);
return v_res_2958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet___boxed(lean_object* v_code_2959_, lean_object* v_decl_2960_, lean_object* v_k_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_, lean_object* v_a_2964_, lean_object* v_a_2965_, lean_object* v_a_2966_, lean_object* v_a_2967_, lean_object* v_a_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_visitLet(v_code_2959_, v_decl_2960_, v_k_2961_, v_a_2962_, v_a_2963_, v_a_2964_, v_a_2965_, v_a_2966_, v_a_2967_);
lean_dec(v_a_2967_);
lean_dec_ref(v_a_2966_);
lean_dec(v_a_2965_);
lean_dec_ref(v_a_2964_);
lean_dec(v_a_2963_);
lean_dec_ref(v_a_2962_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2(uint8_t v_pu_2970_, lean_object* v_alt_2971_, lean_object* v_f_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_){
_start:
{
lean_object* v___x_2980_; 
v___x_2980_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2___redArg(v_alt_2971_, v_f_2972_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_);
return v___x_2980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2___boxed(lean_object* v_pu_2981_, lean_object* v_alt_2982_, lean_object* v_f_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_){
_start:
{
uint8_t v_pu_boxed_2991_; lean_object* v_res_2992_; 
v_pu_boxed_2991_ = lean_unbox(v_pu_2981_);
v_res_2992_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing_spec__2(v_pu_boxed_2991_, v_alt_2982_, v_f_2983_, v___y_2984_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec(v___y_2985_);
lean_dec_ref(v___y_2984_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run_spec__0(lean_object* v_as_2996_, size_t v_i_2997_, size_t v_stop_2998_, lean_object* v_b_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_){
_start:
{
lean_object* v_a_3006_; uint8_t v___x_3010_; 
v___x_3010_ = lean_usize_dec_eq(v_i_2997_, v_stop_2998_);
if (v___x_3010_ == 0)
{
lean_object* v___x_3011_; lean_object* v_value_3012_; 
v___x_3011_ = lean_array_uget(v_as_2996_, v_i_2997_);
v_value_3012_ = lean_ctor_get(v___x_3011_, 1);
lean_inc_ref(v_value_3012_);
if (lean_obj_tag(v_value_3012_) == 0)
{
lean_object* v_toSignature_3013_; uint8_t v_recursive_3014_; lean_object* v_inlineAttr_x3f_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3060_; 
v_toSignature_3013_ = lean_ctor_get(v___x_3011_, 0);
v_recursive_3014_ = lean_ctor_get_uint8(v___x_3011_, sizeof(void*)*3);
v_inlineAttr_x3f_3015_ = lean_ctor_get(v___x_3011_, 2);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3011_);
if (v_isSharedCheck_3060_ == 0)
{
lean_object* v_unused_3061_; 
v_unused_3061_ = lean_ctor_get(v___x_3011_, 1);
lean_dec(v_unused_3061_);
v___x_3017_ = v___x_3011_;
v_isShared_3018_ = v_isSharedCheck_3060_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_inlineAttr_x3f_3015_);
lean_inc(v_toSignature_3013_);
lean_dec(v___x_3011_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3060_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v_code_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3059_; 
v_code_3019_ = lean_ctor_get(v_value_3012_, 0);
v_isSharedCheck_3059_ = !lean_is_exclusive(v_value_3012_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_3021_ = v_value_3012_;
v_isShared_3022_ = v_isSharedCheck_3059_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_code_3019_);
lean_dec(v_value_3012_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3059_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v_name_3023_; lean_object* v_type_3024_; lean_object* v_s_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v_name_3023_ = lean_ctor_get(v_toSignature_3013_, 0);
v_type_3024_ = lean_ctor_get(v_toSignature_3013_, 2);
lean_inc_ref(v_type_3024_);
lean_inc(v_name_3023_);
v_s_3025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_3025_, 0, v_name_3023_);
lean_ctor_set(v_s_3025_, 1, v_type_3024_);
v___x_3026_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run_spec__0___closed__0));
v___x_3027_ = lean_st_mk_ref(v___x_3026_);
v___x_3028_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_Code_explicitBoxing(v_code_3019_, v_s_3025_, v___x_3027_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_);
lean_dec_ref_known(v_s_3025_, 2);
if (lean_obj_tag(v___x_3028_) == 0)
{
lean_object* v_a_3029_; lean_object* v___x_3030_; lean_object* v_auxDecls_3031_; lean_object* v___x_3032_; uint8_t v___x_3033_; lean_object* v___x_3035_; 
v_a_3029_ = lean_ctor_get(v___x_3028_, 0);
lean_inc(v_a_3029_);
lean_dec_ref_known(v___x_3028_, 1);
v___x_3030_ = lean_st_ref_get(v___x_3027_);
lean_dec(v___x_3027_);
v_auxDecls_3031_ = lean_ctor_get(v___x_3030_, 0);
lean_inc_ref(v_auxDecls_3031_);
lean_dec(v___x_3030_);
v___x_3032_ = l_Array_append___redArg(v_b_2999_, v_auxDecls_3031_);
lean_dec_ref(v_auxDecls_3031_);
v___x_3033_ = 1;
if (v_isShared_3022_ == 0)
{
lean_ctor_set(v___x_3021_, 0, v_a_3029_);
v___x_3035_ = v___x_3021_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_a_3029_);
v___x_3035_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3037_; 
if (v_isShared_3018_ == 0)
{
lean_ctor_set(v___x_3017_, 1, v___x_3035_);
v___x_3037_ = v___x_3017_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_toSignature_3013_);
lean_ctor_set(v_reuseFailAlloc_3049_, 1, v___x_3035_);
lean_ctor_set(v_reuseFailAlloc_3049_, 2, v_inlineAttr_x3f_3015_);
lean_ctor_set_uint8(v_reuseFailAlloc_3049_, sizeof(void*)*3, v_recursive_3014_);
v___x_3037_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
lean_object* v___x_3038_; 
v___x_3038_ = l_Lean_Compiler_LCNF_Decl_elimDeadVars(v___x_3033_, v___x_3037_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_);
if (lean_obj_tag(v___x_3038_) == 0)
{
lean_object* v_a_3039_; lean_object* v___x_3040_; 
v_a_3039_ = lean_ctor_get(v___x_3038_, 0);
lean_inc(v_a_3039_);
lean_dec_ref_known(v___x_3038_, 1);
v___x_3040_ = lean_array_push(v___x_3032_, v_a_3039_);
v_a_3006_ = v___x_3040_;
goto v___jp_3005_;
}
else
{
lean_object* v_a_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3048_; 
lean_dec_ref(v___x_3032_);
v_a_3041_ = lean_ctor_get(v___x_3038_, 0);
v_isSharedCheck_3048_ = !lean_is_exclusive(v___x_3038_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_3043_ = v___x_3038_;
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_a_3041_);
lean_dec(v___x_3038_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v___x_3046_; 
if (v_isShared_3044_ == 0)
{
v___x_3046_ = v___x_3043_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v_a_3041_);
v___x_3046_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
return v___x_3046_;
}
}
}
}
}
}
else
{
lean_object* v_a_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3058_; 
lean_dec(v___x_3027_);
lean_del_object(v___x_3021_);
lean_del_object(v___x_3017_);
lean_dec(v_inlineAttr_x3f_3015_);
lean_dec_ref(v_toSignature_3013_);
lean_dec_ref(v_b_2999_);
v_a_3051_ = lean_ctor_get(v___x_3028_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3028_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3053_ = v___x_3028_;
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_a_3051_);
lean_dec(v___x_3028_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3056_; 
if (v_isShared_3054_ == 0)
{
v___x_3056_ = v___x_3053_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v_a_3051_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
}
}
}
else
{
lean_object* v___x_3062_; 
lean_dec_ref_known(v_value_3012_, 1);
v___x_3062_ = lean_array_push(v_b_2999_, v___x_3011_);
v_a_3006_ = v___x_3062_;
goto v___jp_3005_;
}
}
else
{
lean_object* v___x_3063_; 
v___x_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3063_, 0, v_b_2999_);
return v___x_3063_;
}
v___jp_3005_:
{
size_t v___x_3007_; size_t v___x_3008_; 
v___x_3007_ = ((size_t)1ULL);
v___x_3008_ = lean_usize_add(v_i_2997_, v___x_3007_);
v_i_2997_ = v___x_3008_;
v_b_2999_ = v_a_3006_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run_spec__0___boxed(lean_object* v_as_3064_, lean_object* v_i_3065_, lean_object* v_stop_3066_, lean_object* v_b_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_){
_start:
{
size_t v_i_boxed_3073_; size_t v_stop_boxed_3074_; lean_object* v_res_3075_; 
v_i_boxed_3073_ = lean_unbox_usize(v_i_3065_);
lean_dec(v_i_3065_);
v_stop_boxed_3074_ = lean_unbox_usize(v_stop_3066_);
lean_dec(v_stop_3066_);
v_res_3075_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run_spec__0(v_as_3064_, v_i_boxed_3073_, v_stop_boxed_3074_, v_b_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
lean_dec(v___y_3071_);
lean_dec_ref(v___y_3070_);
lean_dec(v___y_3069_);
lean_dec_ref(v___y_3068_);
lean_dec_ref(v_as_3064_);
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run(lean_object* v_decls_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_){
_start:
{
lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; uint8_t v___x_3085_; 
v___x_3082_ = lean_unsigned_to_nat(0u);
v___x_3083_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Compiler_LCNF_addBoxedVersions_spec__0___closed__0));
v___x_3084_ = lean_array_get_size(v_decls_3076_);
v___x_3085_ = lean_nat_dec_lt(v___x_3082_, v___x_3084_);
if (v___x_3085_ == 0)
{
lean_object* v___x_3086_; 
v___x_3086_ = l_Lean_Compiler_LCNF_addBoxedVersions(v___x_3083_, v_a_3077_, v_a_3078_, v_a_3079_, v_a_3080_);
return v___x_3086_;
}
else
{
size_t v___x_3087_; size_t v___x_3088_; lean_object* v___x_3089_; 
v___x_3087_ = ((size_t)0ULL);
v___x_3088_ = lean_usize_of_nat(v___x_3084_);
v___x_3089_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run_spec__0(v_decls_3076_, v___x_3087_, v___x_3088_, v___x_3083_, v_a_3077_, v_a_3078_, v_a_3079_, v_a_3080_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v_a_3090_; lean_object* v___x_3091_; 
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
lean_inc(v_a_3090_);
lean_dec_ref_known(v___x_3089_, 1);
v___x_3091_ = l_Lean_Compiler_LCNF_addBoxedVersions(v_a_3090_, v_a_3077_, v_a_3078_, v_a_3079_, v_a_3080_);
return v___x_3091_;
}
else
{
return v___x_3089_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run___boxed(lean_object* v_decls_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_){
_start:
{
lean_object* v_res_3098_; 
v_res_3098_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_run(v_decls_3092_, v_a_3093_, v_a_3094_, v_a_3095_, v_a_3096_);
lean_dec(v_a_3096_);
lean_dec_ref(v_a_3095_);
lean_dec(v_a_3094_);
lean_dec_ref(v_a_3093_);
lean_dec_ref(v_decls_3092_);
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3180_; uint8_t v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v___x_3180_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_));
v___x_3181_ = 1;
v___x_3182_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_));
v___x_3183_ = l_Lean_registerTraceClass(v___x_3180_, v___x_3181_, v___x_3182_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2____boxed(lean_object* v_a_3184_){
_start:
{
lean_object* v_res_3185_; 
v_res_3185_ = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_();
return v_res_3185_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_ElimDead(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_AuxDeclCache(uint8_t builtin);
lean_object* runtime_initialize_Lean_Runtime(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ExplicitBoxing(uint8_t builtin) {
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
res = runtime_initialize_Lean_Compiler_LCNF_ElimDead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_AuxDeclCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ExplicitBoxing_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitBoxing_654907530____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ExplicitBoxing(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_ElimDead(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_AuxDeclCache(uint8_t builtin);
lean_object* initialize_Lean_Runtime(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ExplicitBoxing(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ElimDead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_AuxDeclCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ExplicitBoxing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ExplicitBoxing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ExplicitBoxing(builtin);
}
#ifdef __cplusplus
}
#endif
