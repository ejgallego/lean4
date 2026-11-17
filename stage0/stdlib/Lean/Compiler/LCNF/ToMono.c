// Lean compiler output
// Module: Lean.Compiler.LCNF.ToMono
// Imports: public import Lean.Compiler.ImplementedByAttr public import Lean.Compiler.LCNF.InferType public import Lean.Compiler.NoncomputableAttr public import Lean.Compiler.LCNF.MonoTypes import Init.While
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_anyExpr;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_toMonoType(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_isTypeFormerType(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedLetValue_default___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_Compiler_getImplementedBy_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkParam(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_argToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_argToMono___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_argToMono___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_argToMono___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_ctorAppToMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ctorAppToMono___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_value;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 113, 137, 82, 82, 132, 58, 248)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lcInv"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__3_value),LEAN_SCALAR_PTR_LITERAL(246, 129, 23, 78, 51, 209, 87, 155)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__8_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Compiler.LCNF.ToMono"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.LetValue.toMono"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__11_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__12_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__13;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_value)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lean.Compiler.LCNF.mkFieldParamsForComputedFields"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "expected inductive type"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Compiler.LCNF.Code.toMono"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__5;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__7_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__6_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__8_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__10_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__10_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__11_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__12_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__12_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__13 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__13_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__14_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__14_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__15_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "USize"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__16 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__16_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__16_value),LEAN_SCALAR_PTR_LITERAL(109, 217, 26, 131, 232, 198, 207, 245)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__17 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__17_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__18 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__18_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(16, 14, 5, 86, 33, 2, 113, 205)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__19 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__19_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FloatArray"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(159, 8, 149, 159, 140, 65, 145, 29)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__20 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__20_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__21 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__21_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__22 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__22_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Float32"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 232, 182, 48, 64, 193, 160, 231)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__23 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__23_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Thunk"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(85, 24, 139, 128, 157, 117, 211, 220)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__24 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__24_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Task"};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 131, 95, 48, 7, 243, 177, 18)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__25 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__25_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "assertion violation: c.alts.size == 1\n  "};
static const lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_trivialStructToMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Compiler.LCNF.trivialStructToMono"};
static const lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_trivialStructToMono___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_trivialStructToMono___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "assertion violation: ctorName == info.ctorName\n  "};
static const lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_trivialStructToMono___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__3;
static const lean_string_object l_Lean_Compiler_LCNF_trivialStructToMono___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "assertion violation: info.fieldIdx < ps.size\n  "};
static const lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_trivialStructToMono___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_impl"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__3_value),LEAN_SCALAR_PTR_LITERAL(130, 78, 106, 49, 240, 167, 66, 80)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.casesTaskToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 131, 95, 48, 7, 243, 177, 18)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 166, 147, 197, 228, 63, 159, 146)}};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.casesThunkToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(85, 24, 139, 128, 157, 117, 211, 220)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 110, 84, 99, 226, 14, 63, 127)}};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PUnit"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(23, 153, 158, 141, 176, 162, 235, 153)}};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Compiler.LCNF.casesFloat32ToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toModel"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 232, 182, 48, 64, 193, 160, 231)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(100, 9, 102, 51, 239, 149, 150, 6)}};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.casesFloatToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(34, 196, 85, 139, 247, 89, 238, 57)}};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Compiler.LCNF.casesStringToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "toByteArray"};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 189, 23, 98, 222, 233, 190, 57)}};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Compiler.LCNF.casesFloatArrayToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(159, 8, 149, 159, 140, 65, 145, 29)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(81, 91, 150, 235, 33, 239, 26, 16)}};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Compiler.LCNF.casesByteArrayToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(16, 14, 5, 86, 33, 2, 113, 205)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(106, 177, 159, 83, 171, 235, 26, 160)}};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.casesArrayToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toList"};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(236, 208, 194, 233, 254, 64, 157, 114)}};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.casesUIntToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2;
static const lean_string_object l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toBitVec"};
static const lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "natZero"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(64, 77, 91, 107, 150, 196, 51, 157)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "intZero"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(175, 223, 173, 123, 47, 34, 50, 67)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(192, 66, 133, 102, 95, 170, 134, 92)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isNeg"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(104, 77, 119, 5, 20, 206, 20, 211)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decLt"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(168, 105, 33, 134, 172, 206, 181, 195)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "negSucc"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 236, 205, 0, 179, 53, 99, 201)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natAbs"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2_value),LEAN_SCALAR_PTR_LITERAL(255, 186, 174, 182, 213, 167, 94, 168)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "abs"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4_value),LEAN_SCALAR_PTR_LITERAL(11, 180, 28, 55, 197, 20, 206, 35)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "one"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3_value),LEAN_SCALAR_PTR_LITERAL(167, 166, 239, 19, 130, 98, 40, 185)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7_value),LEAN_SCALAR_PTR_LITERAL(9, 137, 41, 185, 216, 152, 145, 196)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value),LEAN_SCALAR_PTR_LITERAL(147, 155, 141, 233, 87, 0, 52, 207)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isZero"};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(65, 194, 46, 57, 180, 54, 219, 130)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decEq"};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(13, 188, 70, 193, 211, 173, 121, 176)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Code_toMono___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_toMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_toMono___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_toMono___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toMono"};
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_toMono___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 72, 84, 185, 246, 162, 165, 228)}};
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_toMono___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_toMono = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__1_value),LEAN_SCALAR_PTR_LITERAL(209, 219, 170, 209, 222, 12, 94, 82)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ToMono"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(206, 213, 106, 42, 86, 241, 124, 56)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(247, 243, 51, 59, 0, 163, 178, 192)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(138, 36, 50, 250, 127, 60, 38, 40)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(88, 144, 253, 182, 89, 128, 119, 217)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 161, 241, 253, 80, 60, 193, 46)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(104, 59, 249, 219, 158, 31, 128, 205)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(25, 27, 53, 217, 235, 25, 86, 66)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(252, 41, 14, 40, 231, 191, 209, 206)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 25, 250, 149, 42, 149, 98, 101)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(111, 16, 206, 127, 24, 211, 135, 93)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 134, 59, 125, 71, 39, 210, 179)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1770774466) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(203, 42, 10, 85, 186, 109, 216, 155)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 197, 191, 160, 255, 168, 81, 88)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 210, 128, 230, 105, 208, 140, 127)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(141, 169, 189, 240, 156, 89, 230, 119)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_key_3_; lean_object* v_value_4_; lean_object* v_tail_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_28_; 
v_key_3_ = lean_ctor_get(v_x_2_, 0);
v_value_4_ = lean_ctor_get(v_x_2_, 1);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v_isSharedCheck_28_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_28_ == 0)
{
v___x_7_ = v_x_2_;
v_isShared_8_ = v_isSharedCheck_28_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_tail_5_);
lean_inc(v_value_4_);
lean_inc(v_key_3_);
lean_dec(v_x_2_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_28_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; uint64_t v___x_10_; uint64_t v___x_11_; uint64_t v___x_12_; uint64_t v_fold_13_; uint64_t v___x_14_; uint64_t v___x_15_; uint64_t v___x_16_; size_t v___x_17_; size_t v___x_18_; size_t v___x_19_; size_t v___x_20_; size_t v___x_21_; lean_object* v___x_22_; lean_object* v___x_24_; 
v___x_9_ = lean_array_get_size(v_x_1_);
v___x_10_ = l_Lean_instHashableFVarId_hash(v_key_3_);
v___x_11_ = 32ULL;
v___x_12_ = lean_uint64_shift_right(v___x_10_, v___x_11_);
v_fold_13_ = lean_uint64_xor(v___x_10_, v___x_12_);
v___x_14_ = 16ULL;
v___x_15_ = lean_uint64_shift_right(v_fold_13_, v___x_14_);
v___x_16_ = lean_uint64_xor(v_fold_13_, v___x_15_);
v___x_17_ = lean_uint64_to_usize(v___x_16_);
v___x_18_ = lean_usize_of_nat(v___x_9_);
v___x_19_ = ((size_t)1ULL);
v___x_20_ = lean_usize_sub(v___x_18_, v___x_19_);
v___x_21_ = lean_usize_land(v___x_17_, v___x_20_);
v___x_22_ = lean_array_uget_borrowed(v_x_1_, v___x_21_);
lean_inc(v___x_22_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 2, v___x_22_);
v___x_24_ = v___x_7_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_key_3_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_value_4_);
lean_ctor_set(v_reuseFailAlloc_27_, 2, v___x_22_);
v___x_24_ = v_reuseFailAlloc_27_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
lean_object* v___x_25_; 
v___x_25_ = lean_array_uset(v_x_1_, v___x_21_, v___x_24_);
v_x_1_ = v___x_25_;
v_x_2_ = v_tail_5_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(lean_object* v_i_29_, lean_object* v_source_30_, lean_object* v_target_31_){
_start:
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = lean_array_get_size(v_source_30_);
v___x_33_ = lean_nat_dec_lt(v_i_29_, v___x_32_);
if (v___x_33_ == 0)
{
lean_dec_ref(v_source_30_);
lean_dec(v_i_29_);
return v_target_31_;
}
else
{
lean_object* v_es_34_; lean_object* v___x_35_; lean_object* v_source_36_; lean_object* v_target_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_es_34_ = lean_array_fget(v_source_30_, v_i_29_);
v___x_35_ = lean_box(0);
v_source_36_ = lean_array_fset(v_source_30_, v_i_29_, v___x_35_);
v_target_37_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(v_target_31_, v_es_34_);
v___x_38_ = lean_unsigned_to_nat(1u);
v___x_39_ = lean_nat_add(v_i_29_, v___x_38_);
lean_dec(v_i_29_);
v_i_29_ = v___x_39_;
v_source_30_ = v_source_36_;
v_target_31_ = v_target_37_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(lean_object* v_data_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v_nbuckets_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_42_ = lean_array_get_size(v_data_41_);
v___x_43_ = lean_unsigned_to_nat(2u);
v_nbuckets_44_ = lean_nat_mul(v___x_42_, v___x_43_);
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_box(0);
v___x_47_ = lean_mk_array(v_nbuckets_44_, v___x_46_);
v___x_48_ = lean_array_propagate_mark(v_data_41_, v___x_47_);
v___x_49_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(v___x_45_, v_data_41_, v___x_48_);
return v___x_49_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(lean_object* v_a_50_, lean_object* v_x_51_){
_start:
{
if (lean_obj_tag(v_x_51_) == 0)
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
else
{
lean_object* v_key_53_; lean_object* v_tail_54_; uint8_t v___x_55_; 
v_key_53_ = lean_ctor_get(v_x_51_, 0);
v_tail_54_ = lean_ctor_get(v_x_51_, 2);
v___x_55_ = l_Lean_instBEqFVarId_beq(v_key_53_, v_a_50_);
if (v___x_55_ == 0)
{
v_x_51_ = v_tail_54_;
goto _start;
}
else
{
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg___boxed(lean_object* v_a_57_, lean_object* v_x_58_){
_start:
{
uint8_t v_res_59_; lean_object* v_r_60_; 
v_res_59_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_57_, v_x_58_);
lean_dec(v_x_58_);
lean_dec(v_a_57_);
v_r_60_ = lean_box(v_res_59_);
return v_r_60_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(lean_object* v_m_61_, lean_object* v_a_62_, lean_object* v_b_63_){
_start:
{
lean_object* v_size_64_; lean_object* v_buckets_65_; lean_object* v___x_66_; uint64_t v___x_67_; uint64_t v___x_68_; uint64_t v___x_69_; uint64_t v_fold_70_; uint64_t v___x_71_; uint64_t v___x_72_; uint64_t v___x_73_; size_t v___x_74_; size_t v___x_75_; size_t v___x_76_; size_t v___x_77_; size_t v___x_78_; lean_object* v_bkt_79_; uint8_t v___x_80_; 
v_size_64_ = lean_ctor_get(v_m_61_, 0);
v_buckets_65_ = lean_ctor_get(v_m_61_, 1);
v___x_66_ = lean_array_get_size(v_buckets_65_);
v___x_67_ = l_Lean_instHashableFVarId_hash(v_a_62_);
v___x_68_ = 32ULL;
v___x_69_ = lean_uint64_shift_right(v___x_67_, v___x_68_);
v_fold_70_ = lean_uint64_xor(v___x_67_, v___x_69_);
v___x_71_ = 16ULL;
v___x_72_ = lean_uint64_shift_right(v_fold_70_, v___x_71_);
v___x_73_ = lean_uint64_xor(v_fold_70_, v___x_72_);
v___x_74_ = lean_uint64_to_usize(v___x_73_);
v___x_75_ = lean_usize_of_nat(v___x_66_);
v___x_76_ = ((size_t)1ULL);
v___x_77_ = lean_usize_sub(v___x_75_, v___x_76_);
v___x_78_ = lean_usize_land(v___x_74_, v___x_77_);
v_bkt_79_ = lean_array_uget_borrowed(v_buckets_65_, v___x_78_);
v___x_80_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_62_, v_bkt_79_);
if (v___x_80_ == 0)
{
lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_101_; 
lean_inc_ref(v_buckets_65_);
lean_inc(v_size_64_);
v_isSharedCheck_101_ = !lean_is_exclusive(v_m_61_);
if (v_isSharedCheck_101_ == 0)
{
lean_object* v_unused_102_; lean_object* v_unused_103_; 
v_unused_102_ = lean_ctor_get(v_m_61_, 1);
lean_dec(v_unused_102_);
v_unused_103_ = lean_ctor_get(v_m_61_, 0);
lean_dec(v_unused_103_);
v___x_82_ = v_m_61_;
v_isShared_83_ = v_isSharedCheck_101_;
goto v_resetjp_81_;
}
else
{
lean_dec(v_m_61_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_101_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_84_; lean_object* v_size_x27_85_; lean_object* v___x_86_; lean_object* v_buckets_x27_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_84_ = lean_unsigned_to_nat(1u);
v_size_x27_85_ = lean_nat_add(v_size_64_, v___x_84_);
lean_dec(v_size_64_);
lean_inc(v_bkt_79_);
v___x_86_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_86_, 0, v_a_62_);
lean_ctor_set(v___x_86_, 1, v_b_63_);
lean_ctor_set(v___x_86_, 2, v_bkt_79_);
v_buckets_x27_87_ = lean_array_uset(v_buckets_65_, v___x_78_, v___x_86_);
v___x_88_ = lean_unsigned_to_nat(4u);
v___x_89_ = lean_nat_mul(v_size_x27_85_, v___x_88_);
v___x_90_ = lean_unsigned_to_nat(3u);
v___x_91_ = lean_nat_div(v___x_89_, v___x_90_);
lean_dec(v___x_89_);
v___x_92_ = lean_array_get_size(v_buckets_x27_87_);
v___x_93_ = lean_nat_dec_le(v___x_91_, v___x_92_);
lean_dec(v___x_91_);
if (v___x_93_ == 0)
{
lean_object* v_val_94_; lean_object* v___x_96_; 
v_val_94_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(v_buckets_x27_87_);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 1, v_val_94_);
lean_ctor_set(v___x_82_, 0, v_size_x27_85_);
v___x_96_ = v___x_82_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_size_x27_85_);
lean_ctor_set(v_reuseFailAlloc_97_, 1, v_val_94_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
else
{
lean_object* v___x_99_; 
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 1, v_buckets_x27_87_);
lean_ctor_set(v___x_82_, 0, v_size_x27_85_);
v___x_99_ = v___x_82_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_size_x27_85_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_buckets_x27_87_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
}
else
{
lean_dec(v_b_63_);
lean_dec(v_a_62_);
return v_m_61_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg(lean_object* v_param_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v_fvarId_110_; lean_object* v_type_111_; lean_object* v___y_113_; lean_object* v___y_114_; lean_object* v___y_115_; uint8_t v___x_128_; 
v_fvarId_110_ = lean_ctor_get(v_param_104_, 0);
v_type_111_ = lean_ctor_get(v_param_104_, 2);
lean_inc_ref(v_type_111_);
v___x_128_ = l_Lean_Compiler_LCNF_isTypeFormerType(v_type_111_);
if (v___x_128_ == 0)
{
v___y_113_ = v_a_106_;
v___y_114_ = v_a_107_;
v___y_115_ = v_a_108_;
goto v___jp_112_;
}
else
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_129_ = lean_st_ref_take(v_a_105_);
v___x_130_ = lean_box(0);
lean_inc(v_fvarId_110_);
v___x_131_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(v___x_129_, v_fvarId_110_, v___x_130_);
v___x_132_ = lean_st_ref_put(v_a_105_, v___x_131_);
v___y_113_ = v_a_106_;
v___y_114_ = v_a_107_;
v___y_115_ = v_a_108_;
goto v___jp_112_;
}
v___jp_112_:
{
lean_object* v___x_116_; 
lean_inc_ref(v_type_111_);
v___x_116_ = l_Lean_Compiler_LCNF_toMonoType(v_type_111_, v___y_114_, v___y_115_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; uint8_t v___x_118_; lean_object* v___x_119_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc(v_a_117_);
lean_dec_ref_known(v___x_116_, 1);
v___x_118_ = 0;
v___x_119_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v___x_118_, v_param_104_, v_a_117_, v___y_113_);
return v___x_119_;
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
lean_dec_ref(v_param_104_);
v_a_120_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_116_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_116_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg___boxed(lean_object* v_param_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_param_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
lean_dec(v_a_135_);
lean_dec(v_a_134_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono(lean_object* v_param_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_param_140_, v_a_141_, v_a_143_, v_a_144_, v_a_145_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___boxed(lean_object* v_param_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Compiler_LCNF_Param_toMono(v_param_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
lean_dec(v_a_149_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0(lean_object* v_00_u03b2_156_, lean_object* v_m_157_, lean_object* v_a_158_, lean_object* v_b_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(v_m_157_, v_a_158_, v_b_159_);
return v___x_160_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0(lean_object* v_00_u03b2_161_, lean_object* v_a_162_, lean_object* v_x_163_){
_start:
{
uint8_t v___x_164_; 
v___x_164_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_162_, v_x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___boxed(lean_object* v_00_u03b2_165_, lean_object* v_a_166_, lean_object* v_x_167_){
_start:
{
uint8_t v_res_168_; lean_object* v_r_169_; 
v_res_168_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0(v_00_u03b2_165_, v_a_166_, v_x_167_);
lean_dec(v_x_167_);
lean_dec(v_a_166_);
v_r_169_ = lean_box(v_res_168_);
return v_r_169_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1(lean_object* v_00_u03b2_170_, lean_object* v_data_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(v_data_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_173_, lean_object* v_i_174_, lean_object* v_source_175_, lean_object* v_target_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(v_i_174_, v_source_175_, v_target_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_178_, lean_object* v_x_179_, lean_object* v_x_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(v_x_179_, v_x_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg(lean_object* v_arg_184_, lean_object* v_a_185_){
_start:
{
switch(lean_obj_tag(v_arg_184_))
{
case 0:
{
goto v___jp_187_;
}
case 1:
{
lean_object* v_fvarId_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v_fvarId_190_ = lean_ctor_get(v_arg_184_, 0);
v___x_191_ = ((lean_object*)(l_Lean_Compiler_LCNF_argToMono___redArg___closed__0));
v___x_192_ = ((lean_object*)(l_Lean_Compiler_LCNF_argToMono___redArg___closed__1));
v___x_193_ = lean_st_ref_get(v_a_185_);
lean_inc(v_fvarId_190_);
v___x_194_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_191_, v___x_192_, v___x_193_, v_fvarId_190_);
lean_dec(v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v_arg_184_);
return v___x_195_;
}
else
{
lean_dec_ref_known(v_arg_184_, 1);
goto v___jp_187_;
}
}
default: 
{
lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_203_; 
v_isSharedCheck_203_ = !lean_is_exclusive(v_arg_184_);
if (v_isSharedCheck_203_ == 0)
{
lean_object* v_unused_204_; 
v_unused_204_ = lean_ctor_get(v_arg_184_, 0);
lean_dec(v_unused_204_);
v___x_197_ = v_arg_184_;
v_isShared_198_ = v_isSharedCheck_203_;
goto v_resetjp_196_;
}
else
{
lean_dec(v_arg_184_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_203_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_199_; lean_object* v___x_201_; 
v___x_199_ = lean_box(0);
if (v_isShared_198_ == 0)
{
lean_ctor_set_tag(v___x_197_, 0);
lean_ctor_set(v___x_197_, 0, v___x_199_);
v___x_201_ = v___x_197_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_199_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
v___jp_187_:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_box(0);
v___x_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___boxed(lean_object* v_arg_205_, lean_object* v_a_206_, lean_object* v_a_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_Compiler_LCNF_argToMono___redArg(v_arg_205_, v_a_206_);
lean_dec(v_a_206_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono(lean_object* v_arg_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_){
_start:
{
switch(lean_obj_tag(v_arg_209_))
{
case 0:
{
goto v___jp_216_;
}
case 1:
{
lean_object* v_fvarId_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v_fvarId_219_ = lean_ctor_get(v_arg_209_, 0);
v___x_220_ = ((lean_object*)(l_Lean_Compiler_LCNF_argToMono___redArg___closed__0));
v___x_221_ = ((lean_object*)(l_Lean_Compiler_LCNF_argToMono___redArg___closed__1));
v___x_222_ = lean_st_ref_get(v_a_210_);
lean_inc(v_fvarId_219_);
v___x_223_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_220_, v___x_221_, v___x_222_, v_fvarId_219_);
lean_dec(v___x_222_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; 
v___x_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_224_, 0, v_arg_209_);
return v___x_224_;
}
else
{
lean_dec_ref_known(v_arg_209_, 1);
goto v___jp_216_;
}
}
default: 
{
lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_232_; 
v_isSharedCheck_232_ = !lean_is_exclusive(v_arg_209_);
if (v_isSharedCheck_232_ == 0)
{
lean_object* v_unused_233_; 
v_unused_233_ = lean_ctor_get(v_arg_209_, 0);
lean_dec(v_unused_233_);
v___x_226_ = v_arg_209_;
v_isShared_227_ = v_isSharedCheck_232_;
goto v_resetjp_225_;
}
else
{
lean_dec(v_arg_209_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_232_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v___x_230_; 
v___x_228_ = lean_box(0);
if (v_isShared_227_ == 0)
{
lean_ctor_set_tag(v___x_226_, 0);
lean_ctor_set(v___x_226_, 0, v___x_228_);
v___x_230_ = v___x_226_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_228_);
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
v___jp_216_:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_box(0);
v___x_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
return v___x_218_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___boxed(lean_object* v_arg_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_Compiler_LCNF_argToMono(v_arg_234_, v_a_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
lean_dec(v_a_239_);
lean_dec_ref(v_a_238_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_a_235_);
return v_res_241_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(lean_object* v_m_242_, lean_object* v_a_243_){
_start:
{
lean_object* v_buckets_244_; lean_object* v___x_245_; uint64_t v___x_246_; uint64_t v___x_247_; uint64_t v___x_248_; uint64_t v_fold_249_; uint64_t v___x_250_; uint64_t v___x_251_; uint64_t v___x_252_; size_t v___x_253_; size_t v___x_254_; size_t v___x_255_; size_t v___x_256_; size_t v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v_buckets_244_ = lean_ctor_get(v_m_242_, 1);
v___x_245_ = lean_array_get_size(v_buckets_244_);
v___x_246_ = l_Lean_instHashableFVarId_hash(v_a_243_);
v___x_247_ = 32ULL;
v___x_248_ = lean_uint64_shift_right(v___x_246_, v___x_247_);
v_fold_249_ = lean_uint64_xor(v___x_246_, v___x_248_);
v___x_250_ = 16ULL;
v___x_251_ = lean_uint64_shift_right(v_fold_249_, v___x_250_);
v___x_252_ = lean_uint64_xor(v_fold_249_, v___x_251_);
v___x_253_ = lean_uint64_to_usize(v___x_252_);
v___x_254_ = lean_usize_of_nat(v___x_245_);
v___x_255_ = ((size_t)1ULL);
v___x_256_ = lean_usize_sub(v___x_254_, v___x_255_);
v___x_257_ = lean_usize_land(v___x_253_, v___x_256_);
v___x_258_ = lean_array_uget_borrowed(v_buckets_244_, v___x_257_);
v___x_259_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_243_, v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg___boxed(lean_object* v_m_260_, lean_object* v_a_261_){
_start:
{
uint8_t v_res_262_; lean_object* v_r_263_; 
v_res_262_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v_m_260_, v_a_261_);
lean_dec(v_a_261_);
lean_dec_ref(v_m_260_);
v_r_263_ = lean_box(v_res_262_);
return v_r_263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(lean_object* v_as_264_, size_t v_sz_265_, size_t v_i_266_, lean_object* v_b_267_, lean_object* v___y_268_){
_start:
{
uint8_t v___x_270_; 
v___x_270_ = lean_usize_dec_lt(v_i_266_, v_sz_265_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; 
v___x_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_271_, 0, v_b_267_);
return v___x_271_;
}
else
{
lean_object* v_fst_272_; lean_object* v_snd_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_316_; 
v_fst_272_ = lean_ctor_get(v_b_267_, 0);
v_snd_273_ = lean_ctor_get(v_b_267_, 1);
v_isSharedCheck_316_ = !lean_is_exclusive(v_b_267_);
if (v_isSharedCheck_316_ == 0)
{
v___x_275_ = v_b_267_;
v_isShared_276_ = v_isSharedCheck_316_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_snd_273_);
lean_inc(v_fst_272_);
lean_dec(v_b_267_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_316_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v_monoArg_278_; lean_object* v_remainingType_279_; lean_object* v___y_288_; lean_object* v_a_290_; lean_object* v___y_292_; 
v_a_290_ = lean_array_uget_borrowed(v_as_264_, v_i_266_);
if (lean_obj_tag(v_fst_272_) == 1)
{
lean_object* v_val_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_315_; 
v_val_298_ = lean_ctor_get(v_fst_272_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v_fst_272_);
if (v_isSharedCheck_315_ == 0)
{
v___x_300_ = v_fst_272_;
v_isShared_301_ = v_isSharedCheck_315_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_val_298_);
lean_dec(v_fst_272_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_315_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
if (lean_obj_tag(v_val_298_) == 7)
{
lean_object* v_binderType_302_; lean_object* v_body_303_; lean_object* v___x_305_; 
v_binderType_302_ = lean_ctor_get(v_val_298_, 1);
lean_inc_ref(v_binderType_302_);
v_body_303_ = lean_ctor_get(v_val_298_, 2);
lean_inc_ref(v_body_303_);
lean_dec_ref_known(v_val_298_, 3);
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 0, v_body_303_);
v___x_305_ = v___x_300_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_body_303_);
v___x_305_ = v_reuseFailAlloc_314_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
uint8_t v___x_308_; 
v___x_308_ = l_Lean_Expr_isErased(v_binderType_302_);
lean_dec_ref(v_binderType_302_);
if (v___x_308_ == 0)
{
switch(lean_obj_tag(v_a_290_))
{
case 0:
{
goto v___jp_306_;
}
case 1:
{
lean_object* v_fvarId_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v_fvarId_309_ = lean_ctor_get(v_a_290_, 0);
v___x_310_ = lean_st_ref_get(v___y_268_);
v___x_311_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_310_, v_fvarId_309_);
lean_dec(v___x_310_);
if (v___x_311_ == 0)
{
lean_inc_ref(v_a_290_);
v_monoArg_278_ = v_a_290_;
v_remainingType_279_ = v___x_305_;
goto v___jp_277_;
}
else
{
goto v___jp_306_;
}
}
default: 
{
lean_object* v___x_312_; 
v___x_312_ = lean_box(0);
v_monoArg_278_ = v___x_312_;
v_remainingType_279_ = v___x_305_;
goto v___jp_277_;
}
}
}
else
{
lean_object* v___x_313_; 
v___x_313_ = lean_box(0);
v_monoArg_278_ = v___x_313_;
v_remainingType_279_ = v___x_305_;
goto v___jp_277_;
}
v___jp_306_:
{
lean_object* v___x_307_; 
v___x_307_ = lean_box(0);
v_monoArg_278_ = v___x_307_;
v_remainingType_279_ = v___x_305_;
goto v___jp_277_;
}
}
}
else
{
lean_del_object(v___x_300_);
lean_dec(v_val_298_);
v___y_292_ = v___y_268_;
goto v___jp_291_;
}
}
}
else
{
lean_dec(v_fst_272_);
v___y_292_ = v___y_268_;
goto v___jp_291_;
}
v___jp_277_:
{
lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_280_ = lean_array_push(v_snd_273_, v_monoArg_278_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v___x_280_);
lean_ctor_set(v___x_275_, 0, v_remainingType_279_);
v___x_282_ = v___x_275_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_remainingType_279_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v___x_280_);
v___x_282_ = v_reuseFailAlloc_286_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
size_t v___x_283_; size_t v___x_284_; 
v___x_283_ = ((size_t)1ULL);
v___x_284_ = lean_usize_add(v_i_266_, v___x_283_);
v_i_266_ = v___x_284_;
v_b_267_ = v___x_282_;
goto _start;
}
}
v___jp_287_:
{
lean_object* v___x_289_; 
v___x_289_ = lean_box(0);
v_monoArg_278_ = v___x_289_;
v_remainingType_279_ = v___y_288_;
goto v___jp_277_;
}
v___jp_291_:
{
lean_object* v___x_293_; 
v___x_293_ = lean_box(0);
switch(lean_obj_tag(v_a_290_))
{
case 0:
{
v___y_288_ = v___x_293_;
goto v___jp_287_;
}
case 1:
{
lean_object* v_fvarId_294_; lean_object* v___x_295_; uint8_t v___x_296_; 
v_fvarId_294_ = lean_ctor_get(v_a_290_, 0);
v___x_295_ = lean_st_ref_get(v___y_292_);
v___x_296_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_295_, v_fvarId_294_);
lean_dec(v___x_295_);
if (v___x_296_ == 0)
{
lean_inc_ref(v_a_290_);
v_monoArg_278_ = v_a_290_;
v_remainingType_279_ = v___x_293_;
goto v___jp_277_;
}
else
{
v___y_288_ = v___x_293_;
goto v___jp_287_;
}
}
default: 
{
lean_object* v___x_297_; 
v___x_297_ = lean_box(0);
v_monoArg_278_ = v___x_297_;
v_remainingType_279_ = v___x_293_;
goto v___jp_277_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg___boxed(lean_object* v_as_317_, lean_object* v_sz_318_, lean_object* v_i_319_, lean_object* v_b_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
size_t v_sz_boxed_323_; size_t v_i_boxed_324_; lean_object* v_res_325_; 
v_sz_boxed_323_ = lean_unbox_usize(v_sz_318_);
lean_dec(v_sz_318_);
v_i_boxed_324_ = lean_unbox_usize(v_i_319_);
lean_dec(v_i_319_);
v_res_325_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(v_as_317_, v_sz_boxed_323_, v_i_boxed_324_, v_b_320_, v___y_321_);
lean_dec(v___y_321_);
lean_dec_ref(v_as_317_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType(lean_object* v_args_326_, lean_object* v_type_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_remainingType_334_; lean_object* v___x_335_; lean_object* v_result_336_; lean_object* v___x_337_; size_t v_sz_338_; size_t v___x_339_; lean_object* v___x_340_; 
v_remainingType_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_remainingType_334_, 0, v_type_327_);
v___x_335_ = lean_array_get_size(v_args_326_);
v_result_336_ = lean_mk_empty_array_with_capacity(v___x_335_);
v___x_337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_337_, 0, v_remainingType_334_);
lean_ctor_set(v___x_337_, 1, v_result_336_);
v_sz_338_ = lean_array_size(v_args_326_);
v___x_339_ = ((size_t)0ULL);
v___x_340_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(v_args_326_, v_sz_338_, v___x_339_, v___x_337_, v_a_328_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_349_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_349_ == 0)
{
v___x_343_ = v___x_340_;
v_isShared_344_ = v_isSharedCheck_349_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_340_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_349_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v_snd_345_; lean_object* v___x_347_; 
v_snd_345_ = lean_ctor_get(v_a_341_, 1);
lean_inc(v_snd_345_);
lean_dec(v_a_341_);
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 0, v_snd_345_);
v___x_347_ = v___x_343_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_snd_345_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
else
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_357_; 
v_a_350_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_357_ == 0)
{
v___x_352_ = v___x_340_;
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_340_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_355_; 
if (v_isShared_353_ == 0)
{
v___x_355_ = v___x_352_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_a_350_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType___boxed(lean_object* v_args_358_, lean_object* v_type_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lean_Compiler_LCNF_argsToMonoWithFnType(v_args_358_, v_type_359_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
lean_dec(v_a_362_);
lean_dec_ref(v_a_361_);
lean_dec(v_a_360_);
lean_dec_ref(v_args_358_);
return v_res_366_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(lean_object* v_00_u03b2_367_, lean_object* v_m_368_, lean_object* v_a_369_){
_start:
{
uint8_t v___x_370_; 
v___x_370_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v_m_368_, v_a_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___boxed(lean_object* v_00_u03b2_371_, lean_object* v_m_372_, lean_object* v_a_373_){
_start:
{
uint8_t v_res_374_; lean_object* v_r_375_; 
v_res_374_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(v_00_u03b2_371_, v_m_372_, v_a_373_);
lean_dec(v_a_373_);
lean_dec_ref(v_m_372_);
v_r_375_ = lean_box(v_res_374_);
return v_r_375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1(lean_object* v_as_376_, size_t v_sz_377_, size_t v_i_378_, lean_object* v_b_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(v_as_376_, v_sz_377_, v_i_378_, v_b_379_, v___y_380_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___boxed(lean_object* v_as_387_, lean_object* v_sz_388_, lean_object* v_i_389_, lean_object* v_b_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
size_t v_sz_boxed_397_; size_t v_i_boxed_398_; lean_object* v_res_399_; 
v_sz_boxed_397_ = lean_unbox_usize(v_sz_388_);
lean_dec(v_sz_388_);
v_i_boxed_398_ = lean_unbox_usize(v_i_389_);
lean_dec(v_i_389_);
v_res_399_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1(v_as_387_, v_sz_boxed_397_, v_i_boxed_398_, v_b_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec(v___y_391_);
lean_dec_ref(v_as_387_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(lean_object* v_a_400_, lean_object* v_b_401_){
_start:
{
lean_object* v_array_402_; lean_object* v_start_403_; lean_object* v_stop_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_417_; 
v_array_402_ = lean_ctor_get(v_a_400_, 0);
v_start_403_ = lean_ctor_get(v_a_400_, 1);
v_stop_404_ = lean_ctor_get(v_a_400_, 2);
v_isSharedCheck_417_ = !lean_is_exclusive(v_a_400_);
if (v_isSharedCheck_417_ == 0)
{
v___x_406_ = v_a_400_;
v_isShared_407_ = v_isSharedCheck_417_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_stop_404_);
lean_inc(v_start_403_);
lean_inc(v_array_402_);
lean_dec(v_a_400_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_417_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
uint8_t v___x_408_; 
v___x_408_ = lean_nat_dec_lt(v_start_403_, v_stop_404_);
if (v___x_408_ == 0)
{
lean_del_object(v___x_406_);
lean_dec(v_stop_404_);
lean_dec(v_start_403_);
lean_dec_ref(v_array_402_);
return v_b_401_;
}
else
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_412_; 
v___x_409_ = lean_unsigned_to_nat(1u);
v___x_410_ = lean_nat_add(v_start_403_, v___x_409_);
lean_inc_ref(v_array_402_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 1, v___x_410_);
v___x_412_ = v___x_406_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_array_402_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v___x_410_);
lean_ctor_set(v_reuseFailAlloc_416_, 2, v_stop_404_);
v___x_412_ = v_reuseFailAlloc_416_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lean_array_fget(v_array_402_, v_start_403_);
lean_dec(v_start_403_);
lean_dec_ref(v_array_402_);
v___x_414_ = lean_array_push(v_b_401_, v___x_413_);
v_a_400_ = v___x_412_;
v_b_401_ = v___x_414_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(size_t v_sz_418_, size_t v_i_419_, lean_object* v_bs_420_, lean_object* v___y_421_){
_start:
{
uint8_t v___x_423_; 
v___x_423_ = lean_usize_dec_lt(v_i_419_, v_sz_418_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; 
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v_bs_420_);
return v___x_424_;
}
else
{
lean_object* v_v_425_; lean_object* v___x_426_; lean_object* v_bs_x27_427_; lean_object* v_a_429_; 
v_v_425_ = lean_array_uget(v_bs_420_, v_i_419_);
v___x_426_ = lean_unsigned_to_nat(0u);
v_bs_x27_427_ = lean_array_uset(v_bs_420_, v_i_419_, v___x_426_);
switch(lean_obj_tag(v_v_425_))
{
case 0:
{
goto v___jp_434_;
}
case 1:
{
lean_object* v_fvarId_436_; lean_object* v___x_437_; uint8_t v___x_438_; 
v_fvarId_436_ = lean_ctor_get(v_v_425_, 0);
v___x_437_ = lean_st_ref_get(v___y_421_);
v___x_438_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_437_, v_fvarId_436_);
lean_dec(v___x_437_);
if (v___x_438_ == 0)
{
v_a_429_ = v_v_425_;
goto v___jp_428_;
}
else
{
lean_dec_ref_known(v_v_425_, 1);
goto v___jp_434_;
}
}
default: 
{
lean_object* v___x_439_; 
lean_dec_ref_known(v_v_425_, 1);
v___x_439_ = lean_box(0);
v_a_429_ = v___x_439_;
goto v___jp_428_;
}
}
v___jp_428_:
{
size_t v___x_430_; size_t v___x_431_; lean_object* v___x_432_; 
v___x_430_ = ((size_t)1ULL);
v___x_431_ = lean_usize_add(v_i_419_, v___x_430_);
v___x_432_ = lean_array_uset(v_bs_x27_427_, v_i_419_, v_a_429_);
v_i_419_ = v___x_431_;
v_bs_420_ = v___x_432_;
goto _start;
}
v___jp_434_:
{
lean_object* v___x_435_; 
v___x_435_ = lean_box(0);
v_a_429_ = v___x_435_;
goto v___jp_428_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg___boxed(lean_object* v_sz_440_, lean_object* v_i_441_, lean_object* v_bs_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
size_t v_sz_boxed_445_; size_t v_i_boxed_446_; lean_object* v_res_447_; 
v_sz_boxed_445_ = lean_unbox_usize(v_sz_440_);
lean_dec(v_sz_440_);
v_i_boxed_446_ = lean_unbox_usize(v_i_441_);
lean_dec(v_i_441_);
v_res_447_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_boxed_445_, v_i_boxed_446_, v_bs_442_, v___y_443_);
lean_dec(v___y_443_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono(lean_object* v_ctorInfo_450_, lean_object* v_args_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_){
_start:
{
lean_object* v_toConstantVal_458_; lean_object* v_numParams_459_; lean_object* v___x_460_; lean_object* v_argsNewParams_461_; lean_object* v_lower_463_; lean_object* v_upper_464_; lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; 
v_toConstantVal_458_ = lean_ctor_get(v_ctorInfo_450_, 0);
lean_inc_ref(v_toConstantVal_458_);
v_numParams_459_ = lean_ctor_get(v_ctorInfo_450_, 3);
lean_inc_n(v_numParams_459_, 2);
lean_dec_ref(v_ctorInfo_450_);
v___x_460_ = lean_box(0);
v_argsNewParams_461_ = lean_mk_array(v_numParams_459_, v___x_460_);
v___x_499_ = lean_unsigned_to_nat(0u);
v___x_500_ = lean_array_get_size(v_args_451_);
v___x_501_ = lean_nat_dec_le(v_numParams_459_, v___x_499_);
if (v___x_501_ == 0)
{
v_lower_463_ = v_numParams_459_;
v_upper_464_ = v___x_500_;
goto v___jp_462_;
}
else
{
lean_dec(v_numParams_459_);
v_lower_463_ = v___x_499_;
v_upper_464_ = v___x_500_;
goto v___jp_462_;
}
v___jp_462_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; size_t v_sz_468_; size_t v___x_469_; lean_object* v___x_470_; 
v___x_465_ = l_Array_toSubarray___redArg(v_args_451_, v_lower_463_, v_upper_464_);
v___x_466_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___closed__0));
v___x_467_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(v___x_465_, v___x_466_);
v_sz_468_ = lean_array_size(v___x_467_);
v___x_469_ = ((size_t)0ULL);
v___x_470_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_468_, v___x_469_, v___x_467_, v_a_452_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_490_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_490_ == 0)
{
v___x_473_ = v___x_470_;
v_isShared_474_ = v_isSharedCheck_490_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_470_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_490_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v_name_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_487_; 
v_name_475_ = lean_ctor_get(v_toConstantVal_458_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v_toConstantVal_458_);
if (v_isSharedCheck_487_ == 0)
{
lean_object* v_unused_488_; lean_object* v_unused_489_; 
v_unused_488_ = lean_ctor_get(v_toConstantVal_458_, 2);
lean_dec(v_unused_488_);
v_unused_489_ = lean_ctor_get(v_toConstantVal_458_, 1);
lean_dec(v_unused_489_);
v___x_477_ = v_toConstantVal_458_;
v_isShared_478_ = v_isSharedCheck_487_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_name_475_);
lean_dec(v_toConstantVal_458_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_487_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_482_; 
v___x_479_ = l_Array_append___redArg(v_argsNewParams_461_, v_a_471_);
lean_dec(v_a_471_);
v___x_480_ = lean_box(0);
if (v_isShared_478_ == 0)
{
lean_ctor_set_tag(v___x_477_, 3);
lean_ctor_set(v___x_477_, 2, v___x_479_);
lean_ctor_set(v___x_477_, 1, v___x_480_);
v___x_482_ = v___x_477_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_name_475_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v___x_480_);
lean_ctor_set(v_reuseFailAlloc_486_, 2, v___x_479_);
v___x_482_ = v_reuseFailAlloc_486_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
lean_object* v___x_484_; 
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 0, v___x_482_);
v___x_484_ = v___x_473_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v___x_482_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
lean_dec_ref(v_argsNewParams_461_);
lean_dec_ref(v_toConstantVal_458_);
v_a_491_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_470_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_470_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_491_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___boxed(lean_object* v_ctorInfo_502_, lean_object* v_args_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Lean_Compiler_LCNF_ctorAppToMono(v_ctorInfo_502_, v_args_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_);
lean_dec(v_a_508_);
lean_dec_ref(v_a_507_);
lean_dec(v_a_506_);
lean_dec_ref(v_a_505_);
lean_dec(v_a_504_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0(lean_object* v_inst_511_, lean_object* v_R_512_, lean_object* v_a_513_, lean_object* v_b_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(v_a_513_, v_b_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(size_t v_sz_516_, size_t v_i_517_, lean_object* v_bs_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_516_, v_i_517_, v_bs_518_, v___y_519_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed(lean_object* v_sz_526_, lean_object* v_i_527_, lean_object* v_bs_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_){
_start:
{
size_t v_sz_boxed_535_; size_t v_i_boxed_536_; lean_object* v_res_537_; 
v_sz_boxed_535_ = lean_unbox_usize(v_sz_526_);
lean_dec(v_sz_526_);
v_i_boxed_536_ = lean_unbox_usize(v_i_527_);
lean_dec(v_i_527_);
v_res_537_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(v_sz_boxed_535_, v_i_boxed_536_, v_bs_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
return v_res_537_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0(void){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_instMonadEIO___redArg();
return v___x_538_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5(void){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l_Lean_Compiler_LCNF_instInhabitedLetValue_default___redArg();
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(lean_object* v_msg_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v_toApplicative_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_615_; 
v___x_551_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_552_ = l_StateRefT_x27_instMonad___redArg(v___x_551_);
v_toApplicative_553_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_615_ == 0)
{
lean_object* v_unused_616_; 
v_unused_616_ = lean_ctor_get(v___x_552_, 1);
lean_dec(v_unused_616_);
v___x_555_ = v___x_552_;
v_isShared_556_ = v_isSharedCheck_615_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_toApplicative_553_);
lean_dec(v___x_552_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_615_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v_toFunctor_557_; lean_object* v_toSeq_558_; lean_object* v_toSeqLeft_559_; lean_object* v_toSeqRight_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_613_; 
v_toFunctor_557_ = lean_ctor_get(v_toApplicative_553_, 0);
v_toSeq_558_ = lean_ctor_get(v_toApplicative_553_, 2);
v_toSeqLeft_559_ = lean_ctor_get(v_toApplicative_553_, 3);
v_toSeqRight_560_ = lean_ctor_get(v_toApplicative_553_, 4);
v_isSharedCheck_613_ = !lean_is_exclusive(v_toApplicative_553_);
if (v_isSharedCheck_613_ == 0)
{
lean_object* v_unused_614_; 
v_unused_614_ = lean_ctor_get(v_toApplicative_553_, 1);
lean_dec(v_unused_614_);
v___x_562_ = v_toApplicative_553_;
v_isShared_563_ = v_isSharedCheck_613_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_toSeqRight_560_);
lean_inc(v_toSeqLeft_559_);
lean_inc(v_toSeq_558_);
lean_inc(v_toFunctor_557_);
lean_dec(v_toApplicative_553_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_613_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___f_564_; lean_object* v___f_565_; lean_object* v___f_566_; lean_object* v___f_567_; lean_object* v___x_568_; lean_object* v___f_569_; lean_object* v___f_570_; lean_object* v___f_571_; lean_object* v___x_573_; 
v___f_564_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_565_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_557_);
v___f_566_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_566_, 0, v_toFunctor_557_);
v___f_567_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_567_, 0, v_toFunctor_557_);
v___x_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_568_, 0, v___f_566_);
lean_ctor_set(v___x_568_, 1, v___f_567_);
v___f_569_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_569_, 0, v_toSeqRight_560_);
v___f_570_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_570_, 0, v_toSeqLeft_559_);
v___f_571_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_571_, 0, v_toSeq_558_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 4, v___f_569_);
lean_ctor_set(v___x_562_, 3, v___f_570_);
lean_ctor_set(v___x_562_, 2, v___f_571_);
lean_ctor_set(v___x_562_, 1, v___f_564_);
lean_ctor_set(v___x_562_, 0, v___x_568_);
v___x_573_ = v___x_562_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v___f_564_);
lean_ctor_set(v_reuseFailAlloc_612_, 2, v___f_571_);
lean_ctor_set(v_reuseFailAlloc_612_, 3, v___f_570_);
lean_ctor_set(v_reuseFailAlloc_612_, 4, v___f_569_);
v___x_573_ = v_reuseFailAlloc_612_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_575_; 
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 1, v___f_565_);
lean_ctor_set(v___x_555_, 0, v___x_573_);
v___x_575_ = v___x_555_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_573_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v___f_565_);
v___x_575_ = v_reuseFailAlloc_611_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_576_; lean_object* v_toApplicative_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_609_; 
v___x_576_ = l_StateRefT_x27_instMonad___redArg(v___x_575_);
v_toApplicative_577_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_609_ == 0)
{
lean_object* v_unused_610_; 
v_unused_610_ = lean_ctor_get(v___x_576_, 1);
lean_dec(v_unused_610_);
v___x_579_ = v___x_576_;
v_isShared_580_ = v_isSharedCheck_609_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_toApplicative_577_);
lean_dec(v___x_576_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_609_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v_toFunctor_581_; lean_object* v_toSeq_582_; lean_object* v_toSeqLeft_583_; lean_object* v_toSeqRight_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_607_; 
v_toFunctor_581_ = lean_ctor_get(v_toApplicative_577_, 0);
v_toSeq_582_ = lean_ctor_get(v_toApplicative_577_, 2);
v_toSeqLeft_583_ = lean_ctor_get(v_toApplicative_577_, 3);
v_toSeqRight_584_ = lean_ctor_get(v_toApplicative_577_, 4);
v_isSharedCheck_607_ = !lean_is_exclusive(v_toApplicative_577_);
if (v_isSharedCheck_607_ == 0)
{
lean_object* v_unused_608_; 
v_unused_608_ = lean_ctor_get(v_toApplicative_577_, 1);
lean_dec(v_unused_608_);
v___x_586_ = v_toApplicative_577_;
v_isShared_587_ = v_isSharedCheck_607_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_toSeqRight_584_);
lean_inc(v_toSeqLeft_583_);
lean_inc(v_toSeq_582_);
lean_inc(v_toFunctor_581_);
lean_dec(v_toApplicative_577_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_607_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___f_588_; lean_object* v___f_589_; lean_object* v___f_590_; lean_object* v___f_591_; lean_object* v___x_592_; lean_object* v___f_593_; lean_object* v___f_594_; lean_object* v___f_595_; lean_object* v___x_597_; 
v___f_588_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_589_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_581_);
v___f_590_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_590_, 0, v_toFunctor_581_);
v___f_591_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_591_, 0, v_toFunctor_581_);
v___x_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_592_, 0, v___f_590_);
lean_ctor_set(v___x_592_, 1, v___f_591_);
v___f_593_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_593_, 0, v_toSeqRight_584_);
v___f_594_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_594_, 0, v_toSeqLeft_583_);
v___f_595_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_595_, 0, v_toSeq_582_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 4, v___f_593_);
lean_ctor_set(v___x_586_, 3, v___f_594_);
lean_ctor_set(v___x_586_, 2, v___f_595_);
lean_ctor_set(v___x_586_, 1, v___f_588_);
lean_ctor_set(v___x_586_, 0, v___x_592_);
v___x_597_ = v___x_586_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_592_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v___f_588_);
lean_ctor_set(v_reuseFailAlloc_606_, 2, v___f_595_);
lean_ctor_set(v_reuseFailAlloc_606_, 3, v___f_594_);
lean_ctor_set(v_reuseFailAlloc_606_, 4, v___f_593_);
v___x_597_ = v_reuseFailAlloc_606_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_599_; 
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 1, v___f_589_);
lean_ctor_set(v___x_579_, 0, v___x_597_);
v___x_599_ = v___x_579_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_597_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v___f_589_);
v___x_599_ = v_reuseFailAlloc_605_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_7634__overap_603_; lean_object* v___x_604_; 
v___x_600_ = l_StateRefT_x27_instMonad___redArg(v___x_599_);
v___x_601_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5);
v___x_602_ = l_instInhabitedOfMonad___redArg(v___x_600_, v___x_601_);
v___x_7634__overap_603_ = lean_panic_fn_borrowed(v___x_602_, v_msg_544_);
lean_dec(v___x_602_);
lean_inc(v___y_549_);
lean_inc_ref(v___y_548_);
lean_inc(v___y_547_);
lean_inc_ref(v___y_546_);
lean_inc(v___y_545_);
v___x_604_ = lean_apply_6(v___x_7634__overap_603_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, lean_box(0));
return v___x_604_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___boxed(lean_object* v_msg_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(v_msg_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
lean_dec(v___y_622_);
lean_dec_ref(v___y_621_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
lean_dec(v___y_618_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(lean_object* v_upperBound_625_, lean_object* v_args_626_, lean_object* v_a_627_, lean_object* v_b_628_, lean_object* v___y_629_){
_start:
{
lean_object* v_a_632_; uint8_t v___x_639_; 
v___x_639_ = lean_nat_dec_lt(v_a_627_, v_upperBound_625_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; 
lean_dec(v_a_627_);
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v_b_628_);
return v___x_640_;
}
else
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_box(0);
v___x_642_ = lean_array_get_borrowed(v___x_641_, v_args_626_, v_a_627_);
switch(lean_obj_tag(v___x_642_))
{
case 0:
{
goto v___jp_637_;
}
case 1:
{
lean_object* v_fvarId_643_; lean_object* v___x_644_; uint8_t v___x_645_; 
v_fvarId_643_ = lean_ctor_get(v___x_642_, 0);
v___x_644_ = lean_st_ref_get(v___y_629_);
v___x_645_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_644_, v_fvarId_643_);
lean_dec(v___x_644_);
if (v___x_645_ == 0)
{
lean_inc_ref(v___x_642_);
v_a_632_ = v___x_642_;
goto v___jp_631_;
}
else
{
goto v___jp_637_;
}
}
default: 
{
v_a_632_ = v___x_641_;
goto v___jp_631_;
}
}
}
v___jp_631_:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_633_ = lean_array_push(v_b_628_, v_a_632_);
v___x_634_ = lean_unsigned_to_nat(1u);
v___x_635_ = lean_nat_add(v_a_627_, v___x_634_);
lean_dec(v_a_627_);
v_a_627_ = v___x_635_;
v_b_628_ = v___x_633_;
goto _start;
}
v___jp_637_:
{
lean_object* v___x_638_; 
v___x_638_ = lean_box(0);
v_a_632_ = v___x_638_;
goto v___jp_631_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg___boxed(lean_object* v_upperBound_646_, lean_object* v_args_647_, lean_object* v_a_648_, lean_object* v_b_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v_upperBound_646_, v_args_647_, v_a_648_, v_b_649_, v___y_650_);
lean_dec(v___y_650_);
lean_dec_ref(v_args_647_);
lean_dec(v_upperBound_646_);
return v_res_652_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__13(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_674_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_675_ = lean_unsigned_to_nat(6u);
v___x_676_ = lean_unsigned_to_nat(83u);
v___x_677_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__11));
v___x_678_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_679_ = l_mkPanicMessageWithDecl(v___x_678_, v___x_677_, v___x_676_, v___x_675_, v___x_674_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono(lean_object* v_e_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_){
_start:
{
switch(lean_obj_tag(v_e_684_))
{
case 2:
{
lean_object* v_typeName_694_; lean_object* v_idx_695_; lean_object* v_struct_696_; lean_object* v___x_697_; uint8_t v___x_698_; 
v_typeName_694_ = lean_ctor_get(v_e_684_, 0);
v_idx_695_ = lean_ctor_get(v_e_684_, 1);
v_struct_696_ = lean_ctor_get(v_e_684_, 2);
v___x_697_ = lean_st_ref_get(v_a_685_);
v___x_698_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_697_, v_struct_696_);
lean_dec(v___x_697_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; 
lean_inc(v_typeName_694_);
v___x_699_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_typeName_694_, v_a_688_, v_a_689_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_715_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_715_ == 0)
{
v___x_702_ = v___x_699_;
v_isShared_703_ = v_isSharedCheck_715_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_699_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_715_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
if (lean_obj_tag(v_a_700_) == 1)
{
lean_object* v_val_704_; lean_object* v_fieldIdx_705_; uint8_t v___x_706_; 
lean_inc(v_struct_696_);
lean_inc(v_idx_695_);
lean_dec_ref_known(v_e_684_, 3);
v_val_704_ = lean_ctor_get(v_a_700_, 0);
lean_inc(v_val_704_);
lean_dec_ref_known(v_a_700_, 1);
v_fieldIdx_705_ = lean_ctor_get(v_val_704_, 2);
lean_inc(v_fieldIdx_705_);
lean_dec(v_val_704_);
v___x_706_ = lean_nat_dec_eq(v_fieldIdx_705_, v_idx_695_);
lean_dec(v_idx_695_);
lean_dec(v_fieldIdx_705_);
if (v___x_706_ == 0)
{
lean_del_object(v___x_702_);
lean_dec(v_struct_696_);
goto v___jp_691_;
}
else
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_710_; 
v___x_707_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___closed__0));
v___x_708_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_708_, 0, v_struct_696_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v___x_708_);
v___x_710_ = v___x_702_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_708_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
else
{
lean_object* v___x_713_; 
lean_dec(v_a_700_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v_e_684_);
v___x_713_ = v___x_702_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_e_684_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
lean_dec_ref_known(v_e_684_, 3);
v_a_716_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_699_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_699_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
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
else
{
lean_dec_ref_known(v_e_684_, 3);
goto v___jp_691_;
}
}
case 3:
{
lean_object* v_declName_724_; lean_object* v_args_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_847_; 
v_declName_724_ = lean_ctor_get(v_e_684_, 0);
v_args_725_ = lean_ctor_get(v_e_684_, 2);
v_isSharedCheck_847_ = !lean_is_exclusive(v_e_684_);
if (v_isSharedCheck_847_ == 0)
{
lean_object* v_unused_848_; 
v_unused_848_ = lean_ctor_get(v_e_684_, 1);
lean_dec(v_unused_848_);
v___x_727_ = v_e_684_;
v_isShared_728_ = v_isSharedCheck_847_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_args_725_);
lean_inc(v_declName_724_);
lean_dec(v_e_684_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_847_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v_args_730_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___x_777_; uint8_t v___x_778_; 
v___x_777_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__2));
v___x_778_ = lean_name_eq(v_declName_724_, v___x_777_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; uint8_t v___x_780_; 
v___x_779_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__4));
v___x_780_ = lean_name_eq(v_declName_724_, v___x_779_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; uint8_t v___x_782_; 
v___x_781_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__7));
v___x_782_ = lean_name_eq(v_declName_724_, v___x_781_);
if (v___x_782_ == 0)
{
lean_object* v___x_783_; uint8_t v___x_784_; 
v___x_783_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__9));
v___x_784_ = lean_name_eq(v_declName_724_, v___x_783_);
if (v___x_784_ == 0)
{
lean_object* v___x_785_; lean_object* v_env_786_; lean_object* v___x_787_; 
v___x_785_ = lean_st_ref_get(v_a_689_);
v_env_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc_ref(v_env_786_);
lean_dec(v___x_785_);
lean_inc(v_declName_724_);
v___x_787_ = l_Lean_Environment_find_x3f(v_env_786_, v_declName_724_, v___x_784_);
if (lean_obj_tag(v___x_787_) == 1)
{
lean_object* v_val_788_; 
v_val_788_ = lean_ctor_get(v___x_787_, 0);
lean_inc(v_val_788_);
lean_dec_ref_known(v___x_787_, 1);
if (lean_obj_tag(v_val_788_) == 6)
{
lean_object* v_val_789_; lean_object* v_induct_790_; lean_object* v_numParams_791_; lean_object* v___x_792_; 
lean_del_object(v___x_727_);
lean_dec(v_declName_724_);
v_val_789_ = lean_ctor_get(v_val_788_, 0);
lean_inc_ref(v_val_789_);
lean_dec_ref_known(v_val_788_, 1);
v_induct_790_ = lean_ctor_get(v_val_789_, 1);
v_numParams_791_ = lean_ctor_get(v_val_789_, 3);
lean_inc(v_induct_790_);
v___x_792_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_induct_790_, v_a_688_, v_a_689_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
if (lean_obj_tag(v_a_793_) == 1)
{
lean_object* v_val_794_; lean_object* v_fieldIdx_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
lean_inc(v_numParams_791_);
lean_dec_ref(v_val_789_);
v_val_794_ = lean_ctor_get(v_a_793_, 0);
lean_inc(v_val_794_);
lean_dec_ref_known(v_a_793_, 1);
v_fieldIdx_795_ = lean_ctor_get(v_val_794_, 2);
lean_inc(v_fieldIdx_795_);
lean_dec(v_val_794_);
v___x_796_ = lean_box(0);
v___x_797_ = lean_nat_add(v_numParams_791_, v_fieldIdx_795_);
lean_dec(v_fieldIdx_795_);
lean_dec(v_numParams_791_);
v___x_798_ = lean_array_get(v___x_796_, v_args_725_, v___x_797_);
lean_dec(v___x_797_);
lean_dec_ref(v_args_725_);
v___x_799_ = l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(v___x_798_);
lean_dec(v___x_798_);
v_e_684_ = v___x_799_;
goto _start;
}
else
{
lean_object* v___x_801_; 
lean_dec(v_a_793_);
v___x_801_ = l_Lean_Compiler_LCNF_ctorAppToMono(v_val_789_, v_args_725_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_);
return v___x_801_;
}
}
else
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_809_; 
lean_dec_ref(v_val_789_);
lean_dec_ref(v_args_725_);
v_a_802_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_809_ == 0)
{
v___x_804_ = v___x_792_;
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_792_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_802_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
}
else
{
lean_dec(v_val_788_);
v___y_737_ = v_a_685_;
v___y_738_ = v_a_686_;
v___y_739_ = v_a_687_;
v___y_740_ = v_a_688_;
v___y_741_ = v_a_689_;
goto v___jp_736_;
}
}
else
{
lean_dec(v___x_787_);
v___y_737_ = v_a_685_;
v___y_738_ = v_a_686_;
v___y_739_ = v_a_687_;
v___y_740_ = v_a_688_;
v___y_741_ = v_a_689_;
goto v___jp_736_;
}
}
else
{
lean_object* v___x_810_; lean_object* v___x_811_; 
lean_del_object(v___x_727_);
lean_dec_ref(v_args_725_);
lean_dec(v_declName_724_);
v___x_810_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__13, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__13_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__13);
v___x_811_ = l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(v___x_810_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_);
return v___x_811_;
}
}
else
{
lean_object* v___x_812_; lean_object* v___x_813_; 
lean_del_object(v___x_727_);
lean_dec_ref(v_args_725_);
lean_dec(v_declName_724_);
v___x_812_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
return v___x_813_;
}
}
else
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
lean_del_object(v___x_727_);
lean_dec(v_declName_724_);
v___x_814_ = lean_box(0);
v___x_815_ = lean_unsigned_to_nat(2u);
v___x_816_ = lean_array_get_borrowed(v___x_814_, v_args_725_, v___x_815_);
if (lean_obj_tag(v___x_816_) == 1)
{
lean_object* v_fvarId_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v_extraArgs_821_; lean_object* v___x_822_; 
v_fvarId_817_ = lean_ctor_get(v___x_816_, 0);
lean_inc(v_fvarId_817_);
v___x_818_ = lean_array_get_size(v_args_725_);
v___x_819_ = lean_unsigned_to_nat(3u);
v___x_820_ = lean_nat_sub(v___x_818_, v___x_819_);
v_extraArgs_821_ = lean_mk_empty_array_with_capacity(v___x_820_);
lean_dec(v___x_820_);
v___x_822_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v___x_818_, v_args_725_, v___x_819_, v_extraArgs_821_, v_a_685_);
lean_dec_ref(v_args_725_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_831_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_831_ == 0)
{
v___x_825_ = v___x_822_;
v_isShared_826_ = v_isSharedCheck_831_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_822_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_831_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; lean_object* v___x_829_; 
v___x_827_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_827_, 0, v_fvarId_817_);
lean_ctor_set(v___x_827_, 1, v_a_823_);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 0, v___x_827_);
v___x_829_ = v___x_825_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v___x_827_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
else
{
lean_object* v_a_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_839_; 
lean_dec(v_fvarId_817_);
v_a_832_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_839_ == 0)
{
v___x_834_ = v___x_822_;
v_isShared_835_ = v_isSharedCheck_839_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_a_832_);
lean_dec(v___x_822_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_839_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_837_; 
if (v_isShared_835_ == 0)
{
v___x_837_ = v___x_834_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_a_832_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
}
}
else
{
lean_object* v___x_840_; lean_object* v___x_841_; 
lean_dec_ref(v_args_725_);
v___x_840_ = lean_box(1);
v___x_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
return v___x_841_;
}
}
}
else
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
lean_del_object(v___x_727_);
lean_dec(v_declName_724_);
v___x_842_ = lean_box(0);
v___x_843_ = lean_unsigned_to_nat(2u);
v___x_844_ = lean_array_get(v___x_842_, v_args_725_, v___x_843_);
lean_dec_ref(v_args_725_);
v___x_845_ = l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(v___x_844_);
lean_dec(v___x_844_);
v___x_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_846_, 0, v___x_845_);
return v___x_846_;
}
v___jp_729_:
{
lean_object* v___x_731_; lean_object* v___x_733_; 
v___x_731_ = lean_box(0);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 2, v_args_730_);
lean_ctor_set(v___x_727_, 1, v___x_731_);
v___x_733_ = v___x_727_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_declName_724_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_735_, 2, v_args_730_);
v___x_733_ = v_reuseFailAlloc_735_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; 
v___x_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
return v___x_734_;
}
}
v___jp_736_:
{
lean_object* v___x_742_; 
lean_inc(v_declName_724_);
v___x_742_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_724_, v___y_741_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_743_);
lean_dec_ref_known(v___x_742_, 1);
if (lean_obj_tag(v_a_743_) == 1)
{
lean_object* v_val_744_; lean_object* v_toSignature_745_; lean_object* v_type_746_; lean_object* v___x_747_; 
v_val_744_ = lean_ctor_get(v_a_743_, 0);
lean_inc(v_val_744_);
lean_dec_ref_known(v_a_743_, 1);
v_toSignature_745_ = lean_ctor_get(v_val_744_, 0);
lean_inc_ref(v_toSignature_745_);
lean_dec(v_val_744_);
v_type_746_ = lean_ctor_get(v_toSignature_745_, 2);
lean_inc_ref(v_type_746_);
lean_dec_ref(v_toSignature_745_);
v___x_747_ = l_Lean_Compiler_LCNF_argsToMonoWithFnType(v_args_725_, v_type_746_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_);
lean_dec_ref(v_args_725_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_747_, 1);
v_args_730_ = v_a_748_;
goto v___jp_729_;
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
lean_del_object(v___x_727_);
lean_dec(v_declName_724_);
v_a_749_ = lean_ctor_get(v___x_747_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_747_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_747_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
else
{
size_t v_sz_757_; size_t v___x_758_; lean_object* v___x_759_; 
lean_dec(v_a_743_);
v_sz_757_ = lean_array_size(v_args_725_);
v___x_758_ = ((size_t)0ULL);
v___x_759_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_757_, v___x_758_, v_args_725_, v___y_737_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_760_);
lean_dec_ref_known(v___x_759_, 1);
v_args_730_ = v_a_760_;
goto v___jp_729_;
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
lean_del_object(v___x_727_);
lean_dec(v_declName_724_);
v_a_761_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_759_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_759_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_del_object(v___x_727_);
lean_dec_ref(v_args_725_);
lean_dec(v_declName_724_);
v_a_769_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_742_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_742_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
}
}
case 4:
{
lean_object* v_fvarId_849_; lean_object* v_args_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_880_; 
v_fvarId_849_ = lean_ctor_get(v_e_684_, 0);
v_args_850_ = lean_ctor_get(v_e_684_, 1);
v_isSharedCheck_880_ = !lean_is_exclusive(v_e_684_);
if (v_isSharedCheck_880_ == 0)
{
v___x_852_ = v_e_684_;
v_isShared_853_ = v_isSharedCheck_880_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_args_850_);
lean_inc(v_fvarId_849_);
lean_dec(v_e_684_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_880_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_854_; uint8_t v___x_855_; 
v___x_854_ = lean_st_ref_get(v_a_685_);
v___x_855_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_854_, v_fvarId_849_);
lean_dec(v___x_854_);
if (v___x_855_ == 0)
{
size_t v_sz_856_; size_t v___x_857_; lean_object* v___x_858_; 
v_sz_856_ = lean_array_size(v_args_850_);
v___x_857_ = ((size_t)0ULL);
v___x_858_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_856_, v___x_857_, v_args_850_, v_a_685_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_869_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_869_ == 0)
{
v___x_861_ = v___x_858_;
v_isShared_862_ = v_isSharedCheck_869_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_858_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_869_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 1, v_a_859_);
v___x_864_ = v___x_852_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_fvarId_849_);
lean_ctor_set(v_reuseFailAlloc_868_, 1, v_a_859_);
v___x_864_ = v_reuseFailAlloc_868_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
lean_object* v___x_866_; 
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 0, v___x_864_);
v___x_866_ = v___x_861_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_864_);
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
else
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
lean_del_object(v___x_852_);
lean_dec(v_fvarId_849_);
v_a_870_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_858_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_858_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
else
{
lean_object* v___x_878_; lean_object* v___x_879_; 
lean_del_object(v___x_852_);
lean_dec_ref(v_args_850_);
lean_dec(v_fvarId_849_);
v___x_878_ = lean_box(1);
v___x_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
return v___x_879_;
}
}
}
default: 
{
lean_object* v___x_881_; 
v___x_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_881_, 0, v_e_684_);
return v___x_881_;
}
}
v___jp_691_:
{
lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_692_ = lean_box(1);
v___x_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
return v___x_693_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___boxed(lean_object* v_e_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Lean_Compiler_LCNF_LetValue_toMono(v_e_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_);
lean_dec(v_a_887_);
lean_dec_ref(v_a_886_);
lean_dec(v_a_885_);
lean_dec_ref(v_a_884_);
lean_dec(v_a_883_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(lean_object* v_upperBound_890_, lean_object* v_args_891_, lean_object* v_inst_892_, lean_object* v_R_893_, lean_object* v_a_894_, lean_object* v_b_895_, lean_object* v_c_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
lean_object* v___x_903_; 
v___x_903_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v_upperBound_890_, v_args_891_, v_a_894_, v_b_895_, v___y_897_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___boxed(lean_object* v_upperBound_904_, lean_object* v_args_905_, lean_object* v_inst_906_, lean_object* v_R_907_, lean_object* v_a_908_, lean_object* v_b_909_, lean_object* v_c_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(v_upperBound_904_, v_args_905_, v_inst_906_, v_R_907_, v_a_908_, v_b_909_, v_c_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v___y_911_);
lean_dec_ref(v_args_905_);
lean_dec(v_upperBound_904_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono(lean_object* v_decl_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_){
_start:
{
lean_object* v_type_925_; lean_object* v_value_926_; lean_object* v___x_927_; 
v_type_925_ = lean_ctor_get(v_decl_918_, 2);
v_value_926_ = lean_ctor_get(v_decl_918_, 3);
lean_inc_ref(v_type_925_);
v___x_927_ = l_Lean_Compiler_LCNF_toMonoType(v_type_925_, v_a_922_, v_a_923_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v_a_928_; lean_object* v___x_929_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_928_);
lean_dec_ref_known(v___x_927_, 1);
lean_inc(v_value_926_);
v___x_929_ = l_Lean_Compiler_LCNF_LetValue_toMono(v_value_926_, v_a_919_, v_a_920_, v_a_921_, v_a_922_, v_a_923_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v_a_930_; uint8_t v___x_931_; lean_object* v___x_932_; 
v_a_930_ = lean_ctor_get(v___x_929_, 0);
lean_inc(v_a_930_);
lean_dec_ref_known(v___x_929_, 1);
v___x_931_ = 0;
v___x_932_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_931_, v_decl_918_, v_a_928_, v_a_930_, v_a_921_);
return v___x_932_;
}
else
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
lean_dec(v_a_928_);
lean_dec_ref(v_decl_918_);
v_a_933_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v___x_929_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_929_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_933_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
}
else
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
lean_dec_ref(v_decl_918_);
v_a_941_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v___x_927_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_927_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono___boxed(lean_object* v_decl_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lean_Compiler_LCNF_LetDecl_toMono(v_decl_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_);
lean_dec(v_a_954_);
lean_dec_ref(v_a_953_);
lean_dec(v_a_952_);
lean_dec_ref(v_a_951_);
lean_dec(v_a_950_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(lean_object* v_msg_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v_toApplicative_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_1028_; 
v___x_964_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_965_ = l_StateRefT_x27_instMonad___redArg(v___x_964_);
v_toApplicative_966_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_1028_ == 0)
{
lean_object* v_unused_1029_; 
v_unused_1029_ = lean_ctor_get(v___x_965_, 1);
lean_dec(v_unused_1029_);
v___x_968_ = v___x_965_;
v_isShared_969_ = v_isSharedCheck_1028_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_toApplicative_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_1028_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v_toFunctor_970_; lean_object* v_toSeq_971_; lean_object* v_toSeqLeft_972_; lean_object* v_toSeqRight_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_1026_; 
v_toFunctor_970_ = lean_ctor_get(v_toApplicative_966_, 0);
v_toSeq_971_ = lean_ctor_get(v_toApplicative_966_, 2);
v_toSeqLeft_972_ = lean_ctor_get(v_toApplicative_966_, 3);
v_toSeqRight_973_ = lean_ctor_get(v_toApplicative_966_, 4);
v_isSharedCheck_1026_ = !lean_is_exclusive(v_toApplicative_966_);
if (v_isSharedCheck_1026_ == 0)
{
lean_object* v_unused_1027_; 
v_unused_1027_ = lean_ctor_get(v_toApplicative_966_, 1);
lean_dec(v_unused_1027_);
v___x_975_ = v_toApplicative_966_;
v_isShared_976_ = v_isSharedCheck_1026_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_toSeqRight_973_);
lean_inc(v_toSeqLeft_972_);
lean_inc(v_toSeq_971_);
lean_inc(v_toFunctor_970_);
lean_dec(v_toApplicative_966_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_1026_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___f_977_; lean_object* v___f_978_; lean_object* v___f_979_; lean_object* v___f_980_; lean_object* v___x_981_; lean_object* v___f_982_; lean_object* v___f_983_; lean_object* v___f_984_; lean_object* v___x_986_; 
v___f_977_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_978_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_970_);
v___f_979_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_979_, 0, v_toFunctor_970_);
v___f_980_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_980_, 0, v_toFunctor_970_);
v___x_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_981_, 0, v___f_979_);
lean_ctor_set(v___x_981_, 1, v___f_980_);
v___f_982_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_982_, 0, v_toSeqRight_973_);
v___f_983_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_983_, 0, v_toSeqLeft_972_);
v___f_984_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_984_, 0, v_toSeq_971_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 4, v___f_982_);
lean_ctor_set(v___x_975_, 3, v___f_983_);
lean_ctor_set(v___x_975_, 2, v___f_984_);
lean_ctor_set(v___x_975_, 1, v___f_977_);
lean_ctor_set(v___x_975_, 0, v___x_981_);
v___x_986_ = v___x_975_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v___x_981_);
lean_ctor_set(v_reuseFailAlloc_1025_, 1, v___f_977_);
lean_ctor_set(v_reuseFailAlloc_1025_, 2, v___f_984_);
lean_ctor_set(v_reuseFailAlloc_1025_, 3, v___f_983_);
lean_ctor_set(v_reuseFailAlloc_1025_, 4, v___f_982_);
v___x_986_ = v_reuseFailAlloc_1025_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
lean_object* v___x_988_; 
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 1, v___f_978_);
lean_ctor_set(v___x_968_, 0, v___x_986_);
v___x_988_ = v___x_968_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_986_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v___f_978_);
v___x_988_ = v_reuseFailAlloc_1024_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
lean_object* v___x_989_; lean_object* v_toApplicative_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1022_; 
v___x_989_ = l_StateRefT_x27_instMonad___redArg(v___x_988_);
v_toApplicative_990_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1022_ == 0)
{
lean_object* v_unused_1023_; 
v_unused_1023_ = lean_ctor_get(v___x_989_, 1);
lean_dec(v_unused_1023_);
v___x_992_ = v___x_989_;
v_isShared_993_ = v_isSharedCheck_1022_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_toApplicative_990_);
lean_dec(v___x_989_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1022_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v_toFunctor_994_; lean_object* v_toSeq_995_; lean_object* v_toSeqLeft_996_; lean_object* v_toSeqRight_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1020_; 
v_toFunctor_994_ = lean_ctor_get(v_toApplicative_990_, 0);
v_toSeq_995_ = lean_ctor_get(v_toApplicative_990_, 2);
v_toSeqLeft_996_ = lean_ctor_get(v_toApplicative_990_, 3);
v_toSeqRight_997_ = lean_ctor_get(v_toApplicative_990_, 4);
v_isSharedCheck_1020_ = !lean_is_exclusive(v_toApplicative_990_);
if (v_isSharedCheck_1020_ == 0)
{
lean_object* v_unused_1021_; 
v_unused_1021_ = lean_ctor_get(v_toApplicative_990_, 1);
lean_dec(v_unused_1021_);
v___x_999_ = v_toApplicative_990_;
v_isShared_1000_ = v_isSharedCheck_1020_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_toSeqRight_997_);
lean_inc(v_toSeqLeft_996_);
lean_inc(v_toSeq_995_);
lean_inc(v_toFunctor_994_);
lean_dec(v_toApplicative_990_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1020_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___f_1001_; lean_object* v___f_1002_; lean_object* v___f_1003_; lean_object* v___f_1004_; lean_object* v___x_1005_; lean_object* v___f_1006_; lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___x_1010_; 
v___f_1001_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_1002_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_994_);
v___f_1003_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1003_, 0, v_toFunctor_994_);
v___f_1004_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1004_, 0, v_toFunctor_994_);
v___x_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___f_1003_);
lean_ctor_set(v___x_1005_, 1, v___f_1004_);
v___f_1006_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1006_, 0, v_toSeqRight_997_);
v___f_1007_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1007_, 0, v_toSeqLeft_996_);
v___f_1008_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1008_, 0, v_toSeq_995_);
if (v_isShared_1000_ == 0)
{
lean_ctor_set(v___x_999_, 4, v___f_1006_);
lean_ctor_set(v___x_999_, 3, v___f_1007_);
lean_ctor_set(v___x_999_, 2, v___f_1008_);
lean_ctor_set(v___x_999_, 1, v___f_1001_);
lean_ctor_set(v___x_999_, 0, v___x_1005_);
v___x_1010_ = v___x_999_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1005_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v___f_1001_);
lean_ctor_set(v_reuseFailAlloc_1019_, 2, v___f_1008_);
lean_ctor_set(v_reuseFailAlloc_1019_, 3, v___f_1007_);
lean_ctor_set(v_reuseFailAlloc_1019_, 4, v___f_1006_);
v___x_1010_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
lean_object* v___x_1012_; 
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 1, v___f_1002_);
lean_ctor_set(v___x_992_, 0, v___x_1010_);
v___x_1012_ = v___x_992_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v___x_1010_);
lean_ctor_set(v_reuseFailAlloc_1018_, 1, v___f_1002_);
v___x_1012_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_4525__overap_1016_; lean_object* v___x_1017_; 
v___x_1013_ = l_StateRefT_x27_instMonad___redArg(v___x_1012_);
v___x_1014_ = lean_box(0);
v___x_1015_ = l_instInhabitedOfMonad___redArg(v___x_1013_, v___x_1014_);
v___x_4525__overap_1016_ = lean_panic_fn_borrowed(v___x_1015_, v_msg_957_);
lean_dec(v___x_1015_);
lean_inc(v___y_962_);
lean_inc_ref(v___y_961_);
lean_inc(v___y_960_);
lean_inc_ref(v___y_959_);
lean_inc(v___y_958_);
v___x_1017_ = lean_apply_6(v___x_4525__overap_1016_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, lean_box(0));
return v___x_1017_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0___boxed(lean_object* v_msg_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v_msg_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
return v_res_1037_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1039_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1040_ = lean_unsigned_to_nat(11u);
v___x_1041_ = lean_unsigned_to_nat(124u);
v___x_1042_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0));
v___x_1043_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1044_ = l_mkPanicMessageWithDecl(v___x_1043_, v___x_1042_, v___x_1041_, v___x_1040_, v___x_1039_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(lean_object* v_upperBound_1045_, lean_object* v_a_1046_, lean_object* v_b_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_a_1055_; uint8_t v___x_1059_; 
v___x_1059_ = lean_nat_dec_lt(v_a_1046_, v_upperBound_1045_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; 
lean_dec(v_a_1046_);
v___x_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1060_, 0, v_b_1047_);
return v___x_1060_;
}
else
{
if (lean_obj_tag(v_b_1047_) == 7)
{
lean_object* v_body_1061_; 
v_body_1061_ = lean_ctor_get(v_b_1047_, 2);
lean_inc_ref(v_body_1061_);
lean_dec_ref_known(v_b_1047_, 3);
v_a_1055_ = v_body_1061_;
goto v___jp_1054_;
}
else
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1);
v___x_1063_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v___x_1062_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_dec_ref_known(v___x_1063_, 1);
v_a_1055_ = v_b_1047_;
goto v___jp_1054_;
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
lean_dec_ref(v_b_1047_);
lean_dec(v_a_1046_);
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v___x_1063_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___x_1063_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_a_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
}
v___jp_1054_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = lean_unsigned_to_nat(1u);
v___x_1057_ = lean_nat_add(v_a_1046_, v___x_1056_);
lean_dec(v_a_1046_);
v_a_1046_ = v___x_1057_;
v_b_1047_ = v_a_1055_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___boxed(lean_object* v_upperBound_1072_, lean_object* v_a_1073_, lean_object* v_b_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_upperBound_1072_, v_a_1073_, v_b_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec(v_upperBound_1072_);
return v_res_1081_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1082_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1083_ = lean_unsigned_to_nat(11u);
v___x_1084_ = lean_unsigned_to_nat(132u);
v___x_1085_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0));
v___x_1086_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1087_ = l_mkPanicMessageWithDecl(v___x_1086_, v___x_1085_, v___x_1084_, v___x_1083_, v___x_1082_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(lean_object* v_upperBound_1088_, lean_object* v_a_1089_, lean_object* v_b_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_){
_start:
{
lean_object* v_a_1098_; uint8_t v___x_1102_; 
v___x_1102_ = lean_nat_dec_lt(v_a_1089_, v_upperBound_1088_);
if (v___x_1102_ == 0)
{
lean_object* v___x_1103_; 
lean_dec(v_a_1089_);
v___x_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1103_, 0, v_b_1090_);
return v___x_1103_;
}
else
{
lean_object* v_fst_1104_; 
v_fst_1104_ = lean_ctor_get(v_b_1090_, 0);
lean_inc(v_fst_1104_);
if (lean_obj_tag(v_fst_1104_) == 7)
{
lean_object* v_snd_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1138_; 
v_snd_1105_ = lean_ctor_get(v_b_1090_, 1);
v_isSharedCheck_1138_ = !lean_is_exclusive(v_b_1090_);
if (v_isSharedCheck_1138_ == 0)
{
lean_object* v_unused_1139_; 
v_unused_1139_ = lean_ctor_get(v_b_1090_, 0);
lean_dec(v_unused_1139_);
v___x_1107_ = v_b_1090_;
v_isShared_1108_ = v_isSharedCheck_1138_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_snd_1105_);
lean_dec(v_b_1090_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1138_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v_binderName_1109_; lean_object* v_binderType_1110_; lean_object* v_body_1111_; lean_object* v___x_1112_; 
v_binderName_1109_ = lean_ctor_get(v_fst_1104_, 0);
lean_inc(v_binderName_1109_);
v_binderType_1110_ = lean_ctor_get(v_fst_1104_, 1);
lean_inc_ref(v_binderType_1110_);
v_body_1111_ = lean_ctor_get(v_fst_1104_, 2);
lean_inc_ref(v_body_1111_);
lean_dec_ref_known(v_fst_1104_, 3);
v___x_1112_ = l_Lean_Compiler_LCNF_toMonoType(v_binderType_1110_, v___y_1094_, v___y_1095_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; uint8_t v___x_1114_; uint8_t v___x_1115_; lean_object* v___x_1116_; 
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1113_);
lean_dec_ref_known(v___x_1112_, 1);
v___x_1114_ = 0;
v___x_1115_ = 0;
v___x_1116_ = l_Lean_Compiler_LCNF_mkParam(v___x_1114_, v_binderName_1109_, v_a_1113_, v___x_1115_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v_a_1117_; lean_object* v___x_1118_; lean_object* v___x_1120_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1117_);
lean_dec_ref_known(v___x_1116_, 1);
v___x_1118_ = lean_array_push(v_snd_1105_, v_a_1117_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 1, v___x_1118_);
lean_ctor_set(v___x_1107_, 0, v_body_1111_);
v___x_1120_ = v___x_1107_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_body_1111_);
lean_ctor_set(v_reuseFailAlloc_1121_, 1, v___x_1118_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
v_a_1098_ = v___x_1120_;
goto v___jp_1097_;
}
}
else
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
lean_dec_ref(v_body_1111_);
lean_del_object(v___x_1107_);
lean_dec(v_snd_1105_);
lean_dec(v_a_1089_);
v_a_1122_ = lean_ctor_get(v___x_1116_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1124_ = v___x_1116_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1116_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
if (v_isShared_1125_ == 0)
{
v___x_1127_ = v___x_1124_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_a_1122_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
else
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
lean_dec_ref(v_body_1111_);
lean_dec(v_binderName_1109_);
lean_del_object(v___x_1107_);
lean_dec(v_snd_1105_);
lean_dec(v_a_1089_);
v_a_1130_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1112_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1112_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
}
else
{
lean_object* v_snd_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1157_; 
v_snd_1140_ = lean_ctor_get(v_b_1090_, 1);
v_isSharedCheck_1157_ = !lean_is_exclusive(v_b_1090_);
if (v_isSharedCheck_1157_ == 0)
{
lean_object* v_unused_1158_; 
v_unused_1158_ = lean_ctor_get(v_b_1090_, 0);
lean_dec(v_unused_1158_);
v___x_1142_ = v_b_1090_;
v_isShared_1143_ = v_isSharedCheck_1157_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_snd_1140_);
lean_dec(v_b_1090_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1157_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0);
v___x_1145_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v___x_1144_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v___x_1147_; 
lean_dec_ref_known(v___x_1145_, 1);
if (v_isShared_1143_ == 0)
{
v___x_1147_ = v___x_1142_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_fst_1104_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v_snd_1140_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
v_a_1098_ = v___x_1147_;
goto v___jp_1097_;
}
}
else
{
lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1156_; 
lean_del_object(v___x_1142_);
lean_dec(v_snd_1140_);
lean_dec(v_fst_1104_);
lean_dec(v_a_1089_);
v_a_1149_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1151_ = v___x_1145_;
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___x_1145_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1154_; 
if (v_isShared_1152_ == 0)
{
v___x_1154_ = v___x_1151_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_a_1149_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
}
}
}
v___jp_1097_:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1099_ = lean_unsigned_to_nat(1u);
v___x_1100_ = lean_nat_add(v_a_1089_, v___x_1099_);
lean_dec(v_a_1089_);
v_a_1089_ = v___x_1100_;
v_b_1090_ = v_a_1098_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___boxed(lean_object* v_upperBound_1159_, lean_object* v_a_1160_, lean_object* v_b_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_upperBound_1159_, v_a_1160_, v_b_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec(v_upperBound_1159_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(lean_object* v_ctorType_1169_, lean_object* v_numParams_1170_, lean_object* v_numNewFields_1171_, lean_object* v_oldFields_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_unsigned_to_nat(0u);
v___x_1180_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_numParams_1170_, v___x_1179_, v_ctorType_1169_, v_a_1173_, v_a_1174_, v_a_1175_, v_a_1176_, v_a_1177_);
if (lean_obj_tag(v___x_1180_) == 0)
{
lean_object* v_a_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v_a_1181_ = lean_ctor_get(v___x_1180_, 0);
lean_inc(v_a_1181_);
lean_dec_ref_known(v___x_1180_, 1);
v___x_1182_ = lean_array_get_size(v_oldFields_1172_);
v___x_1183_ = lean_nat_add(v___x_1182_, v_numNewFields_1171_);
v___x_1184_ = lean_mk_empty_array_with_capacity(v___x_1183_);
lean_dec(v___x_1183_);
v___x_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1185_, 0, v_a_1181_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
v___x_1186_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_numNewFields_1171_, v___x_1179_, v___x_1185_, v_a_1173_, v_a_1174_, v_a_1175_, v_a_1176_, v_a_1177_);
if (lean_obj_tag(v___x_1186_) == 0)
{
lean_object* v_a_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1196_; 
v_a_1187_ = lean_ctor_get(v___x_1186_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1186_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1189_ = v___x_1186_;
v_isShared_1190_ = v_isSharedCheck_1196_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_a_1187_);
lean_dec(v___x_1186_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1196_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v_snd_1191_; lean_object* v___x_1192_; lean_object* v___x_1194_; 
v_snd_1191_ = lean_ctor_get(v_a_1187_, 1);
lean_inc(v_snd_1191_);
lean_dec(v_a_1187_);
v___x_1192_ = l_Array_append___redArg(v_snd_1191_, v_oldFields_1172_);
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 0, v___x_1192_);
v___x_1194_ = v___x_1189_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1192_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
else
{
lean_object* v_a_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1204_; 
v_a_1197_ = lean_ctor_get(v___x_1186_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___x_1186_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1199_ = v___x_1186_;
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_a_1197_);
lean_dec(v___x_1186_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1202_; 
if (v_isShared_1200_ == 0)
{
v___x_1202_ = v___x_1199_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_a_1197_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
else
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
v_a_1205_ = lean_ctor_get(v___x_1180_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1207_ = v___x_1180_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1180_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields___boxed(lean_object* v_ctorType_1213_, lean_object* v_numParams_1214_, lean_object* v_numNewFields_1215_, lean_object* v_oldFields_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(v_ctorType_1213_, v_numParams_1214_, v_numNewFields_1215_, v_oldFields_1216_, v_a_1217_, v_a_1218_, v_a_1219_, v_a_1220_, v_a_1221_);
lean_dec(v_a_1221_);
lean_dec_ref(v_a_1220_);
lean_dec(v_a_1219_);
lean_dec_ref(v_a_1218_);
lean_dec(v_a_1217_);
lean_dec_ref(v_oldFields_1216_);
lean_dec(v_numNewFields_1215_);
lean_dec(v_numParams_1214_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(lean_object* v_upperBound_1224_, lean_object* v_inst_1225_, lean_object* v_R_1226_, lean_object* v_a_1227_, lean_object* v_b_1228_, lean_object* v_c_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v___x_1236_; 
v___x_1236_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_upperBound_1224_, v_a_1227_, v_b_1228_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___boxed(lean_object* v_upperBound_1237_, lean_object* v_inst_1238_, lean_object* v_R_1239_, lean_object* v_a_1240_, lean_object* v_b_1241_, lean_object* v_c_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(v_upperBound_1237_, v_inst_1238_, v_R_1239_, v_a_1240_, v_b_1241_, v_c_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
lean_dec(v___y_1243_);
lean_dec(v_upperBound_1237_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(lean_object* v_upperBound_1250_, lean_object* v_inst_1251_, lean_object* v_R_1252_, lean_object* v_a_1253_, lean_object* v_b_1254_, lean_object* v_c_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v___x_1262_; 
v___x_1262_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_upperBound_1250_, v_a_1253_, v_b_1254_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___boxed(lean_object* v_upperBound_1263_, lean_object* v_inst_1264_, lean_object* v_R_1265_, lean_object* v_a_1266_, lean_object* v_b_1267_, lean_object* v_c_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(v_upperBound_1263_, v_inst_1264_, v_R_1265_, v_a_1266_, v_b_1267_, v_c_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec(v_upperBound_1263_);
return v_res_1275_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(lean_object* v_msg_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v_toApplicative_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1348_; 
v___x_1284_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_1285_ = l_StateRefT_x27_instMonad___redArg(v___x_1284_);
v_toApplicative_1286_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1348_ == 0)
{
lean_object* v_unused_1349_; 
v_unused_1349_ = lean_ctor_get(v___x_1285_, 1);
lean_dec(v_unused_1349_);
v___x_1288_ = v___x_1285_;
v_isShared_1289_ = v_isSharedCheck_1348_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_toApplicative_1286_);
lean_dec(v___x_1285_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1348_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v_toFunctor_1290_; lean_object* v_toSeq_1291_; lean_object* v_toSeqLeft_1292_; lean_object* v_toSeqRight_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1346_; 
v_toFunctor_1290_ = lean_ctor_get(v_toApplicative_1286_, 0);
v_toSeq_1291_ = lean_ctor_get(v_toApplicative_1286_, 2);
v_toSeqLeft_1292_ = lean_ctor_get(v_toApplicative_1286_, 3);
v_toSeqRight_1293_ = lean_ctor_get(v_toApplicative_1286_, 4);
v_isSharedCheck_1346_ = !lean_is_exclusive(v_toApplicative_1286_);
if (v_isSharedCheck_1346_ == 0)
{
lean_object* v_unused_1347_; 
v_unused_1347_ = lean_ctor_get(v_toApplicative_1286_, 1);
lean_dec(v_unused_1347_);
v___x_1295_ = v_toApplicative_1286_;
v_isShared_1296_ = v_isSharedCheck_1346_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_toSeqRight_1293_);
lean_inc(v_toSeqLeft_1292_);
lean_inc(v_toSeq_1291_);
lean_inc(v_toFunctor_1290_);
lean_dec(v_toApplicative_1286_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1346_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___f_1297_; lean_object* v___f_1298_; lean_object* v___f_1299_; lean_object* v___f_1300_; lean_object* v___x_1301_; lean_object* v___f_1302_; lean_object* v___f_1303_; lean_object* v___f_1304_; lean_object* v___x_1306_; 
v___f_1297_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_1298_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1290_);
v___f_1299_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1299_, 0, v_toFunctor_1290_);
v___f_1300_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1300_, 0, v_toFunctor_1290_);
v___x_1301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___f_1299_);
lean_ctor_set(v___x_1301_, 1, v___f_1300_);
v___f_1302_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1302_, 0, v_toSeqRight_1293_);
v___f_1303_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1303_, 0, v_toSeqLeft_1292_);
v___f_1304_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1304_, 0, v_toSeq_1291_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v___f_1302_);
lean_ctor_set(v___x_1295_, 3, v___f_1303_);
lean_ctor_set(v___x_1295_, 2, v___f_1304_);
lean_ctor_set(v___x_1295_, 1, v___f_1297_);
lean_ctor_set(v___x_1295_, 0, v___x_1301_);
v___x_1306_ = v___x_1295_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v___x_1301_);
lean_ctor_set(v_reuseFailAlloc_1345_, 1, v___f_1297_);
lean_ctor_set(v_reuseFailAlloc_1345_, 2, v___f_1304_);
lean_ctor_set(v_reuseFailAlloc_1345_, 3, v___f_1303_);
lean_ctor_set(v_reuseFailAlloc_1345_, 4, v___f_1302_);
v___x_1306_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
lean_object* v___x_1308_; 
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 1, v___f_1298_);
lean_ctor_set(v___x_1288_, 0, v___x_1306_);
v___x_1308_ = v___x_1288_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v___x_1306_);
lean_ctor_set(v_reuseFailAlloc_1344_, 1, v___f_1298_);
v___x_1308_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
lean_object* v___x_1309_; lean_object* v_toApplicative_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1342_; 
v___x_1309_ = l_StateRefT_x27_instMonad___redArg(v___x_1308_);
v_toApplicative_1310_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1342_ == 0)
{
lean_object* v_unused_1343_; 
v_unused_1343_ = lean_ctor_get(v___x_1309_, 1);
lean_dec(v_unused_1343_);
v___x_1312_ = v___x_1309_;
v_isShared_1313_ = v_isSharedCheck_1342_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_toApplicative_1310_);
lean_dec(v___x_1309_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1342_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v_toFunctor_1314_; lean_object* v_toSeq_1315_; lean_object* v_toSeqLeft_1316_; lean_object* v_toSeqRight_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1340_; 
v_toFunctor_1314_ = lean_ctor_get(v_toApplicative_1310_, 0);
v_toSeq_1315_ = lean_ctor_get(v_toApplicative_1310_, 2);
v_toSeqLeft_1316_ = lean_ctor_get(v_toApplicative_1310_, 3);
v_toSeqRight_1317_ = lean_ctor_get(v_toApplicative_1310_, 4);
v_isSharedCheck_1340_ = !lean_is_exclusive(v_toApplicative_1310_);
if (v_isSharedCheck_1340_ == 0)
{
lean_object* v_unused_1341_; 
v_unused_1341_ = lean_ctor_get(v_toApplicative_1310_, 1);
lean_dec(v_unused_1341_);
v___x_1319_ = v_toApplicative_1310_;
v_isShared_1320_ = v_isSharedCheck_1340_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_toSeqRight_1317_);
lean_inc(v_toSeqLeft_1316_);
lean_inc(v_toSeq_1315_);
lean_inc(v_toFunctor_1314_);
lean_dec(v_toApplicative_1310_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1340_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___f_1321_; lean_object* v___f_1322_; lean_object* v___f_1323_; lean_object* v___f_1324_; lean_object* v___x_1325_; lean_object* v___f_1326_; lean_object* v___f_1327_; lean_object* v___f_1328_; lean_object* v___x_1330_; 
v___f_1321_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_1322_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1314_);
v___f_1323_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1323_, 0, v_toFunctor_1314_);
v___f_1324_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1324_, 0, v_toFunctor_1314_);
v___x_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___f_1323_);
lean_ctor_set(v___x_1325_, 1, v___f_1324_);
v___f_1326_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1326_, 0, v_toSeqRight_1317_);
v___f_1327_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1327_, 0, v_toSeqLeft_1316_);
v___f_1328_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1328_, 0, v_toSeq_1315_);
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 4, v___f_1326_);
lean_ctor_set(v___x_1319_, 3, v___f_1327_);
lean_ctor_set(v___x_1319_, 2, v___f_1328_);
lean_ctor_set(v___x_1319_, 1, v___f_1321_);
lean_ctor_set(v___x_1319_, 0, v___x_1325_);
v___x_1330_ = v___x_1319_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v___x_1325_);
lean_ctor_set(v_reuseFailAlloc_1339_, 1, v___f_1321_);
lean_ctor_set(v_reuseFailAlloc_1339_, 2, v___f_1328_);
lean_ctor_set(v_reuseFailAlloc_1339_, 3, v___f_1327_);
lean_ctor_set(v_reuseFailAlloc_1339_, 4, v___f_1326_);
v___x_1330_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
lean_object* v___x_1332_; 
if (v_isShared_1313_ == 0)
{
lean_ctor_set(v___x_1312_, 1, v___f_1322_);
lean_ctor_set(v___x_1312_, 0, v___x_1330_);
v___x_1332_ = v___x_1312_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1330_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v___f_1322_);
v___x_1332_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_32456__overap_1336_; lean_object* v___x_1337_; 
v___x_1333_ = l_StateRefT_x27_instMonad___redArg(v___x_1332_);
v___x_1334_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_1335_ = l_instInhabitedOfMonad___redArg(v___x_1333_, v___x_1334_);
v___x_32456__overap_1336_ = lean_panic_fn_borrowed(v___x_1335_, v_msg_1277_);
lean_dec(v___x_1335_);
lean_inc(v___y_1282_);
lean_inc_ref(v___y_1281_);
lean_inc(v___y_1280_);
lean_inc_ref(v___y_1279_);
lean_inc(v___y_1278_);
v___x_1337_ = lean_apply_6(v___x_32456__overap_1336_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, lean_box(0));
return v___x_1337_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___boxed(lean_object* v_msg_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(v_msg_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
lean_dec(v___y_1351_);
return v_res_1357_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(lean_object* v_msg_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v_toApplicative_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1430_; 
v___x_1366_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_1367_ = l_StateRefT_x27_instMonad___redArg(v___x_1366_);
v_toApplicative_1368_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1430_ == 0)
{
lean_object* v_unused_1431_; 
v_unused_1431_ = lean_ctor_get(v___x_1367_, 1);
lean_dec(v_unused_1431_);
v___x_1370_ = v___x_1367_;
v_isShared_1371_ = v_isSharedCheck_1430_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_toApplicative_1368_);
lean_dec(v___x_1367_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1430_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v_toFunctor_1372_; lean_object* v_toSeq_1373_; lean_object* v_toSeqLeft_1374_; lean_object* v_toSeqRight_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1428_; 
v_toFunctor_1372_ = lean_ctor_get(v_toApplicative_1368_, 0);
v_toSeq_1373_ = lean_ctor_get(v_toApplicative_1368_, 2);
v_toSeqLeft_1374_ = lean_ctor_get(v_toApplicative_1368_, 3);
v_toSeqRight_1375_ = lean_ctor_get(v_toApplicative_1368_, 4);
v_isSharedCheck_1428_ = !lean_is_exclusive(v_toApplicative_1368_);
if (v_isSharedCheck_1428_ == 0)
{
lean_object* v_unused_1429_; 
v_unused_1429_ = lean_ctor_get(v_toApplicative_1368_, 1);
lean_dec(v_unused_1429_);
v___x_1377_ = v_toApplicative_1368_;
v_isShared_1378_ = v_isSharedCheck_1428_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_toSeqRight_1375_);
lean_inc(v_toSeqLeft_1374_);
lean_inc(v_toSeq_1373_);
lean_inc(v_toFunctor_1372_);
lean_dec(v_toApplicative_1368_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1428_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___f_1379_; lean_object* v___f_1380_; lean_object* v___f_1381_; lean_object* v___f_1382_; lean_object* v___x_1383_; lean_object* v___f_1384_; lean_object* v___f_1385_; lean_object* v___f_1386_; lean_object* v___x_1388_; 
v___f_1379_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_1380_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1372_);
v___f_1381_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1381_, 0, v_toFunctor_1372_);
v___f_1382_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1382_, 0, v_toFunctor_1372_);
v___x_1383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1383_, 0, v___f_1381_);
lean_ctor_set(v___x_1383_, 1, v___f_1382_);
v___f_1384_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1384_, 0, v_toSeqRight_1375_);
v___f_1385_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1385_, 0, v_toSeqLeft_1374_);
v___f_1386_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1386_, 0, v_toSeq_1373_);
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 4, v___f_1384_);
lean_ctor_set(v___x_1377_, 3, v___f_1385_);
lean_ctor_set(v___x_1377_, 2, v___f_1386_);
lean_ctor_set(v___x_1377_, 1, v___f_1379_);
lean_ctor_set(v___x_1377_, 0, v___x_1383_);
v___x_1388_ = v___x_1377_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v___x_1383_);
lean_ctor_set(v_reuseFailAlloc_1427_, 1, v___f_1379_);
lean_ctor_set(v_reuseFailAlloc_1427_, 2, v___f_1386_);
lean_ctor_set(v_reuseFailAlloc_1427_, 3, v___f_1385_);
lean_ctor_set(v_reuseFailAlloc_1427_, 4, v___f_1384_);
v___x_1388_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
lean_object* v___x_1390_; 
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 1, v___f_1380_);
lean_ctor_set(v___x_1370_, 0, v___x_1388_);
v___x_1390_ = v___x_1370_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1388_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v___f_1380_);
v___x_1390_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
lean_object* v___x_1391_; lean_object* v_toApplicative_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1424_; 
v___x_1391_ = l_StateRefT_x27_instMonad___redArg(v___x_1390_);
v_toApplicative_1392_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1424_ == 0)
{
lean_object* v_unused_1425_; 
v_unused_1425_ = lean_ctor_get(v___x_1391_, 1);
lean_dec(v_unused_1425_);
v___x_1394_ = v___x_1391_;
v_isShared_1395_ = v_isSharedCheck_1424_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_toApplicative_1392_);
lean_dec(v___x_1391_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1424_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v_toFunctor_1396_; lean_object* v_toSeq_1397_; lean_object* v_toSeqLeft_1398_; lean_object* v_toSeqRight_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1422_; 
v_toFunctor_1396_ = lean_ctor_get(v_toApplicative_1392_, 0);
v_toSeq_1397_ = lean_ctor_get(v_toApplicative_1392_, 2);
v_toSeqLeft_1398_ = lean_ctor_get(v_toApplicative_1392_, 3);
v_toSeqRight_1399_ = lean_ctor_get(v_toApplicative_1392_, 4);
v_isSharedCheck_1422_ = !lean_is_exclusive(v_toApplicative_1392_);
if (v_isSharedCheck_1422_ == 0)
{
lean_object* v_unused_1423_; 
v_unused_1423_ = lean_ctor_get(v_toApplicative_1392_, 1);
lean_dec(v_unused_1423_);
v___x_1401_ = v_toApplicative_1392_;
v_isShared_1402_ = v_isSharedCheck_1422_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_toSeqRight_1399_);
lean_inc(v_toSeqLeft_1398_);
lean_inc(v_toSeq_1397_);
lean_inc(v_toFunctor_1396_);
lean_dec(v_toApplicative_1392_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1422_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___f_1403_; lean_object* v___f_1404_; lean_object* v___f_1405_; lean_object* v___f_1406_; lean_object* v___x_1407_; lean_object* v___f_1408_; lean_object* v___f_1409_; lean_object* v___f_1410_; lean_object* v___x_1412_; 
v___f_1403_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_1404_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1396_);
v___f_1405_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1405_, 0, v_toFunctor_1396_);
v___f_1406_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1406_, 0, v_toFunctor_1396_);
v___x_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1407_, 0, v___f_1405_);
lean_ctor_set(v___x_1407_, 1, v___f_1406_);
v___f_1408_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1408_, 0, v_toSeqRight_1399_);
v___f_1409_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1409_, 0, v_toSeqLeft_1398_);
v___f_1410_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1410_, 0, v_toSeq_1397_);
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 4, v___f_1408_);
lean_ctor_set(v___x_1401_, 3, v___f_1409_);
lean_ctor_set(v___x_1401_, 2, v___f_1410_);
lean_ctor_set(v___x_1401_, 1, v___f_1403_);
lean_ctor_set(v___x_1401_, 0, v___x_1407_);
v___x_1412_ = v___x_1401_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1407_);
lean_ctor_set(v_reuseFailAlloc_1421_, 1, v___f_1403_);
lean_ctor_set(v_reuseFailAlloc_1421_, 2, v___f_1410_);
lean_ctor_set(v_reuseFailAlloc_1421_, 3, v___f_1409_);
lean_ctor_set(v_reuseFailAlloc_1421_, 4, v___f_1408_);
v___x_1412_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1414_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 1, v___f_1404_);
lean_ctor_set(v___x_1394_, 0, v___x_1412_);
v___x_1414_ = v___x_1394_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v___x_1412_);
lean_ctor_set(v_reuseFailAlloc_1420_, 1, v___f_1404_);
v___x_1414_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_32174__overap_1418_; lean_object* v___x_1419_; 
v___x_1415_ = l_StateRefT_x27_instMonad___redArg(v___x_1414_);
v___x_1416_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0);
v___x_1417_ = l_instInhabitedOfMonad___redArg(v___x_1415_, v___x_1416_);
v___x_32174__overap_1418_ = lean_panic_fn_borrowed(v___x_1417_, v_msg_1359_);
lean_dec(v___x_1417_);
lean_inc(v___y_1364_);
lean_inc_ref(v___y_1363_);
lean_inc(v___y_1362_);
lean_inc_ref(v___y_1361_);
lean_inc(v___y_1360_);
v___x_1419_ = lean_apply_6(v___x_32174__overap_1418_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, lean_box(0));
return v___x_1419_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___boxed(lean_object* v_msg_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v_msg_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v___y_1433_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(lean_object* v_msg_1440_){
_start:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1441_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0);
v___x_1442_ = lean_panic_fn_borrowed(v___x_1441_, v_msg_1440_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(size_t v_sz_1443_, size_t v_i_1444_, lean_object* v_bs_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_){
_start:
{
uint8_t v___x_1451_; 
v___x_1451_ = lean_usize_dec_lt(v_i_1444_, v_sz_1443_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1452_, 0, v_bs_1445_);
return v___x_1452_;
}
else
{
lean_object* v_v_1453_; lean_object* v___x_1454_; lean_object* v_bs_x27_1455_; lean_object* v___x_1456_; 
v_v_1453_ = lean_array_uget(v_bs_1445_, v_i_1444_);
v___x_1454_ = lean_unsigned_to_nat(0u);
v_bs_x27_1455_ = lean_array_uset(v_bs_1445_, v_i_1444_, v___x_1454_);
v___x_1456_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_v_1453_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; size_t v___x_1458_; size_t v___x_1459_; lean_object* v___x_1460_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_a_1457_);
lean_dec_ref_known(v___x_1456_, 1);
v___x_1458_ = ((size_t)1ULL);
v___x_1459_ = lean_usize_add(v_i_1444_, v___x_1458_);
v___x_1460_ = lean_array_uset(v_bs_x27_1455_, v_i_1444_, v_a_1457_);
v_i_1444_ = v___x_1459_;
v_bs_1445_ = v___x_1460_;
goto _start;
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
lean_dec_ref(v_bs_x27_1455_);
v_a_1462_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1456_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1456_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg___boxed(lean_object* v_sz_1470_, lean_object* v_i_1471_, lean_object* v_bs_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
size_t v_sz_boxed_1478_; size_t v_i_boxed_1479_; lean_object* v_res_1480_; 
v_sz_boxed_1478_ = lean_unbox_usize(v_sz_1470_);
lean_dec(v_sz_1470_);
v_i_boxed_1479_ = lean_unbox_usize(v_i_1471_);
lean_dec(v_i_1471_);
v_res_1480_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_boxed_1478_, v_i_boxed_1479_, v_bs_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___y_1474_);
lean_dec(v___y_1473_);
return v_res_1480_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__1(void){
_start:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1483_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__0));
v___x_1484_ = lean_unsigned_to_nat(66u);
v___x_1485_ = lean_unsigned_to_nat(365u);
v___x_1486_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__0));
v___x_1487_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1488_ = l_mkPanicMessageWithDecl(v___x_1487_, v___x_1486_, v___x_1485_, v___x_1484_, v___x_1483_);
return v___x_1488_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__4(void){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1491_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1492_ = lean_unsigned_to_nat(9u);
v___x_1493_ = lean_unsigned_to_nat(658u);
v___x_1494_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__3));
v___x_1495_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__2));
v___x_1496_ = l_mkPanicMessageWithDecl(v___x_1495_, v___x_1494_, v___x_1493_, v___x_1492_, v___x_1491_);
return v___x_1496_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__5(void){
_start:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1497_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1498_ = lean_unsigned_to_nat(27u);
v___x_1499_ = lean_unsigned_to_nat(319u);
v___x_1500_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__0));
v___x_1501_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1502_ = l_mkPanicMessageWithDecl(v___x_1501_, v___x_1500_, v___x_1499_, v___x_1498_, v___x_1497_);
return v___x_1502_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__1(void){
_start:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1560_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1561_ = lean_unsigned_to_nat(2u);
v___x_1562_ = lean_unsigned_to_nat(302u);
v___x_1563_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1564_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1565_ = l_mkPanicMessageWithDecl(v___x_1564_, v___x_1563_, v___x_1562_, v___x_1561_, v___x_1560_);
return v___x_1565_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__3(void){
_start:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1567_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__2));
v___x_1568_ = lean_unsigned_to_nat(2u);
v___x_1569_ = lean_unsigned_to_nat(304u);
v___x_1570_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1571_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1572_ = l_mkPanicMessageWithDecl(v___x_1571_, v___x_1570_, v___x_1569_, v___x_1568_, v___x_1567_);
return v___x_1572_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__5(void){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1574_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__4));
v___x_1575_ = lean_unsigned_to_nat(2u);
v___x_1576_ = lean_unsigned_to_nat(305u);
v___x_1577_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1578_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1579_ = l_mkPanicMessageWithDecl(v___x_1578_, v___x_1577_, v___x_1576_, v___x_1575_, v___x_1574_);
return v___x_1579_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_1580_; 
v___x_1580_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_1580_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__6(void){
_start:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1581_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1582_ = lean_unsigned_to_nat(41u);
v___x_1583_ = lean_unsigned_to_nat(303u);
v___x_1584_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1585_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1586_ = l_mkPanicMessageWithDecl(v___x_1585_, v___x_1584_, v___x_1583_, v___x_1582_, v___x_1581_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono(lean_object* v_info_1587_, lean_object* v_c_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_){
_start:
{
lean_object* v_discr_1595_; lean_object* v_alts_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1674_; 
v_discr_1595_ = lean_ctor_get(v_c_1588_, 2);
v_alts_1596_ = lean_ctor_get(v_c_1588_, 3);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_c_1588_);
if (v_isSharedCheck_1674_ == 0)
{
lean_object* v_unused_1675_; lean_object* v_unused_1676_; 
v_unused_1675_ = lean_ctor_get(v_c_1588_, 1);
lean_dec(v_unused_1675_);
v_unused_1676_ = lean_ctor_get(v_c_1588_, 0);
lean_dec(v_unused_1676_);
v___x_1598_ = v_c_1588_;
v_isShared_1599_ = v_isSharedCheck_1674_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_alts_1596_);
lean_inc(v_discr_1595_);
lean_dec(v_c_1588_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1674_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; uint8_t v___x_1602_; 
v___x_1600_ = lean_array_get_size(v_alts_1596_);
v___x_1601_ = lean_unsigned_to_nat(1u);
v___x_1602_ = lean_nat_dec_eq(v___x_1600_, v___x_1601_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; lean_object* v___x_1604_; 
lean_del_object(v___x_1598_);
lean_dec_ref(v_alts_1596_);
lean_dec(v_discr_1595_);
v___x_1603_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__1, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__1_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__1);
v___x_1604_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1603_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_, v_a_1593_);
return v___x_1604_;
}
else
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1605_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_1606_ = lean_unsigned_to_nat(0u);
v___x_1607_ = lean_array_get(v___x_1605_, v_alts_1596_, v___x_1606_);
lean_dec_ref(v_alts_1596_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_ctorName_1608_; lean_object* v_params_1609_; lean_object* v_code_1610_; lean_object* v_ctorName_1611_; lean_object* v_fieldIdx_1612_; uint8_t v___x_1613_; 
v_ctorName_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_ctorName_1608_);
v_params_1609_ = lean_ctor_get(v___x_1607_, 1);
lean_inc_ref(v_params_1609_);
v_code_1610_ = lean_ctor_get(v___x_1607_, 2);
lean_inc_ref(v_code_1610_);
lean_dec_ref_known(v___x_1607_, 3);
v_ctorName_1611_ = lean_ctor_get(v_info_1587_, 0);
v_fieldIdx_1612_ = lean_ctor_get(v_info_1587_, 2);
v___x_1613_ = lean_name_eq(v_ctorName_1608_, v_ctorName_1611_);
lean_dec(v_ctorName_1608_);
if (v___x_1613_ == 0)
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
lean_dec_ref(v_code_1610_);
lean_dec_ref(v_params_1609_);
lean_del_object(v___x_1598_);
lean_dec(v_discr_1595_);
v___x_1614_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__3, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__3_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__3);
v___x_1615_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1614_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_, v_a_1593_);
return v___x_1615_;
}
else
{
lean_object* v___x_1616_; uint8_t v___x_1617_; 
v___x_1616_ = lean_array_get_size(v_params_1609_);
v___x_1617_ = lean_nat_dec_lt(v_fieldIdx_1612_, v___x_1616_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
lean_dec_ref(v_code_1610_);
lean_dec_ref(v_params_1609_);
lean_del_object(v___x_1598_);
lean_dec(v_discr_1595_);
v___x_1618_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__5, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__5_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__5);
v___x_1619_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1618_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_, v_a_1593_);
return v___x_1619_;
}
else
{
uint8_t v___x_1620_; lean_object* v___x_1621_; lean_object* v_p_1622_; lean_object* v___x_1623_; 
v___x_1620_ = 0;
v___x_1621_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v_p_1622_ = lean_array_get(v___x_1621_, v_params_1609_, v_fieldIdx_1612_);
v___x_1623_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1620_, v_params_1609_, v_a_1591_);
lean_dec_ref(v_params_1609_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_fvarId_1624_; lean_object* v_binderName_1625_; lean_object* v_type_1626_; lean_object* v___x_1627_; 
lean_dec_ref_known(v___x_1623_, 1);
v_fvarId_1624_ = lean_ctor_get(v_p_1622_, 0);
lean_inc(v_fvarId_1624_);
v_binderName_1625_ = lean_ctor_get(v_p_1622_, 1);
lean_inc(v_binderName_1625_);
v_type_1626_ = lean_ctor_get(v_p_1622_, 2);
lean_inc_ref(v_type_1626_);
lean_dec(v_p_1622_);
v___x_1627_ = l_Lean_Compiler_LCNF_toMonoType(v_type_1626_, v_a_1592_, v_a_1593_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1632_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v___x_1627_, 1);
v___x_1629_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___closed__0));
v___x_1630_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1630_, 0, v_discr_1595_);
lean_ctor_set(v___x_1630_, 1, v___x_1629_);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 3, v___x_1630_);
lean_ctor_set(v___x_1598_, 2, v_a_1628_);
lean_ctor_set(v___x_1598_, 1, v_binderName_1625_);
lean_ctor_set(v___x_1598_, 0, v_fvarId_1624_);
v___x_1632_ = v___x_1598_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_fvarId_1624_);
lean_ctor_set(v_reuseFailAlloc_1655_, 1, v_binderName_1625_);
lean_ctor_set(v_reuseFailAlloc_1655_, 2, v_a_1628_);
lean_ctor_set(v_reuseFailAlloc_1655_, 3, v___x_1630_);
v___x_1632_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
lean_object* v___x_1633_; lean_object* v_lctx_1634_; lean_object* v_nextIdx_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1654_; 
v___x_1633_ = lean_st_ref_take(v_a_1591_);
v_lctx_1634_ = lean_ctor_get(v___x_1633_, 0);
v_nextIdx_1635_ = lean_ctor_get(v___x_1633_, 1);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1637_ = v___x_1633_;
v_isShared_1638_ = v_isSharedCheck_1654_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_nextIdx_1635_);
lean_inc(v_lctx_1634_);
lean_dec(v___x_1633_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1654_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1639_; lean_object* v___x_1641_; 
lean_inc_ref(v___x_1632_);
v___x_1639_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1620_, v_lctx_1634_, v___x_1632_);
if (v_isShared_1638_ == 0)
{
lean_ctor_set(v___x_1637_, 0, v___x_1639_);
v___x_1641_ = v___x_1637_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v___x_1639_);
lean_ctor_set(v_reuseFailAlloc_1653_, 1, v_nextIdx_1635_);
v___x_1641_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1642_ = lean_st_ref_put(v_a_1591_, v___x_1641_);
v___x_1643_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1610_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_, v_a_1593_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1652_; 
v_a_1644_ = lean_ctor_get(v___x_1643_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1646_ = v___x_1643_;
v_isShared_1647_ = v_isSharedCheck_1652_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1643_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1652_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1648_; lean_object* v___x_1650_; 
v___x_1648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1632_);
lean_ctor_set(v___x_1648_, 1, v_a_1644_);
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 0, v___x_1648_);
v___x_1650_ = v___x_1646_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1648_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
else
{
lean_dec_ref(v___x_1632_);
return v___x_1643_;
}
}
}
}
}
else
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
lean_dec(v_binderName_1625_);
lean_dec(v_fvarId_1624_);
lean_dec_ref(v_code_1610_);
lean_del_object(v___x_1598_);
lean_dec(v_discr_1595_);
v_a_1656_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1627_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1627_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
else
{
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
lean_dec(v_p_1622_);
lean_dec_ref(v_code_1610_);
lean_del_object(v___x_1598_);
lean_dec(v_discr_1595_);
v_a_1664_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1666_ = v___x_1623_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1623_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1664_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
}
}
else
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
lean_dec(v___x_1607_);
lean_del_object(v___x_1598_);
lean_dec(v_discr_1595_);
v___x_1672_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__6, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__6_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__6);
v___x_1673_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1672_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_, v_a_1593_);
return v___x_1673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(size_t v_sz_1677_, size_t v_i_1678_, lean_object* v_bs_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_){
_start:
{
uint8_t v___x_1686_; 
v___x_1686_ = lean_usize_dec_lt(v_i_1678_, v_sz_1677_);
if (v___x_1686_ == 0)
{
lean_object* v___x_1687_; 
v___x_1687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1687_, 0, v_bs_1679_);
return v___x_1687_;
}
else
{
lean_object* v_v_1688_; lean_object* v___x_1689_; lean_object* v_bs_x27_1690_; lean_object* v_a_1692_; 
v_v_1688_ = lean_array_uget(v_bs_1679_, v_i_1678_);
v___x_1689_ = lean_unsigned_to_nat(0u);
v_bs_x27_1690_ = lean_array_uset(v_bs_1679_, v_i_1678_, v___x_1689_);
if (lean_obj_tag(v_v_1688_) == 0)
{
lean_object* v_params_1697_; lean_object* v_code_1698_; uint8_t v___x_1699_; size_t v_sz_1700_; size_t v___x_1701_; lean_object* v___x_1702_; 
v_params_1697_ = lean_ctor_get(v_v_1688_, 1);
v_code_1698_ = lean_ctor_get(v_v_1688_, 2);
v___x_1699_ = 0;
v_sz_1700_ = lean_array_size(v_params_1697_);
v___x_1701_ = ((size_t)0ULL);
lean_inc_ref(v_params_1697_);
v___x_1702_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_1700_, v___x_1701_, v_params_1697_, v___y_1680_, v___y_1682_, v___y_1683_, v___y_1684_);
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v_a_1703_; lean_object* v___x_1704_; 
v_a_1703_ = lean_ctor_get(v___x_1702_, 0);
lean_inc(v_a_1703_);
lean_dec_ref_known(v___x_1702_, 1);
lean_inc_ref(v_code_1698_);
v___x_1704_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1698_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v_a_1705_; lean_object* v___x_1706_; 
v_a_1705_ = lean_ctor_get(v___x_1704_, 0);
lean_inc(v_a_1705_);
lean_dec_ref_known(v___x_1704_, 1);
v___x_1706_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(v___x_1699_, v_v_1688_, v_a_1703_, v_a_1705_);
v_a_1692_ = v___x_1706_;
goto v___jp_1691_;
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1714_; 
lean_dec(v_a_1703_);
lean_dec_ref_known(v_v_1688_, 3);
lean_dec_ref(v_bs_x27_1690_);
v_a_1707_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1709_ = v___x_1704_;
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1704_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
else
{
lean_dec_ref_known(v_v_1688_, 3);
lean_dec_ref(v_bs_x27_1690_);
return v___x_1702_;
}
}
else
{
lean_object* v_code_1715_; lean_object* v___x_1716_; 
v_code_1715_ = lean_ctor_get(v_v_1688_, 0);
lean_inc_ref(v_code_1715_);
v___x_1716_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1715_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
if (lean_obj_tag(v___x_1716_) == 0)
{
lean_object* v_a_1717_; lean_object* v___x_1718_; 
v_a_1717_ = lean_ctor_get(v___x_1716_, 0);
lean_inc(v_a_1717_);
lean_dec_ref_known(v___x_1716_, 1);
v___x_1718_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_1688_, v_a_1717_);
v_a_1692_ = v___x_1718_;
goto v___jp_1691_;
}
else
{
lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1726_; 
lean_dec_ref_known(v_v_1688_, 1);
lean_dec_ref(v_bs_x27_1690_);
v_a_1719_ = lean_ctor_get(v___x_1716_, 0);
v_isSharedCheck_1726_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1721_ = v___x_1716_;
v_isShared_1722_ = v_isSharedCheck_1726_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_dec(v___x_1716_);
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
v_reuseFailAlloc_1725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v_a_1719_);
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
v___jp_1691_:
{
size_t v___x_1693_; size_t v___x_1694_; lean_object* v___x_1695_; 
v___x_1693_ = ((size_t)1ULL);
v___x_1694_ = lean_usize_add(v_i_1678_, v___x_1693_);
v___x_1695_ = lean_array_uset(v_bs_x27_1690_, v_i_1678_, v_a_1692_);
v_i_1678_ = v___x_1694_;
v_bs_1679_ = v___x_1695_;
goto _start;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__2(void){
_start:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1731_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__1));
v___x_1732_ = lean_unsigned_to_nat(70u);
v___x_1733_ = lean_unsigned_to_nat(375u);
v___x_1734_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__0));
v___x_1735_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1736_ = l_mkPanicMessageWithDecl(v___x_1735_, v___x_1734_, v___x_1733_, v___x_1732_, v___x_1731_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(lean_object* v___x_1737_, uint8_t v___x_1738_, size_t v_sz_1739_, size_t v_i_1740_, lean_object* v_bs_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_){
_start:
{
uint8_t v___x_1748_; 
v___x_1748_ = lean_usize_dec_lt(v_i_1740_, v_sz_1739_);
if (v___x_1748_ == 0)
{
lean_object* v___x_1749_; 
lean_dec_ref(v___x_1737_);
v___x_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1749_, 0, v_bs_1741_);
return v___x_1749_;
}
else
{
lean_object* v_v_1750_; lean_object* v___x_1751_; lean_object* v_bs_x27_1752_; lean_object* v_a_1754_; lean_object* v___y_1760_; lean_object* v___y_1761_; lean_object* v___y_1762_; lean_object* v___y_1763_; lean_object* v___y_1764_; 
v_v_1750_ = lean_array_uget(v_bs_1741_, v_i_1740_);
v___x_1751_ = lean_unsigned_to_nat(0u);
v_bs_x27_1752_ = lean_array_uset(v_bs_1741_, v_i_1740_, v___x_1751_);
if (lean_obj_tag(v_v_1750_) == 0)
{
lean_object* v_ctorName_1776_; lean_object* v_params_1777_; lean_object* v_code_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1816_; 
v_ctorName_1776_ = lean_ctor_get(v_v_1750_, 0);
v_params_1777_ = lean_ctor_get(v_v_1750_, 1);
v_code_1778_ = lean_ctor_get(v_v_1750_, 2);
v_isSharedCheck_1816_ = !lean_is_exclusive(v_v_1750_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1780_ = v_v_1750_;
v_isShared_1781_ = v_isSharedCheck_1816_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_code_1778_);
lean_inc(v_params_1777_);
lean_inc(v_ctorName_1776_);
lean_dec(v_v_1750_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1816_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1782_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__4));
v___x_1783_ = l_Lean_Name_append(v_ctorName_1776_, v___x_1782_);
lean_inc(v___x_1783_);
lean_inc_ref(v___x_1737_);
v___x_1784_ = l_Lean_Environment_find_x3f(v___x_1737_, v___x_1783_, v___x_1738_);
if (lean_obj_tag(v___x_1784_) == 1)
{
lean_object* v_val_1785_; 
v_val_1785_ = lean_ctor_get(v___x_1784_, 0);
lean_inc(v_val_1785_);
lean_dec_ref_known(v___x_1784_, 1);
if (lean_obj_tag(v_val_1785_) == 6)
{
lean_object* v_val_1786_; lean_object* v_toConstantVal_1787_; lean_object* v_numParams_1788_; lean_object* v_numFields_1789_; lean_object* v_type_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v_val_1786_ = lean_ctor_get(v_val_1785_, 0);
lean_inc_ref(v_val_1786_);
lean_dec_ref_known(v_val_1785_, 1);
v_toConstantVal_1787_ = lean_ctor_get(v_val_1786_, 0);
lean_inc_ref(v_toConstantVal_1787_);
v_numParams_1788_ = lean_ctor_get(v_val_1786_, 3);
lean_inc(v_numParams_1788_);
v_numFields_1789_ = lean_ctor_get(v_val_1786_, 4);
lean_inc(v_numFields_1789_);
lean_dec_ref(v_val_1786_);
v_type_1790_ = lean_ctor_get(v_toConstantVal_1787_, 2);
lean_inc_ref(v_type_1790_);
lean_dec_ref(v_toConstantVal_1787_);
v___x_1791_ = lean_array_get_size(v_params_1777_);
v___x_1792_ = lean_nat_sub(v_numFields_1789_, v___x_1791_);
lean_dec(v_numFields_1789_);
v___x_1793_ = l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(v_type_1790_, v_numParams_1788_, v___x_1792_, v_params_1777_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
lean_dec_ref(v_params_1777_);
lean_dec(v___x_1792_);
lean_dec(v_numParams_1788_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; lean_object* v___x_1795_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
lean_inc(v_a_1794_);
lean_dec_ref_known(v___x_1793_, 1);
v___x_1795_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1778_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; lean_object* v___x_1798_; 
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
lean_inc(v_a_1796_);
lean_dec_ref_known(v___x_1795_, 1);
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 2, v_a_1796_);
lean_ctor_set(v___x_1780_, 1, v_a_1794_);
lean_ctor_set(v___x_1780_, 0, v___x_1783_);
v___x_1798_ = v___x_1780_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v___x_1783_);
lean_ctor_set(v_reuseFailAlloc_1799_, 1, v_a_1794_);
lean_ctor_set(v_reuseFailAlloc_1799_, 2, v_a_1796_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
v_a_1754_ = v___x_1798_;
goto v___jp_1753_;
}
}
else
{
lean_object* v_a_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1807_; 
lean_dec(v_a_1794_);
lean_dec(v___x_1783_);
lean_del_object(v___x_1780_);
lean_dec_ref(v_bs_x27_1752_);
lean_dec_ref(v___x_1737_);
v_a_1800_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1802_ = v___x_1795_;
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_a_1800_);
lean_dec(v___x_1795_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1805_; 
if (v_isShared_1803_ == 0)
{
v___x_1805_ = v___x_1802_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_a_1800_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
return v___x_1805_;
}
}
}
}
else
{
lean_object* v_a_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1815_; 
lean_dec(v___x_1783_);
lean_del_object(v___x_1780_);
lean_dec_ref(v_code_1778_);
lean_dec_ref(v_bs_x27_1752_);
lean_dec_ref(v___x_1737_);
v_a_1808_ = lean_ctor_get(v___x_1793_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1810_ = v___x_1793_;
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_a_1808_);
lean_dec(v___x_1793_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1813_; 
if (v_isShared_1811_ == 0)
{
v___x_1813_ = v___x_1810_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_a_1808_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
}
}
else
{
lean_dec(v_val_1785_);
lean_dec(v___x_1783_);
lean_del_object(v___x_1780_);
lean_dec_ref(v_code_1778_);
lean_dec_ref(v_params_1777_);
v___y_1760_ = v___y_1742_;
v___y_1761_ = v___y_1743_;
v___y_1762_ = v___y_1744_;
v___y_1763_ = v___y_1745_;
v___y_1764_ = v___y_1746_;
goto v___jp_1759_;
}
}
else
{
lean_dec(v___x_1784_);
lean_dec(v___x_1783_);
lean_del_object(v___x_1780_);
lean_dec_ref(v_code_1778_);
lean_dec_ref(v_params_1777_);
v___y_1760_ = v___y_1742_;
v___y_1761_ = v___y_1743_;
v___y_1762_ = v___y_1744_;
v___y_1763_ = v___y_1745_;
v___y_1764_ = v___y_1746_;
goto v___jp_1759_;
}
}
}
else
{
lean_object* v_code_1817_; lean_object* v___x_1818_; 
v_code_1817_ = lean_ctor_get(v_v_1750_, 0);
lean_inc_ref(v_code_1817_);
v___x_1818_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1817_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; lean_object* v___x_1820_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1819_);
lean_dec_ref_known(v___x_1818_, 1);
v___x_1820_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_1750_, v_a_1819_);
v_a_1754_ = v___x_1820_;
goto v___jp_1753_;
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
lean_dec_ref_known(v_v_1750_, 1);
lean_dec_ref(v_bs_x27_1752_);
lean_dec_ref(v___x_1737_);
v_a_1821_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1818_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1818_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
}
v___jp_1753_:
{
size_t v___x_1755_; size_t v___x_1756_; lean_object* v___x_1757_; 
v___x_1755_ = ((size_t)1ULL);
v___x_1756_ = lean_usize_add(v_i_1740_, v___x_1755_);
v___x_1757_ = lean_array_uset(v_bs_x27_1752_, v_i_1740_, v_a_1754_);
v_i_1740_ = v___x_1756_;
v_bs_1741_ = v___x_1757_;
goto _start;
}
v___jp_1759_:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1765_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__2);
v___x_1766_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(v___x_1765_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_a_1767_);
lean_dec_ref_known(v___x_1766_, 1);
v_a_1754_ = v_a_1767_;
goto v___jp_1753_;
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1775_; 
lean_dec_ref(v_bs_x27_1752_);
lean_dec_ref(v___x_1737_);
v_a_1768_ = lean_ctor_get(v___x_1766_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1770_ = v___x_1766_;
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1766_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1773_; 
if (v_isShared_1771_ == 0)
{
v___x_1773_ = v___x_1770_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1768_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1830_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1831_ = lean_unsigned_to_nat(2u);
v___x_1832_ = lean_unsigned_to_nat(291u);
v___x_1833_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0));
v___x_1834_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1835_ = l_mkPanicMessageWithDecl(v___x_1834_, v___x_1833_, v___x_1832_, v___x_1831_, v___x_1830_);
return v___x_1835_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1840_ = lean_box(0);
v___x_1841_ = lean_unsigned_to_nat(2u);
v___x_1842_ = lean_mk_empty_array_with_capacity(v___x_1841_);
v___x_1843_ = lean_array_push(v___x_1842_, v___x_1840_);
return v___x_1843_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1844_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1845_ = lean_unsigned_to_nat(34u);
v___x_1846_ = lean_unsigned_to_nat(292u);
v___x_1847_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0));
v___x_1848_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1849_ = l_mkPanicMessageWithDecl(v___x_1848_, v___x_1847_, v___x_1846_, v___x_1845_, v___x_1844_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg(lean_object* v_c_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_){
_start:
{
lean_object* v_discr_1857_; lean_object* v_alts_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1927_; 
v_discr_1857_ = lean_ctor_get(v_c_1850_, 2);
v_alts_1858_ = lean_ctor_get(v_c_1850_, 3);
v_isSharedCheck_1927_ = !lean_is_exclusive(v_c_1850_);
if (v_isSharedCheck_1927_ == 0)
{
lean_object* v_unused_1928_; lean_object* v_unused_1929_; 
v_unused_1928_ = lean_ctor_get(v_c_1850_, 1);
lean_dec(v_unused_1928_);
v_unused_1929_ = lean_ctor_get(v_c_1850_, 0);
lean_dec(v_unused_1929_);
v___x_1860_ = v_c_1850_;
v_isShared_1861_ = v_isSharedCheck_1927_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_alts_1858_);
lean_inc(v_discr_1857_);
lean_dec(v_c_1850_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1927_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; uint8_t v___x_1864_; 
v___x_1862_ = lean_array_get_size(v_alts_1858_);
v___x_1863_ = lean_unsigned_to_nat(1u);
v___x_1864_ = lean_nat_dec_eq(v___x_1862_, v___x_1863_);
if (v___x_1864_ == 0)
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
lean_del_object(v___x_1860_);
lean_dec_ref(v_alts_1858_);
lean_dec(v_discr_1857_);
v___x_1865_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1);
v___x_1866_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1865_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_);
return v___x_1866_;
}
else
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1867_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_1868_ = lean_unsigned_to_nat(0u);
v___x_1869_ = lean_array_get(v___x_1867_, v_alts_1858_, v___x_1868_);
lean_dec_ref(v_alts_1858_);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v_params_1870_; lean_object* v_code_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1923_; 
v_params_1870_ = lean_ctor_get(v___x_1869_, 1);
v_code_1871_ = lean_ctor_get(v___x_1869_, 2);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1923_ == 0)
{
lean_object* v_unused_1924_; 
v_unused_1924_ = lean_ctor_get(v___x_1869_, 0);
lean_dec(v_unused_1924_);
v___x_1873_ = v___x_1869_;
v_isShared_1874_ = v_isSharedCheck_1923_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_code_1871_);
lean_inc(v_params_1870_);
lean_dec(v___x_1869_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1923_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
uint8_t v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1875_ = 0;
v___x_1876_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_1877_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1875_, v_params_1870_, v_a_1853_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v___x_1878_; lean_object* v_fvarId_1879_; lean_object* v_binderName_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1888_; 
lean_dec_ref_known(v___x_1877_, 1);
v___x_1878_ = lean_array_get(v___x_1876_, v_params_1870_, v___x_1868_);
lean_dec_ref(v_params_1870_);
v_fvarId_1879_ = lean_ctor_get(v___x_1878_, 0);
lean_inc(v_fvarId_1879_);
v_binderName_1880_ = lean_ctor_get(v___x_1878_, 1);
lean_inc(v_binderName_1880_);
lean_dec(v___x_1878_);
v___x_1881_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_1882_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4));
v___x_1883_ = lean_box(0);
v___x_1884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1884_, 0, v_discr_1857_);
v___x_1885_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_1886_ = lean_array_push(v___x_1885_, v___x_1884_);
if (v_isShared_1874_ == 0)
{
lean_ctor_set_tag(v___x_1873_, 3);
lean_ctor_set(v___x_1873_, 2, v___x_1886_);
lean_ctor_set(v___x_1873_, 1, v___x_1883_);
lean_ctor_set(v___x_1873_, 0, v___x_1882_);
v___x_1888_ = v___x_1873_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1882_);
lean_ctor_set(v_reuseFailAlloc_1914_, 1, v___x_1883_);
lean_ctor_set(v_reuseFailAlloc_1914_, 2, v___x_1886_);
v___x_1888_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
lean_object* v___x_1890_; 
if (v_isShared_1861_ == 0)
{
lean_ctor_set(v___x_1860_, 3, v___x_1888_);
lean_ctor_set(v___x_1860_, 2, v___x_1881_);
lean_ctor_set(v___x_1860_, 1, v_binderName_1880_);
lean_ctor_set(v___x_1860_, 0, v_fvarId_1879_);
v___x_1890_ = v___x_1860_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_fvarId_1879_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v_binderName_1880_);
lean_ctor_set(v_reuseFailAlloc_1913_, 2, v___x_1881_);
lean_ctor_set(v_reuseFailAlloc_1913_, 3, v___x_1888_);
v___x_1890_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
lean_object* v___x_1891_; lean_object* v_lctx_1892_; lean_object* v_nextIdx_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1912_; 
v___x_1891_ = lean_st_ref_take(v_a_1853_);
v_lctx_1892_ = lean_ctor_get(v___x_1891_, 0);
v_nextIdx_1893_ = lean_ctor_get(v___x_1891_, 1);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1891_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1895_ = v___x_1891_;
v_isShared_1896_ = v_isSharedCheck_1912_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_nextIdx_1893_);
lean_inc(v_lctx_1892_);
lean_dec(v___x_1891_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1912_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1897_; lean_object* v___x_1899_; 
lean_inc_ref(v___x_1890_);
v___x_1897_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1875_, v_lctx_1892_, v___x_1890_);
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 0, v___x_1897_);
v___x_1899_ = v___x_1895_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1897_);
lean_ctor_set(v_reuseFailAlloc_1911_, 1, v_nextIdx_1893_);
v___x_1899_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1900_ = lean_st_ref_put(v_a_1853_, v___x_1899_);
v___x_1901_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1871_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1910_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1904_ = v___x_1901_;
v_isShared_1905_ = v_isSharedCheck_1910_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1901_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1910_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1906_; lean_object* v___x_1908_; 
v___x_1906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1906_, 0, v___x_1890_);
lean_ctor_set(v___x_1906_, 1, v_a_1902_);
if (v_isShared_1905_ == 0)
{
lean_ctor_set(v___x_1904_, 0, v___x_1906_);
v___x_1908_ = v___x_1904_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1906_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
else
{
lean_dec_ref(v___x_1890_);
return v___x_1901_;
}
}
}
}
}
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
lean_del_object(v___x_1873_);
lean_dec_ref(v_code_1871_);
lean_dec_ref(v_params_1870_);
lean_del_object(v___x_1860_);
lean_dec(v_discr_1857_);
v_a_1915_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1877_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1877_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
}
else
{
lean_object* v___x_1925_; lean_object* v___x_1926_; 
lean_dec(v___x_1869_);
lean_del_object(v___x_1860_);
lean_dec(v_discr_1857_);
v___x_1925_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5);
v___x_1926_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1925_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_);
return v___x_1926_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1931_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1932_ = lean_unsigned_to_nat(2u);
v___x_1933_ = lean_unsigned_to_nat(271u);
v___x_1934_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0));
v___x_1935_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1936_ = l_mkPanicMessageWithDecl(v___x_1935_, v___x_1934_, v___x_1933_, v___x_1932_, v___x_1931_);
return v___x_1936_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8(void){
_start:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; 
v___x_1943_ = lean_box(0);
v___x_1944_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7));
v___x_1945_ = l_Lean_Expr_const___override(v___x_1944_, v___x_1943_);
return v___x_1945_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9(void){
_start:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1946_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1947_ = lean_unsigned_to_nat(34u);
v___x_1948_ = lean_unsigned_to_nat(272u);
v___x_1949_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0));
v___x_1950_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1951_ = l_mkPanicMessageWithDecl(v___x_1950_, v___x_1949_, v___x_1948_, v___x_1947_, v___x_1946_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg(lean_object* v_c_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_){
_start:
{
lean_object* v_discr_1959_; lean_object* v_alts_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; uint8_t v___x_1963_; 
v_discr_1959_ = lean_ctor_get(v_c_1952_, 2);
v_alts_1960_ = lean_ctor_get(v_c_1952_, 3);
v___x_1961_ = lean_array_get_size(v_alts_1960_);
v___x_1962_ = lean_unsigned_to_nat(1u);
v___x_1963_ = lean_nat_dec_eq(v___x_1961_, v___x_1962_);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1964_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1);
v___x_1965_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1964_, v_a_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
return v___x_1965_;
}
else
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1966_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_1967_ = lean_unsigned_to_nat(0u);
v___x_1968_ = lean_array_get(v___x_1966_, v_alts_1960_, v___x_1967_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_params_1969_; lean_object* v_code_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_2068_; 
v_params_1969_ = lean_ctor_get(v___x_1968_, 1);
v_code_1970_ = lean_ctor_get(v___x_1968_, 2);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2068_ == 0)
{
lean_object* v_unused_2069_; 
v_unused_2069_ = lean_ctor_get(v___x_1968_, 0);
lean_dec(v_unused_2069_);
v___x_1972_ = v___x_1968_;
v_isShared_1973_ = v_isSharedCheck_2068_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_code_1970_);
lean_inc(v_params_1969_);
lean_dec(v___x_1968_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_2068_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
uint8_t v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1974_ = 0;
v___x_1975_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_1976_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1974_, v_params_1969_, v_a_1955_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1984_; 
lean_dec_ref_known(v___x_1976_, 1);
v___x_1977_ = lean_array_get(v___x_1975_, v_params_1969_, v___x_1967_);
lean_dec_ref(v_params_1969_);
v___x_1978_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3));
v___x_1979_ = lean_box(0);
lean_inc(v_discr_1959_);
v___x_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1980_, 0, v_discr_1959_);
v___x_1981_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_1982_ = lean_array_push(v___x_1981_, v___x_1980_);
if (v_isShared_1973_ == 0)
{
lean_ctor_set_tag(v___x_1972_, 3);
lean_ctor_set(v___x_1972_, 2, v___x_1982_);
lean_ctor_set(v___x_1972_, 1, v___x_1979_);
lean_ctor_set(v___x_1972_, 0, v___x_1978_);
v___x_1984_ = v___x_1972_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v___x_1978_);
lean_ctor_set(v_reuseFailAlloc_2059_, 1, v___x_1979_);
lean_ctor_set(v_reuseFailAlloc_2059_, 2, v___x_1982_);
v___x_1984_ = v_reuseFailAlloc_2059_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1985_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5));
v___x_1986_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_1985_, v_a_1955_);
if (lean_obj_tag(v___x_1986_) == 0)
{
lean_object* v_a_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v_a_1987_ = lean_ctor_get(v___x_1986_, 0);
lean_inc(v_a_1987_);
lean_dec_ref_known(v___x_1986_, 1);
v___x_1988_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_1989_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_1974_, v_a_1987_, v___x_1988_, v___x_1984_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v___x_1991_; uint8_t v___x_1992_; lean_object* v___x_1993_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 1);
v___x_1991_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8);
v___x_1992_ = 0;
v___x_1993_ = l_Lean_Compiler_LCNF_mkAuxParam(v___x_1974_, v___x_1991_, v___x_1992_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v_a_1994_; lean_object* v___x_1995_; 
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
lean_inc(v_a_1994_);
lean_dec_ref_known(v___x_1993_, 1);
v___x_1995_ = l_Lean_mkArrow(v___x_1991_, v___x_1988_, v_a_1956_, v_a_1957_);
if (lean_obj_tag(v___x_1995_) == 0)
{
lean_object* v_a_1996_; lean_object* v_fvarId_1997_; lean_object* v_binderName_1998_; lean_object* v_fvarId_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v_lctx_2006_; lean_object* v_nextIdx_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2026_; 
v_a_1996_ = lean_ctor_get(v___x_1995_, 0);
lean_inc(v_a_1996_);
lean_dec_ref_known(v___x_1995_, 1);
v_fvarId_1997_ = lean_ctor_get(v___x_1977_, 0);
lean_inc(v_fvarId_1997_);
v_binderName_1998_ = lean_ctor_get(v___x_1977_, 1);
lean_inc(v_binderName_1998_);
lean_dec(v___x_1977_);
v_fvarId_1999_ = lean_ctor_get(v_a_1990_, 0);
v___x_2000_ = lean_mk_empty_array_with_capacity(v___x_1962_);
v___x_2001_ = lean_array_push(v___x_2000_, v_a_1994_);
lean_inc(v_fvarId_1999_);
v___x_2002_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2002_, 0, v_fvarId_1999_);
v___x_2003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2003_, 0, v_a_1990_);
lean_ctor_set(v___x_2003_, 1, v___x_2002_);
v___x_2004_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2004_, 0, v_fvarId_1997_);
lean_ctor_set(v___x_2004_, 1, v_binderName_1998_);
lean_ctor_set(v___x_2004_, 2, v___x_2001_);
lean_ctor_set(v___x_2004_, 3, v_a_1996_);
lean_ctor_set(v___x_2004_, 4, v___x_2003_);
v___x_2005_ = lean_st_ref_take(v_a_1955_);
v_lctx_2006_ = lean_ctor_get(v___x_2005_, 0);
v_nextIdx_2007_ = lean_ctor_get(v___x_2005_, 1);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2009_ = v___x_2005_;
v_isShared_2010_ = v_isSharedCheck_2026_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_nextIdx_2007_);
lean_inc(v_lctx_2006_);
lean_dec(v___x_2005_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2026_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2011_; lean_object* v___x_2013_; 
lean_inc_ref(v___x_2004_);
v___x_2011_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v___x_1974_, v_lctx_2006_, v___x_2004_);
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 0, v___x_2011_);
v___x_2013_ = v___x_2009_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2011_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v_nextIdx_2007_);
v___x_2013_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2014_ = lean_st_ref_put(v_a_1955_, v___x_2013_);
v___x_2015_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1970_, v_a_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2024_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2018_ = v___x_2015_;
v_isShared_2019_ = v_isSharedCheck_2024_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_2015_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2024_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2020_; lean_object* v___x_2022_; 
v___x_2020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2004_);
lean_ctor_set(v___x_2020_, 1, v_a_2016_);
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 0, v___x_2020_);
v___x_2022_ = v___x_2018_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v___x_2020_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
else
{
lean_dec_ref_known(v___x_2004_, 5);
return v___x_2015_;
}
}
}
}
else
{
lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2034_; 
lean_dec(v_a_1994_);
lean_dec(v_a_1990_);
lean_dec(v___x_1977_);
lean_dec_ref(v_code_1970_);
v_a_2027_ = lean_ctor_get(v___x_1995_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2029_ = v___x_1995_;
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_dec(v___x_1995_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2032_; 
if (v_isShared_2030_ == 0)
{
v___x_2032_ = v___x_2029_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_a_2027_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
}
}
else
{
lean_object* v_a_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2042_; 
lean_dec(v_a_1990_);
lean_dec(v___x_1977_);
lean_dec_ref(v_code_1970_);
v_a_2035_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2037_ = v___x_1993_;
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_a_2035_);
lean_dec(v___x_1993_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v___x_2040_; 
if (v_isShared_2038_ == 0)
{
v___x_2040_ = v___x_2037_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2035_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
}
else
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
lean_dec(v___x_1977_);
lean_dec_ref(v_code_1970_);
v_a_2043_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_1989_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_1989_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
lean_dec_ref(v___x_1984_);
lean_dec(v___x_1977_);
lean_dec_ref(v_code_1970_);
v_a_2051_ = lean_ctor_get(v___x_1986_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_1986_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_1986_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
}
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
lean_del_object(v___x_1972_);
lean_dec_ref(v_code_1970_);
lean_dec_ref(v_params_1969_);
v_a_2060_ = lean_ctor_get(v___x_1976_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_1976_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_1976_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_1976_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
}
else
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
lean_dec(v___x_1968_);
v___x_2070_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9);
v___x_2071_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2070_, v_a_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
return v___x_2071_;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2073_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2074_ = lean_unsigned_to_nat(2u);
v___x_2075_ = lean_unsigned_to_nat(260u);
v___x_2076_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0));
v___x_2077_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2078_ = l_mkPanicMessageWithDecl(v___x_2077_, v___x_2076_, v___x_2075_, v___x_2074_, v___x_2073_);
return v___x_2078_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2083_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2084_ = lean_unsigned_to_nat(34u);
v___x_2085_ = lean_unsigned_to_nat(261u);
v___x_2086_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0));
v___x_2087_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2088_ = l_mkPanicMessageWithDecl(v___x_2087_, v___x_2086_, v___x_2085_, v___x_2084_, v___x_2083_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(lean_object* v_c_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_){
_start:
{
lean_object* v_discr_2096_; lean_object* v_alts_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2166_; 
v_discr_2096_ = lean_ctor_get(v_c_2089_, 2);
v_alts_2097_ = lean_ctor_get(v_c_2089_, 3);
v_isSharedCheck_2166_ = !lean_is_exclusive(v_c_2089_);
if (v_isSharedCheck_2166_ == 0)
{
lean_object* v_unused_2167_; lean_object* v_unused_2168_; 
v_unused_2167_ = lean_ctor_get(v_c_2089_, 1);
lean_dec(v_unused_2167_);
v_unused_2168_ = lean_ctor_get(v_c_2089_, 0);
lean_dec(v_unused_2168_);
v___x_2099_ = v_c_2089_;
v_isShared_2100_ = v_isSharedCheck_2166_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_alts_2097_);
lean_inc(v_discr_2096_);
lean_dec(v_c_2089_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2166_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; uint8_t v___x_2103_; 
v___x_2101_ = lean_array_get_size(v_alts_2097_);
v___x_2102_ = lean_unsigned_to_nat(1u);
v___x_2103_ = lean_nat_dec_eq(v___x_2101_, v___x_2102_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; lean_object* v___x_2105_; 
lean_del_object(v___x_2099_);
lean_dec_ref(v_alts_2097_);
lean_dec(v_discr_2096_);
v___x_2104_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1);
v___x_2105_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2104_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_);
return v___x_2105_;
}
else
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2106_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_2107_ = lean_unsigned_to_nat(0u);
v___x_2108_ = lean_array_get(v___x_2106_, v_alts_2097_, v___x_2107_);
lean_dec_ref(v_alts_2097_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_params_2109_; lean_object* v_code_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2162_; 
v_params_2109_ = lean_ctor_get(v___x_2108_, 1);
v_code_2110_ = lean_ctor_get(v___x_2108_, 2);
v_isSharedCheck_2162_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2162_ == 0)
{
lean_object* v_unused_2163_; 
v_unused_2163_ = lean_ctor_get(v___x_2108_, 0);
lean_dec(v_unused_2163_);
v___x_2112_ = v___x_2108_;
v_isShared_2113_ = v_isSharedCheck_2162_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_code_2110_);
lean_inc(v_params_2109_);
lean_dec(v___x_2108_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2162_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
uint8_t v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2114_ = 0;
v___x_2115_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2116_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2114_, v_params_2109_, v_a_2092_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v___x_2117_; lean_object* v_fvarId_2118_; lean_object* v_binderName_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2127_; 
lean_dec_ref_known(v___x_2116_, 1);
v___x_2117_ = lean_array_get(v___x_2115_, v_params_2109_, v___x_2107_);
lean_dec_ref(v_params_2109_);
v_fvarId_2118_ = lean_ctor_get(v___x_2117_, 0);
lean_inc(v_fvarId_2118_);
v_binderName_2119_ = lean_ctor_get(v___x_2117_, 1);
lean_inc(v_binderName_2119_);
lean_dec(v___x_2117_);
v___x_2120_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2121_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4));
v___x_2122_ = lean_box(0);
v___x_2123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2123_, 0, v_discr_2096_);
v___x_2124_ = lean_mk_empty_array_with_capacity(v___x_2102_);
v___x_2125_ = lean_array_push(v___x_2124_, v___x_2123_);
if (v_isShared_2113_ == 0)
{
lean_ctor_set_tag(v___x_2112_, 3);
lean_ctor_set(v___x_2112_, 2, v___x_2125_);
lean_ctor_set(v___x_2112_, 1, v___x_2122_);
lean_ctor_set(v___x_2112_, 0, v___x_2121_);
v___x_2127_ = v___x_2112_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v___x_2121_);
lean_ctor_set(v_reuseFailAlloc_2153_, 1, v___x_2122_);
lean_ctor_set(v_reuseFailAlloc_2153_, 2, v___x_2125_);
v___x_2127_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
lean_object* v___x_2129_; 
if (v_isShared_2100_ == 0)
{
lean_ctor_set(v___x_2099_, 3, v___x_2127_);
lean_ctor_set(v___x_2099_, 2, v___x_2120_);
lean_ctor_set(v___x_2099_, 1, v_binderName_2119_);
lean_ctor_set(v___x_2099_, 0, v_fvarId_2118_);
v___x_2129_ = v___x_2099_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_fvarId_2118_);
lean_ctor_set(v_reuseFailAlloc_2152_, 1, v_binderName_2119_);
lean_ctor_set(v_reuseFailAlloc_2152_, 2, v___x_2120_);
lean_ctor_set(v_reuseFailAlloc_2152_, 3, v___x_2127_);
v___x_2129_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
lean_object* v___x_2130_; lean_object* v_lctx_2131_; lean_object* v_nextIdx_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2151_; 
v___x_2130_ = lean_st_ref_take(v_a_2092_);
v_lctx_2131_ = lean_ctor_get(v___x_2130_, 0);
v_nextIdx_2132_ = lean_ctor_get(v___x_2130_, 1);
v_isSharedCheck_2151_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2151_ == 0)
{
v___x_2134_ = v___x_2130_;
v_isShared_2135_ = v_isSharedCheck_2151_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_nextIdx_2132_);
lean_inc(v_lctx_2131_);
lean_dec(v___x_2130_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2151_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2136_; lean_object* v___x_2138_; 
lean_inc_ref(v___x_2129_);
v___x_2136_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2114_, v_lctx_2131_, v___x_2129_);
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 0, v___x_2136_);
v___x_2138_ = v___x_2134_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v___x_2136_);
lean_ctor_set(v_reuseFailAlloc_2150_, 1, v_nextIdx_2132_);
v___x_2138_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2139_ = lean_st_ref_put(v_a_2092_, v___x_2138_);
v___x_2140_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2110_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2149_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2140_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2143_ = v___x_2140_;
v_isShared_2144_ = v_isSharedCheck_2149_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_a_2141_);
lean_dec(v___x_2140_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2149_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v___x_2145_; lean_object* v___x_2147_; 
v___x_2145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2129_);
lean_ctor_set(v___x_2145_, 1, v_a_2141_);
if (v_isShared_2144_ == 0)
{
lean_ctor_set(v___x_2143_, 0, v___x_2145_);
v___x_2147_ = v___x_2143_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v___x_2145_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
}
else
{
lean_dec_ref(v___x_2129_);
return v___x_2140_;
}
}
}
}
}
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_del_object(v___x_2112_);
lean_dec_ref(v_code_2110_);
lean_dec_ref(v_params_2109_);
lean_del_object(v___x_2099_);
lean_dec(v_discr_2096_);
v_a_2154_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2116_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2116_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
}
}
else
{
lean_object* v___x_2164_; lean_object* v___x_2165_; 
lean_dec(v___x_2108_);
lean_del_object(v___x_2099_);
lean_dec(v_discr_2096_);
v___x_2164_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5);
v___x_2165_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2164_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_);
return v___x_2165_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2170_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2171_ = lean_unsigned_to_nat(2u);
v___x_2172_ = lean_unsigned_to_nat(249u);
v___x_2173_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0));
v___x_2174_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2175_ = l_mkPanicMessageWithDecl(v___x_2174_, v___x_2173_, v___x_2172_, v___x_2171_, v___x_2170_);
return v___x_2175_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2179_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2180_ = lean_unsigned_to_nat(34u);
v___x_2181_ = lean_unsigned_to_nat(250u);
v___x_2182_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0));
v___x_2183_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2184_ = l_mkPanicMessageWithDecl(v___x_2183_, v___x_2182_, v___x_2181_, v___x_2180_, v___x_2179_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg(lean_object* v_c_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_){
_start:
{
lean_object* v_discr_2192_; lean_object* v_alts_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2262_; 
v_discr_2192_ = lean_ctor_get(v_c_2185_, 2);
v_alts_2193_ = lean_ctor_get(v_c_2185_, 3);
v_isSharedCheck_2262_ = !lean_is_exclusive(v_c_2185_);
if (v_isSharedCheck_2262_ == 0)
{
lean_object* v_unused_2263_; lean_object* v_unused_2264_; 
v_unused_2263_ = lean_ctor_get(v_c_2185_, 1);
lean_dec(v_unused_2263_);
v_unused_2264_ = lean_ctor_get(v_c_2185_, 0);
lean_dec(v_unused_2264_);
v___x_2195_ = v_c_2185_;
v_isShared_2196_ = v_isSharedCheck_2262_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_alts_2193_);
lean_inc(v_discr_2192_);
lean_dec(v_c_2185_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2262_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; uint8_t v___x_2199_; 
v___x_2197_ = lean_array_get_size(v_alts_2193_);
v___x_2198_ = lean_unsigned_to_nat(1u);
v___x_2199_ = lean_nat_dec_eq(v___x_2197_, v___x_2198_);
if (v___x_2199_ == 0)
{
lean_object* v___x_2200_; lean_object* v___x_2201_; 
lean_del_object(v___x_2195_);
lean_dec_ref(v_alts_2193_);
lean_dec(v_discr_2192_);
v___x_2200_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1);
v___x_2201_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2200_, v_a_2186_, v_a_2187_, v_a_2188_, v_a_2189_, v_a_2190_);
return v___x_2201_;
}
else
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2202_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_2203_ = lean_unsigned_to_nat(0u);
v___x_2204_ = lean_array_get(v___x_2202_, v_alts_2193_, v___x_2203_);
lean_dec_ref(v_alts_2193_);
if (lean_obj_tag(v___x_2204_) == 0)
{
lean_object* v_params_2205_; lean_object* v_code_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2258_; 
v_params_2205_ = lean_ctor_get(v___x_2204_, 1);
v_code_2206_ = lean_ctor_get(v___x_2204_, 2);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2204_);
if (v_isSharedCheck_2258_ == 0)
{
lean_object* v_unused_2259_; 
v_unused_2259_ = lean_ctor_get(v___x_2204_, 0);
lean_dec(v_unused_2259_);
v___x_2208_ = v___x_2204_;
v_isShared_2209_ = v_isSharedCheck_2258_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_code_2206_);
lean_inc(v_params_2205_);
lean_dec(v___x_2204_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2258_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
uint8_t v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2210_ = 0;
v___x_2211_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2212_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2210_, v_params_2205_, v_a_2188_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v___x_2213_; lean_object* v_fvarId_2214_; lean_object* v_binderName_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2223_; 
lean_dec_ref_known(v___x_2212_, 1);
v___x_2213_ = lean_array_get(v___x_2211_, v_params_2205_, v___x_2203_);
lean_dec_ref(v_params_2205_);
v_fvarId_2214_ = lean_ctor_get(v___x_2213_, 0);
lean_inc(v_fvarId_2214_);
v_binderName_2215_ = lean_ctor_get(v___x_2213_, 1);
lean_inc(v_binderName_2215_);
lean_dec(v___x_2213_);
v___x_2216_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2217_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3));
v___x_2218_ = lean_box(0);
v___x_2219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2219_, 0, v_discr_2192_);
v___x_2220_ = lean_mk_empty_array_with_capacity(v___x_2198_);
v___x_2221_ = lean_array_push(v___x_2220_, v___x_2219_);
if (v_isShared_2209_ == 0)
{
lean_ctor_set_tag(v___x_2208_, 3);
lean_ctor_set(v___x_2208_, 2, v___x_2221_);
lean_ctor_set(v___x_2208_, 1, v___x_2218_);
lean_ctor_set(v___x_2208_, 0, v___x_2217_);
v___x_2223_ = v___x_2208_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v___x_2217_);
lean_ctor_set(v_reuseFailAlloc_2249_, 1, v___x_2218_);
lean_ctor_set(v_reuseFailAlloc_2249_, 2, v___x_2221_);
v___x_2223_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
lean_object* v___x_2225_; 
if (v_isShared_2196_ == 0)
{
lean_ctor_set(v___x_2195_, 3, v___x_2223_);
lean_ctor_set(v___x_2195_, 2, v___x_2216_);
lean_ctor_set(v___x_2195_, 1, v_binderName_2215_);
lean_ctor_set(v___x_2195_, 0, v_fvarId_2214_);
v___x_2225_ = v___x_2195_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v_fvarId_2214_);
lean_ctor_set(v_reuseFailAlloc_2248_, 1, v_binderName_2215_);
lean_ctor_set(v_reuseFailAlloc_2248_, 2, v___x_2216_);
lean_ctor_set(v_reuseFailAlloc_2248_, 3, v___x_2223_);
v___x_2225_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
lean_object* v___x_2226_; lean_object* v_lctx_2227_; lean_object* v_nextIdx_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2247_; 
v___x_2226_ = lean_st_ref_take(v_a_2188_);
v_lctx_2227_ = lean_ctor_get(v___x_2226_, 0);
v_nextIdx_2228_ = lean_ctor_get(v___x_2226_, 1);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2226_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2230_ = v___x_2226_;
v_isShared_2231_ = v_isSharedCheck_2247_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_nextIdx_2228_);
lean_inc(v_lctx_2227_);
lean_dec(v___x_2226_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2247_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2232_; lean_object* v___x_2234_; 
lean_inc_ref(v___x_2225_);
v___x_2232_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2210_, v_lctx_2227_, v___x_2225_);
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 0, v___x_2232_);
v___x_2234_ = v___x_2230_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v___x_2232_);
lean_ctor_set(v_reuseFailAlloc_2246_, 1, v_nextIdx_2228_);
v___x_2234_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = lean_st_ref_put(v_a_2188_, v___x_2234_);
v___x_2236_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2206_, v_a_2186_, v_a_2187_, v_a_2188_, v_a_2189_, v_a_2190_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v_a_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2245_; 
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2239_ = v___x_2236_;
v_isShared_2240_ = v_isSharedCheck_2245_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_a_2237_);
lean_dec(v___x_2236_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2245_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v___x_2241_; lean_object* v___x_2243_; 
v___x_2241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2225_);
lean_ctor_set(v___x_2241_, 1, v_a_2237_);
if (v_isShared_2240_ == 0)
{
lean_ctor_set(v___x_2239_, 0, v___x_2241_);
v___x_2243_ = v___x_2239_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v___x_2241_);
v___x_2243_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
return v___x_2243_;
}
}
}
else
{
lean_dec_ref(v___x_2225_);
return v___x_2236_;
}
}
}
}
}
}
else
{
lean_object* v_a_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2257_; 
lean_del_object(v___x_2208_);
lean_dec_ref(v_code_2206_);
lean_dec_ref(v_params_2205_);
lean_del_object(v___x_2195_);
lean_dec(v_discr_2192_);
v_a_2250_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2257_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2252_ = v___x_2212_;
v_isShared_2253_ = v_isSharedCheck_2257_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_a_2250_);
lean_dec(v___x_2212_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2257_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___x_2255_; 
if (v_isShared_2253_ == 0)
{
v___x_2255_ = v___x_2252_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v_a_2250_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
}
}
else
{
lean_object* v___x_2260_; lean_object* v___x_2261_; 
lean_dec(v___x_2204_);
lean_del_object(v___x_2195_);
lean_dec(v_discr_2192_);
v___x_2260_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4);
v___x_2261_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2260_, v_a_2186_, v_a_2187_, v_a_2188_, v_a_2189_, v_a_2190_);
return v___x_2261_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2266_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2267_ = lean_unsigned_to_nat(2u);
v___x_2268_ = lean_unsigned_to_nat(238u);
v___x_2269_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0));
v___x_2270_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2271_ = l_mkPanicMessageWithDecl(v___x_2270_, v___x_2269_, v___x_2268_, v___x_2267_, v___x_2266_);
return v___x_2271_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2276_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2277_ = lean_unsigned_to_nat(34u);
v___x_2278_ = lean_unsigned_to_nat(239u);
v___x_2279_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0));
v___x_2280_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2281_ = l_mkPanicMessageWithDecl(v___x_2280_, v___x_2279_, v___x_2278_, v___x_2277_, v___x_2276_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg(lean_object* v_c_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_){
_start:
{
lean_object* v_discr_2289_; lean_object* v_alts_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2359_; 
v_discr_2289_ = lean_ctor_get(v_c_2282_, 2);
v_alts_2290_ = lean_ctor_get(v_c_2282_, 3);
v_isSharedCheck_2359_ = !lean_is_exclusive(v_c_2282_);
if (v_isSharedCheck_2359_ == 0)
{
lean_object* v_unused_2360_; lean_object* v_unused_2361_; 
v_unused_2360_ = lean_ctor_get(v_c_2282_, 1);
lean_dec(v_unused_2360_);
v_unused_2361_ = lean_ctor_get(v_c_2282_, 0);
lean_dec(v_unused_2361_);
v___x_2292_ = v_c_2282_;
v_isShared_2293_ = v_isSharedCheck_2359_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_alts_2290_);
lean_inc(v_discr_2289_);
lean_dec(v_c_2282_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2359_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; 
v___x_2294_ = lean_array_get_size(v_alts_2290_);
v___x_2295_ = lean_unsigned_to_nat(1u);
v___x_2296_ = lean_nat_dec_eq(v___x_2294_, v___x_2295_);
if (v___x_2296_ == 0)
{
lean_object* v___x_2297_; lean_object* v___x_2298_; 
lean_del_object(v___x_2292_);
lean_dec_ref(v_alts_2290_);
lean_dec(v_discr_2289_);
v___x_2297_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1);
v___x_2298_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2297_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_, v_a_2287_);
return v___x_2298_;
}
else
{
lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2299_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_2300_ = lean_unsigned_to_nat(0u);
v___x_2301_ = lean_array_get(v___x_2299_, v_alts_2290_, v___x_2300_);
lean_dec_ref(v_alts_2290_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_object* v_params_2302_; lean_object* v_code_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2355_; 
v_params_2302_ = lean_ctor_get(v___x_2301_, 1);
v_code_2303_ = lean_ctor_get(v___x_2301_, 2);
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2355_ == 0)
{
lean_object* v_unused_2356_; 
v_unused_2356_ = lean_ctor_get(v___x_2301_, 0);
lean_dec(v_unused_2356_);
v___x_2305_ = v___x_2301_;
v_isShared_2306_ = v_isSharedCheck_2355_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_code_2303_);
lean_inc(v_params_2302_);
lean_dec(v___x_2301_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2355_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
uint8_t v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2307_ = 0;
v___x_2308_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2309_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2307_, v_params_2302_, v_a_2285_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v___x_2310_; lean_object* v_fvarId_2311_; lean_object* v_binderName_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2320_; 
lean_dec_ref_known(v___x_2309_, 1);
v___x_2310_ = lean_array_get(v___x_2308_, v_params_2302_, v___x_2300_);
lean_dec_ref(v_params_2302_);
v_fvarId_2311_ = lean_ctor_get(v___x_2310_, 0);
lean_inc(v_fvarId_2311_);
v_binderName_2312_ = lean_ctor_get(v___x_2310_, 1);
lean_inc(v_binderName_2312_);
lean_dec(v___x_2310_);
v___x_2313_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2314_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4));
v___x_2315_ = lean_box(0);
v___x_2316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2316_, 0, v_discr_2289_);
v___x_2317_ = lean_mk_empty_array_with_capacity(v___x_2295_);
v___x_2318_ = lean_array_push(v___x_2317_, v___x_2316_);
if (v_isShared_2306_ == 0)
{
lean_ctor_set_tag(v___x_2305_, 3);
lean_ctor_set(v___x_2305_, 2, v___x_2318_);
lean_ctor_set(v___x_2305_, 1, v___x_2315_);
lean_ctor_set(v___x_2305_, 0, v___x_2314_);
v___x_2320_ = v___x_2305_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v___x_2314_);
lean_ctor_set(v_reuseFailAlloc_2346_, 1, v___x_2315_);
lean_ctor_set(v_reuseFailAlloc_2346_, 2, v___x_2318_);
v___x_2320_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
lean_object* v___x_2322_; 
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 3, v___x_2320_);
lean_ctor_set(v___x_2292_, 2, v___x_2313_);
lean_ctor_set(v___x_2292_, 1, v_binderName_2312_);
lean_ctor_set(v___x_2292_, 0, v_fvarId_2311_);
v___x_2322_ = v___x_2292_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_fvarId_2311_);
lean_ctor_set(v_reuseFailAlloc_2345_, 1, v_binderName_2312_);
lean_ctor_set(v_reuseFailAlloc_2345_, 2, v___x_2313_);
lean_ctor_set(v_reuseFailAlloc_2345_, 3, v___x_2320_);
v___x_2322_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
lean_object* v___x_2323_; lean_object* v_lctx_2324_; lean_object* v_nextIdx_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2344_; 
v___x_2323_ = lean_st_ref_take(v_a_2285_);
v_lctx_2324_ = lean_ctor_get(v___x_2323_, 0);
v_nextIdx_2325_ = lean_ctor_get(v___x_2323_, 1);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2327_ = v___x_2323_;
v_isShared_2328_ = v_isSharedCheck_2344_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_nextIdx_2325_);
lean_inc(v_lctx_2324_);
lean_dec(v___x_2323_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2344_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2329_; lean_object* v___x_2331_; 
lean_inc_ref(v___x_2322_);
v___x_2329_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2307_, v_lctx_2324_, v___x_2322_);
if (v_isShared_2328_ == 0)
{
lean_ctor_set(v___x_2327_, 0, v___x_2329_);
v___x_2331_ = v___x_2327_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v___x_2329_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v_nextIdx_2325_);
v___x_2331_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2332_ = lean_st_ref_put(v_a_2285_, v___x_2331_);
v___x_2333_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2303_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_, v_a_2287_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_object* v_a_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2342_; 
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2336_ = v___x_2333_;
v_isShared_2337_ = v_isSharedCheck_2342_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_a_2334_);
lean_dec(v___x_2333_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2342_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2338_; lean_object* v___x_2340_; 
v___x_2338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2322_);
lean_ctor_set(v___x_2338_, 1, v_a_2334_);
if (v_isShared_2337_ == 0)
{
lean_ctor_set(v___x_2336_, 0, v___x_2338_);
v___x_2340_ = v___x_2336_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v___x_2338_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
else
{
lean_dec_ref(v___x_2322_);
return v___x_2333_;
}
}
}
}
}
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2354_; 
lean_del_object(v___x_2305_);
lean_dec_ref(v_code_2303_);
lean_dec_ref(v_params_2302_);
lean_del_object(v___x_2292_);
lean_dec(v_discr_2289_);
v_a_2347_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2349_ = v___x_2309_;
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v___x_2309_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
}
}
else
{
lean_object* v___x_2357_; lean_object* v___x_2358_; 
lean_dec(v___x_2301_);
lean_del_object(v___x_2292_);
lean_dec(v_discr_2289_);
v___x_2357_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5);
v___x_2358_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2357_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_, v_a_2287_);
return v___x_2358_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2363_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2364_ = lean_unsigned_to_nat(2u);
v___x_2365_ = lean_unsigned_to_nat(227u);
v___x_2366_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0));
v___x_2367_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2368_ = l_mkPanicMessageWithDecl(v___x_2367_, v___x_2366_, v___x_2365_, v___x_2364_, v___x_2363_);
return v___x_2368_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___x_2373_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2374_ = lean_unsigned_to_nat(34u);
v___x_2375_ = lean_unsigned_to_nat(228u);
v___x_2376_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0));
v___x_2377_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2378_ = l_mkPanicMessageWithDecl(v___x_2377_, v___x_2376_, v___x_2375_, v___x_2374_, v___x_2373_);
return v___x_2378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(lean_object* v_c_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_){
_start:
{
lean_object* v_discr_2386_; lean_object* v_alts_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2456_; 
v_discr_2386_ = lean_ctor_get(v_c_2379_, 2);
v_alts_2387_ = lean_ctor_get(v_c_2379_, 3);
v_isSharedCheck_2456_ = !lean_is_exclusive(v_c_2379_);
if (v_isSharedCheck_2456_ == 0)
{
lean_object* v_unused_2457_; lean_object* v_unused_2458_; 
v_unused_2457_ = lean_ctor_get(v_c_2379_, 1);
lean_dec(v_unused_2457_);
v_unused_2458_ = lean_ctor_get(v_c_2379_, 0);
lean_dec(v_unused_2458_);
v___x_2389_ = v_c_2379_;
v_isShared_2390_ = v_isSharedCheck_2456_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_alts_2387_);
lean_inc(v_discr_2386_);
lean_dec(v_c_2379_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2456_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___x_2391_; lean_object* v___x_2392_; uint8_t v___x_2393_; 
v___x_2391_ = lean_array_get_size(v_alts_2387_);
v___x_2392_ = lean_unsigned_to_nat(1u);
v___x_2393_ = lean_nat_dec_eq(v___x_2391_, v___x_2392_);
if (v___x_2393_ == 0)
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
lean_del_object(v___x_2389_);
lean_dec_ref(v_alts_2387_);
lean_dec(v_discr_2386_);
v___x_2394_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1);
v___x_2395_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2394_, v_a_2380_, v_a_2381_, v_a_2382_, v_a_2383_, v_a_2384_);
return v___x_2395_;
}
else
{
lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2396_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_2397_ = lean_unsigned_to_nat(0u);
v___x_2398_ = lean_array_get(v___x_2396_, v_alts_2387_, v___x_2397_);
lean_dec_ref(v_alts_2387_);
if (lean_obj_tag(v___x_2398_) == 0)
{
lean_object* v_params_2399_; lean_object* v_code_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2452_; 
v_params_2399_ = lean_ctor_get(v___x_2398_, 1);
v_code_2400_ = lean_ctor_get(v___x_2398_, 2);
v_isSharedCheck_2452_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2452_ == 0)
{
lean_object* v_unused_2453_; 
v_unused_2453_ = lean_ctor_get(v___x_2398_, 0);
lean_dec(v_unused_2453_);
v___x_2402_ = v___x_2398_;
v_isShared_2403_ = v_isSharedCheck_2452_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_code_2400_);
lean_inc(v_params_2399_);
lean_dec(v___x_2398_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2452_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
uint8_t v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; 
v___x_2404_ = 0;
v___x_2405_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2406_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2404_, v_params_2399_, v_a_2382_);
if (lean_obj_tag(v___x_2406_) == 0)
{
lean_object* v___x_2407_; lean_object* v_fvarId_2408_; lean_object* v_binderName_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2417_; 
lean_dec_ref_known(v___x_2406_, 1);
v___x_2407_ = lean_array_get(v___x_2405_, v_params_2399_, v___x_2397_);
lean_dec_ref(v_params_2399_);
v_fvarId_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_fvarId_2408_);
v_binderName_2409_ = lean_ctor_get(v___x_2407_, 1);
lean_inc(v_binderName_2409_);
lean_dec(v___x_2407_);
v___x_2410_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2411_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3));
v___x_2412_ = lean_box(0);
v___x_2413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2413_, 0, v_discr_2386_);
v___x_2414_ = lean_mk_empty_array_with_capacity(v___x_2392_);
v___x_2415_ = lean_array_push(v___x_2414_, v___x_2413_);
if (v_isShared_2403_ == 0)
{
lean_ctor_set_tag(v___x_2402_, 3);
lean_ctor_set(v___x_2402_, 2, v___x_2415_);
lean_ctor_set(v___x_2402_, 1, v___x_2412_);
lean_ctor_set(v___x_2402_, 0, v___x_2411_);
v___x_2417_ = v___x_2402_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v___x_2411_);
lean_ctor_set(v_reuseFailAlloc_2443_, 1, v___x_2412_);
lean_ctor_set(v_reuseFailAlloc_2443_, 2, v___x_2415_);
v___x_2417_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
lean_object* v___x_2419_; 
if (v_isShared_2390_ == 0)
{
lean_ctor_set(v___x_2389_, 3, v___x_2417_);
lean_ctor_set(v___x_2389_, 2, v___x_2410_);
lean_ctor_set(v___x_2389_, 1, v_binderName_2409_);
lean_ctor_set(v___x_2389_, 0, v_fvarId_2408_);
v___x_2419_ = v___x_2389_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v_fvarId_2408_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v_binderName_2409_);
lean_ctor_set(v_reuseFailAlloc_2442_, 2, v___x_2410_);
lean_ctor_set(v_reuseFailAlloc_2442_, 3, v___x_2417_);
v___x_2419_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
lean_object* v___x_2420_; lean_object* v_lctx_2421_; lean_object* v_nextIdx_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2441_; 
v___x_2420_ = lean_st_ref_take(v_a_2382_);
v_lctx_2421_ = lean_ctor_get(v___x_2420_, 0);
v_nextIdx_2422_ = lean_ctor_get(v___x_2420_, 1);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2424_ = v___x_2420_;
v_isShared_2425_ = v_isSharedCheck_2441_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_nextIdx_2422_);
lean_inc(v_lctx_2421_);
lean_dec(v___x_2420_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2441_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2426_; lean_object* v___x_2428_; 
lean_inc_ref(v___x_2419_);
v___x_2426_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2404_, v_lctx_2421_, v___x_2419_);
if (v_isShared_2425_ == 0)
{
lean_ctor_set(v___x_2424_, 0, v___x_2426_);
v___x_2428_ = v___x_2424_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v___x_2426_);
lean_ctor_set(v_reuseFailAlloc_2440_, 1, v_nextIdx_2422_);
v___x_2428_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2429_ = lean_st_ref_put(v_a_2382_, v___x_2428_);
v___x_2430_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2400_, v_a_2380_, v_a_2381_, v_a_2382_, v_a_2383_, v_a_2384_);
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2439_; 
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2433_ = v___x_2430_;
v_isShared_2434_ = v_isSharedCheck_2439_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2430_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2439_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2435_; lean_object* v___x_2437_; 
v___x_2435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2419_);
lean_ctor_set(v___x_2435_, 1, v_a_2431_);
if (v_isShared_2434_ == 0)
{
lean_ctor_set(v___x_2433_, 0, v___x_2435_);
v___x_2437_ = v___x_2433_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v___x_2435_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
else
{
lean_dec_ref(v___x_2419_);
return v___x_2430_;
}
}
}
}
}
}
else
{
lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2451_; 
lean_del_object(v___x_2402_);
lean_dec_ref(v_code_2400_);
lean_dec_ref(v_params_2399_);
lean_del_object(v___x_2389_);
lean_dec(v_discr_2386_);
v_a_2444_ = lean_ctor_get(v___x_2406_, 0);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2406_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2446_ = v___x_2406_;
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_dec(v___x_2406_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2449_; 
if (v_isShared_2447_ == 0)
{
v___x_2449_ = v___x_2446_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v_a_2444_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
}
}
else
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
lean_dec(v___x_2398_);
lean_del_object(v___x_2389_);
lean_dec(v_discr_2386_);
v___x_2454_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4);
v___x_2455_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2454_, v_a_2380_, v_a_2381_, v_a_2382_, v_a_2383_, v_a_2384_);
return v___x_2455_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2460_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2461_ = lean_unsigned_to_nat(2u);
v___x_2462_ = lean_unsigned_to_nat(215u);
v___x_2463_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0));
v___x_2464_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2465_ = l_mkPanicMessageWithDecl(v___x_2464_, v___x_2463_, v___x_2462_, v___x_2461_, v___x_2460_);
return v___x_2465_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
v___x_2469_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2470_ = lean_unsigned_to_nat(34u);
v___x_2471_ = lean_unsigned_to_nat(216u);
v___x_2472_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0));
v___x_2473_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2474_ = l_mkPanicMessageWithDecl(v___x_2473_, v___x_2472_, v___x_2471_, v___x_2470_, v___x_2469_);
return v___x_2474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(lean_object* v_c_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_){
_start:
{
lean_object* v_discr_2482_; lean_object* v_alts_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2552_; 
v_discr_2482_ = lean_ctor_get(v_c_2475_, 2);
v_alts_2483_ = lean_ctor_get(v_c_2475_, 3);
v_isSharedCheck_2552_ = !lean_is_exclusive(v_c_2475_);
if (v_isSharedCheck_2552_ == 0)
{
lean_object* v_unused_2553_; lean_object* v_unused_2554_; 
v_unused_2553_ = lean_ctor_get(v_c_2475_, 1);
lean_dec(v_unused_2553_);
v_unused_2554_ = lean_ctor_get(v_c_2475_, 0);
lean_dec(v_unused_2554_);
v___x_2485_ = v_c_2475_;
v_isShared_2486_ = v_isSharedCheck_2552_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_alts_2483_);
lean_inc(v_discr_2482_);
lean_dec(v_c_2475_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2552_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; uint8_t v___x_2489_; 
v___x_2487_ = lean_array_get_size(v_alts_2483_);
v___x_2488_ = lean_unsigned_to_nat(1u);
v___x_2489_ = lean_nat_dec_eq(v___x_2487_, v___x_2488_);
if (v___x_2489_ == 0)
{
lean_object* v___x_2490_; lean_object* v___x_2491_; 
lean_del_object(v___x_2485_);
lean_dec_ref(v_alts_2483_);
lean_dec(v_discr_2482_);
v___x_2490_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1);
v___x_2491_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2490_, v_a_2476_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_);
return v___x_2491_;
}
else
{
lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2492_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_2493_ = lean_unsigned_to_nat(0u);
v___x_2494_ = lean_array_get(v___x_2492_, v_alts_2483_, v___x_2493_);
lean_dec_ref(v_alts_2483_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_params_2495_; lean_object* v_code_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2548_; 
v_params_2495_ = lean_ctor_get(v___x_2494_, 1);
v_code_2496_ = lean_ctor_get(v___x_2494_, 2);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2548_ == 0)
{
lean_object* v_unused_2549_; 
v_unused_2549_ = lean_ctor_get(v___x_2494_, 0);
lean_dec(v_unused_2549_);
v___x_2498_ = v___x_2494_;
v_isShared_2499_ = v_isSharedCheck_2548_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_code_2496_);
lean_inc(v_params_2495_);
lean_dec(v___x_2494_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2548_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
uint8_t v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2500_ = 0;
v___x_2501_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2502_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2500_, v_params_2495_, v_a_2478_);
if (lean_obj_tag(v___x_2502_) == 0)
{
lean_object* v___x_2503_; lean_object* v_fvarId_2504_; lean_object* v_binderName_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2513_; 
lean_dec_ref_known(v___x_2502_, 1);
v___x_2503_ = lean_array_get(v___x_2501_, v_params_2495_, v___x_2493_);
lean_dec_ref(v_params_2495_);
v_fvarId_2504_ = lean_ctor_get(v___x_2503_, 0);
lean_inc(v_fvarId_2504_);
v_binderName_2505_ = lean_ctor_get(v___x_2503_, 1);
lean_inc(v_binderName_2505_);
lean_dec(v___x_2503_);
v___x_2506_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2507_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4));
v___x_2508_ = lean_box(0);
v___x_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_discr_2482_);
v___x_2510_ = lean_mk_empty_array_with_capacity(v___x_2488_);
v___x_2511_ = lean_array_push(v___x_2510_, v___x_2509_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set_tag(v___x_2498_, 3);
lean_ctor_set(v___x_2498_, 2, v___x_2511_);
lean_ctor_set(v___x_2498_, 1, v___x_2508_);
lean_ctor_set(v___x_2498_, 0, v___x_2507_);
v___x_2513_ = v___x_2498_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2507_);
lean_ctor_set(v_reuseFailAlloc_2539_, 1, v___x_2508_);
lean_ctor_set(v_reuseFailAlloc_2539_, 2, v___x_2511_);
v___x_2513_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
lean_object* v___x_2515_; 
if (v_isShared_2486_ == 0)
{
lean_ctor_set(v___x_2485_, 3, v___x_2513_);
lean_ctor_set(v___x_2485_, 2, v___x_2506_);
lean_ctor_set(v___x_2485_, 1, v_binderName_2505_);
lean_ctor_set(v___x_2485_, 0, v_fvarId_2504_);
v___x_2515_ = v___x_2485_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_fvarId_2504_);
lean_ctor_set(v_reuseFailAlloc_2538_, 1, v_binderName_2505_);
lean_ctor_set(v_reuseFailAlloc_2538_, 2, v___x_2506_);
lean_ctor_set(v_reuseFailAlloc_2538_, 3, v___x_2513_);
v___x_2515_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
lean_object* v___x_2516_; lean_object* v_lctx_2517_; lean_object* v_nextIdx_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2537_; 
v___x_2516_ = lean_st_ref_take(v_a_2478_);
v_lctx_2517_ = lean_ctor_get(v___x_2516_, 0);
v_nextIdx_2518_ = lean_ctor_get(v___x_2516_, 1);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2520_ = v___x_2516_;
v_isShared_2521_ = v_isSharedCheck_2537_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_nextIdx_2518_);
lean_inc(v_lctx_2517_);
lean_dec(v___x_2516_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2537_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2522_; lean_object* v___x_2524_; 
lean_inc_ref(v___x_2515_);
v___x_2522_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2500_, v_lctx_2517_, v___x_2515_);
if (v_isShared_2521_ == 0)
{
lean_ctor_set(v___x_2520_, 0, v___x_2522_);
v___x_2524_ = v___x_2520_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v___x_2522_);
lean_ctor_set(v_reuseFailAlloc_2536_, 1, v_nextIdx_2518_);
v___x_2524_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2525_ = lean_st_ref_put(v_a_2478_, v___x_2524_);
v___x_2526_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2496_, v_a_2476_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_);
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_object* v_a_2527_; lean_object* v___x_2529_; uint8_t v_isShared_2530_; uint8_t v_isSharedCheck_2535_; 
v_a_2527_ = lean_ctor_get(v___x_2526_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2526_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2529_ = v___x_2526_;
v_isShared_2530_ = v_isSharedCheck_2535_;
goto v_resetjp_2528_;
}
else
{
lean_inc(v_a_2527_);
lean_dec(v___x_2526_);
v___x_2529_ = lean_box(0);
v_isShared_2530_ = v_isSharedCheck_2535_;
goto v_resetjp_2528_;
}
v_resetjp_2528_:
{
lean_object* v___x_2531_; lean_object* v___x_2533_; 
v___x_2531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2515_);
lean_ctor_set(v___x_2531_, 1, v_a_2527_);
if (v_isShared_2530_ == 0)
{
lean_ctor_set(v___x_2529_, 0, v___x_2531_);
v___x_2533_ = v___x_2529_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v___x_2531_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
else
{
lean_dec_ref(v___x_2515_);
return v___x_2526_;
}
}
}
}
}
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
lean_del_object(v___x_2498_);
lean_dec_ref(v_code_2496_);
lean_dec_ref(v_params_2495_);
lean_del_object(v___x_2485_);
lean_dec(v_discr_2482_);
v_a_2540_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2502_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2502_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
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
lean_object* v___x_2550_; lean_object* v___x_2551_; 
lean_dec(v___x_2494_);
lean_del_object(v___x_2485_);
lean_dec(v_discr_2482_);
v___x_2550_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5);
v___x_2551_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2550_, v_a_2476_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_);
return v___x_2551_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v___x_2556_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2557_ = lean_unsigned_to_nat(2u);
v___x_2558_ = lean_unsigned_to_nat(203u);
v___x_2559_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0));
v___x_2560_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2561_ = l_mkPanicMessageWithDecl(v___x_2560_, v___x_2559_, v___x_2558_, v___x_2557_, v___x_2556_);
return v___x_2561_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2566_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2567_ = lean_unsigned_to_nat(34u);
v___x_2568_ = lean_unsigned_to_nat(204u);
v___x_2569_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0));
v___x_2570_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2571_ = l_mkPanicMessageWithDecl(v___x_2570_, v___x_2569_, v___x_2568_, v___x_2567_, v___x_2566_);
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg(lean_object* v_c_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_){
_start:
{
lean_object* v_discr_2579_; lean_object* v_alts_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2649_; 
v_discr_2579_ = lean_ctor_get(v_c_2572_, 2);
v_alts_2580_ = lean_ctor_get(v_c_2572_, 3);
v_isSharedCheck_2649_ = !lean_is_exclusive(v_c_2572_);
if (v_isSharedCheck_2649_ == 0)
{
lean_object* v_unused_2650_; lean_object* v_unused_2651_; 
v_unused_2650_ = lean_ctor_get(v_c_2572_, 1);
lean_dec(v_unused_2650_);
v_unused_2651_ = lean_ctor_get(v_c_2572_, 0);
lean_dec(v_unused_2651_);
v___x_2582_ = v_c_2572_;
v_isShared_2583_ = v_isSharedCheck_2649_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_alts_2580_);
lean_inc(v_discr_2579_);
lean_dec(v_c_2572_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2649_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2584_; lean_object* v___x_2585_; uint8_t v___x_2586_; 
v___x_2584_ = lean_array_get_size(v_alts_2580_);
v___x_2585_ = lean_unsigned_to_nat(1u);
v___x_2586_ = lean_nat_dec_eq(v___x_2584_, v___x_2585_);
if (v___x_2586_ == 0)
{
lean_object* v___x_2587_; lean_object* v___x_2588_; 
lean_del_object(v___x_2582_);
lean_dec_ref(v_alts_2580_);
lean_dec(v_discr_2579_);
v___x_2587_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1);
v___x_2588_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2587_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_, v_a_2577_);
return v___x_2588_;
}
else
{
lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2589_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_2590_ = lean_unsigned_to_nat(0u);
v___x_2591_ = lean_array_get(v___x_2589_, v_alts_2580_, v___x_2590_);
lean_dec_ref(v_alts_2580_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v_params_2592_; lean_object* v_code_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2645_; 
v_params_2592_ = lean_ctor_get(v___x_2591_, 1);
v_code_2593_ = lean_ctor_get(v___x_2591_, 2);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2645_ == 0)
{
lean_object* v_unused_2646_; 
v_unused_2646_ = lean_ctor_get(v___x_2591_, 0);
lean_dec(v_unused_2646_);
v___x_2595_ = v___x_2591_;
v_isShared_2596_ = v_isSharedCheck_2645_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_code_2593_);
lean_inc(v_params_2592_);
lean_dec(v___x_2591_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2645_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
uint8_t v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; 
v___x_2597_ = 0;
v___x_2598_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2599_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2597_, v_params_2592_, v_a_2575_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v___x_2600_; lean_object* v_fvarId_2601_; lean_object* v_binderName_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2610_; 
lean_dec_ref_known(v___x_2599_, 1);
v___x_2600_ = lean_array_get(v___x_2598_, v_params_2592_, v___x_2590_);
lean_dec_ref(v_params_2592_);
v_fvarId_2601_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_fvarId_2601_);
v_binderName_2602_ = lean_ctor_get(v___x_2600_, 1);
lean_inc(v_binderName_2602_);
lean_dec(v___x_2600_);
v___x_2603_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2604_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4));
v___x_2605_ = lean_box(0);
v___x_2606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2606_, 0, v_discr_2579_);
v___x_2607_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_2608_ = lean_array_push(v___x_2607_, v___x_2606_);
if (v_isShared_2596_ == 0)
{
lean_ctor_set_tag(v___x_2595_, 3);
lean_ctor_set(v___x_2595_, 2, v___x_2608_);
lean_ctor_set(v___x_2595_, 1, v___x_2605_);
lean_ctor_set(v___x_2595_, 0, v___x_2604_);
v___x_2610_ = v___x_2595_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v___x_2604_);
lean_ctor_set(v_reuseFailAlloc_2636_, 1, v___x_2605_);
lean_ctor_set(v_reuseFailAlloc_2636_, 2, v___x_2608_);
v___x_2610_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
lean_object* v___x_2612_; 
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 3, v___x_2610_);
lean_ctor_set(v___x_2582_, 2, v___x_2603_);
lean_ctor_set(v___x_2582_, 1, v_binderName_2602_);
lean_ctor_set(v___x_2582_, 0, v_fvarId_2601_);
v___x_2612_ = v___x_2582_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_fvarId_2601_);
lean_ctor_set(v_reuseFailAlloc_2635_, 1, v_binderName_2602_);
lean_ctor_set(v_reuseFailAlloc_2635_, 2, v___x_2603_);
lean_ctor_set(v_reuseFailAlloc_2635_, 3, v___x_2610_);
v___x_2612_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
lean_object* v___x_2613_; lean_object* v_lctx_2614_; lean_object* v_nextIdx_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2634_; 
v___x_2613_ = lean_st_ref_take(v_a_2575_);
v_lctx_2614_ = lean_ctor_get(v___x_2613_, 0);
v_nextIdx_2615_ = lean_ctor_get(v___x_2613_, 1);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2617_ = v___x_2613_;
v_isShared_2618_ = v_isSharedCheck_2634_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_nextIdx_2615_);
lean_inc(v_lctx_2614_);
lean_dec(v___x_2613_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2634_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2619_; lean_object* v___x_2621_; 
lean_inc_ref(v___x_2612_);
v___x_2619_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2597_, v_lctx_2614_, v___x_2612_);
if (v_isShared_2618_ == 0)
{
lean_ctor_set(v___x_2617_, 0, v___x_2619_);
v___x_2621_ = v___x_2617_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v___x_2619_);
lean_ctor_set(v_reuseFailAlloc_2633_, 1, v_nextIdx_2615_);
v___x_2621_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2622_ = lean_st_ref_put(v_a_2575_, v___x_2621_);
v___x_2623_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2593_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_, v_a_2577_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2632_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2626_ = v___x_2623_;
v_isShared_2627_ = v_isSharedCheck_2632_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2623_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2632_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2628_; lean_object* v___x_2630_; 
v___x_2628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2612_);
lean_ctor_set(v___x_2628_, 1, v_a_2624_);
if (v_isShared_2627_ == 0)
{
lean_ctor_set(v___x_2626_, 0, v___x_2628_);
v___x_2630_ = v___x_2626_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v___x_2628_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
else
{
lean_dec_ref(v___x_2612_);
return v___x_2623_;
}
}
}
}
}
}
else
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2644_; 
lean_del_object(v___x_2595_);
lean_dec_ref(v_code_2593_);
lean_dec_ref(v_params_2592_);
lean_del_object(v___x_2582_);
lean_dec(v_discr_2579_);
v_a_2637_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2639_ = v___x_2599_;
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2599_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2642_; 
if (v_isShared_2640_ == 0)
{
v___x_2642_ = v___x_2639_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v_a_2637_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
return v___x_2642_;
}
}
}
}
}
else
{
lean_object* v___x_2647_; lean_object* v___x_2648_; 
lean_dec(v___x_2591_);
lean_del_object(v___x_2582_);
lean_dec(v_discr_2579_);
v___x_2647_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6);
v___x_2648_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2647_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_, v_a_2577_);
return v___x_2648_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; 
v___x_2653_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2654_ = lean_unsigned_to_nat(2u);
v___x_2655_ = lean_unsigned_to_nat(192u);
v___x_2656_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0));
v___x_2657_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2658_ = l_mkPanicMessageWithDecl(v___x_2657_, v___x_2656_, v___x_2655_, v___x_2654_, v___x_2653_);
return v___x_2658_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2660_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2661_ = lean_unsigned_to_nat(34u);
v___x_2662_ = lean_unsigned_to_nat(193u);
v___x_2663_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0));
v___x_2664_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2665_ = l_mkPanicMessageWithDecl(v___x_2664_, v___x_2663_, v___x_2662_, v___x_2661_, v___x_2660_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg(lean_object* v_c_2666_, lean_object* v_uintName_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_){
_start:
{
lean_object* v_discr_2674_; lean_object* v_alts_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2745_; 
v_discr_2674_ = lean_ctor_get(v_c_2666_, 2);
v_alts_2675_ = lean_ctor_get(v_c_2666_, 3);
v_isSharedCheck_2745_ = !lean_is_exclusive(v_c_2666_);
if (v_isSharedCheck_2745_ == 0)
{
lean_object* v_unused_2746_; lean_object* v_unused_2747_; 
v_unused_2746_ = lean_ctor_get(v_c_2666_, 1);
lean_dec(v_unused_2746_);
v_unused_2747_ = lean_ctor_get(v_c_2666_, 0);
lean_dec(v_unused_2747_);
v___x_2677_ = v_c_2666_;
v_isShared_2678_ = v_isSharedCheck_2745_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_alts_2675_);
lean_inc(v_discr_2674_);
lean_dec(v_c_2666_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2745_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; 
v___x_2679_ = lean_array_get_size(v_alts_2675_);
v___x_2680_ = lean_unsigned_to_nat(1u);
v___x_2681_ = lean_nat_dec_eq(v___x_2679_, v___x_2680_);
if (v___x_2681_ == 0)
{
lean_object* v___x_2682_; lean_object* v___x_2683_; 
lean_del_object(v___x_2677_);
lean_dec_ref(v_alts_2675_);
lean_dec(v_discr_2674_);
lean_dec(v_uintName_2667_);
v___x_2682_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2);
v___x_2683_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2682_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_);
return v___x_2683_;
}
else
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; 
v___x_2684_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_2685_ = lean_unsigned_to_nat(0u);
v___x_2686_ = lean_array_get(v___x_2684_, v_alts_2675_, v___x_2685_);
lean_dec_ref(v_alts_2675_);
if (lean_obj_tag(v___x_2686_) == 0)
{
lean_object* v_params_2687_; lean_object* v_code_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2741_; 
v_params_2687_ = lean_ctor_get(v___x_2686_, 1);
v_code_2688_ = lean_ctor_get(v___x_2686_, 2);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2686_);
if (v_isSharedCheck_2741_ == 0)
{
lean_object* v_unused_2742_; 
v_unused_2742_ = lean_ctor_get(v___x_2686_, 0);
lean_dec(v_unused_2742_);
v___x_2690_ = v___x_2686_;
v_isShared_2691_ = v_isSharedCheck_2741_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_code_2688_);
lean_inc(v_params_2687_);
lean_dec(v___x_2686_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2741_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
uint8_t v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2692_ = 0;
v___x_2693_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2694_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2692_, v_params_2687_, v_a_2670_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v___x_2695_; lean_object* v_fvarId_2696_; lean_object* v_binderName_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2706_; 
lean_dec_ref_known(v___x_2694_, 1);
v___x_2695_ = lean_array_get(v___x_2693_, v_params_2687_, v___x_2685_);
lean_dec_ref(v_params_2687_);
v_fvarId_2696_ = lean_ctor_get(v___x_2695_, 0);
lean_inc(v_fvarId_2696_);
v_binderName_2697_ = lean_ctor_get(v___x_2695_, 1);
lean_inc(v_binderName_2697_);
lean_dec(v___x_2695_);
v___x_2698_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2699_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4));
v___x_2700_ = l_Lean_Name_str___override(v_uintName_2667_, v___x_2699_);
v___x_2701_ = lean_box(0);
v___x_2702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2702_, 0, v_discr_2674_);
v___x_2703_ = lean_mk_empty_array_with_capacity(v___x_2680_);
v___x_2704_ = lean_array_push(v___x_2703_, v___x_2702_);
if (v_isShared_2691_ == 0)
{
lean_ctor_set_tag(v___x_2690_, 3);
lean_ctor_set(v___x_2690_, 2, v___x_2704_);
lean_ctor_set(v___x_2690_, 1, v___x_2701_);
lean_ctor_set(v___x_2690_, 0, v___x_2700_);
v___x_2706_ = v___x_2690_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v___x_2700_);
lean_ctor_set(v_reuseFailAlloc_2732_, 1, v___x_2701_);
lean_ctor_set(v_reuseFailAlloc_2732_, 2, v___x_2704_);
v___x_2706_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
lean_object* v___x_2708_; 
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 3, v___x_2706_);
lean_ctor_set(v___x_2677_, 2, v___x_2698_);
lean_ctor_set(v___x_2677_, 1, v_binderName_2697_);
lean_ctor_set(v___x_2677_, 0, v_fvarId_2696_);
v___x_2708_ = v___x_2677_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_fvarId_2696_);
lean_ctor_set(v_reuseFailAlloc_2731_, 1, v_binderName_2697_);
lean_ctor_set(v_reuseFailAlloc_2731_, 2, v___x_2698_);
lean_ctor_set(v_reuseFailAlloc_2731_, 3, v___x_2706_);
v___x_2708_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
lean_object* v___x_2709_; lean_object* v_lctx_2710_; lean_object* v_nextIdx_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2730_; 
v___x_2709_ = lean_st_ref_take(v_a_2670_);
v_lctx_2710_ = lean_ctor_get(v___x_2709_, 0);
v_nextIdx_2711_ = lean_ctor_get(v___x_2709_, 1);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2713_ = v___x_2709_;
v_isShared_2714_ = v_isSharedCheck_2730_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_nextIdx_2711_);
lean_inc(v_lctx_2710_);
lean_dec(v___x_2709_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2730_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2715_; lean_object* v___x_2717_; 
lean_inc_ref(v___x_2708_);
v___x_2715_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2692_, v_lctx_2710_, v___x_2708_);
if (v_isShared_2714_ == 0)
{
lean_ctor_set(v___x_2713_, 0, v___x_2715_);
v___x_2717_ = v___x_2713_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v___x_2715_);
lean_ctor_set(v_reuseFailAlloc_2729_, 1, v_nextIdx_2711_);
v___x_2717_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2718_ = lean_st_ref_put(v_a_2670_, v___x_2717_);
v___x_2719_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2688_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2728_; 
v_a_2720_ = lean_ctor_get(v___x_2719_, 0);
v_isSharedCheck_2728_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2728_ == 0)
{
v___x_2722_ = v___x_2719_;
v_isShared_2723_ = v_isSharedCheck_2728_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2719_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2728_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2724_; lean_object* v___x_2726_; 
v___x_2724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2708_);
lean_ctor_set(v___x_2724_, 1, v_a_2720_);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 0, v___x_2724_);
v___x_2726_ = v___x_2722_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v___x_2724_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
return v___x_2726_;
}
}
}
else
{
lean_dec_ref(v___x_2708_);
return v___x_2719_;
}
}
}
}
}
}
else
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2740_; 
lean_del_object(v___x_2690_);
lean_dec_ref(v_code_2688_);
lean_dec_ref(v_params_2687_);
lean_del_object(v___x_2677_);
lean_dec(v_discr_2674_);
lean_dec(v_uintName_2667_);
v_a_2733_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2740_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2740_ == 0)
{
v___x_2735_ = v___x_2694_;
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2694_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2738_; 
if (v_isShared_2736_ == 0)
{
v___x_2738_ = v___x_2735_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v_a_2733_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
}
}
}
else
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
lean_dec(v___x_2686_);
lean_del_object(v___x_2677_);
lean_dec(v_discr_2674_);
lean_dec(v_uintName_2667_);
v___x_2743_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5);
v___x_2744_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2743_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_);
return v___x_2744_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2748_ = lean_box(0);
v___x_2749_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0));
v___x_2750_ = l_Lean_mkConst(v___x_2749_, v___x_2748_);
return v___x_2750_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2757_ = lean_box(0);
v___x_2758_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3));
v___x_2759_ = l_Lean_mkConst(v___x_2758_, v___x_2757_);
return v___x_2759_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7(void){
_start:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2770_ = lean_box(0);
v___x_2771_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_2772_ = l_Lean_mkConst(v___x_2771_, v___x_2770_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(lean_object* v___x_2805_, size_t v_sz_2806_, size_t v_i_2807_, lean_object* v_bs_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
uint8_t v___x_2815_; 
v___x_2815_ = lean_usize_dec_lt(v_i_2807_, v_sz_2806_);
if (v___x_2815_ == 0)
{
lean_object* v___x_2816_; 
lean_dec(v___x_2805_);
v___x_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2816_, 0, v_bs_2808_);
return v___x_2816_;
}
else
{
lean_object* v_v_2817_; lean_object* v___x_2818_; lean_object* v_bs_x27_2819_; lean_object* v_a_2821_; 
v_v_2817_ = lean_array_uget(v_bs_2808_, v_i_2807_);
v___x_2818_ = lean_unsigned_to_nat(0u);
v_bs_x27_2819_ = lean_array_uset(v_bs_2808_, v_i_2807_, v___x_2818_);
if (lean_obj_tag(v_v_2817_) == 0)
{
lean_object* v_ctorName_2826_; lean_object* v_params_2827_; lean_object* v_code_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2955_; 
v_ctorName_2826_ = lean_ctor_get(v_v_2817_, 0);
v_params_2827_ = lean_ctor_get(v_v_2817_, 1);
v_code_2828_ = lean_ctor_get(v_v_2817_, 2);
v_isSharedCheck_2955_ = !lean_is_exclusive(v_v_2817_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2830_ = v_v_2817_;
v_isShared_2831_ = v_isSharedCheck_2955_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_code_2828_);
lean_inc(v_params_2827_);
lean_inc(v_ctorName_2826_);
lean_dec(v_v_2817_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2955_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
uint8_t v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2832_ = 0;
v___x_2833_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2834_ = lean_box(0);
v___x_2835_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_2836_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2832_, v_params_2827_, v___y_2811_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v___x_2837_; lean_object* v___x_2838_; uint8_t v___x_2839_; 
lean_dec_ref_known(v___x_2836_, 1);
v___x_2837_ = lean_array_get(v___x_2833_, v_params_2827_, v___x_2818_);
lean_dec_ref(v_params_2827_);
v___x_2838_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1));
v___x_2839_ = lean_name_eq(v_ctorName_2826_, v___x_2838_);
lean_dec(v_ctorName_2826_);
if (v___x_2839_ == 0)
{
lean_object* v_fvarId_2840_; lean_object* v_binderName_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v_lctx_2849_; lean_object* v_nextIdx_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2875_; 
v_fvarId_2840_ = lean_ctor_get(v___x_2837_, 0);
lean_inc(v_fvarId_2840_);
v_binderName_2841_ = lean_ctor_get(v___x_2837_, 1);
lean_inc(v_binderName_2841_);
lean_dec(v___x_2837_);
v___x_2842_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3));
v___x_2843_ = lean_unsigned_to_nat(1u);
v___x_2844_ = lean_mk_empty_array_with_capacity(v___x_2843_);
lean_inc(v___x_2805_);
v___x_2845_ = lean_array_push(v___x_2844_, v___x_2805_);
v___x_2846_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2842_);
lean_ctor_set(v___x_2846_, 1, v___x_2834_);
lean_ctor_set(v___x_2846_, 2, v___x_2845_);
v___x_2847_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2847_, 0, v_fvarId_2840_);
lean_ctor_set(v___x_2847_, 1, v_binderName_2841_);
lean_ctor_set(v___x_2847_, 2, v___x_2835_);
lean_ctor_set(v___x_2847_, 3, v___x_2846_);
v___x_2848_ = lean_st_ref_take(v___y_2811_);
v_lctx_2849_ = lean_ctor_get(v___x_2848_, 0);
v_nextIdx_2850_ = lean_ctor_get(v___x_2848_, 1);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2852_ = v___x_2848_;
v_isShared_2853_ = v_isSharedCheck_2875_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_nextIdx_2850_);
lean_inc(v_lctx_2849_);
lean_dec(v___x_2848_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2875_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2854_; lean_object* v___x_2856_; 
lean_inc_ref(v___x_2847_);
v___x_2854_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2832_, v_lctx_2849_, v___x_2847_);
if (v_isShared_2853_ == 0)
{
lean_ctor_set(v___x_2852_, 0, v___x_2854_);
v___x_2856_ = v___x_2852_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v___x_2854_);
lean_ctor_set(v_reuseFailAlloc_2874_, 1, v_nextIdx_2850_);
v___x_2856_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2857_ = lean_st_ref_put(v___y_2811_, v___x_2856_);
v___x_2858_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2828_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_);
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_object* v_a_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2864_; 
v_a_2859_ = lean_ctor_get(v___x_2858_, 0);
lean_inc(v_a_2859_);
lean_dec_ref_known(v___x_2858_, 1);
v___x_2860_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10));
v___x_2861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_2862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2847_);
lean_ctor_set(v___x_2862_, 1, v_a_2859_);
if (v_isShared_2831_ == 0)
{
lean_ctor_set(v___x_2830_, 2, v___x_2862_);
lean_ctor_set(v___x_2830_, 1, v___x_2861_);
lean_ctor_set(v___x_2830_, 0, v___x_2860_);
v___x_2864_ = v___x_2830_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v___x_2860_);
lean_ctor_set(v_reuseFailAlloc_2865_, 1, v___x_2861_);
lean_ctor_set(v_reuseFailAlloc_2865_, 2, v___x_2862_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
v_a_2821_ = v___x_2864_;
goto v___jp_2820_;
}
}
else
{
lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2873_; 
lean_dec_ref_known(v___x_2847_, 4);
lean_del_object(v___x_2830_);
lean_dec_ref(v_bs_x27_2819_);
lean_dec(v___x_2805_);
v_a_2866_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2868_ = v___x_2858_;
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v___x_2858_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_a_2866_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
}
}
else
{
lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___x_2876_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5));
v___x_2877_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3));
v___x_2878_ = lean_unsigned_to_nat(1u);
v___x_2879_ = lean_mk_empty_array_with_capacity(v___x_2878_);
lean_inc(v___x_2805_);
v___x_2880_ = lean_array_push(v___x_2879_, v___x_2805_);
v___x_2881_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2877_);
lean_ctor_set(v___x_2881_, 1, v___x_2834_);
lean_ctor_set(v___x_2881_, 2, v___x_2880_);
v___x_2882_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2832_, v___x_2876_, v___x_2835_, v___x_2881_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_);
if (lean_obj_tag(v___x_2882_) == 0)
{
lean_object* v_a_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; 
v_a_2883_ = lean_ctor_get(v___x_2882_, 0);
lean_inc(v_a_2883_);
lean_dec_ref_known(v___x_2882_, 1);
v___x_2884_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4));
v___x_2885_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_2886_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2832_, v___x_2884_, v___x_2835_, v___x_2885_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_);
if (lean_obj_tag(v___x_2886_) == 0)
{
lean_object* v_a_2887_; lean_object* v_fvarId_2888_; lean_object* v_binderName_2889_; lean_object* v_fvarId_2890_; lean_object* v_fvarId_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v_lctx_2902_; lean_object* v_nextIdx_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2930_; 
v_a_2887_ = lean_ctor_get(v___x_2886_, 0);
lean_inc(v_a_2887_);
lean_dec_ref_known(v___x_2886_, 1);
v_fvarId_2888_ = lean_ctor_get(v___x_2837_, 0);
lean_inc(v_fvarId_2888_);
v_binderName_2889_ = lean_ctor_get(v___x_2837_, 1);
lean_inc(v_binderName_2889_);
lean_dec(v___x_2837_);
v_fvarId_2890_ = lean_ctor_get(v_a_2883_, 0);
v_fvarId_2891_ = lean_ctor_get(v_a_2887_, 0);
v___x_2892_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8));
lean_inc(v_fvarId_2890_);
v___x_2893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2893_, 0, v_fvarId_2890_);
lean_inc(v_fvarId_2891_);
v___x_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2894_, 0, v_fvarId_2891_);
v___x_2895_ = lean_unsigned_to_nat(2u);
v___x_2896_ = lean_mk_empty_array_with_capacity(v___x_2895_);
v___x_2897_ = lean_array_push(v___x_2896_, v___x_2893_);
v___x_2898_ = lean_array_push(v___x_2897_, v___x_2894_);
v___x_2899_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2892_);
lean_ctor_set(v___x_2899_, 1, v___x_2834_);
lean_ctor_set(v___x_2899_, 2, v___x_2898_);
v___x_2900_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2900_, 0, v_fvarId_2888_);
lean_ctor_set(v___x_2900_, 1, v_binderName_2889_);
lean_ctor_set(v___x_2900_, 2, v___x_2835_);
lean_ctor_set(v___x_2900_, 3, v___x_2899_);
v___x_2901_ = lean_st_ref_take(v___y_2811_);
v_lctx_2902_ = lean_ctor_get(v___x_2901_, 0);
v_nextIdx_2903_ = lean_ctor_get(v___x_2901_, 1);
v_isSharedCheck_2930_ = !lean_is_exclusive(v___x_2901_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2905_ = v___x_2901_;
v_isShared_2906_ = v_isSharedCheck_2930_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_nextIdx_2903_);
lean_inc(v_lctx_2902_);
lean_dec(v___x_2901_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2930_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2907_; lean_object* v___x_2909_; 
lean_inc_ref(v___x_2900_);
v___x_2907_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2832_, v_lctx_2902_, v___x_2900_);
if (v_isShared_2906_ == 0)
{
lean_ctor_set(v___x_2905_, 0, v___x_2907_);
v___x_2909_ = v___x_2905_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v___x_2907_);
lean_ctor_set(v_reuseFailAlloc_2929_, 1, v_nextIdx_2903_);
v___x_2909_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2910_ = lean_st_ref_put(v___y_2811_, v___x_2909_);
v___x_2911_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2828_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_);
if (lean_obj_tag(v___x_2911_) == 0)
{
lean_object* v_a_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2919_; 
v_a_2912_ = lean_ctor_get(v___x_2911_, 0);
lean_inc(v_a_2912_);
lean_dec_ref_known(v___x_2911_, 1);
v___x_2913_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1));
v___x_2914_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_2915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2900_);
lean_ctor_set(v___x_2915_, 1, v_a_2912_);
v___x_2916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2916_, 0, v_a_2887_);
lean_ctor_set(v___x_2916_, 1, v___x_2915_);
v___x_2917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2917_, 0, v_a_2883_);
lean_ctor_set(v___x_2917_, 1, v___x_2916_);
if (v_isShared_2831_ == 0)
{
lean_ctor_set(v___x_2830_, 2, v___x_2917_);
lean_ctor_set(v___x_2830_, 1, v___x_2914_);
lean_ctor_set(v___x_2830_, 0, v___x_2913_);
v___x_2919_ = v___x_2830_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v___x_2913_);
lean_ctor_set(v_reuseFailAlloc_2920_, 1, v___x_2914_);
lean_ctor_set(v_reuseFailAlloc_2920_, 2, v___x_2917_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
v_a_2821_ = v___x_2919_;
goto v___jp_2820_;
}
}
else
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2928_; 
lean_dec_ref_known(v___x_2900_, 4);
lean_dec(v_a_2887_);
lean_dec(v_a_2883_);
lean_del_object(v___x_2830_);
lean_dec_ref(v_bs_x27_2819_);
lean_dec(v___x_2805_);
v_a_2921_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2928_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2923_ = v___x_2911_;
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v___x_2911_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2926_; 
if (v_isShared_2924_ == 0)
{
v___x_2926_ = v___x_2923_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_a_2921_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
}
}
}
}
else
{
lean_object* v_a_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2938_; 
lean_dec(v_a_2883_);
lean_dec(v___x_2837_);
lean_del_object(v___x_2830_);
lean_dec_ref(v_code_2828_);
lean_dec_ref(v_bs_x27_2819_);
lean_dec(v___x_2805_);
v_a_2931_ = lean_ctor_get(v___x_2886_, 0);
v_isSharedCheck_2938_ = !lean_is_exclusive(v___x_2886_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2933_ = v___x_2886_;
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_a_2931_);
lean_dec(v___x_2886_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2936_; 
if (v_isShared_2934_ == 0)
{
v___x_2936_ = v___x_2933_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_a_2931_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
}
}
else
{
lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2946_; 
lean_dec(v___x_2837_);
lean_del_object(v___x_2830_);
lean_dec_ref(v_code_2828_);
lean_dec_ref(v_bs_x27_2819_);
lean_dec(v___x_2805_);
v_a_2939_ = lean_ctor_get(v___x_2882_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v___x_2882_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2941_ = v___x_2882_;
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v___x_2882_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2944_; 
if (v_isShared_2942_ == 0)
{
v___x_2944_ = v___x_2941_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_a_2939_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
return v___x_2944_;
}
}
}
}
}
else
{
lean_object* v_a_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2954_; 
lean_del_object(v___x_2830_);
lean_dec_ref(v_code_2828_);
lean_dec_ref(v_params_2827_);
lean_dec(v_ctorName_2826_);
lean_dec_ref(v_bs_x27_2819_);
lean_dec(v___x_2805_);
v_a_2947_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2954_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2954_ == 0)
{
v___x_2949_ = v___x_2836_;
v_isShared_2950_ = v_isSharedCheck_2954_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_a_2947_);
lean_dec(v___x_2836_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2954_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v___x_2952_; 
if (v_isShared_2950_ == 0)
{
v___x_2952_ = v___x_2949_;
goto v_reusejp_2951_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_a_2947_);
v___x_2952_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2951_;
}
v_reusejp_2951_:
{
return v___x_2952_;
}
}
}
}
}
else
{
lean_object* v_code_2956_; lean_object* v___x_2957_; 
v_code_2956_ = lean_ctor_get(v_v_2817_, 0);
lean_inc_ref(v_code_2956_);
v___x_2957_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2956_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v_a_2958_; lean_object* v___x_2959_; 
v_a_2958_ = lean_ctor_get(v___x_2957_, 0);
lean_inc(v_a_2958_);
lean_dec_ref_known(v___x_2957_, 1);
v___x_2959_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_2817_, v_a_2958_);
v_a_2821_ = v___x_2959_;
goto v___jp_2820_;
}
else
{
lean_object* v_a_2960_; lean_object* v___x_2962_; uint8_t v_isShared_2963_; uint8_t v_isSharedCheck_2967_; 
lean_dec_ref_known(v_v_2817_, 1);
lean_dec_ref(v_bs_x27_2819_);
lean_dec(v___x_2805_);
v_a_2960_ = lean_ctor_get(v___x_2957_, 0);
v_isSharedCheck_2967_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2962_ = v___x_2957_;
v_isShared_2963_ = v_isSharedCheck_2967_;
goto v_resetjp_2961_;
}
else
{
lean_inc(v_a_2960_);
lean_dec(v___x_2957_);
v___x_2962_ = lean_box(0);
v_isShared_2963_ = v_isSharedCheck_2967_;
goto v_resetjp_2961_;
}
v_resetjp_2961_:
{
lean_object* v___x_2965_; 
if (v_isShared_2963_ == 0)
{
v___x_2965_ = v___x_2962_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_a_2960_);
v___x_2965_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
return v___x_2965_;
}
}
}
}
v___jp_2820_:
{
size_t v___x_2822_; size_t v___x_2823_; lean_object* v___x_2824_; 
v___x_2822_ = ((size_t)1ULL);
v___x_2823_ = lean_usize_add(v_i_2807_, v___x_2822_);
v___x_2824_ = lean_array_uset(v_bs_x27_2819_, v_i_2807_, v_a_2821_);
v_i_2807_ = v___x_2823_;
v_bs_2808_ = v___x_2824_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg(lean_object* v_c_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_){
_start:
{
lean_object* v_resultType_2975_; lean_object* v_discr_2976_; lean_object* v_alts_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_3074_; 
v_resultType_2975_ = lean_ctor_get(v_c_2968_, 1);
v_discr_2976_ = lean_ctor_get(v_c_2968_, 2);
v_alts_2977_ = lean_ctor_get(v_c_2968_, 3);
v_isSharedCheck_3074_ = !lean_is_exclusive(v_c_2968_);
if (v_isSharedCheck_3074_ == 0)
{
lean_object* v_unused_3075_; 
v_unused_3075_ = lean_ctor_get(v_c_2968_, 0);
lean_dec(v_unused_3075_);
v___x_2979_ = v_c_2968_;
v_isShared_2980_ = v_isSharedCheck_3074_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_alts_2977_);
lean_inc(v_discr_2976_);
lean_inc(v_resultType_2975_);
lean_dec(v_c_2968_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_3074_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
uint8_t v___x_2981_; lean_object* v___x_2982_; 
v___x_2981_ = 0;
v___x_2982_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_2975_, v_a_2972_, v_a_2973_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_a_2983_);
lean_dec_ref_known(v___x_2982_, 1);
v___x_2984_ = lean_box(0);
v___x_2985_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_2986_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1));
v___x_2987_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_2988_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2981_, v___x_2986_, v___x_2985_, v___x_2987_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v_fvarId_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
lean_inc(v_a_2989_);
lean_dec_ref_known(v___x_2988_, 1);
v_fvarId_2990_ = lean_ctor_get(v_a_2989_, 0);
v___x_2991_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5));
v___x_2992_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6);
v___x_2993_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8));
lean_inc(v_fvarId_2990_);
v___x_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2994_, 0, v_fvarId_2990_);
v___x_2995_ = lean_unsigned_to_nat(1u);
v___x_2996_ = lean_mk_empty_array_with_capacity(v___x_2995_);
v___x_2997_ = lean_array_push(v___x_2996_, v___x_2994_);
v___x_2998_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2998_, 0, v___x_2993_);
lean_ctor_set(v___x_2998_, 1, v___x_2984_);
lean_ctor_set(v___x_2998_, 2, v___x_2997_);
v___x_2999_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2981_, v___x_2991_, v___x_2992_, v___x_2998_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; lean_object* v_fvarId_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_a_3000_);
lean_dec_ref_known(v___x_2999_, 1);
v_fvarId_3001_ = lean_ctor_get(v_a_3000_, 0);
v___x_3002_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10));
v___x_3003_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_3004_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7);
v___x_3005_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12));
v___x_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3006_, 0, v_discr_2976_);
lean_inc(v_fvarId_3001_);
v___x_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3007_, 0, v_fvarId_3001_);
v___x_3008_ = lean_unsigned_to_nat(2u);
v___x_3009_ = lean_mk_empty_array_with_capacity(v___x_3008_);
lean_inc_ref(v___x_3006_);
v___x_3010_ = lean_array_push(v___x_3009_, v___x_3006_);
v___x_3011_ = lean_array_push(v___x_3010_, v___x_3007_);
v___x_3012_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3005_);
lean_ctor_set(v___x_3012_, 1, v___x_2984_);
lean_ctor_set(v___x_3012_, 2, v___x_3011_);
v___x_3013_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2981_, v___x_3002_, v___x_3004_, v___x_3012_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v_a_3014_; size_t v_sz_3015_; size_t v___x_3016_; lean_object* v___x_3017_; 
v_a_3014_ = lean_ctor_get(v___x_3013_, 0);
lean_inc(v_a_3014_);
lean_dec_ref_known(v___x_3013_, 1);
v_sz_3015_ = lean_array_size(v_alts_2977_);
v___x_3016_ = ((size_t)0ULL);
v___x_3017_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(v___x_3006_, v_sz_3015_, v___x_3016_, v_alts_2977_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_);
if (lean_obj_tag(v___x_3017_) == 0)
{
lean_object* v_a_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3033_; 
v_a_3018_ = lean_ctor_get(v___x_3017_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_3017_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3020_ = v___x_3017_;
v_isShared_3021_ = v_isSharedCheck_3033_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_a_3018_);
lean_dec(v___x_3017_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3033_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v_fvarId_3022_; lean_object* v___x_3024_; 
v_fvarId_3022_ = lean_ctor_get(v_a_3014_, 0);
lean_inc(v_fvarId_3022_);
if (v_isShared_2980_ == 0)
{
lean_ctor_set(v___x_2979_, 3, v_a_3018_);
lean_ctor_set(v___x_2979_, 2, v_fvarId_3022_);
lean_ctor_set(v___x_2979_, 1, v_a_2983_);
lean_ctor_set(v___x_2979_, 0, v___x_3003_);
v___x_3024_ = v___x_2979_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v___x_3003_);
lean_ctor_set(v_reuseFailAlloc_3032_, 1, v_a_2983_);
lean_ctor_set(v_reuseFailAlloc_3032_, 2, v_fvarId_3022_);
lean_ctor_set(v_reuseFailAlloc_3032_, 3, v_a_3018_);
v___x_3024_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3030_; 
v___x_3025_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3024_);
v___x_3026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3026_, 0, v_a_3014_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
v___x_3027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3027_, 0, v_a_3000_);
lean_ctor_set(v___x_3027_, 1, v___x_3026_);
v___x_3028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3028_, 0, v_a_2989_);
lean_ctor_set(v___x_3028_, 1, v___x_3027_);
if (v_isShared_3021_ == 0)
{
lean_ctor_set(v___x_3020_, 0, v___x_3028_);
v___x_3030_ = v___x_3020_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v___x_3028_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
else
{
lean_object* v_a_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3041_; 
lean_dec(v_a_3014_);
lean_dec(v_a_3000_);
lean_dec(v_a_2989_);
lean_dec(v_a_2983_);
lean_del_object(v___x_2979_);
v_a_3034_ = lean_ctor_get(v___x_3017_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v___x_3017_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3036_ = v___x_3017_;
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_a_3034_);
lean_dec(v___x_3017_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
lean_object* v___x_3039_; 
if (v_isShared_3037_ == 0)
{
v___x_3039_ = v___x_3036_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v_a_3034_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
return v___x_3039_;
}
}
}
}
else
{
lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
lean_dec_ref_known(v___x_3006_, 1);
lean_dec(v_a_3000_);
lean_dec(v_a_2989_);
lean_dec(v_a_2983_);
lean_del_object(v___x_2979_);
lean_dec_ref(v_alts_2977_);
v_a_3042_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3044_ = v___x_3013_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_dec(v___x_3013_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
}
else
{
lean_object* v_a_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3057_; 
lean_dec(v_a_2989_);
lean_dec(v_a_2983_);
lean_del_object(v___x_2979_);
lean_dec_ref(v_alts_2977_);
lean_dec(v_discr_2976_);
v_a_3050_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3052_ = v___x_2999_;
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_a_3050_);
lean_dec(v___x_2999_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3055_; 
if (v_isShared_3053_ == 0)
{
v___x_3055_ = v___x_3052_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_a_3050_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
}
else
{
lean_object* v_a_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3065_; 
lean_dec(v_a_2983_);
lean_del_object(v___x_2979_);
lean_dec_ref(v_alts_2977_);
lean_dec(v_discr_2976_);
v_a_3058_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3060_ = v___x_2988_;
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_a_3058_);
lean_dec(v___x_2988_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3063_; 
if (v_isShared_3061_ == 0)
{
v___x_3063_ = v___x_3060_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_a_3058_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
}
else
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3073_; 
lean_del_object(v___x_2979_);
lean_dec_ref(v_alts_2977_);
lean_dec(v_discr_2976_);
v_a_3066_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3068_ = v___x_2982_;
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v___x_2982_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3071_; 
if (v_isShared_3069_ == 0)
{
v___x_3071_ = v___x_3068_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_a_3066_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(lean_object* v___x_3085_, size_t v_sz_3086_, size_t v_i_3087_, lean_object* v_bs_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_){
_start:
{
uint8_t v___x_3095_; 
v___x_3095_ = lean_usize_dec_lt(v_i_3087_, v_sz_3086_);
if (v___x_3095_ == 0)
{
lean_object* v___x_3096_; 
lean_dec(v___x_3085_);
v___x_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3096_, 0, v_bs_3088_);
return v___x_3096_;
}
else
{
lean_object* v_v_3097_; lean_object* v___x_3098_; lean_object* v_bs_x27_3099_; lean_object* v_a_3101_; 
v_v_3097_ = lean_array_uget(v_bs_3088_, v_i_3087_);
v___x_3098_ = lean_unsigned_to_nat(0u);
v_bs_x27_3099_ = lean_array_uset(v_bs_3088_, v_i_3087_, v___x_3098_);
if (lean_obj_tag(v_v_3097_) == 0)
{
lean_object* v_ctorName_3106_; lean_object* v_params_3107_; lean_object* v_code_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3195_; 
v_ctorName_3106_ = lean_ctor_get(v_v_3097_, 0);
v_params_3107_ = lean_ctor_get(v_v_3097_, 1);
v_code_3108_ = lean_ctor_get(v_v_3097_, 2);
v_isSharedCheck_3195_ = !lean_is_exclusive(v_v_3097_);
if (v_isSharedCheck_3195_ == 0)
{
v___x_3110_ = v_v_3097_;
v_isShared_3111_ = v_isSharedCheck_3195_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_code_3108_);
lean_inc(v_params_3107_);
lean_inc(v_ctorName_3106_);
lean_dec(v_v_3097_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3195_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
uint8_t v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3112_ = 0;
v___x_3113_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_3114_ = lean_box(0);
v___x_3115_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_3116_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_3112_, v_params_3107_, v___y_3091_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v___x_3117_; uint8_t v___x_3118_; 
lean_dec_ref_known(v___x_3116_, 1);
v___x_3117_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__9));
v___x_3118_ = lean_name_eq(v_ctorName_3106_, v___x_3117_);
lean_dec(v_ctorName_3106_);
if (v___x_3118_ == 0)
{
lean_object* v___x_3119_; 
lean_dec_ref(v_params_3107_);
v___x_3119_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3108_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v_a_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3124_; 
v_a_3120_ = lean_ctor_get(v___x_3119_, 0);
lean_inc(v_a_3120_);
lean_dec_ref_known(v___x_3119_, 1);
v___x_3121_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1));
v___x_3122_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
if (v_isShared_3111_ == 0)
{
lean_ctor_set(v___x_3110_, 2, v_a_3120_);
lean_ctor_set(v___x_3110_, 1, v___x_3122_);
lean_ctor_set(v___x_3110_, 0, v___x_3121_);
v___x_3124_ = v___x_3110_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v___x_3121_);
lean_ctor_set(v_reuseFailAlloc_3125_, 1, v___x_3122_);
lean_ctor_set(v_reuseFailAlloc_3125_, 2, v_a_3120_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
v_a_3101_ = v___x_3124_;
goto v___jp_3100_;
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3133_; 
lean_del_object(v___x_3110_);
lean_dec_ref(v_bs_x27_3099_);
lean_dec(v___x_3085_);
v_a_3126_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3133_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3133_ == 0)
{
v___x_3128_ = v___x_3119_;
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3119_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3131_; 
if (v_isShared_3129_ == 0)
{
v___x_3131_ = v___x_3128_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v_a_3126_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
}
}
}
}
else
{
lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3134_ = lean_array_get(v___x_3113_, v_params_3107_, v___x_3098_);
lean_dec_ref(v_params_3107_);
v___x_3135_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4));
v___x_3136_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_3137_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3112_, v___x_3135_, v___x_3115_, v___x_3136_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_a_3138_; lean_object* v_fvarId_3139_; lean_object* v_binderName_3140_; lean_object* v_fvarId_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v_lctx_3151_; lean_object* v_nextIdx_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3178_; 
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3138_);
lean_dec_ref_known(v___x_3137_, 1);
v_fvarId_3139_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_fvarId_3139_);
v_binderName_3140_ = lean_ctor_get(v___x_3134_, 1);
lean_inc(v_binderName_3140_);
lean_dec(v___x_3134_);
v_fvarId_3141_ = lean_ctor_get(v_a_3138_, 0);
v___x_3142_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8));
lean_inc(v_fvarId_3141_);
v___x_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3143_, 0, v_fvarId_3141_);
v___x_3144_ = lean_unsigned_to_nat(2u);
v___x_3145_ = lean_mk_empty_array_with_capacity(v___x_3144_);
lean_inc(v___x_3085_);
v___x_3146_ = lean_array_push(v___x_3145_, v___x_3085_);
v___x_3147_ = lean_array_push(v___x_3146_, v___x_3143_);
v___x_3148_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3142_);
lean_ctor_set(v___x_3148_, 1, v___x_3114_);
lean_ctor_set(v___x_3148_, 2, v___x_3147_);
v___x_3149_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3149_, 0, v_fvarId_3139_);
lean_ctor_set(v___x_3149_, 1, v_binderName_3140_);
lean_ctor_set(v___x_3149_, 2, v___x_3115_);
lean_ctor_set(v___x_3149_, 3, v___x_3148_);
v___x_3150_ = lean_st_ref_take(v___y_3091_);
v_lctx_3151_ = lean_ctor_get(v___x_3150_, 0);
v_nextIdx_3152_ = lean_ctor_get(v___x_3150_, 1);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3154_ = v___x_3150_;
v_isShared_3155_ = v_isSharedCheck_3178_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_nextIdx_3152_);
lean_inc(v_lctx_3151_);
lean_dec(v___x_3150_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3178_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3156_; lean_object* v___x_3158_; 
lean_inc_ref(v___x_3149_);
v___x_3156_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_3112_, v_lctx_3151_, v___x_3149_);
if (v_isShared_3155_ == 0)
{
lean_ctor_set(v___x_3154_, 0, v___x_3156_);
v___x_3158_ = v___x_3154_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v___x_3156_);
lean_ctor_set(v_reuseFailAlloc_3177_, 1, v_nextIdx_3152_);
v___x_3158_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3159_ = lean_st_ref_put(v___y_3091_, v___x_3158_);
v___x_3160_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3108_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_);
if (lean_obj_tag(v___x_3160_) == 0)
{
lean_object* v_a_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3167_; 
v_a_3161_ = lean_ctor_get(v___x_3160_, 0);
lean_inc(v_a_3161_);
lean_dec_ref_known(v___x_3160_, 1);
v___x_3162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10));
v___x_3163_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_3164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3149_);
lean_ctor_set(v___x_3164_, 1, v_a_3161_);
v___x_3165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3165_, 0, v_a_3138_);
lean_ctor_set(v___x_3165_, 1, v___x_3164_);
if (v_isShared_3111_ == 0)
{
lean_ctor_set(v___x_3110_, 2, v___x_3165_);
lean_ctor_set(v___x_3110_, 1, v___x_3163_);
lean_ctor_set(v___x_3110_, 0, v___x_3162_);
v___x_3167_ = v___x_3110_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v___x_3162_);
lean_ctor_set(v_reuseFailAlloc_3168_, 1, v___x_3163_);
lean_ctor_set(v_reuseFailAlloc_3168_, 2, v___x_3165_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
v_a_3101_ = v___x_3167_;
goto v___jp_3100_;
}
}
else
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
lean_dec_ref_known(v___x_3149_, 4);
lean_dec(v_a_3138_);
lean_del_object(v___x_3110_);
lean_dec_ref(v_bs_x27_3099_);
lean_dec(v___x_3085_);
v_a_3169_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3171_ = v___x_3160_;
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3160_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3174_; 
if (v_isShared_3172_ == 0)
{
v___x_3174_ = v___x_3171_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_a_3169_);
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
}
else
{
lean_object* v_a_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3186_; 
lean_dec(v___x_3134_);
lean_del_object(v___x_3110_);
lean_dec_ref(v_code_3108_);
lean_dec_ref(v_bs_x27_3099_);
lean_dec(v___x_3085_);
v_a_3179_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3186_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3186_ == 0)
{
v___x_3181_ = v___x_3137_;
v_isShared_3182_ = v_isSharedCheck_3186_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_a_3179_);
lean_dec(v___x_3137_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3186_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v___x_3184_; 
if (v_isShared_3182_ == 0)
{
v___x_3184_ = v___x_3181_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v_a_3179_);
v___x_3184_ = v_reuseFailAlloc_3185_;
goto v_reusejp_3183_;
}
v_reusejp_3183_:
{
return v___x_3184_;
}
}
}
}
}
else
{
lean_object* v_a_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3194_; 
lean_del_object(v___x_3110_);
lean_dec_ref(v_code_3108_);
lean_dec_ref(v_params_3107_);
lean_dec(v_ctorName_3106_);
lean_dec_ref(v_bs_x27_3099_);
lean_dec(v___x_3085_);
v_a_3187_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3194_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3194_ == 0)
{
v___x_3189_ = v___x_3116_;
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_a_3187_);
lean_dec(v___x_3116_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v___x_3192_; 
if (v_isShared_3190_ == 0)
{
v___x_3192_ = v___x_3189_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v_a_3187_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
}
}
}
}
}
else
{
lean_object* v_code_3196_; lean_object* v___x_3197_; 
v_code_3196_ = lean_ctor_get(v_v_3097_, 0);
lean_inc_ref(v_code_3196_);
v___x_3197_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3196_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_);
if (lean_obj_tag(v___x_3197_) == 0)
{
lean_object* v_a_3198_; lean_object* v___x_3199_; 
v_a_3198_ = lean_ctor_get(v___x_3197_, 0);
lean_inc(v_a_3198_);
lean_dec_ref_known(v___x_3197_, 1);
v___x_3199_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_3097_, v_a_3198_);
v_a_3101_ = v___x_3199_;
goto v___jp_3100_;
}
else
{
lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3207_; 
lean_dec_ref_known(v_v_3097_, 1);
lean_dec_ref(v_bs_x27_3099_);
lean_dec(v___x_3085_);
v_a_3200_ = lean_ctor_get(v___x_3197_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3202_ = v___x_3197_;
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_3197_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3205_; 
if (v_isShared_3203_ == 0)
{
v___x_3205_ = v___x_3202_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3200_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
}
v___jp_3100_:
{
size_t v___x_3102_; size_t v___x_3103_; lean_object* v___x_3104_; 
v___x_3102_ = ((size_t)1ULL);
v___x_3103_ = lean_usize_add(v_i_3087_, v___x_3102_);
v___x_3104_ = lean_array_uset(v_bs_x27_3099_, v_i_3087_, v_a_3101_);
v_i_3087_ = v___x_3103_;
v_bs_3088_ = v___x_3104_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg(lean_object* v_c_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_){
_start:
{
lean_object* v_resultType_3215_; lean_object* v_discr_3216_; lean_object* v_alts_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3294_; 
v_resultType_3215_ = lean_ctor_get(v_c_3208_, 1);
v_discr_3216_ = lean_ctor_get(v_c_3208_, 2);
v_alts_3217_ = lean_ctor_get(v_c_3208_, 3);
v_isSharedCheck_3294_ = !lean_is_exclusive(v_c_3208_);
if (v_isSharedCheck_3294_ == 0)
{
lean_object* v_unused_3295_; 
v_unused_3295_ = lean_ctor_get(v_c_3208_, 0);
lean_dec(v_unused_3295_);
v___x_3219_ = v_c_3208_;
v_isShared_3220_ = v_isSharedCheck_3294_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_alts_3217_);
lean_inc(v_discr_3216_);
lean_inc(v_resultType_3215_);
lean_dec(v_c_3208_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3294_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
uint8_t v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = 0;
v___x_3222_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3215_, v_a_3212_, v_a_3213_);
if (lean_obj_tag(v___x_3222_) == 0)
{
lean_object* v_a_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; 
v_a_3223_ = lean_ctor_get(v___x_3222_, 0);
lean_inc(v_a_3223_);
lean_dec_ref_known(v___x_3222_, 1);
v___x_3224_ = lean_box(0);
v___x_3225_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_3226_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2));
v___x_3227_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_3228_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3221_, v___x_3226_, v___x_3225_, v___x_3227_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_);
if (lean_obj_tag(v___x_3228_) == 0)
{
lean_object* v_a_3229_; lean_object* v_fvarId_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v_a_3229_ = lean_ctor_get(v___x_3228_, 0);
lean_inc(v_a_3229_);
lean_dec_ref_known(v___x_3228_, 1);
v_fvarId_3230_ = lean_ctor_get(v_a_3229_, 0);
v___x_3231_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4));
v___x_3232_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_3233_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7);
v___x_3234_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9));
v___x_3235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3235_, 0, v_discr_3216_);
lean_inc(v_fvarId_3230_);
v___x_3236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3236_, 0, v_fvarId_3230_);
v___x_3237_ = lean_unsigned_to_nat(2u);
v___x_3238_ = lean_mk_empty_array_with_capacity(v___x_3237_);
lean_inc_ref(v___x_3235_);
v___x_3239_ = lean_array_push(v___x_3238_, v___x_3235_);
v___x_3240_ = lean_array_push(v___x_3239_, v___x_3236_);
v___x_3241_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3241_, 0, v___x_3234_);
lean_ctor_set(v___x_3241_, 1, v___x_3224_);
lean_ctor_set(v___x_3241_, 2, v___x_3240_);
v___x_3242_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3221_, v___x_3231_, v___x_3233_, v___x_3241_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_);
if (lean_obj_tag(v___x_3242_) == 0)
{
lean_object* v_a_3243_; size_t v_sz_3244_; size_t v___x_3245_; lean_object* v___x_3246_; 
v_a_3243_ = lean_ctor_get(v___x_3242_, 0);
lean_inc(v_a_3243_);
lean_dec_ref_known(v___x_3242_, 1);
v_sz_3244_ = lean_array_size(v_alts_3217_);
v___x_3245_ = ((size_t)0ULL);
v___x_3246_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(v___x_3235_, v_sz_3244_, v___x_3245_, v_alts_3217_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3261_; 
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3249_ = v___x_3246_;
v_isShared_3250_ = v_isSharedCheck_3261_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3246_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3261_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v_fvarId_3251_; lean_object* v___x_3253_; 
v_fvarId_3251_ = lean_ctor_get(v_a_3243_, 0);
lean_inc(v_fvarId_3251_);
if (v_isShared_3220_ == 0)
{
lean_ctor_set(v___x_3219_, 3, v_a_3247_);
lean_ctor_set(v___x_3219_, 2, v_fvarId_3251_);
lean_ctor_set(v___x_3219_, 1, v_a_3223_);
lean_ctor_set(v___x_3219_, 0, v___x_3232_);
v___x_3253_ = v___x_3219_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v___x_3232_);
lean_ctor_set(v_reuseFailAlloc_3260_, 1, v_a_3223_);
lean_ctor_set(v_reuseFailAlloc_3260_, 2, v_fvarId_3251_);
lean_ctor_set(v_reuseFailAlloc_3260_, 3, v_a_3247_);
v___x_3253_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3258_; 
v___x_3254_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3253_);
v___x_3255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3255_, 0, v_a_3243_);
lean_ctor_set(v___x_3255_, 1, v___x_3254_);
v___x_3256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3256_, 0, v_a_3229_);
lean_ctor_set(v___x_3256_, 1, v___x_3255_);
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 0, v___x_3256_);
v___x_3258_ = v___x_3249_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v___x_3256_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
}
else
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3269_; 
lean_dec(v_a_3243_);
lean_dec(v_a_3229_);
lean_dec(v_a_3223_);
lean_del_object(v___x_3219_);
v_a_3262_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3246_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3246_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
return v___x_3267_;
}
}
}
}
else
{
lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3277_; 
lean_dec_ref_known(v___x_3235_, 1);
lean_dec(v_a_3229_);
lean_dec(v_a_3223_);
lean_del_object(v___x_3219_);
lean_dec_ref(v_alts_3217_);
v_a_3270_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3272_ = v___x_3242_;
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v___x_3242_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3275_; 
if (v_isShared_3273_ == 0)
{
v___x_3275_ = v___x_3272_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v_a_3270_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
}
}
else
{
lean_object* v_a_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3285_; 
lean_dec(v_a_3223_);
lean_del_object(v___x_3219_);
lean_dec_ref(v_alts_3217_);
lean_dec(v_discr_3216_);
v_a_3278_ = lean_ctor_get(v___x_3228_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_3228_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3280_ = v___x_3228_;
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_a_3278_);
lean_dec(v___x_3228_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___x_3283_; 
if (v_isShared_3281_ == 0)
{
v___x_3283_ = v___x_3280_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_a_3278_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
}
}
else
{
lean_object* v_a_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3293_; 
lean_del_object(v___x_3219_);
lean_dec_ref(v_alts_3217_);
lean_dec(v_discr_3216_);
v_a_3286_ = lean_ctor_get(v___x_3222_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3222_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3288_ = v___x_3222_;
v_isShared_3289_ = v_isSharedCheck_3293_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_a_3286_);
lean_dec(v___x_3222_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3293_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3291_; 
if (v_isShared_3289_ == 0)
{
v___x_3291_ = v___x_3288_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v_a_3286_);
v___x_3291_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
return v___x_3291_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono(lean_object* v_code_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_){
_start:
{
lean_object* v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3308_; lean_object* v_decl_3312_; lean_object* v_k_3313_; lean_object* v___y_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; 
switch(lean_obj_tag(v_code_3296_))
{
case 0:
{
lean_object* v_decl_3420_; lean_object* v_k_3421_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v_value_3477_; 
v_decl_3420_ = lean_ctor_get(v_code_3296_, 0);
v_k_3421_ = lean_ctor_get(v_code_3296_, 1);
v_value_3477_ = lean_ctor_get(v_decl_3420_, 3);
lean_inc(v_value_3477_);
if (lean_obj_tag(v_value_3477_) == 3)
{
lean_object* v_declName_3478_; 
v_declName_3478_ = lean_ctor_get(v_value_3477_, 0);
lean_inc(v_declName_3478_);
if (lean_obj_tag(v_declName_3478_) == 1)
{
lean_object* v_pre_3479_; 
v_pre_3479_ = lean_ctor_get(v_declName_3478_, 0);
lean_inc(v_pre_3479_);
if (lean_obj_tag(v_pre_3479_) == 1)
{
lean_object* v_pre_3480_; 
v_pre_3480_ = lean_ctor_get(v_pre_3479_, 0);
if (lean_obj_tag(v_pre_3480_) == 0)
{
lean_object* v_type_3481_; lean_object* v_args_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3552_; 
v_type_3481_ = lean_ctor_get(v_decl_3420_, 2);
v_args_3482_ = lean_ctor_get(v_value_3477_, 2);
v_isSharedCheck_3552_ = !lean_is_exclusive(v_value_3477_);
if (v_isSharedCheck_3552_ == 0)
{
lean_object* v_unused_3553_; lean_object* v_unused_3554_; 
v_unused_3553_ = lean_ctor_get(v_value_3477_, 1);
lean_dec(v_unused_3553_);
v_unused_3554_ = lean_ctor_get(v_value_3477_, 0);
lean_dec(v_unused_3554_);
v___x_3484_ = v_value_3477_;
v_isShared_3485_ = v_isSharedCheck_3552_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_args_3482_);
lean_dec(v_value_3477_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3552_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v_str_3486_; lean_object* v_str_3487_; lean_object* v___x_3488_; uint8_t v___x_3489_; 
v_str_3486_ = lean_ctor_get(v_declName_3478_, 1);
lean_inc_ref(v_str_3486_);
lean_dec_ref_known(v_declName_3478_, 2);
v_str_3487_ = lean_ctor_get(v_pre_3479_, 1);
lean_inc_ref(v_str_3487_);
lean_dec_ref_known(v_pre_3479_, 2);
v___x_3488_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__5));
v___x_3489_ = lean_string_dec_eq(v_str_3487_, v___x_3488_);
lean_dec_ref(v_str_3487_);
if (v___x_3489_ == 0)
{
lean_dec_ref(v_str_3486_);
lean_del_object(v___x_3484_);
lean_dec_ref(v_args_3482_);
v___y_3423_ = v_a_3297_;
v___y_3424_ = v_a_3298_;
v___y_3425_ = v_a_3299_;
v___y_3426_ = v_a_3300_;
v___y_3427_ = v_a_3301_;
goto v___jp_3422_;
}
else
{
lean_object* v___x_3490_; uint8_t v___x_3491_; 
v___x_3490_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__8));
v___x_3491_ = lean_string_dec_eq(v_str_3486_, v___x_3490_);
lean_dec_ref(v_str_3486_);
if (v___x_3491_ == 0)
{
lean_del_object(v___x_3484_);
lean_dec_ref(v_args_3482_);
v___y_3423_ = v_a_3297_;
v___y_3424_ = v_a_3298_;
v___y_3425_ = v_a_3299_;
v___y_3426_ = v_a_3300_;
v___y_3427_ = v_a_3301_;
goto v___jp_3422_;
}
else
{
lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3549_; 
lean_inc_ref(v_type_3481_);
lean_inc_ref(v_k_3421_);
lean_inc_ref(v_decl_3420_);
v_isSharedCheck_3549_ = !lean_is_exclusive(v_code_3296_);
if (v_isSharedCheck_3549_ == 0)
{
lean_object* v_unused_3550_; lean_object* v_unused_3551_; 
v_unused_3550_ = lean_ctor_get(v_code_3296_, 1);
lean_dec(v_unused_3550_);
v_unused_3551_ = lean_ctor_get(v_code_3296_, 0);
lean_dec(v_unused_3551_);
v___x_3493_ = v_code_3296_;
v_isShared_3494_ = v_isSharedCheck_3549_;
goto v_resetjp_3492_;
}
else
{
lean_dec(v_code_3296_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3549_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3495_; lean_object* v___x_3496_; uint8_t v___x_3497_; 
v___x_3495_ = lean_array_get_size(v_args_3482_);
v___x_3496_ = lean_unsigned_to_nat(1u);
v___x_3497_ = lean_nat_dec_eq(v___x_3495_, v___x_3496_);
if (v___x_3497_ == 0)
{
lean_object* v___x_3498_; lean_object* v___x_3499_; 
lean_del_object(v___x_3493_);
lean_del_object(v___x_3484_);
lean_dec_ref(v_args_3482_);
lean_dec_ref(v_type_3481_);
lean_dec_ref(v_k_3421_);
lean_dec_ref(v_decl_3420_);
v___x_3498_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__5, &l_Lean_Compiler_LCNF_Code_toMono___closed__5_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__5);
v___x_3499_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_3498_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3499_;
}
else
{
lean_object* v___x_3500_; lean_object* v___x_3501_; uint8_t v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; 
v___x_3500_ = lean_unsigned_to_nat(0u);
v___x_3501_ = lean_array_fget(v_args_3482_, v___x_3500_);
lean_dec_ref(v_args_3482_);
v___x_3502_ = 0;
v___x_3503_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_3504_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5));
v___x_3505_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_3502_, v___x_3503_, v___x_3504_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
if (lean_obj_tag(v___x_3505_) == 0)
{
lean_object* v_a_3506_; lean_object* v_fvarId_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3516_; 
v_a_3506_ = lean_ctor_get(v___x_3505_, 0);
lean_inc(v_a_3506_);
lean_dec_ref_known(v___x_3505_, 1);
v_fvarId_3507_ = lean_ctor_get(v_a_3506_, 0);
v___x_3508_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__7));
v___x_3509_ = lean_box(0);
lean_inc(v_fvarId_3507_);
v___x_3510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3510_, 0, v_fvarId_3507_);
v___x_3511_ = lean_unsigned_to_nat(2u);
v___x_3512_ = lean_mk_empty_array_with_capacity(v___x_3511_);
v___x_3513_ = lean_array_push(v___x_3512_, v___x_3501_);
v___x_3514_ = lean_array_push(v___x_3513_, v___x_3510_);
if (v_isShared_3485_ == 0)
{
lean_ctor_set(v___x_3484_, 2, v___x_3514_);
lean_ctor_set(v___x_3484_, 1, v___x_3509_);
lean_ctor_set(v___x_3484_, 0, v___x_3508_);
v___x_3516_ = v___x_3484_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v___x_3508_);
lean_ctor_set(v_reuseFailAlloc_3540_, 1, v___x_3509_);
lean_ctor_set(v_reuseFailAlloc_3540_, 2, v___x_3514_);
v___x_3516_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
lean_object* v___x_3517_; 
v___x_3517_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_3502_, v_decl_3420_, v_type_3481_, v___x_3516_, v_a_3299_);
if (lean_obj_tag(v___x_3517_) == 0)
{
lean_object* v_a_3518_; lean_object* v___x_3519_; 
v_a_3518_ = lean_ctor_get(v___x_3517_, 0);
lean_inc(v_a_3518_);
lean_dec_ref_known(v___x_3517_, 1);
v___x_3519_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3421_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
if (lean_obj_tag(v___x_3519_) == 0)
{
lean_object* v_a_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3531_; 
v_a_3520_ = lean_ctor_get(v___x_3519_, 0);
v_isSharedCheck_3531_ = !lean_is_exclusive(v___x_3519_);
if (v_isSharedCheck_3531_ == 0)
{
v___x_3522_ = v___x_3519_;
v_isShared_3523_ = v_isSharedCheck_3531_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_a_3520_);
lean_dec(v___x_3519_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3531_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3525_; 
if (v_isShared_3494_ == 0)
{
lean_ctor_set(v___x_3493_, 1, v_a_3520_);
lean_ctor_set(v___x_3493_, 0, v_a_3518_);
v___x_3525_ = v___x_3493_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v_a_3518_);
lean_ctor_set(v_reuseFailAlloc_3530_, 1, v_a_3520_);
v___x_3525_ = v_reuseFailAlloc_3530_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
lean_object* v___x_3526_; lean_object* v___x_3528_; 
v___x_3526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3526_, 0, v_a_3506_);
lean_ctor_set(v___x_3526_, 1, v___x_3525_);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 0, v___x_3526_);
v___x_3528_ = v___x_3522_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v___x_3526_);
v___x_3528_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
return v___x_3528_;
}
}
}
}
else
{
lean_dec(v_a_3518_);
lean_dec(v_a_3506_);
lean_del_object(v___x_3493_);
return v___x_3519_;
}
}
else
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3539_; 
lean_dec(v_a_3506_);
lean_del_object(v___x_3493_);
lean_dec_ref(v_k_3421_);
v_a_3532_ = lean_ctor_get(v___x_3517_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3517_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3534_ = v___x_3517_;
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3517_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v___x_3537_; 
if (v_isShared_3535_ == 0)
{
v___x_3537_ = v___x_3534_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3532_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
}
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3548_; 
lean_dec(v___x_3501_);
lean_del_object(v___x_3493_);
lean_del_object(v___x_3484_);
lean_dec_ref(v_type_3481_);
lean_dec_ref(v_k_3421_);
lean_dec_ref(v_decl_3420_);
v_a_3541_ = lean_ctor_get(v___x_3505_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3505_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3543_ = v___x_3505_;
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_dec(v___x_3505_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3546_; 
if (v_isShared_3544_ == 0)
{
v___x_3546_ = v___x_3543_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_a_3541_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
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
lean_dec_ref_known(v_pre_3479_, 2);
lean_dec_ref_known(v_declName_3478_, 2);
lean_dec_ref_known(v_value_3477_, 3);
v___y_3423_ = v_a_3297_;
v___y_3424_ = v_a_3298_;
v___y_3425_ = v_a_3299_;
v___y_3426_ = v_a_3300_;
v___y_3427_ = v_a_3301_;
goto v___jp_3422_;
}
}
else
{
lean_dec_ref_known(v_declName_3478_, 2);
lean_dec(v_pre_3479_);
lean_dec_ref_known(v_value_3477_, 3);
v___y_3423_ = v_a_3297_;
v___y_3424_ = v_a_3298_;
v___y_3425_ = v_a_3299_;
v___y_3426_ = v_a_3300_;
v___y_3427_ = v_a_3301_;
goto v___jp_3422_;
}
}
else
{
lean_dec_ref_known(v_value_3477_, 3);
lean_dec(v_declName_3478_);
v___y_3423_ = v_a_3297_;
v___y_3424_ = v_a_3298_;
v___y_3425_ = v_a_3299_;
v___y_3426_ = v_a_3300_;
v___y_3427_ = v_a_3301_;
goto v___jp_3422_;
}
}
else
{
lean_dec(v_value_3477_);
v___y_3423_ = v_a_3297_;
v___y_3424_ = v_a_3298_;
v___y_3425_ = v_a_3299_;
v___y_3426_ = v_a_3300_;
v___y_3427_ = v_a_3301_;
goto v___jp_3422_;
}
v___jp_3422_:
{
lean_object* v___x_3428_; 
lean_inc_ref(v_decl_3420_);
v___x_3428_ = l_Lean_Compiler_LCNF_LetDecl_toMono(v_decl_3420_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v_a_3429_; lean_object* v___x_3430_; 
v_a_3429_ = lean_ctor_get(v___x_3428_, 0);
lean_inc(v_a_3429_);
lean_dec_ref_known(v___x_3428_, 1);
lean_inc_ref(v_k_3421_);
v___x_3430_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3421_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3468_; 
v_a_3431_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3433_ = v___x_3430_;
v_isShared_3434_ = v_isSharedCheck_3468_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3430_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3468_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
size_t v___x_3435_; size_t v___x_3436_; uint8_t v___x_3437_; 
v___x_3435_ = lean_ptr_addr(v_k_3421_);
v___x_3436_ = lean_ptr_addr(v_a_3431_);
v___x_3437_ = lean_usize_dec_eq(v___x_3435_, v___x_3436_);
if (v___x_3437_ == 0)
{
lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3447_; 
v_isSharedCheck_3447_ = !lean_is_exclusive(v_code_3296_);
if (v_isSharedCheck_3447_ == 0)
{
lean_object* v_unused_3448_; lean_object* v_unused_3449_; 
v_unused_3448_ = lean_ctor_get(v_code_3296_, 1);
lean_dec(v_unused_3448_);
v_unused_3449_ = lean_ctor_get(v_code_3296_, 0);
lean_dec(v_unused_3449_);
v___x_3439_ = v_code_3296_;
v_isShared_3440_ = v_isSharedCheck_3447_;
goto v_resetjp_3438_;
}
else
{
lean_dec(v_code_3296_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3447_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3442_; 
if (v_isShared_3440_ == 0)
{
lean_ctor_set(v___x_3439_, 1, v_a_3431_);
lean_ctor_set(v___x_3439_, 0, v_a_3429_);
v___x_3442_ = v___x_3439_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_a_3429_);
lean_ctor_set(v_reuseFailAlloc_3446_, 1, v_a_3431_);
v___x_3442_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
lean_object* v___x_3444_; 
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v___x_3442_);
v___x_3444_ = v___x_3433_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3442_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
}
}
else
{
size_t v___x_3450_; size_t v___x_3451_; uint8_t v___x_3452_; 
v___x_3450_ = lean_ptr_addr(v_decl_3420_);
v___x_3451_ = lean_ptr_addr(v_a_3429_);
v___x_3452_ = lean_usize_dec_eq(v___x_3450_, v___x_3451_);
if (v___x_3452_ == 0)
{
lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3462_; 
v_isSharedCheck_3462_ = !lean_is_exclusive(v_code_3296_);
if (v_isSharedCheck_3462_ == 0)
{
lean_object* v_unused_3463_; lean_object* v_unused_3464_; 
v_unused_3463_ = lean_ctor_get(v_code_3296_, 1);
lean_dec(v_unused_3463_);
v_unused_3464_ = lean_ctor_get(v_code_3296_, 0);
lean_dec(v_unused_3464_);
v___x_3454_ = v_code_3296_;
v_isShared_3455_ = v_isSharedCheck_3462_;
goto v_resetjp_3453_;
}
else
{
lean_dec(v_code_3296_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3462_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
lean_object* v___x_3457_; 
if (v_isShared_3455_ == 0)
{
lean_ctor_set(v___x_3454_, 1, v_a_3431_);
lean_ctor_set(v___x_3454_, 0, v_a_3429_);
v___x_3457_ = v___x_3454_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3429_);
lean_ctor_set(v_reuseFailAlloc_3461_, 1, v_a_3431_);
v___x_3457_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
lean_object* v___x_3459_; 
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v___x_3457_);
v___x_3459_ = v___x_3433_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v___x_3457_);
v___x_3459_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
return v___x_3459_;
}
}
}
}
else
{
lean_object* v___x_3466_; 
lean_dec(v_a_3431_);
lean_dec(v_a_3429_);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v_code_3296_);
v___x_3466_ = v___x_3433_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v_code_3296_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
}
}
}
else
{
lean_dec(v_a_3429_);
lean_dec_ref_known(v_code_3296_, 2);
return v___x_3430_;
}
}
else
{
lean_object* v_a_3469_; lean_object* v___x_3471_; uint8_t v_isShared_3472_; uint8_t v_isSharedCheck_3476_; 
lean_dec_ref_known(v_code_3296_, 2);
v_a_3469_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3476_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3476_ == 0)
{
v___x_3471_ = v___x_3428_;
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
else
{
lean_inc(v_a_3469_);
lean_dec(v___x_3428_);
v___x_3471_ = lean_box(0);
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
v_resetjp_3470_:
{
lean_object* v___x_3474_; 
if (v_isShared_3472_ == 0)
{
v___x_3474_ = v___x_3471_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v_a_3469_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
return v___x_3474_;
}
}
}
}
}
case 3:
{
lean_object* v_fvarId_3555_; lean_object* v_args_3556_; size_t v_sz_3557_; size_t v___x_3558_; lean_object* v___x_3559_; 
v_fvarId_3555_ = lean_ctor_get(v_code_3296_, 0);
v_args_3556_ = lean_ctor_get(v_code_3296_, 1);
v_sz_3557_ = lean_array_size(v_args_3556_);
v___x_3558_ = ((size_t)0ULL);
lean_inc_ref(v_args_3556_);
v___x_3559_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_3557_, v___x_3558_, v_args_3556_, v_a_3297_);
if (lean_obj_tag(v___x_3559_) == 0)
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3595_; 
v_a_3560_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3562_ = v___x_3559_;
v_isShared_3563_ = v_isSharedCheck_3595_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3559_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3595_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
uint8_t v___x_3564_; 
v___x_3564_ = l_Lean_instBEqFVarId_beq(v_fvarId_3555_, v_fvarId_3555_);
if (v___x_3564_ == 0)
{
lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3574_; 
lean_inc(v_fvarId_3555_);
v_isSharedCheck_3574_ = !lean_is_exclusive(v_code_3296_);
if (v_isSharedCheck_3574_ == 0)
{
lean_object* v_unused_3575_; lean_object* v_unused_3576_; 
v_unused_3575_ = lean_ctor_get(v_code_3296_, 1);
lean_dec(v_unused_3575_);
v_unused_3576_ = lean_ctor_get(v_code_3296_, 0);
lean_dec(v_unused_3576_);
v___x_3566_ = v_code_3296_;
v_isShared_3567_ = v_isSharedCheck_3574_;
goto v_resetjp_3565_;
}
else
{
lean_dec(v_code_3296_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3574_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3569_; 
if (v_isShared_3567_ == 0)
{
lean_ctor_set(v___x_3566_, 1, v_a_3560_);
v___x_3569_ = v___x_3566_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_fvarId_3555_);
lean_ctor_set(v_reuseFailAlloc_3573_, 1, v_a_3560_);
v___x_3569_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
lean_object* v___x_3571_; 
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 0, v___x_3569_);
v___x_3571_ = v___x_3562_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v___x_3569_);
v___x_3571_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
return v___x_3571_;
}
}
}
}
else
{
size_t v___x_3577_; size_t v___x_3578_; uint8_t v___x_3579_; 
v___x_3577_ = lean_ptr_addr(v_args_3556_);
v___x_3578_ = lean_ptr_addr(v_a_3560_);
v___x_3579_ = lean_usize_dec_eq(v___x_3577_, v___x_3578_);
if (v___x_3579_ == 0)
{
lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3589_; 
lean_inc(v_fvarId_3555_);
v_isSharedCheck_3589_ = !lean_is_exclusive(v_code_3296_);
if (v_isSharedCheck_3589_ == 0)
{
lean_object* v_unused_3590_; lean_object* v_unused_3591_; 
v_unused_3590_ = lean_ctor_get(v_code_3296_, 1);
lean_dec(v_unused_3590_);
v_unused_3591_ = lean_ctor_get(v_code_3296_, 0);
lean_dec(v_unused_3591_);
v___x_3581_ = v_code_3296_;
v_isShared_3582_ = v_isSharedCheck_3589_;
goto v_resetjp_3580_;
}
else
{
lean_dec(v_code_3296_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3589_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v___x_3584_; 
if (v_isShared_3582_ == 0)
{
lean_ctor_set(v___x_3581_, 1, v_a_3560_);
v___x_3584_ = v___x_3581_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v_fvarId_3555_);
lean_ctor_set(v_reuseFailAlloc_3588_, 1, v_a_3560_);
v___x_3584_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
lean_object* v___x_3586_; 
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 0, v___x_3584_);
v___x_3586_ = v___x_3562_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v___x_3584_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
else
{
lean_object* v___x_3593_; 
lean_dec(v_a_3560_);
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 0, v_code_3296_);
v___x_3593_ = v___x_3562_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_code_3296_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
}
else
{
lean_object* v_a_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3603_; 
lean_dec_ref_known(v_code_3296_, 2);
v_a_3596_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3598_ = v___x_3559_;
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_a_3596_);
lean_dec(v___x_3559_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v___x_3601_; 
if (v_isShared_3599_ == 0)
{
v___x_3601_ = v___x_3598_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v_a_3596_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
}
}
case 4:
{
lean_object* v_cases_3604_; lean_object* v_typeName_3605_; lean_object* v_resultType_3606_; lean_object* v_discr_3607_; lean_object* v_alts_3608_; lean_object* v___x_3609_; uint8_t v___x_3610_; 
v_cases_3604_ = lean_ctor_get(v_code_3296_, 0);
lean_inc_ref(v_cases_3604_);
v_typeName_3605_ = lean_ctor_get(v_cases_3604_, 0);
v_resultType_3606_ = lean_ctor_get(v_cases_3604_, 1);
v_discr_3607_ = lean_ctor_get(v_cases_3604_, 2);
v_alts_3608_ = lean_ctor_get(v_cases_3604_, 3);
v___x_3609_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0));
v___x_3610_ = lean_name_eq(v_typeName_3605_, v___x_3609_);
if (v___x_3610_ == 0)
{
lean_object* v___x_3611_; uint8_t v___x_3612_; 
v___x_3611_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3));
v___x_3612_ = lean_name_eq(v_typeName_3605_, v___x_3611_);
if (v___x_3612_ == 0)
{
lean_object* v___x_3613_; uint8_t v___x_3614_; 
v___x_3613_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__9));
v___x_3614_ = lean_name_eq(v_typeName_3605_, v___x_3613_);
if (v___x_3614_ == 0)
{
lean_object* v___x_3615_; uint8_t v___x_3616_; 
v___x_3615_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__11));
v___x_3616_ = lean_name_eq(v_typeName_3605_, v___x_3615_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3617_; uint8_t v___x_3618_; 
v___x_3617_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__13));
v___x_3618_ = lean_name_eq(v_typeName_3605_, v___x_3617_);
if (v___x_3618_ == 0)
{
lean_object* v___x_3619_; uint8_t v___x_3620_; 
v___x_3619_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__15));
v___x_3620_ = lean_name_eq(v_typeName_3605_, v___x_3619_);
if (v___x_3620_ == 0)
{
lean_object* v___x_3621_; uint8_t v___x_3622_; 
v___x_3621_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__17));
v___x_3622_ = lean_name_eq(v_typeName_3605_, v___x_3621_);
if (v___x_3622_ == 0)
{
lean_object* v___x_3623_; uint8_t v___x_3624_; 
v___x_3623_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__18));
v___x_3624_ = lean_name_eq(v_typeName_3605_, v___x_3623_);
if (v___x_3624_ == 0)
{
lean_object* v___x_3625_; uint8_t v___x_3626_; 
v___x_3625_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__19));
v___x_3626_ = lean_name_eq(v_typeName_3605_, v___x_3625_);
if (v___x_3626_ == 0)
{
lean_object* v___x_3627_; uint8_t v___x_3628_; 
v___x_3627_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__20));
v___x_3628_ = lean_name_eq(v_typeName_3605_, v___x_3627_);
if (v___x_3628_ == 0)
{
lean_object* v___x_3629_; uint8_t v___x_3630_; 
v___x_3629_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__21));
v___x_3630_ = lean_name_eq(v_typeName_3605_, v___x_3629_);
if (v___x_3630_ == 0)
{
lean_object* v___x_3631_; uint8_t v___x_3632_; 
v___x_3631_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__22));
v___x_3632_ = lean_name_eq(v_typeName_3605_, v___x_3631_);
if (v___x_3632_ == 0)
{
lean_object* v___x_3633_; uint8_t v___x_3634_; 
v___x_3633_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__23));
v___x_3634_ = lean_name_eq(v_typeName_3605_, v___x_3633_);
if (v___x_3634_ == 0)
{
lean_object* v___x_3635_; uint8_t v___x_3636_; 
v___x_3635_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__24));
v___x_3636_ = lean_name_eq(v_typeName_3605_, v___x_3635_);
if (v___x_3636_ == 0)
{
lean_object* v___x_3637_; uint8_t v___x_3638_; 
v___x_3637_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__25));
v___x_3638_ = lean_name_eq(v_typeName_3605_, v___x_3637_);
if (v___x_3638_ == 0)
{
lean_object* v___x_3639_; 
lean_inc(v_typeName_3605_);
v___x_3639_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_typeName_3605_, v_a_3300_, v_a_3301_);
if (lean_obj_tag(v___x_3639_) == 0)
{
lean_object* v_a_3640_; 
v_a_3640_ = lean_ctor_get(v___x_3639_, 0);
lean_inc(v_a_3640_);
lean_dec_ref_known(v___x_3639_, 1);
if (lean_obj_tag(v_a_3640_) == 1)
{
lean_object* v_val_3641_; lean_object* v___x_3642_; 
lean_dec_ref_known(v_code_3296_, 1);
v_val_3641_ = lean_ctor_get(v_a_3640_, 0);
lean_inc(v_val_3641_);
lean_dec_ref_known(v_a_3640_, 1);
v___x_3642_ = l_Lean_Compiler_LCNF_trivialStructToMono(v_val_3641_, v_cases_3604_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
lean_dec(v_val_3641_);
return v___x_3642_;
}
else
{
lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3741_; 
lean_inc_ref(v_alts_3608_);
lean_inc(v_discr_3607_);
lean_inc_ref(v_resultType_3606_);
lean_inc(v_typeName_3605_);
lean_dec(v_a_3640_);
v_isSharedCheck_3741_ = !lean_is_exclusive(v_cases_3604_);
if (v_isSharedCheck_3741_ == 0)
{
lean_object* v_unused_3742_; lean_object* v_unused_3743_; lean_object* v_unused_3744_; lean_object* v_unused_3745_; 
v_unused_3742_ = lean_ctor_get(v_cases_3604_, 3);
lean_dec(v_unused_3742_);
v_unused_3743_ = lean_ctor_get(v_cases_3604_, 2);
lean_dec(v_unused_3743_);
v_unused_3744_ = lean_ctor_get(v_cases_3604_, 1);
lean_dec(v_unused_3744_);
v_unused_3745_ = lean_ctor_get(v_cases_3604_, 0);
lean_dec(v_unused_3745_);
v___x_3644_ = v_cases_3604_;
v_isShared_3645_ = v_isSharedCheck_3741_;
goto v_resetjp_3643_;
}
else
{
lean_dec(v_cases_3604_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3741_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3646_; 
lean_inc_ref(v_resultType_3606_);
v___x_3646_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3606_, v_a_3300_, v_a_3301_);
if (lean_obj_tag(v___x_3646_) == 0)
{
lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3732_; 
v_a_3647_ = lean_ctor_get(v___x_3646_, 0);
v_isSharedCheck_3732_ = !lean_is_exclusive(v___x_3646_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3649_ = v___x_3646_;
v_isShared_3650_ = v_isSharedCheck_3732_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_dec(v___x_3646_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3732_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3651_; lean_object* v_env_3652_; lean_object* v___x_3653_; 
v___x_3651_ = lean_st_ref_get(v_a_3301_);
v_env_3652_ = lean_ctor_get(v___x_3651_, 0);
lean_inc_ref_n(v_env_3652_, 2);
lean_dec(v___x_3651_);
lean_inc(v_typeName_3605_);
v___x_3653_ = l_Lean_Environment_find_x3f(v_env_3652_, v_typeName_3605_, v___x_3638_);
if (lean_obj_tag(v___x_3653_) == 1)
{
lean_object* v_val_3654_; 
v_val_3654_ = lean_ctor_get(v___x_3653_, 0);
lean_inc(v_val_3654_);
lean_dec_ref_known(v___x_3653_, 1);
if (lean_obj_tag(v_val_3654_) == 5)
{
lean_object* v_val_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3731_; 
v_val_3655_ = lean_ctor_get(v_val_3654_, 0);
v_isSharedCheck_3731_ = !lean_is_exclusive(v_val_3654_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3657_ = v_val_3654_;
v_isShared_3658_ = v_isSharedCheck_3731_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_val_3655_);
lean_dec(v_val_3654_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3731_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v_toConstantVal_3659_; lean_object* v_name_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; 
v_toConstantVal_3659_ = lean_ctor_get(v_val_3655_, 0);
lean_inc_ref(v_toConstantVal_3659_);
lean_dec_ref(v_val_3655_);
v_name_3660_ = lean_ctor_get(v_toConstantVal_3659_, 0);
lean_inc(v_name_3660_);
lean_dec_ref(v_toConstantVal_3659_);
v___x_3661_ = l_Lean_mkCasesOnName(v_name_3660_);
lean_inc_ref(v_env_3652_);
v___x_3662_ = l_Lean_Compiler_getImplementedBy_x3f(v_env_3652_, v___x_3661_);
if (lean_obj_tag(v___x_3662_) == 0)
{
size_t v_sz_3663_; size_t v___x_3664_; lean_object* v___x_3665_; 
lean_dec_ref(v_env_3652_);
v_sz_3663_ = lean_array_size(v_alts_3608_);
v___x_3664_ = ((size_t)0ULL);
lean_inc_ref(v_alts_3608_);
v___x_3665_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(v_sz_3663_, v___x_3664_, v_alts_3608_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
if (lean_obj_tag(v___x_3665_) == 0)
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3690_; 
v_a_3666_ = lean_ctor_get(v___x_3665_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3665_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3668_ = v___x_3665_;
v_isShared_3669_ = v_isSharedCheck_3690_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3665_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3690_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
size_t v___x_3680_; size_t v___x_3681_; uint8_t v___x_3682_; 
v___x_3680_ = lean_ptr_addr(v_alts_3608_);
lean_dec_ref(v_alts_3608_);
v___x_3681_ = lean_ptr_addr(v_a_3666_);
v___x_3682_ = lean_usize_dec_eq(v___x_3680_, v___x_3681_);
if (v___x_3682_ == 0)
{
lean_del_object(v___x_3649_);
lean_dec_ref(v_resultType_3606_);
lean_dec_ref_known(v_code_3296_, 1);
goto v___jp_3670_;
}
else
{
size_t v___x_3683_; size_t v___x_3684_; uint8_t v___x_3685_; 
v___x_3683_ = lean_ptr_addr(v_resultType_3606_);
lean_dec_ref(v_resultType_3606_);
v___x_3684_ = lean_ptr_addr(v_a_3647_);
v___x_3685_ = lean_usize_dec_eq(v___x_3683_, v___x_3684_);
if (v___x_3685_ == 0)
{
lean_del_object(v___x_3649_);
lean_dec_ref_known(v_code_3296_, 1);
goto v___jp_3670_;
}
else
{
uint8_t v___x_3686_; 
v___x_3686_ = l_Lean_instBEqFVarId_beq(v_discr_3607_, v_discr_3607_);
if (v___x_3686_ == 0)
{
lean_del_object(v___x_3649_);
lean_dec_ref_known(v_code_3296_, 1);
goto v___jp_3670_;
}
else
{
lean_object* v___x_3688_; 
lean_del_object(v___x_3668_);
lean_dec(v_a_3666_);
lean_del_object(v___x_3657_);
lean_dec(v_a_3647_);
lean_del_object(v___x_3644_);
lean_dec(v_discr_3607_);
lean_dec(v_typeName_3605_);
if (v_isShared_3650_ == 0)
{
lean_ctor_set(v___x_3649_, 0, v_code_3296_);
v___x_3688_ = v___x_3649_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_code_3296_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
}
v___jp_3670_:
{
lean_object* v___x_3672_; 
if (v_isShared_3645_ == 0)
{
lean_ctor_set(v___x_3644_, 3, v_a_3666_);
lean_ctor_set(v___x_3644_, 1, v_a_3647_);
v___x_3672_ = v___x_3644_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v_typeName_3605_);
lean_ctor_set(v_reuseFailAlloc_3679_, 1, v_a_3647_);
lean_ctor_set(v_reuseFailAlloc_3679_, 2, v_discr_3607_);
lean_ctor_set(v_reuseFailAlloc_3679_, 3, v_a_3666_);
v___x_3672_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
lean_object* v___x_3674_; 
if (v_isShared_3658_ == 0)
{
lean_ctor_set_tag(v___x_3657_, 4);
lean_ctor_set(v___x_3657_, 0, v___x_3672_);
v___x_3674_ = v___x_3657_;
goto v_reusejp_3673_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v___x_3672_);
v___x_3674_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3673_;
}
v_reusejp_3673_:
{
lean_object* v___x_3676_; 
if (v_isShared_3669_ == 0)
{
lean_ctor_set(v___x_3668_, 0, v___x_3674_);
v___x_3676_ = v___x_3668_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v___x_3674_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
}
}
}
}
else
{
lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3698_; 
lean_del_object(v___x_3657_);
lean_del_object(v___x_3649_);
lean_dec(v_a_3647_);
lean_del_object(v___x_3644_);
lean_dec_ref(v_alts_3608_);
lean_dec(v_discr_3607_);
lean_dec_ref(v_resultType_3606_);
lean_dec(v_typeName_3605_);
lean_dec_ref_known(v_code_3296_, 1);
v_a_3691_ = lean_ctor_get(v___x_3665_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3665_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3693_ = v___x_3665_;
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_dec(v___x_3665_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
lean_object* v___x_3696_; 
if (v_isShared_3694_ == 0)
{
v___x_3696_ = v___x_3693_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_a_3691_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
return v___x_3696_;
}
}
}
}
else
{
lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3729_; 
lean_dec_ref_known(v___x_3662_, 1);
lean_del_object(v___x_3657_);
lean_del_object(v___x_3649_);
lean_dec_ref(v_resultType_3606_);
v_isSharedCheck_3729_ = !lean_is_exclusive(v_code_3296_);
if (v_isSharedCheck_3729_ == 0)
{
lean_object* v_unused_3730_; 
v_unused_3730_ = lean_ctor_get(v_code_3296_, 0);
lean_dec(v_unused_3730_);
v___x_3700_ = v_code_3296_;
v_isShared_3701_ = v_isSharedCheck_3729_;
goto v_resetjp_3699_;
}
else
{
lean_dec(v_code_3296_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3729_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v___x_3702_; lean_object* v___x_3703_; size_t v_sz_3704_; size_t v___x_3705_; lean_object* v___x_3706_; 
v___x_3702_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___closed__4));
v___x_3703_ = l_Lean_Name_append(v_typeName_3605_, v___x_3702_);
v_sz_3704_ = lean_array_size(v_alts_3608_);
v___x_3705_ = ((size_t)0ULL);
v___x_3706_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(v_env_3652_, v___x_3638_, v_sz_3704_, v___x_3705_, v_alts_3608_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
if (lean_obj_tag(v___x_3706_) == 0)
{
lean_object* v_a_3707_; lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3720_; 
v_a_3707_ = lean_ctor_get(v___x_3706_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v___x_3706_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3709_ = v___x_3706_;
v_isShared_3710_ = v_isSharedCheck_3720_;
goto v_resetjp_3708_;
}
else
{
lean_inc(v_a_3707_);
lean_dec(v___x_3706_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3720_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v___x_3712_; 
if (v_isShared_3645_ == 0)
{
lean_ctor_set(v___x_3644_, 3, v_a_3707_);
lean_ctor_set(v___x_3644_, 1, v_a_3647_);
lean_ctor_set(v___x_3644_, 0, v___x_3703_);
v___x_3712_ = v___x_3644_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v___x_3703_);
lean_ctor_set(v_reuseFailAlloc_3719_, 1, v_a_3647_);
lean_ctor_set(v_reuseFailAlloc_3719_, 2, v_discr_3607_);
lean_ctor_set(v_reuseFailAlloc_3719_, 3, v_a_3707_);
v___x_3712_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
lean_object* v___x_3714_; 
if (v_isShared_3701_ == 0)
{
lean_ctor_set(v___x_3700_, 0, v___x_3712_);
v___x_3714_ = v___x_3700_;
goto v_reusejp_3713_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v___x_3712_);
v___x_3714_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3713_;
}
v_reusejp_3713_:
{
lean_object* v___x_3716_; 
if (v_isShared_3710_ == 0)
{
lean_ctor_set(v___x_3709_, 0, v___x_3714_);
v___x_3716_ = v___x_3709_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v___x_3714_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
}
}
}
else
{
lean_object* v_a_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3728_; 
lean_dec(v___x_3703_);
lean_del_object(v___x_3700_);
lean_dec(v_a_3647_);
lean_del_object(v___x_3644_);
lean_dec(v_discr_3607_);
v_a_3721_ = lean_ctor_get(v___x_3706_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v___x_3706_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3723_ = v___x_3706_;
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_a_3721_);
lean_dec(v___x_3706_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3726_; 
if (v_isShared_3724_ == 0)
{
v___x_3726_ = v___x_3723_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_a_3721_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
}
}
}
}
}
else
{
lean_dec(v_val_3654_);
lean_dec_ref(v_env_3652_);
lean_del_object(v___x_3649_);
lean_dec(v_a_3647_);
lean_del_object(v___x_3644_);
lean_dec_ref(v_alts_3608_);
lean_dec(v_discr_3607_);
lean_dec_ref(v_resultType_3606_);
lean_dec(v_typeName_3605_);
lean_dec_ref_known(v_code_3296_, 1);
v___y_3304_ = v_a_3297_;
v___y_3305_ = v_a_3298_;
v___y_3306_ = v_a_3299_;
v___y_3307_ = v_a_3300_;
v___y_3308_ = v_a_3301_;
goto v___jp_3303_;
}
}
else
{
lean_dec(v___x_3653_);
lean_dec_ref(v_env_3652_);
lean_del_object(v___x_3649_);
lean_dec(v_a_3647_);
lean_del_object(v___x_3644_);
lean_dec_ref(v_alts_3608_);
lean_dec(v_discr_3607_);
lean_dec_ref(v_resultType_3606_);
lean_dec(v_typeName_3605_);
lean_dec_ref_known(v_code_3296_, 1);
v___y_3304_ = v_a_3297_;
v___y_3305_ = v_a_3298_;
v___y_3306_ = v_a_3299_;
v___y_3307_ = v_a_3300_;
v___y_3308_ = v_a_3301_;
goto v___jp_3303_;
}
}
}
else
{
lean_object* v_a_3733_; lean_object* v___x_3735_; uint8_t v_isShared_3736_; uint8_t v_isSharedCheck_3740_; 
lean_del_object(v___x_3644_);
lean_dec_ref(v_alts_3608_);
lean_dec(v_discr_3607_);
lean_dec_ref(v_resultType_3606_);
lean_dec(v_typeName_3605_);
lean_dec_ref_known(v_code_3296_, 1);
v_a_3733_ = lean_ctor_get(v___x_3646_, 0);
v_isSharedCheck_3740_ = !lean_is_exclusive(v___x_3646_);
if (v_isSharedCheck_3740_ == 0)
{
v___x_3735_ = v___x_3646_;
v_isShared_3736_ = v_isSharedCheck_3740_;
goto v_resetjp_3734_;
}
else
{
lean_inc(v_a_3733_);
lean_dec(v___x_3646_);
v___x_3735_ = lean_box(0);
v_isShared_3736_ = v_isSharedCheck_3740_;
goto v_resetjp_3734_;
}
v_resetjp_3734_:
{
lean_object* v___x_3738_; 
if (v_isShared_3736_ == 0)
{
v___x_3738_ = v___x_3735_;
goto v_reusejp_3737_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v_a_3733_);
v___x_3738_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3737_;
}
v_reusejp_3737_:
{
return v___x_3738_;
}
}
}
}
}
}
else
{
lean_object* v_a_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3753_; 
lean_dec_ref_known(v_code_3296_, 1);
lean_dec_ref(v_cases_3604_);
v_a_3746_ = lean_ctor_get(v___x_3639_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3639_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3748_ = v___x_3639_;
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_a_3746_);
lean_dec(v___x_3639_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3751_; 
if (v_isShared_3749_ == 0)
{
v___x_3751_ = v___x_3748_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_a_3746_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
return v___x_3751_;
}
}
}
}
else
{
lean_object* v___x_3754_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3754_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_cases_3604_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3754_;
}
}
else
{
lean_object* v___x_3755_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3755_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_cases_3604_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
lean_dec_ref(v_cases_3604_);
return v___x_3755_;
}
}
else
{
lean_object* v___x_3756_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3756_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_cases_3604_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3756_;
}
}
else
{
lean_object* v___x_3757_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3757_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_cases_3604_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3757_;
}
}
else
{
lean_object* v___x_3758_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3758_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_cases_3604_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3758_;
}
}
else
{
lean_object* v___x_3759_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3759_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_cases_3604_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3759_;
}
}
else
{
lean_object* v___x_3760_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3760_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_cases_3604_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3760_;
}
}
else
{
lean_object* v___x_3761_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3761_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_cases_3604_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3761_;
}
}
else
{
lean_object* v___x_3762_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3762_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3604_, v___x_3621_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3762_;
}
}
else
{
lean_object* v___x_3763_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3763_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3604_, v___x_3619_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3763_;
}
}
else
{
lean_object* v___x_3764_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3764_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3604_, v___x_3617_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3764_;
}
}
else
{
lean_object* v___x_3765_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3765_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3604_, v___x_3615_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3765_;
}
}
else
{
lean_object* v___x_3766_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3766_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3604_, v___x_3613_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3766_;
}
}
else
{
lean_object* v___x_3767_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3767_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_cases_3604_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3767_;
}
}
else
{
lean_object* v___x_3768_; 
lean_dec_ref_known(v_code_3296_, 1);
v___x_3768_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_cases_3604_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3768_;
}
}
case 5:
{
lean_object* v___x_3769_; 
v___x_3769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3769_, 0, v_code_3296_);
return v___x_3769_;
}
case 6:
{
lean_object* v_type_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3794_; 
v_type_3770_ = lean_ctor_get(v_code_3296_, 0);
v_isSharedCheck_3794_ = !lean_is_exclusive(v_code_3296_);
if (v_isSharedCheck_3794_ == 0)
{
v___x_3772_ = v_code_3296_;
v_isShared_3773_ = v_isSharedCheck_3794_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_type_3770_);
lean_dec(v_code_3296_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3794_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3774_; 
v___x_3774_ = l_Lean_Compiler_LCNF_toMonoType(v_type_3770_, v_a_3300_, v_a_3301_);
if (lean_obj_tag(v___x_3774_) == 0)
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3785_; 
v_a_3775_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3777_ = v___x_3774_;
v_isShared_3778_ = v_isSharedCheck_3785_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3774_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3785_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3780_; 
if (v_isShared_3773_ == 0)
{
lean_ctor_set(v___x_3772_, 0, v_a_3775_);
v___x_3780_ = v___x_3772_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3775_);
v___x_3780_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
lean_object* v___x_3782_; 
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 0, v___x_3780_);
v___x_3782_ = v___x_3777_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v___x_3780_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
}
}
else
{
lean_object* v_a_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3793_; 
lean_del_object(v___x_3772_);
v_a_3786_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3793_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3788_ = v___x_3774_;
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_a_3786_);
lean_dec(v___x_3774_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v___x_3791_; 
if (v_isShared_3789_ == 0)
{
v___x_3791_ = v___x_3788_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_a_3786_);
v___x_3791_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
return v___x_3791_;
}
}
}
}
}
default: 
{
lean_object* v_decl_3795_; lean_object* v_k_3796_; 
v_decl_3795_ = lean_ctor_get(v_code_3296_, 0);
v_k_3796_ = lean_ctor_get(v_code_3296_, 1);
lean_inc_ref(v_k_3796_);
lean_inc_ref(v_decl_3795_);
v_decl_3312_ = v_decl_3795_;
v_k_3313_ = v_k_3796_;
v___y_3314_ = v_a_3297_;
v___y_3315_ = v_a_3298_;
v___y_3316_ = v_a_3299_;
v___y_3317_ = v_a_3300_;
v___y_3318_ = v_a_3301_;
goto v___jp_3311_;
}
}
v___jp_3303_:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3309_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__1, &l_Lean_Compiler_LCNF_Code_toMono___closed__1_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__1);
v___x_3310_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_3309_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_);
return v___x_3310_;
}
v___jp_3311_:
{
lean_object* v___x_3319_; 
v___x_3319_ = l_Lean_Compiler_LCNF_FunDecl_toMono(v_decl_3312_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_object* v_a_3320_; lean_object* v___x_3321_; 
v_a_3320_ = lean_ctor_get(v___x_3319_, 0);
lean_inc(v_a_3320_);
lean_dec_ref_known(v___x_3319_, 1);
v___x_3321_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3321_) == 0)
{
switch(lean_obj_tag(v_code_3296_))
{
case 1:
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3361_; 
v_a_3322_ = lean_ctor_get(v___x_3321_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3324_ = v___x_3321_;
v_isShared_3325_ = v_isSharedCheck_3361_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3321_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3361_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v_decl_3326_; lean_object* v_k_3327_; size_t v___x_3328_; size_t v___x_3329_; uint8_t v___x_3330_; 
v_decl_3326_ = lean_ctor_get(v_code_3296_, 0);
v_k_3327_ = lean_ctor_get(v_code_3296_, 1);
v___x_3328_ = lean_ptr_addr(v_k_3327_);
v___x_3329_ = lean_ptr_addr(v_a_3322_);
v___x_3330_ = lean_usize_dec_eq(v___x_3328_, v___x_3329_);
if (v___x_3330_ == 0)
{
lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3340_; 
v_isSharedCheck_3340_ = !lean_is_exclusive(v_code_3296_);
if (v_isSharedCheck_3340_ == 0)
{
lean_object* v_unused_3341_; lean_object* v_unused_3342_; 
v_unused_3341_ = lean_ctor_get(v_code_3296_, 1);
lean_dec(v_unused_3341_);
v_unused_3342_ = lean_ctor_get(v_code_3296_, 0);
lean_dec(v_unused_3342_);
v___x_3332_ = v_code_3296_;
v_isShared_3333_ = v_isSharedCheck_3340_;
goto v_resetjp_3331_;
}
else
{
lean_dec(v_code_3296_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3340_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3335_; 
if (v_isShared_3333_ == 0)
{
lean_ctor_set(v___x_3332_, 1, v_a_3322_);
lean_ctor_set(v___x_3332_, 0, v_a_3320_);
v___x_3335_ = v___x_3332_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_a_3320_);
lean_ctor_set(v_reuseFailAlloc_3339_, 1, v_a_3322_);
v___x_3335_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
lean_object* v___x_3337_; 
if (v_isShared_3325_ == 0)
{
lean_ctor_set(v___x_3324_, 0, v___x_3335_);
v___x_3337_ = v___x_3324_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v___x_3335_);
v___x_3337_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
return v___x_3337_;
}
}
}
}
else
{
size_t v___x_3343_; size_t v___x_3344_; uint8_t v___x_3345_; 
v___x_3343_ = lean_ptr_addr(v_decl_3326_);
v___x_3344_ = lean_ptr_addr(v_a_3320_);
v___x_3345_ = lean_usize_dec_eq(v___x_3343_, v___x_3344_);
if (v___x_3345_ == 0)
{
lean_object* v___x_3347_; uint8_t v_isShared_3348_; uint8_t v_isSharedCheck_3355_; 
v_isSharedCheck_3355_ = !lean_is_exclusive(v_code_3296_);
if (v_isSharedCheck_3355_ == 0)
{
lean_object* v_unused_3356_; lean_object* v_unused_3357_; 
v_unused_3356_ = lean_ctor_get(v_code_3296_, 1);
lean_dec(v_unused_3356_);
v_unused_3357_ = lean_ctor_get(v_code_3296_, 0);
lean_dec(v_unused_3357_);
v___x_3347_ = v_code_3296_;
v_isShared_3348_ = v_isSharedCheck_3355_;
goto v_resetjp_3346_;
}
else
{
lean_dec(v_code_3296_);
v___x_3347_ = lean_box(0);
v_isShared_3348_ = v_isSharedCheck_3355_;
goto v_resetjp_3346_;
}
v_resetjp_3346_:
{
lean_object* v___x_3350_; 
if (v_isShared_3348_ == 0)
{
lean_ctor_set(v___x_3347_, 1, v_a_3322_);
lean_ctor_set(v___x_3347_, 0, v_a_3320_);
v___x_3350_ = v___x_3347_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v_a_3320_);
lean_ctor_set(v_reuseFailAlloc_3354_, 1, v_a_3322_);
v___x_3350_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
lean_object* v___x_3352_; 
if (v_isShared_3325_ == 0)
{
lean_ctor_set(v___x_3324_, 0, v___x_3350_);
v___x_3352_ = v___x_3324_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v___x_3350_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
}
else
{
lean_object* v___x_3359_; 
lean_dec(v_a_3322_);
lean_dec(v_a_3320_);
if (v_isShared_3325_ == 0)
{
lean_ctor_set(v___x_3324_, 0, v_code_3296_);
v___x_3359_ = v___x_3324_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_code_3296_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
}
}
}
case 2:
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3401_; 
v_a_3362_ = lean_ctor_get(v___x_3321_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3364_ = v___x_3321_;
v_isShared_3365_ = v_isSharedCheck_3401_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3321_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3401_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v_decl_3366_; lean_object* v_k_3367_; size_t v___x_3368_; size_t v___x_3369_; uint8_t v___x_3370_; 
v_decl_3366_ = lean_ctor_get(v_code_3296_, 0);
v_k_3367_ = lean_ctor_get(v_code_3296_, 1);
v___x_3368_ = lean_ptr_addr(v_k_3367_);
v___x_3369_ = lean_ptr_addr(v_a_3362_);
v___x_3370_ = lean_usize_dec_eq(v___x_3368_, v___x_3369_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3380_; 
v_isSharedCheck_3380_ = !lean_is_exclusive(v_code_3296_);
if (v_isSharedCheck_3380_ == 0)
{
lean_object* v_unused_3381_; lean_object* v_unused_3382_; 
v_unused_3381_ = lean_ctor_get(v_code_3296_, 1);
lean_dec(v_unused_3381_);
v_unused_3382_ = lean_ctor_get(v_code_3296_, 0);
lean_dec(v_unused_3382_);
v___x_3372_ = v_code_3296_;
v_isShared_3373_ = v_isSharedCheck_3380_;
goto v_resetjp_3371_;
}
else
{
lean_dec(v_code_3296_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3380_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v___x_3375_; 
if (v_isShared_3373_ == 0)
{
lean_ctor_set(v___x_3372_, 1, v_a_3362_);
lean_ctor_set(v___x_3372_, 0, v_a_3320_);
v___x_3375_ = v___x_3372_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v_a_3320_);
lean_ctor_set(v_reuseFailAlloc_3379_, 1, v_a_3362_);
v___x_3375_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
lean_object* v___x_3377_; 
if (v_isShared_3365_ == 0)
{
lean_ctor_set(v___x_3364_, 0, v___x_3375_);
v___x_3377_ = v___x_3364_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v___x_3375_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
return v___x_3377_;
}
}
}
}
else
{
size_t v___x_3383_; size_t v___x_3384_; uint8_t v___x_3385_; 
v___x_3383_ = lean_ptr_addr(v_decl_3366_);
v___x_3384_ = lean_ptr_addr(v_a_3320_);
v___x_3385_ = lean_usize_dec_eq(v___x_3383_, v___x_3384_);
if (v___x_3385_ == 0)
{
lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3395_; 
v_isSharedCheck_3395_ = !lean_is_exclusive(v_code_3296_);
if (v_isSharedCheck_3395_ == 0)
{
lean_object* v_unused_3396_; lean_object* v_unused_3397_; 
v_unused_3396_ = lean_ctor_get(v_code_3296_, 1);
lean_dec(v_unused_3396_);
v_unused_3397_ = lean_ctor_get(v_code_3296_, 0);
lean_dec(v_unused_3397_);
v___x_3387_ = v_code_3296_;
v_isShared_3388_ = v_isSharedCheck_3395_;
goto v_resetjp_3386_;
}
else
{
lean_dec(v_code_3296_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3395_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
lean_object* v___x_3390_; 
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 1, v_a_3362_);
lean_ctor_set(v___x_3387_, 0, v_a_3320_);
v___x_3390_ = v___x_3387_;
goto v_reusejp_3389_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v_a_3320_);
lean_ctor_set(v_reuseFailAlloc_3394_, 1, v_a_3362_);
v___x_3390_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3389_;
}
v_reusejp_3389_:
{
lean_object* v___x_3392_; 
if (v_isShared_3365_ == 0)
{
lean_ctor_set(v___x_3364_, 0, v___x_3390_);
v___x_3392_ = v___x_3364_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v___x_3390_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
}
}
}
}
else
{
lean_object* v___x_3399_; 
lean_dec(v_a_3362_);
lean_dec(v_a_3320_);
if (v_isShared_3365_ == 0)
{
lean_ctor_set(v___x_3364_, 0, v_code_3296_);
v___x_3399_ = v___x_3364_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_code_3296_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
return v___x_3399_;
}
}
}
}
}
default: 
{
lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3410_; 
lean_dec(v_a_3320_);
lean_dec_ref(v_code_3296_);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3410_ == 0)
{
lean_object* v_unused_3411_; 
v_unused_3411_ = lean_ctor_get(v___x_3321_, 0);
lean_dec(v_unused_3411_);
v___x_3403_ = v___x_3321_;
v_isShared_3404_ = v_isSharedCheck_3410_;
goto v_resetjp_3402_;
}
else
{
lean_dec(v___x_3321_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3410_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3408_; 
v___x_3405_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__4, &l_Lean_Compiler_LCNF_Code_toMono___closed__4_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__4);
v___x_3406_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(v___x_3405_);
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 0, v___x_3406_);
v___x_3408_ = v___x_3403_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v___x_3406_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
}
else
{
lean_dec(v_a_3320_);
lean_dec_ref(v_code_3296_);
return v___x_3321_;
}
}
else
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
lean_dec_ref(v_k_3313_);
lean_dec_ref(v_code_3296_);
v_a_3412_ = lean_ctor_get(v___x_3319_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3319_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3319_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3319_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3412_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono(lean_object* v_decl_3797_, lean_object* v_a_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_, lean_object* v_a_3801_, lean_object* v_a_3802_){
_start:
{
lean_object* v_params_3804_; lean_object* v_type_3805_; lean_object* v_value_3806_; uint8_t v___x_3807_; lean_object* v___x_3808_; 
v_params_3804_ = lean_ctor_get(v_decl_3797_, 2);
v_type_3805_ = lean_ctor_get(v_decl_3797_, 3);
v_value_3806_ = lean_ctor_get(v_decl_3797_, 4);
v___x_3807_ = 0;
lean_inc_ref(v_type_3805_);
v___x_3808_ = l_Lean_Compiler_LCNF_toMonoType(v_type_3805_, v_a_3801_, v_a_3802_);
if (lean_obj_tag(v___x_3808_) == 0)
{
lean_object* v_a_3809_; size_t v_sz_3810_; size_t v___x_3811_; lean_object* v___x_3812_; 
v_a_3809_ = lean_ctor_get(v___x_3808_, 0);
lean_inc(v_a_3809_);
lean_dec_ref_known(v___x_3808_, 1);
v_sz_3810_ = lean_array_size(v_params_3804_);
v___x_3811_ = ((size_t)0ULL);
lean_inc_ref(v_params_3804_);
v___x_3812_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_3810_, v___x_3811_, v_params_3804_, v_a_3798_, v_a_3800_, v_a_3801_, v_a_3802_);
if (lean_obj_tag(v___x_3812_) == 0)
{
lean_object* v_a_3813_; lean_object* v___x_3814_; 
v_a_3813_ = lean_ctor_get(v___x_3812_, 0);
lean_inc(v_a_3813_);
lean_dec_ref_known(v___x_3812_, 1);
lean_inc_ref(v_value_3806_);
v___x_3814_ = l_Lean_Compiler_LCNF_Code_toMono(v_value_3806_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_);
if (lean_obj_tag(v___x_3814_) == 0)
{
lean_object* v_a_3815_; lean_object* v___x_3816_; 
v_a_3815_ = lean_ctor_get(v___x_3814_, 0);
lean_inc(v_a_3815_);
lean_dec_ref_known(v___x_3814_, 1);
v___x_3816_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3807_, v_decl_3797_, v_a_3809_, v_a_3813_, v_a_3815_, v_a_3800_);
return v___x_3816_;
}
else
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
lean_dec(v_a_3813_);
lean_dec(v_a_3809_);
lean_dec_ref(v_decl_3797_);
v_a_3817_ = lean_ctor_get(v___x_3814_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3814_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3819_ = v___x_3814_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v___x_3814_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3817_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
}
else
{
lean_object* v_a_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3832_; 
lean_dec(v_a_3809_);
lean_dec_ref(v_decl_3797_);
v_a_3825_ = lean_ctor_get(v___x_3812_, 0);
v_isSharedCheck_3832_ = !lean_is_exclusive(v___x_3812_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3827_ = v___x_3812_;
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_a_3825_);
lean_dec(v___x_3812_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3830_; 
if (v_isShared_3828_ == 0)
{
v___x_3830_ = v___x_3827_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_a_3825_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
return v___x_3830_;
}
}
}
}
else
{
lean_object* v_a_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3840_; 
lean_dec_ref(v_decl_3797_);
v_a_3833_ = lean_ctor_get(v___x_3808_, 0);
v_isSharedCheck_3840_ = !lean_is_exclusive(v___x_3808_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3835_ = v___x_3808_;
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_a_3833_);
lean_dec(v___x_3808_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v___x_3838_; 
if (v_isShared_3836_ == 0)
{
v___x_3838_ = v___x_3835_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v_a_3833_);
v___x_3838_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
return v___x_3838_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono___boxed(lean_object* v_decl_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_, lean_object* v_a_3846_, lean_object* v_a_3847_){
_start:
{
lean_object* v_res_3848_; 
v_res_3848_ = l_Lean_Compiler_LCNF_FunDecl_toMono(v_decl_3841_, v_a_3842_, v_a_3843_, v_a_3844_, v_a_3845_, v_a_3846_);
lean_dec(v_a_3846_);
lean_dec_ref(v_a_3845_);
lean_dec(v_a_3844_);
lean_dec_ref(v_a_3843_);
lean_dec(v_a_3842_);
return v_res_3848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___boxed(lean_object* v_sz_3849_, lean_object* v_i_3850_, lean_object* v_bs_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_){
_start:
{
size_t v_sz_boxed_3858_; size_t v_i_boxed_3859_; lean_object* v_res_3860_; 
v_sz_boxed_3858_ = lean_unbox_usize(v_sz_3849_);
lean_dec(v_sz_3849_);
v_i_boxed_3859_ = lean_unbox_usize(v_i_3850_);
lean_dec(v_i_3850_);
v_res_3860_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(v_sz_boxed_3858_, v_i_boxed_3859_, v_bs_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_);
lean_dec(v___y_3856_);
lean_dec_ref(v___y_3855_);
lean_dec(v___y_3854_);
lean_dec_ref(v___y_3853_);
lean_dec(v___y_3852_);
return v_res_3860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___boxed(lean_object* v_c_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_, lean_object* v_a_3867_){
_start:
{
lean_object* v_res_3868_; 
v_res_3868_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_c_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_);
lean_dec(v_a_3866_);
lean_dec_ref(v_a_3865_);
lean_dec(v_a_3864_);
lean_dec_ref(v_a_3863_);
lean_dec(v_a_3862_);
return v_res_3868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___boxed(lean_object* v_c_3869_, lean_object* v_uintName_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_, lean_object* v_a_3874_, lean_object* v_a_3875_, lean_object* v_a_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_c_3869_, v_uintName_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_, v_a_3875_);
lean_dec(v_a_3875_);
lean_dec_ref(v_a_3874_);
lean_dec(v_a_3873_);
lean_dec_ref(v_a_3872_);
lean_dec(v_a_3871_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___boxed(lean_object* v_c_3878_, lean_object* v_a_3879_, lean_object* v_a_3880_, lean_object* v_a_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_, lean_object* v_a_3884_){
_start:
{
lean_object* v_res_3885_; 
v_res_3885_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_c_3878_, v_a_3879_, v_a_3880_, v_a_3881_, v_a_3882_, v_a_3883_);
lean_dec(v_a_3883_);
lean_dec_ref(v_a_3882_);
lean_dec(v_a_3881_);
lean_dec_ref(v_a_3880_);
lean_dec(v_a_3879_);
return v_res_3885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___boxed(lean_object* v_c_3886_, lean_object* v_a_3887_, lean_object* v_a_3888_, lean_object* v_a_3889_, lean_object* v_a_3890_, lean_object* v_a_3891_, lean_object* v_a_3892_){
_start:
{
lean_object* v_res_3893_; 
v_res_3893_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_c_3886_, v_a_3887_, v_a_3888_, v_a_3889_, v_a_3890_, v_a_3891_);
lean_dec(v_a_3891_);
lean_dec_ref(v_a_3890_);
lean_dec(v_a_3889_);
lean_dec_ref(v_a_3888_);
lean_dec(v_a_3887_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___boxed(lean_object* v_c_3894_, lean_object* v_a_3895_, lean_object* v_a_3896_, lean_object* v_a_3897_, lean_object* v_a_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_){
_start:
{
lean_object* v_res_3901_; 
v_res_3901_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_c_3894_, v_a_3895_, v_a_3896_, v_a_3897_, v_a_3898_, v_a_3899_);
lean_dec(v_a_3899_);
lean_dec_ref(v_a_3898_);
lean_dec(v_a_3897_);
lean_dec_ref(v_a_3896_);
lean_dec(v_a_3895_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___boxed(lean_object* v_c_3902_, lean_object* v_a_3903_, lean_object* v_a_3904_, lean_object* v_a_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_){
_start:
{
lean_object* v_res_3909_; 
v_res_3909_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_c_3902_, v_a_3903_, v_a_3904_, v_a_3905_, v_a_3906_, v_a_3907_);
lean_dec(v_a_3907_);
lean_dec_ref(v_a_3906_);
lean_dec(v_a_3905_);
lean_dec_ref(v_a_3904_);
lean_dec(v_a_3903_);
return v_res_3909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___boxed(lean_object* v_c_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_, lean_object* v_a_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_c_3910_, v_a_3911_, v_a_3912_, v_a_3913_, v_a_3914_, v_a_3915_);
lean_dec(v_a_3915_);
lean_dec_ref(v_a_3914_);
lean_dec(v_a_3913_);
lean_dec_ref(v_a_3912_);
lean_dec(v_a_3911_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___boxed(lean_object* v___x_3918_, lean_object* v___x_3919_, lean_object* v_sz_3920_, lean_object* v_i_3921_, lean_object* v_bs_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_){
_start:
{
uint8_t v___x_35410__boxed_3929_; size_t v_sz_boxed_3930_; size_t v_i_boxed_3931_; lean_object* v_res_3932_; 
v___x_35410__boxed_3929_ = lean_unbox(v___x_3919_);
v_sz_boxed_3930_ = lean_unbox_usize(v_sz_3920_);
lean_dec(v_sz_3920_);
v_i_boxed_3931_ = lean_unbox_usize(v_i_3921_);
lean_dec(v_i_3921_);
v_res_3932_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(v___x_3918_, v___x_35410__boxed_3929_, v_sz_boxed_3930_, v_i_boxed_3931_, v_bs_3922_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_, v___y_3927_);
lean_dec(v___y_3927_);
lean_dec_ref(v___y_3926_);
lean_dec(v___y_3925_);
lean_dec_ref(v___y_3924_);
lean_dec(v___y_3923_);
return v_res_3932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___boxed(lean_object* v_c_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_){
_start:
{
lean_object* v_res_3940_; 
v_res_3940_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_c_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_, v_a_3938_);
lean_dec(v_a_3938_);
lean_dec_ref(v_a_3937_);
lean_dec(v_a_3936_);
lean_dec_ref(v_a_3935_);
lean_dec(v_a_3934_);
return v_res_3940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___boxed(lean_object* v_c_3941_, lean_object* v_a_3942_, lean_object* v_a_3943_, lean_object* v_a_3944_, lean_object* v_a_3945_, lean_object* v_a_3946_, lean_object* v_a_3947_){
_start:
{
lean_object* v_res_3948_; 
v_res_3948_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_c_3941_, v_a_3942_, v_a_3943_, v_a_3944_, v_a_3945_, v_a_3946_);
lean_dec(v_a_3946_);
lean_dec_ref(v_a_3945_);
lean_dec(v_a_3944_);
lean_dec_ref(v_a_3943_);
lean_dec(v_a_3942_);
return v_res_3948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___boxed(lean_object* v_c_3949_, lean_object* v_a_3950_, lean_object* v_a_3951_, lean_object* v_a_3952_, lean_object* v_a_3953_, lean_object* v_a_3954_, lean_object* v_a_3955_){
_start:
{
lean_object* v_res_3956_; 
v_res_3956_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_c_3949_, v_a_3950_, v_a_3951_, v_a_3952_, v_a_3953_, v_a_3954_);
lean_dec(v_a_3954_);
lean_dec_ref(v_a_3953_);
lean_dec(v_a_3952_);
lean_dec_ref(v_a_3951_);
lean_dec(v_a_3950_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___boxed(lean_object* v_info_3957_, lean_object* v_c_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_, lean_object* v_a_3964_){
_start:
{
lean_object* v_res_3965_; 
v_res_3965_ = l_Lean_Compiler_LCNF_trivialStructToMono(v_info_3957_, v_c_3958_, v_a_3959_, v_a_3960_, v_a_3961_, v_a_3962_, v_a_3963_);
lean_dec(v_a_3963_);
lean_dec_ref(v_a_3962_);
lean_dec(v_a_3961_);
lean_dec_ref(v_a_3960_);
lean_dec(v_a_3959_);
lean_dec_ref(v_info_3957_);
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___boxed(lean_object* v___x_3966_, lean_object* v_sz_3967_, lean_object* v_i_3968_, lean_object* v_bs_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_){
_start:
{
size_t v_sz_boxed_3976_; size_t v_i_boxed_3977_; lean_object* v_res_3978_; 
v_sz_boxed_3976_ = lean_unbox_usize(v_sz_3967_);
lean_dec(v_sz_3967_);
v_i_boxed_3977_ = lean_unbox_usize(v_i_3968_);
lean_dec(v_i_3968_);
v_res_3978_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(v___x_3966_, v_sz_boxed_3976_, v_i_boxed_3977_, v_bs_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_);
lean_dec(v___y_3974_);
lean_dec_ref(v___y_3973_);
lean_dec(v___y_3972_);
lean_dec_ref(v___y_3971_);
lean_dec(v___y_3970_);
return v_res_3978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___boxed(lean_object* v_c_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_, lean_object* v_a_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_c_3979_, v_a_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
lean_dec(v_a_3984_);
lean_dec_ref(v_a_3983_);
lean_dec(v_a_3982_);
lean_dec_ref(v_a_3981_);
lean_dec(v_a_3980_);
lean_dec_ref(v_c_3979_);
return v_res_3986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___boxed(lean_object* v___x_3987_, lean_object* v_sz_3988_, lean_object* v_i_3989_, lean_object* v_bs_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_){
_start:
{
size_t v_sz_boxed_3997_; size_t v_i_boxed_3998_; lean_object* v_res_3999_; 
v_sz_boxed_3997_ = lean_unbox_usize(v_sz_3988_);
lean_dec(v_sz_3988_);
v_i_boxed_3998_ = lean_unbox_usize(v_i_3989_);
lean_dec(v_i_3989_);
v_res_3999_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(v___x_3987_, v_sz_boxed_3997_, v_i_boxed_3998_, v_bs_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
lean_dec(v___y_3995_);
lean_dec_ref(v___y_3994_);
lean_dec(v___y_3993_);
lean_dec_ref(v___y_3992_);
lean_dec(v___y_3991_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono___boxed(lean_object* v_code_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_){
_start:
{
lean_object* v_res_4007_; 
v_res_4007_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_4000_, v_a_4001_, v_a_4002_, v_a_4003_, v_a_4004_, v_a_4005_);
lean_dec(v_a_4005_);
lean_dec_ref(v_a_4004_);
lean_dec(v_a_4003_);
lean_dec_ref(v_a_4002_);
lean_dec(v_a_4001_);
return v_res_4007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono(lean_object* v_c_4008_, lean_object* v_x_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_, lean_object* v_a_4012_, lean_object* v_a_4013_, lean_object* v_a_4014_){
_start:
{
lean_object* v___x_4016_; 
v___x_4016_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_c_4008_, v_a_4010_, v_a_4011_, v_a_4012_, v_a_4013_, v_a_4014_);
return v___x_4016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___boxed(lean_object* v_c_4017_, lean_object* v_x_4018_, lean_object* v_a_4019_, lean_object* v_a_4020_, lean_object* v_a_4021_, lean_object* v_a_4022_, lean_object* v_a_4023_, lean_object* v_a_4024_){
_start:
{
lean_object* v_res_4025_; 
v_res_4025_ = l_Lean_Compiler_LCNF_casesTaskToMono(v_c_4017_, v_x_4018_, v_a_4019_, v_a_4020_, v_a_4021_, v_a_4022_, v_a_4023_);
lean_dec(v_a_4023_);
lean_dec_ref(v_a_4022_);
lean_dec(v_a_4021_);
lean_dec_ref(v_a_4020_);
lean_dec(v_a_4019_);
return v_res_4025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono(lean_object* v_c_4026_, lean_object* v_x_4027_, lean_object* v_a_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_){
_start:
{
lean_object* v___x_4034_; 
v___x_4034_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_c_4026_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_, v_a_4032_);
return v___x_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___boxed(lean_object* v_c_4035_, lean_object* v_x_4036_, lean_object* v_a_4037_, lean_object* v_a_4038_, lean_object* v_a_4039_, lean_object* v_a_4040_, lean_object* v_a_4041_, lean_object* v_a_4042_){
_start:
{
lean_object* v_res_4043_; 
v_res_4043_ = l_Lean_Compiler_LCNF_casesThunkToMono(v_c_4035_, v_x_4036_, v_a_4037_, v_a_4038_, v_a_4039_, v_a_4040_, v_a_4041_);
lean_dec(v_a_4041_);
lean_dec_ref(v_a_4040_);
lean_dec(v_a_4039_);
lean_dec_ref(v_a_4038_);
lean_dec(v_a_4037_);
lean_dec_ref(v_c_4035_);
return v_res_4043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono(lean_object* v_c_4044_, lean_object* v_x_4045_, lean_object* v_a_4046_, lean_object* v_a_4047_, lean_object* v_a_4048_, lean_object* v_a_4049_, lean_object* v_a_4050_){
_start:
{
lean_object* v___x_4052_; 
v___x_4052_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_c_4044_, v_a_4046_, v_a_4047_, v_a_4048_, v_a_4049_, v_a_4050_);
return v___x_4052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___boxed(lean_object* v_c_4053_, lean_object* v_x_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_){
_start:
{
lean_object* v_res_4061_; 
v_res_4061_ = l_Lean_Compiler_LCNF_casesFloat32ToMono(v_c_4053_, v_x_4054_, v_a_4055_, v_a_4056_, v_a_4057_, v_a_4058_, v_a_4059_);
lean_dec(v_a_4059_);
lean_dec_ref(v_a_4058_);
lean_dec(v_a_4057_);
lean_dec_ref(v_a_4056_);
lean_dec(v_a_4055_);
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono(lean_object* v_c_4062_, lean_object* v_x_4063_, lean_object* v_a_4064_, lean_object* v_a_4065_, lean_object* v_a_4066_, lean_object* v_a_4067_, lean_object* v_a_4068_){
_start:
{
lean_object* v___x_4070_; 
v___x_4070_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_c_4062_, v_a_4064_, v_a_4065_, v_a_4066_, v_a_4067_, v_a_4068_);
return v___x_4070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___boxed(lean_object* v_c_4071_, lean_object* v_x_4072_, lean_object* v_a_4073_, lean_object* v_a_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_){
_start:
{
lean_object* v_res_4079_; 
v_res_4079_ = l_Lean_Compiler_LCNF_casesFloatToMono(v_c_4071_, v_x_4072_, v_a_4073_, v_a_4074_, v_a_4075_, v_a_4076_, v_a_4077_);
lean_dec(v_a_4077_);
lean_dec_ref(v_a_4076_);
lean_dec(v_a_4075_);
lean_dec_ref(v_a_4074_);
lean_dec(v_a_4073_);
return v_res_4079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono(lean_object* v_c_4080_, lean_object* v_x_4081_, lean_object* v_a_4082_, lean_object* v_a_4083_, lean_object* v_a_4084_, lean_object* v_a_4085_, lean_object* v_a_4086_){
_start:
{
lean_object* v___x_4088_; 
v___x_4088_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_c_4080_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
return v___x_4088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___boxed(lean_object* v_c_4089_, lean_object* v_x_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_){
_start:
{
lean_object* v_res_4097_; 
v_res_4097_ = l_Lean_Compiler_LCNF_casesStringToMono(v_c_4089_, v_x_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_, v_a_4095_);
lean_dec(v_a_4095_);
lean_dec_ref(v_a_4094_);
lean_dec(v_a_4093_);
lean_dec_ref(v_a_4092_);
lean_dec(v_a_4091_);
return v_res_4097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono(lean_object* v_c_4098_, lean_object* v_x_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_){
_start:
{
lean_object* v___x_4106_; 
v___x_4106_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_c_4098_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_, v_a_4104_);
return v___x_4106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___boxed(lean_object* v_c_4107_, lean_object* v_x_4108_, lean_object* v_a_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_, lean_object* v_a_4112_, lean_object* v_a_4113_, lean_object* v_a_4114_){
_start:
{
lean_object* v_res_4115_; 
v_res_4115_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono(v_c_4107_, v_x_4108_, v_a_4109_, v_a_4110_, v_a_4111_, v_a_4112_, v_a_4113_);
lean_dec(v_a_4113_);
lean_dec_ref(v_a_4112_);
lean_dec(v_a_4111_);
lean_dec_ref(v_a_4110_);
lean_dec(v_a_4109_);
return v_res_4115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono(lean_object* v_c_4116_, lean_object* v_x_4117_, lean_object* v_a_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_){
_start:
{
lean_object* v___x_4124_; 
v___x_4124_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_c_4116_, v_a_4118_, v_a_4119_, v_a_4120_, v_a_4121_, v_a_4122_);
return v___x_4124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___boxed(lean_object* v_c_4125_, lean_object* v_x_4126_, lean_object* v_a_4127_, lean_object* v_a_4128_, lean_object* v_a_4129_, lean_object* v_a_4130_, lean_object* v_a_4131_, lean_object* v_a_4132_){
_start:
{
lean_object* v_res_4133_; 
v_res_4133_ = l_Lean_Compiler_LCNF_casesByteArrayToMono(v_c_4125_, v_x_4126_, v_a_4127_, v_a_4128_, v_a_4129_, v_a_4130_, v_a_4131_);
lean_dec(v_a_4131_);
lean_dec_ref(v_a_4130_);
lean_dec(v_a_4129_);
lean_dec_ref(v_a_4128_);
lean_dec(v_a_4127_);
return v_res_4133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono(lean_object* v_c_4134_, lean_object* v_x_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_, lean_object* v_a_4140_){
_start:
{
lean_object* v___x_4142_; 
v___x_4142_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_c_4134_, v_a_4136_, v_a_4137_, v_a_4138_, v_a_4139_, v_a_4140_);
return v___x_4142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___boxed(lean_object* v_c_4143_, lean_object* v_x_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_, lean_object* v_a_4148_, lean_object* v_a_4149_, lean_object* v_a_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_Lean_Compiler_LCNF_casesArrayToMono(v_c_4143_, v_x_4144_, v_a_4145_, v_a_4146_, v_a_4147_, v_a_4148_, v_a_4149_);
lean_dec(v_a_4149_);
lean_dec_ref(v_a_4148_);
lean_dec(v_a_4147_);
lean_dec_ref(v_a_4146_);
lean_dec(v_a_4145_);
return v_res_4151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono(lean_object* v_c_4152_, lean_object* v_uintName_4153_, lean_object* v_x_4154_, lean_object* v_a_4155_, lean_object* v_a_4156_, lean_object* v_a_4157_, lean_object* v_a_4158_, lean_object* v_a_4159_){
_start:
{
lean_object* v___x_4161_; 
v___x_4161_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_c_4152_, v_uintName_4153_, v_a_4155_, v_a_4156_, v_a_4157_, v_a_4158_, v_a_4159_);
return v___x_4161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___boxed(lean_object* v_c_4162_, lean_object* v_uintName_4163_, lean_object* v_x_4164_, lean_object* v_a_4165_, lean_object* v_a_4166_, lean_object* v_a_4167_, lean_object* v_a_4168_, lean_object* v_a_4169_, lean_object* v_a_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l_Lean_Compiler_LCNF_casesUIntToMono(v_c_4162_, v_uintName_4163_, v_x_4164_, v_a_4165_, v_a_4166_, v_a_4167_, v_a_4168_, v_a_4169_);
lean_dec(v_a_4169_);
lean_dec_ref(v_a_4168_);
lean_dec(v_a_4167_);
lean_dec_ref(v_a_4166_);
lean_dec(v_a_4165_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono(lean_object* v_c_4172_, lean_object* v_x_4173_, lean_object* v_a_4174_, lean_object* v_a_4175_, lean_object* v_a_4176_, lean_object* v_a_4177_, lean_object* v_a_4178_){
_start:
{
lean_object* v___x_4180_; 
v___x_4180_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_c_4172_, v_a_4174_, v_a_4175_, v_a_4176_, v_a_4177_, v_a_4178_);
return v___x_4180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___boxed(lean_object* v_c_4181_, lean_object* v_x_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_, lean_object* v_a_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_, lean_object* v_a_4188_){
_start:
{
lean_object* v_res_4189_; 
v_res_4189_ = l_Lean_Compiler_LCNF_casesIntToMono(v_c_4181_, v_x_4182_, v_a_4183_, v_a_4184_, v_a_4185_, v_a_4186_, v_a_4187_);
lean_dec(v_a_4187_);
lean_dec_ref(v_a_4186_);
lean_dec(v_a_4185_);
lean_dec_ref(v_a_4184_);
lean_dec(v_a_4183_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono(lean_object* v_c_4190_, lean_object* v_x_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_){
_start:
{
lean_object* v___x_4198_; 
v___x_4198_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_c_4190_, v_a_4192_, v_a_4193_, v_a_4194_, v_a_4195_, v_a_4196_);
return v___x_4198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___boxed(lean_object* v_c_4199_, lean_object* v_x_4200_, lean_object* v_a_4201_, lean_object* v_a_4202_, lean_object* v_a_4203_, lean_object* v_a_4204_, lean_object* v_a_4205_, lean_object* v_a_4206_){
_start:
{
lean_object* v_res_4207_; 
v_res_4207_ = l_Lean_Compiler_LCNF_casesNatToMono(v_c_4199_, v_x_4200_, v_a_4201_, v_a_4202_, v_a_4203_, v_a_4204_, v_a_4205_);
lean_dec(v_a_4205_);
lean_dec_ref(v_a_4204_);
lean_dec(v_a_4203_);
lean_dec_ref(v_a_4202_);
lean_dec(v_a_4201_);
return v_res_4207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(size_t v_sz_4208_, size_t v_i_4209_, lean_object* v_bs_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_){
_start:
{
lean_object* v___x_4217_; 
v___x_4217_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_4208_, v_i_4209_, v_bs_4210_, v___y_4211_, v___y_4213_, v___y_4214_, v___y_4215_);
return v___x_4217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed(lean_object* v_sz_4218_, lean_object* v_i_4219_, lean_object* v_bs_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_){
_start:
{
size_t v_sz_boxed_4227_; size_t v_i_boxed_4228_; lean_object* v_res_4229_; 
v_sz_boxed_4227_ = lean_unbox_usize(v_sz_4218_);
lean_dec(v_sz_4218_);
v_i_boxed_4228_ = lean_unbox_usize(v_i_4219_);
lean_dec(v_i_4219_);
v_res_4229_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(v_sz_boxed_4227_, v_i_boxed_4228_, v_bs_4220_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_);
lean_dec(v___y_4225_);
lean_dec_ref(v___y_4224_);
lean_dec(v___y_4223_);
lean_dec_ref(v___y_4222_);
lean_dec(v___y_4221_);
return v_res_4229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(lean_object* v_f_4230_, lean_object* v_v_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_){
_start:
{
if (lean_obj_tag(v_v_4231_) == 0)
{
lean_object* v_code_4238_; lean_object* v___x_4240_; uint8_t v_isShared_4241_; uint8_t v_isSharedCheck_4262_; 
v_code_4238_ = lean_ctor_get(v_v_4231_, 0);
v_isSharedCheck_4262_ = !lean_is_exclusive(v_v_4231_);
if (v_isSharedCheck_4262_ == 0)
{
v___x_4240_ = v_v_4231_;
v_isShared_4241_ = v_isSharedCheck_4262_;
goto v_resetjp_4239_;
}
else
{
lean_inc(v_code_4238_);
lean_dec(v_v_4231_);
v___x_4240_ = lean_box(0);
v_isShared_4241_ = v_isSharedCheck_4262_;
goto v_resetjp_4239_;
}
v_resetjp_4239_:
{
lean_object* v___x_4242_; 
lean_inc(v___y_4236_);
lean_inc_ref(v___y_4235_);
lean_inc(v___y_4234_);
lean_inc_ref(v___y_4233_);
lean_inc(v___y_4232_);
v___x_4242_ = lean_apply_7(v_f_4230_, v_code_4238_, v___y_4232_, v___y_4233_, v___y_4234_, v___y_4235_, v___y_4236_, lean_box(0));
if (lean_obj_tag(v___x_4242_) == 0)
{
lean_object* v_a_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4253_; 
v_a_4243_ = lean_ctor_get(v___x_4242_, 0);
v_isSharedCheck_4253_ = !lean_is_exclusive(v___x_4242_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_4245_ = v___x_4242_;
v_isShared_4246_ = v_isSharedCheck_4253_;
goto v_resetjp_4244_;
}
else
{
lean_inc(v_a_4243_);
lean_dec(v___x_4242_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4253_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
lean_object* v___x_4248_; 
if (v_isShared_4241_ == 0)
{
lean_ctor_set(v___x_4240_, 0, v_a_4243_);
v___x_4248_ = v___x_4240_;
goto v_reusejp_4247_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v_a_4243_);
v___x_4248_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4247_;
}
v_reusejp_4247_:
{
lean_object* v___x_4250_; 
if (v_isShared_4246_ == 0)
{
lean_ctor_set(v___x_4245_, 0, v___x_4248_);
v___x_4250_ = v___x_4245_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v___x_4248_);
v___x_4250_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
return v___x_4250_;
}
}
}
}
else
{
lean_object* v_a_4254_; lean_object* v___x_4256_; uint8_t v_isShared_4257_; uint8_t v_isSharedCheck_4261_; 
lean_del_object(v___x_4240_);
v_a_4254_ = lean_ctor_get(v___x_4242_, 0);
v_isSharedCheck_4261_ = !lean_is_exclusive(v___x_4242_);
if (v_isSharedCheck_4261_ == 0)
{
v___x_4256_ = v___x_4242_;
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
else
{
lean_inc(v_a_4254_);
lean_dec(v___x_4242_);
v___x_4256_ = lean_box(0);
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
v_resetjp_4255_:
{
lean_object* v___x_4259_; 
if (v_isShared_4257_ == 0)
{
v___x_4259_ = v___x_4256_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_a_4254_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
}
}
}
else
{
lean_object* v___x_4263_; 
lean_dec_ref(v_f_4230_);
v___x_4263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4263_, 0, v_v_4231_);
return v___x_4263_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg___boxed(lean_object* v_f_4264_, lean_object* v_v_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_){
_start:
{
lean_object* v_res_4272_; 
v_res_4272_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v_f_4264_, v_v_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_);
lean_dec(v___y_4270_);
lean_dec_ref(v___y_4269_);
lean_dec(v___y_4268_);
lean_dec_ref(v___y_4267_);
lean_dec(v___y_4266_);
return v_res_4272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(uint8_t v_pu_4273_, lean_object* v_f_4274_, lean_object* v_v_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_){
_start:
{
lean_object* v___x_4282_; 
v___x_4282_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v_f_4274_, v_v_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, v___y_4280_);
return v___x_4282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___boxed(lean_object* v_pu_4283_, lean_object* v_f_4284_, lean_object* v_v_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_){
_start:
{
uint8_t v_pu_boxed_4292_; lean_object* v_res_4293_; 
v_pu_boxed_4292_ = lean_unbox(v_pu_4283_);
v_res_4293_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(v_pu_boxed_4292_, v_f_4284_, v_v_4285_, v___y_4286_, v___y_4287_, v___y_4288_, v___y_4289_, v___y_4290_);
lean_dec(v___y_4290_);
lean_dec_ref(v___y_4289_);
lean_dec(v___y_4288_);
lean_dec_ref(v___y_4287_);
lean_dec(v___y_4286_);
return v_res_4293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(lean_object* v_decl_4295_, lean_object* v_a_4296_, lean_object* v_a_4297_, lean_object* v_a_4298_, lean_object* v_a_4299_, lean_object* v_a_4300_){
_start:
{
lean_object* v_toSignature_4302_; lean_object* v_value_4303_; uint8_t v_recursive_4304_; lean_object* v_inlineAttr_x3f_4305_; lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4375_; 
v_toSignature_4302_ = lean_ctor_get(v_decl_4295_, 0);
v_value_4303_ = lean_ctor_get(v_decl_4295_, 1);
v_recursive_4304_ = lean_ctor_get_uint8(v_decl_4295_, sizeof(void*)*3);
v_inlineAttr_x3f_4305_ = lean_ctor_get(v_decl_4295_, 2);
v_isSharedCheck_4375_ = !lean_is_exclusive(v_decl_4295_);
if (v_isSharedCheck_4375_ == 0)
{
v___x_4307_ = v_decl_4295_;
v_isShared_4308_ = v_isSharedCheck_4375_;
goto v_resetjp_4306_;
}
else
{
lean_inc(v_inlineAttr_x3f_4305_);
lean_inc(v_value_4303_);
lean_inc(v_toSignature_4302_);
lean_dec(v_decl_4295_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4375_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
lean_object* v_name_4309_; lean_object* v_type_4310_; lean_object* v_params_4311_; uint8_t v_safe_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4373_; 
v_name_4309_ = lean_ctor_get(v_toSignature_4302_, 0);
v_type_4310_ = lean_ctor_get(v_toSignature_4302_, 2);
v_params_4311_ = lean_ctor_get(v_toSignature_4302_, 3);
v_safe_4312_ = lean_ctor_get_uint8(v_toSignature_4302_, sizeof(void*)*4);
v_isSharedCheck_4373_ = !lean_is_exclusive(v_toSignature_4302_);
if (v_isSharedCheck_4373_ == 0)
{
lean_object* v_unused_4374_; 
v_unused_4374_ = lean_ctor_get(v_toSignature_4302_, 1);
lean_dec(v_unused_4374_);
v___x_4314_ = v_toSignature_4302_;
v_isShared_4315_ = v_isSharedCheck_4373_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_params_4311_);
lean_inc(v_type_4310_);
lean_inc(v_name_4309_);
lean_dec(v_toSignature_4302_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4373_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v___f_4316_; lean_object* v___x_4317_; 
v___f_4316_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0));
v___x_4317_ = l_Lean_Compiler_LCNF_toMonoType(v_type_4310_, v_a_4299_, v_a_4300_);
if (lean_obj_tag(v___x_4317_) == 0)
{
lean_object* v_a_4318_; size_t v_sz_4319_; size_t v___x_4320_; lean_object* v___x_4321_; 
v_a_4318_ = lean_ctor_get(v___x_4317_, 0);
lean_inc(v_a_4318_);
lean_dec_ref_known(v___x_4317_, 1);
v_sz_4319_ = lean_array_size(v_params_4311_);
v___x_4320_ = ((size_t)0ULL);
v___x_4321_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_4319_, v___x_4320_, v_params_4311_, v_a_4296_, v_a_4298_, v_a_4299_, v_a_4300_);
if (lean_obj_tag(v___x_4321_) == 0)
{
lean_object* v_a_4322_; lean_object* v___x_4323_; 
v_a_4322_ = lean_ctor_get(v___x_4321_, 0);
lean_inc(v_a_4322_);
lean_dec_ref_known(v___x_4321_, 1);
v___x_4323_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v___f_4316_, v_value_4303_, v_a_4296_, v_a_4297_, v_a_4298_, v_a_4299_, v_a_4300_);
if (lean_obj_tag(v___x_4323_) == 0)
{
lean_object* v_a_4324_; lean_object* v___x_4325_; lean_object* v___x_4327_; 
v_a_4324_ = lean_ctor_get(v___x_4323_, 0);
lean_inc(v_a_4324_);
lean_dec_ref_known(v___x_4323_, 1);
v___x_4325_ = lean_box(0);
if (v_isShared_4315_ == 0)
{
lean_ctor_set(v___x_4314_, 3, v_a_4322_);
lean_ctor_set(v___x_4314_, 2, v_a_4318_);
lean_ctor_set(v___x_4314_, 1, v___x_4325_);
v___x_4327_ = v___x_4314_;
goto v_reusejp_4326_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_name_4309_);
lean_ctor_set(v_reuseFailAlloc_4348_, 1, v___x_4325_);
lean_ctor_set(v_reuseFailAlloc_4348_, 2, v_a_4318_);
lean_ctor_set(v_reuseFailAlloc_4348_, 3, v_a_4322_);
lean_ctor_set_uint8(v_reuseFailAlloc_4348_, sizeof(void*)*4, v_safe_4312_);
v___x_4327_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4326_;
}
v_reusejp_4326_:
{
lean_object* v___x_4329_; 
if (v_isShared_4308_ == 0)
{
lean_ctor_set(v___x_4307_, 1, v_a_4324_);
lean_ctor_set(v___x_4307_, 0, v___x_4327_);
v___x_4329_ = v___x_4307_;
goto v_reusejp_4328_;
}
else
{
lean_object* v_reuseFailAlloc_4347_; 
v_reuseFailAlloc_4347_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_4347_, 0, v___x_4327_);
lean_ctor_set(v_reuseFailAlloc_4347_, 1, v_a_4324_);
lean_ctor_set(v_reuseFailAlloc_4347_, 2, v_inlineAttr_x3f_4305_);
lean_ctor_set_uint8(v_reuseFailAlloc_4347_, sizeof(void*)*3, v_recursive_4304_);
v___x_4329_ = v_reuseFailAlloc_4347_;
goto v_reusejp_4328_;
}
v_reusejp_4328_:
{
lean_object* v___x_4330_; 
lean_inc_ref(v___x_4329_);
v___x_4330_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v___x_4329_, v_a_4300_);
if (lean_obj_tag(v___x_4330_) == 0)
{
lean_object* v___x_4332_; uint8_t v_isShared_4333_; uint8_t v_isSharedCheck_4337_; 
v_isSharedCheck_4337_ = !lean_is_exclusive(v___x_4330_);
if (v_isSharedCheck_4337_ == 0)
{
lean_object* v_unused_4338_; 
v_unused_4338_ = lean_ctor_get(v___x_4330_, 0);
lean_dec(v_unused_4338_);
v___x_4332_ = v___x_4330_;
v_isShared_4333_ = v_isSharedCheck_4337_;
goto v_resetjp_4331_;
}
else
{
lean_dec(v___x_4330_);
v___x_4332_ = lean_box(0);
v_isShared_4333_ = v_isSharedCheck_4337_;
goto v_resetjp_4331_;
}
v_resetjp_4331_:
{
lean_object* v___x_4335_; 
if (v_isShared_4333_ == 0)
{
lean_ctor_set(v___x_4332_, 0, v___x_4329_);
v___x_4335_ = v___x_4332_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4336_; 
v_reuseFailAlloc_4336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4336_, 0, v___x_4329_);
v___x_4335_ = v_reuseFailAlloc_4336_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
return v___x_4335_;
}
}
}
else
{
lean_object* v_a_4339_; lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4346_; 
lean_dec_ref(v___x_4329_);
v_a_4339_ = lean_ctor_get(v___x_4330_, 0);
v_isSharedCheck_4346_ = !lean_is_exclusive(v___x_4330_);
if (v_isSharedCheck_4346_ == 0)
{
v___x_4341_ = v___x_4330_;
v_isShared_4342_ = v_isSharedCheck_4346_;
goto v_resetjp_4340_;
}
else
{
lean_inc(v_a_4339_);
lean_dec(v___x_4330_);
v___x_4341_ = lean_box(0);
v_isShared_4342_ = v_isSharedCheck_4346_;
goto v_resetjp_4340_;
}
v_resetjp_4340_:
{
lean_object* v___x_4344_; 
if (v_isShared_4342_ == 0)
{
v___x_4344_ = v___x_4341_;
goto v_reusejp_4343_;
}
else
{
lean_object* v_reuseFailAlloc_4345_; 
v_reuseFailAlloc_4345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4345_, 0, v_a_4339_);
v___x_4344_ = v_reuseFailAlloc_4345_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
return v___x_4344_;
}
}
}
}
}
}
else
{
lean_object* v_a_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4356_; 
lean_dec(v_a_4322_);
lean_dec(v_a_4318_);
lean_del_object(v___x_4314_);
lean_dec(v_name_4309_);
lean_del_object(v___x_4307_);
lean_dec(v_inlineAttr_x3f_4305_);
v_a_4349_ = lean_ctor_get(v___x_4323_, 0);
v_isSharedCheck_4356_ = !lean_is_exclusive(v___x_4323_);
if (v_isSharedCheck_4356_ == 0)
{
v___x_4351_ = v___x_4323_;
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_a_4349_);
lean_dec(v___x_4323_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4354_; 
if (v_isShared_4352_ == 0)
{
v___x_4354_ = v___x_4351_;
goto v_reusejp_4353_;
}
else
{
lean_object* v_reuseFailAlloc_4355_; 
v_reuseFailAlloc_4355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4355_, 0, v_a_4349_);
v___x_4354_ = v_reuseFailAlloc_4355_;
goto v_reusejp_4353_;
}
v_reusejp_4353_:
{
return v___x_4354_;
}
}
}
}
else
{
lean_object* v_a_4357_; lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4364_; 
lean_dec(v_a_4318_);
lean_del_object(v___x_4314_);
lean_dec(v_name_4309_);
lean_del_object(v___x_4307_);
lean_dec(v_inlineAttr_x3f_4305_);
lean_dec_ref(v_value_4303_);
v_a_4357_ = lean_ctor_get(v___x_4321_, 0);
v_isSharedCheck_4364_ = !lean_is_exclusive(v___x_4321_);
if (v_isSharedCheck_4364_ == 0)
{
v___x_4359_ = v___x_4321_;
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
else
{
lean_inc(v_a_4357_);
lean_dec(v___x_4321_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v___x_4362_; 
if (v_isShared_4360_ == 0)
{
v___x_4362_ = v___x_4359_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4363_; 
v_reuseFailAlloc_4363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4363_, 0, v_a_4357_);
v___x_4362_ = v_reuseFailAlloc_4363_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
return v___x_4362_;
}
}
}
}
else
{
lean_object* v_a_4365_; lean_object* v___x_4367_; uint8_t v_isShared_4368_; uint8_t v_isSharedCheck_4372_; 
lean_del_object(v___x_4314_);
lean_dec_ref(v_params_4311_);
lean_dec(v_name_4309_);
lean_del_object(v___x_4307_);
lean_dec(v_inlineAttr_x3f_4305_);
lean_dec_ref(v_value_4303_);
v_a_4365_ = lean_ctor_get(v___x_4317_, 0);
v_isSharedCheck_4372_ = !lean_is_exclusive(v___x_4317_);
if (v_isSharedCheck_4372_ == 0)
{
v___x_4367_ = v___x_4317_;
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
else
{
lean_inc(v_a_4365_);
lean_dec(v___x_4317_);
v___x_4367_ = lean_box(0);
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
v_resetjp_4366_:
{
lean_object* v___x_4370_; 
if (v_isShared_4368_ == 0)
{
v___x_4370_ = v___x_4367_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4371_; 
v_reuseFailAlloc_4371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4371_, 0, v_a_4365_);
v___x_4370_ = v_reuseFailAlloc_4371_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
return v___x_4370_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___boxed(lean_object* v_decl_4376_, lean_object* v_a_4377_, lean_object* v_a_4378_, lean_object* v_a_4379_, lean_object* v_a_4380_, lean_object* v_a_4381_, lean_object* v_a_4382_){
_start:
{
lean_object* v_res_4383_; 
v_res_4383_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(v_decl_4376_, v_a_4377_, v_a_4378_, v_a_4379_, v_a_4380_, v_a_4381_);
lean_dec(v_a_4381_);
lean_dec_ref(v_a_4380_);
lean_dec(v_a_4379_);
lean_dec_ref(v_a_4378_);
lean_dec(v_a_4377_);
return v_res_4383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono(lean_object* v_decl_4384_, lean_object* v_a_4385_, lean_object* v_a_4386_, lean_object* v_a_4387_, lean_object* v_a_4388_){
_start:
{
lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; 
v___x_4390_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_4391_ = lean_st_mk_ref(v___x_4390_);
v___x_4392_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(v_decl_4384_, v___x_4391_, v_a_4385_, v_a_4386_, v_a_4387_, v_a_4388_);
if (lean_obj_tag(v___x_4392_) == 0)
{
lean_object* v_a_4393_; lean_object* v___x_4395_; uint8_t v_isShared_4396_; uint8_t v_isSharedCheck_4401_; 
v_a_4393_ = lean_ctor_get(v___x_4392_, 0);
v_isSharedCheck_4401_ = !lean_is_exclusive(v___x_4392_);
if (v_isSharedCheck_4401_ == 0)
{
v___x_4395_ = v___x_4392_;
v_isShared_4396_ = v_isSharedCheck_4401_;
goto v_resetjp_4394_;
}
else
{
lean_inc(v_a_4393_);
lean_dec(v___x_4392_);
v___x_4395_ = lean_box(0);
v_isShared_4396_ = v_isSharedCheck_4401_;
goto v_resetjp_4394_;
}
v_resetjp_4394_:
{
lean_object* v___x_4397_; lean_object* v___x_4399_; 
v___x_4397_ = lean_st_ref_get(v___x_4391_);
lean_dec(v___x_4391_);
lean_dec(v___x_4397_);
if (v_isShared_4396_ == 0)
{
v___x_4399_ = v___x_4395_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v_a_4393_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
}
else
{
lean_dec(v___x_4391_);
return v___x_4392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono___boxed(lean_object* v_decl_4402_, lean_object* v_a_4403_, lean_object* v_a_4404_, lean_object* v_a_4405_, lean_object* v_a_4406_, lean_object* v_a_4407_){
_start:
{
lean_object* v_res_4408_; 
v_res_4408_ = l_Lean_Compiler_LCNF_Decl_toMono(v_decl_4402_, v_a_4403_, v_a_4404_, v_a_4405_, v_a_4406_);
lean_dec(v_a_4406_);
lean_dec_ref(v_a_4405_);
lean_dec(v_a_4404_);
lean_dec_ref(v_a_4403_);
return v_res_4408_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(size_t v_sz_4409_, size_t v_i_4410_, lean_object* v_bs_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_){
_start:
{
uint8_t v___x_4417_; 
v___x_4417_ = lean_usize_dec_lt(v_i_4410_, v_sz_4409_);
if (v___x_4417_ == 0)
{
lean_object* v___x_4418_; 
v___x_4418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4418_, 0, v_bs_4411_);
return v___x_4418_;
}
else
{
lean_object* v_v_4419_; lean_object* v___x_4420_; lean_object* v_bs_x27_4421_; lean_object* v___x_4422_; 
v_v_4419_ = lean_array_uget(v_bs_4411_, v_i_4410_);
v___x_4420_ = lean_unsigned_to_nat(0u);
v_bs_x27_4421_ = lean_array_uset(v_bs_4411_, v_i_4410_, v___x_4420_);
v___x_4422_ = l_Lean_Compiler_LCNF_Decl_toMono(v_v_4419_, v___y_4412_, v___y_4413_, v___y_4414_, v___y_4415_);
if (lean_obj_tag(v___x_4422_) == 0)
{
lean_object* v_a_4423_; size_t v___x_4424_; size_t v___x_4425_; lean_object* v___x_4426_; 
v_a_4423_ = lean_ctor_get(v___x_4422_, 0);
lean_inc(v_a_4423_);
lean_dec_ref_known(v___x_4422_, 1);
v___x_4424_ = ((size_t)1ULL);
v___x_4425_ = lean_usize_add(v_i_4410_, v___x_4424_);
v___x_4426_ = lean_array_uset(v_bs_x27_4421_, v_i_4410_, v_a_4423_);
v_i_4410_ = v___x_4425_;
v_bs_4411_ = v___x_4426_;
goto _start;
}
else
{
lean_object* v_a_4428_; lean_object* v___x_4430_; uint8_t v_isShared_4431_; uint8_t v_isSharedCheck_4435_; 
lean_dec_ref(v_bs_x27_4421_);
v_a_4428_ = lean_ctor_get(v___x_4422_, 0);
v_isSharedCheck_4435_ = !lean_is_exclusive(v___x_4422_);
if (v_isSharedCheck_4435_ == 0)
{
v___x_4430_ = v___x_4422_;
v_isShared_4431_ = v_isSharedCheck_4435_;
goto v_resetjp_4429_;
}
else
{
lean_inc(v_a_4428_);
lean_dec(v___x_4422_);
v___x_4430_ = lean_box(0);
v_isShared_4431_ = v_isSharedCheck_4435_;
goto v_resetjp_4429_;
}
v_resetjp_4429_:
{
lean_object* v___x_4433_; 
if (v_isShared_4431_ == 0)
{
v___x_4433_ = v___x_4430_;
goto v_reusejp_4432_;
}
else
{
lean_object* v_reuseFailAlloc_4434_; 
v_reuseFailAlloc_4434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4434_, 0, v_a_4428_);
v___x_4433_ = v_reuseFailAlloc_4434_;
goto v_reusejp_4432_;
}
v_reusejp_4432_:
{
return v___x_4433_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0___boxed(lean_object* v_sz_4436_, lean_object* v_i_4437_, lean_object* v_bs_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_){
_start:
{
size_t v_sz_boxed_4444_; size_t v_i_boxed_4445_; lean_object* v_res_4446_; 
v_sz_boxed_4444_ = lean_unbox_usize(v_sz_4436_);
lean_dec(v_sz_4436_);
v_i_boxed_4445_ = lean_unbox_usize(v_i_4437_);
lean_dec(v_i_4437_);
v_res_4446_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(v_sz_boxed_4444_, v_i_boxed_4445_, v_bs_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_);
lean_dec(v___y_4442_);
lean_dec_ref(v___y_4441_);
lean_dec(v___y_4440_);
lean_dec_ref(v___y_4439_);
return v_res_4446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0(lean_object* v_x_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_){
_start:
{
size_t v_sz_4453_; size_t v___x_4454_; lean_object* v___x_4455_; 
v_sz_4453_ = lean_array_size(v_x_4447_);
v___x_4454_ = ((size_t)0ULL);
v___x_4455_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(v_sz_4453_, v___x_4454_, v_x_4447_, v___y_4448_, v___y_4449_, v___y_4450_, v___y_4451_);
return v___x_4455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0___boxed(lean_object* v_x_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_){
_start:
{
lean_object* v_res_4462_; 
v_res_4462_ = l_Lean_Compiler_LCNF_toMono___lam__0(v_x_4456_, v___y_4457_, v___y_4458_, v___y_4459_, v___y_4460_);
lean_dec(v___y_4460_);
lean_dec_ref(v___y_4459_);
lean_dec(v___y_4458_);
lean_dec_ref(v___y_4457_);
return v_res_4462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4545_; uint8_t v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
v___x_4545_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4546_ = 1;
v___x_4547_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4548_ = l_Lean_registerTraceClass(v___x_4545_, v___x_4546_, v___x_4547_);
return v___x_4548_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2____boxed(lean_object* v_a_4549_){
_start:
{
lean_object* v_res_4550_; 
v_res_4550_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_();
return v_res_4550_;
}
}
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ToMono(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ToMono(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ToMono(builtin);
}
#ifdef __cplusplus
}
#endif
