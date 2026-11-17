// Lean compiler output
// Module: Lean.Compiler.LCNF.Closure
// Imports: public import Lean.Util.ForEachExprWhere public import Lean.Compiler.LCNF.CompilerM
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
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_mod(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Expr_isFVar___boxed(lean_object*);
extern lean_object* l_Lean_ForEachExprWhere_initCache;
lean_object* lean_st_mk_ref(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Closure_collectType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_isFVar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Closure_collectType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Closure_collectType___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Compiler.LCNF.Closure.collectFVar"};
static const lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Compiler.LCNF.Closure"};
static const lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1_, lean_object* v_x_2_){
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
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2___redArg(lean_object* v_i_29_, lean_object* v_source_30_, lean_object* v_target_31_){
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
v_target_37_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3___redArg(v_target_31_, v_es_34_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1___redArg(lean_object* v_data_41_){
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
v___x_49_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2___redArg(v___x_45_, v_data_41_, v___x_48_);
return v___x_49_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(lean_object* v_a_50_, lean_object* v_x_51_){
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg___boxed(lean_object* v_a_57_, lean_object* v_x_58_){
_start:
{
uint8_t v_res_59_; lean_object* v_r_60_; 
v_res_59_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(v_a_57_, v_x_58_);
lean_dec(v_x_58_);
lean_dec(v_a_57_);
v_r_60_ = lean_box(v_res_59_);
return v_r_60_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0___redArg(lean_object* v_m_61_, lean_object* v_a_62_, lean_object* v_b_63_){
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
v___x_80_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(v_a_62_, v_bkt_79_);
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
v_val_94_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1___redArg(v_buckets_x27_87_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg(lean_object* v_fvarId_104_, lean_object* v_a_105_){
_start:
{
lean_object* v___x_107_; lean_object* v_visited_108_; lean_object* v_params_109_; lean_object* v_decls_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_121_; 
v___x_107_ = lean_st_ref_take(v_a_105_);
v_visited_108_ = lean_ctor_get(v___x_107_, 0);
v_params_109_ = lean_ctor_get(v___x_107_, 1);
v_decls_110_ = lean_ctor_get(v___x_107_, 2);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_121_ == 0)
{
v___x_112_ = v___x_107_;
v_isShared_113_ = v_isSharedCheck_121_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_decls_110_);
lean_inc(v_params_109_);
lean_inc(v_visited_108_);
lean_dec(v___x_107_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_121_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
v___x_114_ = lean_box(0);
v___x_115_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0___redArg(v_visited_108_, v_fvarId_104_, v___x_114_);
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 0, v___x_115_);
v___x_117_ = v___x_112_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v___x_115_);
lean_ctor_set(v_reuseFailAlloc_120_, 1, v_params_109_);
lean_ctor_set(v_reuseFailAlloc_120_, 2, v_decls_110_);
v___x_117_ = v_reuseFailAlloc_120_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_st_ref_put(v_a_105_, v___x_117_);
v___x_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_119_, 0, v___x_114_);
return v___x_119_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg___boxed(lean_object* v_fvarId_122_, lean_object* v_a_123_, lean_object* v_a_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_122_, v_a_123_);
lean_dec(v_a_123_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited(lean_object* v_fvarId_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_126_, v_a_128_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___boxed(lean_object* v_fvarId_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Lean_Compiler_LCNF_Closure_markVisited(v_fvarId_135_, v_a_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_);
lean_dec(v_a_141_);
lean_dec_ref(v_a_140_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0(lean_object* v_00_u03b2_144_, lean_object* v_m_145_, lean_object* v_a_146_, lean_object* v_b_147_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0___redArg(v_m_145_, v_a_146_, v_b_147_);
return v___x_148_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0(lean_object* v_00_u03b2_149_, lean_object* v_a_150_, lean_object* v_x_151_){
_start:
{
uint8_t v___x_152_; 
v___x_152_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(v_a_150_, v_x_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___boxed(lean_object* v_00_u03b2_153_, lean_object* v_a_154_, lean_object* v_x_155_){
_start:
{
uint8_t v_res_156_; lean_object* v_r_157_; 
v_res_156_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0(v_00_u03b2_153_, v_a_154_, v_x_155_);
lean_dec(v_x_155_);
lean_dec(v_a_154_);
v_r_157_ = lean_box(v_res_156_);
return v_r_157_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1(lean_object* v_00_u03b2_158_, lean_object* v_data_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1___redArg(v_data_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_161_, lean_object* v_i_162_, lean_object* v_source_163_, lean_object* v_target_164_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2___redArg(v_i_162_, v_source_163_, v_target_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_166_, lean_object* v_x_167_, lean_object* v_x_168_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3___redArg(v_x_167_, v_x_168_);
return v___x_169_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0(void){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_instMonadEIO___redArg();
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5(lean_object* v_msg_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v_toApplicative_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_248_; 
v___x_183_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0);
v___x_184_ = l_StateRefT_x27_instMonad___redArg(v___x_183_);
v_toApplicative_185_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_248_ == 0)
{
lean_object* v_unused_249_; 
v_unused_249_ = lean_ctor_get(v___x_184_, 1);
lean_dec(v_unused_249_);
v___x_187_ = v___x_184_;
v_isShared_188_ = v_isSharedCheck_248_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_toApplicative_185_);
lean_dec(v___x_184_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_248_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v_toFunctor_189_; lean_object* v_toSeq_190_; lean_object* v_toSeqLeft_191_; lean_object* v_toSeqRight_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_246_; 
v_toFunctor_189_ = lean_ctor_get(v_toApplicative_185_, 0);
v_toSeq_190_ = lean_ctor_get(v_toApplicative_185_, 2);
v_toSeqLeft_191_ = lean_ctor_get(v_toApplicative_185_, 3);
v_toSeqRight_192_ = lean_ctor_get(v_toApplicative_185_, 4);
v_isSharedCheck_246_ = !lean_is_exclusive(v_toApplicative_185_);
if (v_isSharedCheck_246_ == 0)
{
lean_object* v_unused_247_; 
v_unused_247_ = lean_ctor_get(v_toApplicative_185_, 1);
lean_dec(v_unused_247_);
v___x_194_ = v_toApplicative_185_;
v_isShared_195_ = v_isSharedCheck_246_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_toSeqRight_192_);
lean_inc(v_toSeqLeft_191_);
lean_inc(v_toSeq_190_);
lean_inc(v_toFunctor_189_);
lean_dec(v_toApplicative_185_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_246_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___f_196_; lean_object* v___f_197_; lean_object* v___f_198_; lean_object* v___f_199_; lean_object* v___x_200_; lean_object* v___f_201_; lean_object* v___f_202_; lean_object* v___f_203_; lean_object* v___x_205_; 
v___f_196_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__1));
v___f_197_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__2));
lean_inc_ref(v_toFunctor_189_);
v___f_198_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_198_, 0, v_toFunctor_189_);
v___f_199_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_199_, 0, v_toFunctor_189_);
v___x_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_200_, 0, v___f_198_);
lean_ctor_set(v___x_200_, 1, v___f_199_);
v___f_201_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_201_, 0, v_toSeqRight_192_);
v___f_202_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_202_, 0, v_toSeqLeft_191_);
v___f_203_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_203_, 0, v_toSeq_190_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 4, v___f_201_);
lean_ctor_set(v___x_194_, 3, v___f_202_);
lean_ctor_set(v___x_194_, 2, v___f_203_);
lean_ctor_set(v___x_194_, 1, v___f_196_);
lean_ctor_set(v___x_194_, 0, v___x_200_);
v___x_205_ = v___x_194_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_200_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v___f_196_);
lean_ctor_set(v_reuseFailAlloc_245_, 2, v___f_203_);
lean_ctor_set(v_reuseFailAlloc_245_, 3, v___f_202_);
lean_ctor_set(v_reuseFailAlloc_245_, 4, v___f_201_);
v___x_205_ = v_reuseFailAlloc_245_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
lean_object* v___x_207_; 
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 1, v___f_197_);
lean_ctor_set(v___x_187_, 0, v___x_205_);
v___x_207_ = v___x_187_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_205_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v___f_197_);
v___x_207_ = v_reuseFailAlloc_244_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
lean_object* v___x_208_; lean_object* v_toApplicative_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_242_; 
v___x_208_ = l_StateRefT_x27_instMonad___redArg(v___x_207_);
v_toApplicative_209_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_242_ == 0)
{
lean_object* v_unused_243_; 
v_unused_243_ = lean_ctor_get(v___x_208_, 1);
lean_dec(v_unused_243_);
v___x_211_ = v___x_208_;
v_isShared_212_ = v_isSharedCheck_242_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_toApplicative_209_);
lean_dec(v___x_208_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_242_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v_toFunctor_213_; lean_object* v_toSeq_214_; lean_object* v_toSeqLeft_215_; lean_object* v_toSeqRight_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_240_; 
v_toFunctor_213_ = lean_ctor_get(v_toApplicative_209_, 0);
v_toSeq_214_ = lean_ctor_get(v_toApplicative_209_, 2);
v_toSeqLeft_215_ = lean_ctor_get(v_toApplicative_209_, 3);
v_toSeqRight_216_ = lean_ctor_get(v_toApplicative_209_, 4);
v_isSharedCheck_240_ = !lean_is_exclusive(v_toApplicative_209_);
if (v_isSharedCheck_240_ == 0)
{
lean_object* v_unused_241_; 
v_unused_241_ = lean_ctor_get(v_toApplicative_209_, 1);
lean_dec(v_unused_241_);
v___x_218_ = v_toApplicative_209_;
v_isShared_219_ = v_isSharedCheck_240_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_toSeqRight_216_);
lean_inc(v_toSeqLeft_215_);
lean_inc(v_toSeq_214_);
lean_inc(v_toFunctor_213_);
lean_dec(v_toApplicative_209_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_240_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___f_220_; lean_object* v___f_221_; lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___x_224_; lean_object* v___f_225_; lean_object* v___f_226_; lean_object* v___f_227_; lean_object* v___x_229_; 
v___f_220_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__3));
v___f_221_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__4));
lean_inc_ref(v_toFunctor_213_);
v___f_222_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_222_, 0, v_toFunctor_213_);
v___f_223_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_223_, 0, v_toFunctor_213_);
v___x_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_224_, 0, v___f_222_);
lean_ctor_set(v___x_224_, 1, v___f_223_);
v___f_225_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_225_, 0, v_toSeqRight_216_);
v___f_226_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_226_, 0, v_toSeqLeft_215_);
v___f_227_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_227_, 0, v_toSeq_214_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 4, v___f_225_);
lean_ctor_set(v___x_218_, 3, v___f_226_);
lean_ctor_set(v___x_218_, 2, v___f_227_);
lean_ctor_set(v___x_218_, 1, v___f_220_);
lean_ctor_set(v___x_218_, 0, v___x_224_);
v___x_229_ = v___x_218_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_224_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v___f_220_);
lean_ctor_set(v_reuseFailAlloc_239_, 2, v___f_227_);
lean_ctor_set(v_reuseFailAlloc_239_, 3, v___f_226_);
lean_ctor_set(v_reuseFailAlloc_239_, 4, v___f_225_);
v___x_229_ = v_reuseFailAlloc_239_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v___x_231_; 
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 1, v___f_221_);
lean_ctor_set(v___x_211_, 0, v___x_229_);
v___x_231_ = v___x_211_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v___f_221_);
v___x_231_ = v_reuseFailAlloc_238_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___f_235_; lean_object* v___x_20666__overap_236_; lean_object* v___x_237_; 
v___x_232_ = l_StateRefT_x27_instMonad___redArg(v___x_231_);
v___x_233_ = lean_box(0);
v___x_234_ = l_instInhabitedOfMonad___redArg(v___x_232_, v___x_233_);
v___f_235_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_235_, 0, v___x_234_);
v___x_20666__overap_236_ = lean_panic_fn_borrowed(v___f_235_, v_msg_175_);
lean_dec_ref(v___f_235_);
lean_inc(v___y_181_);
lean_inc_ref(v___y_180_);
lean_inc(v___y_179_);
lean_inc_ref(v___y_178_);
lean_inc(v___y_177_);
lean_inc_ref(v___y_176_);
v___x_237_ = lean_apply_7(v___x_20666__overap_236_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_, lean_box(0));
return v___x_237_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___boxed(lean_object* v_msg_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5(v_msg_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
lean_dec(v___y_254_);
lean_dec_ref(v___y_253_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
return v_res_258_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(lean_object* v_a_259_, lean_object* v_x_260_){
_start:
{
if (lean_obj_tag(v_x_260_) == 0)
{
uint8_t v___x_261_; 
v___x_261_ = 0;
return v___x_261_;
}
else
{
lean_object* v_key_262_; lean_object* v_tail_263_; uint8_t v___x_264_; 
v_key_262_ = lean_ctor_get(v_x_260_, 0);
v_tail_263_ = lean_ctor_get(v_x_260_, 2);
v___x_264_ = lean_expr_eqv(v_key_262_, v_a_259_);
if (v___x_264_ == 0)
{
v_x_260_ = v_tail_263_;
goto _start;
}
else
{
return v___x_264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg___boxed(lean_object* v_a_266_, lean_object* v_x_267_){
_start:
{
uint8_t v_res_268_; lean_object* v_r_269_; 
v_res_268_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(v_a_266_, v_x_267_);
lean_dec(v_x_267_);
lean_dec_ref(v_a_266_);
v_r_269_ = lean_box(v_res_268_);
return v_r_269_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(lean_object* v_m_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_buckets_272_; lean_object* v___x_273_; uint64_t v___x_274_; uint64_t v___x_275_; uint64_t v___x_276_; uint64_t v_fold_277_; uint64_t v___x_278_; uint64_t v___x_279_; uint64_t v___x_280_; size_t v___x_281_; size_t v___x_282_; size_t v___x_283_; size_t v___x_284_; size_t v___x_285_; lean_object* v___x_286_; uint8_t v___x_287_; 
v_buckets_272_ = lean_ctor_get(v_m_270_, 1);
v___x_273_ = lean_array_get_size(v_buckets_272_);
v___x_274_ = l_Lean_Expr_hash(v_a_271_);
v___x_275_ = 32ULL;
v___x_276_ = lean_uint64_shift_right(v___x_274_, v___x_275_);
v_fold_277_ = lean_uint64_xor(v___x_274_, v___x_276_);
v___x_278_ = 16ULL;
v___x_279_ = lean_uint64_shift_right(v_fold_277_, v___x_278_);
v___x_280_ = lean_uint64_xor(v_fold_277_, v___x_279_);
v___x_281_ = lean_uint64_to_usize(v___x_280_);
v___x_282_ = lean_usize_of_nat(v___x_273_);
v___x_283_ = ((size_t)1ULL);
v___x_284_ = lean_usize_sub(v___x_282_, v___x_283_);
v___x_285_ = lean_usize_land(v___x_281_, v___x_284_);
v___x_286_ = lean_array_uget_borrowed(v_buckets_272_, v___x_285_);
v___x_287_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(v_a_271_, v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg___boxed(lean_object* v_m_288_, lean_object* v_a_289_){
_start:
{
uint8_t v_res_290_; lean_object* v_r_291_; 
v_res_290_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(v_m_288_, v_a_289_);
lean_dec_ref(v_a_289_);
lean_dec_ref(v_m_288_);
v_r_291_ = lean_box(v_res_290_);
return v_r_291_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19___redArg(lean_object* v_x_292_, lean_object* v_x_293_){
_start:
{
if (lean_obj_tag(v_x_293_) == 0)
{
return v_x_292_;
}
else
{
lean_object* v_key_294_; lean_object* v_value_295_; lean_object* v_tail_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_319_; 
v_key_294_ = lean_ctor_get(v_x_293_, 0);
v_value_295_ = lean_ctor_get(v_x_293_, 1);
v_tail_296_ = lean_ctor_get(v_x_293_, 2);
v_isSharedCheck_319_ = !lean_is_exclusive(v_x_293_);
if (v_isSharedCheck_319_ == 0)
{
v___x_298_ = v_x_293_;
v_isShared_299_ = v_isSharedCheck_319_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_tail_296_);
lean_inc(v_value_295_);
lean_inc(v_key_294_);
lean_dec(v_x_293_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_319_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_300_; uint64_t v___x_301_; uint64_t v___x_302_; uint64_t v___x_303_; uint64_t v_fold_304_; uint64_t v___x_305_; uint64_t v___x_306_; uint64_t v___x_307_; size_t v___x_308_; size_t v___x_309_; size_t v___x_310_; size_t v___x_311_; size_t v___x_312_; lean_object* v___x_313_; lean_object* v___x_315_; 
v___x_300_ = lean_array_get_size(v_x_292_);
v___x_301_ = l_Lean_Expr_hash(v_key_294_);
v___x_302_ = 32ULL;
v___x_303_ = lean_uint64_shift_right(v___x_301_, v___x_302_);
v_fold_304_ = lean_uint64_xor(v___x_301_, v___x_303_);
v___x_305_ = 16ULL;
v___x_306_ = lean_uint64_shift_right(v_fold_304_, v___x_305_);
v___x_307_ = lean_uint64_xor(v_fold_304_, v___x_306_);
v___x_308_ = lean_uint64_to_usize(v___x_307_);
v___x_309_ = lean_usize_of_nat(v___x_300_);
v___x_310_ = ((size_t)1ULL);
v___x_311_ = lean_usize_sub(v___x_309_, v___x_310_);
v___x_312_ = lean_usize_land(v___x_308_, v___x_311_);
v___x_313_ = lean_array_uget_borrowed(v_x_292_, v___x_312_);
lean_inc(v___x_313_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 2, v___x_313_);
v___x_315_ = v___x_298_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_key_294_);
lean_ctor_set(v_reuseFailAlloc_318_, 1, v_value_295_);
lean_ctor_set(v_reuseFailAlloc_318_, 2, v___x_313_);
v___x_315_ = v_reuseFailAlloc_318_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
lean_object* v___x_316_; 
v___x_316_ = lean_array_uset(v_x_292_, v___x_312_, v___x_315_);
v_x_292_ = v___x_316_;
v_x_293_ = v_tail_296_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18___redArg(lean_object* v_i_320_, lean_object* v_source_321_, lean_object* v_target_322_){
_start:
{
lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_323_ = lean_array_get_size(v_source_321_);
v___x_324_ = lean_nat_dec_lt(v_i_320_, v___x_323_);
if (v___x_324_ == 0)
{
lean_dec_ref(v_source_321_);
lean_dec(v_i_320_);
return v_target_322_;
}
else
{
lean_object* v_es_325_; lean_object* v___x_326_; lean_object* v_source_327_; lean_object* v_target_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_es_325_ = lean_array_fget(v_source_321_, v_i_320_);
v___x_326_ = lean_box(0);
v_source_327_ = lean_array_fset(v_source_321_, v_i_320_, v___x_326_);
v_target_328_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19___redArg(v_target_322_, v_es_325_);
v___x_329_ = lean_unsigned_to_nat(1u);
v___x_330_ = lean_nat_add(v_i_320_, v___x_329_);
lean_dec(v_i_320_);
v_i_320_ = v___x_330_;
v_source_321_ = v_source_327_;
v_target_322_ = v_target_328_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17___redArg(lean_object* v_data_332_){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v_nbuckets_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_333_ = lean_array_get_size(v_data_332_);
v___x_334_ = lean_unsigned_to_nat(2u);
v_nbuckets_335_ = lean_nat_mul(v___x_333_, v___x_334_);
v___x_336_ = lean_unsigned_to_nat(0u);
v___x_337_ = lean_box(0);
v___x_338_ = lean_mk_array(v_nbuckets_335_, v___x_337_);
v___x_339_ = lean_array_propagate_mark(v_data_332_, v___x_338_);
v___x_340_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18___redArg(v___x_336_, v_data_332_, v___x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15___redArg(lean_object* v_m_341_, lean_object* v_a_342_, lean_object* v_b_343_){
_start:
{
lean_object* v_size_344_; lean_object* v_buckets_345_; lean_object* v___x_346_; uint64_t v___x_347_; uint64_t v___x_348_; uint64_t v___x_349_; uint64_t v_fold_350_; uint64_t v___x_351_; uint64_t v___x_352_; uint64_t v___x_353_; size_t v___x_354_; size_t v___x_355_; size_t v___x_356_; size_t v___x_357_; size_t v___x_358_; lean_object* v_bkt_359_; uint8_t v___x_360_; 
v_size_344_ = lean_ctor_get(v_m_341_, 0);
v_buckets_345_ = lean_ctor_get(v_m_341_, 1);
v___x_346_ = lean_array_get_size(v_buckets_345_);
v___x_347_ = l_Lean_Expr_hash(v_a_342_);
v___x_348_ = 32ULL;
v___x_349_ = lean_uint64_shift_right(v___x_347_, v___x_348_);
v_fold_350_ = lean_uint64_xor(v___x_347_, v___x_349_);
v___x_351_ = 16ULL;
v___x_352_ = lean_uint64_shift_right(v_fold_350_, v___x_351_);
v___x_353_ = lean_uint64_xor(v_fold_350_, v___x_352_);
v___x_354_ = lean_uint64_to_usize(v___x_353_);
v___x_355_ = lean_usize_of_nat(v___x_346_);
v___x_356_ = ((size_t)1ULL);
v___x_357_ = lean_usize_sub(v___x_355_, v___x_356_);
v___x_358_ = lean_usize_land(v___x_354_, v___x_357_);
v_bkt_359_ = lean_array_uget_borrowed(v_buckets_345_, v___x_358_);
v___x_360_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(v_a_342_, v_bkt_359_);
if (v___x_360_ == 0)
{
lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_381_; 
lean_inc_ref(v_buckets_345_);
lean_inc(v_size_344_);
v_isSharedCheck_381_ = !lean_is_exclusive(v_m_341_);
if (v_isSharedCheck_381_ == 0)
{
lean_object* v_unused_382_; lean_object* v_unused_383_; 
v_unused_382_ = lean_ctor_get(v_m_341_, 1);
lean_dec(v_unused_382_);
v_unused_383_ = lean_ctor_get(v_m_341_, 0);
lean_dec(v_unused_383_);
v___x_362_ = v_m_341_;
v_isShared_363_ = v_isSharedCheck_381_;
goto v_resetjp_361_;
}
else
{
lean_dec(v_m_341_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_381_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v_size_x27_365_; lean_object* v___x_366_; lean_object* v_buckets_x27_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_364_ = lean_unsigned_to_nat(1u);
v_size_x27_365_ = lean_nat_add(v_size_344_, v___x_364_);
lean_dec(v_size_344_);
lean_inc(v_bkt_359_);
v___x_366_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_366_, 0, v_a_342_);
lean_ctor_set(v___x_366_, 1, v_b_343_);
lean_ctor_set(v___x_366_, 2, v_bkt_359_);
v_buckets_x27_367_ = lean_array_uset(v_buckets_345_, v___x_358_, v___x_366_);
v___x_368_ = lean_unsigned_to_nat(4u);
v___x_369_ = lean_nat_mul(v_size_x27_365_, v___x_368_);
v___x_370_ = lean_unsigned_to_nat(3u);
v___x_371_ = lean_nat_div(v___x_369_, v___x_370_);
lean_dec(v___x_369_);
v___x_372_ = lean_array_get_size(v_buckets_x27_367_);
v___x_373_ = lean_nat_dec_le(v___x_371_, v___x_372_);
lean_dec(v___x_371_);
if (v___x_373_ == 0)
{
lean_object* v_val_374_; lean_object* v___x_376_; 
v_val_374_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17___redArg(v_buckets_x27_367_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 1, v_val_374_);
lean_ctor_set(v___x_362_, 0, v_size_x27_365_);
v___x_376_ = v___x_362_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_size_x27_365_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v_val_374_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
else
{
lean_object* v___x_379_; 
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 1, v_buckets_x27_367_);
lean_ctor_set(v___x_362_, 0, v_size_x27_365_);
v___x_379_ = v___x_362_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_size_x27_365_);
lean_ctor_set(v_reuseFailAlloc_380_, 1, v_buckets_x27_367_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
else
{
lean_dec(v_b_343_);
lean_dec_ref(v_a_342_);
return v_m_341_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(lean_object* v_e_384_, lean_object* v_a_385_){
_start:
{
lean_object* v___x_387_; lean_object* v_checked_388_; uint8_t v___x_389_; 
v___x_387_ = lean_st_ref_get(v_a_385_);
v_checked_388_ = lean_ctor_get(v___x_387_, 1);
lean_inc_ref(v_checked_388_);
lean_dec(v___x_387_);
v___x_389_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(v_checked_388_, v_e_384_);
lean_dec_ref(v_checked_388_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; lean_object* v_visited_391_; lean_object* v_checked_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_404_; 
v___x_390_ = lean_st_ref_take(v_a_385_);
v_visited_391_ = lean_ctor_get(v___x_390_, 0);
v_checked_392_ = lean_ctor_get(v___x_390_, 1);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_404_ == 0)
{
v___x_394_ = v___x_390_;
v_isShared_395_ = v_isSharedCheck_404_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_checked_392_);
lean_inc(v_visited_391_);
lean_dec(v___x_390_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_404_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_399_; 
v___x_396_ = lean_box(0);
v___x_397_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15___redArg(v_checked_392_, v_e_384_, v___x_396_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 1, v___x_397_);
v___x_399_ = v___x_394_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_visited_391_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v___x_397_);
v___x_399_ = v_reuseFailAlloc_403_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_st_ref_put(v_a_385_, v___x_399_);
v___x_401_ = lean_box(v___x_389_);
v___x_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
return v___x_402_;
}
}
}
else
{
lean_object* v___x_405_; lean_object* v___x_406_; 
lean_dec_ref(v_e_384_);
v___x_405_ = lean_box(v___x_389_);
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
return v___x_406_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg___boxed(lean_object* v_e_407_, lean_object* v_a_408_, lean_object* v___y_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_407_, v_a_408_);
lean_dec(v_a_408_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(lean_object* v_e_411_, lean_object* v_a_412_){
_start:
{
lean_object* v___x_414_; lean_object* v_visited_415_; size_t v___x_416_; size_t v___x_417_; size_t v___x_418_; lean_object* v___x_419_; size_t v___x_420_; uint8_t v___x_421_; 
v___x_414_ = lean_st_ref_get(v_a_412_);
v_visited_415_ = lean_ctor_get(v___x_414_, 0);
lean_inc_ref(v_visited_415_);
lean_dec(v___x_414_);
v___x_416_ = lean_ptr_addr(v_e_411_);
v___x_417_ = ((size_t)8191ULL);
v___x_418_ = lean_usize_mod(v___x_416_, v___x_417_);
v___x_419_ = lean_array_uget(v_visited_415_, v___x_418_);
lean_dec_ref(v_visited_415_);
v___x_420_ = lean_ptr_addr(v___x_419_);
lean_dec(v___x_419_);
v___x_421_ = lean_usize_dec_eq(v___x_420_, v___x_416_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; lean_object* v_visited_423_; lean_object* v_checked_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_435_; 
v___x_422_ = lean_st_ref_take(v_a_412_);
v_visited_423_ = lean_ctor_get(v___x_422_, 0);
v_checked_424_ = lean_ctor_get(v___x_422_, 1);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_435_ == 0)
{
v___x_426_ = v___x_422_;
v_isShared_427_ = v_isSharedCheck_435_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_checked_424_);
lean_inc(v_visited_423_);
lean_dec(v___x_422_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_435_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_428_; lean_object* v___x_430_; 
v___x_428_ = lean_array_uset(v_visited_423_, v___x_418_, v_e_411_);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 0, v___x_428_);
v___x_430_ = v___x_426_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_428_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_checked_424_);
v___x_430_ = v_reuseFailAlloc_434_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_431_ = lean_st_ref_put(v_a_412_, v___x_430_);
v___x_432_ = lean_box(v___x_421_);
v___x_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
return v___x_433_;
}
}
}
else
{
lean_object* v___x_436_; lean_object* v___x_437_; 
lean_dec_ref(v_e_411_);
v___x_436_ = lean_box(v___x_421_);
v___x_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
return v___x_437_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___boxed(lean_object* v_e_438_, lean_object* v_a_439_, lean_object* v___y_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_438_, v_a_439_);
lean_dec(v_a_439_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(lean_object* v_p_442_, lean_object* v_f_443_, uint8_t v_stopWhenVisited_444_, lean_object* v_e_445_, lean_object* v_a_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v___y_458_; lean_object* v___y_459_; lean_object* v___y_460_; lean_object* v___y_461_; lean_object* v___y_462_; lean_object* v___y_463_; lean_object* v_d_464_; lean_object* v_b_465_; lean_object* v___y_466_; lean_object* v___y_470_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; lean_object* v___y_474_; lean_object* v___y_475_; lean_object* v___y_476_; lean_object* v___x_497_; 
lean_inc_ref(v_e_445_);
v___x_497_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_445_, v_a_446_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v_a_498_; uint8_t v___x_499_; 
v_a_498_ = lean_ctor_get(v___x_497_, 0);
lean_inc(v_a_498_);
lean_dec_ref_known(v___x_497_, 1);
v___x_499_ = lean_unbox(v_a_498_);
lean_dec(v_a_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; uint8_t v___x_501_; 
lean_inc_ref(v_p_442_);
lean_inc_ref(v_e_445_);
v___x_500_ = lean_apply_1(v_p_442_, v_e_445_);
v___x_501_ = lean_unbox(v___x_500_);
if (v___x_501_ == 0)
{
v___y_470_ = v_a_446_;
v___y_471_ = v___y_447_;
v___y_472_ = v___y_448_;
v___y_473_ = v___y_449_;
v___y_474_ = v___y_450_;
v___y_475_ = v___y_451_;
v___y_476_ = v___y_452_;
goto v___jp_469_;
}
else
{
lean_object* v___x_502_; 
lean_inc_ref(v_e_445_);
v___x_502_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_445_, v_a_446_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; uint8_t v___x_504_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_a_503_);
lean_dec_ref_known(v___x_502_, 1);
v___x_504_ = lean_unbox(v_a_503_);
lean_dec(v_a_503_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
lean_inc_ref(v_f_443_);
lean_inc(v___y_452_);
lean_inc_ref(v___y_451_);
lean_inc(v___y_450_);
lean_inc_ref(v___y_449_);
lean_inc(v___y_448_);
lean_inc_ref(v___y_447_);
lean_inc_ref(v_e_445_);
v___x_505_ = lean_apply_8(v_f_443_, v_e_445_, v___y_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, lean_box(0));
if (lean_obj_tag(v___x_505_) == 0)
{
lean_dec_ref_known(v___x_505_, 1);
if (v_stopWhenVisited_444_ == 0)
{
v___y_470_ = v_a_446_;
v___y_471_ = v___y_447_;
v___y_472_ = v___y_448_;
v___y_473_ = v___y_449_;
v___y_474_ = v___y_450_;
v___y_475_ = v___y_451_;
v___y_476_ = v___y_452_;
goto v___jp_469_;
}
else
{
lean_dec_ref(v_e_445_);
lean_dec_ref(v_f_443_);
lean_dec_ref(v_p_442_);
goto v___jp_454_;
}
}
else
{
lean_dec_ref(v_e_445_);
lean_dec_ref(v_f_443_);
lean_dec_ref(v_p_442_);
return v___x_505_;
}
}
else
{
v___y_470_ = v_a_446_;
v___y_471_ = v___y_447_;
v___y_472_ = v___y_448_;
v___y_473_ = v___y_449_;
v___y_474_ = v___y_450_;
v___y_475_ = v___y_451_;
v___y_476_ = v___y_452_;
goto v___jp_469_;
}
}
else
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_513_; 
lean_dec_ref(v_e_445_);
lean_dec_ref(v_f_443_);
lean_dec_ref(v_p_442_);
v_a_506_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_513_ == 0)
{
v___x_508_ = v___x_502_;
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_502_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_a_506_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_445_);
lean_dec_ref(v_f_443_);
lean_dec_ref(v_p_442_);
goto v___jp_454_;
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
lean_dec_ref(v_e_445_);
lean_dec_ref(v_f_443_);
lean_dec_ref(v_p_442_);
v_a_514_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_497_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_497_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
v___jp_454_:
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = lean_box(0);
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
return v___x_456_;
}
v___jp_457_:
{
lean_object* v___x_467_; 
lean_inc_ref(v_f_443_);
lean_inc_ref(v_p_442_);
v___x_467_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_442_, v_f_443_, v_stopWhenVisited_444_, v_d_464_, v___y_466_, v___y_462_, v___y_461_, v___y_463_, v___y_460_, v___y_459_, v___y_458_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_dec_ref_known(v___x_467_, 1);
v_e_445_ = v_b_465_;
v_a_446_ = v___y_466_;
v___y_447_ = v___y_462_;
v___y_448_ = v___y_461_;
v___y_449_ = v___y_463_;
v___y_450_ = v___y_460_;
v___y_451_ = v___y_459_;
v___y_452_ = v___y_458_;
goto _start;
}
else
{
lean_dec_ref(v_b_465_);
lean_dec_ref(v_f_443_);
lean_dec_ref(v_p_442_);
return v___x_467_;
}
}
v___jp_469_:
{
switch(lean_obj_tag(v_e_445_))
{
case 7:
{
lean_object* v_binderType_477_; lean_object* v_body_478_; 
v_binderType_477_ = lean_ctor_get(v_e_445_, 1);
lean_inc_ref(v_binderType_477_);
v_body_478_ = lean_ctor_get(v_e_445_, 2);
lean_inc_ref(v_body_478_);
lean_dec_ref_known(v_e_445_, 3);
v___y_458_ = v___y_476_;
v___y_459_ = v___y_475_;
v___y_460_ = v___y_474_;
v___y_461_ = v___y_472_;
v___y_462_ = v___y_471_;
v___y_463_ = v___y_473_;
v_d_464_ = v_binderType_477_;
v_b_465_ = v_body_478_;
v___y_466_ = v___y_470_;
goto v___jp_457_;
}
case 6:
{
lean_object* v_binderType_479_; lean_object* v_body_480_; 
v_binderType_479_ = lean_ctor_get(v_e_445_, 1);
lean_inc_ref(v_binderType_479_);
v_body_480_ = lean_ctor_get(v_e_445_, 2);
lean_inc_ref(v_body_480_);
lean_dec_ref_known(v_e_445_, 3);
v___y_458_ = v___y_476_;
v___y_459_ = v___y_475_;
v___y_460_ = v___y_474_;
v___y_461_ = v___y_472_;
v___y_462_ = v___y_471_;
v___y_463_ = v___y_473_;
v_d_464_ = v_binderType_479_;
v_b_465_ = v_body_480_;
v___y_466_ = v___y_470_;
goto v___jp_457_;
}
case 8:
{
lean_object* v_type_481_; lean_object* v_value_482_; lean_object* v_body_483_; lean_object* v___x_484_; 
v_type_481_ = lean_ctor_get(v_e_445_, 1);
lean_inc_ref(v_type_481_);
v_value_482_ = lean_ctor_get(v_e_445_, 2);
lean_inc_ref(v_value_482_);
v_body_483_ = lean_ctor_get(v_e_445_, 3);
lean_inc_ref(v_body_483_);
lean_dec_ref_known(v_e_445_, 4);
lean_inc_ref(v_f_443_);
lean_inc_ref(v_p_442_);
v___x_484_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_442_, v_f_443_, v_stopWhenVisited_444_, v_type_481_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v___x_485_; 
lean_dec_ref_known(v___x_484_, 1);
lean_inc_ref(v_f_443_);
lean_inc_ref(v_p_442_);
v___x_485_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_442_, v_f_443_, v_stopWhenVisited_444_, v_value_482_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_dec_ref_known(v___x_485_, 1);
v_e_445_ = v_body_483_;
v_a_446_ = v___y_470_;
v___y_447_ = v___y_471_;
v___y_448_ = v___y_472_;
v___y_449_ = v___y_473_;
v___y_450_ = v___y_474_;
v___y_451_ = v___y_475_;
v___y_452_ = v___y_476_;
goto _start;
}
else
{
lean_dec_ref(v_body_483_);
lean_dec_ref(v_f_443_);
lean_dec_ref(v_p_442_);
return v___x_485_;
}
}
else
{
lean_dec_ref(v_body_483_);
lean_dec_ref(v_value_482_);
lean_dec_ref(v_f_443_);
lean_dec_ref(v_p_442_);
return v___x_484_;
}
}
case 5:
{
lean_object* v_fn_487_; lean_object* v_arg_488_; lean_object* v___x_489_; 
v_fn_487_ = lean_ctor_get(v_e_445_, 0);
lean_inc_ref(v_fn_487_);
v_arg_488_ = lean_ctor_get(v_e_445_, 1);
lean_inc_ref(v_arg_488_);
lean_dec_ref_known(v_e_445_, 2);
lean_inc_ref(v_f_443_);
lean_inc_ref(v_p_442_);
v___x_489_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_442_, v_f_443_, v_stopWhenVisited_444_, v_fn_487_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
if (lean_obj_tag(v___x_489_) == 0)
{
lean_dec_ref_known(v___x_489_, 1);
v_e_445_ = v_arg_488_;
v_a_446_ = v___y_470_;
v___y_447_ = v___y_471_;
v___y_448_ = v___y_472_;
v___y_449_ = v___y_473_;
v___y_450_ = v___y_474_;
v___y_451_ = v___y_475_;
v___y_452_ = v___y_476_;
goto _start;
}
else
{
lean_dec_ref(v_arg_488_);
lean_dec_ref(v_f_443_);
lean_dec_ref(v_p_442_);
return v___x_489_;
}
}
case 10:
{
lean_object* v_expr_491_; 
v_expr_491_ = lean_ctor_get(v_e_445_, 1);
lean_inc_ref(v_expr_491_);
lean_dec_ref_known(v_e_445_, 2);
v_e_445_ = v_expr_491_;
v_a_446_ = v___y_470_;
v___y_447_ = v___y_471_;
v___y_448_ = v___y_472_;
v___y_449_ = v___y_473_;
v___y_450_ = v___y_474_;
v___y_451_ = v___y_475_;
v___y_452_ = v___y_476_;
goto _start;
}
case 11:
{
lean_object* v_struct_493_; 
v_struct_493_ = lean_ctor_get(v_e_445_, 2);
lean_inc_ref(v_struct_493_);
lean_dec_ref_known(v_e_445_, 3);
v_e_445_ = v_struct_493_;
v_a_446_ = v___y_470_;
v___y_447_ = v___y_471_;
v___y_448_ = v___y_472_;
v___y_449_ = v___y_473_;
v___y_450_ = v___y_474_;
v___y_451_ = v___y_475_;
v___y_452_ = v___y_476_;
goto _start;
}
default: 
{
lean_object* v___x_495_; lean_object* v___x_496_; 
lean_dec_ref(v_e_445_);
lean_dec_ref(v_f_443_);
lean_dec_ref(v_p_442_);
v___x_495_ = lean_box(0);
v___x_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
return v___x_496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4___boxed(lean_object* v_p_522_, lean_object* v_f_523_, lean_object* v_stopWhenVisited_524_, lean_object* v_e_525_, lean_object* v_a_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_){
_start:
{
uint8_t v_stopWhenVisited_boxed_534_; lean_object* v_res_535_; 
v_stopWhenVisited_boxed_534_ = lean_unbox(v_stopWhenVisited_524_);
v_res_535_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_522_, v_f_523_, v_stopWhenVisited_boxed_534_, v_e_525_, v_a_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v_a_526_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(lean_object* v_p_536_, lean_object* v_f_537_, lean_object* v_e_538_, uint8_t v_stopWhenVisited_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_547_ = l_Lean_ForEachExprWhere_initCache;
v___x_548_ = lean_st_mk_ref(v___x_547_);
v___x_549_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_536_, v_f_537_, v_stopWhenVisited_539_, v_e_538_, v___x_548_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_558_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_558_ == 0)
{
v___x_552_ = v___x_549_;
v_isShared_553_ = v_isSharedCheck_558_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_549_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_558_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_554_ = lean_st_ref_get(v___x_548_);
lean_dec(v___x_548_);
lean_dec(v___x_554_);
if (v_isShared_553_ == 0)
{
v___x_556_ = v___x_552_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_550_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
else
{
lean_dec(v___x_548_);
return v___x_549_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2___boxed(lean_object* v_p_559_, lean_object* v_f_560_, lean_object* v_e_561_, lean_object* v_stopWhenVisited_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
uint8_t v_stopWhenVisited_boxed_570_; lean_object* v_res_571_; 
v_stopWhenVisited_boxed_570_ = lean_unbox(v_stopWhenVisited_562_);
v_res_571_ = l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(v_p_559_, v_f_560_, v_e_561_, v_stopWhenVisited_boxed_570_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
return v_res_571_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg(lean_object* v_m_572_, lean_object* v_a_573_){
_start:
{
lean_object* v_buckets_574_; lean_object* v___x_575_; uint64_t v___x_576_; uint64_t v___x_577_; uint64_t v___x_578_; uint64_t v_fold_579_; uint64_t v___x_580_; uint64_t v___x_581_; uint64_t v___x_582_; size_t v___x_583_; size_t v___x_584_; size_t v___x_585_; size_t v___x_586_; size_t v___x_587_; lean_object* v___x_588_; uint8_t v___x_589_; 
v_buckets_574_ = lean_ctor_get(v_m_572_, 1);
v___x_575_ = lean_array_get_size(v_buckets_574_);
v___x_576_ = l_Lean_instHashableFVarId_hash(v_a_573_);
v___x_577_ = 32ULL;
v___x_578_ = lean_uint64_shift_right(v___x_576_, v___x_577_);
v_fold_579_ = lean_uint64_xor(v___x_576_, v___x_578_);
v___x_580_ = 16ULL;
v___x_581_ = lean_uint64_shift_right(v_fold_579_, v___x_580_);
v___x_582_ = lean_uint64_xor(v_fold_579_, v___x_581_);
v___x_583_ = lean_uint64_to_usize(v___x_582_);
v___x_584_ = lean_usize_of_nat(v___x_575_);
v___x_585_ = ((size_t)1ULL);
v___x_586_ = lean_usize_sub(v___x_584_, v___x_585_);
v___x_587_ = lean_usize_land(v___x_583_, v___x_586_);
v___x_588_ = lean_array_uget_borrowed(v_buckets_574_, v___x_587_);
v___x_589_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(v_a_573_, v___x_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg___boxed(lean_object* v_m_590_, lean_object* v_a_591_){
_start:
{
uint8_t v_res_592_; lean_object* v_r_593_; 
v_res_592_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg(v_m_590_, v_a_591_);
lean_dec(v_a_591_);
lean_dec_ref(v_m_590_);
v_r_593_ = lean_box(v_res_592_);
return v_r_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0___boxed(lean_object* v_e_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lean_Compiler_LCNF_Closure_collectType___lam__0(v_e_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec_ref(v_e_594_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType(lean_object* v_type_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_){
_start:
{
uint8_t v___x_612_; 
v___x_612_ = l_Lean_Expr_hasFVar(v_type_604_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; lean_object* v___x_614_; 
lean_dec_ref(v_type_604_);
v___x_613_ = lean_box(0);
v___x_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
return v___x_614_;
}
else
{
lean_object* v___f_615_; lean_object* v___x_616_; uint8_t v___x_617_; lean_object* v___x_618_; 
v___f_615_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Closure_collectType___lam__0___boxed), 8, 0);
v___x_616_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectType___closed__0));
v___x_617_ = 0;
v___x_618_ = l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(v___x_616_, v___f_615_, v_type_604_, v___x_617_, v_a_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_);
return v___x_618_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(lean_object* v_as_619_, size_t v_i_620_, size_t v_stop_621_, lean_object* v_b_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
uint8_t v___x_630_; 
v___x_630_ = lean_usize_dec_eq(v_i_620_, v_stop_621_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; lean_object* v_type_632_; lean_object* v___x_633_; 
v___x_631_ = lean_array_uget_borrowed(v_as_619_, v_i_620_);
v_type_632_ = lean_ctor_get(v___x_631_, 2);
lean_inc_ref(v_type_632_);
v___x_633_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_632_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; size_t v___x_635_; size_t v___x_636_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_a_634_);
lean_dec_ref_known(v___x_633_, 1);
v___x_635_ = ((size_t)1ULL);
v___x_636_ = lean_usize_add(v_i_620_, v___x_635_);
v_i_620_ = v___x_636_;
v_b_622_ = v_a_634_;
goto _start;
}
else
{
return v___x_633_;
}
}
else
{
lean_object* v___x_638_; 
v___x_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_638_, 0, v_b_622_);
return v___x_638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams(lean_object* v_params_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v___x_647_ = lean_unsigned_to_nat(0u);
v___x_648_ = lean_array_get_size(v_params_639_);
v___x_649_ = lean_box(0);
v___x_650_ = lean_nat_dec_lt(v___x_647_, v___x_648_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; 
v___x_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_649_);
return v___x_651_;
}
else
{
size_t v___x_652_; size_t v___x_653_; lean_object* v___x_654_; 
v___x_652_ = ((size_t)0ULL);
v___x_653_ = lean_usize_of_nat(v___x_648_);
v___x_654_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(v_params_639_, v___x_652_, v___x_653_, v___x_649_, v_a_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_);
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg(lean_object* v_arg_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
switch(lean_obj_tag(v_arg_655_))
{
case 0:
{
lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_663_ = lean_box(0);
v___x_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
return v___x_664_;
}
case 1:
{
lean_object* v_fvarId_665_; lean_object* v___x_666_; 
v_fvarId_665_ = lean_ctor_get(v_arg_655_, 0);
lean_inc(v_fvarId_665_);
lean_dec_ref_known(v_arg_655_, 1);
v___x_666_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_665_, v_a_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_);
return v___x_666_;
}
default: 
{
lean_object* v_expr_667_; lean_object* v___x_668_; 
v_expr_667_ = lean_ctor_get(v_arg_655_, 0);
lean_inc_ref(v_expr_667_);
lean_dec_ref_known(v_arg_655_, 1);
v___x_668_ = l_Lean_Compiler_LCNF_Closure_collectType(v_expr_667_, v_a_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_);
return v___x_668_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(lean_object* v_as_669_, size_t v_i_670_, size_t v_stop_671_, lean_object* v_b_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
uint8_t v___x_680_; 
v___x_680_ = lean_usize_dec_eq(v_i_670_, v_stop_671_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_array_uget_borrowed(v_as_669_, v_i_670_);
lean_inc(v___x_681_);
v___x_682_ = l_Lean_Compiler_LCNF_Closure_collectArg(v___x_681_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v_a_683_; size_t v___x_684_; size_t v___x_685_; 
v_a_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_a_683_);
lean_dec_ref_known(v___x_682_, 1);
v___x_684_ = ((size_t)1ULL);
v___x_685_ = lean_usize_add(v_i_670_, v___x_684_);
v_i_670_ = v___x_685_;
v_b_672_ = v_a_683_;
goto _start;
}
else
{
return v___x_682_;
}
}
else
{
lean_object* v___x_687_; 
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v_b_672_);
return v___x_687_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue(lean_object* v_e_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
switch(lean_obj_tag(v_e_688_))
{
case 2:
{
lean_object* v_struct_696_; lean_object* v___x_697_; 
v_struct_696_ = lean_ctor_get(v_e_688_, 2);
lean_inc(v_struct_696_);
lean_dec_ref_known(v_e_688_, 3);
v___x_697_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_struct_696_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
return v___x_697_;
}
case 3:
{
lean_object* v_args_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; uint8_t v___x_702_; 
v_args_698_ = lean_ctor_get(v_e_688_, 2);
lean_inc_ref(v_args_698_);
lean_dec_ref_known(v_e_688_, 3);
v___x_699_ = lean_unsigned_to_nat(0u);
v___x_700_ = lean_array_get_size(v_args_698_);
v___x_701_ = lean_box(0);
v___x_702_ = lean_nat_dec_lt(v___x_699_, v___x_700_);
if (v___x_702_ == 0)
{
lean_object* v___x_703_; 
lean_dec_ref(v_args_698_);
v___x_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_701_);
return v___x_703_;
}
else
{
size_t v___x_704_; size_t v___x_705_; lean_object* v___x_706_; 
v___x_704_ = ((size_t)0ULL);
v___x_705_ = lean_usize_of_nat(v___x_700_);
v___x_706_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(v_args_698_, v___x_704_, v___x_705_, v___x_701_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
lean_dec_ref(v_args_698_);
return v___x_706_;
}
}
case 4:
{
lean_object* v_fvarId_707_; lean_object* v_args_708_; lean_object* v___x_709_; 
v_fvarId_707_ = lean_ctor_get(v_e_688_, 0);
lean_inc(v_fvarId_707_);
v_args_708_ = lean_ctor_get(v_e_688_, 1);
lean_inc_ref(v_args_708_);
lean_dec_ref_known(v_e_688_, 2);
v___x_709_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_707_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_723_; 
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_723_ == 0)
{
lean_object* v_unused_724_; 
v_unused_724_ = lean_ctor_get(v___x_709_, 0);
lean_dec(v_unused_724_);
v___x_711_ = v___x_709_;
v_isShared_712_ = v_isSharedCheck_723_;
goto v_resetjp_710_;
}
else
{
lean_dec(v___x_709_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_723_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_713_ = lean_unsigned_to_nat(0u);
v___x_714_ = lean_array_get_size(v_args_708_);
v___x_715_ = lean_box(0);
v___x_716_ = lean_nat_dec_lt(v___x_713_, v___x_714_);
if (v___x_716_ == 0)
{
lean_object* v___x_718_; 
lean_dec_ref(v_args_708_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_715_);
v___x_718_ = v___x_711_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_715_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
else
{
size_t v___x_720_; size_t v___x_721_; lean_object* v___x_722_; 
lean_del_object(v___x_711_);
v___x_720_ = ((size_t)0ULL);
v___x_721_ = lean_usize_of_nat(v___x_714_);
v___x_722_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(v_args_708_, v___x_720_, v___x_721_, v___x_715_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
lean_dec_ref(v_args_708_);
return v___x_722_;
}
}
}
else
{
lean_dec_ref(v_args_708_);
return v___x_709_;
}
}
default: 
{
lean_object* v___x_725_; lean_object* v___x_726_; 
lean_dec(v_e_688_);
v___x_725_ = lean_box(0);
v___x_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
return v___x_726_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11(lean_object* v_as_727_, size_t v_i_728_, size_t v_stop_729_, lean_object* v_b_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
lean_object* v___y_739_; uint8_t v___x_744_; 
v___x_744_ = lean_usize_dec_eq(v_i_728_, v_stop_729_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; 
v___x_745_ = lean_array_uget_borrowed(v_as_727_, v_i_728_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v_params_746_; lean_object* v_code_747_; lean_object* v___x_748_; 
v_params_746_ = lean_ctor_get(v___x_745_, 1);
v_code_747_ = lean_ctor_get(v___x_745_, 2);
v___x_748_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_746_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v___x_749_; 
lean_dec_ref_known(v___x_748_, 1);
lean_inc_ref(v_code_747_);
v___x_749_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_code_747_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
v___y_739_ = v___x_749_;
goto v___jp_738_;
}
else
{
return v___x_748_;
}
}
else
{
lean_object* v_code_750_; lean_object* v___x_751_; 
v_code_750_ = lean_ctor_get(v___x_745_, 0);
lean_inc_ref(v_code_750_);
v___x_751_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_code_750_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
v___y_739_ = v___x_751_;
goto v___jp_738_;
}
}
else
{
lean_object* v___x_752_; 
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v_b_730_);
return v___x_752_;
}
v___jp_738_:
{
if (lean_obj_tag(v___y_739_) == 0)
{
lean_object* v_a_740_; size_t v___x_741_; size_t v___x_742_; 
v_a_740_ = lean_ctor_get(v___y_739_, 0);
lean_inc(v_a_740_);
lean_dec_ref_known(v___y_739_, 1);
v___x_741_ = ((size_t)1ULL);
v___x_742_ = lean_usize_add(v_i_728_, v___x_741_);
v_i_728_ = v___x_742_;
v_b_730_ = v_a_740_;
goto _start;
}
else
{
return v___y_739_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode(lean_object* v_c_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_){
_start:
{
lean_object* v_decl_762_; lean_object* v_k_763_; lean_object* v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; 
switch(lean_obj_tag(v_c_753_))
{
case 0:
{
lean_object* v_decl_772_; lean_object* v_k_773_; lean_object* v_type_774_; lean_object* v_value_775_; lean_object* v___x_776_; 
v_decl_772_ = lean_ctor_get(v_c_753_, 0);
lean_inc_ref(v_decl_772_);
v_k_773_ = lean_ctor_get(v_c_753_, 1);
lean_inc_ref(v_k_773_);
lean_dec_ref_known(v_c_753_, 2);
v_type_774_ = lean_ctor_get(v_decl_772_, 2);
lean_inc_ref(v_type_774_);
v_value_775_ = lean_ctor_get(v_decl_772_, 3);
lean_inc(v_value_775_);
lean_dec_ref(v_decl_772_);
v___x_776_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_774_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
if (lean_obj_tag(v___x_776_) == 0)
{
lean_object* v___x_777_; 
lean_dec_ref_known(v___x_776_, 1);
v___x_777_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_value_775_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_dec_ref_known(v___x_777_, 1);
v_c_753_ = v_k_773_;
goto _start;
}
else
{
lean_dec_ref(v_k_773_);
return v___x_777_;
}
}
else
{
lean_dec(v_value_775_);
lean_dec_ref(v_k_773_);
return v___x_776_;
}
}
case 3:
{
lean_object* v_args_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; uint8_t v___x_783_; 
v_args_779_ = lean_ctor_get(v_c_753_, 1);
lean_inc_ref(v_args_779_);
lean_dec_ref_known(v_c_753_, 2);
v___x_780_ = lean_unsigned_to_nat(0u);
v___x_781_ = lean_array_get_size(v_args_779_);
v___x_782_ = lean_box(0);
v___x_783_ = lean_nat_dec_lt(v___x_780_, v___x_781_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; 
lean_dec_ref(v_args_779_);
v___x_784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_784_, 0, v___x_782_);
return v___x_784_;
}
else
{
size_t v___x_785_; size_t v___x_786_; lean_object* v___x_787_; 
v___x_785_ = ((size_t)0ULL);
v___x_786_ = lean_usize_of_nat(v___x_781_);
v___x_787_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(v_args_779_, v___x_785_, v___x_786_, v___x_782_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
lean_dec_ref(v_args_779_);
return v___x_787_;
}
}
case 4:
{
lean_object* v_cases_788_; lean_object* v_resultType_789_; lean_object* v_discr_790_; lean_object* v_alts_791_; lean_object* v___x_792_; 
v_cases_788_ = lean_ctor_get(v_c_753_, 0);
lean_inc_ref(v_cases_788_);
lean_dec_ref_known(v_c_753_, 1);
v_resultType_789_ = lean_ctor_get(v_cases_788_, 1);
lean_inc_ref(v_resultType_789_);
v_discr_790_ = lean_ctor_get(v_cases_788_, 2);
lean_inc(v_discr_790_);
v_alts_791_ = lean_ctor_get(v_cases_788_, 3);
lean_inc_ref(v_alts_791_);
lean_dec_ref(v_cases_788_);
v___x_792_ = l_Lean_Compiler_LCNF_Closure_collectType(v_resultType_789_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v___x_793_; 
lean_dec_ref_known(v___x_792_, 1);
v___x_793_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_discr_790_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_807_; 
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_807_ == 0)
{
lean_object* v_unused_808_; 
v_unused_808_ = lean_ctor_get(v___x_793_, 0);
lean_dec(v_unused_808_);
v___x_795_ = v___x_793_;
v_isShared_796_ = v_isSharedCheck_807_;
goto v_resetjp_794_;
}
else
{
lean_dec(v___x_793_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_807_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; uint8_t v___x_800_; 
v___x_797_ = lean_unsigned_to_nat(0u);
v___x_798_ = lean_array_get_size(v_alts_791_);
v___x_799_ = lean_box(0);
v___x_800_ = lean_nat_dec_lt(v___x_797_, v___x_798_);
if (v___x_800_ == 0)
{
lean_object* v___x_802_; 
lean_dec_ref(v_alts_791_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_799_);
v___x_802_ = v___x_795_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_799_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
else
{
size_t v___x_804_; size_t v___x_805_; lean_object* v___x_806_; 
lean_del_object(v___x_795_);
v___x_804_ = ((size_t)0ULL);
v___x_805_ = lean_usize_of_nat(v___x_798_);
v___x_806_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11(v_alts_791_, v___x_804_, v___x_805_, v___x_799_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
lean_dec_ref(v_alts_791_);
return v___x_806_;
}
}
}
else
{
lean_dec_ref(v_alts_791_);
return v___x_793_;
}
}
else
{
lean_dec_ref(v_alts_791_);
lean_dec(v_discr_790_);
return v___x_792_;
}
}
case 5:
{
lean_object* v_fvarId_809_; lean_object* v___x_810_; 
v_fvarId_809_ = lean_ctor_get(v_c_753_, 0);
lean_inc(v_fvarId_809_);
lean_dec_ref_known(v_c_753_, 1);
v___x_810_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_809_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
return v___x_810_;
}
case 6:
{
lean_object* v_type_811_; lean_object* v___x_812_; 
v_type_811_ = lean_ctor_get(v_c_753_, 0);
lean_inc_ref(v_type_811_);
lean_dec_ref_known(v_c_753_, 1);
v___x_812_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_811_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
return v___x_812_;
}
default: 
{
lean_object* v_decl_813_; lean_object* v_k_814_; 
v_decl_813_ = lean_ctor_get(v_c_753_, 0);
lean_inc_ref(v_decl_813_);
v_k_814_ = lean_ctor_get(v_c_753_, 1);
lean_inc_ref(v_k_814_);
lean_dec_ref(v_c_753_);
v_decl_762_ = v_decl_813_;
v_k_763_ = v_k_814_;
v___y_764_ = v_a_754_;
v___y_765_ = v_a_755_;
v___y_766_ = v_a_756_;
v___y_767_ = v_a_757_;
v___y_768_ = v_a_758_;
v___y_769_ = v_a_759_;
goto v___jp_761_;
}
}
v___jp_761_:
{
lean_object* v___x_770_; 
v___x_770_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_decl_762_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_dec_ref_known(v___x_770_, 1);
v_c_753_ = v_k_763_;
v_a_754_ = v___y_764_;
v_a_755_ = v___y_765_;
v_a_756_ = v___y_766_;
v_a_757_ = v___y_767_;
v_a_758_ = v___y_768_;
v_a_759_ = v___y_769_;
goto _start;
}
else
{
lean_dec_ref(v_k_763_);
return v___x_770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl(lean_object* v_decl_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_){
_start:
{
lean_object* v_params_823_; lean_object* v_type_824_; lean_object* v_value_825_; lean_object* v___x_826_; 
v_params_823_ = lean_ctor_get(v_decl_815_, 2);
lean_inc_ref(v_params_823_);
v_type_824_ = lean_ctor_get(v_decl_815_, 3);
lean_inc_ref(v_type_824_);
v_value_825_ = lean_ctor_get(v_decl_815_, 4);
lean_inc_ref(v_value_825_);
lean_dec_ref(v_decl_815_);
v___x_826_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_824_, v_a_816_, v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v___x_827_; 
lean_dec_ref_known(v___x_826_, 1);
v___x_827_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_823_, v_a_816_, v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_);
lean_dec_ref(v_params_823_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v___x_828_; 
lean_dec_ref_known(v___x_827_, 1);
v___x_828_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_value_825_, v_a_816_, v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_);
return v___x_828_;
}
else
{
lean_dec_ref(v_value_825_);
return v___x_827_;
}
}
else
{
lean_dec_ref(v_value_825_);
lean_dec_ref(v_params_823_);
return v___x_826_;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_832_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2));
v___x_833_ = lean_unsigned_to_nat(10u);
v___x_834_ = lean_unsigned_to_nat(149u);
v___x_835_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1));
v___x_836_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0));
v___x_837_ = l_mkPanicMessageWithDecl(v___x_836_, v___x_835_, v___x_834_, v___x_833_, v___x_832_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar(lean_object* v_fvarId_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_){
_start:
{
lean_object* v___x_849_; lean_object* v_visited_850_; uint8_t v___x_851_; 
v___x_849_ = lean_st_ref_get(v_a_840_);
v_visited_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc_ref(v_visited_850_);
lean_dec(v___x_849_);
v___x_851_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg(v_visited_850_, v_fvarId_838_);
lean_dec_ref(v_visited_850_);
if (v___x_851_ == 0)
{
lean_object* v___x_852_; 
lean_inc(v_fvarId_838_);
v___x_852_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_838_, v_a_840_);
if (lean_obj_tag(v___x_852_) == 0)
{
lean_object* v_inScope_853_; lean_object* v_abstract_854_; lean_object* v___x_855_; uint8_t v___x_856_; 
lean_dec_ref_known(v___x_852_, 1);
v_inScope_853_ = lean_ctor_get(v_a_839_, 0);
v_abstract_854_ = lean_ctor_get(v_a_839_, 1);
lean_inc_ref(v_inScope_853_);
lean_inc(v_fvarId_838_);
v___x_855_ = lean_apply_1(v_inScope_853_, v_fvarId_838_);
v___x_856_ = lean_unbox(v___x_855_);
if (v___x_856_ == 0)
{
lean_dec(v_fvarId_838_);
goto v___jp_846_;
}
else
{
uint8_t v___x_857_; lean_object* v___x_858_; 
v___x_857_ = 0;
v___x_858_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_857_, v_fvarId_838_, v_a_842_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_1025_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_861_ = v___x_858_;
v_isShared_862_ = v_isSharedCheck_1025_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_858_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_1025_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
if (lean_obj_tag(v_a_859_) == 1)
{
lean_object* v_val_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_916_; 
lean_dec(v_fvarId_838_);
v_val_863_ = lean_ctor_get(v_a_859_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v_a_859_);
if (v_isSharedCheck_916_ == 0)
{
v___x_865_ = v_a_859_;
v_isShared_866_ = v_isSharedCheck_916_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_val_863_);
lean_dec(v_a_859_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_916_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v_fvarId_867_; lean_object* v_binderName_868_; lean_object* v_type_869_; lean_object* v___x_870_; uint8_t v___x_871_; 
v_fvarId_867_ = lean_ctor_get(v_val_863_, 0);
v_binderName_868_ = lean_ctor_get(v_val_863_, 1);
v_type_869_ = lean_ctor_get(v_val_863_, 3);
lean_inc_ref(v_abstract_854_);
lean_inc(v_fvarId_867_);
v___x_870_ = lean_apply_1(v_abstract_854_, v_fvarId_867_);
v___x_871_ = lean_unbox(v___x_870_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; 
lean_del_object(v___x_861_);
lean_inc(v_val_863_);
v___x_872_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_val_863_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_896_; 
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_896_ == 0)
{
lean_object* v_unused_897_; 
v_unused_897_ = lean_ctor_get(v___x_872_, 0);
lean_dec(v_unused_897_);
v___x_874_ = v___x_872_;
v_isShared_875_ = v_isSharedCheck_896_;
goto v_resetjp_873_;
}
else
{
lean_dec(v___x_872_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_896_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v_visited_877_; lean_object* v_params_878_; lean_object* v_decls_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_895_; 
v___x_876_ = lean_st_ref_take(v_a_840_);
v_visited_877_ = lean_ctor_get(v___x_876_, 0);
v_params_878_ = lean_ctor_get(v___x_876_, 1);
v_decls_879_ = lean_ctor_get(v___x_876_, 2);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_895_ == 0)
{
v___x_881_ = v___x_876_;
v_isShared_882_ = v_isSharedCheck_895_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_decls_879_);
lean_inc(v_params_878_);
lean_inc(v_visited_877_);
lean_dec(v___x_876_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_895_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_883_ = lean_box(0);
if (v_isShared_866_ == 0)
{
v___x_885_ = v___x_865_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_val_863_);
v___x_885_ = v_reuseFailAlloc_894_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
lean_object* v___x_886_; lean_object* v___x_888_; 
v___x_886_ = lean_array_push(v_decls_879_, v___x_885_);
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 2, v___x_886_);
v___x_888_ = v___x_881_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_visited_877_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v_params_878_);
lean_ctor_set(v_reuseFailAlloc_893_, 2, v___x_886_);
v___x_888_ = v_reuseFailAlloc_893_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
lean_object* v___x_889_; lean_object* v___x_891_; 
v___x_889_ = lean_st_ref_put(v_a_840_, v___x_888_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 0, v___x_883_);
v___x_891_ = v___x_874_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_883_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_865_);
lean_dec(v_val_863_);
return v___x_872_;
}
}
else
{
lean_object* v___x_898_; lean_object* v_visited_899_; lean_object* v_params_900_; lean_object* v_decls_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_915_; 
lean_inc_ref(v_type_869_);
lean_inc(v_binderName_868_);
lean_inc(v_fvarId_867_);
lean_del_object(v___x_865_);
lean_dec(v_val_863_);
v___x_898_ = lean_st_ref_take(v_a_840_);
v_visited_899_ = lean_ctor_get(v___x_898_, 0);
v_params_900_ = lean_ctor_get(v___x_898_, 1);
v_decls_901_ = lean_ctor_get(v___x_898_, 2);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_915_ == 0)
{
v___x_903_ = v___x_898_;
v_isShared_904_ = v_isSharedCheck_915_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_decls_901_);
lean_inc(v_params_900_);
lean_inc(v_visited_899_);
lean_dec(v___x_898_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_915_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_905_ = lean_box(0);
v___x_906_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_906_, 0, v_fvarId_867_);
lean_ctor_set(v___x_906_, 1, v_binderName_868_);
lean_ctor_set(v___x_906_, 2, v_type_869_);
lean_ctor_set_uint8(v___x_906_, sizeof(void*)*3, v___x_851_);
v___x_907_ = lean_array_push(v_params_900_, v___x_906_);
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 1, v___x_907_);
v___x_909_ = v___x_903_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_visited_899_);
lean_ctor_set(v_reuseFailAlloc_914_, 1, v___x_907_);
lean_ctor_set(v_reuseFailAlloc_914_, 2, v_decls_901_);
v___x_909_ = v_reuseFailAlloc_914_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_910_ = lean_st_ref_put(v_a_840_, v___x_909_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 0, v___x_905_);
v___x_912_ = v___x_861_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v___x_905_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
}
else
{
lean_object* v___x_917_; 
lean_del_object(v___x_861_);
lean_dec(v_a_859_);
v___x_917_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v___x_857_, v_fvarId_838_, v_a_842_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___x_917_, 1);
if (lean_obj_tag(v_a_918_) == 1)
{
lean_object* v_val_919_; lean_object* v_type_920_; lean_object* v___x_921_; 
lean_dec(v_fvarId_838_);
v_val_919_ = lean_ctor_get(v_a_918_, 0);
lean_inc(v_val_919_);
lean_dec_ref_known(v_a_918_, 1);
v_type_920_ = lean_ctor_get(v_val_919_, 2);
lean_inc_ref(v_type_920_);
v___x_921_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_920_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_942_; 
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_921_, 0);
lean_dec(v_unused_943_);
v___x_923_ = v___x_921_;
v_isShared_924_ = v_isSharedCheck_942_;
goto v_resetjp_922_;
}
else
{
lean_dec(v___x_921_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_942_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_925_; lean_object* v_visited_926_; lean_object* v_params_927_; lean_object* v_decls_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_941_; 
v___x_925_ = lean_st_ref_take(v_a_840_);
v_visited_926_ = lean_ctor_get(v___x_925_, 0);
v_params_927_ = lean_ctor_get(v___x_925_, 1);
v_decls_928_ = lean_ctor_get(v___x_925_, 2);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_941_ == 0)
{
v___x_930_ = v___x_925_;
v_isShared_931_ = v_isSharedCheck_941_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_decls_928_);
lean_inc(v_params_927_);
lean_inc(v_visited_926_);
lean_dec(v___x_925_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_941_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_935_; 
v___x_932_ = lean_box(0);
v___x_933_ = lean_array_push(v_params_927_, v_val_919_);
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 1, v___x_933_);
v___x_935_ = v___x_930_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_visited_926_);
lean_ctor_set(v_reuseFailAlloc_940_, 1, v___x_933_);
lean_ctor_set(v_reuseFailAlloc_940_, 2, v_decls_928_);
v___x_935_ = v_reuseFailAlloc_940_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
lean_object* v___x_936_; lean_object* v___x_938_; 
v___x_936_ = lean_st_ref_put(v_a_840_, v___x_935_);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_932_);
v___x_938_ = v___x_923_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v___x_932_);
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
}
else
{
lean_dec(v_val_919_);
return v___x_921_;
}
}
else
{
lean_object* v___x_944_; 
lean_dec(v_a_918_);
v___x_944_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v___x_857_, v_fvarId_838_, v_a_842_);
lean_dec(v_fvarId_838_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_944_, 1);
if (lean_obj_tag(v_a_945_) == 1)
{
lean_object* v_val_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_1006_; 
v_val_946_ = lean_ctor_get(v_a_945_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_a_945_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_948_ = v_a_945_;
v_isShared_949_ = v_isSharedCheck_1006_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_val_946_);
lean_dec(v_a_945_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_1006_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v_fvarId_950_; lean_object* v_binderName_951_; lean_object* v_type_952_; lean_object* v_value_953_; lean_object* v___x_954_; 
v_fvarId_950_ = lean_ctor_get(v_val_946_, 0);
v_binderName_951_ = lean_ctor_get(v_val_946_, 1);
v_type_952_ = lean_ctor_get(v_val_946_, 2);
v_value_953_ = lean_ctor_get(v_val_946_, 3);
lean_inc_ref(v_type_952_);
v___x_954_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_952_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_1004_; 
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_1004_ == 0)
{
lean_object* v_unused_1005_; 
v_unused_1005_ = lean_ctor_get(v___x_954_, 0);
lean_dec(v_unused_1005_);
v___x_956_ = v___x_954_;
v_isShared_957_ = v_isSharedCheck_1004_;
goto v_resetjp_955_;
}
else
{
lean_dec(v___x_954_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_1004_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; uint8_t v___x_959_; 
lean_inc_ref(v_abstract_854_);
lean_inc(v_fvarId_950_);
v___x_958_ = lean_apply_1(v_abstract_854_, v_fvarId_950_);
v___x_959_ = lean_unbox(v___x_958_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; 
lean_del_object(v___x_956_);
lean_inc(v_value_953_);
v___x_960_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_value_953_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_984_; 
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_984_ == 0)
{
lean_object* v_unused_985_; 
v_unused_985_ = lean_ctor_get(v___x_960_, 0);
lean_dec(v_unused_985_);
v___x_962_ = v___x_960_;
v_isShared_963_ = v_isSharedCheck_984_;
goto v_resetjp_961_;
}
else
{
lean_dec(v___x_960_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_984_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v_visited_965_; lean_object* v_params_966_; lean_object* v_decls_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_983_; 
v___x_964_ = lean_st_ref_take(v_a_840_);
v_visited_965_ = lean_ctor_get(v___x_964_, 0);
v_params_966_ = lean_ctor_get(v___x_964_, 1);
v_decls_967_ = lean_ctor_get(v___x_964_, 2);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_983_ == 0)
{
v___x_969_ = v___x_964_;
v_isShared_970_ = v_isSharedCheck_983_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_decls_967_);
lean_inc(v_params_966_);
lean_inc(v_visited_965_);
lean_dec(v___x_964_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_983_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_971_; lean_object* v___x_973_; 
v___x_971_ = lean_box(0);
if (v_isShared_949_ == 0)
{
lean_ctor_set_tag(v___x_948_, 0);
v___x_973_ = v___x_948_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_val_946_);
v___x_973_ = v_reuseFailAlloc_982_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
lean_object* v___x_974_; lean_object* v___x_976_; 
v___x_974_ = lean_array_push(v_decls_967_, v___x_973_);
if (v_isShared_970_ == 0)
{
lean_ctor_set(v___x_969_, 2, v___x_974_);
v___x_976_ = v___x_969_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_visited_965_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v_params_966_);
lean_ctor_set(v_reuseFailAlloc_981_, 2, v___x_974_);
v___x_976_ = v_reuseFailAlloc_981_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
lean_object* v___x_977_; lean_object* v___x_979_; 
v___x_977_ = lean_st_ref_put(v_a_840_, v___x_976_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v___x_971_);
v___x_979_ = v___x_962_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_971_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_948_);
lean_dec(v_val_946_);
return v___x_960_;
}
}
else
{
lean_object* v___x_986_; lean_object* v_visited_987_; lean_object* v_params_988_; lean_object* v_decls_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_1003_; 
lean_inc_ref(v_type_952_);
lean_inc(v_binderName_951_);
lean_inc(v_fvarId_950_);
lean_del_object(v___x_948_);
lean_dec(v_val_946_);
v___x_986_ = lean_st_ref_take(v_a_840_);
v_visited_987_ = lean_ctor_get(v___x_986_, 0);
v_params_988_ = lean_ctor_get(v___x_986_, 1);
v_decls_989_ = lean_ctor_get(v___x_986_, 2);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_991_ = v___x_986_;
v_isShared_992_ = v_isSharedCheck_1003_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_decls_989_);
lean_inc(v_params_988_);
lean_inc(v_visited_987_);
lean_dec(v___x_986_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_1003_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_997_; 
v___x_993_ = lean_box(0);
v___x_994_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_994_, 0, v_fvarId_950_);
lean_ctor_set(v___x_994_, 1, v_binderName_951_);
lean_ctor_set(v___x_994_, 2, v_type_952_);
lean_ctor_set_uint8(v___x_994_, sizeof(void*)*3, v___x_851_);
v___x_995_ = lean_array_push(v_params_988_, v___x_994_);
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 1, v___x_995_);
v___x_997_ = v___x_991_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_visited_987_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v___x_995_);
lean_ctor_set(v_reuseFailAlloc_1002_, 2, v_decls_989_);
v___x_997_ = v_reuseFailAlloc_1002_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
lean_object* v___x_998_; lean_object* v___x_1000_; 
v___x_998_ = lean_st_ref_put(v_a_840_, v___x_997_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 0, v___x_993_);
v___x_1000_ = v___x_956_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v___x_993_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_948_);
lean_dec(v_val_946_);
return v___x_954_;
}
}
}
else
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_dec(v_a_945_);
v___x_1007_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3, &l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3_once, _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3);
v___x_1008_ = l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5(v___x_1007_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
return v___x_1008_;
}
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
v_a_1009_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_944_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_944_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec(v_fvarId_838_);
v_a_1017_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_917_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_917_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
}
}
else
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
lean_dec(v_fvarId_838_);
v_a_1026_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___x_858_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_858_);
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
else
{
lean_dec(v_fvarId_838_);
return v___x_852_;
}
}
else
{
lean_dec(v_fvarId_838_);
goto v___jp_846_;
}
v___jp_846_:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = lean_box(0);
v___x_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
return v___x_848_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0(lean_object* v_e_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = l_Lean_Expr_fvarId_x21(v_e_1034_);
v___x_1043_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v___x_1042_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg___boxed(lean_object* v_arg_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lean_Compiler_LCNF_Closure_collectArg(v_arg_1044_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_, v_a_1049_, v_a_1050_);
lean_dec(v_a_1050_);
lean_dec_ref(v_a_1049_);
lean_dec(v_a_1048_);
lean_dec_ref(v_a_1047_);
lean_dec(v_a_1046_);
lean_dec_ref(v_a_1045_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___boxed(lean_object* v_type_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
lean_dec(v_a_1057_);
lean_dec_ref(v_a_1056_);
lean_dec(v_a_1055_);
lean_dec_ref(v_a_1054_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl___boxed(lean_object* v_decl_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_decl_1062_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_);
lean_dec(v_a_1068_);
lean_dec_ref(v_a_1067_);
lean_dec(v_a_1066_);
lean_dec_ref(v_a_1065_);
lean_dec(v_a_1064_);
lean_dec_ref(v_a_1063_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams___boxed(lean_object* v_params_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_);
lean_dec(v_a_1077_);
lean_dec_ref(v_a_1076_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
lean_dec(v_a_1073_);
lean_dec_ref(v_a_1072_);
lean_dec_ref(v_params_1071_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7___boxed(lean_object* v_as_1080_, lean_object* v_i_1081_, lean_object* v_stop_1082_, lean_object* v_b_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_){
_start:
{
size_t v_i_boxed_1091_; size_t v_stop_boxed_1092_; lean_object* v_res_1093_; 
v_i_boxed_1091_ = lean_unbox_usize(v_i_1081_);
lean_dec(v_i_1081_);
v_stop_boxed_1092_ = lean_unbox_usize(v_stop_1082_);
lean_dec(v_stop_1082_);
v_res_1093_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(v_as_1080_, v_i_boxed_1091_, v_stop_boxed_1092_, v_b_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec_ref(v_as_1080_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0___boxed(lean_object* v_as_1094_, lean_object* v_i_1095_, lean_object* v_stop_1096_, lean_object* v_b_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_){
_start:
{
size_t v_i_boxed_1105_; size_t v_stop_boxed_1106_; lean_object* v_res_1107_; 
v_i_boxed_1105_ = lean_unbox_usize(v_i_1095_);
lean_dec(v_i_1095_);
v_stop_boxed_1106_ = lean_unbox_usize(v_stop_1096_);
lean_dec(v_stop_1096_);
v_res_1107_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(v_as_1094_, v_i_boxed_1105_, v_stop_boxed_1106_, v_b_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
lean_dec_ref(v_as_1094_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11___boxed(lean_object* v_as_1108_, lean_object* v_i_1109_, lean_object* v_stop_1110_, lean_object* v_b_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
size_t v_i_boxed_1119_; size_t v_stop_boxed_1120_; lean_object* v_res_1121_; 
v_i_boxed_1119_ = lean_unbox_usize(v_i_1109_);
lean_dec(v_i_1109_);
v_stop_boxed_1120_ = lean_unbox_usize(v_stop_1110_);
lean_dec(v_stop_1110_);
v_res_1121_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11(v_as_1108_, v_i_boxed_1119_, v_stop_boxed_1120_, v_b_1111_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
lean_dec(v___y_1117_);
lean_dec_ref(v___y_1116_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
lean_dec(v___y_1113_);
lean_dec_ref(v___y_1112_);
lean_dec_ref(v_as_1108_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue___boxed(lean_object* v_e_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_e_1122_, v_a_1123_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_);
lean_dec(v_a_1128_);
lean_dec_ref(v_a_1127_);
lean_dec(v_a_1126_);
lean_dec_ref(v_a_1125_);
lean_dec(v_a_1124_);
lean_dec_ref(v_a_1123_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode___boxed(lean_object* v_c_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_c_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_);
lean_dec(v_a_1137_);
lean_dec_ref(v_a_1136_);
lean_dec(v_a_1135_);
lean_dec_ref(v_a_1134_);
lean_dec(v_a_1133_);
lean_dec_ref(v_a_1132_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___boxed(lean_object* v_fvarId_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_);
lean_dec(v_a_1146_);
lean_dec_ref(v_a_1145_);
lean_dec(v_a_1144_);
lean_dec_ref(v_a_1143_);
lean_dec(v_a_1142_);
lean_dec_ref(v_a_1141_);
return v_res_1148_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(lean_object* v_00_u03b2_1149_, lean_object* v_m_1150_, lean_object* v_a_1151_){
_start:
{
uint8_t v___x_1152_; 
v___x_1152_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg(v_m_1150_, v_a_1151_);
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___boxed(lean_object* v_00_u03b2_1153_, lean_object* v_m_1154_, lean_object* v_a_1155_){
_start:
{
uint8_t v_res_1156_; lean_object* v_r_1157_; 
v_res_1156_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(v_00_u03b2_1153_, v_m_1154_, v_a_1155_);
lean_dec(v_a_1155_);
lean_dec_ref(v_m_1154_);
v_r_1157_ = lean_box(v_res_1156_);
return v_r_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9(lean_object* v_e_1158_, lean_object* v_a_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_1158_, v_a_1159_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___boxed(lean_object* v_e_1168_, lean_object* v_a_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9(v_e_1168_, v_a_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v_a_1169_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10(lean_object* v_e_1178_, lean_object* v_a_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_1178_, v_a_1179_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___boxed(lean_object* v_e_1188_, lean_object* v_a_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10(v_e_1188_, v_a_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
lean_dec(v_a_1189_);
return v_res_1197_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14(lean_object* v_00_u03b2_1198_, lean_object* v_m_1199_, lean_object* v_a_1200_){
_start:
{
uint8_t v___x_1201_; 
v___x_1201_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(v_m_1199_, v_a_1200_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___boxed(lean_object* v_00_u03b2_1202_, lean_object* v_m_1203_, lean_object* v_a_1204_){
_start:
{
uint8_t v_res_1205_; lean_object* v_r_1206_; 
v_res_1205_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14(v_00_u03b2_1202_, v_m_1203_, v_a_1204_);
lean_dec_ref(v_a_1204_);
lean_dec_ref(v_m_1203_);
v_r_1206_ = lean_box(v_res_1205_);
return v_r_1206_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15(lean_object* v_00_u03b2_1207_, lean_object* v_m_1208_, lean_object* v_a_1209_, lean_object* v_b_1210_){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15___redArg(v_m_1208_, v_a_1209_, v_b_1210_);
return v___x_1211_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15(lean_object* v_00_u03b2_1212_, lean_object* v_a_1213_, lean_object* v_x_1214_){
_start:
{
uint8_t v___x_1215_; 
v___x_1215_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(v_a_1213_, v_x_1214_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___boxed(lean_object* v_00_u03b2_1216_, lean_object* v_a_1217_, lean_object* v_x_1218_){
_start:
{
uint8_t v_res_1219_; lean_object* v_r_1220_; 
v_res_1219_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15(v_00_u03b2_1216_, v_a_1217_, v_x_1218_);
lean_dec(v_x_1218_);
lean_dec_ref(v_a_1217_);
v_r_1220_ = lean_box(v_res_1219_);
return v_r_1220_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17(lean_object* v_00_u03b2_1221_, lean_object* v_data_1222_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17___redArg(v_data_1222_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18(lean_object* v_00_u03b2_1224_, lean_object* v_i_1225_, lean_object* v_source_1226_, lean_object* v_target_1227_){
_start:
{
lean_object* v___x_1228_; 
v___x_1228_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18___redArg(v_i_1225_, v_source_1226_, v_target_1227_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19(lean_object* v_00_u03b2_1229_, lean_object* v_x_1230_, lean_object* v_x_1231_){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19___redArg(v_x_1230_, v_x_1231_);
return v___x_1232_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg(lean_object* v_k_1233_, lean_object* v_t_1234_){
_start:
{
if (lean_obj_tag(v_t_1234_) == 0)
{
lean_object* v_k_1235_; lean_object* v_l_1236_; lean_object* v_r_1237_; uint8_t v___x_1238_; 
v_k_1235_ = lean_ctor_get(v_t_1234_, 1);
v_l_1236_ = lean_ctor_get(v_t_1234_, 3);
v_r_1237_ = lean_ctor_get(v_t_1234_, 4);
v___x_1238_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1233_, v_k_1235_);
switch(v___x_1238_)
{
case 0:
{
v_t_1234_ = v_l_1236_;
goto _start;
}
case 1:
{
uint8_t v___x_1240_; 
v___x_1240_ = 1;
return v___x_1240_;
}
default: 
{
v_t_1234_ = v_r_1237_;
goto _start;
}
}
}
else
{
uint8_t v___x_1242_; 
v___x_1242_ = 0;
return v___x_1242_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg___boxed(lean_object* v_k_1243_, lean_object* v_t_1244_){
_start:
{
uint8_t v_res_1245_; lean_object* v_r_1246_; 
v_res_1245_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg(v_k_1243_, v_t_1244_);
lean_dec(v_t_1244_);
lean_dec(v_k_1243_);
v_r_1246_ = lean_box(v_res_1245_);
return v_r_1246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2(lean_object* v_a_1247_, lean_object* v_as_1248_, size_t v_i_1249_, size_t v_stop_1250_, lean_object* v_b_1251_){
_start:
{
lean_object* v___y_1253_; uint8_t v___x_1257_; 
v___x_1257_ = lean_usize_dec_eq(v_i_1249_, v_stop_1250_);
if (v___x_1257_ == 0)
{
lean_object* v___x_1258_; lean_object* v___x_1259_; uint8_t v___x_1260_; 
v___x_1258_ = lean_array_uget_borrowed(v_as_1248_, v_i_1249_);
v___x_1259_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v___x_1258_);
v___x_1260_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg(v___x_1259_, v_a_1247_);
lean_dec(v___x_1259_);
if (v___x_1260_ == 0)
{
lean_object* v___x_1261_; 
lean_inc(v___x_1258_);
v___x_1261_ = lean_array_push(v_b_1251_, v___x_1258_);
v___y_1253_ = v___x_1261_;
goto v___jp_1252_;
}
else
{
v___y_1253_ = v_b_1251_;
goto v___jp_1252_;
}
}
else
{
return v_b_1251_;
}
v___jp_1252_:
{
size_t v___x_1254_; size_t v___x_1255_; 
v___x_1254_ = ((size_t)1ULL);
v___x_1255_ = lean_usize_add(v_i_1249_, v___x_1254_);
v_i_1249_ = v___x_1255_;
v_b_1251_ = v___y_1253_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2___boxed(lean_object* v_a_1262_, lean_object* v_as_1263_, lean_object* v_i_1264_, lean_object* v_stop_1265_, lean_object* v_b_1266_){
_start:
{
size_t v_i_boxed_1267_; size_t v_stop_boxed_1268_; lean_object* v_res_1269_; 
v_i_boxed_1267_ = lean_unbox_usize(v_i_1264_);
lean_dec(v_i_1264_);
v_stop_boxed_1268_ = lean_unbox_usize(v_stop_1265_);
lean_dec(v_stop_1265_);
v_res_1269_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2(v_a_1262_, v_as_1263_, v_i_boxed_1267_, v_stop_boxed_1268_, v_b_1266_);
lean_dec_ref(v_as_1263_);
lean_dec(v_a_1262_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(lean_object* v_as_1270_, size_t v_sz_1271_, size_t v_i_1272_, lean_object* v_b_1273_){
_start:
{
uint8_t v___x_1275_; 
v___x_1275_ = lean_usize_dec_lt(v_i_1272_, v_sz_1271_);
if (v___x_1275_ == 0)
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1276_, 0, v_b_1273_);
return v___x_1276_;
}
else
{
lean_object* v_a_1277_; lean_object* v_fvarId_1278_; lean_object* v___x_1279_; size_t v___x_1280_; size_t v___x_1281_; 
v_a_1277_ = lean_array_uget_borrowed(v_as_1270_, v_i_1272_);
v_fvarId_1278_ = lean_ctor_get(v_a_1277_, 0);
lean_inc(v_fvarId_1278_);
v___x_1279_ = l_Lean_FVarIdSet_insert(v_b_1273_, v_fvarId_1278_);
v___x_1280_ = ((size_t)1ULL);
v___x_1281_ = lean_usize_add(v_i_1272_, v___x_1280_);
v_i_1272_ = v___x_1281_;
v_b_1273_ = v___x_1279_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg___boxed(lean_object* v_as_1283_, lean_object* v_sz_1284_, lean_object* v_i_1285_, lean_object* v_b_1286_, lean_object* v___y_1287_){
_start:
{
size_t v_sz_boxed_1288_; size_t v_i_boxed_1289_; lean_object* v_res_1290_; 
v_sz_boxed_1288_ = lean_unbox_usize(v_sz_1284_);
lean_dec(v_sz_1284_);
v_i_boxed_1289_ = lean_unbox_usize(v_i_1285_);
lean_dec(v_i_1285_);
v_res_1290_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_as_1283_, v_sz_boxed_1288_, v_i_boxed_1289_, v_b_1286_);
lean_dec_ref(v_as_1283_);
return v_res_1290_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1293_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0));
v___x_1294_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_1295_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
lean_ctor_set(v___x_1295_, 1, v___x_1293_);
lean_ctor_set(v___x_1295_, 2, v___x_1293_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg(lean_object* v_x_1296_, lean_object* v_inScope_1297_, lean_object* v_abstract_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1304_ = lean_box(1);
v___x_1305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1305_, 0, v_inScope_1297_);
lean_ctor_set(v___x_1305_, 1, v_abstract_1298_);
v___x_1306_ = lean_unsigned_to_nat(0u);
v___x_1307_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0));
v___x_1308_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1, &l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1);
v___x_1309_ = lean_st_mk_ref(v___x_1308_);
lean_inc(v_a_1302_);
lean_inc_ref(v_a_1301_);
lean_inc(v_a_1300_);
lean_inc_ref(v_a_1299_);
lean_inc(v___x_1309_);
v___x_1310_ = lean_apply_7(v_x_1296_, v___x_1305_, v___x_1309_, v_a_1299_, v_a_1300_, v_a_1301_, v_a_1302_, lean_box(0));
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1312_; lean_object* v_params_1313_; lean_object* v_decls_1314_; size_t v_sz_1315_; size_t v___x_1316_; lean_object* v___x_1317_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1310_, 1);
v___x_1312_ = lean_st_ref_get(v___x_1309_);
lean_dec(v___x_1309_);
v_params_1313_ = lean_ctor_get(v___x_1312_, 1);
lean_inc_ref(v_params_1313_);
v_decls_1314_ = lean_ctor_get(v___x_1312_, 2);
lean_inc_ref(v_decls_1314_);
lean_dec(v___x_1312_);
v_sz_1315_ = lean_array_size(v_params_1313_);
v___x_1316_ = ((size_t)0ULL);
v___x_1317_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_params_1313_, v_sz_1315_, v___x_1316_, v___x_1304_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1333_; 
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1333_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1333_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___y_1323_; lean_object* v___x_1329_; uint8_t v___x_1330_; 
v___x_1329_ = lean_array_get_size(v_decls_1314_);
v___x_1330_ = lean_nat_dec_lt(v___x_1306_, v___x_1329_);
if (v___x_1330_ == 0)
{
lean_dec(v_a_1318_);
lean_dec_ref(v_decls_1314_);
v___y_1323_ = v___x_1307_;
goto v___jp_1322_;
}
else
{
size_t v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = lean_usize_of_nat(v___x_1329_);
v___x_1332_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2(v_a_1318_, v_decls_1314_, v___x_1316_, v___x_1331_, v___x_1307_);
lean_dec_ref(v_decls_1314_);
lean_dec(v_a_1318_);
v___y_1323_ = v___x_1332_;
goto v___jp_1322_;
}
v___jp_1322_:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1327_; 
v___x_1324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1324_, 0, v_params_1313_);
lean_ctor_set(v___x_1324_, 1, v___y_1323_);
v___x_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1325_, 0, v_a_1311_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v___x_1325_);
v___x_1327_ = v___x_1320_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1325_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
}
}
else
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
lean_dec_ref(v_decls_1314_);
lean_dec_ref(v_params_1313_);
lean_dec(v_a_1311_);
v_a_1334_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1336_ = v___x_1317_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1317_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1334_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
lean_dec(v___x_1309_);
v_a_1342_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1344_ = v___x_1310_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1310_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___boxed(lean_object* v_x_1350_, lean_object* v_inScope_1351_, lean_object* v_abstract_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lean_Compiler_LCNF_Closure_run___redArg(v_x_1350_, v_inScope_1351_, v_abstract_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_);
lean_dec(v_a_1356_);
lean_dec_ref(v_a_1355_);
lean_dec(v_a_1354_);
lean_dec_ref(v_a_1353_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run(lean_object* v_00_u03b1_1359_, lean_object* v_x_1360_, lean_object* v_inScope_1361_, lean_object* v_abstract_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_){
_start:
{
lean_object* v___x_1368_; 
v___x_1368_ = l_Lean_Compiler_LCNF_Closure_run___redArg(v_x_1360_, v_inScope_1361_, v_abstract_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___boxed(lean_object* v_00_u03b1_1369_, lean_object* v_x_1370_, lean_object* v_inScope_1371_, lean_object* v_abstract_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l_Lean_Compiler_LCNF_Closure_run(v_00_u03b1_1369_, v_x_1370_, v_inScope_1371_, v_abstract_1372_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_);
lean_dec(v_a_1376_);
lean_dec_ref(v_a_1375_);
lean_dec(v_a_1374_);
lean_dec_ref(v_a_1373_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0(lean_object* v_as_1379_, size_t v_sz_1380_, size_t v_i_1381_, lean_object* v_b_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_as_1379_, v_sz_1380_, v_i_1381_, v_b_1382_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___boxed(lean_object* v_as_1389_, lean_object* v_sz_1390_, lean_object* v_i_1391_, lean_object* v_b_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
size_t v_sz_boxed_1398_; size_t v_i_boxed_1399_; lean_object* v_res_1400_; 
v_sz_boxed_1398_ = lean_unbox_usize(v_sz_1390_);
lean_dec(v_sz_1390_);
v_i_boxed_1399_ = lean_unbox_usize(v_i_1391_);
lean_dec(v_i_1391_);
v_res_1400_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0(v_as_1389_, v_sz_boxed_1398_, v_i_boxed_1399_, v_b_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec_ref(v_as_1389_);
return v_res_1400_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1(lean_object* v_00_u03b2_1401_, lean_object* v_k_1402_, lean_object* v_t_1403_){
_start:
{
uint8_t v___x_1404_; 
v___x_1404_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg(v_k_1402_, v_t_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___boxed(lean_object* v_00_u03b2_1405_, lean_object* v_k_1406_, lean_object* v_t_1407_){
_start:
{
uint8_t v_res_1408_; lean_object* v_r_1409_; 
v_res_1408_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1(v_00_u03b2_1405_, v_k_1406_, v_t_1407_);
lean_dec(v_t_1407_);
lean_dec(v_k_1406_);
v_r_1409_ = lean_box(v_res_1408_);
return v_r_1409_;
}
}
lean_object* runtime_initialize_Lean_Util_ForEachExprWhere(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Closure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Closure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_ForEachExprWhere(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Closure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Closure(builtin);
}
#ifdef __cplusplus
}
#endif
