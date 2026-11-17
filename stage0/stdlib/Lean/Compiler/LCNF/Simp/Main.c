// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.Main
// Imports: public import Lean.Compiler.LCNF.Simp.InlineCandidate public import Lean.Compiler.LCNF.Simp.InlineProj public import Lean.Compiler.LCNF.Simp.Used public import Lean.Compiler.LCNF.Simp.DefaultAlt public import Lean.Compiler.LCNF.Simp.SimpValue public import Lean.Compiler.LCNF.Simp.ConstantFold
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_isInstanceReducibleCore(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_isUsed___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(uint8_t, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_isFun___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_normFunDeclImp(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_ConstantFold_foldConstants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_attachCodeDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Compiler_LCNF_hasLocalInst___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t);
lean_object* l_Lean_Compiler_LCNF_Decl_getArity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkNewParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Compiler_LCNF_inferAppType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_isReturnOf___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_internalize(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqLetValue_beq(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_simpValue_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Alt_getParams(lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqLetDecl_beq(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_mkReturnErased(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
lean_object* l_Lean_Compiler_LCNF_Simp_findCtor_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_CtorInfo_getName(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Cases_extractAlt_x21(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1;
static const lean_array_object l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_f"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(253, 65, 185, 154, 193, 83, 240, 170)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "_jp"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 69, 15, 56, 172, 246, 212, 179)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LCNF simp"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
return v___x_1_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(lean_object* v_c_2_){
_start:
{
switch(lean_obj_tag(v_c_2_))
{
case 0:
{
lean_object* v_k_3_; 
v_k_3_ = lean_ctor_get(v_c_2_, 1);
v_c_2_ = v_k_3_;
goto _start;
}
case 1:
{
lean_object* v_k_5_; 
v_k_5_ = lean_ctor_get(v_c_2_, 1);
v_c_2_ = v_k_5_;
goto _start;
}
case 4:
{
lean_object* v_cases_7_; lean_object* v_alts_8_; lean_object* v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; 
v_cases_7_ = lean_ctor_get(v_c_2_, 0);
v_alts_8_ = lean_ctor_get(v_cases_7_, 3);
v___x_9_ = lean_array_get_size(v_alts_8_);
v___x_10_ = lean_unsigned_to_nat(1u);
v___x_11_ = lean_nat_dec_eq(v___x_9_, v___x_10_);
if (v___x_11_ == 0)
{
return v___x_11_;
}
else
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0, &l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0);
v___x_13_ = lean_unsigned_to_nat(0u);
v___x_14_ = lean_array_get_borrowed(v___x_12_, v_alts_8_, v___x_13_);
switch(lean_obj_tag(v___x_14_))
{
case 0:
{
lean_object* v_code_15_; 
v_code_15_ = lean_ctor_get(v___x_14_, 2);
v_c_2_ = v_code_15_;
goto _start;
}
case 1:
{
lean_object* v_code_17_; 
v_code_17_ = lean_ctor_get(v___x_14_, 1);
v_c_2_ = v_code_17_;
goto _start;
}
default: 
{
lean_object* v_code_19_; 
v_code_19_ = lean_ctor_get(v___x_14_, 0);
v_c_2_ = v_code_19_;
goto _start;
}
}
}
}
case 5:
{
uint8_t v___x_21_; 
v___x_21_ = 1;
return v___x_21_;
}
default: 
{
uint8_t v___x_22_; 
v___x_22_ = 0;
return v___x_22_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___boxed(lean_object* v_c_23_){
_start:
{
uint8_t v_res_24_; lean_object* v_r_25_; 
v_res_24_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_c_23_);
lean_dec_ref(v_c_23_);
v_r_25_ = lean_box(v_res_24_);
return v_r_25_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(lean_object* v_c_26_){
_start:
{
uint8_t v___x_27_; 
v___x_27_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_c_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick___boxed(lean_object* v_c_28_){
_start:
{
uint8_t v_res_29_; lean_object* v_r_30_; 
v_res_29_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(v_c_28_);
lean_dec_ref(v_c_28_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(lean_object* v_a_31_, lean_object* v_x_32_){
_start:
{
if (lean_obj_tag(v_x_32_) == 0)
{
uint8_t v___x_33_; 
v___x_33_ = 0;
return v___x_33_;
}
else
{
lean_object* v_key_34_; lean_object* v_tail_35_; uint8_t v___x_36_; 
v_key_34_ = lean_ctor_get(v_x_32_, 0);
v_tail_35_ = lean_ctor_get(v_x_32_, 2);
v___x_36_ = l_Lean_instBEqFVarId_beq(v_key_34_, v_a_31_);
if (v___x_36_ == 0)
{
v_x_32_ = v_tail_35_;
goto _start;
}
else
{
return v___x_36_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg___boxed(lean_object* v_a_38_, lean_object* v_x_39_){
_start:
{
uint8_t v_res_40_; lean_object* v_r_41_; 
v_res_40_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_38_, v_x_39_);
lean_dec(v_x_39_);
lean_dec(v_a_38_);
v_r_41_ = lean_box(v_res_40_);
return v_r_41_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_x_42_, lean_object* v_x_43_){
_start:
{
if (lean_obj_tag(v_x_43_) == 0)
{
return v_x_42_;
}
else
{
lean_object* v_key_44_; lean_object* v_value_45_; lean_object* v_tail_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_69_; 
v_key_44_ = lean_ctor_get(v_x_43_, 0);
v_value_45_ = lean_ctor_get(v_x_43_, 1);
v_tail_46_ = lean_ctor_get(v_x_43_, 2);
v_isSharedCheck_69_ = !lean_is_exclusive(v_x_43_);
if (v_isSharedCheck_69_ == 0)
{
v___x_48_ = v_x_43_;
v_isShared_49_ = v_isSharedCheck_69_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_tail_46_);
lean_inc(v_value_45_);
lean_inc(v_key_44_);
lean_dec(v_x_43_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_69_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_50_; uint64_t v___x_51_; uint64_t v___x_52_; uint64_t v___x_53_; uint64_t v_fold_54_; uint64_t v___x_55_; uint64_t v___x_56_; uint64_t v___x_57_; size_t v___x_58_; size_t v___x_59_; size_t v___x_60_; size_t v___x_61_; size_t v___x_62_; lean_object* v___x_63_; lean_object* v___x_65_; 
v___x_50_ = lean_array_get_size(v_x_42_);
v___x_51_ = l_Lean_instHashableFVarId_hash(v_key_44_);
v___x_52_ = 32ULL;
v___x_53_ = lean_uint64_shift_right(v___x_51_, v___x_52_);
v_fold_54_ = lean_uint64_xor(v___x_51_, v___x_53_);
v___x_55_ = 16ULL;
v___x_56_ = lean_uint64_shift_right(v_fold_54_, v___x_55_);
v___x_57_ = lean_uint64_xor(v_fold_54_, v___x_56_);
v___x_58_ = lean_uint64_to_usize(v___x_57_);
v___x_59_ = lean_usize_of_nat(v___x_50_);
v___x_60_ = ((size_t)1ULL);
v___x_61_ = lean_usize_sub(v___x_59_, v___x_60_);
v___x_62_ = lean_usize_land(v___x_58_, v___x_61_);
v___x_63_ = lean_array_uget_borrowed(v_x_42_, v___x_62_);
lean_inc(v___x_63_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 2, v___x_63_);
v___x_65_ = v___x_48_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_key_44_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v_value_45_);
lean_ctor_set(v_reuseFailAlloc_68_, 2, v___x_63_);
v___x_65_ = v_reuseFailAlloc_68_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
lean_object* v___x_66_; 
v___x_66_ = lean_array_uset(v_x_42_, v___x_62_, v___x_65_);
v_x_42_ = v___x_66_;
v_x_43_ = v_tail_46_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(lean_object* v_i_70_, lean_object* v_source_71_, lean_object* v_target_72_){
_start:
{
lean_object* v___x_73_; uint8_t v___x_74_; 
v___x_73_ = lean_array_get_size(v_source_71_);
v___x_74_ = lean_nat_dec_lt(v_i_70_, v___x_73_);
if (v___x_74_ == 0)
{
lean_dec_ref(v_source_71_);
lean_dec(v_i_70_);
return v_target_72_;
}
else
{
lean_object* v_es_75_; lean_object* v___x_76_; lean_object* v_source_77_; lean_object* v_target_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v_es_75_ = lean_array_fget(v_source_71_, v_i_70_);
v___x_76_ = lean_box(0);
v_source_77_ = lean_array_fset(v_source_71_, v_i_70_, v___x_76_);
v_target_78_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(v_target_72_, v_es_75_);
v___x_79_ = lean_unsigned_to_nat(1u);
v___x_80_ = lean_nat_add(v_i_70_, v___x_79_);
lean_dec(v_i_70_);
v_i_70_ = v___x_80_;
v_source_71_ = v_source_77_;
v_target_72_ = v_target_78_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(lean_object* v_data_82_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v_nbuckets_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_83_ = lean_array_get_size(v_data_82_);
v___x_84_ = lean_unsigned_to_nat(2u);
v_nbuckets_85_ = lean_nat_mul(v___x_83_, v___x_84_);
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_box(0);
v___x_88_ = lean_mk_array(v_nbuckets_85_, v___x_87_);
v___x_89_ = lean_array_propagate_mark(v_data_82_, v___x_88_);
v___x_90_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(v___x_86_, v_data_82_, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(lean_object* v_a_91_, lean_object* v_b_92_, lean_object* v_x_93_){
_start:
{
if (lean_obj_tag(v_x_93_) == 0)
{
lean_dec(v_b_92_);
lean_dec(v_a_91_);
return v_x_93_;
}
else
{
lean_object* v_key_94_; lean_object* v_value_95_; lean_object* v_tail_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_108_; 
v_key_94_ = lean_ctor_get(v_x_93_, 0);
v_value_95_ = lean_ctor_get(v_x_93_, 1);
v_tail_96_ = lean_ctor_get(v_x_93_, 2);
v_isSharedCheck_108_ = !lean_is_exclusive(v_x_93_);
if (v_isSharedCheck_108_ == 0)
{
v___x_98_ = v_x_93_;
v_isShared_99_ = v_isSharedCheck_108_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_tail_96_);
lean_inc(v_value_95_);
lean_inc(v_key_94_);
lean_dec(v_x_93_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_108_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
uint8_t v___x_100_; 
v___x_100_ = l_Lean_instBEqFVarId_beq(v_key_94_, v_a_91_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; lean_object* v___x_103_; 
v___x_101_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_91_, v_b_92_, v_tail_96_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 2, v___x_101_);
v___x_103_ = v___x_98_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_key_94_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v_value_95_);
lean_ctor_set(v_reuseFailAlloc_104_, 2, v___x_101_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
else
{
lean_object* v___x_106_; 
lean_dec(v_value_95_);
lean_dec(v_key_94_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v_b_92_);
lean_ctor_set(v___x_98_, 0, v_a_91_);
v___x_106_ = v___x_98_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_a_91_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v_b_92_);
lean_ctor_set(v_reuseFailAlloc_107_, 2, v_tail_96_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(lean_object* v_m_109_, lean_object* v_a_110_, lean_object* v_b_111_){
_start:
{
lean_object* v_size_112_; lean_object* v_buckets_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_156_; 
v_size_112_ = lean_ctor_get(v_m_109_, 0);
v_buckets_113_ = lean_ctor_get(v_m_109_, 1);
v_isSharedCheck_156_ = !lean_is_exclusive(v_m_109_);
if (v_isSharedCheck_156_ == 0)
{
v___x_115_ = v_m_109_;
v_isShared_116_ = v_isSharedCheck_156_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_buckets_113_);
lean_inc(v_size_112_);
lean_dec(v_m_109_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_156_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_117_; uint64_t v___x_118_; uint64_t v___x_119_; uint64_t v___x_120_; uint64_t v_fold_121_; uint64_t v___x_122_; uint64_t v___x_123_; uint64_t v___x_124_; size_t v___x_125_; size_t v___x_126_; size_t v___x_127_; size_t v___x_128_; size_t v___x_129_; lean_object* v_bkt_130_; uint8_t v___x_131_; 
v___x_117_ = lean_array_get_size(v_buckets_113_);
v___x_118_ = l_Lean_instHashableFVarId_hash(v_a_110_);
v___x_119_ = 32ULL;
v___x_120_ = lean_uint64_shift_right(v___x_118_, v___x_119_);
v_fold_121_ = lean_uint64_xor(v___x_118_, v___x_120_);
v___x_122_ = 16ULL;
v___x_123_ = lean_uint64_shift_right(v_fold_121_, v___x_122_);
v___x_124_ = lean_uint64_xor(v_fold_121_, v___x_123_);
v___x_125_ = lean_uint64_to_usize(v___x_124_);
v___x_126_ = lean_usize_of_nat(v___x_117_);
v___x_127_ = ((size_t)1ULL);
v___x_128_ = lean_usize_sub(v___x_126_, v___x_127_);
v___x_129_ = lean_usize_land(v___x_125_, v___x_128_);
v_bkt_130_ = lean_array_uget_borrowed(v_buckets_113_, v___x_129_);
v___x_131_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_110_, v_bkt_130_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v_size_x27_133_; lean_object* v___x_134_; lean_object* v_buckets_x27_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_132_ = lean_unsigned_to_nat(1u);
v_size_x27_133_ = lean_nat_add(v_size_112_, v___x_132_);
lean_dec(v_size_112_);
lean_inc(v_bkt_130_);
v___x_134_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_134_, 0, v_a_110_);
lean_ctor_set(v___x_134_, 1, v_b_111_);
lean_ctor_set(v___x_134_, 2, v_bkt_130_);
v_buckets_x27_135_ = lean_array_uset(v_buckets_113_, v___x_129_, v___x_134_);
v___x_136_ = lean_unsigned_to_nat(4u);
v___x_137_ = lean_nat_mul(v_size_x27_133_, v___x_136_);
v___x_138_ = lean_unsigned_to_nat(3u);
v___x_139_ = lean_nat_div(v___x_137_, v___x_138_);
lean_dec(v___x_137_);
v___x_140_ = lean_array_get_size(v_buckets_x27_135_);
v___x_141_ = lean_nat_dec_le(v___x_139_, v___x_140_);
lean_dec(v___x_139_);
if (v___x_141_ == 0)
{
lean_object* v_val_142_; lean_object* v___x_144_; 
v_val_142_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(v_buckets_x27_135_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v_val_142_);
lean_ctor_set(v___x_115_, 0, v_size_x27_133_);
v___x_144_ = v___x_115_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_size_x27_133_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_val_142_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
else
{
lean_object* v___x_147_; 
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v_buckets_x27_135_);
lean_ctor_set(v___x_115_, 0, v_size_x27_133_);
v___x_147_ = v___x_115_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_size_x27_133_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_buckets_x27_135_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
lean_object* v___x_149_; lean_object* v_buckets_x27_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_154_; 
lean_inc(v_bkt_130_);
v___x_149_ = lean_box(0);
v_buckets_x27_150_ = lean_array_uset(v_buckets_113_, v___x_129_, v___x_149_);
v___x_151_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_110_, v_b_111_, v_bkt_130_);
v___x_152_ = lean_array_uset(v_buckets_x27_150_, v___x_129_, v___x_151_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v___x_152_);
v___x_154_ = v___x_115_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_size_112_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v___x_152_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(lean_object* v_as_157_, size_t v_sz_158_, size_t v_i_159_, lean_object* v_b_160_){
_start:
{
uint8_t v___x_162_; 
v___x_162_ = lean_usize_dec_lt(v_i_159_, v_sz_158_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; 
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v_b_160_);
return v___x_163_;
}
else
{
lean_object* v_snd_164_; lean_object* v_fst_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_199_; 
v_snd_164_ = lean_ctor_get(v_b_160_, 1);
v_fst_165_ = lean_ctor_get(v_b_160_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v_b_160_);
if (v_isSharedCheck_199_ == 0)
{
v___x_167_ = v_b_160_;
v_isShared_168_ = v_isSharedCheck_199_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_snd_164_);
lean_inc(v_fst_165_);
lean_dec(v_b_160_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_199_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v_array_169_; lean_object* v_start_170_; lean_object* v_stop_171_; uint8_t v___x_172_; 
v_array_169_ = lean_ctor_get(v_snd_164_, 0);
v_start_170_ = lean_ctor_get(v_snd_164_, 1);
v_stop_171_ = lean_ctor_get(v_snd_164_, 2);
v___x_172_ = lean_nat_dec_lt(v_start_170_, v_stop_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_174_; 
if (v_isShared_168_ == 0)
{
v___x_174_ = v___x_167_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_fst_165_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v_snd_164_);
v___x_174_ = v_reuseFailAlloc_176_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
lean_object* v___x_175_; 
v___x_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
return v___x_175_;
}
}
else
{
lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_195_; 
lean_inc(v_stop_171_);
lean_inc(v_start_170_);
lean_inc_ref(v_array_169_);
v_isSharedCheck_195_ = !lean_is_exclusive(v_snd_164_);
if (v_isSharedCheck_195_ == 0)
{
lean_object* v_unused_196_; lean_object* v_unused_197_; lean_object* v_unused_198_; 
v_unused_196_ = lean_ctor_get(v_snd_164_, 2);
lean_dec(v_unused_196_);
v_unused_197_ = lean_ctor_get(v_snd_164_, 1);
lean_dec(v_unused_197_);
v_unused_198_ = lean_ctor_get(v_snd_164_, 0);
lean_dec(v_unused_198_);
v___x_178_ = v_snd_164_;
v_isShared_179_ = v_isSharedCheck_195_;
goto v_resetjp_177_;
}
else
{
lean_dec(v_snd_164_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_195_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v_a_180_; lean_object* v_fvarId_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_186_; 
v_a_180_ = lean_array_uget_borrowed(v_as_157_, v_i_159_);
v_fvarId_181_ = lean_ctor_get(v_a_180_, 0);
v___x_182_ = lean_array_fget(v_array_169_, v_start_170_);
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = lean_nat_add(v_start_170_, v___x_183_);
lean_dec(v_start_170_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v___x_184_);
v___x_186_ = v___x_178_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_array_169_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_194_, 2, v_stop_171_);
v___x_186_ = v_reuseFailAlloc_194_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
lean_object* v___x_187_; lean_object* v___x_189_; 
lean_inc(v_fvarId_181_);
v___x_187_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_fst_165_, v_fvarId_181_, v___x_182_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v___x_186_);
lean_ctor_set(v___x_167_, 0, v___x_187_);
v___x_189_ = v___x_167_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_187_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v___x_186_);
v___x_189_ = v_reuseFailAlloc_193_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
size_t v___x_190_; size_t v___x_191_; 
v___x_190_ = ((size_t)1ULL);
v___x_191_ = lean_usize_add(v_i_159_, v___x_190_);
v_i_159_ = v___x_191_;
v_b_160_ = v___x_189_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg___boxed(lean_object* v_as_200_, lean_object* v_sz_201_, lean_object* v_i_202_, lean_object* v_b_203_, lean_object* v___y_204_){
_start:
{
size_t v_sz_boxed_205_; size_t v_i_boxed_206_; lean_object* v_res_207_; 
v_sz_boxed_205_ = lean_unbox_usize(v_sz_201_);
lean_dec(v_sz_201_);
v_i_boxed_206_ = lean_unbox_usize(v_i_202_);
lean_dec(v_i_202_);
v_res_207_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_as_200_, v_sz_boxed_205_, v_i_boxed_206_, v_b_203_);
lean_dec_ref(v_as_200_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(lean_object* v_a_208_, lean_object* v_b_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_array_215_; lean_object* v_start_216_; lean_object* v_stop_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_267_; 
v_array_215_ = lean_ctor_get(v_a_208_, 0);
v_start_216_ = lean_ctor_get(v_a_208_, 1);
v_stop_217_ = lean_ctor_get(v_a_208_, 2);
v_isSharedCheck_267_ = !lean_is_exclusive(v_a_208_);
if (v_isSharedCheck_267_ == 0)
{
v___x_219_ = v_a_208_;
v_isShared_220_ = v_isSharedCheck_267_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_stop_217_);
lean_inc(v_start_216_);
lean_inc(v_array_215_);
lean_dec(v_a_208_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_267_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
uint8_t v___x_221_; 
v___x_221_ = lean_nat_dec_lt(v_start_216_, v_stop_217_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; 
lean_del_object(v___x_219_);
lean_dec(v_stop_217_);
lean_dec(v_start_216_);
lean_dec_ref(v_array_215_);
v___x_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_222_, 0, v_b_209_);
return v___x_222_;
}
else
{
lean_object* v_fst_223_; lean_object* v_snd_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_266_; 
v_fst_223_ = lean_ctor_get(v_b_209_, 0);
v_snd_224_ = lean_ctor_get(v_b_209_, 1);
v_isSharedCheck_266_ = !lean_is_exclusive(v_b_209_);
if (v_isSharedCheck_266_ == 0)
{
v___x_226_ = v_b_209_;
v_isShared_227_ = v_isSharedCheck_266_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_snd_224_);
lean_inc(v_fst_223_);
lean_dec(v_b_209_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_266_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v_fvarId_229_; lean_object* v_type_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_228_ = lean_array_fget_borrowed(v_array_215_, v_start_216_);
v_fvarId_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_fvarId_229_);
v_type_230_ = lean_ctor_get(v___x_228_, 2);
lean_inc_ref(v_type_230_);
v___x_231_ = lean_unsigned_to_nat(1u);
v___x_232_ = lean_nat_add(v_start_216_, v___x_231_);
lean_dec(v_start_216_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v___x_232_);
v___x_234_ = v___x_219_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_array_215_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_265_, 2, v_stop_217_);
v___x_234_ = v_reuseFailAlloc_265_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
uint8_t v___x_235_; lean_object* v___x_236_; 
v___x_235_ = 0;
v___x_236_ = l_Lean_Compiler_LCNF_replaceExprFVars___redArg(v___x_235_, v_type_230_, v_fst_223_, v___x_221_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v_a_237_; uint8_t v___x_238_; lean_object* v___x_239_; 
v_a_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc(v_a_237_);
lean_dec_ref_known(v___x_236_, 1);
v___x_238_ = 0;
v___x_239_ = l_Lean_Compiler_LCNF_mkAuxParam(v___x_235_, v_a_237_, v___x_238_, v___y_210_, v___y_211_, v___y_212_, v___y_213_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v_a_240_; lean_object* v_fvarId_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_246_; 
v_a_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_a_240_);
lean_dec_ref_known(v___x_239_, 1);
v_fvarId_241_ = lean_ctor_get(v_a_240_, 0);
lean_inc(v_fvarId_241_);
v___x_242_ = lean_array_push(v_snd_224_, v_a_240_);
v___x_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_243_, 0, v_fvarId_241_);
v___x_244_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_fst_223_, v_fvarId_229_, v___x_243_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 1, v___x_242_);
lean_ctor_set(v___x_226_, 0, v___x_244_);
v___x_246_ = v___x_226_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v___x_242_);
v___x_246_ = v_reuseFailAlloc_248_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
v_a_208_ = v___x_234_;
v_b_209_ = v___x_246_;
goto _start;
}
}
else
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
lean_dec_ref(v___x_234_);
lean_dec(v_fvarId_229_);
lean_del_object(v___x_226_);
lean_dec(v_snd_224_);
lean_dec(v_fst_223_);
v_a_249_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v___x_239_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_239_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
else
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
lean_dec_ref(v___x_234_);
lean_dec(v_fvarId_229_);
lean_del_object(v___x_226_);
lean_dec(v_snd_224_);
lean_dec(v_fst_223_);
v_a_257_ = lean_ctor_get(v___x_236_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___x_236_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_236_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_260_ == 0)
{
v___x_262_ = v___x_259_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_257_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg___boxed(lean_object* v_a_268_, lean_object* v_b_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v_a_268_, v_b_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
return v_res_275_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = lean_box(0);
v___x_277_ = lean_unsigned_to_nat(16u);
v___x_278_ = lean_mk_array(v___x_277_, v___x_276_);
return v___x_278_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_subst_281_; 
v___x_279_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0);
v___x_280_ = lean_unsigned_to_nat(0u);
v_subst_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_subst_281_, 0, v___x_280_);
lean_ctor_set(v_subst_281_, 1, v___x_279_);
return v_subst_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp(lean_object* v_info_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v_params_296_; lean_object* v_value_297_; lean_object* v_args_298_; lean_object* v___x_299_; lean_object* v_subst_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; size_t v_sz_304_; size_t v___x_305_; lean_object* v___x_306_; 
v_params_296_ = lean_ctor_get(v_info_287_, 0);
lean_inc_ref(v_params_296_);
v_value_297_ = lean_ctor_get(v_info_287_, 1);
lean_inc_ref(v_value_297_);
v_args_298_ = lean_ctor_get(v_info_287_, 3);
lean_inc_ref(v_args_298_);
lean_dec_ref(v_info_287_);
v___x_299_ = lean_unsigned_to_nat(0u);
v_subst_300_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1);
v___x_301_ = lean_array_get_size(v_args_298_);
v___x_302_ = l_Array_toSubarray___redArg(v_args_298_, v___x_299_, v___x_301_);
v___x_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_303_, 0, v_subst_300_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
v_sz_304_ = lean_array_size(v_params_296_);
v___x_305_ = ((size_t)0ULL);
v___x_306_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_params_296_, v_sz_304_, v___x_305_, v___x_303_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v_fst_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_357_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_a_307_);
lean_dec_ref_known(v___x_306_, 1);
v_fst_308_ = lean_ctor_get(v_a_307_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v_a_307_);
if (v_isSharedCheck_357_ == 0)
{
lean_object* v_unused_358_; 
v_unused_358_ = lean_ctor_get(v_a_307_, 1);
lean_dec(v_unused_358_);
v___x_310_ = v_a_307_;
v_isShared_311_ = v_isSharedCheck_357_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_fst_308_);
lean_dec(v_a_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_357_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v_lower_314_; lean_object* v_upper_315_; lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_312_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2));
v___x_355_ = lean_array_get_size(v_params_296_);
v___x_356_ = lean_nat_dec_le(v___x_301_, v___x_299_);
if (v___x_356_ == 0)
{
v_lower_314_ = v___x_301_;
v_upper_315_ = v___x_355_;
goto v___jp_313_;
}
else
{
v_lower_314_ = v___x_299_;
v_upper_315_ = v___x_355_;
goto v___jp_313_;
}
v___jp_313_:
{
lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_316_ = l_Array_toSubarray___redArg(v_params_296_, v_lower_314_, v_upper_315_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 1, v___x_312_);
v___x_318_ = v___x_310_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_fst_308_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v___x_312_);
v___x_318_ = v_reuseFailAlloc_354_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_319_; 
v___x_319_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v___x_316_, v___x_318_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v_fst_321_; lean_object* v_snd_322_; uint8_t v___x_323_; uint8_t v___x_324_; lean_object* v___x_325_; 
v_a_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_320_);
lean_dec_ref_known(v___x_319_, 1);
v_fst_321_ = lean_ctor_get(v_a_320_, 0);
lean_inc(v_fst_321_);
v_snd_322_ = lean_ctor_get(v_a_320_, 1);
lean_inc(v_snd_322_);
lean_dec(v_a_320_);
v___x_323_ = 0;
v___x_324_ = 0;
v___x_325_ = l_Lean_Compiler_LCNF_Code_internalize(v___x_323_, v_value_297_, v_fst_321_, v___x_324_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_327_; 
v_a_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc_n(v_a_326_, 2);
lean_dec_ref_known(v___x_325_, 1);
v___x_327_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(v_a_326_, v___x_324_, v_a_289_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec_ref_known(v___x_327_, 1);
v___x_328_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4));
v___x_329_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v_snd_322_, v_a_326_, v___x_328_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
return v___x_329_;
}
else
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_337_; 
lean_dec(v_a_326_);
lean_dec(v_snd_322_);
v_a_330_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_337_ == 0)
{
v___x_332_ = v___x_327_;
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_327_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_a_330_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
lean_dec(v_snd_322_);
v_a_338_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_325_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_325_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec_ref(v_value_297_);
v_a_346_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_319_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_319_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
lean_dec_ref(v_value_297_);
lean_dec_ref(v_params_296_);
v_a_359_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_306_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_306_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___boxed(lean_object* v_info_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_Compiler_LCNF_Simp_specializePartialApp(v_info_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_, v_a_373_, v_a_374_);
lean_dec(v_a_374_);
lean_dec_ref(v_a_373_);
lean_dec(v_a_372_);
lean_dec_ref(v_a_371_);
lean_dec_ref(v_a_370_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0(lean_object* v_00_u03b2_377_, lean_object* v_m_378_, lean_object* v_a_379_, lean_object* v_b_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_m_378_, v_a_379_, v_b_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(lean_object* v_as_382_, size_t v_sz_383_, size_t v_i_384_, lean_object* v_b_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_as_382_, v_sz_383_, v_i_384_, v_b_385_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___boxed(lean_object* v_as_395_, lean_object* v_sz_396_, lean_object* v_i_397_, lean_object* v_b_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
size_t v_sz_boxed_407_; size_t v_i_boxed_408_; lean_object* v_res_409_; 
v_sz_boxed_407_ = lean_unbox_usize(v_sz_396_);
lean_dec(v_sz_396_);
v_i_boxed_408_ = lean_unbox_usize(v_i_397_);
lean_dec(v_i_397_);
v_res_409_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(v_as_395_, v_sz_boxed_407_, v_i_boxed_408_, v_b_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec_ref(v_as_395_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(lean_object* v_inst_410_, lean_object* v_R_411_, lean_object* v_a_412_, lean_object* v_b_413_, lean_object* v_c_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v_a_412_, v_b_413_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___boxed(lean_object* v_inst_424_, lean_object* v_R_425_, lean_object* v_a_426_, lean_object* v_b_427_, lean_object* v_c_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(v_inst_424_, v_R_425_, v_a_426_, v_b_427_, v_c_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
return v_res_437_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(lean_object* v_00_u03b2_438_, lean_object* v_a_439_, lean_object* v_x_440_){
_start:
{
uint8_t v___x_441_; 
v___x_441_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_439_, v_x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___boxed(lean_object* v_00_u03b2_442_, lean_object* v_a_443_, lean_object* v_x_444_){
_start:
{
uint8_t v_res_445_; lean_object* v_r_446_; 
v_res_445_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(v_00_u03b2_442_, v_a_443_, v_x_444_);
lean_dec(v_x_444_);
lean_dec(v_a_443_);
v_r_446_ = lean_box(v_res_445_);
return v_r_446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1(lean_object* v_00_u03b2_447_, lean_object* v_data_448_){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(v_data_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2(lean_object* v_00_u03b2_450_, lean_object* v_a_451_, lean_object* v_b_452_, lean_object* v_x_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_451_, v_b_452_, v_x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_455_, lean_object* v_i_456_, lean_object* v_source_457_, lean_object* v_target_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(v_i_456_, v_source_457_, v_target_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_460_, lean_object* v_x_461_, lean_object* v_x_462_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(v_x_461_, v_x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(lean_object* v_fvarId_464_, lean_object* v_args_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
uint8_t v___x_474_; lean_object* v___x_475_; 
v___x_474_ = 0;
v___x_475_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_474_, v_fvarId_464_, v_a_470_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_540_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_540_ == 0)
{
v___x_478_ = v___x_475_;
v_isShared_479_ = v_isSharedCheck_540_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_475_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_540_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
if (lean_obj_tag(v_a_476_) == 1)
{
lean_object* v_val_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_535_; 
lean_del_object(v___x_478_);
v_val_480_ = lean_ctor_get(v_a_476_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v_a_476_);
if (v_isSharedCheck_535_ == 0)
{
v___x_482_ = v_a_476_;
v_isShared_483_ = v_isSharedCheck_535_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_val_480_);
lean_dec(v_a_476_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_535_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; 
v___x_484_ = l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(v_val_480_, v_a_467_, v_a_469_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_526_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_526_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_526_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_526_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
uint8_t v___x_489_; 
v___x_489_ = lean_unbox(v_a_485_);
lean_dec(v_a_485_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_492_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v___x_490_ = lean_box(0);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_490_);
v___x_492_ = v___x_487_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
else
{
lean_object* v___x_494_; 
lean_del_object(v___x_487_);
v___x_494_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_467_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_params_495_; lean_object* v_value_496_; uint8_t v___x_497_; lean_object* v___x_498_; 
lean_dec_ref_known(v___x_494_, 1);
v_params_495_ = lean_ctor_get(v_val_480_, 2);
lean_inc_ref(v_params_495_);
v_value_496_ = lean_ctor_get(v_val_480_, 4);
lean_inc_ref(v_value_496_);
lean_dec(v_val_480_);
v___x_497_ = 0;
v___x_498_ = l_Lean_Compiler_LCNF_Simp_betaReduce(v_params_495_, v_value_496_, v_args_465_, v___x_497_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_);
lean_dec_ref(v_params_495_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_509_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_509_ == 0)
{
v___x_501_ = v___x_498_;
v_isShared_502_ = v_isSharedCheck_509_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_498_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_509_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v_a_499_);
v___x_504_ = v___x_482_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_508_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_object* v___x_506_; 
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_504_);
v___x_506_ = v___x_501_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
else
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_517_; 
lean_del_object(v___x_482_);
v_a_510_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_517_ == 0)
{
v___x_512_ = v___x_498_;
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_498_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_513_ == 0)
{
v___x_515_ = v___x_512_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_510_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v_a_518_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_494_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_494_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
}
}
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v_a_527_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_484_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_484_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
else
{
lean_object* v___x_536_; lean_object* v___x_538_; 
lean_dec(v_a_476_);
lean_dec_ref(v_args_465_);
v___x_536_ = lean_box(0);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v___x_536_);
v___x_538_ = v___x_478_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec_ref(v_args_465_);
v_a_541_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_475_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_475_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
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
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f___boxed(lean_object* v_fvarId_549_, lean_object* v_args_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(v_fvarId_549_, v_args_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_);
lean_dec(v_a_557_);
lean_dec_ref(v_a_556_);
lean_dec(v_a_555_);
lean_dec_ref(v_a_554_);
lean_dec_ref(v_a_553_);
lean_dec(v_a_552_);
lean_dec_ref(v_a_551_);
lean_dec(v_fvarId_549_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(lean_object* v_declName_560_, lean_object* v___y_561_){
_start:
{
lean_object* v___x_563_; lean_object* v_env_564_; uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_563_ = lean_st_ref_get(v___y_561_);
v_env_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc_ref(v_env_564_);
lean_dec(v___x_563_);
v___x_565_ = l_Lean_isInstanceReducibleCore(v_env_564_, v_declName_560_);
v___x_566_ = lean_box(v___x_565_);
v___x_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
v___x_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg___boxed(lean_object* v_declName_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_569_, v___y_570_);
lean_dec(v___y_570_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(lean_object* v_declName_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_573_, v___y_580_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___boxed(lean_object* v_declName_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(v_declName_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(size_t v_sz_593_, size_t v_i_594_, lean_object* v_bs_595_){
_start:
{
uint8_t v___x_596_; 
v___x_596_ = lean_usize_dec_lt(v_i_594_, v_sz_593_);
if (v___x_596_ == 0)
{
return v_bs_595_;
}
else
{
lean_object* v_v_597_; lean_object* v_fvarId_598_; lean_object* v___x_599_; lean_object* v_bs_x27_600_; lean_object* v___x_601_; size_t v___x_602_; size_t v___x_603_; lean_object* v___x_604_; 
v_v_597_ = lean_array_uget_borrowed(v_bs_595_, v_i_594_);
v_fvarId_598_ = lean_ctor_get(v_v_597_, 0);
lean_inc(v_fvarId_598_);
v___x_599_ = lean_unsigned_to_nat(0u);
v_bs_x27_600_ = lean_array_uset(v_bs_595_, v_i_594_, v___x_599_);
v___x_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_601_, 0, v_fvarId_598_);
v___x_602_ = ((size_t)1ULL);
v___x_603_ = lean_usize_add(v_i_594_, v___x_602_);
v___x_604_ = lean_array_uset(v_bs_x27_600_, v_i_594_, v___x_601_);
v_i_594_ = v___x_603_;
v_bs_595_ = v___x_604_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg___boxed(lean_object* v_sz_606_, lean_object* v_i_607_, lean_object* v_bs_608_){
_start:
{
size_t v_sz_boxed_609_; size_t v_i_boxed_610_; lean_object* v_res_611_; 
v_sz_boxed_609_ = lean_unbox_usize(v_sz_606_);
lean_dec(v_sz_606_);
v_i_boxed_610_ = lean_unbox_usize(v_i_607_);
lean_dec(v_i_607_);
v_res_611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_sz_boxed_609_, v_i_boxed_610_, v_bs_608_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(lean_object* v_letDecl_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
lean_object* v_config_627_; uint8_t v_etaPoly_628_; 
v_config_627_ = lean_ctor_get(v_a_616_, 1);
v_etaPoly_628_ = lean_ctor_get_uint8(v_config_627_, 0);
if (v_etaPoly_628_ == 0)
{
lean_object* v___x_629_; lean_object* v___x_630_; 
lean_dec_ref(v_letDecl_615_);
v___x_629_ = lean_box(0);
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
return v___x_630_;
}
else
{
lean_object* v_value_631_; 
v_value_631_ = lean_ctor_get(v_letDecl_615_, 3);
lean_inc(v_value_631_);
if (lean_obj_tag(v_value_631_) == 3)
{
lean_object* v_fvarId_632_; lean_object* v_type_633_; lean_object* v_declName_634_; lean_object* v_us_635_; lean_object* v_args_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_796_; 
v_fvarId_632_ = lean_ctor_get(v_letDecl_615_, 0);
v_type_633_ = lean_ctor_get(v_letDecl_615_, 2);
v_declName_634_ = lean_ctor_get(v_value_631_, 0);
v_us_635_ = lean_ctor_get(v_value_631_, 1);
v_args_636_ = lean_ctor_get(v_value_631_, 2);
v_isSharedCheck_796_ = !lean_is_exclusive(v_value_631_);
if (v_isSharedCheck_796_ == 0)
{
v___x_638_ = v_value_631_;
v_isShared_639_ = v_isSharedCheck_796_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_args_636_);
lean_inc(v_us_635_);
lean_inc(v_declName_634_);
lean_dec(v_value_631_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_796_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_640_; lean_object* v_env_641_; uint8_t v___x_642_; lean_object* v___x_643_; 
v___x_640_ = lean_st_ref_get(v_a_622_);
v_env_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc_ref(v_env_641_);
lean_dec(v___x_640_);
v___x_642_ = 0;
lean_inc(v_declName_634_);
v___x_643_ = l_Lean_Environment_find_x3f(v_env_641_, v_declName_634_, v___x_642_);
if (lean_obj_tag(v___x_643_) == 1)
{
lean_object* v_val_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_val_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc(v_val_644_);
lean_dec_ref_known(v___x_643_, 1);
v___x_645_ = l_Lean_ConstantInfo_type(v_val_644_);
lean_dec(v_val_644_);
v___x_646_ = l_Lean_Compiler_LCNF_hasLocalInst___redArg(v___x_645_, v_a_622_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_785_; 
v_a_647_ = lean_ctor_get(v___x_646_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_785_ == 0)
{
v___x_649_ = v___x_646_;
v_isShared_650_ = v_isSharedCheck_785_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_646_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_785_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
uint8_t v___x_651_; 
v___x_651_ = lean_unbox(v_a_647_);
lean_dec(v_a_647_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; lean_object* v___x_654_; 
lean_del_object(v___x_638_);
lean_dec_ref(v_args_636_);
lean_dec(v_us_635_);
lean_dec(v_declName_634_);
lean_dec_ref(v_letDecl_615_);
v___x_652_ = lean_box(0);
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 0, v___x_652_);
v___x_654_ = v___x_649_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_652_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
else
{
lean_object* v___x_656_; lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_784_; 
lean_del_object(v___x_649_);
lean_inc(v_declName_634_);
v___x_656_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_634_, v_a_622_);
v_a_657_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_784_ == 0)
{
v___x_659_ = v___x_656_;
v_isShared_660_ = v_isSharedCheck_784_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_656_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_784_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v_val_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_783_; 
v_val_661_ = lean_ctor_get(v_a_657_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v_a_657_);
if (v_isSharedCheck_783_ == 0)
{
v___x_663_ = v_a_657_;
v_isShared_664_ = v_isSharedCheck_783_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_val_661_);
lean_dec(v_a_657_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_783_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
uint8_t v___x_665_; 
v___x_665_ = lean_unbox(v_val_661_);
lean_dec(v_val_661_);
if (v___x_665_ == 0)
{
lean_object* v___x_666_; 
lean_del_object(v___x_659_);
v___x_666_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_619_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; uint8_t v___x_668_; lean_object* v___x_669_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc(v_a_667_);
lean_dec_ref_known(v___x_666_, 1);
v___x_668_ = lean_unbox(v_a_667_);
lean_inc(v_declName_634_);
v___x_669_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_634_, v___x_668_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_762_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_762_ == 0)
{
v___x_672_ = v___x_669_;
v_isShared_673_ = v_isSharedCheck_762_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_669_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_762_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
if (lean_obj_tag(v_a_670_) == 1)
{
lean_object* v_val_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_761_; 
v_val_674_ = lean_ctor_get(v_a_670_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v_a_670_);
if (v_isSharedCheck_761_ == 0)
{
v___x_676_ = v_a_670_;
v_isShared_677_ = v_isSharedCheck_761_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_val_674_);
lean_dec(v_a_670_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_761_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
uint8_t v___x_678_; uint8_t v___x_679_; 
v___x_678_ = lean_unbox(v_a_667_);
lean_dec(v_a_667_);
v___x_679_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_678_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v___x_680_ = lean_array_get_size(v_args_636_);
v___x_681_ = l_Lean_Compiler_LCNF_Decl_getArity___redArg(v_val_674_);
lean_dec(v_val_674_);
v___x_682_ = lean_nat_dec_lt(v___x_680_, v___x_681_);
lean_dec(v___x_681_);
if (v___x_682_ == 0)
{
lean_object* v___x_683_; lean_object* v___x_685_; 
lean_del_object(v___x_676_);
lean_del_object(v___x_663_);
lean_del_object(v___x_638_);
lean_dec_ref(v_args_636_);
lean_dec(v_us_635_);
lean_dec(v_declName_634_);
lean_dec_ref(v_letDecl_615_);
v___x_683_ = lean_box(0);
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 0, v___x_683_);
v___x_685_ = v___x_672_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_683_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
else
{
lean_object* v___x_687_; 
lean_del_object(v___x_672_);
lean_inc_ref(v_type_633_);
v___x_687_ = l_Lean_Compiler_LCNF_mkNewParams(v___x_679_, v_type_633_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; size_t v_sz_689_; size_t v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_694_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc_n(v_a_688_, 2);
lean_dec_ref_known(v___x_687_, 1);
v_sz_689_ = lean_array_size(v_a_688_);
v___x_690_ = ((size_t)0ULL);
v___x_691_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_sz_689_, v___x_690_, v_a_688_);
v___x_692_ = l_Array_append___redArg(v_args_636_, v___x_691_);
lean_dec_ref(v___x_691_);
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 2, v___x_692_);
v___x_694_ = v___x_638_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_declName_634_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v_us_635_);
lean_ctor_set(v_reuseFailAlloc_752_, 2, v___x_692_);
v___x_694_ = v_reuseFailAlloc_752_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1));
v___x_696_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_679_, v___x_694_, v___x_695_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_696_) == 0)
{
lean_object* v_a_697_; lean_object* v_fvarId_698_; lean_object* v___x_700_; 
v_a_697_ = lean_ctor_get(v___x_696_, 0);
lean_inc(v_a_697_);
lean_dec_ref_known(v___x_696_, 1);
v_fvarId_698_ = lean_ctor_get(v_a_697_, 0);
lean_inc(v_fvarId_698_);
if (v_isShared_664_ == 0)
{
lean_ctor_set_tag(v___x_663_, 5);
lean_ctor_set(v___x_663_, 0, v_fvarId_698_);
v___x_700_ = v___x_663_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_fvarId_698_);
v___x_700_ = v_reuseFailAlloc_743_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_701_, 0, v_a_697_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
v___x_702_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4));
v___x_703_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v_a_688_, v___x_701_, v___x_702_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; lean_object* v_fvarId_705_; lean_object* v___x_707_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_a_704_);
lean_dec_ref_known(v___x_703_, 1);
v_fvarId_705_ = lean_ctor_get(v_a_704_, 0);
lean_inc(v_fvarId_705_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v_a_704_);
v___x_707_ = v___x_676_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_704_);
v___x_707_ = v_reuseFailAlloc_734_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_708_; 
lean_inc(v_fvarId_632_);
v___x_708_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_632_, v_fvarId_705_, v_a_617_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v___x_709_; 
lean_dec_ref_known(v___x_708_, 1);
v___x_709_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_letDecl_615_, v_a_617_, v_a_620_);
lean_dec_ref(v_letDecl_615_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_716_; 
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_716_ == 0)
{
lean_object* v_unused_717_; 
v_unused_717_ = lean_ctor_get(v___x_709_, 0);
lean_dec(v_unused_717_);
v___x_711_ = v___x_709_;
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
else
{
lean_dec(v___x_709_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_707_);
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_707_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec_ref(v___x_707_);
v_a_718_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_709_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_709_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
}
else
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
lean_dec_ref(v___x_707_);
lean_dec_ref(v_letDecl_615_);
v_a_726_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_733_ == 0)
{
v___x_728_ = v___x_708_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_708_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_726_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_del_object(v___x_676_);
lean_dec_ref(v_letDecl_615_);
v_a_735_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_703_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_703_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
lean_dec(v_a_688_);
lean_del_object(v___x_676_);
lean_del_object(v___x_663_);
lean_dec_ref(v_letDecl_615_);
v_a_744_ = lean_ctor_get(v___x_696_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v___x_696_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_696_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_del_object(v___x_676_);
lean_del_object(v___x_663_);
lean_del_object(v___x_638_);
lean_dec_ref(v_args_636_);
lean_dec(v_us_635_);
lean_dec(v_declName_634_);
lean_dec_ref(v_letDecl_615_);
v_a_753_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_687_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_687_);
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
else
{
lean_del_object(v___x_676_);
lean_dec(v_val_674_);
lean_del_object(v___x_672_);
lean_del_object(v___x_663_);
lean_del_object(v___x_638_);
lean_dec_ref(v_args_636_);
lean_dec(v_us_635_);
lean_dec(v_declName_634_);
lean_dec_ref(v_letDecl_615_);
goto v___jp_624_;
}
}
}
else
{
lean_del_object(v___x_672_);
lean_dec(v_a_670_);
lean_dec(v_a_667_);
lean_del_object(v___x_663_);
lean_del_object(v___x_638_);
lean_dec_ref(v_args_636_);
lean_dec(v_us_635_);
lean_dec(v_declName_634_);
lean_dec_ref(v_letDecl_615_);
goto v___jp_624_;
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
lean_dec(v_a_667_);
lean_del_object(v___x_663_);
lean_del_object(v___x_638_);
lean_dec_ref(v_args_636_);
lean_dec(v_us_635_);
lean_dec(v_declName_634_);
lean_dec_ref(v_letDecl_615_);
v_a_763_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_669_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_669_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
else
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
lean_del_object(v___x_663_);
lean_del_object(v___x_638_);
lean_dec_ref(v_args_636_);
lean_dec(v_us_635_);
lean_dec(v_declName_634_);
lean_dec_ref(v_letDecl_615_);
v_a_771_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_666_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_666_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
else
{
lean_object* v___x_779_; lean_object* v___x_781_; 
lean_del_object(v___x_663_);
lean_del_object(v___x_638_);
lean_dec_ref(v_args_636_);
lean_dec(v_us_635_);
lean_dec(v_declName_634_);
lean_dec_ref(v_letDecl_615_);
v___x_779_ = lean_box(0);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 0, v___x_779_);
v___x_781_ = v___x_659_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_del_object(v___x_638_);
lean_dec_ref(v_args_636_);
lean_dec(v_us_635_);
lean_dec(v_declName_634_);
lean_dec_ref(v_letDecl_615_);
v_a_786_ = lean_ctor_get(v___x_646_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_646_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_646_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
else
{
lean_object* v___x_794_; lean_object* v___x_795_; 
lean_dec(v___x_643_);
lean_del_object(v___x_638_);
lean_dec_ref(v_args_636_);
lean_dec(v_us_635_);
lean_dec(v_declName_634_);
lean_dec_ref(v_letDecl_615_);
v___x_794_ = lean_box(0);
v___x_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_795_, 0, v___x_794_);
return v___x_795_;
}
}
}
else
{
lean_object* v___x_797_; lean_object* v___x_798_; 
lean_dec(v_value_631_);
lean_dec_ref(v_letDecl_615_);
v___x_797_ = lean_box(0);
v___x_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
return v___x_798_;
}
}
v___jp_624_:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_box(0);
v___x_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
return v___x_626_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___boxed(lean_object* v_letDecl_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(v_letDecl_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
lean_dec_ref(v_a_802_);
lean_dec(v_a_801_);
lean_dec_ref(v_a_800_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(uint8_t v___x_809_, size_t v_sz_810_, size_t v_i_811_, lean_object* v_bs_812_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_sz_810_, v_i_811_, v_bs_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___boxed(lean_object* v___x_814_, lean_object* v_sz_815_, lean_object* v_i_816_, lean_object* v_bs_817_){
_start:
{
uint8_t v___x_23072__boxed_818_; size_t v_sz_boxed_819_; size_t v_i_boxed_820_; lean_object* v_res_821_; 
v___x_23072__boxed_818_ = lean_unbox(v___x_814_);
v_sz_boxed_819_ = lean_unbox_usize(v_sz_815_);
lean_dec(v_sz_815_);
v_i_boxed_820_ = lean_unbox_usize(v_i_816_);
lean_dec(v_i_816_);
v_res_821_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(v___x_23072__boxed_818_, v_sz_boxed_819_, v_i_boxed_820_, v_bs_817_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(lean_object* v_c_822_, lean_object* v_fvarId_823_, lean_object* v_a_824_){
_start:
{
if (lean_obj_tag(v_c_822_) == 5)
{
lean_object* v_fvarId_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_848_; 
v_fvarId_826_ = lean_ctor_get(v_c_822_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v_c_822_);
if (v_isSharedCheck_848_ == 0)
{
v___x_828_ = v_c_822_;
v_isShared_829_ = v_isSharedCheck_848_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_fvarId_826_);
lean_dec(v_c_822_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_848_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
uint8_t v___x_830_; lean_object* v___x_831_; lean_object* v_subst_832_; lean_object* v___x_833_; 
v___x_830_ = 0;
v___x_831_ = lean_st_ref_get(v_a_824_);
v_subst_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc_ref(v_subst_832_);
lean_dec(v___x_831_);
v___x_833_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_832_, v_fvarId_826_, v___x_830_);
lean_dec_ref(v_subst_832_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v_fvarId_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_843_; 
lean_del_object(v___x_828_);
v_fvarId_834_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_843_ == 0)
{
v___x_836_ = v___x_833_;
v_isShared_837_ = v_isSharedCheck_843_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_fvarId_834_);
lean_dec(v___x_833_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_843_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
uint8_t v___x_838_; lean_object* v___x_839_; lean_object* v___x_841_; 
v___x_838_ = l_Lean_instBEqFVarId_beq(v_fvarId_834_, v_fvarId_823_);
lean_dec(v_fvarId_834_);
v___x_839_ = lean_box(v___x_838_);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 0, v___x_839_);
v___x_841_ = v___x_836_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
else
{
lean_object* v___x_844_; lean_object* v___x_846_; 
v___x_844_ = lean_box(v___x_830_);
if (v_isShared_829_ == 0)
{
lean_ctor_set_tag(v___x_828_, 0);
lean_ctor_set(v___x_828_, 0, v___x_844_);
v___x_846_ = v___x_828_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_844_);
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
else
{
uint8_t v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
lean_dec_ref(v_c_822_);
v___x_849_ = 0;
v___x_850_ = lean_box(v___x_849_);
v___x_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
return v___x_851_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg___boxed(lean_object* v_c_852_, lean_object* v_fvarId_853_, lean_object* v_a_854_, lean_object* v_a_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(v_c_852_, v_fvarId_853_, v_a_854_);
lean_dec(v_a_854_);
lean_dec(v_fvarId_853_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf(lean_object* v_c_857_, lean_object* v_fvarId_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(v_c_857_, v_fvarId_858_, v_a_860_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___boxed(lean_object* v_c_868_, lean_object* v_fvarId_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_){
_start:
{
lean_object* v_res_878_; 
v_res_878_ = l_Lean_Compiler_LCNF_Simp_isReturnOf(v_c_868_, v_fvarId_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_);
lean_dec(v_a_876_);
lean_dec_ref(v_a_875_);
lean_dec(v_a_874_);
lean_dec_ref(v_a_873_);
lean_dec_ref(v_a_872_);
lean_dec(v_a_871_);
lean_dec_ref(v_a_870_);
lean_dec(v_fvarId_869_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(lean_object* v_value_879_){
_start:
{
if (lean_obj_tag(v_value_879_) == 4)
{
lean_object* v_fvarId_884_; lean_object* v_args_885_; lean_object* v___x_886_; lean_object* v___x_887_; uint8_t v___x_888_; 
v_fvarId_884_ = lean_ctor_get(v_value_879_, 0);
v_args_885_ = lean_ctor_get(v_value_879_, 1);
v___x_886_ = lean_array_get_size(v_args_885_);
v___x_887_ = lean_unsigned_to_nat(0u);
v___x_888_ = lean_nat_dec_eq(v___x_886_, v___x_887_);
if (v___x_888_ == 0)
{
goto v___jp_881_;
}
else
{
lean_object* v___x_889_; lean_object* v___x_890_; 
lean_inc(v_fvarId_884_);
v___x_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_889_, 0, v_fvarId_884_);
v___x_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_890_, 0, v___x_889_);
return v___x_890_;
}
}
else
{
goto v___jp_881_;
}
v___jp_881_:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_box(0);
v___x_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_883_, 0, v___x_882_);
return v___x_883_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg___boxed(lean_object* v_value_891_, lean_object* v_a_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_891_);
lean_dec(v_value_891_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f(lean_object* v_value_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_){
_start:
{
lean_object* v___x_903_; 
v___x_903_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_894_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___boxed(lean_object* v_value_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f(v_value_904_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_, v_a_911_);
lean_dec(v_a_911_);
lean_dec_ref(v_a_910_);
lean_dec(v_a_909_);
lean_dec_ref(v_a_908_);
lean_dec_ref(v_a_907_);
lean_dec(v_a_906_);
lean_dec_ref(v_a_905_);
lean_dec(v_value_904_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(uint8_t v_pu_914_, uint8_t v_t_915_, lean_object* v_args_916_, lean_object* v___y_917_){
_start:
{
lean_object* v___x_919_; lean_object* v_subst_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_919_ = lean_st_ref_get(v___y_917_);
v_subst_920_ = lean_ctor_get(v___x_919_, 0);
lean_inc_ref(v_subst_920_);
lean_dec(v___x_919_);
v___x_921_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_914_, v_subst_920_, v_args_916_, v_t_915_);
lean_dec_ref(v_subst_920_);
v___x_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg___boxed(lean_object* v_pu_923_, lean_object* v_t_924_, lean_object* v_args_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
uint8_t v_pu_boxed_928_; uint8_t v_t_boxed_929_; lean_object* v_res_930_; 
v_pu_boxed_928_ = lean_unbox(v_pu_923_);
v_t_boxed_929_ = lean_unbox(v_t_924_);
v_res_930_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v_pu_boxed_928_, v_t_boxed_929_, v_args_925_, v___y_926_);
lean_dec(v___y_926_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(lean_object* v_as_931_, size_t v_i_932_, size_t v_stop_933_, lean_object* v_b_934_, lean_object* v___y_935_){
_start:
{
uint8_t v___x_937_; 
v___x_937_ = lean_usize_dec_eq(v_i_932_, v_stop_933_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_938_ = lean_array_uget_borrowed(v_as_931_, v_i_932_);
lean_inc(v___x_938_);
v___x_939_ = l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(v___x_938_, v___y_935_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; size_t v___x_941_; size_t v___x_942_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_939_, 1);
v___x_941_ = ((size_t)1ULL);
v___x_942_ = lean_usize_add(v_i_932_, v___x_941_);
v_i_932_ = v___x_942_;
v_b_934_ = v_a_940_;
goto _start;
}
else
{
return v___x_939_;
}
}
else
{
lean_object* v___x_944_; 
v___x_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_944_, 0, v_b_934_);
return v___x_944_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg___boxed(lean_object* v_as_945_, lean_object* v_i_946_, lean_object* v_stop_947_, lean_object* v_b_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
size_t v_i_boxed_951_; size_t v_stop_boxed_952_; lean_object* v_res_953_; 
v_i_boxed_951_ = lean_unbox_usize(v_i_946_);
lean_dec(v_i_946_);
v_stop_boxed_952_ = lean_unbox_usize(v_stop_947_);
lean_dec(v_stop_947_);
v_res_953_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_as_945_, v_i_boxed_951_, v_stop_boxed_952_, v_b_948_, v___y_949_);
lean_dec(v___y_949_);
lean_dec_ref(v_as_945_);
return v_res_953_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(lean_object* v_as_954_, size_t v_i_955_, size_t v_stop_956_){
_start:
{
lean_object* v___y_958_; uint8_t v___x_963_; 
v___x_963_ = lean_usize_dec_eq(v_i_955_, v_stop_956_);
if (v___x_963_ == 0)
{
lean_object* v___x_964_; 
v___x_964_ = lean_array_uget_borrowed(v_as_954_, v_i_955_);
switch(lean_obj_tag(v___x_964_))
{
case 0:
{
lean_object* v_code_965_; 
v_code_965_ = lean_ctor_get(v___x_964_, 2);
v___y_958_ = v_code_965_;
goto v___jp_957_;
}
case 1:
{
lean_object* v_code_966_; 
v_code_966_ = lean_ctor_get(v___x_964_, 1);
v___y_958_ = v_code_966_;
goto v___jp_957_;
}
default: 
{
lean_object* v_code_967_; 
v_code_967_ = lean_ctor_get(v___x_964_, 0);
v___y_958_ = v_code_967_;
goto v___jp_957_;
}
}
}
else
{
uint8_t v___x_968_; 
v___x_968_ = 0;
return v___x_968_;
}
v___jp_957_:
{
if (lean_obj_tag(v___y_958_) == 6)
{
size_t v___x_959_; size_t v___x_960_; 
v___x_959_ = ((size_t)1ULL);
v___x_960_ = lean_usize_add(v_i_955_, v___x_959_);
v_i_955_ = v___x_960_;
goto _start;
}
else
{
uint8_t v___x_962_; 
v___x_962_ = 1;
return v___x_962_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11___boxed(lean_object* v_as_969_, lean_object* v_i_970_, lean_object* v_stop_971_){
_start:
{
size_t v_i_boxed_972_; size_t v_stop_boxed_973_; uint8_t v_res_974_; lean_object* v_r_975_; 
v_i_boxed_972_ = lean_unbox_usize(v_i_970_);
lean_dec(v_i_970_);
v_stop_boxed_973_ = lean_unbox_usize(v_stop_971_);
lean_dec(v_stop_971_);
v_res_974_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(v_as_969_, v_i_boxed_972_, v_stop_boxed_973_);
lean_dec_ref(v_as_969_);
v_r_975_ = lean_box(v_res_974_);
return v_r_975_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(uint8_t v_pu_976_, uint8_t v_t_977_, lean_object* v_i_978_, lean_object* v_as_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_983_ = lean_array_get_size(v_as_979_);
v___x_984_ = lean_nat_dec_lt(v_i_978_, v___x_983_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; 
lean_dec(v_i_978_);
v___x_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_985_, 0, v_as_979_);
return v___x_985_;
}
else
{
lean_object* v_a_986_; lean_object* v_type_987_; lean_object* v___x_988_; lean_object* v_subst_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v_a_986_ = lean_array_fget_borrowed(v_as_979_, v_i_978_);
v_type_987_ = lean_ctor_get(v_a_986_, 2);
v___x_988_ = lean_st_ref_get(v___y_980_);
v_subst_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc_ref(v_subst_989_);
lean_dec(v___x_988_);
lean_inc_ref(v_type_987_);
v___x_990_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_976_, v_subst_989_, v_t_977_, v_type_987_);
lean_dec_ref(v_subst_989_);
lean_inc(v_a_986_);
v___x_991_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v_pu_976_, v_a_986_, v___x_990_, v___y_981_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; size_t v___x_993_; size_t v___x_994_; uint8_t v___x_995_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_992_);
lean_dec_ref_known(v___x_991_, 1);
v___x_993_ = lean_ptr_addr(v_a_986_);
v___x_994_ = lean_ptr_addr(v_a_992_);
v___x_995_ = lean_usize_dec_eq(v___x_993_, v___x_994_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_996_ = lean_unsigned_to_nat(1u);
v___x_997_ = lean_nat_add(v_i_978_, v___x_996_);
v___x_998_ = lean_array_fset(v_as_979_, v_i_978_, v_a_992_);
lean_dec(v_i_978_);
v_i_978_ = v___x_997_;
v_as_979_ = v___x_998_;
goto _start;
}
else
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
lean_dec(v_a_992_);
v___x_1000_ = lean_unsigned_to_nat(1u);
v___x_1001_ = lean_nat_add(v_i_978_, v___x_1000_);
lean_dec(v_i_978_);
v_i_978_ = v___x_1001_;
goto _start;
}
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
lean_dec_ref(v_as_979_);
lean_dec(v_i_978_);
v_a_1003_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v___x_991_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_991_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_a_1003_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg___boxed(lean_object* v_pu_1011_, lean_object* v_t_1012_, lean_object* v_i_1013_, lean_object* v_as_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
uint8_t v_pu_boxed_1018_; uint8_t v_t_boxed_1019_; lean_object* v_res_1020_; 
v_pu_boxed_1018_ = lean_unbox(v_pu_1011_);
v_t_boxed_1019_ = lean_unbox(v_t_1012_);
v_res_1020_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_boxed_1018_, v_t_boxed_1019_, v_i_1013_, v_as_1014_, v___y_1015_, v___y_1016_);
lean_dec(v___y_1016_);
lean_dec(v___y_1015_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(uint8_t v_pu_1021_, uint8_t v_t_1022_, lean_object* v_ps_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1032_ = lean_unsigned_to_nat(0u);
v___x_1033_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_1021_, v_t_1022_, v___x_1032_, v_ps_1023_, v___y_1025_, v___y_1028_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17___boxed(lean_object* v_pu_1034_, lean_object* v_t_1035_, lean_object* v_ps_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
uint8_t v_pu_boxed_1045_; uint8_t v_t_boxed_1046_; lean_object* v_res_1047_; 
v_pu_boxed_1045_ = lean_unbox(v_pu_1034_);
v_t_boxed_1046_ = lean_unbox(v_t_1035_);
v_res_1047_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(v_pu_boxed_1045_, v_t_boxed_1046_, v_ps_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(uint8_t v_pu_1048_, uint8_t v_t_1049_, lean_object* v_decl_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_type_1054_; lean_object* v_value_1055_; lean_object* v___x_1056_; lean_object* v_subst_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v_subst_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v_type_1054_ = lean_ctor_get(v_decl_1050_, 2);
v_value_1055_ = lean_ctor_get(v_decl_1050_, 3);
v___x_1056_ = lean_st_ref_get(v___y_1051_);
v_subst_1057_ = lean_ctor_get(v___x_1056_, 0);
lean_inc_ref(v_subst_1057_);
lean_dec(v___x_1056_);
lean_inc_ref(v_type_1054_);
v___x_1058_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1048_, v_subst_1057_, v_t_1049_, v_type_1054_);
lean_dec_ref(v_subst_1057_);
v___x_1059_ = lean_st_ref_get(v___y_1051_);
v_subst_1060_ = lean_ctor_get(v___x_1059_, 0);
lean_inc_ref(v_subst_1060_);
lean_dec(v___x_1059_);
lean_inc(v_value_1055_);
v___x_1061_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_1048_, v_subst_1060_, v_value_1055_, v_t_1049_);
lean_dec_ref(v_subst_1060_);
v___x_1062_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_1048_, v_decl_1050_, v___x_1058_, v___x_1061_, v___y_1052_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg___boxed(lean_object* v_pu_1063_, lean_object* v_t_1064_, lean_object* v_decl_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
uint8_t v_pu_boxed_1069_; uint8_t v_t_boxed_1070_; lean_object* v_res_1071_; 
v_pu_boxed_1069_ = lean_unbox(v_pu_1063_);
v_t_boxed_1070_ = lean_unbox(v_t_1064_);
v_res_1071_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v_pu_boxed_1069_, v_t_boxed_1070_, v_decl_1065_, v___y_1066_, v___y_1067_);
lean_dec(v___y_1067_);
lean_dec(v___y_1066_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(lean_object* v___y_1072_, lean_object* v___f_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v_fvarId_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___x_1082_; 
lean_inc(v_fvarId_1076_);
v___x_1082_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_1076_, v___y_1072_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v___x_1083_; 
lean_dec_ref_known(v___x_1082_, 1);
lean_inc(v___y_1080_);
lean_inc_ref(v___y_1079_);
lean_inc(v___y_1078_);
lean_inc_ref(v___y_1077_);
lean_inc_ref(v___y_1075_);
lean_inc(v___y_1072_);
lean_inc_ref(v___y_1074_);
v___x_1083_ = lean_apply_9(v___f_1073_, v_fvarId_1076_, v___y_1074_, v___y_1072_, v___y_1075_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, lean_box(0));
return v___x_1083_;
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1091_; 
lean_dec(v_fvarId_1076_);
lean_dec_ref(v___f_1073_);
v_a_1084_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1086_ = v___x_1082_;
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1082_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1089_; 
if (v_isShared_1087_ == 0)
{
v___x_1089_ = v___x_1086_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_a_1084_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed(lean_object* v___y_1092_, lean_object* v___f_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v_fvarId_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(v___y_1092_, v___f_1093_, v___y_1094_, v___y_1095_, v_fvarId_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec_ref(v___y_1095_);
lean_dec_ref(v___y_1094_);
lean_dec(v___y_1092_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(lean_object* v_x_1103_, lean_object* v_x_1104_, lean_object* v_x_1105_, lean_object* v_x_1106_){
_start:
{
lean_object* v_ks_1107_; lean_object* v_vs_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1132_; 
v_ks_1107_ = lean_ctor_get(v_x_1103_, 0);
v_vs_1108_ = lean_ctor_get(v_x_1103_, 1);
v_isSharedCheck_1132_ = !lean_is_exclusive(v_x_1103_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1110_ = v_x_1103_;
v_isShared_1111_ = v_isSharedCheck_1132_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_vs_1108_);
lean_inc(v_ks_1107_);
lean_dec(v_x_1103_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1132_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1112_; uint8_t v___x_1113_; 
v___x_1112_ = lean_array_get_size(v_ks_1107_);
v___x_1113_ = lean_nat_dec_lt(v_x_1104_, v___x_1112_);
if (v___x_1113_ == 0)
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1117_; 
lean_dec(v_x_1104_);
v___x_1114_ = lean_array_push(v_ks_1107_, v_x_1105_);
v___x_1115_ = lean_array_push(v_vs_1108_, v_x_1106_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 1, v___x_1115_);
lean_ctor_set(v___x_1110_, 0, v___x_1114_);
v___x_1117_ = v___x_1110_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1114_);
lean_ctor_set(v_reuseFailAlloc_1118_, 1, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
else
{
lean_object* v_k_x27_1119_; uint8_t v___x_1120_; 
v_k_x27_1119_ = lean_array_fget_borrowed(v_ks_1107_, v_x_1104_);
v___x_1120_ = lean_name_eq(v_x_1105_, v_k_x27_1119_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1122_; 
if (v_isShared_1111_ == 0)
{
v___x_1122_ = v___x_1110_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_ks_1107_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v_vs_1108_);
v___x_1122_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = lean_unsigned_to_nat(1u);
v___x_1124_ = lean_nat_add(v_x_1104_, v___x_1123_);
lean_dec(v_x_1104_);
v_x_1103_ = v___x_1122_;
v_x_1104_ = v___x_1124_;
goto _start;
}
}
else
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1127_ = lean_array_fset(v_ks_1107_, v_x_1104_, v_x_1105_);
v___x_1128_ = lean_array_fset(v_vs_1108_, v_x_1104_, v_x_1106_);
lean_dec(v_x_1104_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 1, v___x_1128_);
lean_ctor_set(v___x_1110_, 0, v___x_1127_);
v___x_1130_ = v___x_1110_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v___x_1127_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(lean_object* v_n_1133_, lean_object* v_k_1134_, lean_object* v_v_1135_){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = lean_unsigned_to_nat(0u);
v___x_1137_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(v_n_1133_, v___x_1136_, v_k_1134_, v_v_1135_);
return v___x_1137_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(lean_object* v_x_1139_, size_t v_x_1140_, size_t v_x_1141_, lean_object* v_x_1142_, lean_object* v_x_1143_){
_start:
{
if (lean_obj_tag(v_x_1139_) == 0)
{
lean_object* v_es_1144_; size_t v___x_1145_; size_t v___x_1146_; lean_object* v_j_1147_; lean_object* v___x_1148_; uint8_t v___x_1149_; 
v_es_1144_ = lean_ctor_get(v_x_1139_, 0);
v___x_1145_ = ((size_t)31ULL);
v___x_1146_ = lean_usize_land(v_x_1140_, v___x_1145_);
v_j_1147_ = lean_usize_to_nat(v___x_1146_);
v___x_1148_ = lean_array_get_size(v_es_1144_);
v___x_1149_ = lean_nat_dec_lt(v_j_1147_, v___x_1148_);
if (v___x_1149_ == 0)
{
lean_dec(v_j_1147_);
lean_dec(v_x_1143_);
lean_dec(v_x_1142_);
return v_x_1139_;
}
else
{
lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1188_; 
lean_inc_ref(v_es_1144_);
v_isSharedCheck_1188_ = !lean_is_exclusive(v_x_1139_);
if (v_isSharedCheck_1188_ == 0)
{
lean_object* v_unused_1189_; 
v_unused_1189_ = lean_ctor_get(v_x_1139_, 0);
lean_dec(v_unused_1189_);
v___x_1151_ = v_x_1139_;
v_isShared_1152_ = v_isSharedCheck_1188_;
goto v_resetjp_1150_;
}
else
{
lean_dec(v_x_1139_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1188_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v_v_1153_; lean_object* v___x_1154_; lean_object* v_xs_x27_1155_; lean_object* v___y_1157_; 
v_v_1153_ = lean_array_fget(v_es_1144_, v_j_1147_);
v___x_1154_ = lean_box(0);
v_xs_x27_1155_ = lean_array_fset(v_es_1144_, v_j_1147_, v___x_1154_);
switch(lean_obj_tag(v_v_1153_))
{
case 0:
{
lean_object* v_key_1162_; lean_object* v_val_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1173_; 
v_key_1162_ = lean_ctor_get(v_v_1153_, 0);
v_val_1163_ = lean_ctor_get(v_v_1153_, 1);
v_isSharedCheck_1173_ = !lean_is_exclusive(v_v_1153_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1165_ = v_v_1153_;
v_isShared_1166_ = v_isSharedCheck_1173_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_val_1163_);
lean_inc(v_key_1162_);
lean_dec(v_v_1153_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1173_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
uint8_t v___x_1167_; 
v___x_1167_ = lean_name_eq(v_x_1142_, v_key_1162_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
lean_del_object(v___x_1165_);
v___x_1168_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1162_, v_val_1163_, v_x_1142_, v_x_1143_);
v___x_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
v___y_1157_ = v___x_1169_;
goto v___jp_1156_;
}
else
{
lean_object* v___x_1171_; 
lean_dec(v_val_1163_);
lean_dec(v_key_1162_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 1, v_x_1143_);
lean_ctor_set(v___x_1165_, 0, v_x_1142_);
v___x_1171_ = v___x_1165_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_x_1142_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v_x_1143_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
v___y_1157_ = v___x_1171_;
goto v___jp_1156_;
}
}
}
}
case 1:
{
lean_object* v_node_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1186_; 
v_node_1174_ = lean_ctor_get(v_v_1153_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v_v_1153_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1176_ = v_v_1153_;
v_isShared_1177_ = v_isSharedCheck_1186_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_node_1174_);
lean_dec(v_v_1153_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1186_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
size_t v___x_1178_; size_t v___x_1179_; size_t v___x_1180_; size_t v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1178_ = ((size_t)5ULL);
v___x_1179_ = lean_usize_shift_right(v_x_1140_, v___x_1178_);
v___x_1180_ = ((size_t)1ULL);
v___x_1181_ = lean_usize_add(v_x_1141_, v___x_1180_);
v___x_1182_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_node_1174_, v___x_1179_, v___x_1181_, v_x_1142_, v_x_1143_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 0, v___x_1182_);
v___x_1184_ = v___x_1176_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
v___y_1157_ = v___x_1184_;
goto v___jp_1156_;
}
}
}
default: 
{
lean_object* v___x_1187_; 
v___x_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1187_, 0, v_x_1142_);
lean_ctor_set(v___x_1187_, 1, v_x_1143_);
v___y_1157_ = v___x_1187_;
goto v___jp_1156_;
}
}
v___jp_1156_:
{
lean_object* v___x_1158_; lean_object* v___x_1160_; 
v___x_1158_ = lean_array_fset(v_xs_x27_1155_, v_j_1147_, v___y_1157_);
lean_dec(v_j_1147_);
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v___x_1158_);
v___x_1160_ = v___x_1151_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v___x_1158_);
v___x_1160_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
return v___x_1160_;
}
}
}
}
}
else
{
lean_object* v_ks_1190_; lean_object* v_vs_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1209_; 
v_ks_1190_ = lean_ctor_get(v_x_1139_, 0);
v_vs_1191_ = lean_ctor_get(v_x_1139_, 1);
v_isSharedCheck_1209_ = !lean_is_exclusive(v_x_1139_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1193_ = v_x_1139_;
v_isShared_1194_ = v_isSharedCheck_1209_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_vs_1191_);
lean_inc(v_ks_1190_);
lean_dec(v_x_1139_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1209_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_ks_1190_);
lean_ctor_set(v_reuseFailAlloc_1208_, 1, v_vs_1191_);
v___x_1196_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_object* v_newNode_1197_; size_t v___x_1198_; uint8_t v___x_1199_; 
v_newNode_1197_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(v___x_1196_, v_x_1142_, v_x_1143_);
v___x_1198_ = ((size_t)7ULL);
v___x_1199_ = lean_usize_dec_le(v___x_1198_, v_x_1141_);
if (v___x_1199_ == 0)
{
lean_object* v___x_1200_; lean_object* v___x_1201_; uint8_t v___x_1202_; 
v___x_1200_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1197_);
v___x_1201_ = lean_unsigned_to_nat(4u);
v___x_1202_ = lean_nat_dec_lt(v___x_1200_, v___x_1201_);
lean_dec(v___x_1200_);
if (v___x_1202_ == 0)
{
lean_object* v_ks_1203_; lean_object* v_vs_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v_ks_1203_ = lean_ctor_get(v_newNode_1197_, 0);
lean_inc_ref(v_ks_1203_);
v_vs_1204_ = lean_ctor_get(v_newNode_1197_, 1);
lean_inc_ref(v_vs_1204_);
lean_dec_ref(v_newNode_1197_);
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0);
v___x_1207_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_x_1141_, v_ks_1203_, v_vs_1204_, v___x_1205_, v___x_1206_);
lean_dec_ref(v_vs_1204_);
lean_dec_ref(v_ks_1203_);
return v___x_1207_;
}
else
{
return v_newNode_1197_;
}
}
else
{
return v_newNode_1197_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(size_t v_depth_1210_, lean_object* v_keys_1211_, lean_object* v_vals_1212_, lean_object* v_i_1213_, lean_object* v_entries_1214_){
_start:
{
lean_object* v___x_1215_; uint8_t v___x_1216_; 
v___x_1215_ = lean_array_get_size(v_keys_1211_);
v___x_1216_ = lean_nat_dec_lt(v_i_1213_, v___x_1215_);
if (v___x_1216_ == 0)
{
lean_dec(v_i_1213_);
return v_entries_1214_;
}
else
{
lean_object* v_k_1217_; lean_object* v_v_1218_; uint64_t v___y_1220_; 
v_k_1217_ = lean_array_fget_borrowed(v_keys_1211_, v_i_1213_);
v_v_1218_ = lean_array_fget_borrowed(v_vals_1212_, v_i_1213_);
if (lean_obj_tag(v_k_1217_) == 0)
{
uint64_t v___x_1231_; 
v___x_1231_ = 1723ULL;
v___y_1220_ = v___x_1231_;
goto v___jp_1219_;
}
else
{
uint64_t v_hash_1232_; 
v_hash_1232_ = lean_ctor_get_uint64(v_k_1217_, sizeof(void*)*2);
v___y_1220_ = v_hash_1232_;
goto v___jp_1219_;
}
v___jp_1219_:
{
size_t v_h_1221_; size_t v___x_1222_; lean_object* v___x_1223_; size_t v___x_1224_; size_t v___x_1225_; size_t v___x_1226_; size_t v_h_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
v_h_1221_ = lean_uint64_to_usize(v___y_1220_);
v___x_1222_ = ((size_t)5ULL);
v___x_1223_ = lean_unsigned_to_nat(1u);
v___x_1224_ = ((size_t)1ULL);
v___x_1225_ = lean_usize_sub(v_depth_1210_, v___x_1224_);
v___x_1226_ = lean_usize_mul(v___x_1222_, v___x_1225_);
v_h_1227_ = lean_usize_shift_right(v_h_1221_, v___x_1226_);
v___x_1228_ = lean_nat_add(v_i_1213_, v___x_1223_);
lean_dec(v_i_1213_);
lean_inc(v_v_1218_);
lean_inc(v_k_1217_);
v___x_1229_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_entries_1214_, v_h_1227_, v_depth_1210_, v_k_1217_, v_v_1218_);
v_i_1213_ = v___x_1228_;
v_entries_1214_ = v___x_1229_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___boxed(lean_object* v_depth_1233_, lean_object* v_keys_1234_, lean_object* v_vals_1235_, lean_object* v_i_1236_, lean_object* v_entries_1237_){
_start:
{
size_t v_depth_boxed_1238_; lean_object* v_res_1239_; 
v_depth_boxed_1238_ = lean_unbox_usize(v_depth_1233_);
lean_dec(v_depth_1233_);
v_res_1239_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_depth_boxed_1238_, v_keys_1234_, v_vals_1235_, v_i_1236_, v_entries_1237_);
lean_dec_ref(v_vals_1235_);
lean_dec_ref(v_keys_1234_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_x_1240_, lean_object* v_x_1241_, lean_object* v_x_1242_, lean_object* v_x_1243_, lean_object* v_x_1244_){
_start:
{
size_t v_x_46709__boxed_1245_; size_t v_x_46710__boxed_1246_; lean_object* v_res_1247_; 
v_x_46709__boxed_1245_ = lean_unbox_usize(v_x_1241_);
lean_dec(v_x_1241_);
v_x_46710__boxed_1246_ = lean_unbox_usize(v_x_1242_);
lean_dec(v_x_1242_);
v_res_1247_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_1240_, v_x_46709__boxed_1245_, v_x_46710__boxed_1246_, v_x_1243_, v_x_1244_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(lean_object* v_x_1248_, lean_object* v_x_1249_, lean_object* v_x_1250_){
_start:
{
uint64_t v___y_1252_; 
if (lean_obj_tag(v_x_1249_) == 0)
{
uint64_t v___x_1256_; 
v___x_1256_ = 1723ULL;
v___y_1252_ = v___x_1256_;
goto v___jp_1251_;
}
else
{
uint64_t v_hash_1257_; 
v_hash_1257_ = lean_ctor_get_uint64(v_x_1249_, sizeof(void*)*2);
v___y_1252_ = v_hash_1257_;
goto v___jp_1251_;
}
v___jp_1251_:
{
size_t v___x_1253_; size_t v___x_1254_; lean_object* v___x_1255_; 
v___x_1253_ = lean_uint64_to_usize(v___y_1252_);
v___x_1254_ = ((size_t)1ULL);
v___x_1255_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_1248_, v___x_1253_, v___x_1254_, v_x_1249_, v_x_1250_);
return v___x_1255_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(lean_object* v_a_1258_, lean_object* v___x_1259_, lean_object* v_fvarId_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v_fvarId_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v_fvarId_1266_ = lean_ctor_get(v_a_1258_, 0);
v___x_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1267_, 0, v_fvarId_1260_);
v___x_1268_ = lean_mk_empty_array_with_capacity(v___x_1259_);
v___x_1269_ = lean_array_push(v___x_1268_, v___x_1267_);
lean_inc(v_fvarId_1266_);
v___x_1270_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1270_, 0, v_fvarId_1266_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
v___x_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed(lean_object* v_a_1272_, lean_object* v___x_1273_, lean_object* v_fvarId_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(v_a_1272_, v___x_1273_, v_fvarId_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec(v___x_1273_);
lean_dec_ref(v_a_1272_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(lean_object* v_a_1281_, lean_object* v_b_1282_){
_start:
{
lean_object* v_array_1283_; lean_object* v_start_1284_; lean_object* v_stop_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1298_; 
v_array_1283_ = lean_ctor_get(v_a_1281_, 0);
v_start_1284_ = lean_ctor_get(v_a_1281_, 1);
v_stop_1285_ = lean_ctor_get(v_a_1281_, 2);
v_isSharedCheck_1298_ = !lean_is_exclusive(v_a_1281_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1287_ = v_a_1281_;
v_isShared_1288_ = v_isSharedCheck_1298_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_stop_1285_);
lean_inc(v_start_1284_);
lean_inc(v_array_1283_);
lean_dec(v_a_1281_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1298_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
uint8_t v___x_1289_; 
v___x_1289_ = lean_nat_dec_lt(v_start_1284_, v_stop_1285_);
if (v___x_1289_ == 0)
{
lean_del_object(v___x_1287_);
lean_dec(v_stop_1285_);
lean_dec(v_start_1284_);
lean_dec_ref(v_array_1283_);
return v_b_1282_;
}
else
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
v___x_1290_ = lean_unsigned_to_nat(1u);
v___x_1291_ = lean_nat_add(v_start_1284_, v___x_1290_);
lean_inc_ref(v_array_1283_);
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 1, v___x_1291_);
v___x_1293_ = v___x_1287_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_array_1283_);
lean_ctor_set(v_reuseFailAlloc_1297_, 1, v___x_1291_);
lean_ctor_set(v_reuseFailAlloc_1297_, 2, v_stop_1285_);
v___x_1293_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = lean_array_fget(v_array_1283_, v_start_1284_);
lean_dec(v_start_1284_);
lean_dec_ref(v_array_1283_);
v___x_1295_ = lean_array_push(v_b_1282_, v___x_1294_);
v_a_1281_ = v___x_1293_;
v_b_1282_ = v___x_1295_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(lean_object* v_as_1299_, size_t v_sz_1300_, size_t v_i_1301_, lean_object* v_b_1302_, lean_object* v___y_1303_){
_start:
{
uint8_t v___x_1305_; 
v___x_1305_ = lean_usize_dec_lt(v_i_1301_, v_sz_1300_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; 
v___x_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1306_, 0, v_b_1302_);
return v___x_1306_;
}
else
{
lean_object* v_array_1307_; lean_object* v_start_1308_; lean_object* v_stop_1309_; uint8_t v___x_1310_; 
v_array_1307_ = lean_ctor_get(v_b_1302_, 0);
v_start_1308_ = lean_ctor_get(v_b_1302_, 1);
v_stop_1309_ = lean_ctor_get(v_b_1302_, 2);
v___x_1310_ = lean_nat_dec_lt(v_start_1308_, v_stop_1309_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; 
v___x_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1311_, 0, v_b_1302_);
return v___x_1311_;
}
else
{
lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1344_; 
lean_inc(v_stop_1309_);
lean_inc(v_start_1308_);
lean_inc_ref(v_array_1307_);
v_isSharedCheck_1344_ = !lean_is_exclusive(v_b_1302_);
if (v_isSharedCheck_1344_ == 0)
{
lean_object* v_unused_1345_; lean_object* v_unused_1346_; lean_object* v_unused_1347_; 
v_unused_1345_ = lean_ctor_get(v_b_1302_, 2);
lean_dec(v_unused_1345_);
v_unused_1346_ = lean_ctor_get(v_b_1302_, 1);
lean_dec(v_unused_1346_);
v_unused_1347_ = lean_ctor_get(v_b_1302_, 0);
lean_dec(v_unused_1347_);
v___x_1313_ = v_b_1302_;
v_isShared_1314_ = v_isSharedCheck_1344_;
goto v_resetjp_1312_;
}
else
{
lean_dec(v_b_1302_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1344_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v_a_1315_; lean_object* v_fvarId_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1321_; 
v_a_1315_ = lean_array_uget_borrowed(v_as_1299_, v_i_1301_);
v_fvarId_1316_ = lean_ctor_get(v_a_1315_, 0);
v___x_1317_ = lean_array_fget(v_array_1307_, v_start_1308_);
v___x_1318_ = lean_unsigned_to_nat(1u);
v___x_1319_ = lean_nat_add(v_start_1308_, v___x_1318_);
lean_dec(v_start_1308_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 1, v___x_1319_);
v___x_1321_ = v___x_1313_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_array_1307_);
lean_ctor_set(v_reuseFailAlloc_1343_, 1, v___x_1319_);
lean_ctor_set(v_reuseFailAlloc_1343_, 2, v_stop_1309_);
v___x_1321_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
lean_object* v___x_1322_; lean_object* v_subst_1323_; lean_object* v_used_1324_; lean_object* v_binderRenaming_1325_; lean_object* v_funDeclInfoMap_1326_; uint8_t v_simplified_1327_; lean_object* v_visited_1328_; lean_object* v_inline_1329_; lean_object* v_inlineLocal_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1342_; 
v___x_1322_ = lean_st_ref_take(v___y_1303_);
v_subst_1323_ = lean_ctor_get(v___x_1322_, 0);
v_used_1324_ = lean_ctor_get(v___x_1322_, 1);
v_binderRenaming_1325_ = lean_ctor_get(v___x_1322_, 2);
v_funDeclInfoMap_1326_ = lean_ctor_get(v___x_1322_, 3);
v_simplified_1327_ = lean_ctor_get_uint8(v___x_1322_, sizeof(void*)*7);
v_visited_1328_ = lean_ctor_get(v___x_1322_, 4);
v_inline_1329_ = lean_ctor_get(v___x_1322_, 5);
v_inlineLocal_1330_ = lean_ctor_get(v___x_1322_, 6);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1332_ = v___x_1322_;
v_isShared_1333_ = v_isSharedCheck_1342_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_inlineLocal_1330_);
lean_inc(v_inline_1329_);
lean_inc(v_visited_1328_);
lean_inc(v_funDeclInfoMap_1326_);
lean_inc(v_binderRenaming_1325_);
lean_inc(v_used_1324_);
lean_inc(v_subst_1323_);
lean_dec(v___x_1322_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1342_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1334_; lean_object* v___x_1336_; 
lean_inc(v_fvarId_1316_);
v___x_1334_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_subst_1323_, v_fvarId_1316_, v___x_1317_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 0, v___x_1334_);
v___x_1336_ = v___x_1332_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1334_);
lean_ctor_set(v_reuseFailAlloc_1341_, 1, v_used_1324_);
lean_ctor_set(v_reuseFailAlloc_1341_, 2, v_binderRenaming_1325_);
lean_ctor_set(v_reuseFailAlloc_1341_, 3, v_funDeclInfoMap_1326_);
lean_ctor_set(v_reuseFailAlloc_1341_, 4, v_visited_1328_);
lean_ctor_set(v_reuseFailAlloc_1341_, 5, v_inline_1329_);
lean_ctor_set(v_reuseFailAlloc_1341_, 6, v_inlineLocal_1330_);
lean_ctor_set_uint8(v_reuseFailAlloc_1341_, sizeof(void*)*7, v_simplified_1327_);
v___x_1336_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
lean_object* v___x_1337_; size_t v___x_1338_; size_t v___x_1339_; 
v___x_1337_ = lean_st_ref_put(v___y_1303_, v___x_1336_);
v___x_1338_ = ((size_t)1ULL);
v___x_1339_ = lean_usize_add(v_i_1301_, v___x_1338_);
v_i_1301_ = v___x_1339_;
v_b_1302_ = v___x_1321_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg___boxed(lean_object* v_as_1348_, lean_object* v_sz_1349_, lean_object* v_i_1350_, lean_object* v_b_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
size_t v_sz_boxed_1354_; size_t v_i_boxed_1355_; lean_object* v_res_1356_; 
v_sz_boxed_1354_ = lean_unbox_usize(v_sz_1349_);
lean_dec(v_sz_1349_);
v_i_boxed_1355_ = lean_unbox_usize(v_i_1350_);
lean_dec(v_i_1350_);
v_res_1356_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_as_1348_, v_sz_boxed_1354_, v_i_boxed_1355_, v_b_1351_, v___y_1352_);
lean_dec(v___y_1352_);
lean_dec_ref(v_as_1348_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(lean_object* v_as_1357_, size_t v_i_1358_, size_t v_stop_1359_, lean_object* v_b_1360_, lean_object* v___y_1361_){
_start:
{
uint8_t v___x_1363_; 
v___x_1363_ = lean_usize_dec_eq(v_i_1358_, v_stop_1359_);
if (v___x_1363_ == 0)
{
uint8_t v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1364_ = 0;
v___x_1365_ = lean_array_uget_borrowed(v_as_1357_, v_i_1358_);
v___x_1366_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v___x_1364_, v___x_1365_, v___y_1361_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; size_t v___x_1368_; size_t v___x_1369_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_a_1367_);
lean_dec_ref_known(v___x_1366_, 1);
v___x_1368_ = ((size_t)1ULL);
v___x_1369_ = lean_usize_add(v_i_1358_, v___x_1368_);
v_i_1358_ = v___x_1369_;
v_b_1360_ = v_a_1367_;
goto _start;
}
else
{
return v___x_1366_;
}
}
else
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1371_, 0, v_b_1360_);
return v___x_1371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg___boxed(lean_object* v_as_1372_, lean_object* v_i_1373_, lean_object* v_stop_1374_, lean_object* v_b_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
size_t v_i_boxed_1378_; size_t v_stop_boxed_1379_; lean_object* v_res_1380_; 
v_i_boxed_1378_ = lean_unbox_usize(v_i_1373_);
lean_dec(v_i_1373_);
v_stop_boxed_1379_ = lean_unbox_usize(v_stop_1374_);
lean_dec(v_stop_1374_);
v_res_1380_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v_as_1372_, v_i_boxed_1378_, v_stop_boxed_1379_, v_b_1375_, v___y_1376_);
lean_dec(v___y_1376_);
lean_dec_ref(v_as_1372_);
return v_res_1380_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1381_; 
v___x_1381_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(lean_object* v_msg_1382_){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0);
v___x_1384_ = lean_panic_fn_borrowed(v___x_1383_, v_msg_1382_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___redArg(lean_object* v_as_1385_, size_t v_i_1386_, size_t v_stop_1387_, lean_object* v___y_1388_){
_start:
{
uint8_t v___x_1390_; 
v___x_1390_ = lean_usize_dec_eq(v_i_1386_, v_stop_1387_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; lean_object* v_type_1392_; lean_object* v___x_1393_; 
v___x_1391_ = lean_array_uget_borrowed(v_as_1385_, v_i_1386_);
v_type_1392_ = lean_ctor_get(v___x_1391_, 2);
v___x_1393_ = l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(v_type_1392_, v___y_1388_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; uint8_t v___x_1395_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
v___x_1395_ = lean_unbox(v_a_1394_);
if (v___x_1395_ == 0)
{
size_t v___x_1396_; size_t v___x_1397_; 
lean_dec_ref_known(v___x_1393_, 1);
v___x_1396_ = ((size_t)1ULL);
v___x_1397_ = lean_usize_add(v_i_1386_, v___x_1396_);
v_i_1386_ = v___x_1397_;
goto _start;
}
else
{
return v___x_1393_;
}
}
else
{
return v___x_1393_;
}
}
else
{
uint8_t v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1399_ = 0;
v___x_1400_ = lean_box(v___x_1399_);
v___x_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
return v___x_1401_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___redArg___boxed(lean_object* v_as_1402_, lean_object* v_i_1403_, lean_object* v_stop_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_){
_start:
{
size_t v_i_boxed_1407_; size_t v_stop_boxed_1408_; lean_object* v_res_1409_; 
v_i_boxed_1407_ = lean_unbox_usize(v_i_1403_);
lean_dec(v_i_1403_);
v_stop_boxed_1408_ = lean_unbox_usize(v_stop_1404_);
lean_dec(v_stop_1404_);
v_res_1409_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___redArg(v_as_1402_, v_i_boxed_1407_, v_stop_boxed_1408_, v___y_1405_);
lean_dec(v___y_1405_);
lean_dec_ref(v_as_1402_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(lean_object* v_as_1410_, size_t v_i_1411_, size_t v_stop_1412_, lean_object* v_b_1413_, lean_object* v___y_1414_){
_start:
{
uint8_t v___x_1416_; 
v___x_1416_ = lean_usize_dec_eq(v_i_1411_, v_stop_1412_);
if (v___x_1416_ == 0)
{
uint8_t v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1417_ = 0;
v___x_1418_ = lean_array_uget_borrowed(v_as_1410_, v_i_1411_);
v___x_1419_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v___x_1417_, v___x_1418_, v___y_1414_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; size_t v___x_1421_; size_t v___x_1422_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___x_1419_, 1);
v___x_1421_ = ((size_t)1ULL);
v___x_1422_ = lean_usize_add(v_i_1411_, v___x_1421_);
v_i_1411_ = v___x_1422_;
v_b_1413_ = v_a_1420_;
goto _start;
}
else
{
return v___x_1419_;
}
}
else
{
lean_object* v___x_1424_; 
v___x_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1424_, 0, v_b_1413_);
return v___x_1424_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg___boxed(lean_object* v_as_1425_, lean_object* v_i_1426_, lean_object* v_stop_1427_, lean_object* v_b_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_){
_start:
{
size_t v_i_boxed_1431_; size_t v_stop_boxed_1432_; lean_object* v_res_1433_; 
v_i_boxed_1431_ = lean_unbox_usize(v_i_1426_);
lean_dec(v_i_1426_);
v_stop_boxed_1432_ = lean_unbox_usize(v_stop_1427_);
lean_dec(v_stop_1427_);
v_res_1433_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v_as_1425_, v_i_boxed_1431_, v_stop_boxed_1432_, v_b_1428_, v___y_1429_);
lean_dec(v___y_1429_);
lean_dec_ref(v_as_1425_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(lean_object* v_as_1434_, size_t v_i_1435_, size_t v_stop_1436_, lean_object* v_b_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_){
_start:
{
lean_object* v_a_1444_; uint8_t v___x_1448_; 
v___x_1448_ = lean_usize_dec_eq(v_i_1435_, v_stop_1436_);
if (v___x_1448_ == 0)
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; uint8_t v___x_1454_; 
v___x_1449_ = lean_array_uget_borrowed(v_as_1434_, v_i_1435_);
v___x_1450_ = l_Lean_Compiler_LCNF_Alt_getParams(v___x_1449_);
v___x_1451_ = lean_unsigned_to_nat(0u);
v___x_1452_ = lean_array_get_size(v___x_1450_);
v___x_1453_ = lean_box(0);
v___x_1454_ = lean_nat_dec_lt(v___x_1451_, v___x_1452_);
if (v___x_1454_ == 0)
{
lean_dec_ref(v___x_1450_);
v_a_1444_ = v___x_1453_;
goto v___jp_1443_;
}
else
{
size_t v___x_1455_; size_t v___x_1456_; lean_object* v___x_1457_; 
v___x_1455_ = ((size_t)0ULL);
v___x_1456_ = lean_usize_of_nat(v___x_1452_);
v___x_1457_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v___x_1450_, v___x_1455_, v___x_1456_, v___x_1453_, v___y_1439_);
lean_dec_ref(v___x_1450_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_a_1458_);
lean_dec_ref_known(v___x_1457_, 1);
v_a_1444_ = v_a_1458_;
goto v___jp_1443_;
}
else
{
return v___x_1457_;
}
}
}
else
{
lean_object* v___x_1459_; 
v___x_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1459_, 0, v_b_1437_);
return v___x_1459_;
}
v___jp_1443_:
{
size_t v___x_1445_; size_t v___x_1446_; 
v___x_1445_ = ((size_t)1ULL);
v___x_1446_ = lean_usize_add(v_i_1435_, v___x_1445_);
v_i_1435_ = v___x_1446_;
v_b_1437_ = v_a_1444_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg___boxed(lean_object* v_as_1460_, lean_object* v_i_1461_, lean_object* v_stop_1462_, lean_object* v_b_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
size_t v_i_boxed_1469_; size_t v_stop_boxed_1470_; lean_object* v_res_1471_; 
v_i_boxed_1469_ = lean_unbox_usize(v_i_1461_);
lean_dec(v_i_1461_);
v_stop_boxed_1470_ = lean_unbox_usize(v_stop_1462_);
lean_dec(v_stop_1462_);
v_res_1471_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v_as_1460_, v_i_boxed_1469_, v_stop_boxed_1470_, v_b_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec_ref(v_as_1460_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(lean_object* v_as_1472_, size_t v_i_1473_, size_t v_stop_1474_, lean_object* v___y_1475_){
_start:
{
uint8_t v___x_1477_; 
v___x_1477_ = lean_usize_dec_eq(v_i_1473_, v_stop_1474_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; lean_object* v_fvarId_1479_; lean_object* v___x_1480_; 
v___x_1478_ = lean_array_uget_borrowed(v_as_1472_, v_i_1473_);
v_fvarId_1479_ = lean_ctor_get(v___x_1478_, 0);
v___x_1480_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_1479_, v___y_1475_);
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v_a_1481_; uint8_t v___x_1482_; 
v_a_1481_ = lean_ctor_get(v___x_1480_, 0);
v___x_1482_ = lean_unbox(v_a_1481_);
if (v___x_1482_ == 0)
{
size_t v___x_1483_; size_t v___x_1484_; 
lean_dec_ref_known(v___x_1480_, 1);
v___x_1483_ = ((size_t)1ULL);
v___x_1484_ = lean_usize_add(v_i_1473_, v___x_1483_);
v_i_1473_ = v___x_1484_;
goto _start;
}
else
{
return v___x_1480_;
}
}
else
{
return v___x_1480_;
}
}
else
{
uint8_t v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1486_ = 0;
v___x_1487_ = lean_box(v___x_1486_);
v___x_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1487_);
return v___x_1488_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg___boxed(lean_object* v_as_1489_, lean_object* v_i_1490_, lean_object* v_stop_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
size_t v_i_boxed_1494_; size_t v_stop_boxed_1495_; lean_object* v_res_1496_; 
v_i_boxed_1494_ = lean_unbox_usize(v_i_1490_);
lean_dec(v_i_1490_);
v_stop_boxed_1495_ = lean_unbox_usize(v_stop_1491_);
lean_dec(v_stop_1491_);
v_res_1496_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_as_1489_, v_i_boxed_1494_, v_stop_boxed_1495_, v___y_1492_);
lean_dec(v___y_1492_);
lean_dec_ref(v_as_1489_);
return v_res_1496_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simp___closed__3(void){
_start:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1500_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__2));
v___x_1501_ = lean_unsigned_to_nat(9u);
v___x_1502_ = lean_unsigned_to_nat(658u);
v___x_1503_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__1));
v___x_1504_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__0));
v___x_1505_ = l_mkPanicMessageWithDecl(v___x_1504_, v___x_1503_, v___x_1502_, v___x_1501_, v___x_1500_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(lean_object* v___x_1506_, lean_object* v___x_1507_, lean_object* v_fvarId_1508_, lean_object* v_k_1509_, lean_object* v_args_1510_, lean_object* v_result_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
uint8_t v___x_1520_; 
v___x_1520_ = lean_nat_dec_lt(v___x_1506_, v___x_1507_);
if (v___x_1520_ == 0)
{
lean_object* v___x_1521_; 
lean_dec_ref(v_args_1510_);
lean_dec(v___x_1507_);
lean_dec(v___x_1506_);
v___x_1521_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1508_, v_result_1511_, v___y_1513_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v___x_1522_; 
lean_dec_ref_known(v___x_1521_, 1);
lean_inc_ref(v___y_1517_);
v___x_1522_ = l_Lean_Compiler_LCNF_Simp_simp(v_k_1509_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
return v___x_1522_;
}
else
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
lean_dec_ref(v_k_1509_);
v_a_1523_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___x_1521_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1521_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
else
{
uint8_t v___x_1531_; lean_object* v_lower_1533_; lean_object* v_upper_1534_; lean_object* v___x_1561_; uint8_t v___x_1562_; 
v___x_1531_ = 0;
v___x_1561_ = lean_unsigned_to_nat(0u);
v___x_1562_ = lean_nat_dec_le(v___x_1506_, v___x_1561_);
if (v___x_1562_ == 0)
{
v_lower_1533_ = v___x_1506_;
v_upper_1534_ = v___x_1507_;
goto v___jp_1532_;
}
else
{
lean_dec(v___x_1506_);
v_lower_1533_ = v___x_1561_;
v_upper_1534_ = v___x_1507_;
goto v___jp_1532_;
}
v___jp_1532_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1535_ = l_Array_toSubarray___redArg(v_args_1510_, v_lower_1533_, v_upper_1534_);
v___x_1536_ = l_Subarray_copy___redArg(v___x_1535_);
v___x_1537_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1537_, 0, v_result_1511_);
lean_ctor_set(v___x_1537_, 1, v___x_1536_);
v___x_1538_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1));
v___x_1539_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1531_, v___x_1537_, v___x_1538_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v_fvarId_1541_; lean_object* v___x_1542_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v___x_1539_, 1);
v_fvarId_1541_ = lean_ctor_get(v_a_1540_, 0);
lean_inc(v_fvarId_1541_);
v___x_1542_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1508_, v_fvarId_1541_, v___y_1513_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
lean_dec_ref_known(v___x_1542_, 1);
v___x_1543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1543_, 0, v_a_1540_);
lean_ctor_set(v___x_1543_, 1, v_k_1509_);
lean_inc_ref(v___y_1517_);
v___x_1544_ = l_Lean_Compiler_LCNF_Simp_simp(v___x_1543_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
return v___x_1544_;
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
lean_dec(v_a_1540_);
lean_dec_ref(v_k_1509_);
v_a_1545_ = lean_ctor_get(v___x_1542_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1542_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1542_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
lean_dec_ref(v_k_1509_);
lean_dec(v_fvarId_1508_);
v_a_1553_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1539_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1539_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed(lean_object* v___x_1563_, lean_object* v___x_1564_, lean_object* v_fvarId_1565_, lean_object* v_k_1566_, lean_object* v_args_1567_, lean_object* v_result_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(v___x_1563_, v___x_1564_, v_fvarId_1565_, v_k_1566_, v_args_1567_, v_result_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
lean_dec(v___y_1573_);
lean_dec_ref(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(lean_object* v_letDecl_1581_, lean_object* v_k_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_){
_start:
{
lean_object* v_fvarId_1591_; lean_object* v_value_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1928_; 
v_fvarId_1591_ = lean_ctor_get(v_letDecl_1581_, 0);
v_value_1592_ = lean_ctor_get(v_letDecl_1581_, 3);
v_isSharedCheck_1928_ = !lean_is_exclusive(v_letDecl_1581_);
if (v_isSharedCheck_1928_ == 0)
{
lean_object* v_unused_1929_; lean_object* v_unused_1930_; 
v_unused_1929_ = lean_ctor_get(v_letDecl_1581_, 2);
lean_dec(v_unused_1929_);
v_unused_1930_ = lean_ctor_get(v_letDecl_1581_, 1);
lean_dec(v_unused_1930_);
v___x_1594_ = v_letDecl_1581_;
v_isShared_1595_ = v_isSharedCheck_1928_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_value_1592_);
lean_inc(v_fvarId_1591_);
lean_dec(v_letDecl_1581_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1928_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1596_; 
lean_inc(v_value_1592_);
v___x_1596_ = l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f(v_value_1592_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v_a_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1919_; 
v_a_1597_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1599_ = v___x_1596_;
v_isShared_1600_ = v_isSharedCheck_1919_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_a_1597_);
lean_dec(v___x_1596_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1919_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
if (lean_obj_tag(v_a_1597_) == 1)
{
lean_object* v_val_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1914_; 
lean_del_object(v___x_1599_);
v_val_1601_ = lean_ctor_get(v_a_1597_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v_a_1597_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1603_ = v_a_1597_;
v_isShared_1604_ = v_isSharedCheck_1914_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_val_1601_);
lean_dec(v_a_1597_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1914_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
lean_object* v_params_1605_; lean_object* v_value_1606_; lean_object* v_fType_1607_; lean_object* v_args_1608_; uint8_t v_recursive_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___f_1612_; uint8_t v___x_1613_; lean_object* v___y_1615_; lean_object* v___y_1616_; lean_object* v___y_1617_; lean_object* v___y_1618_; lean_object* v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1621_; lean_object* v___y_1622_; lean_object* v___y_1623_; lean_object* v___y_1624_; lean_object* v___y_1625_; lean_object* v___y_1796_; lean_object* v___y_1797_; lean_object* v___y_1798_; lean_object* v___y_1799_; lean_object* v___y_1800_; lean_object* v___y_1801_; lean_object* v___y_1802_; 
v_params_1605_ = lean_ctor_get(v_val_1601_, 0);
v_value_1606_ = lean_ctor_get(v_val_1601_, 1);
v_fType_1607_ = lean_ctor_get(v_val_1601_, 2);
v_args_1608_ = lean_ctor_get(v_val_1601_, 3);
v_recursive_1609_ = lean_ctor_get_uint8(v_val_1601_, sizeof(void*)*4 + 2);
v___x_1610_ = lean_array_get_size(v_args_1608_);
v___x_1611_ = l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity(v_val_1601_);
lean_inc_ref(v_args_1608_);
lean_inc_ref(v_k_1582_);
lean_inc(v_fvarId_1591_);
lean_inc(v___x_1611_);
v___f_1612_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed), 14, 5);
lean_closure_set(v___f_1612_, 0, v___x_1611_);
lean_closure_set(v___f_1612_, 1, v___x_1610_);
lean_closure_set(v___f_1612_, 2, v_fvarId_1591_);
lean_closure_set(v___f_1612_, 3, v_k_1582_);
lean_closure_set(v___f_1612_, 4, v_args_1608_);
v___x_1613_ = lean_nat_dec_lt(v___x_1610_, v___x_1611_);
if (lean_obj_tag(v_value_1592_) == 3)
{
lean_object* v_declName_1894_; lean_object* v___x_1895_; 
v_declName_1894_ = lean_ctor_get(v_value_1592_, 0);
lean_inc_n(v_declName_1894_, 2);
lean_dec_ref_known(v_value_1592_, 3);
v___x_1895_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(v_recursive_1609_, v_declName_1894_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_a_1896_; lean_object* v_declName_1897_; lean_object* v_config_1898_; lean_object* v_inlineStack_1899_; lean_object* v_inlineStackOccs_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1904_; 
v_a_1896_ = lean_ctor_get(v___x_1895_, 0);
lean_inc(v_a_1896_);
lean_dec_ref_known(v___x_1895_, 1);
v_declName_1897_ = lean_ctor_get(v_a_1583_, 0);
v_config_1898_ = lean_ctor_get(v_a_1583_, 1);
v_inlineStack_1899_ = lean_ctor_get(v_a_1583_, 2);
v_inlineStackOccs_1900_ = lean_ctor_get(v_a_1583_, 3);
lean_inc(v_inlineStack_1899_);
lean_inc(v_declName_1894_);
v___x_1901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1901_, 0, v_declName_1894_);
lean_ctor_set(v___x_1901_, 1, v_inlineStack_1899_);
lean_inc_ref(v_inlineStackOccs_1900_);
v___x_1902_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(v_inlineStackOccs_1900_, v_declName_1894_, v_a_1896_);
lean_inc_ref(v_config_1898_);
lean_inc(v_declName_1897_);
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 3, v___x_1902_);
lean_ctor_set(v___x_1594_, 2, v___x_1901_);
lean_ctor_set(v___x_1594_, 1, v_config_1898_);
lean_ctor_set(v___x_1594_, 0, v_declName_1897_);
v___x_1904_ = v___x_1594_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_declName_1897_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v_config_1898_);
lean_ctor_set(v_reuseFailAlloc_1905_, 2, v___x_1901_);
lean_ctor_set(v_reuseFailAlloc_1905_, 3, v___x_1902_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
v___y_1796_ = v___x_1904_;
v___y_1797_ = v_a_1584_;
v___y_1798_ = v_a_1585_;
v___y_1799_ = v_a_1586_;
v___y_1800_ = v_a_1587_;
v___y_1801_ = v_a_1588_;
v___y_1802_ = v_a_1589_;
goto v___jp_1795_;
}
}
else
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
lean_dec(v_declName_1894_);
lean_dec_ref(v___f_1612_);
lean_dec(v___x_1611_);
lean_del_object(v___x_1603_);
lean_dec(v_val_1601_);
lean_del_object(v___x_1594_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v_a_1906_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1895_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1895_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
else
{
lean_del_object(v___x_1594_);
lean_dec(v_value_1592_);
lean_inc_ref(v_a_1583_);
v___y_1796_ = v_a_1583_;
v___y_1797_ = v_a_1584_;
v___y_1798_ = v_a_1585_;
v___y_1799_ = v_a_1586_;
v___y_1800_ = v_a_1587_;
v___y_1801_ = v_a_1588_;
v___y_1802_ = v_a_1589_;
goto v___jp_1795_;
}
v___jp_1614_:
{
lean_object* v___x_1626_; 
lean_inc_ref(v___y_1625_);
v___x_1626_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_1620_, v___y_1621_, v___y_1624_, v___y_1622_, v___y_1617_, v___y_1615_, v___y_1625_, v___y_1619_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_object* v_a_1627_; lean_object* v___x_1628_; 
v_a_1627_ = lean_ctor_get(v___x_1626_, 0);
lean_inc(v_a_1627_);
lean_dec_ref_known(v___x_1626_, 1);
v___x_1628_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1624_);
if (lean_obj_tag(v___x_1628_) == 0)
{
uint8_t v___x_1629_; 
lean_dec_ref_known(v___x_1628_, 1);
v___x_1629_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_a_1627_);
if (v___x_1629_ == 0)
{
uint8_t v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
lean_dec_ref(v___y_1623_);
v___x_1630_ = 0;
v___x_1631_ = lean_mk_empty_array_with_capacity(v___y_1616_);
lean_dec(v___y_1616_);
lean_inc_ref(v___x_1631_);
v___x_1632_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(v___y_1618_, v___x_1631_);
v___x_1633_ = l_Lean_Compiler_LCNF_inferAppType(v___x_1630_, v_fType_1607_, v___x_1632_, v___y_1617_, v___y_1615_, v___y_1625_, v___y_1619_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; lean_object* v___x_1635_; uint8_t v___x_1636_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
lean_inc_n(v_a_1634_, 2);
lean_dec_ref_known(v___x_1633_, 1);
v___x_1635_ = l_Lean_Expr_headBeta(v_a_1634_);
v___x_1636_ = l_Lean_Expr_isForall(v___x_1635_);
lean_dec_ref(v___x_1635_);
if (v___x_1636_ == 0)
{
lean_object* v___x_1637_; 
lean_dec_ref(v___x_1631_);
v___x_1637_ = l_Lean_Compiler_LCNF_mkAuxParam(v___x_1630_, v_a_1634_, v___x_1613_, v___y_1617_, v___y_1615_, v___y_1625_, v___y_1619_);
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v_a_1638_; lean_object* v_fvarId_1639_; lean_object* v___x_1640_; 
v_a_1638_ = lean_ctor_get(v___x_1637_, 0);
lean_inc(v_a_1638_);
lean_dec_ref_known(v___x_1637_, 1);
v_fvarId_1639_ = lean_ctor_get(v_a_1638_, 0);
lean_inc(v_fvarId_1639_);
v___x_1640_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(v___x_1611_, v___x_1610_, v_fvarId_1591_, v_k_1582_, v_args_1608_, v_fvarId_1639_, v___y_1621_, v___y_1624_, v___y_1622_, v___y_1617_, v___y_1615_, v___y_1625_, v___y_1619_);
lean_dec_ref(v___y_1621_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1640_, 1);
v___x_1642_ = lean_unsigned_to_nat(1u);
v___x_1643_ = lean_mk_empty_array_with_capacity(v___x_1642_);
v___x_1644_ = lean_array_push(v___x_1643_, v_a_1638_);
v___x_1645_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1));
v___x_1646_ = l_Lean_Compiler_LCNF_mkAuxJpDecl(v___x_1630_, v___x_1644_, v_a_1641_, v___x_1645_, v___y_1617_, v___y_1615_, v___y_1625_, v___y_1619_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v___f_1648_; lean_object* v___x_1649_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc_n(v_a_1647_, 2);
lean_dec_ref_known(v___x_1646_, 1);
v___f_1648_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed), 8, 2);
lean_closure_set(v___f_1648_, 0, v_a_1647_);
lean_closure_set(v___f_1648_, 1, v___x_1642_);
v___x_1649_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v___x_1630_, v_a_1627_, v___f_1648_, v___y_1617_, v___y_1615_, v___y_1625_, v___y_1619_);
if (lean_obj_tag(v___x_1649_) == 0)
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1661_; 
v_a_1650_ = lean_ctor_get(v___x_1649_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1649_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1652_ = v___x_1649_;
v_isShared_1653_ = v_isSharedCheck_1661_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1649_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1661_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1654_; lean_object* v___x_1656_; 
v___x_1654_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1654_, 0, v_a_1647_);
lean_ctor_set(v___x_1654_, 1, v_a_1650_);
if (v_isShared_1604_ == 0)
{
lean_ctor_set(v___x_1603_, 0, v___x_1654_);
v___x_1656_ = v___x_1603_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v___x_1654_);
v___x_1656_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
lean_object* v___x_1658_; 
if (v_isShared_1653_ == 0)
{
lean_ctor_set(v___x_1652_, 0, v___x_1656_);
v___x_1658_ = v___x_1652_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v___x_1656_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec(v_a_1647_);
lean_del_object(v___x_1603_);
v_a_1662_ = lean_ctor_get(v___x_1649_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1649_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1649_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1649_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
else
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1677_; 
lean_dec(v_a_1627_);
lean_del_object(v___x_1603_);
v_a_1670_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1672_ = v___x_1646_;
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1646_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1675_; 
if (v_isShared_1673_ == 0)
{
v___x_1675_ = v___x_1672_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_a_1670_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
else
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
lean_dec(v_a_1638_);
lean_dec(v_a_1627_);
lean_del_object(v___x_1603_);
v_a_1678_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1680_ = v___x_1640_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1640_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_a_1678_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
}
}
else
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
lean_dec(v_a_1627_);
lean_dec_ref(v___y_1621_);
lean_dec(v___x_1611_);
lean_dec_ref(v_args_1608_);
lean_del_object(v___x_1603_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v_a_1686_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1688_ = v___x_1637_;
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1637_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1689_ == 0)
{
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
}
else
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
lean_dec(v_a_1634_);
v___x_1694_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4));
v___x_1695_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v___x_1631_, v_a_1627_, v___x_1694_, v___y_1617_, v___y_1615_, v___y_1625_, v___y_1619_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; lean_object* v___x_1697_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref_known(v___x_1695_, 1);
v___x_1697_ = l_Lean_Compiler_LCNF_FunDecl_etaExpand(v_a_1696_, v___y_1617_, v___y_1615_, v___y_1625_, v___y_1619_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v_fvarId_1699_; lean_object* v___x_1700_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
lean_inc(v_a_1698_);
lean_dec_ref_known(v___x_1697_, 1);
v_fvarId_1699_ = lean_ctor_get(v_a_1698_, 0);
lean_inc(v_fvarId_1699_);
v___x_1700_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(v___x_1611_, v___x_1610_, v_fvarId_1591_, v_k_1582_, v_args_1608_, v_fvarId_1699_, v___y_1621_, v___y_1624_, v___y_1622_, v___y_1617_, v___y_1615_, v___y_1625_, v___y_1619_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_object* v_a_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v_a_1701_ = lean_ctor_get(v___x_1700_, 0);
lean_inc(v_a_1701_);
lean_dec_ref_known(v___x_1700_, 1);
v___x_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1702_, 0, v_a_1698_);
v___x_1703_ = lean_unsigned_to_nat(1u);
v___x_1704_ = lean_mk_empty_array_with_capacity(v___x_1703_);
v___x_1705_ = lean_array_push(v___x_1704_, v___x_1702_);
v___x_1706_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v___x_1705_, v_a_1701_, v___y_1621_, v___y_1624_, v___y_1622_, v___y_1617_, v___y_1615_, v___y_1625_, v___y_1619_);
lean_dec_ref(v___y_1621_);
lean_dec_ref(v___x_1705_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1717_; 
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1709_ = v___x_1706_;
v_isShared_1710_ = v_isSharedCheck_1717_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1717_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1604_ == 0)
{
lean_ctor_set(v___x_1603_, 0, v_a_1707_);
v___x_1712_ = v___x_1603_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
lean_object* v___x_1714_; 
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v___x_1712_);
v___x_1714_ = v___x_1709_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v___x_1712_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
lean_del_object(v___x_1603_);
v_a_1718_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v___x_1706_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1706_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_a_1718_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
else
{
lean_object* v_a_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1733_; 
lean_dec(v_a_1698_);
lean_dec_ref(v___y_1621_);
lean_del_object(v___x_1603_);
v_a_1726_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1728_ = v___x_1700_;
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_a_1726_);
lean_dec(v___x_1700_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1731_; 
if (v_isShared_1729_ == 0)
{
v___x_1731_ = v___x_1728_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_a_1726_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
}
}
else
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
lean_dec_ref(v___y_1621_);
lean_dec(v___x_1611_);
lean_dec_ref(v_args_1608_);
lean_del_object(v___x_1603_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v_a_1734_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v___x_1697_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1697_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec_ref(v___y_1621_);
lean_dec(v___x_1611_);
lean_dec_ref(v_args_1608_);
lean_del_object(v___x_1603_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v_a_1742_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1695_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1695_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec_ref(v___x_1631_);
lean_dec(v_a_1627_);
lean_dec_ref(v___y_1621_);
lean_dec(v___x_1611_);
lean_dec_ref(v_args_1608_);
lean_del_object(v___x_1603_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v_a_1750_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1633_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1633_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
else
{
uint8_t v___x_1758_; lean_object* v___x_1759_; 
lean_dec_ref(v___y_1621_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1616_);
lean_dec(v___x_1611_);
lean_dec_ref(v_args_1608_);
lean_dec_ref(v_fType_1607_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v___x_1758_ = 0;
v___x_1759_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v___x_1758_, v_a_1627_, v___y_1623_, v___y_1617_, v___y_1615_, v___y_1625_, v___y_1619_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1770_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1762_ = v___x_1759_;
v_isShared_1763_ = v_isSharedCheck_1770_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_a_1760_);
lean_dec(v___x_1759_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1770_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1765_; 
if (v_isShared_1604_ == 0)
{
lean_ctor_set(v___x_1603_, 0, v_a_1760_);
v___x_1765_ = v___x_1603_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1760_);
v___x_1765_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
lean_object* v___x_1767_; 
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 0, v___x_1765_);
v___x_1767_ = v___x_1762_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v___x_1765_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
}
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_del_object(v___x_1603_);
v_a_1771_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1759_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1759_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
lean_dec(v_a_1627_);
lean_dec_ref(v___y_1623_);
lean_dec_ref(v___y_1621_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1616_);
lean_dec(v___x_1611_);
lean_dec_ref(v_args_1608_);
lean_dec_ref(v_fType_1607_);
lean_del_object(v___x_1603_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v_a_1779_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1628_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1628_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
else
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
lean_dec_ref(v___y_1623_);
lean_dec_ref(v___y_1621_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1616_);
lean_dec(v___x_1611_);
lean_dec_ref(v_args_1608_);
lean_dec_ref(v_fType_1607_);
lean_del_object(v___x_1603_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v_a_1787_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v___x_1626_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1626_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
}
v___jp_1795_:
{
if (v___x_1613_ == 0)
{
lean_object* v___f_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
lean_inc_ref_n(v_args_1608_, 2);
lean_inc_ref(v_fType_1607_);
lean_inc_ref(v_value_1606_);
lean_inc_ref(v_params_1605_);
lean_dec(v_val_1601_);
lean_inc_ref(v___y_1798_);
lean_inc_ref(v___y_1796_);
lean_inc(v___y_1797_);
v___f_1803_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed), 10, 4);
lean_closure_set(v___f_1803_, 0, v___y_1797_);
lean_closure_set(v___f_1803_, 1, v___f_1612_);
lean_closure_set(v___f_1803_, 2, v___y_1796_);
lean_closure_set(v___f_1803_, 3, v___y_1798_);
v___x_1804_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_1611_);
v___x_1805_ = l_Array_toSubarray___redArg(v_args_1608_, v___x_1804_, v___x_1611_);
lean_inc_ref(v___x_1805_);
v___x_1806_ = l_Subarray_copy___redArg(v___x_1805_);
v___x_1807_ = l_Lean_Compiler_LCNF_Simp_betaReduce(v_params_1605_, v_value_1606_, v___x_1806_, v___x_1613_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
lean_dec_ref(v_params_1605_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_a_1808_; uint8_t v___x_1809_; 
v_a_1808_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_a_1808_);
lean_dec_ref_known(v___x_1807_, 1);
v___x_1809_ = l_Lean_Compiler_LCNF_Code_isReturnOf___redArg(v_k_1582_, v_fvarId_1591_);
if (v___x_1809_ == 0)
{
v___y_1615_ = v___y_1800_;
v___y_1616_ = v___x_1804_;
v___y_1617_ = v___y_1799_;
v___y_1618_ = v___x_1805_;
v___y_1619_ = v___y_1802_;
v___y_1620_ = v_a_1808_;
v___y_1621_ = v___y_1796_;
v___y_1622_ = v___y_1798_;
v___y_1623_ = v___f_1803_;
v___y_1624_ = v___y_1797_;
v___y_1625_ = v___y_1801_;
goto v___jp_1614_;
}
else
{
uint8_t v___x_1810_; 
v___x_1810_ = lean_nat_dec_eq(v___x_1610_, v___x_1611_);
if (v___x_1810_ == 0)
{
v___y_1615_ = v___y_1800_;
v___y_1616_ = v___x_1804_;
v___y_1617_ = v___y_1799_;
v___y_1618_ = v___x_1805_;
v___y_1619_ = v___y_1802_;
v___y_1620_ = v_a_1808_;
v___y_1621_ = v___y_1796_;
v___y_1622_ = v___y_1798_;
v___y_1623_ = v___f_1803_;
v___y_1624_ = v___y_1797_;
v___y_1625_ = v___y_1801_;
goto v___jp_1614_;
}
else
{
lean_object* v___x_1811_; 
lean_dec_ref(v___x_1805_);
lean_dec_ref(v___f_1803_);
lean_dec(v___x_1611_);
lean_dec_ref(v_args_1608_);
lean_dec_ref(v_fType_1607_);
lean_del_object(v___x_1603_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v___x_1811_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1797_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v___x_1812_; 
lean_dec_ref_known(v___x_1811_, 1);
lean_inc_ref(v___y_1801_);
v___x_1812_ = l_Lean_Compiler_LCNF_Simp_simp(v_a_1808_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
lean_dec_ref(v___y_1796_);
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1821_; 
v_a_1813_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1815_ = v___x_1812_;
v_isShared_1816_ = v_isSharedCheck_1821_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1812_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1821_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1817_; lean_object* v___x_1819_; 
v___x_1817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1817_, 0, v_a_1813_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 0, v___x_1817_);
v___x_1819_ = v___x_1815_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v___x_1817_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
else
{
lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1829_; 
v_a_1822_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1824_ = v___x_1812_;
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v___x_1812_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1825_ == 0)
{
v___x_1827_ = v___x_1824_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_a_1822_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
return v___x_1827_;
}
}
}
}
else
{
lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1837_; 
lean_dec(v_a_1808_);
lean_dec_ref(v___y_1796_);
v_a_1830_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1832_ = v___x_1811_;
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_dec(v___x_1811_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1835_; 
if (v_isShared_1833_ == 0)
{
v___x_1835_ = v___x_1832_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v_a_1830_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
}
}
}
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
lean_dec_ref(v___x_1805_);
lean_dec_ref(v___f_1803_);
lean_dec_ref(v___y_1796_);
lean_dec(v___x_1611_);
lean_dec_ref(v_args_1608_);
lean_dec_ref(v_fType_1607_);
lean_del_object(v___x_1603_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v_a_1838_ = lean_ctor_get(v___x_1807_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1807_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1807_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1838_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
}
else
{
lean_object* v___x_1846_; 
lean_dec_ref(v___f_1612_);
lean_dec(v___x_1611_);
lean_del_object(v___x_1603_);
v___x_1846_ = l_Lean_Compiler_LCNF_Simp_specializePartialApp(v_val_1601_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
if (lean_obj_tag(v___x_1846_) == 0)
{
lean_object* v_a_1847_; lean_object* v_fvarId_1848_; lean_object* v___x_1849_; 
v_a_1847_ = lean_ctor_get(v___x_1846_, 0);
lean_inc(v_a_1847_);
lean_dec_ref_known(v___x_1846_, 1);
v_fvarId_1848_ = lean_ctor_get(v_a_1847_, 0);
lean_inc(v_fvarId_1848_);
v___x_1849_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1591_, v_fvarId_1848_, v___y_1797_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v___x_1850_; 
lean_dec_ref_known(v___x_1849_, 1);
v___x_1850_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1797_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
lean_dec_ref_known(v___x_1850_, 1);
v___x_1851_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1851_, 0, v_a_1847_);
lean_ctor_set(v___x_1851_, 1, v_k_1582_);
lean_inc_ref(v___y_1801_);
v___x_1852_ = l_Lean_Compiler_LCNF_Simp_simp(v___x_1851_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
lean_dec_ref(v___y_1796_);
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1861_; 
v_a_1853_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1855_ = v___x_1852_;
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1852_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1857_; lean_object* v___x_1859_; 
v___x_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1857_, 0, v_a_1853_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v___x_1857_);
v___x_1859_ = v___x_1855_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v___x_1857_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
else
{
lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1869_; 
v_a_1862_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1864_ = v___x_1852_;
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v___x_1852_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1867_; 
if (v_isShared_1865_ == 0)
{
v___x_1867_ = v___x_1864_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1862_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
}
else
{
lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1877_; 
lean_dec(v_a_1847_);
lean_dec_ref(v___y_1796_);
lean_dec_ref(v_k_1582_);
v_a_1870_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1872_ = v___x_1850_;
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_dec(v___x_1850_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1875_; 
if (v_isShared_1873_ == 0)
{
v___x_1875_ = v___x_1872_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1870_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
}
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1885_; 
lean_dec(v_a_1847_);
lean_dec_ref(v___y_1796_);
lean_dec_ref(v_k_1582_);
v_a_1878_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1880_ = v___x_1849_;
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1849_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1883_; 
if (v_isShared_1881_ == 0)
{
v___x_1883_ = v___x_1880_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v_a_1878_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
}
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec_ref(v___y_1796_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v_a_1886_ = lean_ctor_get(v___x_1846_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1846_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1846_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1846_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1915_; lean_object* v___x_1917_; 
lean_dec(v_a_1597_);
lean_del_object(v___x_1594_);
lean_dec(v_value_1592_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v___x_1915_ = lean_box(0);
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 0, v___x_1915_);
v___x_1917_ = v___x_1599_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v___x_1915_);
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
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
lean_del_object(v___x_1594_);
lean_dec(v_value_1592_);
lean_dec(v_fvarId_1591_);
lean_dec_ref(v_k_1582_);
v_a_1920_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1596_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1596_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0(void){
_start:
{
lean_object* v___x_1931_; 
v___x_1931_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(lean_object* v_cases_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_){
_start:
{
lean_object* v_typeName_1944_; lean_object* v_discr_1945_; uint8_t v___x_1946_; uint8_t v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v_subst_1950_; lean_object* v___x_1951_; 
v_typeName_1944_ = lean_ctor_get(v_cases_1932_, 0);
v_discr_1945_ = lean_ctor_get(v_cases_1932_, 2);
v___x_1946_ = 0;
v___x_1947_ = 0;
v___x_1948_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0, &l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0);
v___x_1949_ = lean_st_ref_get(v_a_1934_);
v_subst_1950_ = lean_ctor_get(v___x_1949_, 0);
lean_inc_ref(v_subst_1950_);
lean_dec(v___x_1949_);
lean_inc(v_discr_1945_);
v___x_1951_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_1950_, v_discr_1945_, v___x_1947_);
lean_dec_ref(v_subst_1950_);
if (lean_obj_tag(v___x_1951_) == 0)
{
lean_object* v_fvarId_1952_; lean_object* v___x_1953_; 
v_fvarId_1952_ = lean_ctor_get(v___x_1951_, 0);
lean_inc(v_fvarId_1952_);
lean_dec_ref_known(v___x_1951_, 1);
v___x_1953_ = l_Lean_Compiler_LCNF_Simp_findCtor_x3f___redArg(v_fvarId_1952_, v_a_1935_, v_a_1937_, v_a_1939_);
lean_dec(v_fvarId_1952_);
if (lean_obj_tag(v___x_1953_) == 0)
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_2182_; 
v_a_1954_ = lean_ctor_get(v___x_1953_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_1956_ = v___x_1953_;
v_isShared_1957_ = v_isSharedCheck_2182_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1953_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_2182_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
if (lean_obj_tag(v_a_1954_) == 1)
{
lean_object* v_val_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_2177_; 
v_val_1958_ = lean_ctor_get(v_a_1954_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v_a_1954_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_1960_ = v_a_1954_;
v_isShared_1961_ = v_isSharedCheck_2177_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_val_1958_);
lean_dec(v_a_1954_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_2177_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1962_; lean_object* v_env_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1962_ = lean_st_ref_get(v_a_1939_);
v_env_1963_ = lean_ctor_get(v___x_1962_, 0);
lean_inc_ref(v_env_1963_);
lean_dec(v___x_1962_);
v___x_1964_ = l_Lean_Compiler_LCNF_Simp_CtorInfo_getName(v_val_1958_);
lean_inc(v___x_1964_);
v___x_1965_ = l_Lean_Environment_find_x3f(v_env_1963_, v___x_1964_, v___x_1947_);
if (lean_obj_tag(v___x_1965_) == 1)
{
lean_object* v_val_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_2176_; 
v_val_1966_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_1968_ = v___x_1965_;
v_isShared_1969_ = v_isSharedCheck_2176_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_val_1966_);
lean_dec(v___x_1965_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_2176_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
if (lean_obj_tag(v_val_1966_) == 6)
{
lean_object* v_val_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_2175_; 
v_val_1970_ = lean_ctor_get(v_val_1966_, 0);
v_isSharedCheck_2175_ = !lean_is_exclusive(v_val_1966_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_1972_ = v_val_1966_;
v_isShared_1973_ = v_isSharedCheck_2175_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_val_1970_);
lean_dec(v_val_1966_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_2175_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v_induct_1974_; uint8_t v___x_1975_; 
v_induct_1974_ = lean_ctor_get(v_val_1970_, 1);
lean_inc(v_induct_1974_);
lean_dec_ref(v_val_1970_);
v___x_1975_ = lean_name_eq(v_typeName_1944_, v_induct_1974_);
lean_dec(v_induct_1974_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; lean_object* v___x_1978_; 
lean_del_object(v___x_1972_);
lean_del_object(v___x_1968_);
lean_dec(v___x_1964_);
lean_del_object(v___x_1960_);
lean_dec(v_val_1958_);
lean_dec_ref(v_cases_1932_);
v___x_1976_ = lean_box(0);
if (v_isShared_1957_ == 0)
{
lean_ctor_set(v___x_1956_, 0, v___x_1976_);
v___x_1978_ = v___x_1956_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v___x_1976_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
else
{
lean_object* v___x_1980_; lean_object* v_fst_1981_; lean_object* v_snd_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_2174_; 
lean_del_object(v___x_1956_);
v___x_1980_ = l_Lean_Compiler_LCNF_Cases_extractAlt_x21(v___x_1946_, v_cases_1932_, v___x_1964_);
v_fst_1981_ = lean_ctor_get(v___x_1980_, 0);
v_snd_1982_ = lean_ctor_get(v___x_1980_, 1);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_1984_ = v___x_1980_;
v_isShared_1985_ = v_isSharedCheck_2174_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_snd_1982_);
lean_inc(v_fst_1981_);
lean_dec(v___x_1980_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_2174_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1973_ == 0)
{
lean_ctor_set_tag(v___x_1972_, 4);
lean_ctor_set(v___x_1972_, 0, v_snd_1982_);
v___x_1987_ = v___x_1972_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_snd_1982_);
v___x_1987_ = v_reuseFailAlloc_2173_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1988_; 
v___x_1988_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_1946_, v___x_1987_, v_a_1937_);
lean_dec_ref(v___x_1987_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v___x_1989_; 
lean_dec_ref_known(v___x_1988_, 1);
v___x_1989_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_1934_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_dec_ref_known(v___x_1989_, 1);
if (lean_obj_tag(v_fst_1981_) == 0)
{
if (lean_obj_tag(v_val_1958_) == 0)
{
lean_object* v_params_1990_; lean_object* v_code_1991_; lean_object* v_val_1992_; lean_object* v_args_1993_; lean_object* v_lower_1995_; lean_object* v_upper_1996_; lean_object* v_numParams_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; 
lean_del_object(v___x_1984_);
lean_del_object(v___x_1960_);
v_params_1990_ = lean_ctor_get(v_fst_1981_, 1);
lean_inc_ref(v_params_1990_);
v_code_1991_ = lean_ctor_get(v_fst_1981_, 2);
lean_inc_ref(v_code_1991_);
lean_dec_ref_known(v_fst_1981_, 3);
v_val_1992_ = lean_ctor_get(v_val_1958_, 0);
lean_inc_ref(v_val_1992_);
v_args_1993_ = lean_ctor_get(v_val_1958_, 1);
lean_inc_ref(v_args_1993_);
lean_dec_ref_known(v_val_1958_, 2);
v_numParams_2039_ = lean_ctor_get(v_val_1992_, 3);
lean_inc(v_numParams_2039_);
lean_dec_ref(v_val_1992_);
v___x_2040_ = lean_unsigned_to_nat(0u);
v___x_2041_ = lean_array_get_size(v_args_1993_);
v___x_2042_ = lean_nat_dec_le(v_numParams_2039_, v___x_2040_);
if (v___x_2042_ == 0)
{
v_lower_1995_ = v_numParams_2039_;
v_upper_1996_ = v___x_2041_;
goto v___jp_1994_;
}
else
{
lean_dec(v_numParams_2039_);
v_lower_1995_ = v___x_2040_;
v_upper_1996_ = v___x_2041_;
goto v___jp_1994_;
}
v___jp_1994_:
{
lean_object* v___x_1997_; size_t v_sz_1998_; size_t v___x_1999_; lean_object* v___x_2000_; 
v___x_1997_ = l_Array_toSubarray___redArg(v_args_1993_, v_lower_1995_, v_upper_1996_);
v_sz_1998_ = lean_array_size(v_params_1990_);
v___x_1999_ = ((size_t)0ULL);
v___x_2000_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_params_1990_, v_sz_1998_, v___x_1999_, v___x_1997_, v_a_1934_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v___x_2001_; 
lean_dec_ref_known(v___x_2000_, 1);
lean_inc_ref(v_a_1938_);
v___x_2001_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_1991_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; lean_object* v___x_2003_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
lean_inc(v_a_2002_);
lean_dec_ref_known(v___x_2001_, 1);
v___x_2003_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1946_, v_params_1990_, v_a_1937_);
lean_dec_ref(v_params_1990_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2013_; 
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2013_ == 0)
{
lean_object* v_unused_2014_; 
v_unused_2014_ = lean_ctor_get(v___x_2003_, 0);
lean_dec(v_unused_2014_);
v___x_2005_ = v___x_2003_;
v_isShared_2006_ = v_isSharedCheck_2013_;
goto v_resetjp_2004_;
}
else
{
lean_dec(v___x_2003_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2013_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2008_; 
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 0, v_a_2002_);
v___x_2008_ = v___x_1968_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2002_);
v___x_2008_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
lean_object* v___x_2010_; 
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 0, v___x_2008_);
v___x_2010_ = v___x_2005_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v___x_2008_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
}
}
else
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2022_; 
lean_dec(v_a_2002_);
lean_del_object(v___x_1968_);
v_a_2015_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2017_ = v___x_2003_;
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_a_2015_);
lean_dec(v___x_2003_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_a_2015_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
}
else
{
lean_object* v_a_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2030_; 
lean_dec_ref(v_params_1990_);
lean_del_object(v___x_1968_);
v_a_2023_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2030_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2025_ = v___x_2001_;
v_isShared_2026_ = v_isSharedCheck_2030_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_a_2023_);
lean_dec(v___x_2001_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2030_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2028_; 
if (v_isShared_2026_ == 0)
{
v___x_2028_ = v___x_2025_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_a_2023_);
v___x_2028_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
return v___x_2028_;
}
}
}
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
lean_dec_ref(v_code_1991_);
lean_dec_ref(v_params_1990_);
lean_del_object(v___x_1968_);
v_a_2031_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___x_2000_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2000_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2036_; 
if (v_isShared_2034_ == 0)
{
v___x_2036_ = v___x_2033_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2031_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
}
else
{
lean_object* v_params_2043_; lean_object* v_code_2044_; lean_object* v_n_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2135_; 
v_params_2043_ = lean_ctor_get(v_fst_1981_, 1);
lean_inc_ref(v_params_2043_);
v_code_2044_ = lean_ctor_get(v_fst_1981_, 2);
lean_inc_ref(v_code_2044_);
lean_dec_ref_known(v_fst_1981_, 3);
v_n_2045_ = lean_ctor_get(v_val_1958_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v_val_1958_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2047_ = v_val_1958_;
v_isShared_2048_ = v_isSharedCheck_2135_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_n_2045_);
lean_dec(v_val_1958_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2135_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v_zero_2049_; uint8_t v_isZero_2050_; 
v_zero_2049_ = lean_unsigned_to_nat(0u);
v_isZero_2050_ = lean_nat_dec_eq(v_n_2045_, v_zero_2049_);
if (v_isZero_2050_ == 1)
{
lean_object* v___x_2051_; 
lean_del_object(v___x_2047_);
lean_dec(v_n_2045_);
lean_dec_ref(v_params_2043_);
lean_del_object(v___x_1984_);
lean_del_object(v___x_1960_);
lean_inc_ref(v_a_1938_);
v___x_2051_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2044_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2062_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2054_ = v___x_2051_;
v_isShared_2055_ = v_isSharedCheck_2062_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v___x_2051_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2062_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2057_; 
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 0, v_a_2052_);
v___x_2057_ = v___x_1968_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2052_);
v___x_2057_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
lean_object* v___x_2059_; 
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 0, v___x_2057_);
v___x_2059_ = v___x_2054_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2057_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
}
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_del_object(v___x_1968_);
v_a_2063_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2051_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2051_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
else
{
lean_object* v_one_2071_; lean_object* v_n_2072_; lean_object* v___x_2074_; 
v_one_2071_ = lean_unsigned_to_nat(1u);
v_n_2072_ = lean_nat_sub(v_n_2045_, v_one_2071_);
lean_dec(v_n_2045_);
if (v_isShared_2048_ == 0)
{
lean_ctor_set_tag(v___x_2047_, 0);
lean_ctor_set(v___x_2047_, 0, v_n_2072_);
v___x_2074_ = v___x_2047_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_n_2072_);
v___x_2074_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
lean_object* v___x_2076_; 
if (v_isShared_1961_ == 0)
{
lean_ctor_set_tag(v___x_1960_, 0);
lean_ctor_set(v___x_1960_, 0, v___x_2074_);
v___x_2076_ = v___x_1960_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2074_);
v___x_2076_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2077_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1));
v___x_2078_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1946_, v___x_2076_, v___x_2077_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_object* v_a_2079_; lean_object* v___x_2080_; lean_object* v_fvarId_2081_; lean_object* v_fvarId_2082_; lean_object* v___x_2083_; 
v_a_2079_ = lean_ctor_get(v___x_2078_, 0);
lean_inc(v_a_2079_);
lean_dec_ref_known(v___x_2078_, 1);
v___x_2080_ = lean_array_get_borrowed(v___x_1948_, v_params_2043_, v_zero_2049_);
v_fvarId_2081_ = lean_ctor_get(v___x_2080_, 0);
v_fvarId_2082_ = lean_ctor_get(v_a_2079_, 0);
lean_inc(v_fvarId_2082_);
lean_inc(v_fvarId_2081_);
v___x_2083_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2081_, v_fvarId_2082_, v_a_1934_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v___x_2084_; 
lean_dec_ref_known(v___x_2083_, 1);
lean_inc_ref(v_a_1938_);
v___x_2084_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2044_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; lean_object* v___x_2086_; 
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
lean_inc(v_a_2085_);
lean_dec_ref_known(v___x_2084_, 1);
v___x_2086_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1946_, v_params_2043_, v_a_1937_);
lean_dec_ref(v_params_2043_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2099_; 
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2099_ == 0)
{
lean_object* v_unused_2100_; 
v_unused_2100_ = lean_ctor_get(v___x_2086_, 0);
lean_dec(v_unused_2100_);
v___x_2088_ = v___x_2086_;
v_isShared_2089_ = v_isSharedCheck_2099_;
goto v_resetjp_2087_;
}
else
{
lean_dec(v___x_2086_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2099_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 1, v_a_2085_);
lean_ctor_set(v___x_1984_, 0, v_a_2079_);
v___x_2091_ = v___x_1984_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_a_2079_);
lean_ctor_set(v_reuseFailAlloc_2098_, 1, v_a_2085_);
v___x_2091_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
lean_object* v___x_2093_; 
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 0, v___x_2091_);
v___x_2093_ = v___x_1968_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v___x_2091_);
v___x_2093_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
lean_object* v___x_2095_; 
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 0, v___x_2093_);
v___x_2095_ = v___x_2088_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v___x_2093_);
v___x_2095_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
return v___x_2095_;
}
}
}
}
}
else
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
lean_dec(v_a_2085_);
lean_dec(v_a_2079_);
lean_del_object(v___x_1984_);
lean_del_object(v___x_1968_);
v_a_2101_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2086_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2086_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
lean_dec(v_a_2079_);
lean_dec_ref(v_params_2043_);
lean_del_object(v___x_1984_);
lean_del_object(v___x_1968_);
v_a_2109_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2084_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2084_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
else
{
lean_object* v_a_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2124_; 
lean_dec(v_a_2079_);
lean_dec_ref(v_code_2044_);
lean_dec_ref(v_params_2043_);
lean_del_object(v___x_1984_);
lean_del_object(v___x_1968_);
v_a_2117_ = lean_ctor_get(v___x_2083_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2119_ = v___x_2083_;
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_a_2117_);
lean_dec(v___x_2083_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2122_; 
if (v_isShared_2120_ == 0)
{
v___x_2122_ = v___x_2119_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2117_);
v___x_2122_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
return v___x_2122_;
}
}
}
}
else
{
lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2132_; 
lean_dec_ref(v_code_2044_);
lean_dec_ref(v_params_2043_);
lean_del_object(v___x_1984_);
lean_del_object(v___x_1968_);
v_a_2125_ = lean_ctor_get(v___x_2078_, 0);
v_isSharedCheck_2132_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2127_ = v___x_2078_;
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2078_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2130_; 
if (v_isShared_2128_ == 0)
{
v___x_2130_ = v___x_2127_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v_a_2125_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
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
lean_object* v_code_2136_; lean_object* v___x_2137_; 
lean_del_object(v___x_1984_);
lean_del_object(v___x_1960_);
lean_dec(v_val_1958_);
v_code_2136_ = lean_ctor_get(v_fst_1981_, 0);
lean_inc_ref(v_code_2136_);
lean_dec_ref_known(v_fst_1981_, 1);
lean_inc_ref(v_a_1938_);
v___x_2137_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2136_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2148_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2140_ = v___x_2137_;
v_isShared_2141_ = v_isSharedCheck_2148_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2137_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2148_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2143_; 
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 0, v_a_2138_);
v___x_2143_ = v___x_1968_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_a_2138_);
v___x_2143_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2145_; 
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 0, v___x_2143_);
v___x_2145_ = v___x_2140_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v___x_2143_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
else
{
lean_object* v_a_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
lean_del_object(v___x_1968_);
v_a_2149_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2151_ = v___x_2137_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_a_2149_);
lean_dec(v___x_2137_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_a_2149_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
}
}
}
else
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2164_; 
lean_del_object(v___x_1984_);
lean_dec(v_fst_1981_);
lean_del_object(v___x_1968_);
lean_del_object(v___x_1960_);
lean_dec(v_val_1958_);
v_a_2157_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2159_ = v___x_1989_;
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_1989_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2160_ == 0)
{
v___x_2162_ = v___x_2159_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_a_2157_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_del_object(v___x_1984_);
lean_dec(v_fst_1981_);
lean_del_object(v___x_1968_);
lean_del_object(v___x_1960_);
lean_dec(v_val_1958_);
v_a_2165_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_1988_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_1988_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
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
lean_del_object(v___x_1968_);
lean_dec(v_val_1966_);
lean_dec(v___x_1964_);
lean_del_object(v___x_1960_);
lean_dec(v_val_1958_);
lean_del_object(v___x_1956_);
lean_dec_ref(v_cases_1932_);
goto v___jp_1941_;
}
}
}
else
{
lean_dec(v___x_1965_);
lean_dec(v___x_1964_);
lean_del_object(v___x_1960_);
lean_dec(v_val_1958_);
lean_del_object(v___x_1956_);
lean_dec_ref(v_cases_1932_);
goto v___jp_1941_;
}
}
}
else
{
lean_object* v___x_2178_; lean_object* v___x_2180_; 
lean_dec(v_a_1954_);
lean_dec_ref(v_cases_1932_);
v___x_2178_ = lean_box(0);
if (v_isShared_1957_ == 0)
{
lean_ctor_set(v___x_1956_, 0, v___x_2178_);
v___x_2180_ = v___x_1956_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2178_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
else
{
lean_object* v_a_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2190_; 
lean_dec_ref(v_cases_1932_);
v_a_2183_ = lean_ctor_get(v___x_1953_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2185_ = v___x_1953_;
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_a_2183_);
lean_dec(v___x_1953_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2188_; 
if (v_isShared_2186_ == 0)
{
v___x_2188_ = v___x_2185_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2183_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
}
else
{
lean_object* v___x_2191_; 
lean_dec_ref(v_cases_1932_);
v___x_2191_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_1946_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_object* v_a_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2200_; 
v_a_2192_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2194_ = v___x_2191_;
v_isShared_2195_ = v_isSharedCheck_2200_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_a_2192_);
lean_dec(v___x_2191_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2200_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2196_; lean_object* v___x_2198_; 
v___x_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2196_, 0, v_a_2192_);
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 0, v___x_2196_);
v___x_2198_ = v___x_2194_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v___x_2196_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
}
else
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
v_a_2201_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2203_ = v___x_2191_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2191_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_a_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
}
v___jp_1941_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = lean_box(0);
v___x_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
return v___x_1943_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(lean_object* v_fvarId_2209_, lean_object* v_i_2210_, lean_object* v_as_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_){
_start:
{
lean_object* v___x_2220_; uint8_t v___x_2221_; 
v___x_2220_ = lean_array_get_size(v_as_2211_);
v___x_2221_ = lean_nat_dec_lt(v_i_2210_, v___x_2220_);
if (v___x_2221_ == 0)
{
lean_object* v___x_2222_; 
lean_dec(v_i_2210_);
lean_dec(v_fvarId_2209_);
v___x_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2222_, 0, v_as_2211_);
return v___x_2222_;
}
else
{
lean_object* v_a_2223_; lean_object* v_a_2225_; 
v_a_2223_ = lean_array_fget_borrowed(v_as_2211_, v_i_2210_);
if (lean_obj_tag(v_a_2223_) == 0)
{
lean_object* v_ctorName_2236_; lean_object* v_params_2237_; lean_object* v_code_2238_; uint8_t v___x_2261_; uint8_t v_a_2263_; lean_object* v___x_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; 
v_ctorName_2236_ = lean_ctor_get(v_a_2223_, 0);
v_params_2237_ = lean_ctor_get(v_a_2223_, 1);
v_code_2238_ = lean_ctor_get(v_a_2223_, 2);
v___x_2261_ = 0;
v___x_2294_ = lean_unsigned_to_nat(0u);
v___x_2295_ = lean_array_get_size(v_params_2237_);
v___x_2296_ = lean_nat_dec_lt(v___x_2294_, v___x_2295_);
if (v___x_2296_ == 0)
{
v_a_2263_ = v___x_2296_;
goto v___jp_2262_;
}
else
{
if (v___x_2296_ == 0)
{
v_a_2263_ = v___x_2296_;
goto v___jp_2262_;
}
else
{
size_t v___x_2297_; size_t v___x_2298_; lean_object* v___x_2299_; 
v___x_2297_ = ((size_t)0ULL);
v___x_2298_ = lean_usize_of_nat(v___x_2295_);
v___x_2299_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___redArg(v_params_2237_, v___x_2297_, v___x_2298_, v___y_2218_);
if (lean_obj_tag(v___x_2299_) == 0)
{
lean_object* v_a_2300_; uint8_t v___x_2301_; 
v_a_2300_ = lean_ctor_get(v___x_2299_, 0);
lean_inc(v_a_2300_);
lean_dec_ref_known(v___x_2299_, 1);
v___x_2301_ = lean_unbox(v_a_2300_);
lean_dec(v_a_2300_);
v_a_2263_ = v___x_2301_;
goto v___jp_2262_;
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_dec_ref(v_as_2211_);
lean_dec(v_i_2210_);
lean_dec(v_fvarId_2209_);
v_a_2302_ = lean_ctor_get(v___x_2299_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2299_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2299_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2299_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
}
v___jp_2239_:
{
lean_object* v___x_2240_; 
lean_inc_ref(v_params_2237_);
lean_inc(v_ctorName_2236_);
lean_inc(v_fvarId_2209_);
v___x_2240_ = l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(v_fvarId_2209_, v_ctorName_2236_, v_params_2237_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_object* v_a_2241_; lean_object* v___x_2242_; 
v_a_2241_ = lean_ctor_get(v___x_2240_, 0);
lean_inc(v_a_2241_);
lean_dec_ref_known(v___x_2240_, 1);
lean_inc_ref(v___y_2217_);
lean_inc_ref(v_code_2238_);
v___x_2242_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2238_, v___y_2212_, v___y_2213_, v_a_2241_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
lean_dec(v_a_2241_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; lean_object* v___x_2244_; 
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
lean_inc(v_a_2243_);
lean_dec_ref_known(v___x_2242_, 1);
lean_inc_ref(v_a_2223_);
v___x_2244_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2223_, v_a_2243_);
v_a_2225_ = v___x_2244_;
goto v___jp_2224_;
}
else
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2252_; 
lean_dec_ref(v_as_2211_);
lean_dec(v_i_2210_);
lean_dec(v_fvarId_2209_);
v_a_2245_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2252_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_2247_ = v___x_2242_;
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v___x_2242_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2250_; 
if (v_isShared_2248_ == 0)
{
v___x_2250_ = v___x_2247_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_a_2245_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
}
else
{
lean_object* v_a_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2260_; 
lean_dec_ref(v_as_2211_);
lean_dec(v_i_2210_);
lean_dec(v_fvarId_2209_);
v_a_2253_ = lean_ctor_get(v___x_2240_, 0);
v_isSharedCheck_2260_ = !lean_is_exclusive(v___x_2240_);
if (v_isSharedCheck_2260_ == 0)
{
v___x_2255_ = v___x_2240_;
v_isShared_2256_ = v_isSharedCheck_2260_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_a_2253_);
lean_dec(v___x_2240_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2260_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v___x_2258_; 
if (v_isShared_2256_ == 0)
{
v___x_2258_ = v___x_2255_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v_a_2253_);
v___x_2258_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
return v___x_2258_;
}
}
}
}
v___jp_2262_:
{
if (lean_obj_tag(v_code_2238_) == 6)
{
goto v___jp_2239_;
}
else
{
if (v_a_2263_ == 0)
{
goto v___jp_2239_;
}
else
{
lean_object* v___x_2264_; 
lean_inc_ref(v_code_2238_);
v___x_2264_ = l_Lean_Compiler_LCNF_Code_inferType(v___x_2261_, v_code_2238_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; lean_object* v___x_2266_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
lean_inc(v_a_2265_);
lean_dec_ref_known(v___x_2264_, 1);
v___x_2266_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_2261_, v_code_2238_, v___y_2216_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v___x_2267_; 
lean_dec_ref_known(v___x_2266_, 1);
v___x_2267_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2213_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v___x_2268_; lean_object* v___x_2269_; 
lean_dec_ref_known(v___x_2267_, 1);
v___x_2268_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2268_, 0, v_a_2265_);
lean_inc_ref(v_a_2223_);
v___x_2269_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2223_, v___x_2268_);
v_a_2225_ = v___x_2269_;
goto v___jp_2224_;
}
else
{
lean_object* v_a_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2277_; 
lean_dec(v_a_2265_);
lean_dec_ref(v_as_2211_);
lean_dec(v_i_2210_);
lean_dec(v_fvarId_2209_);
v_a_2270_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2277_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2277_ == 0)
{
v___x_2272_ = v___x_2267_;
v_isShared_2273_ = v_isSharedCheck_2277_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_a_2270_);
lean_dec(v___x_2267_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2277_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
lean_object* v___x_2275_; 
if (v_isShared_2273_ == 0)
{
v___x_2275_ = v___x_2272_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v_a_2270_);
v___x_2275_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
return v___x_2275_;
}
}
}
}
else
{
lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2285_; 
lean_dec(v_a_2265_);
lean_dec_ref(v_as_2211_);
lean_dec(v_i_2210_);
lean_dec(v_fvarId_2209_);
v_a_2278_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2280_ = v___x_2266_;
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2266_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2283_; 
if (v_isShared_2281_ == 0)
{
v___x_2283_ = v___x_2280_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_a_2278_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_dec_ref(v_as_2211_);
lean_dec(v_i_2210_);
lean_dec(v_fvarId_2209_);
v_a_2286_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2264_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2264_);
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
v_reuseFailAlloc_2292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2286_);
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
}
}
else
{
lean_object* v_code_2310_; lean_object* v___x_2311_; 
v_code_2310_ = lean_ctor_get(v_a_2223_, 0);
lean_inc_ref(v___y_2217_);
lean_inc_ref(v_code_2310_);
v___x_2311_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2310_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
if (lean_obj_tag(v___x_2311_) == 0)
{
lean_object* v_a_2312_; lean_object* v___x_2313_; 
v_a_2312_ = lean_ctor_get(v___x_2311_, 0);
lean_inc(v_a_2312_);
lean_dec_ref_known(v___x_2311_, 1);
lean_inc_ref(v_a_2223_);
v___x_2313_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2223_, v_a_2312_);
v_a_2225_ = v___x_2313_;
goto v___jp_2224_;
}
else
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2321_; 
lean_dec_ref(v_as_2211_);
lean_dec(v_i_2210_);
lean_dec(v_fvarId_2209_);
v_a_2314_ = lean_ctor_get(v___x_2311_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2316_ = v___x_2311_;
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2311_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2314_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
v___jp_2224_:
{
size_t v___x_2226_; size_t v___x_2227_; uint8_t v___x_2228_; 
v___x_2226_ = lean_ptr_addr(v_a_2223_);
v___x_2227_ = lean_ptr_addr(v_a_2225_);
v___x_2228_ = lean_usize_dec_eq(v___x_2226_, v___x_2227_);
if (v___x_2228_ == 0)
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2229_ = lean_unsigned_to_nat(1u);
v___x_2230_ = lean_nat_add(v_i_2210_, v___x_2229_);
v___x_2231_ = lean_array_fset(v_as_2211_, v_i_2210_, v_a_2225_);
lean_dec(v_i_2210_);
v_i_2210_ = v___x_2230_;
v_as_2211_ = v___x_2231_;
goto _start;
}
else
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
lean_dec_ref(v_a_2225_);
v___x_2233_ = lean_unsigned_to_nat(1u);
v___x_2234_ = lean_nat_add(v_i_2210_, v___x_2233_);
lean_dec(v_i_2210_);
v_i_2210_ = v___x_2234_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp(lean_object* v_code_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_){
_start:
{
lean_object* v___y_2333_; lean_object* v___y_2334_; uint8_t v___y_2397_; lean_object* v___y_2398_; lean_object* v_decl_2399_; lean_object* v___y_2400_; lean_object* v___y_2401_; lean_object* v___y_2402_; lean_object* v___y_2403_; lean_object* v___y_2404_; lean_object* v___y_2405_; lean_object* v___y_2406_; uint8_t v___y_2448_; lean_object* v___y_2449_; lean_object* v_decl_2450_; lean_object* v___y_2451_; lean_object* v___y_2452_; lean_object* v___y_2453_; lean_object* v___y_2454_; lean_object* v___y_2455_; lean_object* v___y_2456_; lean_object* v___y_2457_; lean_object* v_decl_2469_; lean_object* v_k_2470_; lean_object* v___y_2471_; lean_object* v___y_2472_; lean_object* v___y_2473_; lean_object* v___y_2474_; lean_object* v___y_2475_; lean_object* v___y_2476_; lean_object* v___y_2477_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2747_; uint8_t v___y_2748_; lean_object* v___y_2749_; lean_object* v_decl_2750_; lean_object* v_fvarId_2751_; lean_object* v_type_2752_; lean_object* v_value_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; lean_object* v___y_2756_; lean_object* v___y_2757_; lean_object* v___y_2758_; lean_object* v___y_2759_; lean_object* v___y_2760_; lean_object* v___y_2794_; lean_object* v___y_2795_; uint8_t v___y_2796_; lean_object* v___y_2797_; lean_object* v___y_2798_; lean_object* v___y_2799_; lean_object* v___y_2800_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2804_; lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v___y_2845_; lean_object* v___y_2856_; lean_object* v___y_2857_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2880_; lean_object* v___y_2881_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v___y_2884_; lean_object* v___y_2900_; lean_object* v___y_2901_; lean_object* v___y_2902_; lean_object* v___y_2903_; lean_object* v___y_2908_; lean_object* v___y_2909_; lean_object* v___y_2910_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v___y_2914_; lean_object* v___y_2915_; lean_object* v___y_2916_; lean_object* v___y_2917_; lean_object* v___y_2918_; lean_object* v___y_2919_; lean_object* v___y_2920_; lean_object* v___y_2951_; lean_object* v___y_2952_; lean_object* v___y_2971_; lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v___y_2975_; lean_object* v___y_2976_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v_toCold_3218_; lean_object* v_currRecDepth_3219_; lean_object* v_ref_3220_; uint16_t v_optionFlags_3221_; uint8_t v_suppressElabErrors_3222_; uint8_t v_checkDeprecated_3223_; uint8_t v_isRecordingDeps_3224_; lean_object* v_maxRecDepth_3254_; lean_object* v___x_3255_; uint8_t v___x_3256_; 
v_toCold_3218_ = lean_ctor_get(v_a_2329_, 0);
v_currRecDepth_3219_ = lean_ctor_get(v_a_2329_, 1);
v_ref_3220_ = lean_ctor_get(v_a_2329_, 2);
v_optionFlags_3221_ = lean_ctor_get_uint16(v_a_2329_, sizeof(void*)*3);
v_suppressElabErrors_3222_ = lean_ctor_get_uint8(v_a_2329_, sizeof(void*)*3 + 2);
v_checkDeprecated_3223_ = lean_ctor_get_uint8(v_a_2329_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3224_ = lean_ctor_get_uint8(v_a_2329_, sizeof(void*)*3 + 4);
v_maxRecDepth_3254_ = lean_ctor_get(v_toCold_3218_, 3);
v___x_3255_ = lean_unsigned_to_nat(0u);
v___x_3256_ = lean_nat_dec_eq(v_maxRecDepth_3254_, v___x_3255_);
if (v___x_3256_ == 0)
{
uint8_t v___x_3257_; 
v___x_3257_ = lean_nat_dec_eq(v_currRecDepth_3219_, v_maxRecDepth_3254_);
if (v___x_3257_ == 0)
{
lean_inc(v_ref_3220_);
lean_inc(v_currRecDepth_3219_);
lean_inc_ref(v_toCold_3218_);
lean_dec_ref(v_a_2329_);
goto v___jp_3225_;
}
else
{
lean_object* v___x_3258_; 
lean_dec_ref(v_code_2323_);
v___x_3258_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_box(0), v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_, v_a_2329_, v_a_2330_);
lean_dec_ref(v_a_2329_);
return v___x_3258_;
}
}
else
{
lean_inc(v_ref_3220_);
lean_inc(v_currRecDepth_3219_);
lean_inc_ref(v_toCold_3218_);
lean_dec_ref(v_a_2329_);
goto v___jp_3225_;
}
v___jp_2332_:
{
switch(lean_obj_tag(v_code_2323_))
{
case 1:
{
lean_object* v_decl_2335_; lean_object* v_k_2336_; size_t v___x_2337_; size_t v___x_2338_; uint8_t v___x_2339_; 
v_decl_2335_ = lean_ctor_get(v_code_2323_, 0);
v_k_2336_ = lean_ctor_get(v_code_2323_, 1);
v___x_2337_ = lean_ptr_addr(v_k_2336_);
v___x_2338_ = lean_ptr_addr(v___y_2334_);
v___x_2339_ = lean_usize_dec_eq(v___x_2337_, v___x_2338_);
if (v___x_2339_ == 0)
{
lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2347_; 
v_isSharedCheck_2347_ = !lean_is_exclusive(v_code_2323_);
if (v_isSharedCheck_2347_ == 0)
{
lean_object* v_unused_2348_; lean_object* v_unused_2349_; 
v_unused_2348_ = lean_ctor_get(v_code_2323_, 1);
lean_dec(v_unused_2348_);
v_unused_2349_ = lean_ctor_get(v_code_2323_, 0);
lean_dec(v_unused_2349_);
v___x_2341_ = v_code_2323_;
v_isShared_2342_ = v_isSharedCheck_2347_;
goto v_resetjp_2340_;
}
else
{
lean_dec(v_code_2323_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2347_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 1, v___y_2334_);
lean_ctor_set(v___x_2341_, 0, v___y_2333_);
v___x_2344_ = v___x_2341_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v___y_2333_);
lean_ctor_set(v_reuseFailAlloc_2346_, 1, v___y_2334_);
v___x_2344_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
lean_object* v___x_2345_; 
v___x_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2344_);
return v___x_2345_;
}
}
}
else
{
size_t v___x_2350_; size_t v___x_2351_; uint8_t v___x_2352_; 
v___x_2350_ = lean_ptr_addr(v_decl_2335_);
v___x_2351_ = lean_ptr_addr(v___y_2333_);
v___x_2352_ = lean_usize_dec_eq(v___x_2350_, v___x_2351_);
if (v___x_2352_ == 0)
{
lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2360_; 
v_isSharedCheck_2360_ = !lean_is_exclusive(v_code_2323_);
if (v_isSharedCheck_2360_ == 0)
{
lean_object* v_unused_2361_; lean_object* v_unused_2362_; 
v_unused_2361_ = lean_ctor_get(v_code_2323_, 1);
lean_dec(v_unused_2361_);
v_unused_2362_ = lean_ctor_get(v_code_2323_, 0);
lean_dec(v_unused_2362_);
v___x_2354_ = v_code_2323_;
v_isShared_2355_ = v_isSharedCheck_2360_;
goto v_resetjp_2353_;
}
else
{
lean_dec(v_code_2323_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2360_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 1, v___y_2334_);
lean_ctor_set(v___x_2354_, 0, v___y_2333_);
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v___y_2333_);
lean_ctor_set(v_reuseFailAlloc_2359_, 1, v___y_2334_);
v___x_2357_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
lean_object* v___x_2358_; 
v___x_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2357_);
return v___x_2358_;
}
}
}
else
{
lean_object* v___x_2363_; 
lean_dec_ref(v___y_2334_);
lean_dec_ref(v___y_2333_);
v___x_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2363_, 0, v_code_2323_);
return v___x_2363_;
}
}
}
case 2:
{
lean_object* v_decl_2364_; lean_object* v_k_2365_; size_t v___x_2366_; size_t v___x_2367_; uint8_t v___x_2368_; 
v_decl_2364_ = lean_ctor_get(v_code_2323_, 0);
v_k_2365_ = lean_ctor_get(v_code_2323_, 1);
v___x_2366_ = lean_ptr_addr(v_k_2365_);
v___x_2367_ = lean_ptr_addr(v___y_2334_);
v___x_2368_ = lean_usize_dec_eq(v___x_2366_, v___x_2367_);
if (v___x_2368_ == 0)
{
lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2376_; 
v_isSharedCheck_2376_ = !lean_is_exclusive(v_code_2323_);
if (v_isSharedCheck_2376_ == 0)
{
lean_object* v_unused_2377_; lean_object* v_unused_2378_; 
v_unused_2377_ = lean_ctor_get(v_code_2323_, 1);
lean_dec(v_unused_2377_);
v_unused_2378_ = lean_ctor_get(v_code_2323_, 0);
lean_dec(v_unused_2378_);
v___x_2370_ = v_code_2323_;
v_isShared_2371_ = v_isSharedCheck_2376_;
goto v_resetjp_2369_;
}
else
{
lean_dec(v_code_2323_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2376_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
lean_ctor_set(v___x_2370_, 1, v___y_2334_);
lean_ctor_set(v___x_2370_, 0, v___y_2333_);
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v___y_2333_);
lean_ctor_set(v_reuseFailAlloc_2375_, 1, v___y_2334_);
v___x_2373_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
lean_object* v___x_2374_; 
v___x_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2373_);
return v___x_2374_;
}
}
}
else
{
size_t v___x_2379_; size_t v___x_2380_; uint8_t v___x_2381_; 
v___x_2379_ = lean_ptr_addr(v_decl_2364_);
v___x_2380_ = lean_ptr_addr(v___y_2333_);
v___x_2381_ = lean_usize_dec_eq(v___x_2379_, v___x_2380_);
if (v___x_2381_ == 0)
{
lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2389_; 
v_isSharedCheck_2389_ = !lean_is_exclusive(v_code_2323_);
if (v_isSharedCheck_2389_ == 0)
{
lean_object* v_unused_2390_; lean_object* v_unused_2391_; 
v_unused_2390_ = lean_ctor_get(v_code_2323_, 1);
lean_dec(v_unused_2390_);
v_unused_2391_ = lean_ctor_get(v_code_2323_, 0);
lean_dec(v_unused_2391_);
v___x_2383_ = v_code_2323_;
v_isShared_2384_ = v_isSharedCheck_2389_;
goto v_resetjp_2382_;
}
else
{
lean_dec(v_code_2323_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2389_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
if (v_isShared_2384_ == 0)
{
lean_ctor_set(v___x_2383_, 1, v___y_2334_);
lean_ctor_set(v___x_2383_, 0, v___y_2333_);
v___x_2386_ = v___x_2383_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v___y_2333_);
lean_ctor_set(v_reuseFailAlloc_2388_, 1, v___y_2334_);
v___x_2386_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
lean_object* v___x_2387_; 
v___x_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2386_);
return v___x_2387_;
}
}
}
else
{
lean_object* v___x_2392_; 
lean_dec_ref(v___y_2334_);
lean_dec_ref(v___y_2333_);
v___x_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2392_, 0, v_code_2323_);
return v___x_2392_;
}
}
}
default: 
{
lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
lean_dec_ref(v___y_2334_);
lean_dec_ref(v___y_2333_);
lean_dec_ref(v_code_2323_);
v___x_2393_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simp___closed__3, &l_Lean_Compiler_LCNF_Simp_simp___closed__3_once, _init_l_Lean_Compiler_LCNF_Simp_simp___closed__3);
v___x_2394_ = l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(v___x_2393_);
v___x_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2394_);
return v___x_2395_;
}
}
}
v___jp_2396_:
{
lean_object* v___x_2407_; 
lean_inc_ref(v___y_2405_);
v___x_2407_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2398_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; lean_object* v_fvarId_2409_; lean_object* v___x_2410_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 1);
v_fvarId_2409_ = lean_ctor_get(v_decl_2399_, 0);
v___x_2410_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_2409_, v___y_2401_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2411_; uint8_t v___x_2412_; 
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
lean_inc(v_a_2411_);
lean_dec_ref_known(v___x_2410_, 1);
v___x_2412_ = lean_unbox(v_a_2411_);
lean_dec(v_a_2411_);
if (v___x_2412_ == 0)
{
lean_object* v___x_2413_; 
lean_dec_ref(v___y_2405_);
lean_dec_ref(v_code_2323_);
v___x_2413_ = l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(v_decl_2399_, v___y_2401_, v___y_2404_);
lean_dec_ref(v_decl_2399_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2420_; 
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2420_ == 0)
{
lean_object* v_unused_2421_; 
v_unused_2421_ = lean_ctor_get(v___x_2413_, 0);
lean_dec(v_unused_2421_);
v___x_2415_ = v___x_2413_;
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
else
{
lean_dec(v___x_2413_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2418_; 
if (v_isShared_2416_ == 0)
{
lean_ctor_set(v___x_2415_, 0, v_a_2408_);
v___x_2418_ = v___x_2415_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_a_2408_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
lean_dec(v_a_2408_);
v_a_2422_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2413_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2413_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
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
else
{
if (v___y_2397_ == 0)
{
lean_dec_ref(v___y_2405_);
v___y_2333_ = v_decl_2399_;
v___y_2334_ = v_a_2408_;
goto v___jp_2332_;
}
else
{
lean_object* v___x_2430_; 
lean_inc_ref(v_decl_2399_);
v___x_2430_ = l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(v_decl_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
lean_dec_ref(v___y_2405_);
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_dec_ref_known(v___x_2430_, 1);
v___y_2333_ = v_decl_2399_;
v___y_2334_ = v_a_2408_;
goto v___jp_2332_;
}
else
{
lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2438_; 
lean_dec(v_a_2408_);
lean_dec_ref(v_decl_2399_);
lean_dec_ref(v_code_2323_);
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2433_ = v___x_2430_;
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2430_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2436_; 
if (v_isShared_2434_ == 0)
{
v___x_2436_ = v___x_2433_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_a_2431_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
}
}
else
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2446_; 
lean_dec(v_a_2408_);
lean_dec_ref(v___y_2405_);
lean_dec_ref(v_decl_2399_);
lean_dec_ref(v_code_2323_);
v_a_2439_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2441_ = v___x_2410_;
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2410_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v___x_2444_; 
if (v_isShared_2442_ == 0)
{
v___x_2444_ = v___x_2441_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v_a_2439_);
v___x_2444_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
return v___x_2444_;
}
}
}
}
else
{
lean_dec_ref(v___y_2405_);
lean_dec_ref(v_decl_2399_);
lean_dec_ref(v_code_2323_);
return v___x_2407_;
}
}
v___jp_2447_:
{
lean_object* v___x_2458_; 
v___x_2458_ = l_Lean_Compiler_LCNF_Simp_simpFunDecl(v_decl_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; 
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2459_);
lean_dec_ref_known(v___x_2458_, 1);
v___y_2397_ = v___y_2448_;
v___y_2398_ = v___y_2449_;
v_decl_2399_ = v_a_2459_;
v___y_2400_ = v___y_2451_;
v___y_2401_ = v___y_2452_;
v___y_2402_ = v___y_2453_;
v___y_2403_ = v___y_2454_;
v___y_2404_ = v___y_2455_;
v___y_2405_ = v___y_2456_;
v___y_2406_ = v___y_2457_;
goto v___jp_2396_;
}
else
{
lean_object* v_a_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2467_; 
lean_dec_ref(v___y_2456_);
lean_dec_ref(v___y_2449_);
lean_dec_ref(v_code_2323_);
v_a_2460_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2462_ = v___x_2458_;
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_a_2460_);
lean_dec(v___x_2458_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2465_; 
if (v_isShared_2463_ == 0)
{
v___x_2465_ = v___x_2462_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_a_2460_);
v___x_2465_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
return v___x_2465_;
}
}
}
}
v___jp_2468_:
{
lean_object* v_fvarId_2478_; lean_object* v_params_2479_; lean_object* v_type_2480_; uint8_t v___x_2481_; lean_object* v___x_2482_; 
v_fvarId_2478_ = lean_ctor_get(v_decl_2469_, 0);
v_params_2479_ = lean_ctor_get(v_decl_2469_, 2);
v_type_2480_ = lean_ctor_get(v_decl_2469_, 3);
v___x_2481_ = 0;
v___x_2482_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(v_fvarId_2478_, v___y_2472_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; uint8_t v___x_2484_; 
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
lean_inc(v_a_2483_);
lean_dec_ref_known(v___x_2482_, 1);
v___x_2484_ = lean_unbox(v_a_2483_);
if (v___x_2484_ == 0)
{
uint8_t v___x_2485_; 
v___x_2485_ = l_Lean_Compiler_LCNF_Code_isFun___redArg(v_code_2323_);
if (v___x_2485_ == 0)
{
uint8_t v___x_2486_; 
v___x_2486_ = lean_unbox(v_a_2483_);
lean_dec(v_a_2483_);
v___y_2448_ = v___x_2486_;
v___y_2449_ = v_k_2470_;
v_decl_2450_ = v_decl_2469_;
v___y_2451_ = v___y_2471_;
v___y_2452_ = v___y_2472_;
v___y_2453_ = v___y_2473_;
v___y_2454_ = v___y_2474_;
v___y_2455_ = v___y_2475_;
v___y_2456_ = v___y_2476_;
v___y_2457_ = v___y_2477_;
goto v___jp_2447_;
}
else
{
uint8_t v___x_2487_; 
lean_inc_ref(v_type_2480_);
v___x_2487_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_2480_, v_params_2479_);
if (v___x_2487_ == 0)
{
uint8_t v___x_2488_; 
v___x_2488_ = lean_unbox(v_a_2483_);
lean_dec(v_a_2483_);
v___y_2448_ = v___x_2488_;
v___y_2449_ = v_k_2470_;
v_decl_2450_ = v_decl_2469_;
v___y_2451_ = v___y_2471_;
v___y_2452_ = v___y_2472_;
v___y_2453_ = v___y_2473_;
v___y_2454_ = v___y_2474_;
v___y_2455_ = v___y_2475_;
v___y_2456_ = v___y_2476_;
v___y_2457_ = v___y_2477_;
goto v___jp_2447_;
}
else
{
lean_object* v___x_2489_; lean_object* v_subst_2490_; uint8_t v___x_2491_; lean_object* v___x_2492_; 
v___x_2489_ = lean_st_ref_get(v___y_2472_);
v_subst_2490_ = lean_ctor_get(v___x_2489_, 0);
lean_inc_ref(v_subst_2490_);
lean_dec(v___x_2489_);
v___x_2491_ = lean_unbox(v_a_2483_);
v___x_2492_ = l_Lean_Compiler_LCNF_normFunDeclImp(v___x_2481_, v___x_2491_, v_decl_2469_, v_subst_2490_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_);
lean_dec_ref(v_subst_2490_);
if (lean_obj_tag(v___x_2492_) == 0)
{
lean_object* v_a_2493_; lean_object* v___x_2494_; 
v_a_2493_ = lean_ctor_get(v___x_2492_, 0);
lean_inc(v_a_2493_);
lean_dec_ref_known(v___x_2492_, 1);
v___x_2494_ = l_Lean_Compiler_LCNF_FunDecl_etaExpand(v_a_2493_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; lean_object* v___x_2496_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_a_2495_);
lean_dec_ref_known(v___x_2494_, 1);
v___x_2496_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2472_);
if (lean_obj_tag(v___x_2496_) == 0)
{
uint8_t v___x_2497_; 
lean_dec_ref_known(v___x_2496_, 1);
v___x_2497_ = lean_unbox(v_a_2483_);
lean_dec(v_a_2483_);
v___y_2448_ = v___x_2497_;
v___y_2449_ = v_k_2470_;
v_decl_2450_ = v_a_2495_;
v___y_2451_ = v___y_2471_;
v___y_2452_ = v___y_2472_;
v___y_2453_ = v___y_2473_;
v___y_2454_ = v___y_2474_;
v___y_2455_ = v___y_2475_;
v___y_2456_ = v___y_2476_;
v___y_2457_ = v___y_2477_;
goto v___jp_2447_;
}
else
{
lean_object* v_a_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2505_; 
lean_dec(v_a_2495_);
lean_dec(v_a_2483_);
lean_dec_ref(v___y_2476_);
lean_dec_ref(v_k_2470_);
lean_dec_ref(v_code_2323_);
v_a_2498_ = lean_ctor_get(v___x_2496_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2500_ = v___x_2496_;
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_a_2498_);
lean_dec(v___x_2496_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2501_ == 0)
{
v___x_2503_ = v___x_2500_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_a_2498_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
}
else
{
lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2513_; 
lean_dec(v_a_2483_);
lean_dec_ref(v___y_2476_);
lean_dec_ref(v_k_2470_);
lean_dec_ref(v_code_2323_);
v_a_2506_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2508_ = v___x_2494_;
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2494_);
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
else
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2521_; 
lean_dec(v_a_2483_);
lean_dec_ref(v___y_2476_);
lean_dec_ref(v_k_2470_);
lean_dec_ref(v_code_2323_);
v_a_2514_ = lean_ctor_get(v___x_2492_, 0);
v_isSharedCheck_2521_ = !lean_is_exclusive(v___x_2492_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2516_ = v___x_2492_;
v_isShared_2517_ = v_isSharedCheck_2521_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v___x_2492_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2521_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
lean_object* v___x_2519_; 
if (v_isShared_2517_ == 0)
{
v___x_2519_ = v___x_2516_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v_a_2514_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
return v___x_2519_;
}
}
}
}
}
}
else
{
uint8_t v___x_2522_; lean_object* v___x_2523_; lean_object* v_subst_2524_; lean_object* v___x_2525_; 
v___x_2522_ = 0;
v___x_2523_ = lean_st_ref_get(v___y_2472_);
v_subst_2524_ = lean_ctor_get(v___x_2523_, 0);
lean_inc_ref(v_subst_2524_);
lean_dec(v___x_2523_);
v___x_2525_ = l_Lean_Compiler_LCNF_normFunDeclImp(v___x_2481_, v___x_2522_, v_decl_2469_, v_subst_2524_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_);
lean_dec_ref(v_subst_2524_);
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_object* v_a_2526_; uint8_t v___x_2527_; 
v_a_2526_ = lean_ctor_get(v___x_2525_, 0);
lean_inc(v_a_2526_);
lean_dec_ref_known(v___x_2525_, 1);
v___x_2527_ = lean_unbox(v_a_2483_);
lean_dec(v_a_2483_);
v___y_2397_ = v___x_2527_;
v___y_2398_ = v_k_2470_;
v_decl_2399_ = v_a_2526_;
v___y_2400_ = v___y_2471_;
v___y_2401_ = v___y_2472_;
v___y_2402_ = v___y_2473_;
v___y_2403_ = v___y_2474_;
v___y_2404_ = v___y_2475_;
v___y_2405_ = v___y_2476_;
v___y_2406_ = v___y_2477_;
goto v___jp_2396_;
}
else
{
lean_object* v_a_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
lean_dec(v_a_2483_);
lean_dec_ref(v___y_2476_);
lean_dec_ref(v_k_2470_);
lean_dec_ref(v_code_2323_);
v_a_2528_ = lean_ctor_get(v___x_2525_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2525_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2530_ = v___x_2525_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_a_2528_);
lean_dec(v___x_2525_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2533_; 
if (v_isShared_2531_ == 0)
{
v___x_2533_ = v___x_2530_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2528_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
}
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2543_; 
lean_dec_ref(v___y_2476_);
lean_dec_ref(v_k_2470_);
lean_dec_ref(v_decl_2469_);
lean_dec_ref(v_code_2323_);
v_a_2536_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2538_ = v___x_2482_;
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2482_);
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
v___jp_2544_:
{
lean_object* v___x_2555_; 
lean_inc_ref(v___y_2550_);
v___x_2555_ = l_Lean_Compiler_LCNF_Simp_ConstantFold_foldConstants(v___y_2550_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2556_; 
v_a_2556_ = lean_ctor_get(v___x_2555_, 0);
lean_inc(v_a_2556_);
lean_dec_ref_known(v___x_2555_, 1);
if (lean_obj_tag(v_a_2556_) == 1)
{
lean_object* v_val_2557_; lean_object* v___x_2558_; 
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v_code_2323_);
v_val_2557_ = lean_ctor_get(v_a_2556_, 0);
lean_inc(v_val_2557_);
lean_dec_ref_known(v_a_2556_, 1);
v___x_2558_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2553_);
if (lean_obj_tag(v___x_2558_) == 0)
{
lean_object* v___x_2559_; 
lean_dec_ref_known(v___x_2558_, 1);
lean_inc_ref(v___y_2554_);
v___x_2559_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2545_, v___y_2547_, v___y_2553_, v___y_2552_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v___x_2561_; 
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
lean_inc(v_a_2560_);
lean_dec_ref_known(v___x_2559_, 1);
v___x_2561_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v_val_2557_, v_a_2560_, v___y_2547_, v___y_2553_, v___y_2552_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
lean_dec_ref(v___y_2554_);
lean_dec(v_val_2557_);
return v___x_2561_;
}
else
{
lean_dec(v_val_2557_);
lean_dec_ref(v___y_2554_);
return v___x_2559_;
}
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
lean_dec(v_val_2557_);
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2545_);
v_a_2562_ = lean_ctor_get(v___x_2558_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2558_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2558_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2558_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
}
else
{
lean_object* v___x_2570_; 
lean_dec(v_a_2556_);
lean_inc_ref(v___y_2550_);
v___x_2570_ = l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(v___y_2550_, v___y_2547_, v___y_2553_, v___y_2552_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_a_2571_);
lean_dec_ref_known(v___x_2570_, 1);
if (lean_obj_tag(v_a_2571_) == 1)
{
lean_object* v_val_2572_; lean_object* v___x_2573_; 
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v_code_2323_);
v_val_2572_ = lean_ctor_get(v_a_2571_, 0);
lean_inc(v_val_2572_);
lean_dec_ref_known(v_a_2571_, 1);
v___x_2573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2573_, 0, v_val_2572_);
lean_ctor_set(v___x_2573_, 1, v___y_2545_);
v_code_2323_ = v___x_2573_;
v_a_2324_ = v___y_2547_;
v_a_2325_ = v___y_2553_;
v_a_2326_ = v___y_2552_;
v_a_2327_ = v___y_2549_;
v_a_2328_ = v___y_2548_;
v_a_2329_ = v___y_2554_;
v_a_2330_ = v___y_2546_;
goto _start;
}
else
{
lean_object* v_fvarId_2575_; lean_object* v_value_2576_; lean_object* v___x_2577_; 
lean_dec(v_a_2571_);
v_fvarId_2575_ = lean_ctor_get(v___y_2550_, 0);
v_value_2576_ = lean_ctor_get(v___y_2550_, 3);
v___x_2577_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_2576_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v_a_2578_; 
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
lean_inc(v_a_2578_);
lean_dec_ref_known(v___x_2577_, 1);
if (lean_obj_tag(v_a_2578_) == 1)
{
lean_object* v_val_2579_; lean_object* v___x_2580_; 
lean_dec_ref(v___y_2551_);
lean_dec_ref(v_code_2323_);
v_val_2579_ = lean_ctor_get(v_a_2578_, 0);
lean_inc(v_val_2579_);
lean_dec_ref_known(v_a_2578_, 1);
lean_inc(v_fvarId_2575_);
v___x_2580_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2575_, v_val_2579_, v___y_2553_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
if (lean_obj_tag(v___x_2580_) == 0)
{
lean_object* v___x_2581_; 
lean_dec_ref_known(v___x_2580_, 1);
v___x_2581_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2550_, v___y_2553_, v___y_2548_);
lean_dec_ref(v___y_2550_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_dec_ref_known(v___x_2581_, 1);
v_code_2323_ = v___y_2545_;
v_a_2324_ = v___y_2547_;
v_a_2325_ = v___y_2553_;
v_a_2326_ = v___y_2552_;
v_a_2327_ = v___y_2549_;
v_a_2328_ = v___y_2548_;
v_a_2329_ = v___y_2554_;
v_a_2330_ = v___y_2546_;
goto _start;
}
else
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2590_; 
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2545_);
v_a_2583_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2590_ == 0)
{
v___x_2585_ = v___x_2581_;
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2581_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2588_; 
if (v_isShared_2586_ == 0)
{
v___x_2588_ = v___x_2585_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v_a_2583_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
}
}
else
{
lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2545_);
v_a_2591_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2593_ = v___x_2580_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v___x_2580_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2591_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
else
{
lean_object* v___x_2599_; 
lean_dec(v_a_2578_);
lean_inc_ref(v___y_2545_);
lean_inc_ref(v___y_2550_);
v___x_2599_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(v___y_2550_, v___y_2545_, v___y_2547_, v___y_2553_, v___y_2552_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v_a_2600_; 
v_a_2600_ = lean_ctor_get(v___x_2599_, 0);
lean_inc(v_a_2600_);
lean_dec_ref_known(v___x_2599_, 1);
if (lean_obj_tag(v_a_2600_) == 1)
{
lean_object* v_val_2601_; lean_object* v___x_2602_; 
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2545_);
lean_dec_ref(v_code_2323_);
v_val_2601_ = lean_ctor_get(v_a_2600_, 0);
lean_inc(v_val_2601_);
lean_dec_ref_known(v_a_2600_, 1);
v___x_2602_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2550_, v___y_2553_, v___y_2548_);
lean_dec_ref(v___y_2550_);
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2609_; 
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2609_ == 0)
{
lean_object* v_unused_2610_; 
v_unused_2610_ = lean_ctor_get(v___x_2602_, 0);
lean_dec(v_unused_2610_);
v___x_2604_ = v___x_2602_;
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
else
{
lean_dec(v___x_2602_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v___x_2607_; 
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 0, v_val_2601_);
v___x_2607_ = v___x_2604_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_val_2601_);
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
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec(v_val_2601_);
v_a_2611_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2602_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2602_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_object* v___x_2619_; 
lean_dec(v_a_2600_);
lean_inc(v_value_2576_);
v___x_2619_ = l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f(v_value_2576_, v___y_2547_, v___y_2553_, v___y_2552_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
if (lean_obj_tag(v___x_2619_) == 0)
{
lean_object* v_a_2620_; 
v_a_2620_ = lean_ctor_get(v___x_2619_, 0);
lean_inc(v_a_2620_);
lean_dec_ref_known(v___x_2619_, 1);
if (lean_obj_tag(v_a_2620_) == 1)
{
lean_object* v_val_2621_; lean_object* v_fst_2622_; lean_object* v_snd_2623_; lean_object* v___x_2624_; 
lean_dec_ref(v___y_2551_);
lean_dec_ref(v_code_2323_);
v_val_2621_ = lean_ctor_get(v_a_2620_, 0);
lean_inc(v_val_2621_);
lean_dec_ref_known(v_a_2620_, 1);
v_fst_2622_ = lean_ctor_get(v_val_2621_, 0);
lean_inc(v_fst_2622_);
v_snd_2623_ = lean_ctor_get(v_val_2621_, 1);
lean_inc(v_snd_2623_);
lean_dec(v_val_2621_);
lean_inc(v_fvarId_2575_);
v___x_2624_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2575_, v_snd_2623_, v___y_2553_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v___x_2625_; 
lean_dec_ref_known(v___x_2624_, 1);
v___x_2625_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2550_, v___y_2553_, v___y_2548_);
lean_dec_ref(v___y_2550_);
if (lean_obj_tag(v___x_2625_) == 0)
{
lean_object* v___x_2626_; 
lean_dec_ref_known(v___x_2625_, 1);
lean_inc_ref(v___y_2554_);
v___x_2626_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2545_, v___y_2547_, v___y_2553_, v___y_2552_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
if (lean_obj_tag(v___x_2626_) == 0)
{
lean_object* v_a_2627_; lean_object* v___x_2628_; 
v_a_2627_ = lean_ctor_get(v___x_2626_, 0);
lean_inc(v_a_2627_);
lean_dec_ref_known(v___x_2626_, 1);
v___x_2628_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v_fst_2622_, v_a_2627_, v___y_2547_, v___y_2553_, v___y_2552_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
lean_dec_ref(v___y_2554_);
lean_dec(v_fst_2622_);
return v___x_2628_;
}
else
{
lean_dec(v_fst_2622_);
lean_dec_ref(v___y_2554_);
return v___x_2626_;
}
}
else
{
lean_object* v_a_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2636_; 
lean_dec(v_fst_2622_);
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2545_);
v_a_2629_ = lean_ctor_get(v___x_2625_, 0);
v_isSharedCheck_2636_ = !lean_is_exclusive(v___x_2625_);
if (v_isSharedCheck_2636_ == 0)
{
v___x_2631_ = v___x_2625_;
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_a_2629_);
lean_dec(v___x_2625_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2634_; 
if (v_isShared_2632_ == 0)
{
v___x_2634_ = v___x_2631_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_a_2629_);
v___x_2634_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
return v___x_2634_;
}
}
}
}
else
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2644_; 
lean_dec(v_fst_2622_);
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2545_);
v_a_2637_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2639_ = v___x_2624_;
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2624_);
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
else
{
lean_object* v___x_2645_; 
lean_dec(v_a_2620_);
lean_inc_ref(v___y_2554_);
lean_inc_ref(v___y_2545_);
v___x_2645_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2545_, v___y_2547_, v___y_2553_, v___y_2552_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
if (lean_obj_tag(v___x_2645_) == 0)
{
lean_object* v_a_2646_; lean_object* v___x_2647_; 
v_a_2646_ = lean_ctor_get(v___x_2645_, 0);
lean_inc(v_a_2646_);
lean_dec_ref_known(v___x_2645_, 1);
v___x_2647_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_2575_, v___y_2553_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; uint8_t v___x_2649_; 
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2648_);
lean_dec_ref_known(v___x_2647_, 1);
v___x_2649_ = lean_unbox(v_a_2648_);
lean_dec(v_a_2648_);
if (v___x_2649_ == 0)
{
lean_object* v___x_2650_; 
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2545_);
lean_dec_ref(v_code_2323_);
v___x_2650_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2550_, v___y_2553_, v___y_2548_);
lean_dec_ref(v___y_2550_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2657_; 
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2657_ == 0)
{
lean_object* v_unused_2658_; 
v_unused_2658_ = lean_ctor_get(v___x_2650_, 0);
lean_dec(v_unused_2658_);
v___x_2652_ = v___x_2650_;
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
else
{
lean_dec(v___x_2650_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2655_; 
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 0, v_a_2646_);
v___x_2655_ = v___x_2652_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_a_2646_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
else
{
lean_object* v_a_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
lean_dec(v_a_2646_);
v_a_2659_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2661_ = v___x_2650_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_a_2659_);
lean_dec(v___x_2650_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2659_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
}
else
{
lean_object* v___x_2667_; 
lean_inc_ref(v___y_2550_);
v___x_2667_ = l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(v___y_2550_, v___y_2547_, v___y_2553_, v___y_2552_, v___y_2549_, v___y_2548_, v___y_2554_, v___y_2546_);
lean_dec_ref(v___y_2554_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2688_; 
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2688_ == 0)
{
lean_object* v_unused_2689_; 
v_unused_2689_ = lean_ctor_get(v___x_2667_, 0);
lean_dec(v_unused_2689_);
v___x_2669_ = v___x_2667_;
v_isShared_2670_ = v_isSharedCheck_2688_;
goto v_resetjp_2668_;
}
else
{
lean_dec(v___x_2667_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2688_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
size_t v___x_2671_; size_t v___x_2672_; uint8_t v___x_2673_; 
v___x_2671_ = lean_ptr_addr(v___y_2545_);
lean_dec_ref(v___y_2545_);
v___x_2672_ = lean_ptr_addr(v_a_2646_);
v___x_2673_ = lean_usize_dec_eq(v___x_2671_, v___x_2672_);
if (v___x_2673_ == 0)
{
lean_object* v___x_2674_; lean_object* v___x_2676_; 
lean_dec_ref(v___y_2551_);
lean_dec_ref(v_code_2323_);
v___x_2674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2674_, 0, v___y_2550_);
lean_ctor_set(v___x_2674_, 1, v_a_2646_);
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 0, v___x_2674_);
v___x_2676_ = v___x_2669_;
goto v_reusejp_2675_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v___x_2674_);
v___x_2676_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2675_;
}
v_reusejp_2675_:
{
return v___x_2676_;
}
}
else
{
size_t v___x_2678_; size_t v___x_2679_; uint8_t v___x_2680_; 
v___x_2678_ = lean_ptr_addr(v___y_2551_);
lean_dec_ref(v___y_2551_);
v___x_2679_ = lean_ptr_addr(v___y_2550_);
v___x_2680_ = lean_usize_dec_eq(v___x_2678_, v___x_2679_);
if (v___x_2680_ == 0)
{
lean_object* v___x_2681_; lean_object* v___x_2683_; 
lean_dec_ref(v_code_2323_);
v___x_2681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2681_, 0, v___y_2550_);
lean_ctor_set(v___x_2681_, 1, v_a_2646_);
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 0, v___x_2681_);
v___x_2683_ = v___x_2669_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v___x_2681_);
v___x_2683_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
return v___x_2683_;
}
}
else
{
lean_object* v___x_2686_; 
lean_dec(v_a_2646_);
lean_dec_ref(v___y_2550_);
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 0, v_code_2323_);
v___x_2686_ = v___x_2669_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_code_2323_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
}
else
{
lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2697_; 
lean_dec(v_a_2646_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2545_);
lean_dec_ref(v_code_2323_);
v_a_2690_ = lean_ctor_get(v___x_2667_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2692_ = v___x_2667_;
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v___x_2667_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2695_; 
if (v_isShared_2693_ == 0)
{
v___x_2695_ = v___x_2692_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_a_2690_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
}
}
else
{
lean_object* v_a_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2705_; 
lean_dec(v_a_2646_);
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2545_);
lean_dec_ref(v_code_2323_);
v_a_2698_ = lean_ctor_get(v___x_2647_, 0);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2700_ = v___x_2647_;
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_a_2698_);
lean_dec(v___x_2647_);
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
v_reuseFailAlloc_2704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v_a_2698_);
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
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2545_);
lean_dec_ref(v_code_2323_);
return v___x_2645_;
}
}
}
else
{
lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2713_; 
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2545_);
lean_dec_ref(v_code_2323_);
v_a_2706_ = lean_ctor_get(v___x_2619_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2619_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2708_ = v___x_2619_;
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v___x_2619_);
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
else
{
lean_object* v_a_2714_; lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2721_; 
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2545_);
lean_dec_ref(v_code_2323_);
v_a_2714_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2716_ = v___x_2599_;
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
else
{
lean_inc(v_a_2714_);
lean_dec(v___x_2599_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
lean_object* v___x_2719_; 
if (v_isShared_2717_ == 0)
{
v___x_2719_ = v___x_2716_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_a_2714_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
}
}
else
{
lean_object* v_a_2722_; lean_object* v___x_2724_; uint8_t v_isShared_2725_; uint8_t v_isSharedCheck_2729_; 
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2545_);
lean_dec_ref(v_code_2323_);
v_a_2722_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2729_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2729_ == 0)
{
v___x_2724_ = v___x_2577_;
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
else
{
lean_inc(v_a_2722_);
lean_dec(v___x_2577_);
v___x_2724_ = lean_box(0);
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
v_resetjp_2723_:
{
lean_object* v___x_2727_; 
if (v_isShared_2725_ == 0)
{
v___x_2727_ = v___x_2724_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v_a_2722_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
}
}
}
else
{
lean_object* v_a_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2737_; 
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2545_);
lean_dec_ref(v_code_2323_);
v_a_2730_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2737_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2737_ == 0)
{
v___x_2732_ = v___x_2570_;
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_a_2730_);
lean_dec(v___x_2570_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v___x_2735_; 
if (v_isShared_2733_ == 0)
{
v___x_2735_ = v___x_2732_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v_a_2730_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
return v___x_2735_;
}
}
}
}
}
else
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2745_; 
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2545_);
lean_dec_ref(v_code_2323_);
v_a_2738_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2740_ = v___x_2555_;
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2555_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2743_; 
if (v_isShared_2741_ == 0)
{
v___x_2743_ = v___x_2740_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_a_2738_);
v___x_2743_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
return v___x_2743_;
}
}
}
}
v___jp_2746_:
{
uint8_t v___x_2761_; 
v___x_2761_ = l_Lean_Expr_isErased(v_type_2752_);
lean_dec_ref(v_type_2752_);
if (v___x_2761_ == 0)
{
lean_dec(v_value_2753_);
lean_dec(v_fvarId_2751_);
v___y_2545_ = v___y_2747_;
v___y_2546_ = v___y_2760_;
v___y_2547_ = v___y_2754_;
v___y_2548_ = v___y_2758_;
v___y_2549_ = v___y_2757_;
v___y_2550_ = v_decl_2750_;
v___y_2551_ = v___y_2749_;
v___y_2552_ = v___y_2756_;
v___y_2553_ = v___y_2755_;
v___y_2554_ = v___y_2759_;
goto v___jp_2544_;
}
else
{
lean_object* v___x_2762_; uint8_t v___x_2763_; 
v___x_2762_ = lean_box(1);
v___x_2763_ = l_Lean_Compiler_LCNF_instBEqLetValue_beq(v___y_2748_, v_value_2753_, v___x_2762_);
lean_dec(v_value_2753_);
if (v___x_2763_ == 0)
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v_subst_2766_; lean_object* v_used_2767_; lean_object* v_binderRenaming_2768_; lean_object* v_funDeclInfoMap_2769_; uint8_t v_simplified_2770_; lean_object* v_visited_2771_; lean_object* v_inline_2772_; lean_object* v_inlineLocal_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2792_; 
lean_dec_ref(v___y_2749_);
lean_dec_ref(v_code_2323_);
v___x_2764_ = lean_box(0);
v___x_2765_ = lean_st_ref_take(v___y_2755_);
v_subst_2766_ = lean_ctor_get(v___x_2765_, 0);
v_used_2767_ = lean_ctor_get(v___x_2765_, 1);
v_binderRenaming_2768_ = lean_ctor_get(v___x_2765_, 2);
v_funDeclInfoMap_2769_ = lean_ctor_get(v___x_2765_, 3);
v_simplified_2770_ = lean_ctor_get_uint8(v___x_2765_, sizeof(void*)*7);
v_visited_2771_ = lean_ctor_get(v___x_2765_, 4);
v_inline_2772_ = lean_ctor_get(v___x_2765_, 5);
v_inlineLocal_2773_ = lean_ctor_get(v___x_2765_, 6);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2775_ = v___x_2765_;
v_isShared_2776_ = v_isSharedCheck_2792_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_inlineLocal_2773_);
lean_inc(v_inline_2772_);
lean_inc(v_visited_2771_);
lean_inc(v_funDeclInfoMap_2769_);
lean_inc(v_binderRenaming_2768_);
lean_inc(v_used_2767_);
lean_inc(v_subst_2766_);
lean_dec(v___x_2765_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2792_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2777_; lean_object* v___x_2779_; 
v___x_2777_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_subst_2766_, v_fvarId_2751_, v___x_2764_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 0, v___x_2777_);
v___x_2779_ = v___x_2775_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v___x_2777_);
lean_ctor_set(v_reuseFailAlloc_2791_, 1, v_used_2767_);
lean_ctor_set(v_reuseFailAlloc_2791_, 2, v_binderRenaming_2768_);
lean_ctor_set(v_reuseFailAlloc_2791_, 3, v_funDeclInfoMap_2769_);
lean_ctor_set(v_reuseFailAlloc_2791_, 4, v_visited_2771_);
lean_ctor_set(v_reuseFailAlloc_2791_, 5, v_inline_2772_);
lean_ctor_set(v_reuseFailAlloc_2791_, 6, v_inlineLocal_2773_);
lean_ctor_set_uint8(v_reuseFailAlloc_2791_, sizeof(void*)*7, v_simplified_2770_);
v___x_2779_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; 
v___x_2780_ = lean_st_ref_put(v___y_2755_, v___x_2779_);
v___x_2781_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_decl_2750_, v___y_2755_, v___y_2758_);
lean_dec_ref(v_decl_2750_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_dec_ref_known(v___x_2781_, 1);
v_code_2323_ = v___y_2747_;
v_a_2324_ = v___y_2754_;
v_a_2325_ = v___y_2755_;
v_a_2326_ = v___y_2756_;
v_a_2327_ = v___y_2757_;
v_a_2328_ = v___y_2758_;
v_a_2329_ = v___y_2759_;
v_a_2330_ = v___y_2760_;
goto _start;
}
else
{
lean_object* v_a_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2790_; 
lean_dec_ref(v___y_2759_);
lean_dec_ref(v___y_2747_);
v_a_2783_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2785_ = v___x_2781_;
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_a_2783_);
lean_dec(v___x_2781_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2788_; 
if (v_isShared_2786_ == 0)
{
v___x_2788_ = v___x_2785_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_a_2783_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_2751_);
v___y_2545_ = v___y_2747_;
v___y_2546_ = v___y_2760_;
v___y_2547_ = v___y_2754_;
v___y_2548_ = v___y_2758_;
v___y_2549_ = v___y_2757_;
v___y_2550_ = v_decl_2750_;
v___y_2551_ = v___y_2749_;
v___y_2552_ = v___y_2756_;
v___y_2553_ = v___y_2755_;
v___y_2554_ = v___y_2759_;
goto v___jp_2544_;
}
}
}
v___jp_2793_:
{
lean_object* v_fvarId_2805_; lean_object* v_type_2806_; lean_object* v_value_2807_; lean_object* v___x_2808_; 
v_fvarId_2805_ = lean_ctor_get(v___y_2795_, 0);
v_type_2806_ = lean_ctor_get(v___y_2795_, 2);
v_value_2807_ = lean_ctor_get(v___y_2795_, 3);
lean_inc(v_value_2807_);
v___x_2808_ = l_Lean_Compiler_LCNF_Simp_simpValue_x3f___redArg(v_value_2807_, v___y_2798_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v_a_2809_; 
v_a_2809_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_a_2809_);
lean_dec_ref_known(v___x_2808_, 1);
if (lean_obj_tag(v_a_2809_) == 1)
{
lean_object* v_val_2810_; lean_object* v___x_2811_; 
v_val_2810_ = lean_ctor_get(v_a_2809_, 0);
lean_inc(v_val_2810_);
lean_dec_ref_known(v_a_2809_, 1);
v___x_2811_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2799_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v___x_2812_; 
lean_dec_ref_known(v___x_2811_, 1);
v___x_2812_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___y_2796_, v___y_2795_, v_val_2810_, v___y_2802_);
if (lean_obj_tag(v___x_2812_) == 0)
{
lean_object* v_a_2813_; lean_object* v_fvarId_2814_; lean_object* v_type_2815_; lean_object* v_value_2816_; 
v_a_2813_ = lean_ctor_get(v___x_2812_, 0);
lean_inc(v_a_2813_);
lean_dec_ref_known(v___x_2812_, 1);
v_fvarId_2814_ = lean_ctor_get(v_a_2813_, 0);
lean_inc(v_fvarId_2814_);
v_type_2815_ = lean_ctor_get(v_a_2813_, 2);
lean_inc_ref(v_type_2815_);
v_value_2816_ = lean_ctor_get(v_a_2813_, 3);
lean_inc(v_value_2816_);
v___y_2747_ = v___y_2794_;
v___y_2748_ = v___y_2796_;
v___y_2749_ = v___y_2797_;
v_decl_2750_ = v_a_2813_;
v_fvarId_2751_ = v_fvarId_2814_;
v_type_2752_ = v_type_2815_;
v_value_2753_ = v_value_2816_;
v___y_2754_ = v___y_2798_;
v___y_2755_ = v___y_2799_;
v___y_2756_ = v___y_2800_;
v___y_2757_ = v___y_2801_;
v___y_2758_ = v___y_2802_;
v___y_2759_ = v___y_2803_;
v___y_2760_ = v___y_2804_;
goto v___jp_2746_;
}
else
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2824_; 
lean_dec_ref(v___y_2803_);
lean_dec_ref(v___y_2797_);
lean_dec_ref(v___y_2794_);
lean_dec_ref(v_code_2323_);
v_a_2817_ = lean_ctor_get(v___x_2812_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2812_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2819_ = v___x_2812_;
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2812_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2822_; 
if (v_isShared_2820_ == 0)
{
v___x_2822_ = v___x_2819_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2817_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec(v_val_2810_);
lean_dec_ref(v___y_2803_);
lean_dec_ref(v___y_2797_);
lean_dec_ref(v___y_2795_);
lean_dec_ref(v___y_2794_);
lean_dec_ref(v_code_2323_);
v_a_2825_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2811_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2811_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
else
{
lean_inc(v_value_2807_);
lean_inc_ref(v_type_2806_);
lean_inc(v_fvarId_2805_);
lean_dec(v_a_2809_);
v___y_2747_ = v___y_2794_;
v___y_2748_ = v___y_2796_;
v___y_2749_ = v___y_2797_;
v_decl_2750_ = v___y_2795_;
v_fvarId_2751_ = v_fvarId_2805_;
v_type_2752_ = v_type_2806_;
v_value_2753_ = v_value_2807_;
v___y_2754_ = v___y_2798_;
v___y_2755_ = v___y_2799_;
v___y_2756_ = v___y_2800_;
v___y_2757_ = v___y_2801_;
v___y_2758_ = v___y_2802_;
v___y_2759_ = v___y_2803_;
v___y_2760_ = v___y_2804_;
goto v___jp_2746_;
}
}
else
{
lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
lean_dec_ref(v___y_2803_);
lean_dec_ref(v___y_2797_);
lean_dec_ref(v___y_2795_);
lean_dec_ref(v___y_2794_);
lean_dec_ref(v_code_2323_);
v_a_2833_ = lean_ctor_get(v___x_2808_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2808_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2808_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v___x_2838_; 
if (v_isShared_2836_ == 0)
{
v___x_2838_ = v___x_2835_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2833_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
}
}
v___jp_2841_:
{
uint8_t v___x_2846_; 
v___x_2846_ = l_Lean_instBEqFVarId_beq(v___y_2845_, v___y_2844_);
lean_dec(v___y_2845_);
if (v___x_2846_ == 0)
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
lean_dec_ref(v___y_2842_);
lean_dec_ref(v_code_2323_);
v___x_2847_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2847_, 0, v___y_2844_);
lean_ctor_set(v___x_2847_, 1, v___y_2843_);
v___x_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2847_);
return v___x_2848_;
}
else
{
size_t v___x_2849_; size_t v___x_2850_; uint8_t v___x_2851_; 
v___x_2849_ = lean_ptr_addr(v___y_2842_);
lean_dec_ref(v___y_2842_);
v___x_2850_ = lean_ptr_addr(v___y_2843_);
v___x_2851_ = lean_usize_dec_eq(v___x_2849_, v___x_2850_);
if (v___x_2851_ == 0)
{
lean_object* v___x_2852_; lean_object* v___x_2853_; 
lean_dec_ref(v_code_2323_);
v___x_2852_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___y_2844_);
lean_ctor_set(v___x_2852_, 1, v___y_2843_);
v___x_2853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2852_);
return v___x_2853_;
}
else
{
lean_object* v___x_2854_; 
lean_dec(v___y_2844_);
lean_dec_ref(v___y_2843_);
v___x_2854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2854_, 0, v_code_2323_);
return v___x_2854_;
}
}
}
v___jp_2855_:
{
lean_object* v___x_2858_; 
v___x_2858_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2857_);
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2866_; 
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2866_ == 0)
{
lean_object* v_unused_2867_; 
v_unused_2867_ = lean_ctor_get(v___x_2858_, 0);
lean_dec(v_unused_2867_);
v___x_2860_ = v___x_2858_;
v_isShared_2861_ = v_isSharedCheck_2866_;
goto v_resetjp_2859_;
}
else
{
lean_dec(v___x_2858_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2866_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2862_; lean_object* v___x_2864_; 
v___x_2862_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2862_, 0, v___y_2856_);
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 0, v___x_2862_);
v___x_2864_ = v___x_2860_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v___x_2862_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
else
{
lean_object* v_a_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2875_; 
lean_dec_ref(v___y_2856_);
v_a_2868_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2870_ = v___x_2858_;
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_a_2868_);
lean_dec(v___x_2858_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v___x_2873_; 
if (v_isShared_2871_ == 0)
{
v___x_2873_ = v___x_2870_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_a_2868_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
return v___x_2873_;
}
}
}
}
v___jp_2876_:
{
lean_object* v___x_2885_; uint8_t v___x_2886_; 
v___x_2885_ = lean_array_get_size(v___y_2883_);
v___x_2886_ = lean_nat_dec_lt(v___y_2881_, v___x_2885_);
lean_dec(v___y_2881_);
if (v___x_2886_ == 0)
{
lean_dec_ref(v___y_2883_);
lean_dec_ref(v___y_2877_);
v___y_2856_ = v___y_2880_;
v___y_2857_ = v___y_2884_;
goto v___jp_2855_;
}
else
{
lean_object* v___x_2887_; size_t v___x_2888_; size_t v___x_2889_; lean_object* v___x_2890_; 
v___x_2887_ = lean_box(0);
v___x_2888_ = ((size_t)0ULL);
v___x_2889_ = lean_usize_of_nat(v___x_2885_);
v___x_2890_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v___y_2883_, v___x_2888_, v___x_2889_, v___x_2887_, v___y_2882_, v___y_2879_, v___y_2877_, v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec_ref(v___y_2883_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_dec_ref_known(v___x_2890_, 1);
v___y_2856_ = v___y_2880_;
v___y_2857_ = v___y_2884_;
goto v___jp_2855_;
}
else
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2898_; 
lean_dec_ref(v___y_2880_);
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2893_ = v___x_2890_;
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2890_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_a_2891_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
}
}
v___jp_2899_:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2904_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2904_, 0, v___y_2900_);
lean_ctor_set(v___x_2904_, 1, v___y_2901_);
lean_ctor_set(v___x_2904_, 2, v___y_2902_);
lean_ctor_set(v___x_2904_, 3, v___y_2903_);
v___x_2905_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2904_);
v___x_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2905_);
return v___x_2906_;
}
v___jp_2907_:
{
lean_object* v___x_2921_; uint8_t v___x_2922_; 
v___x_2921_ = lean_array_get_size(v___y_2915_);
v___x_2922_ = lean_nat_dec_lt(v___y_2914_, v___x_2921_);
if (v___x_2922_ == 0)
{
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec_ref(v___y_2911_);
lean_dec(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v_code_2323_);
v___y_2877_ = v___y_2919_;
v___y_2878_ = v___y_2920_;
v___y_2879_ = v___y_2918_;
v___y_2880_ = v___y_2910_;
v___y_2881_ = v___y_2914_;
v___y_2882_ = v___y_2917_;
v___y_2883_ = v___y_2915_;
v___y_2884_ = v___y_2916_;
goto v___jp_2876_;
}
else
{
if (v___x_2922_ == 0)
{
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec_ref(v___y_2911_);
lean_dec(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v_code_2323_);
v___y_2877_ = v___y_2919_;
v___y_2878_ = v___y_2920_;
v___y_2879_ = v___y_2918_;
v___y_2880_ = v___y_2910_;
v___y_2881_ = v___y_2914_;
v___y_2882_ = v___y_2917_;
v___y_2883_ = v___y_2915_;
v___y_2884_ = v___y_2916_;
goto v___jp_2876_;
}
else
{
size_t v___x_2923_; size_t v___x_2924_; uint8_t v___x_2925_; 
v___x_2923_ = ((size_t)0ULL);
v___x_2924_ = lean_usize_of_nat(v___x_2921_);
v___x_2925_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(v___y_2915_, v___x_2923_, v___x_2924_);
if (v___x_2925_ == 0)
{
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec_ref(v___y_2911_);
lean_dec(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v_code_2323_);
v___y_2877_ = v___y_2919_;
v___y_2878_ = v___y_2920_;
v___y_2879_ = v___y_2918_;
v___y_2880_ = v___y_2910_;
v___y_2881_ = v___y_2914_;
v___y_2882_ = v___y_2917_;
v___y_2883_ = v___y_2915_;
v___y_2884_ = v___y_2916_;
goto v___jp_2876_;
}
else
{
lean_object* v___x_2926_; 
lean_dec_ref(v___y_2919_);
lean_dec(v___y_2914_);
lean_inc(v___y_2913_);
v___x_2926_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v___y_2913_, v___y_2916_);
if (lean_obj_tag(v___x_2926_) == 0)
{
lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2940_; 
v_isSharedCheck_2940_ = !lean_is_exclusive(v___x_2926_);
if (v_isSharedCheck_2940_ == 0)
{
lean_object* v_unused_2941_; 
v_unused_2941_ = lean_ctor_get(v___x_2926_, 0);
lean_dec(v_unused_2941_);
v___x_2928_ = v___x_2926_;
v_isShared_2929_ = v_isSharedCheck_2940_;
goto v_resetjp_2927_;
}
else
{
lean_dec(v___x_2926_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2940_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
size_t v___x_2930_; size_t v___x_2931_; uint8_t v___x_2932_; 
v___x_2930_ = lean_ptr_addr(v___y_2912_);
lean_dec_ref(v___y_2912_);
v___x_2931_ = lean_ptr_addr(v___y_2915_);
v___x_2932_ = lean_usize_dec_eq(v___x_2930_, v___x_2931_);
if (v___x_2932_ == 0)
{
lean_del_object(v___x_2928_);
lean_dec_ref(v___y_2911_);
lean_dec(v___y_2909_);
lean_dec_ref(v_code_2323_);
v___y_2900_ = v___y_2908_;
v___y_2901_ = v___y_2910_;
v___y_2902_ = v___y_2913_;
v___y_2903_ = v___y_2915_;
goto v___jp_2899_;
}
else
{
size_t v___x_2933_; size_t v___x_2934_; uint8_t v___x_2935_; 
v___x_2933_ = lean_ptr_addr(v___y_2911_);
lean_dec_ref(v___y_2911_);
v___x_2934_ = lean_ptr_addr(v___y_2910_);
v___x_2935_ = lean_usize_dec_eq(v___x_2933_, v___x_2934_);
if (v___x_2935_ == 0)
{
lean_del_object(v___x_2928_);
lean_dec(v___y_2909_);
lean_dec_ref(v_code_2323_);
v___y_2900_ = v___y_2908_;
v___y_2901_ = v___y_2910_;
v___y_2902_ = v___y_2913_;
v___y_2903_ = v___y_2915_;
goto v___jp_2899_;
}
else
{
uint8_t v___x_2936_; 
v___x_2936_ = l_Lean_instBEqFVarId_beq(v___y_2909_, v___y_2913_);
lean_dec(v___y_2909_);
if (v___x_2936_ == 0)
{
lean_del_object(v___x_2928_);
lean_dec_ref(v_code_2323_);
v___y_2900_ = v___y_2908_;
v___y_2901_ = v___y_2910_;
v___y_2902_ = v___y_2913_;
v___y_2903_ = v___y_2915_;
goto v___jp_2899_;
}
else
{
lean_object* v___x_2938_; 
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2910_);
lean_dec(v___y_2908_);
if (v_isShared_2929_ == 0)
{
lean_ctor_set(v___x_2928_, 0, v_code_2323_);
v___x_2938_ = v___x_2928_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_code_2323_);
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
}
else
{
lean_object* v_a_2942_; lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2949_; 
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec_ref(v___y_2911_);
lean_dec_ref(v___y_2910_);
lean_dec(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v_code_2323_);
v_a_2942_ = lean_ctor_get(v___x_2926_, 0);
v_isSharedCheck_2949_ = !lean_is_exclusive(v___x_2926_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2944_ = v___x_2926_;
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
else
{
lean_inc(v_a_2942_);
lean_dec(v___x_2926_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v___x_2947_; 
if (v_isShared_2945_ == 0)
{
v___x_2947_ = v___x_2944_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_a_2942_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
return v___x_2947_;
}
}
}
}
}
}
}
v___jp_2950_:
{
lean_object* v___x_2953_; 
v___x_2953_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2952_);
if (lean_obj_tag(v___x_2953_) == 0)
{
lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2960_; 
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2953_);
if (v_isSharedCheck_2960_ == 0)
{
lean_object* v_unused_2961_; 
v_unused_2961_ = lean_ctor_get(v___x_2953_, 0);
lean_dec(v_unused_2961_);
v___x_2955_ = v___x_2953_;
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
else
{
lean_dec(v___x_2953_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2958_; 
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 0, v___y_2951_);
v___x_2958_ = v___x_2955_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___y_2951_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
lean_dec_ref(v___y_2951_);
v_a_2962_ = lean_ctor_get(v___x_2953_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2953_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2953_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2953_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
v___jp_2970_:
{
uint8_t v___x_2977_; 
v___x_2977_ = lean_nat_dec_lt(v___y_2974_, v___y_2973_);
lean_dec(v___y_2974_);
if (v___x_2977_ == 0)
{
lean_dec_ref(v___y_2975_);
lean_dec(v___y_2973_);
v___y_2951_ = v___y_2971_;
v___y_2952_ = v___y_2972_;
goto v___jp_2950_;
}
else
{
lean_object* v___x_2978_; size_t v___x_2979_; size_t v___x_2980_; lean_object* v___x_2981_; 
v___x_2978_ = lean_box(0);
v___x_2979_ = ((size_t)0ULL);
v___x_2980_ = lean_usize_of_nat(v___y_2973_);
lean_dec(v___y_2973_);
v___x_2981_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v___y_2975_, v___x_2979_, v___x_2980_, v___x_2978_, v___y_2976_);
lean_dec_ref(v___y_2975_);
if (lean_obj_tag(v___x_2981_) == 0)
{
lean_dec_ref_known(v___x_2981_, 1);
v___y_2951_ = v___y_2971_;
v___y_2952_ = v___y_2972_;
goto v___jp_2950_;
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2989_; 
lean_dec_ref(v___y_2971_);
v_a_2982_ = lean_ctor_get(v___x_2981_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2981_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2984_ = v___x_2981_;
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2981_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
}
}
}
v___jp_2990_:
{
switch(lean_obj_tag(v_code_2323_))
{
case 0:
{
lean_object* v_decl_2998_; lean_object* v_k_2999_; uint8_t v___x_3000_; uint8_t v___x_3001_; lean_object* v___x_3002_; 
v_decl_2998_ = lean_ctor_get(v_code_2323_, 0);
v_k_2999_ = lean_ctor_get(v_code_2323_, 1);
v___x_3000_ = 0;
v___x_3001_ = 0;
lean_inc_ref(v_decl_2998_);
v___x_3002_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v___x_3000_, v___x_3001_, v_decl_2998_, v___y_2992_, v___y_2995_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; uint8_t v___x_3004_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
lean_inc(v_a_3003_);
lean_dec_ref_known(v___x_3002_, 1);
v___x_3004_ = l_Lean_Compiler_LCNF_instBEqLetDecl_beq(v___x_3000_, v_decl_2998_, v_a_3003_);
if (v___x_3004_ == 0)
{
lean_object* v___x_3005_; 
v___x_3005_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2992_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_dec_ref_known(v___x_3005_, 1);
lean_inc_ref(v_decl_2998_);
lean_inc_ref(v_k_2999_);
v___y_2794_ = v_k_2999_;
v___y_2795_ = v_a_3003_;
v___y_2796_ = v___x_3000_;
v___y_2797_ = v_decl_2998_;
v___y_2798_ = v___y_2991_;
v___y_2799_ = v___y_2992_;
v___y_2800_ = v___y_2993_;
v___y_2801_ = v___y_2994_;
v___y_2802_ = v___y_2995_;
v___y_2803_ = v___y_2996_;
v___y_2804_ = v___y_2997_;
goto v___jp_2793_;
}
else
{
lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3013_; 
lean_dec(v_a_3003_);
lean_dec_ref_known(v_code_2323_, 2);
lean_dec_ref(v___y_2996_);
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3013_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3013_ == 0)
{
v___x_3008_ = v___x_3005_;
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v___x_3005_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3011_; 
if (v_isShared_3009_ == 0)
{
v___x_3011_ = v___x_3008_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v_a_3006_);
v___x_3011_ = v_reuseFailAlloc_3012_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
return v___x_3011_;
}
}
}
}
else
{
lean_inc_ref(v_decl_2998_);
lean_inc_ref(v_k_2999_);
v___y_2794_ = v_k_2999_;
v___y_2795_ = v_a_3003_;
v___y_2796_ = v___x_3000_;
v___y_2797_ = v_decl_2998_;
v___y_2798_ = v___y_2991_;
v___y_2799_ = v___y_2992_;
v___y_2800_ = v___y_2993_;
v___y_2801_ = v___y_2994_;
v___y_2802_ = v___y_2995_;
v___y_2803_ = v___y_2996_;
v___y_2804_ = v___y_2997_;
goto v___jp_2793_;
}
}
else
{
lean_object* v_a_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3021_; 
lean_dec_ref_known(v_code_2323_, 2);
lean_dec_ref(v___y_2996_);
v_a_3014_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_3016_ = v___x_3002_;
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_a_3014_);
lean_dec(v___x_3002_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3019_; 
if (v_isShared_3017_ == 0)
{
v___x_3019_ = v___x_3016_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_a_3014_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_3022_; lean_object* v_args_3023_; uint8_t v___x_3024_; uint8_t v___x_3025_; lean_object* v___x_3026_; lean_object* v_subst_3027_; lean_object* v___x_3028_; 
v_fvarId_3022_ = lean_ctor_get(v_code_2323_, 0);
v_args_3023_ = lean_ctor_get(v_code_2323_, 1);
v___x_3024_ = 0;
v___x_3025_ = 0;
v___x_3026_ = lean_st_ref_get(v___y_2992_);
v_subst_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc_ref(v_subst_3027_);
lean_dec(v___x_3026_);
lean_inc(v_fvarId_3022_);
v___x_3028_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3027_, v_fvarId_3022_, v___x_3025_);
lean_dec_ref(v_subst_3027_);
if (lean_obj_tag(v___x_3028_) == 0)
{
lean_object* v_fvarId_3029_; lean_object* v___x_3030_; 
v_fvarId_3029_ = lean_ctor_get(v___x_3028_, 0);
lean_inc(v_fvarId_3029_);
lean_dec_ref_known(v___x_3028_, 1);
lean_inc_ref(v_args_3023_);
v___x_3030_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v___x_3024_, v___x_3025_, v_args_3023_, v___y_2992_);
if (lean_obj_tag(v___x_3030_) == 0)
{
lean_object* v_a_3031_; lean_object* v___x_3032_; 
v_a_3031_ = lean_ctor_get(v___x_3030_, 0);
lean_inc_n(v_a_3031_, 2);
lean_dec_ref_known(v___x_3030_, 1);
v___x_3032_ = l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(v_fvarId_3029_, v_a_3031_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
if (lean_obj_tag(v___x_3032_) == 0)
{
lean_object* v_a_3033_; 
v_a_3033_ = lean_ctor_get(v___x_3032_, 0);
lean_inc(v_a_3033_);
lean_dec_ref_known(v___x_3032_, 1);
if (lean_obj_tag(v_a_3033_) == 1)
{
lean_object* v_val_3034_; 
lean_dec(v_a_3031_);
lean_dec(v_fvarId_3029_);
lean_dec_ref_known(v_code_2323_, 2);
v_val_3034_ = lean_ctor_get(v_a_3033_, 0);
lean_inc(v_val_3034_);
lean_dec_ref_known(v_a_3033_, 1);
v_code_2323_ = v_val_3034_;
v_a_2324_ = v___y_2991_;
v_a_2325_ = v___y_2992_;
v_a_2326_ = v___y_2993_;
v_a_2327_ = v___y_2994_;
v_a_2328_ = v___y_2995_;
v_a_2329_ = v___y_2996_;
v_a_2330_ = v___y_2997_;
goto _start;
}
else
{
lean_object* v___x_3036_; 
lean_dec(v_a_3033_);
lean_dec_ref(v___y_2996_);
lean_inc(v_fvarId_3029_);
v___x_3036_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_3029_, v___y_2992_);
if (lean_obj_tag(v___x_3036_) == 0)
{
lean_object* v___x_3037_; lean_object* v___x_3038_; uint8_t v___x_3039_; 
lean_dec_ref_known(v___x_3036_, 1);
v___x_3037_ = lean_unsigned_to_nat(0u);
v___x_3038_ = lean_array_get_size(v_a_3031_);
v___x_3039_ = lean_nat_dec_lt(v___x_3037_, v___x_3038_);
if (v___x_3039_ == 0)
{
lean_inc(v_fvarId_3022_);
lean_inc_ref(v_args_3023_);
v___y_2842_ = v_args_3023_;
v___y_2843_ = v_a_3031_;
v___y_2844_ = v_fvarId_3029_;
v___y_2845_ = v_fvarId_3022_;
goto v___jp_2841_;
}
else
{
lean_object* v___x_3040_; size_t v___x_3041_; size_t v___x_3042_; lean_object* v___x_3043_; 
v___x_3040_ = lean_box(0);
v___x_3041_ = ((size_t)0ULL);
v___x_3042_ = lean_usize_of_nat(v___x_3038_);
v___x_3043_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_a_3031_, v___x_3041_, v___x_3042_, v___x_3040_, v___y_2992_);
if (lean_obj_tag(v___x_3043_) == 0)
{
lean_dec_ref_known(v___x_3043_, 1);
lean_inc(v_fvarId_3022_);
lean_inc_ref(v_args_3023_);
v___y_2842_ = v_args_3023_;
v___y_2843_ = v_a_3031_;
v___y_2844_ = v_fvarId_3029_;
v___y_2845_ = v_fvarId_3022_;
goto v___jp_2841_;
}
else
{
lean_object* v_a_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3051_; 
lean_dec(v_a_3031_);
lean_dec(v_fvarId_3029_);
lean_dec_ref_known(v_code_2323_, 2);
v_a_3044_ = lean_ctor_get(v___x_3043_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v___x_3043_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3046_ = v___x_3043_;
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_a_3044_);
lean_dec(v___x_3043_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v___x_3049_; 
if (v_isShared_3047_ == 0)
{
v___x_3049_ = v___x_3046_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_a_3044_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
return v___x_3049_;
}
}
}
}
}
else
{
lean_object* v_a_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3059_; 
lean_dec(v_a_3031_);
lean_dec(v_fvarId_3029_);
lean_dec_ref_known(v_code_2323_, 2);
v_a_3052_ = lean_ctor_get(v___x_3036_, 0);
v_isSharedCheck_3059_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_3054_ = v___x_3036_;
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_a_3052_);
lean_dec(v___x_3036_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v___x_3057_; 
if (v_isShared_3055_ == 0)
{
v___x_3057_ = v___x_3054_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v_a_3052_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
return v___x_3057_;
}
}
}
}
}
else
{
lean_object* v_a_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3067_; 
lean_dec(v_a_3031_);
lean_dec(v_fvarId_3029_);
lean_dec_ref_known(v_code_2323_, 2);
lean_dec_ref(v___y_2996_);
v_a_3060_ = lean_ctor_get(v___x_3032_, 0);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_3032_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3062_ = v___x_3032_;
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_a_3060_);
lean_dec(v___x_3032_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
lean_object* v___x_3065_; 
if (v_isShared_3063_ == 0)
{
v___x_3065_ = v___x_3062_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_a_3060_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
return v___x_3065_;
}
}
}
}
else
{
lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3075_; 
lean_dec(v_fvarId_3029_);
lean_dec_ref_known(v_code_2323_, 2);
lean_dec_ref(v___y_2996_);
v_a_3068_ = lean_ctor_get(v___x_3030_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_3030_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3070_ = v___x_3030_;
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_dec(v___x_3030_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3073_; 
if (v_isShared_3071_ == 0)
{
v___x_3073_ = v___x_3070_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_a_3068_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
}
}
else
{
lean_object* v___x_3076_; 
lean_dec_ref_known(v_code_2323_, 2);
v___x_3076_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3024_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
lean_dec_ref(v___y_2996_);
return v___x_3076_;
}
}
case 4:
{
lean_object* v_cases_3077_; lean_object* v___x_3078_; 
v_cases_3077_ = lean_ctor_get(v_code_2323_, 0);
lean_inc_ref(v_cases_3077_);
v___x_3078_ = l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(v_cases_3077_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3151_; 
v_a_3079_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3081_ = v___x_3078_;
v_isShared_3082_ = v_isSharedCheck_3151_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___x_3078_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3151_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
if (lean_obj_tag(v_a_3079_) == 1)
{
lean_object* v_val_3083_; lean_object* v___x_3085_; 
lean_dec_ref_known(v_code_2323_, 1);
lean_dec_ref(v___y_2996_);
v_val_3083_ = lean_ctor_get(v_a_3079_, 0);
lean_inc(v_val_3083_);
lean_dec_ref_known(v_a_3079_, 1);
if (v_isShared_3082_ == 0)
{
lean_ctor_set(v___x_3081_, 0, v_val_3083_);
v___x_3085_ = v___x_3081_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_val_3083_);
v___x_3085_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
return v___x_3085_;
}
}
else
{
lean_object* v_typeName_3087_; lean_object* v_resultType_3088_; lean_object* v_discr_3089_; lean_object* v_alts_3090_; uint8_t v___x_3091_; uint8_t v___x_3092_; lean_object* v___x_3093_; lean_object* v_subst_3094_; lean_object* v___x_3095_; 
lean_del_object(v___x_3081_);
lean_dec(v_a_3079_);
v_typeName_3087_ = lean_ctor_get(v_cases_3077_, 0);
v_resultType_3088_ = lean_ctor_get(v_cases_3077_, 1);
v_discr_3089_ = lean_ctor_get(v_cases_3077_, 2);
v_alts_3090_ = lean_ctor_get(v_cases_3077_, 3);
v___x_3091_ = 0;
v___x_3092_ = 0;
v___x_3093_ = lean_st_ref_get(v___y_2992_);
v_subst_3094_ = lean_ctor_get(v___x_3093_, 0);
lean_inc_ref(v_subst_3094_);
lean_dec(v___x_3093_);
lean_inc(v_discr_3089_);
v___x_3095_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3094_, v_discr_3089_, v___x_3092_);
lean_dec_ref(v_subst_3094_);
if (lean_obj_tag(v___x_3095_) == 0)
{
lean_object* v_fvarId_3096_; lean_object* v___x_3097_; lean_object* v_subst_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
v_fvarId_3096_ = lean_ctor_get(v___x_3095_, 0);
lean_inc_n(v_fvarId_3096_, 2);
lean_dec_ref_known(v___x_3095_, 1);
v___x_3097_ = lean_st_ref_get(v___y_2992_);
v_subst_3098_ = lean_ctor_get(v___x_3097_, 0);
lean_inc_ref(v_subst_3098_);
lean_dec(v___x_3097_);
lean_inc_ref(v_resultType_3088_);
v___x_3099_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3091_, v_subst_3098_, v___x_3092_, v_resultType_3088_);
lean_dec_ref(v_subst_3098_);
v___x_3100_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_3090_);
v___x_3101_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(v_fvarId_3096_, v___x_3100_, v_alts_3090_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
if (lean_obj_tag(v___x_3101_) == 0)
{
lean_object* v_a_3102_; lean_object* v___x_3103_; 
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
lean_inc(v_a_3102_);
lean_dec_ref_known(v___x_3101_, 1);
v___x_3103_ = l_Lean_Compiler_LCNF_Simp_addDefaultAlt(v_a_3102_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
if (lean_obj_tag(v___x_3103_) == 0)
{
lean_object* v_a_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3133_; 
v_a_3104_ = lean_ctor_get(v___x_3103_, 0);
v_isSharedCheck_3133_ = !lean_is_exclusive(v___x_3103_);
if (v_isSharedCheck_3133_ == 0)
{
v___x_3106_ = v___x_3103_;
v_isShared_3107_ = v_isSharedCheck_3133_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_a_3104_);
lean_dec(v___x_3103_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3133_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; uint8_t v___x_3110_; 
v___x_3108_ = lean_array_get_size(v_a_3104_);
v___x_3109_ = lean_unsigned_to_nat(1u);
v___x_3110_ = lean_nat_dec_eq(v___x_3108_, v___x_3109_);
if (v___x_3110_ == 0)
{
lean_del_object(v___x_3106_);
lean_inc_ref(v_alts_3090_);
lean_inc_ref(v_resultType_3088_);
lean_inc(v_discr_3089_);
lean_inc(v_typeName_3087_);
v___y_2908_ = v_typeName_3087_;
v___y_2909_ = v_discr_3089_;
v___y_2910_ = v___x_3099_;
v___y_2911_ = v_resultType_3088_;
v___y_2912_ = v_alts_3090_;
v___y_2913_ = v_fvarId_3096_;
v___y_2914_ = v___x_3100_;
v___y_2915_ = v_a_3104_;
v___y_2916_ = v___y_2992_;
v___y_2917_ = v___y_2994_;
v___y_2918_ = v___y_2995_;
v___y_2919_ = v___y_2996_;
v___y_2920_ = v___y_2997_;
goto v___jp_2907_;
}
else
{
lean_object* v___x_3111_; 
v___x_3111_ = lean_array_fget_borrowed(v_a_3104_, v___x_3100_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_params_3112_; lean_object* v_code_3113_; lean_object* v___x_3114_; uint8_t v___x_3115_; 
lean_del_object(v___x_3106_);
v_params_3112_ = lean_ctor_get(v___x_3111_, 1);
v_code_3113_ = lean_ctor_get(v___x_3111_, 2);
v___x_3114_ = lean_array_get_size(v_params_3112_);
v___x_3115_ = lean_nat_dec_lt(v___x_3100_, v___x_3114_);
if (v___x_3115_ == 0)
{
lean_inc_ref(v_code_3113_);
lean_inc_ref(v_params_3112_);
lean_dec(v_a_3104_);
lean_dec_ref(v___x_3099_);
lean_dec(v_fvarId_3096_);
lean_dec_ref_known(v_code_2323_, 1);
lean_dec_ref(v___y_2996_);
v___y_2971_ = v_code_3113_;
v___y_2972_ = v___y_2992_;
v___y_2973_ = v___x_3114_;
v___y_2974_ = v___x_3100_;
v___y_2975_ = v_params_3112_;
v___y_2976_ = v___y_2995_;
goto v___jp_2970_;
}
else
{
if (v___x_3115_ == 0)
{
lean_inc_ref(v_code_3113_);
lean_inc_ref(v_params_3112_);
lean_dec(v_a_3104_);
lean_dec_ref(v___x_3099_);
lean_dec(v_fvarId_3096_);
lean_dec_ref_known(v_code_2323_, 1);
lean_dec_ref(v___y_2996_);
v___y_2971_ = v_code_3113_;
v___y_2972_ = v___y_2992_;
v___y_2973_ = v___x_3114_;
v___y_2974_ = v___x_3100_;
v___y_2975_ = v_params_3112_;
v___y_2976_ = v___y_2995_;
goto v___jp_2970_;
}
else
{
size_t v___x_3116_; size_t v___x_3117_; lean_object* v___x_3118_; 
v___x_3116_ = ((size_t)0ULL);
v___x_3117_ = lean_usize_of_nat(v___x_3114_);
v___x_3118_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_params_3112_, v___x_3116_, v___x_3117_, v___y_2992_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; uint8_t v___x_3120_; 
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
lean_inc(v_a_3119_);
lean_dec_ref_known(v___x_3118_, 1);
v___x_3120_ = lean_unbox(v_a_3119_);
lean_dec(v_a_3119_);
if (v___x_3120_ == 0)
{
lean_inc_ref(v_code_3113_);
lean_inc_ref(v_params_3112_);
lean_dec(v_a_3104_);
lean_dec_ref(v___x_3099_);
lean_dec(v_fvarId_3096_);
lean_dec_ref_known(v_code_2323_, 1);
lean_dec_ref(v___y_2996_);
v___y_2971_ = v_code_3113_;
v___y_2972_ = v___y_2992_;
v___y_2973_ = v___x_3114_;
v___y_2974_ = v___x_3100_;
v___y_2975_ = v_params_3112_;
v___y_2976_ = v___y_2995_;
goto v___jp_2970_;
}
else
{
lean_inc_ref(v_alts_3090_);
lean_inc_ref(v_resultType_3088_);
lean_inc(v_discr_3089_);
lean_inc(v_typeName_3087_);
v___y_2908_ = v_typeName_3087_;
v___y_2909_ = v_discr_3089_;
v___y_2910_ = v___x_3099_;
v___y_2911_ = v_resultType_3088_;
v___y_2912_ = v_alts_3090_;
v___y_2913_ = v_fvarId_3096_;
v___y_2914_ = v___x_3100_;
v___y_2915_ = v_a_3104_;
v___y_2916_ = v___y_2992_;
v___y_2917_ = v___y_2994_;
v___y_2918_ = v___y_2995_;
v___y_2919_ = v___y_2996_;
v___y_2920_ = v___y_2997_;
goto v___jp_2907_;
}
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec(v_a_3104_);
lean_dec_ref(v___x_3099_);
lean_dec(v_fvarId_3096_);
lean_dec_ref_known(v_code_2323_, 1);
lean_dec_ref(v___y_2996_);
v_a_3121_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3118_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3118_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
}
}
else
{
lean_object* v_code_3129_; lean_object* v___x_3131_; 
lean_inc_ref(v___x_3111_);
lean_dec(v_a_3104_);
lean_dec_ref(v___x_3099_);
lean_dec(v_fvarId_3096_);
lean_dec_ref_known(v_code_2323_, 1);
lean_dec_ref(v___y_2996_);
v_code_3129_ = lean_ctor_get(v___x_3111_, 0);
lean_inc_ref(v_code_3129_);
lean_dec_ref_known(v___x_3111_, 1);
if (v_isShared_3107_ == 0)
{
lean_ctor_set(v___x_3106_, 0, v_code_3129_);
v___x_3131_ = v___x_3106_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v_code_3129_);
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
}
else
{
lean_object* v_a_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3141_; 
lean_dec_ref(v___x_3099_);
lean_dec(v_fvarId_3096_);
lean_dec_ref_known(v_code_2323_, 1);
lean_dec_ref(v___y_2996_);
v_a_3134_ = lean_ctor_get(v___x_3103_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v___x_3103_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3136_ = v___x_3103_;
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_a_3134_);
lean_dec(v___x_3103_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3139_; 
if (v_isShared_3137_ == 0)
{
v___x_3139_ = v___x_3136_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v_a_3134_);
v___x_3139_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
return v___x_3139_;
}
}
}
}
else
{
lean_object* v_a_3142_; lean_object* v___x_3144_; uint8_t v_isShared_3145_; uint8_t v_isSharedCheck_3149_; 
lean_dec_ref(v___x_3099_);
lean_dec(v_fvarId_3096_);
lean_dec_ref_known(v_code_2323_, 1);
lean_dec_ref(v___y_2996_);
v_a_3142_ = lean_ctor_get(v___x_3101_, 0);
v_isSharedCheck_3149_ = !lean_is_exclusive(v___x_3101_);
if (v_isSharedCheck_3149_ == 0)
{
v___x_3144_ = v___x_3101_;
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
else
{
lean_inc(v_a_3142_);
lean_dec(v___x_3101_);
v___x_3144_ = lean_box(0);
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
v_resetjp_3143_:
{
lean_object* v___x_3147_; 
if (v_isShared_3145_ == 0)
{
v___x_3147_ = v___x_3144_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v_a_3142_);
v___x_3147_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
return v___x_3147_;
}
}
}
}
else
{
lean_object* v___x_3150_; 
lean_dec_ref_known(v_code_2323_, 1);
v___x_3150_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3091_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
lean_dec_ref(v___y_2996_);
return v___x_3150_;
}
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
lean_dec_ref_known(v_code_2323_, 1);
lean_dec_ref(v___y_2996_);
v_a_3152_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3078_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3078_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_3160_; uint8_t v___x_3161_; uint8_t v___x_3162_; lean_object* v___x_3163_; lean_object* v_subst_3164_; lean_object* v___x_3165_; 
v_fvarId_3160_ = lean_ctor_get(v_code_2323_, 0);
v___x_3161_ = 0;
v___x_3162_ = 0;
v___x_3163_ = lean_st_ref_get(v___y_2992_);
v_subst_3164_ = lean_ctor_get(v___x_3163_, 0);
lean_inc_ref(v_subst_3164_);
lean_dec(v___x_3163_);
lean_inc(v_fvarId_3160_);
v___x_3165_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3164_, v_fvarId_3160_, v___x_3162_);
lean_dec_ref(v_subst_3164_);
if (lean_obj_tag(v___x_3165_) == 0)
{
lean_object* v_fvarId_3166_; lean_object* v___x_3167_; 
lean_dec_ref(v___y_2996_);
v_fvarId_3166_ = lean_ctor_get(v___x_3165_, 0);
lean_inc_n(v_fvarId_3166_, 2);
lean_dec_ref_known(v___x_3165_, 1);
v___x_3167_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_3166_, v___y_2992_);
if (lean_obj_tag(v___x_3167_) == 0)
{
lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3186_; 
v_isSharedCheck_3186_ = !lean_is_exclusive(v___x_3167_);
if (v_isSharedCheck_3186_ == 0)
{
lean_object* v_unused_3187_; 
v_unused_3187_ = lean_ctor_get(v___x_3167_, 0);
lean_dec(v_unused_3187_);
v___x_3169_ = v___x_3167_;
v_isShared_3170_ = v_isSharedCheck_3186_;
goto v_resetjp_3168_;
}
else
{
lean_dec(v___x_3167_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3186_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
uint8_t v___x_3171_; 
v___x_3171_ = l_Lean_instBEqFVarId_beq(v_fvarId_3160_, v_fvarId_3166_);
if (v___x_3171_ == 0)
{
lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3181_; 
v_isSharedCheck_3181_ = !lean_is_exclusive(v_code_2323_);
if (v_isSharedCheck_3181_ == 0)
{
lean_object* v_unused_3182_; 
v_unused_3182_ = lean_ctor_get(v_code_2323_, 0);
lean_dec(v_unused_3182_);
v___x_3173_ = v_code_2323_;
v_isShared_3174_ = v_isSharedCheck_3181_;
goto v_resetjp_3172_;
}
else
{
lean_dec(v_code_2323_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3181_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
lean_ctor_set(v___x_3173_, 0, v_fvarId_3166_);
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v_fvarId_3166_);
v___x_3176_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
lean_object* v___x_3178_; 
if (v_isShared_3170_ == 0)
{
lean_ctor_set(v___x_3169_, 0, v___x_3176_);
v___x_3178_ = v___x_3169_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3176_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
}
else
{
lean_object* v___x_3184_; 
lean_dec(v_fvarId_3166_);
if (v_isShared_3170_ == 0)
{
lean_ctor_set(v___x_3169_, 0, v_code_2323_);
v___x_3184_ = v___x_3169_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v_code_2323_);
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
else
{
lean_object* v_a_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3195_; 
lean_dec(v_fvarId_3166_);
lean_dec_ref_known(v_code_2323_, 1);
v_a_3188_ = lean_ctor_get(v___x_3167_, 0);
v_isSharedCheck_3195_ = !lean_is_exclusive(v___x_3167_);
if (v_isSharedCheck_3195_ == 0)
{
v___x_3190_ = v___x_3167_;
v_isShared_3191_ = v_isSharedCheck_3195_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_a_3188_);
lean_dec(v___x_3167_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3195_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v___x_3193_; 
if (v_isShared_3191_ == 0)
{
v___x_3193_ = v___x_3190_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v_a_3188_);
v___x_3193_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
return v___x_3193_;
}
}
}
}
else
{
lean_object* v___x_3196_; 
lean_dec_ref_known(v_code_2323_, 1);
v___x_3196_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3161_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
lean_dec_ref(v___y_2996_);
return v___x_3196_;
}
}
case 6:
{
lean_object* v_type_3197_; uint8_t v___x_3198_; uint8_t v___x_3199_; lean_object* v___x_3200_; lean_object* v_subst_3201_; lean_object* v___x_3202_; size_t v___x_3203_; size_t v___x_3204_; uint8_t v___x_3205_; 
lean_dec_ref(v___y_2996_);
v_type_3197_ = lean_ctor_get(v_code_2323_, 0);
v___x_3198_ = 0;
v___x_3199_ = 0;
v___x_3200_ = lean_st_ref_get(v___y_2992_);
v_subst_3201_ = lean_ctor_get(v___x_3200_, 0);
lean_inc_ref(v_subst_3201_);
lean_dec(v___x_3200_);
lean_inc_ref(v_type_3197_);
v___x_3202_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3198_, v_subst_3201_, v___x_3199_, v_type_3197_);
lean_dec_ref(v_subst_3201_);
v___x_3203_ = lean_ptr_addr(v_type_3197_);
v___x_3204_ = lean_ptr_addr(v___x_3202_);
v___x_3205_ = lean_usize_dec_eq(v___x_3203_, v___x_3204_);
if (v___x_3205_ == 0)
{
lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3213_; 
v_isSharedCheck_3213_ = !lean_is_exclusive(v_code_2323_);
if (v_isSharedCheck_3213_ == 0)
{
lean_object* v_unused_3214_; 
v_unused_3214_ = lean_ctor_get(v_code_2323_, 0);
lean_dec(v_unused_3214_);
v___x_3207_ = v_code_2323_;
v_isShared_3208_ = v_isSharedCheck_3213_;
goto v_resetjp_3206_;
}
else
{
lean_dec(v_code_2323_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3213_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v___x_3210_; 
if (v_isShared_3208_ == 0)
{
lean_ctor_set(v___x_3207_, 0, v___x_3202_);
v___x_3210_ = v___x_3207_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v___x_3202_);
v___x_3210_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
lean_object* v___x_3211_; 
v___x_3211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3210_);
return v___x_3211_;
}
}
}
else
{
lean_object* v___x_3215_; 
lean_dec_ref(v___x_3202_);
v___x_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3215_, 0, v_code_2323_);
return v___x_3215_;
}
}
default: 
{
lean_object* v_decl_3216_; lean_object* v_k_3217_; 
v_decl_3216_ = lean_ctor_get(v_code_2323_, 0);
v_k_3217_ = lean_ctor_get(v_code_2323_, 1);
lean_inc_ref(v_k_3217_);
lean_inc_ref(v_decl_3216_);
v_decl_2469_ = v_decl_3216_;
v_k_2470_ = v_k_3217_;
v___y_2471_ = v___y_2991_;
v___y_2472_ = v___y_2992_;
v___y_2473_ = v___y_2993_;
v___y_2474_ = v___y_2994_;
v___y_2475_ = v___y_2995_;
v___y_2476_ = v___y_2996_;
v___y_2477_ = v___y_2997_;
goto v___jp_2468_;
}
}
}
v___jp_3225_:
{
lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; 
v___x_3226_ = lean_unsigned_to_nat(1u);
v___x_3227_ = lean_nat_add(v_currRecDepth_3219_, v___x_3226_);
lean_dec(v_currRecDepth_3219_);
v___x_3228_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3228_, 0, v_toCold_3218_);
lean_ctor_set(v___x_3228_, 1, v___x_3227_);
lean_ctor_set(v___x_3228_, 2, v_ref_3220_);
lean_ctor_set_uint16(v___x_3228_, sizeof(void*)*3, v_optionFlags_3221_);
lean_ctor_set_uint8(v___x_3228_, sizeof(void*)*3 + 2, v_suppressElabErrors_3222_);
lean_ctor_set_uint8(v___x_3228_, sizeof(void*)*3 + 3, v_checkDeprecated_3223_);
lean_ctor_set_uint8(v___x_3228_, sizeof(void*)*3 + 4, v_isRecordingDeps_3224_);
v___x_3229_ = l_Lean_Compiler_LCNF_Simp_incVisited___redArg(v_a_2325_);
if (lean_obj_tag(v___x_3229_) == 0)
{
lean_object* v___x_3230_; lean_object* v_visited_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; uint8_t v___x_3235_; 
lean_dec_ref_known(v___x_3229_, 1);
v___x_3230_ = lean_st_ref_get(v_a_2325_);
v_visited_3231_ = lean_ctor_get(v___x_3230_, 4);
lean_inc(v_visited_3231_);
lean_dec(v___x_3230_);
v___x_3232_ = lean_unsigned_to_nat(128u);
v___x_3233_ = lean_nat_mod(v_visited_3231_, v___x_3232_);
lean_dec(v_visited_3231_);
v___x_3234_ = lean_unsigned_to_nat(0u);
v___x_3235_ = lean_nat_dec_eq(v___x_3233_, v___x_3234_);
lean_dec(v___x_3233_);
if (v___x_3235_ == 0)
{
v___y_2991_ = v_a_2324_;
v___y_2992_ = v_a_2325_;
v___y_2993_ = v_a_2326_;
v___y_2994_ = v_a_2327_;
v___y_2995_ = v_a_2328_;
v___y_2996_ = v___x_3228_;
v___y_2997_ = v_a_2330_;
goto v___jp_2990_;
}
else
{
lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3236_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__4));
v___x_3237_ = l_Lean_Core_checkSystem(v___x_3236_, v___x_3228_, v_a_2330_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_dec_ref_known(v___x_3237_, 1);
v___y_2991_ = v_a_2324_;
v___y_2992_ = v_a_2325_;
v___y_2993_ = v_a_2326_;
v___y_2994_ = v_a_2327_;
v___y_2995_ = v_a_2328_;
v___y_2996_ = v___x_3228_;
v___y_2997_ = v_a_2330_;
goto v___jp_2990_;
}
else
{
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3245_; 
lean_dec_ref_known(v___x_3228_, 3);
lean_dec_ref(v_code_2323_);
v_a_3238_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3245_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3245_ == 0)
{
v___x_3240_ = v___x_3237_;
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3237_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3243_; 
if (v_isShared_3241_ == 0)
{
v___x_3243_ = v___x_3240_;
goto v_reusejp_3242_;
}
else
{
lean_object* v_reuseFailAlloc_3244_; 
v_reuseFailAlloc_3244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3244_, 0, v_a_3238_);
v___x_3243_ = v_reuseFailAlloc_3244_;
goto v_reusejp_3242_;
}
v_reusejp_3242_:
{
return v___x_3243_;
}
}
}
}
}
else
{
lean_object* v_a_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3253_; 
lean_dec_ref_known(v___x_3228_, 3);
lean_dec_ref(v_code_2323_);
v_a_3246_ = lean_ctor_get(v___x_3229_, 0);
v_isSharedCheck_3253_ = !lean_is_exclusive(v___x_3229_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3248_ = v___x_3229_;
v_isShared_3249_ = v_isSharedCheck_3253_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_a_3246_);
lean_dec(v___x_3229_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3253_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v___x_3251_; 
if (v_isShared_3249_ == 0)
{
v___x_3251_ = v___x_3248_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v_a_3246_);
v___x_3251_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
return v___x_3251_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl(lean_object* v_decl_3259_, lean_object* v_a_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_){
_start:
{
lean_object* v_params_3268_; lean_object* v_type_3269_; lean_object* v_value_3270_; uint8_t v___x_3271_; uint8_t v___x_3272_; lean_object* v___x_3273_; lean_object* v_subst_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v_params_3268_ = lean_ctor_get(v_decl_3259_, 2);
v_type_3269_ = lean_ctor_get(v_decl_3259_, 3);
v_value_3270_ = lean_ctor_get(v_decl_3259_, 4);
v___x_3271_ = 0;
v___x_3272_ = 0;
v___x_3273_ = lean_st_ref_get(v_a_3261_);
v_subst_3274_ = lean_ctor_get(v___x_3273_, 0);
lean_inc_ref(v_subst_3274_);
lean_dec(v___x_3273_);
lean_inc_ref(v_type_3269_);
v___x_3275_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3271_, v_subst_3274_, v___x_3272_, v_type_3269_);
lean_dec_ref(v_subst_3274_);
lean_inc_ref(v_params_3268_);
v___x_3276_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(v___x_3271_, v___x_3272_, v_params_3268_, v_a_3260_, v_a_3261_, v_a_3262_, v_a_3263_, v_a_3264_, v_a_3265_, v_a_3266_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v_a_3277_; lean_object* v___x_3278_; 
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_a_3277_);
lean_dec_ref_known(v___x_3276_, 1);
lean_inc_ref(v_a_3265_);
lean_inc_ref(v_value_3270_);
v___x_3278_ = l_Lean_Compiler_LCNF_Simp_simp(v_value_3270_, v_a_3260_, v_a_3261_, v_a_3262_, v_a_3263_, v_a_3264_, v_a_3265_, v_a_3266_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3279_; lean_object* v___x_3280_; 
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3279_);
lean_dec_ref_known(v___x_3278_, 1);
v___x_3280_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3271_, v_decl_3259_, v___x_3275_, v_a_3277_, v_a_3279_, v_a_3264_);
return v___x_3280_;
}
else
{
lean_object* v_a_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3288_; 
lean_dec(v_a_3277_);
lean_dec_ref(v___x_3275_);
lean_dec_ref(v_decl_3259_);
v_a_3281_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3288_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3288_ == 0)
{
v___x_3283_ = v___x_3278_;
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_a_3281_);
lean_dec(v___x_3278_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v___x_3286_; 
if (v_isShared_3284_ == 0)
{
v___x_3286_ = v___x_3283_;
goto v_reusejp_3285_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v_a_3281_);
v___x_3286_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3285_;
}
v_reusejp_3285_:
{
return v___x_3286_;
}
}
}
}
else
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3296_; 
lean_dec_ref(v___x_3275_);
lean_dec_ref(v_decl_3259_);
v_a_3289_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3291_ = v___x_3276_;
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v___x_3276_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3294_; 
if (v_isShared_3292_ == 0)
{
v___x_3294_ = v___x_3291_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_a_3289_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
return v___x_3294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl___boxed(lean_object* v_decl_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_){
_start:
{
lean_object* v_res_3306_; 
v_res_3306_ = l_Lean_Compiler_LCNF_Simp_simpFunDecl(v_decl_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_, v_a_3304_);
lean_dec(v_a_3304_);
lean_dec_ref(v_a_3303_);
lean_dec(v_a_3302_);
lean_dec_ref(v_a_3301_);
lean_dec_ref(v_a_3300_);
lean_dec(v_a_3299_);
lean_dec_ref(v_a_3298_);
return v_res_3306_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___boxed(lean_object* v_fvarId_3307_, lean_object* v_i_3308_, lean_object* v_as_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_){
_start:
{
lean_object* v_res_3318_; 
v_res_3318_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(v_fvarId_3307_, v_i_3308_, v_as_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
lean_dec(v___y_3316_);
lean_dec_ref(v___y_3315_);
lean_dec(v___y_3314_);
lean_dec_ref(v___y_3313_);
lean_dec_ref(v___y_3312_);
lean_dec(v___y_3311_);
lean_dec_ref(v___y_3310_);
return v_res_3318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___boxed(lean_object* v_cases_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(v_cases_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
lean_dec(v_a_3326_);
lean_dec_ref(v_a_3325_);
lean_dec(v_a_3324_);
lean_dec_ref(v_a_3323_);
lean_dec_ref(v_a_3322_);
lean_dec(v_a_3321_);
lean_dec_ref(v_a_3320_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___boxed(lean_object* v_letDecl_3329_, lean_object* v_k_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_, lean_object* v_a_3336_, lean_object* v_a_3337_, lean_object* v_a_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(v_letDecl_3329_, v_k_3330_, v_a_3331_, v_a_3332_, v_a_3333_, v_a_3334_, v_a_3335_, v_a_3336_, v_a_3337_);
lean_dec(v_a_3337_);
lean_dec_ref(v_a_3336_);
lean_dec(v_a_3335_);
lean_dec_ref(v_a_3334_);
lean_dec_ref(v_a_3333_);
lean_dec(v_a_3332_);
lean_dec_ref(v_a_3331_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp___boxed(lean_object* v_code_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_, lean_object* v_a_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_, lean_object* v_a_3348_){
_start:
{
lean_object* v_res_3349_; 
v_res_3349_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_3340_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_, v_a_3345_, v_a_3346_, v_a_3347_);
lean_dec(v_a_3347_);
lean_dec(v_a_3345_);
lean_dec_ref(v_a_3344_);
lean_dec_ref(v_a_3343_);
lean_dec(v_a_3342_);
lean_dec_ref(v_a_3341_);
return v_res_3349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(uint8_t v_pu_3350_, uint8_t v_t_3351_, lean_object* v_decl_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_){
_start:
{
lean_object* v___x_3361_; 
v___x_3361_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v_pu_3350_, v_t_3351_, v_decl_3352_, v___y_3354_, v___y_3357_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___boxed(lean_object* v_pu_3362_, lean_object* v_t_3363_, lean_object* v_decl_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_){
_start:
{
uint8_t v_pu_boxed_3373_; uint8_t v_t_boxed_3374_; lean_object* v_res_3375_; 
v_pu_boxed_3373_ = lean_unbox(v_pu_3362_);
v_t_boxed_3374_ = lean_unbox(v_t_3363_);
v_res_3375_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(v_pu_boxed_3373_, v_t_boxed_3374_, v_decl_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_);
lean_dec(v___y_3371_);
lean_dec_ref(v___y_3370_);
lean_dec(v___y_3369_);
lean_dec_ref(v___y_3368_);
lean_dec_ref(v___y_3367_);
lean_dec(v___y_3366_);
lean_dec_ref(v___y_3365_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(uint8_t v_pu_3376_, uint8_t v_t_3377_, lean_object* v_args_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_){
_start:
{
lean_object* v___x_3387_; 
v___x_3387_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v_pu_3376_, v_t_3377_, v_args_3378_, v___y_3380_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___boxed(lean_object* v_pu_3388_, lean_object* v_t_3389_, lean_object* v_args_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_){
_start:
{
uint8_t v_pu_boxed_3399_; uint8_t v_t_boxed_3400_; lean_object* v_res_3401_; 
v_pu_boxed_3399_ = lean_unbox(v_pu_3388_);
v_t_boxed_3400_ = lean_unbox(v_t_3389_);
v_res_3401_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(v_pu_boxed_3399_, v_t_boxed_3400_, v_args_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_);
lean_dec(v___y_3397_);
lean_dec_ref(v___y_3396_);
lean_dec(v___y_3395_);
lean_dec_ref(v___y_3394_);
lean_dec_ref(v___y_3393_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0(lean_object* v_inst_3402_, lean_object* v_R_3403_, lean_object* v_a_3404_, lean_object* v_b_3405_){
_start:
{
lean_object* v___x_3406_; 
v___x_3406_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(v_a_3404_, v_b_3405_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1(lean_object* v_00_u03b2_3407_, lean_object* v_x_3408_, lean_object* v_x_3409_, lean_object* v_x_3410_){
_start:
{
lean_object* v___x_3411_; 
v___x_3411_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(v_x_3408_, v_x_3409_, v_x_3410_);
return v___x_3411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(lean_object* v_as_3412_, size_t v_i_3413_, size_t v_stop_3414_, lean_object* v_b_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_){
_start:
{
lean_object* v___x_3424_; 
v___x_3424_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_as_3412_, v_i_3413_, v_stop_3414_, v_b_3415_, v___y_3417_);
return v___x_3424_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___boxed(lean_object* v_as_3425_, lean_object* v_i_3426_, lean_object* v_stop_3427_, lean_object* v_b_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
size_t v_i_boxed_3437_; size_t v_stop_boxed_3438_; lean_object* v_res_3439_; 
v_i_boxed_3437_ = lean_unbox_usize(v_i_3426_);
lean_dec(v_i_3426_);
v_stop_boxed_3438_ = lean_unbox_usize(v_stop_3427_);
lean_dec(v_stop_3427_);
v_res_3439_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(v_as_3425_, v_i_boxed_3437_, v_stop_boxed_3438_, v_b_3428_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_);
lean_dec(v___y_3435_);
lean_dec_ref(v___y_3434_);
lean_dec(v___y_3433_);
lean_dec_ref(v___y_3432_);
lean_dec_ref(v___y_3431_);
lean_dec(v___y_3430_);
lean_dec_ref(v___y_3429_);
lean_dec_ref(v_as_3425_);
return v_res_3439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(lean_object* v_as_3440_, size_t v_i_3441_, size_t v_stop_3442_, lean_object* v_b_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_){
_start:
{
lean_object* v___x_3449_; 
v___x_3449_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v_as_3440_, v_i_3441_, v_stop_3442_, v_b_3443_, v___y_3445_);
return v___x_3449_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___boxed(lean_object* v_as_3450_, lean_object* v_i_3451_, lean_object* v_stop_3452_, lean_object* v_b_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_){
_start:
{
size_t v_i_boxed_3459_; size_t v_stop_boxed_3460_; lean_object* v_res_3461_; 
v_i_boxed_3459_ = lean_unbox_usize(v_i_3451_);
lean_dec(v_i_3451_);
v_stop_boxed_3460_ = lean_unbox_usize(v_stop_3452_);
lean_dec(v_stop_3452_);
v_res_3461_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(v_as_3450_, v_i_boxed_3459_, v_stop_boxed_3460_, v_b_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_);
lean_dec(v___y_3457_);
lean_dec_ref(v___y_3456_);
lean_dec(v___y_3455_);
lean_dec_ref(v___y_3454_);
lean_dec_ref(v_as_3450_);
return v_res_3461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(lean_object* v_as_3462_, size_t v_i_3463_, size_t v_stop_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_){
_start:
{
lean_object* v___x_3473_; 
v___x_3473_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___redArg(v_as_3462_, v_i_3463_, v_stop_3464_, v___y_3471_);
return v___x_3473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___boxed(lean_object* v_as_3474_, lean_object* v_i_3475_, lean_object* v_stop_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_){
_start:
{
size_t v_i_boxed_3485_; size_t v_stop_boxed_3486_; lean_object* v_res_3487_; 
v_i_boxed_3485_ = lean_unbox_usize(v_i_3475_);
lean_dec(v_i_3475_);
v_stop_boxed_3486_ = lean_unbox_usize(v_stop_3476_);
lean_dec(v_stop_3476_);
v_res_3487_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(v_as_3474_, v_i_boxed_3485_, v_stop_boxed_3486_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_);
lean_dec(v___y_3483_);
lean_dec_ref(v___y_3482_);
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec_ref(v___y_3479_);
lean_dec(v___y_3478_);
lean_dec_ref(v___y_3477_);
lean_dec_ref(v_as_3474_);
return v_res_3487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(lean_object* v_as_3488_, size_t v_i_3489_, size_t v_stop_3490_, lean_object* v_b_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_){
_start:
{
lean_object* v___x_3500_; 
v___x_3500_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v_as_3488_, v_i_3489_, v_stop_3490_, v_b_3491_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_);
return v___x_3500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___boxed(lean_object* v_as_3501_, lean_object* v_i_3502_, lean_object* v_stop_3503_, lean_object* v_b_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_){
_start:
{
size_t v_i_boxed_3513_; size_t v_stop_boxed_3514_; lean_object* v_res_3515_; 
v_i_boxed_3513_ = lean_unbox_usize(v_i_3502_);
lean_dec(v_i_3502_);
v_stop_boxed_3514_ = lean_unbox_usize(v_stop_3503_);
lean_dec(v_stop_3503_);
v_res_3515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(v_as_3501_, v_i_boxed_3513_, v_stop_boxed_3514_, v_b_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_, v___y_3511_);
lean_dec(v___y_3511_);
lean_dec_ref(v___y_3510_);
lean_dec(v___y_3509_);
lean_dec_ref(v___y_3508_);
lean_dec_ref(v___y_3507_);
lean_dec(v___y_3506_);
lean_dec_ref(v___y_3505_);
lean_dec_ref(v_as_3501_);
return v_res_3515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(lean_object* v_as_3516_, size_t v_i_3517_, size_t v_stop_3518_, lean_object* v_b_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_){
_start:
{
lean_object* v___x_3528_; 
v___x_3528_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v_as_3516_, v_i_3517_, v_stop_3518_, v_b_3519_, v___y_3524_);
return v___x_3528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___boxed(lean_object* v_as_3529_, lean_object* v_i_3530_, lean_object* v_stop_3531_, lean_object* v_b_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_){
_start:
{
size_t v_i_boxed_3541_; size_t v_stop_boxed_3542_; lean_object* v_res_3543_; 
v_i_boxed_3541_ = lean_unbox_usize(v_i_3530_);
lean_dec(v_i_3530_);
v_stop_boxed_3542_ = lean_unbox_usize(v_stop_3531_);
lean_dec(v_stop_3531_);
v_res_3543_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(v_as_3529_, v_i_boxed_3541_, v_stop_boxed_3542_, v_b_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_, v___y_3539_);
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3538_);
lean_dec(v___y_3537_);
lean_dec_ref(v___y_3536_);
lean_dec_ref(v___y_3535_);
lean_dec(v___y_3534_);
lean_dec_ref(v___y_3533_);
lean_dec_ref(v_as_3529_);
return v_res_3543_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(lean_object* v_as_3544_, size_t v_i_3545_, size_t v_stop_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_){
_start:
{
lean_object* v___x_3555_; 
v___x_3555_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_as_3544_, v_i_3545_, v_stop_3546_, v___y_3548_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___boxed(lean_object* v_as_3556_, lean_object* v_i_3557_, lean_object* v_stop_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_){
_start:
{
size_t v_i_boxed_3567_; size_t v_stop_boxed_3568_; lean_object* v_res_3569_; 
v_i_boxed_3567_ = lean_unbox_usize(v_i_3557_);
lean_dec(v_i_3557_);
v_stop_boxed_3568_ = lean_unbox_usize(v_stop_3558_);
lean_dec(v_stop_3558_);
v_res_3569_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(v_as_3556_, v_i_boxed_3567_, v_stop_boxed_3568_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_, v___y_3565_);
lean_dec(v___y_3565_);
lean_dec_ref(v___y_3564_);
lean_dec(v___y_3563_);
lean_dec_ref(v___y_3562_);
lean_dec_ref(v___y_3561_);
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3559_);
lean_dec_ref(v_as_3556_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(lean_object* v_as_3570_, size_t v_sz_3571_, size_t v_i_3572_, lean_object* v_b_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_){
_start:
{
lean_object* v___x_3582_; 
v___x_3582_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_as_3570_, v_sz_3571_, v_i_3572_, v_b_3573_, v___y_3575_);
return v___x_3582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___boxed(lean_object* v_as_3583_, lean_object* v_sz_3584_, lean_object* v_i_3585_, lean_object* v_b_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_){
_start:
{
size_t v_sz_boxed_3595_; size_t v_i_boxed_3596_; lean_object* v_res_3597_; 
v_sz_boxed_3595_ = lean_unbox_usize(v_sz_3584_);
lean_dec(v_sz_3584_);
v_i_boxed_3596_ = lean_unbox_usize(v_i_3585_);
lean_dec(v_i_3585_);
v_res_3597_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(v_as_3583_, v_sz_boxed_3595_, v_i_boxed_3596_, v_b_3586_, v___y_3587_, v___y_3588_, v___y_3589_, v___y_3590_, v___y_3591_, v___y_3592_, v___y_3593_);
lean_dec(v___y_3593_);
lean_dec_ref(v___y_3592_);
lean_dec(v___y_3591_);
lean_dec_ref(v___y_3590_);
lean_dec_ref(v___y_3589_);
lean_dec(v___y_3588_);
lean_dec_ref(v___y_3587_);
lean_dec_ref(v_as_3583_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(lean_object* v_00_u03b2_3598_, lean_object* v_x_3599_, size_t v_x_3600_, size_t v_x_3601_, lean_object* v_x_3602_, lean_object* v_x_3603_){
_start:
{
lean_object* v___x_3604_; 
v___x_3604_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_3599_, v_x_3600_, v_x_3601_, v_x_3602_, v_x_3603_);
return v___x_3604_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___boxed(lean_object* v_00_u03b2_3605_, lean_object* v_x_3606_, lean_object* v_x_3607_, lean_object* v_x_3608_, lean_object* v_x_3609_, lean_object* v_x_3610_){
_start:
{
size_t v_x_50884__boxed_3611_; size_t v_x_50885__boxed_3612_; lean_object* v_res_3613_; 
v_x_50884__boxed_3611_ = lean_unbox_usize(v_x_3607_);
lean_dec(v_x_3607_);
v_x_50885__boxed_3612_ = lean_unbox_usize(v_x_3608_);
lean_dec(v_x_3608_);
v_res_3613_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(v_00_u03b2_3605_, v_x_3606_, v_x_50884__boxed_3611_, v_x_50885__boxed_3612_, v_x_3609_, v_x_3610_);
return v_res_3613_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(uint8_t v_pu_3614_, uint8_t v_t_3615_, lean_object* v_i_3616_, lean_object* v_as_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_){
_start:
{
lean_object* v___x_3626_; 
v___x_3626_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_3614_, v_t_3615_, v_i_3616_, v_as_3617_, v___y_3619_, v___y_3622_);
return v___x_3626_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___boxed(lean_object* v_pu_3627_, lean_object* v_t_3628_, lean_object* v_i_3629_, lean_object* v_as_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_){
_start:
{
uint8_t v_pu_boxed_3639_; uint8_t v_t_boxed_3640_; lean_object* v_res_3641_; 
v_pu_boxed_3639_ = lean_unbox(v_pu_3627_);
v_t_boxed_3640_ = lean_unbox(v_t_3628_);
v_res_3641_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(v_pu_boxed_3639_, v_t_boxed_3640_, v_i_3629_, v_as_3630_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_);
lean_dec(v___y_3637_);
lean_dec_ref(v___y_3636_);
lean_dec(v___y_3635_);
lean_dec_ref(v___y_3634_);
lean_dec_ref(v___y_3633_);
lean_dec(v___y_3632_);
lean_dec_ref(v___y_3631_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8(lean_object* v_00_u03b2_3642_, lean_object* v_n_3643_, lean_object* v_k_3644_, lean_object* v_v_3645_){
_start:
{
lean_object* v___x_3646_; 
v___x_3646_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(v_n_3643_, v_k_3644_, v_v_3645_);
return v___x_3646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(lean_object* v_00_u03b2_3647_, size_t v_depth_3648_, lean_object* v_keys_3649_, lean_object* v_vals_3650_, lean_object* v_heq_3651_, lean_object* v_i_3652_, lean_object* v_entries_3653_){
_start:
{
lean_object* v___x_3654_; 
v___x_3654_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_depth_3648_, v_keys_3649_, v_vals_3650_, v_i_3652_, v_entries_3653_);
return v___x_3654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___boxed(lean_object* v_00_u03b2_3655_, lean_object* v_depth_3656_, lean_object* v_keys_3657_, lean_object* v_vals_3658_, lean_object* v_heq_3659_, lean_object* v_i_3660_, lean_object* v_entries_3661_){
_start:
{
size_t v_depth_boxed_3662_; lean_object* v_res_3663_; 
v_depth_boxed_3662_ = lean_unbox_usize(v_depth_3656_);
lean_dec(v_depth_3656_);
v_res_3663_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(v_00_u03b2_3655_, v_depth_boxed_3662_, v_keys_3657_, v_vals_3658_, v_heq_3659_, v_i_3660_, v_entries_3661_);
lean_dec_ref(v_vals_3658_);
lean_dec_ref(v_keys_3657_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19(lean_object* v_00_u03b2_3664_, lean_object* v_x_3665_, lean_object* v_x_3666_, lean_object* v_x_3667_, lean_object* v_x_3668_){
_start:
{
lean_object* v___x_3669_; 
v___x_3669_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(v_x_3665_, v_x_3666_, v_x_3667_, v_x_3668_);
return v___x_3669_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpValue(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_ConstantFold(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpValue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_ConstantFold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpValue(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_ConstantFold(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_SimpValue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_ConstantFold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
}
#ifdef __cplusplus
}
#endif
